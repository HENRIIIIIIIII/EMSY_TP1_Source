# EMSY - TP1 - 2024 - 2025
	```
	TP1 :
	Installation d’un OS Linux dans un 
	environnement virtue
	Nome: Luca Ferreiro + Henri Mott
	Date: 08.11.2024
	
## A. Quelle est la taille minimum recommandée pour installer la distribution Sparky

la taille minimum est 1GB de RAM

## B. Après l’installation des vos partitions linux, prenez une capture d’écran du démarrage 
de votre système (GRUB)	

-- //Image

## C. Que remarquez-vous au niveau du clavier ? Trouvez-la ou les lignes de commandes 
permettant de changer le clavier (clavier Français – Suisse : QWERTZ) et procédez à la 
mise jour du clavier.

- Le clavier est en englais ou ASRIF
	`cd /` 
	sudo loadkeys fr_CH -> Pour changer le layout pour la session actuelle, si système redémarre, système se remet à default.
	
- Pour changer le keyboard dans les settings il faut suivre les marches précédentes

	-type:
  	`sudo nano /etc/default/keyboard`
	-enter password
	enter in the GNU nana 5.4
	
	Use the arrow keys to navigate
	change US -> CH
	
	CTRL+O -> CTBL + X
	
	`sudo reboot`

## D. A quoi sert la partition swap ? dans le monde DOS, à quoi peut correspondre la swap ? 

la partition swap est une zone de stockage utilisée par le système d'exploition pour gérer la mémoir. Voici à quoi elle sert:

La swap sert a placé les information qui on pas desois d'étre accedé rapidment dans la flash ou disk. Dans le monde de DOS la swap est un gestion de stockage.

## E. Déterminez la valeur en pourcentage de la swap : 
Utilisez la commande suivante : `cat /proc/sys/vm/swappiness`

= 60% du stokage

## F. Quel format avez-vous utilisé pour la 3ème partition ?

Rien

## G. Dans l’installation, on vous demande deux noms d’utilisateur, à quoi correspondent-ils ? 
Utilisez la commande suivante : `id`

Que comprenez-vous de informations obtenues par rapport à un utilisateur

# LUCA here

## H. Testez si l’application « nano » est installée sur votre machine, tapez la commande : 
`nano --version`



## I. Si nano n’est pas installé, tapez la commande suivante : apt-get install nano
Comment savoir si « nano » est bien installé ? 
Que veut dire « apt » ? Est-ce que cette commande peut être utilisée sur toutes les 
distributions linux ? 
À quoi sert « nano » ?



## J. Testez si l’application « git » est installée sur votre distribution, si ce n’est pas le cas 
installer un client git
Quelles sont les commandes que vous allez utiliser ?



## K. Créez un sous-répertoire dans le répertoire /home -> EMSY_TP1_XXX_YYY2
- attention 
ici on veut que l’utilisateur (vous) ait des droits de lecture, d’écriture et d’exécution.
Quelles sont les commandes que vous allez utiliser ?


## L. Dans ce répertoire, tapez la commande :
git clone https://github.com/votreDepot/EMSY_TP1_Source.git
(forkez ce lien sur votre dépôt : )
Qu’observez-vous dans ce répertoire ?


## M. Editez le fichier source .c avec l’éditeur de texte « Nano »
Réalisez un petit programme en C (Calculateur de surface géométrique)


## N. Vérifiez si le compilateur « gcc » est bien installé ? Notez la version du logiciel 
Tapez les commandes suivantes :
gcc -Wall -o fichier.o -c fichier.c 
gcc -o fichier fichier.o 
./fichier
Remarque : fichier est a remplacé par des noms de votre choix
Que se passe-t-il sur votre console ?
Quels sont les fichiers qui ont été générés ?

	```

 **[aide pour créer un readme](https://docs.github.com/fr/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax#GitHub-flavored-markdown)**
