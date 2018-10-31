# UTS_Algoritma


**Soal Pertama**

**Alur Program**


1. Deklarasikan variabel `A, B, X, Y` sebagai variabel input.
2. Membaca input keyboard `cin >> A >> B >> X >> Y`.
3. Membandingkan variabel X dengan Y jika sama.
4. Karena statement **FALSE** tidak akan terjadi ``` {X != Y} ```
5. Dan jika statement **TRUE** maka X < Y berlaku rumus statement **TRUE** dengan Syntax ``` X = X + A ```.
6. Dan jika statement **FALSE** ``` Y = Y + B ```.
7. Maka akan muncul ``` X = X + A = (hasilnya) ```.

**Code Program**

```C++
 #include<iostream>

using namespace std;

int main()
{
    int A,B,X,Y;

    cout << "masukan bilangan 1: ";
    cin >> A;
    cout << "masukan bilangan 2: ";
    cin >> B;

    X = A;
    Y = B;
    if(X != Y )
        {if ( X < Y )
            { X = X + A;}
        else
            { Y = Y + B;}
        }

    cout << X;


    }

```

**hasil(a)**
![ing](https://raw.githubusercontent.com/SeptiZahrotunNisa/UTS_Algoritma/master/soal1/hasil(a).png)

**hasil(b)**
![ing](https://raw.githubusercontent.com/SeptiZahrotunNisa/UTS_Algoritma/master/soal1/hasil(b).png)


**Soal kedua**

**Alur Program**


1. Deklarasikan variabel `N, X, T, Batas` sebagai variabel input.
2. Memuaskan nilai N yaitu angka terakhir NIM saya, maka N adalah 68
   dan batasnya adalah 208 dari hasil jumlahan N + 140.
3. Masukkan variabel X, dan T, X nya adalah 20 kemudian T adalah 68 (dari N).
4. Dimana T kurang dari sama dengan batas, berarti tidak boleh melebihi batas. 
5. Kemudian menghitung ``` X = X +10; 
   ```, dan hasilnya 30 kemudian menghitung ``` T = T + X;```,
   hasilnya adalah 98
6. Kemudian cetak variabel T


**Code Program** 

```C++
#include<iostream>

using namespace std;

int main()
{
    int N,X,T,Batas;

    cout << "masukan bilangan N: ";
    cin >> N;


    Batas = N + 140;
    X = 20;
    T = N;

    while( T <= Batas)
        { T = T + X;
          X = X + 10;
    }
    cout << T;

}

```

**Hasil**
![ing](https://raw.githubusercontent.com/SeptiZahrotunNisa/UTS_Algoritma/master/soal2/hasil2.png)