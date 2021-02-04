#ifndef MergeSort_H_
#define MergeSort_H_

//归并[l,mid] [mid+1, r]两个区间的元素
template<typename T>
 void __merge(T Arr[], int l, int mid, int r)
 {
    T ArrL[mid - l + 1];
    for(int i = l; i <= mid; i++){
       ArrL[i - l] = Arr[i]; 
    }

    T ArrR[r - mid];
    for(int i = mid + 1; i <= r; i++){
        ArrR[i - mid - 1] = Arr[i];
    }

    int indexL = 0; 
    int indexR = 0;
    for(int i = l; i <= r; i++){
        if(indexL >= mid - l + 1){
            Arr[i] = ArrR[indexR];
            indexR++;
        }
        else if(indexR >= r - mid){
            Arr[i] = ArrL[indexL];
            indexL++;
        }
        else{
            if(ArrR[indexR] < ArrL[indexL]){
                Arr[i] = ArrR[indexR];
                indexR++;
            }
            else{
                Arr[i] = ArrL[indexL];
                indexL++;
            }
        }
    }
     
 }

//排序从[l,r]区间的元素
template<typename T>
void __mSort(T Arr[], int l, int r)
{
    if(l >= r){
        return;
    }
    int mid = (l+r)/2;
    __mSort(Arr, l, mid);
    __mSort(Arr, mid+1, r);
    __merge(Arr, l, mid, r);
}



template<typename T>
void MergeSort(T Arr[], int n)
{
    __mSort(Arr, 0, n-1);
}

#endif