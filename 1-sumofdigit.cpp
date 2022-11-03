#include <iostream>

using namespace std;
int calculatesum(int N)
{
    int sum = 0;
    int rem;
    while (N != 0)
    {
        rem = N % 10;
        sum = sum + rem;
        N = N / 10;
    }
    cout << "Sum of digit = " << sum << endl;
    return 0;
}

int main()
{
    int N;
    cout << "Enter an integer N :" << endl;
    cin >> N;
    if (N > 0 && N < 99999)
    {
        calculatesum(N);
    }
    else
    {
        cout << "Enter valid number" << endl;
    }
}

/*output-
Enter an integer N :
123
Sum of digit = 6

Enter an integer N :
10123
Sum of digit = 7
*/