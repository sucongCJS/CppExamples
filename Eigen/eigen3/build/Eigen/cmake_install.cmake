# Install script for directory: D:/x/GAMES/GAMES101/eigen3/Eigen

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen" TYPE FILE FILES
    "D:/x/GAMES/GAMES101/eigen3/Eigen/Cholesky"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/CholmodSupport"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/Dense"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/Eigen"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/Eigenvalues"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/Geometry"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/Householder"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/IterativeLinearSolvers"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/Jacobi"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/LU"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/MetisSupport"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/OrderingMethods"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/PaStiXSupport"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/PardisoSupport"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/QR"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/QtAlignedMalloc"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/SPQRSupport"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/SVD"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/Sparse"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/SparseCholesky"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/SparseCore"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/SparseLU"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/SparseQR"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/StdDeque"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/StdList"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/StdVector"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/SuperLUSupport"
    "D:/x/GAMES/GAMES101/eigen3/Eigen/UmfPackSupport"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen" TYPE DIRECTORY FILES "D:/x/GAMES/GAMES101/eigen3/Eigen/src" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

