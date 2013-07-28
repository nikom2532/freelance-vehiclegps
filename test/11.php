<?php 
$connection = new MongoClient();
$collection = $connection->arming->a3;	

$query = array( "i" => array( '$gt' => 20, "\$lte" => 30 ) ); //note the single quotes around '$gt'
$cursor = $coll->find( $query );

while ( $cursor->hasNext() )
{
    var_dump( $cursor->getNext() );
}

?>
