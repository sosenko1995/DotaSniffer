/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: steammessages_unified_base.steamworkssdk.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "steammessages_unified_base.steamworkssdk.pb-c.h"
static const ProtobufCEnumValue eproto_execution_site__enum_values_by_number[2] =
{
  { "k_EProtoExecutionSiteUnknown", "EPROTO_EXECUTION_SITE__k_EProtoExecutionSiteUnknown", 0 },
  { "k_EProtoExecutionSiteSteamClient", "EPROTO_EXECUTION_SITE__k_EProtoExecutionSiteSteamClient", 3 },
};
static const ProtobufCIntRange eproto_execution_site__value_ranges[] = {
{0, 0},{3, 1},{0, 2}
};
static const ProtobufCEnumValueIndex eproto_execution_site__enum_values_by_name[2] =
{
  { "k_EProtoExecutionSiteSteamClient", 1 },
  { "k_EProtoExecutionSiteUnknown", 0 },
};
const ProtobufCEnumDescriptor eproto_execution_site__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "EProtoExecutionSite",
  "EProtoExecutionSite",
  "EProtoExecutionSite",
  "",
  2,
  eproto_execution_site__enum_values_by_number,
  2,
  eproto_execution_site__enum_values_by_name,
  2,
  eproto_execution_site__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};