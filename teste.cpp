#include <iostream>
using namespace std;

int busca(int v[] , int x , int n)
{
    for(int j = 0; j < n; j++){
        if(v[j] == x){
        return j;
        }
    }
    return -1;
}

int main()
{
    int n , x;
    cin >> n;
    int v[n];
    cin >> x;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }    
    int r = busca(v,x,n);
    if(r == -1){
        cout << "o numero nao estava presente no vetor" << endl;
    }
    else{
        cout << "a posucao do numero no vetor eh: " << r << endl;
    }
}