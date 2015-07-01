/**
 * \file EndPointAlgo.h
 *
 * \ingroup EndPoint2d
 * 
 * \brief Class def header for a class EndPointAlgo
 *
 * @author jasaadi
 */

/** \addtogroup EndPoint2d

    @{*/

#ifndef LARLITE_ENDPOINTALGO_H
#define LARLITE_ENDPOINTALGO_H

#include "Analysis/ana_base.h"

namespace larlite {
  /**
     \class EndPointAlgo
     User custom analysis class made by SHELL_USER_NAME
   */
  class EndPointAlgo : public ana_base{
  
  public:

    /// Default constructor
    EndPointAlgo(){ _name="EndPointAlgo"; _fout=0;}

    /// Default destructor
    virtual ~EndPointAlgo(){}

    /** IMPLEMENT in EndPointAlgo.cc!
        Initialization method to be called before the analysis event loop.
    */ 
    virtual bool initialize();

    /** IMPLEMENT in EndPointAlgo.cc! 
        Analyze a data event-by-event  
    */
    virtual bool analyze(storage_manager* storage);

    /** IMPLEMENT in EndPointAlgo.cc! 
        Finalize method to be called after all events processed.
    */
    virtual bool finalize();

  protected:
    
  };
}
#endif

//**************************************************************************
// 
// For Analysis framework documentation, read Manual.pdf here:
//
// http://microboone-docdb.fnal.gov:8080/cgi-bin/ShowDocument?docid=3183
//
//**************************************************************************

/** @} */ // end of doxygen group 
