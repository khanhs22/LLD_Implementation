cmake_minimum_required(VERSION 3.10)

# Tên project
project(ParkingLot)

# Thêm tiêu chuẩn C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Định nghĩa các thư mục chứa file header
include_directories(${CMAKE_SOURCE_DIR})

# Thêm tất cả các file .cpp vào danh sách các file nguồn
set(SOURCES
    Money.cpp
    Product.cpp
    ProductManager.cpp
    State.cpp
    DispenseState.cpp
    IdleState.cpp
    ReadyState.cpp
    ReturnChangeState.cpp
    VendingMachine.cpp
    Main.cpp
)

# Tạo executable từ các file nguồn
add_executable(ParkingLot ${SOURCES})
