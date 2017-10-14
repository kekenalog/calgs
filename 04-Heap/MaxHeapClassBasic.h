//
// Created by wangyong on 10/14/17.
//

#ifndef CALGS_MAXHEAPCLASSBASIC_H
#define CALGS_MAXHEAPCLASSBASIC_H

#include <iostream>
#include <algorithm>

using namespace std;

template<typename Item>
class MaxHeap {

private:
    Item *data;
    int count;

public:

    //构造函数,构造一个空堆,可容纳capacity个元素
    MaxHeap(int capactiy) {
        data = new Item[capactiy + 1];
        count = 0;
    }

    ~MaxHeap() {
        delete[]data;
    }

    //返回堆中的元素个数
    int size() {
        return count;
    }

    //返回一个布尔值,表示堆中是否为空
    bool isEmpty() {
        return count == 0;
    }

};


#endif //CALGS_MAXHEAPCLASSBASIC_H
