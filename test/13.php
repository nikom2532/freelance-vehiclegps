<?php 
// connect
$m = new Mongo;

// select a database
$db = $m->arming;

// select a collection (analogous to a relational database's table)
$collection = $db->a6;

$insert = array(
    'name' => $_POST['name'],
    'lastname' => $_POST['lastname'],
    'age' => $_POST['age'],
    'comments' => array()
);
$collection->insert($insert, true);

$m->close();

?>
