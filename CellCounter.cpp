/* 
 * File:   CellCounter.cpp
 * Author: decker
 * 
 * Created on 19 de Junho de 2015, 11:22
 */

#include "CellCounter.h"
#include <vector>

CellCounter::~CellCounter() {
    std::cout << "Death of a Cell Counter (be sad)\n";

}

void CellCounter::circleTransform(cv::Mat& img, cv::Mat& original) {

    //cv::GaussianBlur(img, img, cv::Size(9, 9), 2, 2);
    std::vector<cv::Vec3f> circles;
    cv::HoughCircles(img, circles, CV_HOUGH_GRADIENT, 1, img.rows/10, 200, 100, 1, 0);

    for (int i = 0; i < circles.size(); i++) {
        cv::Point center((int) circles[i][0], (int) circles[i][1]);
        int radius = (int) circles[i][2];
        cv::circle(original, center, 3, cv::Scalar(0, 255, 0), -1, 8, 0);
        cv::circle(original, center, radius, cv::Scalar(0, 0, 255), 3, 8, 0);
    }
}

