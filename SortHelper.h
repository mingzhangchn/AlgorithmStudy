#ifndef SortHelper_H_
#define SortHelper_H_

#include<cstdlib>
#include<ctime>
#include<cstdio>
#include<string>
#include<cassert>
#include<algorithm>

namespace SortHelper{

int * CreateArray(int n , int valueL, int valueR)
{
    assert(valueL < valueR);
    srand(time(NULL));
    int * pArr = new int[n];
    if(!pArr){
        printf("err happens\n");
        return NULL;
    }
    for(int i = 0; i < n; i++){
        pArr[i] = rand()%(valueR - valueL + 1);
    }

    return pArr;
}


int * CreateOrderArray(int n , int valueL, int valueR)
{
    assert(valueL < valueR);
    srand(time(NULL));
    int * pArr = new int[n];
    if(!pArr){
        printf("err happens\n");
        return NULL;
    }
    for(int i = 0; i < n; i++){
        pArr[i] = i;
    }

    for(int i = 0; i < 10; i++){
        int index1 = rand()%n;
        int index2 = rand()%n;
        std::swap(pArr[index1], pArr[index2]);
    }

    return pArr;
}

template<typename T>
bool isSort(T arr[], int n)
{
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            return false;
        }
    }
    return true;
}



template<typename T>
void SortTest(const std::string &name, void(*sortFun)(T[], int), T arr[], int n)
{
    clock_t start = clock();
    sortFun(arr, n);
    clock_t end = clock();

    printf("%s Use time:%f\n", name.c_str(), double(end - start)/CLOCKS_PER_SEC);
    
    assert(isSort(arr, n));
}

}//namepace




#endif //SortHelper_H_
