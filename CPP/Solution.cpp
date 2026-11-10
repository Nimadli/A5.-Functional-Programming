#include <bits/stdc++.h>
using namespace std;

vector<int> removeElement(vector<int> &vect, int n){
    vector<int> temp;
    temp.push_back(0);
    if(n == 0 || n == 1){
        for(int i = n + 1; i < vect.size(); i+=2){
            temp.push_back(vect[i]);
        }
    } else {
        for(int i = 1; i < vect.size(); i+=3){
            temp.push_back(vect[i]);
            if(i + 1 < vect.size()) temp.push_back(vect[i + 1]);
        }
    }

    return temp;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k = 0;
    cin>>n;
    vector<int> vect(n + 1);
    for(int i = 0; i <= n; i++){
        vect[i] = i;
    }
    while(vect.size() > 2){
        vect = removeElement(vect, k);
        k = (k + 1) % 3;
    }
    cout << vect[1] << '\n';
}

