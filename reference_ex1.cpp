#include<iostream>

int main() {
	
	int x;
	int& y = x;
	int& z = y;

	// x �� �����ڷ� y �� ����. ���� y �� x �� �Ǵٸ� ������ ��

	x = 1;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	y = 2;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	z = 3;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	// ��� 1 1 1
	//      2 2 2
	//      3 3 3

	return 0;
}