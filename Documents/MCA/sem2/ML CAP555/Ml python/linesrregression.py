import pandas as pd
import numpy as np 
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split



data = {
    'Employes_Name': ['Prashant','Ravi','Om','Priya', 'Amit'],
    'exp': [2,3,4,5,6],
    'Salary': [10000,12000,14000,16000,45000]
}
df = pd.DataFrame(data)

# Ensure we use the correct column name (no semicolon)
X = df[['exp']].values  # Reshape implicit when selecting as 2D
y = df['Salary'].values

model = LinearRegression()
model.fit(X, y)

# slope (coefficient) and intercept for y = m*x + b
slope = float(model.coef_[0])
intercept = float(model.intercept_)

print(f"slope (m) = {slope}")
print(f"intercept (b) = {intercept}")

                      