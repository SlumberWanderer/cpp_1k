project("lab07_2")

file(GLOB SRC src/*.cpp src/*.cxx)

include_directories(include)

add_executable(${PROJECT_NAME} ${SRC}
        include/app.hpp
        src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE tabulation)
