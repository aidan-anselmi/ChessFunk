#include "base.h"

/* 
returns the least significant bit of a number

example
	decimal: 10 -> 2
	binary: 1010 -> 10
*/
uint64_t LSB(uint64_t num){
	return num & -num;
}




void test_LSB(){
	uint64_t max = 0b1111111111111111111111111111111111111111111111111111111111111111;
	cout << LSB(max) << endl;

	uint64_t lilmax = 0b1000000000000000000000000000000000000000000000000000000000000000;
	lilmax <<= 1;
	cout << LSB(lilmax) << endl;

	cout << LSB(1) << endl;
}


int main(){
	test_LSB();

	return 1;
}