# in pseudo ruby code

a = [1,3,5,9]

pairs = []

while !a.empty?

    pairs << [a.shift, a.pop]  # [a.first, a.last]
    
end

pairs
