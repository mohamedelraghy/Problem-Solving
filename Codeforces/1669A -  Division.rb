t = gets.chomp().to_i

for i in 1 .. t 
    rating = gets.chomp().to_i
    if 1900 <= rating
        puts "Division 1"
    elsif 1600 <= rating and rating <= 1899
        puts "Division 2"
    elsif 1400 <= rating and rating <= 1599
        puts "Division 3"
    elsif rating <= 1399
        puts "Division 4"
    end
end