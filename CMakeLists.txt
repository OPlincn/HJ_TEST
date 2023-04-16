cmake_minimum_required(VERSION 3.25)
project(HJ_homework3)

set(CMAKE_CXX_STANDARD 17)
set(X11_INCLUDE_DIR /opt/homebrew/Cellar/libx11/1.8.2/include)
#set(X11_LIBRARIES /opt/homebrew/Cellar/libx11/1.8.2/lib)
set(X11_LIBRARIES /opt/homebrew/Cellar/libx11/1.8.2/lib/libX11.dylib)
find_package(OpenCV 4.5 REQUIRED)
find_package(Eigen3 REQUIRED)
# find_package(X11 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${EIGEN3_INCLUDE_DIRS})
include_directories(${X11_INCLUDE_DIR})

add_executable(HJ_homework3 main.cpp armor_detection.cpp armor_detection.h robot_status.cpp robot_status.h number_dnn.cpp number_dnn.h)
target_link_libraries(HJ_homework3 ${OpenCV_LIBS} ${X11_LIBRARIES}) # drop out ${CAM_LIB}
