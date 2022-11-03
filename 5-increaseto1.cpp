#include <iostream>
using namespace std;
void increaseby1(int N)
{
    int rem, M = 0, p = 1;
    while (N > 0)
    {
        rem = N % 10;
        if(rem == 9)
        { 
             rem = 0;
         }
         else
         {
             rem += 1;
         }
        M += p * rem;
        p *= 10;
        N /= 10;
    }

    cout <<M;
}
int main()
{
    int N;
    cout << "Enter the 5 digit Number : " << endl;
    cin >> N;
    if (N > 9999 && N < 99999)
    {

        cout << "M ";
        increaseby1(N);
    }
    else
        cout << "Invalid Number" << endl;
    return 0;
}

/*output-
Enter the 5 digit Number :
12345
M 23456

Enter the 5 digit Number : 
56789
M 67890
*/