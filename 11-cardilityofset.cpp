#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

void getprint(set<int> *setname)
{
    set<int>::iterator iter = setname->begin();

    while (iter != setname->end())
    {
        cout << *iter << " ";
        iter++;
    }
}
void getintersection(set<int> A,set<int> B)
{
    set<int> C;
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(C,C.begin()));
    cout << "Set A :"; 
    getprint(&A);
    cout << endl;
    cout << "Set B :"; 
    getprint(&B);
    cout << endl;
    cout << "Set C after intersection : "; 
    getprint(&C);
    cout << endl;
    cout << "Cardility of set C =" << C.size() << endl;
}
void getunion(set<int> A,set<int> B,set<int> D)
{
    set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(D,D.begin()) );
    cout << "Set A :"; 
    getprint(&A);
    cout << endl;
    cout << "Set B :"; 
    getprint(&B);
    cout << endl;
    cout << "Set D after Union :"; 
    getprint(&D);
    cout << endl;
    cout << "Cardility of set D =" << D.size() << endl;
}

int main()
{
    set<int> A,B,C,D;
    int N,M,x;
    cout << "Enter the cardility of set A :"<<endl;;
    cin >> N;
    cout << "Enter the values of set A :"<<endl;;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        A.insert(x);
    }
    cout << "Enter the cardility of set B :"<<endl;;
    cin >> M;
    cout << "Enter the values of set B :"<<endl;;
    for (int i = 0; i < M; i++)
    {
        cin >> x;
        B.insert(x);
    }
    getintersection(A,B);
    getunion(A,B,D);
}

/*output-
Enter the cardility of set A :
2
Enter the values of set A :
5
6
Enter the cardility of set B :
3
Enter the values of set B :
5
2
4
Set A :5 6 
Set B :2 4 5
Set C after intersection : 5
Cardility of set C =1
Set A :5 6
Set B :2 4 5
Set D after Union :2 4 5 6
Cardility of set D =4
*/