#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float x,y;
    int i;
    cout<<"enter the value of initial appx. x: ";
    cin>>x;
    cout<<endl;
    
    for(i=0;i<=30;i++)
    {
      y=exp(pow(x,2)-1); /* equation y for which iteration method approximates value   */
      
      

     cout<<"y= "<<y<<" and x= "<<x<<endl;
     if(fabs(y)>=0 and fabs(y)<0.01)
     {
                   cout<<"root at: "<<x<<" for the value of y= "<<y<<endl;
     }
     else
     {
         x=y;
     }
     
     std::cin.get();
                      
    }
    
    
    
    
    
}
