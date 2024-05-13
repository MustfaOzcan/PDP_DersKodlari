(defun Hesap(x y)


	;yorum satiri noktali virgül 
	(print "x+y")
	(print (Topla x y))
	(print "x-y")
	(print (Cikar x y))
	(print "x*y")
    (print(Carp x y))
	(print "x/y")
	(Bol x y)	
	; en son deger doner sadece bolmeyi goruruz
)
(defun Topla(x y)
		(+ x y)
		
)

(defun Cikar(x y)
		(- x y)
		
)

(defun Bol(x y)
		(/ x y)
		
)
(defun Carp(x y)
		(* x y)
		
)