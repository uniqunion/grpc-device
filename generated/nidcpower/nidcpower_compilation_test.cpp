//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Compilation test for the NI-DCPower Metadata
//---------------------------------------------------------------------
#include "nidcpower_library.h"

namespace nidcpower_grpc {

ViStatus Abort(ViSession vi)
{
  return niDCPower_Abort(vi);
}

ViStatus AbortWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_AbortWithChannels(vi, channelName);
}

ViStatus CalSelfCalibrate(ViSession vi, ViConstString channelName)
{
  return niDCPower_CalSelfCalibrate(vi, channelName);
}

ViStatus ClearError(ViSession vi)
{
  return niDCPower_ClearError(vi);
}

ViStatus ClearInterchangeWarnings(ViSession vi)
{
  return niDCPower_ClearInterchangeWarnings(vi);
}

ViStatus ClearLatchedOutputCutoffState(ViSession vi, ViConstString channelName, ViInt32 outputCutoffReason)
{
  return niDCPower_ClearLatchedOutputCutoffState(vi, channelName, outputCutoffReason);
}

ViStatus Close(ViSession vi)
{
  return niDCPower_close(vi);
}

ViStatus Commit(ViSession vi)
{
  return niDCPower_Commit(vi);
}

ViStatus CommitWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_CommitWithChannels(vi, channelName);
}

ViStatus ConfigureApertureTime(ViSession vi, ViConstString channelName, ViReal64 apertureTime, ViInt32 units)
{
  return niDCPower_ConfigureApertureTime(vi, channelName, apertureTime, units);
}

ViStatus ConfigureAutoZero(ViSession vi, ViConstString channelName, ViInt32 autoZero)
{
  return niDCPower_ConfigureAutoZero(vi, channelName, autoZero);
}

ViStatus ConfigureCurrentLevel(ViSession vi, ViConstString channelName, ViReal64 level)
{
  return niDCPower_ConfigureCurrentLevel(vi, channelName, level);
}

ViStatus ConfigureCurrentLevelRange(ViSession vi, ViConstString channelName, ViReal64 range)
{
  return niDCPower_ConfigureCurrentLevelRange(vi, channelName, range);
}

ViStatus ConfigureCurrentLimit(ViSession vi, ViConstString channelName, ViInt32 behavior, ViReal64 limit)
{
  return niDCPower_ConfigureCurrentLimit(vi, channelName, behavior, limit);
}

ViStatus ConfigureCurrentLimitRange(ViSession vi, ViConstString channelName, ViReal64 range)
{
  return niDCPower_ConfigureCurrentLimitRange(vi, channelName, range);
}

ViStatus ConfigureDigitalEdgeMeasureTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge)
{
  return niDCPower_ConfigureDigitalEdgeMeasureTrigger(vi, inputTerminal, edge);
}

ViStatus ConfigureDigitalEdgeMeasureTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge)
{
  return niDCPower_ConfigureDigitalEdgeMeasureTriggerWithChannels(vi, channelName, inputTerminal, edge);
}

ViStatus ConfigureDigitalEdgePulseTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge)
{
  return niDCPower_ConfigureDigitalEdgePulseTrigger(vi, inputTerminal, edge);
}

ViStatus ConfigureDigitalEdgePulseTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge)
{
  return niDCPower_ConfigureDigitalEdgePulseTriggerWithChannels(vi, channelName, inputTerminal, edge);
}

ViStatus ConfigureDigitalEdgeSequenceAdvanceTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge)
{
  return niDCPower_ConfigureDigitalEdgeSequenceAdvanceTrigger(vi, inputTerminal, edge);
}

ViStatus ConfigureDigitalEdgeSequenceAdvanceTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge)
{
  return niDCPower_ConfigureDigitalEdgeSequenceAdvanceTriggerWithChannels(vi, channelName, inputTerminal, edge);
}

ViStatus ConfigureDigitalEdgeShutdownTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge)
{
  return niDCPower_ConfigureDigitalEdgeShutdownTriggerWithChannels(vi, channelName, inputTerminal, edge);
}

ViStatus ConfigureDigitalEdgeSourceTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge)
{
  return niDCPower_ConfigureDigitalEdgeSourceTrigger(vi, inputTerminal, edge);
}

ViStatus ConfigureDigitalEdgeSourceTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge)
{
  return niDCPower_ConfigureDigitalEdgeSourceTriggerWithChannels(vi, channelName, inputTerminal, edge);
}

ViStatus ConfigureDigitalEdgeStartTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge)
{
  return niDCPower_ConfigureDigitalEdgeStartTrigger(vi, inputTerminal, edge);
}

ViStatus ConfigureDigitalEdgeStartTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge)
{
  return niDCPower_ConfigureDigitalEdgeStartTriggerWithChannels(vi, channelName, inputTerminal, edge);
}

ViStatus ConfigureLCRCompensation(ViSession vi, ViConstString channelName, ViInt32 compensationDataSize, ViInt8 compensationData[])
{
  return niDCPower_ConfigureLCRCompensation(vi, channelName, compensationDataSize, compensationData);
}

ViStatus ConfigureLCRCustomCableCompensation(ViSession vi, ViConstString channelName, ViInt32 customCableCompensationDataSize, ViInt8 customCableCompensationData[])
{
  return niDCPower_ConfigureLCRCustomCableCompensation(vi, channelName, customCableCompensationDataSize, customCableCompensationData);
}

ViStatus ConfigureOutputEnabled(ViSession vi, ViConstString channelName, ViBoolean enabled)
{
  return niDCPower_ConfigureOutputEnabled(vi, channelName, enabled);
}

ViStatus ConfigureOutputFunction(ViSession vi, ViConstString channelName, ViInt32 function)
{
  return niDCPower_ConfigureOutputFunction(vi, channelName, function);
}

ViStatus ConfigureOutputRange(ViSession vi, ViConstString channelName, ViInt32 rangeType, ViReal64 range)
{
  return niDCPower_ConfigureOutputRange(vi, channelName, rangeType, range);
}

ViStatus ConfigureOutputResistance(ViSession vi, ViConstString channelName, ViReal64 resistance)
{
  return niDCPower_ConfigureOutputResistance(vi, channelName, resistance);
}

ViStatus ConfigureOvp(ViSession vi, ViConstString channelName, ViBoolean enabled, ViReal64 limit)
{
  return niDCPower_ConfigureOVP(vi, channelName, enabled, limit);
}

ViStatus ConfigurePowerLineFrequency(ViSession vi, ViReal64 powerlineFrequency)
{
  return niDCPower_ConfigurePowerLineFrequency(vi, powerlineFrequency);
}

ViStatus ConfigurePulseBiasCurrentLevel(ViSession vi, ViConstString channelName, ViReal64 level)
{
  return niDCPower_ConfigurePulseBiasCurrentLevel(vi, channelName, level);
}

ViStatus ConfigurePulseBiasCurrentLimit(ViSession vi, ViConstString channelName, ViReal64 limit)
{
  return niDCPower_ConfigurePulseBiasCurrentLimit(vi, channelName, limit);
}

ViStatus ConfigurePulseBiasVoltageLevel(ViSession vi, ViConstString channelName, ViReal64 level)
{
  return niDCPower_ConfigurePulseBiasVoltageLevel(vi, channelName, level);
}

ViStatus ConfigurePulseBiasVoltageLimit(ViSession vi, ViConstString channelName, ViReal64 limit)
{
  return niDCPower_ConfigurePulseBiasVoltageLimit(vi, channelName, limit);
}

ViStatus ConfigurePulseCurrentLevel(ViSession vi, ViConstString channelName, ViReal64 level)
{
  return niDCPower_ConfigurePulseCurrentLevel(vi, channelName, level);
}

ViStatus ConfigurePulseCurrentLevelRange(ViSession vi, ViConstString channelName, ViReal64 range)
{
  return niDCPower_ConfigurePulseCurrentLevelRange(vi, channelName, range);
}

ViStatus ConfigurePulseCurrentLimit(ViSession vi, ViConstString channelName, ViReal64 limit)
{
  return niDCPower_ConfigurePulseCurrentLimit(vi, channelName, limit);
}

