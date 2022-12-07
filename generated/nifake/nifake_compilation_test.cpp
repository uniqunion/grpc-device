//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Compilation test for the NI-FAKE Metadata
//---------------------------------------------------------------------
#include "nifake_library.h"

namespace nifake_grpc {

ViStatus Abort(ViSession vi)
{
  return niFake_Abort(vi);
}

ViStatus AcceptListOfDurationsInSeconds(ViSession vi, ViInt32 count, ViReal64 delays[])
{
  return niFake_AcceptListOfDurationsInSeconds(vi, count, delays);
}

ViStatus AcceptViSessionArray(ViUInt32 sessionCount, ViSession sessionArray[])
{
  return niFake_AcceptViSessionArray(sessionCount, sessionArray);
}

ViStatus AcceptViUInt32Array(ViSession vi, ViInt32 arrayLen, ViUInt32 uInt32Array[])
{
  return niFake_AcceptViUInt32Array(vi, arrayLen, uInt32Array);
}

ViStatus BoolArrayInputFunction(ViSession vi, ViInt32 numberOfElements, ViBoolean anArray[])
{
  return niFake_BoolArrayInputFunction(vi, numberOfElements, anArray);
}

ViStatus BoolArrayOutputFunction(ViSession vi, ViInt32 numberOfElements, ViBoolean anArray[])
{
  return niFake_BoolArrayOutputFunction(vi, numberOfElements, anArray);
}

ViStatus Close(ViSession vi)
{
  return niFake_close(vi);
}

ViStatus CloseExtCal(ViSession vi, ViInt32 action)
{
  return niFake_CloseExtCal(vi, action);
}

ViStatus CommandWithReservedParam(ViSession vi, ViBoolean* reserved)
{
  return niFake_CommandWithReservedParam(vi, reserved);
}

ViStatus Control4022(ViString resourceName, ViInt32 configuration)
{
  return niFake_4022Control(resourceName, configuration);
}

ViStatus CreateConfigurationList(ViInt32 numberOfListAttributes, ViAttr listAttributeIds[])
{
  return niFake_CreateConfigurationList(numberOfListAttributes, listAttributeIds);
}

ViStatus CustomNestedStructRoundtrip(CustomStructNestedTypedef_struct nestedCustomTypeIn, CustomStructNestedTypedef_struct* nestedCustomTypeOut)
{
  return niFake_CustomNestedStructRoundtrip(nestedCustomTypeIn, nestedCustomTypeOut);
}

ViStatus DoubleAllTheNums(ViSession vi, ViInt32 numberCount, ViReal64 numbers[])
{
  return niFake_DoubleAllTheNums(vi, numberCount, numbers);
}

ViStatus EnumArrayOutputFunction(ViSession vi, ViInt32 numberOfElements, ViInt16 anArray[])
{
  return niFake_EnumArrayOutputFunction(vi, numberOfElements, anArray);
}

ViStatus EnumInputFunctionWithDefaults(ViSession vi, ViInt16 aTurtle)
{
  return niFake_EnumInputFunctionWithDefaults(vi, aTurtle);
}

ViStatus ErrorMessage(ViSession vi, ViStatus errorCode, ViChar errorMessage[256])
{
  return niFake_error_message(vi, errorCode, errorMessage);
}

ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[])
{
  return niFake_ExportAttributeConfigurationBuffer(vi, sizeInBytes, configuration);
}

ViStatus FetchWaveform(ViSession vi, ViInt32 numberOfSamples, ViReal64 waveformData[], ViInt32* actualNumberOfSamples)
{
  return niFake_FetchWaveform(vi, numberOfSamples, waveformData, actualNumberOfSamples);
}

ViStatus GetABoolean(ViSession vi, ViBoolean* aBoolean)
{
  return niFake_GetABoolean(vi, aBoolean);
}

ViStatus GetANumber(ViSession vi, ViInt16* aNumber)
{
  return niFake_GetANumber(vi, aNumber);
}

ViStatus GetAStringOfFixedMaximumSize(ViSession vi, ViChar aString[256])
{
  return niFake_GetAStringOfFixedMaximumSize(vi, aString);
}

ViStatus GetAnIviDanceString(ViSession vi, ViInt32 bufferSize, ViChar aString[])
{
  return niFake_GetAnIviDanceString(vi, bufferSize, aString);
}

ViStatus GetAnIviDanceWithATwistArray(ViSession vi, ViConstString aString, ViInt32 bufferSize, ViInt32 arrayOut[], ViInt32* actualSize)
{
  return niFake_GetAnIviDanceWithATwistArray(vi, aString, bufferSize, arrayOut, actualSize);
}

