Game of Bash :

Rule:
Take least amout of keys to be tapped to execute what you want to do.

Help :


_**Sq No.2**_

CTRL + A : Return to the start of the line  
CTRL + E : Goes to the end of the line  
CTRL + U : Cut up to the start the line  
CTRL + K : Cut up to the end of the line  
CTRL + Y : Pastes the line copied with CTRL + U  
Alt + Backspace : CTRL + Backspace on windows  
Alt + D : CTRL + suppr on windows  

CTRL + R : makes you remember a cmd you exe  

history : list every cmds that has be executed  
!! : execute back the last cmd made  
!.. : exe back the cmd that starts by what you put  
!?.. : exe the last cmd that has .. inside  
!# : (# is a number in the history) to exe the cmd at  

Sequence1 ->  S*1 :  
it replace the whole word (like a tab)
EX:
A14  |  A15
A14 -> *4

/* : the content of the files in root
.? -> Replace 1 character of the word
EX: ls Sequence?

[] : Search for files tha starts by the specified letters.
EX: ls [aef]* : search for files that starts by a, e or f
EX: ls [a-m]* all the files that start by a to m 

Variables :

i = 1
i=1
echo $i

$(the command)
echo here:$(pwd)

currentDir=$(pwd)
echo $currentDir
names=$(cat names2022.txt)
echo $names

backslash remove the variable aspect of a variable when placed behind the $'variablename' :
echo \$a
$a

ps -f : sees the task that were to be running
jobs : sees current tasks running

fg : foreground %1 
(like z-layer, the big the more important)

bg : background 
(similar to & but for already running tasks)

cmd -opt args & : throw the task in bg;
CTRL + Z : Stopped but doesn't kill the current task;
CTRL + C : Kills the current task;

">" : creates and redirects to a file (**If said file is already existing, it will overwrite its entire content**)  
">>" : redirected the output by adding it inside of a file  
2> : redirects whatever error into a new file  
2>> : redirects whatever error into an existing file  
"<" Input what you've put after this into the cmd you gave before it  
EX : wc (word count) -l < files.txt -> *5*  
Black Hole : /dev/null;

" | " : Called a pipe redirected the output of a cmd into another;
EX : history | wc -l ->
*6942*

!^ : First Arg;
!$ : Last Arg;
!* : All Arg;

_**Sq No.3**_

printenv : Prints every variables predefined;
