#include<iostream>
#include <climits>
using namespace std;
int main(){

    int i,j;
    int max=INT_MIN;
    int row=0,column=0;

    int secMax=INT_MIN;
    int secRow=0,secColumn=0;

    int min=INT_MAX;
    int minRow=0,minColumn=0;

    int secMin=INT_MAX;
    int secMinRow=0,secMinColumn=0;
    

    int a[3][4];
    for(i=0;i<3;i++)
    for(j=0;j<4;j++)
    cin>>a[i][j];


    //find max;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(a[i][j]>max){
                max=a[i][j];
                row=i;
                column=j;
            }
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(a[i][j]>secMax && a[i][j]<max){
                secMax=a[i][j];
                secRow=i;
                secColumn=j;
            }
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(a[i][j]<min ){
                min=a[i][j];
                minRow=i;
                minColumn=j;

            }
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(a[i][j]<secMin && a[i][j]>min){
                secMin=a[i][j];
                secMinRow=i;
                secMinColumn=j;
            }
        }
    }

    cout<<"first max ,row and column :"<<endl;
    cout<<"max = "<<max<<endl;
    cout<<"row = "<<row+1<<endl;
    cout<<"column = "<<column+1<<endl;


    cout<<"second max,row and column "<<endl;
    cout<<"secMax = "<<secMax<<endl;
    cout<<"secRow = "<<secRow+1<<endl;
    cout<<"seccolumn = "<<secColumn+1<<endl;


    cout<<"first min,row and column "<<endl;
    cout<<"min = "<<min<<endl;
    cout<<"min Row = "<<minRow+1<<endl;
    cout<<"min column = "<<minColumn+1<<endl;

    cout<<"second min,row and column "<<endl;
    cout<<"secmin = "<<secMin<<endl;
    cout<<"ssecmin Row = "<<secMinRow+1<<endl;
    cout<<"secmin column = "<<secMinColumn+1<<endl;

    return 0;

}