//
// Created by wangyong on 10/11/17.
//

#ifndef CALGS_SORTADVANCE_H
#define CALGS_SORTADVANCE_H

#include <iostream>
#include "../SortTestHelper.h"

#include "MergeSort.h"
#include "MergeSortButtonUp.h"
#include "QuickSort.h"
#include "QuickSortThreeWays.h"

using namespace std;

namespace SortAdvanceMain {

    // 比较InsertionSort和MergeSort两种排序算法的性能效率
    // 整体而言, MergeSort的性能最优, 对于近乎有序的数组的特殊情况, 见测试2的详细注释
    int testMain() {

        // Merge Sort是我们学习的第一个O(nlogn)复杂度的算法
        // 可以在1秒之内轻松处理100万数量级的数据
        // 注意：不要轻易尝试使用SelectionSort, InsertionSort或者BubbleSort处理100万级的数据
        // 否则，你就见识了O(n^2)的算法和O(nlogn)算法的本质差异：）
        int n = 1000000;

        // 测试1 一般性测试
        cout << "Test for random array, size = " << n << ", random range [0, " << n << "]" << endl;
        int *arr1 = SortTestHelper::generateRandomArray(n, 0, n);
        int *arr2 = SortTestHelper::copyIntArray(arr1, n);
        int *arr3 = SortTestHelper::copyIntArray(arr1, n);
        int *arr4 = SortTestHelper::copyIntArray(arr1, n);
        int *arr5 = SortTestHelper::copyIntArray(arr1, n);
        int *arr6 = SortTestHelper::copyIntArray(arr1, n);

//        SortTestHelper::testSort("Insertion Sort", insertionSort, arr1, n);
        SortTestHelper::testSort("Merge Sort", mergeSort, arr2, n);
        SortTestHelper::testSort("Merge Sort 2", mergeSort2, arr3, n);
        SortTestHelper::testSort("Merge Sort Bottom Up", mergeSortBU, arr4, n);
        SortTestHelper::testSort("Quick Sort", quickSort, arr5, n);
        SortTestHelper::testSort("Quick Sort Three", quickSort3Ways, arr6, n);


        delete[] arr1;
        delete[] arr2;
        delete[] arr3;
        delete[] arr4;
        delete[] arr5;
        delete[] arr6;

        cout << endl;


        // 测试2 测试近乎有序的数组
        // 对于近乎有序的数组, 数组越有序, InsertionSort的时间性能越趋近于O(n)
        // 所以可以尝试, 当swapTimes比较大时, MergeSort更快
        // 但是当swapTimes小到一定程度, InsertionSort变得比MergeSort快
        int swapTimes = 10;
        assert(swapTimes >= 0);

        cout << "Test for nearly ordered array, size = " << n << ", swap time = " << swapTimes << endl;
        arr1 = SortTestHelper::generateNearlyOrderedArray(n, swapTimes);
        arr2 = SortTestHelper::copyIntArray(arr1, n);
        arr3 = SortTestHelper::copyIntArray(arr1, n);
        arr4 = SortTestHelper::copyIntArray(arr1, n);
        arr5 = SortTestHelper::copyIntArray(arr1, n);
        arr6 = SortTestHelper::copyIntArray(arr1, n);

        SortTestHelper::testSort("Insertion Sort", insertionSort, arr1, n);
        SortTestHelper::testSort("Merge Sort", mergeSort, arr2, n);
        SortTestHelper::testSort("Merge Sort 2", mergeSort2, arr3, n);
        SortTestHelper::testSort("Merge Sort Bottom Up", mergeSortBU, arr4, n);
        SortTestHelper::testSort("Quick Sort", quickSort, arr5, n);
        SortTestHelper::testSort("Quick Sort Three", quickSort3Ways, arr6, n);

        delete[] arr1;
        delete[] arr2;
        delete[] arr3;
        delete[] arr4;
        delete[] arr5;
        delete[] arr6;

        return 0;
    }
}

#endif //CALGS_SORTADVANCE_H
