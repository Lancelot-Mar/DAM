#!/bin/bash

# Directory da gestire
DIR="/home/cfgs/DAM/"

# Verifica se la directory esiste
if [ -d "$DIR" ]; then
  # Spostarsi nella directory
  cd "$DIR" || exit

  # Ottieni la data corrente in formato YYYY-MM-DD
  CURRENT_DATE=$(date +%Y-%m-%d)

  # Aggiungere tutti i file al controllo di versione
  git add .

  # Creare il commit con il messaggio che include la data corrente
  git commit -m "Commit del giorno: $CURRENT_DATE"

  # Eseguire il push dei cambiamenti
  git push
else
  echo "La directory $DIR non esiste."
fi
