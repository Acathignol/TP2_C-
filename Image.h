
#ifndef IMAGE_H__
#define IMAGE_H__

#include <iostream>
#include <cstring>
#include <fstream>


class Image
{
  
public:
  
//================================== GETTERS ===============================
  int w(void) const;
  int h(void) const;
  int maxval(void) const;
  
private:
  
  int w_;/*!< Image width (pixels)  */
  int h_;/*!< Image heigth (pixels) */
  int mv_;/*!< Maximum canal value   */
  /*!< Image data            */
  
};



/**
 * \brief    Get image width
 * \details  --
 * \param    int w
 * \return   \e void
 */

/**
 * \brief    Get image height
 * \details  --
 * \param    int h
 * \return   \e void
 */

/**
 * \brief    Set maximum clanal value
 * \details  --
 * \param    int maxVal
 * \return   \e void
 */

#endif // IMAGE_H__
