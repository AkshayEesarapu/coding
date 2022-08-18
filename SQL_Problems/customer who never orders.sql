# Write your MySQL query statement below


select  c.name as Customers 
from Customers c 
LEFT JOIN Orders o
on c.id = o.customerId
where o.customerId is NULL

# SELECT A.Name from Customers A
# LEFT JOIN Orders B on  a.Id = B.CustomerId
# WHERE b.CustomerId is NULL
