#include <iostream>
using namespace std;

int Profit(int CP, int SP)
{
    int profit = SP - CP;
    cout << "PROFIT = " << profit << endl;

    return 0;
}

int Loss(int CP, int SP)
{
    int loss = SP - CP;
    cout << "LOSS = " << loss << endl;

    return 0;
}

int main()
{
    int SP, CP;
    cout << "Enter Cost Price :" << endl;
    cin >> CP;

    cout << "Enter Selling Price :" << endl;
    ;
    cin >> SP;

    if (SP > CP)
    {
        Profit(CP, SP);
    }
    else if (SP == CP)
    {
        cout << "No Profit No Loss" << endl;
    }
    else
    {
        Loss(SP, CP);
    }
}

/*output-
Enter Cost Price :
500
Enter Selling Price :
700
PROFIT = 200

Enter Cost Price :
500
Enter Selling Price :
450
LOSS = 50
*/