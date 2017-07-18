//
//  main.cpp
//  Baekjoon
//
//  Created by PARK on 2017. 6. 29..
//  Copyright © 2017년 PARK. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstdio>
#include <vector>

using namespace std;

int num[100000];
void quicksort(int low, int high);
int partition(int low, int high);  ///// 파티션을 나눔
int choosePivot(int low, int high); ////// 피봇 선택
void swap(int &x, int &y);

int main() {
    
    int n;
    
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
        scanf("%d",&num[i]);
    
    quicksort(0, n-1);
    
    return 0;
}

void quicksort(int low, int high){
    if(low<high){
        int pivot = partition(low, high);
        quicksort(low, pivot-1);
        quicksort(pivot+1,high);
    }
}

int partition(int low, int high){
    
    int pivotIndex = choosePivot(low, high);
    int pivotValue = num[pivotIndex];
    
    swap(num[pivotIndex],num[high]);
    
    int storeIndex = low;
    
    for(int i= low; i<high;i++){
        if( num[i] < pivotValue){
            swap(num[i], num[storeIndex]);
            storeIndex +=1;
        }
    }
    
    swap(num[storeIndex], num[high]);
    return storeIndex;
}

int choosePivot(int low, int high){
    
    return low + (high - low)/2;
}

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

