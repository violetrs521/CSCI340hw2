# Homework 2
## Violet Smith
## Jan 27th, 2022

### Part 1: Lists and Structures:

- <p>
    struct process {
        int pid;
    }
    </p>

- <p> struct processContext {
        char *ins_point;
        char *stac_point;
        char *reg_1;
        char *reg_2;
        char *ax;
        char *bx; 
    }
    </p>

- <p> struct processStatus{
        int init;
        int run;
        int susp;
        int ready;
        int term;
    }
    //for this structure the ints will be 0 for false and 1 for true

### Part 2: C Pointers and References

  - Sample output:
     - you have entered 9 This is the pointer: 0x55aca69f56b0 This is the value: 0 


### Part 3: Process Transitions

  - Ready
    - A process would transition into the ready state in order to wait to get the CPU time while holding memory space and maintaining its ablity to be prepared to run.
  - Suspended
    - A process might transition into a suspended state in order to make room or free up main memory space for a more urgent process to use the main memory space.
  - Running
    - A process would transition into a running state to complete its assigned task. For example this could be outputing a value that the user requested.  

### Part 4: Scheduling Policies

  - Completely Fair Scheduler (CFS)
    - The completely fair scheduler is based on the Rotating Staircase Deadline Scheduler. The CFS divides the CPU time among the processes fairly and equally. The CFS does not use the old time slices. It picks the process with the lowest runtime to run first. It picks the lowest runtime by placing it in a time ordered tree. It puts the largest tasks on the right and the smallest tasks on the left. 
  - Brain Fuck Scheduler (BFS)
    - Every reference I could find online it is called this. BFS uses a O(n) scheduler, and is treated as a queue. It has a big O(n) time complexity in the worst case and O(1) time complexity in the best case.The proccesses run order is determined based on the priority. The priority is determined based on the deadline formula. The BFS uses timeslices and virtual deadlines. Each process is assigned a timeslice and a virtual deadline when it requests CPU time to run.