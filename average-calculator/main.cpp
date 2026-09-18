#include <iostream>

using namespace std;

struct Subject
{
    int scores;
    int total;
};


void fail(int& n)
{
    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Wrong format only digits are allowed.\n\n";
        std::cout << "Enter numbers only : ";
        std::cin >> n;
    }
}



int main()
{
    int N;
    cout << "How Many Subjects: ";
    cin >> N;
    Subject sub[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Subject " << i + 1 << "- Obtained Marks: ";
        cin >> sub[i].scores;
        fail(sub[i].scores);
        cout << "Subject " << i + 1 << "- Total Marks: ";
        cin >> sub[i].total;
        fail(sub[i].total);
    }
    int sum = 0;
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        sum += sub[i].scores;

        max += sub[i].total;
    }
    cout << "Total Obtained Marks: ";
    cout << sum << endl;
    cout << "Total Marks: ";
    cout << max << endl;
    cout << "Average: " << (double)sum / max * 100 << "%";
    return 0;
}
