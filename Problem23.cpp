
#include <bits/stdc++.h>
#define MAX 55

using namespace std;

int main(){
    int v[MAX];
    int n, sum;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
       sum = 0;
       sum+=v[i];
       if(i>0){
           sum+=v[i-1];
       }
       if(i<n-1){
           sum+=v[i+1];
        }
       cout << sum << endl;
    }
    return 0;
}





#include <iostream> 
using namespace std;
 int main(){
  int n; 
  int sequencia[1000010]; 
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>sequencia[i];
  }
  for(int i=n-1; i>=0; i--){
    cout<<sequencia[i]<<" "; 
  }
  cout<<"\n";
  return 0;
}