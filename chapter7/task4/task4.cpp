#include <iostream>
long double probability(unsigned numbers, unsigned picks, unsigned megaTotal);
int main()
{
    using namespace std;
    double total, choices, megaTotal;
    cout << "Enter the total number of choices on the game card and\n"
            "the number of picks allowed:\n";
    while ((cin >> total >> choices >> megaTotal) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices, megaTotal);      // compute the odds
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks, unsigned megaTotal)
{
    long double result = 1.0;  // here come some local variables
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ; 
    return result * megaTotal;
}

