#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_3_Solution_17
// Triangle Area.

void ReadNumbers(float& A, float& H)
{
	cout << "Please Enter Rectangle triangle base " << endl;
	cin >> A;

	cout << "Please Enter Rectangle height H " << endl;
	cin >> H;
}

float TriangleArea(float A, float H)
{
	float Area = (A / 2 ) * H;

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}

int main()
{
	float A, H;
	ReadNumbers(A, H);
	PrintResult(TriangleArea(A, H));
}

