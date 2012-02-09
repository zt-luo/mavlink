// MESSAGE VISUAL_ODOMETRY PACKING

#define MAVLINK_MSG_ID_VISUAL_ODOMETRY 180

typedef struct __mavlink_visual_odometry_t
{
 uint64_t frame1_time_us; ///< Time at which frame 1 was captured (in microseconds since unix epoch)
 uint64_t frame2_time_us; ///< Time at which frame 2 was captured (in microseconds since unix epoch)
 float x; ///< Relative X position
 float y; ///< Relative Y position
 float z; ///< Relative Z position
 float roll; ///< Relative roll angle in rad
 float pitch; ///< Relative pitch angle in rad
 float yaw; ///< Relative yaw angle in rad
} mavlink_visual_odometry_t;

#define MAVLINK_MSG_ID_VISUAL_ODOMETRY_LEN 40
#define MAVLINK_MSG_ID_180_LEN 40



#define MAVLINK_MESSAGE_INFO_VISUAL_ODOMETRY { \
	"VISUAL_ODOMETRY", \
	8, \
	{  { "frame1_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_visual_odometry_t, frame1_time_us) }, \
         { "frame2_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_visual_odometry_t, frame2_time_us) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_visual_odometry_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_visual_odometry_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_visual_odometry_t, z) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_visual_odometry_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_visual_odometry_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_visual_odometry_t, yaw) }, \
         } \
}


/**
 * @brief Pack a visual_odometry message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param frame1_time_us Time at which frame 1 was captured (in microseconds since unix epoch)
 * @param frame2_time_us Time at which frame 2 was captured (in microseconds since unix epoch)
 * @param x Relative X position
 * @param y Relative Y position
 * @param z Relative Z position
 * @param roll Relative roll angle in rad
 * @param pitch Relative pitch angle in rad
 * @param yaw Relative yaw angle in rad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_visual_odometry_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t frame1_time_us, uint64_t frame2_time_us, float x, float y, float z, float roll, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[40];
	_mav_put_uint64_t(buf, 0, frame1_time_us);
	_mav_put_uint64_t(buf, 8, frame2_time_us);
	_mav_put_float(buf, 16, x);
	_mav_put_float(buf, 20, y);
	_mav_put_float(buf, 24, z);
	_mav_put_float(buf, 28, roll);
	_mav_put_float(buf, 32, pitch);
	_mav_put_float(buf, 36, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 40);
#else
	mavlink_visual_odometry_t packet;
	packet.frame1_time_us = frame1_time_us;
	packet.frame2_time_us = frame2_time_us;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.roll = roll;
	packet.pitch = pitch;
	packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 40);
#endif

	msg->msgid = MAVLINK_MSG_ID_VISUAL_ODOMETRY;
	return mavlink_finalize_message(msg, system_id, component_id, 40);
}

/**
 * @brief Pack a visual_odometry message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param frame1_time_us Time at which frame 1 was captured (in microseconds since unix epoch)
 * @param frame2_time_us Time at which frame 2 was captured (in microseconds since unix epoch)
 * @param x Relative X position
 * @param y Relative Y position
 * @param z Relative Z position
 * @param roll Relative roll angle in rad
 * @param pitch Relative pitch angle in rad
 * @param yaw Relative yaw angle in rad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_visual_odometry_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t frame1_time_us,uint64_t frame2_time_us,float x,float y,float z,float roll,float pitch,float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[40];
	_mav_put_uint64_t(buf, 0, frame1_time_us);
	_mav_put_uint64_t(buf, 8, frame2_time_us);
	_mav_put_float(buf, 16, x);
	_mav_put_float(buf, 20, y);
	_mav_put_float(buf, 24, z);
	_mav_put_float(buf, 28, roll);
	_mav_put_float(buf, 32, pitch);
	_mav_put_float(buf, 36, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 40);
#else
	mavlink_visual_odometry_t packet;
	packet.frame1_time_us = frame1_time_us;
	packet.frame2_time_us = frame2_time_us;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.roll = roll;
	packet.pitch = pitch;
	packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 40);
#endif

	msg->msgid = MAVLINK_MSG_ID_VISUAL_ODOMETRY;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 40);
}

/**
 * @brief Encode a visual_odometry struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param visual_odometry C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_visual_odometry_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_visual_odometry_t* visual_odometry)
{
	return mavlink_msg_visual_odometry_pack(system_id, component_id, msg, visual_odometry->frame1_time_us, visual_odometry->frame2_time_us, visual_odometry->x, visual_odometry->y, visual_odometry->z, visual_odometry->roll, visual_odometry->pitch, visual_odometry->yaw);
}

/**
 * @brief Send a visual_odometry message
 * @param chan MAVLink channel to send the message
 *
 * @param frame1_time_us Time at which frame 1 was captured (in microseconds since unix epoch)
 * @param frame2_time_us Time at which frame 2 was captured (in microseconds since unix epoch)
 * @param x Relative X position
 * @param y Relative Y position
 * @param z Relative Z position
 * @param roll Relative roll angle in rad
 * @param pitch Relative pitch angle in rad
 * @param yaw Relative yaw angle in rad
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_visual_odometry_send(mavlink_channel_t chan, uint64_t frame1_time_us, uint64_t frame2_time_us, float x, float y, float z, float roll, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[40];
	_mav_put_uint64_t(buf, 0, frame1_time_us);
	_mav_put_uint64_t(buf, 8, frame2_time_us);
	_mav_put_float(buf, 16, x);
	_mav_put_float(buf, 20, y);
	_mav_put_float(buf, 24, z);
	_mav_put_float(buf, 28, roll);
	_mav_put_float(buf, 32, pitch);
	_mav_put_float(buf, 36, yaw);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISUAL_ODOMETRY, buf, 40);
#else
	mavlink_visual_odometry_t packet;
	packet.frame1_time_us = frame1_time_us;
	packet.frame2_time_us = frame2_time_us;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.roll = roll;
	packet.pitch = pitch;
	packet.yaw = yaw;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISUAL_ODOMETRY, (const char *)&packet, 40);
#endif
}

#endif

// MESSAGE VISUAL_ODOMETRY UNPACKING


/**
 * @brief Get field frame1_time_us from visual_odometry message
 *
 * @return Time at which frame 1 was captured (in microseconds since unix epoch)
 */
