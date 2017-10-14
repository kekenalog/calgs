//
// Created by wangyong on 10/14/17.
//

#ifndef CALGS_HEAPMAIN_H
#define CALGS_HEAPMAIN_H

#include <iostream>
#include <algorithm>

#include "MaxHeapClassBasic.h"

using namespace std;

namespace HeapMain {

    int testMain() {

        MaxHeap<int> maxHeap = MaxHeap<int>(100);
        cout << maxHeap.size() << endl;

        return 0;
    }
}


#endif //CALGS_HEAPMAIN_H
