// Copyright 2019-2020 CERN and copyright holders of ALICE O2.
// See https://alice-o2.web.cern.ch/copyright for details of the copyright holders.
// All rights not expressly granted are reserved.
//
// This software is distributed under the terms of the GNU General Public
// License v3 (GPL Version 3), copied verbatim in the file "COPYING".
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.

///
/// \file   TrackClusterCheck.h
/// \author Laura Serksnyte
///

#ifndef QC_MODULE_TPC_TRACKCLUSTERCHECK_H
#define QC_MODULE_TPC_TRACKCLUSTERCHECK_H

#include "QualityControl/CheckInterface.h"

namespace o2::quality_control_modules::tpc
{

/// \brief  Check whether the cluster number for a track is smaller than 40 or 20 in Track task.
///
/// \author Laura Serksnyte
class TrackClusterCheck : public o2::quality_control::checker::CheckInterface
{

 public:
  /// Default constructor
  TrackClusterCheck() = default;
  /// Destructor
  ~TrackClusterCheck() override = default;

  // Override interface
  void configure() override;
  Quality check(std::map<std::string, std::shared_ptr<MonitorObject>>* moMap) override;
  void beautify(std::shared_ptr<MonitorObject> mo, Quality checkResult = Quality::Null) override;
  std::string getAcceptedType() override;

 private:
  ClassDefOverride(TrackClusterCheck, 2);
};

} // namespace o2::quality_control_modules::tpc

#endif // QC_MODULE_TPC_TRACKCLUSTERCHECK_H
