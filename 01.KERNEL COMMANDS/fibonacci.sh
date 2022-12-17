

echo "Enter the number of terms"
read n
a=0
b=1
echo "Fibonacci series is : "
echo $a
echo $b
for ((i=0;i<n-2;i++))
do
next=$((a+b))
echo $next
a=$b
b=$next
done

/bin/bash