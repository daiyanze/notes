import asyncio

@asyncio.coroutine
def wget(host):
	print('wget %s' % host)
	conn = asyncio.open_connection(host, 80)
	r, w = yield from conn
	header = 'GET / HTTP/1.0\r\nHost: %s\r\n\r\n' % host
	w.write(header.encode('utf-8'))
	yield from w.drain()
	while True:
		line = yield from r.readline()
		if line == b'\r\n':
			break
		print('%s header > %s' % (host, line.decode('utf-8').strip()))
	w.close()
	conn.close()

lp = asyncio.get_event_loop()
tasks = [wget(host) for host in ['www.google.com', 'www.sina.com', 'www.baidu.com']]
lp.run_until_complete(asyncio.wait(tasks))
lp.close()