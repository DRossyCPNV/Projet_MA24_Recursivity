# PROJET MA-24 - Recursivité
**But** Le but de ce projet est de comprendre et d’approfondir les concepts liés à la récursivité.

**Auteur** Rossy David

**Version** 1.0

**Date** 5.04.2019

## Problématique
### Utilité
Dans le cadre de la programmation les fonctions récursives sont particulièrement utiles pour **résoudre des problèmes qui nécessitent la résolution de sous-problèmes.**

### Illustration de la problématique
Afin d’illustrer le propos, j’ai décidé de me tourner vers les nombres premiers. Pour rappel, un nombre premier est un entier :
* strictement plus grand que 1
* admet exactement deux diviseurs, soit 1 et lui-même

Un algorithme simple pour déterminer si un nombre est premier est de le diviser successivement par 1, puis 2, puis 3, jusqu’à lui-même.

Nous pouvons ainsi considérer que le problème suivant : « Est-ce qu’un nombre N admet d’autres diviseurs que 1 et lui-même » se résout en résolvant chacun de ses sous-problèmes, à savoir : « Est-ce que le nombre D = 2 est diviseur de N », « Est-ce que le nombre D = 3 est diviseur de N », et ainsi de suite.

### Méthode
Pour se faire, nous devons **décortiquer le problème** méthodiquement **du sous-problème le plus simple** (faisant généralement office de condition d'arrêt de la récursion) **au plus compliqué.**

> _Exemple de pseudo-code pour le cas illustré_
> * **N** Nombre dont on cherche à déterminer s'il est premier
> * **D** Diviseur possible du nombre
>
> ~~~~
> Fonction récursive déterminant si un nombre N est premier
> {
> //Si N peut-être divisé par 2 alors il n'est pas premier (cas simple)
> //Sinon, si D atteint 1, alors N est premier (condition d'arrêt)
> //Sinon, si le reste de la division entière de N par D est nul, alors N n'est pas premier (cas compliqué)
> //Sinon on fait une récursion avec D diminué de 1 (récursion)
> }
> ~~~~

## Sources

[OpenClassrooms.com - Récursivité](https://openclassrooms.com/fr/courses/438849-la-recursivite)

Openclassrooms est un site de référence, au contenu contrôlé par des professionels. En ce qui concerne la récursivité en informatique, le cours est extrêment pertinent et approfondi beaucoup de notions liées aux fonctions récursives (performances, méthode générale pour en écrire, gestion mémoire de l'ordinateur de telles fonctions, fonctions récursives terminales, etc. )

[Khanacademy.org - Recursion](https://www.khanacademy.org/computing/computer-science/algorithms/recursive-algorithms/a/recursion)

Khanacademy est site d'apprentissage créer par des professionnels également. Le cours est un peu moins complet au niveau des notions abordées concernant la récursivité que celui d'Openclassrooms mais bien plus fourni au niveau des exemples et de la pratique dans le domaine de l'informatique.
