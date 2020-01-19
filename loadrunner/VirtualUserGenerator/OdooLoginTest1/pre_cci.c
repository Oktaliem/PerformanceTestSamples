# 1 "c:\\users\\okta\\documents\\sharpdevelop projects\\odoologintest1\\\\combined_OdooLoginTest1.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\okta\\documents\\sharpdevelop projects\\odoologintest1\\\\combined_OdooLoginTest1.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\okta\\documents\\sharpdevelop projects\\odoologintest1\\\\combined_OdooLoginTest1.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2


 
 


# 3 "c:\\users\\okta\\documents\\sharpdevelop projects\\odoologintest1\\\\combined_OdooLoginTest1.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\okta\\documents\\sharpdevelop projects\\odoologintest1\\\\combined_OdooLoginTest1.c" 2

# 1 "Action.c" 1
Action()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

 
	web_reg_save_param_attrib(
		"ParamName=csrf_token",
		"TagName=input",
		"Extract=value",
		"Name=csrf_token",
		"Type=hidden",
		"SEARCH_FILTERS",
		"IgnoreRedirections=No",
		"LAST");

	web_url("login", 
		"URL=http://192.168.1.66/web/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	 

	web_concurrent_start(0);

	web_url("web.assets_common.css", 
		"URL=http://192.168.1.66/web/content/430-3c01eea/web.assets_common.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t2.inf", 
		"LAST");

	web_url("web.assets_frontend.css", 
		"URL=http://192.168.1.66/web/content/431-2b2ce13/web.assets_frontend.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t3.inf", 
		"LAST");

	web_url("web.assets_frontend_minimal_js.js", 
		"URL=http://192.168.1.66/web/content/433-4fef38a/web.assets_frontend_minimal_js.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t4.inf", 
		"LAST");

	web_url("web.assets_common_minimal_js.js", 
		"URL=http://192.168.1.66/web/content/432-178fe0e/web.assets_common_minimal_js.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t5.inf", 
		"LAST");

	web_url("company_logo", 
		"URL=http://192.168.1.66/web/binary/company_logo", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t6.inf", 
		"LAST");

	web_concurrent_end(0);

	web_concurrent_start(0);

	web_url("web.assets_common_lazy.js", 
		"URL=http://192.168.1.66/web/content/434-383b496/web.assets_common_lazy.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t7.inf", 
		"LAST");

	web_url("web.assets_frontend_lazy.js", 
		"URL=http://192.168.1.66/web/content/435-a16725c/web.assets_frontend_lazy.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t8.inf", 
		"LAST");

	web_concurrent_end(0);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(21);

	web_url("1579395754836", 
		"URL=http://192.168.1.66/web/webclient/translations/1579395754836?mods=&lang=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("en_US", 
		"URL=http://192.168.1.66/web/webclient/locale/en_US", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.1.66/web/login", 
		"Snapshot=t10.inf", 
		"LAST");

	web_add_header("Origin", 
		"http://192.168.1.66");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

 
 
 
 
 
 
 
 
 

	web_reg_save_param_regexp(
		"ParamName=token",
		"RegExp=name=\"(.+?)\" value=\"(.+?)\"",
		"NotFound=warning",
		"Group=2",
		"Ordinal=ALL",
		"SEARCH_FILTERS",
		"Scope=BODY",
		"RequestUrl=http://192.168.1.66/web/login",
		"LAST");

	
 
 
 
 
 
 
 
 
 
 
	
 
 
 
 
 
 
 
 
 
 

 
	lr_output_message(lr_eval_string("{token}"));  
 
 
 
 
    lr_output_message(lr_eval_string("{csrf_token}"));  
     
	
	web_submit_data("login_2",
		"Action=http://192.168.1.66/web/login",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=http://192.168.1.66/web/login",
		"Snapshot=t11.inf",
		"Mode=HTTP",
		"ITEMDATA",
 
		"Name=csrf_token", "Value={csrf_token}", "ENDITEM",
		"Name=login", "Value=user@example.com", "ENDITEM",
		"Name=password", "Value=bitnami", "ENDITEM",
		"Name=redirect", "Value=", "ENDITEM",
		"LAST");

	web_concurrent_start(0);

	web_url("web.assets_backend.css", 
		"URL=http://192.168.1.66/web/content/436-44561e6/web.assets_backend.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t12.inf", 
		"LAST");

	web_url("web.assets_common.js", 
		"URL=http://192.168.1.66/web/content/437-3c01eea/web.assets_common.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t13.inf", 
		"LAST");

	web_concurrent_end(0);

	web_url("003f16ffa5db0f0bc3d7182bd34ca35055762784", 
		"URL=http://192.168.1.66/web/webclient/load_menus/003f16ffa5db0f0bc3d7182bd34ca35055762784", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("web.assets_backend.js", 
		"URL=http://192.168.1.66/web/content/438-44561e6/web.assets_backend.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t15.inf", 
		"LAST");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("3a817ef468b1400ba3be1854ee2435433468d582", 
		"URL=http://192.168.1.66/web/webclient/qweb/3a817ef468b1400ba3be1854ee2435433468d582?mods=base,web,base_import,web_diagram,web_editor,web_kanban_gauge,web_tour", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("favicon", 
		"URL=http://192.168.1.66/web/image/res.company/1/favicon/", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t17.inf", 
		"LAST");

	web_url("026ae15487c2067877f7b82ffb991974c070d399", 
		"URL=http://192.168.1.66/web/webclient/translations/026ae15487c2067877f7b82ffb991974c070d399?mods=base%2Cweb%2Cbase_import%2Cweb_diagram%2Cweb_editor%2Cweb_kanban_gauge%2Cweb_tour&lang=en_US", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("user_menu_avatar.png", 
		"URL=http://192.168.1.66/web/static/src/img/user_menu_avatar.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t19.inf", 
		"LAST");

	web_add_auto_header("Origin", 
		"http://192.168.1.66");

	web_custom_request("read", 
		"URL=http://192.168.1.66/web/dataset/call_kw/res.users/read", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"method\":\"call\",\"params\":{\"args\":[2,[\"action_id\"]],\"model\":\"res.users\",\"method\":\"read\",\"kwargs\":{\"context\":{\"lang\":\"en_US\",\"tz\":\"Europe/Brussels\",\"uid\":2,\"allowed_company_ids\":[1]}}},\"id\":222106299}", 
		"LAST");

	web_concurrent_start(0);

	web_url("image", 
		"URL=http://192.168.1.66/web/image?model=res.users&field=image_128&id=2", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t21.inf", 
		"LAST");

	web_url("fontawesome-webfont.woff2", 
		"URL=http://192.168.1.66/web/static/lib/fontawesome/fonts/fontawesome-webfont.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.1.66/web/content/430-3c01eea/web.assets_common.css", 
		"Snapshot=t22.inf", 
		"LAST");

	web_concurrent_end(0);

	web_custom_request("load", 
		"URL=http://192.168.1.66/web/action/load", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"method\":\"call\",\"params\":{\"action_id\":35},\"id\":469415478}", 
		"LAST");

	web_custom_request("load_views", 
		"URL=http://192.168.1.66/web/dataset/call_kw/ir.module.module/load_views", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"method\":\"call\",\"params\":{\"args\":[],\"model\":\"ir.module.module\",\"method\":\"load_views\",\"kwargs\":{\"views\":[[false,\"kanban\"],[false,\"list\"],[false,\"form\"],[92,\"search\"]],\"options\":{\"action_id\":35,\"toolbar\":true,\"load_filters\":true},\"context\":{\"lang\":\"en_US\",\"tz\":\"Europe/Brussels\",\"uid\":2,\"allowed_company_ids\":[1],\"search_default_app\":1}}},\"id\":489289431}", 
		"LAST");

	web_custom_request("search_read", 
		"URL=http://192.168.1.66/web/dataset/search_read", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"method\":\"call\",\"params\":{\"model\":\"ir.module.module\",\"domain\":[[\"application\",\"=\",true]],\"fields\":[\"icon\",\"to_buy\",\"name\",\"state\",\"summary\",\"website\",\"application\",\"shortdesc\"],\"limit\":80,\"sort\":\"\",\"context\":{\"lang\":\"en_US\",\"tz\":\"Europe/Brussels\",\"uid\":2,\"allowed_company_ids\":[1],\"bin_size\":true}},\"id\":806588863}", 
		"LAST");

	web_concurrent_start(0);

	web_url("icon.png", 
		"URL=http://192.168.1.66/crm/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t26.inf", 
		"LAST");

	web_url("icon.png_2", 
		"URL=http://192.168.1.66/website/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t27.inf", 
		"LAST");

	web_url("icon.png_3", 
		"URL=http://192.168.1.66/project/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t28.inf", 
		"LAST");

	web_url("stock_barcode.png", 
		"URL=http://192.168.1.66/base/static/img/icons/stock_barcode.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t29.inf", 
		"LAST");

	web_url("timesheet_grid.png", 
		"URL=http://192.168.1.66/base/static/img/icons/timesheet_grid.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t30.inf", 
		"LAST");

	web_url("icon.png_4", 
		"URL=http://192.168.1.66/stock/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t31.inf", 
		"LAST");

	web_url("account_accountant.png", 
		"URL=http://192.168.1.66/base/static/img/icons/account_accountant.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t32.inf", 
		"LAST");

	web_url("icon.png_5", 
		"URL=http://192.168.1.66/account/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t33.inf", 
		"LAST");

	web_url("icon.png_6", 
		"URL=http://192.168.1.66/mrp/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t34.inf", 
		"LAST");

	web_url("mrp_workorder.png", 
		"URL=http://192.168.1.66/base/static/img/icons/mrp_workorder.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t35.inf", 
		"LAST");

	web_url("favicon_2", 
		"URL=http://192.168.1.66/web/image/res.company/1/favicon/", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t36.inf", 
		"LAST");

	web_url("mrp_plm.png", 
		"URL=http://192.168.1.66/base/static/img/icons/mrp_plm.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t37.inf", 
		"LAST");

	web_url("quality_control.png", 
		"URL=http://192.168.1.66/base/static/img/icons/quality_control.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t38.inf", 
		"LAST");

	web_url("favicon_3", 
		"URL=http://192.168.1.66/web/image/res.company/1/favicon/", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t39.inf", 
		"LAST");

	web_url("icon.png_7", 
		"URL=http://192.168.1.66/sale_management/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t40.inf", 
		"LAST");

	web_url("web_studio.png", 
		"URL=http://192.168.1.66/base/static/img/icons/web_studio.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t41.inf", 
		"LAST");

	web_url("icon.png_8", 
		"URL=http://192.168.1.66/point_of_sale/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t42.inf", 
		"LAST");

	web_url("icon.png_9", 
		"URL=http://192.168.1.66/note/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t43.inf", 
		"LAST");

	web_url("icon.png_10", 
		"URL=http://192.168.1.66/website_sale/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t44.inf", 
		"LAST");

	web_url("icon.png_11", 
		"URL=http://192.168.1.66/purchase/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t45.inf", 
		"LAST");

	web_url("helpdesk.png", 
		"URL=http://192.168.1.66/base/static/img/icons/helpdesk.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t46.inf", 
		"LAST");

	web_url("icon.png_12", 
		"URL=http://192.168.1.66/hr/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t47.inf", 
		"LAST");

	web_url("icon.png_13", 
		"URL=http://192.168.1.66/hr_attendance/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t48.inf", 
		"LAST");

	web_url("icon.png_14", 
		"URL=http://192.168.1.66/hr_recruitment/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t49.inf", 
		"LAST");

	web_url("icon.png_15", 
		"URL=http://192.168.1.66/hr_expense/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t50.inf", 
		"LAST");

	web_url("icon.png_16", 
		"URL=http://192.168.1.66/board/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t51.inf", 
		"LAST");

	web_url("icon.png_17", 
		"URL=http://192.168.1.66/contacts/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t52.inf", 
		"LAST");

	web_url("hr_appraisal.png", 
		"URL=http://192.168.1.66/base/static/img/icons/hr_appraisal.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t53.inf", 
		"LAST");

	web_url("icon.png_18", 
		"URL=http://192.168.1.66/hr_holidays/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t54.inf", 
		"LAST");

	web_url("icon.png_19", 
		"URL=http://192.168.1.66/hr_skills/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t55.inf", 
		"LAST");

	web_url("icon.png_20", 
		"URL=http://192.168.1.66/mail/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t56.inf", 
		"LAST");

	web_url("icon.png_21", 
		"URL=http://192.168.1.66/mass_mailing_sms/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t57.inf", 
		"LAST");

	web_url("project_forecast.png", 
		"URL=http://192.168.1.66/base/static/img/icons/project_forecast.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t58.inf", 
		"LAST");

	web_url("sale_ebay.png", 
		"URL=http://192.168.1.66/base/static/img/icons/sale_ebay.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t59.inf", 
		"LAST");

	web_url("sale_subscription.png", 
		"URL=http://192.168.1.66/base/static/img/icons/sale_subscription.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t60.inf", 
		"LAST");

	web_url("sign.png", 
		"URL=http://192.168.1.66/base/static/img/icons/sign.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t61.inf", 
		"LAST");

	web_url("website_calendar.png", 
		"URL=http://192.168.1.66/base/static/img/icons/website_calendar.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t62.inf", 
		"LAST");

	web_url("voip.png", 
		"URL=http://192.168.1.66/base/static/img/icons/voip.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t63.inf", 
		"LAST");

	web_url("icon.png_22", 
		"URL=http://192.168.1.66/survey/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t64.inf", 
		"LAST");

	web_url("icon.png_23", 
		"URL=http://192.168.1.66/mass_mailing/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t65.inf", 
		"LAST");

	web_url("marketing_automation.png", 
		"URL=http://192.168.1.66/base/static/img/icons/marketing_automation.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t66.inf", 
		"LAST");

	web_url("icon.png_24", 
		"URL=http://192.168.1.66/lunch/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t67.inf", 
		"LAST");

	web_url("icon.png_25", 
		"URL=http://192.168.1.66/maintenance/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t68.inf", 
		"LAST");

	web_url("icon.png_26", 
		"URL=http://192.168.1.66/calendar/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t69.inf", 
		"LAST");

	web_url("icon.png_27", 
		"URL=http://192.168.1.66/website_slides/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t70.inf", 
		"LAST");

	web_url("icon.png_28", 
		"URL=http://192.168.1.66/website_hr_recruitment/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t71.inf", 
		"LAST");

	web_url("icon.png_29", 
		"URL=http://192.168.1.66/website_blog/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t72.inf", 
		"LAST");

	web_url("icon.png_30", 
		"URL=http://192.168.1.66/website_forum/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t73.inf", 
		"LAST");

	web_url("icon.png_31", 
		"URL=http://192.168.1.66/fleet/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t74.inf", 
		"LAST");

	web_url("icon.png_32", 
		"URL=http://192.168.1.66/website_event/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t75.inf", 
		"LAST");

	web_url("icon.png_33", 
		"URL=http://192.168.1.66/im_livechat/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t76.inf", 
		"LAST");

	web_url("icon.png_34", 
		"URL=http://192.168.1.66/repair/static/description/icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t77.inf", 
		"LAST");

	web_url("web_mobile.png", 
		"URL=http://192.168.1.66/base/static/img/icons/web_mobile.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.1.66/web", 
		"Snapshot=t78.inf", 
		"LAST");

	web_concurrent_end(0);

	return 0;
}
# 5 "c:\\users\\okta\\documents\\sharpdevelop projects\\odoologintest1\\\\combined_OdooLoginTest1.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\okta\\documents\\sharpdevelop projects\\odoologintest1\\\\combined_OdooLoginTest1.c" 2

