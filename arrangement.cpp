#include <iostream>
using namespace std;
int main( )
{
 	int grade[10];
    int i=0,j=0,temp;
    cout<<"請輸入10筆成績資料："<<endl;
    for (i=0;i<10;i++)
        cin>>grade[i];
    
    for (i=1;i<10;i++){   
        for (j=0;j<10-i;j++){  
  	  		if (grade[j]<grade[j+1]){  
  	  			temp=grade[j];		
  	  			grade[j]=grade[j+1];  
  	  			grade[j+1]=temp;     
			}
	    }
	} 
	cout<<"氣泡排序後";
	for(j=0;j<10;j++)
	cout<<grade[j]<<" ";
	int S, M, L = 0, R = 9;
	cout << "\n請輸入要查詢的分數：";
	cin >> S;
    while (L<=R){ 
    	M = (L+R) / 2;
  		if (grade[M]== S){
  	  	    cout<<S<< "分在班上排名第" <<M+1 <<"名";
		    return 0;  	
		}
		else if (grade[M]<S){  
  			R=M-1;		
		}
		else if (grade[M]>S){
  			L=M+1;		
		}
		else cout<<"不再陣列中";
	}
}
