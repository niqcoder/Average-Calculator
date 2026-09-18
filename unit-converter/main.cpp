#include <iostream>
#include <string>
#include <cctype>
#include <limits>

using namespace std;

struct Unit
{
    string units;
    double values;
};

int Distance();
int Prefix();
int Weight();
int Temperature();

int main()
{
    while (true)
    {
        string CHOICE;
        cout << "1. Prefixes Converter.\n"
             << "2. Distance Converter.\n"
             << "3. Weight Converter.\n"
             << "4. Temperature Converter.\n"
             << "0. Enter 0 to exit.\n";
        cout << "Enter Your Choice : ";
        cin >> CHOICE;
        cout << "\n";
        if (CHOICE == "1")
        {
            Prefix();
        }
        else if (CHOICE == "2")
        {
            Distance();
        }
        else if (CHOICE == "3")
        {
            Weight();
        }
        else if (CHOICE == "4")
        {
            Temperature();
        }
        else if (CHOICE == "0")
        {
            cout << "Thanks for Using\n";
            return 0;
        }
    }
}

int Distance()
{
    cout << "       ______------DISTANCE CONVERTER------______ \n\n";
    Unit d[] = {{"km", 1000}, {"m", 1}, {"mile", 1609.344}, {"yard", 0.9144}, {"foot", 0.3048}, {"inch", 0.0254}, {"cm", 0.01}, {"mm", 0.001}};

    double factor = 0;
    double factor_1 = 0;
    double distance;
    string forward;
    while (true)
    {
        cout << "Enter Start to continue and Exit to leave. ";
        cin >> forward;
        for (char &c : forward)
        {
            c = tolower(c);
        }
        cout << endl;
        if (forward == "exit")
        {
            cout << " Thanks For Using. \n\n";
            return 0;
        }
        else if (forward == "start")
        {
            cout << "                Welcom to Distance Converter !!\n\n";
            cout << "Enter Distance or Length : ";
            cin >> distance;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter Distance : ";
                cin >> distance;
            }
            cout << endl;
            string fromdist;
            bool find = true;

            while (find)
            {
                cout << "Convert Distance from (km, m, cm, mm, mile, yard, foot, inch) : ";
                cin >> fromdist;
                for (int i = 0; i < 8; i++)
                {
                    if (d[i].units == fromdist)
                    {
                        factor = d[i].values;
                        find = false;
                    }
                }
                if (find)
                {
                    cout << "Unit couldn't be found or wasn't added\n\n";
                }
            }
            cout << endl;
            string todist;
            find = true;

            while (find)
            {
                cout << "To Distance : ";
                cin >> todist;
                for (int i = 0; i < 8; i++)
                {
                    if (d[i].units == todist)
                    {
                        factor_1 = d[i].values;
                        find = false;
                    }
                }
                if (find)

                    cout << "Please pick from list";
            }

            double equal = distance * factor;
            double results = equal / factor_1;
            cout << distance << " " << fromdist << " = " << results << " " << todist << "\n\n";
        }
        else
        {
            cout << "Command not found!\n\n";
        }
    }
}

int Prefix()
{
    Unit p[] = {
        {"quetta", 1e30},
        {"ronna", 1e27},
        {"yotta", 1e24},
        {"zetta", 1e21},
        {"exa", 1e18},
        {"peta", 1e15},
        {"tera", 1e12},
        {"giga", 1e9},
        {"mega", 1e6},
        {"kilo", 1e3},
        {"hecto", 1e2},
        {"deca", 1e1}, 
        {"deci", 1e-1},
        {"centi", 1e-2},
        {"milli", 1e-3},
        {"micro", 1e-6},
        {"nano", 1e-9},
        {"pico", 1e-12},
        {"femto", 1e-15},
        {"atto", 1e-18},
        {"zepto", 1e-21},
        {"yocto", 1e-24},
        {"ronto", 1e-27},
        {"quecto", 1e-30},
    };
    cout << "       ______------PREFIXIES CONVERTER------______ \n\n";
    string CONTINUE;
    while (true)
    {
        cout << "Enter Start to continue and Exit to leave. ";
        cin >> CONTINUE;
        for (char &c : CONTINUE)
        {
            c = tolower(c);
        }
        cout << endl;
        if (CONTINUE == "exit")
        {
            cout << "Thanks For Using.\n\n";
            return 0;
        }
        else if (CONTINUE == "start")
        {
            double factor = 0;
            double factor_1 = 0;
            double value;

            cout << "Enter Value : ";
            cin >> value;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter Value : ";
                cin >> value;
            }
            cout << endl;
            string frompre;
            bool find = true;
            while (find)
            {
                cout << "Convert Prefix from (quetta, ronna, yotta, zetta, exa, peta, tera, giga, mega, kilo, hecto, deca, deci, centi, milli, micro, nano, pico, femto, atto, zepto, yocto, ronto, quecto) : ";
                cin >> frompre;
                cout << endl
                     << endl;
                for (int i = 0; i < 25; i++)
                {
                    if (p[i].units == frompre)
                    {
                        factor = p[i].values;
                        find = false;
                    }
                }
                if (find)
                    cout << "Invalid input. Please enter valid Prefix.\n\n";
            }
            string topre;
            find = true;
            while (find)
            {
                cout << "To Prefix : ";
                cin >> topre;
                for (int i = 0; i < 25; i++)
                {
                    if (p[i].units == topre)
                    {
                        factor_1 = p[i].values;
                        find = false;
                    }
                }
                if (find)
                {
                    cout << "Prefix wasn't found. Kindly check your input. ";
                }
            }

            double equals = value * factor;
            double result = equals / factor_1;

            cout << value << " " << frompre << " = " << result << " " << topre << "\n\n";
        }
        else
        {
            cout << "Please Enter Start or Exit\n\n";
        }
    }
}

