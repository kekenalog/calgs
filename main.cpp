#include <iostream>
//#include <algorithm>
#include "Student.h"
#include "SortTestHelper.h"
#include "SelectionSort.h"
#include "InsertionSort.h"

using namespace std;


int main() {

    //测试排序算法辅助函数
    int n = 20000;

    cout << "Test for random array, size = " << n << ", random range [0, " << n << "]" << endl;
    int *arr1 = SortTestHelper::generateRandomArray(n, 0, n);
    int *arr2 = SortTestHelper::copyIntArray(arr1, n);

    SortTestHelper::testSort("Insertion Sort", insertionSort, arr1, n);
    SortTestHelper::testSort("Selection Sort", selectionSort, arr2, n);

    delete[] arr1;
    delete[] arr2;

    cout << endl;

    return 0;

}