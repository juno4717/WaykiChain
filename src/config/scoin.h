// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2017-2019 The WaykiChain Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CONFIG_SCOIN_H
#define CONFIG_SCOIN_H

#include <cstdint>

static const uint16_t PERCENT_BOOST = 10000;

static const bool kGlobalStableCoinLockIsOn = false;  // when true, CDP cannot be added but can be closed. scoins cannot be sold in DEX

static const uint16_t kScoinInterestIncreaseRate = 3;   // increase by 3%
static const uint16_t kBcoinDexSellOrderDiscount = 97;  // 97%

static const uint16_t kDefaultCollateralRatio               = 20000;    // 200% * 10000
static const uint16_t kDefaultOpenLiquidateRatio            = 15000;    // 150% * 10000
static const uint16_t kDefaultForcedLiquidateRatio          = 10300;    // 103% * 10000
static const uint16_t kDefaultCdpLoanInterest               = 350;      // 3.5% * 10000
static const uint16_t kDefaultCdpPenaltyFeeRatio            = 1300;     // 13% * 10000
static const uint16_t kDefaultCdpLiquidateProfitRatio       = 300;     // 3% * 10000
static const uint16_t kDefaultCdpLiquidateNonReturnRatio    = 11600;   // 1.16 * 10000: Non-return to CDP owner
static const uint16_t kDefaultCdpLiquidateNonProfitRatio    = 11300;   // 1.13 * 10000: Non-profit for Liquidation
static const uint32_t kTotalFundCoinAmount                  = 21000000; // 21 million WGRT
static const uint32_t kDefaultPriceFeedStakedFcoinsMin      = 210000;   // 1%: min 210K fcoins deposited to be a price feeder
static const uint16_t kDefaultPriceFeedDeviateAcceptLimit   = 3000;  // 30% * 10000, above than that will be penalized
static const uint16_t kDefaultPriceFeedDeviatePenalty       = 1000;  // 1000 bcoins deduction as penalty
static const uint16_t kDefaultPriceFeedContinuousDeviateTimesLimit = 10;  // after 10 times continuous deviate limit penetration all deposit be deducted


#endif