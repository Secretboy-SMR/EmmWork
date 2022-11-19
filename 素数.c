#include <stdio.h>

int isThisAFuckNum(int num){
    for (int i=2; i <= num/2; i++){
        if (num % i == 0)
            return 0; //For numbers who can divided by a num not 1, return false.
    } //Bad style, contains unreachable codes.
    return 1;
}

void addFuckNumList(int num){

}

int main(){
	int FuckNums[100];
	int cursor = 0;
    int beginNum = 2, endNum = 100;
    while (beginNum <= endNum){
        if(isThisAFuckNum(beginNum)){
            FuckNums[cursor] = beginNum;
            cursor++;
        }
        beginNum++;
    }
	cursor = 0;
	while (FuckNums[cursor] != 0){
		printf("%d ", FuckNums[cursor]);
		cursor++;
		if (cursor % 10 == 0)
			printf("\n");
	}
	getchar();
}
