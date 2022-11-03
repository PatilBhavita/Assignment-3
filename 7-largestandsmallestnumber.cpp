#include <iostream>
using namespace std;

class Integer
{
private:
    int arr[10], N, max, min, pos = 0, pos1 = 0;

public:
    void getValue()
    {
        cout << "Enter the size of the List : " << endl;
        cin >> N;
        cout << "Enter the elements of the List : " << endl;
        for (int i = 0; i < N; i++)
            cin >> arr[i];
    }
    void calMax()
    {
        max = arr[0];
        for (int i = 0; i < N; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
                pos = i;
            }
        }
        cout << "Largest integer : " << max << " "
             << "Position of Largest integer:" << pos << endl;
    }
    void calMin()
    {
        min = arr[0];
        for (int i = 0; i < N; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
                pos1 = i;
            }
        }
        cout << "Smallest integer : " << min << " "
             << "Position of Smallest integer:" << pos1 << endl;
    }
};

int main()
{
    Integer I;
    I.getValue();
    I.calMax();
    I.calMin();
}

/*output-
Enter the size of the List : 6
Enter the elements of the List : 55
3
23
452
82
67
Largest integer : 452 Position of Largest integer:3
Smallest integer : 3 Position of Smallest integer:1
*/