#include <fstream>
#include <cstring>
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 4)
        return (1);
    std::string in = argv[1];
    std::ifstream infile(argv[1]);
    std::ofstream outfile((in + ".replace").c_str());//outfile take char * as parameter
    std::string line;
    size_t pos;
    size_t i;
    int count, j;
    if (!infile.is_open() || !outfile.is_open())
    {
        std::cerr << "Failed to open file." << std::endl;
        return (1);
    }
    j = strlen(argv[2]);
    while(std::getline(infile, line))
    {
        pos = line.find(argv[2]);
        if (pos == std::string::npos)
            outfile << line;
        else
        {
            while (pos != std::string::npos) // loop to replace all occurrences
            {
                i = 0;
                count = 0;
                while (i < pos)
                    outfile << line[i++];
                outfile << argv[3];
                while (j > count)
                {
                    count++;
                    pos++;
                }
                line = line.substr(pos);
                pos = line.find(argv[2]);
            }
            i = 0;
            while (i < line.size())
                outfile << line[i++];
        }
        if (!infile.eof())
            outfile << std::endl;
    }
    return (0);
}


