<?php
	// Configuration
	$dbhost = '127.0.0.1';
	$dbname = 'arming';

	// Connect to test database
	$m = new Mongo("mongodb://$dbhost");
	$db = $m->$dbname;

	// Get the users collection
	$table = $db->input3;


	$filename = "/home/nikom2532/Documents/Research/Dr.Saroch/GPS/txt/201206-02.txt";
	//$filename = "data.txt";
	$file_handle = fopen($filename, "rb");
	$lineCount = substr_count(file_get_contents($filename), "\n");
	echo "Start Process<br/>";
	$a=0;
	while (!feof($file_handle) )
	{
		++$a;
	}
	echo "End Process<br/>";
	echo $a;
	fclose($file_handle);
?>
