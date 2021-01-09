#include <iostream>
using namespace std;
int main()
{

    float a,min=0,t=0;

    for(int i=1;i<=4;i++)
  {
      cin>>a;
     if (a<min)
   {
      t = min ;
      min = a;
   }
     else if(a> t)
       t = a ;
}
cout<<t<<endl;
    return 0;
}
