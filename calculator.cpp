#include <iostream>
using namespace std;
int main()
{
    int digit1, digit2;
    double answer;
    char calculation;
    cout << "give digit 1";
    cin >> digit1;

    cout << "what u want to do";
    cin >> calculation;
    cout << "give digit 2";
    cin >> digit2;
    if (calculation == '+')
    {
        answer = digit1 + digit2;
    }
    else if (calculation == '-')
    {
        answer = digit1 - digit2;
    }

    else if (calculation == '*')
    {
        answer = digit1 * digit2;
    }
    else if (calculation == '/')
    {
        answer = digit1 / digit2;
    }

    cout << answer;
    return 0;
}
