//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Compilation test for the NI-XNET Metadata
//---------------------------------------------------------------------
#include "nixnet_library.h"

namespace nixnet_grpc {

nxStatus_t Blink(nxSessionRef_t interfaceRef, u32 modifier)
{
  return nxBlink(interfaceRef, modifier);
}

nxStatus_t Clear(nxSessionRef_t session)
{
  return nxClear(session);
}

nxStatus_t ConnectTerminals(nxSessionRef_t session, const char source[], const char destination[])
{
  return nxConnectTerminals(session, source, destination);
}

nxStatus_t ConvertByteArrayToFramesSinglePoint(nxSessionRef_t session, u8 valueBuffer[], u32 sizeOfValueBuffer, u8 buffer[], u32 sizeOfBuffer, u32* numberOfBytesReturned)
{
  return nxConvertByteArrayToFramesSinglePoint(session, valueBuffer, sizeOfValueBuffer, buffer, sizeOfBuffer, numberOfBytesReturned);
}

nxStatus_t ConvertFramesToByteArraySinglePoint(nxSessionRef_t session, u8* frameBuffer, u32 numberOfBytesForFrames, u8 valueBuffer[], u32 sizeOfValueBuffer)
{
  return nxConvertFramesToByteArraySinglePoint(session, frameBuffer, numberOfBytesForFrames, valueBuffer, sizeOfValueBuffer);
}

nxStatus_t ConvertFramesToSignalsSinglePoint(nxSessionRef_t session, u8* frameBuffer, u32 numberOfBytesForFrames, f64 valueBuffer[], u32 sizeOfValueBuffer, nxTimestamp100ns_t timestampBuffer[], u32 sizeOfTimestampBuffer)
{
  return nxConvertFramesToSignalsSinglePoint(session, frameBuffer, numberOfBytesForFrames, valueBuffer, sizeOfValueBuffer, timestampBuffer, sizeOfTimestampBuffer);
}

nxStatus_t ConvertSignalsToFramesSinglePoint(nxSessionRef_t session, f64 valueBuffer[], u32 sizeOfValueBuffer, u8 buffer[], u32 sizeOfBuffer, u32* numberOfBytesReturned)
{
  return nxConvertSignalsToFramesSinglePoint(session, valueBuffer, sizeOfValueBuffer, buffer, sizeOfBuffer, numberOfBytesReturned);
}

nxStatus_t ConvertTimestamp100nsTo1ns(nxTimestamp100ns_t from_timestamp_100ns, nxTimestamp1ns_t* to_timestamp_1ns)
{
  return nxConvertTimestamp100nsTo1ns(from_timestamp_100ns, to_timestamp_1ns);
}

nxStatus_t ConvertTimestamp1nsTo100ns(nxTimestamp1ns_t from_timestamp_1ns, nxTimestamp100ns_t* to_timestamp_100ns)
{
  return nxConvertTimestamp1nsTo100ns(from_timestamp_1ns, to_timestamp_100ns);
}

nxStatus_t CreateSession(const char databaseName[], const char clusterName[], const char list[], const char interfaceParameter[], u32 mode, nxSessionRef_t* session)
{
  return nxCreateSession(databaseName, clusterName, list, interfaceParameter, mode, session);
}

nxStatus_t CreateSessionByRef(u32 numberOfDatabaseRef, nxDatabaseRef_t arrayOfDatabaseRef[], const char interfaceParameter[], u32 mode, nxSessionRef_t* session)
{
  return nxCreateSessionByRef(numberOfDatabaseRef, arrayOfDatabaseRef, interfaceParameter, mode, session);
}

nxStatus_t DbAddAlias(const char databaseAlias[], const char databaseFilepath[], u32 defaultBaudRate)
{
  return nxdbAddAlias(databaseAlias, databaseFilepath, defaultBaudRate);
}

nxStatus_t DbAddAlias64(const char databaseAlias[], const char databaseFilepath[], u64 defaultBaudRate)
{
  return nxdbAddAlias64(databaseAlias, databaseFilepath, defaultBaudRate);
}

nxStatus_t DbCloseDatabase(nxDatabaseRef_t database, u32 closeAllRefs)
{
  return nxdbCloseDatabase(database, closeAllRefs);
}

nxStatus_t DbCreateObject(nxDatabaseRef_t parentObject, u32 objectClass, const char objectName[], nxDatabaseRef_t* dbObject)
{
  return nxdbCreateObject(parentObject, objectClass, objectName, dbObject);
}

nxStatus_t DbDeleteObject(nxDatabaseRef_t dbObject)
{
  return nxdbDeleteObject(dbObject);
}

nxStatus_t DbDeploy(const char ipAddress[], const char databaseAlias[], u32 waitForComplete, u32* percentComplete)
{
  return nxdbDeploy(ipAddress, databaseAlias, waitForComplete, percentComplete);
}

nxStatus_t DbFindObject(nxDatabaseRef_t parentObject, u32 objectClass, const char objectName[], nxDatabaseRef_t* dbObject)
{
  return nxdbFindObject(parentObject, objectClass, objectName, dbObject);
}

nxStatus_t DbGetDBCAttribute(nxDatabaseRef_t dbObject, u32 mode, const char attributeName[], u32 attributeTextSize, char attributeText[], u32* isDefault)
{
  return nxdbGetDBCAttribute(dbObject, mode, attributeName, attributeTextSize, attributeText, isDefault);
}

nxStatus_t DbGetDBCAttributeSize(nxDatabaseRef_t dbObject, u32 mode, const char attributeName[], u32* attributeTextSize)
{
  return nxdbGetDBCAttributeSize(dbObject, mode, attributeName, attributeTextSize);
}

nxStatus_t DbGetDatabaseList(const char ipAddress[], u32 sizeofAliasBuffer, char aliasBuffer[], u32 sizeofFilepathBuffer, char filepathBuffer[], u32* numberOfDatabases)
{
  return nxdbGetDatabaseList(ipAddress, sizeofAliasBuffer, aliasBuffer, sizeofFilepathBuffer, filepathBuffer, numberOfDatabases);
}

nxStatus_t DbGetDatabaseListSizes(const char ipAddress[], u32* sizeofAliasBuffer, u32* sizeofFilepathBuffer)
{
  return nxdbGetDatabaseListSizes(ipAddress, sizeofAliasBuffer, sizeofFilepathBuffer);
}

nxStatus_t DbGetProperty(nxDatabaseRef_t dbObject, u32 propertyID, u32 propertySize, void* propertyValue)
{
  return nxdbGetProperty(dbObject, propertyID, propertySize, propertyValue);
}

nxStatus_t DbGetPropertySize(nxDatabaseRef_t dbObject, u32 propertyID, u32* propertySize)
{
  return nxdbGetPropertySize(dbObject, propertyID, propertySize);
}

nxStatus_t DbMerge(nxDatabaseRef_t targetCluster, nxDatabaseRef_t sourceObj, u32 copyMode, char prefix[], u32 waitForComplete, u32* percentComplete)
{
  return nxdbMerge(targetCluster, sourceObj, copyMode, prefix, waitForComplete, percentComplete);
}

nxStatus_t DbOpenDatabase(const char databaseName[], nxDatabaseRef_t* database)
{
  return nxdbOpenDatabase(databaseName, database);
}

nxStatus_t DbRemoveAlias(const char databaseAlias[])
{
  return nxdbRemoveAlias(databaseAlias);
}

nxStatus_t DbSaveDatabase(nxDatabaseRef_t database, const char dbFilepath[])
{
  return nxdbSaveDatabase(database, dbFilepath);
}

nxStatus_t DbSetProperty(nxDatabaseRef_t dbObject, u32 propertyID, u32 propertySize, void* propertyValue)
{
  return nxdbSetProperty(dbObject, propertyID, propertySize, propertyValue);
}

nxStatus_t DbUndeploy(const char ipAddress[], const char databaseAlias[])
{
  return nxdbUndeploy(ipAddress, databaseAlias);
}

nxStatus_t DisconnectTerminals(nxSessionRef_t session, const char source[], const char destination[])
{
  return nxDisconnectTerminals(session, source, destination);
}

nxStatus_t Flush(nxSessionRef_t session)
{
  return nxFlush(session);
}

nxStatus_t FutureTimeTrigger(nxSessionRef_t session, nxTimestamp1ns_t when, u32 timescale)
{
  return nxFutureTimeTrigger(session, when, timescale);
}

nxStatus_t GetProperty(nxSessionRef_t session, u32 propertyID, u32 propertySize, void* propertyValue)
{
  return nxGetProperty(session, propertyID, propertySize, propertyValue);
}

nxStatus_t GetPropertySize(nxSessionRef_t session, u32 propertyID, u32* propertySize)
{
  return nxGetPropertySize(session, propertyID, propertySize);
}

nxStatus_t GetSubProperty(nxSessionRef_t session, u32 activeIndex, u32 propertyID, u32 propertySize, void* propertyValue)
{
  return nxGetSubProperty(session, activeIndex, propertyID, propertySize, propertyValue);
}

nxStatus_t GetSubPropertySize(nxSessionRef_t session, u32 activeIndex, u32 propertyID, u32* propertySize)
{
  return nxGetSubPropertySize(session, activeIndex, propertyID, propertySize);
}

nxStatus_t ReadFrame(nxSessionRef_t session, u8 buffer[], u32 sizeOfBuffer, f64 timeout, u32* numberOfBytesReturned)
{
  return nxReadFrame(session, buffer, sizeOfBuffer, timeout, numberOfBytesReturned);
}

nxStatus_t ReadSignalSinglePoint(nxSessionRef_t session, f64 valueBuffer[], u32 sizeOfValueBuffer, nxTimestamp100ns_t timestampBuffer[], u32 sizeOfTimestampBuffer)
{
  return nxReadSignalSinglePoint(session, valueBuffer, sizeOfValueBuffer, timestampBuffer, sizeOfTimestampBuffer);
}

nxStatus_t ReadSignalWaveform(nxSessionRef_t session, f64 timeout, nxTimestamp100ns_t* startTime, f64* deltaTime, f64 valueBuffer[], u32 sizeOfValueBuffer, u32* numberOfValuesReturned)
{
  return nxReadSignalWaveform(session, timeout, startTime, deltaTime, valueBuffer, sizeOfValueBuffer, numberOfValuesReturned);
}

nxStatus_t ReadSignalXY(nxSessionRef_t session, nxTimestamp100ns_t* timeLimit, f64 valueBuffer[], u32 sizeOfValueBuffer, nxTimestamp100ns_t timestampBuffer[], u32 sizeOfTimestampBuffer, u32 numPairsBuffer[], u32 sizeOfNumPairsBuffer)
{
  return nxReadSignalXY(session, timeLimit, valueBuffer, sizeOfValueBuffer, timestampBuffer, sizeOfTimestampBuffer, numPairsBuffer, sizeOfNumPairsBuffer);
}

nxStatus_t ReadState(nxSessionRef_t session, u32 stateID, u32 stateSize, void* stateValue, nxStatus_t* fault)
{
  return nxReadState(session, stateID, stateSize, stateValue, fault);
}

nxStatus_t ReadStateTimeTrigger(nxSessionRef_t session, f64 timeout, u32 stateSize, _nxTimeLocalNetwork_t* stateValue)
{
  return nxReadStateTimeTrigger(session, timeout, stateSize, stateValue);
}

nxStatus_t SetProperty(nxSessionRef_t session, u32 propertyID, u32 propertySize, void* propertyValue)
{
  return nxSetProperty(session, propertyID, propertySize, propertyValue);
}

nxStatus_t SetSubProperty(nxSessionRef_t session, u32 activeIndex, u32 propertyID, u32 propertySize, void* propertyValue)
{
  return nxSetSubProperty(session, activeIndex, propertyID, propertySize, propertyValue);
}

nxStatus_t Start(nxSessionRef_t session, u32 scope)
{
  return nxStart(session, scope);
}

void StatusToString(nxStatus_t statusID, u32 sizeofString, char statusDescription[2048])
{
  return nxStatusToString(statusID, sizeofString, statusDescription);
}

nxStatus_t Stop(nxSessionRef_t session, u32 scope)
{
  return nxStop(session, scope);
}

nxStatus_t SystemClose(nxSessionRef_t system)
{
  return nxSystemClose(system);
}

nxStatus_t SystemOpen(nxSessionRef_t* system)
{
  return nxSystemOpen(system);
}

nxStatus_t Wait(nxSessionRef_t session, u32 condition, u32 paramIn, f64 timeout, u32* paramOut)
{
  return nxWait(session, condition, paramIn, timeout, paramOut);
}

nxStatus_t WriteFrame(nxSessionRef_t session, u8* buffer, u32 numberOfBytesForFrames, f64 timeout)
{
  return nxWriteFrame(session, buffer, numberOfBytesForFrames, timeout);
}

nxStatus_t WriteSignalSinglePoint(nxSessionRef_t session, f64 valueBuffer[], u32 sizeOfValueBuffer)
{
  return nxWriteSignalSinglePoint(session, valueBuffer, sizeOfValueBuffer);
}

nxStatus_t WriteSignalWaveform(nxSessionRef_t session, f64 timeout, f64 valueBuffer[], u32 sizeOfValueBuffer)
{
  return nxWriteSignalWaveform(session, timeout, valueBuffer, sizeOfValueBuffer);
}

nxStatus_t WriteSignalXY(nxSessionRef_t session, f64 timeout, f64 valueBuffer[], u32 sizeOfValueBuffer, nxTimestamp100ns_t timestampBuffer[], u32 sizeOfTimestampBuffer, u32 numPairsBuffer[], u32 sizeOfNumPairsBuffer)
{
  return nxWriteSignalXY(session, timeout, valueBuffer, sizeOfValueBuffer, timestampBuffer, sizeOfTimestampBuffer, numPairsBuffer, sizeOfNumPairsBuffer);
}

nxStatus_t WriteState(nxSessionRef_t session, u32 stateID, u32 stateSize, void* stateValue)
{
  return nxWriteState(session, stateID, stateSize, stateValue);
}

}  // namespace nixnet_grpc
