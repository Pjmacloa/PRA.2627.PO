#include <stdio.h>
#include "RoboticArm.h"


RoboticArm::RoboticArm(double x, double y, double z, bool hold){

		this -> x = x;
		this -> y = y;
		this -> z = z;
		this -> hold = hold;
	}
	

	double RoboticArm::getX(){
		return x;}
	double RoboticArm::getY(){
                return y;}
	double RoboticArm::getZ(){
                return z;}
	bool RoboticArm::Is_holding(){
                return hold;}
	void RoboticArm::grab(){
		hold = true;
	}
	void RoboticArm::release(){
		hold = false;
	}
	void RoboticArm::move(double x, double y, double z){
		this -> x = x;
                this -> y = y;
                this -> z = z;
	}








