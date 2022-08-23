# Write your MySQL query statement below

select date_id , make_name , count(DISTINCT(lead_id)) as unique_leads,
count(DISTINCT(partner_id)) as unique_partners
from DailySales
group by 1,2
