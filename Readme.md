# EMSY - TP1 - 2024 - 2025
	```
	TP1 :
	Installation d’un OS Linux dans un 
	environnement virtue
	Nome: Luca Ferreiro + Henri Mott
	Date: 08.11.2024
	
## A. Quelle est la taille minimum recommandée pour installer la distribution Sparky

RAM : 

- 1GB
  
Flash(Hard Drive):

- 2GB (CLI edition)
- 10GB ("Home" edition)
- 20GB (GameOver/Multimedia)

## B. Après l’installation des vos partitions linux, prenez une capture d’écran du démarrage de votre système (GRUB)	

-- //Image: GRUB en anex

## C. Que remarquez-vous au niveau du clavier ? Trouvez-la ou les lignes de commandes 
permettant de changer le clavier (clavier Français – Suisse : QWERTZ) et procédez à la 
mise jour du clavier.

- Le clavier est en englais(Américain) ou QWERTY
  ```
	cd /
	sudo loadkeys fr_CH
> [!WARNING]
> si le système redémarre alors le clavier ce reset par défaut.
- Pour que le clavier sauvegarde définitivement ce paramètre:

	- ouvrire le fichier config clavier: `	sudo nano /etc/default/keyboard`
   
	- entrer votre mot de passe
	
	- à la ligne : XKBLAYOUT = "us"  `	Remplacer "us" par "ch"`
  
	- Sauvegarder et Quitter éditeur: `	CTRL+O  -> CTBL + X`

	- redémarer la VM: `	sudo reboot`

## D. A quoi sert la partition swap ? dans le monde DOS, à quoi peut correspondre la swap ? 

la partition swap est une zone de stockage utilisée par le système d'exploition pour gérer la mémoir. Voici à quoi elle sert:

- Extension de la mémoire RAM.
- Gestion des processus inactifs.
- mise en veille prolongée.

dans le monde du DOS la SWAP correspond au fichier pagefile.sys (fichier temporaire ou gestion de mémoire)

## E. Déterminez la valeur en pourcentage de la swap : 
Utilisez la commande suivante :  `	cat /proc/sys/vm/swappiness` 

= 60% du stokage

## F. Quel format avez-vous utilisé pour la 3ème partition ?

aucun car on a rien selectionnée lors de l'installation.

## G. Dans l’installation, on vous demande deux noms d’utilisateur, à quoi correspondent-ils ? 
- le premier nom c'est celui de la "machine"
  
   par ex: lf-hm

- le deuxième c'est le nom de l'utilisateur
  
   par ex: user

- Utilisez la commande suivante : `	id`
  
	- Résultat: `  uid=1000(lf-hm) gid=1000(lf-hm) groups=1000(lf-hm) ,20(dialout) ,24(cdrom) ,25(floppy) ,27(sudo) ,29(audio) ,44(video) ,46(plugdev) ,100(users) ,103(net dev)`

Que comprenez-vous de informations obtenues par rapport à un utilisateur?
- "id" identifications du système = 100(users)
- "UID" Nom d'utilisateur et ID utilisateur réel = 1000
- "GID" Nom du groupe de l'utilisateur et de l'ID de groupe réel = 1000 
- "GROUPS" Nom des groupes de l'utilisateur et de l'ID de groupe supplémentaire de l'utilisateur.

## H. Testez si l’application « nano » est installée sur votre machine, tapez la commande : 
`nano --version`

oui elle est installée.



## I. Si nano n’est pas installé, tapez la commande suivante : apt-get install nano
pour savoir si "nano" est bien installer il suffit de retapper la commande du point H et voir le résultat sortie par la machine virtuel

- « apt »  est un gestionnaire de paquets qui sert à installer,supprimer, mettre à jour et géré des logiciels.

- « nano » est un éditeur de text en ligne de commandes.



## J. Testez si l’application « git » est installée sur votre distribution, si ce n’est pas le cas 
- tester si "git" est installée: `	git --version`

  git n'est pas installer

- installer un client git:
  ```
  sudo apt update
  sudo apt install git
  ```

## K. Créez un sous-répertoire dans le répertoire /home -> EMSY_TP1_XXX_YYY2
> [!WARNING] 
> ici on veut que l’utilisateur (vous) ait des droits de lecture, d’écriture et d’exécution.

crée le répertoire: `	sudo mkdir /home/EMSY_LFO_HMT`

accorder les droits: `	sudo chown lf-hm:lf-hm EMSY_TP1_LFO_HMT`


## L. Dans ce répertoire, tapez la commande :
```
cd /home/EMSY_LFO_HMT
git clone https://github.com/HENRIIIIIIIII/EMSY_TP1_Source.git
```

## M. Editez le fichier source .c avec l’éditeur de texte « Nano »

Accèder au dossier du dépôt cloné: `	cd EMSY_TP1_Source`

Editer le fichier EMSY_TP1.c: `	nano EMSY_TP1.c`


## N. Vérifiez si le compilateur « gcc » est bien installé ? Notez la version du logiciel 
Vérifier si le compilateur est installée: `	git --version`

Tapez les commandes suivantes :
```
gcc -Wall -o EMSY_TP1.o -c EMSY_TP1.c 
gcc -o EMSY_TP1 EMSY_TP1.o 
./EMSY_TP1
```
cela compile et execute le code.

 **[aide pour créer un readme](https://docs.github.com/fr/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax#GitHub-flavored-markdown)**
