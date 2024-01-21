//
//  ImgSizeStruct.h
//  imgSize
//
//  Created by tridiak on 21/04/22.
//

#ifndef ImgSizeStruct_h
#define ImgSizeStruct_h

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

enum ImgType {
	imgTypePNG = 0,
	imgTypeGIF = 1,
	imgTypeJPG = 2,
	imgTypeUnk = 999,
};

typedef struct ImgSize {
	uint32_t w;
	uint32_t h;
} ImgSize;

typedef struct ImgSizeList {
	ImgSize first;
	uint16_t count;
	ImgSize* others;
} ImgSizeList;

void ImgSizeFree(ImgSizeList* islPtr);

#ifdef __cplusplus
}
#endif

#endif /* ImgSizeStruct_h */
