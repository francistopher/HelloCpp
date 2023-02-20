#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
    if (argc == 2)
    {
        // will contain a line from the file/lyrics
        string lyricLine;
        // load file contents as TheFile
        ifstream TheFile("./lyrics.txt");
        char stacy[6] = "Stacy";
        string out = "";
        // iterates through every lyric line
        while (getline(TheFile, lyricLine))
        {
            // traverse through every character of the lyric line
            for (int i = 0, j = 0; i < lyricLine.length(); i++)
            {
                // to determine which are slim shady // IGNORE TERMINATING CHARACTER
                while (lyricLine[i + j] == stacy[j] && stacy[j] != '\0')
                {
                    j++;
                }
                // replace Slim Shady
                if (j == 5)
                {
                    // with the name
                    out += argv[1];
                    i += 5;
                    j = 0;
                }
                // add the rest non Slim Shady
                out +=  lyricLine[i];
            }
            out += '\n';
        }
        cout << out;
        TheFile.close();
    }
    else {
        cout << "Enter a single name as your command line argument!" << endl;
    }
    return 0;
}
