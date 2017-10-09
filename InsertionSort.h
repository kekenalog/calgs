//
// Created by wangyong on 10/9/17.
//

#ifndef CALGS_INSERTIONSORT_H
#define CALGS_INSERTIONSORT_H

#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
void insertionSort(T arr[], int n){

    for( int i = 1 ; i < n ; i ++ ) {

        // 寻找元素arr[i]合适的插入位置
        // 写法1
//        for( int j = i ; j > 0 ; j-- )
//            if( arr[j] < arr[j-1] )
//                swap( arr[j] , arr[j-1] );
//            else
//                break;

        // 写法2
        for( int j = i ; j > 0 && arr[j] < arr[j-1] ; j -- )
            swap( arr[j] , arr[j-1] );

    }

    return;
}

#endif //CALGS_INSERTIONSORT_H
