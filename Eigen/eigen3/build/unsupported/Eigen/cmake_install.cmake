# Install script for directory: D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/Eigen3")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/unsupported/Eigen" TYPE FILE FILES
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/AdolcForward"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/AlignedVector3"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/ArpackSupport"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/AutoDiff"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/BVH"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/EulerAngles"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/FFT"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/IterativeSolvers"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/KroneckerProduct"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/LevenbergMarquardt"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/MatrixFunctions"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/MoreVectorization"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/MPRealSupport"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/NonLinearOptimization"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/NumericalDiff"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/OpenGLSupport"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/Polynomials"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/Skyline"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/SparseExtra"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/SpecialFunctions"
    "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/Splines"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/unsupported/Eigen" TYPE DIRECTORY FILES "D:/x/GAMES/GAMES101/eigen3/unsupported/Eigen/src" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/x/GAMES/GAMES101/eigen3/build/unsupported/Eigen/CXX11/cmake_install.cmake")

endif()