ViStatus GetAnIviDanceWithATwistArrayOfCustomType(ViSession vi, ViInt32 bufferSize, CustomStruct arrayOut[], ViInt32* actualSize)
{
  return niFake_GetAnIviDanceWithATwistArrayOfCustomType(vi, bufferSize, arrayOut, actualSize);
}

ViStatus GetAnIviDanceWithATwistArrayWithInputArray(ViInt32 dataIn[], ViInt32 arraySizeIn, ViInt32 bufferSize, ViInt32 arrayOut[], ViInt32* actualSize)
{
  return niFake_GetAnIviDanceWithATwistArrayWithInputArray(dataIn, arraySizeIn, bufferSize, arrayOut, actualSize);
}

ViStatus GetAnIviDanceWithATwistByteArray(ViInt32 bufferSize, ViInt8 arrayOut[], ViInt32* actualSize)
{
  return niFake_GetAnIviDanceWithATwistByteArray(bufferSize, arrayOut, actualSize);
}

ViStatus GetAnIviDanceWithATwistString(ViSession vi, ViInt32 bufferSize, ViChar aString[], ViInt32* actualSize)
{
  return niFake_GetAnIviDanceWithATwistString(vi, bufferSize, aString, actualSize);
}

ViStatus GetAnIviDanceWithATwistStringStrlenBug(ViInt32 bufferSize, ViChar stringOut[], ViInt32* actualSize)
{
  return niFake_GetAnIviDanceWithATwistStringStrlenBug(bufferSize, stringOut, actualSize);
}

ViStatus GetArraySizeForCustomCode(ViSession vi, ViInt32* sizeOut)
{
  return niFake_GetArraySizeForCustomCode(vi, sizeOut);
}

ViStatus GetArrayUsingIviDance(ViSession vi, ViInt32 arraySize, ViReal64 arrayOut[])
{
  return niFake_GetArrayUsingIviDance(vi, arraySize, arrayOut);
}

ViStatus GetArrayViUInt8WithEnum(ViSession vi, ViInt32 arrayLen, ViUInt8 uInt8EnumArray[])
{
  return niFake_GetArrayViUInt8WithEnum(vi, arrayLen, uInt8EnumArray);
}

ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue)
{
  return niFake_GetAttributeViBoolean(vi, channelName, attributeId, attributeValue);
}

ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue)
{
  return niFake_GetAttributeViInt32(vi, channelName, attributeId, attributeValue);
}

ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue)
{
  return niFake_GetAttributeViInt64(vi, channelName, attributeId, attributeValue);
}

ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue)
{
  return niFake_GetAttributeViReal64(vi, channelName, attributeId, attributeValue);
}

ViStatus GetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue)
{
  return niFake_GetAttributeViSession(vi, channelName, attributeId, attributeValue);
}

ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[])
{
  return niFake_GetAttributeViString(vi, channelName, attributeId, bufferSize, attributeValue);
}

ViStatus GetBitfieldAsEnumArray(ViInt64* flags)
{
  return niFake_GetBitfieldAsEnumArray(flags);
}

ViStatus GetCalDateAndTime(ViSession vi, ViInt32 calType, ViInt32* month, ViInt32* day, ViInt32* year, ViInt32* hour, ViInt32* minute)
{
  return niFake_GetCalDateAndTime(vi, calType, month, day, year, hour, minute);
}

ViStatus GetCalInterval(ViSession vi, ViInt32* months)
{
  return niFake_GetCalInterval(vi, months);
}

ViStatus GetCustomType(ViSession vi, CustomStruct* cs)
{
  return niFake_GetCustomType(vi, cs);
}

ViStatus GetCustomTypeArray(ViSession vi, ViInt32 numberOfElements, CustomStruct cs[])
{
  return niFake_GetCustomTypeArray(vi, numberOfElements, cs);
}

ViStatus GetEnumValue(ViSession vi, ViInt32* aQuantity, ViInt16* aTurtle)
{
  return niFake_GetEnumValue(vi, aQuantity, aTurtle);
}

ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[])
{
  return niFake_GetError(vi, errorCode, bufferSize, description);
}

ViStatus GetViInt32Array(ViSession vi, ViInt32 arrayLen, ViInt32 int32Array[])
{
  return niFake_GetViInt32Array(vi, arrayLen, int32Array);
}

ViStatus GetViUInt32Array(ViSession vi, ViInt32 arrayLen, ViUInt32 uInt32Array[])
{
  return niFake_GetViUInt32Array(vi, arrayLen, uInt32Array);
}

