#include<bits/stdc++.h>
using namespace std;
int mys(int n){
    if(n<=0){
        return 0;
    }

    return (n%2) + 10* mys(n/2);
}
int main(){

    // int arr[] = {5,7,5,7,3,9,3};
    // int res = 0;
    // for(int x:arr){
    //     res ^= x;
    // }
    // cout<<res;
    int a = 10;
    if(a<15){
        time:cout<<a;
        goto time;   }
        return 0;
}