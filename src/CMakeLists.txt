cmake_minimum_required(VERSION 2.8) 
project(oifits-investigator CXX)

find_package(Qt4 COMPONENTS QtCore QtGui QtMain REQUIRED)
INCLUDE(${QT_USE_FILE})

file(GLOB SOURCE *.cpp)

# Now add the binary
add_executable(oifits-investigator ${SOURCE})
target_link_libraries(oifits-investigator qcustomplot)
