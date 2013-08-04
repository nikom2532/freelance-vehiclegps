<?php
	// Configuration
	$dbhost = '127.0.0.1';
	$dbname = 'Job-Buildthedot-VehicalGPS';

	// Connect to test database
	$m = new Mongo("mongodb://$dbhost");
	$db = $m->$dbname;

	// Get the users collection
	$c_users = $db->'20120602';

	$data = array(
		'field1' => 'data1',
		'last_name' => 'Fan',
		'tags' => array('developer','user')
	);

	// Insert this new document into the users collection
	$c_users->insert($data);
?>
