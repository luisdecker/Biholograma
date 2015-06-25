/* 
 * File:   CellCounter.h
 * Author: decker
 *
 * Created on 19 de Junho de 2015, 11:22
 */

#ifndef CELLCOUNTER_H
#define	CELLCOUNTER_H
#include <iostream>
#include "opencv.hpp"

class CellCounter {
public:
    CellCounter();
    CellCounter(const CellCounter& orig);
    virtual ~CellCounter();
    static void circleTransform(cv::Mat& img, cv::Mat& original);
private:

};

#endif	/* CELLCOUNTER_H */

