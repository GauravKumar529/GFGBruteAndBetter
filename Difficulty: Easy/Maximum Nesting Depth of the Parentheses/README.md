<h2><a href="https://www.geeksforgeeks.org/problems/maximum-nesting-depth-of-the-parentheses/1">Maximum Nesting Depth of the Parentheses</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">A string is a <strong>valid parentheses string</strong> (denoted <strong>VPS</strong> ) if is meets any one of the following:</span></p>

<ul>
	<li><span style="font-size:18px">It is an empty string<strong> ""</strong>, or a single character not equals to <strong>" ( "&nbsp;</strong> or&nbsp;<strong> " ) " </strong>,</span></li>
	<li><span style="font-size:18px">It can be written as<strong> AB</strong> (<strong>A </strong>concatenated with <strong>B</strong> ),<br>
	where<strong> A</strong> and <strong>B</strong> are <strong>VPS's</strong> , or</span></li>
	<li><span style="font-size:18px">It can be written as <strong>(A)</strong> , where <strong>A</strong> is a <strong>VPS</strong>.</span></li>
</ul>

<p><span style="font-size:18px">We can similarly define the <strong>nesting depth</strong> depth (S) of any VPS <strong>S</strong> as follows:</span></p>

<ul>
	<li><span style="font-size:18px"><strong>depth ("") = 0</strong></span></li>
	<li><span style="font-size:18px"><strong>depth (C) = 0</strong>, where <strong>C</strong> is a string with a single character excluding "(" and ")" ,</span></li>
	<li><span style="font-size:18px"><strong>depth (A + B) = max (depth (A) , depth (B)) </strong>, where <strong>A</strong> and <strong>B</strong> are VPS's.</span></li>
	<li><span style="font-size:18px"><strong>depth ( "(" + A + ")" ) = 1 + depth (A)</strong> , where <strong>A</strong> is a VPS.</span></li>
</ul>

<p><span style="font-size:18px">For example ,<strong> ""</strong> , <strong>" ( ) ( ) "</strong> , and <strong>" ( ) ( ( ) ( ) ) "</strong> and <strong>VPS's</strong> (with nesting depths 0 , 1, and 2), and <strong>" ) ( "</strong> and <strong>" ( ( )</strong> <strong>"&nbsp;</strong> &nbsp;are not <strong>VPS's</strong>.</span></p>

<p><br>
<span style="font-size:18px">Given a <strong>VPS</strong> represented as string <strong>S</strong>&nbsp;, return the nesting depth of <strong>S.</strong></span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor: var(--darkreader-background-eeeeee, #2a2c2e); --darkreader-inline-border-top: var(--darkreader-border-cccccc, #474d50); --darkreader-inline-border-right: var(--darkreader-border-cccccc, #474d50); --darkreader-inline-border-bottom: var(--darkreader-border-cccccc, #474d50); --darkreader-inline-border-left: var(--darkreader-border-cccccc, #474d50);" data-darkreader-inline-bgimage="" data-darkreader-inline-bgcolor="" data-darkreader-inline-border-top="" data-darkreader-inline-border-right="" data-darkreader-inline-border-bottom="" data-darkreader-inline-border-left=""><span style="font-size:18px"><strong>Input: </strong>s&nbsp;= " ((5+2)(3+4)((6))) "<br>
<strong>Output:&nbsp;</strong>3<br>
<strong>Explanation:</strong>&nbsp;Character '6' is inside three nested parentheses.</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor: var(--darkreader-background-eeeeee, #2a2c2e); --darkreader-inline-border-top: var(--darkreader-border-cccccc, #474d50); --darkreader-inline-border-right: var(--darkreader-border-cccccc, #474d50); --darkreader-inline-border-bottom: var(--darkreader-border-cccccc, #474d50); --darkreader-inline-border-left: var(--darkreader-border-cccccc, #474d50);" data-darkreader-inline-bgimage="" data-darkreader-inline-bgcolor="" data-darkreader-inline-border-top="" data-darkreader-inline-border-right="" data-darkreader-inline-border-bottom="" data-darkreader-inline-border-left=""><span style="font-size:18px"><strong>Input:&nbsp;</strong>" (43+4++3)((3)(9))+1 "<br>
<strong>Output:</strong>&nbsp;2<br>
<strong>Explanation:</strong>&nbsp;Character '3' and '9' both are inside two nested parentheses.</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read&nbsp;input or print anything. Your task is to&nbsp;complete the function <strong>maxDepth() </strong>which takes<strong>&nbsp;</strong>the string s&nbsp;as input parameters and returns nesting depth of the given string s&nbsp;.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(|s|)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=|s|&lt;=100<br>
s consists of digits <strong>0-9</strong> and characters <strong>' + '</strong> , <strong>' - '</strong> ,<strong> ' * '</strong> , <strong>' / '</strong> , <strong>' ( '</strong> , and <strong>' ) '.</strong><br>
It is guaranteed that parentheses expression <strong>s</strong>&nbsp;is a&nbsp;<strong>VPS</strong>.</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;