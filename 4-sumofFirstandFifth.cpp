#include <iostream>
using namespace std;

int FirstDigit(int N)
{
    int firstdigit;
    while (N >= 10)
    {
        N = N / 10;
    }
    return N;
}

int FifthDigit(int N)
{
    int fifthdigit = N % 10;
    return fifthdigit;
}
int main()
{
    int N, sum, fifthdigit, firstdigit;
    cout << "Enter the 5 digit integer" << endl;
    cin >> N;
    if (N > 9999 & N < 99999)
    {
        fifthdigit = FifthDigit(N);
        firstdigit = FirstDigit(N);
        sum = firstdigit + fifthdigit;
        cout << "Sum of First and Fifth digit is :" << sum << endl;
    }
    else
        cout << "Enter the 5 digit number" << endl;

    return 0;
}

/*output-
Enter the 5 digit integer
12345
Sum of First and Fifth digit is :6

Enter the 5 digit integer
91912
Sum of first and fifth digit :11
*/
