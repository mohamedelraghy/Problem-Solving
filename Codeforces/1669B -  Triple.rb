t = gets.chomp().to_i

while t > 0
    n = gets.chomp().to_i
    a = Array.new(n + 1, 0)
    ind = gets.chomp.split(' ').map!{ |num| num.to_i}
    
    ans = -1
    
    ind.each do |i|
        a[i] +=  1
        if a[i] == 3
            ans = i
        end
    end
    
    puts ans
    t -= 1
end