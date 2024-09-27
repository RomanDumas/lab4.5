#include <iostream>
#include <cmath>
#include <time.h>
#include <iomanip>
using namespace std;

int main() {
	
	double x, y, R;
	
	int f1, f2, f3;
	cout << "R = "; cin >> R;
	
	//1 solutin
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	
	if ((-R <= x && x <= 0) && (0 <= y && y <= R) && (-x <= y)) {   
		f1 = 1;
	}
	else {
		f1 = 0;
	}
	if ((-R <= x && x <= 0) && (-R <= y && y <= 0) && (y <= x)) {
		f2 = 1;
	}
	else {
		f2 = 0;
	}
	if ((0 <= x && x <= R) && (-R <= y && y <= R)) {
		f3 = 1;
	}
	else {
		f3 = 0;
	}
	cout << "answer:" << endl;
	if (f1 || f2 || f3 == 1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cout << " " << endl;


	//2 solution
	for (int i = 1, k = 10; i <= k; i++) {
		/*x = -R + rand() * 1.0 / RAND_MAX;
		y = -R + rand() * 1.0 / RAND_MAX ;*/
		x = -R + rand() * (R+R) / RAND_MAX;
		y = -R + rand() * (R+R) / RAND_MAX;
		cout << "     x" << "     |  " << "  y" << "    |" << endl;
		cout << "---------------------" << endl;
		cout << setprecision(3) << setw(7) << x << "    |  " << y << "  |" << endl;
		cout << "---------------------" << endl;
		cout << " " << endl;

		if ((-R <= x && x <= 0) && (0 <= y && y <= R) && (-x <= y)) {
			f1 = 1;
		}
		else {
			f1 = 0;
		}
		if ((-R <= x && x <= 0) && (-R <= y && y <= 0) && (y <= x)) {
			f2 = 1;
		}
		else {
			f2 = 0;
		}
		if ((0 <= x && x <= R) && (-R <= y && y <= R)) {
			f3 = 1;
		}
		else {
			f3 = 0;
		}
		cout << "answer:" << endl;
		if (f1 || f2 || f3 == 1)
			cout << " yes" << endl;
		else
			cout << " no" << endl;
		cout << " " << endl;
	}
	return 0;
}