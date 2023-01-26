# C - Search Algorithms
0. <p>Write a function that searches for a value in an array of integers using the <a href="/rltoken/17RKhbmvh_u4ebCwaSxCxg" title="Linear search algorithm" target="_blank">Linear search algorithm</a></p>
<ul>
<li>Prototype : <code>int linear_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the first index where <code>value</code> is located</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)</li>
</ul>