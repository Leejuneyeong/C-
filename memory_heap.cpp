#include<iostream>

int main() {
	int* p = new int; // c++에서 malloc 과 대응되는 것으로 메모리를 할당 (new int)
	*p = 10;

	std::cout << *p << std::endl;

	delete p; // c++에서 free과 대응되는 것으로 메모리를 해제

	// ★★ new로 배열 할당하기 

	int arr_size;
	std::cout << "array size : ";
	std::cin >> arr_size;
	int *list = new int[arr_size];

	for (int i = 0; i < arr_size; i++) {
		std::cin >> list[i];
	}

	for (int i = 0; i < arr_size; i++) {
		std::cout << i << "th element of list : " << list[i] << std::endl;
	}

	delete[] list;

	return 0; 
}