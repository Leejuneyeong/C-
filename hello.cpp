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

	int lucky_number = 3;
	std::cout << "�� ��� ���� ���߾� ������~" << std::endl;

	int user_input;

	while (1) {
		std::cout << "�Է� : ";
		std::cin >> user_input;
		if (lucky_number == user_input) {
			std::cout << "���߼̽��ϴ�~~" << std::endl;
			break;
		}
		else {
			std::cout << "�ٽ� �����غ�����~" << std::endl;
		}
	}

	// switch �� �̿��ϱ�
	using std::cout;
	using std::endl;
	using std::cin;

	int user_input2;
	cout << "���� ������ ǥ�����ݴϴ�" << endl;
	cout << "1. �̸� " << endl;
	cout << "2. ���� " << endl;
	cout << "3. ���� " << endl;

	cin >> user_input2;

	switch (user_input2) {
		case 1:
			cout << "Psi ! " << endl;
			break;
		case 2:
			cout << "99 ��" << endl;
			break;
		case 3:
			cout << "����" << endl;
			break;
		default:
			cout << "�ñ��Ѱ� ������~" << endl;
			break;
		}

	return 0;
}