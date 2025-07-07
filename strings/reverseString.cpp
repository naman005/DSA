#include<iostream>
using namespace std;

void reverseString(char ch[], int size) {
        int i = 0, j = size - 1;
        while(i <= j) {
            swap(ch[i], ch[j]);
            i++;
            j--;
        }
}

