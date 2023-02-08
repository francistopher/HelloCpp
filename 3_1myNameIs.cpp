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
        ifstream TheFile("./myNameIs.txt");
        char slimShady[11] = "Slim Shady";
        string out = "";
        // iterates through every lyric line
        while (getline(TheFile, lyricLine))
        {
            // traverse through every character of the lyric line
            for (int i = 0, j = 0; i < lyricLine.length(); i++)
            {
                // to determine which are slim shady // IGNORE TERMINATING CHARACTER
                while (lyricLine[i + j] == slimShady[j] && slimShady[j] != '\0')
                {
                    j++;
                }
                // replace Slim Shady
                if (j == 10)
                {
                    // with the name
                    out += argv[1];
                    i += 10;
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
