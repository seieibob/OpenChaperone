#pragma once

#include <opencv2/opencv.hpp>

#include "OpenChaperoneGlobals.hpp"
#include "ofxTimeMeasurements.h"

/**
Abstract class defining common members that any deriving class will need to be
used in a CameraCapture implementation.
*/
class CaptureBase {
public:
	virtual ~CaptureBase() {};
	virtual bool Init(const int deviceIndex) = 0;
	virtual void Update() = 0;
	virtual const bool FrameIsReady() = 0;
	virtual cv::Mat GetFrame() = 0;

protected:
	int width;
	int height;

	int deviceIndex;

};