# Write your MySQL query statement below
SELECT p.product_name, s.year, s.price
FROM Sales AS s
NATURAL JOIN Product AS p;