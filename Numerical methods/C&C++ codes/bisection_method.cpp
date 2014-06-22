#include<iostream>
#include<cmath> /*  Library used for trigonometric fucntions */

using namespace std;

int main()
{
    float a,b,c,y1,y2,y3;
    int i;
    
    cout<<"Enter the interval: "<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    
    for(i=0;i<=20;i++)
    {

      cout<<"Print iteration #: "<<i<<endl;   
      
      /* Initial approximations */

      y1=cos(a)-0.5;
      y2=cos(b)-0.5;

      
      cout<<y1<<"  "<<y2<<endl;
                      
                      
                      
         if(y1*y2<0)
         {
	   c=(a+b)/2; /* mid point calculation */
                    cout<<c<<endl;
                    
                  
                    
                    y3=cos(c)-0.5;


                    cout<<"y3: "<<y3<<endl;
                    
                    
                    if(fabs(y3)>=0 && fabs(y3)<0.00001)/* Precision condition */
                    {        int flag;
		             
		             cout<<"the root is at: "<<c<<endl;
                             cout<<"To terminate the program press 1: "<<endl;
                             cin>>flag;
                                    if(flag==1)
                                   {
                                        break;
                                   }
                    }
                    else if(y1*y3<0)
                    {
                         b=c;
                         cout<<"b=c";
                     }
                    else
                    {
                        a=c;
                        cout<<"a=c";
                    }
                    
         }
         else
         {
	   cout<<"y1*y2>=0"<<endl; /* New approximation for a and b required */
         }
                               
    
    
    
    std::cin.get();
    }
}
