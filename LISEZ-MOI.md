# Projet_COO

Composition du groupe :
- Vincent COMMIN
- Louis LEENART

# Structure du code

Le code proposé est composé de plusieurs espaces de noms :
* game
* game::difficulty
* game::entity
* game::figures
* game::roll

## game

Contient :
* `constant.hpp`, c'est à dire un ensemble de constantes utilisées de manière récurrente dans plusieurs endroit du programme.
* `game_manager`, objet principale du jeu, point d'entrée du yahtzee. 

## game::difficulty

Contient les différentes difficultés que l'on peut sélectionner pour jouer au yahtzee. Chacune des difficultés héritent de la classe abstraite `level`, qui demande l'implémentation de la méthode `turn`. Les niveaux disponibles sont ceux proposés dans le sujet (facile, moyen, difficile, impossible). Pour ajouter un nouveau niveau, il faut faire une nouvelle classe qui hérite de `level` et qui implémente `turn` suivant les règles voulues.

## game::entity

Contient les entités qui peuvent jouer au yahtzee. L'entité principale est `player`, cependant l'entité `ia` existe, cependant elle n'a pas été implémentée en code. 

## game::figures

Contient toutes les figures qu'il est possible de faire au yahtzee, plus précisément délimité en deux partie : 
* la partie supérieure, avec `sup_part` qui est une classe templétée sur le nombre choisi (1 à 6).
* la partie inférieur, avec toutes les autres classes qui héritent de la classe abstraite `figure`. Chacune de ces classes implémente `parse` pour déterminer si les dès correspondent correctement à la figure demandé.

## game::roll

Contient les dès ainsi que leur encapsulation avec le lancer (`roll`). 

# Utilisation

# Notes

