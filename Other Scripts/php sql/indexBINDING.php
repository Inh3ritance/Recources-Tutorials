<?php
	error_reporting(0);
	require 'db/connect.php';
	
	if(isset($_GET['lastname']),$_GET['firstname']){
		$lastname = trim($_GET['lastname']);
		$firstname = trim($_GET['firstname']);
		
		$people = $db->prepare("SELECT firstname, lastname FROM people WHERE lastname = ? AND firstname = ?"); //prepare does not execute until there is an execute cmd
		$people->bind_param('si',$lastname,$firstname);//binding parameter
		$people->execute();//execution
		
		//$people->bind_value($firstname, $lastname); cannot bind ndividual values
		
		$people->bind_result($firstname,$lastname);
		
		while($people->fetch()){
			echo $firstname, ' ', $lastname, '<br>';	
		}
	}
	
?>