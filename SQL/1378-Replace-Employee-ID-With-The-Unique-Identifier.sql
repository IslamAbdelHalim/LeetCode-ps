# Write your MySQL query statement below
SELECT emUni.unique_id, emP.name
FROM Employees AS emp
LEFT OUTER JOIN
EmployeeUNI AS emUni
ON emp.id = emUni.id;