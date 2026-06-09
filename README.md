# Push_swap

*This project has been created as part of the 42 curriculum by tochaves, kbezerra.*

---

## Description

Push_swap is a sorting algorithm project where data must be sorted on a stack using a limited set of instructions and the lowest possible number of operations.

The program receives a list of integers as arguments and outputs the smallest sequence of Push_swap operations that sorts the integers in ascending order, with the smallest number at the top of stack A.

Two stacks are available — **A** and **B** — and the following 11 operations:

| Operation | Description |
|---|---|
| `sa` | Swap the first two elements at the top of stack A |
| `sb` | Swap the first two elements at the top of stack B |
| `ss` | `sa` and `sb` at the same time |
| `pa` | Take the top element of B and put it at the top of A |
| `pb` | Take the top element of A and put it at the top of B |
| `ra` | Shift up all elements of stack A by one (top becomes last) |
| `rb` | Shift up all elements of stack B by one (top becomes last) |
| `rr` | `ra` and `rb` at the same time |
| `rra` | Shift down all elements of stack A by one (last becomes top) |
| `rrb` | Shift down all elements of stack B by one (last becomes top) |
| `rrr` | `rra` and `rrb` at the same time |

---

## Instructions

### Compilation

```bash
make
```

### Execution

```bash
./push_swap [numbers]
```

Arguments can be passed as separate values or as a quoted string:

```bash
./push_swap 3 1 2 6 5
./push_swap "3 1 2 6 5"
```

### Strategy flags

```bash
./push_swap --simple 3 1 2      # Forces O(n²) algorithm
./push_swap --medium 3 1 2      # Forces O(n√n) algorithm
./push_swap --complex 3 1 2     # Forces O(n log n) algorithm
./push_swap --adaptive 3 1 2    # Selects algorithm based on disorder (default)
```

### Benchmark mode

```bash
./push_swap --bench 3 1 2 2> bench.txt 
cat bench.txt
```

Benchmark output is sent to stderr and includes disorder, strategy, total operations, and per-operation counts.

### Verifying correctness

```bash
ARG="3 1 2 6 5"; ./push_swap $ARG | ./checker_linux $ARG
```

### Performance testing

```bash
shuf -i 0-9999 -n 100 > args.txt ; ./push_swap $(cat args.txt) | wc -l
shuf -i 0-9999 -n 500 > args.txt ; ./push_swap $(cat args.txt) | wc -l
```

### Error cases

```bash
./push_swap 1 2 abc     # Error — not a number
./push_swap 1 2 1       # Error — duplicate
./push_swap             # No output — no arguments
```

### Cleaning

```bash
make clean    # removes object files
make fclean   # removes object files and binary
make re       # full recompile
```

---

## Algorithms

### Disorder metric

Before sorting, the program computes a **disorder value** between 0.0 and 1.0 that measures how unsorted the stack is. It counts all pairs (i, j) where i appears before j but i > j (an inversion), divided by the total number of pairs:

```
disorder = inversions / total_pairs
```

- `0.0` — already sorted
- `1.0` — completely reversed

This value drives the adaptive algorithm selection.

---

### Simple algorithm — O(n²) — Selection Sort adaptation

**Strategy:** Find the minimum element, rotate the stack until it reaches the top, push it to B. Repeat until A is empty. Then return all elements from B to A by always bringing the maximum to the top first.

**Justification:** For nearly sorted inputs (disorder < 0.2), the minimum is usually close to the top. Very few rotations are needed, making this approach efficient in practice for low-disorder inputs. The worst case is O(n²) rotations — one full scan per element.

**Complexity:** O(n²) operations in the Push_swap model.

---

### Medium algorithm — O(n√n) — Chunk Sort adaptation

**Strategy:** Normalize element values to indices 0..n-1. Divide the index range into chunks of size √n. For each chunk, scan stack A and push elements belonging to the current chunk to B. Once all chunks are processed, return elements from B to A in sorted order.

**Justification:** Chunking reduces the number of rotations needed per element. Instead of scanning the entire stack for the global minimum (O(n) per element), each chunk narrows the search to roughly √n elements per pass — giving O(n√n) total operations.

**Complexity:** O(n√n) operations in the Push_swap model.

---

### Complex algorithm — O(n log n) — Radix Sort adaptation (LSD)

**Strategy:** Normalize element values to indices 0..n-1. Process each bit from least significant to most significant. For each bit position: scan all elements in A — push elements with bit = 0 to B, rotate elements with bit = 1 in A. After scanning all elements, return B to A with `pa`. Repeat for each bit.

**Justification:** Each pass processes all n elements exactly once, and the number of passes is log₂(n) — the number of bits needed to represent n values. This gives a guaranteed O(n log n) operation count regardless of the input order.

**Complexity:** O(n log n) operations in the Push_swap model.

---

### Adaptive algorithm — disorder-based selection

The adaptive strategy measures disorder before any moves and selects the most appropriate algorithm:

| Disorder range | Algorithm | Complexity |
|---|---|---|
| < 0.2 | Selection Sort | O(n²) |
| 0.2 ≤ disorder < 0.5 | Chunk Sort | O(n√n) |
| ≥ 0.5 | Radix Sort | O(n log n) |

**Rationale for thresholds:**
- Below 0.2, the stack has very few inversions — a simple scan for the minimum is fast and generates few operations.
- Between 0.2 and 0.5, the disorder is moderate — chunk sort's divide-and-conquer approach outperforms selection sort without the overhead of full bit-level processing.
- Above 0.5, the stack is heavily disordered — radix sort's consistent O(n log n) guarantee is optimal.

---

## Resources:

https://www.ime.usp.br/~pf/algoritmos/aulas/pilha.html

https://www.tutorialspoint.com/c_standard_library/c_function_exit.htm

https://medium.com/@CastleScribble/how-to-print-to-stderr-standard-error-in-c-using-the-write-function-5dfcaffd17fe

https://www.geeksforgeeks.org/c/c-program-for-insertion-sort/

https://www.treinaweb.com.br/blog/conheca-os-principais-algoritmos-de-ordenacao

https://satyadeepmaheshwari.medium.com/sorting-large-datasets-with-limited-memory-the-chunked-merge-sort-approach-318275275c81

https://www.geeksforgeeks.org/c/c-program-for-radix-sort/

https://learn.microsoft.com/pt-br/cpp/c-language/c-bitwise-operators?view=msvc-170
