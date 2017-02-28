from tkinter import *
import tkinter.messagebox as messagebox

class Application(Frame):
	def __init__(self, master=None):
		Frame.__init__(self, master)
		self.pack()
		self.createWidgets()

	def createWidgets(self):
		self.titleLabel = Label(self, text='Hello there, please input your name')
		self.nameInput = Entry(self)
		self.alertButton = Button(self, text='Hello', command=self.hello)
		self.quitButton = Button(self, text='Quit', command=self.quit)
		self.titleLabel.pack()
		self.nameInput.pack()
		self.alertButton.pack()
		self.quitButton.pack()

	def hello(self):
		name = self.nameInput.get() or 'World'
		messagebox.showinfo('Message','Hello, %s!' % name)

app = Application()

app.master.title('Hello World!!!')

app.mainloop()
