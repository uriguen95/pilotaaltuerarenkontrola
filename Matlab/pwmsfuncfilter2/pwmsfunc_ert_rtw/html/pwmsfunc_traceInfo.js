function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "pwmsfunc"};
	this.sidHashMap["pwmsfunc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "pwmsfunc:15"};
	this.sidHashMap["pwmsfunc:15"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "pwmsfunc:15:1692"};
	this.sidHashMap["pwmsfunc:15:1692"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/Desiratutako Altuera "] = {sid: "pwmsfunc:9"};
	this.sidHashMap["pwmsfunc:9"] = {rtwname: "<Root>/Desiratutako Altuera "};
	this.rtwnameHashMap["<Root>/Irteera"] = {sid: "pwmsfunc:4"};
	this.sidHashMap["pwmsfunc:4"] = {rtwname: "<Root>/Irteera"};
	this.rtwnameHashMap["<Root>/Knob"] = {sid: "pwmsfunc:16"};
	this.sidHashMap["pwmsfunc:16"] = {rtwname: "<Root>/Knob"};
	this.rtwnameHashMap["<Root>/Knob1"] = {sid: "pwmsfunc:17"};
	this.sidHashMap["pwmsfunc:17"] = {rtwname: "<Root>/Knob1"};
	this.rtwnameHashMap["<Root>/Knob2"] = {sid: "pwmsfunc:18"};
	this.sidHashMap["pwmsfunc:18"] = {rtwname: "<Root>/Knob2"};
	this.rtwnameHashMap["<Root>/Neurtutako Distantzia"] = {sid: "pwmsfunc:2"};
	this.sidHashMap["pwmsfunc:2"] = {rtwname: "<Root>/Neurtutako Distantzia"};
	this.rtwnameHashMap["<Root>/PID Diskretua1"] = {sid: "pwmsfunc:15"};
	this.sidHashMap["pwmsfunc:15"] = {rtwname: "<Root>/PID Diskretua1"};
	this.rtwnameHashMap["<Root>/PWM"] = {sid: "pwmsfunc:6"};
	this.sidHashMap["pwmsfunc:6"] = {rtwname: "<Root>/PWM"};
	this.rtwnameHashMap["<Root>/S-Function Builder"] = {sid: "pwmsfunc:1"};
	this.sidHashMap["pwmsfunc:1"] = {rtwname: "<Root>/S-Function Builder"};
	this.rtwnameHashMap["<Root>/Sum"] = {sid: "pwmsfunc:10"};
	this.sidHashMap["pwmsfunc:10"] = {rtwname: "<Root>/Sum"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "pwmsfunc:15:1"};
	this.sidHashMap["pwmsfunc:15:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Derivative Gain"] = {sid: "pwmsfunc:15:1690"};
	this.sidHashMap["pwmsfunc:15:1690"] = {rtwname: "<S1>/Derivative Gain"};
	this.rtwnameHashMap["<S1>/Filter Differentiator"] = {sid: "pwmsfunc:15:1692"};
	this.sidHashMap["pwmsfunc:15:1692"] = {rtwname: "<S1>/Filter Differentiator"};
	this.rtwnameHashMap["<S1>/Integral Gain"] = {sid: "pwmsfunc:15:1689"};
	this.sidHashMap["pwmsfunc:15:1689"] = {rtwname: "<S1>/Integral Gain"};
	this.rtwnameHashMap["<S1>/Integrator"] = {sid: "pwmsfunc:15:1691"};
	this.sidHashMap["pwmsfunc:15:1691"] = {rtwname: "<S1>/Integrator"};
	this.rtwnameHashMap["<S1>/Proportional Gain"] = {sid: "pwmsfunc:15:1688"};
	this.sidHashMap["pwmsfunc:15:1688"] = {rtwname: "<S1>/Proportional Gain"};
	this.rtwnameHashMap["<S1>/Saturate"] = {sid: "pwmsfunc:15:1706"};
	this.sidHashMap["pwmsfunc:15:1706"] = {rtwname: "<S1>/Saturate"};
	this.rtwnameHashMap["<S1>/Sum"] = {sid: "pwmsfunc:15:1687"};
	this.sidHashMap["pwmsfunc:15:1687"] = {rtwname: "<S1>/Sum"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "pwmsfunc:15:10"};
	this.sidHashMap["pwmsfunc:15:10"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/U"] = {sid: "pwmsfunc:15:1693"};
	this.sidHashMap["pwmsfunc:15:1693"] = {rtwname: "<S2>/U"};
	this.rtwnameHashMap["<S2>/Constant"] = {sid: "pwmsfunc:15:1699"};
	this.sidHashMap["pwmsfunc:15:1699"] = {rtwname: "<S2>/Constant"};
	this.rtwnameHashMap["<S2>/DenCoefOut"] = {sid: "pwmsfunc:15:1697"};
	this.sidHashMap["pwmsfunc:15:1697"] = {rtwname: "<S2>/DenCoefOut"};
	this.rtwnameHashMap["<S2>/Divide"] = {sid: "pwmsfunc:15:1705"};
	this.sidHashMap["pwmsfunc:15:1705"] = {rtwname: "<S2>/Divide"};
	this.rtwnameHashMap["<S2>/Filter Coefficient"] = {sid: "pwmsfunc:15:1696"};
	this.sidHashMap["pwmsfunc:15:1696"] = {rtwname: "<S2>/Filter Coefficient"};
	this.rtwnameHashMap["<S2>/Filter Differentiator TF"] = {sid: "pwmsfunc:15:1695"};
	this.sidHashMap["pwmsfunc:15:1695"] = {rtwname: "<S2>/Filter Differentiator TF"};
	this.rtwnameHashMap["<S2>/Mux"] = {sid: "pwmsfunc:15:1702"};
	this.sidHashMap["pwmsfunc:15:1702"] = {rtwname: "<S2>/Mux"};
	this.rtwnameHashMap["<S2>/N Copy"] = {sid: "pwmsfunc:15:1703"};
	this.sidHashMap["pwmsfunc:15:1703"] = {rtwname: "<S2>/N Copy"};
	this.rtwnameHashMap["<S2>/Reciprocal"] = {sid: "pwmsfunc:15:1701"};
	this.sidHashMap["pwmsfunc:15:1701"] = {rtwname: "<S2>/Reciprocal"};
	this.rtwnameHashMap["<S2>/SumDen"] = {sid: "pwmsfunc:15:1700"};
	this.sidHashMap["pwmsfunc:15:1700"] = {rtwname: "<S2>/SumDen"};
	this.rtwnameHashMap["<S2>/SumNum"] = {sid: "pwmsfunc:15:1704"};
	this.sidHashMap["pwmsfunc:15:1704"] = {rtwname: "<S2>/SumNum"};
	this.rtwnameHashMap["<S2>/TSamp"] = {sid: "pwmsfunc:15:1698"};
	this.sidHashMap["pwmsfunc:15:1698"] = {rtwname: "<S2>/TSamp"};
	this.rtwnameHashMap["<S2>/Y"] = {sid: "pwmsfunc:15:1694"};
	this.sidHashMap["pwmsfunc:15:1694"] = {rtwname: "<S2>/Y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
