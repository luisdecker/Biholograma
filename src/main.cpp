/* 
 * File:   main.cpp
 * Author: decker
 *
 * Created on June 17, 2015, 8:40 AM
 */

#include <cstdlib>
#include <opencv2/highgui/highgui.hpp>
#include "HologramCleaner.h"
#include "../CellCounter.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cv::namedWindow("Result", CV_WINDOW_KEEPRATIO);

    //--------------------------------------e------------------------------------
    cv::Mat alce;
    alce = cv::imread("/home/decker/Ed/frame07-amp-16300-diff2.tif");
    cv::Mat original = alce.clone();
    HologramCleaner::bgs(alce);
    CellCounter::circleTransform(alce, original);

    cv::imshow("Result", original);
    cv::waitKey();
    cv::imwrite("/home/decker/Ed/bgs.tif", alce);



    //   cv::erode(alce, alce, cv::getStructuringElement(cv::MORPH_CROSS, cv::Size(3, 3)));
    //cv::erode(alce, alce, cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(1, 3)));
    //  cv::dilate(alce, alce, cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(3, 3)));
    cv::erode(alce, alce, cv::getStructuringElement(cv::MORPH_RECT, cv::Size(1, 3), cv::Point(0, 2)));
    cv::erode(alce, alce, cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 1), cv::Point(2, 0)));
    cv::erode(alce, alce, cv::getStructuringElement(cv::MORPH_CROSS, cv::Size(3, 3)));
    cv::dilate(alce, alce, cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(3, 3)));

    cv::imwrite("/home/decker/Ed/alpha.tif", alce);
    //cv::imshow("Result", alce);
    //cv::waitKey();
    return 0;
}

