/*******************************************************************************
 * Copyright (c) 2017, 2023 IBM Corp.
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * and Eclipse Distribution License v1.0 which accompany this distribution.
 *
 * The Eclipse Public License is available at
 *    http://www.eclipse.org/legal/epl-v10.html
 * and the Eclipse Distribution License is available at
 *   http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * Contributors:
 *    Ian Craggs - initial API and implementation and/or initial documentation
 *******************************************************************************/

enum ReasonCodes {
  MQTTV5_SUCCESS = 0,
  MQTTV5_NORMAL_DISCONNECTION = 0,
  MQTTV5_GRANTED_QOS_0 = 0,
  MQTTV5_GRANTED_QOS_1 = 1,
  MQTTV5_GRANTED_QOS_2 = 2,
  MQTTV5_DISCONNECT_WITH_WILL_MESSAGE = 4,
  MQTTV5_NO_MATCHING_SUBSCRIBERS = 16,
  MQTTV5_NO_SUBSCRIPTION_FOUND = 17,
  MQTTV5_CONTINUE_AUTHENTICATION = 24,
  MQTTV5_RE_AUTHENTICATE = 25,
  MQTTV5_UNSPECIFIED_ERROR = 128,
  MQTTV5_MALFORMED_PACKET = 129,
  MQTTV5_PROTOCOL_ERROR = 130,
  MQTTV5_IMPLEMENTATION_SPECIFIC_ERROR = 131,
  MQTTV5_UNSUPPORTED_PROTOCOL_VERSION = 132,
  MQTTV5_CLIENT_IDENTIFIER_NOT_VALID = 133,
  MQTTV5_BAD_USER_NAME_OR_PASSWORD = 134,
  MQTTV5_NOT_AUTHORIZED = 135,
  MQTTV5_SERVER_UNAVAILABLE = 136,
  MQTTV5_SERVER_BUSY = 137,
  MQTTV5_BANNED = 138,
  MQTTV5_SERVER_SHUTTING_DOWN = 139,
  MQTTV5_BAD_AUTHENTICATION_METHOD = 140,
  MQTTV5_KEEP_ALIVE_TIMEOUT = 141,
  MQTTV5_SESSION_TAKEN_OVER = 142,
  MQTTV5_TOPIC_FILTER_INVALID = 143,
  MQTTV5_TOPIC_NAME_INVALID = 144,
  MQTTV5_PACKET_IDENTIFIER_IN_USE = 145,
  MQTTV5_PACKET_IDENTIFIER_NOT_FOUND = 146,
  MQTTV5_RECEIVE_MAXIMUM_EXCEEDED = 147,
  MQTTV5_TOPIC_ALIAS_INVALID = 148,
  MQTTV5_PACKET_TOO_LARGE = 149,
  MQTTV5_MESSAGE_RATE_TOO_HIGH = 150,
  MQTTV5_QUOTA_EXCEEDED = 151,
  MQTTV5_ADMINISTRATIVE_ACTION = 152,
  MQTTV5_PAYLOAD_FORMAT_INVALID = 153,
  MQTTV5_RETAIN_NOT_SUPPORTED = 154,
  MQTTV5_QOS_NOT_SUPPORTED = 155,
  MQTTV5_USE_ANOTHER_SERVER = 156,
  MQTTV5_SERVER_MOVED = 157,
  MQTTV5_SHARED_SUBSCRIPTION_NOT_SUPPORTED = 158,
  MQTTV5_CONNECTION_RATE_EXCEEDED = 159,
  MQTTV5_MAXIMUM_CONNECT_TIME = 160,
  MQTTV5_SUBSCRIPTION_IDENTIFIERS_NOT_SUPPORTED = 161,
  MQTTV5_WILDCARD_SUBSCRIPTION_NOT_SUPPORTED = 162
};
