#include "sortlib.cpp"


int main() {

    int sz;
    std::cout << "Enter the size of array:: ";
    std::cin >> sz;
    int randArray[sz];
    int randArray2[sz];
<<<<<<< HEAD
    int randArray3[sz];
    sortlib::generate(randArray, sz);
    sortlib::generate(randArray2, sz);
    sortlib::generate(randArray3, sz);
    sortlib::selection<int>(randArray, sz);
    sortlib::mergeSort<int>(randArray2, 0, sz-1);
    sortlib::countSort<int>(randArray3, sz);
=======
    sortlib::generate(randArray, sz);
    sortlib::generate(randArray2, sz);
    sortlib::selection<int>(randArray, sz);
    sortlib::mergeSort<int>(randArray2, 0, sz-1);
>>>>>>> main
    for(int i = 0 ; i < sz ; i++){
        std::cout << i+1 << " : " << randArray[i] << '\n';
    }
    std::cout << "\n Sorting using Merge Sort: \n";
    for(int i = 0 ; i < sz ; i++){
        std::cout << randArray2[i] << ' ';
    }
    std::cout << "\n";
<<<<<<< HEAD

    std::cout << "\n Sorting using Count Sort: \n";
    for(int i = 0 ; i < sz ; i++){
        std::cout << randArray3[i] << ' ';
    }
    std::cout << "\n";
=======
>>>>>>> main

    return 0;
}
