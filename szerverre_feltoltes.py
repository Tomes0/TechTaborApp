import sqlite3
conn = sqlite3.connect('ertekek.db')
c = conn.cursor()
c.execute("INSERT INTO erzekeklok VALUES (1,strftime('%Y-%m-%d %H:%M:%S'),3,4,3,4)")
conn.commit()
conn.close()
