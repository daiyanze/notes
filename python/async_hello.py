import asyncio
import threading

@asyncio.coroutine
def hello():
	print('Hello world! (%s)' % threading.currentThread())
	yield from asyncio.sleep(1)
	print('Hello again! (%s)' % threading.currentThread())

lp = asyncio.get_event_loop()
tasks = [hello(), hello()]
lp.run_until_complete(asyncio.wait(tasks))
lp.close()