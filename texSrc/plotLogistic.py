#!/usr/bin/python

import numpy as np
import matplotlib.pyplot as plt

ax = plt.subplot(111)
plt.rc('text', usetex=True)
plt.rc('font', family='serif')


k = 100.
p0 = 10.
l = 0.2

t = np.arange(0.0, 50.0, 0.01)
p = k / (1. + ((k-p0)/p0) * np.exp(-l*t))
plt.plot(t, p, 'k', lw=2)

plt.xlabel('$t$')
plt.ylabel('$p(t)$')
plt.title('$p(t)$ for $p_0 = 10$ and $\lambda = 0.2$')

plt.ylim(0.,101.)
plt.show()
