/* 
 * File:   HologramCleaner.cpp
 * Author: decker
 * 
 * Created on June 17, 2015, 9:18 AM
 */

#include "HologramCleaner.h"
//------------------------------------------------------------------------------

void HologramCleaner::bgs(cv::Mat& hologram) {
    cv::Mat img;
    hologram.copyTo(img);

    if (hologram.type() != CV_8UC1) {
        cv::cvtColor(hologram, img, CV_BGR2GRAY);
        img.convertTo(img, CV_8UC1);
    }
    cv::Mat alce;
    img.copyTo(alce);
    alce.convertTo(alce, CV_8UC1);
    double otsu = cv::threshold(img, alce, 50, 255, cv::THRESH_OTSU + cv::THRESH_BINARY);
    img = HologramCleaner::filtroDeckeriano(img, otsu, .55);


    img.copyTo(hologram);
}
//------------------------------------------------------------------------------

cv::Mat HologramCleaner::filtroDeckeriano(cv::Mat img, double otsu, double multiplier) {
    cv::Mat gray;
    gray = img.clone();
    gray.convertTo(gray, CV_8U);
    for (int linha = 0; linha < gray.rows; linha++) {
        for (int coluna = 0; coluna < gray.cols; coluna++) {
            if (gray.at<uchar>(linha, coluna) > (uchar) otsu * multiplier) {

                gray.at<uchar>(linha, coluna) = 0;

            } else {
                gray.at<uchar>(linha, coluna) = 255;
            }
        }
    }
    return gray;
}
//------------------------------------------------------------------------------

void HologramCleaner::open(cv::Mat& hologram, cv::Mat kernel, cv::Point anchor = cv::Point(-1, -1)) {

    cv::erode(hologram, hologram, kernel, anchor);
    cv::dilate(hologram, hologram, kernel, anchor);

}



