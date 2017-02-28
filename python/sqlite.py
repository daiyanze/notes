import sqlite3

conn = sqlite3.connect('test.db')

cur = conn.cursor()

cur.execute('create table user (id varchar(200) primary key, name varchar(200))')

cur.execute('insert into user (id, name) values (\'1\', \'Daiyanze\')')

print(cur.rowcount)

cur.execute('select * from user where id=?', (1,))

result = cur.fetchall()

print(result)

cur.close()

conn.commit()

conn.close()