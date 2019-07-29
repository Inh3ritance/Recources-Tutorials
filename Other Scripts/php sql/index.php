<?php

	error_reporting(0);
	require 'db/connect.php';
	echo 'Success';

	print_r($result); // prints query
	
	if($result = $db->query("SELECT * FROM users") or die($db-error)){ // add LIMIT 1 to limit up to one pc of data
		if($result->num_rows){
			/*echo 'yes';*/
			$rows = $result->fetch_assoc(); // assosiative array, fetch_all(MYSQLI_NUM) fetches all data in the array
		
			/*foreach($rows as $row){
				echo $row['first name'] , '<br>'; // access feildname
			}*/
			// or display loop as this without line 12: 
			while($row = $result->fetch_assoc()){
				echo $row['first name'] , '<br>';
			}
			
			$result->free();//free's up data in memory
			
		} else {
			die($db->error);
		}
	}
?>