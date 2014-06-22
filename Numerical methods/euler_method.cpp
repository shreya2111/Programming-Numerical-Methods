#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{

            
    float f,x=0,y=1,h,x1,y1,sol;
    int i,j,n;
    
    cout<<"Input step size: "<<endl;
    cin>>h;
    
    
    cout<<"Enter the number of iterations: "<<endl;
    cin>>n;
    
    //REMOVE comments below for eq1 and 2
    //cout<<"Enter the exact solution: "<<endl;
//    cin>>sol;
    
    
    cout<<"The solution using euler method is: "<<endl;
    for(i=0;i<=n;i++)
    {
                               //eq1
                              f=x+y;
                              
                              //eq2
                              //f=(y/3)*(8-y);   
                              
                              //eq3
                              //f=pow(x,2)+pow(y,2);
                              
                              
                              y1=y+h*f;
                                 x1=x+h;
                            
                                   //if(x1==1)
//                                   {
                               //REMOVE comments below for eq1 and 2      
                              //cout<<"x1: "<<x1<<" y1: "<<y1<<" percent error: "<<(abs(sol-y1)*100/sol)<<endl; 
                              cout<<"x1: "<<x1<<" y1: "<<y1<<endl; 
                              
                              x=x1;
                              y=y1;
                              
                       
    }
    
    
    
   getchar(); 
    
    cin.get();
    return 0;
}
