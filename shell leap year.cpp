echo "Enter Year:"
read y

year=$y

y=$(( $y % 4 ))
if [ $y -eq 0 ]
then
    echo "$year is leap Year"
else
    echo "$year is not a leap Year"
fi
