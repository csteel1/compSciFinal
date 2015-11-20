//
//  House.cpp
//  Final Project
//
//  Created by Eric on 11/19/15.
//  Copyright © 2015 Eric. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "House.h"

bool House::getBasement() {
    return basement;
};

float House::getPrice() {
    return price;
};

float House::getSize() {
    return size;
};

float House::getLand() {
    return land;
};

int House::getBaths() {
    return baths;
};

int House::getBeds() {
    return beds;
};

int House::getFloors() {
    return floors;
};

int House::getYearBuilt() {
    return yearBuilt;
};

int House::getHouseNum() {
    return houseNum;
};

std::string House::toString() {
    //makes everything a string
    std::string returnThis = "";
    returnThis = returnThis + "House number: " + std::to_string(houseNum) + "\nHouse Price: $" + std::to_string(price) + "\nSquare Footage: " + std::to_string(size) + "sq ft\nLand size: " + std::to_string(land) + "sq ft\nBathrooms: " + std::to_string(baths) + "\nBedrooms: " + std::to_string(beds) + "\nFloors: " + std::to_string(floors) + "\nBasement: " + std::to_string(basement) + "\n Year built: " + std::to_string(yearBuilt) + "\n\n\n";
    
    return returnThis;
    
};

void House::setPrice(float newPrice) {
    price = newPrice;
};

void House::setSize(float newSize) {
    size = newSize;
};

void House::setLand(float newLand) {
    land = newLand;
};

void House::setBeds(int newBeds) {
    beds = newBeds;
};

void House::setBaths(int newBaths) {
    baths = newBaths;
};

void House::setFloors(int newFloors) {
    floors = newFloors;
};

void House::setBasement(bool newBasement){
    basement = newBasement;
};



void House::setYearBuilt(int newYear) {
    yearBuilt = newYear;
};

void House::setHouseNum(int newNum) {
    houseNum = newNum;
};














