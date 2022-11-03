#include <iostream>
#include <vector>
using namespace std;

class Integer
{
private:
    int L1[10], N, D;
    vector<int> L2;

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
        cout << "Enter the Integer D:" << endl;
        cin >> D;
    }
    void Dividenumber()
    {
        for (int i = 0; i < N; i++)
        {
            int L = L1[i] % D;
            if (L == 0)
            {
                L2.push_back(L1[i]);
            }
        }
        cout << "L2 = ( ";
        for (int i = 0; i < L2.size(); i++)
            cout << L2[i] << ",";
        cout << ")" << endl;
        cout << "Size of L2 is :" << L2.size();
    }
};

int main()
{
    Integer I;
    I.getValue();
    I.Dividenumber();
}

/*output-
Enter the size of the List :
8
Enter the elements of the List L1 : 10 44 9 23 64 56 78 27
L1 = ( 10,44,9,23,64,56,78,27)
Enter the Integer D:
3
L2 = ( 9,78,27)
Size of L2 is :3
*/