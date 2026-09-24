#include <stdio.h>

class RoboticArm{
	private
		double x,y,z;
		bool hold;
	public
	RoboticArm(double x, double y, double z, bool hold){
		this -> x = x;
		this -> y = y;
		this -> z = z;
		this -> hold = hold;
	}
	

	double getX(){
		return x;}
	double getX(){
                return y;}
	double getX(){
                return z;}
	bool Is_holding(){
                return hold;}
	void grab(){
		hold = true;
	}
	void release(){
		hold = false;
	}
	void move(double x, double y, double z,){
		this -> x = x;
                this -> y = y;
                this -> z = z;
	}
};







