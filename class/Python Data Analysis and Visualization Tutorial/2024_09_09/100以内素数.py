def is_prime(n):
    """判断n是否为素数"""
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):  # 只需检查到n的平方根
        if n % i == 0:
            return False
    return True


# 找出100以内的所有素数
primes = [n for n in range(2, 101) if is_prime(n)]
print(primes)
