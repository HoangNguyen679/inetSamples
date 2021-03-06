//
// Generated file, do not edit! Created by nedtool 5.0 from inet/linklayer/csmaca/CsmaCaMacFrame.msg.
//

#ifndef __INET_CSMACAMACFRAME_M_H
#define __INET_CSMACAMACFRAME_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0500
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/linklayer/common/MACAddress.h"
// }}


namespace inet {

/**
 * Class generated from <tt>inet/linklayer/csmaca/CsmaCaMacFrame.msg:27</tt> by nedtool.
 * <pre>
 * packet CsmaCaMacFrame
 * {
 *     MACAddress transmitterAddress;
 *     MACAddress receiverAddress;
 * }
 * </pre>
 */
class CsmaCaMacFrame : public ::omnetpp::cPacket
{
  protected:
    MACAddress transmitterAddress;
    MACAddress receiverAddress;

  private:
    void copy(const CsmaCaMacFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CsmaCaMacFrame&);

  public:
    CsmaCaMacFrame(const char *name=nullptr, int kind=0);
    CsmaCaMacFrame(const CsmaCaMacFrame& other);
    virtual ~CsmaCaMacFrame();
    CsmaCaMacFrame& operator=(const CsmaCaMacFrame& other);
    virtual CsmaCaMacFrame *dup() const {return new CsmaCaMacFrame(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getTransmitterAddress();
    virtual const MACAddress& getTransmitterAddress() const {return const_cast<CsmaCaMacFrame*>(this)->getTransmitterAddress();}
    virtual void setTransmitterAddress(const MACAddress& transmitterAddress);
    virtual MACAddress& getReceiverAddress();
    virtual const MACAddress& getReceiverAddress() const {return const_cast<CsmaCaMacFrame*>(this)->getReceiverAddress();}
    virtual void setReceiverAddress(const MACAddress& receiverAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const CsmaCaMacFrame& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, CsmaCaMacFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/csmaca/CsmaCaMacFrame.msg:33</tt> by nedtool.
 * <pre>
 * packet CsmaCaMacAckFrame extends CsmaCaMacFrame
 * {
 * }
 * </pre>
 */
class CsmaCaMacAckFrame : public ::inet::CsmaCaMacFrame
{
  protected:

  private:
    void copy(const CsmaCaMacAckFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CsmaCaMacAckFrame&);

  public:
    CsmaCaMacAckFrame(const char *name=nullptr, int kind=0);
    CsmaCaMacAckFrame(const CsmaCaMacAckFrame& other);
    virtual ~CsmaCaMacAckFrame();
    CsmaCaMacAckFrame& operator=(const CsmaCaMacAckFrame& other);
    virtual CsmaCaMacAckFrame *dup() const {return new CsmaCaMacAckFrame(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const CsmaCaMacAckFrame& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, CsmaCaMacAckFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/csmaca/CsmaCaMacFrame.msg:37</tt> by nedtool.
 * <pre>
 * packet CsmaCaMacDataFrame extends CsmaCaMacFrame
 * {
 *     int priority;  // 802.1d UP (User Priority) 
 * }
 * </pre>
 */
class CsmaCaMacDataFrame : public ::inet::CsmaCaMacFrame
{
  protected:
    int priority;

  private:
    void copy(const CsmaCaMacDataFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CsmaCaMacDataFrame&);

  public:
    CsmaCaMacDataFrame(const char *name=nullptr, int kind=0);
    CsmaCaMacDataFrame(const CsmaCaMacDataFrame& other);
    virtual ~CsmaCaMacDataFrame();
    CsmaCaMacDataFrame& operator=(const CsmaCaMacDataFrame& other);
    virtual CsmaCaMacDataFrame *dup() const {return new CsmaCaMacDataFrame(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    // field getter/setter methods
    virtual int getPriority() const;
    virtual void setPriority(int priority);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const CsmaCaMacDataFrame& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, CsmaCaMacDataFrame& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_CSMACAMACFRAME_M_H

