#pragma once

#include <iostream>
#include <vector>
#include <cmath>
#include <thread>
#include <chrono>
#include <algorithm>

class Point3D {
private:
    float x, y, z;

public:
    Point3D(float x, float y, float z) : x(x), y(y), z(z) {}

    float getX() const { return x; }
    float getY() const { return y; }
    float getZ() const { return z; }

    void setX(float val) { x = val; }
    void setY(float val) { y = val; }
    void setZ(float val) { z = val; }
};

class CubeRender {
private:
    int width, height;
    float A, B, C;
    std::vector<float> zBuffer;
    std::vector<char> buffer;

    const int backgroundChar = '.';
    const float incrementspeed = 0.6;
    const float K1 = 40;
    const int distanceFromCam = 100;

    float calculateX(float i, float j, float k) const;
    float calculateY(float i, float j, float k) const;
    float calculateZ(float i, float j, float k) const;

    Point3D rotate(float i, float j, float k) const {
        float x = j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) +
            j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C); 

        float y = j * cos(A) * cos(C) + k * sin(A) * cos(C) -
            j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) -
            i * cos(B) * sin(C);

        float z = k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);

        return Point3D(x, y, z);
    }

    void addCube(float size, float offset, const std::string& faces) {
        for (float cubeX = -size; cubeX < size; cubeX += incrementspeed) {
            for (float cubeY = -size; cubeY < size; cubeY += incrementspeed) {
                drawPoint(cubeX, cubeY, -size, faces[0], offset);
                drawPoint(size, cubeY, cubeX, faces[1], offset);
                drawPoint(-size, cubeY, -cubeX, faces[2], offset);
                drawPoint(-cubeX, cubeY, size, faces[3], offset);
                drawPoint(cubeX, -size, -cubeY, faces[4], offset);
                drawPoint(cubeX, size, cubeY, faces[5], offset);
            }
        }
    }

public:
    CubeRender(int w, int h) : width(w), height(h), A(0), B(0), C(0) {
        zBuffer.resize(height * width);
        buffer.resize(height * width);
    }


    void drawPoint(float cubeX, float cubeY, float cubeZ, char ch, float horizontalOffset) {
        Point3D p = rotate(cubeX, cubeY, cubeZ);

        float z = p.getZ() + distanceFromCam;
        float ooz = 1.0f / z;

        int xp = (int)(width / 2 + horizontalOffset + K1 * ooz * p.getX() * 2);
        int yp = (int)(height / 2 + K1 * ooz * p.getY());

        int idx = xp + yp * width;
        if (idx >= 0 && idx <width * height) {
            if (ooz > zBuffer[idx]) {
                zBuffer[idx] = ooz;
                buffer[idx] = ch;
            }
        }
    }
    
    void renderFrame() {
        std::fill(buffer.begin(), buffer.end(), backgroundChar);
        std::fill(zBuffer.begin(), zBuffer.end(), 0.0f);

        addCube(20, -40, "@$~#;+");
        addCube(10, 10, "@$~#;+");
        addCube(5, 40, "@$~#;+");

        std::cout << "\x1b[H";
        for(int k = 0; k < width * height; k++) {
            if (k % width == 0 && k != 0) {
                std::cout << "\n";
            }
            std::cout << buffer[k];
        }

        A += 0.05f;
        B += 0.05f;
        C += 0.01f;
    }
};

