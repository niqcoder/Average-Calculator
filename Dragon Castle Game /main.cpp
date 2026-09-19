#include <iostream>

#include <string>

#include <cstdlib>

#include <ctime>

#include <cctype>

using namespace std;

void puzzle(string c);
void fight();

int main()

{
    cout << "                          DRAGON CAVE \n\n";
    cout << "One Thousand years ago. An Anamoly almost destroyed whole mankind.\n\n";
    cout << "At that time greatest sorcerers from all around the world gathered to stop it.\n\n";
    cout << "But they stood no chance against it. At that moment they decided to Make a Great Sacrifice to protect Humanity.\n\n";
    cout << " They gathered their life energy and combined it all together and released it all at once.\n\n";
    cout << "The world was saved, but we lost our protecters. People say their souls are still wandering in a cave.\n\n";
    cout << " A cave so dark, so otherwordly, so far, so hidden.\n\n";
    cout << "No one could ever reach that cave and those who did could never escape it.\n\n";
    string x;
    string c = "Cave Voice:";
    cout << "You see a cave and you impatiently try to go in.\n\n";
    cout << "Wind blocks your path.\n\n";
    cout << "-------WELCOME TO DRAGON CASTLE-----\n";
    cout << "\n\n";
    cout << c << " What is Your Name Traveler ?  ";
    getline(cin, x);
    cout << c << " Haha, " << x << "."
         << " Another Foolish Human.Hahaha\n";
    cout << "\n\n";
    string a = "1: What does that means ?\n";
    string b = "2: ......\n";
    string m = "3: Who are you ?";
    cout << a << b << m << "\n\n";

    char choice;
    cout << "Enter your choice:  ";
    cin >> choice;
    while (true)
    {
        if (choice == '1')
        {
            cout << c << "Haha! Curiosity, I Like that.";
            break;
        }
        else if (choice == '2')
        {
            cout << c << "Hmm. No questions, I see. Hahhaa!!\n\n";
            break;
        }
        else if (choice == '3')
        {
            cout << "I am.....(Inaudible)...Hahaha.\n\n";
            break;
        }
        else
        {
            cout << " Enter your choice Fool. ";
            cin >> choice;
        }
    }
    puzzle(c);
    cout << c << "You seem different than others. Haha. Just like him..... \n\n";

    // fighting Mode //
    string en = "1: Enough Talking Get ready to fight.\n";
    cout << en;

    string it = "2: It was so easy.That's all you have got ? \n";
    cout << it;

    string y = "3: .....(You charge in).\n";
    cout << y;
    string z = "4: Who is 'Him'.\n";
    cout << z;
    cout << "Enter Your Choice: ";
    char ch;
    cin >> ch;
    while (true)
    {
        if (ch == '1')
        {
            cout << " Hahaha, Thought You'd Never ask.\n";
            break;
        }
        else if (ch == '2')
        {
            cout << " How Dare You...Now get ready to fight.\n";
            break;
        }
        else if (ch == '3')
        {
            cout << "So impatient to fight Huh. Hahah, Bring it on kid.\n\n";
            break;
        }
        else if (ch == '4')
        {
            cout << c << "My Drago will asnwer you.Hehe.\n\n";
            cout << "(Creater: just fight already lol😂. There is no way out😅.\n\n";
            break;
        }
        else
        {
            cout << "Enter Correctly.🙄\n";
            cin >> ch;
        }
    }
    cout << " A Dragon Roars\n\n";
    cout << "The air went cold.\n\n";
    cout << "Today Your Fate is gonna decide..\n\n";
    cout << "Choose Your Path.....\n\n"
         << "Embark on new Journey.....\n\n";
    cout << "or leave everything here.........\n\n";
    cout << " Step forward and unlock Ancient Heroes Secrets\n\n";
    cout << "Or step back and always stay a normal human\n\n";
    cout << "save your loved ones from unseen foeces and dangers\n\n";
    cout << "or let someone else DESTROY your loved ones......\n\n";
    cout << "Make Your Choice...\n\n";
    string CHOICE;
    string r = "Run away....";
    string f = "Fight and Conqure ";
    cout << r << endl
         << endl
         << "OR\n\n"
         << f;
    cout << "(Fight or Run)";
    cout << "\n\n  CHOOSE : ";
    cin >> CHOICE;
    for (char &c : CHOICE)
    {
        c = tolower(c);
    }

    while (true)
    {
        if (CHOICE == "run")
        {
            cout << "Game over....You lost everything...That thing got out and combined the powers of lost heros and destroyed the world......you lost!!";
            return 0;
        }
        else if (CHOICE == "fight")
        {
            cout << "Congratulations!! You can play furthur.....next year lol ()\n\n";
            break;
        }
        else
        {
            cout << " don't take long your people Needs you....\n\n"
                 << " CHOOSE :: ";
            cin >> CHOICE;
        }
    }
    cout << "NOW FIGHT ME YOU MORTAL!\n\n";

    fight();
}

