//
//  Trailer.h
//  Final Project
//
//  Created by Eric on 11/17/15.
//  Copyright © 2015 Eric. All rights reserved.
//

#ifndef Trailer_h
#define Trailer_h
#include <iostream>
#include "Property.h"

class Trailer : public Property {
    //this extends the property ADT!
    
private:
    float price;
    float size; //square footage of inside
    float land; //square footage of property
    int beds; //number of bedrooms
    int baths; //number of bathrooms
    int floors;
    bool basement; //is there a basement?
    int yearBuilt;
    int houseNum;
    
public:
    float getPrice();
    float getSize();
    float getLand();
    int getBaths();
    int getBeds();
    int getFloors();
    bool getBasement();
    int getYearBuilt();
    int getHouseNum();
    std::string toString();
    void setPrice(float newPrice);
    void setSize(float newSize);
    void setLand(float newLand);
    void setBeds(int newBeds);
    void setBaths(int newBaths);
    void setFloors(int newFloors);
    void setBasement(bool newBasement);
    void setYearBuilt(int newYear);
    void setHouseNum(int newNum);
};






#endif /* Trailer_h */
