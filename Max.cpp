#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int arr[5] = {4,6,2,11,8};

    int ans=INT_MIN;

    for(int i=0 ; i<5;i++) {
        if(arr[i]>ans) {
            ans=arr[i];
        }
    }

    cout << ans<<endl;

}

