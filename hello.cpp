#include<iostream> // 헤더파일 표준입출력 : iostream -> std::cout, std::endl 을 말함
// std::cout = 화면에 무언가 출력
// std::endl = 한 줄 엔터를 쳐서 나타내라
// std = 이름 공간임 (namsspace)

//using namespace std; // 권장하지 않음 using 보다는 std::cout<< 이렇게 써주는게 좋음

int main() {
	//std::cout << "Hello World!!" << std::endl; // using namsspace를 쓰기 전
	//cout << "Hello World!!" << endl;

	//std::cout << "hi" << std::endl
	//	<< "my name is "
	//	<< "Psi" << std::endl;

	int i, sum = 0, sum2 = 0;

	for (i = 1; i <= 10; i++) {
		sum += i;
	}

	std::cout << " for문 합 : " << sum << std::endl;

	int j = 1;
	
	while (j <= 10) {
		sum2 += j;
		j++;
	}

	std::cout << " while문 합 : " << sum2 << std::endl;

	int lucky_number = 3;
	std::cout << "내 비밀 수를 맞추어 보세요~" << std::endl;

	int user_input;

	while (1) {
		std::cout << "입력 : ";
		std::cin >> user_input;
		if (lucky_number == user_input) {
			std::cout << "맞추셨습니다~~" << std::endl;
			break;
		}
		else {
			std::cout << "다시 생각해보세요~" << std::endl;
		}
	}

	// switch 문 이용하기
	using std::cout;
	using std::endl;
	using std::cin;

	int user_input2;
	cout << "저의 정보를 표시해줍니다" << endl;
	cout << "1. 이름 " << endl;
	cout << "2. 나이 " << endl;
	cout << "3. 성별 " << endl;

	cin >> user_input2;

	switch (user_input2) {
		case 1:
			cout << "Psi ! " << endl;
			break;
		case 2:
			cout << "99 살" << endl;
			break;
		case 3:
			cout << "남자" << endl;
			break;
		default:
			cout << "궁금한게 없군요~" << endl;
			break;
		}

	return 0;
}