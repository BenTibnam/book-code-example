(define (sqr-root x)
	(define (square x) (* x x))
	(define (average x y) (/ (+ x y) 2))
	(define (good-enough? guess)
		(< (abs (- (square guess) x)) 0.0001))
	(define (improve guess)
		(average guess (/ x guess)))
	(define (sqrt-iter guess)
		(if (good-enough? guess)
			guess
			(sqrt-iter (improve guess))))
	(sqrt-iter 1.0))
	

(display (sqr-root 9))
