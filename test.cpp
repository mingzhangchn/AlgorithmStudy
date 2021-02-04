#include<iostream>

#include"SortHelper.h"
#include"SelectSort/SelectSort.h"
#include"InsertSort/InsertSort.h"
#include"MergeSort/MergeSort.h"

int main()
{

    int arrSize = 10;
    std::cout<<"test start"<<std::endl;

    int n = 1000000;
    int *arr = SortHelper::CreateArray(n, 0, n);
    int *arr2 = SortHelper::CreateOrderArray(n, 0, n);


    //SortHelper::SortTest("SelectSort", SelectSort, arr, n);
    //SortHelper::SortTest("SelectSort", SelectSort, arr2, n);
    //SortHelper::SortTest("InsertSort", InsertSort, arr, n);    
    //SortHelper::SortTest("InsertSort", InsertSort, arr2, n);    

    SortHelper::SortTest("MergeSort", MergeSort, arr, n); 




    delete [] arr;
    delete [] arr2;

    return 0;
    
}