
#include <iostream>
#include "Image.h"


int main()
{
  Image* img1 = new Image("m.ppm");
  
  Image* img2 = new Image(*img1);
  img2->desaturate();
  img2->save("/home/acathignol/C++/TP2/TP2-3BIM-2016/desaturate.ppm");
  
  Image* img3 = new Image(*img1);
  double matrix[9] = {1, 2, 1, 2, 4, 2, 1, 2, 1};
  img3->gaussian_blur(matrix);
  img3->save("/home/acathignol/C++/TP2/TP2-3BIM-2016/blur.ppm");
  
  delete img1;
  delete img2;
  delete img3;
  
  return EXIT_SUCCESS;
}
