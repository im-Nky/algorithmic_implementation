#include<iostream>
//#include<array>
using namespace std;

int main()
{
    int a[10][10];
    int fc=0,fr=0,lc,lr;
    cout<<"\n Enter value of lr & lc less than 10"<<endl;
    cin>>lr>>lc;
    cout<<"\n Enter value of matrix"<<endl;
    for(int i=0;i<=lr-1;i++)
    {
        for(int j=0;j<=lc-1;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"\nThe Spiral Order Is"<<endl;
    while(fr<lr && fc<lc)
    {
        for(int i=fc;i<lc;++i)
        {
            cout<<a[fr][i]<<"\t";
        }
        fr++;    

        for(int i=fr;i<lr;++i)
        {
            cout<<a[i][lc-1]<<"\t";             
        }  
        lc--;
    
        if(fc<lc)
        {
            for(int i=lc-1;i>=fc;--i)
            {
                cout<<a[lr-1][i]<<"\t";
            }
            lr--;    
        }

        if(fr<lr)
        {
            for(int i=lr-1;i>=fr;--i)
            {
                cout<<a[i][fc]<<"\t";
            }
            fc++;    
        }
    }       
}
