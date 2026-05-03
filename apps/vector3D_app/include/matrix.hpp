#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>

class Matrix {
private:
    int rows_, cols_;
    std::vector<std::vector<double>> data_;
public:
    Matrix(int r, int c) : rows_(r), cols_(c), data_(r, std::vector<double>(c, 0.0)) {}

    int rows() const { return rows_; }
    int cols() const { return cols_; }

    double& operator()(int r, int c) { return data_.at(r).at(c); }
    const double& operator()(int r, int c) const { return data_.at(r).at(c); }

    Matrix operator+(const Matrix& other) const {
        if (rows_ != other.rows_ || cols_ != other.cols_)
            throw std::invalid_argument("Matrix dimensions must match for addition");
        Matrix result(rows_, cols_);
        for (int i = 0; i < rows_; i++)
            for (int j = 0; j < cols_; j++)
                result(i, j) = data_[i][j] + other.data_[i][j];
        return result;
    }

    Matrix operator-(const Matrix& other) const {
        if (rows_ != other.rows_ || cols_ != other.cols_)
            throw std::invalid_argument("Matrix dimensions must match for subtraction");
        Matrix result(rows_, cols_);
        for (int i = 0; i < rows_; i++)
            for (int j = 0; j < cols_; j++)
                result(i, j) = data_[i][j] - other.data_[i][j];
        return result;
    }

    Matrix operator*(const Matrix& other) const {
        if (cols_ != other.rows_)
            throw std::invalid_argument("Matrix dimensions mismatch for multiplication");
        Matrix result(rows_, other.cols_);
        for (int i = 0; i < rows_; ++i)
            for (int j = 0; j < other.cols_; ++j)
                for (int k = 0; k < cols_; ++k)
                    result(i, j) += data_[i][k] * other.data_[k][j];
        return result;
    }
};

inline std::ostream& operator<<(std::ostream& os, const Matrix& m) {
    for (int i = 0; i < m.rows(); ++i) {
        for (int j = 0; j < m.cols(); ++j)
            os << m(i, j) << "\t";
        os << std::endl;
    }
    return os;
}