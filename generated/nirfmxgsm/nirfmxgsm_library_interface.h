//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-RFMXGSM
//---------------------------------------------------------------------
#ifndef NIRFMXGSM_GRPC_LIBRARY_WRAPPER_H
#define NIRFMXGSM_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <niRFmxGSM.h>

namespace nirfmxgsm_grpc {

class NiRFmxGSMLibraryInterface {
 public:
  virtual ~NiRFmxGSMLibraryInterface() {}

  virtual int32 AbortMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 AnalyzeIQ1Waveform(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[], float64 x0, float64 dx, NIComplexSingle iq[], int32 arraySize, int32 reset, int64 reserved) = 0;
  virtual int32 AnalyzeIQ1WaveformSplit(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[], float64 x0, float64 dx, float32 iqi[], float32 iqq[], int32 arraySize, int32 reset, int64 reserved) = 0;
  virtual int32 AutoLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 measurementInterval, float64* referenceLevel) = 0;
  virtual int32 BuildOffsetString(char selectorString[], int32 offsetNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 BuildSignalString(char signalName[], char resultName[], int32 selectorStringLength, char selectorString[]) = 0;
  virtual int32 BuildSlotString(char selectorString[], int32 slotNumber, int32 selectorStringOutLength, char selectorStringOut[]) = 0;
  virtual int32 CfgAutoTSCDetectionEnabled(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 autoTSCDetectionEnabled) = 0;
  virtual int32 CfgBand(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 band) = 0;
  virtual int32 CfgBurstSynchronizationType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 burstSynchronizationType) = 0;
  virtual int32 CfgDigitalEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], char digitalEdgeSource[], int32 digitalEdge, float64 triggerDelay, int32 enableTrigger) = 0;
  virtual int32 CfgExternalAttenuation(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 externalAttenuation) = 0;
  virtual int32 CfgFrequency(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency) = 0;
  virtual int32 CfgFrequencyARFCN(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 linkDirection, int32 band, int32 arfcn) = 0;
  virtual int32 CfgFrequencyReference(niRFmxInstrHandle instrumentHandle, char channelName[], char frequencyReferenceSource[], float64 frequencyReferenceFrequency) = 0;
  virtual int32 CfgIQPowerEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], char iqPowerEdgeSource[], int32 iqPowerEdgeSlope, float64 iqPowerEdgeLevel, float64 triggerDelay, int32 minimumQuietTimeMode, float64 minimumQuietTime, int32 iqPowerEdgeLevelType, int32 enableTrigger) = 0;
  virtual int32 CfgLinkDirection(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 linkDirection) = 0;
  virtual int32 CfgMechanicalAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 mechanicalAttenuationAuto, float64 mechanicalAttenuationValue) = 0;
  virtual int32 CfgNumberOfTimeslots(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 numberOfTimeslots) = 0;
  virtual int32 CfgPowerControlLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 powerControlLevel) = 0;
  virtual int32 CfgRF(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency, float64 referenceLevel, float64 externalAttenuation) = 0;
  virtual int32 CfgRFAttenuation(niRFmxInstrHandle instrumentHandle, char channelName[], int32 rfAttenuationAuto, float64 rfAttenuationValue) = 0;
  virtual int32 CfgReferenceLevel(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 referenceLevel) = 0;
  virtual int32 CfgSignalType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 modulationType, int32 burstType, int32 hbFilterWidth) = 0;
  virtual int32 CfgSoftwareEdgeTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 triggerDelay, int32 enableTrigger) = 0;
  virtual int32 CfgTSC(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 tsc) = 0;
  virtual int32 CheckMeasurementStatus(niRFmxInstrHandle instrumentHandle, char selectorString[], int32* done) = 0;
  virtual int32 ClearAllNamedResults(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 ClearNamedResult(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 CloneSignalConfiguration(niRFmxInstrHandle instrumentHandle, char oldSignalName[], char newSignalName[]) = 0;
  virtual int32 Close(niRFmxInstrHandle instrumentHandle, int32 forceDestroy) = 0;
  virtual int32 Commit(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 CreateSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[]) = 0;
  virtual int32 DeleteSignalConfiguration(niRFmxInstrHandle instrumentHandle, char signalName[]) = 0;
  virtual int32 DisableTrigger(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 GetAllNamedResultNames(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultNames[], int32 resultNamesBufferSize, int32* actualResultNamesSize, int32* defaultResultExists) = 0;
  virtual int32 GetAttributeF32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32* attrVal) = 0;
  virtual int32 GetAttributeF32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeF64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64* attrVal) = 0;
  virtual int32 GetAttributeF64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeI16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16* attrVal) = 0;
  virtual int32 GetAttributeI32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32* attrVal) = 0;
  virtual int32 GetAttributeI32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeI64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64* attrVal) = 0;
  virtual int32 GetAttributeI64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeI8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8* attrVal) = 0;
  virtual int32 GetAttributeI8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeNIComplexDoubleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeNIComplexSingleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeString(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 arraySize, char attrVal[]) = 0;
  virtual int32 GetAttributeU16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16* attrVal) = 0;
  virtual int32 GetAttributeU32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32* attrVal) = 0;
  virtual int32 GetAttributeU32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeU64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetAttributeU8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8* attrVal) = 0;
  virtual int32 GetAttributeU8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 GetError(niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[]) = 0;
  virtual int32 GetErrorString(niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[]) = 0;
  virtual int32 Initialize(char resourceName[], char optionString[], niRFmxInstrHandle* handleOut, int32* isNewSession) = 0;
  virtual int32 InitializeFromNIRFSASession(uInt32 nirfsaSession, niRFmxInstrHandle* handleOut) = 0;
  virtual int32 Initiate(niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[]) = 0;
  virtual int32 ModAccCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount) = 0;
  virtual int32 ModAccCfgDroopCompensationEnabled(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 droopCompensationEnabled) = 0;
  virtual int32 ModAccFetchConstellationTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, NIComplexSingle constellationTrace[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchConstellationTraceSplit(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 constellationTraceI[], float32 constellationTraceQ[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchDemodulatedBits(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int8 demodulatedBits[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchDetectedTSC(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* detectedTSC) = 0;
  virtual int32 ModAccFetchDetectedTSCArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32 detectedTSC[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchEVM(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanRMSEVM, float64* maximumRMSEVM, float64* meanPeakEVM, float64* maximumPeakEVM, float64* ninetyFifthPercentileEVM, float64* meanFrequencyError, int32* peakEVMSymbol) = 0;
  virtual int32 ModAccFetchEVMAmplitudeDroop(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanAmplitudeDroop, float64* maximumAmplitudeDroop) = 0;
  virtual int32 ModAccFetchEVMMagnitudeError(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanMagnitudeError, float64* maximumMagnitudeError) = 0;
  virtual int32 ModAccFetchEVMPhaseError(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanPhaseError, float64* maximumPhaseError) = 0;
  virtual int32 ModAccFetchEVMTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 evm[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchIQImpairments(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanIQGainImbalance, float64* maximumIQGainImbalance, float64* meanIQOriginOffset, float64* maximumIQOriginOffset) = 0;
  virtual int32 ModAccFetchMagnitudeErrorTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 magnitudeError[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ModAccFetchPFER(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* meanRMSPhaseError, float64* maximumRMSPhaseError, float64* meanPeakPhaseError, float64* maximumPeakPhaseError, float64* meanFrequencyError, int32* peakSymbol) = 0;
  virtual int32 ModAccFetchPhaseErrorTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 phaseError[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ORFSCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount, int32 averagingType) = 0;
  virtual int32 ORFSCfgEvaluationSymbols(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 evaluationSymbolsStart, int32 evaluationSymbolsIncludeTSC, float64 evaluationSymbolsStop) = 0;
  virtual int32 ORFSCfgMeasurementType(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 measurementType) = 0;
  virtual int32 ORFSCfgModulationCustomOffsetFrequencyArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float32 modulationCustomOffsetFrequency[], int32 arraySize) = 0;
  virtual int32 ORFSCfgNoiseCompensationEnabled(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 noiseCompensationEnabled) = 0;
  virtual int32 ORFSCfgOffsetFrequencyMode(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 offsetFrequencyMode) = 0;
  virtual int32 ORFSCfgSwitchingCustomOffsetFrequencyArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float32 switchingCustomOffsetFrequency[], int32 arraySize) = 0;
  virtual int32 ORFSFetchModulationPowerTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 offsetFrequency[], float32 absolutePower[], float32 relativePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ORFSFetchModulationResultsArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* modulationCarrierPower, float64 lowerRelativePower[], float64 upperRelativePower[], float64 lowerAbsolutePower[], float64 upperAbsolutePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ORFSFetchSwitchingPowerTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float32 offsetFrequency[], float32 absolutePower[], float32 relativePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ORFSFetchSwitchingResultsArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* switchingCarrierPower, float64 lowerRelativePower[], float64 upperRelativePower[], float64 lowerAbsolutePower[], float64 upperAbsolutePower[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 PVTCfgAveraging(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 averagingEnabled, int32 averagingCount, int32 averagingType) = 0;
  virtual int32 PVTFetchMeasurementStatus(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32* measurementStatus) = 0;
  virtual int32 PVTFetchPowerTrace(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 upperMask[], float32 signalPower[], float32 lowerMask[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 PVTFetchSlotMeasurement(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* slotAveragePower, float64* slotBurstWidth, int32* slotMeasurementStatus, float64* slotMaximumPower, float64* slotMinimumPower, float64* slotBurstThreshold) = 0;
  virtual int32 PVTFetchSlotMeasurementArray(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64 slotAveragePower[], float64 slotBurstWidth[], int32 slotMeasurementStatus[], float64 slotMaximumPower[], float64 slotMinimumPower[], float64 slotBurstThreshold[], int32 arraySize, int32* actualArraySize) = 0;
  virtual int32 ResetAttribute(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID) = 0;
  virtual int32 ResetToDefault(niRFmxInstrHandle instrumentHandle, char selectorString[]) = 0;
  virtual int32 SelectMeasurements(niRFmxInstrHandle instrumentHandle, char selectorString[], uInt32 measurements, int32 enableAllTraces) = 0;
  virtual int32 SendSoftwareEdgeTrigger(niRFmxInstrHandle instrumentHandle) = 0;
  virtual int32 SetAttributeF32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal) = 0;
  virtual int32 SetAttributeF32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeF64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal) = 0;
  virtual int32 SetAttributeF64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeI16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16 attrVal) = 0;
  virtual int32 SetAttributeI32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal) = 0;
  virtual int32 SetAttributeI32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeI64(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal) = 0;
  virtual int32 SetAttributeI64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeI8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal) = 0;
  virtual int32 SetAttributeI8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeNIComplexDoubleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeNIComplexSingleArray(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeString(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, char attrVal[]) = 0;
  virtual int32 SetAttributeU16(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16 attrVal) = 0;
  virtual int32 SetAttributeU32(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal) = 0;
  virtual int32 SetAttributeU32Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeU64Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize) = 0;
  virtual int32 SetAttributeU8(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal) = 0;
  virtual int32 SetAttributeU8Array(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize) = 0;
  virtual int32 WaitForAcquisitionComplete(niRFmxInstrHandle instrumentHandle, float64 timeout) = 0;
  virtual int32 WaitForMeasurementComplete(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout) = 0;
};

}  // namespace nirfmxgsm_grpc
#endif  // NIRFMXGSM_GRPC_LIBRARY_WRAPPER_H
