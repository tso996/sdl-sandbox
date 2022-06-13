#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* texturesheet, SDL_Renderer* ren){
    renderer = ren;
    objTexture = TextureManager::LoadTexture(texturesheet, ren);
}

void GameObject::update(){
    xpos = 0;
    ypos = 0;

    srcRect.h = 128;
    srcRect.w = 128;
    srcRect.x = 0;
    srcRect.y = 0;

    destRect.x = xpos;
    destRect.y = ypos;
    destRect.w = srcRect.w;
    destRect.h = srcRect.h;
}

void GameObject::render(){
    SDL_RenderCopy(renderer, objTexture, &srcRect, &destRect);
}