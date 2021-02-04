#ifndef InsertSort_H_
#define InsertSort_H_

template<typename T>
void InsertSort(T arr[], int n)
{
    for(int i = 1; i < n; i++){
        T e = arr[i];
        for(int j = i; j > 0; j--){
            if(e < arr[j-1]){
                arr[j] = arr[j - 1];
            }
            else{
                arr[j] = e;
                break;
            }

        }
    }
}

template<typename T>
void InsertSort(T arr[], int l, int r)
{
    for(int i = l; i <= r; i++){
        T e = arr[i];
        for(int j = i; j > 0; j--){
            if(e < arr[j-1]){
                arr[j] = arr[j - 1];
            }
            else{
                arr[j] = e;
                break;
            }

        }
    }
}

#endif