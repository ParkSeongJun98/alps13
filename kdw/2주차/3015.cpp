//선택정렬
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    //배열 제작
    int n, m;
    string member[100];
    int score[100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> member[i] >> score[i];
    }
    //배열 정렬
    int maxindex, tmp;
    string tmpString;
    for (int i = n; i > n - m; i--) {
        maxindex = i;
        for (int j = i - 1; j >= 0; j--) {
            //배열중 가장 큰 값 찾기
            if (score[maxindex] <= score[j]) {
                maxindex = j;
            }
        }
        //이동
        tmp = score[i];
        score[i] = score[maxindex];
        score[maxindex] = tmp;
        tmpString = member[i];
        member[i] = member[maxindex];
        member[maxindex] = tmpString;
        cout << member[i] << '\n';
    }
}
//버블정렬
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    //배열 제작
    int n, m;
    string member[100];
    int score[100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> member[i] >> score[i];
    }
    //배열 정렬
    int maxindex, tmp;
    string tmpString;
    for(int i = n; i > n-m; i--){  
        //가장 큰 값을 맨 뒤로 이동
        for (int j = 0; j < i; j++) {   
            if (score[j] >= score[j + 1]) {
                //이동
                tmp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = tmp;
                tmpString = member[j];
                member[j] = member[j + 1];
                member[j + 1] = tmpString;
            }
        }
        //출력
        cout << member[i] << '\n';
    }
}