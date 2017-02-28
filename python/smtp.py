from email import encoders
from email.header import Header
from email.mime.text import MIMEText
from email.utils import parseaddr, formataddr

import smtplib

def _format_addr(s):
	name, addr = parseaddr(s)
	return formataddr((Header(name, 'utf-8').encode(), addr))

from_addr = input('From: ')
password = input('Password: ')
to_addr = input('To: ')

msg = MIMEText('This is a test text from Python...', 'plain', 'utf-8')
msg['From'] = _format_addr('My name is %s' % from_addr)
msg['To'] = _format_addr('Hi %s' % to_addr)
msg['Subject'] = Header('Open this mail to see the suprise', 'utf-8').encode()

server = smtplib.SMTP('smtp.mail.yahoo.com', 465)
server.startssl()
server.set_debuglevel(1)
server.login(from_addr, password)
server.sendmail(from_addr,[to_addr,], msg.as_string())
server.quit()