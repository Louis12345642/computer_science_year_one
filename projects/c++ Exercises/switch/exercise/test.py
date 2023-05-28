def calculate_gross_salary(basic_salary):
    if basic_salary >= 5000:
        hra = 0.2 * basic_salary
        da = basic_salary
        tr = 500
    elif basic_salary > 3000 and basic_salary < 5000:
        hra = 0.15 * basic_salary
        da = 0.8 * basic_salary
        tr = 400
    else:
        hra = 0.1 * basic_salary
        da = 0.6 * basic_salary
        tr = 200

    gross_salary = basic_salary + hra + da + tr
    return basic_salary, hra, da, tr, gross_salary

# Test the function
basic_salary = float(input("Enter basic salary (in FRW): "))
bs, hra, da, tr, gross = calculate_gross_salary(basic_salary)

print("Basic Salary: FRW", bs)
print("House Rent Allowance: FRW", hra)
print("Daily Allowance: FRW", da)
print("Transport Allowance: FRW", tr)
print("Gross Salary: FRW", gross)