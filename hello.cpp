#include<iostream> // ������� ǥ������� : iostream -> std::cout, std::endl �� ����
// std::cout = ȭ�鿡 ���� ���
// std::endl = �� �� ���͸� �ļ� ��Ÿ����
// std = �̸� ������ (namsspace)

//using namespace std; // �������� ���� using ���ٴ� std::cout<< �̷��� ���ִ°� ����

int main() {
	//std::cout << "Hello World!!" << std::endl; // using namsspace�� ���� ��
	//cout << "Hello World!!" << endl;

	//std::cout << "hi" << std::endl
	//	<< "my name is "
	//	<< "Psi" << std::endl;

	int i, sum = 0, sum2 = 0;

	for (i = 1; i <= 10; i++) {
		sum += i;
	}

	std::cout << " for�� �� : " << sum << std::endl;

	int j = 1;
	
	while (j <= 10) {
		sum2 += j;
		j++;
	}

	std::cout << " while�� �� : " << sum2 << std::endl;

	return 0;
}