//
// Created by wangyong on 10/14/17.
//

#ifndef CALGS_HEAPMAIN_H
#define CALGS_HEAPMAIN_H

#include <iostream>
#include <algorithm>

#include "MaxHeap.h"

using namespace std;

namespace HeapMain {

    int testMain() {

        MaxHeap<int> maxheap = MaxHeap<int>(100);

        srand(time(NULL));
        for( int i = 0 ; i < 50 ; i ++ )
            maxheap.insert( rand()%100 );

        maxheap.testPrint();

        return 0;
    }
}


#endif //CALGS_HEAPMAIN_H
