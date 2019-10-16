/******************************************************************************
** Copyright (C) 2006-2015 ascolab GmbH. All Rights Reserved.
** Web: http://www.ascolab.com
**
** SPDX-License-Identifier: GPL-2.0-or-later
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** Project: OpcUa Wireshark Plugin
**
** Description: OpcUa Enum Type Parser
**
** This file was autogenerated on 13.10.2015.
** DON'T MODIFY THIS FILE!
**
******************************************************************************/

#include "config.h"

#include <epan/packet.h>

#include "opcua_enumparser.h"

gint ett_opcua_array_NodeIdType = -1;
gint ett_opcua_array_NamingRuleType = -1;
gint ett_opcua_array_OpenFileMode = -1;
gint ett_opcua_array_TrustListMasks = -1;
gint ett_opcua_array_IdType = -1;
gint ett_opcua_array_NodeClass = -1;
gint ett_opcua_array_ApplicationType = -1;
gint ett_opcua_array_MessageSecurityMode = -1;
gint ett_opcua_array_UserTokenType = -1;
gint ett_opcua_array_SecurityTokenRequestType = -1;
gint ett_opcua_array_NodeAttributesMask = -1;
gint ett_opcua_array_AttributeWriteMask = -1;
gint ett_opcua_array_BrowseDirection = -1;
gint ett_opcua_array_BrowseResultMask = -1;
gint ett_opcua_array_ComplianceLevel = -1;
gint ett_opcua_array_FilterOperator = -1;
gint ett_opcua_array_TimestampsToReturn = -1;
gint ett_opcua_array_HistoryUpdateType = -1;
gint ett_opcua_array_PerformUpdateType = -1;
gint ett_opcua_array_MonitoringMode = -1;
gint ett_opcua_array_DataChangeTrigger = -1;
gint ett_opcua_array_DeadbandType = -1;
gint ett_opcua_array_EnumeratedTestType = -1;
gint ett_opcua_array_RedundancySupport = -1;
gint ett_opcua_array_ServerState = -1;
gint ett_opcua_array_ModelChangeStructureVerbMask = -1;
gint ett_opcua_array_AxisScaleEnumeration = -1;
gint ett_opcua_array_ExceptionDeviationFormat = -1;

/** NodeIdType enum table */
static const value_string g_NodeIdTypeTable[] = {
  { 0, "TwoByte" },
  { 1, "FourByte" },
  { 2, "Numeric" },
  { 3, "String" },
  { 4, "Guid" },
  { 5, "ByteString" },
  { 0, NULL }
};
static int hf_opcua_NodeIdType = -1;

void parseNodeIdType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_NodeIdType, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** NamingRuleType enum table */
static const value_string g_NamingRuleTypeTable[] = {
  { 1, "Mandatory" },
  { 2, "Optional" },
  { 3, "Constraint" },
  { 0, NULL }
};
static int hf_opcua_NamingRuleType = -1;

void parseNamingRuleType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_NamingRuleType, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** OpenFileMode enum table */
static const value_string g_OpenFileModeTable[] = {
  { 1, "Read" },
  { 2, "Write" },
  { 4, "EraseExisting" },
  { 8, "Append" },
  { 0, NULL }
};
static int hf_opcua_OpenFileMode = -1;

