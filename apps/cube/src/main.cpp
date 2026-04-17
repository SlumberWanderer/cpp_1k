#include "cube.hpp"

int main() {
    CubeRender engine(160, 44);

    std::cout << "\x1b[2J";

    while (true) {
        engine.renderFrame();

        std::this_thread::sleep_for(std::chrono::milliseconds(16));
    }

    return 0;
}