ViStatus GetViUInt8(ViSession vi, ViUInt8* aUint8Number)
{
  return niFake_GetViUInt8(vi, aUint8Number);
}

ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[])
{
  return niFake_ImportAttributeConfigurationBuffer(vi, sizeInBytes, configuration);
}

ViStatus InitExtCal(ViRsrc resourceName, ViString calibrationPassword, ViSession* vi)
{
  return niFake_InitExtCal(resourceName, calibrationPassword, vi);
}

ViStatus InitWithOptions(ViString resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi)
{
  return niFake_InitWithOptions(resourceName, idQuery, resetDevice, optionString, vi);
}

ViStatus InitWithVarArgs(ViRsrc resourceName, ViSession* vi, ViConstString stringArg, ViInt16 turtle, ViConstString stringArg0, ViInt16 turtle0, ViConstString stringArg1, ViInt16 turtle1, ViConstString stringArg2, ViInt16 turtle2)
{
  return niFake_InitWithVarArgs(resourceName, vi, stringArg, turtle, stringArg0, turtle0, stringArg1, turtle1, stringArg2, turtle2);
}

ViStatus MethodUsingEnumWithGrpcNameValues(ViInt32 usingEnum)
{
  return niFake_MethodUsingEnumWithGrpcNameValues(usingEnum);
}

ViStatus MethodUsingWholeAndFractionalNumbers(ViInt32* wholeNumber, ViReal64* fractionalNumber)
{
  return niFake_MethodUsingWholeAndFractionalNumbers(wholeNumber, fractionalNumber);
}

ViStatus MethodUsingWholeMappedNumbers(ViReal64* wholeNumber)
{
  return niFake_MethodUsingWholeMappedNumbers(wholeNumber);
}

ViStatus MethodWithGetLastErrorParam()
{
  return niFake_MethodWithGetLastErrorParam();
}

ViStatus MethodWithGrpcFieldNumber(ViInt32 attributeValue)
{
  return niFake_MethodWithGrpcFieldNumber(attributeValue);
}

ViStatus MethodWithGrpcOnlyParam(ViInt32 simpleParam, ViInt32* grpcOnlyParam)
{
  return niFake_MethodWithGrpcOnlyParam(simpleParam, grpcOnlyParam);
}

ViStatus MethodWithProtoOnlyParameter()
{
  return niFake_MethodWithProtoOnlyParameter();
}

ViStatus MultipleArrayTypes(ViSession vi, ViInt32 outputArraySize, ViReal64 outputArray[], ViReal64 outputArrayOfFixedLength[3], ViInt32 inputArraySizes, ViReal64 inputArrayOfFloats[], ViInt16 inputArrayOfIntegers[])
{
  return niFake_MultipleArrayTypes(vi, outputArraySize, outputArray, outputArrayOfFixedLength, inputArraySizes, inputArrayOfFloats, inputArrayOfIntegers);
}

ViStatus MultipleArraysSameSize(ViSession vi, ViReal64 values1[], ViReal64 values2[], ViReal64 values3[], ViReal64 values4[], ViInt32 size)
{
  return niFake_MultipleArraysSameSize(vi, values1, values2, values3, values4, size);
}

ViStatus MultipleArraysSameSizeWithOptional(ViSession vi, ViReal64 values1[], ViReal64 values2[], ViReal64 values3[], ViReal64 values4[], CustomStruct values5[], ViInt32 size)
{
  return niFake_MultipleArraysSameSizeWithOptional(vi, values1, values2, values3, values4, values5, size);
}

ViStatus OneInputFunction(ViSession vi, ViInt32 aNumber)
{
  return niFake_OneInputFunction(vi, aNumber);
}

ViStatus ParametersAreMultipleTypes(ViSession vi, ViBoolean aBoolean, ViInt32 anInt32, ViInt64 anInt64, ViInt16 anIntEnum, ViReal64 aFloat, ViReal64 aFloatEnum, ViInt32 stringSize, ViConstString aString)
{
  return niFake_ParametersAreMultipleTypes(vi, aBoolean, anInt32, anInt64, anIntEnum, aFloat, aFloatEnum, stringSize, aString);
}

ViStatus PoorlyNamedSimpleFunction(ViSession vi)
{
  return niFake_PoorlyNamedSimpleFunction(vi);
}

ViStatus Read(ViSession vi, ViReal64 maximumTime, ViReal64* reading)
{
  return niFake_Read(vi, maximumTime, reading);
}

ViStatus ReadDataWithInOutIviTwist(ViInt32 data[], ViInt32* bufferSize)
{
  return niFake_ReadDataWithInOutIviTwist(data, bufferSize);
}

