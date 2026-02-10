# Write your MySQL query statement below
SELECT D.name AS Department,E.name AS Employee,E.salary AS Salary
FROM Department D
JOIN Employee E
ON E.departmentID = D.id 
WHERE (
    SELECT COUNT(DISTINCT emp.salary)
    FROM Employee emp
    WHERE emp.departmentId = E.departmentId
    and emp.salary > E.salary
) < 3
ORDER BY D.name,E.salary DESC;