int Weight()
{
    cout << "                WEIGHT CONVERTER         \n\n";
    Unit w[8] = {{"mg", 1e-3}, {"g", 1}, {"kg", 1e3}, {"tonne", 1e6}, {"ounce", 28.3495}, {"pound", 453.592}, {"stone", 6350.29}, {"ton", 907185}};
    double factor = 0;
    double factor_1 = 0;
    double weight;

    string GO;

    while (true)
    {
        bool find = true;
        cout << "Enter Start to Go and Exit to Stop : ";
        cin >> GO;
        for (char &c : GO)
        {
            c = toupper(c);
        }
        cout << endl;
        if (GO == "EXIT")
        {
            cout << "Thanks for Using.\n\n";
            return 0;
        }
        else if (GO == "START")
        {
            cout << "                Welcom To Weight Converter !!\n\n";
            cout << "Enter Weight : ";
            cin >> weight;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter Weight : ";
                cin >> weight;
            }
            cout << endl;
            string fromwe;
            while (find)
            {
                cout << "Convert Weight unit from(mg, g, kg, tonne, ounce, pound, stone, ton) : ";
                cin >> fromwe;
                cout << endl;
                for (int i = 0; i < 8; i++)
                {
                    if (w[i].units == fromwe)
                    {
                        factor = w[i].values;
                        find = false;
                    }
                }
                if (find)
                {
                    cout << "Unit wasn't found.\n\n";
                }
            }
            string towe;
            find = true;
            while (find)
            {
                cout << "To unit : ";
                cin >> towe;
                cout << endl;
                for (int i = 0; i < 8; i++)
                {
                    if (w[i].units == towe)
                    {
                        factor_1 = w[i].values;
                        find = false;
                    }
                }
                if (find)
                {
                    cout << "Unit wasn't found.\n\n";
                }
            }

            double equals = weight * factor;
            double result = equals / factor_1;
            cout << weight << " " << fromwe << " = " << result << " " << towe << "\n\n";
        }
        else
        {
            cout << "Please Enter Start or Exit\n\n";
        }
    }
}

int Temperature()
{
    cout << "       ______------Temperature Converter------_______ \n\n";
    double C, K, F;
    string entry;
    while (true)
    {
        cout << "Enter Start to Proceed and Exit to Cease : ";
        cin >> entry;
        for (char &c : entry)
        {
            c = tolower(c);
        }
        cout << endl;
        if (entry == "exit")
        {
            cout << "Thanks For Using.\n\n";
            return 0;
        }
        else if (entry == "start")
        {
            cout << "                Welcom to Temperature Converter\n\n";
            string convert;
            cout << "1. Celsius To Fahrenheit.\n"
                 << "2. Fahrenheit To Celsius.\n"
                 << "3. Kelvin To Celsius.\n"
                 << "4. Kelvin to Fahrenheit.\n"
                 << "5. Celsius To Kelvin.\n"
                 << "6. Fahrenheit To Kelvin.\n\n";

            cout << "Enter Your Choice : ";
            cin >> convert;
            cout << endl;
            if (convert == "1")
            {
                cout << "Enter Celsius : ";
                cin >> C;
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Wrong Input Type:";
                    cout << "\n\n";
                    cout << " Enter Celsius : ";
                    cin >> C;
                }
                cout << endl;
                F = (C * 9 / 5) + 32;

                cout << C << "  Celsius  =  " << F << " Fahrenheit.\n\n";
            }
            else if (convert == "2")
            {
                cout << " Enter Fahrenheit : ";
                cin >> F;
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Wrong Input Type:";
                    cout << "\n\n";
                    cout << " Enter Fahrenheit : ";
                    cin >> F;
                }
                cout << endl;

                C = (F - 32) * 5 / 9;

                cout << F << "  Fahrenheit =  " << C << " Celsius.\n\n";
            }
            else if (convert == "3")
            {
                cout << " Enter Kelvin : ";
                cin >> K;
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Wrong Input Type:";
                    cout << "\n\n";
                    cout << " Enter Kelvin : ";
                    cin >> K;
                }
                cout << endl;

                C = K - 273.15;

                cout << K << " Kelvin =  " << C << " Celsius.\n\n";
            }
            else if (convert == "4")
            {
                cout << " Enter Kelvin : ";
                cin >> K;
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Wrong Input Type:";
                    cout << "\n\n";
                    cout << " Enter Kelvin : ";
                    cin >> K;
                }
                cout << endl;

                F = ((K - 273.15) * 1.8) + 32;

                cout << K << " Kelvin  =  " << F << "  Fahrenheit.\n\n";
            }
            else if (convert == "5")
            {
                cout << "Enter Celsius : ";
                cin >> C;
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Wrong Input Type:";
                    cout << "\n\n";
                    cout << " Enter Celsius : ";
                    cin >> C;
                }
                cout << endl;

                K = C + 273.15;

                cout
                    << C << " Celsius  =  " << K << " Kelvin.\n\n";
            }
            else if (convert == "6")
            {
                cout << " Enter Fahrenheit : ";
                cin >> F;
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Wrong Input Type:";
                    cout << "\n\n";
                    cout << " Enter Fahrenheit : ";
                    cin >> F;
                }
                cout << endl;

                K = ((F - 32) / 1.8) + 273.15;

                cout
                    << F << " Fahrenheit =  " << K << " Kelvin.\n\n";
            }
            else
            {
                cout << " Well Done. You still Managed to make a mistake. 👍\n\n";
            }
        }
        else
        {
            cout << " Seriously...Choose right Command 🙄\n\n";
        }
    }
}
