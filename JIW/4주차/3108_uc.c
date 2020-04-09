/* #include <stdio.h>
#include <string.h>

int main(void){
    char name[10001][10];
    int i, j, count, n, no;
    char code;
    char temp[10];
    int print_arr[5];
    scanf("%d",&n);

    memset(&name, 0, sizeof(char)*100010);
    for(i=0;i<n;i++){
        scanf("%c", &code);
        scanf("%d", &no);
        scanf("%s", temp);
        if(code == 'I'){
            if(name[no] == "\0"){
                strcpy(name[no],temp);
            }
        }
        else{
            strcpy(name[no],"\0");
        }
    }

    for(i=0;i<5;i++){
        scanf("%d", print_arr[i]);
    }

    count = 0; j=0;
    for(i=1;i<10001;i++){
        if(name[i] != "\0"){
            count ++;
        }
        if(count == print_arr[j]){
            printf("%d %s\n", i, name[i]);
            j++;
        }
    }
    return 0;
}
 */

/* #include <stdio.h>
#include <string.h>

int main(void){
	char name[10001][10];
	int i, j, count, n, no;
	char code;
	char temp[10];
	int print_arr[5];
	scanf("%d",&n);

	memset(&name, 0, sizeof(char)*100010);
	for(i=0;i<n;i++){
		scanf("%c", &code);
		scanf("%d", &no);
		scanf("%s", temp);
		if(code == 'I'){
			if(name[no] == "\0"){
				strcpy(name[no],temp);
			}
		}
		else{
			strcpy(name[no],"\0");
		}
	}

	for(i=0;i<5;i++){
		scanf("%d", print_arr[i]);
	}

	count = 0; j=0;
	for(i=1;i<10001;i++){
		if(name[i] != "\0"){
			count ++;
		}
		if(count == print_arr[j]){
			printf("%d %s\n", i, name[i]);
			j++;
		}
	}
	return 0;
}
 */

#include <stdio.h>
struct Data {
	char name[10];
	int num;
};

void sortByNum(struct Data arr[], int size) {
	int i, j;
	struct Data temp;
	for (i = size - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (arr[j].num > arr[j + 1].num) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(void) {
	struct Data* arr;
	int n, num, i, j, size = 0;
	char code;
	char trash[10];
	scanf("%d", &n);
	arr = (struct Data*)malloc(sizeof(struct Data) * n);

	for (i = 0; i < n; i++) {
		scanf("%c", &code);
		scanf("%c", &code);
		scanf("%d", &num);
		if (code == 'I') {
			for (j = 0; j < size; j++) {
				if (arr[j].num == num)
					break;
			}

			if (j == size) {
				arr[j].num = num;
				scanf("%s", arr[j].name);
				size++;
			}
			else {
				scanf("%s", trash);
			}
		}
		else {
			for (j = 0; j < size; j++) {
				if (arr[j].num == num)
					break;
			}

			if (j == size) {
				scanf("%s", trash);
			}
			else {
				scanf("%s", trash);
				arr[j] = arr[size-1];
				arr[size].num = 0;
				size--;
			}
		}
	}

	sortByNum(arr, size);

	for (i = 0; i < 5; i++) {
		scanf("%d", &num);
		printf("%d %s\n", arr[num - 1].num, arr[num - 1].name);
	}

	return 0;
}