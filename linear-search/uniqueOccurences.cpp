#include<iostream>
#include<vector>
using namespace std;
bool uniqueOccurences(vector<int> arr) {
    int size = arr.size();
    vector<bool> visited(size, false);
    vector<int> counts;

    for(int i = 0; i < size; i++) {
        if(visited[i]) continue;
        int count = 1;
        visited[i] = true;

        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = true;
            }
        }
        counts.push_back(count);
    }

    for(int i = 0; i < counts.size(); i++) {
        for(int j = i + 1; j < counts.size(); j++) {
            if(counts[i] == counts[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<int> arr = {-3,0,1,-3,1,1,1,-3,10,0};
    bool ans = uniqueOccurences(arr);
    if (ans) {
        cout << "Yes all are unique" << endl;
    } else {
        cout << "No! not unique" << endl;
    }
    return 0;
}