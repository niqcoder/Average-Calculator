#include <iostream>
#include <string>
#include <cctype>
#include <limits>

using namespace std;

bool Draw(char a[3][3]);

bool won(char b[3][3], char p);

int main()
{
    char player_1 = 'X';
    char player_2 = 'O';
    char playing = player_1;
    bool trywin = true;
    string CHOICE;
    int cell;
    char box[3][3];

    cout << "                      ___-----WELCOME-----___\n\n";
    cout << "                           Tic - Tac - Toe\n\n";

    while (true)
    {
        if (trywin == false)
        {
            trywin = true;
        }
        cout << " Enter Start to Play and End to Exit : ";
        cin >> CHOICE;
        cout << endl;
        for (char &c : CHOICE)
        {
            c = tolower(c);
        }
        if (CHOICE == "end")
        {
            cout << "Thanks for Playing ";
            return 0;
        }
        if (CHOICE == "start")
        {
            cout << "Welcom to the Game 🎮\n\n ";
            cout << "Start Playing \n\n";

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    box[i][j] = ' ';
                    cout << box[i][j];
                    if (j < 2)
                        cout << " | ";
                }
                cout << endl;
                if (i < 2)
                    cout << "_________\n";
            }
            cout << endl;

            while (trywin)
            {
                int row = 0;
                int col = 0;
                while (true)
                {
                    cout << playing << "\'s Turn -> "
                         << "Enter a cell (1 to 9) : ";
                    cin >> cell;
                    cout << endl;
                    if (cin.fail())
                    {
                        cout << "Warning! wrong input\n\n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        continue;
                    }
                    if (cell <= 0)
                    {
                        cout << " Please Choose between 0 and 9\n\n";
                        continue;
                    }
                    else if (cell > 9)
                    {
                        cout << "Please Choose between 0 and 9\n\n";
                        continue;
                    }
                    row = (cell - 1) / 3;
                    col = (cell - 1) % 3;
                    if (box[row][col] == ' ')
                    {
                        break;
                    }
                    else
                    {
                        cout << "Already taken. Choose empty one\n\n";
                    }
                }
                box[row][col] = playing;

                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << box[i][j];
                        if (j < 2)
                            cout << " | ";
                    }
                    cout << endl;
                    if (i < 2)
                        cout << "_________\n";
                }
                cout << endl;

                if (won(box, playing) == true)
                {
                    cout << playing << " Wins !!\n\n";
                    trywin = false;
                }

                else if (Draw(box) == true)
                {
                    cout << "It\'s a Draw\n\n";
                    trywin = false;
                }

                playing = (playing == player_1) ? player_2 : player_1;
            }
        }
    }
    return 0;
}

bool Draw(char a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == ' ')
                return false;
        }
    }
    return true;
}

bool won(char b[3][3], char p)
{
    for (int i = 0; i < 3; i++)
    {
        if (b[i][0] == p and b[i][1] == p and b[i][2] == p)
            return true;
        if (b[0][i] == p and b[1][i] == p and b[2][i] == p)

            return true;
    }
    if (b[0][0] == p and b[1][1] == p and b[2][2] == p)
        return true;
    if (b[0][2] == p and b[1][1] == p and b[2][0] == p)
        return true;

    return false;
}
