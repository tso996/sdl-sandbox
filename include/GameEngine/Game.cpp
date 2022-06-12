#include "Game.hpp"

Game::Game(){
    
}

Game::~Game(){

}

void Game::init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen){
    int flags = 0;
    if(fullscreen){
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if(SDL_Init(SDL_INIT_EVERYTHING) == 0){
        std::cout<< "subsystems are initialised.."<<std::endl;
        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        if(window){
            std::cout<<"Window is ready.."<<std::endl;
        }
        
        renderer = SDL_CreateRenderer(window, -1, 0);
        if(renderer){
            SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
            std::cout<<"Render is ready.."<<std::endl;
        }

        isRunning = true;
    
    }else{
        std::cout<<"subsystems ecountered a problem.."<<std::endl;
        isRunning = false;
    }
}

void Game::clean(){
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout<<"Clean complete.."<<std::endl;
}

void Game::handleEvents(){
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            std::cout<<"Closing.."<<std::endl;
            isRunning = false;
            break;
        default:
            break;
    }

}

void Game::render(){
    SDL_RenderClear(renderer);
    //we add stuff to render here
    SDL_RenderPresent(renderer);
}

void Game::update(){
    
}

