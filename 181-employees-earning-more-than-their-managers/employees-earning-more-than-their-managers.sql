# Write your MySQL query statement below
SELECT e.name Employee
FROM Employee e
join Employee m ON e.managerId = m.id
where e.salary>m.salary