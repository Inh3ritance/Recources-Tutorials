<?php
	error_reporting(0);
	require 'db/connect.php';
	
	if(isset($_GET['firstname']){
		$firstname = real_escape_string(trim($_GET['firstname'])); // very important to allow certain data to database, for Safety
			if($insert = $db->"INSERT INTO people({$firstname}, lastname, bio, created) VALUES('Garry','Gran', 'web dev', NOW())"){
				echo $db->affected_rows();
			}
	
	}
?>