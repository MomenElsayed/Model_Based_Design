function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:33,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:70,type:"fcn"};
this.def["FactorialWhile_B"] = {file: "FactorialWhile_c.html",line:20,type:"var"};
this.def["FactorialWhile_DW"] = {file: "FactorialWhile_c.html",line:23,type:"var"};
this.def["FactorialWhile_U"] = {file: "FactorialWhile_c.html",line:26,type:"var"};
this.def["FactorialWhile_Y"] = {file: "FactorialWhile_c.html",line:29,type:"var"};
this.def["FactorialWhile.c:FactorialWhile_M_"] = {file: "FactorialWhile_c.html",line:32,type:"var"};
this.def["FactorialWhile_M"] = {file: "FactorialWhile_c.html",line:33,type:"var"};
this.def["FactorialWhile_step"] = {file: "FactorialWhile_c.html",line:36,type:"fcn"};
this.def["FactorialWhile_initialize"] = {file: "FactorialWhile_c.html",line:53,type:"fcn"};
this.def["FactorialWhile_terminate"] = {file: "FactorialWhile_c.html",line:81,type:"fcn"};
this.def["B_FactorialWhile_T"] = {file: "FactorialWhile_h.html",line:42,type:"type"};
this.def["DW_FactorialWhile_T"] = {file: "FactorialWhile_h.html",line:47,type:"type"};
this.def["ExtU_FactorialWhile_T"] = {file: "FactorialWhile_h.html",line:52,type:"type"};
this.def["ExtY_FactorialWhile_T"] = {file: "FactorialWhile_h.html",line:57,type:"type"};
this.def["RT_MODEL_FactorialWhile_T"] = {file: "FactorialWhile_types_h.html",line:22,type:"type"};
this.def["FactorialWhile_Factorial_Init"] = {file: "Factorial_c.html",line:23,type:"fcn"};
this.def["FactorialWhile_Factorial"] = {file: "Factorial_c.html",line:30,type:"fcn"};
this.def["B_Factorial_FactorialWhile_T"] = {file: "Factorial_h.html",line:28,type:"type"};
this.def["DW_Factorial_FactorialWhile_T"] = {file: "Factorial_h.html",line:33,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:95,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:148,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["FactorialWhile_c.html"] = "../FactorialWhile.c";
	this.html2Root["FactorialWhile_c.html"] = "FactorialWhile_c.html";
	this.html2SrcPath["FactorialWhile_h.html"] = "../FactorialWhile.h";
	this.html2Root["FactorialWhile_h.html"] = "FactorialWhile_h.html";
	this.html2SrcPath["FactorialWhile_private_h.html"] = "../FactorialWhile_private.h";
	this.html2Root["FactorialWhile_private_h.html"] = "FactorialWhile_private_h.html";
	this.html2SrcPath["FactorialWhile_types_h.html"] = "../FactorialWhile_types.h";
	this.html2Root["FactorialWhile_types_h.html"] = "FactorialWhile_types_h.html";
	this.html2SrcPath["Factorial_c.html"] = "../Factorial.c";
	this.html2Root["Factorial_c.html"] = "Factorial_c.html";
	this.html2SrcPath["Factorial_h.html"] = "../Factorial.h";
	this.html2Root["Factorial_h.html"] = "Factorial_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","FactorialWhile_c.html","FactorialWhile_h.html","FactorialWhile_private_h.html","FactorialWhile_types_h.html","Factorial_c.html","Factorial_h.html","rtwtypes_h.html"];
