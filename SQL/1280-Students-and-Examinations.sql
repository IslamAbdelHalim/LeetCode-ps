# Write your MySQL query statement below
SELECT s.student_id, s.student_name, Subjects.subject_name, count(e.student_id) AS attended_exams
FROM Students AS s
CROSS JOIN Subjects
left JOIN Examinations e
ON s.student_id = e.student_id
AND Subjects.subject_name = e.subject_name
GROUP BY s.student_id, Subjects.subject_name 
ORDER BY s.student_id, Subjects.subject_name