void puzzle(string c)

{
    cout << c << ":  If You want to go further, you have to solve a puzzle.\n\n";

    srand(static_cast<unsigned int>(time(0)));

    int guess;
    int tries = 3;
    int at = 1;
    cout << " Guess a Number between 0 and 10.\n";
    cout << "You have " << tries << " Tries. Fail, and stuck in loop forever. HAAAHAAHAAAAA\n";
    while (true)

    {
        int key = rand() % 9 + 1;
        for (at = 1; at <= tries; at++)
        {
            cout << "Attempt: " << at << "/" << tries << " - Enter your guess:  ";
            cin >> guess;

            if (guess == key)
            {
                cout << c << "Hmm. You got it right. Not Bad.\n";

                return;
            }

            else if (guess < key)
            {
                cout << c << " Too Low. Haha\n";
            }
            else if (guess > key)
            {
                cout << c << "Hahahaa! Too high.\n";
            }
        }
        cout << c << "Haahaa. Foolish Human. You ran out of tries. Now you are stuck in a loop. Hahahaa\n";
        cout << c << "The answer was " << key << ". \n\n";
    }
}

void fight()
{
    int hpen = 600;
    int hppl = 160;
    string attack;
    int attacks[] = {15, 25, 0, 0, 300};
    int spcout = 0;
    while (hpen > 0 && hppl > 0)
    {
        cout << "Attack : Water(1), Fire Attack(2), dodge(3),block(4), special move(5):   ";
        cin >> attack;
        cout << endl;

        if (attack == "5")
        {
            if (spcout == 0 || spcout < 0)
            {
                cout << "Special Move activated...\n";
                hpen -= attacks[4];
                spcout = 3;
                cout << endl
                     << hpen << endl;
                cout << "Enemy also response with furious attack.....\n";
                hppl -= 40;
                cout << hppl << endl;

                continue;
            }
            else
            {
                cout << "Special move on cool down. Wait for it to recharge\n\n";
                continue;
            }
        }
        else if (attack == "1")
        {
            cout << "You attack with water magic\n\n";
            hpen -= attacks[0];
            cout << endl
                 << hpen << endl;
            cout << "Enemy Attacks Back.\n";
            hppl -= 10;
            cout << hppl << endl;
        }
        else if (attack == "2")
        {
            cout << "Fire Magic..\n\n";
            hpen -= attacks[1];
            cout << endl
                 << hpen << endl;
            cout << "Enemy Fires Back\n";
            hppl -= 20;
            cout << hppl << endl;
        }
        else if (attack == "3")
        {
            cout << "AhHa ! You are good at dodging" << endl;
            continue;
        }
        else if (attack == "4")
        {
            cout << "How Fool. Hahaha" << endl;
            hppl -= 4;
            cout << hpen << endl
                 << hppl << "\n\n";
        }
        else
        {
            cout << "Unidentified Intruction" << endl;
            cout << "Choose your attack" << endl;
            cout << "\n\n";
        }
        if (spcout > 0)
        {
            spcout--;
        }
    }
}
