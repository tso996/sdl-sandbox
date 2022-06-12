add_library(gameLib GameEngine/Game.cpp)

include_directories(SDL2)

target_link_libraries(gameLib ${CMAKE_SOURCE_DIR}/lib/SDL2/libSDL2-2.0.0.dylib)