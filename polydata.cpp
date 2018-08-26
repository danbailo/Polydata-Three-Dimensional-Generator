#include <iostream>
#include <vector>
#include <string.h>
#include <stdio.h>
#include "polydata.h"
#include "points.h"

using namespace std;

void Polydata::saveToFile(const char *arc){
    FILE *f = fopen(arc,"w");
    double n_pontos = points.size();
    int i;
    char c, letra = '\n';

    fprintf(f,"# vtk DataFile Version 2.0\n");
    fprintf(f,"Piramide example\n");
    fprintf(f,"ASCII\n");
    fprintf(f,"DATASET POLYDATA\n");
    fprintf(f,"POINTS %lu float\n",points.size());
    fprintf(f,"POLYGONS %.lf %.lf\n",(n_pontos-2), ((n_pontos-2)*3+(n_pontos-2)));
    
    fclose(f);
}

int Polydata::sizePolygons(){
    int i=1;
    while(points.size() % 3 == 0){
    }
    return i;
}

Polydata::~Polydata(){
}

void Polydata::print(){
    for(Point* p:points){ //for each
        p->print();
    }
}

Polydata::Polydata(const char *arc){
    FILE *arq = fopen(arc,"r");
    
    if(!arq){
        printf("nao abri o arquivo");
        return;
    }
    char buff[256];
    int i=1;

    //para cada linha do arquivo até o final
    while((fgets(buff,256,arq))){
        if(strlen(buff)==255){
            printf("Error, the line of a file can not exceed 256 characters\n");
            return;
        }
        try{
            points.push_back(new Point(buff));
        }catch(const char* err){
            printf("erro na linha %i: %s\n",i,err);
        }
        i++;
    }
    fclose(arq);
}

double Polydata::getX(){
    cout << points.front()->x << endl;

    int tam = points.size();
    cout << tam << endl;

    for(int i = 0; i<tam; i++)
        cout << points[i]->x << endl;
    
    cout << "Index 1: " << points[1]->x << endl;

    // for(Point* point:points){
    //     cout << point->x << endl;
    // }
}

void Polydata::connect_points(){

}