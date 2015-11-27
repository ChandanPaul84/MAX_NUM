//
//  main.cpp
//  MAX_NUM
//
//  Created by Chandan Paul on 11/25/15.
//  Copyright © 2015 Chandan Paul. All rights reserved.
//

#include <iostream>
#include <string.h>

void returnNextMaxNum(char arr[]);
void reverse(char *arr,int i, int len);

void returnNextMaxNum(char arr[]){
    int len = (int)strlen(arr);
    int i,j;
    for(i= len-1; i>0; i--){
        if(arr[i] <= arr[i-1]){
            continue;
        }
        break;
    }
    for(j =i; j<=len-1; j++){
        if(arr[i-1] < arr[j]){
            continue;
        }
        break;
    }
    if(i>1){
        char temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;
    }
    reverse(arr, i, len);
}

void reverse(char *arr, int i, int len)
{
    int start = i; int end = len-1;
    while( start < end){
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end --;
    }
}

int main() {
    char arr[] = "54";
    returnNextMaxNum(arr);
    puts(arr);
    return 0;
}
