for file in `ls $search_dir`; do
	if [ $file == *.c ]; then
		echo "De um nome à saida:"
		read name
		gcc -o $name $file
		$echo ./$name
	fi
done
