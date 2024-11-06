import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import matplotlib as mpl
from sklearn.linear_model import LinearRegression

df = pd.read_csv("assests/data.csv")

reg = LinearRegression()
reg.fit(df[['Volume', 'Weight']].values ,df.CO2)

mpl.rcParams['legend.fontsize'] = 12
fig = plt.figure() 
ax = fig.add_subplot(projection = '3d')
ax.scatter(df.Volume, df.Weight, df.CO2, color = 'red')
ax.legend()
ax.view_init(45, 0)
plt.show()

a = reg.intercept_
b = reg.coef_

X_baru = np.array([1000, 1160]).reshape(1,2)
prediksi_CO2 = reg.predict(X_baru)

print('intercept:', a)
print('koefisien regresi = ', b[0], ' dan ', b[1])

print('Hasil prediksi untuk x1=8 dan x2=125 yaitu', prediksi_CO2)