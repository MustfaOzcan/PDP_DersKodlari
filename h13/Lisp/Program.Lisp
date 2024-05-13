(defun kareselhesap()
	(print "x:")
	(setq x (read))	;kullanicidan okunan degeri x'e ata
	(print "y:")
	(setq y (read))
	(+ (* x x) (* y y))
)
(defun yetiskinmi(yas)
;yas 17 den buyukse true degilse false

	(if (and (> yas 17) (< yas 90))T nil 
	
	
		 
		
	
	
	
	
	
	)

;if 3 parametre aliyor
)
(defun Artan(sonsayi)
	(loop for i from 1 to sonsayi do (print i))
	



)
(defun faktoriyel(x)
	(setq sonuc 1)
	(loop until (< x 1) do 
		(setq sonuc (* sonuc x))
		(decf x)
	)
	sonuc 
)
;// özyinelemeli faktoriyel
(defun faktoriyel_(x)
	(if (< x 2) 1
		(* x (faktoriyel_ (- x 1)))	
	)
	
)

(defun listeolustur (x &optional y z)
		(list x y z)
)

(defun listeolusturkey (&key x y z)
		(list x y z)
)

(defparameter *A* (list 1 2 3 4))
(print *a*)



;;cdr adres car veri
(defun ekle(liste index (veri)
	(push veri(cdr (nthcdr index liste)));;veriyi adrese ekşyor
	liste
)	
;;//if kontrol 