static inline uint64_t mavlink_msg_visual_odometry_get_frame1_time_us(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field frame2_time_us from visual_odometry message
 *
 * @return Time at which frame 2 was captured (in microseconds since unix epoch)
 */
static inline uint64_t mavlink_msg_visual_odometry_get_frame2_time_us(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field x from visual_odometry message
 *
 * @return Relative X position
 */
static inline float mavlink_msg_visual_odometry_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field y from visual_odometry message
 *
 * @return Relative Y position
 */
static inline float mavlink_msg_visual_odometry_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field z from visual_odometry message
 *
 * @return Relative Z position
 */
static inline float mavlink_msg_visual_odometry_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field roll from visual_odometry message
 *
 * @return Relative roll angle in rad
 */
static inline float mavlink_msg_visual_odometry_get_roll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field pitch from visual_odometry message
 *
 * @return Relative pitch angle in rad
 */
static inline float mavlink_msg_visual_odometry_get_pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field yaw from visual_odometry message
 *
 * @return Relative yaw angle in rad
 */
static inline float mavlink_msg_visual_odometry_get_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Decode a visual_odometry message into a struct
 *
 * @param msg The message to decode
 * @param visual_odometry C-struct to decode the message contents into
 */
static inline void mavlink_msg_visual_odometry_decode(const mavlink_message_t* msg, mavlink_visual_odometry_t* visual_odometry)
{
#if MAVLINK_NEED_BYTE_SWAP
	visual_odometry->frame1_time_us = mavlink_msg_visual_odometry_get_frame1_time_us(msg);
	visual_odometry->frame2_time_us = mavlink_msg_visual_odometry_get_frame2_time_us(msg);
	visual_odometry->x = mavlink_msg_visual_odometry_get_x(msg);
	visual_odometry->y = mavlink_msg_visual_odometry_get_y(msg);
	visual_odometry->z = mavlink_msg_visual_odometry_get_z(msg);
	visual_odometry->roll = mavlink_msg_visual_odometry_get_roll(msg);
	visual_odometry->pitch = mavlink_msg_visual_odometry_get_pitch(msg);
	visual_odometry->yaw = mavlink_msg_visual_odometry_get_yaw(msg);
#else
	memcpy(visual_odometry, _MAV_PAYLOAD(msg), 40);
#endif
}
