//
//  Property.h
//  Final Project
//
//  Created by Eric on 11/17/15.
//  Copyright © 2015 Eric. All rights reserved.
//

#ifndef Property_h
#define Property_h
#include <stdlib.h>
#include <stdio.h>
#include <iostream>


class Property {
    //an ADT extended to houses, apartments, trailers, etc
    
public:
    //getters
    virtual float getPrice()=0;
    virtual float getSize()=0;
    virtual float getLand()=0;
    virtual int getBeds()=0;
    virtual int getBaths()=0;
    virtual int getFloors()=0;
    virtual bool getBasement()=0;
    virtual int getYearBuilt()=0;
    virtual int getHouseNum()=0;
    //put all of the attributes of a property into a string
    virtual std::string toString()=0;
    //setters
    virtual void setPrice(float newPrice)=0;
    virtual void setSize(float newSize)=0;
    virtual void setLand(float newLand)=0;
    virtual void setBeds(int newBeds)=0;
    virtual void setBaths(int newBaths)=0;
    virtual void setFloors(int newFloors)=0;
    virtual void setBasement(bool newBasement)=0;
    virtual void setYearBuilt(int newYear)=0;
    virtual void setHouseNum(int newNum)=0;
};






#endif /* Property_h */
