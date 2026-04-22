#include <iostream>
#include <fstream>
#include <string>

// Funkce pro nahrazení - nyní používá logiku erase a insert
static std::string replaceLine(std::string line, const std::string& s1, const std::string& s2)
 {
    size_t pos = 0;

    if (s1.empty()) 
    {
        return line;
    }

    // in the cycles we are changing directly the "line", by deleting old string and adding the new string, last one is jump over the added part
    // odstrani stary podretezec, vlozi novy podretezec a preskoci vlozenou cast
    // hleda v retezci vyskyt na s1 od indexu pos., pokud najde, vrati pozici (index) prvniho znaku
    while ((pos = line.find(s1, pos)) != std::string::npos) 
    {
        line.erase(pos, s1.length()); // ✂️ Odstraní starý podřetězec, presny pocet znaku pocinaje pozici pos
        line.insert(pos, s2);         // 📥 Vloží nový podřetězec, vlozi retezec s2 na konkretni pozici pos. zbytek textu puvodniho textu se posune doprava
        pos += s2.length();           // 🏃‍♂️ Přeskočí vloženou část, posuneme se za to vlozene slovo
    }
    return line;
}

// Funkce pro koordinaci čtení a zápisu
static void replace(char *argv[], std::ifstream &inFile, std::ofstream &outFile)
{
    std::string line;
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    while (std::getline(inFile, line)) 
    {
        outFile << replaceLine(line, s1, s2) << std::endl;
    }

}

int main(int argc, char *argv[]) {
    if (argc != 4)
    {
        std::cerr << "Use: ./replace <filename> <search> <replace>" << std::endl;
        return (1);
    }

    //purpose is to read from a file, open to pipe to read a file
    //.is_open() - zdali se potrubi podarilo napojit na soubor?
    std::ifstream inFile(argv[1]);
    if (!inFile.is_open())
    {
        std::cerr << "Error: can't open file" << std::endl;
        return (1);
    }

    std::string outFileName = std::string(argv[1]) + ".replace";
    
    std::ofstream outFile(outFileName.c_str());
    if (!outFile.is_open()) 
    {
        std::cerr << "Error: Could not create output file" << std::endl;
        inFile.close();
        return (1);
    }

    replace(argv, inFile, outFile);

    inFile.close();
    outFile.close();
    return (0);
}