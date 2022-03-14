#include <iostream>
 
using namespace std;
 
int main(){
    setlocale(LC_ALL, "Russian");
    int T=0, C=0, P=0;
    char t, c, p;
    bool f;
    int array[]={1,2,3,4,5,6,7,8};
    char array_1[]={'a','b','c','d','e','f','g','h'};
    for(int i=0; i<8; i++){
        for(char j=0; j<8; j++)
        {
            cout << " . " << " " ;
        }
        cout<<endl;
}
    cout<<"Введите координаты Туры"<<endl;
    cout<<"Введите число: "<<endl;
    cin>>T;
    cout<<"Введите букву: "<<endl;
    cin>>t;
    cout<<"Введите координаты Слона"<<endl;
    cout<<"Введите число: "<<endl;
    cin>>C;
    cout<<"Введите букву: "<<endl;
    cin>>c;
    cout<<"Введите координаты Пешки"<<endl;
    cout<<"Введите число: "<<endl;
    cin>>P;
    cout<<"Введите букву: "<<endl;
    cin>>p;
 
    for(int i=0; i<8; i++){
        for(char j=0; j<8; j++)
        {   
            if(T==C && t==c || T==P && t==p || C==P && c==p) {cout<<"Координаты фигур совпадают!"<<endl;}
            if(array[i]==T && array_1[j]==t || array[i]==C && array_1[j]==c || array[i]==P && array_1[j]==p) cout << " * " << " " ;
            else cout << " . " << " " ;
        }
        cout<<endl;
}
    
        system("pause");
}
