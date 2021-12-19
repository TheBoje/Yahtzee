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
* `constant.hpp`, c'est-à-dire un ensemble de constantes utilisées de manière récurrente dans plusieurs endroits du programme.
* `game_manager`, objet principal du jeu, point d'entrée du yahtzee. 

## game::difficulty

Contient les différentes difficultés que l'on peut sélectionner pour jouer au yahtzee. Chacune des difficultés héritent de la classe abstraite `level`, qui demande l'implémentation de la méthode `turn`. Les niveaux disponibles sont ceux proposés dans le sujet (facile, moyen, difficile, impossible). Pour ajouter un nouveau niveau, il faut faire une nouvelle classe qui hérite de `level` et qui implémente `turn` suivant les règles voulues.

## game::entity

Contient les entités qui peuvent jouer au yahtzee. L'entité principale est `player`, cependant l'entité `ia` existe, cependant elle n'a pas été implémentée en code. 

## game::figures

Contient toutes les figures qu'il est possible de faire au yahtzee, plus précisément délimité en deux parties : 
* la partie supérieure, avec `sup_part` qui est une classe templétée sur le nombre choisi (1 à 6).
* la partie inférieure, avec toutes les autres classes qui héritent de la classe abstraite `figure`. Chacune de ces classes implémente `parse` pour déterminer si les dés correspondent correctement à la figure demandée.

## game::roll

Contient les dès ainsi que leur encapsulation avec le lancer (`roll`). 

# Utilisation

Les règles utilisés pour ce projet sont les règles du yahtzee que l'on peut trouver ici
[https://fr.wikipedia.org/wiki/Yahtzee#Yahtzee_Domaine_public](https://fr.wikipedia.org/wiki/Yahtzee#Yahtzee_Domaine_public).

Nous y avons apporté quelques variantes en y ajoutant différents niveaux de difficultés 
comme proposé dans le sujet. Ainsi :

- Easy : Le joueur peut remplir les figures dans l'ordre qu'il veut.
- Medium : Le joueur doit d'abord remplir la partie supérieure puis la partir inférieur
- Hard : Les figures doivent être remplient dans l'ordre (1, 2, ..., yahtzee puis chance)
- Impossible : Les figures doivent être remplient dans un ordre aléatoire décidé par le programme.

Déroulement du jeu : 
- On choisit le nombre de joueurs
- On choisit la difficulté
- On rentre le nom des joueurs
- On parcourt tous les joueurs en les faisant lancer et garde les dés, puis on leur fait choisir ou non (suivant la difficulté) une figure à remplir 
- A la fin du jeu, tous les joueurs sont affichés avec leur nombre de points

Affichage :
┌───────┐ ┌───────┐ ┌───────┐  |  ┌───────┐ ┌───────┐
│ ■   ■ │ │ ■   ■ │ │ ■   ■ │  |  │       │ │ ■   ■ │
│   ■   │ │ ■   ■ │ │ ■   ■ │  |  │   ■   │ │       │
│ ■   ■ │ │ ■   ■ │ │ ■   ■ │  |  │       │ │ ■   ■ │
└───────┘ └───────┘ └───────┘  |  └───────┘ └───────┘
0      1      4    |  2 3

- à gauche, les dés que l'on souhaite relancer
- à droite, les dés que l'on a gardés
- en bas, les indices des dés pour les garder

Pour garder des dés, il suffit de noter les indices séparés par un espace (par example si je veux
garder les dés 1 et 4 je note : `1 4` ou `4 1`). 
# Notes

Nous avions voulu ajouter un ia pour qu'elle puisse jouer contre un joueur, mais nous n'avons pas eu le temps de l'ajouter.
Nous avons aussi essayé de mettre en place les tests avec les bouchons, mais il aurait fallu faire de nos classes des interfaces et nous avions déjà fini la conception et la structure du projet avant de s'en rendre compte.
Le nom des joueurs ne s'enregistre pas dans l'attribut `_name` et donc donne un nom vide à tous les joueurs.