ViStatus ReadDataWithMultipleIviTwistParamSets(ViInt32 bufferSize, ViInt32 arrayOut[], ViInt32* actualSize, ViInt32 otherBufferSize, ViInt32 otherArrayOut[], ViInt32* otherActualSize)
{
  return niFake_ReadDataWithMultipleIviTwistParamSets(bufferSize, arrayOut, actualSize, otherBufferSize, otherArrayOut, otherActualSize);
}

ViStatus ReadFromChannel(ViSession vi, ViConstString channelName, ViInt32 maximumTime, ViReal64* reading)
{
  return niFake_ReadFromChannel(vi, channelName, maximumTime, reading);
}

ViStatus ReturnANumberAndAString(ViSession vi, ViInt16* aNumber, ViChar aString[256])
{
  return niFake_ReturnANumberAndAString(vi, aNumber, aString);
}

ViStatus ReturnDurationInSeconds(ViSession vi, ViReal64* timedelta)
{
  return niFake_ReturnDurationInSeconds(vi, timedelta);
}

ViStatus ReturnListOfDurationsInSeconds(ViSession vi, ViInt32 numberOfElements, ViReal64 timedeltas[])
{
  return niFake_ReturnListOfDurationsInSeconds(vi, numberOfElements, timedeltas);
}

ViStatus ReturnMultipleTypes(ViSession vi, ViBoolean* aBoolean, ViInt32* anInt32, ViInt64* anInt64, ViInt16* anIntEnum, ViReal64* aFloat, ViReal64* aFloatEnum, ViInt32 arraySize, ViReal64 anArray[], ViInt32 stringSize, ViChar aString[])
{
  return niFake_ReturnMultipleTypes(vi, aBoolean, anInt32, anInt64, anIntEnum, aFloat, aFloatEnum, arraySize, anArray, stringSize, aString);
}

ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue)
{
  return niFake_SetAttributeViBoolean(vi, channelName, attributeId, attributeValue);
}

ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue)
{
  return niFake_SetAttributeViInt32(vi, channelName, attributeId, attributeValue);
}

ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue)
{
  return niFake_SetAttributeViInt64(vi, channelName, attributeId, attributeValue);
}

ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue)
{
  return niFake_SetAttributeViReal64(vi, channelName, attributeId, attributeValue);
}

ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue)
{
  return niFake_SetAttributeViString(vi, channelName, attributeId, attributeValue);
}

ViStatus SetCustomType(ViSession vi, CustomStruct cs)
{
  return niFake_SetCustomType(vi, cs);
}

ViStatus SetCustomTypeArray(ViSession vi, ViInt32 numberOfElements, CustomStruct cs[])
{
  return niFake_SetCustomTypeArray(vi, numberOfElements, cs);
}

ViStatus StringValuedEnumInputFunctionWithDefaults(ViSession vi, ViConstString aMobileOSName)
{
  return niFake_StringValuedEnumInputFunctionWithDefaults(vi, aMobileOSName);
}

ViStatus TwoInputFunction(ViSession vi, ViReal64 aNumber, ViString aString)
{
  return niFake_TwoInputFunction(vi, aNumber, aString);
}

ViStatus Use64BitNumber(ViSession vi, ViInt64 input, ViInt64* output)
{
  return niFake_Use64BitNumber(vi, input, output);
}

ViStatus UseATwoDimensionParameter(ViSession vi, ViInt32 array[], ViInt32 arrayLengths[], ViInt32 arraySize)
{
  return niFake_UseATwoDimensionParameter(vi, array, arrayLengths, arraySize);
}

ViStatus ViInt16ArrayInputFunction(ViSession vi, ViInt32 numberOfElements, ViInt16 anArray[])
{
  return niFake_ViInt16ArrayInputFunction(vi, numberOfElements, anArray);
}

ViStatus ViUInt8ArrayInputFunction(ViSession vi, ViInt32 numberOfElements, ViUInt8 anArray[])
{
  return niFake_ViUInt8ArrayInputFunction(vi, numberOfElements, anArray);
}

ViStatus ViUInt8ArrayOutputFunction(ViSession vi, ViInt32 numberOfElements, ViUInt8 anArray[])
{
  return niFake_ViUInt8ArrayOutputFunction(vi, numberOfElements, anArray);
}

ViStatus WriteWaveform(ViSession vi, ViInt32 numberOfSamples, ViReal64 waveform[])
{
  return niFake_WriteWaveform(vi, numberOfSamples, waveform);
}

}  // namespace nifake_grpc
