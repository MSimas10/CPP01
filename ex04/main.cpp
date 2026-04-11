#include <fstream>
#include <iostream>
#include <string>


//std::ifstream: Pro čtení ze souboru (input file stream).

//std::ofstream: Pro zápis do souboru (output file stream).

/*std::string:

find(): Najde pozici prvního výskytu podřetězce.

substr(): Vytvoří nový řetězec z části původního řetězce.

Operátor + nebo append(): Pro spojování řetězců dohromady.*/

std::string myreplace( std:: string line, const std::string& from, const std::string& to)

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Error: ./replace <filename> <search> <replace>" << std::endl; 
        return(1);
    }

    //opening the file
    std::ifstream inFile(argv[1]);
    if (!inFile.is_open())
    {
        std::cout << " Error: Could not open the file"<< argv[1] << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::ofstream outFile((filename + ".replace").c_str());


}