//This file is automatically generated. DO NOT EDIT!

#include "example__ABB_IRB6640.h"
#pragma once

namespace example
{
namespace ABB_IRB6640
{

class example__ABB_IRB6640Factory : public virtual RobotRaconteur::ServiceFactory
{
public:
virtual std::string GetServiceName();
virtual std::string DefString();
virtual RR_SHARED_PTR<RobotRaconteur::StructureStub> FindStructureStub(std::string s);
virtual RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> PackStructure(RR_SHARED_PTR<RobotRaconteur::RRStructure> structin);
virtual RR_SHARED_PTR<RobotRaconteur::RRObject> UnpackStructure(RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> mstructin);
virtual RR_SHARED_PTR<RobotRaconteur::ServiceStub> CreateStub(std::string objecttype, std::string path, RR_SHARED_PTR<RobotRaconteur::ClientContext> context);
virtual RR_SHARED_PTR<RobotRaconteur::ServiceSkel> CreateSkel(std::string objecttype, std::string path, RR_SHARED_PTR<RobotRaconteur::RRObject> obj, RR_SHARED_PTR<RobotRaconteur::ServerContext> context);
virtual void DownCastAndThrowException(RobotRaconteur::RobotRaconteurException& exp);
virtual RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> DownCastException(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> exp);
};

class async_ABB_IRB6640Solver
{
public:
virtual void async_get_value(boost::function<void (int32_t,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;
virtual void async_set_value(int32_t value,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
virtual int32_t async_get_value(boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    return RobotRaconteur::detail::async_wrap_for_spawn<int32_t >(boost::bind((void (async_ABB_IRB6640Solver::*)(boost::function<void (int32_t, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) >, int32_t))&async_ABB_IRB6640Solver::async_get_value, this, _1, rr_timeout), rr_yield);
}
virtual void async_set_value(int32_t value, boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    RobotRaconteur::detail::async_wrap_for_spawn_void(boost::bind((void (async_ABB_IRB6640Solver::*)(int32_t, boost::function<void(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>, int32_t))&async_ABB_IRB6640Solver::async_set_value, this, boost::ref(value), _1, rr_timeout), rr_yield);
}
#endif

virtual void async_add(double a, double b,boost::function<void (double, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
double async_add(double a, double b,boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    return RobotRaconteur::detail::async_wrap_for_spawn<double>(boost::bind((void (async_ABB_IRB6640Solver::*)(double,double,boost::function<void (double,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>,int32_t))&async_ABB_IRB6640Solver::async_add, this, boost::ref(a),boost::ref(b),_1,rr_timeout), rr_yield);
}
#endif

virtual void async_dot(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > a, RR_SHARED_PTR<RobotRaconteur::RRArray<double > > b,boost::function<void (double, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
double async_dot(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > a, RR_SHARED_PTR<RobotRaconteur::RRArray<double > > b,boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    return RobotRaconteur::detail::async_wrap_for_spawn<double>(boost::bind((void (async_ABB_IRB6640Solver::*)(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >,RR_SHARED_PTR<RobotRaconteur::RRArray<double > >,boost::function<void (double,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>,int32_t))&async_ABB_IRB6640Solver::async_dot, this, boost::ref(a),boost::ref(b),_1,rr_timeout), rr_yield);
}
#endif

virtual void async_sort_sequence(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > seq, std::string dir,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RRArray<double > >, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > async_sort_sequence(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > seq, std::string dir,boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    return RobotRaconteur::detail::async_wrap_for_spawn<RR_SHARED_PTR<RobotRaconteur::RRArray<double > >>(boost::bind((void (async_ABB_IRB6640Solver::*)(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >,std::string,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RRArray<double > >,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>,int32_t))&async_ABB_IRB6640Solver::async_sort_sequence, this, boost::ref(seq),boost::ref(dir),_1,rr_timeout), rr_yield);
}
#endif

virtual void async_set_joints(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > seq, std::string dir, boost::function<void(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout = RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > async_set_joints(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > seq, std::string dir, boost::asio::yield_context rr_yield, int32_t rr_timeout = RR_TIMEOUT_INFINITE)
{
	return RobotRaconteur::detail::async_wrap_for_spawn<RR_SHARED_PTR<RobotRaconteur::RRArray<double > >>(boost::bind((void (async_ABB_IRB6640Solver::*)(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >, std::string, boost::function<void(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>, int32_t))&async_ABB_IRB6640Solver::async_set_joints, this, boost::ref(seq), boost::ref(dir), _1, rr_timeout), rr_yield);
}
#endif

};
class ABB_IRB6640Solver_stub : public virtual ABB_IRB6640Solver, public virtual async_ABB_IRB6640Solver, public virtual RobotRaconteur::ServiceStub
{
public:
ABB_IRB6640Solver_stub(const std::string& path, RR_SHARED_PTR<RobotRaconteur::ClientContext> c);

virtual void RRInitStub();
virtual int32_t get_value();
virtual void set_value(int32_t value);

virtual double add(double a, double b);

virtual double dot(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > a, RR_SHARED_PTR<RobotRaconteur::RRArray<double > > b);

virtual RR_SHARED_PTR<RobotRaconteur::RRArray<double > > sort_sequence(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > seq, std::string dir);

virtual RR_SHARED_PTR<RobotRaconteur::RRArray<double > > set_joints(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > seq, std::string dj);

virtual void DispatchEvent(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void DispatchPipeMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void DispatchWireMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallbackCall(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void RRClose();
private:
virtual void async_get_value(boost::function<void (int32_t,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);
virtual void async_set_value(int32_t value,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_get_value(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (int32_t ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
virtual void rrend_set_value(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_add(double a, double b,boost::function<void (double, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_add(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (double ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_dot(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > a, RR_SHARED_PTR<RobotRaconteur::RRArray<double > > b,boost::function<void (double, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_dot(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (double ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_sort_sequence(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > seq, std::string dir,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RRArray<double > >, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_sort_sequence(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RRArray<double > > ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
	virtual void async_set_joints(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > seq, std::string dir, boost::function<void(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout = RR_TIMEOUT_INFINITE);

protected:
	virtual void rrend_set_joints(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void(RR_SHARED_PTR<RobotRaconteur::RRArray<double > >, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);

public:
virtual std::string RRType();
};


class ABB_IRB6640Solver_skel : public virtual RobotRaconteur::ServiceSkel
{
public:
virtual void Init(const std::string& path, RR_SHARED_PTR<RobotRaconteur::RRObject> object, RR_SHARED_PTR<RobotRaconteur::ServerContext> context);
virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallGetProperty(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallSetProperty(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual void ReleaseCastObject();

virtual void RegisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void UnregisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual RR_SHARED_PTR<RobotRaconteur::RRObject> GetSubObj(const std::string &name, const std::string &ind);

virtual void InitPipeServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void InitWireServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void DispatchPipeMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual void DispatchWireMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual void InitCallbackServers(RR_SHARED_PTR<RobotRaconteur::RRObject> o);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallPipeFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallWireFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual RR_SHARED_PTR<void> GetCallbackFunction(uint32_t endpoint, const std::string& membername);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallMemoryFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::Endpoint> e);

virtual std::string GetObjectType();
virtual RR_SHARED_PTR<example::ABB_IRB6640::ABB_IRB6640Solver > get_obj();

virtual RR_SHARED_PTR<example::ABB_IRB6640::async_ABB_IRB6640Solver > get_asyncobj();

protected:
static void rr_get_value(RR_WEAK_PTR<example::ABB_IRB6640::ABB_IRB6640Solver_skel> skel, int32_t value, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_add(RR_WEAK_PTR<example::ABB_IRB6640::ABB_IRB6640Solver_skel> skel, double ret, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_dot(RR_WEAK_PTR<example::ABB_IRB6640::ABB_IRB6640Solver_skel> skel, double ret, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_sort_sequence(RR_WEAK_PTR<example::ABB_IRB6640::ABB_IRB6640Solver_skel> skel, RR_SHARED_PTR<RobotRaconteur::RRArray<double > > ret, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_set_joints(RR_WEAK_PTR<example::ABB_IRB6640::ABB_IRB6640Solver_skel> skel, RR_SHARED_PTR<RobotRaconteur::RRArray<double > > ret, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);

public:
protected:bool rr_InitPipeServersRun;
bool rr_InitWireServersRun;
public: 
private:

};

}
}
