//
//  ImgSize.hpp
//  imgSize
//
//  Created by tridiak on 21/04/22.
//

#ifndef ImgSize_hpp
#define ImgSize_hpp

#ifdef __cplusplus

#include <stdio.h>
#include <vector>
#include "ImgSizeStruct.h"


/// Returns ImgSize struct of passed file. Will throw on any error or if the image is not a PNG file..
ImgSize PngImageSize(const char* file);


/// Returns ImgSize struct of passed file. Will throw on any error or if the image is not a GIF file.
ImgSize GifImageSize(const char* file);

/// Returns array of ImgSize structs of passed file. Will throw on any error or if the image is not a JPG file.<br>
/// JPEG files can possess multiple image sizes: one for image, one for thumbnail.
std::vector<ImgSize> JpgImageSize(const char* file);

#endif

#endif /* ImgSize_hpp */
