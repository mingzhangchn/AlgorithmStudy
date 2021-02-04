#ifndef SelectSort_H_
#define SelectSort_H_

#include <iostream>

template<typename T>
void SelectSort(T arr[], int n)
{
    
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                std::swap(arr[i], arr[j]);
            }
        }
    }

//    for(int i = 0; i < n; i++) {
//        std::cout<<arr[i]<<"  ";
//    }
//    std::cout<<std::endl;    
}


#endif //