//#include "cgl_linux.cpp"
//#include "cgl6.h"
#include <iostream>
#include <array>
int main()
{
	//using namespace cov::gl;
	std::array<int,100> args;
	for(int in=0; in<100; ++in) {
		args.at(in)=0;
	}
	bool lose(false),win(false);
	int x(0),y(0);
	int count=0;
	bool finish=false;
	while(!finish) {
		int i=rand()%99;
		if(args.at(i)!=1) {
			std::cout<<i<<std::endl;
			args.at(i)=1;
			++count;
		}
		if(count==10) {
			finish=true;
		}
	}
	while(!lose&&!win&&std::cin>>x>>y) {
		std::cout<<"x="<<x<<",y="<<y<<std::endl;
		if(args.at((y*10)+x)==1) {
			std::cout<<"BOOM! You lose"<<std::endl;
			lose=true;
		} else {
			int num_b=0;
			if(x!=0&&x!=9&&y!=0&&y!=9) {
				if(args.at((y-1)*10+x)==1) {
					++num_b;
				}
				if(args.at((y+1)*10+x)==1) {
					++num_b;
				}
				if(args.at((y-1)*10+x-1)==1) {
					++num_b;
				}
				if(args.at((y-1)*10+x+1)==1) {
					++num_b;
				}
				if(args.at((y+1)*10+x-1)==1) {
					++num_b;
				}
				if(args.at((y+1)*10+x+1)==1) {
					++num_b;
				}
				if(args.at((y)*10+x-1)==1) {
					++num_b;
				}
				if(args.at((y)*10+x+1)==1) {
					++num_b;
				}
				std::cout<<num_b<<std::endl;
			}
			if(x!=0&&x!=9&&y==0){

				if(args.at((y+1)*10+x)==1) {
					++num_b;
				}
				if(args.at((y+1)*10+x-1)==1) {
					++num_b;
				}
				if(args.at((y+1)*10+x+1)==1) {
					++num_b;
				}
				if(args.at((y)*10+x-1)==1) {
					++num_b;
				}
				if(args.at((y)*10+x+1)==1) {
					++num_b;
				}
			}
			if(x!=0&&x!=9&&y!=0&&y==9)
		}
	}
	return 0;
}