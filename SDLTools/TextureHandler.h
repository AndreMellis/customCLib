#ifndef TEXTUREHANDLER_HEADER_
#define TEXTUREHANDLER_HEADER_

#include <SDL3_image/SDL_image.h>
#include <SDL3_ttf/SDL_ttf.h>
#include <SDL3/SDL.h>
#include <iostream>

struct TextureHandler
{
    static SDL_Texture *makeTexture( const char path[], SDL_Renderer *renderer ); // takes in a png path and returns a texture
    static SDL_Texture *renderTextureFromFont( const char inputString[], TTF_Font *gFont, SDL_Renderer *renderer, SDL_Color renderColor = { 0, 0, 0, 255 }, float *fRenderedWidth = nullptr, float *fRenderedHeight = nullptr );
};

#endif