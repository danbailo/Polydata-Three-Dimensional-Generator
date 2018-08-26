/*! \mainpage My Personal Index Page
 *
 * \section intro_sec Introduction
 *
 * This is the introduction.
 *
 * \section install_sec Installation
 *
 * \subsection step1 Step 1: Opening the box
 *
 * etc...
 */

#include <iostream>
#include "polydata.h"
#include "points.h"

using namespace std;

int main(int argc, char const *argv[]){
    
    Polydata P("pontos.txt");

    P.print();

    P.saveToFile("pontos.vtk");

    P.getX();

    return 0;
}
