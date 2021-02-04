#ifndef InsertSort_H_
#define InsertSort_H_

template<typename T>
void InsertSort(T arr[], int n)
{
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0; j--){
            if(arr[j] < arr[j-1]){
                std::swap(arr[j], arr[j-1]);
            }
        }
    }
}

#endif