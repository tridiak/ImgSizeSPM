//
//  ImgSize.h
//  imgSize
//
//  Created by tridiak on 21/04/22.
//

#ifndef ImgSize_h
#define ImgSize_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ImgSizeStruct.h"

/// Get image dimensions for passed file.
/// Buffer will be zero'd before use.  On exit, ImgSizeList count is number of ImgSize items stored in others, not the byte count.
///
/// @Param islPtr. Call ImgSizeFree() when done.
/// @Return Returns enum ImgType value or -1 for error.
int GetImageSizeC(const char* file, ImgSizeList* islPtr);

/// Gets image dimensions for passed png file.
///
/// @Param islPtr. Call ImgSizeFree() when done.
/// @Return Returns -1 for error. Otherwise 1 for success.
int PngImageSizeC(const char* file, ImgSizeList* islPtr);

/// Gets image dimensions for passed gif file.
///
/// @Param islPtr. Call ImgSizeFree() when done.
/// @Return Returns -1 for error. Otherwise 1 for success.
int GifImageSizeC(const char* file, ImgSizeList* islPtr);

/// Gets image dimensions for passed jpeg file.
///
/// @Param islPtr. Call ImgSizeFree() when done.
/// @Return Returns -1 for error. Otherwise returns ImgSizeList::count.
int JpgImageSizeC(const char* file, ImgSizeList* islPtr);

#ifdef __cplusplus
}
#endif


#endif /* ImgSize_h */
