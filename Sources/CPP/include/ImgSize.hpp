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
//#include <fstream>
#include <vector>
#include "ImgSizeStruct.h"

ImgSize PngImageSize(const char* file);
ImgSize GifImageSize(const char* file);
std::vector<ImgSize> JpgImageSize(const char* file);
//void PrintImgStruct(std::ostream& io, const ImgSize& is);
#endif

#endif /* ImgSize_hpp */
