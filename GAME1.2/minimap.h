#ifndef FONCTIONS_H_
#define FONCTIONS_H_
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h> 



typedef struct
{
SDL_Surface *img_map;
SDL_Rect pos_map;
SDL_Surface *img_joueur;
SDL_Rect pos_joueur;
}minimap;


void affichertemp (Uint32 *temps,SDL_Surface *screen,TTF_Font *police);
void initmap(minimap *m); 
void afficherminimap(minimap m,SDL_Surface *screen); 
SDL_Rect MAJMinimap (SDL_Rect posJoueur,int redemensionement,SDL_Rect camera);
void afficherminimap (minimap m,SDL_Surface *screen);
#endif
