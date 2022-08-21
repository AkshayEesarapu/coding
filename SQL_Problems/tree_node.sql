# Write your MySQL query statement below

select DISTINCT t1.id , CASE
    WHEN t1.p_id is NULL  THEN 'Root'
    WHEN t1.p_id is not NULL  and t2.id is not NULL THEN 'Inner'
   WHEN t1.p_id is not NULL  and t2.id is  NULL THEN 'Leaf'
END AS type
from Tree t1
left join tree t2
on t1.id=t2.p_id