ViStatus ConfigurePulseCurrentLimitRange(ViSession vi, ViConstString channelName, ViReal64 range)
{
  return niDCPower_ConfigurePulseCurrentLimitRange(vi, channelName, range);
}

ViStatus ConfigurePulseVoltageLevel(ViSession vi, ViConstString channelName, ViReal64 level)
{
  return niDCPower_ConfigurePulseVoltageLevel(vi, channelName, level);
}

ViStatus ConfigurePulseVoltageLevelRange(ViSession vi, ViConstString channelName, ViReal64 range)
{
  return niDCPower_ConfigurePulseVoltageLevelRange(vi, channelName, range);
}

ViStatus ConfigurePulseVoltageLimit(ViSession vi, ViConstString channelName, ViReal64 limit)
{
  return niDCPower_ConfigurePulseVoltageLimit(vi, channelName, limit);
}

ViStatus ConfigurePulseVoltageLimitRange(ViSession vi, ViConstString channelName, ViReal64 range)
{
  return niDCPower_ConfigurePulseVoltageLimitRange(vi, channelName, range);
}

ViStatus ConfigureSense(ViSession vi, ViConstString channelName, ViInt32 sense)
{
  return niDCPower_ConfigureSense(vi, channelName, sense);
}

ViStatus ConfigureSoftwareEdgeMeasureTrigger(ViSession vi)
{
  return niDCPower_ConfigureSoftwareEdgeMeasureTrigger(vi);
}

ViStatus ConfigureSoftwareEdgeMeasureTriggerWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_ConfigureSoftwareEdgeMeasureTriggerWithChannels(vi, channelName);
}

ViStatus ConfigureSoftwareEdgePulseTrigger(ViSession vi)
{
  return niDCPower_ConfigureSoftwareEdgePulseTrigger(vi);
}

ViStatus ConfigureSoftwareEdgePulseTriggerWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_ConfigureSoftwareEdgePulseTriggerWithChannels(vi, channelName);
}

ViStatus ConfigureSoftwareEdgeSequenceAdvanceTrigger(ViSession vi)
{
  return niDCPower_ConfigureSoftwareEdgeSequenceAdvanceTrigger(vi);
}

ViStatus ConfigureSoftwareEdgeSequenceAdvanceTriggerWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_ConfigureSoftwareEdgeSequenceAdvanceTriggerWithChannels(vi, channelName);
}

ViStatus ConfigureSoftwareEdgeShutdownTriggerWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_ConfigureSoftwareEdgeShutdownTriggerWithChannels(vi, channelName);
}

ViStatus ConfigureSoftwareEdgeSourceTrigger(ViSession vi)
{
  return niDCPower_ConfigureSoftwareEdgeSourceTrigger(vi);
}

ViStatus ConfigureSoftwareEdgeSourceTriggerWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_ConfigureSoftwareEdgeSourceTriggerWithChannels(vi, channelName);
}

ViStatus ConfigureSoftwareEdgeStartTrigger(ViSession vi)
{
  return niDCPower_ConfigureSoftwareEdgeStartTrigger(vi);
}

ViStatus ConfigureSoftwareEdgeStartTriggerWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_ConfigureSoftwareEdgeStartTriggerWithChannels(vi, channelName);
}

ViStatus ConfigureSourceMode(ViSession vi, ViInt32 sourceMode)
{
  return niDCPower_ConfigureSourceMode(vi, sourceMode);
}

ViStatus ConfigureSourceModeWithChannels(ViSession vi, ViConstString channelName, ViInt32 sourceMode)
{
  return niDCPower_ConfigureSourceModeWithChannels(vi, channelName, sourceMode);
}

ViStatus ConfigureVoltageLevel(ViSession vi, ViConstString channelName, ViReal64 level)
{
  return niDCPower_ConfigureVoltageLevel(vi, channelName, level);
}

ViStatus ConfigureVoltageLevelRange(ViSession vi, ViConstString channelName, ViReal64 range)
{
  return niDCPower_ConfigureVoltageLevelRange(vi, channelName, range);
}

