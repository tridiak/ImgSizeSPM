# ImgSize

Simple SPM library which retrieves image sizes for jpeg, gif & png files without loading the entire file into memory.
The library uses C/C++ for the data retrieval. Allowing for use by non-swift code.
The only swift function is `GetImageSize`.
It retrieves the image size for the passed path or returns nil for any error.

The SPM has three smiley image files for testing purposes. All are 1024x1024.
