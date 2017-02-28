from flask import Flask
from flask import request

app = Flask(__name__)

@app.route('/', methods=['GET', 'POST'])
def home():
	return '<h1>Hello, welcome to my home page!</h1>'

@app.route('/signin', methods=['GET'])
def signin_form():
	return '''
				<form action="/signin" method="post">
				<p><input name="username"></p>
				<p><input name="password" type="password"></p>
				<p><button type="submit">Sign In</button></p>
				</form>
			'''


@app.route('/signin', methods=['POST'])
def signin():
	name = 'daiyanze'
	if request.form['username'] == name and request.form['password'] == 'daiyanze8964':
		return '<h1>Welcome,'+name+'</h1>'
	return '<h1>Sorry, invalid request</h1>'

if __name__ == '__main__':
	app.run()
