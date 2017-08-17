//This file is automatically generated. DO NOT EDIT!

#ifndef ROBOTRACONTEUR_USE_STDAFX
#include "edu__rpi__robotics__abb__egm_stubskel.h"
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#else
#include "stdafx.h"
#endif
namespace edu
{
namespace rpi
{
namespace robotics
{
namespace abb
{
namespace egm
{
std::string edu__rpi__robotics__abb__egmFactory::GetServiceName()
{
return "edu.rpi.robotics.abb.egm";
}
std::string edu__rpi__robotics__abb__egmFactory::DefString()
{
std::string out(
"service edu.rpi.robotics.abb.egm\n"
"\n"
"option version 0.8\n"
"\n"
"object EGM\n"
"property double[6] joint_angle\n"
"property double[6] joint_angle_setpoint\n"
"end object\n"
"\n"
"\n"
);
return out;
}
RR_SHARED_PTR<RobotRaconteur::StructureStub> edu__rpi__robotics__abb__egmFactory::FindStructureStub(std::string s)
{
boost::tuple<std::string,std::string> res=RobotRaconteur::SplitQualifiedName(s);
std::string servicetype=res.get<0>();
std::string objecttype=res.get<1>();
throw RobotRaconteur::ServiceException("Invalid structure stub type.");
}
RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> edu__rpi__robotics__abb__egmFactory::PackStructure(RR_SHARED_PTR<RobotRaconteur::RRStructure> structin)
{
std::string type=structin->RRType();boost::tuple<std::string,std::string> res=RobotRaconteur::SplitQualifiedName(type);
std::string servicetype=res.get<0>();
std::string objecttype=res.get<1>();
if (servicetype != "edu.rpi.robotics.abb.egm") return GetNode()->PackStructure(structin);
RR_SHARED_PTR<RobotRaconteur::StructureStub> stub=FindStructureStub(type);
return stub->PackStructure(structin);
throw RobotRaconteur::ServiceException("Invalid structure stub type.");
}
RR_SHARED_PTR<RobotRaconteur::RRObject> edu__rpi__robotics__abb__egmFactory::UnpackStructure(RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> mstructin)
{
std::string type=mstructin->GetTypeString();boost::tuple<std::string,std::string> res=RobotRaconteur::SplitQualifiedName(type);
std::string servicetype=res.get<0>();
std::string objecttype=res.get<1>();
if (servicetype != "edu.rpi.robotics.abb.egm") return GetNode()->UnpackStructure(mstructin);
RR_SHARED_PTR<RobotRaconteur::StructureStub> stub=FindStructureStub(type);
return stub->UnpackStructure(mstructin);
throw RobotRaconteur::ServiceException("Invalid structure stub type.");
}
RR_SHARED_PTR<RobotRaconteur::ServiceStub> edu__rpi__robotics__abb__egmFactory::CreateStub(std::string type, std::string path, RR_SHARED_PTR<RobotRaconteur::ClientContext> context)
{
boost::tuple<std::string,std::string> res=RobotRaconteur::SplitQualifiedName(type);
std::string servicetype=res.get<0>();
std::string objecttype=res.get<1>();
if (servicetype != "edu.rpi.robotics.abb.egm") return GetNode()->GetServiceType(servicetype)->CreateStub(type,path,context);
if (objecttype=="EGM") { RR_SHARED_PTR<EGM_stub> o=(RR_MAKE_SHARED<EGM_stub>(path,context)); o->RRInitStub(); return o; }
throw RobotRaconteur::ServiceException("Invalid structure stub type.");
}
RR_SHARED_PTR<RobotRaconteur::ServiceSkel> edu__rpi__robotics__abb__egmFactory::CreateSkel(std::string type, std::string path, RR_SHARED_PTR<RobotRaconteur::RRObject> obj, RR_SHARED_PTR<RobotRaconteur::ServerContext> context)
{
boost::tuple<std::string,std::string> res=RobotRaconteur::SplitQualifiedName(type);
std::string servicetype=res.get<0>();
std::string objecttype=res.get<1>();
if (servicetype != "edu.rpi.robotics.abb.egm") return GetNode()->GetServiceType(servicetype)->CreateSkel(type,path,obj,context);
if (objecttype=="EGM") {RR_SHARED_PTR<EGM_skel> o=RR_MAKE_SHARED<EGM_skel>(); o->Init(path,obj,context); return o; }
throw RobotRaconteur::ServiceException("Invalid structure skel type.");
return RR_SHARED_PTR<RobotRaconteur::ServiceSkel>();
}
void edu__rpi__robotics__abb__egmFactory::DownCastAndThrowException(RobotRaconteur::RobotRaconteurException& rr_exp)
{
std::string rr_type=rr_exp.Error;
if (rr_type.find('.')==std::string::npos)
{
	return;
}
boost::tuple<std::string,std::string> rr_res=RobotRaconteur::SplitQualifiedName(rr_type);
if (rr_res.get<0>() != "edu.rpi.robotics.abb.egm") GetNode()->DownCastAndThrowException(rr_exp);
return;
}
RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> edu__rpi__robotics__abb__egmFactory::DownCastException(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> rr_exp){
if (!rr_exp) return rr_exp;
std::string rr_type=rr_exp->Error;
if (rr_type.find('.')==std::string::npos)
{
	return rr_exp;
}
boost::tuple<std::string,std::string> rr_res=RobotRaconteur::SplitQualifiedName(rr_type);
if (rr_res.get<0>() != "edu.rpi.robotics.abb.egm") return GetNode()->DownCastException(rr_exp);
return rr_exp;
}

EGM_stub::EGM_stub(const std::string &path, RR_SHARED_PTR<RobotRaconteur::ClientContext> c) : RobotRaconteur::ServiceStub(path,c){ }
void EGM_stub::RRInitStub()
{
}

RR_SHARED_PTR<RobotRaconteur::RRArray<double > > EGM_stub::get_joint_angle()
{
RR_SHARED_PTR<RobotRaconteur::MessageEntry> m=RR_MAKE_SHARED<RobotRaconteur::MessageEntry>(RobotRaconteur::MessageEntryType_PropertyGetReq,"joint_angle");
RR_SHARED_PTR<RobotRaconteur::MessageEntry> mr=ProcessTransaction(m);
RR_SHARED_PTR<RobotRaconteur::MessageElement> me=mr->FindElement("value");
return me->CastData<RobotRaconteur::RRArray<double > >();
}
void EGM_stub::set_joint_angle(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > value)
{
RR_SHARED_PTR<RobotRaconteur::MessageEntry> req=RR_MAKE_SHARED<RobotRaconteur::MessageEntry>(RobotRaconteur::MessageEntryType_PropertySetReq,"joint_angle");
req->AddElement(RR_MAKE_SHARED<RobotRaconteur::MessageElement>("value",RobotRaconteur::rr_cast<RobotRaconteur::MessageElementData>(value)));
RR_SHARED_PTR<RobotRaconteur::MessageEntry> mr=ProcessTransaction(req);
}

RR_SHARED_PTR<RobotRaconteur::RRArray<double > > EGM_stub::get_joint_angle_setpoint()
{
RR_SHARED_PTR<RobotRaconteur::MessageEntry> m=RR_MAKE_SHARED<RobotRaconteur::MessageEntry>(RobotRaconteur::MessageEntryType_PropertyGetReq,"joint_angle_setpoint");
RR_SHARED_PTR<RobotRaconteur::MessageEntry> mr=ProcessTransaction(m);
RR_SHARED_PTR<RobotRaconteur::MessageElement> me=mr->FindElement("value");
return me->CastData<RobotRaconteur::RRArray<double > >();
}
void EGM_stub::set_joint_angle_setpoint(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > value)
{
RR_SHARED_PTR<RobotRaconteur::MessageEntry> req=RR_MAKE_SHARED<RobotRaconteur::MessageEntry>(RobotRaconteur::MessageEntryType_PropertySetReq,"joint_angle_setpoint");
req->AddElement(RR_MAKE_SHARED<RobotRaconteur::MessageElement>("value",RobotRaconteur::rr_cast<RobotRaconteur::MessageElementData>(value)));
RR_SHARED_PTR<RobotRaconteur::MessageEntry> mr=ProcessTransaction(req);
}

void EGM_stub::DispatchEvent(RR_SHARED_PTR<RobotRaconteur::MessageEntry> rr_m)
{
throw RobotRaconteur::MemberNotFoundException("Member not found");
}
void EGM_stub::DispatchPipeMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m)
{
throw RobotRaconteur::MemberNotFoundException("Member not found");
}
void EGM_stub::DispatchWireMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m)
{
throw RobotRaconteur::MemberNotFoundException("Member not found");
}
RR_SHARED_PTR<RobotRaconteur::MessageEntry>EGM_stub::CallbackCall(RR_SHARED_PTR<RobotRaconteur::MessageEntry> rr_m)
{
std::string ename=rr_m->MemberName;
RR_SHARED_PTR<RobotRaconteur::MessageEntry> rr_mr=RR_MAKE_SHARED<RobotRaconteur::MessageEntry>(RobotRaconteur::MessageEntryType_CallbackCallRet, ename);
rr_mr->ServicePath=rr_m->ServicePath;
rr_mr->TransactionID=rr_m->TransactionID;
throw RobotRaconteur::MemberNotFoundException("Member not found");
}

std::string EGM_stub::RRType()
{
return "edu.rpi.robotics.abb.egm.EGM";
}
void EGM_stub::RRClose()
{
ServiceStub::RRClose();
}

void EGM_stub::async_get_joint_angle(boost::function<void (RR_SHARED_PTR<RobotRaconteur::RRArray<double > >,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout)
{
RR_SHARED_PTR<RobotRaconteur::MessageEntry> m=RR_MAKE_SHARED<RobotRaconteur::MessageEntry>(RobotRaconteur::MessageEntryType_PropertyGetReq,"joint_angle");
AsyncProcessTransaction(m,boost::bind(&EGM_stub::rrend_get_joint_angle, RobotRaconteur::rr_cast<EGM_stub>(shared_from_this()),_1,_2,rr_handler ),rr_timeout);
}
void EGM_stub::rrend_get_joint_angle(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RRArray<double > > ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler)
{
if (err)
{
handler(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >(),err);
return;
}
if (m->Error != RobotRaconteur::MessageErrorType_None)
{
handler(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >(),RobotRaconteur::RobotRaconteurExceptionUtil::MessageEntryToException(m));
return;
}
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > rr_ret;
try
{
RR_SHARED_PTR<RobotRaconteur::MessageElement> me=m->FindElement("value");
rr_ret=me->CastData<RobotRaconteur::RRArray<double > >();
}
catch (RobotRaconteur::RobotRaconteurException& err)
{
handler(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >(),RobotRaconteur::RobotRaconteurExceptionUtil::DownCastException(err));
return;
}
catch (std::exception& err)
{
handler(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >(),RR_MAKE_SHARED<RobotRaconteur::RobotRaconteurRemoteException>(std::string(typeid(err).name()),err.what()));
return;
}
handler(rr_ret, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>());
}
void EGM_stub::async_set_joint_angle(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > value,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout)
{
RR_SHARED_PTR<RobotRaconteur::MessageEntry> req=RR_MAKE_SHARED<RobotRaconteur::MessageEntry>(RobotRaconteur::MessageEntryType_PropertySetReq,"joint_angle");
req->AddElement(RR_MAKE_SHARED<RobotRaconteur::MessageElement>("value",RobotRaconteur::rr_cast<RobotRaconteur::MessageElementData>(value)));
AsyncProcessTransaction(req,boost::bind(&EGM_stub::rrend_set_joint_angle, RobotRaconteur::rr_cast<EGM_stub>(shared_from_this()),_1,_2,rr_handler ),rr_timeout);
}
void EGM_stub::rrend_set_joint_angle(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler)
{
if (err)
{
handler(err);
return;
}
if (m->Error != RobotRaconteur::MessageErrorType_None)
{
handler(RobotRaconteur::RobotRaconteurExceptionUtil::MessageEntryToException(m));
return;
}
handler(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>());
}
void EGM_stub::async_get_joint_angle_setpoint(boost::function<void (RR_SHARED_PTR<RobotRaconteur::RRArray<double > >,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout)
{
RR_SHARED_PTR<RobotRaconteur::MessageEntry> m=RR_MAKE_SHARED<RobotRaconteur::MessageEntry>(RobotRaconteur::MessageEntryType_PropertyGetReq,"joint_angle_setpoint");
AsyncProcessTransaction(m,boost::bind(&EGM_stub::rrend_get_joint_angle_setpoint, RobotRaconteur::rr_cast<EGM_stub>(shared_from_this()),_1,_2,rr_handler ),rr_timeout);
}
void EGM_stub::rrend_get_joint_angle_setpoint(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RRArray<double > > ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler)
{
if (err)
{
handler(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >(),err);
return;
}
if (m->Error != RobotRaconteur::MessageErrorType_None)
{
handler(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >(),RobotRaconteur::RobotRaconteurExceptionUtil::MessageEntryToException(m));
return;
}
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > rr_ret;
try
{
RR_SHARED_PTR<RobotRaconteur::MessageElement> me=m->FindElement("value");
rr_ret=me->CastData<RobotRaconteur::RRArray<double > >();
}
catch (RobotRaconteur::RobotRaconteurException& err)
{
handler(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >(),RobotRaconteur::RobotRaconteurExceptionUtil::DownCastException(err));
return;
}
catch (std::exception& err)
{
handler(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >(),RR_MAKE_SHARED<RobotRaconteur::RobotRaconteurRemoteException>(std::string(typeid(err).name()),err.what()));
return;
}
handler(rr_ret, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>());
}
void EGM_stub::async_set_joint_angle_setpoint(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > value,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout)
{
RR_SHARED_PTR<RobotRaconteur::MessageEntry> req=RR_MAKE_SHARED<RobotRaconteur::MessageEntry>(RobotRaconteur::MessageEntryType_PropertySetReq,"joint_angle_setpoint");
req->AddElement(RR_MAKE_SHARED<RobotRaconteur::MessageElement>("value",RobotRaconteur::rr_cast<RobotRaconteur::MessageElementData>(value)));
AsyncProcessTransaction(req,boost::bind(&EGM_stub::rrend_set_joint_angle_setpoint, RobotRaconteur::rr_cast<EGM_stub>(shared_from_this()),_1,_2,rr_handler ),rr_timeout);
}
void EGM_stub::rrend_set_joint_angle_setpoint(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler)
{
if (err)
{
handler(err);
return;
}
if (m->Error != RobotRaconteur::MessageErrorType_None)
{
handler(RobotRaconteur::RobotRaconteurExceptionUtil::MessageEntryToException(m));
return;
}
handler(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>());
}

void EGM_skel::Init(const std::string& path, RR_SHARED_PTR<RobotRaconteur::RRObject> object, RR_SHARED_PTR<RobotRaconteur::ServerContext> context)
{
uncastobj=object;
rr_InitPipeServersRun=false;
rr_InitWireServersRun=false;
ServiceSkel::Init(path,object,context);
}
RR_SHARED_PTR<edu::rpi::robotics::abb::egm::EGM > EGM_skel::get_obj()
{
return RobotRaconteur::rr_cast<edu::rpi::robotics::abb::egm::EGM >(uncastobj);
}
RR_SHARED_PTR<edu::rpi::robotics::abb::egm::async_EGM > EGM_skel::get_asyncobj()
{
return RR_DYNAMIC_POINTER_CAST<edu::rpi::robotics::abb::egm::async_EGM >(uncastobj);
}
void EGM_skel::ReleaseCastObject() 
{
}
std::string EGM_skel::GetObjectType()
{
return "edu.rpi.robotics.abb.egm.EGM";
}
RR_SHARED_PTR<RobotRaconteur::MessageEntry> EGM_skel::CallGetProperty(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m)
{
RR_SHARED_PTR<RobotRaconteur::MessageEntry> mr=RR_MAKE_SHARED<RobotRaconteur::MessageEntry>(RobotRaconteur::MessageEntryType_PropertyGetRes,m->MemberName);
RR_SHARED_PTR<edu::rpi::robotics::abb::egm::async_EGM > async_obj=get_asyncobj();
if (m->MemberName == "joint_angle")
{
if (async_obj)
{
RR_WEAK_PTR<edu::rpi::robotics::abb::egm::EGM_skel> wp=RobotRaconteur::rr_cast<edu::rpi::robotics::abb::egm::EGM_skel>(shared_from_this());
async_obj->async_get_joint_angle(boost::bind(&edu::rpi::robotics::abb::egm::EGM_skel::rr_get_joint_angle,wp,_1,_2,m,RobotRaconteur::ServerEndpoint::GetCurrentEndpoint()));
return RR_SHARED_PTR<RobotRaconteur::MessageEntry>();
}
else
{
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > value=get_obj()->get_joint_angle();
mr->AddElement(RR_MAKE_SHARED<RobotRaconteur::MessageElement>("value",RobotRaconteur::rr_cast<RobotRaconteur::MessageElementData>(value)));
return mr;
}
}
if (m->MemberName == "joint_angle_setpoint")
{
if (async_obj)
{
RR_WEAK_PTR<edu::rpi::robotics::abb::egm::EGM_skel> wp=RobotRaconteur::rr_cast<edu::rpi::robotics::abb::egm::EGM_skel>(shared_from_this());
async_obj->async_get_joint_angle_setpoint(boost::bind(&edu::rpi::robotics::abb::egm::EGM_skel::rr_get_joint_angle_setpoint,wp,_1,_2,m,RobotRaconteur::ServerEndpoint::GetCurrentEndpoint()));
return RR_SHARED_PTR<RobotRaconteur::MessageEntry>();
}
else
{
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > value=get_obj()->get_joint_angle_setpoint();
mr->AddElement(RR_MAKE_SHARED<RobotRaconteur::MessageElement>("value",RobotRaconteur::rr_cast<RobotRaconteur::MessageElementData>(value)));
return mr;
}
}
throw RobotRaconteur::MemberNotFoundException("Member not found");
}

RR_SHARED_PTR<RobotRaconteur::MessageEntry> EGM_skel::CallSetProperty(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m)
{
RR_SHARED_PTR<RobotRaconteur::MessageEntry> mr=RR_MAKE_SHARED<RobotRaconteur::MessageEntry>(RobotRaconteur::MessageEntryType_PropertySetRes,m->MemberName);
RR_SHARED_PTR<edu::rpi::robotics::abb::egm::async_EGM > async_obj=get_asyncobj();
if (m->MemberName == "joint_angle")
{
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > value=m->FindElement("value")->CastData<RobotRaconteur::RRArray<double > >();
if (async_obj)
{
RR_WEAK_PTR<edu::rpi::robotics::abb::egm::EGM_skel> wp=RobotRaconteur::rr_cast<edu::rpi::robotics::abb::egm::EGM_skel>(shared_from_this());
async_obj->async_set_joint_angle(value,boost::bind(&RobotRaconteur::ServiceSkel::EndAsyncCallSetProperty,wp,_1,m,RobotRaconteur::ServerEndpoint::GetCurrentEndpoint()));
return RR_SHARED_PTR<RobotRaconteur::MessageEntry>();
}
else
{
get_obj()->set_joint_angle(value);
return mr;
}
}
if (m->MemberName == "joint_angle_setpoint")
{
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > value=m->FindElement("value")->CastData<RobotRaconteur::RRArray<double > >();
if (async_obj)
{
RR_WEAK_PTR<edu::rpi::robotics::abb::egm::EGM_skel> wp=RobotRaconteur::rr_cast<edu::rpi::robotics::abb::egm::EGM_skel>(shared_from_this());
async_obj->async_set_joint_angle_setpoint(value,boost::bind(&RobotRaconteur::ServiceSkel::EndAsyncCallSetProperty,wp,_1,m,RobotRaconteur::ServerEndpoint::GetCurrentEndpoint()));
return RR_SHARED_PTR<RobotRaconteur::MessageEntry>();
}
else
{
get_obj()->set_joint_angle_setpoint(value);
return mr;
}
}
throw RobotRaconteur::MemberNotFoundException("Member not found");
}

void EGM_skel::rr_get_joint_angle(RR_WEAK_PTR<edu::rpi::robotics::abb::egm::EGM_skel> skel,RR_SHARED_PTR<RobotRaconteur::RRArray<double > > value, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep)
{
if(err)
{
EndAsyncCallGetProperty(skel,RR_SHARED_PTR<RobotRaconteur::MessageElement>(),err,m, ep);
return;
}
try
{
RR_SHARED_PTR<edu::rpi::robotics::abb::egm::EGM_skel> skel1=skel.lock();
if (!skel1) throw std::runtime_error("skel release");
RR_SHARED_PTR<RobotRaconteur::MessageElement> mr=RR_MAKE_SHARED<RobotRaconteur::MessageElement>("value",RobotRaconteur::rr_cast<RobotRaconteur::MessageElementData>(value));
EndAsyncCallGetProperty(skel, mr, err, m,ep);
}
catch (RobotRaconteur::RobotRaconteurException& err2)
{
EndAsyncCallGetProperty(skel,RR_SHARED_PTR<RobotRaconteur::MessageElement>(),RobotRaconteur::RobotRaconteurExceptionUtil::DownCastException(err2),m, ep);
}
catch (std::exception& err2)
{
EndAsyncCallGetProperty(skel,RR_SHARED_PTR<RobotRaconteur::MessageElement>(),RR_MAKE_SHARED<RobotRaconteur::DataTypeException>(err2.what()),m, ep);
}
}
void EGM_skel::rr_get_joint_angle_setpoint(RR_WEAK_PTR<edu::rpi::robotics::abb::egm::EGM_skel> skel,RR_SHARED_PTR<RobotRaconteur::RRArray<double > > value, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep)
{
if(err)
{
EndAsyncCallGetProperty(skel,RR_SHARED_PTR<RobotRaconteur::MessageElement>(),err,m, ep);
return;
}
try
{
RR_SHARED_PTR<edu::rpi::robotics::abb::egm::EGM_skel> skel1=skel.lock();
if (!skel1) throw std::runtime_error("skel release");
RR_SHARED_PTR<RobotRaconteur::MessageElement> mr=RR_MAKE_SHARED<RobotRaconteur::MessageElement>("value",RobotRaconteur::rr_cast<RobotRaconteur::MessageElementData>(value));
EndAsyncCallGetProperty(skel, mr, err, m,ep);
}
catch (RobotRaconteur::RobotRaconteurException& err2)
{
EndAsyncCallGetProperty(skel,RR_SHARED_PTR<RobotRaconteur::MessageElement>(),RobotRaconteur::RobotRaconteurExceptionUtil::DownCastException(err2),m, ep);
}
catch (std::exception& err2)
{
EndAsyncCallGetProperty(skel,RR_SHARED_PTR<RobotRaconteur::MessageElement>(),RR_MAKE_SHARED<RobotRaconteur::DataTypeException>(err2.what()),m, ep);
}
}
RR_SHARED_PTR<RobotRaconteur::MessageEntry> EGM_skel::CallFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> rr_m)
{
RR_SHARED_PTR<RobotRaconteur::MessageEntry> rr_mr=RR_MAKE_SHARED<RobotRaconteur::MessageEntry>(RobotRaconteur::MessageEntryType_FunctionCallRes,rr_m->MemberName);
RR_SHARED_PTR<edu::rpi::robotics::abb::egm::async_EGM > async_obj=get_asyncobj();
throw RobotRaconteur::MemberNotFoundException("Member not found");
}

void EGM_skel::RegisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1)
{
RR_SHARED_PTR<edu::rpi::robotics::abb::egm::EGM > obj=RobotRaconteur::rr_cast<edu::rpi::robotics::abb::egm::EGM >(rrobj1);
RobotRaconteur::ServiceSkel::RegisterEvents(rrobj1);
}

void EGM_skel::UnregisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1)
{
RobotRaconteur::ServiceSkel::UnregisterEvents(rrobj1);
}

RR_SHARED_PTR<RobotRaconteur::RRObject> EGM_skel::GetSubObj(const std::string &name, const std::string &ind)
{
throw RobotRaconteur::MemberNotFoundException("Member not found");
}

void EGM_skel::InitPipeServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1)
{
if (rr_InitPipeServersRun) return;
rr_InitPipeServersRun=true;
RR_SHARED_PTR<edu::rpi::robotics::abb::egm::EGM > obj=RobotRaconteur::rr_cast<edu::rpi::robotics::abb::egm::EGM >(rrobj1);
}

void EGM_skel::DispatchPipeMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e)
{
throw RobotRaconteur::MemberNotFoundException("Member not found");
}

