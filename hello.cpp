#include<iostream> // ������� ǥ������� : iostream -> std::cout, std::endl �� ����
// std::cout = ȭ�鿡 ���� ���
// std::endl = �� �� ���͸� �ļ� ��Ÿ����
// std = �̸� ������ (namsspace)

//using namespace std; // �������� ���� using ���ٴ� std::cout<< �̷��� ���ִ°� ����

int main() {
	std::cout << "Hello World!!" << std::endl; // using namsspace�� ���� ��
	
	std::cout << "hi" << std::endl
		<< "my name is "
		<< "june yeong" << std::endl;

	return 0;
}