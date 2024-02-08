#include <iostream>
using namespace std;

int sequencial(int v[] , int x , int n)
{
    for(int j = 0; j < n; j++){
        if(v[j] < x && x <= v[j + 1]){
        return j;
        }
    }
    return -1;
}

int binaria(int v[] , int x , int n)
{
    for(int j = 0; j < n; j++){
        if(v[j - 1] <= x && x <= v[j]){
        return j;
        }
    }
    return -1;
}

int recursiva(int v[], int x , int n , int i)
{
    if(v[i] < x && x <= v[i + 1]){
        return i;
    }
    return recursiva(v, x , n , i + 1);
}

int binariaMod(int v[], int n, int x)
{
    for(int i = 0; i < n; i++){
        if(v[i] >= x){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n , x;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        v[i] = i;
        cout << v[i] << "   ";
    }
    cout << endl;
    cin >> x;
    cout << sequencial(v , x , n) << endl;
    cout << binaria(v , x , n) << endl;
    int i = 0;
    cout << recursiva(v, x, n, i)  << endl;
    cout << binariaMod(v, n, x) << endl;
}