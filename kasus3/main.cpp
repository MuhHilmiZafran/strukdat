#include <iostream>

using namespace std;

int main()
{
    //kamus
    int i, j, N;

    //algoritma

    //input
    cout << "Masukkan Jumlah output: ";
    cin>>N;

    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            cout<<j;


        }
        cout<<endl;
    }



    return 0;
}
