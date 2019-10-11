# RTR105
Elektroniskā klade

pwd - kur es esmu

whoami - kas es esmu (users)

ls - no konkrētās vietas izrietošie faili, direktorijas

cd - pārvietošanās uz citu vietu

mkdir - radīt direkciju

rmdir - noņemt direkciju

& -  palaiž programmu fonā

-al no konkrētās vietas izrietošais viss

echo - atlārtot

sh - interpretētājs ierobežotākām atmiņām

bash - normāls interpretētājs 

ctrl alt t - jauns terminālis

ctrl alt shift - jauns termināļa tabs (cilne)


touch - izveido teksta dokumentu

cat - lasa dokumentu

nano - atver teksta pārveidotāju

cp - kopē

mv - pārvieto

rm - noņem

echo $PATH - parādīt ceļu

chmod - pārveido pieejamību failam

gcc - kompilē

git - github stuff

General C stuff


> pārvieto stdout uz failu, pārrakstot pāri jebkam iekš faila

>> pārvieto stdout uz failu, pievienojot beigās jebkam iekš faila

< pārvieto stdin uz pavēli

| pārvieto stdout uz citu pavēli

sort sakārto alfabētiskā secībā

uniq izfiltrē blakus esošas vienādas teksta rindas

grep meklē un parāda noteiktu rakstu tekstā

sed meklē rakstu, izmaina un parāda to


enviroment variables tiek izmantoti starp vairākām programmām

export VARIABLE= "Value" konkretizē environment variable

USER -lietotājvārds

PS1 -command prompt

HOME -home directory

PATH - list of file paths

env - list of environment variables


BASH

Any command in the terminal can be run via Bash script

Any variable is assigned by an immediate equals sign (greeting="hello")

Variables are accessed via dollar sign (echo $greeting)

conditionals use 

if;
then;
else;
fi;

three typres of loops exist: for, while and until

comparisons use unique operators:

Equal (-eq)

Not Equal (-ne)

Less Than or Equal (-le)

Less Than (-lt)

Greater Than or Equal (-ge)

Greater Than (-gt)

Is Null (-z)

Input arguments can be passed through bash script after the script name, seperated by spaces (myScript.sh “hello” “how are you”)

Input can be requested through read

Aliases for Bash scripts can be created in the ~/.bash_profile (.bashrc) via alias
