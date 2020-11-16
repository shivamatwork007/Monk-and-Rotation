#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

void rotateFun(vector<int>vec) {
	int arrSize, rot = 0, value;
	cin >> arrSize >> rot;
	for (int i = 0; i < arrSize; i++) {
		cin >> value;
		vec.push_back(value);
	}
	rot = rot % arrSize;
	// std::rotate function 
	rotate(vec.begin(), vec.begin() + vec.size() - rot, vec.end());
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main() {
	vector<int>vec;
	int test_case;
	cin >> test_case;
	if ((test_case > 20) || (test_case < 0))
	{
		cout << "exception";
	}
	for (int i = 0; i < test_case; i++) {
		rotateFun(vec);
	}

}