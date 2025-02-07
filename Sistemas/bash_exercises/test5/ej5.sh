#!/usr/bin/env bash

for archivo in *.*
	do
		if $archivo == *.jpg;
		then
    			nuevo_archivo=$(echo $archivo | sed 's/\.jpg$/\.old/')
    			mv "$archivo" "$nuevo_archivo"
		else
			echo "No hay archivos"
		fi
done

