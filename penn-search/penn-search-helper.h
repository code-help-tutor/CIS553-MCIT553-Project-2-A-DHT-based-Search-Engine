WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2010 University of Pennsylvania
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */


#ifndef PENN_SEARCH_HELPER_H
#define PENN_SEARCH_HELPER_H

#include <stdint.h>
#include "ns3/application-container.h"
#include "ns3/node-container.h"
#include "ns3/object-factory.h"
#include "ns3/penn-search.h"

using namespace ns3;

class PennSearchHelper 
{
  public:
    PennSearchHelper ();

    void SetAttribute (std::string name, const AttributeValue &value);

    ApplicationContainer Install (NodeContainer c);

  private:
    ObjectFactory m_factory;
};

#endif
