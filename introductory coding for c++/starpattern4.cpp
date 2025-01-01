// *       *
//   *   *  
//     *    
//   *   *  
// *       * ...pattern of odd no./ forms a square
#include<iostream>
int main(){
    int n,i,j,o;
    std::cout<<"Enter n for no. of rows: ";
    std::cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            int m=i+j; // when the value of i and j are added to find position of stars of one of the diagonals, the sum always comes out to n+1.
            if(j==i || m==n+1) std::cout<<"* ";
            else std::cout<<"  ";
        }
        std::cout<<std::endl;
    }
    return 0;
}