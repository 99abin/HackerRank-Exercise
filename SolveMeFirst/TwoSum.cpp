#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int* a, int* b) {
    return *a + *b; // Menggunakan dereference untuk mendapatkan nilai dari pointer
}

int main() {
    int num1, num2, sum;
    cin >> num1 >> num2;
    sum = solveMeFirst(&num1, &num2); // Mengirimkan alamat dari num1 dan num2
    cout << sum;
    return 0;
}
