function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:33,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:70,type:"fcn"};
this.def["FactorialForLoop_B"] = {file: "FactorialForLoop_c.html",line:20,type:"var"};
this.def["FactorialForLoop_DW"] = {file: "FactorialForLoop_c.html",line:23,type:"var"};
this.def["FactorialForLoop_U"] = {file: "FactorialForLoop_c.html",line:26,type:"var"};
this.def["FactorialForLoop_Y"] = {file: "FactorialForLoop_c.html",line:29,type:"var"};
this.def["FactorialForLoop.c:FactorialForLoop_M_"] = {file: "FactorialForLoop_c.html",line:32,type:"var"};
this.def["FactorialForLoop_M"] = {file: "FactorialForLoop_c.html",line:33,type:"var"};
this.def["FactorialForLoop_step"] = {file: "FactorialForLoop_c.html",line:36,type:"fcn"};
this.def["FactorialForLoop_initialize"] = {file: "FactorialForLoop_c.html",line:51,type:"fcn"};
this.def["FactorialForLoop_terminate"] = {file: "FactorialForLoop_c.html",line:79,type:"fcn"};
this.def["B_FactorialForLoop_T"] = {file: "FactorialForLoop_h.html",line:42,type:"type"};
this.def["DW_FactorialForLoop_T"] = {file: "FactorialForLoop_h.html",line:47,type:"type"};
this.def["ExtU_FactorialForLoop_T"] = {file: "FactorialForLoop_h.html",line:52,type:"type"};
this.def["ExtY_FactorialForLoop_T"] = {file: "FactorialForLoop_h.html",line:57,type:"type"};
this.def["RT_MODEL_FactorialForLoop_T"] = {file: "FactorialForLoop_types_h.html",line:22,type:"type"};
this.def["FactorialForLoop_Factorial_Init"] = {file: "Factorial_c.html",line:23,type:"fcn"};
this.def["FactorialForLoop_Factorial"] = {file: "Factorial_c.html",line:30,type:"fcn"};
this.def["B_Factorial_FactorialForLoop_T"] = {file: "Factorial_h.html",line:28,type:"type"};
this.def["DW_Factorial_FactorialForLoop_T"] = {file: "Factorial_h.html",line:33,type:"type"};
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
	this.html2SrcPath["FactorialForLoop_c.html"] = "../FactorialForLoop.c";
	this.html2Root["FactorialForLoop_c.html"] = "FactorialForLoop_c.html";
	this.html2SrcPath["FactorialForLoop_h.html"] = "../FactorialForLoop.h";
	this.html2Root["FactorialForLoop_h.html"] = "FactorialForLoop_h.html";
	this.html2SrcPath["FactorialForLoop_private_h.html"] = "../FactorialForLoop_private.h";
	this.html2Root["FactorialForLoop_private_h.html"] = "FactorialForLoop_private_h.html";
	this.html2SrcPath["FactorialForLoop_types_h.html"] = "../FactorialForLoop_types.h";
	this.html2Root["FactorialForLoop_types_h.html"] = "FactorialForLoop_types_h.html";
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
"ert_main_c.html","FactorialForLoop_c.html","FactorialForLoop_h.html","FactorialForLoop_private_h.html","FactorialForLoop_types_h.html","Factorial_c.html","Factorial_h.html","rtwtypes_h.html"];
