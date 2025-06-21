#include<iostream>
using namespace std;

int main() {
    int arr[6] = {2,4,1,5,9,3};

    int index;

    int x=9;

    for(int i=0;i<6;i++) {
        if(arr[i]==x) {
            index=i;
            break;
        }

    }
    cout << index << " " ;
}