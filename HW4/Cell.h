/*
* File:   Cell.cpp
* Author: Ozan YILDIZ
*
* Created on November 25, 2015, 4:06 PM
*/


#ifndef CELL_H
#define CELL_H

using namespace std;

class Cell {
public:
    Cell();
	Cell(const char);
	Cell(const int, const string);
	Cell(const int, const string, const char);
    Cell(const Cell& orig);
    
    // Ancestors & Mutators Functions
    int getRow() const { return axisX; }
    void setRow(const int newAxisRow) { axisX = newAxisRow; }

    string getColumn() const { return axisY; }
    void setColumn(const string newAxisColumn) { axisY = newAxisColumn; }

    char getWho() const { return who; }
    void setWho(const char newWho) { who = newWho; }

private:
    int axisX;
    string axisY;
    char who;
};

#endif /* CELL_H */
