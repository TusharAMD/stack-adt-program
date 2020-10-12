#include <stdio.h>
  #define N 20

  typedef struct stack
  {
      int a[N];
      int top;
  } stack;
  void push(stack *s, int ele)
  {
    if(s->top == N-1)
    {
      printf("\nStack overflow");
    }
    else
    {
      s->top=s->top+1;
      s->a[s->top]=ele;
    }
  }
  int isempty(stack *s)
  {
    if(s->top==-1)
    {
      return 1;
    }
    else
    return 0;

  }
  int pop (stack *s)
  {
    int x;
    if (isempty(s))
    {
      return -1;
    
    }
    else{
      x=s->a[s->top];
      s->top=s->top-1;
      return x;
    }
  }

  int peak(stack *s)
  {
    if (isempty(s))
    {
      return -1;

    }
    else{
      return(s->a[s->top]);
    }
  }
  void display(stack *s)
  {
    if(isempty(s))
    {
      printf("\n Stack is empty");
    }
    for (int i=s->top; i>=0; i--)
    {
      printf("\t %d",s->a[i]);

    }
    printf("\n");
  }
  int main()
  {
    stack s;
    s.top=-1;
    int ch,ele;
    while(1)
    {
      printf("\n 1-Push \n 2-Pop \n 3-Display \n 4-Peak \n 5-Exit \n Enter choice:");
      scanf("%d",&ch);
      if(ch==5)
      break;
      switch(ch)
      {
        case 1:
        {
          printf("Enter Element to be inserted ");
          scanf("%d",&ele);
          push(&s,ele);
          display(&s);
          break;
        }
        case 2:
        {
          ele=pop(&s);
          if(ele==-1)
          {
            printf("\n Stack underflow");

          }
          else
          {
            printf("\n Deleted Element is %d",ele);

          }
        break;
        }
        case 3:
        {
          display(&s);
          break;
        }
        case 4:
        {
          ele=peak(&s);
        if(ele==-1)
        printf("\n Stack is empty");
        else
        printf("\nStacktop=%d",ele);
        break;
        }
        
      }
    
    }
    return 0;
  }