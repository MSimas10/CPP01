#include <iostream>
#include <fstream>
#include <string>

//replace logic 
static std::string replaceLine(std::string line, const std::string& s1, const std::string& s2)
 {
    size_t pos = 0;

    if (s1.empty()) 
    {
        return line;
    }

    // The program finds a match, replaces it with new text, and jumps past it to safely continue searching.
    while ((pos = line.find(s1, pos)) != std::string::npos) 
    {
        line.erase(pos, s1.length()); // erase old
        line.insert(pos, s2);         // put new one on the position pos
        pos += s2.length();           // jump over the new one
    }
    return line;
}

// fnc for coordination reading and writing
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
    std::ifstream inFile(argv[1]);
    if (!inFile.is_open())
    {
        std::cerr << "Error: can't open file" << std::endl;
        return (1);
    }

    //new file.replace
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