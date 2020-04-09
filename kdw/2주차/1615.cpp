//확인할 숫자보다 작은 제네레이터들을 모두 비교하여 없으면 셀프넘버이다.	//제네레이터 구하기 
//모든 범위내 모든 제네레이터를 구함
//리스트에 구한 제네레이터를 제외
//리스트에서 셀프넘버를 가져와 합을 출력
#include <iostream>
#include <cmath>

using namespace std;
int main(void) {
    //입력
    int start, end;
    cin >> start >> end;

    //리스트 제작
    bool numlist[5030];
    fill_n(numlist, 5030, true);
    for (int i = 1; i <= end; i++) {
        //각 자리수 합
        int tmp = i;
        int sum = 0;
        int stop = static_cast<int>(log10(i));
        for (int j = 0; j <= stop; j++) {
            sum += tmp % 10;   //자리수 더함
            tmp = tmp / 10;   //한칸 이동
        }
        sum += i;   //자기자신
        numlist[sum] = false;   //제네레이터 제거
    }
    //출력
    int resultSum = 0;
    for (int i = start; i <= end; i++) {
        if (numlist[i]) {
            resultSum += i;
        }
    }
    cout << resultSum;


}