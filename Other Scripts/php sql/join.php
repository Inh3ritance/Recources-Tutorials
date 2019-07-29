<?php
	error_reporting(0);
	require 'db/connect.php';
	
	$sql = "SELECT people.firstname, countries.name as country FROM people
	LEFT JOIN countries ON people.country = countries.id";
	if($result->num_rows){
		while($rows = $results->fetch_object()){
			echo "{$row->firstname} ({$row->country})<br>" // joining people and country info...
		}
	} else {
		echo 'No results';
	}
?>