/* 
 * File:   HologramCleaner.h
 * Author: decker
 *
 * Created on June 17, 2015, 9:18 AM
 */

#ifndef HOLOGRAMCLEANER_H
#define	HOLOGRAMCLEANER_H

#include "opencv2/opencv.hpp"

class HologramCleaner {
public:
    static void bgs(cv::Mat& hologram);
    static void open(cv::Mat& hologram, cv::Mat kernel, cv::Point anchor);

    HologramCleaner();
    HologramCleaner(const HologramCleaner& orig);
    virtual ~HologramCleaner();
private:
    static cv::Mat filtroDeckeriano(cv::Mat img, double otsu, double multiplier);


};

#endif	/* HOLOGRAMCLEANER_H */

