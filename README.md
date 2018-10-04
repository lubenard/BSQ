# BSQ
We'll do it!!!!!!! :P

![Alt Text](https://media.giphy.com/media/b7f0X8Okk1uyk/giphy.gif)

## What remains:
#### - [Résolu le 16/09/18] Faire une fonction init qui reinitialise les struct + var a chaque i++ dans main.c.
#### - [Résolu le 16/09/18] Marche pour deux arguments mais pas pour 3 (segfault).
#### - [Résolu le 16/09/18] Affichage des map a l'envers.
#### - [Résolu le 16/09/18] L'algo fonctionne pour la deuxieme map mais pas pour la premiere (ordre d'affichage inverse, ne pas oublier).
#### - [Résolu le 24/09/18] L'algo de verification de la grille faisait n'importe quoi si les characteres de la grille étaient différent de '.' et 'o'.
#### - [Résolu le 4/10/18] Pas de lecture depuis l'entrée standard.

## Comment l'utiliser:
Génerer une grille de 100x100 avec 20% de densité:
```
./grille.sh 100 100 20 > grille
```
Génerer une grille de 20x10 avec 5% de densité:
```
./grille.sh 20 10 5 > grille
```
Compiler bsq:
```
make
```
Le lancer (BSQ peut prendre plusieurs grilles en paramètre):
```
./bsq grille1 grille2 grille3 etc...
```
OU:
```
./grille.sh 100 100 20 | ./bsq
```
pour le lire depuis l'entrée standard.

Remarque: créer une grille puis l'afficher avec cat fonctionne aussi sur l'entrée standard
Exemple:
```
./grille.sh 5 5 2 > t
cat t | ./bsq
```
