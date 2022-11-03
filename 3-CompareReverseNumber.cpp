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
    cout << "M = " << M << endl;
    
    if (M > N)
    {
        cout << "M is Greater than N" << endl;
    }
    else if (M == N)
    {
        cout << "Both are same" << endl;
    }
    else
    {
        cout << "N is Greater than M" << endl;
    }

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
1234
Reverse Number is :
M = 4321
M is Greater than N
*/