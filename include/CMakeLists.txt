add_library(gameLib GameEngine/Game.cpp)

include_directories(SDL2 SDL2_image)

# target_link_libraries(gameLib ${CMAKE_SOURCE_DIR}/lib/SDL2/libSDL2-2.0.0.dylib) #It's okay to ignore this line because these dylib files will be linked with the executable along with gameLib