ViStatus ConfigureVoltageLimit(ViSession vi, ViConstString channelName, ViReal64 limit)
{
  return niDCPower_ConfigureVoltageLimit(vi, channelName, limit);
}

ViStatus ConfigureVoltageLimitRange(ViSession vi, ViConstString channelName, ViReal64 range)
{
  return niDCPower_ConfigureVoltageLimitRange(vi, channelName, range);
}

ViStatus CreateAdvancedSequence(ViSession vi, ViConstString sequenceName, ViInt32 attributeIdCount, ViInt32 attributeIds[], ViBoolean setAsActiveSequence)
{
  return niDCPower_CreateAdvancedSequence(vi, sequenceName, attributeIdCount, attributeIds, setAsActiveSequence);
}

ViStatus CreateAdvancedSequenceCommitStepWithChannels(ViSession vi, ViConstString channelName, ViBoolean setAsActiveStep)
{
  return niDCPower_CreateAdvancedSequenceCommitStepWithChannels(vi, channelName, setAsActiveStep);
}

ViStatus CreateAdvancedSequenceStep(ViSession vi, ViBoolean setAsActiveStep)
{
  return niDCPower_CreateAdvancedSequenceStep(vi, setAsActiveStep);
}

ViStatus CreateAdvancedSequenceStepWithChannels(ViSession vi, ViConstString channelName, ViBoolean setAsActiveStep)
{
  return niDCPower_CreateAdvancedSequenceStepWithChannels(vi, channelName, setAsActiveStep);
}

ViStatus CreateAdvancedSequenceWithChannels(ViSession vi, ViConstString channelName, ViConstString sequenceName, ViInt32 attributeIdCount, ViInt32 attributeIds[], ViBoolean setAsActiveSequence)
{
  return niDCPower_CreateAdvancedSequenceWithChannels(vi, channelName, sequenceName, attributeIdCount, attributeIds, setAsActiveSequence);
}

ViStatus DeleteAdvancedSequence(ViSession vi, ViConstString sequenceName)
{
  return niDCPower_DeleteAdvancedSequence(vi, sequenceName);
}

ViStatus DeleteAdvancedSequenceWithChannels(ViSession vi, ViConstString channelName, ViConstString sequenceName)
{
  return niDCPower_DeleteAdvancedSequenceWithChannels(vi, channelName, sequenceName);
}

ViStatus Disable(ViSession vi)
{
  return niDCPower_Disable(vi);
}

ViStatus DisablePulseTrigger(ViSession vi)
{
  return niDCPower_DisablePulseTrigger(vi);
}

ViStatus DisablePulseTriggerWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_DisablePulseTriggerWithChannels(vi, channelName);
}

ViStatus DisableSequenceAdvanceTrigger(ViSession vi)
{
  return niDCPower_DisableSequenceAdvanceTrigger(vi);
}

ViStatus DisableSequenceAdvanceTriggerWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_DisableSequenceAdvanceTriggerWithChannels(vi, channelName);
}

ViStatus DisableShutdownTriggerWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_DisableShutdownTriggerWithChannels(vi, channelName);
}

ViStatus DisableSourceTrigger(ViSession vi)
{
  return niDCPower_DisableSourceTrigger(vi);
}

ViStatus DisableSourceTriggerWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_DisableSourceTriggerWithChannels(vi, channelName);
}

ViStatus DisableStartTrigger(ViSession vi)
{
  return niDCPower_DisableStartTrigger(vi);
}

ViStatus DisableStartTriggerWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_DisableStartTriggerWithChannels(vi, channelName);
}

ViStatus ErrorMessage(ViSession vi, ViStatus errorCode, ViChar errorMessage[256])
{
  return niDCPower_error_message(vi, errorCode, errorMessage);
}

ViStatus ErrorQuery(ViSession vi, ViInt32* errorCode, ViChar errorMessage[256])
{
  return niDCPower_error_query(vi, errorCode, errorMessage);
}

ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 size, ViInt8 configuration[])
{
  return niDCPower_ExportAttributeConfigurationBuffer(vi, size, configuration);
}

