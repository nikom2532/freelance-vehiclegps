<?php 
$connection = new MongoClient();
$collection = $connection->arming->a3;	

$query = array( 'i' => 71 );
$cursor = $collection->find( $query );

while ( $cursor->hasNext() )
{
    var_dump( $cursor->getNext() );
}
?>
