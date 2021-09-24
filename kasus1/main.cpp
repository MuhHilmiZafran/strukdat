#include <iostream>

using namespace std;

int main()
{
    //kamus
    int i, j, N, S=0;

    //algoritma

    //input
    cout << "Masukkan Jumlah output: ";
    cin>>N;

    for(i=1;i<=N;i++){
        cout<<i<<" ";
        S=S+i;

    }
    cout<<"\nJumlah Deret: "<< S << endl;
    return 0;
}
