<h2><a href="https://leetcode.com/problems/create-binary-tree-from-descriptions/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px; --darkreader-inline-fill: #4aa0f2;" data-darkreader-inline-fill=""><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2196. Create Binary Tree From Descriptions</a></h2><h3>Medium</h3><hr><div><p>You are given a 2D integer array <code>descriptions</code> where <code>descriptions[i] = [parent<sub>i</sub>, child<sub>i</sub>, isLeft<sub>i</sub>]</code> indicates that <code>parent<sub>i</sub></code> is the <strong>parent</strong> of <code>child<sub>i</sub></code> in a <strong>binary</strong> tree of <strong>unique</strong> values. Furthermore,</p>

<ul>
	<li>If <code>isLeft<sub>i</sub> == 1</code>, then <code>child<sub>i</sub></code> is the left child of <code>parent<sub>i</sub></code>.</li>
	<li>If <code>isLeft<sub>i</sub> == 0</code>, then <code>child<sub>i</sub></code> is the right child of <code>parent<sub>i</sub></code>.</li>
</ul>

<p>Construct the binary tree described by <code>descriptions</code> and return <em>its <strong>root</strong></em>.</p>

<p>The test cases will be generated such that the binary tree is <strong>valid</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/02/09/example1drawio.png" style="width: 300px; height: 236px;">
<pre><strong>Input:</strong> descriptions = [[20,15,1],[20,17,0],[50,20,1],[50,80,0],[80,19,1]]
<strong>Output:</strong> [50,20,80,15,17,19]
<strong>Explanation:</strong> The root node is the node with value 50 since it has no parent.
The resulting binary tree is shown in the diagram.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/02/09/example2drawio.png" style="width: 131px; height: 300px;">
<pre><strong>Input:</strong> descriptions = [[1,2,1],[2,3,0],[3,4,1]]
<strong>Output:</strong> [1,2,null,null,3,4]
<strong>Explanation:</strong> The root node is the node with value 1 since it has no parent.
The resulting binary tree is shown in the diagram.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= descriptions.length &lt;= 10<sup>4</sup></code></li>
	<li><code>descriptions[i].length == 3</code></li>
	<li><code>1 &lt;= parent<sub>i</sub>, child<sub>i</sub> &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= isLeft<sub>i</sub> &lt;= 1</code></li>
	<li>The binary tree described by <code>descriptions</code> is valid.</li>
</ul>
</div>