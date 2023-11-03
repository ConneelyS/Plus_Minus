#include <iostream>
#include <vector>
using namespace std;

void plusMinus(vector<int> arr) {



    double plus{0}, neg{0}, zero{0};
    double n = arr.size();
    double plusPrecision, negPrecision, zeroPrecision;

// Gets the total count of plus, minus, zeros in arr
    for (int i = 0; i < n; i++) {

        if (arr[i] < 0) {

            neg++;
        }

        if (arr[i] > 0){

            plus++;
        }

        if (arr[i] == 0) {

            zero++;
        }
    }
// Calculates the ratio of plus/minus/zero in the vector
    plusPrecision = plus / n;
    negPrecision = neg / n;
    zeroPrecision = zero / n;

// Prints out the ratios
    cout << plusPrecision << endl;
    cout << negPrecision << endl;
    cout << zeroPrecision << endl;

}



int main() {

    vector <int> arr;
    arr = vector <int> {-4, 3, -9, 0, 4, 1};
    plusMinus(arr);

    return 0;
}


