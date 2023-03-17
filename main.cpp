#include "sortlib.cpp"


using namespace std::chrono;
using namespace std;

int main() {
    int sz=50000;
    cout << "Enter the size of array:: ";
//    cin >> sz;
    int randArray[sz];

    sortlib::generate(randArray, sz);
    auto start = high_resolution_clock::now();
    sortlib::quickSort(randArray,0, sz-1, sz);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    for(int i = 0 ; i < sz ; i++){
        cout<< randArray[i] << ' ';
    }
    cout << endl << " time = ";
    cout << duration.count() << "microseconds\n";
    return 0;
}
