<?php
	// Configuration
	$dbhost = '127.0.0.1';
	$dbname = 'arming';

	// Connect to test database
	$m = new Mongo("mongodb://$dbhost");
	$db = $m->$dbname;

	// Get the users collection
	$c_users = $db->a12;

	$user = array(
		'first_name' => 'MongoDB',
		'last_name' => 'Fan',
		'tags' => array('developer','user')
	);

	// Insert this new document into the users collection
	$c_users->save($user);
?>
