#!/usr/bin/python3

import matplotlib.pyplot as plt

# Define the plot
x = [1, 2, 3, 4, 5]
y = [2, 3, 5, 7, 11]

# Create a line plot
plt.plot(x, y, marker='o')
# Add a titile 
plt.title('Basic Line Graph')
# Add the axes
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
# Add grid
plt.grid(True)
# Dislpay the plot
plt.show()
