#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<"*======================================Tugas Praktikum Sorting======================================*"<<endl;
    cout<<" Struktur Data & Pemrograman"<<endl;
    cout<<" Latihan 1 - Bubble Sorting"<<endl;
    cout<<" Created By Abdul Latif Munjiat (1610631170004)"<<endl;
    cout<<" Kelas 3'A Fasilkom Unsika\n"<<endl;

    int NumList [10]={12,29,56,4,31,9,17,19,48,3};
        int temp;
        cout<<"Data Angka Sebelum Diurutkan : \n";
        for (int d=0; d<10; d++)
            {
                cout<<setw(3)<<NumList[d];
            }
        cout<<"\n\n";
        for (int a=0; a<10; a++)
            for (int b=0; b<10; b++)
            if (NumList [b]>= NumList [b+1])
            {
                temp = NumList [b];
                NumList[b]= NumList [b+1];

                NumList [b+1] = temp;
            }
            cout<<"Data Setelah Diurutkan : \n";
            for (int c=0; c<10; c++)
            cout<<setw(3)<<NumList[c]<<"  ";
            cout<<endl;
}
