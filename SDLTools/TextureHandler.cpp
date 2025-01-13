#include "TextureHandler.h"

SDL_Texture *TextureHandler::makeTexture( const char path[], SDL_Renderer *renderer )
{
    SDL_Surface *tempSurface = nullptr;
    SDL_Texture *tempTexture = nullptr;

    tempSurface = IMG_Load( path );
    if(!tempSurface)
    {
        std::cerr << "Failed to load image " << path << "! SDL_Error: " << SDL_GetError() << "\n";
    } else
    {
        tempTexture = SDL_CreateTextureFromSurface(renderer, tempSurface);
        if(!tempTexture)
            std::cerr << "Failed to create texture from " << path << "! SDL_Error: " << SDL_GetError() << "\n";
    }

    SDL_DestroySurface(tempSurface);
    tempSurface = nullptr;

    return tempTexture;
}

SDL_Texture *TextureHandler::renderTextureFromFont( const char inputString[], TTF_Font *gFont, SDL_Renderer *renderer, SDL_Color renderColor, float *fRenderedWidth, float *fRenderedHeight )
{
    SDL_Surface *textSurface = nullptr;
    SDL_Texture *textTexture = nullptr;

    textSurface = TTF_RenderText_Solid( gFont, inputString, 0, renderColor);
    if( !textSurface )
    {
        std::cerr << "Failed to create surface from string! SDL_Error: " << SDL_GetError() << "\n";
    } else
    {
        textTexture = SDL_CreateTextureFromSurface( renderer, textSurface );
        *fRenderedWidth = textSurface->w;
        *fRenderedHeight = textSurface->h;

        if( !textTexture )
        {
            std::cerr << "Failed to create texture from string! SDL_Error: " << SDL_GetError() << "\n";
        }
    }

    SDL_DestroySurface(textSurface);
    return textTexture;
}
