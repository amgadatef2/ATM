#include <stdio.h>
#include <stdlib.h>
#define account_log (sizeof(accounts) / sizeof (account))
typedef struct name{
    int id;
    int password;
    int balance;

}account;
    static account accounts[]={{11,111,1000},{22,222,2000},{33,333,3000}};
char loginToSystem(void){

    int id=0;
    int password=0;
   char first_process=1;
   char secound_process=2;
   char num_of_process;
    printf("the users account ID:");
    scanf("%d",&id);
    printf("the users passward:");
    scanf("%d",&password);
    int i=0;
    for(i=0;i<account_log;i++){
            if(accounts[i].id==id&&accounts[i].password==password){
                printf("\n login successfully");

                return i;
            }
    }
    printf("login failed");
    return -1;

    }
        void printbalance(char account_id){
        if(account_id>=0&&account_id<account_log){
                printf("\n \n account balance:%d \n",accounts[account_id].balance);
        }
        else{
            printf("account failed to log in");
        }

        }
        void Deposit(char account_ID, int cash_amount){
            if(account_ID>=0&&account_ID<account_log){
                accounts[account_ID].balance= accounts[account_ID].balance + cash_amount;
                   printf("the new balance:%d",accounts[account_ID].balance);

            }
            else {
            }
        }
        void Transfer(int accountID1){
            int transfer_value=0;
             char flag=0;
             int accountid2=0;
            if(accountID1>=0&&accountID1<account_log){
                printf("\n enter the value u  need to transfer:");
                    scanf("%d",&transfer_value);
                if(accounts[accountID1].balance>=transfer_value){
                    printf("\n enter account u need to transfer:");
                    scanf("%d",&accountid2);
                    int i=0;
                    for(i=0;i<account_log;i++){
                        if(accounts[i].id==accountid2){
                                flag=1;
                                accounts[i].balance=accounts[i].balance+transfer_value;
                        printf("\n the new balance of account:%d",accounts[i].balance);
                        accounts[accountID1].balance=accounts[accountID1].balance-transfer_value;
                        printf("\n the first account balance:%d",accounts[accountID1].balance);

                        }
                    }
                    if(flag==1){
                            printf("\n successfull process \n ");
                    }
                    else{
                        printf("\n account is not existed \n");
                    }
                }
            }
        }
         char withdraw(char accountID, int cash_amount){
            int cash=0;
            int cashhh=0;
            if(accountID>=0&&accountID<account_log){
                    if(accounts[accountID].balance>=cash_amount){
                            accounts[accountID].balance=accounts[accountID].balance - cash_amount ;
                                  cashhh = accounts[accountID].balance;

                               return cashhh ;
                   }
                   else {
                    printf("u dont have balance");

                   }

            }
            else {
                printf(" account not detected");
            }
            return 0;
        }


int main(){
    int log =-1;
      int cash=0;
      int cash_amount=0;
      int cash_withdraw=0;
      char process=0;

    log = loginToSystem();
    if(log>=0){
        printf("\n 1-balance \n");
        printf("2-deposit \n");
        printf("3-transfer \n");
        printf("4-withdraw \n");
        printf("enter the number of process:");
        scanf("%d",&process);
        switch(process){
        case 1:
            printbalance(log);

            break;
        case 2:
            printf("enter the cash:");
      scanf("%d",&cash);
      Deposit(log,cash);
            break;
        case 3:
            Transfer(log);
            break;
        case 4:
             printf("enter the amount of with_draw:");
      scanf("%d",&cash_amount);
      cash_withdraw = withdraw(log,cash_amount);
      printf("\n cash_with_draw=%d",cash_withdraw);

            break;
        default:
            printf("the number of process not detected");
            break;
        }






    }
    else
    {
        printf(" ");
    }

    return 0;
}