RR_SHARED_PTR<RobotRaconteur::MessageEntry> EGM_skel::CallPipeFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e)
{
throw RobotRaconteur::MemberNotFoundException("Member not found");
}

void EGM_skel::InitWireServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1)
{
if (rr_InitWireServersRun) return;
rr_InitWireServersRun=true;
RR_SHARED_PTR<edu::rpi::robotics::abb::egm::EGM > obj=RobotRaconteur::rr_cast<edu::rpi::robotics::abb::egm::EGM >(rrobj1);
}

void EGM_skel::DispatchWireMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e)
{
throw RobotRaconteur::MemberNotFoundException("Member not found");
}

RR_SHARED_PTR<RobotRaconteur::MessageEntry> EGM_skel::CallWireFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e)
{
throw RobotRaconteur::MemberNotFoundException("Member not found");
}

void EGM_skel::InitCallbackServers(RR_SHARED_PTR<RobotRaconteur::RRObject> o)
{
RR_SHARED_PTR<edu::rpi::robotics::abb::egm::EGM > obj=RobotRaconteur::rr_cast<edu::rpi::robotics::abb::egm::EGM >(o);
}
RR_SHARED_PTR<void> EGM_skel::GetCallbackFunction(uint32_t endpoint, const std::string& membername)
{
throw RobotRaconteur::MemberNotFoundException("Member not found");
}

RR_SHARED_PTR<RobotRaconteur::MessageEntry> EGM_skel::CallMemoryFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::Endpoint> e)
{
throw RobotRaconteur::MemberNotFoundException("Member not found");
}
}
}
}
}
}

