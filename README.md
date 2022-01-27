# SPMIDI
DATE : December 2021
AUTHOR : Haron DAUVET DIAKHATE

Frustré par le manque de logiciel de communication entre l'échantillonneur/séquenceur SP404(originale ,SX et A) et un ordinateur et notament un DAW (logiciel de musique assister par ordinateur)
en effet les notes enrigistrer à l'aide du séquenceur ne peuvent être exporter de la machine pour être modifier ce qui peut être très utile dans la création de rythme
,je me suis mis donc à "hacker" le SP404 en essayant de traduire les octets brut, seuls éléments que créé la machine sur son support (carte SD) lorsque l'on créé un rythme dans le séquenceur.
Le fichier doc/test.txt explique comment j'ai procédé pour comprendres comment la machine code ses patterns , patterns que l'on trouve dans samples/ .
La finalité serait un programme qui traduit le code binaire que la machine génère en fichier MIDI lisible par n'importe quel DAW, la marche à suivre se trouve dans MIDI/instruction.txt .
