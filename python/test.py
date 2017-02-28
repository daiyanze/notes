#!/usr/bin/env python3
# -*- coding: utf-8 -*-

' a test module '

__author__ = 'Tai'

import sys
from enum import Enum, unique

Month = Enum('Month', ('Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Otc', 'Nov', 'Dec'))

for name, member in Month.__members__.items():
	print(name, '=>', member, ',', member.value)

def fn(self, name='World!'):
	print('Hello %s' % name)

Hello = type('Hello', (object,), dict(hello=fn))

h = Hello()
h.hello()

class Fib:
	def __init__(self):
		self.a, self.b = 0, 1

	def __str__(self):
		return 'Class -- Fib : ' + 'a=0, b=1'

	__repr__ = __str__

	def __iter__(self):
		return self

	def __next__(self):
		self.a, self.b = self.b, self.a + self.b
		if self.a > 10000:
			raise StopIteration()
		else:
			return self.a

	def __getitem__(self, n):
		a, b = 1, 1
		for x in range(n):
			a, b = b, a + b
		return a

def test():
    args = sys.argv
    if len(args)==1:
        f = Fib()
        print(f[12])
    elif len(args)==2:
    	for n in Fib():
        	print(n)
    else:
        print('Too many arguments!')


import unittest

class Dict(dict):

    def __init__(self, **kw):
        super().__init__(**kw)

    def __getattr__(self, key):
        try:
            return self[key]
        except KeyError:
            raise AttributeError(r"'Dict' object has no attribute '%s'" % key)

    def __setattr__(self, key, value):
        self[key] = value

class TestDict(unittest.TestCase):

    def test_init(self):
        d = Dict(a=1, b='test')
        self.assertEqual(d.a, 1)
        self.assertEqual(d.b, 'test')
        self.assertTrue(isinstance(d, dict))

    def test_key(self):
        d = Dict()
        d['key'] = 'value'
        self.assertEqual(d.key, 'value')

    def test_attr(self):
        d = Dict()
        d.key = 'value'
        self.assertTrue('key' in d)
        self.assertEqual(d['key'], 'value')

    def test_keyerror(self):
        d = Dict()
        with self.assertRaises(KeyError):
            value = d['empty']

    def test_attrerror(self):
        d = Dict()
        with self.assertRaises(AttributeError):
            value = d.empty

if __name__=='__main__':
    test()
    unittest.main()