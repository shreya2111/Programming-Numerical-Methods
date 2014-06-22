#include<iostream>
#include<cmath>



using namespace std;

int main()
{
    float x,y,y_d;
    int i;
    //float n=23;
    cout<<"enter initial point: ";
    cin>>x;
    
    for(i=0;i<=10;i++)
    {
    //eq1
    //y=x*x-n;
    //y_d=2*x;
    
    
    //eq 2
    //y=(1/x)-n;
//    y_d=(-1/(x*x));

      //eq 3
      //y=(x*x*x)-n;
//      y_d=3*x*x;

        //eq4
//        y=cos(x)-0.5;
//        y_d=-sin(x);

      
          //eq5
//          y=x-exp(-x);
//          y_d=1+exp(-x);

            //eq6
            y=pow(x,2)-log(x)-1;
            y_d=2*x-1/x;
    
          if(fabs(y)>=0 && fabs(y)<0.00001)   //0.01 for accuracy till 2 decimal places, 0.00001 for 5 dec places 
          {
            cout<<"root is at point: "<<x<<" for value of y= "<<y<<endl;
            }
    
    else{
         x=x-(y/y_d);
	 cout<<"value of Y(y>=0.01 or y<0): "<<y<<endl;
         }
	  
    std::cin.get();
    
    } 
       
    
        
     }