ViStatus ExportAttributeConfigurationFile(ViSession vi, ViConstString filePath)
{
  return niDCPower_ExportAttributeConfigurationFile(vi, filePath);
}

ViStatus ExportSignal(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal)
{
  return niDCPower_ExportSignal(vi, signal, signalIdentifier, outputTerminal);
}

ViStatus ExportSignalWithChannels(ViSession vi, ViConstString channelName, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal)
{
  return niDCPower_ExportSignalWithChannels(vi, channelName, signal, signalIdentifier, outputTerminal);
}

ViStatus FetchMultiple(ViSession vi, ViConstString channelName, ViReal64 timeout, ViInt32 count, ViReal64 voltageMeasurements[], ViReal64 currentMeasurements[], ViBoolean inCompliance[], ViInt32* actualCount)
{
  return niDCPower_FetchMultiple(vi, channelName, timeout, count, voltageMeasurements, currentMeasurements, inCompliance, actualCount);
}

ViStatus FetchMultipleLCR(ViSession vi, ViConstString channelName, ViReal64 timeout, ViInt32 count, NILCRMeasurement_struct measurements[], ViInt32* actualCount)
{
  return niDCPower_FetchMultipleLCR(vi, channelName, timeout, count, measurements, actualCount);
}

ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue)
{
  return niDCPower_GetAttributeViBoolean(vi, channelName, attributeId, attributeValue);
}

ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue)
{
  return niDCPower_GetAttributeViInt32(vi, channelName, attributeId, attributeValue);
}

ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue)
{
  return niDCPower_GetAttributeViInt64(vi, channelName, attributeId, attributeValue);
}

ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue)
{
  return niDCPower_GetAttributeViReal64(vi, channelName, attributeId, attributeValue);
}

ViStatus GetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue)
{
  return niDCPower_GetAttributeViSession(vi, channelName, attributeId, attributeValue);
}

ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[])
{
  return niDCPower_GetAttributeViString(vi, channelName, attributeId, bufferSize, attributeValue);
}

ViStatus GetChannelName(ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar channelName[])
{
  return niDCPower_GetChannelName(vi, index, bufferSize, channelName);
}

ViStatus GetChannelNameFromString(ViSession vi, ViConstString index, ViInt32 bufferSize, ViChar channelName[])
{
  return niDCPower_GetChannelNameFromString(vi, index, bufferSize, channelName);
}

ViStatus GetError(ViSession vi, ViStatus* code, ViInt32 bufferSize, ViChar description[])
{
  return niDCPower_GetError(vi, code, bufferSize, description);
}

ViStatus GetExtCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute)
{
  return niDCPower_GetExtCalLastDateAndTime(vi, year, month, day, hour, minute);
}

ViStatus GetExtCalLastTemp(ViSession vi, ViReal64* temperature)
{
  return niDCPower_GetExtCalLastTemp(vi, temperature);
}

ViStatus GetExtCalRecommendedInterval(ViSession vi, ViInt32* months)
{
  return niDCPower_GetExtCalRecommendedInterval(vi, months);
}

ViStatus GetLCRCompensationData(ViSession vi, ViConstString channelName, ViInt32 compensationDataSize, ViInt8 compensationData[])
{
  return niDCPower_GetLCRCompensationData(vi, channelName, compensationDataSize, compensationData);
}

ViStatus GetLCRCompensationLastDateAndTime(ViSession vi, ViConstString channelName, ViInt32 compensationType, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute)
{
  return niDCPower_GetLCRCompensationLastDateAndTime(vi, channelName, compensationType, year, month, day, hour, minute);
}

ViStatus GetLCRCustomCableCompensationData(ViSession vi, ViConstString channelName, ViInt32 customCableCompensationDataSize, ViInt8 customCableCompensationData[])
{
  return niDCPower_GetLCRCustomCableCompensationData(vi, channelName, customCableCompensationDataSize, customCableCompensationData);
}

ViStatus GetNextCoercionRecord(ViSession vi, ViInt32 bufferSize, ViChar coercionRecord[])
{
  return niDCPower_GetNextCoercionRecord(vi, bufferSize, coercionRecord);
}

