#ifndef POLYDATA_H
#define POLYDATA_H

#include <iostream>
#include <string>
#include <vector>
#include "points.h"

using namespace std;

/// Declaração da classe Polydata, onde esta contém um vetor de ponteiros Point, que serve para
///  armazenar um ponto (x,y,z) no espaço e assim poder trabalhar com o mesmo;
class Polydata{
private:
    /** Vetor de ponteiros do tipo Point*/
    vector<Point*> points;
public:
    Polydata(const char *arc);
    ~Polydata();
    /** Método para printar os pontos*/
    void print();

    /** Método para teste */
    void saveToFile(const char* arc);

    double getX();
    double getY();
    double getZ();
    void connect_points();
    int sizePolygons();
};

#endif /*POLYDATA_H*/