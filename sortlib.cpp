//
// Created by Rana Essam on 3/11/2023.
// Modified by Merna Islam on 3/16/2023.
//
#include <bits/stdc++.h>

namespace sortlib{
    /// \author Rana Essam
    /// \brief this is a generic swap function which swaps two elements from the same datatype
    /// \tparam T refers to the datatype of both elements
    /// \param t refers to the first element which will be swapped
    /// \param t1 refers to the second element which will be swapped
    template<typename T>
    void swap(T &elmnt1, T& elmnt2) {
        T temp = elmnt2;
        elmnt2 =elmnt1;
        elmnt1 = temp;
    }


    /// \author Rana Essam
    /// \brief this is function generates a random array with fixed size containing values from (0 to 99)
    /// \tparam T refers to the datatype of the array
    /// \param randArray refers to the array which will be filled
    /// \param sz refers to the size of the array
    template <typename T>
    void generate(T randArray[], int sz){
        for(int i=0;i<sz;i++) {
            randArray[i] = rand() % 100; //Generate number between 0 to 99
        }

    }

    /// \author Rana Essam
    /// \brief this generic sorting algorithm function using selection sort algorithm
    /// \tparam T refers to the date type
    /// \param arr refers to the first element of the array which will be sorted
    /// \param n   refers to the length of the array
    template<typename T>
    void selection(T arr[], int n){
        for(int i = 0 ; i < n-1 ; i++){
           int least = i;
            for(int j = i+1 ; j < n ; j++){
                if(arr[j] < arr[least]){
                    least = j;
                }
            }
            swap(arr[least], arr[i]);
        }
    }

    /// \author Mohannad Hisham
    /// \brief this function sees what is inserted to the array then puts it in the correct position
    /// \tparam T refers to the date type
    /// \param arr refers to the array that will be sorted
    /// \param n   refers to the length of the array
    template <typename T>
    void insertionSort (T arr[], int n) {
        for (int i = 1, j; i < n; i++){
            T tmp = arr [i];
            for (j = i; j > 0 && tmp < arr [j-1];j--){
                arr[j] = arr[j-1];
            }
            arr [j] = tmp;
        }
    }

    /// \author Mohannad Hisham
    /// \brief this function works on an array by sorting it with divide and conquer method
    /// \tparam T refers to the date type
    /// \param arr refers to the array that will be sorted
    /// \param left   refers to the start index
    /// \param right   refers to the end index
    /// \param sz   refers to the size of the array
    template<typename T>
    int partition(T arr[],int left,int right,int sz){
        T x = arr[left];
        int i = left;
        for(int j=left+1 ; j < sz ;j++){
            if(arr[j] < x){
                i+=1;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i],arr[left]);
        return i;
    }

    template<typename T>
    void quickSort(T arr[],int left,int right,int sz){
        int x =partition(arr,left,right,sz);
        if(left >=right){
            return;
        }
        else{

            partition(arr,left,right,sz);
            quickSort(arr,left, x-1,sz);
            quickSort(arr, x+1,right,sz);
        }
    }

    /// \author Merna Islam
    /// \brief this is a generic sorting algorithm function using merge sort algorithm, this function only merges the 2 lists
    /// \tparam T is the template class T [data type]
    /// \param arr refers to the array that will be sorted
    /// \param low refers to the start index
    /// \param mid refers to the middle index
    /// \param high refers to the end index

    template<class T>
    void merge(T arr[], int low, int mid, int high){
        int n1 = mid - low + 1;
        int n2 = high - mid;
        T A[n1], B[n2];
        for (int i = 0; i < n1; ++i) {
            A[i] = arr[low + i];
        }
        for (int i = 0; i < n2; ++i) {
            B[i] = arr[mid + 1 + i];
        }
        int i, j, k;
        i = j = 0;
        k = low;
        while (i < n1 && j < n2){
            if (A[i] < B[j]){
                arr[k++] = A[i++];
            } else {
                arr[k++] = B[j++];
            }
        }
        while(i < n1){
            arr[k++] = A[i++];
        }
        while(j < n2){
            arr[k++] = B[j++];
        }
    }

    /// \author Merna Islam
    /// \brief this function is the main recursive function that will call the merge function
    /// \tparam T is the template class T [data type]
    /// \param arr refers to the array that will be sorted
    /// \param low refers to the start index
    /// \param high refers to the end index

    template<class T>
    void mergeSort(T arr[], int low, int high){
        if(low < high){
            int mid = floor((low + high)/2);
            mergeSort(arr, low, mid);
            mergeSort(arr, mid+1, high);
            merge(arr, low, mid, high);
        }
    }
}
