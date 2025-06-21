#include <iostream>
using namespace std;

int main() {
    int arr[6] = {6,11,7,4,8,9};

for(int i=0;i<6;i++) {
    cout << arr[i] << " ";
}

int start = 0;
int end = 5;

cout << endl;

while(start < end) {
  swap(arr[start] , arr[end]);
  start++;
  end--;
}

for(int i=0;i<6;i++) {
    cout<< arr[i] << " ";
}

    return 0;   


}