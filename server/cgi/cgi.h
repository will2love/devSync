#ifndef _CGI_H_
#define _CGI_H_
#include <sys/types.h>
#include <wait.h>
#include "base.h"
#include "cgi_handle.h"
#include "linux_epoll.h"
#include "hash.h"
#include "http_header.h"

static execute_cgi_info_manager_t * cgi_info_manager_gloabal; 
static http_conf * g_goabal;
int start_cgi(http_conf *g);
#endif
