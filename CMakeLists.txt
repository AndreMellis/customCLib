add_library(customCLib STATIC
            SDLTools/LTimer.cpp             
            SDLTools/TextureHandler.cpp             
)   

target_include_directories( customCLib PUBLIC
 "."
)