# Write your MySQL query statement below
SELECT user_id, email
FROM Users
WHERE regexp_like(email, '[a-zA-Z0-9_]+@[a-zA-Z0-9_]+\.com$')
ORDER BY user_id;