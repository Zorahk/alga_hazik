
#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& numbers,int start,int end,int target){
    while (start < end){
        int mid = start + (end - start) / 2;
        if (numbers[mid] <= target){
            start = mid + 1;
        }
        else {
            
            end = mid ;
        }
    }
    return end;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int len;
    cin >> len;
    vector<int> cubes(len);
    for (int i = 0; i < len; i++){
        cin >> cubes[i];
    }
    vector<int> towers;
    for (int num : cubes){
        int index = search(towers,0,towers.size(),num);
        if (index == towers.size()){
            towers.push_back(num);
        }
        else{
            towers[index] = num;
        }
    }
    cout << towers.size();
    return 0;
}