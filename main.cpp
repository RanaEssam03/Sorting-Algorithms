#include "sortlib.cpp"

int main() {
    int n = 5;
    int arr []= {5, 3 , 0 , 2 ,1};
    sortlib::selection<int>(arr, n);
    for(int i = 0 ; i < n ; i++){
        std::cout << arr[i] << ' ';
    }



    return 0;
}
