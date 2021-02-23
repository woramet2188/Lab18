#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
	double lw,lh,ww,hh;
	if(r1.x<r2.x){
		lw = r1.w-(r2.x-r1.x);
	}else{
		lw = r2.w-(r1.x-r2.x);
	}
	if(r1.y<r2.y){
		lh = r2.h-(r2.y-r1.y);
	}else{
		lh = r1.h-(r1.y-r2.y);
	}
	if(r1.w<r2.w){
		ww = r1.w;
	}else{
		ww = r2.w;
	}
	if(r1.h<r2.h){
		hh = r1.h;
	}else{
		hh = r2.h;
	}
	if(lw>ww) lw = ww;
	if(lh>hh) lh = hh;
	if(lw<0) lw = 0;
	if(lh<0) lh = 0;
	
	return lw*lh;

}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};
	cout << overlap(R1,R2);	
}
