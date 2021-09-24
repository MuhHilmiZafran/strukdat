#include <iostream>

using namespace std;

int main()
{
    //kamus
    int i, j, k, N;

    //algoritma

    //input
    cout << "Masukkan Jumlah output: ";
    cin>>N;

    //looping
    for(i=1;i<=N;i++){
        for(j=N;j>i;j--){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}
