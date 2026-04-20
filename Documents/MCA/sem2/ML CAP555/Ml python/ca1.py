import numpy as np
import pandas as pd
import sllearn.logistic_regression as lr



data = {
    'Employes_Name': ['Prashant','Ravi','Om','Priya', 'Amit'],
    'Exp': [2,3,4,5,6],
    'Salary': [10000,12000,14000,16000,45000]
}


//logistic regression is used for classification problems, not regression problems. So we cannot use logistic regression to predict salary based on experience. Instead, we can use linear regression for this task.

model = lr.LogisticRegression()
X = data['Exp'].values.reshape(-1, 1)  # Reshape for sklearn
y = data['Salary'].values
model.fit(X, y)

# Predicting salary for a new experience value
new_exp = np.array([[7]])  # New experience value
predicted_salary = model.predict(new_exp)
print(f"Predicted Salary for 7 years of experience: {predicted_salary[0]}")

// create the dataset for logistic regression

data = {
    'Employes_Name': ['Prashant','Ravi','Om','Priya', 'Amit'],
    'Exp': [2,3,4,5,6],
    'Salary': [10000,12000,14000,16000,45000],
    'High_Salary': [0, 0, 0, 0, 1]  # 1 for high salary (>= 20000), 0 for low salary (< 20000)
}

model = lr.LogisticRegression()
X = data['Exp'].values.reshape(-1, 1)  # Reshape for sklearn
y = data['High_Salary'].values

model.fit(X, y)
# Predicting high salary for a new experience value
new_exp = np.array([[7]])  # New experience value
predicted_high_salary = model.predict(new_exp)

