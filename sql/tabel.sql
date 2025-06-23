CREATE TABLE students (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    grade CHAR(1)
);


INSERT INTO students (id, name, grade)
VALUES (1, 'Ajay', 'A');


UPDATE students
SET grade = 'B'
WHERE id = 1;


DELETE FROM students
WHERE id = 1;


SELECT * FROM students;
