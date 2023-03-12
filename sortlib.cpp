//
// Created by Rana Essam on 3/11/2023.
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
}
