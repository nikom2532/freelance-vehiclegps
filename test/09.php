<?php 
$connection = new MongoClient();
$collection = $connection->arming->a3;	

$cursor = $collection->find();
foreach ( $cursor as $id => $value )
{
    echo "$id: ";
    var_dump( $value );
}

?>
