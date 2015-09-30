#!/usr/bin/python

import numpy as np
import matplotlib.pyplot as plt

ax = plt.subplot(111)
plt.rc('text', usetex=True)
plt.rc('font', family='serif')

t = np.arange(0.0, 50.0, 0.01)
fun = lambda k,p0,l : lambda t: k / (1. + ((k-p0)/p0) * np.exp(-l*t))
p1 = fun(100., 10., 0.2)
p2 = fun(100., 10., 0.3)
p3 = fun(100., 20., 0.2)

print(p1(10))
plt.plot(t, p1(t), 'b', lw=2)
plt.plot(t, p2(t), 'r', lw=2)
plt.plot(t, p3(t), 'g', lw=2)

plt.xlabel('$t$')
plt.ylabel('$p(t)$')
#plt.title('$p(t)$ for $p_0 = 10$ and $\lambda = 0.2$')

plt.ylim(0.,101.)
plt.show()
