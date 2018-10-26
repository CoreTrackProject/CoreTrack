#pragma once

#include <vector>
#include <QList>

#include "Image/ImageContainer.h"
#include "DTO/FeatureContainer.h"

#include <opencv2/core.hpp>
#include <opencv2/opencv_modules.hpp>
#include <opencv2/core.hpp>
#include <opencv2/features2d.hpp>
#include <opencv2/xfeatures2d.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

class SIFTDescriptorExtractor
{
    SIFTDescriptorExtractor();

    QList<cv::Mat> StartExtraction(QList<ImageContainer> &imgContainerList, QList<FeatureContainer> &featureContainerList);
};
