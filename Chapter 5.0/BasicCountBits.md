## Primitive Types 
Each variable has a **type**. 
* A type is a classification of data that tells what type of operation on that type and set of possible values assigned to it.
* In C, C++ we can have multiple integer and floating types based on signedness and precision.
* In C++ we often use int as 32 bits and 64 bits.
* In Java int is always 32 bits.

Lets start learning about primitive data types by writing a function that will return number of setbits.
The function name is **CountBits()**

```c++
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
// Input 
// 1
// 3
// Output
// 2
```


#### Know your Primitive Types
* You should know primitive data types very intimately 
  * Sizes
  * Ranges
  * Signedness
  * Properties
  * Operators
* [ ] Methods for primitive types in cmath. 
* [ ] random library in C++.
* [ ] You should be very comfortable with **bitwise** operators, particularly **XOR**. [Problem 5.2]
* [ ] Understand how to use **masks** and create them in **machine independent** way. [Problem 5.6]
* [ ] Know fast ways to **clear the lowermost set bit** (and by extension, set the lowermost 0, get its index, etc) [Problem 5.1]
* [ ] Understand **signedness** and its implication to **shifting** [Problem 5.5]
* [ ] Consider using a **cache** to accelarate operations by using it to brute-force small inputs. [Problem 5.3]

### TIPS 
* All the bitwise operators 
  * 6&4 = 6 and 4
  * 1|2 = 1 or 2
  * 8>>1 = right shift by 1 bit.
  * 1 << 10 = left shift by 1 bit
  * ~0 = not 0
  * 15^x = 15 xor x
* The constant for denoting maximum and minimum value for a given numeric type
```c++
int intMin = numeric_limits<int>::min(); // -2147483648
int intMax = numeric_limits<int>::max(); // 2147483647
float floatMin = numeric_limits<float>::min(); // 1.17549e-38
float floatMax = numeric_limits<float>::max(); // 3.40282e+38
```
* Key methods in cmath are 
  * abs(-34)
  * fabs(-3.24)
  * ceil(2.12)
  * floor(3.71)
  * min(x, y)
  * max(x, y)
  * pow(a, b)
  * log(10)
  * sqrt(100)



