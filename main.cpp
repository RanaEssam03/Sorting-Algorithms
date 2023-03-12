#include "sortlib.cpp"


int main() {

    int sz;
    std::cout<<"Enter the size of array::";
    std::cin>>sz;
    int randArray[sz];
    sortlib::generate(randArray, sz);
    sortlib::selection<int>(randArray, sz);
    for(int i = 0 ; i < sz ; i++){
        std::cout << i+1 << " : "<<randArray[i] << '\n';
    }

    return 0;
}
