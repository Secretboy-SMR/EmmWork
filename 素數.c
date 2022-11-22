//
//  main.c
//  素數
//
//  Created by xi on 11/22/22.
//

#include <stdio.h>

int isThisAFuckNum(int num){
    for (int i=2; i <= num/2; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    int FuckNums[100];
    for (int t = 0; t < 100; t++)
        FuckNums[t] = 0;
    int cursor = 0;
    int beginNum = 2, endNum = 100;
    while(beginNum <= endNum){
        if(isThisAFuckNum(beginNum)){
            FuckNums[cursor] = beginNum;
            cursor++;
        }
        beginNum++;
    }
    cursor = 0;
    while(FuckNums[cursor] != 0){
        printf("%d ", FuckNums[cursor]);
        cursor++;
        if (cursor % 10 == 0)
            printf("\n");
    }
    return 0;
}