ViStatus GetNextInterchangeWarning(ViSession vi, ViInt32 bufferSize, ViChar interchangeWarning[])
{
  return niDCPower_GetNextInterchangeWarning(vi, bufferSize, interchangeWarning);
}

ViStatus GetSelfCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute)
{
  return niDCPower_GetSelfCalLastDateAndTime(vi, year, month, day, hour, minute);
}

ViStatus GetSelfCalLastTemp(ViSession vi, ViReal64* temperature)
{
  return niDCPower_GetSelfCalLastTemp(vi, temperature);
}

ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 size, ViInt8 configuration[])
{
  return niDCPower_ImportAttributeConfigurationBuffer(vi, size, configuration);
}

ViStatus ImportAttributeConfigurationFile(ViSession vi, ViConstString filePath)
{
  return niDCPower_ImportAttributeConfigurationFile(vi, filePath);
}

ViStatus InitializeWithChannels(ViRsrc resourceName, ViConstString channels, ViBoolean reset, ViConstString optionString, ViSession* vi)
{
  return niDCPower_InitializeWithChannels(resourceName, channels, reset, optionString, vi);
}

ViStatus InitializeWithIndependentChannels(ViRsrc resourceName, ViBoolean reset, ViConstString optionString, ViSession* vi)
{
  return niDCPower_InitializeWithIndependentChannels(resourceName, reset, optionString, vi);
}

ViStatus Initiate(ViSession vi)
{
  return niDCPower_Initiate(vi);
}

ViStatus InitiateWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_InitiateWithChannels(vi, channelName);
}

ViStatus InvalidateAllAttributes(ViSession vi)
{
  return niDCPower_InvalidateAllAttributes(vi);
}

ViStatus Measure(ViSession vi, ViConstString channelName, ViInt32 measurementType, ViReal64* measurement)
{
  return niDCPower_Measure(vi, channelName, measurementType, measurement);
}

ViStatus MeasureMultiple(ViSession vi, ViConstString channelName, ViReal64 voltageMeasurements[], ViReal64 currentMeasurements[])
{
  return niDCPower_MeasureMultiple(vi, channelName, voltageMeasurements, currentMeasurements);
}

ViStatus MeasureMultipleLCR(ViSession vi, ViConstString channelName, NILCRMeasurement_struct measurements[])
{
  return niDCPower_MeasureMultipleLCR(vi, channelName, measurements);
}

ViStatus PerformLCRLoadCompensation(ViSession vi, ViConstString channelName, ViInt32 numCompensationSpots, NILCRLoadCompensationSpot_struct compensationSpots[])
{
  return niDCPower_PerformLCRLoadCompensation(vi, channelName, numCompensationSpots, compensationSpots);
}

ViStatus PerformLCROpenCompensation(ViSession vi, ViConstString channelName, ViInt32 numFrequencies, ViReal64 additionalFrequencies[])
{
  return niDCPower_PerformLCROpenCompensation(vi, channelName, numFrequencies, additionalFrequencies);
}

ViStatus PerformLCROpenCustomCableCompensation(ViSession vi, ViConstString channelName)
{
  return niDCPower_PerformLCROpenCustomCableCompensation(vi, channelName);
}

ViStatus PerformLCRShortCompensation(ViSession vi, ViConstString channelName, ViInt32 numFrequencies, ViReal64 additionalFrequencies[])
{
  return niDCPower_PerformLCRShortCompensation(vi, channelName, numFrequencies, additionalFrequencies);
}

ViStatus PerformLCRShortCustomCableCompensation(ViSession vi, ViConstString channelName)
{
  return niDCPower_PerformLCRShortCustomCableCompensation(vi, channelName);
}

ViStatus QueryInCompliance(ViSession vi, ViConstString channelName, ViBoolean* inCompliance)
{
  return niDCPower_QueryInCompliance(vi, channelName, inCompliance);
}

ViStatus QueryLatchedOutputCutoffState(ViSession vi, ViConstString channelName, ViInt32 outputCutoffReason, ViBoolean* outputCutoffState)
{
  return niDCPower_QueryLatchedOutputCutoffState(vi, channelName, outputCutoffReason, outputCutoffState);
}

