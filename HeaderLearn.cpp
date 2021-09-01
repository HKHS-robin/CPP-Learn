#include<iostream>
#include<cstdlib>
#include<ctime>
#include"two.h"
using namespace std;
using namespace two;
int main(){
	int A;
	int a[38];//401
	int b[38];//402
	int c[38];//403
	int d[38];//404
	int e[38];//405
	int f[38];//406 
	cout<<"高一班級座號:"<<endl; 
	
	for(int i=1;i<38;i++){
		cout<<"401 "<<i<<"號"<<endl;
		a[i]=i+40100;
	}
	for(int i=1;i<38;i++){
		cout<<"402 "<<i<<"號"<<endl;
		b[i]=i+40200;
	}
	for(int i=1;i<38;i++){
		cout<<"403 "<<i<<"號"<<endl;
		c[i]=i+40300;
	}
	for(int i=1;i<37;i++){
		cout<<"404 "<<i<<"號"<<endl;
		d[i]=i+40400;
	}
	for(int i=1;i<38;i++){
		cout<<"405 "<<i<<"號"<<endl;
		e[i]=i+40500;
	}
	for(int i=1;i<20;i++){
		cout<<"406 "<<i<<"號"<<endl;
		f[i]=i+40600;
	}
	cout<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"輸入抽籤碼";
	
	cin>>A;
	while(A>8){
		A=A/2;
	}
	
	
	//------------------------------------------------
	int y;
	y=rand()%8+1;
	pp();
	cout<<401<<"班:"<<endl;
	if(y==1){	
		for(int i=0;i<37;i++){
			cout<<a[i+1]<<" 的直屬為 "<<j1[i]<<endl;
		}
	}
	if(y==2){
		for(int i=0;i<37;i++){
			cout<<a[i+1]<<" 的直屬為 "<<j2[i]<<endl;
		}
	}if(y==3){
		for(int i=0;i<37;i++){
			cout<<a[i+1]<<" 的直屬為 "<<j3[i]<<endl;
		}
	}if(y==4){
		for(int i=0;i<37;i++){
			cout<<a[i+1]<<" 的直屬為 "<<j4[i]<<endl;
		}
	}if(y==5){
		for(int i=0;i<37;i++){
			cout<<a[i+1]<<" 的直屬為 "<<j5[i]<<endl;
		}
	}if(y==6){
		for(int i=0;i<37;i++){
			cout<<a[i+1]<<" 的直屬為 "<<j6[i]<<endl;
		}
	}if(y==7){
		for(int i=0;i<37;i++){
			cout<<a[i+1]<<" 的直屬為 "<<j7[i]<<endl;
		}
	}if(y==8){
		for(int i=0;i<37;i++){
			cout<<a[i+1]<<" 的直屬為 "<<j8[i]<<endl;
		}
	}
	//----------------------------------------
	pp();
	//----------------------------------------
	cout<<402<<"班:"<<endl;
	if(y==1){	
		for(int j=37,i=0;j<37+36,i<37;i++,j++){
			cout<<b[i+1]<<" 的直屬為 "<<j1[j]<<endl;
		}
	}
	if(y==2){
		for(int j=37,i=0;j<37+36,i<37;i++,j++){
			cout<<b[i+1]<<" 的直屬為 "<<j2[j]<<endl;
		}
	}if(y==3){
		for(int j=37,i=0;j<37+36,i<37;i++,j++){
			cout<<b[i+1]<<" 的直屬為 "<<j3[j]<<endl;
		}
	}if(y==4){
		for(int j=37,i=0;j<37+36,i<37;i++,j++){
			cout<<b[i+1]<<" 的直屬為 "<<j4[j]<<endl;
		}
	}if(y==5){
		for(int j=37,i=0;j<37+36,i<37;i++,j++){
			cout<<b[i+1]<<" 的直屬為 "<<j5[j]<<endl;
		}
	}if(y==6){
		for(int j=37,i=0;j<37+36,i<37;i++,j++){
			cout<<b[i+1]<<" 的直屬為 "<<j6[j]<<endl;
		}
	}if(y==7){
		for(int j=37,i=0;j<37+36,i<37;i++,j++){
			cout<<b[i+1]<<" 的直屬為 "<<j7[j]<<endl;
		}
	}if(y==8){
		for(int j=37,i=0;j<37+36,i<37;i++,j++){
			cout<<b[i+1]<<" 的直屬為 "<<j8[j]<<endl;
		}
	}
	//----------------------------------------
	pp();
	//73 used---------------------------------
	cout<<403<<"班:"<<endl;
	if(y==1){	
		for(int j=74,i=0;j<74+36,i<37;i++,j++){
			cout<<c[i+1]<<" 的直屬為 "<<j1[j]<<endl;
			if(j>103){
				break;
			}
		}
	}
	if(y==2){
		for(int j=74,i=0;j<74+36,i<37;i++,j++){
			cout<<c[i+1]<<" 的直屬為 "<<j2[j]<<endl;
			if(j>103){
				break;
			}
		}
	}if(y==3){
		for(int j=74,i=0;j<74+36,i<37;i++,j++){
			cout<<c[i+1]<<" 的直屬為 "<<j3[j]<<endl;
			if(j>103){
				break;
			}
		}
	}if(y==4){
		for(int j=74,i=0;j<74+36,i<37;i++,j++){
			cout<<c[i+1]<<" 的直屬為 "<<j4[j]<<endl;
			if(j>103){
				break;
			}
		}
	}if(y==5){
		for(int j=74,i=0;j<74+36,i<37;i++,j++){
			cout<<c[i+1]<<" 的直屬為 "<<j5[j]<<endl;
			if(j>103){
				break;
			}
		}
	}if(y==6){
		for(int j=74,i=0;j<74+36,i<37;i++,j++){
			cout<<c[i+1]<<" 的直屬為 "<<j6[j]<<endl;
			if(j>103){
				break;
			}
		}
	}if(y==7){
		for(int j=74,i=0;j<74+36,i<37;i++,j++){
			cout<<c[i+1]<<" 的直屬為 "<<j7[j]<<endl;
			if(j>103){
				break;
			}
		}
	}if(y==8){
		for(int j=74,i=0;j<74+36,i<37;i++,j++){
			cout<<c[i+1]<<" 的直屬為 "<<j8[j]<<endl;
			if(j>103){
				break;
			}
		}
	}
	
	//new array
	int z;//new int
	z=A+2;
	if(z>8){
		z=rand()%8+1;
	}
	
	if(z==1){
		for(int i=31;i<37;i++){
			cout<<c[i+1]<<" 的直屬為 "<<j1[i-31]<<endl;
		}
	}
	if(z==2){
		for(int i=31;i<37;i++){
			cout<<c[i+1]<<" 的直屬為 "<<j2[i-31]<<endl;
		}
	}
	if(z==3){
		for(int i=31;i<37;i++){
			cout<<c[i+1]<<" 的直屬為 "<<j3[i-31]<<endl;
		}
	}
	if(z==4){
		for(int i=31;i<37;i++){
			cout<<c[i+1]<<" 的直屬為 "<<j4[i-31]<<endl;
		}
	}
	if(z==5){
		for(int i=31;i<37;i++){
			cout<<c[i+1]<<" 的直屬為 "<<j5[i-31]<<endl;
		}
	}
	if(z==6){
		for(int i=31;i<37;i++){
			cout<<c[i+1]<<" 的直屬為 "<<j6[i-31]<<endl;
		}
	}
	if(z==7){
		for(int i=31;i<37;i++){
			cout<<c[i+1]<<" 的直屬為 "<<j7[i-31]<<endl;
		}
	}
	if(z==8){
		for(int i=31;i<37;i++){
			cout<<c[i+1]<<" 的直屬為 "<<j8[i-31]<<endl;
		}
	}
	
	//----------------------------------------
	pp();
	//40332後為新單，陣列用到[5]--------------
	
	cout<<404<<"班:"<<endl;
	if(z==1){
		for(int i=0;i<36;i++){
			cout<<d[i+1]<<" 的直屬為 "<<j1[i+6]<<endl;
		}
	}
	if(z==2){
		for(int i=0;i<36;i++){
			cout<<d[i+1]<<" 的直屬為 "<<j2[i+6]<<endl;
		}
	}
	if(z==3){
		for(int i=0;i<36;i++){
			cout<<d[i+1]<<" 的直屬為 "<<j3[i+6]<<endl;
		}
	}
	if(z==4){
		for(int i=0;i<36;i++){
			cout<<d[i+1]<<" 的直屬為 "<<j4[i+6]<<endl;
		}
	}
	if(z==5){
		for(int i=0;i<36;i++){
			cout<<d[i+1]<<" 的直屬為 "<<j5[i+6]<<endl;
		}
	}
	if(z==6){
		for(int i=0;i<36;i++){
			cout<<d[i+1]<<" 的直屬為 "<<j6[i+6]<<endl;
		}
	}
	if(z==7){
		for(int i=0;i<36;i++){
			cout<<d[i+1]<<" 的直屬為 "<<j7[i+6]<<endl;
		}
	}
	if(z==8){
		for(int i=0;i<36;i++){
			cout<<d[i+1]<<" 的直屬為 "<<j8[i+6]<<endl;
		}
	}


    //----------------------------------------
    pp();
    //i從36-----------------------------------
    cout<<405<<"班:"<<endl;
    if(z==1){
    	for(int i;i<37;i++){
    		cout<<e[i+1]<<" 的直屬為"<<j1[i+36]<<endl; 
		}
	}
	if(z==2){
    	for(int i;i<37;i++){
    		cout<<e[i+1]<<" 的直屬為"<<j2[i+36]<<endl; 
		}
	}
	if(z==3){
    	for(int i;i<37;i++){
    		cout<<e[i+1]<<" 的直屬為"<<j3[i+36]<<endl; 
		}
	}
	if(z==4){
    	for(int i;i<37;i++){
    		cout<<e[i+1]<<" 的直屬為"<<j4[i+36]<<endl; 
		}
	}
	if(z==5){
    	for(int i;i<37;i++){
    		cout<<e[i+1]<<" 的直屬為"<<j5[i+36]<<endl; 
		}
	}
	if(z==6){
    	for(int i;i<37;i++){
    		cout<<e[i+1]<<" 的直屬為"<<j6[i+36]<<endl; 
		}
	}
	if(z==7){
    	for(int i;i<37;i++){
    		cout<<e[i+1]<<" 的直屬為"<<j7[i+36]<<endl; 
		}
	}
	if(z==8){
    	for(int i;i<37;i++){
    		cout<<e[i+1]<<" 的直屬為"<<j8[i+36]<<endl; 
		}
	}
	//----------------------------------------
    pp();
    //i從73-----------------------------------
    cout<<406<<"班:"<<endl;
    if(z==1){
    	for(int i;i<19;i++){
    		cout<<f[i+1]<<" 的直屬為 "<<j1[i+73]<<endl;
		}
	}
	if(z==2){
    	for(int i;i<19;i++){
    		cout<<f[i+1]<<" 的直屬為 "<<j2[i+73]<<endl;
		}
	}
	if(z==3){
    	for(int i;i<19;i++){
    		cout<<f[i+1]<<" 的直屬為 "<<j3[i+73]<<endl;
		}
	}
	if(z==4){
    	for(int i;i<19;i++){
    		cout<<f[i+1]<<" 的直屬為 "<<j4[i+73]<<endl;
		}
	}
	if(z==5){
    	for(int i;i<19;i++){
    		cout<<f[i+1]<<" 的直屬為 "<<j5[i+73]<<endl;
		}
	}
	if(z==6){
    	for(int i;i<19;i++){
    		cout<<f[i+1]<<" 的直屬為 "<<j6[i+73]<<endl;
		}
	}
	if(z==7){
    	for(int i;i<19;i++){
    		cout<<f[i+1]<<" 的直屬為 "<<j7[i+73]<<endl;
		}
	}
	if(z==8){
    	for(int i;i<19;i++){
    		cout<<f[i+1]<<" 的直屬為 "<<j8[i+73]<<endl;
		}
	}
    system("pause");
    pp();
    end();
    system("pause");
    
	return 0;
}
