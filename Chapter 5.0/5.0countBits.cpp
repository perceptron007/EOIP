#include <iostream>
#include <bits/stdc++.h>
using namespace std;

short CountBits (unsigned int x) {
	short num_bits = 0;
	while (x) {
		num_bits += x & 1;
		x >>= 1;
	}
	cout << num_bits;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		CountBits(n);
	}

}
