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

    //--------------------------------------------------------------------------
    cv::Mat alce;
    alce = cv::imread("/home/decker/Ed/frame07-amp-16300-diff2.tif");
    HologramCleaner::bgs(alce);
    cv::imwrite("/home/decker/Ed/alpha.tif",alce);
    cv::imshow("Result", alce);
    cv::waitKey();
    return 0;
}

