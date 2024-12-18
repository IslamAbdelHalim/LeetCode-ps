# Write your MySQL query statement below
SELECT 
    s.machine_id, 
    ROUND(AVG((e.timestamp - s.timestamp)), 3) AS processing_time
FROM
    Activity AS s
INNER JOIN 
    Activity AS e
ON
    s.machine_id = e.machine_id  
    AND s.process_id = e.process_id
    AND s.timestamp < e.timestamp
GROUP BY
    s.machine_id