void parseOpenFileMode(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_OpenFileMode, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** TrustListMasks enum table */
static const value_string g_TrustListMasksTable[] = {
  { 0, "None" },
  { 1, "TrustedCertificates" },
  { 2, "TrustedCrls" },
  { 4, "IssuerCertificates" },
  { 8, "IssuerCrls" },
  { 15, "All" },
  { 0, NULL }
};
static int hf_opcua_TrustListMasks = -1;

void parseTrustListMasks(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_TrustListMasks, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** IdType enum table */
static const value_string g_IdTypeTable[] = {
  { 0, "Numeric" },
  { 1, "String" },
  { 2, "Guid" },
  { 3, "Opaque" },
  { 0, NULL }
};
static int hf_opcua_IdType = -1;

void parseIdType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_IdType, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** NodeClass enum table */
static const value_string g_NodeClassTable[] = {
  { 0, "Unspecified" },
  { 1, "Object" },
  { 2, "Variable" },
  { 4, "Method" },
  { 8, "ObjectType" },
  { 16, "VariableType" },
  { 32, "ReferenceType" },
  { 64, "DataType" },
  { 128, "View" },
  { 0, NULL }
};
static int hf_opcua_NodeClass = -1;

void parseNodeClass(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_NodeClass, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** ApplicationType enum table */
static const value_string g_ApplicationTypeTable[] = {
  { 0, "Server" },
  { 1, "Client" },
  { 2, "ClientAndServer" },
  { 3, "DiscoveryServer" },
  { 0, NULL }
};
static int hf_opcua_ApplicationType = -1;

void parseApplicationType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_ApplicationType, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** MessageSecurityMode enum table */
static const value_string g_MessageSecurityModeTable[] = {
  { 0, "Invalid" },
  { 1, "None" },
  { 2, "Sign" },
  { 3, "SignAndEncrypt" },
  { 0, NULL }
};
static int hf_opcua_MessageSecurityMode = -1;

void parseMessageSecurityMode(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_MessageSecurityMode, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** UserTokenType enum table */
static const value_string g_UserTokenTypeTable[] = {
  { 0, "Anonymous" },
  { 1, "UserName" },
  { 2, "Certificate" },
  { 3, "IssuedToken" },
  { 4, "Kerberos" },
  { 0, NULL }
};
static int hf_opcua_UserTokenType = -1;

void parseUserTokenType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_UserTokenType, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** SecurityTokenRequestType enum table */
static const value_string g_SecurityTokenRequestTypeTable[] = {
  { 0, "Issue" },
  { 1, "Renew" },
  { 0, NULL }
};
static int hf_opcua_SecurityTokenRequestType = -1;

void parseSecurityTokenRequestType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_SecurityTokenRequestType, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** NodeAttributesMask enum table */
static const value_string g_NodeAttributesMaskTable[] = {
  { 0, "None" },
  { 1, "AccessLevel" },
  { 2, "ArrayDimensions" },
  { 4, "BrowseName" },
  { 8, "ContainsNoLoops" },
  { 16, "DataType" },
  { 32, "Description" },
  { 64, "DisplayName" },
  { 128, "EventNotifier" },
  { 256, "Executable" },
  { 512, "Historizing" },
  { 1024, "InverseName" },
  { 2048, "IsAbstract" },
  { 4096, "MinimumSamplingInterval" },
  { 8192, "NodeClass" },
  { 16384, "NodeId" },
  { 32768, "Symmetric" },
  { 65536, "UserAccessLevel" },
  { 131072, "UserExecutable" },
  { 262144, "UserWriteMask" },
  { 524288, "ValueRank" },
  { 1048576, "WriteMask" },
  { 2097152, "Value" },
  { 4194303, "All" },
  { 1335396, "BaseNode" },
  { 1335524, "Object" },
  { 1337444, "ObjectTypeOrDataType" },
  { 4026999, "Variable" },
  { 3958902, "VariableType" },
  { 1466724, "Method" },
  { 1371236, "ReferenceType" },
  { 1335532, "View" },
  { 0, NULL }
};
static int hf_opcua_NodeAttributesMask = -1;

void parseNodeAttributesMask(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_NodeAttributesMask, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** AttributeWriteMask enum table */
static const value_string g_AttributeWriteMaskTable[] = {
  { 0, "None" },
  { 1, "AccessLevel" },
  { 2, "ArrayDimensions" },
  { 4, "BrowseName" },
  { 8, "ContainsNoLoops" },
  { 16, "DataType" },
  { 32, "Description" },
  { 64, "DisplayName" },
  { 128, "EventNotifier" },
  { 256, "Executable" },
  { 512, "Historizing" },
  { 1024, "InverseName" },
  { 2048, "IsAbstract" },
  { 4096, "MinimumSamplingInterval" },
  { 8192, "NodeClass" },
  { 16384, "NodeId" },
  { 32768, "Symmetric" },
  { 65536, "UserAccessLevel" },
  { 131072, "UserExecutable" },
  { 262144, "UserWriteMask" },
  { 524288, "ValueRank" },
  { 1048576, "WriteMask" },
  { 2097152, "ValueForVariableType" },
  { 4194304, "DataTypeDefinition" },
  { 8388608, "RolePermissions" },
  { 16777216, "AccessRestrictions" },
  { 33554432, "AccessLevelEx" },
  { 0, NULL }
};
static int hf_opcua_AttributeWriteMask = -1;

void parseAttributeWriteMask(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_AttributeWriteMask, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** BrowseDirection enum table */
static const value_string g_BrowseDirectionTable[] = {
  { 0, "Forward" },
  { 1, "Inverse" },
  { 2, "Both" },
  { 0, NULL }
};
static int hf_opcua_BrowseDirection = -1;

void parseBrowseDirection(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_BrowseDirection, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}

/** ComplianceLevel enum table */
static const value_string g_ComplianceLevelTable[] = {
  { 0, "Untested" },
  { 1, "Partial" },
  { 2, "SelfTested" },
  { 3, "Certified" },
  { 0, NULL }
};
static int hf_opcua_ComplianceLevel = -1;

void parseComplianceLevel(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_ComplianceLevel, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** FilterOperator enum table */
static const value_string g_FilterOperatorTable[] = {
  { 0, "Equals" },
  { 1, "IsNull" },
  { 2, "GreaterThan" },
  { 3, "LessThan" },
  { 4, "GreaterThanOrEqual" },
  { 5, "LessThanOrEqual" },
  { 6, "Like" },
  { 7, "Not" },
  { 8, "Between" },
  { 9, "InList" },
  { 10, "And" },
  { 11, "Or" },
  { 12, "Cast" },
  { 13, "InView" },
  { 14, "OfType" },
  { 15, "RelatedTo" },
  { 16, "BitwiseAnd" },
  { 17, "BitwiseOr" },
  { 0, NULL }
};
static int hf_opcua_FilterOperator = -1;

void parseFilterOperator(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_FilterOperator, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** TimestampsToReturn enum table */
static const value_string g_TimestampsToReturnTable[] = {
  { 0, "Source" },
  { 1, "Server" },
  { 2, "Both" },
  { 3, "Neither" },
  { 4, "Invalid" },
  { 0, NULL }
};
static int hf_opcua_TimestampsToReturn = -1;

void parseTimestampsToReturn(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_TimestampsToReturn, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** HistoryUpdateType enum table */
static const value_string g_HistoryUpdateTypeTable[] = {
  { 1, "Insert" },
  { 2, "Replace" },
  { 3, "Update" },
  { 4, "Delete" },
  { 0, NULL }
};
static int hf_opcua_HistoryUpdateType = -1;

void parseHistoryUpdateType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_HistoryUpdateType, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** PerformUpdateType enum table */
static const value_string g_PerformUpdateTypeTable[] = {
  { 1, "Insert" },
  { 2, "Replace" },
  { 3, "Update" },
  { 4, "Remove" },
  { 0, NULL }
};
static int hf_opcua_PerformUpdateType = -1;

void parsePerformUpdateType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_PerformUpdateType, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** MonitoringMode enum table */
static const value_string g_MonitoringModeTable[] = {
  { 0, "Disabled" },
  { 1, "Sampling" },
  { 2, "Reporting" },
  { 0, NULL }
};
static int hf_opcua_MonitoringMode = -1;

void parseMonitoringMode(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_MonitoringMode, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** DataChangeTrigger enum table */
static const value_string g_DataChangeTriggerTable[] = {
  { 0, "Status" },
  { 1, "StatusValue" },
  { 2, "StatusValueTimestamp" },
  { 0, NULL }
};
static int hf_opcua_DataChangeTrigger = -1;

void parseDataChangeTrigger(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_DataChangeTrigger, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** DeadbandType enum table */
static const value_string g_DeadbandTypeTable[] = {
  { 0, "None" },
  { 1, "Absolute" },
  { 2, "Percent" },
  { 0, NULL }
};
static int hf_opcua_DeadbandType = -1;

void parseDeadbandType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_DeadbandType, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** EnumeratedTestType enum table */
static const value_string g_EnumeratedTestTypeTable[] = {
  { 1, "Red" },
  { 4, "Yellow" },
  { 5, "Green" },
  { 0, NULL }
};
static int hf_opcua_EnumeratedTestType = -1;

void parseEnumeratedTestType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_EnumeratedTestType, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** RedundancySupport enum table */
static const value_string g_RedundancySupportTable[] = {
  { 0, "None" },
  { 1, "Cold" },
  { 2, "Warm" },
  { 3, "Hot" },
  { 4, "Transparent" },
  { 5, "HotAndMirrored" },
  { 0, NULL }
};
static int hf_opcua_RedundancySupport = -1;

void parseRedundancySupport(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_RedundancySupport, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** ServerState enum table */
static const value_string g_ServerStateTable[] = {
  { 0, "Running" },
  { 1, "Failed" },
  { 2, "NoConfiguration" },
  { 3, "Suspended" },
  { 4, "Shutdown" },
  { 5, "Test" },
  { 6, "CommunicationFault" },
  { 7, "Unknown" },
  { 0, NULL }
};
static int hf_opcua_ServerState = -1;

void parseServerState(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_ServerState, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** ModelChangeStructureVerbMask enum table */
static const value_string g_ModelChangeStructureVerbMaskTable[] = {
  { 1, "NodeAdded" },
  { 2, "NodeDeleted" },
  { 4, "ReferenceAdded" },
  { 8, "ReferenceDeleted" },
  { 16, "DataTypeChanged" },
  { 0, NULL }
};
static int hf_opcua_ModelChangeStructureVerbMask = -1;

void parseModelChangeStructureVerbMask(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_ModelChangeStructureVerbMask, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** AxisScaleEnumeration enum table */
static const value_string g_AxisScaleEnumerationTable[] = {
  { 0, "Linear" },
  { 1, "Log" },
  { 2, "Ln" },
  { 0, NULL }
};
static int hf_opcua_AxisScaleEnumeration = -1;

void parseAxisScaleEnumeration(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_AxisScaleEnumeration, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** ExceptionDeviationFormat enum table */
static const value_string g_ExceptionDeviationFormatTable[] = {
  { 0, "AbsoluteValue" },
  { 1, "PercentOfValue" },
  { 2, "PercentOfRange" },
  { 3, "PercentOfEURange" },
  { 4, "Unknown" },
  { 0, NULL }
};
static int hf_opcua_ExceptionDeviationFormat = -1;

void parseExceptionDeviationFormat(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_ExceptionDeviationFormat, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset+=4;
}
/** AttributeId enum table */
static const value_string g_AttributeIdTable[] = {
    {1, "NodeId"},
    {2, "NodeClass"},
    {3, "BrowseName"},
    {4, "DisplayName"},
    {5, "Description"},
    {6, "WriteMask"},
    {7, "UserWriteMask"},
    {8, "IsAbstract"},
    {9, "Symmetric"},
    {10, "InverseName"},
    {11, "ContainsNoLoops"},
    {12, "EventNotifier"},
    {13, "Value"},
    {14, "DataType"},
    {15, "ValueRank"},
    {16, "ArrayDimensions"},
    {17, "AccessLevel"},
    {18, "UserAccessLevel"},
    {19, "MinimumSamplingInterval"},
    {20, "Historizing"},
    {21, "Executable"},
    {22, "UserExecutable"},
    {23, "DataTypeDefinition"},
    {24, "RolePermissions"},
    {25, "UserRolePermissions"},
    {26, "AccessRestrictions"},
    {27, "AccessLevelEx"},
    {0, NULL}
};
static int hf_opcua_AttributeId = -1;

void parseAttributeId(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo _U_, gint *pOffset)
{
    proto_tree_add_item(tree, hf_opcua_AttributeId, tvb, *pOffset, 4, ENC_LITTLE_ENDIAN); *pOffset += 4;
}

/** Setup enum subtree array */
static gint *ett[] =
{
    &ett_opcua_array_NodeIdType,
    &ett_opcua_array_NamingRuleType,
    &ett_opcua_array_OpenFileMode,
    &ett_opcua_array_TrustListMasks,
    &ett_opcua_array_IdType,
    &ett_opcua_array_NodeClass,
    &ett_opcua_array_ApplicationType,
    &ett_opcua_array_MessageSecurityMode,
    &ett_opcua_array_UserTokenType,
    &ett_opcua_array_SecurityTokenRequestType,
    &ett_opcua_array_NodeAttributesMask,
    &ett_opcua_array_AttributeWriteMask,
    &ett_opcua_array_BrowseDirection,
    &ett_opcua_array_BrowseResultMask,
    &ett_opcua_array_ComplianceLevel,
    &ett_opcua_array_FilterOperator,
    &ett_opcua_array_TimestampsToReturn,
    &ett_opcua_array_HistoryUpdateType,
    &ett_opcua_array_PerformUpdateType,
    &ett_opcua_array_MonitoringMode,
    &ett_opcua_array_DataChangeTrigger,
    &ett_opcua_array_DeadbandType,
    &ett_opcua_array_EnumeratedTestType,
    &ett_opcua_array_RedundancySupport,
    &ett_opcua_array_ServerState,
    &ett_opcua_array_ModelChangeStructureVerbMask,
    &ett_opcua_array_AxisScaleEnumeration,
    &ett_opcua_array_ExceptionDeviationFormat,
};

/** Register enum types. */
void registerEnumTypes(int proto)
{
    /** header field definitions */
    static hf_register_info hf[] =
    {
        { &hf_opcua_NodeIdType,
        {  "NodeIdType", "opcua.NodeIdType", FT_UINT32, BASE_HEX,  VALS(g_NodeIdTypeTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_NamingRuleType,
        {  "NamingRuleType", "opcua.NamingRuleType", FT_UINT32, BASE_HEX,  VALS(g_NamingRuleTypeTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_OpenFileMode,
        {  "OpenFileMode", "opcua.OpenFileMode", FT_UINT32, BASE_HEX,  VALS(g_OpenFileModeTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_TrustListMasks,
        {  "TrustListMasks", "opcua.TrustListMasks", FT_UINT32, BASE_HEX,  VALS(g_TrustListMasksTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_IdType,
        {  "IdType", "opcua.IdType", FT_UINT32, BASE_HEX,  VALS(g_IdTypeTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_NodeClass,
        {  "NodeClass", "opcua.NodeClass", FT_UINT32, BASE_HEX,  VALS(g_NodeClassTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_ApplicationType,
        {  "ApplicationType", "opcua.ApplicationType", FT_UINT32, BASE_HEX,  VALS(g_ApplicationTypeTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_MessageSecurityMode,
        {  "MessageSecurityMode", "opcua.MessageSecurityMode", FT_UINT32, BASE_HEX,  VALS(g_MessageSecurityModeTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_UserTokenType,
        {  "UserTokenType", "opcua.UserTokenType", FT_UINT32, BASE_HEX,  VALS(g_UserTokenTypeTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_SecurityTokenRequestType,
        {  "SecurityTokenRequestType", "opcua.SecurityTokenRequestType", FT_UINT32, BASE_HEX,  VALS(g_SecurityTokenRequestTypeTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_NodeAttributesMask,
        {  "NodeAttributesMask", "opcua.NodeAttributesMask", FT_UINT32, BASE_HEX,  VALS(g_NodeAttributesMaskTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_AttributeWriteMask,
        {  "AttributeWriteMask", "opcua.AttributeWriteMask", FT_UINT32, BASE_HEX,  VALS(g_AttributeWriteMaskTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_BrowseDirection,
        {  "BrowseDirection", "opcua.BrowseDirection", FT_UINT32, BASE_HEX,  VALS(g_BrowseDirectionTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_ComplianceLevel,
        {  "ComplianceLevel", "opcua.ComplianceLevel", FT_UINT32, BASE_HEX,  VALS(g_ComplianceLevelTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_FilterOperator,
        {  "FilterOperator", "opcua.FilterOperator", FT_UINT32, BASE_HEX,  VALS(g_FilterOperatorTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_TimestampsToReturn,
        {  "TimestampsToReturn", "opcua.TimestampsToReturn", FT_UINT32, BASE_HEX,  VALS(g_TimestampsToReturnTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_HistoryUpdateType,
        {  "HistoryUpdateType", "opcua.HistoryUpdateType", FT_UINT32, BASE_HEX,  VALS(g_HistoryUpdateTypeTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_PerformUpdateType,
        {  "PerformUpdateType", "opcua.PerformUpdateType", FT_UINT32, BASE_HEX,  VALS(g_PerformUpdateTypeTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_MonitoringMode,
        {  "MonitoringMode", "opcua.MonitoringMode", FT_UINT32, BASE_HEX,  VALS(g_MonitoringModeTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_DataChangeTrigger,
        {  "DataChangeTrigger", "opcua.DataChangeTrigger", FT_UINT32, BASE_HEX,  VALS(g_DataChangeTriggerTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_DeadbandType,
        {  "DeadbandType", "opcua.DeadbandType", FT_UINT32, BASE_HEX,  VALS(g_DeadbandTypeTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_EnumeratedTestType,
        {  "EnumeratedTestType", "opcua.EnumeratedTestType", FT_UINT32, BASE_HEX,  VALS(g_EnumeratedTestTypeTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_RedundancySupport,
        {  "RedundancySupport", "opcua.RedundancySupport", FT_UINT32, BASE_HEX,  VALS(g_RedundancySupportTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_ServerState,
        {  "ServerState", "opcua.ServerState", FT_UINT32, BASE_HEX,  VALS(g_ServerStateTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_ModelChangeStructureVerbMask,
        {  "ModelChangeStructureVerbMask", "opcua.ModelChangeStructureVerbMask", FT_UINT32, BASE_HEX,  VALS(g_ModelChangeStructureVerbMaskTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_AxisScaleEnumeration,
        {  "AxisScaleEnumeration", "opcua.AxisScaleEnumeration", FT_UINT32, BASE_HEX,  VALS(g_AxisScaleEnumerationTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_ExceptionDeviationFormat,
        {  "ExceptionDeviationFormat", "opcua.ExceptionDeviationFormat", FT_UINT32, BASE_HEX,  VALS(g_ExceptionDeviationFormatTable), 0x0, NULL, HFILL }
        },
        { &hf_opcua_AttributeId,
        {  "AttributeId", "opcua.AttributeId", FT_UINT32, BASE_HEX,  VALS(g_AttributeIdTable), 0x0, NULL, HFILL }
        },
    };

    proto_register_field_array(proto, hf, array_length(hf));
    proto_register_subtree_array(ett, array_length(ett));
}

