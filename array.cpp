//
// Created by Piotr on 16.05.2024.
//
#include "array.h"
#define SIZE 10
#include <iostream>

#include <fstream>
using namespace std;

void enterValue(int *array) {
    int temp = 0;
    cout << "Input values to array:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "array[" << i << "]=";
        cin >> temp;
        array[i] = temp;
    }
}

void printArray(int array[]) {
    for (int i = 0; i < SIZE; ++i) {
        cout << "array[" << i << "]=" << array[i] << endl;
    }
}

int findMaximumValue(int array[]) {
    int max = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] > max) max = array[i];
    }
    return max;
}

int findMiniumValue(int array[]) {
    int min = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] < min) min = array[i];
    }
    return min;
}

float calculateAverage(int array[]) {
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum = sum + array[i];
    }
    float avg = (float) sum / SIZE;
    return avg;
}

void fileenter(int array[]) {
    ofstream zapis("text.txt");
    for (int u = 0; u < SIZE; ++u) {
        zapis.width(10);
        zapis << array[u];

    }
    zapis.close();
}

void readFile(int array[]) {
    int temp;
    ifstream odczyt("text.txt");
    cout << "file content:" << endl;
    for (int i = 0; i < SIZE; i++) {
        odczyt >> temp;
        array[i]=temp;
        cout << "array[" << i << "]=" << array[i] << endl;
    }
    odczyt.close();
}