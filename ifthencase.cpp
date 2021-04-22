#include <iostream>
using namespace std;
int main(){
int N;
cin>>N;

if(N>=1 && N<=9){
    cout<<"satuan";
}else if(N>=10 & N<=99){
    cout<<"puluhan";
}else if(N>=100 & N<=999){
    cout<<"ratusan";
}else if(N>=1000 & N<=9999){
    cout<<"ribuan";
}else if(N>=10000 & N<=99999){
    cout<<"puluhribuan";
}

}