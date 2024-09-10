CREATE TABLE Employees
(
	E_id INT PRIMARY KEY AUTO_INCREMENT,
    E_fname VARCHAR(50) NOT NULL,
    E_lname VARCHAR(50),
    E_salary INT NOT NULL,
    P_number int,
    
    FOREIGN KEY (P_number) REFERENCES Projects(P_num),
    CHECK (E_salary > 2500)
    
);
CREATE TABLE Projects
(
	P_num INT PRIMARY KEY ,
    P_name VARCHAR(100) NOT NULL,
    P_hours INT,
    CHECK (P_hours > 25)
)
