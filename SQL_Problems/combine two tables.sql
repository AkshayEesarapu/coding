# Write your MySQL query statement below

select p.firstName,p.lastName, ad.city,ad.state
from Person p
left join  Address ad
on p.personId=ad.personId 
# and city =NULL
