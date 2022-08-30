# # Write your MySQL query statement below
#      select Id,
#          case when row_number() over (order by id) % 2 = 1
#          then lead(student) over (order by id)
#          else lag(student) over (order by id) end as student
#      from Seat

select  
      case 
        when id % 2 = 0 then id - 1
        when id % 2 = 1 and id < (select count(*) from seat) then id + 1
        else id
      end as id, 
    student from seat
    order by id;
