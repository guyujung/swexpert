#include<iostream>
using namespace std;
int arr[1000001];
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n;
		long long sum = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		int max = arr[n - 1];

		for (int j = n - 1; j >= 0; j--) {
			if (max >= arr[j]) {
				sum += max - arr[j];
			}
			else {
				max = arr[j];
			}
		}
		cout << "#" << i + 1 << " " << sum << "\n";

		for (int i = 0; i < n; i++) {
			sum = 0;
			arr[i] = 0;
		}
	}

}