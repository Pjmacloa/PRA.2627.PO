#ifndef ROBOT_H
#define ROBOT_H

class RoboticArm {
private:
    double x;
    double y;
    double z;
    bool hold;

public:
    // Constructor
    RoboticArm(double x, double y, double z, bool sujetando);

    // Métodos consultores
    double getX();
    double getY();
    double getZ();
    bool Is_holding();

    // Métodos
    void grab();
    void release();
    void move(double x, double y, double z);
};

#endif

