# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below

DELETE p1
from Person p,person p1
where p.email = p1.email 
and p.id < p1.id
