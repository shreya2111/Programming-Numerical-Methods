#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
#include<cstring>

#define pi 3.14
using namespace std;

int main()
{
    
    cout<<"Langranges Interpolating Polynomial"<<endl;
    int i,j,k,n=3;
    float x,y;

    cout<<"Number of points you want to provide? ";
    cin>>n;
    cout<<n<<endl;

    float a[n][2];
    for(i=0;i<n;i++)
      {
	cin>>a[i][0]>>a[i][1];
      }

    //float a[3][2]={{0,2},{1,3},{-1,3}};
    //float a[13][2]={{2000,1014004},{2002,1045845},{2003,1049700},{2004,1065071},{2005,1080264},{2006,1095352},{2007,1129866},{2008,1147996},{2009,1166079},{2010,1173108},{2011,1189173},{2012,1205074}};  
    
    //float a[3][2]={{0,0},{pi/4,0.707},{pi/2,1}};

    //float a[20][2]={{1994,10.24},{1995,10.22},{1996,8.98},{1997,7.25},{1998,13.17},{1999,4.84},{2000,4.02},{2001,3.77},{2002,4.31},{2003,3.81},{2004,3.77},{2005,4.25}};

    cout<<"enter the point where you want interpolated value: "<<endl;
    cin>>x;
    cout<<x<<endl;
    
    
    // getting interpolating value 
   
    float f=0,p=1;   
    for(i=0;i<n;i++)
      { for(j=0;j<n;j++)
	  {
	    if(i!=j)
	      { 
		p=p*(x-a[j][0])/(a[i][0]-a[j][0]); 
	      }     
	   }
	f=f+p*a[i][1]; 
	p=1;
      }
    cout<<fixed;
    cout<<setprecision(4)<<f<<endl;
    cin.get(); 
    getchar();

    return 0;
    
}
