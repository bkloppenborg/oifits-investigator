cmake_minimum_required(VERSION 2.8) 
project(oifits-investigator CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
file(GLOB UI *.ui)

find_package(Qt4 COMPONENTS QtCore QtGui QtMain REQUIRED)
INCLUDE(${QT_USE_FILE})
QT4_WRAP_UI(FORMS ${UI})

file(GLOB SOURCE *.cpp)

# Now add the binary
add_executable(oifits-investigator ${SOURCE} ${FORMS})
target_link_libraries(oifits-investigator qcustomplot)
