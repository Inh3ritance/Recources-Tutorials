CREATE TABLE exercise_logs
    (id INTEGER PRIMARY KEY AUTOINCREMENT,
    type TEXT,
    minutes INTEGER, 
    calories INTEGER,
    heart_rate INTEGER);

INSERT INTO exercise_logs(type, minutes, calories, heart_rate) VALUES ("biking", 30, 100, 110);
INSERT INTO exercise_logs(type, minutes, calories, heart_rate) VALUES ("biking", 10, 30, 105);
INSERT INTO exercise_logs(type, minutes, calories, heart_rate) VALUES ("dancing", 15, 200, 120);
INSERT INTO exercise_logs(type, minutes, calories, heart_rate) VALUES ("dancing", 15, 165, 120);
INSERT INTO exercise_logs(type, minutes, calories, heart_rate) VALUES ("tree climbing", 30, 70, 90);
INSERT INTO exercise_logs(type, minutes, calories, heart_rate) VALUES ("tree climbing", 25, 72, 80);
INSERT INTO exercise_logs(type, minutes, calories, heart_rate) VALUES ("rowing", 30, 70, 90);
INSERT INTO exercise_logs(type, minutes, calories, heart_rate) VALUES ("hiking", 60, 80, 85);

SELECT * FROM exercise_logs;

SELECT type, SUM (calories) AS total_calories FROM exercise_logs GROUP BY type; /* AS = replace temp name*/

SELECT type, SUM (calories) AS total_calories FROM exercise_logs GROUP BY type
 HAVING total_calories > 150; /* Have vs Where*/
 
 SELECT type, AVG(calories) AS average_calories FROM exercise_logs GROUP BY type
  HAVING average_calories > 70;
  
 SELECT type FROM exercise_logs GROUP BY type Having COUNT(*) >= 2; /* COUNT = counts the amount of times of occurrence of a certain object*/
 
 