ViStatus QueryMaxCurrentLimit(ViSession vi, ViConstString channelName, ViReal64 voltageLevel, ViReal64* maxCurrentLimit)
{
  return niDCPower_QueryMaxCurrentLimit(vi, channelName, voltageLevel, maxCurrentLimit);
}

ViStatus QueryMaxVoltageLevel(ViSession vi, ViConstString channelName, ViReal64 currentLimit, ViReal64* maxVoltageLevel)
{
  return niDCPower_QueryMaxVoltageLevel(vi, channelName, currentLimit, maxVoltageLevel);
}

ViStatus QueryMinCurrentLimit(ViSession vi, ViConstString channelName, ViReal64 voltageLevel, ViReal64* minCurrentLimit)
{
  return niDCPower_QueryMinCurrentLimit(vi, channelName, voltageLevel, minCurrentLimit);
}

ViStatus QueryOutputState(ViSession vi, ViConstString channelName, ViInt32 outputState, ViBoolean* inState)
{
  return niDCPower_QueryOutputState(vi, channelName, outputState, inState);
}

ViStatus ReadCurrentTemperature(ViSession vi, ViReal64* temperature)
{
  return niDCPower_ReadCurrentTemperature(vi, temperature);
}

ViStatus Reset(ViSession vi)
{
  return niDCPower_reset(vi);
}

ViStatus ResetDevice(ViSession vi)
{
  return niDCPower_ResetDevice(vi);
}

ViStatus ResetInterchangeCheck(ViSession vi)
{
  return niDCPower_ResetInterchangeCheck(vi);
}

ViStatus ResetWithChannels(ViSession vi, ViConstString channelName)
{
  return niDCPower_ResetWithChannels(vi, channelName);
}

ViStatus ResetWithDefaults(ViSession vi)
{
  return niDCPower_ResetWithDefaults(vi);
}

ViStatus RevisionQuery(ViSession vi, ViChar instrumentDriverRevision[256], ViChar firmwareRevision[256])
{
  return niDCPower_revision_query(vi, instrumentDriverRevision, firmwareRevision);
}

ViStatus SelfTest(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256])
{
  return niDCPower_self_test(vi, selfTestResult, selfTestMessage);
}

ViStatus SendSoftwareEdgeTrigger(ViSession vi, ViInt32 trigger)
{
  return niDCPower_SendSoftwareEdgeTrigger(vi, trigger);
}

ViStatus SendSoftwareEdgeTriggerWithChannels(ViSession vi, ViConstString channelName, ViInt32 trigger)
{
  return niDCPower_SendSoftwareEdgeTriggerWithChannels(vi, channelName, trigger);
}

ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue)
{
  return niDCPower_SetAttributeViBoolean(vi, channelName, attributeId, attributeValue);
}

ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue)
{
  return niDCPower_SetAttributeViInt32(vi, channelName, attributeId, attributeValue);
}

ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue)
{
  return niDCPower_SetAttributeViInt64(vi, channelName, attributeId, attributeValue);
}

ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue)
{
  return niDCPower_SetAttributeViReal64(vi, channelName, attributeId, attributeValue);
}

ViStatus SetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue)
{
  return niDCPower_SetAttributeViSession(vi, channelName, attributeId, attributeValue);
}

ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue)
{
  return niDCPower_SetAttributeViString(vi, channelName, attributeId, attributeValue);
}

ViStatus SetSequence(ViSession vi, ViConstString channelName, ViReal64 values[], ViReal64 sourceDelays[], ViUInt32 size)
{
  return niDCPower_SetSequence(vi, channelName, values, sourceDelays, size);
}

ViStatus WaitForEvent(ViSession vi, ViInt32 eventId, ViReal64 timeout)
{
  return niDCPower_WaitForEvent(vi, eventId, timeout);
}

ViStatus WaitForEventWithChannels(ViSession vi, ViConstString channelName, ViInt32 eventId, ViReal64 timeout)
{
  return niDCPower_WaitForEventWithChannels(vi, channelName, eventId, timeout);
}

}  // namespace nidcpower_grpc
