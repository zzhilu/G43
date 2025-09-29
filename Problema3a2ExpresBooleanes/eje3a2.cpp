
#include <iostream>


using namespace std;
int main() {
		
	int x ,y;

	bool condition;
	cin >> x >> y;
	
	condition = ((x >= 0 && x <= 10) && (y >= 0 && y <= 10));

	cout << condition << endl;

	return 0;
}