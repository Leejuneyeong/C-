#include<iostream>

int change_val(int* p) {
	*p = 3;

	return 0;
}

int main() {
	int number = 5;
	std::cout << number << std::endl;
	change_val(&number); // &:�ּ� , �Լ��� ���� p�� number�� �ּҰ��� �����Ͽ� *p�� ���� number�� �����Ͽ�
	//number�� ���� 3���� ���� c������ �����͸� ������ c++�� �� �ٸ� ��� �̰� �ٷ� ������ �����
	std::cout << number << std::endl;

	int a = 3;
	int& another_a = a; // ������ ���(reference) , ���۷����� �ݵ�� ������ �������� ����ؾ���
	// a�� ������ another_a , another_a�� a�� ������ �̴�.
	// ���۷����� �� �� ������ �Ǹ� ����� �ٸ� ���� ������ �� �� ����.

	another_a = 5;
	std::cout << "a : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;
	// ��ǻ� another_a�� a�� �Ǵٸ� �̸��̶�� �����Ϸ����� �˷��ִ� ��
	// �ڡڡ� ���� another_a�� ��� �۾��� �����ϵ� �̴� ��ǻ� a�� �� �۾��� �ϴ� �Ͱ� ����������

	// �Լ� ���ڷ� ���۷��� �ޱ�

	return 0;
}