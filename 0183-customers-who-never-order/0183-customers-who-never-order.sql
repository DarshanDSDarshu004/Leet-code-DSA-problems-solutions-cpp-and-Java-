# Write your MySQL query statement below
/*select c.name
from customers c
join orders  o 
on c.id =customer.id
where 
*/

select name as Customers
 from Customers
where id not in 
(
    select customerId
    from orders

);
