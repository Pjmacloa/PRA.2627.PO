#include <iostream>
#include "RoboticArm.h"

using namespace std;

int main() {

    // Crear una instancia de RoboticArm
    RoboticArm robot(0.0, 0.0, 0.0, false);

    // Mostrar posición inicial
    cout << "Posicion inicial:" << endl;
    cout << "X: " << robot.getX() << endl;
    cout << "Y: " << robot.getY() << endl;
    cout << "Z: " << robot.getZ() << endl;
    cout << "Sujetando objeto: " << robot.Is_holding() << endl;

    // Mover el brazo
    robot.move(10.0, 20.0, 30.0);

    cout << "\nDespues de mover el brazo:" << endl;
    cout << "X: " << robot.getX() << endl;
    cout << "Y: " << robot.getY() << endl;
    cout << "Z: " << robot.getZ() << endl;

    // Coger un objeto
    robot.grab();

    cout << "\nDespues de coger el objeto:" << endl;
    cout << "Sujetando objeto: " << robot.Is_holding() << endl;

    return 0;
}

