subroutine add_fortran(n, a, b)
  integer,intent(in) :: n
  integer,intent(inout) :: a(n), b(n)
  integer i

  do i = 1, n
    a(i) = a(i) + b(i)
  end do
end subroutine add_fortran
