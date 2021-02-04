#ifndef QuickSort_H_
#define QuickSort_H_



template<typename T>
int __partition(T arr[], int l, int r)
{
    std::swap(arr[l], arr[std::rand()%(r - l + 1) + l]);
    int j = l; 
    for(int i = l + 1; i <= r; i++){
        if(arr[i] < arr[l]){
            std::swap(arr[j+1], arr[i]);
            j++;
        }
    }
    std::swap(arr[j], arr[l]);
    return j;
}

template<typename T>
void __quickSort(T arr[], int l, int r)
{
    if(l >= r)
    {
        return;
    }
    int p = __partition(arr, l, r);
    __quickSort(arr, l, p -1);
    __quickSort(arr, p + 1, r);
}


template<typename T>
int __partition2(T arr[], int l, int r)
{
    std::swap(arr[l], arr[std::rand()%(r - l + 1) + l]);
    int i = l + 1;
    int j = r;
    while(true){
        while(true){
            if(i <= r && arr[i]<arr[l]){
                i++;
            }
            else{
                break;
            }
        }
        while(true){
            if(j >= l && arr[j]>arr[l]){
                j--;
            }
            else{
                break;
            }
        }
        if(i > j){
            break;
        }
        std::swap(arr[i], arr[j]);
        i++;
        j--;

    }
    std::swap(arr[j], arr[l]);
    return j;
}

template<typename T>
void __quickSort2(T arr[], int l, int r)
{
    if(l >= r)
    {
        return;
    }
    int p = __partition2(arr, l, r);
    __quickSort2(arr, l, p -1);
    __quickSort2(arr, p + 1, r);
}

template<typename T>
void QuickSort(T arr[], int n)
{
    std::srand(time(NULL));
    __quickSort(arr, 0, n -1);
}

template<typename T>
void QuickSort2(T arr[], int n)
{
    std::srand(time(NULL));
    __quickSort2(arr, 0, n -1);
}

#endif