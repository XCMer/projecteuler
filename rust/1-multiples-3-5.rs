fn main() {
    let max_no: i32 = 999;
    let first_number: i32 = 3;
    let second_number: i32 = 5;
    let product: i32 = first_number * second_number;

    let sum: i32 = sum_of_products(first_number, max_no) + sum_of_products(second_number, max_no) - sum_of_products(product, max_no);

    println!("Sum: {}", sum);
}

fn sum_of_products(multiple: i32, max_no: i32) -> i32 {
    let quotient: i32 = max_no / multiple;
    let sum: i32 = quotient * (quotient + 1) / 2;

    return multiple * sum;
}
