/* 
 * File:   main.cpp
 * Author: decker
 *
 * Created on June 17, 2015, 8:40 AM
 */

#include <cstdlib>
#include <opencv2/highgui/highgui.hpp>
#include "HologramCleaner.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cv::namedWindow("Result", CV_WINDOW_KEEPRATIO);

    //--------------------------------------e------------------------------------
    cv::Mat alce;
    alce = cv::imread("/home/decker/Ed/frame07-amp-16300-diff2.tif");
    HologramCleaner::bgs(alce);
    cv::erode(alce, alce, cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(5, 1)));
    cv::erode(alce, alce, cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(1, 5)));
    cv::dilate(alce, alce, cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(3, 3)));
    cv::imwrite("/home/decker/Ed/alpha.tif", alce);
    cv::imshow("Result", alce);
    cv::waitKey();
    return 0;
}

