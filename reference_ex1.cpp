#include<iostream>

int main() {
	
	int x;
	int& y = x;
	int& z = y;

	// x 의 참조자로 y 를 정의. 이제 y 는 x 의 또다른 별명이 됨

	x = 1;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	y = 2;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	z = 3;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	// 결과 1 1 1
	//      2 2 2
	//      3 3 3

	return 0;
}