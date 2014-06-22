#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    
    float x0,x1,x2,y0,y1,y2;
    
    cout<<"Enter the initial approximations x0 and x1:  ";
    cin>>x0;
    cout<<"   ";
    cin>>x1;
    cout<<endl;
    int i,flag;
    for(i=0;i<=20;i++)
    {
                      cout<<"Iteration number: "<<i+1<<endl;
//                      y0=pow(x0,4)-x0-10; //x0
//                      y1=pow(x1,4)-x1-10;//x1

                        y0=x0-exp(-x0);
                        y1=x1-exp(-x1);

                      cout<<"y0: "<<y0<<" y1: "<<y1<<endl;
                      cout<<"x0: "<<x0<<" x1: "<<x1<<endl;
                      
                                            
                      if(y0*y1<0)
                      {
                                 x2=(x0*y1-x1*y0)/(y1-y0);
//                                 y2=pow(x2,4)-x2-10;//x2
                                   y2=x2-exp(-x2);
                                   
                                 cout<<"x2: "<<x2<<"  "<<"y2: "<<y2<<endl;
                                 if(fabs(y2)>=0 && fabs(y2)<0.01)
                                 {
                                          cout<<"The root is at "<<x2<<" for value of the function = "<<y2;
                                          i=41;
                                 }
                                 else if(y0*y2<0)
                                 {
                                     x1=x2;
                                     cout<<" in the else if: x0: "<<x0<<"  x1: "<<x1<<endl;
                                 }
                                 else
                                 {
                                     x0=x2;
                                     cout<<" in the else: x0: "<<x0<<"  x1: "<<x1<<endl;
                                 }
                                 
                                 
                      } 
                      else
                      {
                          cout<<"re-enter interval to continue, else press 1 to break"<<endl;
                          cin>>flag;
                          if(flag==1)
                          {
                          break;
                          }
                          else
                          {
                              cin>>x0;
                              cout<<endl;
                              cin>>x1;
                          }
                      }
                      
                      
                      std::cin.get();
                      
    }
    
    
}
