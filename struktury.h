// Damian Grzybowski

#ifndef ZADANIE_5_STRUKTURY_H
#define ZADANIE_5_STRUKTURY_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

 struct naglowekPliku {
    short bfType;
    int bfSize;
    short bfReserved1;
    short bfReserved2;
    int bfOffBits;
};
 struct naglowekObrazka {
    int biSize;
    int biWidth;
    int biHeight;
    short biPlanes;
    short biBitCount;
    int biCompression;
    int biSizeImage;
    int biXPelsPerMeter;
    int biYPelsPerMeter;
    int biClrUsed;
    int biClrImportant;
};
#endif //ZADANIE_5_STRUKTURY_H
