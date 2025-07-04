#include<iostream>
#include<vector>
using namespace std;

bool checkIfExist(vector<int>& arr) {
    for(int i=0;i<arr.size()-1;i++) {
        for(int j=i+1;j<arr.size();j++) {
            if(arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i]) return true;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {7,1,14,11};
    bool ans = checkIfExist(arr);

    if(ans) cout << "Yes" << endl;
    else cout << "NO";

    return 0;
}
