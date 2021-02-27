# for question 1
def avg(*num):
	d = num
	len_d = float(len(d))
	return sum(d)/len_d

# for question 2
class Boat:
	def __init__(self, max_speed):
		self.max_speed = max_speed

	def __str__(self):
		my_str = "Boat with the maximum speed {}"
		return my_str.format(self.max_speed)
class Car:
	def __init__(self, arg):
		super(Car, self).__init__()
		self.arg = arg
		
