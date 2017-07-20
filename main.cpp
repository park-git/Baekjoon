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

int a[100000];

bool cmp(const int &a, const int&b){
    if(a>b)// <-내림 차순 (a<b) 오름차순
        return true;
    else
        return false;
}

int main(){
    
    int n;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    sort(a,a+n,cmp);
    
    for(int i=0; i<n; i++){
        printf("%d\n",a[i]);
    }
    
    return 0;
}
