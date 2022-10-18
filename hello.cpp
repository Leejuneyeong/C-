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

	return 0;
}