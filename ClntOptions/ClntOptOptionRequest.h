/*
 * Dibbler - a portable DHCPv6
 *
 * authors: Tomasz Mrugalski <thomson@klub.com.pl>
 *          Marek Senderski <msend@o2.pl>
 *
 * released under GNU GPL v2 or later licence
 *
 * $Id: ClntOptOptionRequest.h,v 1.3 2006-02-02 23:16:54 thomson Exp $
 *
 * $Log: not supported by cvs2svn $
 * Revision 1.2  2004/10/25 20:45:53  thomson
 * Option support, parsers rewritten. ClntIfaceMgr now handles options.
 *
 */

#ifndef CLNTOPTOPTIONREQUEST_H
#define CLNTOPTOPTIONREQUEST_H

#include "DHCPConst.h"
#include "SmartPtr.h"
#include "Opt.h"
#include "OptOptionRequest.h"

class TClntConfMgr;

class TClntOptOptionRequest : public TOptOptionRequest 
{
 public:
    TClntOptOptionRequest(SmartPtr<TClntCfgIface> ptrIface, TMsg* parent);
    TClntOptOptionRequest( char * buf,  int n, TMsg* parent);
    bool doDuties();
 private:
    SmartPtr<TClntCfgMgr> CfgMgr;
};

#endif
