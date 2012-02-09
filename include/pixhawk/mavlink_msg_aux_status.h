// MESSAGE AUX_STATUS PACKING

#define MAVLINK_MSG_ID_AUX_STATUS 142

typedef struct __mavlink_aux_status_t
{
 uint16_t load; ///< Maximum usage in percent of the mainloop time, (0%: 0, 100%: 1000) should be always below 1000
 uint16_t i2c0_err_count; ///< Number of I2C errors since startup
 uint16_t i2c1_err_count; ///< Number of I2C errors since startup
 uint16_t spi0_err_count; ///< Number of I2C errors since startup
 uint16_t spi1_err_count; ///< Number of I2C errors since startup
 uint16_t uart_total_err_count; ///< Number of I2C errors since startup
} mavlink_aux_status_t;

#define MAVLINK_MSG_ID_AUX_STATUS_LEN 12
#define MAVLINK_MSG_ID_142_LEN 12



#define MAVLINK_MESSAGE_INFO_AUX_STATUS { \
	"AUX_STATUS", \
	6, \
	{  { "load", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_aux_status_t, load) }, \
         { "i2c0_err_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_aux_status_t, i2c0_err_count) }, \
         { "i2c1_err_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_aux_status_t, i2c1_err_count) }, \
         { "spi0_err_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_aux_status_t, spi0_err_count) }, \
         { "spi1_err_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_aux_status_t, spi1_err_count) }, \
         { "uart_total_err_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_aux_status_t, uart_total_err_count) }, \
         } \
}


/**
 * @brief Pack a aux_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param load Maximum usage in percent of the mainloop time, (0%: 0, 100%: 1000) should be always below 1000
 * @param i2c0_err_count Number of I2C errors since startup
 * @param i2c1_err_count Number of I2C errors since startup
 * @param spi0_err_count Number of I2C errors since startup
 * @param spi1_err_count Number of I2C errors since startup
 * @param uart_total_err_count Number of I2C errors since startup
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aux_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t load, uint16_t i2c0_err_count, uint16_t i2c1_err_count, uint16_t spi0_err_count, uint16_t spi1_err_count, uint16_t uart_total_err_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[12];
	_mav_put_uint16_t(buf, 0, load);
	_mav_put_uint16_t(buf, 2, i2c0_err_count);
	_mav_put_uint16_t(buf, 4, i2c1_err_count);
	_mav_put_uint16_t(buf, 6, spi0_err_count);
	_mav_put_uint16_t(buf, 8, spi1_err_count);
	_mav_put_uint16_t(buf, 10, uart_total_err_count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 12);
#else
	mavlink_aux_status_t packet;
	packet.load = load;
	packet.i2c0_err_count = i2c0_err_count;
	packet.i2c1_err_count = i2c1_err_count;
	packet.spi0_err_count = spi0_err_count;
	packet.spi1_err_count = spi1_err_count;
	packet.uart_total_err_count = uart_total_err_count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 12);
#endif

	msg->msgid = MAVLINK_MSG_ID_AUX_STATUS;
	return mavlink_finalize_message(msg, system_id, component_id, 12);
}

/**
 * @brief Pack a aux_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param load Maximum usage in percent of the mainloop time, (0%: 0, 100%: 1000) should be always below 1000
 * @param i2c0_err_count Number of I2C errors since startup
 * @param i2c1_err_count Number of I2C errors since startup
 * @param spi0_err_count Number of I2C errors since startup
 * @param spi1_err_count Number of I2C errors since startup
 * @param uart_total_err_count Number of I2C errors since startup
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aux_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t load,uint16_t i2c0_err_count,uint16_t i2c1_err_count,uint16_t spi0_err_count,uint16_t spi1_err_count,uint16_t uart_total_err_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[12];
	_mav_put_uint16_t(buf, 0, load);
	_mav_put_uint16_t(buf, 2, i2c0_err_count);
	_mav_put_uint16_t(buf, 4, i2c1_err_count);
	_mav_put_uint16_t(buf, 6, spi0_err_count);
	_mav_put_uint16_t(buf, 8, spi1_err_count);
	_mav_put_uint16_t(buf, 10, uart_total_err_count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 12);
#else
	mavlink_aux_status_t packet;
	packet.load = load;
	packet.i2c0_err_count = i2c0_err_count;
	packet.i2c1_err_count = i2c1_err_count;
	packet.spi0_err_count = spi0_err_count;
	packet.spi1_err_count = spi1_err_count;
	packet.uart_total_err_count = uart_total_err_count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 12);
#endif

	msg->msgid = MAVLINK_MSG_ID_AUX_STATUS;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 12);
}

/**
 * @brief Encode a aux_status struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aux_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aux_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aux_status_t* aux_status)
{
	return mavlink_msg_aux_status_pack(system_id, component_id, msg, aux_status->load, aux_status->i2c0_err_count, aux_status->i2c1_err_count, aux_status->spi0_err_count, aux_status->spi1_err_count, aux_status->uart_total_err_count);
}

/**
 * @brief Send a aux_status message
 * @param chan MAVLink channel to send the message
 *
 * @param load Maximum usage in percent of the mainloop time, (0%: 0, 100%: 1000) should be always below 1000
 * @param i2c0_err_count Number of I2C errors since startup
 * @param i2c1_err_count Number of I2C errors since startup
 * @param spi0_err_count Number of I2C errors since startup
 * @param spi1_err_count Number of I2C errors since startup
 * @param uart_total_err_count Number of I2C errors since startup
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aux_status_send(mavlink_channel_t chan, uint16_t load, uint16_t i2c0_err_count, uint16_t i2c1_err_count, uint16_t spi0_err_count, uint16_t spi1_err_count, uint16_t uart_total_err_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[12];
	_mav_put_uint16_t(buf, 0, load);
	_mav_put_uint16_t(buf, 2, i2c0_err_count);
	_mav_put_uint16_t(buf, 4, i2c1_err_count);
	_mav_put_uint16_t(buf, 6, spi0_err_count);
	_mav_put_uint16_t(buf, 8, spi1_err_count);
	_mav_put_uint16_t(buf, 10, uart_total_err_count);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_STATUS, buf, 12);
#else
	mavlink_aux_status_t packet;
	packet.load = load;
	packet.i2c0_err_count = i2c0_err_count;
	packet.i2c1_err_count = i2c1_err_count;
	packet.spi0_err_count = spi0_err_count;
	packet.spi1_err_count = spi1_err_count;
	packet.uart_total_err_count = uart_total_err_count;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_STATUS, (const char *)&packet, 12);
#endif
}

#endif

// MESSAGE AUX_STATUS UNPACKING


/**
 * @brief Get field load from aux_status message
 *
 * @return Maximum usage in percent of the mainloop time, (0%: 0, 100%: 1000) should be always below 1000
 */
static inline uint16_t mavlink_msg_aux_status_get_load(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field i2c0_err_count from aux_status message
 *
 * @return Number of I2C errors since startup
 */
static inline uint16_t mavlink_msg_aux_status_get_i2c0_err_count(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field i2c1_err_count from aux_status message
 *
 * @return Number of I2C errors since startup
 */
static inline uint16_t mavlink_msg_aux_status_get_i2c1_err_count(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field spi0_err_count from aux_status message
 *
 * @return Number of I2C errors since startup
 */
static inline uint16_t mavlink_msg_aux_status_get_spi0_err_count(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field spi1_err_count from aux_status message
 *
 * @return Number of I2C errors since startup
 */
static inline uint16_t mavlink_msg_aux_status_get_spi1_err_count(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field uart_total_err_count from aux_status message
 *
 * @return Number of I2C errors since startup
 */
static inline uint16_t mavlink_msg_aux_status_get_uart_total_err_count(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Decode a aux_status message into a struct
 *
 * @param msg The message to decode
 * @param aux_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_aux_status_decode(const mavlink_message_t* msg, mavlink_aux_status_t* aux_status)
{
#if MAVLINK_NEED_BYTE_SWAP
	aux_status->load = mavlink_msg_aux_status_get_load(msg);
	aux_status->i2c0_err_count = mavlink_msg_aux_status_get_i2c0_err_count(msg);
	aux_status->i2c1_err_count = mavlink_msg_aux_status_get_i2c1_err_count(msg);
	aux_status->spi0_err_count = mavlink_msg_aux_status_get_spi0_err_count(msg);
	aux_status->spi1_err_count = mavlink_msg_aux_status_get_spi1_err_count(msg);
	aux_status->uart_total_err_count = mavlink_msg_aux_status_get_uart_total_err_count(msg);
#else
	memcpy(aux_status, _MAV_PAYLOAD(msg), 12);
#endif
}
