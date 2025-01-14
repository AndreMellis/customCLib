add_library(customCLib STATIC
            SDLTools/LTimer.cpp             
)   

target_include_directories( customCLib PUBLIC
 "."
)