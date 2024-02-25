# Write your MySQL query statement below
select name
from SalesPerson
where sales_id NOT IN (
    select sales_id
    from orders join company on orders.com_id = company.com_id
    where company.name = 'RED'
)