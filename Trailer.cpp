//
//  Trailer.cpp
//  Final Project
//
//  Created by Eric on 11/19/15.
//  Copyright © 2015 Eric. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Trailer.h"

bool Trailer::getBasement() {
    return basement;
};

float Trailer::getPrice() {
    return price;
};

float Trailer::getSize() {
    return size;
};

float Trailer::getLand() {
    return land;
};

int Trailer::getBaths() {
    return baths;
};

int Trailer::getBeds() {
    return beds;
};

int Trailer::getFloors() {
    return floors;
};

int Trailer::getYearBuilt() {
    return yearBuilt;
};

int Trailer::getHouseNum() {
    return houseNum;
};

std::string Trailer::toString() {
    //makes everything a string
    std::string returnThis = "";
    returnThis = returnThis + "House number: " + std::to_string(houseNum) + "\nTrailer Price: $" + std::to_string(price) + "\nSquare Footage: " + std::to_string(size) + "sq ft\nLand size: " + std::to_string(land) + "sq ft\nBathrooms: " + std::to_string(baths) + "\nBedrooms: " + std::to_string(beds) + "\nFloors: " + std::to_string(floors) + "\nBasement: " + std::to_string(basement) + "\n Year built: " + std::to_string(yearBuilt) + "\n\n\n";
    
    return returnThis;
};


void Trailer::setPrice(float newPrice) {
    price = newPrice;
};

void Trailer::setSize(float newSize) {
    size = newSize;
};

void Trailer::setLand(float newLand) {
    land = newLand;
};

void Trailer::setBeds(int newBeds) {
    beds = newBeds;
};

void Trailer::setBaths(int newBaths) {
    baths = newBaths;
};

void Trailer::setFloors(int newFloors) {
    floors = newFloors;
};

void Trailer::setBasement(bool newBasement){
    basement = newBasement;
};


void Trailer::setYearBuilt(int newYear) {
    yearBuilt = newYear;
};

void Trailer::setHouseNum(int newNum) {
    houseNum = newNum;
};











