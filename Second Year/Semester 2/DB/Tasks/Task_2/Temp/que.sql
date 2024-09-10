SELECT P_name, P_hours, E_fname FROM employees
JOIN projects
ON employees.P_number = projects.P_num AND projects.P_hours = (SELECT max(projects.p_hours) FROM projects)