class pip:
    def __init__(self, JobNo, deadline, profit):
        self.JobNo = JobNo
        self.deadline = deadline
        self.profit = profit



def Greedy_method(matrix, T):
    profit = 0
    slot = [-1] * T
    print('Slot= ', slot)
    for pip in matrix:  # class access matrix
        print(pip.JobNo, pip.deadline, pip.profit)
        for j in reversed(range(pip.deadline)):
            if j < T and slot[j] == -1:
                slot[j] = pip.JobNo
                profit += pip.profit
                break
    print("The Maximum profit sequence  are:", list(filter(lambda var: var != -1, slot)))
    return profit


# function close
# store matrix value JobNo,deadline then profits value.
Matrix = [pip(1, 1, 3), pip(2, 3, 25), pip(3, 2, 1), pip(4, 1, 6), pip(5, 2, 30)]
Job_no = 5
Matrix.sort(key=lambda var: var.profit, reverse=True)
print("Maximum  Profit is:", Greedy_method(Matrix, Job_no))
