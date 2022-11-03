#include <iostream>

using namespace std;
int reversedigit(int N)
{
    int rem, M;
    while (N != 0)
    {
        rem = N % 10;
        M = (M * 10) + rem;
        N = N / 10;
    }
    cout << "Reverse Number is :" << endl;
    cout << "M = " << M;
    return 0;
}

int main()
{
    int N;
    cout << "Enter an integer N :" << endl;
    cin >> N;
    if (N > 0 && N < 99999)
    {
        reversedigit(N);
    }
    else
    {
        cout << "Enter valid number" << endl;
    }
}

/*output-
Enter an integer N :
123
Reverse Number is :
M = 321

Enter an integer N :s
10345
Reverse Number is :
M = 54301

Enter an integer N :
100
Reverse Number is :
M = 1
*/