#include <iostream>
#include <fstream>
#include <string>

int main (int argc, char **argv) {
    std::ifstream infile;
    std::ofstream outfile;
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    size_t len_s1 = s1.length();
    size_t len_s2 = s2.length();
    std::string line;
    size_t pos = 0;

    if (argc != 4)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }
    infile.open(filename);
	outfile.open(filename + ".replace");
    while (std::getline(infile, line))
    {
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.replace(pos, len_s1, s2);
            pos += len_s2;
        }
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
    return 0;
}
