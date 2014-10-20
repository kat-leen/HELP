Git Cheatsheet
==============

## Télécharger GitHub

## Creer un espace de travail personnel

* Aller sur la page du projet et appuyer sur le bouton fork

* Ouvrir un terminal et se placer dans le dossier voulu

* Creer un clone sur son ordinateur avec la commande : git clone "le chemin du projet"
  (N.B le chemin du projet est accessible sur la page GitHub du projet qui c'est ouverte
  après le Fork

## Creer une branche

* Utiliser la commande : git branch branch's name

* Gifler Katleen

## Se placer dans sa branche

* Utiliser la commande : git checkout branch's name

## Enregistrer les modifications 

* Utiliser la commande : git add chemin du fichier à ajouter

* Puis la commande : git commit  -m "Message du commit"

* Commande git log : Permet de voir les anciens commit

* Commande git status : Permet de voir le nombre de modifications effectuées

## Fusionner notre branch(e) avec le projet principal

* retourner dans la branche principale : git checkout master

* utiliser la commande : git merge branch's name

### En cas de conflit avec le merge

* Installer meld ou kdiff3 

* Ou modifier manuellement le fichier (s'aider de la commande : git diff master)

## Envoyer les modifications sur l'espace en ligne

* Utiliser la commande : git push origin master (pour toutes les branches)

* Ou la commande : git push branch's name, si le master n'est pas fusionné avec la branche

## Poster les modifications

* Faire un pull request sur l'espace en ligne

## Mettre à jour le master sur son ordinateur personnel

* Utiliser la commande : git pull


