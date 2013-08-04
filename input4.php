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
	while (!feof($file_handle) )
	{
		set_time_limit(0);
		$line_of_text = fgets($file_handle);
		$record = explode(',', $line_of_text);
		
		if($count < $lineCount)
		{
			$data = array(
				'car_id' => $record[0],
				'type' => $record[1],
				'time' => $record[2],
				'status' => $record[3],
				'lat' => $record[4],
				'lat2' => $record[5],
				'lon' => $record[6],
				'lon2' => $record[7],
				'velocity' => $record[8],
				'heading_degree' => $record[9],
				'date' => $record[10]
			);
			// Insert this new document into the users collection
			$table->insert($data);
		}
		++$count;
	}
	echo "End Process<br/>";
	fclose($file_handle);
?>
