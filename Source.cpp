#include <iostream>
#include <vector>
using namespace std;

int main() {
	int group;
	cin >> group;
	int die[100];



	for (int i = 0; i < 6; i++) die[i] = 0;
	vector<int> v(group);;
	for (int i = 0; i < group; i++) {
		int temp;
		cin >> temp;
		v[i] = temp;
		die[temp - 1]++;
	}

	int highest = -1;
	for (int i = 5; i >= 0; i--) {
		if (die[i] == 1) {
			highest = i + 1;
			break;
		}
	}
	if (highest > 0) {
		for (int i = 0; i < group; i++) {
			if (v[i] == highest) {
				cout << i + 1 << endl;
				break;
			}
		}
	}
	else cout << "none\n";
}