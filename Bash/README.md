Game of Bash :

Rule:
Take least amout of keys to be tapped to execute what you want to do.

Help :

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

cmd -opt args & : throw the task in bg
CTRL + Z : Stopped but doesn't kill the current task
CTRL + C : Kills the current task

">" Redirects the content of whatever it was ask before into a new file that will be created (even if said file already exist).
EX : ls
a/ B/ c/ d.txt efg.c
ls > files.txt
cat files.txt
a
B
c
d.txt
efg.c

">>" Redirect the content of the cmd before hand into an existing file (will not create a new file)
Black Hole of doom : /dev/null
2> redirects whatever error into a new file
2>> redirects whatever error into an existing file
