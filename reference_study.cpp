#include<iostream>

int change_val(int* p) {
	*p = 3;

	return 0;
}

int main() {
	int number = 5;
	std::cout << number << std::endl;
	change_val(&number); // &:주소 , 함수의 인자 p에 number의 주소값을 전달하여 *p를 통해 number를 참조하여
	//number의 값을 3으로 변경 c에서는 포인터를 썻지만 c++은 또 다른 방식 이게 바로 참조자 방식임
	std::cout << number << std::endl;

	int a = 3;
	int& another_a = a; // 참조자 방식(reference) , 레퍼런스는 반드시 누구의 별명인지 명시해야함
	// a의 참조자 another_a , another_a는 a의 참조자 이다.
	// 레퍼런스가 한 번 별명이 되면 절대로 다른 이의 별명이 될 수 없다.

	another_a = 5;
	std::cout << "a : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;
	// 사실상 another_a는 a의 또다른 이름이라고 컴파일러에게 알려주는 것
	// ★★★ 따라서 another_a에 어떠한 작업을 수행하든 이는 사실상 a에 그 작업을 하는 것과 마찬가지임

	// 함수 인자로 레퍼런스 받기

	return 0;
}