#include "sortlib.cpp"


int main() {

    int sz;
    std::cout << "Enter the size of array:: ";
    std::cin >> sz;
    int randArray[sz];
    int randArray2[sz];
    sortlib::generate(randArray, sz);
    sortlib::generate(randArray2, sz);
    sortlib::selection<int>(randArray, sz);
    sortlib::mergeSort<int>(randArray2, 0, sz-1);
    for(int i = 0 ; i < sz ; i++){
        std::cout << i+1 << " : " << randArray[i] << '\n';
    }
    std::cout << "\n Sorting using Merge Sort: \n";
    for(int i = 0 ; i < sz ; i++){
        std::cout << randArray2[i] << ' ';
    }
    std::cout << "\n";

    return 0;
}
