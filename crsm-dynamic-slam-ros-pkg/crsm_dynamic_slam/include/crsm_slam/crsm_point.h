/*
 This file is part of CrsmSlam.
 CrsmSlam is free software: you can redistribute it and/or modify 
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 CrsmSlam is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with CrsmSlam.  If not, see <http://www.gnu.org/licenses/>.

 Author : Manos Tsardoulias, etsardou@gmail.com
 Organization : AUTH, PANDORA Robotics Team
*/

#ifndef CRSM_POINT_HEADER
#define CRSM_POINT_HEADER

namespace crsm_slam
{
  /**
    @struct CrsmPoint
    @brief Holds the variables for a laser ray casted at a specific point
   **/
  struct CrsmPoint
  {
    int x; //!< The x coordinate of the point
    int y; //!< The y coordinate of the point
    double theta; //!< Angle relative to robot's orientation
    
    /**
      @brief Default costructor
      @return void
     **/
    CrsmPoint() {}
    
    /**
      @brief Constructor
      @return void
     **/
    CrsmPoint(int _x, int _y): x(_x), y(_y) {}
    
    /**
      @brief Overloading of operator ==
      @param point [const CrsmPoint &] : the point for the operator to be applied
      @return The result of the operator [bool]
     **/
    bool operator == (const CrsmPoint& point) const
    {
      if(this->x == point.x && this->y == point.y)
        return true;
        
      return false;
    }
  };
}

#endif
