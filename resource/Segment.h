#ifndef SEGMENT_H
#define SEGMENT_H

#include "convolution.h"
#include "smooth.h"
#define SHARPEN_LAP_0 0
#define SHARPEN_LAP_1 1
#define SHARPEN_LAP_2 2
#define SHARPEN_LAP_3 3

#define LAPLACE_MASK_SIZE 3
#define SOBEL_MASK_SIZE 3
#define ROBERT_MASK_SIZE 3


#define EDGE_DETECTOR_ROBERT 1
#define EDGE_DETECTOR_PREWITT 2
#define EDGE_DETECTOR_KIRSCH 3
#define EDGE_DETECTOR_SOBEL 4
#define EDGE_DETECTOR_LOG 5
#define EDGE_DETECTOR_DOG 6
#define EDGE_DETECTOR_LAPLACE 7
#define EDGE_DETECTOR_CANNY 8
#define MORETHAN 1
#define LESSTHAN 0
double Sobel(double *src,double *dst,int width,int height);
double Laplace(double *src,double *dst,int width,int height);
double Robert(double *src,double *dst,int width,int height);
double Prewitt(double *src,double *dst,int width,int height);
double Kirsch(double *src,double *dst,int width,int height);
void Canny();
double LoG(double *src,double *dst,int width,int height,int m_width,int m_height,double deta);
double DoG();
void Threshold(double *src,double *dst,int width,int height,double threshold,int type);
void EdgeDetection(double *src,double *dst,int width,int height,int detector,double threshold,int m_width,int m_height,double deta);
#endif