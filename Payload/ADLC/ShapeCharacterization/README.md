Description
===========
This folder contains python scripts that are meant to test parts of a shape detection algorithm I am working on.

The alogrithm assumes potential targets have already been cropped. The end functionalilty will scan all of these images and only
return the ones that have ground targets in them. This will comply with all standards that are stated in the AUVSI rules for the
ADLC task. These scripts are compiled using the python 2.7 on windows with opencv 2.4.10 (the current stable version)

Action/result chart:
====================
              cropped images input
                      |
                      |
              ---------------------
              |                   |
              |                   |
        Target detected     no target detected
              |                   |
              |                   |
         images saved       return to start
         
This is just showing how the code will work for testing purposes.

Algorithm description
=====================
The algorithm will consist of three parts:

-Image preprocessing

                -First we segment the image into 3 three different colors
                
                -the next step is to convert the image to the luv color space
                
                -Next we sum the u* and  v* channels together
                
                -Then we use a sobel filter to find changes in color
                
                -next we use canny edge detection
                
                  -This will allow the detector to detect the geometry of the target. If features arent drawn from the canny image then
                  the surf features will detect the intensity of the image. This is not the point of the algorithm. The algorithm is only 
                  meant to detect shapes not color.
    
-surf feature detection
              
                -just uses opencv's surf library
                
                  -should be faster than sift
    
-machine learning portion

                -still doing research on this portion going to try to impliment three types
                
                  -FLANN matching: currently being developed
                  
                    link: http://bit.ly/1tH9a6P
                    
                  -knn
                  
                    link: http://bit.ly/1vzLlba
                    
                  -svm
                  
                    link: http://bit.ly/1HjINq4

Whats been done
===============
-completed and tested surf feature detection

-completed and tested the preproccing method

-started implimenting flann matching

TODO
====
-impliment knn/svm detection

Files in folder
================
Matching-1: basic flann implementation still under development

meanClust-1: implementation/test of prepocessing algorithm

                -outputs the clustered image and edges detected from that image
  
surf_det-1: implementation/test of surf detector

                -shows the feautures being detected in the preprocessed image
