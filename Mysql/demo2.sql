/*
Navicat MySQL Data Transfer

Source Server         : demo
Source Server Version : 50729
Source Host           : localhost:3306
Source Database       : demo2

Target Server Type    : MYSQL
Target Server Version : 50729
File Encoding         : 65001

Date: 2020-06-10 16:20:23
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for daka
-- ----------------------------
DROP TABLE IF EXISTS `daka`;
CREATE TABLE `daka` (
  `userid` varchar(20) COLLATE utf8_unicode_ci DEFAULT NULL,
  `dakatianshu` varchar(20) COLLATE utf8_unicode_ci DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

-- ----------------------------
-- Records of daka
-- ----------------------------
INSERT INTO `daka` VALUES ('1', '4');
INSERT INTO `daka` VALUES ('2', '5');
INSERT INTO `daka` VALUES ('3', '0');

-- ----------------------------
-- Table structure for myword
-- ----------------------------
DROP TABLE IF EXISTS `myword`;
CREATE TABLE `myword` (
  `num` char(4) DEFAULT NULL,
  `mywords` char(20) DEFAULT NULL,
  `chi` varchar(20) DEFAULT NULL,
  `familiar` varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of myword
-- ----------------------------
INSERT INTO `myword` VALUES ('0', 'six', '六', '熟悉');
INSERT INTO `myword` VALUES ('1', 'zero', '零', '陌生');
INSERT INTO `myword` VALUES ('2', 'one', '一', '熟悉');
INSERT INTO `myword` VALUES ('3', 'two', '二', '陌生');
INSERT INTO `myword` VALUES ('4', 'three', '三', '熟悉');
INSERT INTO `myword` VALUES ('5', 'four', '四', '陌生');
INSERT INTO `myword` VALUES ('6', 'five', '五', '熟悉');

-- ----------------------------
-- Table structure for userinf
-- ----------------------------
DROP TABLE IF EXISTS `userinf`;
CREATE TABLE `userinf` (
  `user` varchar(20) COLLATE utf8_unicode_ci DEFAULT NULL,
  `pwd` varchar(20) COLLATE utf8_unicode_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

-- ----------------------------
-- Records of userinf
-- ----------------------------
INSERT INTO `userinf` VALUES ('1', '1');
INSERT INTO `userinf` VALUES ('2', '2');
INSERT INTO `userinf` VALUES ('5', '5');
INSERT INTO `userinf` VALUES ('6', '6');
INSERT INTO `userinf` VALUES ('3', '3');
INSERT INTO `userinf` VALUES ('123', '123');
