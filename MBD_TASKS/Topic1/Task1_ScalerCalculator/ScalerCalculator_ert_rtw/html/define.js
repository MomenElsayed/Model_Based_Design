function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:33,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:70,type:"fcn"};
this.def["ScalerCalculator_B"] = {file: "ScalerCalculator_c.html",line:20,type:"var"};
this.def["ScalerCalculator_U"] = {file: "ScalerCalculator_c.html",line:23,type:"var"};
this.def["ScalerCalculator_Y"] = {file: "ScalerCalculator_c.html",line:26,type:"var"};
this.def["ScalerCalculator.c:ScalerCalculator_M_"] = {file: "ScalerCalculator_c.html",line:29,type:"var"};
this.def["ScalerCalculator_M"] = {file: "ScalerCalculator_c.html",line:30,type:"var"};
this.def["ScalerCalculator_step"] = {file: "ScalerCalculator_c.html",line:33,type:"fcn"};
this.def["ScalerCalculator_initialize"] = {file: "ScalerCalculator_c.html",line:101,type:"fcn"};
this.def["ScalerCalculator_terminate"] = {file: "ScalerCalculator_c.html",line:121,type:"fcn"};
this.def["B_ScalerCalculator_T"] = {file: "ScalerCalculator_h.html",line:47,type:"type"};
this.def["ConstB_ScalerCalculator_T"] = {file: "ScalerCalculator_h.html",line:53,type:"type"};
this.def["ExtU_ScalerCalculator_T"] = {file: "ScalerCalculator_h.html",line:60,type:"type"};
this.def["ExtY_ScalerCalculator_T"] = {file: "ScalerCalculator_h.html",line:72,type:"type"};
this.def["RT_MODEL_ScalerCalculator_T"] = {file: "ScalerCalculator_types_h.html",line:22,type:"type"};
this.def["ScalerCalculator_Addition"] = {file: "Addition_c.html",line:23,type:"fcn"};
this.def["B_Addition_ScalerCalculator_T"] = {file: "Addition_h.html",line:28,type:"type"};
this.def["ScalerCalculator_Division"] = {file: "Division_c.html",line:23,type:"fcn"};
this.def["ScalerCalculator_Multiplication"] = {file: "Multiplication_c.html",line:23,type:"fcn"};
this.def["B_Multiplication_ScalerCalcul_T"] = {file: "Multiplication_h.html",line:28,type:"type"};
this.def["ScalerCalculator_Subtraction"] = {file: "Subtraction_c.html",line:23,type:"fcn"};
this.def["B_Subtraction_ScalerCalculato_T"] = {file: "Subtraction_h.html",line:28,type:"type"};
this.def["ScalerCalculator_ConstB"] = {file: "ScalerCalculator_data_c.html",line:20,type:"var"};
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
	this.html2SrcPath["ScalerCalculator_c.html"] = "../ScalerCalculator.c";
	this.html2Root["ScalerCalculator_c.html"] = "ScalerCalculator_c.html";
	this.html2SrcPath["ScalerCalculator_h.html"] = "../ScalerCalculator.h";
	this.html2Root["ScalerCalculator_h.html"] = "ScalerCalculator_h.html";
	this.html2SrcPath["ScalerCalculator_private_h.html"] = "../ScalerCalculator_private.h";
	this.html2Root["ScalerCalculator_private_h.html"] = "ScalerCalculator_private_h.html";
	this.html2SrcPath["ScalerCalculator_types_h.html"] = "../ScalerCalculator_types.h";
	this.html2Root["ScalerCalculator_types_h.html"] = "ScalerCalculator_types_h.html";
	this.html2SrcPath["Addition_c.html"] = "../Addition.c";
	this.html2Root["Addition_c.html"] = "Addition_c.html";
	this.html2SrcPath["Addition_h.html"] = "../Addition.h";
	this.html2Root["Addition_h.html"] = "Addition_h.html";
	this.html2SrcPath["Division_c.html"] = "../Division.c";
	this.html2Root["Division_c.html"] = "Division_c.html";
	this.html2SrcPath["Division_h.html"] = "../Division.h";
	this.html2Root["Division_h.html"] = "Division_h.html";
	this.html2SrcPath["Multiplication_c.html"] = "../Multiplication.c";
	this.html2Root["Multiplication_c.html"] = "Multiplication_c.html";
	this.html2SrcPath["Multiplication_h.html"] = "../Multiplication.h";
	this.html2Root["Multiplication_h.html"] = "Multiplication_h.html";
	this.html2SrcPath["Subtraction_c.html"] = "../Subtraction.c";
	this.html2Root["Subtraction_c.html"] = "Subtraction_c.html";
	this.html2SrcPath["Subtraction_h.html"] = "../Subtraction.h";
	this.html2Root["Subtraction_h.html"] = "Subtraction_h.html";
	this.html2SrcPath["ScalerCalculator_data_c.html"] = "../ScalerCalculator_data.c";
	this.html2Root["ScalerCalculator_data_c.html"] = "ScalerCalculator_data_c.html";
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
"ert_main_c.html","ScalerCalculator_c.html","ScalerCalculator_h.html","ScalerCalculator_private_h.html","ScalerCalculator_types_h.html","Addition_c.html","Addition_h.html","Division_c.html","Division_h.html","Multiplication_c.html","Multiplication_h.html","Subtraction_c.html","Subtraction_h.html","ScalerCalculator_data_c.html","rtwtypes_h.html"];
