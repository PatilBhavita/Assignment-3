#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;
//I used the class as it is datastructure used to define data as realLife entity.
class Circle { 
private:
	int radius, x, y;
	float	Area;
	void calculateArea() {
		Area = 3.14 * (float)(radius * radius);
	}
public:
    // using constructor
	Circle(int r, int x, int y) :radius(r), x(x), y(y) {
		calculateArea();
	}
	float getArea() {
		return Area;
	}
	void printData() {
		cout << "\nRadius : " << radius << "\norigin : (" << x << ", " << y << ")" << endl;
		cout << "Area : " << Area;
	}
};

int main() {
	int N;
	cout << "Enter the number of circles : ";
	cin >> N;
	vector<Circle> R;
	for (int i = 0; i < N; i++) {
		int r, x, y;
		cout << "Enter Radius : ";
		cin >> r;
		cout << "Enter origin X : ";
		cin >> x;
		cout << "Enter origin Y : ";
		cin >> y;
		Circle R1(r, x, y);
		
		R.push_back(R1);
	}
	//using bubble sort
	for (int j = 0; j < N; j++) {
		for (int k = 0; k < N; k++) {
			if (R[j].getArea() < R[k].getArea()) {
				auto temp = R[j];
				R[j] = R[k];
				R[k] = temp;
			}
		}
	}
	for (auto it : R) {
		it.printData();
	}
	return EXIT_SUCCESS;
}

/*output
Enter the number of circles : 2 
Enter Radius : 5
Enter origin X : 4
Enter origin Y : 2
Enter Radius : 6
Enter origin X : 1
Enter origin Y : 2

Radius : 5
origin : (4, 2)
Area : 78.5
Radius : 6
origin : (1, 2)
Area : 113.04
*/