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

    //looping
    for(i=N;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
