# maximum-value-in-linear-array
This .cpp source code could find the MAXIMUM value in a linear array

#Flowchart

```flow
st=>start: START
op0=>operation: Input k and  array l[]
op1=>operation: set m to l[0]
op2=>operation: set i to 1
cond0=>condition: i equals k?
cond1=>condition: is l[i] > m?
op3=>operation: Set m to l[i]
op4=>operation: increment i
op5=>operation: Output m
e=>end: END

st->op0->op1->op2->cond0
cond0(yes)->op5->e
cond0(no)->cond1
cond1(yes)->op3->op4->cond0
cond1(no)->op4
```
                    
### 绘制序列图 Sequence Diagram

### End
