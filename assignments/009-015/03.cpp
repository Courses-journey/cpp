
/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ NotValid ] => Reason Start with number
  __name      [ Valid ] => Reason ?
  name@name   [ NotValid ] => Reason Special Characters
  name10name  [ Valid ] => Reason ?
  name!name   [ NotValid ] => Reason Special Characters
  first_NAME  [ Valid ] => Reason ?
  first_name  [ Valid ] => Reason ?
  firstName   [ Valid ] => Reason ?
  first name  [ NotValid ] => Reason White space
  fn          [ Valid ] => Reason ?
  public      [ Valid ] => Reason ?
  Public      [ NotValid ] => Reason Reserved Keywords
*/

/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ ??? ] => Reason ?
  __name      [ ??? ] => Reason ?
  name@name   [ ??? ] => Reason ?
  name10name  [ ??? ] => Reason ?
  name!name   [ ??? ] => Reason ?
  first_NAME  [ ??? ] => Reason ?
  first_name  [ ??? ] => Reason ?
  firstName   [ ??? ] => Reason ?
  first name  [ ??? ] => Reason ?
  fn          [ ??? ] => Reason ?
  public      [ ??? ] => Reason ?
  Public      [ ??? ] => Reason ?
*/