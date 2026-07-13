-- Last updated: 13/07/2026, 16:17:27
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    DECLARE val INT;
    SET val = N - 1;

  RETURN (
      # Write your MySQL query statement below.
        select distinct salary from Employee  order by salary  desc  limit val,1
  );
END