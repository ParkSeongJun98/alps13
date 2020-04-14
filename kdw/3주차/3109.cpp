/*
1. 첫번째 입력데이터를 통해 배열을 제작
2. 처리 코드를 인식하는 부분 제작(데이터 저장, 삭제)
2.1. I이면 수험번호 순서에 맞게 저장, 같으면 같은 수험번호의 맨 앞에 저장
2.2. D이면 해당하는 수험번호의 데이터를 삭제하고 중복이면 맨 앞 데이터를 삭제한다. / 수험번호의 데이터가 존재하지 않으면 아무런 행동을 하지 않는다.
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
	//데이터의 갯수 입력
	int n;
	cin >> n;
	//배열 제작
	long int* numList = new long int[n];
	string* nameList = new string[n];
	//임시 변수 선언
	char code;
	long int num;
	string name;
	int count = 0;//현재 배열의 요소 수
	//데이터 처리
	for (int i = 0; i < n; i++)
	{
		cin >> code >> num >> name;
		//입력 코드 처리
		if (code =='I')
		{
			//번호 찾기
			for (int j = 0; j <= count; j++)
			{
				if (num <= numList[j])//해당 숫자보다 크거나 같은 수를 찾으면
				{
					//입력받은 값 삽입
					long int tmp1 = numList[j];
					string tmpName1 = nameList[j];
					numList[j] = num;
					nameList[j] = name;
					long int tmp2;
					string tmpName2;
					//밀어내기
					for (int k = j + 1; k < count; k++)
					{
						tmp2 = numList[k];	//값 빼내기
						tmpName2 = nameList[k];
						numList[k] = tmp1;	//값 넣기
						nameList[k] = tmpName1;
						tmp1 = tmp2;		//임시 변수 이동
						tmpName1 = tmpName2;
					}
					numList[count] = tmp1;	//마지막 요소 입력
					nameList[count] = tmpName1;	//왜 이동이 안되지?
					break;
				}
				else if (i == 0) {	//처음이면 맨 앞으로
					numList[0] = num;
					nameList[0] = name;
					break;
				}
			}
			count++;
		}
		if (code == 'D')
		{
			//해당 데이터 찾기
			for (int j = 0; j < count; j++)
			{
				if (num == numList[j])
				{
					//앞으로 당겨오기
					for (int k = j; k < count-1; k++)
					{
						numList[j] = numList[j + 1];
						nameList[j] = nameList[j + 1];						
					}
					count--;
					break;
				}
			}
		}
	}
	//출력
	int	choice;
	for (int i = 0; i < 5; i++)
	{
		cin >> choice;
		cout << numList[choice] << " " << nameList[choice] << endl;
	}
}