#include <iostream>

template<typename Any>
void swap(Any &a, Any &b);

template<typename Any>
void swap(Any &a, Any &b)
{
   Any tmp=a;
    a=b;
    b=tmp;
}

//ak aj pre pole
template<typename Any>
void swap(Any * a, Any * b, int pocet);

template<typename Any>
void swap(Any * a, Any * b, int pocet){
    Any tmp;
    for(int i=0;i<pocet;i++)
    {
        tmp=a[i];
        a[i]=b[i];
        b[i]=tmp;
    }
}

template<typename Any>
int cmp(const void * a, const void * b);

template<typename Any>
int cmp(const void * a, const void * b){
    Any * prvy= (Any *)a;
    Any * druhy= (Any *)b;
    return (*prvy)<(*druhy)?1:(*prvy)>(*druhy)?-1:0;
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    /*int x=5;
    int y=6;
    swap<int>(x,y);
    float m=0.12;
    float n=8.45;
    swap<float>(m,n);
    char p='p';
    char s='s';
    swap<char>(p,s);*/
    int pole[]{1,2,3};
    int pole2[]{9,8,7};
    qsort(pole,3,sizeof(pole[0]),cmp<int>);
    for(auto i: pole)
    {
        std::cout<<i<<" ";
    }
    /*
    for(auto i: pole)
    {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    swap<int>(pole,pole2,3);

    for(auto i: pole)
    {
        std::cout<<i<<" ";
    }
    */


    return 0;
}
