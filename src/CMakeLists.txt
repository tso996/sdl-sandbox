
add_executable(sdlGame main.cpp)

include_directories(../include/SDL2 ../include/SDL2_image ../include/GameEngine)
# include_directories(../lib/SDL2)

target_link_libraries(sdlGame gameLib ${CMAKE_SOURCE_DIR}/lib/SDL2/libSDL2-2.0.0.dylib ${CMAKE_SOURCE_DIR}/lib/SDL2_image/libSDL2_image-2.0.0.dylib)
# include_directories(${root_SOURCE_DIR}/include)

# We need this directory, and users of our library will need it too
# target_include_directories(sdlGame PUBLIC ../include/SDL2)

target_compile_features(sdlGame PRIVATE cxx_std_17)

