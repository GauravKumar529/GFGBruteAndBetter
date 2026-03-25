<h2><a href="https://www.geeksforgeeks.org/problems/floor-in-bst/1">Floor in BST</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a&nbsp;<strong>root&nbsp;</strong>binary search tree and an integer&nbsp;<strong>x</strong></span><span style="font-size: 18px;">. your task is to find the greatest value node of the BST which is smaller than or equal to x.<br><strong>Note:</strong>&nbsp;when x is smaller than the smallest node of BST then returns -1.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong><span style="font-size: 18px;">
                    2
                     \
                      81
                    /    \
                 42       87
                   \       \
                    66      90
                   /
                 45
x = 87
<strong>Output: </strong>87
<strong>Explanation: </strong>87 is present in tree so floor will be 87.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
                          6
                           \
                            8
                          /   \
                        7       9
x = 11
<strong>Output: </strong>9</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
                          6
                           \
                            8
                          /   \
                        7       9
x = 5
<strong>Output: </strong>-1<br></span></pre>
<p><strong><span style="font-size: 18px;">Constraint:</span></strong><br><span style="font-size: 18px;">1 ≤ Number of nodes ≤ 10</span><sup>5</sup><br style="font-size: 18px;"><span style="font-size: 18px;">1 ≤ x, Value of Node ≤ 10</span><sup>6</sup></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Data Structures</code>&nbsp;