#pragma once

#include <iostream>
#include <vector>
using namespace std;

 class matrix
 {
 protected:
    int size;
    vector<vector<int>> data;
    
    virtual bool isAllowed(int i, int j) const {
      return true;
    }
    virtual void afterSet(int i, int j, int value) {}

public:
    matrix(int n) : size(n), data(n, vector<int>(n, 0)) {};

    virtual ~matrix() {}

    void print() {
      for (int i = 0; i < size; ++i) {
         for (int j = 0; j < size; ++j) {
            cout << data[i][j] << "\t";
         }
         cout << endl;
      }
    };

    bool isValid(int i, int j) const {
      if (i < 0 || i >= size || j < 0 || j >= size) {
         cout << "Error: array overflow" << endl;
         return false;
      }
         return true;
    }

    virtual bool set(int i, int j, int value) {
      if (!isValid(i,j)) return false;
      if (isAllowed(i,j)) {
         data[i][j] = value;
         afterSet(i, j, value);
         return true;
      } else {
         cout << "Erorr: position for this matrix type" << endl;
         return false;
      }
    }
};

class LowerTriangular : public matrix {
private:
   bool isAllowed(int i, int j) const override {
      return i >= j;
   }
public:
   LowerTriangular(int n) : matrix(n) {}
};

class UpperTriangular : public matrix {
private:
   bool isAllowed(int i, int j) const override {
      return i <= j;
   }
public:
   UpperTriangular(int n) : matrix(n) {}
};

class DiagonalMatrix : public matrix {
private:
   bool isAllowed(int i, int j) const override {
      return i == j;
   }
public:
   DiagonalMatrix(int n) : matrix(n) {}
};

class SymmetricMatrix : public matrix {
private:
   void afterSet(int i, int j, int value) override {
      data[j][i] = value;
   }
public:
   SymmetricMatrix(int n) : matrix(n) {}
};
