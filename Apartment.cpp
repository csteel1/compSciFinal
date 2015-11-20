//
//  Apartment.cpp
//  Final Project
//
//  Created by Eric on 11/19/15.
//  Copyright © 2015 Eric. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Apartment.h"


bool Apartment::getBasement() {
    return basement;
};

float Apartment::getPrice() {
    return price;
};

float Apartment::getSize() {
    return size;
};

float Apartment::getLand() {
    return land;
};

int Apartment::getBaths() {
    return baths;
};

int Apartment::getBeds() {
    return beds;
};

int Apartment::getFloors() {
    return floors;
};

int Apartment::getYearBuilt() {
    return yearBuilt;
};

int Apartment::getHouseNum() {
    return houseNum;
};

std::string Apartment::toString() {
    //makes everything a string
    std::string returnThis = "";
    returnThis = returnThis + "House number: " + std::to_string(houseNum) + "\nRent: $" + std::to_string(price) + "\nSquare Footage: " + std::to_string(size) + "sq ft\nLand size: " + std::to_string(land) + "sq ft\nBathrooms: " + std::to_string(baths) + "\nBedrooms: " + std::to_string(beds) + "\nFloors: " + std::to_string(floors) + "\nBasement: " + std::to_string(basement) + "\n Year built: " + std::to_string(yearBuilt) + "\n\n\n";
    
    return returnThis;
};


void Apartment::setPrice(float newPrice) {
    price = newPrice;
};

void Apartment::setSize(float newSize) {
    size = newSize;
};

void Apartment::setLand(float newLand) {
    land = newLand;
};

void Apartment::setBeds(int newBeds) {
    beds = newBeds;
};

void Apartment::setBaths(int newBaths) {
    baths = newBaths;
};

void Apartment::setFloors(int newFloors) {
    floors = newFloors;
};

void Apartment::setBasement(bool newBasement){
    basement = newBasement;
};

void Apartment::setYearBuilt(int newYear) {
    yearBuilt = newYear;
};

void Apartment::setHouseNum(int newNum) {
    houseNum = newNum;
};



