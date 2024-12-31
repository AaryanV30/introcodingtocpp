// * * * * * * * *
// *             *
// *             *
// * * * * * * * * ...pattern(first and last clmn/row)
#include<iostream>
int main(){
    int n,i,j,o;
    std::cout<<"Enter for no. of rows: ";
    std::cin>>n;
    std::cout<<"Enter for no. of columns: ";
    std::cin>>o;
    for(i=1;i<=n;i++){
        for(j=1;j<=o;j++){
            if(i==1 || j==1 || i==n ||j==o) std::cout<<"* ";
            else std::cout<<"  ";
        }
        std::cout<<std::endl;
    }
    return 0;
}