#include <iostream>
using namespace std;

class Integer
{
private:
    int L1[10], L2[10], N, M, i;

public:
    void getValue()
    {
        cout << "Enter the size of the List : " << endl;
        cin >> N;
        cout << "Enter the elements of the List L1 : ";
        for (int i = 0; i < N; i++)
        {
            cin >> L1[i];
            // cout << "("<< L1[i] << ","<< ")" << endl;
        }
        cout << "L1 = ( ";
        for (int i = 0; i < N; i++)
        {
            // cin >> L1[i];
            cout << L1[i] << ",";
        }
        cout << ")" << endl;
        cout << "Enter the Integer M:" << endl;
        cin >> M;
    }
    void multiplynumber()
    {
        for (int i = 0; i < N; i++)
        {
            L2[i] = L1[i] * M;
        }
        cout << "L2 = ( ";
        for (int i = 0; i < N; i++)
            cout << L2[i] << ",";
        cout << ")" << endl;
    }
};

int main()
{
    Integer I;
    I.getValue();
    I.multiplynumber();
}

/*output-
Enter the size of the List :
4
Enter the elements of the List L1 : 4 2 1 8
L1 = ( 4,2,1,8)
Enter the Integer M:
5
L2 = ( 20,10,5,40)
*/