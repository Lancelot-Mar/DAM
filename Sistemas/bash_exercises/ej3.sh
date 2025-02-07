#!/usr/bin/env bash

for archivo in test3/*.*
	do
		if grep -q "ERROR" $archivo;
		then
			echo "El log $archivo tiene errores"
		else
			echo "El log $archivo no tiene errores"
		fi
done

