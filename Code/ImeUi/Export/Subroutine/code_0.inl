#ifndef __INTELLISENSE__
// clang-format off
#include "..\..\PCH.h"
#pragma init_seg(lib)
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

_naked _weak void _sub_6711000() // _sub_6711000
{
    __DEBUG_ASM(6711000);
    // chunk 0x6711000 _sub_6711000
    asm("loc_6711000: push %ebx;");
    asm("loc_6711001: push %ebp;");
    asm("loc_6711002: mov _import_6717114,%ebp;");
    asm("loc_6711008: push %esi;");
    asm("loc_6711009: push $0;");
    asm("loc_671100B: push $0;");
    asm("loc_671100D: xor %bl,%bl;");
    asm("loc_671100F: call *%ebp;");
    asm("loc_6711011: mov %eax,%esi;");
    asm("loc_6711013: test %esi,%esi;");
    asm("loc_6711015: je loc_6711068;");
    asm("loc_6711017: lea (,%esi,4),%eax;");
    asm("loc_671101E: push %edi;");
    asm("loc_671101F: push %eax;");
    asm("loc_6711020: call _sub_67169DC;");
    asm("loc_6711025: add $4,%esp;");
    asm("loc_6711028: mov %eax,%edi;");
    asm("loc_671102A: push %edi;");
    asm("loc_671102B: push %esi;");
    asm("loc_671102C: call *%ebp;");
    asm("loc_671102E: mov %eax,%ebp;");
    asm("loc_6711030: test %ebp,%ebp;");
    asm("loc_6711032: je loc_671105E;");
    asm("loc_6711034: xor %esi,%esi;");
    asm("loc_6711036: test %ebp,%ebp;");
    asm("loc_6711038: jbe loc_671105E;");
    asm("loc_671103A: mov (%edi,%esi,4),%eax;");
    asm("loc_671103D: push %eax;");
    asm("loc_671103E: call _sub_671697C;");
    asm("loc_6711043: test %eax,%eax;");
    asm("loc_6711045: jne loc_671105C;");
    asm("loc_6711047: inc %esi;");
    asm("loc_6711048: cmp %ebp,%esi;");
    asm("loc_671104A: jb loc_671103A;");
    asm("loc_671104C: push %edi;");
    asm("loc_671104D: call _sub_67169D0;");
    asm("loc_6711052: add $4,%esp;");
    asm("loc_6711055: mov %bl,%al;");
    asm("loc_6711057: pop %edi;");
    asm("loc_6711058: pop %esi;");
    asm("loc_6711059: pop %ebp;");
    asm("loc_671105A: pop %ebx;");
    asm("loc_671105B: ret;");
    asm("loc_671105C: mov $1,%bl;");
    asm("loc_671105E: push %edi;");
    asm("loc_671105F: call _sub_67169D0;");
    asm("loc_6711064: add $4,%esp;");
    asm("loc_6711067: pop %edi;");
    asm("loc_6711068: pop %esi;");
    asm("loc_6711069: mov %bl,%al;");
    asm("loc_671106B: pop %ebp;");
    asm("loc_671106C: pop %ebx;");
    asm("loc_671106D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711070() // _sub_6711070
{
    __DEBUG_ASM(6711070);
    // chunk 0x6711070 _sub_6711070
    asm("loc_6711070: jmp _sub_6711080;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711080() // _sub_6711080
{
    __DEBUG_ASM(6711080);
    // chunk 0x6711080 _sub_6711080
    asm("loc_6711080: movl $_off_6717140,_data_6719390;");
    asm("loc_671108A: movw $0,_data_6719394;");
    asm("loc_6711093: movl $0xFFFFFFFF,_data_67193A0;");
    asm("loc_671109D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67110A0() // _sub_67110A0
{
    __DEBUG_ASM(67110A0);
    // chunk 0x67110A0 _sub_67110A0
    asm("loc_67110A0: mov 4(%esp),%eax;");
    asm("loc_67110A4: mov %eax,0x10(%ecx);");
    asm("loc_67110A7: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67110B0() // _nullsub_1
{
    __DEBUG_ASM(67110B0);
    // chunk 0x67110B0 _sub_67110B0
    asm("loc_67110B0: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67110C0() // _sub_67110C0
{
    __DEBUG_ASM(67110C0);
    // chunk 0x67110C0 _sub_67110C0
    asm("loc_67110C0: mov 8(%esp),%eax;");
    asm("loc_67110C4: mov 0xC(%esp),%ecx;");
    asm("loc_67110C8: movl $0,(%eax);");
    asm("loc_67110CE: movl $0,(%ecx);");
    asm("loc_67110D4: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67110E0() // _sub_67110E0
{
    __DEBUG_ASM(67110E0);
    // chunk 0x67110E0 _sub_67110E0
    asm("loc_67110E0: mov 4(%esp),%eax;");
    asm("loc_67110E4: push %esi;");
    asm("loc_67110E5: mov %ecx,%esi;");
    asm("loc_67110E7: push $5;");
    asm("loc_67110E9: push %eax;");
    asm("loc_67110EA: lea 4(%esi),%ecx;");
    asm("loc_67110ED: push %ecx;");
    asm("loc_67110EE: calll *_import_67170D4;");
    asm("loc_67110F4: add $0xC,%esp;");
    asm("loc_67110F7: movw $0,0xC(%esi);");
    asm("loc_67110FD: pop %esi;");
    asm("loc_67110FE: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711110() // ?UpdatedText@CInputBox@@UAEXPBG@Z
{
    __DEBUG_ASM(6711110);
    // chunk 0x6711110 _sub_6711110
    asm("loc_6711110: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711120() // _sub_6711120
{
    __DEBUG_ASM(6711120);
    // chunk 0x6711120 _sub_6711120
    asm("loc_6711120: mov _data_67193E0,%ecx;");
    asm("loc_6711126: test %ecx,%ecx;");
    asm("loc_6711128: je loc_6711148;");
    asm("loc_671112A: mov 0x14(%esp),%edx;");
    asm("loc_671112E: mov (%ecx),%eax;");
    asm("loc_6711130: push %edx;");
    asm("loc_6711131: mov 0x14(%esp),%edx;");
    asm("loc_6711135: push %edx;");
    asm("loc_6711136: mov 0x14(%esp),%edx;");
    asm("loc_671113A: push %edx;");
    asm("loc_671113B: mov 0x14(%esp),%edx;");
    asm("loc_671113F: push %edx;");
    asm("loc_6711140: mov 0x14(%esp),%edx;");
    asm("loc_6711144: push %edx;");
    asm("loc_6711145: calll *4(%eax);");
    asm("loc_6711148: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711150() // _sub_6711150
{
    __DEBUG_ASM(6711150);
    // chunk 0x6711150 _sub_6711150
    asm("loc_6711150: mov _data_67193E0,%ecx;");
    asm("loc_6711156: test %ecx,%ecx;");
    asm("loc_6711158: je loc_6711175;");
    asm("loc_671115A: mov 8(%esp),%edx;");
    asm("loc_671115E: mov (%ecx),%eax;");
    asm("loc_6711160: push %edx;");
    asm("loc_6711161: mov 8(%esp),%edx;");
    asm("loc_6711165: push %edx;");
    asm("loc_6711166: mov _data_67193A0,%edx;");
    asm("loc_671116C: push %edx;");
    asm("loc_671116D: push $_data_6719394;");
    asm("loc_6711172: calll *8(%eax);");
    asm("loc_6711175: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711180() // _sub_6711180
{
    __DEBUG_ASM(6711180);
    // chunk 0x6711180 _sub_6711180
    asm("loc_6711180: mov _data_67193E0,%ecx;");
    asm("loc_6711186: test %ecx,%ecx;");
    asm("loc_6711188: je loc_671119A;");
    asm("loc_671118A: mov 4(%esp),%edx;");
    asm("loc_671118E: mov (%ecx),%eax;");
    asm("loc_6711190: and $0xFFFF,%edx;");
    asm("loc_6711196: push %edx;");
    asm("loc_6711197: calll *0x24(%eax);");
    asm("loc_671119A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67111A0() // _sub_67111A0
{
    __DEBUG_ASM(67111A0);
    // chunk 0x67111A0 _sub_67111A0
    asm("loc_67111A0: mov _data_67193E0,%ecx;");
    asm("loc_67111A6: test %ecx,%ecx;");
    asm("loc_67111A8: je loc_67111B4;");
    asm("loc_67111AA: mov 4(%esp),%edx;");
    asm("loc_67111AE: mov (%ecx),%eax;");
    asm("loc_67111B0: push %edx;");
    asm("loc_67111B1: calll *0x28(%eax);");
    asm("loc_67111B4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67111C0() // ?GetSingleton@IMEFocus@@SAPAU1@XZ
{
    __DEBUG_ASM(67111C0);
    // chunk 0x67111C0 _sub_67111C0
    asm("loc_67111C0: mov _data_67193E0,%eax;");
    asm("loc_67111C5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67111D0() // ??1IMEFocus@@UAE@XZ
{
    __DEBUG_ASM(67111D0);
    // chunk 0x67111D0 _sub_67111D0
    asm("loc_67111D0: push $0xFFFFFFFF;");
    asm("loc_67111D2: push $loc_6716CAB;");
    asm("loc_67111D7: mov %fs:0,%eax;");
    asm("loc_67111DD: push %eax;");
    asm("loc_67111DE: mov %esp,%fs:0;");
    asm("loc_67111E5: sub $8,%esp;");
    asm("loc_67111E8: push %ebx;");
    asm("loc_67111E9: push %ebp;");
    asm("loc_67111EA: push %esi;");
    asm("loc_67111EB: mov %ecx,%esi;");
    asm("loc_67111ED: push %edi;");
    asm("loc_67111EE: mov %esi,0x10(%esp);");
    asm("loc_67111F2: movl $_off_6717158,(%esi);");
    asm("loc_67111F8: xor %ebp,%ebp;");
    asm("loc_67111FA: push %ebp;");
    asm("loc_67111FB: push %ebp;");
    asm("loc_67111FC: mov %ebp,0x28(%esp);");
    asm("loc_6711200: call _sub_67114F0;");
    asm("loc_6711205: mov 8(%esi),%ebx;");
    asm("loc_6711208: mov (%ebx),%edi;");
    asm("loc_671120A: cmp %ebx,%edi;");
    asm("loc_671120C: je loc_6711235;");
    asm("loc_671120E: mov %edi,%eax;");
    asm("loc_6711210: mov (%edi),%edi;");
    asm("loc_6711212: push %eax;");
    asm("loc_6711213: mov 4(%eax),%ecx;");
    asm("loc_6711216: mov (%eax),%edx;");
    asm("loc_6711218: mov %edx,(%ecx);");
    asm("loc_671121A: mov (%eax),%ecx;");
    asm("loc_671121C: mov 4(%eax),%edx;");
    asm("loc_671121F: mov %edx,4(%ecx);");
    asm("loc_6711222: call _sub_67169D0;");
    asm("loc_6711227: mov 0xC(%esi),%ecx;");
    asm("loc_671122A: add $4,%esp;");
    asm("loc_671122D: dec %ecx;");
    asm("loc_671122E: cmp %ebx,%edi;");
    asm("loc_6711230: mov %ecx,0xC(%esi);");
    asm("loc_6711233: jne loc_671120E;");
    asm("loc_6711235: mov %ebp,_data_67193E0;");
    asm("loc_671123B: call _sub_6712380;");
    asm("loc_6711240: mov 8(%esi),%ebx;");
    asm("loc_6711243: movl $0xFFFFFFFF,0x20(%esp);");
    asm("loc_671124B: mov (%ebx),%edi;");
    asm("loc_671124D: cmp %ebx,%edi;");
    asm("loc_671124F: je loc_671128D;");
    asm("loc_6711251: mov %edi,%eax;");
    asm("loc_6711253: mov (%edi),%edi;");
    asm("loc_6711255: mov %eax,0x10(%esp);");
    asm("loc_6711259: lea 0x14(%esp),%eax;");
    asm("loc_671125D: push %ebp;");
    asm("loc_671125E: push %eax;");
    asm("loc_671125F: lea 0x18(%esp),%ecx;");
    asm("loc_6711263: call _sub_6711A50;");
    asm("loc_6711268: mov (%eax),%eax;");
    asm("loc_671126A: push %eax;");
    asm("loc_671126B: mov 4(%eax),%ecx;");
    asm("loc_671126E: mov (%eax),%edx;");
    asm("loc_6711270: mov %edx,(%ecx);");
    asm("loc_6711272: mov (%eax),%ecx;");
    asm("loc_6711274: mov 4(%eax),%edx;");
    asm("loc_6711277: mov %edx,4(%ecx);");
    asm("loc_671127A: call _sub_67169D0;");
    asm("loc_671127F: mov 0xC(%esi),%ecx;");
    asm("loc_6711282: add $4,%esp;");
    asm("loc_6711285: dec %ecx;");
    asm("loc_6711286: cmp %ebx,%edi;");
    asm("loc_6711288: mov %ecx,0xC(%esi);");
    asm("loc_671128B: jne loc_6711251;");
    asm("loc_671128D: mov 8(%esi),%eax;");
    asm("loc_6711290: push %eax;");
    asm("loc_6711291: call _sub_67169D0;");
    asm("loc_6711296: mov 0x1C(%esp),%ecx;");
    asm("loc_671129A: add $4,%esp;");
    asm("loc_671129D: mov %ebp,8(%esi);");
    asm("loc_67112A0: mov %ebp,0xC(%esi);");
    asm("loc_67112A3: pop %edi;");
    asm("loc_67112A4: pop %esi;");
    asm("loc_67112A5: pop %ebp;");
    asm("loc_67112A6: pop %ebx;");
    asm("loc_67112A7: mov %ecx,%fs:0;");
    asm("loc_67112AE: add $0x14,%esp;");
    asm("loc_67112B1: ret;");
    // chunk 0x6716CA0 _sub_6716CA0
    asm("loc_6716CA0: mov -0x14(%ebp),%ecx;");
    asm("loc_6716CA3: add $4,%ecx;");
    asm("loc_6716CA6: jmp _sub_6711A00;");
    asm("loc_6716CAB: mov $_data_671790C,%eax;");
    asm("loc_6716CB0: jmp _sub_67169E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67112C0() // ??0IMEFocus@@QAE@PAUHWND__@@@Z
{
    __DEBUG_ASM(67112C0);
    // chunk 0x67112C0 _sub_67112C0
    asm("loc_67112C0: push $0xFFFFFFFF;");
    asm("loc_67112C2: push $loc_6716CCB;");
    asm("loc_67112C7: mov %fs:0,%eax;");
    asm("loc_67112CD: push %eax;");
    asm("loc_67112CE: mov %esp,%fs:0;");
    asm("loc_67112D5: sub $0x14,%esp;");
    asm("loc_67112D8: mov 0x24(%esp),%al;");
    asm("loc_67112DC: push %ebx;");
    asm("loc_67112DD: push %esi;");
    asm("loc_67112DE: mov %ecx,%esi;");
    asm("loc_67112E0: push %edi;");
    asm("loc_67112E1: push $0xC;");
    asm("loc_67112E3: mov %esi,0x10(%esp);");
    asm("loc_67112E7: mov %al,4(%esi);");
    asm("loc_67112EA: call _sub_67169DC;");
    asm("loc_67112EF: xor %ebx,%ebx;");
    asm("loc_67112F1: mov %eax,(%eax);");
    asm("loc_67112F3: mov %eax,4(%eax);");
    asm("loc_67112F6: mov %eax,8(%esi);");
    asm("loc_67112F9: mov %ebx,0xC(%esi);");
    asm("loc_67112FC: mov 0x34(%esp),%edi;");
    asm("loc_6711300: mov _import_67170C4,%ecx;");
    asm("loc_6711306: mov _import_67170C8,%edx;");
    asm("loc_671130C: push %ebx;");
    asm("loc_671130D: mov %ebx,0x10(%esi);");
    asm("loc_6711310: mov %bl,0x14(%esi);");
    asm("loc_6711313: mov %bl,0x15(%esi);");
    asm("loc_6711316: movl $_off_6717158,(%esi);");
    asm("loc_671131C: push %edi;");
    asm("loc_671131D: mov %ebx,0x34(%esp);");
    asm("loc_6711321: mov %esi,_data_67193E0;");
    asm("loc_6711327: movl $_sub_6711120,_data_671B7AC;");
    asm("loc_6711331: mov %ecx,_data_671B408;");
    asm("loc_6711337: mov %edx,_data_671B404;");
    asm("loc_671133D: movl $_sub_6711150,_data_671BACC;");
    asm("loc_6711347: movl $_sub_6711180,_data_671CEF0;");
    asm("loc_6711351: movl $_sub_67111A0,_data_671CF8C;");
    asm("loc_671135B: call _sub_67145B0;");
    asm("loc_6711360: add $0xC,%esp;");
    asm("loc_6711363: cmp %bl,%al;");
    asm("loc_6711365: mov %al,0x17(%esi);");
    asm("loc_6711368: je loc_6711372;");
    asm("loc_671136A: call _sub_6711000;");
    asm("loc_671136F: mov %al,0x17(%esi);");
    asm("loc_6711372: push $2;");
    asm("loc_6711374: call _sub_6715440;");
    asm("loc_6711379: add $4,%esp;");
    asm("loc_671137C: call _sub_6712310;");
    asm("loc_6711381: push %edi;");
    asm("loc_6711382: calll *_off_6719380;");
    asm("loc_6711388: test %eax,%eax;");
    asm("loc_671138A: lea 0x10(%esp),%ecx;");
    asm("loc_671138E: setne %al;");
    asm("loc_6711391: push %ecx;");
    asm("loc_6711392: push %edi;");
    asm("loc_6711393: mov %al,0x16(%esi);");
    asm("loc_6711396: calll *_import_67170FC;");
    asm("loc_671139C: mov 0x1C(%esp),%edx;");
    asm("loc_67113A0: mov 0x18(%esp),%eax;");
    asm("loc_67113A4: push %edx;");
    asm("loc_67113A5: push %eax;");
    asm("loc_67113A6: call _sub_67155E0;");
    asm("loc_67113AB: mov 0x28(%esp),%ecx;");
    asm("loc_67113AF: add $8,%esp;");
    asm("loc_67113B2: mov %esi,%eax;");
    asm("loc_67113B4: mov %ecx,%fs:0;");
    asm("loc_67113BB: pop %edi;");
    asm("loc_67113BC: pop %esi;");
    asm("loc_67113BD: pop %ebx;");
    asm("loc_67113BE: add $0x20,%esp;");
    asm("loc_67113C1: ret $4;");
    // chunk 0x6716CC0 _sub_6716CC0
    asm("loc_6716CC0: mov -0x20(%ebp),%ecx;");
    asm("loc_6716CC3: add $4,%ecx;");
    asm("loc_6716CC6: jmp _sub_6711A00;");
    asm("loc_6716CCB: mov $_data_6717930,%eax;");
    asm("loc_6716CD0: jmp _sub_67169E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67113D0() // ?Draw@IMEFocus@@QAEXPAX@Z
{
    __DEBUG_ASM(67113D0);
    // chunk 0x67113D0 _sub_67113D0
    asm("loc_67113D0: push %esi;");
    asm("loc_67113D1: push %edi;");
    asm("loc_67113D2: mov %ecx,%edi;");
    asm("loc_67113D4: mov 0x15(%edi),%al;");
    asm("loc_67113D7: test %al,%al;");
    asm("loc_67113D9: je loc_67113E7;");
    asm("loc_67113DB: push $0;");
    asm("loc_67113DD: push $1;");
    asm("loc_67113DF: call _sub_6712F70;");
    asm("loc_67113E4: add $8,%esp;");
    asm("loc_67113E7: mov 8(%edi),%eax;");
    asm("loc_67113EA: mov (%eax),%esi;");
    asm("loc_67113EC: cmp %eax,%esi;");
    asm("loc_67113EE: je loc_6711408;");
    asm("loc_67113F0: push %ebx;");
    asm("loc_67113F1: mov 0x10(%esp),%ebx;");
    asm("loc_67113F5: mov 8(%esi),%ecx;");
    asm("loc_67113F8: push %ebx;");
    asm("loc_67113F9: mov (%ecx),%eax;");
    asm("loc_67113FB: calll *0x2C(%eax);");
    asm("loc_67113FE: mov (%esi),%esi;");
    asm("loc_6711400: mov 8(%edi),%eax;");
    asm("loc_6711403: cmp %eax,%esi;");
    asm("loc_6711405: jne loc_67113F5;");
    asm("loc_6711407: pop %ebx;");
    asm("loc_6711408: mov 0x15(%edi),%al;");
    asm("loc_671140B: pop %edi;");
    asm("loc_671140C: pop %esi;");
    asm("loc_671140D: test %al,%al;");
    asm("loc_671140F: push $1;");
    asm("loc_6711411: je loc_6711420;");
    asm("loc_6711413: push $0;");
    asm("loc_6711415: call _sub_6712F70;");
    asm("loc_671141A: add $8,%esp;");
    asm("loc_671141D: ret $4;");
    asm("loc_6711420: push $1;");
    asm("loc_6711422: call _sub_6712F70;");
    asm("loc_6711427: add $8,%esp;");
    asm("loc_671142A: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711430() // ?GetSymbolFont@IMEFocus@@QAEPAVCImeUiFont_Base@@XZ
{
    __DEBUG_ASM(6711430);
    // chunk 0x6711430 _sub_6711430
    asm("loc_6711430: mov $_data_6719390,%eax;");
    asm("loc_6711435: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711440() // ?SetSupportLevel@IMEFocus@@QAEXH@Z
{
    __DEBUG_ASM(6711440);
    // chunk 0x6711440 _sub_6711440
    asm("loc_6711440: mov 4(%esp),%eax;");
    asm("loc_6711444: push %eax;");
    asm("loc_6711445: call _sub_6715440;");
    asm("loc_671144A: pop %ecx;");
    asm("loc_671144B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711450() // ?RevertLevel3Drawing@IMEFocus@@QAEX_N@Z
{
    __DEBUG_ASM(6711450);
    // chunk 0x6711450 _sub_6711450
    asm("loc_6711450: mov 4(%esp),%al;");
    asm("loc_6711454: mov %al,0x15(%ecx);");
    asm("loc_6711457: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711460() // ?IgnoreHotKey@IMEFocus@@QBE_NPBUtagMSG@@@Z
{
    __DEBUG_ASM(6711460);
    // chunk 0x6711460 _sub_6711460
    asm("loc_6711460: mov 0xC(%ecx),%eax;");
    asm("loc_6711463: test %eax,%eax;");
    asm("loc_6711465: jne loc_671146C;");
    asm("loc_6711467: xor %al,%al;");
    asm("loc_6711469: ret $4;");
    asm("loc_671146C: mov 4(%esp),%eax;");
    asm("loc_6711470: push %eax;");
    asm("loc_6711471: call _sub_6715260;");
    asm("loc_6711476: add $4,%esp;");
    asm("loc_6711479: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711480() // ?RegisterInputBox@IMEFocus@@QAEPAUIMEInputBox@@PAU2@@Z
{
    __DEBUG_ASM(6711480);
    // chunk 0x6711480 _sub_6711480
    asm("loc_6711480: push %ebp;");
    asm("loc_6711481: mov 8(%esp),%ebp;");
    asm("loc_6711485: push %edi;");
    asm("loc_6711486: mov %ecx,%edi;");
    asm("loc_6711488: test %ebp,%ebp;");
    asm("loc_671148A: je loc_67114CE;");
    asm("loc_671148C: mov 0x10(%edi),%eax;");
    asm("loc_671148F: test %eax,%eax;");
    asm("loc_6711491: jne loc_671149B;");
    asm("loc_6711493: mov (%edi),%eax;");
    asm("loc_6711495: push $0;");
    asm("loc_6711497: push %ebp;");
    asm("loc_6711498: calll *0x2C(%eax);");
    asm("loc_671149B: push %ebx;");
    asm("loc_671149C: push %esi;");
    asm("loc_671149D: mov 8(%edi),%esi;");
    asm("loc_67114A0: push $0xC;");
    asm("loc_67114A2: mov 4(%esi),%ebx;");
    asm("loc_67114A5: call _sub_67169DC;");
    asm("loc_67114AA: add $4,%esp;");
    asm("loc_67114AD: mov %esi,(%eax);");
    asm("loc_67114AF: test %ebx,%ebx;");
    asm("loc_67114B1: jne loc_67114B5;");
    asm("loc_67114B3: mov %eax,%ebx;");
    asm("loc_67114B5: mov %ebx,4(%eax);");
    asm("loc_67114B8: mov %eax,4(%esi);");
    asm("loc_67114BB: mov 4(%eax),%ecx;");
    asm("loc_67114BE: pop %esi;");
    asm("loc_67114BF: pop %ebx;");
    asm("loc_67114C0: mov %eax,(%ecx);");
    asm("loc_67114C2: add $8,%eax;");
    asm("loc_67114C5: test %eax,%eax;");
    asm("loc_67114C7: je loc_67114CB;");
    asm("loc_67114C9: mov %ebp,(%eax);");
    asm("loc_67114CB: incl 0xC(%edi);");
    asm("loc_67114CE: mov %ebp,%eax;");
    asm("loc_67114D0: pop %edi;");
    asm("loc_67114D1: pop %ebp;");
    asm("loc_67114D2: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67114E0() // ?GetFocus@IMEFocus@@QBEPAUIMEInputBox@@XZ
{
    __DEBUG_ASM(67114E0);
    // chunk 0x67114E0 _sub_67114E0
    asm("loc_67114E0: mov 0x10(%ecx),%eax;");
    asm("loc_67114E3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67114F0() // ?SetFocus@IMEFocus@@UAEXPAUIMEInputBox@@_N@Z
{
    __DEBUG_ASM(67114F0);
    // chunk 0x67114F0 _sub_67114F0
    asm("loc_67114F0: mov 8(%esp),%al;");
    asm("loc_67114F4: push %esi;");
    asm("loc_67114F5: push %edi;");
    asm("loc_67114F6: mov 0xC(%esp),%edi;");
    asm("loc_67114FA: test %al,%al;");
    asm("loc_67114FC: mov %ecx,%esi;");
    asm("loc_67114FE: jne loc_6711505;");
    asm("loc_6711500: cmp %edi,0x10(%esi);");
    asm("loc_6711503: je loc_671151F;");
    asm("loc_6711505: mov 0x10(%esi),%ecx;");
    asm("loc_6711508: test %ecx,%ecx;");
    asm("loc_671150A: je loc_6711511;");
    asm("loc_671150C: mov (%ecx),%eax;");
    asm("loc_671150E: calll *8(%eax);");
    asm("loc_6711511: test %edi,%edi;");
    asm("loc_6711513: mov %edi,0x10(%esi);");
    asm("loc_6711516: je loc_671151F;");
    asm("loc_6711518: mov (%edi),%edx;");
    asm("loc_671151A: mov %edi,%ecx;");
    asm("loc_671151C: calll *4(%edx);");
    asm("loc_671151F: pop %edi;");
    asm("loc_6711520: pop %esi;");
    asm("loc_6711521: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711530() // ?NumInputBoxes@IMEFocus@@QBEHXZ
{
    __DEBUG_ASM(6711530);
    // chunk 0x6711530 _sub_6711530
    asm("loc_6711530: mov 0xC(%ecx),%eax;");
    asm("loc_6711533: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711540() // ?GetInputBox@IMEFocus@@QBEPAUIMEInputBox@@H@Z
{
    __DEBUG_ASM(6711540);
    // chunk 0x6711540 _sub_6711540
    asm("loc_6711540: push %esi;");
    asm("loc_6711541: push %edi;");
    asm("loc_6711542: mov 0xC(%esp),%edi;");
    asm("loc_6711546: xor %eax,%eax;");
    asm("loc_6711548: test %edi,%edi;");
    asm("loc_671154A: jl loc_6711568;");
    asm("loc_671154C: mov 8(%ecx),%edx;");
    asm("loc_671154F: mov (%edx),%ecx;");
    asm("loc_6711551: cmp %edx,%ecx;");
    asm("loc_6711553: je loc_6711568;");
    asm("loc_6711555: mov 8(%ecx),%esi;");
    asm("loc_6711558: dec %edi;");
    asm("loc_6711559: js loc_6711566;");
    asm("loc_671155B: mov (%ecx),%ecx;");
    asm("loc_671155D: cmp %edx,%ecx;");
    asm("loc_671155F: jne loc_6711555;");
    asm("loc_6711561: pop %edi;");
    asm("loc_6711562: pop %esi;");
    asm("loc_6711563: ret $4;");
    asm("loc_6711566: mov %esi,%eax;");
    asm("loc_6711568: pop %edi;");
    asm("loc_6711569: pop %esi;");
    asm("loc_671156A: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711570() // ?RemoveInputBox@IMEFocus@@QAEPAUIMEInputBox@@H@Z
{
    __DEBUG_ASM(6711570);
    // chunk 0x6711570 _sub_6711570
    asm("loc_6711570: mov 4(%esp),%edx;");
    asm("loc_6711574: push %ebx;");
    asm("loc_6711575: push %esi;");
    asm("loc_6711576: xor %eax,%eax;");
    asm("loc_6711578: push %edi;");
    asm("loc_6711579: mov %ecx,%edi;");
    asm("loc_671157B: test %edx,%edx;");
    asm("loc_671157D: jl loc_67115CE;");
    asm("loc_671157F: mov 8(%edi),%ecx;");
    asm("loc_6711582: mov (%ecx),%esi;");
    asm("loc_6711584: cmp %ecx,%esi;");
    asm("loc_6711586: je loc_67115CE;");
    asm("loc_6711588: mov 8(%esi),%ebx;");
    asm("loc_671158B: dec %edx;");
    asm("loc_671158C: js loc_671159A;");
    asm("loc_671158E: mov (%esi),%esi;");
    asm("loc_6711590: cmp %ecx,%esi;");
    asm("loc_6711592: jne loc_6711588;");
    asm("loc_6711594: pop %edi;");
    asm("loc_6711595: pop %esi;");
    asm("loc_6711596: pop %ebx;");
    asm("loc_6711597: ret $4;");
    asm("loc_671159A: mov 0x10(%edi),%ecx;");
    asm("loc_671159D: cmp %ebx,%ecx;");
    asm("loc_671159F: jne loc_67115AD;");
    asm("loc_67115A1: mov (%ecx),%eax;");
    asm("loc_67115A3: calll *8(%eax);");
    asm("loc_67115A6: movl $0,0x10(%edi);");
    asm("loc_67115AD: mov 4(%esi),%ecx;");
    asm("loc_67115B0: mov (%esi),%edx;");
    asm("loc_67115B2: push %esi;");
    asm("loc_67115B3: mov %edx,(%ecx);");
    asm("loc_67115B5: mov (%esi),%eax;");
    asm("loc_67115B7: mov 4(%esi),%ecx;");
    asm("loc_67115BA: mov %ecx,4(%eax);");
    asm("loc_67115BD: call _sub_67169D0;");
    asm("loc_67115C2: mov 0xC(%edi),%eax;");
    asm("loc_67115C5: add $4,%esp;");
    asm("loc_67115C8: dec %eax;");
    asm("loc_67115C9: mov %eax,0xC(%edi);");
    asm("loc_67115CC: mov %ebx,%eax;");
    asm("loc_67115CE: pop %edi;");
    asm("loc_67115CF: pop %esi;");
    asm("loc_67115D0: pop %ebx;");
    asm("loc_67115D1: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67115E0() // ?RemoveInputBox@IMEFocus@@QAEPAUIMEInputBox@@PAU2@@Z
{
    __DEBUG_ASM(67115E0);
    // chunk 0x67115E0 _sub_67115E0
    asm("loc_67115E0: push %ebx;");
    asm("loc_67115E1: mov %ecx,%ebx;");
    asm("loc_67115E3: push %esi;");
    asm("loc_67115E4: xor %eax,%eax;");
    asm("loc_67115E6: mov 8(%ebx),%ecx;");
    asm("loc_67115E9: push %edi;");
    asm("loc_67115EA: mov (%ecx),%esi;");
    asm("loc_67115EC: cmp %ecx,%esi;");
    asm("loc_67115EE: je loc_671163B;");
    asm("loc_67115F0: mov 0x10(%esp),%edx;");
    asm("loc_67115F4: mov 8(%esi),%edi;");
    asm("loc_67115F7: cmp %edi,%edx;");
    asm("loc_67115F9: je loc_6711607;");
    asm("loc_67115FB: mov (%esi),%esi;");
    asm("loc_67115FD: cmp %ecx,%esi;");
    asm("loc_67115FF: jne loc_67115F4;");
    asm("loc_6711601: pop %edi;");
    asm("loc_6711602: pop %esi;");
    asm("loc_6711603: pop %ebx;");
    asm("loc_6711604: ret $4;");
    asm("loc_6711607: mov 0x10(%ebx),%ecx;");
    asm("loc_671160A: cmp %edi,%ecx;");
    asm("loc_671160C: jne loc_671161A;");
    asm("loc_671160E: mov (%ecx),%eax;");
    asm("loc_6711610: calll *8(%eax);");
    asm("loc_6711613: movl $0,0x10(%ebx);");
    asm("loc_671161A: mov 4(%esi),%ecx;");
    asm("loc_671161D: mov (%esi),%edx;");
    asm("loc_671161F: push %esi;");
    asm("loc_6711620: mov %edx,(%ecx);");
    asm("loc_6711622: mov (%esi),%eax;");
    asm("loc_6711624: mov 4(%esi),%ecx;");
    asm("loc_6711627: mov %ecx,4(%eax);");
    asm("loc_671162A: call _sub_67169D0;");
    asm("loc_671162F: mov 0xC(%ebx),%eax;");
    asm("loc_6711632: add $4,%esp;");
    asm("loc_6711635: dec %eax;");
    asm("loc_6711636: mov %eax,0xC(%ebx);");
    asm("loc_6711639: mov %edi,%eax;");
    asm("loc_671163B: pop %edi;");
    asm("loc_671163C: pop %esi;");
    asm("loc_671163D: pop %ebx;");
    asm("loc_671163E: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711650() // ?OnSize@IMEFocus@@UAEXPAUHWND__@@IJ@Z
{
    __DEBUG_ASM(6711650);
    // chunk 0x6711650 _sub_6711650
    asm("loc_6711650: mov 8(%ecx),%ecx;");
    asm("loc_6711653: push %esi;");
    asm("loc_6711654: mov 0x10(%esp),%esi;");
    asm("loc_6711658: mov (%ecx),%eax;");
    asm("loc_671165A: mov %esi,%edx;");
    asm("loc_671165C: shr $0x10,%edx;");
    asm("loc_671165F: cmp %ecx,%eax;");
    asm("loc_6711661: je loc_6711669;");
    asm("loc_6711663: mov (%eax),%eax;");
    asm("loc_6711665: cmp %ecx,%eax;");
    asm("loc_6711667: jne loc_6711663;");
    asm("loc_6711669: and $0xFFFF,%edx;");
    asm("loc_671166F: and $0xFFFF,%esi;");
    asm("loc_6711675: push %edx;");
    asm("loc_6711676: push %esi;");
    asm("loc_6711677: call _sub_67155E0;");
    asm("loc_671167C: add $8,%esp;");
    asm("loc_671167F: pop %esi;");
    asm("loc_6711680: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711690() // ?OnSetFocus@IMEFocus@@UAEXXZ
{
    __DEBUG_ASM(6711690);
    // chunk 0x6711690 _sub_6711690
    asm("loc_6711690: mov 0x10(%ecx),%ecx;");
    asm("loc_6711693: test %ecx,%ecx;");
    asm("loc_6711695: je loc_671169C;");
    asm("loc_6711697: mov (%ecx),%eax;");
    asm("loc_6711699: jmpl *4(%eax);");
    asm("loc_671169C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67116A0() // ?OnKillFocus@IMEFocus@@UAEXXZ
{
    __DEBUG_ASM(67116A0);
    // chunk 0x67116A0 _sub_67116A0
    asm("loc_67116A0: mov 0x10(%ecx),%ecx;");
    asm("loc_67116A3: test %ecx,%ecx;");
    asm("loc_67116A5: je loc_67116AC;");
    asm("loc_67116A7: mov (%ecx),%eax;");
    asm("loc_67116A9: jmpl *8(%eax);");
    asm("loc_67116AC: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67116B0() // ?OnMouseMove@IMEFocus@@UAE_NPAUHWND__@@IJ@Z
{
    __DEBUG_ASM(67116B0);
    // chunk 0x67116B0 _sub_67116B0
    asm("loc_67116B0: xor %al,%al;");
    asm("loc_67116B2: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67116C0() // ?OnChar@IMEFocus@@UAE_NI@Z
{
    __DEBUG_ASM(67116C0);
    // chunk 0x67116C0 _sub_67116C0
    asm("loc_67116C0: push %esi;");
    asm("loc_67116C1: mov 0x10(%ecx),%esi;");
    asm("loc_67116C4: xor %al,%al;");
    asm("loc_67116C6: test %esi,%esi;");
    asm("loc_67116C8: je loc_67116EA;");
    asm("loc_67116CA: mov (%esi),%eax;");
    asm("loc_67116CC: push %ebx;");
    asm("loc_67116CD: push %edi;");
    asm("loc_67116CE: mov 0x10(%esp),%edi;");
    asm("loc_67116D2: push %edi;");
    asm("loc_67116D3: mov %esi,%ecx;");
    asm("loc_67116D5: calll *0x14(%eax);");
    asm("loc_67116D8: mov %al,%bl;");
    asm("loc_67116DA: test %bl,%bl;");
    asm("loc_67116DC: je loc_67116E6;");
    asm("loc_67116DE: push %edi;");
    asm("loc_67116DF: mov %esi,%ecx;");
    asm("loc_67116E1: call _sub_6712AC0;");
    asm("loc_67116E6: mov %bl,%al;");
    asm("loc_67116E8: pop %edi;");
    asm("loc_67116E9: pop %ebx;");
    asm("loc_67116EA: pop %esi;");
    asm("loc_67116EB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67116F0() // ?OnKeyDown@IMEFocus@@UAE_NI@Z
{
    __DEBUG_ASM(67116F0);
    // chunk 0x67116F0 _sub_67116F0
    asm("loc_67116F0: mov 0x10(%ecx),%ecx;");
    asm("loc_67116F3: xor %al,%al;");
    asm("loc_67116F5: test %ecx,%ecx;");
    asm("loc_67116F7: je loc_67116FE;");
    asm("loc_67116F9: mov (%ecx),%eax;");
    asm("loc_67116FB: jmpl *0x10(%eax);");
    asm("loc_67116FE: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711710() // ?WndProc@IMEFocus@@QAE_NPAUHWND__@@IIJPAH@Z
{
    asm("jmp dgb_6711710;"); // jumptable skip
    asm(".long _jmp_67117BC;"); // jumptable address
    __DEBUG_ASM(6711710);
    // chunk 0x6711710 _sub_6711710
    asm("loc_6711710: sub $8,%esp;");
    asm("loc_6711713: push %ebx;");
    asm("loc_6711714: push %ebp;");
    asm("loc_6711715: push %esi;");
    asm("loc_6711716: mov %ecx,%esi;");
    asm("loc_6711718: push %edi;");
    asm("loc_6711719: movb $0,0x13(%esp);");
    asm("loc_671171E: mov 0xC(%esi),%eax;");
    asm("loc_6711721: movl $0,0x14(%esp);");
    asm("loc_6711729: test %eax,%eax;");
    asm("loc_671172B: je loc_67117A4;");
    asm("loc_671172D: mov 0x28(%esp),%ebx;");
    asm("loc_6711731: mov 0x24(%esp),%edi;");
    asm("loc_6711735: mov 0x20(%esp),%ecx;");
    asm("loc_6711739: mov 0x1C(%esp),%ebp;");
    asm("loc_671173D: lea 0x13(%esp),%eax;");
    asm("loc_6711741: push %eax;");
    asm("loc_6711742: push %ebx;");
    asm("loc_6711743: push %edi;");
    asm("loc_6711744: push %ecx;");
    asm("loc_6711745: push %ebp;");
    asm("loc_6711746: call _sub_67139A0;");
    asm("loc_671174B: mov %eax,0x28(%esp);");
    asm("loc_671174F: mov 0x27(%esp),%al;");
    asm("loc_6711753: add $0x14,%esp;");
    asm("loc_6711756: test %al,%al;");
    asm("loc_6711758: jne loc_6711762;");
    asm("loc_671175A: movl $0,0x14(%esp);");
    asm("loc_6711762: mov 0x20(%esp),%edx;");
    asm("loc_6711766: lea -5(%edx),%eax;");
    asm("loc_6711769: cmp $3,%eax;");
    asm("loc_671176C: ja loc_67117A4;");
    asm("loc_671176E: jmpl *_jmp_67117BC(,%eax,4);");
    asm("loc_6711775: mov (%esi),%eax;");
    asm("loc_6711777: push %ebx;");
    asm("loc_6711778: push %edi;");
    asm("loc_6711779: push %ebp;");
    asm("loc_671177A: mov %esi,%ecx;");
    asm("loc_671177C: calll *0xC(%eax);");
    asm("loc_671177F: jmp loc_67117A4;");
    asm("loc_6711781: xor %ecx,%ecx;");
    asm("loc_6711783: test %di,%di;");
    asm("loc_6711786: sete %cl;");
    asm("loc_6711789: push %ecx;");
    asm("loc_671178A: call _sub_6715BD0;");
    asm("loc_671178F: add $4,%esp;");
    asm("loc_6711792: jmp loc_67117A4;");
    asm("loc_6711794: mov (%esi),%edx;");
    asm("loc_6711796: mov %esi,%ecx;");
    asm("loc_6711798: calll *0x10(%edx);");
    asm("loc_671179B: jmp loc_67117A4;");
    asm("loc_671179D: mov (%esi),%eax;");
    asm("loc_671179F: mov %esi,%ecx;");
    asm("loc_67117A1: calll *0x14(%eax);");
    asm("loc_67117A4: mov 0x2C(%esp),%ecx;");
    asm("loc_67117A8: mov 0x14(%esp),%edx;");
    asm("loc_67117AC: mov 0x13(%esp),%al;");
    asm("loc_67117B0: pop %edi;");
    asm("loc_67117B1: pop %esi;");
    asm("loc_67117B2: pop %ebp;");
    asm("loc_67117B3: mov %edx,(%ecx);");
    asm("loc_67117B5: pop %ebx;");
    asm("loc_67117B6: add $8,%esp;");
    asm("loc_67117B9: ret $0x14;");
    asm("int3;"); // unreachable
    asm("_jmp_67117BC: .long loc_6711775;");
    asm(".long loc_6711781;");
    asm(".long loc_6711794;");
    asm(".long loc_671179D;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6711710);
_naked _weak void _sub_67117D0() // ?GetDefaultAppearance@IMEFocus@@QAEPBU_IMEUI_APPEARANCE@@XZ
{
    __DEBUG_ASM(67117D0);
    // chunk 0x67117D0 _sub_67117D0
    asm("loc_67117D0: mov _data_67193E4,%al;");
    asm("loc_67117D5: test %al,%al;");
    asm("loc_67117D7: jne loc_67119EE;");
    asm("loc_67117DD: push %esi;");
    asm("loc_67117DE: push %edi;");
    asm("loc_67117DF: mov $0xF,%ecx;");
    asm("loc_67117E4: xor %eax,%eax;");
    asm("loc_67117E6: mov $_data_67193A4,%edi;");
    asm("loc_67117EB: push $_data_671902C;");
    asm("loc_67117F0: rep stos %eax,(%edi);");
    asm("loc_67117F2: movb $1,_data_67193E4;");
    asm("loc_67117F9: calll *_off_6719364;");
    asm("loc_67117FF: mov %eax,%esi;");
    asm("loc_6711801: test %esi,%esi;");
    asm("loc_6711803: jne loc_6711812;");
    asm("loc_6711805: push $_data_6719020;");
    asm("loc_671180A: calll *_import_67170A8;");
    asm("loc_6711810: mov %eax,%esi;");
    asm("loc_6711812: push $0;");
    asm("loc_6711814: push $0;");
    asm("loc_6711816: push $1;");
    asm("loc_6711818: push %esi;");
    asm("loc_6711819: movl $_data_6719390,_data_67193B4;");
    asm("loc_6711823: call _sub_67122A0;");
    asm("loc_6711828: add $8,%esp;");
    asm("loc_671182B: push %eax;");
    asm("loc_671182C: call _sub_67121E0;");
    asm("loc_6711831: add $0xC,%esp;");
    asm("loc_6711834: mov %eax,_data_67193A4;");
    asm("loc_6711839: push $0;");
    asm("loc_671183B: push $0;");
    asm("loc_671183D: push $2;");
    asm("loc_671183F: push %esi;");
    asm("loc_6711840: call _sub_67122A0;");
    asm("loc_6711845: add $8,%esp;");
    asm("loc_6711848: push %eax;");
    asm("loc_6711849: call _sub_67121E0;");
    asm("loc_671184E: add $0xC,%esp;");
    asm("loc_6711851: mov %eax,_data_67193A8;");
    asm("loc_6711856: push $0;");
    asm("loc_6711858: push $0;");
    asm("loc_671185A: push $3;");
    asm("loc_671185C: push %esi;");
    asm("loc_671185D: call _sub_67122A0;");
    asm("loc_6711862: add $8,%esp;");
    asm("loc_6711865: push %eax;");
    asm("loc_6711866: call _sub_67121E0;");
    asm("loc_671186B: add $0xC,%esp;");
    asm("loc_671186E: mov %eax,_data_67193AC;");
    asm("loc_6711873: push $0;");
    asm("loc_6711875: push $0;");
    asm("loc_6711877: push $4;");
    asm("loc_6711879: push %esi;");
    asm("loc_671187A: call _sub_67122A0;");
    asm("loc_671187F: add $8,%esp;");
    asm("loc_6711882: push %eax;");
    asm("loc_6711883: call _sub_67121E0;");
    asm("loc_6711888: add $0xC,%esp;");
    asm("loc_671188B: mov %al,_data_67193B0;");
    asm("loc_6711890: push $0;");
    asm("loc_6711892: push $0;");
    asm("loc_6711894: push $5;");
    asm("loc_6711896: push %esi;");
    asm("loc_6711897: call _sub_67122A0;");
    asm("loc_671189C: add $8,%esp;");
    asm("loc_671189F: push %eax;");
    asm("loc_67118A0: call _sub_67121E0;");
    asm("loc_67118A5: add $0xC,%esp;");
    asm("loc_67118A8: mov %al,_data_67193B2;");
    asm("loc_67118AD: push $0;");
    asm("loc_67118AF: push $0;");
    asm("loc_67118B1: push $6;");
    asm("loc_67118B3: push %esi;");
    asm("loc_67118B4: call _sub_67122A0;");
    asm("loc_67118B9: add $8,%esp;");
    asm("loc_67118BC: push %eax;");
    asm("loc_67118BD: call _sub_67121E0;");
    asm("loc_67118C2: add $0xC,%esp;");
    asm("loc_67118C5: mov %al,_data_67193B1;");
    asm("loc_67118CA: push $0;");
    asm("loc_67118CC: push $0;");
    asm("loc_67118CE: push $7;");
    asm("loc_67118D0: push %esi;");
    asm("loc_67118D1: call _sub_67122A0;");
    asm("loc_67118D6: add $8,%esp;");
    asm("loc_67118D9: push %eax;");
    asm("loc_67118DA: call _sub_67121E0;");
    asm("loc_67118DF: add $0xC,%esp;");
    asm("loc_67118E2: mov %eax,_data_67193B8;");
    asm("loc_67118E7: push $0;");
    asm("loc_67118E9: push $0;");
    asm("loc_67118EB: push $8;");
    asm("loc_67118ED: push %esi;");
    asm("loc_67118EE: call _sub_67122A0;");
    asm("loc_67118F3: add $8,%esp;");
    asm("loc_67118F6: push %eax;");
    asm("loc_67118F7: call _sub_67121E0;");
    asm("loc_67118FC: add $0xC,%esp;");
    asm("loc_67118FF: mov %eax,_data_67193BC;");
    asm("loc_6711904: push $0;");
    asm("loc_6711906: push $0;");
    asm("loc_6711908: push $9;");
    asm("loc_671190A: push %esi;");
    asm("loc_671190B: call _sub_67122A0;");
    asm("loc_6711910: add $8,%esp;");
    asm("loc_6711913: push %eax;");
    asm("loc_6711914: call _sub_67121E0;");
    asm("loc_6711919: add $0xC,%esp;");
    asm("loc_671191C: mov %eax,_data_67193C0;");
    asm("loc_6711921: push $0;");
    asm("loc_6711923: push $0;");
    asm("loc_6711925: push $0xA;");
    asm("loc_6711927: push %esi;");
    asm("loc_6711928: call _sub_67122A0;");
    asm("loc_671192D: add $8,%esp;");
    asm("loc_6711930: push %eax;");
    asm("loc_6711931: call _sub_67121E0;");
    asm("loc_6711936: add $0xC,%esp;");
    asm("loc_6711939: mov %eax,_data_67193C4;");
    asm("loc_671193E: push $0;");
    asm("loc_6711940: push $0;");
    asm("loc_6711942: push $0xB;");
    asm("loc_6711944: push %esi;");
    asm("loc_6711945: call _sub_67122A0;");
    asm("loc_671194A: add $8,%esp;");
    asm("loc_671194D: push %eax;");
    asm("loc_671194E: call _sub_67121E0;");
    asm("loc_6711953: add $0xC,%esp;");
    asm("loc_6711956: mov %eax,_data_67193C8;");
    asm("loc_671195B: push $0;");
    asm("loc_671195D: push $0;");
    asm("loc_671195F: push $0xC;");
    asm("loc_6711961: push %esi;");
    asm("loc_6711962: call _sub_67122A0;");
    asm("loc_6711967: add $8,%esp;");
    asm("loc_671196A: push %eax;");
    asm("loc_671196B: call _sub_67121E0;");
    asm("loc_6711970: add $0xC,%esp;");
    asm("loc_6711973: mov %eax,_data_67193CC;");
    asm("loc_6711978: push $0;");
    asm("loc_671197A: push $0;");
    asm("loc_671197C: push $0xD;");
    asm("loc_671197E: push %esi;");
    asm("loc_671197F: call _sub_67122A0;");
    asm("loc_6711984: add $8,%esp;");
    asm("loc_6711987: push %eax;");
    asm("loc_6711988: call _sub_67121E0;");
    asm("loc_671198D: add $0xC,%esp;");
    asm("loc_6711990: mov %eax,_data_67193D0;");
    asm("loc_6711995: push $0;");
    asm("loc_6711997: push $0;");
    asm("loc_6711999: push $0xE;");
    asm("loc_671199B: push %esi;");
    asm("loc_671199C: call _sub_67122A0;");
    asm("loc_67119A1: add $8,%esp;");
    asm("loc_67119A4: push %eax;");
    asm("loc_67119A5: call _sub_67121E0;");
    asm("loc_67119AA: add $0xC,%esp;");
    asm("loc_67119AD: mov %eax,_data_67193D4;");
    asm("loc_67119B2: push $0;");
    asm("loc_67119B4: push $0;");
    asm("loc_67119B6: push $0xF;");
    asm("loc_67119B8: push %esi;");
    asm("loc_67119B9: call _sub_67122A0;");
    asm("loc_67119BE: add $8,%esp;");
    asm("loc_67119C1: push %eax;");
    asm("loc_67119C2: call _sub_67121E0;");
    asm("loc_67119C7: add $0xC,%esp;");
    asm("loc_67119CA: mov %al,_data_67193D8;");
    asm("loc_67119CF: push $0;");
    asm("loc_67119D1: push $0;");
    asm("loc_67119D3: push $0x10;");
    asm("loc_67119D5: push %esi;");
    asm("loc_67119D6: call _sub_67122A0;");
    asm("loc_67119DB: add $8,%esp;");
    asm("loc_67119DE: push %eax;");
    asm("loc_67119DF: call _sub_67121E0;");
    asm("loc_67119E4: add $0xC,%esp;");
    asm("loc_67119E7: mov %eax,_data_67193DC;");
    asm("loc_67119EC: pop %edi;");
    asm("loc_67119ED: pop %esi;");
    asm("loc_67119EE: mov $_data_67193A4,%eax;");
    asm("loc_67119F3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711A00() // _sub_6711A00
{
    __DEBUG_ASM(6711A00);
    // chunk 0x6711A00 _sub_6711A00
    asm("loc_6711A00: push %ebx;");
    asm("loc_6711A01: push %esi;");
    asm("loc_6711A02: push %edi;");
    asm("loc_6711A03: mov %ecx,%edi;");
    asm("loc_6711A05: mov 4(%edi),%ebx;");
    asm("loc_6711A08: mov (%ebx),%esi;");
    asm("loc_6711A0A: cmp %ebx,%esi;");
    asm("loc_6711A0C: je loc_6711A35;");
    asm("loc_6711A0E: mov %esi,%eax;");
    asm("loc_6711A10: mov (%esi),%esi;");
    asm("loc_6711A12: push %eax;");
    asm("loc_6711A13: mov 4(%eax),%ecx;");
    asm("loc_6711A16: mov (%eax),%edx;");
    asm("loc_6711A18: mov %edx,(%ecx);");
    asm("loc_6711A1A: mov (%eax),%ecx;");
    asm("loc_6711A1C: mov 4(%eax),%edx;");
    asm("loc_6711A1F: mov %edx,4(%ecx);");
    asm("loc_6711A22: call _sub_67169D0;");
    asm("loc_6711A27: mov 8(%edi),%ecx;");
    asm("loc_6711A2A: add $4,%esp;");
    asm("loc_6711A2D: dec %ecx;");
    asm("loc_6711A2E: cmp %ebx,%esi;");
    asm("loc_6711A30: mov %ecx,8(%edi);");
    asm("loc_6711A33: jne loc_6711A0E;");
    asm("loc_6711A35: mov 4(%edi),%eax;");
    asm("loc_6711A38: push %eax;");
    asm("loc_6711A39: call _sub_67169D0;");
    asm("loc_6711A3E: add $4,%esp;");
    asm("loc_6711A41: xor %eax,%eax;");
    asm("loc_6711A43: mov %eax,4(%edi);");
    asm("loc_6711A46: mov %eax,8(%edi);");
    asm("loc_6711A49: pop %edi;");
    asm("loc_6711A4A: pop %esi;");
    asm("loc_6711A4B: pop %ebx;");
    asm("loc_6711A4C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711A50() // _sub_6711A50
{
    __DEBUG_ASM(6711A50);
    // chunk 0x6711A50 _sub_6711A50
    asm("loc_6711A50: mov (%ecx),%edx;");
    asm("loc_6711A52: mov (%edx),%eax;");
    asm("loc_6711A54: mov %eax,(%ecx);");
    asm("loc_6711A56: mov 4(%esp),%eax;");
    asm("loc_6711A5A: mov %edx,(%eax);");
    asm("loc_6711A5C: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711A60() // ??4CCaret@@QAEAAV0@ABV0@@Z
{
    __DEBUG_ASM(6711A60);
    // chunk 0x6711A60 _sub_6711A60
    asm("loc_6711A60: push %esi;");
    asm("loc_6711A61: mov 8(%esp),%esi;");
    asm("loc_6711A65: mov %ecx,%eax;");
    asm("loc_6711A67: push %edi;");
    asm("loc_6711A68: mov $6,%ecx;");
    asm("loc_6711A6D: mov %eax,%edi;");
    asm("loc_6711A6F: rep movsl (%esi),(%edi);");
    asm("loc_6711A71: pop %edi;");
    asm("loc_6711A72: pop %esi;");
    asm("loc_6711A73: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711A80() // ?GetTitle@CInputBox@@QAEPAGXZ
{
    __DEBUG_ASM(6711A80);
    // chunk 0x6711A80 _sub_6711A80
    asm("loc_6711A80: lea 0x34(%ecx),%eax;");
    asm("loc_6711A83: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711A90() // ?SetTitle@CInputBox@@QAEXPAG@Z
{
    __DEBUG_ASM(6711A90);
    // chunk 0x6711A90 _sub_6711A90
    asm("loc_6711A90: mov 4(%esp),%eax;");
    asm("loc_6711A94: push $0x3F;");
    asm("loc_6711A96: add $0x34,%ecx;");
    asm("loc_6711A99: push %eax;");
    asm("loc_6711A9A: push %ecx;");
    asm("loc_6711A9B: calll *_off_6719378;");
    asm("loc_6711AA1: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711AB0() // ?GetRect@CInputBox@@QAEPBUtagRECT@@XZ
{
    __DEBUG_ASM(6711AB0);
    // chunk 0x6711AB0 _sub_6711AB0
    asm("loc_6711AB0: lea 0x1C(%ecx),%eax;");
    asm("loc_6711AB3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711AC0() // ?GetCaret@CInputBox@@QAEPAVCCaret@@XZ
{
    __DEBUG_ASM(6711AC0);
    // chunk 0x6711AC0 _sub_6711AC0
    asm("loc_6711AC0: lea 4(%ecx),%eax;");
    asm("loc_6711AC3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711AD0() // ?GetMarginX@CInputBox@@QBEKXZ
{
    __DEBUG_ASM(6711AD0);
    // chunk 0x6711AD0 _sub_6711AD0
    asm("loc_6711AD0: mov 0x74(%ecx),%eax;");
    asm("loc_6711AD3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711AE0() // ?GetMarginY@CInputBox@@QBEKXZ
{
    __DEBUG_ASM(6711AE0);
    // chunk 0x6711AE0 _sub_6711AE0
    asm("loc_6711AE0: mov 0x78(%ecx),%eax;");
    asm("loc_6711AE3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711AF0() // ?HandleWideChar@CInputBox@@QAE_NG@Z
{
    __DEBUG_ASM(6711AF0);
    // chunk 0x6711AF0 _sub_6711AF0
    asm("loc_6711AF0: push %ebx;");
    asm("loc_6711AF1: push %esi;");
    asm("loc_6711AF2: mov %ecx,%esi;");
    asm("loc_6711AF4: push %edi;");
    asm("loc_6711AF5: mov 0x10(%esp),%edi;");
    asm("loc_6711AF9: mov (%esi),%eax;");
    asm("loc_6711AFB: push %edi;");
    asm("loc_6711AFC: calll *0x14(%eax);");
    asm("loc_6711AFF: mov %al,%bl;");
    asm("loc_6711B01: test %bl,%bl;");
    asm("loc_6711B03: je loc_6711B0D;");
    asm("loc_6711B05: push %edi;");
    asm("loc_6711B06: mov %esi,%ecx;");
    asm("loc_6711B08: call _sub_6712AC0;");
    asm("loc_6711B0D: pop %edi;");
    asm("loc_6711B0E: mov %bl,%al;");
    asm("loc_6711B10: pop %esi;");
    asm("loc_6711B11: pop %ebx;");
    asm("loc_6711B12: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711B20() // ?GetFreeInputBufferSize@CInputBox@@IBEHXZ
{
    __DEBUG_ASM(6711B20);
    // chunk 0x6711B20 _sub_6711B20
    asm("loc_6711B20: mov 0x80(%ecx),%eax;");
    asm("loc_6711B26: mov 0x88(%ecx),%edx;");
    asm("loc_6711B2C: sub %edx,%eax;");
    asm("loc_6711B2E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711B30() // ?MoveCaretRight@CInputBox@@IAE_N_N@Z
{
    __DEBUG_ASM(6711B30);
    // chunk 0x6711B30 _sub_6711B30
    asm("loc_6711B30: mov 4(%esp),%edx;");
    asm("loc_6711B34: mov (%ecx),%eax;");
    asm("loc_6711B36: push %edx;");
    asm("loc_6711B37: push $1;");
    asm("loc_6711B39: calll *0x20(%eax);");
    asm("loc_6711B3C: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711B40() // ?MoveCaretLeft@CInputBox@@IAE_N_N@Z
{
    __DEBUG_ASM(6711B40);
    // chunk 0x6711B40 _sub_6711B40
    asm("loc_6711B40: mov 4(%esp),%edx;");
    asm("loc_6711B44: mov (%ecx),%eax;");
    asm("loc_6711B46: push %edx;");
    asm("loc_6711B47: push $0;");
    asm("loc_6711B49: calll *0x20(%eax);");
    asm("loc_6711B4C: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711B50() // ?MoveCaretHead@CInputBox@@IAE_NXZ
{
    __DEBUG_ASM(6711B50);
    // chunk 0x6711B50 _sub_6711B50
    asm("loc_6711B50: mov (%ecx),%eax;");
    asm("loc_6711B52: push $1;");
    asm("loc_6711B54: push $0;");
    asm("loc_6711B56: calll *0x20(%eax);");
    asm("loc_6711B59: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711B60() // ?MoveCaretTail@CInputBox@@IAE_NXZ
{
    __DEBUG_ASM(6711B60);
    // chunk 0x6711B60 _sub_6711B60
    asm("loc_6711B60: mov (%ecx),%eax;");
    asm("loc_6711B62: push $1;");
    asm("loc_6711B64: push $1;");
    asm("loc_6711B66: calll *0x20(%eax);");
    asm("loc_6711B69: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711B70() // ??0CInputBox@@QAE@ABV0@@Z
{
    __DEBUG_ASM(6711B70);
    // chunk 0x6711B70 _sub_6711B70
    asm("loc_6711B70: mov 4(%esp),%edx;");
    asm("loc_6711B74: mov %ecx,%eax;");
    asm("loc_6711B76: push %esi;");
    asm("loc_6711B77: push %edi;");
    asm("loc_6711B78: lea 4(%edx),%esi;");
    asm("loc_6711B7B: lea 4(%eax),%edi;");
    asm("loc_6711B7E: mov $6,%ecx;");
    asm("loc_6711B83: rep movsl (%esi),(%edi);");
    asm("loc_6711B85: lea 0x1C(%edx),%ecx;");
    asm("loc_6711B88: lea 0x1C(%eax),%esi;");
    asm("loc_6711B8B: mov (%ecx),%edi;");
    asm("loc_6711B8D: mov %edi,(%esi);");
    asm("loc_6711B8F: mov 4(%ecx),%edi;");
    asm("loc_6711B92: mov %edi,4(%esi);");
    asm("loc_6711B95: mov 8(%ecx),%edi;");
    asm("loc_6711B98: mov %edi,8(%esi);");
    asm("loc_6711B9B: lea 0x34(%eax),%edi;");
    asm("loc_6711B9E: mov 0xC(%ecx),%ecx;");
    asm("loc_6711BA1: mov %ecx,0xC(%esi);");
    asm("loc_6711BA4: mov 0x2C(%edx),%ecx;");
    asm("loc_6711BA7: mov %ecx,0x2C(%eax);");
    asm("loc_6711BAA: mov 0x30(%edx),%ecx;");
    asm("loc_6711BAD: mov %ecx,0x30(%eax);");
    asm("loc_6711BB0: lea 0x34(%edx),%esi;");
    asm("loc_6711BB3: mov $0x10,%ecx;");
    asm("loc_6711BB8: rep movsl (%esi),(%edi);");
    asm("loc_6711BBA: mov 0x74(%edx),%ecx;");
    asm("loc_6711BBD: pop %edi;");
    asm("loc_6711BBE: mov %ecx,0x74(%eax);");
    asm("loc_6711BC1: mov 0x78(%edx),%ecx;");
    asm("loc_6711BC4: mov %ecx,0x78(%eax);");
    asm("loc_6711BC7: mov 0x7C(%edx),%cl;");
    asm("loc_6711BCA: mov %cl,0x7C(%eax);");
    asm("loc_6711BCD: mov 0x80(%edx),%ecx;");
    asm("loc_6711BD3: mov %ecx,0x80(%eax);");
    asm("loc_6711BD9: mov 0x84(%edx),%ecx;");
    asm("loc_6711BDF: mov %ecx,0x84(%eax);");
    asm("loc_6711BE5: mov 0x88(%edx),%ecx;");
    asm("loc_6711BEB: mov %ecx,0x88(%eax);");
    asm("loc_6711BF1: mov 0x8C(%edx),%dl;");
    asm("loc_6711BF7: mov %dl,0x8C(%eax);");
    asm("loc_6711BFD: movl $_off_6717188,(%eax);");
    asm("loc_6711C03: pop %esi;");
    asm("loc_6711C04: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711C10() // ??4CInputBox@@QAEAAV0@ABV0@@Z
{
    __DEBUG_ASM(6711C10);
    // chunk 0x6711C10 _sub_6711C10
    asm("loc_6711C10: mov 4(%esp),%edx;");
    asm("loc_6711C14: push %ebx;");
    asm("loc_6711C15: mov %ecx,%eax;");
    asm("loc_6711C17: push %esi;");
    asm("loc_6711C18: push %edi;");
    asm("loc_6711C19: lea 4(%edx),%esi;");
    asm("loc_6711C1C: lea 4(%eax),%edi;");
    asm("loc_6711C1F: mov $6,%ecx;");
    asm("loc_6711C24: rep movsl (%esi),(%edi);");
    asm("loc_6711C26: lea 0x1C(%edx),%ecx;");
    asm("loc_6711C29: lea 0x1C(%eax),%esi;");
    asm("loc_6711C2C: mov (%ecx),%edi;");
    asm("loc_6711C2E: mov %edi,(%esi);");
    asm("loc_6711C30: mov 4(%ecx),%edi;");
    asm("loc_6711C33: mov %edi,4(%esi);");
    asm("loc_6711C36: mov 8(%ecx),%edi;");
    asm("loc_6711C39: mov %edi,8(%esi);");
    asm("loc_6711C3C: mov $0x20,%edi;");
    asm("loc_6711C41: mov 0xC(%ecx),%ecx;");
    asm("loc_6711C44: mov %ecx,0xC(%esi);");
    asm("loc_6711C47: mov 0x2C(%edx),%ecx;");
    asm("loc_6711C4A: mov %ecx,0x2C(%eax);");
    asm("loc_6711C4D: mov 0x30(%edx),%ecx;");
    asm("loc_6711C50: mov %edx,%esi;");
    asm("loc_6711C52: mov %ecx,0x30(%eax);");
    asm("loc_6711C55: lea 0x34(%eax),%ecx;");
    asm("loc_6711C58: sub %eax,%esi;");
    asm("loc_6711C5A: mov (%esi,%ecx),%bx;");
    asm("loc_6711C5E: mov %bx,(%ecx);");
    asm("loc_6711C61: add $2,%ecx;");
    asm("loc_6711C64: dec %edi;");
    asm("loc_6711C65: jne loc_6711C5A;");
    asm("loc_6711C67: mov 0x74(%edx),%ecx;");
    asm("loc_6711C6A: pop %edi;");
    asm("loc_6711C6B: mov %ecx,0x74(%eax);");
    asm("loc_6711C6E: mov 0x78(%edx),%ecx;");
    asm("loc_6711C71: mov %ecx,0x78(%eax);");
    asm("loc_6711C74: mov 0x7C(%edx),%cl;");
    asm("loc_6711C77: mov %cl,0x7C(%eax);");
    asm("loc_6711C7A: mov 0x80(%edx),%ecx;");
    asm("loc_6711C80: mov %ecx,0x80(%eax);");
    asm("loc_6711C86: mov 0x84(%edx),%ecx;");
    asm("loc_6711C8C: mov %ecx,0x84(%eax);");
    asm("loc_6711C92: mov 0x88(%edx),%ecx;");
    asm("loc_6711C98: mov %ecx,0x88(%eax);");
    asm("loc_6711C9E: mov 0x8C(%edx),%dl;");
    asm("loc_6711CA4: pop %esi;");
    asm("loc_6711CA5: mov %dl,0x8C(%eax);");
    asm("loc_6711CAB: pop %ebx;");
    asm("loc_6711CAC: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711CB0() // _sub_6711CB0
{
    __DEBUG_ASM(6711CB0);
    // chunk 0x6711CB0 _sub_6711CB0
    asm("loc_6711CB0: push %ebx;");
    asm("loc_6711CB1: mov 8(%esp),%bl;");
    asm("loc_6711CB5: push %esi;");
    asm("loc_6711CB6: mov %ecx,%esi;");
    asm("loc_6711CB8: test $2,%bl;");
    asm("loc_6711CBB: je loc_6711CEB;");
    asm("loc_6711CBD: mov -4(%esi),%eax;");
    asm("loc_6711CC0: push %edi;");
    asm("loc_6711CC1: lea -4(%esi),%edi;");
    asm("loc_6711CC4: push $_sub_6712720;");
    asm("loc_6711CC9: push %eax;");
    asm("loc_6711CCA: push $0x90;");
    asm("loc_6711CCF: push %esi;");
    asm("loc_6711CD0: call _sub_67169F6;");
    asm("loc_6711CD5: test $1,%bl;");
    asm("loc_6711CD8: je loc_6711CE3;");
    asm("loc_6711CDA: push %edi;");
    asm("loc_6711CDB: call _sub_67169D0;");
    asm("loc_6711CE0: add $4,%esp;");
    asm("loc_6711CE3: mov %edi,%eax;");
    asm("loc_6711CE5: pop %edi;");
    asm("loc_6711CE6: pop %esi;");
    asm("loc_6711CE7: pop %ebx;");
    asm("loc_6711CE8: ret $4;");
    asm("loc_6711CEB: mov %esi,%ecx;");
    asm("loc_6711CED: call _sub_6712720;");
    asm("loc_6711CF2: test $1,%bl;");
    asm("loc_6711CF5: je loc_6711D00;");
    asm("loc_6711CF7: push %esi;");
    asm("loc_6711CF8: call _sub_67169D0;");
    asm("loc_6711CFD: add $4,%esp;");
    asm("loc_6711D00: mov %esi,%eax;");
    asm("loc_6711D02: pop %esi;");
    asm("loc_6711D03: pop %ebx;");
    asm("loc_6711D04: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711D10() // ??0IMEInputBox@@QAE@ABU0@@Z
{
    __DEBUG_ASM(6711D10);
    // chunk 0x6711D10 _sub_6711D10
    asm("loc_6711D10: mov 4(%esp),%edx;");
    asm("loc_6711D14: mov %ecx,%eax;");
    asm("loc_6711D16: push %esi;");
    asm("loc_6711D17: push %edi;");
    asm("loc_6711D18: lea 4(%edx),%esi;");
    asm("loc_6711D1B: lea 4(%eax),%edi;");
    asm("loc_6711D1E: mov $6,%ecx;");
    asm("loc_6711D23: rep movsl (%esi),(%edi);");
    asm("loc_6711D25: lea 0x1C(%edx),%ecx;");
    asm("loc_6711D28: lea 0x1C(%eax),%esi;");
    asm("loc_6711D2B: mov (%ecx),%edi;");
    asm("loc_6711D2D: mov %edi,(%esi);");
    asm("loc_6711D2F: mov 4(%ecx),%edi;");
    asm("loc_6711D32: mov %edi,4(%esi);");
    asm("loc_6711D35: mov 8(%ecx),%edi;");
    asm("loc_6711D38: mov %edi,8(%esi);");
    asm("loc_6711D3B: lea 0x34(%eax),%edi;");
    asm("loc_6711D3E: mov 0xC(%ecx),%ecx;");
    asm("loc_6711D41: mov %ecx,0xC(%esi);");
    asm("loc_6711D44: mov 0x2C(%edx),%ecx;");
    asm("loc_6711D47: mov %ecx,0x2C(%eax);");
    asm("loc_6711D4A: mov 0x30(%edx),%ecx;");
    asm("loc_6711D4D: mov %ecx,0x30(%eax);");
    asm("loc_6711D50: lea 0x34(%edx),%esi;");
    asm("loc_6711D53: mov $0x10,%ecx;");
    asm("loc_6711D58: rep movsl (%esi),(%edi);");
    asm("loc_6711D5A: mov 0x74(%edx),%ecx;");
    asm("loc_6711D5D: pop %edi;");
    asm("loc_6711D5E: mov %ecx,0x74(%eax);");
    asm("loc_6711D61: mov 0x78(%edx),%ecx;");
    asm("loc_6711D64: mov %ecx,0x78(%eax);");
    asm("loc_6711D67: mov 0x7C(%edx),%cl;");
    asm("loc_6711D6A: mov %cl,0x7C(%eax);");
    asm("loc_6711D6D: mov 0x80(%edx),%ecx;");
    asm("loc_6711D73: mov %ecx,0x80(%eax);");
    asm("loc_6711D79: mov 0x84(%edx),%ecx;");
    asm("loc_6711D7F: mov %ecx,0x84(%eax);");
    asm("loc_6711D85: mov 0x88(%edx),%ecx;");
    asm("loc_6711D8B: mov %ecx,0x88(%eax);");
    asm("loc_6711D91: mov 0x8C(%edx),%cl;");
    asm("loc_6711D97: mov %cl,0x8C(%eax);");
    asm("loc_6711D9D: movl $_off_6717188,(%eax);");
    asm("loc_6711DA3: mov 0x90(%edx),%edx;");
    asm("loc_6711DA9: movl $_off_67171B4,(%eax);");
    asm("loc_6711DAF: mov %edx,0x90(%eax);");
    asm("loc_6711DB5: pop %esi;");
    asm("loc_6711DB6: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711DC0() // ??4IMEInputBox@@QAEAAU0@ABU0@@Z
{
    __DEBUG_ASM(6711DC0);
    // chunk 0x6711DC0 _sub_6711DC0
    asm("loc_6711DC0: mov 4(%esp),%edx;");
    asm("loc_6711DC4: push %ebx;");
    asm("loc_6711DC5: mov %ecx,%eax;");
    asm("loc_6711DC7: push %esi;");
    asm("loc_6711DC8: push %edi;");
    asm("loc_6711DC9: lea 4(%edx),%esi;");
    asm("loc_6711DCC: lea 4(%eax),%edi;");
    asm("loc_6711DCF: mov $6,%ecx;");
    asm("loc_6711DD4: rep movsl (%esi),(%edi);");
    asm("loc_6711DD6: lea 0x1C(%edx),%ecx;");
    asm("loc_6711DD9: lea 0x1C(%eax),%esi;");
    asm("loc_6711DDC: mov (%ecx),%edi;");
    asm("loc_6711DDE: mov %edi,(%esi);");
    asm("loc_6711DE0: mov 4(%ecx),%edi;");
    asm("loc_6711DE3: mov %edi,4(%esi);");
    asm("loc_6711DE6: mov 8(%ecx),%edi;");
    asm("loc_6711DE9: mov %edi,8(%esi);");
    asm("loc_6711DEC: mov $0x20,%edi;");
    asm("loc_6711DF1: mov 0xC(%ecx),%ecx;");
    asm("loc_6711DF4: mov %ecx,0xC(%esi);");
    asm("loc_6711DF7: mov 0x2C(%edx),%ecx;");
    asm("loc_6711DFA: mov %ecx,0x2C(%eax);");
    asm("loc_6711DFD: mov 0x30(%edx),%ecx;");
    asm("loc_6711E00: mov %edx,%esi;");
    asm("loc_6711E02: mov %ecx,0x30(%eax);");
    asm("loc_6711E05: lea 0x34(%eax),%ecx;");
    asm("loc_6711E08: sub %eax,%esi;");
    asm("loc_6711E0A: mov (%esi,%ecx),%bx;");
    asm("loc_6711E0E: mov %bx,(%ecx);");
    asm("loc_6711E11: add $2,%ecx;");
    asm("loc_6711E14: dec %edi;");
    asm("loc_6711E15: jne loc_6711E0A;");
    asm("loc_6711E17: mov 0x74(%edx),%ecx;");
    asm("loc_6711E1A: pop %edi;");
    asm("loc_6711E1B: mov %ecx,0x74(%eax);");
    asm("loc_6711E1E: mov 0x78(%edx),%ecx;");
    asm("loc_6711E21: mov %ecx,0x78(%eax);");
    asm("loc_6711E24: mov 0x7C(%edx),%cl;");
    asm("loc_6711E27: mov %cl,0x7C(%eax);");
    asm("loc_6711E2A: mov 0x80(%edx),%ecx;");
    asm("loc_6711E30: mov %ecx,0x80(%eax);");
    asm("loc_6711E36: mov 0x84(%edx),%ecx;");
    asm("loc_6711E3C: mov %ecx,0x84(%eax);");
    asm("loc_6711E42: mov 0x88(%edx),%ecx;");
    asm("loc_6711E48: mov %ecx,0x88(%eax);");
    asm("loc_6711E4E: mov 0x8C(%edx),%cl;");
    asm("loc_6711E54: mov %cl,0x8C(%eax);");
    asm("loc_6711E5A: mov 0x90(%edx),%edx;");
    asm("loc_6711E60: pop %esi;");
    asm("loc_6711E61: mov %edx,0x90(%eax);");
    asm("loc_6711E67: pop %ebx;");
    asm("loc_6711E68: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711E70() // _sub_6711E70
{
    __DEBUG_ASM(6711E70);
    // chunk 0x6711E70 _sub_6711E70
    asm("loc_6711E70: push %ebx;");
    asm("loc_6711E71: mov 8(%esp),%bl;");
    asm("loc_6711E75: push %esi;");
    asm("loc_6711E76: mov %ecx,%esi;");
    asm("loc_6711E78: test $2,%bl;");
    asm("loc_6711E7B: je loc_6711EAB;");
    asm("loc_6711E7D: mov -4(%esi),%eax;");
    asm("loc_6711E80: push %edi;");
    asm("loc_6711E81: lea -4(%esi),%edi;");
    asm("loc_6711E84: push $_sub_6712CA0;");
    asm("loc_6711E89: push %eax;");
    asm("loc_6711E8A: push $0x94;");
    asm("loc_6711E8F: push %esi;");
    asm("loc_6711E90: call _sub_67169F6;");
    asm("loc_6711E95: test $1,%bl;");
    asm("loc_6711E98: je loc_6711EA3;");
    asm("loc_6711E9A: push %edi;");
    asm("loc_6711E9B: call _sub_67169D0;");
    asm("loc_6711EA0: add $4,%esp;");
    asm("loc_6711EA3: mov %edi,%eax;");
    asm("loc_6711EA5: pop %edi;");
    asm("loc_6711EA6: pop %esi;");
    asm("loc_6711EA7: pop %ebx;");
    asm("loc_6711EA8: ret $4;");
    asm("loc_6711EAB: mov %esi,%ecx;");
    asm("loc_6711EAD: call _sub_6712CA0;");
    asm("loc_6711EB2: test $1,%bl;");
    asm("loc_6711EB5: je loc_6711EC0;");
    asm("loc_6711EB7: push %esi;");
    asm("loc_6711EB8: call _sub_67169D0;");
    asm("loc_6711EBD: add $4,%esp;");
    asm("loc_6711EC0: mov %esi,%eax;");
    asm("loc_6711EC2: pop %esi;");
    asm("loc_6711EC3: pop %ebx;");
    asm("loc_6711EC4: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711ED0() // ?IsImeAvailable@IMEFocus@@QBE_NXZ
{
    __DEBUG_ASM(6711ED0);
    // chunk 0x6711ED0 _sub_6711ED0
    asm("loc_6711ED0: mov 0x17(%ecx),%al;");
    asm("loc_6711ED3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711EE0() // ?HasRevertedLevel3Drawing@IMEFocus@@QBE_NXZ
{
    __DEBUG_ASM(6711EE0);
    // chunk 0x6711EE0 _sub_6711EE0
    asm("loc_6711EE0: mov 0x15(%ecx),%al;");
    asm("loc_6711EE3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711EF0() // ??0IMEFocus@@QAE@ABU0@@Z
{
    __DEBUG_ASM(6711EF0);
    // chunk 0x6711EF0 _sub_6711EF0
    asm("loc_6711EF0: push %ecx;");
    asm("loc_6711EF1: push %ebx;");
    asm("loc_6711EF2: push %ebp;");
    asm("loc_6711EF3: mov 0x10(%esp),%ebp;");
    asm("loc_6711EF7: push %esi;");
    asm("loc_6711EF8: mov %ecx,%esi;");
    asm("loc_6711EFA: push %edi;");
    asm("loc_6711EFB: mov 4(%ebp),%al;");
    asm("loc_6711EFE: push $0xC;");
    asm("loc_6711F00: mov %al,4(%esi);");
    asm("loc_6711F03: call _sub_67169DC;");
    asm("loc_6711F08: mov %eax,(%eax);");
    asm("loc_6711F0A: mov %eax,4(%eax);");
    asm("loc_6711F0D: mov %eax,8(%esi);");
    asm("loc_6711F10: movl $0,0xC(%esi);");
    asm("loc_6711F17: mov 8(%ebp),%ecx;");
    asm("loc_6711F1A: mov (%eax),%edi;");
    asm("loc_6711F1C: add $4,%esp;");
    asm("loc_6711F1F: mov %ecx,0x10(%esp);");
    asm("loc_6711F23: mov (%ecx),%ebx;");
    asm("loc_6711F25: cmp %ecx,%ebx;");
    asm("loc_6711F27: je loc_6711F6A;");
    asm("loc_6711F29: mov 4(%edi),%ebp;");
    asm("loc_6711F2C: push $0xC;");
    asm("loc_6711F2E: call _sub_67169DC;");
    asm("loc_6711F33: add $4,%esp;");
    asm("loc_6711F36: mov %edi,(%eax);");
    asm("loc_6711F38: test %ebp,%ebp;");
    asm("loc_6711F3A: jne loc_6711F3E;");
    asm("loc_6711F3C: mov %eax,%ebp;");
    asm("loc_6711F3E: mov %ebp,4(%eax);");
    asm("loc_6711F41: mov %eax,4(%edi);");
    asm("loc_6711F44: mov 4(%eax),%ecx;");
    asm("loc_6711F47: mov %eax,(%ecx);");
    asm("loc_6711F49: add $8,%eax;");
    asm("loc_6711F4C: test %eax,%eax;");
    asm("loc_6711F4E: je loc_6711F55;");
    asm("loc_6711F50: mov 8(%ebx),%edx;");
    asm("loc_6711F53: mov %edx,(%eax);");
    asm("loc_6711F55: mov 0xC(%esi),%ecx;");
    asm("loc_6711F58: mov 0x10(%esp),%eax;");
    asm("loc_6711F5C: inc %ecx;");
    asm("loc_6711F5D: mov %ecx,0xC(%esi);");
    asm("loc_6711F60: mov (%ebx),%ebx;");
    asm("loc_6711F62: cmp %eax,%ebx;");
    asm("loc_6711F64: jne loc_6711F29;");
    asm("loc_6711F66: mov 0x18(%esp),%ebp;");
    asm("loc_6711F6A: mov 0x10(%ebp),%eax;");
    asm("loc_6711F6D: pop %edi;");
    asm("loc_6711F6E: mov %eax,0x10(%esi);");
    asm("loc_6711F71: mov 0x14(%ebp),%cl;");
    asm("loc_6711F74: mov %cl,0x14(%esi);");
    asm("loc_6711F77: mov 0x15(%ebp),%dl;");
    asm("loc_6711F7A: mov %dl,0x15(%esi);");
    asm("loc_6711F7D: mov 0x16(%ebp),%al;");
    asm("loc_6711F80: mov %al,0x16(%esi);");
    asm("loc_6711F83: mov 0x17(%ebp),%cl;");
    asm("loc_6711F86: mov %cl,0x17(%esi);");
    asm("loc_6711F89: movl $_off_6717158,(%esi);");
    asm("loc_6711F8F: mov %esi,%eax;");
    asm("loc_6711F91: pop %esi;");
    asm("loc_6711F92: pop %ebp;");
    asm("loc_6711F93: pop %ebx;");
    asm("loc_6711F94: pop %ecx;");
    asm("loc_6711F95: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6711FA0() // ??4IMEFocus@@QAEAAU0@ABU0@@Z
{
    __DEBUG_ASM(6711FA0);
    // chunk 0x6711FA0 _sub_6711FA0
    asm("loc_6711FA0: sub $8,%esp;");
    asm("loc_6711FA3: mov 0xC(%esp),%eax;");
    asm("loc_6711FA7: push %ebx;");
    asm("loc_6711FA8: push %ebp;");
    asm("loc_6711FA9: lea 4(%ecx),%ebp;");
    asm("loc_6711FAC: lea 4(%eax),%edx;");
    asm("loc_6711FAF: push %esi;");
    asm("loc_6711FB0: cmp %edx,%ebp;");
    asm("loc_6711FB2: push %edi;");
    asm("loc_6711FB3: mov %ecx,0x14(%esp);");
    asm("loc_6711FB7: je loc_671205F;");
    asm("loc_6711FBD: mov 4(%ebp),%esi;");
    asm("loc_6711FC0: mov 4(%edx),%edx;");
    asm("loc_6711FC3: mov %edx,0x10(%esp);");
    asm("loc_6711FC7: mov (%esi),%eax;");
    asm("loc_6711FC9: mov (%edx),%ebx;");
    asm("loc_6711FCB: cmp %esi,%eax;");
    asm("loc_6711FCD: je loc_6711FE1;");
    asm("loc_6711FCF: cmp %edx,%ebx;");
    asm("loc_6711FD1: je loc_6711FE1;");
    asm("loc_6711FD3: mov 8(%ebx),%edi;");
    asm("loc_6711FD6: mov %edi,8(%eax);");
    asm("loc_6711FD9: mov (%eax),%eax;");
    asm("loc_6711FDB: mov (%ebx),%ebx;");
    asm("loc_6711FDD: cmp %esi,%eax;");
    asm("loc_6711FDF: jne loc_6711FCF;");
    asm("loc_6711FE1: cmp %esi,%eax;");
    asm("loc_6711FE3: mov %eax,%edi;");
    asm("loc_6711FE5: je loc_6712016;");
    asm("loc_6711FE7: mov %edi,%eax;");
    asm("loc_6711FE9: mov (%edi),%edi;");
    asm("loc_6711FEB: push %eax;");
    asm("loc_6711FEC: mov 4(%eax),%ecx;");
    asm("loc_6711FEF: mov (%eax),%edx;");
    asm("loc_6711FF1: mov %edx,(%ecx);");
    asm("loc_6711FF3: mov (%eax),%ecx;");
    asm("loc_6711FF5: mov 4(%eax),%edx;");
    asm("loc_6711FF8: mov %edx,4(%ecx);");
    asm("loc_6711FFB: call _sub_67169D0;");
    asm("loc_6712000: mov 8(%ebp),%ecx;");
    asm("loc_6712003: add $4,%esp;");
    asm("loc_6712006: dec %ecx;");
    asm("loc_6712007: cmp %esi,%edi;");
    asm("loc_6712009: mov %ecx,8(%ebp);");
    asm("loc_671200C: jne loc_6711FE7;");
    asm("loc_671200E: mov 0x14(%esp),%ecx;");
    asm("loc_6712012: mov 0x10(%esp),%edx;");
    asm("loc_6712016: cmp %edx,%ebx;");
    asm("loc_6712018: je loc_671205B;");
    asm("loc_671201A: mov 4(%esi),%edi;");
    asm("loc_671201D: push $0xC;");
    asm("loc_671201F: call _sub_67169DC;");
    asm("loc_6712024: add $4,%esp;");
    asm("loc_6712027: mov %esi,(%eax);");
    asm("loc_6712029: test %edi,%edi;");
    asm("loc_671202B: jne loc_671202F;");
    asm("loc_671202D: mov %eax,%edi;");
    asm("loc_671202F: mov %edi,4(%eax);");
    asm("loc_6712032: mov %eax,4(%esi);");
    asm("loc_6712035: mov 4(%eax),%ecx;");
    asm("loc_6712038: mov %eax,(%ecx);");
    asm("loc_671203A: add $8,%eax;");
    asm("loc_671203D: test %eax,%eax;");
    asm("loc_671203F: je loc_6712046;");
    asm("loc_6712041: mov 8(%ebx),%edx;");
    asm("loc_6712044: mov %edx,(%eax);");
    asm("loc_6712046: mov 8(%ebp),%ecx;");
    asm("loc_6712049: mov 0x10(%esp),%eax;");
    asm("loc_671204D: inc %ecx;");
    asm("loc_671204E: mov %ecx,8(%ebp);");
    asm("loc_6712051: mov (%ebx),%ebx;");
    asm("loc_6712053: cmp %eax,%ebx;");
    asm("loc_6712055: jne loc_671201A;");
    asm("loc_6712057: mov 0x14(%esp),%ecx;");
    asm("loc_671205B: mov 0x1C(%esp),%eax;");
    asm("loc_671205F: mov 0x10(%eax),%edx;");
    asm("loc_6712062: pop %edi;");
    asm("loc_6712063: mov %edx,0x10(%ecx);");
    asm("loc_6712066: mov 0x14(%eax),%dl;");
    asm("loc_6712069: mov %dl,0x14(%ecx);");
    asm("loc_671206C: mov 0x15(%eax),%dl;");
    asm("loc_671206F: mov %dl,0x15(%ecx);");
    asm("loc_6712072: mov 0x16(%eax),%dl;");
    asm("loc_6712075: mov %dl,0x16(%ecx);");
    asm("loc_6712078: mov 0x17(%eax),%al;");
    asm("loc_671207B: pop %esi;");
    asm("loc_671207C: mov %al,0x17(%ecx);");
    asm("loc_671207F: pop %ebp;");
    asm("loc_6712080: mov %ecx,%eax;");
    asm("loc_6712082: pop %ebx;");
    asm("loc_6712083: add $8,%esp;");
    asm("loc_6712086: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712090() // _sub_6712090
{
    __DEBUG_ASM(6712090);
    // chunk 0x6712090 _sub_6712090
    asm("loc_6712090: push %ebx;");
    asm("loc_6712091: mov 8(%esp),%bl;");
    asm("loc_6712095: push %esi;");
    asm("loc_6712096: mov %ecx,%esi;");
    asm("loc_6712098: test $2,%bl;");
    asm("loc_671209B: je loc_67120C8;");
    asm("loc_671209D: mov -4(%esi),%eax;");
    asm("loc_67120A0: push %edi;");
    asm("loc_67120A1: lea -4(%esi),%edi;");
    asm("loc_67120A4: push $_sub_67111D0;");
    asm("loc_67120A9: push %eax;");
    asm("loc_67120AA: push $0x18;");
    asm("loc_67120AC: push %esi;");
    asm("loc_67120AD: call _sub_67169F6;");
    asm("loc_67120B2: test $1,%bl;");
    asm("loc_67120B5: je loc_67120C0;");
    asm("loc_67120B7: push %edi;");
    asm("loc_67120B8: call _sub_67169D0;");
    asm("loc_67120BD: add $4,%esp;");
    asm("loc_67120C0: mov %edi,%eax;");
    asm("loc_67120C2: pop %edi;");
    asm("loc_67120C3: pop %esi;");
    asm("loc_67120C4: pop %ebx;");
    asm("loc_67120C5: ret $4;");
    asm("loc_67120C8: mov %esi,%ecx;");
    asm("loc_67120CA: call _sub_67111D0;");
    asm("loc_67120CF: test $1,%bl;");
    asm("loc_67120D2: je loc_67120DD;");
    asm("loc_67120D4: push %esi;");
    asm("loc_67120D5: call _sub_67169D0;");
    asm("loc_67120DA: add $4,%esp;");
    asm("loc_67120DD: mov %esi,%eax;");
    asm("loc_67120DF: pop %esi;");
    asm("loc_67120E0: pop %ebx;");
    asm("loc_67120E1: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67120F0() // _sub_67120F0
{
    __DEBUG_ASM(67120F0);
    // chunk 0x67120F0 _sub_67120F0
    asm("loc_67120F0: push %ebp;");
    asm("loc_67120F1: mov %esp,%ebp;");
    asm("loc_67120F3: sub $0x114,%esp;");
    asm("loc_67120F9: mov _data_671B3E8,%al;");
    asm("loc_67120FE: push %ebx;");
    asm("loc_67120FF: push %esi;");
    asm("loc_6712100: push %edi;");
    asm("loc_6712101: test %al,%al;");
    asm("loc_6712103: jne loc_6712131;");
    asm("loc_6712105: lea -0x114(%ebp),%eax;");
    asm("loc_671210B: movb $1,_data_671B3E8;");
    asm("loc_6712112: push %eax;");
    asm("loc_6712113: movl $0x114,-0x114(%ebp);");
    asm("loc_671211D: calll *_off_6719360;");
    asm("loc_6712123: cmpl $2,-0x104(%ebp);");
    asm("loc_671212A: sete _data_671B3E9;");
    asm("loc_6712131: mov _data_671B3E9,%al;");
    asm("loc_6712136: mov 0x10(%ebp),%edx;");
    asm("loc_6712139: test %al,%al;");
    asm("loc_671213B: je loc_671215D;");
    asm("loc_671213D: mov 0x14(%ebp),%ecx;");
    asm("loc_6712140: mov 0xC(%ebp),%eax;");
    asm("loc_6712143: push %ecx;");
    asm("loc_6712144: mov 8(%ebp),%ecx;");
    asm("loc_6712147: push %edx;");
    asm("loc_6712148: push %eax;");
    asm("loc_6712149: push %ecx;");
    asm("loc_671214A: calll *_off_6719350;");
    asm("loc_6712150: lea -0x120(%ebp),%esp;");
    asm("loc_6712156: pop %edi;");
    asm("loc_6712157: pop %esi;");
    asm("loc_6712158: pop %ebx;");
    asm("loc_6712159: mov %ebp,%esp;");
    asm("loc_671215B: pop %ebp;");
    asm("loc_671215C: ret;");
    asm("loc_671215D: mov 0xC(%ebp),%ebx;");
    asm("loc_6712160: push $0;");
    asm("loc_6712162: push $0;");
    asm("loc_6712164: push $0;");
    asm("loc_6712166: push $0;");
    asm("loc_6712168: push %edx;");
    asm("loc_6712169: push %ebx;");
    asm("loc_671216A: push $0;");
    asm("loc_671216C: push $0;");
    asm("loc_671216E: calll *_off_671936C;");
    asm("loc_6712174: mov %eax,%esi;");
    asm("loc_6712176: test %esi,%esi;");
    asm("loc_6712178: jne loc_6712199;");
    asm("loc_671217A: test %ebx,%ebx;");
    asm("loc_671217C: je loc_671218A;");
    asm("loc_671217E: cmp %ax,(%ebx);");
    asm("loc_6712181: jne loc_671218A;");
    asm("loc_6712183: mov $_data_671B3F0,%edi;");
    asm("loc_6712188: jmp loc_67121BC;");
    asm("loc_671218A: xor %eax,%eax;");
    asm("loc_671218C: lea -0x120(%ebp),%esp;");
    asm("loc_6712192: pop %edi;");
    asm("loc_6712193: pop %esi;");
    asm("loc_6712194: pop %ebx;");
    asm("loc_6712195: mov %ebp,%esp;");
    asm("loc_6712197: pop %ebp;");
    asm("loc_6712198: ret;");
    asm("loc_6712199: mov %esi,%eax;");
    asm("loc_671219B: add $3,%eax;");
    asm("loc_671219E: and $0xFC,%al;");
    asm("loc_67121A0: call _sub_6716AF0;");
    asm("loc_67121A5: mov 0x10(%ebp),%eax;");
    asm("loc_67121A8: mov %esp,%edi;");
    asm("loc_67121AA: push $0;");
    asm("loc_67121AC: push $0;");
    asm("loc_67121AE: push %esi;");
    asm("loc_67121AF: push %edi;");
    asm("loc_67121B0: push %eax;");
    asm("loc_67121B1: push %ebx;");
    asm("loc_67121B2: push $0;");
    asm("loc_67121B4: push $0;");
    asm("loc_67121B6: calll *_off_671936C;");
    asm("loc_67121BC: mov 0x14(%ebp),%ecx;");
    asm("loc_67121BF: mov 8(%ebp),%edx;");
    asm("loc_67121C2: push %ecx;");
    asm("loc_67121C3: push %esi;");
    asm("loc_67121C4: push %edi;");
    asm("loc_67121C5: push %edx;");
    asm("loc_67121C6: calll *_import_6717018;");
    asm("loc_67121CC: lea -0x120(%ebp),%esp;");
    asm("loc_67121D2: pop %edi;");
    asm("loc_67121D3: pop %esi;");
    asm("loc_67121D4: pop %ebx;");
    asm("loc_67121D5: mov %ebp,%esp;");
    asm("loc_67121D7: pop %ebp;");
    asm("loc_67121D8: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67121E0() // _sub_67121E0
{
    __DEBUG_ASM(67121E0);
    // chunk 0x67121E0 _sub_67121E0
    asm("loc_67121E0: mov 4(%esp),%edx;");
    asm("loc_67121E4: xor %eax,%eax;");
    asm("loc_67121E6: test %edx,%edx;");
    asm("loc_67121E8: je loc_671229C;");
    asm("loc_67121EE: mov (%edx),%cx;");
    asm("loc_67121F1: push %esi;");
    asm("loc_67121F2: cmp $0x30,%cx;");
    asm("loc_67121F6: jne loc_6712272;");
    asm("loc_67121F8: mov 2(%edx),%si;");
    asm("loc_67121FC: cmp $0x78,%si;");
    asm("loc_6712200: je loc_6712208;");
    asm("loc_6712202: cmp $0x58,%si;");
    asm("loc_6712206: jne loc_6712272;");
    asm("loc_6712208: mov 4(%edx),%cx;");
    asm("loc_671220C: add $4,%edx;");
    asm("loc_671220F: xor %esi,%esi;");
    asm("loc_6712211: test %cx,%cx;");
    asm("loc_6712214: je loc_671229B;");
    asm("loc_671221A: cmp $0x30,%cx;");
    asm("loc_671221E: jb loc_6712231;");
    asm("loc_6712220: cmp $0x39,%cx;");
    asm("loc_6712224: ja loc_6712231;");
    asm("loc_6712226: and $0xFFFF,%ecx;");
    asm("loc_671222C: sub $0x30,%ecx;");
    asm("loc_671222F: jmp loc_671225D;");
    asm("loc_6712231: cmp $0x41,%cx;");
    asm("loc_6712235: jb loc_6712248;");
    asm("loc_6712237: cmp $0x46,%cx;");
    asm("loc_671223B: ja loc_6712248;");
    asm("loc_671223D: and $0xFFFF,%ecx;");
    asm("loc_6712243: sub $0x37,%ecx;");
    asm("loc_6712246: jmp loc_671225D;");
    asm("loc_6712248: cmp $0x61,%cx;");
    asm("loc_671224C: jb loc_671225F;");
    asm("loc_671224E: cmp $0x66,%cx;");
    asm("loc_6712252: ja loc_671225F;");
    asm("loc_6712254: and $0xFFFF,%ecx;");
    asm("loc_671225A: sub $0x57,%ecx;");
    asm("loc_671225D: mov %ecx,%esi;");
    asm("loc_671225F: mov 2(%edx),%cx;");
    asm("loc_6712263: add $2,%edx;");
    asm("loc_6712266: shl $4,%eax;");
    asm("loc_6712269: add %esi,%eax;");
    asm("loc_671226B: test %cx,%cx;");
    asm("loc_671226E: jne loc_671221A;");
    asm("loc_6712270: pop %esi;");
    asm("loc_6712271: ret;");
    asm("loc_6712272: test %cx,%cx;");
    asm("loc_6712275: je loc_671229B;");
    asm("loc_6712277: cmp $0x30,%cx;");
    asm("loc_671227B: jb loc_671229B;");
    asm("loc_671227D: cmp $0x39,%cx;");
    asm("loc_6712281: ja loc_671229B;");
    asm("loc_6712283: lea (%eax,%eax,4),%eax;");
    asm("loc_6712286: and $0xFFFF,%ecx;");
    asm("loc_671228C: add $2,%edx;");
    asm("loc_671228F: lea -0x30(%ecx,%eax,2),%eax;");
    asm("loc_6712293: mov (%edx),%cx;");
    asm("loc_6712296: test %cx,%cx;");
    asm("loc_6712299: jne loc_6712277;");
    asm("loc_671229B: pop %esi;");
    asm("loc_671229C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67122A0() // _sub_67122A0
{
    __DEBUG_ASM(67122A0);
    // chunk 0x67122A0 _sub_67122A0
    asm("loc_67122A0: mov 4(%esp),%ecx;");
    asm("loc_67122A4: test %ecx,%ecx;");
    asm("loc_67122A6: jne loc_67122AB;");
    asm("loc_67122A8: xor %eax,%eax;");
    asm("loc_67122AA: ret;");
    asm("loc_67122AB: mov _data_6719040,%eax;");
    asm("loc_67122B0: inc %eax;");
    asm("loc_67122B1: cmp $4,%eax;");
    asm("loc_67122B4: mov %eax,_data_6719040;");
    asm("loc_67122B9: jne loc_67122C2;");
    asm("loc_67122BB: xor %eax,%eax;");
    asm("loc_67122BD: mov %eax,_data_6719040;");
    asm("loc_67122C2: shl $0xB,%eax;");
    asm("loc_67122C5: push %esi;");
    asm("loc_67122C6: mov 0xC(%esp),%esi;");
    asm("loc_67122CA: add $_data_67193E8,%eax;");
    asm("loc_67122CF: push $0x800;");
    asm("loc_67122D4: push %eax;");
    asm("loc_67122D5: push %esi;");
    asm("loc_67122D6: push %ecx;");
    asm("loc_67122D7: calll *_off_6719384;");
    asm("loc_67122DD: test %eax,%eax;");
    asm("loc_67122DF: jne loc_67122FE;");
    asm("loc_67122E1: mov _data_6719040,%eax;");
    asm("loc_67122E6: push %esi;");
    asm("loc_67122E7: shl $0xB,%eax;");
    asm("loc_67122EA: add $_data_67193E8,%eax;");
    asm("loc_67122EF: push $_data_6719044;");
    asm("loc_67122F4: push %eax;");
    asm("loc_67122F5: calll *_off_671938C;");
    asm("loc_67122FB: add $0xC,%esp;");
    asm("loc_67122FE: mov _data_6719040,%eax;");
    asm("loc_6712303: pop %esi;");
    asm("loc_6712304: shl $0xB,%eax;");
    asm("loc_6712307: add $_data_67193E8,%eax;");
    asm("loc_671230C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712310() // _sub_6712310
{
    __DEBUG_ASM(6712310);
    // chunk 0x6712310 _sub_6712310
    asm("loc_6712310: sub $8,%esp;");
    asm("loc_6712313: lea (%esp),%eax;");
    asm("loc_6712317: movl $0,(%esp);");
    asm("loc_671231F: push %eax;");
    asm("loc_6712320: push $_data_6717804;");
    asm("loc_6712325: push $1;");
    asm("loc_6712327: push $0;");
    asm("loc_6712329: push $_data_6717494;");
    asm("loc_671232E: calll *_import_671712C;");
    asm("loc_6712334: test %eax,%eax;");
    asm("loc_6712336: jl loc_6712378;");
    asm("loc_6712338: mov (%esp),%eax;");
    asm("loc_671233C: test %eax,%eax;");
    asm("loc_671233E: je loc_6712378;");
    asm("loc_6712340: mov (%eax),%ecx;");
    asm("loc_6712342: lea 4(%esp),%edx;");
    asm("loc_6712346: push %edx;");
    asm("loc_6712347: push %eax;");
    asm("loc_6712348: calll *0x2C(%ecx);");
    asm("loc_671234B: test %eax,%eax;");
    asm("loc_671234D: jl loc_6712358;");
    asm("loc_671234F: mov 4(%esp),%eax;");
    asm("loc_6712353: mov %eax,_data_671B3EC;");
    asm("loc_6712358: mov _data_671B3EC,%eax;");
    asm("loc_671235D: test $8,%ah;");
    asm("loc_6712360: jne loc_671236E;");
    asm("loc_6712362: mov (%esp),%eax;");
    asm("loc_6712366: push $8;");
    asm("loc_6712368: push %eax;");
    asm("loc_6712369: mov (%eax),%ecx;");
    asm("loc_671236B: calll *0x28(%ecx);");
    asm("loc_671236E: mov (%esp),%eax;");
    asm("loc_6712372: push %eax;");
    asm("loc_6712373: mov (%eax),%edx;");
    asm("loc_6712375: calll *8(%edx);");
    asm("loc_6712378: add $8,%esp;");
    asm("loc_671237B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712380() // _sub_6712380
{
    __DEBUG_ASM(6712380);
    // chunk 0x6712380 _sub_6712380
    asm("loc_6712380: push %ecx;");
    asm("loc_6712381: lea (%esp),%eax;");
    asm("loc_6712385: movl $0,(%esp);");
    asm("loc_671238D: push %eax;");
    asm("loc_671238E: push $_data_6717804;");
    asm("loc_6712393: push $1;");
    asm("loc_6712395: push $0;");
    asm("loc_6712397: push $_data_6717494;");
    asm("loc_671239C: calll *_import_671712C;");
    asm("loc_67123A2: test %eax,%eax;");
    asm("loc_67123A4: jl loc_67123C9;");
    asm("loc_67123A6: mov (%esp),%eax;");
    asm("loc_67123AA: test %eax,%eax;");
    asm("loc_67123AC: je loc_67123C9;");
    asm("loc_67123AE: mov _data_671B3EC,%ecx;");
    asm("loc_67123B4: test %ecx,%ecx;");
    asm("loc_67123B6: je loc_67123C3;");
    asm("loc_67123B8: mov (%eax),%edx;");
    asm("loc_67123BA: push %ecx;");
    asm("loc_67123BB: push %eax;");
    asm("loc_67123BC: calll *0x28(%edx);");
    asm("loc_67123BF: mov (%esp),%eax;");
    asm("loc_67123C3: mov (%eax),%ecx;");
    asm("loc_67123C5: push %eax;");
    asm("loc_67123C6: calll *8(%ecx);");
    asm("loc_67123C9: pop %ecx;");
    asm("loc_67123CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67123D0() // _sub_67123D0
{
    __DEBUG_ASM(67123D0);
    // chunk 0x67123D0 _sub_67123D0
    asm("loc_67123D0: mov %ecx,%edx;");
    asm("loc_67123D2: mov 4(%esp),%ecx;");
    asm("loc_67123D6: push %edi;");
    asm("loc_67123D7: xor %eax,%eax;");
    asm("loc_67123D9: mov %ecx,0x58(%edx);");
    asm("loc_67123DC: mov $0xF,%ecx;");
    asm("loc_67123E1: lea 0xC(%edx),%edi;");
    asm("loc_67123E4: mov %eax,0x4C(%edx);");
    asm("loc_67123E7: mov %eax,0x50(%edx);");
    asm("loc_67123EA: mov %eax,0x54(%edx);");
    asm("loc_67123ED: movl $_off_67171EC,(%edx);");
    asm("loc_67123F3: mov %al,0x48(%edx);");
    asm("loc_67123F6: mov %eax,8(%edx);");
    asm("loc_67123F9: mov %eax,4(%edx);");
    asm("loc_67123FC: rep stos %eax,(%edi);");
    asm("loc_67123FE: mov %edx,%eax;");
    asm("loc_6712400: pop %edi;");
    asm("loc_6712401: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712410() // _sub_6712410
{
    __DEBUG_ASM(6712410);
    // chunk 0x6712410 _sub_6712410
    asm("loc_6712410: push %esi;");
    asm("loc_6712411: mov %ecx,%esi;");
    asm("loc_6712413: call _sub_6712480;");
    asm("loc_6712418: mov 8(%esp),%edx;");
    asm("loc_671241C: mov 0x58(%esi),%ecx;");
    asm("loc_671241F: push %edx;");
    asm("loc_6712420: mov 0x4C(%esi),%edx;");
    asm("loc_6712423: mov (%ecx),%eax;");
    asm("loc_6712425: push %edx;");
    asm("loc_6712426: mov 0x54(%esi),%edx;");
    asm("loc_6712429: push %edx;");
    asm("loc_671242A: mov 0x50(%esi),%edx;");
    asm("loc_671242D: push %edx;");
    asm("loc_671242E: calll *0x30(%eax);");
    asm("loc_6712431: pop %esi;");
    asm("loc_6712432: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712440() // _sub_6712440
{
    __DEBUG_ASM(6712440);
    // chunk 0x6712440 _sub_6712440
    asm("loc_6712440: push %esi;");
    asm("loc_6712441: mov %ecx,%esi;");
    asm("loc_6712443: push %edi;");
    asm("loc_6712444: mov 4(%esi),%eax;");
    asm("loc_6712447: movl $_off_67171EC,(%esi);");
    asm("loc_671244D: test %eax,%eax;");
    asm("loc_671244F: je loc_671245A;");
    asm("loc_6712451: push $0;");
    asm("loc_6712453: push %eax;");
    asm("loc_6712454: calll *_import_671701C;");
    asm("loc_671245A: mov 8(%esi),%eax;");
    asm("loc_671245D: mov _import_6717010,%edi;");
    asm("loc_6712463: test %eax,%eax;");
    asm("loc_6712465: je loc_671246A;");
    asm("loc_6712467: push %eax;");
    asm("loc_6712468: call *%edi;");
    asm("loc_671246A: mov 4(%esi),%esi;");
    asm("loc_671246D: test %esi,%esi;");
    asm("loc_671246F: je loc_6712474;");
    asm("loc_6712471: push %esi;");
    asm("loc_6712472: call *%edi;");
    asm("loc_6712474: pop %edi;");
    asm("loc_6712475: pop %esi;");
    asm("loc_6712476: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712480() // _sub_6712480
{
    __DEBUG_ASM(6712480);
    // chunk 0x6712480 _sub_6712480
    asm("loc_6712480: push %esi;");
    asm("loc_6712481: mov %ecx,%esi;");
    asm("loc_6712483: mov 0x48(%esi),%al;");
    asm("loc_6712486: test %al,%al;");
    asm("loc_6712488: je loc_67124CD;");
    asm("loc_671248A: mov 8(%esi),%eax;");
    asm("loc_671248D: push %edi;");
    asm("loc_671248E: mov _import_6717010,%edi;");
    asm("loc_6712494: test %eax,%eax;");
    asm("loc_6712496: je loc_671249B;");
    asm("loc_6712498: push %eax;");
    asm("loc_6712499: call *%edi;");
    asm("loc_671249B: mov 4(%esi),%eax;");
    asm("loc_671249E: test %eax,%eax;");
    asm("loc_67124A0: je loc_67124A5;");
    asm("loc_67124A2: push %eax;");
    asm("loc_67124A3: call *%edi;");
    asm("loc_67124A5: push $0;");
    asm("loc_67124A7: calll *_import_6717020;");
    asm("loc_67124AD: mov %eax,4(%esi);");
    asm("loc_67124B0: lea 0xC(%esi),%eax;");
    asm("loc_67124B3: push %eax;");
    asm("loc_67124B4: calll *_import_6717014;");
    asm("loc_67124BA: mov 4(%esi),%ecx;");
    asm("loc_67124BD: push %eax;");
    asm("loc_67124BE: push %ecx;");
    asm("loc_67124BF: mov %eax,8(%esi);");
    asm("loc_67124C2: calll *_import_671701C;");
    asm("loc_67124C8: movb $0,0x48(%esi);");
    asm("loc_67124CC: pop %edi;");
    asm("loc_67124CD: pop %esi;");
    asm("loc_67124CE: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67124D0() // _sub_67124D0
{
    __DEBUG_ASM(67124D0);
    // chunk 0x67124D0 _sub_67124D0
    asm("loc_67124D0: mov %ecx,%eax;");
    asm("loc_67124D2: push %ebx;");
    asm("loc_67124D3: mov 8(%esp),%ebx;");
    asm("loc_67124D7: push %ebp;");
    asm("loc_67124D8: push %esi;");
    asm("loc_67124D9: lea 0xC(%eax),%edx;");
    asm("loc_67124DC: push %edi;");
    asm("loc_67124DD: mov $0xF,%ecx;");
    asm("loc_67124E2: mov %ebx,%edi;");
    asm("loc_67124E4: mov %edx,%esi;");
    asm("loc_67124E6: xor %ebp,%ebp;");
    asm("loc_67124E8: repe cmpsl (%edi),(%esi);");
    asm("loc_67124EA: je loc_67124FB;");
    asm("loc_67124EC: mov $0xF,%ecx;");
    asm("loc_67124F1: mov %ebx,%esi;");
    asm("loc_67124F3: mov %edx,%edi;");
    asm("loc_67124F5: rep movsl (%esi),(%edi);");
    asm("loc_67124F7: movb $1,0x48(%eax);");
    asm("loc_67124FB: pop %edi;");
    asm("loc_67124FC: pop %esi;");
    asm("loc_67124FD: pop %ebp;");
    asm("loc_67124FE: pop %ebx;");
    asm("loc_67124FF: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712510() // _sub_6712510
{
    __DEBUG_ASM(6712510);
    // chunk 0x6712510 _sub_6712510
    asm("loc_6712510: mov 4(%esp),%eax;");
    asm("loc_6712514: mov 0xC(%ecx),%edx;");
    asm("loc_6712517: neg %eax;");
    asm("loc_6712519: cmp %eax,%edx;");
    asm("loc_671251B: je loc_6712524;");
    asm("loc_671251D: mov %eax,0xC(%ecx);");
    asm("loc_6712520: movb $1,0x48(%ecx);");
    asm("loc_6712524: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712530() // _sub_6712530
{
    __DEBUG_ASM(6712530);
    // chunk 0x6712530 _sub_6712530
    asm("loc_6712530: mov 4(%esp),%eax;");
    asm("loc_6712534: mov %eax,0x4C(%ecx);");
    asm("loc_6712537: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712540() // _sub_6712540
{
    __DEBUG_ASM(6712540);
    // chunk 0x6712540 _sub_6712540
    asm("loc_6712540: mov 4(%esp),%eax;");
    asm("loc_6712544: mov 8(%esp),%edx;");
    asm("loc_6712548: mov %eax,0x50(%ecx);");
    asm("loc_671254B: mov %edx,0x54(%ecx);");
    asm("loc_671254E: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712560() // _sub_6712560
{
    __DEBUG_ASM(6712560);
    // chunk 0x6712560 _sub_6712560
    asm("loc_6712560: sub $8,%esp;");
    asm("loc_6712563: push %ebx;");
    asm("loc_6712564: mov 0x18(%esp),%ebx;");
    asm("loc_6712568: push %ebp;");
    asm("loc_6712569: mov 0x18(%esp),%ebp;");
    asm("loc_671256D: push %esi;");
    asm("loc_671256E: push %edi;");
    asm("loc_671256F: mov 0x1C(%esp),%edi;");
    asm("loc_6712573: movl $0,(%ebx);");
    asm("loc_6712579: test %edi,%edi;");
    asm("loc_671257B: mov %ecx,%esi;");
    asm("loc_671257D: movl $0,(%ebp);");
    asm("loc_6712584: je loc_67125CA;");
    asm("loc_6712586: cmpw $0,(%edi);");
    asm("loc_671258A: je loc_67125CA;");
    asm("loc_671258C: call _sub_6712480;");
    asm("loc_6712591: mov 4(%esi),%eax;");
    asm("loc_6712594: test %eax,%eax;");
    asm("loc_6712596: je loc_67125CA;");
    asm("loc_6712598: mov 8(%esi),%eax;");
    asm("loc_671259B: test %eax,%eax;");
    asm("loc_671259D: je loc_67125CA;");
    asm("loc_671259F: lea 0x10(%esp),%eax;");
    asm("loc_67125A3: push %eax;");
    asm("loc_67125A4: push %edi;");
    asm("loc_67125A5: calll *_off_671937C;");
    asm("loc_67125AB: mov 4(%esi),%ecx;");
    asm("loc_67125AE: push %eax;");
    asm("loc_67125AF: push %edi;");
    asm("loc_67125B0: push %ecx;");
    asm("loc_67125B1: call _sub_67120F0;");
    asm("loc_67125B6: add $0x10,%esp;");
    asm("loc_67125B9: test %eax,%eax;");
    asm("loc_67125BB: je loc_67125CA;");
    asm("loc_67125BD: mov 0x10(%esp),%edx;");
    asm("loc_67125C1: mov 0x14(%esp),%eax;");
    asm("loc_67125C5: mov %edx,(%ebp);");
    asm("loc_67125C8: mov %eax,(%ebx);");
    asm("loc_67125CA: pop %edi;");
    asm("loc_67125CB: pop %esi;");
    asm("loc_67125CC: pop %ebp;");
    asm("loc_67125CD: pop %ebx;");
    asm("loc_67125CE: add $8,%esp;");
    asm("loc_67125D1: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67125E0() // ??0CCaret@@QAE@PAUHWND__@@@Z
{
    __DEBUG_ASM(67125E0);
    // chunk 0x67125E0 _sub_67125E0
    asm("loc_67125E0: mov %ecx,%eax;");
    asm("loc_67125E2: xor %ecx,%ecx;");
    asm("loc_67125E4: mov %cl,(%eax);");
    asm("loc_67125E6: mov %ecx,4(%eax);");
    asm("loc_67125E9: mov %cl,8(%eax);");
    asm("loc_67125EC: mov %ecx,0xC(%eax);");
    asm("loc_67125EF: mov %ecx,0x10(%eax);");
    asm("loc_67125F2: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712600() // ??1CCaret@@QAE@XZ
{
    __DEBUG_ASM(6712600);
    // chunk 0x6712600 _sub_6712600
    asm("loc_6712600: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712610() // ?Show@CCaret@@QAEX_N@Z
{
    __DEBUG_ASM(6712610);
    // chunk 0x6712610 _sub_6712610
    asm("loc_6712610: mov 4(%esp),%al;");
    asm("loc_6712614: mov %al,(%ecx);");
    asm("loc_6712616: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712620() // ?SetPos@CCaret@@QAE_NHH@Z
{
    __DEBUG_ASM(6712620);
    // chunk 0x6712620 _sub_6712620
    asm("loc_6712620: mov 8(%esp),%edx;");
    asm("loc_6712624: mov 4(%esp),%eax;");
    asm("loc_6712628: push %edx;");
    asm("loc_6712629: push %eax;");
    asm("loc_671262A: mov %eax,0xC(%ecx);");
    asm("loc_671262D: mov %edx,0x10(%ecx);");
    asm("loc_6712630: call _sub_67144A0;");
    asm("loc_6712635: add $8,%esp;");
    asm("loc_6712638: mov $1,%al;");
    asm("loc_671263A: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712640() // ?UpdateCaret@CCaret@@QAE_NXZ
{
    __DEBUG_ASM(6712640);
    // chunk 0x6712640 _sub_6712640
    asm("loc_6712640: push %esi;");
    asm("loc_6712641: mov %ecx,%esi;");
    asm("loc_6712643: call _sub_67155C0;");
    asm("loc_6712648: test %al,%al;");
    asm("loc_671264A: jne loc_671264E;");
    asm("loc_671264C: pop %esi;");
    asm("loc_671264D: ret;");
    asm("loc_671264E: cmpb $0,(%esi);");
    asm("loc_6712651: jne loc_6712657;");
    asm("loc_6712653: xor %al,%al;");
    asm("loc_6712655: pop %esi;");
    asm("loc_6712656: ret;");
    asm("loc_6712657: mov 0x14(%esi),%al;");
    asm("loc_671265A: push %edi;");
    asm("loc_671265B: test %al,%al;");
    asm("loc_671265D: je loc_6712694;");
    asm("loc_671265F: calll *_import_67170A4;");
    asm("loc_6712665: mov %eax,%edi;");
    asm("loc_6712667: mov 4(%esi),%eax;");
    asm("loc_671266A: cmp %eax,%edi;");
    asm("loc_671266C: jae loc_6712675;");
    asm("loc_671266E: movl $0,4(%esi);");
    asm("loc_6712675: calll *_import_6717100;");
    asm("loc_671267B: mov 4(%esi),%edx;");
    asm("loc_671267E: mov %edi,%ecx;");
    asm("loc_6712680: sub %edx,%ecx;");
    asm("loc_6712682: cmp %eax,%ecx;");
    asm("loc_6712684: jbe loc_6712694;");
    asm("loc_6712686: mov 8(%esi),%al;");
    asm("loc_6712689: mov %edi,4(%esi);");
    asm("loc_671268C: test %al,%al;");
    asm("loc_671268E: sete %dl;");
    asm("loc_6712691: mov %dl,8(%esi);");
    asm("loc_6712694: mov 8(%esi),%al;");
    asm("loc_6712697: pop %edi;");
    asm("loc_6712698: pop %esi;");
    asm("loc_6712699: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67126A0() // ?SetBlink@CCaret@@QAEX_N@Z
{
    __DEBUG_ASM(67126A0);
    // chunk 0x67126A0 _sub_67126A0
    asm("loc_67126A0: mov 4(%esp),%al;");
    asm("loc_67126A4: movb $1,8(%ecx);");
    asm("loc_67126A8: mov %al,0x14(%ecx);");
    asm("loc_67126AB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67126B0() // ??0CInputBox@@QAE@XZ
{
    __DEBUG_ASM(67126B0);
    // chunk 0x67126B0 _sub_67126B0
    asm("loc_67126B0: push %esi;");
    asm("loc_67126B1: mov %ecx,%esi;");
    asm("loc_67126B3: xor %edx,%edx;");
    asm("loc_67126B5: push %edx;");
    asm("loc_67126B6: lea 4(%esi),%ecx;");
    asm("loc_67126B9: call _sub_67125E0;");
    asm("loc_67126BE: push $1;");
    asm("loc_67126C0: push $1;");
    asm("loc_67126C2: mov %esi,%ecx;");
    asm("loc_67126C4: mov %edx,0x74(%esi);");
    asm("loc_67126C7: mov %edx,0x78(%esi);");
    asm("loc_67126CA: mov %dl,0x7C(%esi);");
    asm("loc_67126CD: mov %edx,0x80(%esi);");
    asm("loc_67126D3: mov %edx,0x84(%esi);");
    asm("loc_67126D9: mov %edx,0x88(%esi);");
    asm("loc_67126DF: movb $1,0x8C(%esi);");
    asm("loc_67126E6: movl $_off_6717188,(%esi);");
    asm("loc_67126EC: mov %edx,0x28(%esi);");
    asm("loc_67126EF: mov %edx,0x24(%esi);");
    asm("loc_67126F2: mov %edx,0x20(%esi);");
    asm("loc_67126F5: mov %edx,0x1C(%esi);");
    asm("loc_67126F8: mov %edx,0x30(%esi);");
    asm("loc_67126FB: mov %edx,0x2C(%esi);");
    asm("loc_67126FE: mov %dx,0x34(%esi);");
    asm("loc_6712702: call _sub_6712740;");
    asm("loc_6712707: push $0x20;");
    asm("loc_6712709: mov %esi,%ecx;");
    asm("loc_671270B: call _sub_6712760;");
    asm("loc_6712710: mov %esi,%eax;");
    asm("loc_6712712: pop %esi;");
    asm("loc_6712713: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712720() // ??1CInputBox@@UAE@XZ
{
    __DEBUG_ASM(6712720);
    // chunk 0x6712720 _sub_6712720
    asm("loc_6712720: mov 0x84(%ecx),%eax;");
    asm("loc_6712726: movl $_off_6717188,(%ecx);");
    asm("loc_671272C: push %eax;");
    asm("loc_671272D: call _sub_67169D0;");
    asm("loc_6712732: pop %ecx;");
    asm("loc_6712733: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712740() // ?SetMargins@CInputBox@@QAEXKK@Z
{
    __DEBUG_ASM(6712740);
    // chunk 0x6712740 _sub_6712740
    asm("loc_6712740: mov 4(%esp),%eax;");
    asm("loc_6712744: mov 8(%esp),%edx;");
    asm("loc_6712748: mov %eax,0x74(%ecx);");
    asm("loc_671274B: mov %edx,0x78(%ecx);");
    asm("loc_671274E: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712760() // ?SetInputBufferSize@CInputBox@@QAEXK@Z
{
    __DEBUG_ASM(6712760);
    // chunk 0x6712760 _sub_6712760
    asm("loc_6712760: push %ebp;");
    asm("loc_6712761: mov 8(%esp),%ebp;");
    asm("loc_6712765: push %esi;");
    asm("loc_6712766: mov %ecx,%esi;");
    asm("loc_6712768: cmp 0x80(%esi),%ebp;");
    asm("loc_671276E: je loc_67127F6;");
    asm("loc_6712774: push %ebx;");
    asm("loc_6712775: push %edi;");
    asm("loc_6712776: lea 2(%ebp,%ebp),%edi;");
    asm("loc_671277A: push %edi;");
    asm("loc_671277B: call _sub_67169DC;");
    asm("loc_6712780: mov %edi,%ecx;");
    asm("loc_6712782: mov %eax,%ebx;");
    asm("loc_6712784: mov %ecx,%edx;");
    asm("loc_6712786: xor %eax,%eax;");
    asm("loc_6712788: mov %ebx,%edi;");
    asm("loc_671278A: add $4,%esp;");
    asm("loc_671278D: shr $2,%ecx;");
    asm("loc_6712790: rep stos %eax,(%edi);");
    asm("loc_6712792: mov %edx,%ecx;");
    asm("loc_6712794: and $3,%ecx;");
    asm("loc_6712797: rep stos %al,(%edi);");
    asm("loc_6712799: mov 0x80(%esi),%eax;");
    asm("loc_671279F: mov %ebp,%edi;");
    asm("loc_67127A1: cmp %ebp,%eax;");
    asm("loc_67127A3: jae loc_67127A7;");
    asm("loc_67127A5: mov %eax,%edi;");
    asm("loc_67127A7: test %edi,%edi;");
    asm("loc_67127A9: je loc_67127C3;");
    asm("loc_67127AB: mov 0x84(%esi),%eax;");
    asm("loc_67127B1: push %edi;");
    asm("loc_67127B2: push %eax;");
    asm("loc_67127B3: push %ebx;");
    asm("loc_67127B4: calll *_import_67170D4;");
    asm("loc_67127BA: add $0xC,%esp;");
    asm("loc_67127BD: movw $0,(%ebx,%edi,2);");
    asm("loc_67127C3: mov 0x80(%esi),%eax;");
    asm("loc_67127C9: mov 0x88(%esi),%ecx;");
    asm("loc_67127CF: cmp %eax,%ecx;");
    asm("loc_67127D1: jbe loc_67127D9;");
    asm("loc_67127D3: mov %eax,0x88(%esi);");
    asm("loc_67127D9: mov 0x84(%esi),%ecx;");
    asm("loc_67127DF: push %ecx;");
    asm("loc_67127E0: call _sub_67169D0;");
    asm("loc_67127E5: add $4,%esp;");
    asm("loc_67127E8: mov %ebx,0x84(%esi);");
    asm("loc_67127EE: mov %ebp,0x80(%esi);");
    asm("loc_67127F4: pop %edi;");
    asm("loc_67127F5: pop %ebx;");
    asm("loc_67127F6: pop %esi;");
    asm("loc_67127F7: pop %ebp;");
    asm("loc_67127F8: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712800() // ?Resize@CInputBox@@UAEXPBUtagRECT@@@Z
{
    __DEBUG_ASM(6712800);
    // chunk 0x6712800 _sub_6712800
    asm("loc_6712800: mov 4(%esp),%edx;");
    asm("loc_6712804: push %esi;");
    asm("loc_6712805: lea 0x1C(%ecx),%eax;");
    asm("loc_6712808: mov (%edx),%esi;");
    asm("loc_671280A: mov %esi,(%eax);");
    asm("loc_671280C: mov 4(%edx),%esi;");
    asm("loc_671280F: mov %esi,4(%eax);");
    asm("loc_6712812: mov 8(%edx),%esi;");
    asm("loc_6712815: mov %esi,8(%eax);");
    asm("loc_6712818: mov 0xC(%edx),%edx;");
    asm("loc_671281B: mov %edx,0xC(%eax);");
    asm("loc_671281E: mov (%ecx),%eax;");
    asm("loc_6712820: calll *0x28(%eax);");
    asm("loc_6712823: pop %esi;");
    asm("loc_6712824: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712830() // ?OnSetFocus@CInputBox@@UAEXXZ
{
    __DEBUG_ASM(6712830);
    // chunk 0x6712830 _sub_6712830
    asm("loc_6712830: push %esi;");
    asm("loc_6712831: mov %ecx,%esi;");
    asm("loc_6712833: movb $1,0x7C(%esi);");
    asm("loc_6712837: call _sub_6712BE0;");
    asm("loc_671283C: lea 4(%esi),%ecx;");
    asm("loc_671283F: pop %esi;");
    asm("loc_6712840: test %ecx,%ecx;");
    asm("loc_6712842: je loc_671284B;");
    asm("loc_6712844: push $1;");
    asm("loc_6712846: call _sub_6712610;");
    asm("loc_671284B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712850() // ?OnKillFocus@CInputBox@@UAEXXZ
{
    __DEBUG_ASM(6712850);
    // chunk 0x6712850 _sub_6712850
    asm("loc_6712850: movb $0,0x7C(%ecx);");
    asm("loc_6712854: add $4,%ecx;");
    asm("loc_6712857: test %ecx,%ecx;");
    asm("loc_6712859: je loc_6712862;");
    asm("loc_671285B: push $0;");
    asm("loc_671285D: call _sub_6712610;");
    asm("loc_6712862: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712870() // ?HandleKey@CInputBox@@UAE_NI@Z
{
    asm("jmp dgb_6712870;"); // jumptable skip
    asm(".long _jmp_6712908;"); // jumptable address
    __DEBUG_ASM(6712870);
    // chunk 0x6712870 _sub_6712870
    asm("loc_6712870: mov 4(%esp),%eax;");
    asm("loc_6712874: push %ebx;");
    asm("loc_6712875: add $0xFFFFFFF8,%eax;");
    asm("loc_6712878: xor %bl,%bl;");
    asm("loc_671287A: push %esi;");
    asm("loc_671287B: cmp $0x26,%eax;");
    asm("loc_671287E: mov %ecx,%esi;");
    asm("loc_6712880: ja loc_67128FF;");
    asm("loc_6712882: xor %ecx,%ecx;");
    asm("loc_6712884: mov _data_6712928(%eax),%cl;");
    asm("loc_671288A: jmpl *_jmp_6712908(,%ecx,4);");
    asm("loc_6712891: mov (%esi),%edx;");
    asm("loc_6712893: push $0;");
    asm("loc_6712895: push $0;");
    asm("loc_6712897: mov %esi,%ecx;");
    asm("loc_6712899: calll *0x20(%edx);");
    asm("loc_671289C: test %al,%al;");
    asm("loc_671289E: je loc_67128FF;");
    asm("loc_67128A0: mov %esi,%ecx;");
    asm("loc_67128A2: call _sub_6712B80;");
    asm("loc_67128A7: mov %al,%bl;");
    asm("loc_67128A9: pop %esi;");
    asm("loc_67128AA: pop %ebx;");
    asm("loc_67128AB: ret $4;");
    asm("loc_67128AE: mov (%esi),%eax;");
    asm("loc_67128B0: mov %esi,%ecx;");
    asm("loc_67128B2: calll *0x1C(%eax);");
    asm("loc_67128B5: mov %bl,%al;");
    asm("loc_67128B7: pop %esi;");
    asm("loc_67128B8: pop %ebx;");
    asm("loc_67128B9: ret $4;");
    asm("loc_67128BC: mov (%esi),%edx;");
    asm("loc_67128BE: push $0;");
    asm("loc_67128C0: push $1;");
    asm("loc_67128C2: mov %esi,%ecx;");
    asm("loc_67128C4: calll *0x20(%edx);");
    asm("loc_67128C7: mov %al,%bl;");
    asm("loc_67128C9: pop %esi;");
    asm("loc_67128CA: pop %ebx;");
    asm("loc_67128CB: ret $4;");
    asm("loc_67128CE: mov (%esi),%eax;");
    asm("loc_67128D0: push $0;");
    asm("loc_67128D2: push $0;");
    asm("loc_67128D4: mov %esi,%ecx;");
    asm("loc_67128D6: calll *0x20(%eax);");
    asm("loc_67128D9: mov %al,%bl;");
    asm("loc_67128DB: pop %esi;");
    asm("loc_67128DC: pop %ebx;");
    asm("loc_67128DD: ret $4;");
    asm("loc_67128E0: mov (%esi),%edx;");
    asm("loc_67128E2: push $1;");
    asm("loc_67128E4: push $0;");
    asm("loc_67128E6: mov %esi,%ecx;");
    asm("loc_67128E8: calll *0x20(%edx);");
    asm("loc_67128EB: mov %al,%bl;");
    asm("loc_67128ED: pop %esi;");
    asm("loc_67128EE: pop %ebx;");
    asm("loc_67128EF: ret $4;");
    asm("loc_67128F2: mov (%esi),%eax;");
    asm("loc_67128F4: push $1;");
    asm("loc_67128F6: push $1;");
    asm("loc_67128F8: mov %esi,%ecx;");
    asm("loc_67128FA: calll *0x20(%eax);");
    asm("loc_67128FD: mov %al,%bl;");
    asm("loc_67128FF: mov %bl,%al;");
    asm("loc_6712901: pop %esi;");
    asm("loc_6712902: pop %ebx;");
    asm("loc_6712903: ret $4;");
    asm("int3;"); // unreachable
    asm("_jmp_6712908: .long loc_6712891;");
    asm(".long loc_67128F2;");
    asm(".long loc_67128E0;");
    asm(".long loc_67128CE;");
    asm(".long loc_67128BC;");
    asm(".long loc_67128AE;");
    asm(".long loc_67128A0;");
    asm(".long loc_67128FF;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6712870);
_naked _weak void _sub_6712950() // ?CharFilter@CInputBox@@UBE_NG@Z
{
    __DEBUG_ASM(6712950);
    // chunk 0x6712950 _sub_6712950
    asm("loc_6712950: push %ecx;");
    asm("loc_6712951: lea (%esp),%eax;");
    asm("loc_6712955: lea 8(%esp),%ecx;");
    asm("loc_6712959: push %eax;");
    asm("loc_671295A: push $1;");
    asm("loc_671295C: push %ecx;");
    asm("loc_671295D: push $1;");
    asm("loc_671295F: push $0x800;");
    asm("loc_6712964: movl $0,0x14(%esp);");
    asm("loc_671296C: calll *_off_671935C;");
    asm("loc_6712972: mov (%esp),%al;");
    asm("loc_6712976: not %al;");
    asm("loc_6712978: shr $5,%eax;");
    asm("loc_671297B: and $1,%eax;");
    asm("loc_671297E: pop %ecx;");
    asm("loc_671297F: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712990() // ?HandleMultiByteChar@CInputBox@@QAE_ND@Z
{
    __DEBUG_ASM(6712990);
    // chunk 0x6712990 _sub_6712990
    asm("loc_6712990: mov _data_671B3F4,%al;");
    asm("loc_6712995: sub $0xC,%esp;");
    asm("loc_6712998: push %ebx;");
    asm("loc_6712999: xor %bl,%bl;");
    asm("loc_671299B: push %esi;");
    asm("loc_671299C: push %edi;");
    asm("loc_671299D: test %al,%al;");
    asm("loc_671299F: mov %ecx,%esi;");
    asm("loc_67129A1: je loc_67129F1;");
    asm("loc_67129A3: lea 0x10(%esp),%ecx;");
    asm("loc_67129A7: push $1;");
    asm("loc_67129A9: push %ecx;");
    asm("loc_67129AA: lea 0x16(%esp),%edx;");
    asm("loc_67129AE: push $2;");
    asm("loc_67129B0: mov %al,0x1A(%esp);");
    asm("loc_67129B4: mov 0x28(%esp),%al;");
    asm("loc_67129B8: push %edx;");
    asm("loc_67129B9: push $0;");
    asm("loc_67129BB: push $0;");
    asm("loc_67129BD: mov %al,0x27(%esp);");
    asm("loc_67129C1: mov %bl,_data_671B3F4;");
    asm("loc_67129C7: calll *_off_6719368;");
    asm("loc_67129CD: push $0;");
    asm("loc_67129CF: lea 0x18(%esp),%eax;");
    asm("loc_67129D3: push $0;");
    asm("loc_67129D5: push %eax;");
    asm("loc_67129D6: push $0x400;");
    asm("loc_67129DB: calll *_import_67170B4;");
    asm("loc_67129E1: push %eax;");
    asm("loc_67129E2: push $0;");
    asm("loc_67129E4: push $0x1300;");
    asm("loc_67129E9: calll *_off_6719354;");
    asm("loc_67129EF: jmp loc_6712A2D;");
    asm("loc_67129F1: mov 0x1C(%esp),%eax;");
    asm("loc_67129F5: push %eax;");
    asm("loc_67129F6: calll *_import_67170B0;");
    asm("loc_67129FC: test %eax,%eax;");
    asm("loc_67129FE: je loc_6712A15;");
    asm("loc_6712A00: mov 0x1C(%esp),%cl;");
    asm("loc_6712A04: pop %edi;");
    asm("loc_6712A05: mov %bl,%al;");
    asm("loc_6712A07: pop %esi;");
    asm("loc_6712A08: mov %cl,_data_671B3F4;");
    asm("loc_6712A0E: pop %ebx;");
    asm("loc_6712A0F: add $0xC,%esp;");
    asm("loc_6712A12: ret $4;");
    asm("loc_6712A15: lea 0x10(%esp),%edx;");
    asm("loc_6712A19: push $1;");
    asm("loc_6712A1B: push %edx;");
    asm("loc_6712A1C: lea 0x24(%esp),%eax;");
    asm("loc_6712A20: push $1;");
    asm("loc_6712A22: push %eax;");
    asm("loc_6712A23: push $0;");
    asm("loc_6712A25: push $0;");
    asm("loc_6712A27: calll *_off_6719368;");
    asm("loc_6712A2D: mov 0x10(%esp),%eax;");
    asm("loc_6712A31: mov (%esi),%edx;");
    asm("loc_6712A33: mov %esi,%ecx;");
    asm("loc_6712A35: push %eax;");
    asm("loc_6712A36: mov %eax,%edi;");
    asm("loc_6712A38: calll *0x14(%edx);");
    asm("loc_6712A3B: mov %al,%bl;");
    asm("loc_6712A3D: test %bl,%bl;");
    asm("loc_6712A3F: je loc_6712A49;");
    asm("loc_6712A41: mov %esi,%ecx;");
    asm("loc_6712A43: push %edi;");
    asm("loc_6712A44: call _sub_6712AC0;");
    asm("loc_6712A49: pop %edi;");
    asm("loc_6712A4A: mov %bl,%al;");
    asm("loc_6712A4C: pop %esi;");
    asm("loc_6712A4D: pop %ebx;");
    asm("loc_6712A4E: add $0xC,%esp;");
    asm("loc_6712A51: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712A60() // ?RecalcCaretPos@CInputBox@@MAEXXZ
{
    __DEBUG_ASM(6712A60);
    // chunk 0x6712A60 _sub_6712A60
    asm("loc_6712A60: sub $8,%esp;");
    asm("loc_6712A63: push %esi;");
    asm("loc_6712A64: mov %ecx,%esi;");
    asm("loc_6712A66: lea 4(%esp),%ecx;");
    asm("loc_6712A6A: mov (%esi),%eax;");
    asm("loc_6712A6C: push %ecx;");
    asm("loc_6712A6D: mov %esi,%ecx;");
    asm("loc_6712A6F: calll *0x24(%eax);");
    asm("loc_6712A72: test %al,%al;");
    asm("loc_6712A74: je loc_6712A7D;");
    asm("loc_6712A76: mov 4(%esp),%edx;");
    asm("loc_6712A7A: mov %edx,0x2C(%esi);");
    asm("loc_6712A7D: lea 4(%esi),%ecx;");
    asm("loc_6712A80: test %ecx,%ecx;");
    asm("loc_6712A82: je loc_6712AAC;");
    asm("loc_6712A84: mov 0x7C(%esi),%al;");
    asm("loc_6712A87: test %al,%al;");
    asm("loc_6712A89: je loc_6712AAC;");
    asm("loc_6712A8B: mov 0x78(%esi),%eax;");
    asm("loc_6712A8E: mov 0x30(%esi),%edx;");
    asm("loc_6712A91: add %edx,%eax;");
    asm("loc_6712A93: mov 0x20(%esi),%edx;");
    asm("loc_6712A96: add %edx,%eax;");
    asm("loc_6712A98: mov 0x74(%esi),%edx;");
    asm("loc_6712A9B: push %eax;");
    asm("loc_6712A9C: mov 0x2C(%esi),%eax;");
    asm("loc_6712A9F: add %eax,%edx;");
    asm("loc_6712AA1: mov 0x1C(%esi),%eax;");
    asm("loc_6712AA4: add %eax,%edx;");
    asm("loc_6712AA6: push %edx;");
    asm("loc_6712AA7: call _sub_6712620;");
    asm("loc_6712AAC: pop %esi;");
    asm("loc_6712AAD: add $8,%esp;");
    asm("loc_6712AB0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712AC0() // ?AddChar@CInputBox@@IAEXG@Z
{
    __DEBUG_ASM(6712AC0);
    // chunk 0x6712AC0 _sub_6712AC0
    asm("loc_6712AC0: push %esi;");
    asm("loc_6712AC1: mov %ecx,%esi;");
    asm("loc_6712AC3: mov 0x8C(%esi),%al;");
    asm("loc_6712AC9: test %al,%al;");
    asm("loc_6712ACB: jne loc_6712AD2;");
    asm("loc_6712ACD: call _sub_6712B80;");
    asm("loc_6712AD2: mov 0x88(%esi),%eax;");
    asm("loc_6712AD8: mov 0x80(%esi),%ecx;");
    asm("loc_6712ADE: sub %eax,%ecx;");
    asm("loc_6712AE0: jne loc_6712B07;");
    asm("loc_6712AE2: mov %esi,%ecx;");
    asm("loc_6712AE4: call _sub_6712B80;");
    asm("loc_6712AE9: mov 0x88(%esi),%eax;");
    asm("loc_6712AEF: mov 0x80(%esi),%edx;");
    asm("loc_6712AF5: sub %eax,%edx;");
    asm("loc_6712AF7: jne loc_6712B07;");
    asm("loc_6712AF9: push $0;");
    asm("loc_6712AFB: call _sub_67152F0;");
    asm("loc_6712B00: add $4,%esp;");
    asm("loc_6712B03: pop %esi;");
    asm("loc_6712B04: ret $4;");
    asm("loc_6712B07: mov 0x84(%esi),%ecx;");
    asm("loc_6712B0D: lea (%ecx,%eax,2),%edx;");
    asm("loc_6712B10: push %edx;");
    asm("loc_6712B11: calll *_off_671937C;");
    asm("loc_6712B17: test %eax,%eax;");
    asm("loc_6712B19: je loc_6712B3C;");
    asm("loc_6712B1B: mov 0x88(%esi),%ecx;");
    asm("loc_6712B21: mov 0x84(%esi),%edx;");
    asm("loc_6712B27: add %eax,%eax;");
    asm("loc_6712B29: push %eax;");
    asm("loc_6712B2A: lea (%edx,%ecx,2),%eax;");
    asm("loc_6712B2D: lea 2(%edx,%ecx,2),%ecx;");
    asm("loc_6712B31: push %eax;");
    asm("loc_6712B32: push %ecx;");
    asm("loc_6712B33: calll *_import_67170CC;");
    asm("loc_6712B39: add $0xC,%esp;");
    asm("loc_6712B3C: mov 0x88(%esi),%edx;");
    asm("loc_6712B42: mov 0x84(%esi),%eax;");
    asm("loc_6712B48: mov 8(%esp),%cx;");
    asm("loc_6712B4D: mov %cx,(%eax,%edx,2);");
    asm("loc_6712B51: mov 0x88(%esi),%eax;");
    asm("loc_6712B57: mov (%esi),%edx;");
    asm("loc_6712B59: inc %eax;");
    asm("loc_6712B5A: mov %esi,%ecx;");
    asm("loc_6712B5C: mov %eax,0x88(%esi);");
    asm("loc_6712B62: calll *0x28(%edx);");
    asm("loc_6712B65: mov 0x84(%esi),%ecx;");
    asm("loc_6712B6B: mov (%esi),%eax;");
    asm("loc_6712B6D: push %ecx;");
    asm("loc_6712B6E: mov %esi,%ecx;");
    asm("loc_6712B70: calll *0x18(%eax);");
    asm("loc_6712B73: pop %esi;");
    asm("loc_6712B74: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712B80() // ?DeleteChar@CInputBox@@IAE_NXZ
{
    __DEBUG_ASM(6712B80);
    // chunk 0x6712B80 _sub_6712B80
    asm("loc_6712B80: push %esi;");
    asm("loc_6712B81: mov %ecx,%esi;");
    asm("loc_6712B83: mov 0x88(%esi),%eax;");
    asm("loc_6712B89: test %eax,%eax;");
    asm("loc_6712B8B: jge loc_6712B9B;");
    asm("loc_6712B8D: movl $0,0x88(%esi);");
    asm("loc_6712B97: xor %al,%al;");
    asm("loc_6712B99: pop %esi;");
    asm("loc_6712B9A: ret;");
    asm("loc_6712B9B: mov 0x80(%esi),%ecx;");
    asm("loc_6712BA1: cmp %ecx,%eax;");
    asm("loc_6712BA3: jb loc_6712BAC;");
    asm("loc_6712BA5: dec %ecx;");
    asm("loc_6712BA6: mov %ecx,0x88(%esi);");
    asm("loc_6712BAC: mov 0x88(%esi),%eax;");
    asm("loc_6712BB2: mov 0x84(%esi),%ecx;");
    asm("loc_6712BB8: movw $0,(%ecx,%eax,2);");
    asm("loc_6712BBE: mov (%esi),%edx;");
    asm("loc_6712BC0: mov %esi,%ecx;");
    asm("loc_6712BC2: calll *0x28(%edx);");
    asm("loc_6712BC5: mov 0x84(%esi),%ecx;");
    asm("loc_6712BCB: mov (%esi),%eax;");
    asm("loc_6712BCD: push %ecx;");
    asm("loc_6712BCE: mov %esi,%ecx;");
    asm("loc_6712BD0: calll *0x18(%eax);");
    asm("loc_6712BD3: mov $1,%al;");
    asm("loc_6712BD5: pop %esi;");
    asm("loc_6712BD6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712BE0() // ?ResetCaret@CInputBox@@IAEXXZ
{
    __DEBUG_ASM(6712BE0);
    // chunk 0x6712BE0 _sub_6712BE0
    asm("loc_6712BE0: mov (%ecx),%eax;");
    asm("loc_6712BE2: jmpl *0x28(%eax);");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712BF0() // ?ToggleInsertMode@CInputBox@@MAEXXZ
{
    __DEBUG_ASM(6712BF0);
    // chunk 0x6712BF0 _sub_6712BF0
    asm("loc_6712BF0: mov 0x8C(%ecx),%al;");
    asm("loc_6712BF6: test %al,%al;");
    asm("loc_6712BF8: sete %al;");
    asm("loc_6712BFB: mov %al,0x8C(%ecx);");
    asm("loc_6712C01: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712C10() // ?MoveCaret@CInputBox@@MAE_N_N0@Z
{
    __DEBUG_ASM(6712C10);
    // chunk 0x6712C10 _sub_6712C10
    asm("loc_6712C10: mov 4(%esp),%al;");
    asm("loc_6712C14: push %ebx;");
    asm("loc_6712C15: push %esi;");
    asm("loc_6712C16: mov %ecx,%esi;");
    asm("loc_6712C18: push %edi;");
    asm("loc_6712C19: mov 0x88(%esi),%edi;");
    asm("loc_6712C1F: test %al,%al;");
    asm("loc_6712C21: mov 0x14(%esp),%al;");
    asm("loc_6712C25: je loc_6712C60;");
    asm("loc_6712C27: test %al,%al;");
    asm("loc_6712C29: je loc_6712C40;");
    asm("loc_6712C2B: mov 0x84(%esi),%eax;");
    asm("loc_6712C31: push %eax;");
    asm("loc_6712C32: calll *_off_671937C;");
    asm("loc_6712C38: mov %eax,0x88(%esi);");
    asm("loc_6712C3E: jmp loc_6712C7B;");
    asm("loc_6712C40: cmp 0x80(%esi),%edi;");
    asm("loc_6712C46: jae loc_6712C7B;");
    asm("loc_6712C48: mov 0x84(%esi),%ecx;");
    asm("loc_6712C4E: cmpw $0,(%ecx,%edi,2);");
    asm("loc_6712C53: je loc_6712C7B;");
    asm("loc_6712C55: lea 1(%edi),%edx;");
    asm("loc_6712C58: mov %edx,0x88(%esi);");
    asm("loc_6712C5E: jmp loc_6712C7B;");
    asm("loc_6712C60: test %al,%al;");
    asm("loc_6712C62: jne loc_6712C71;");
    asm("loc_6712C64: lea -1(%edi),%eax;");
    asm("loc_6712C67: test %eax,%eax;");
    asm("loc_6712C69: mov %eax,0x88(%esi);");
    asm("loc_6712C6F: jge loc_6712C7B;");
    asm("loc_6712C71: movl $0,0x88(%esi);");
    asm("loc_6712C7B: cmp %edi,0x88(%esi);");
    asm("loc_6712C81: setne %bl;");
    asm("loc_6712C84: test %bl,%bl;");
    asm("loc_6712C86: je loc_6712C8F;");
    asm("loc_6712C88: mov (%esi),%eax;");
    asm("loc_6712C8A: mov %esi,%ecx;");
    asm("loc_6712C8C: calll *0x28(%eax);");
    asm("loc_6712C8F: pop %edi;");
    asm("loc_6712C90: mov %bl,%al;");
    asm("loc_6712C92: pop %esi;");
    asm("loc_6712C93: pop %ebx;");
    asm("loc_6712C94: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712CA0() // ??1IMEInputBox@@UAE@XZ
{
    __DEBUG_ASM(6712CA0);
    // chunk 0x6712CA0 _sub_6712CA0
    asm("loc_6712CA0: push $0xFFFFFFFF;");
    asm("loc_6712CA2: push $_sub_6716CE8;");
    asm("loc_6712CA7: mov %fs:0,%eax;");
    asm("loc_6712CAD: push %eax;");
    asm("loc_6712CAE: mov %esp,%fs:0;");
    asm("loc_6712CB5: push %ecx;");
    asm("loc_6712CB6: push %esi;");
    asm("loc_6712CB7: mov %ecx,%esi;");
    asm("loc_6712CB9: push %edi;");
    asm("loc_6712CBA: mov %esi,8(%esp);");
    asm("loc_6712CBE: movl $_off_67171B4,(%esi);");
    asm("loc_6712CC4: movl $0,0x14(%esp);");
    asm("loc_6712CCC: call _sub_67111C0;");
    asm("loc_6712CD1: test %eax,%eax;");
    asm("loc_6712CD3: je loc_6712CDD;");
    asm("loc_6712CD5: push %esi;");
    asm("loc_6712CD6: mov %eax,%ecx;");
    asm("loc_6712CD8: call _sub_67115E0;");
    asm("loc_6712CDD: mov 0x90(%esi),%edi;");
    asm("loc_6712CE3: test %edi,%edi;");
    asm("loc_6712CE5: je loc_6712CF7;");
    asm("loc_6712CE7: mov %edi,%ecx;");
    asm("loc_6712CE9: call _sub_6712440;");
    asm("loc_6712CEE: push %edi;");
    asm("loc_6712CEF: call _sub_67169D0;");
    asm("loc_6712CF4: add $4,%esp;");
    asm("loc_6712CF7: mov %esi,%ecx;");
    asm("loc_6712CF9: movl $0,0x90(%esi);");
    asm("loc_6712D03: call _sub_6712720;");
    asm("loc_6712D08: mov 0xC(%esp),%ecx;");
    asm("loc_6712D0C: pop %edi;");
    asm("loc_6712D0D: pop %esi;");
    asm("loc_6712D0E: mov %ecx,%fs:0;");
    asm("loc_6712D15: add $0x10,%esp;");
    asm("loc_6712D18: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712D20() // ??0IMEInputBox@@QAE@PBUtagLOGFONTA@@@Z
{
    __DEBUG_ASM(6712D20);
    // chunk 0x6712D20 _sub_6712D20
    asm("loc_6712D20: push $0xFFFFFFFF;");
    asm("loc_6712D22: push $_sub_6716CE8;");
    asm("loc_6712D27: mov %fs:0,%eax;");
    asm("loc_6712D2D: push %eax;");
    asm("loc_6712D2E: mov %esp,%fs:0;");
    asm("loc_6712D35: push %ecx;");
    asm("loc_6712D36: push %esi;");
    asm("loc_6712D37: mov %ecx,%esi;");
    asm("loc_6712D39: mov %esi,4(%esp);");
    asm("loc_6712D3D: call _sub_67126B0;");
    asm("loc_6712D42: push $0x5C;");
    asm("loc_6712D44: movl $0,0x14(%esp);");
    asm("loc_6712D4C: movl $_off_67171B4,(%esi);");
    asm("loc_6712D52: call _sub_67169DC;");
    asm("loc_6712D57: add $4,%esp;");
    asm("loc_6712D5A: test %eax,%eax;");
    asm("loc_6712D5C: je loc_6712D68;");
    asm("loc_6712D5E: push %esi;");
    asm("loc_6712D5F: mov %eax,%ecx;");
    asm("loc_6712D61: call _sub_67123D0;");
    asm("loc_6712D66: jmp loc_6712D6A;");
    asm("loc_6712D68: xor %eax,%eax;");
    asm("loc_6712D6A: push %edi;");
    asm("loc_6712D6B: mov %eax,0x90(%esi);");
    asm("loc_6712D71: call _sub_67111C0;");
    asm("loc_6712D76: mov %eax,%edi;");
    asm("loc_6712D78: test %edi,%edi;");
    asm("loc_6712D7A: je loc_6712D8B;");
    asm("loc_6712D7C: mov %esi,%ecx;");
    asm("loc_6712D7E: call _sub_6712DB0;");
    asm("loc_6712D83: push %esi;");
    asm("loc_6712D84: mov %edi,%ecx;");
    asm("loc_6712D86: call _sub_6711480;");
    asm("loc_6712D8B: mov 0x1C(%esp),%eax;");
    asm("loc_6712D8F: pop %edi;");
    asm("loc_6712D90: test %eax,%eax;");
    asm("loc_6712D92: je loc_6712D9C;");
    asm("loc_6712D94: push %eax;");
    asm("loc_6712D95: mov %esi,%ecx;");
    asm("loc_6712D97: call _sub_6712EF0;");
    asm("loc_6712D9C: mov 8(%esp),%ecx;");
    asm("loc_6712DA0: mov %esi,%eax;");
    asm("loc_6712DA2: pop %esi;");
    asm("loc_6712DA3: mov %ecx,%fs:0;");
    asm("loc_6712DAA: add $0x10,%esp;");
    asm("loc_6712DAD: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712DB0() // ?UpdateAppearance@IMEInputBox@@IAEXXZ
{
    __DEBUG_ASM(6712DB0);
    // chunk 0x6712DB0 _sub_6712DB0
    asm("loc_6712DB0: push %esi;");
    asm("loc_6712DB1: mov %ecx,%esi;");
    asm("loc_6712DB3: mov 0x7C(%esi),%al;");
    asm("loc_6712DB6: test %al,%al;");
    asm("loc_6712DB8: je loc_6712DE8;");
    asm("loc_6712DBA: call _sub_67111C0;");
    asm("loc_6712DBF: test %eax,%eax;");
    asm("loc_6712DC1: je loc_6712DD3;");
    asm("loc_6712DC3: mov %eax,%ecx;");
    asm("loc_6712DC5: call _sub_67117D0;");
    asm("loc_6712DCA: push %eax;");
    asm("loc_6712DCB: call _sub_6715460;");
    asm("loc_6712DD0: add $4,%esp;");
    asm("loc_6712DD3: mov 0x90(%esi),%ecx;");
    asm("loc_6712DD9: lea 0x1C(%esi),%eax;");
    asm("loc_6712DDC: push %eax;");
    asm("loc_6712DDD: push $0;");
    asm("loc_6712DDF: push %ecx;");
    asm("loc_6712DE0: call _sub_67144C0;");
    asm("loc_6712DE5: add $0xC,%esp;");
    asm("loc_6712DE8: pop %esi;");
    asm("loc_6712DE9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712DF0() // ?GetHFont@IMEInputBox@@QAEPAUHFONT__@@XZ
{
    __DEBUG_ASM(6712DF0);
    // chunk 0x6712DF0 _sub_6712DF0
    asm("loc_6712DF0: push %esi;");
    asm("loc_6712DF1: mov 0x90(%ecx),%esi;");
    asm("loc_6712DF7: test %esi,%esi;");
    asm("loc_6712DF9: jne loc_6712DFF;");
    asm("loc_6712DFB: xor %eax,%eax;");
    asm("loc_6712DFD: pop %esi;");
    asm("loc_6712DFE: ret;");
    asm("loc_6712DFF: mov %esi,%ecx;");
    asm("loc_6712E01: call _sub_6712480;");
    asm("loc_6712E06: mov 8(%esi),%eax;");
    asm("loc_6712E09: pop %esi;");
    asm("loc_6712E0A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712E10() // ?GetFont@IMEInputBox@@QAEPBUtagLOGFONTA@@XZ
{
    __DEBUG_ASM(6712E10);
    // chunk 0x6712E10 _sub_6712E10
    asm("loc_6712E10: mov 0x90(%ecx),%eax;");
    asm("loc_6712E16: test %eax,%eax;");
    asm("loc_6712E18: jne loc_6712E1B;");
    asm("loc_6712E1A: ret;");
    asm("loc_6712E1B: add $0xC,%eax;");
    asm("loc_6712E1E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712E20() // ?CalcCaretPos@IMEInputBox@@MAE_NPAUtagPOINT@@@Z
{
    __DEBUG_ASM(6712E20);
    // chunk 0x6712E20 _sub_6712E20
    asm("loc_6712E20: push %edi;");
    asm("loc_6712E21: mov 0x90(%ecx),%edi;");
    asm("loc_6712E27: xor %al,%al;");
    asm("loc_6712E29: test %edi,%edi;");
    asm("loc_6712E2B: je loc_6712E66;");
    asm("loc_6712E2D: push %ebx;");
    asm("loc_6712E2E: mov 0x88(%ecx),%ebx;");
    asm("loc_6712E34: push %esi;");
    asm("loc_6712E35: mov 0x84(%ecx),%esi;");
    asm("loc_6712E3B: test %esi,%esi;");
    asm("loc_6712E3D: je loc_6712E64;");
    asm("loc_6712E3F: cmpw $0,(%esi);");
    asm("loc_6712E43: je loc_6712E64;");
    asm("loc_6712E45: mov %edi,%ecx;");
    asm("loc_6712E47: call _sub_6712480;");
    asm("loc_6712E4C: mov 0x10(%esp),%eax;");
    asm("loc_6712E50: mov 4(%edi),%ecx;");
    asm("loc_6712E53: push %eax;");
    asm("loc_6712E54: push %ebx;");
    asm("loc_6712E55: push %esi;");
    asm("loc_6712E56: push %ecx;");
    asm("loc_6712E57: call _sub_67120F0;");
    asm("loc_6712E5C: add $0x10,%esp;");
    asm("loc_6712E5F: test %eax,%eax;");
    asm("loc_6712E61: setne %al;");
    asm("loc_6712E64: pop %esi;");
    asm("loc_6712E65: pop %ebx;");
    asm("loc_6712E66: pop %edi;");
    asm("loc_6712E67: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712E70() // ?OnSetFocus@IMEInputBox@@UAEXXZ
{
    __DEBUG_ASM(6712E70);
    // chunk 0x6712E70 _sub_6712E70
    asm("loc_6712E70: push %esi;");
    asm("loc_6712E71: push $1;");
    asm("loc_6712E73: mov %ecx,%esi;");
    asm("loc_6712E75: call _sub_6714550;");
    asm("loc_6712E7A: add $4,%esp;");
    asm("loc_6712E7D: mov %esi,%ecx;");
    asm("loc_6712E7F: call _sub_6712830;");
    asm("loc_6712E84: mov %esi,%ecx;");
    asm("loc_6712E86: pop %esi;");
    asm("loc_6712E87: jmp _sub_6712DB0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712E90() // ?OnKillFocus@IMEInputBox@@UAEXXZ
{
    __DEBUG_ASM(6712E90);
    // chunk 0x6712E90 _sub_6712E90
    asm("loc_6712E90: call _sub_6712850;");
    asm("loc_6712E95: push $1;");
    asm("loc_6712E97: call _sub_67152F0;");
    asm("loc_6712E9C: push $0;");
    asm("loc_6712E9E: call _sub_6714550;");
    asm("loc_6712EA3: add $8,%esp;");
    asm("loc_6712EA6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712EB0() // ?Resize@IMEInputBox@@UAEXPBUtagRECT@@@Z
{
    __DEBUG_ASM(6712EB0);
    // chunk 0x6712EB0 _sub_6712EB0
    asm("loc_6712EB0: mov 4(%esp),%eax;");
    asm("loc_6712EB4: push %esi;");
    asm("loc_6712EB5: push %eax;");
    asm("loc_6712EB6: mov %ecx,%esi;");
    asm("loc_6712EB8: call _sub_6712800;");
    asm("loc_6712EBD: mov %esi,%ecx;");
    asm("loc_6712EBF: call _sub_6712DB0;");
    asm("loc_6712EC4: pop %esi;");
    asm("loc_6712EC5: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712ED0() // ?IsImeOn@IMEInputBox@@QBE_NXZ
{
    __DEBUG_ASM(6712ED0);
    // chunk 0x6712ED0 _sub_6712ED0
    asm("loc_6712ED0: mov 0x7C(%ecx),%al;");
    asm("loc_6712ED3: test %al,%al;");
    asm("loc_6712ED5: jne loc_6712EDA;");
    asm("loc_6712ED7: xor %al,%al;");
    asm("loc_6712ED9: ret;");
    asm("loc_6712EDA: call _sub_6714530;");
    asm("loc_6712EDF: dec %eax;");
    asm("loc_6712EE0: neg %eax;");
    asm("loc_6712EE2: sbb %eax,%eax;");
    asm("loc_6712EE4: inc %eax;");
    asm("loc_6712EE5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712EF0() // ?SetFont@IMEInputBox@@QAEXPAUtagLOGFONTA@@@Z
{
    __DEBUG_ASM(6712EF0);
    // chunk 0x6712EF0 _sub_6712EF0
    asm("loc_6712EF0: push %esi;");
    asm("loc_6712EF1: mov %ecx,%esi;");
    asm("loc_6712EF3: mov 0x90(%esi),%ecx;");
    asm("loc_6712EF9: test %ecx,%ecx;");
    asm("loc_6712EFB: je loc_6712F07;");
    asm("loc_6712EFD: mov 8(%esp),%eax;");
    asm("loc_6712F01: push %eax;");
    asm("loc_6712F02: call _sub_67124D0;");
    asm("loc_6712F07: mov %esi,%ecx;");
    asm("loc_6712F09: call _sub_6712DB0;");
    asm("loc_6712F0E: mov %esi,%ecx;");
    asm("loc_6712F10: call _sub_6712BE0;");
    asm("loc_6712F15: pop %esi;");
    asm("loc_6712F16: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712F20() // ?ToggleInsertMode@IMEInputBox@@MAEXXZ
{
    __DEBUG_ASM(6712F20);
    // chunk 0x6712F20 _sub_6712F20
    asm("loc_6712F20: push %esi;");
    asm("loc_6712F21: mov %ecx,%esi;");
    asm("loc_6712F23: call _sub_6712BF0;");
    asm("loc_6712F28: mov 0x8C(%esi),%al;");
    asm("loc_6712F2E: push %eax;");
    asm("loc_6712F2F: call _sub_67155A0;");
    asm("loc_6712F34: mov 0x8C(%esi),%cl;");
    asm("loc_6712F3A: add $4,%esp;");
    asm("loc_6712F3D: push %ecx;");
    asm("loc_6712F3E: lea 4(%esi),%ecx;");
    asm("loc_6712F41: call _sub_67126A0;");
    asm("loc_6712F46: pop %esi;");
    asm("loc_6712F47: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712F50() // _sub_6712F50
{
    __DEBUG_ASM(6712F50);
    // chunk 0x6712F50 _sub_6712F50
    asm("loc_6712F50: jmp _sub_6712F60;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712F60() // _sub_6712F60
{
    __DEBUG_ASM(6712F60);
    // chunk 0x6712F60 _sub_6712F60
    asm("loc_6712F60: mov _off_67190A8,%eax;");
    asm("loc_6712F65: mov %eax,_data_671CF90;");
    asm("loc_6712F6A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6712F70() // _sub_6712F70
{
    asm("jmp dgb_6712F70;"); // jumptable skip
    asm(".long _jmp_6713940;"); // jumptable address
    __DEBUG_ASM(6712F70);
    // chunk 0x6712F70 _sub_6712F70
    asm("loc_6712F70: mov _data_671CFBA,%al;");
    asm("loc_6712F75: sub $0x80,%esp;");
    asm("loc_6712F7B: push %ebx;");
    asm("loc_6712F7C: push %ebp;");
    asm("loc_6712F7D: xor %ebx,%ebx;");
    asm("loc_6712F7F: push %esi;");
    asm("loc_6712F80: test %al,%al;");
    asm("loc_6712F82: push %edi;");
    asm("loc_6712F83: je loc_6713935;");
    asm("loc_6712F89: mov _data_671CF9C,%al;");
    asm("loc_6712F8E: test %al,%al;");
    asm("loc_6712F90: je loc_6713935;");
    asm("loc_6712F96: cmp %ebx,_data_671B518;");
    asm("loc_6712F9C: je loc_6713935;");
    asm("loc_6712FA2: mov 0x94(%esp),%al;");
    asm("loc_6712FA9: test %al,%al;");
    asm("loc_6712FAB: mov 0x98(%esp),%al;");
    asm("loc_6712FB2: jne loc_6712FBC;");
    asm("loc_6712FB4: test %al,%al;");
    asm("loc_6712FB6: je loc_6713935;");
    asm("loc_6712FBC: cmpl $2,_data_671B400;");
    asm("loc_6712FC3: jne loc_6712FCF;");
    asm("loc_6712FC5: test %al,%al;");
    asm("loc_6712FC7: je loc_6713935;");
    asm("loc_6712FCD: jmp loc_6712FD3;");
    asm("loc_6712FCF: test %al,%al;");
    asm("loc_6712FD1: je loc_6712FD8;");
    asm("loc_6712FD3: call _sub_6715600;");
    asm("loc_6712FD8: calll *_import_67170A4;");
    asm("loc_6712FDE: mov _data_671CFB4,%esi;");
    asm("loc_6712FE4: mov _data_671CFB0,%edx;");
    asm("loc_6712FEA: mov %eax,%ecx;");
    asm("loc_6712FEC: sub %esi,%ecx;");
    asm("loc_6712FEE: cmp %edx,%ecx;");
    asm("loc_6712FF0: jbe loc_6713007;");
    asm("loc_6712FF2: mov %eax,_data_671CFB4;");
    asm("loc_6712FF7: mov _data_671CFB8,%al;");
    asm("loc_6712FFC: test %al,%al;");
    asm("loc_6712FFE: sete %dl;");
    asm("loc_6713001: mov %dl,_data_671CFB8;");
    asm("loc_6713007: mov _data_671B518,%ecx;");
    asm("loc_671300D: mov _data_671B51C,%edx;");
    asm("loc_6713013: push %edx;");
    asm("loc_6713014: mov %ebx,0x18(%esp);");
    asm("loc_6713018: mov (%ecx),%eax;");
    asm("loc_671301A: calll *4(%eax);");
    asm("loc_671301D: push $_data_671B7C0;");
    asm("loc_6713022: calll *_off_671937C;");
    asm("loc_6713028: mov _data_671B518,%ecx;");
    asm("loc_671302E: mov %eax,0x38(%esp);");
    asm("loc_6713032: mov _data_671B514,%eax;");
    asm("loc_6713037: mov _data_671B510,%esi;");
    asm("loc_671303D: mov %eax,0x30(%esp);");
    asm("loc_6713041: lea 0x18(%esp),%eax;");
    asm("loc_6713045: push %eax;");
    asm("loc_6713046: lea 0x48(%esp),%eax;");
    asm("loc_671304A: mov %ebx,0x2C(%esp);");
    asm("loc_671304E: mov (%ecx),%edx;");
    asm("loc_6713050: push %eax;");
    asm("loc_6713051: push $_data_6719184;");
    asm("loc_6713056: mov %ebx,0x28(%esp);");
    asm("loc_671305A: mov %ebx,0x2C(%esp);");
    asm("loc_671305E: movl $_data_671B5A8,0x48(%esp);");
    asm("loc_6713066: calll *0xC(%edx);");
    asm("loc_6713069: cmpl $3,_data_671B400;");
    asm("loc_6713070: jne loc_67130C2;");
    asm("loc_6713072: mov _data_671CFA0,%eax;");
    asm("loc_6713077: cmp %ebx,%eax;");
    asm("loc_6713079: je loc_67130C2;");
    asm("loc_671307B: cmp %bx,_data_671B7C0;");
    asm("loc_6713082: je loc_67130C2;");
    asm("loc_6713084: mov _data_671B7C0(,%eax,2),%di;");
    asm("loc_671308C: mov _data_671B518,%ecx;");
    asm("loc_6713092: mov %bx,_data_671B7C0(,%eax,2);");
    asm("loc_671309A: lea 0x18(%esp),%eax;");
    asm("loc_671309E: mov (%ecx),%edx;");
    asm("loc_67130A0: push %eax;");
    asm("loc_67130A1: lea 0x2C(%esp),%eax;");
    asm("loc_67130A5: push %eax;");
    asm("loc_67130A6: push $_data_671B7C0;");
    asm("loc_67130AB: calll *0xC(%edx);");
    asm("loc_67130AE: mov _data_671CFA0,%ecx;");
    asm("loc_67130B4: mov 0x28(%esp),%eax;");
    asm("loc_67130B8: sub %eax,%esi;");
    asm("loc_67130BA: mov %di,_data_671B7C0(,%ecx,2);");
    asm("loc_67130C2: mov _data_671CFC4,%edx;");
    asm("loc_67130C8: movb $0,0x13(%esp);");
    asm("loc_67130CD: and $0x3FF,%edx;");
    asm("loc_67130D3: mov %esi,0x40(%esp);");
    asm("loc_67130D7: cmp $0x12,%edx;");
    asm("loc_67130DA: mov %esi,0x2C(%esp);");
    asm("loc_67130DE: jne loc_67130EF;");
    asm("loc_67130E0: mov _data_671CFB8,%al;");
    asm("loc_67130E5: test %al,%al;");
    asm("loc_67130E7: je loc_67132CB;");
    asm("loc_67130ED: xor %ebx,%ebx;");
    asm("loc_67130EF: mov 0x38(%esp),%eax;");
    asm("loc_67130F3: mov %ebx,0x14(%esp);");
    asm("loc_67130F7: cmp %ebx,%eax;");
    asm("loc_67130F9: jle loc_67132CB;");
    asm("loc_67130FF: mov $_data_671B7C0+2,%ebx;");
    asm("loc_6713104: movl $0,0x34(%esp);");
    asm("loc_671310C: mov %ebx,0x24(%esp);");
    asm("loc_6713110: mov _data_671B518,%ecx;");
    asm("loc_6713116: mov (%ebx),%bp;");
    asm("loc_6713119: mov 0x2C(%esp),%esi;");
    asm("loc_671311D: lea 0x18(%esp),%edx;");
    asm("loc_6713121: xor %edi,%edi;");
    asm("loc_6713123: push %edx;");
    asm("loc_6713124: lea 0x30(%esp),%edx;");
    asm("loc_6713128: mov %di,(%ebx);");
    asm("loc_671312B: mov (%ecx),%eax;");
    asm("loc_671312D: push %edx;");
    asm("loc_671312E: push $_data_671B7C0;");
    asm("loc_6713133: calll *0xC(%eax);");
    asm("loc_6713136: mov 0x2C(%esp),%eax;");
    asm("loc_671313A: mov 0x40(%esp),%ecx;");
    asm("loc_671313E: mov 0x14(%esp),%edx;");
    asm("loc_6713142: add %ecx,%eax;");
    asm("loc_6713144: xor %ecx,%ecx;");
    asm("loc_6713146: mov %eax,0x2C(%esp);");
    asm("loc_671314A: mov _data_671B410(%edx),%cl;");
    asm("loc_6713150: sub %esi,%eax;");
    asm("loc_6713152: cmp $4,%ecx;");
    asm("loc_6713155: mov %bp,(%ebx);");
    asm("loc_6713158: mov %eax,0x28(%esp);");
    asm("loc_671315C: ja loc_67131AA;");
    asm("loc_671315E: jmpl *_jmp_6713940(,%ecx,4);");
    asm("loc_6713165: mov _data_671B534,%edi;");
    asm("loc_671316B: jmp loc_67131AA;");
    asm("loc_671316D: mov _data_671B538,%edi;");
    asm("loc_6713173: push $0;");
    asm("loc_6713175: call _sub_6714BD0;");
    asm("loc_671317A: and $0xFFFF,%eax;");
    asm("loc_671317F: add $4,%esp;");
    asm("loc_6713182: cmp $0x804,%eax;");
    asm("loc_6713187: mov 0x28(%esp),%eax;");
    asm("loc_671318B: je loc_67131AA;");
    asm("loc_671318D: movb $1,0x13(%esp);");
    asm("loc_6713192: jmp loc_67131AA;");
    asm("loc_6713194: mov _data_671B53C,%edi;");
    asm("loc_671319A: jmp loc_67131AA;");
    asm("loc_671319C: mov _data_671B540,%edi;");
    asm("loc_67131A2: jmp loc_67131AA;");
    asm("loc_67131A4: mov _data_671B544,%edi;");
    asm("loc_67131AA: mov _data_671B400,%ecx;");
    asm("loc_67131B0: cmp $3,%ecx;");
    asm("loc_67131B3: jne loc_67131F8;");
    asm("loc_67131B5: mov 0x94(%esp),%cl;");
    asm("loc_67131BC: test %cl,%cl;");
    asm("loc_67131BE: je loc_671326B;");
    asm("loc_67131C4: cmp _data_671B524,%esi;");
    asm("loc_67131CA: jl loc_671326B;");
    asm("loc_67131D0: cmp _data_671B52C,%esi;");
    asm("loc_67131D6: jg loc_671326B;");
    asm("loc_67131DC: mov 0x18(%esp),%edx;");
    asm("loc_67131E0: mov 0x30(%esp),%ecx;");
    asm("loc_67131E4: add %ecx,%edx;");
    asm("loc_67131E6: push %edi;");
    asm("loc_67131E7: add %esi,%eax;");
    asm("loc_67131E9: push %edx;");
    asm("loc_67131EA: push %eax;");
    asm("loc_67131EB: push %ecx;");
    asm("loc_67131EC: push %esi;");
    asm("loc_67131ED: calll *_data_671B7AC;");
    asm("loc_67131F3: add $0x14,%esp;");
    asm("loc_67131F6: jmp loc_671326B;");
    asm("loc_67131F8: cmp $2,%ecx;");
    asm("loc_67131FB: jne loc_671326B;");
    asm("loc_67131FD: mov 0x34(%esp),%ecx;");
    asm("loc_6713201: mov 0x18(%esp),%edx;");
    asm("loc_6713205: sar $1,%ecx;");
    asm("loc_6713207: cmp $0xFB,%ecx;");
    asm("loc_671320D: push %edi;");
    asm("loc_671320E: mov 0x34(%esp),%edi;");
    asm("loc_6713212: setb %bl;");
    asm("loc_6713215: add %edi,%edx;");
    asm("loc_6713217: add %esi,%eax;");
    asm("loc_6713219: push %edx;");
    asm("loc_671321A: push %eax;");
    asm("loc_671321B: push %edi;");
    asm("loc_671321C: push %esi;");
    asm("loc_671321D: calll *_data_671B7AC;");
    asm("loc_6713223: add $0x14,%esp;");
    asm("loc_6713226: test %bl,%bl;");
    asm("loc_6713228: je loc_671324B;");
    asm("loc_671322A: mov 0x24(%esp),%eax;");
    asm("loc_671322E: mov -2(%eax),%cx;");
    asm("loc_6713232: mov 0x3C(%esp),%eax;");
    asm("loc_6713236: mov %cx,(%eax);");
    asm("loc_6713239: add $2,%eax;");
    asm("loc_671323C: mov %eax,0x3C(%esp);");
    asm("loc_6713240: mov 0x34(%esp),%eax;");
    asm("loc_6713244: add $2,%eax;");
    asm("loc_6713247: mov %eax,0x34(%esp);");
    asm("loc_671324B: mov 0x14(%esp),%edx;");
    asm("loc_671324F: mov _data_671CFA0,%eax;");
    asm("loc_6713254: cmp %eax,%edx;");
    asm("loc_6713256: jne loc_6713267;");
    asm("loc_6713258: mov 0x18(%esp),%eax;");
    asm("loc_671325C: push %eax;");
    asm("loc_671325D: push %edi;");
    asm("loc_671325E: push %esi;");
    asm("loc_671325F: call _sub_6713960;");
    asm("loc_6713264: add $0xC,%esp;");
    asm("loc_6713267: mov 0x24(%esp),%ebx;");
    asm("loc_671326B: mov 0x13(%esp),%al;");
    asm("loc_671326F: test %al,%al;");
    asm("loc_6713271: je loc_671327B;");
    asm("loc_6713273: mov 0x1C(%esp),%eax;");
    asm("loc_6713277: test %eax,%eax;");
    asm("loc_6713279: je loc_671329E;");
    asm("loc_671327B: push $0;");
    asm("loc_671327D: call _sub_6714BD0;");
    asm("loc_6713282: and $0xFFFF,%eax;");
    asm("loc_6713287: add $4,%esp;");
    asm("loc_671328A: cmp $0x804,%eax;");
    asm("loc_671328F: jne loc_67132AA;");
    asm("loc_6713291: mov 0x14(%esp),%ecx;");
    asm("loc_6713295: mov _data_671CFA4,%eax;");
    asm("loc_671329A: cmp %eax,%ecx;");
    asm("loc_671329C: jne loc_67132AA;");
    asm("loc_671329E: mov 0x30(%esp),%edx;");
    asm("loc_67132A2: mov %esi,0x1C(%esp);");
    asm("loc_67132A6: mov %edx,0x20(%esp);");
    asm("loc_67132AA: mov 0x14(%esp),%eax;");
    asm("loc_67132AE: mov 0x38(%esp),%ecx;");
    asm("loc_67132B2: inc %eax;");
    asm("loc_67132B3: add $2,%ebx;");
    asm("loc_67132B6: cmp %ecx,%eax;");
    asm("loc_67132B8: movb $0,0x13(%esp);");
    asm("loc_67132BD: mov %eax,0x14(%esp);");
    asm("loc_67132C1: mov %ebx,0x24(%esp);");
    asm("loc_67132C5: jl loc_6713110;");
    asm("loc_67132CB: cmpl $2,_data_671B400;");
    asm("loc_67132D2: jne loc_6713376;");
    asm("loc_67132D8: mov 0x38(%esp),%eax;");
    asm("loc_67132DC: test %eax,%eax;");
    asm("loc_67132DE: je loc_6713304;");
    asm("loc_67132E0: mov _data_671CFA0,%eax;");
    asm("loc_67132E5: mov 0x14(%esp),%ecx;");
    asm("loc_67132E9: cmp %eax,%ecx;");
    asm("loc_67132EB: jne loc_6713304;");
    asm("loc_67132ED: mov 0x18(%esp),%ecx;");
    asm("loc_67132F1: mov 0x30(%esp),%edx;");
    asm("loc_67132F5: mov 0x2C(%esp),%eax;");
    asm("loc_67132F9: push %ecx;");
    asm("loc_67132FA: push %edx;");
    asm("loc_67132FB: push %eax;");
    asm("loc_67132FC: call _sub_6713960;");
    asm("loc_6713301: add $0xC,%esp;");
    asm("loc_6713304: mov 0x3C(%esp),%eax;");
    asm("loc_6713308: mov _data_671B514,%edi;");
    asm("loc_671330E: mov $_data_671B5A8,%esi;");
    asm("loc_6713313: movw $0,(%eax);");
    asm("loc_6713318: movw $0,2(%eax);");
    asm("loc_671331E: cmpw $0,_data_671B5A8;");
    asm("loc_6713326: mov _data_671B510,%eax;");
    asm("loc_671332B: je loc_6713376;");
    asm("loc_671332D: mov _off_671937C,%ebx;");
    asm("loc_6713333: mov %esi,%ecx;");
    asm("loc_6713335: sub $_data_671B5A8,%ecx;");
    asm("loc_671333B: sar $1,%ecx;");
    asm("loc_671333D: cmp $0x100,%ecx;");
    asm("loc_6713343: jae loc_6713376;");
    asm("loc_6713345: mov _data_671B518,%ecx;");
    asm("loc_671334B: push %edi;");
    asm("loc_671334C: push %eax;");
    asm("loc_671334D: mov (%ecx),%edx;");
    asm("loc_671334F: calll *8(%edx);");
    asm("loc_6713352: mov _data_671B518,%ecx;");
    asm("loc_6713358: push %esi;");
    asm("loc_6713359: mov (%ecx),%eax;");
    asm("loc_671335B: calll *0x10(%eax);");
    asm("loc_671335E: push %esi;");
    asm("loc_671335F: call *%ebx;");
    asm("loc_6713361: mov 0x18(%esp),%edx;");
    asm("loc_6713365: lea 2(%esi,%eax,2),%esi;");
    asm("loc_6713369: mov _data_671B524,%eax;");
    asm("loc_671336E: add %edx,%edi;");
    asm("loc_6713370: cmpw $0,(%esi);");
    asm("loc_6713374: jne loc_6713333;");
    asm("loc_6713376: mov 0x98(%esp),%al;");
    asm("loc_671337D: test %al,%al;");
    asm("loc_671337F: je loc_6713935;");
    asm("loc_6713385: mov _data_671CEEC,%eax;");
    asm("loc_671338A: xor %edi,%edi;");
    asm("loc_671338C: cmp %edi,%eax;");
    asm("loc_671338E: je loc_6713935;");
    asm("loc_6713394: cmp %di,_data_671BAD0;");
    asm("loc_671339B: je loc_6713935;");
    asm("loc_67133A1: cmp %edi,0x1C(%esp);");
    asm("loc_67133A5: jne loc_67133BB;");
    asm("loc_67133A7: mov _data_671B510,%ecx;");
    asm("loc_67133AD: mov _data_671B514,%edx;");
    asm("loc_67133B3: mov %ecx,0x1C(%esp);");
    asm("loc_67133B7: mov %edx,0x20(%esp);");
    asm("loc_67133BB: mov _data_671B518,%ecx;");
    asm("loc_67133C1: lea 0x4C(%esp),%edx;");
    asm("loc_67133C5: push %edx;");
    asm("loc_67133C6: lea 0x34(%esp),%edx;");
    asm("loc_67133CA: mov %edi,0x50(%esp);");
    asm("loc_67133CE: mov %edi,0x4C(%esp);");
    asm("loc_67133D2: mov (%ecx),%eax;");
    asm("loc_67133D4: push %edx;");
    asm("loc_67133D5: push $_data_6719180;");
    asm("loc_67133DA: calll *0xC(%eax);");
    asm("loc_67133DD: mov _data_671B518,%ecx;");
    asm("loc_67133E3: lea 0x4C(%esp),%edx;");
    asm("loc_67133E7: push %edx;");
    asm("loc_67133E8: lea 0x3C(%esp),%edx;");
    asm("loc_67133EC: mov (%ecx),%eax;");
    asm("loc_67133EE: push %edx;");
    asm("loc_67133EF: push $_data_6719184;");
    asm("loc_67133F4: calll *0xC(%eax);");
    asm("loc_67133F7: mov 0x38(%esp),%eax;");
    asm("loc_67133FB: mov %edi,0x14(%esp);");
    asm("loc_67133FF: inc %eax;");
    asm("loc_6713400: shr $1,%eax;");
    asm("loc_6713402: mov %eax,0x24(%esp);");
    asm("loc_6713406: mov _data_671CFAC,%al;");
    asm("loc_671340B: test %al,%al;");
    asm("loc_671340D: je loc_6713434;");
    asm("loc_671340F: mov _data_671CFAD,%al;");
    asm("loc_6713414: test %al,%al;");
    asm("loc_6713416: je loc_6713434;");
    asm("loc_6713418: mov _data_671B518,%ecx;");
    asm("loc_671341E: lea 0x4C(%esp),%eax;");
    asm("loc_6713422: push %eax;");
    asm("loc_6713423: lea 0x4C(%esp),%eax;");
    asm("loc_6713427: mov (%ecx),%edx;");
    asm("loc_6713429: push %eax;");
    asm("loc_671342A: push $_data_671B560;");
    asm("loc_671342F: calll *0xC(%edx);");
    asm("loc_6713432: jmp loc_671349B;");
    asm("loc_6713434: cmp %di,_data_671BAD0;");
    asm("loc_671343B: je loc_671349B;");
    asm("loc_671343D: mov $_data_671BAD0,%esi;");
    asm("loc_6713442: cmp _data_671CEE8,%edi;");
    asm("loc_6713448: jae loc_671349B;");
    asm("loc_671344A: mov _data_671B518,%ecx;");
    asm("loc_6713450: lea 0x3C(%esp),%eax;");
    asm("loc_6713454: push %eax;");
    asm("loc_6713455: lea 0x44(%esp),%eax;");
    asm("loc_6713459: mov (%ecx),%edx;");
    asm("loc_671345B: push %eax;");
    asm("loc_671345C: push %esi;");
    asm("loc_671345D: calll *0xC(%edx);");
    asm("loc_6713460: mov 0x40(%esp),%eax;");
    asm("loc_6713464: mov 0x48(%esp),%ecx;");
    asm("loc_6713468: cmp %ecx,%eax;");
    asm("loc_671346A: jle loc_6713470;");
    asm("loc_671346C: mov %eax,0x48(%esp);");
    asm("loc_6713470: mov 0x3C(%esp),%ecx;");
    asm("loc_6713474: mov 0x4C(%esp),%edx;");
    asm("loc_6713478: cmp %edx,%ecx;");
    asm("loc_671347A: jle loc_6713480;");
    asm("loc_671347C: mov %ecx,0x4C(%esp);");
    asm("loc_6713480: mov 0x14(%esp),%ebx;");
    asm("loc_6713484: add $0x200,%esi;");
    asm("loc_671348A: mov %eax,0x50(%esp,%edi,4);");
    asm("loc_671348E: add %eax,%ebx;");
    asm("loc_6713490: inc %edi;");
    asm("loc_6713491: cmpw $0,(%esi);");
    asm("loc_6713495: mov %ebx,0x14(%esp);");
    asm("loc_6713499: jne loc_6713442;");
    asm("loc_671349B: mov _data_671CFAC,%dl;");
    asm("loc_67134A1: test %dl,%dl;");
    asm("loc_67134A3: je loc_67134B6;");
    asm("loc_67134A5: mov _data_671CEEC,%eax;");
    asm("loc_67134AA: mov _data_671CEE8,%ecx;");
    asm("loc_67134B0: cmp %ecx,%eax;");
    asm("loc_67134B2: mov %eax,%esi;");
    asm("loc_67134B4: jb loc_67134BC;");
    asm("loc_67134B6: mov _data_671CEE8,%esi;");
    asm("loc_67134BC: mov _data_67190A4,%al;");
    asm("loc_67134C1: mov %esi,0x3C(%esp);");
    asm("loc_67134C5: test %al,%al;");
    asm("loc_67134C7: je loc_67134E2;");
    asm("loc_67134C9: test %dl,%dl;");
    asm("loc_67134CB: je loc_67134D6;");
    asm("loc_67134CD: mov _data_671CFAD,%al;");
    asm("loc_67134D2: test %al,%al;");
    asm("loc_67134D4: jne loc_67134E2;");
    asm("loc_67134D6: mov %esi,%edi;");
    asm("loc_67134D8: imul 0x4C(%esp),%edi;");
    asm("loc_67134DD: add $2,%edi;");
    asm("loc_67134E0: jmp loc_67134E9;");
    asm("loc_67134E2: mov 0x4C(%esp),%ecx;");
    asm("loc_67134E6: lea 2(%ecx),%edi;");
    asm("loc_67134E9: mov 0x18(%esp),%ecx;");
    asm("loc_67134ED: mov 0x20(%esp),%eax;");
    asm("loc_67134F1: mov _data_671B7B0,%ebp;");
    asm("loc_67134F7: lea (%edi,%ecx),%ebx;");
    asm("loc_67134FA: add %eax,%ebx;");
    asm("loc_67134FC: cmp %ebp,%ebx;");
    asm("loc_67134FE: jbe loc_6713504;");
    asm("loc_6713500: sub %edi,%eax;");
    asm("loc_6713502: jmp loc_6713506;");
    asm("loc_6713504: add %ecx,%eax;");
    asm("loc_6713506: xor %ebx,%ebx;");
    asm("loc_6713508: mov %eax,0x20(%esp);");
    asm("loc_671350C: cmp %ebx,%eax;");
    asm("loc_671350E: jge loc_6713514;");
    asm("loc_6713510: mov %ebx,0x20(%esp);");
    asm("loc_6713514: test %dl,%dl;");
    asm("loc_6713516: jne loc_6713542;");
    asm("loc_6713518: push %ebx;");
    asm("loc_6713519: call _sub_6714BD0;");
    asm("loc_671351E: and $0xFFFF,%eax;");
    asm("loc_6713523: add $4,%esp;");
    asm("loc_6713526: cmp $0x804,%eax;");
    asm("loc_671352B: jne loc_6713538;");
    asm("loc_671352D: imul 0x24(%esp),%esi;");
    asm("loc_6713532: add %esi,0x14(%esp);");
    asm("loc_6713536: jmp loc_671358B;");
    asm("loc_6713538: mov _data_671CFAC,%dl;");
    asm("loc_671353E: test %dl,%dl;");
    asm("loc_6713540: je loc_671355D;");
    asm("loc_6713542: mov _data_671CFAD,%al;");
    asm("loc_6713547: test %al,%al;");
    asm("loc_6713549: je loc_671355D;");
    asm("loc_671354B: mov 0x24(%esp),%edx;");
    asm("loc_671354F: mov 0x48(%esp),%eax;");
    asm("loc_6713553: lea 2(%eax,%edx,2),%ecx;");
    asm("loc_6713557: mov %ecx,0x14(%esp);");
    asm("loc_671355B: jmp loc_671358B;");
    asm("loc_671355D: mov _data_67190A4,%al;");
    asm("loc_6713562: test %al,%al;");
    asm("loc_6713564: jne loc_671357B;");
    asm("loc_6713566: test %dl,%dl;");
    asm("loc_6713568: jne loc_671357B;");
    asm("loc_671356A: mov 0x48(%esp),%edx;");
    asm("loc_671356E: lea 1(%edx),%eax;");
    asm("loc_6713571: imul %esi,%eax;");
    asm("loc_6713574: inc %eax;");
    asm("loc_6713575: mov %eax,0x14(%esp);");
    asm("loc_6713579: jmp loc_671358B;");
    asm("loc_671357B: mov 0x24(%esp),%eax;");
    asm("loc_671357F: mov 0x48(%esp),%ecx;");
    asm("loc_6713583: lea 2(%ecx,%eax,2),%edx;");
    asm("loc_6713587: mov %edx,0x14(%esp);");
    asm("loc_671358B: cmp %ebx,0x1C(%esp);");
    asm("loc_671358F: jge loc_6713595;");
    asm("loc_6713591: mov %ebx,0x1C(%esp);");
    asm("loc_6713595: mov 0x14(%esp),%eax;");
    asm("loc_6713599: mov 0x1C(%esp),%ebp;");
    asm("loc_671359D: mov 0x20(%esp),%esi;");
    asm("loc_67135A1: mov _data_6719080,%ecx;");
    asm("loc_67135A7: add %esi,%edi;");
    asm("loc_67135A9: lea (%eax,%ebp),%ebx;");
    asm("loc_67135AC: push %ecx;");
    asm("loc_67135AD: push %edi;");
    asm("loc_67135AE: push %ebx;");
    asm("loc_67135AF: push %esi;");
    asm("loc_67135B0: push %ebp;");
    asm("loc_67135B1: calll *_data_671B7AC;");
    asm("loc_67135B7: mov _data_671CFAC,%al;");
    asm("loc_67135BC: add $0x14,%esp;");
    asm("loc_67135BF: inc %ebp;");
    asm("loc_67135C0: inc %esi;");
    asm("loc_67135C1: dec %ebx;");
    asm("loc_67135C2: dec %edi;");
    asm("loc_67135C3: test %al,%al;");
    asm("loc_67135C5: mov %ebp,0x34(%esp);");
    asm("loc_67135C9: jne loc_6713676;");
    asm("loc_67135CF: push $0;");
    asm("loc_67135D1: call _sub_6714BD0;");
    asm("loc_67135D6: and $0xFFFF,%eax;");
    asm("loc_67135DB: add $4,%esp;");
    asm("loc_67135DE: cmp $0x804,%eax;");
    asm("loc_67135E3: je loc_6713676;");
    asm("loc_67135E9: mov _data_67190A4,%al;");
    asm("loc_67135EE: test %al,%al;");
    asm("loc_67135F0: je loc_6713647;");
    asm("loc_67135F2: mov _data_671CFAC,%al;");
    asm("loc_67135F7: mov %ebx,0x40(%esp);");
    asm("loc_67135FB: test %al,%al;");
    asm("loc_67135FD: jne loc_671368A;");
    asm("loc_6713603: mov 0x38(%esp),%edx;");
    asm("loc_6713607: mov 0x24(%esp),%ebx;");
    asm("loc_671360B: mov 0x30(%esp),%eax;");
    asm("loc_671360F: mov _data_671907C,%ecx;");
    asm("loc_6713615: shr $1,%edx;");
    asm("loc_6713617: add %ebp,%edx;");
    asm("loc_6713619: push %ecx;");
    asm("loc_671361A: add %ebx,%edx;");
    asm("loc_671361C: push %edi;");
    asm("loc_671361D: lea -1(%edx,%eax),%ebx;");
    asm("loc_6713621: push %ebx;");
    asm("loc_6713622: push %esi;");
    asm("loc_6713623: push %ebp;");
    asm("loc_6713624: calll *_data_671B7AC;");
    asm("loc_671362A: mov _data_671907C,%edx;");
    asm("loc_6713630: mov 0x54(%esp),%ecx;");
    asm("loc_6713634: push %edx;");
    asm("loc_6713635: push %edi;");
    asm("loc_6713636: lea 1(%ebx),%eax;");
    asm("loc_6713639: push %ecx;");
    asm("loc_671363A: push %esi;");
    asm("loc_671363B: push %eax;");
    asm("loc_671363C: calll *_data_671B7AC;");
    asm("loc_6713642: add $0x28,%esp;");
    asm("loc_6713645: jmp loc_671368A;");
    asm("loc_6713647: mov 0x3C(%esp),%ebx;");
    asm("loc_671364B: test %ebx,%ebx;");
    asm("loc_671364D: jbe loc_671368A;");
    asm("loc_671364F: mov 0x48(%esp),%eax;");
    asm("loc_6713653: mov _data_671907C,%edx;");
    asm("loc_6713659: add %ebp,%eax;");
    asm("loc_671365B: push %edx;");
    asm("loc_671365C: push %edi;");
    asm("loc_671365D: push %eax;");
    asm("loc_671365E: push %esi;");
    asm("loc_671365F: push %ebp;");
    asm("loc_6713660: calll *_data_671B7AC;");
    asm("loc_6713666: mov 0x5C(%esp),%eax;");
    asm("loc_671366A: add $0x14,%esp;");
    asm("loc_671366D: dec %ebx;");
    asm("loc_671366E: lea 1(%eax,%ebp),%ebp;");
    asm("loc_6713672: jne loc_6713653;");
    asm("loc_6713674: jmp loc_671368A;");
    asm("loc_6713676: mov _data_671907C,%ecx;");
    asm("loc_671367C: push %ecx;");
    asm("loc_671367D: push %edi;");
    asm("loc_671367E: push %ebx;");
    asm("loc_671367F: push %esi;");
    asm("loc_6713680: push %ebp;");
    asm("loc_6713681: calll *_data_671B7AC;");
    asm("loc_6713687: add $0x14,%esp;");
    asm("loc_671368A: mov _data_671CFAC,%al;");
    asm("loc_671368F: mov 0x34(%esp),%edi;");
    asm("loc_6713693: test %al,%al;");
    asm("loc_6713695: je loc_67137E5;");
    asm("loc_671369B: mov _data_671CFAD,%al;");
    asm("loc_67136A0: test %al,%al;");
    asm("loc_67136A2: je loc_67137E5;");
    asm("loc_67136A8: mov 0x24(%esp),%ecx;");
    asm("loc_67136AC: or $0xFFFFFFFF,%eax;");
    asm("loc_67136AF: mov %eax,0x3C(%esp);");
    asm("loc_67136B3: mov %eax,0x34(%esp);");
    asm("loc_67136B7: mov _data_671B554,%eax;");
    asm("loc_67136BC: add %ecx,%edi;");
    asm("loc_67136BE: test %eax,%eax;");
    asm("loc_67136C0: jl loc_671375B;");
    asm("loc_67136C6: lea 0x50(%esp),%edx;");
    asm("loc_67136CA: push $_data_671B560;");
    asm("loc_67136CF: push %edx;");
    asm("loc_67136D0: calll *_off_6719374;");
    asm("loc_67136D6: mov _data_671B554,%eax;");
    asm("loc_67136DB: mov _data_671B518,%ecx;");
    asm("loc_67136E1: movw $0,0x52(%esp,%eax,2);");
    asm("loc_67136E8: mov (%ecx),%edx;");
    asm("loc_67136EA: lea 0x40(%esp),%eax;");
    asm("loc_67136EE: push %eax;");
    asm("loc_67136EF: lea 0x38(%esp),%eax;");
    asm("loc_67136F3: push %eax;");
    asm("loc_67136F4: lea 0x58(%esp),%eax;");
    asm("loc_67136F8: push %eax;");
    asm("loc_67136F9: calll *0xC(%edx);");
    asm("loc_67136FC: mov _data_671B554,%ecx;");
    asm("loc_6713702: mov 0x50(%esp,%ecx,2),%bx;");
    asm("loc_6713707: lea 0x50(%esp,%ecx,2),%eax;");
    asm("loc_671370B: mov _data_671B518,%ecx;");
    asm("loc_6713711: movw $0,(%eax);");
    asm("loc_6713716: lea 0x40(%esp),%eax;");
    asm("loc_671371A: mov (%ecx),%edx;");
    asm("loc_671371C: push %eax;");
    asm("loc_671371D: lea 0x40(%esp),%eax;");
    asm("loc_6713721: push %eax;");
    asm("loc_6713722: lea 0x58(%esp),%eax;");
    asm("loc_6713726: push %eax;");
    asm("loc_6713727: calll *0xC(%edx);");
    asm("loc_671372A: mov _data_671B554,%ecx;");
    asm("loc_6713730: mov _data_6719080,%edx;");
    asm("loc_6713736: mov 0x4C(%esp),%eax;");
    asm("loc_671373A: push %edx;");
    asm("loc_671373B: mov 0x40(%esp),%edx;");
    asm("loc_671373F: mov %bx,0x54(%esp,%ecx,2);");
    asm("loc_6713744: mov 0x38(%esp),%ecx;");
    asm("loc_6713748: add %esi,%eax;");
    asm("loc_671374A: add %edi,%ecx;");
    asm("loc_671374C: push %eax;");
    asm("loc_671374D: push %ecx;");
    asm("loc_671374E: add %edi,%edx;");
    asm("loc_6713750: push %esi;");
    asm("loc_6713751: push %edx;");
    asm("loc_6713752: calll *_data_671B7AC;");
    asm("loc_6713758: add $0x14,%esp;");
    asm("loc_671375B: mov _data_671B518,%ecx;");
    asm("loc_6713761: push %esi;");
    asm("loc_6713762: push %edi;");
    asm("loc_6713763: mov (%ecx),%eax;");
    asm("loc_6713765: calll *8(%eax);");
    asm("loc_6713768: mov _data_671B518,%ecx;");
    asm("loc_671376E: mov _data_671B520,%eax;");
    asm("loc_6713773: push %eax;");
    asm("loc_6713774: mov (%ecx),%edx;");
    asm("loc_6713776: calll *4(%edx);");
    asm("loc_6713779: mov _data_671B518,%ecx;");
    asm("loc_671377F: push $_data_671B560;");
    asm("loc_6713784: mov (%ecx),%edx;");
    asm("loc_6713786: calll *0x10(%edx);");
    asm("loc_6713789: mov 0x3C(%esp),%eax;");
    asm("loc_671378D: test %eax,%eax;");
    asm("loc_671378F: jl loc_6713935;");
    asm("loc_6713795: mov _data_671B518,%ecx;");
    asm("loc_671379B: add %edi,%eax;");
    asm("loc_671379D: push %esi;");
    asm("loc_671379E: push %eax;");
    asm("loc_671379F: mov (%ecx),%edx;");
    asm("loc_67137A1: calll *8(%edx);");
    asm("loc_67137A4: mov _data_671B520,%edx;");
    asm("loc_67137AA: mov _data_671B518,%ecx;");
    asm("loc_67137B0: and $0xFFFFFF,%edx;");
    asm("loc_67137B6: mov (%ecx),%eax;");
    asm("loc_67137B8: not %edx;");
    asm("loc_67137BA: sub $0x1000000,%edx;");
    asm("loc_67137C0: push %edx;");
    asm("loc_67137C1: calll *4(%eax);");
    asm("loc_67137C4: mov _data_671B554,%edx;");
    asm("loc_67137CA: mov _data_671B518,%ecx;");
    asm("loc_67137D0: mov (%ecx),%eax;");
    asm("loc_67137D2: lea 0x50(%esp,%edx,2),%edx;");
    asm("loc_67137D6: push %edx;");
    asm("loc_67137D7: calll *0x10(%eax);");
    asm("loc_67137DA: pop %edi;");
    asm("loc_67137DB: pop %esi;");
    asm("loc_67137DC: pop %ebp;");
    asm("loc_67137DD: pop %ebx;");
    asm("loc_67137DE: add $0x80,%esp;");
    asm("loc_67137E4: ret;");
    asm("loc_67137E5: mov _data_671CEE8,%eax;");
    asm("loc_67137EA: xor %ebp,%ebp;");
    asm("loc_67137EC: test %eax,%eax;");
    asm("loc_67137EE: jle loc_6713935;");
    asm("loc_67137F4: mov $_data_671BAD0,%ebx;");
    asm("loc_67137F9: cmp _data_671CEEC,%ebp;");
    asm("loc_67137FF: jae loc_6713935;");
    asm("loc_6713805: mov _data_671CED8,%eax;");
    asm("loc_671380A: mov _data_671B518,%ecx;");
    asm("loc_6713810: cmp %ebp,%eax;");
    asm("loc_6713812: jne loc_671388F;");
    asm("loc_6713814: mov _data_671B520,%edx;");
    asm("loc_671381A: mov (%ecx),%eax;");
    asm("loc_671381C: and $0xFFFFFF,%edx;");
    asm("loc_6713822: not %edx;");
    asm("loc_6713824: sub $0x1000000,%edx;");
    asm("loc_671382A: push %edx;");
    asm("loc_671382B: calll *4(%eax);");
    asm("loc_671382E: mov _data_671CFAC,%al;");
    asm("loc_6713833: test %al,%al;");
    asm("loc_6713835: jne loc_6713861;");
    asm("loc_6713837: mov _data_67190A4,%al;");
    asm("loc_671383C: test %al,%al;");
    asm("loc_671383E: jne loc_6713861;");
    asm("loc_6713840: mov 0x4C(%esp),%ecx;");
    asm("loc_6713844: mov _data_6719080,%eax;");
    asm("loc_6713849: mov 0x50(%esp,%ebp,4),%edx;");
    asm("loc_671384D: add %esi,%ecx;");
    asm("loc_671384F: push %eax;");
    asm("loc_6713850: add %edi,%edx;");
    asm("loc_6713852: push %ecx;");
    asm("loc_6713853: push %edx;");
    asm("loc_6713854: push %esi;");
    asm("loc_6713855: push %edi;");
    asm("loc_6713856: calll *_data_671B7AC;");
    asm("loc_671385C: add $0x14,%esp;");
    asm("loc_671385F: jmp loc_671389A;");
    asm("loc_6713861: mov _data_6719080,%eax;");
    asm("loc_6713866: lea 1(%ebp),%ecx;");
    asm("loc_6713869: push %eax;");
    asm("loc_671386A: mov 0x50(%esp),%eax;");
    asm("loc_671386E: imul %eax,%ecx;");
    asm("loc_6713871: imul %ebp,%eax;");
    asm("loc_6713874: mov 0x18(%esp),%edx;");
    asm("loc_6713878: add %esi,%ecx;");
    asm("loc_671387A: push %ecx;");
    asm("loc_671387B: add %esi,%eax;");
    asm("loc_671387D: lea -1(%edx,%edi),%ecx;");
    asm("loc_6713881: push %ecx;");
    asm("loc_6713882: push %eax;");
    asm("loc_6713883: push %edi;");
    asm("loc_6713884: calll *_data_671B7AC;");
    asm("loc_671388A: add $0x14,%esp;");
    asm("loc_671388D: jmp loc_671389A;");
    asm("loc_671388F: mov _data_671B520,%eax;");
    asm("loc_6713894: mov (%ecx),%edx;");
    asm("loc_6713896: push %eax;");
    asm("loc_6713897: calll *4(%edx);");
    asm("loc_671389A: cmpw $0,(%ebx);");
    asm("loc_671389E: je loc_67138E3;");
    asm("loc_67138A0: mov _data_671CFAC,%al;");
    asm("loc_67138A5: test %al,%al;");
    asm("loc_67138A7: jne loc_67138BB;");
    asm("loc_67138A9: mov _data_67190A4,%al;");
    asm("loc_67138AE: test %al,%al;");
    asm("loc_67138B0: jne loc_67138BB;");
    asm("loc_67138B2: mov 0x38(%esp),%eax;");
    asm("loc_67138B6: push %esi;");
    asm("loc_67138B7: shr $1,%eax;");
    asm("loc_67138B9: jmp loc_67138C9;");
    asm("loc_67138BB: mov 0x4C(%esp),%eax;");
    asm("loc_67138BF: imul %ebp,%eax;");
    asm("loc_67138C2: add %esi,%eax;");
    asm("loc_67138C4: push %eax;");
    asm("loc_67138C5: mov 0x28(%esp),%eax;");
    asm("loc_67138C9: mov _data_671B518,%ecx;");
    asm("loc_67138CF: add %edi,%eax;");
    asm("loc_67138D1: push %eax;");
    asm("loc_67138D2: mov (%ecx),%edx;");
    asm("loc_67138D4: calll *8(%edx);");
    asm("loc_67138D7: mov _data_671B518,%ecx;");
    asm("loc_67138DD: push %ebx;");
    asm("loc_67138DE: mov (%ecx),%edx;");
    asm("loc_67138E0: calll *0x10(%edx);");
    asm("loc_67138E3: mov _data_671CFAC,%al;");
    asm("loc_67138E8: test %al,%al;");
    asm("loc_67138EA: jne loc_6713921;");
    asm("loc_67138EC: mov _data_67190A4,%al;");
    asm("loc_67138F1: test %al,%al;");
    asm("loc_67138F3: jne loc_6713921;");
    asm("loc_67138F5: push $0;");
    asm("loc_67138F7: call _sub_6714BD0;");
    asm("loc_67138FC: and $0xFFFF,%eax;");
    asm("loc_6713901: add $4,%esp;");
    asm("loc_6713904: cmp $0x804,%eax;");
    asm("loc_6713909: jne loc_6713919;");
    asm("loc_671390B: mov 0x50(%esp,%ebp,4),%eax;");
    asm("loc_671390F: mov 0x24(%esp),%edx;");
    asm("loc_6713913: add %edx,%eax;");
    asm("loc_6713915: add %eax,%edi;");
    asm("loc_6713917: jmp loc_6713921;");
    asm("loc_6713919: mov 0x48(%esp),%ecx;");
    asm("loc_671391D: lea 1(%edi,%ecx),%edi;");
    asm("loc_6713921: mov _data_671CEE8,%eax;");
    asm("loc_6713926: inc %ebp;");
    asm("loc_6713927: add $0x200,%ebx;");
    asm("loc_671392D: cmp %eax,%ebp;");
    asm("loc_671392F: jl loc_67137F9;");
    asm("loc_6713935: pop %edi;");
    asm("loc_6713936: pop %esi;");
    asm("loc_6713937: pop %ebp;");
    asm("loc_6713938: pop %ebx;");
    asm("loc_6713939: add $0x80,%esp;");
    asm("loc_671393F: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_6713940: .long loc_6713165;");
    asm(".long loc_671316D;");
    asm(".long loc_6713194;");
    asm(".long loc_671319C;");
    asm(".long loc_67131A4;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6712F70);
_naked _weak void _sub_6713960() // _sub_6713960
{
    __DEBUG_ASM(6713960);
    // chunk 0x6713960 _sub_6713960
    asm("loc_6713960: mov _data_671CFB8,%al;");
    asm("loc_6713965: test %al,%al;");
    asm("loc_6713967: je loc_6713990;");
    asm("loc_6713969: mov _data_671B51C,%eax;");
    asm("loc_671396E: mov 0xC(%esp),%ecx;");
    asm("loc_6713972: push %eax;");
    asm("loc_6713973: mov 0xC(%esp),%eax;");
    asm("loc_6713977: lea -1(%eax,%ecx),%edx;");
    asm("loc_671397B: mov 8(%esp),%ecx;");
    asm("loc_671397F: push %edx;");
    asm("loc_6713980: inc %eax;");
    asm("loc_6713981: lea 2(%ecx),%edx;");
    asm("loc_6713984: push %edx;");
    asm("loc_6713985: push %eax;");
    asm("loc_6713986: push %ecx;");
    asm("loc_6713987: calll *_data_671B7AC;");
    asm("loc_671398D: add $0x14,%esp;");
    asm("loc_6713990: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67139A0() // _sub_67139A0
{
    asm("jmp dgb_67139A0;"); // jumptable skip
    asm(".long _jmp_671417C;"); // jumptable address
    __DEBUG_ASM(67139A0);
    // chunk 0x67139A0 _sub_67139A0
    asm("loc_67139A0: sub $0x210,%esp;");
    asm("loc_67139A6: push %ebp;");
    asm("loc_67139A7: push %esi;");
    asm("loc_67139A8: mov 0x22C(%esp),%esi;");
    asm("loc_67139AF: xor %ebp,%ebp;");
    asm("loc_67139B1: movb $0,(%esi);");
    asm("loc_67139B4: mov _data_671CFBA,%al;");
    asm("loc_67139B9: test %al,%al;");
    asm("loc_67139BB: je loc_671416E;");
    asm("loc_67139C1: cmp %ebp,_data_671CFA8;");
    asm("loc_67139C7: jne loc_671416E;");
    asm("loc_67139CD: mov 0x220(%esp),%eax;");
    asm("loc_67139D4: push %ebx;");
    asm("loc_67139D5: cmp $0x10D,%eax;");
    asm("loc_67139DA: push %edi;");
    asm("loc_67139DB: ja loc_6713BA2;");
    asm("loc_67139E1: je loc_6713B8D;");
    asm("loc_67139E7: add $0xFFFFFFAF,%eax;");
    asm("loc_67139EA: cmp $0xB4,%eax;");
    asm("loc_67139EF: ja loc_671416C;");
    asm("loc_67139F5: mov 0x22C(%esp),%edi;");
    asm("loc_67139FC: xor %ecx,%ecx;");
    asm("loc_67139FE: mov _data_671418C(%eax),%cl;");
    asm("loc_6713A04: jmpl *_jmp_671417C(,%ecx,4);");
    asm("loc_6713A0B: mov _data_671CFC4,%esi;");
    asm("loc_6713A11: and $0x3FF,%esi;");
    asm("loc_6713A17: call _sub_67154C0;");
    asm("loc_6713A1C: mov _data_671CFC4,%eax;");
    asm("loc_6713A21: mov %eax,%edx;");
    asm("loc_6713A23: and $0x3FF,%edx;");
    asm("loc_6713A29: cmp %edx,%esi;");
    asm("loc_6713A2B: je loc_6713A4A;");
    asm("loc_6713A2D: and $0x3FF,%eax;");
    asm("loc_6713A32: cmp $0x12,%eax;");
    asm("loc_6713A35: mov $3,%eax;");
    asm("loc_6713A3A: je loc_6713A41;");
    asm("loc_6713A3C: mov _data_671B7B4,%eax;");
    asm("loc_6713A41: push %eax;");
    asm("loc_6713A42: call _sub_6715390;");
    asm("loc_6713A47: add $4,%esp;");
    asm("loc_6713A4A: call _sub_6715D30;");
    asm("loc_6713A4F: cmp %ebp,_data_671CEF4;");
    asm("loc_6713A55: je loc_671416C;");
    asm("loc_6713A5B: mov _data_671CF98,%eax;");
    asm("loc_6713A60: push %eax;");
    asm("loc_6713A61: call _sub_6716988;");
    asm("loc_6713A66: mov %eax,%esi;");
    asm("loc_6713A68: cmp %ebp,%esi;");
    asm("loc_6713A6A: je loc_671416C;");
    asm("loc_6713A70: push %ebp;");
    asm("loc_6713A71: push %esi;");
    asm("loc_6713A72: calll *_data_671CEF4;");
    asm("loc_6713A78: mov _data_671CF98,%ecx;");
    asm("loc_6713A7E: push %esi;");
    asm("loc_6713A7F: push %ecx;");
    asm("loc_6713A80: call _sub_6716982;");
    asm("loc_6713A85: pop %edi;");
    asm("loc_6713A86: pop %ebx;");
    asm("loc_6713A87: pop %esi;");
    asm("loc_6713A88: xor %eax,%eax;");
    asm("loc_6713A8A: pop %ebp;");
    asm("loc_6713A8B: add $0x210,%esp;");
    asm("loc_6713A91: ret;");
    asm("loc_6713A92: mov _data_67190BC,%eax;");
    asm("loc_6713A97: mov _import_67170F8,%esi;");
    asm("loc_6713A9D: mov $0x80000000,%ebx;");
    asm("loc_6713AA2: test %eax,%ebx;");
    asm("loc_6713AA4: jne loc_6713ACA;");
    asm("loc_6713AA6: cmp $0x12,%edi;");
    asm("loc_6713AA9: je loc_6713ACA;");
    asm("loc_6713AAB: push $0x12;");
    asm("loc_6713AAD: call *%esi;");
    asm("loc_6713AAF: test %ah,%ah;");
    asm("loc_6713AB1: js loc_6713ACA;");
    asm("loc_6713AB3: mov _data_67190BC,%edx;");
    asm("loc_6713AB9: and $0x1FF0000,%edx;");
    asm("loc_6713ABF: or $0xC0000001,%edx;");
    asm("loc_6713AC5: push %edx;");
    asm("loc_6713AC6: push $0x12;");
    asm("loc_6713AC8: jmp loc_6713B1D;");
    asm("loc_6713ACA: test %ebx,_data_67190C0;");
    asm("loc_6713AD0: jne loc_6713AF3;");
    asm("loc_6713AD2: cmp $0x11,%edi;");
    asm("loc_6713AD5: je loc_6713AF3;");
    asm("loc_6713AD7: push $0x11;");
    asm("loc_6713AD9: call *%esi;");
    asm("loc_6713ADB: test %ah,%ah;");
    asm("loc_6713ADD: js loc_6713AF3;");
    asm("loc_6713ADF: mov _data_67190C0,%eax;");
    asm("loc_6713AE4: and $0x1FF0000,%eax;");
    asm("loc_6713AE9: or $0xC0000001,%eax;");
    asm("loc_6713AEE: push %eax;");
    asm("loc_6713AEF: push $0x11;");
    asm("loc_6713AF1: jmp loc_6713B1D;");
    asm("loc_6713AF3: test %ebx,_data_67190C4;");
    asm("loc_6713AF9: jne loc_6713B2F;");
    asm("loc_6713AFB: cmp $0x10,%edi;");
    asm("loc_6713AFE: je loc_6713B2F;");
    asm("loc_6713B00: push $0x10;");
    asm("loc_6713B02: call *%esi;");
    asm("loc_6713B04: test %ah,%ah;");
    asm("loc_6713B06: js loc_6713B2F;");
    asm("loc_6713B08: mov _data_67190C4,%ecx;");
    asm("loc_6713B0E: and $0x1FF0000,%ecx;");
    asm("loc_6713B14: or $0xC0000001,%ecx;");
    asm("loc_6713B1A: push %ecx;");
    asm("loc_6713B1B: push $0x10;");
    asm("loc_6713B1D: push $0x101;");
    asm("loc_6713B22: calll *_import_6717104;");
    asm("loc_6713B28: push %eax;");
    asm("loc_6713B29: calll *_import_67170F4;");
    asm("loc_6713B2F: mov %edi,%eax;");
    asm("loc_6713B31: sub $0x10,%eax;");
    asm("loc_6713B34: je loc_6713B73;");
    asm("loc_6713B36: dec %eax;");
    asm("loc_6713B37: je loc_6713B5A;");
    asm("loc_6713B39: dec %eax;");
    asm("loc_6713B3A: jne loc_671416C;");
    asm("loc_6713B40: mov 0x230(%esp),%edx;");
    asm("loc_6713B47: pop %edi;");
    asm("loc_6713B48: pop %ebx;");
    asm("loc_6713B49: pop %esi;");
    asm("loc_6713B4A: mov %edx,_data_67190BC;");
    asm("loc_6713B50: xor %eax,%eax;");
    asm("loc_6713B52: pop %ebp;");
    asm("loc_6713B53: add $0x210,%esp;");
    asm("loc_6713B59: ret;");
    asm("loc_6713B5A: mov 0x230(%esp),%eax;");
    asm("loc_6713B61: pop %edi;");
    asm("loc_6713B62: pop %ebx;");
    asm("loc_6713B63: mov %eax,_data_67190C0;");
    asm("loc_6713B68: pop %esi;");
    asm("loc_6713B69: xor %eax,%eax;");
    asm("loc_6713B6B: pop %ebp;");
    asm("loc_6713B6C: add $0x210,%esp;");
    asm("loc_6713B72: ret;");
    asm("loc_6713B73: mov 0x230(%esp),%ecx;");
    asm("loc_6713B7A: pop %edi;");
    asm("loc_6713B7B: pop %ebx;");
    asm("loc_6713B7C: pop %esi;");
    asm("loc_6713B7D: mov %ecx,_data_67190C4;");
    asm("loc_6713B83: xor %eax,%eax;");
    asm("loc_6713B85: pop %ebp;");
    asm("loc_6713B86: add $0x210,%esp;");
    asm("loc_6713B8C: ret;");
    asm("loc_6713B8D: call _sub_6714470;");
    asm("loc_6713B92: pop %edi;");
    asm("loc_6713B93: movb $1,(%esi);");
    asm("loc_6713B96: pop %ebx;");
    asm("loc_6713B97: pop %esi;");
    asm("loc_6713B98: xor %eax,%eax;");
    asm("loc_6713B9A: pop %ebp;");
    asm("loc_6713B9B: add $0x210,%esp;");
    asm("loc_6713BA1: ret;");
    asm("loc_6713BA2: cmp $0x281,%eax;");
    asm("loc_6713BA7: ja loc_6713E40;");
    asm("loc_6713BAD: je loc_671416C;");
    asm("loc_6713BB3: sub $0x10E,%eax;");
    asm("loc_6713BB8: je loc_6713E1D;");
    asm("loc_6713BBE: dec %eax;");
    asm("loc_6713BBF: jne loc_671416C;");
    asm("loc_6713BC5: mov 0x224(%esp),%edx;");
    asm("loc_6713BCC: movb $1,(%esi);");
    asm("loc_6713BCF: push %edx;");
    asm("loc_6713BD0: call _sub_6716988;");
    asm("loc_6713BD5: cmp %ebp,%eax;");
    asm("loc_6713BD7: mov %eax,0x18(%esp);");
    asm("loc_6713BDB: je loc_671416C;");
    asm("loc_6713BE1: mov 0x230(%esp),%ebx;");
    asm("loc_6713BE8: mov _off_6719374,%esi;");
    asm("loc_6713BEE: test $8,%bh;");
    asm("loc_6713BF1: je loc_6713C42;");
    asm("loc_6713BF3: lea 0x20(%esp),%ecx;");
    asm("loc_6713BF7: push $0x100;");
    asm("loc_6713BFC: push %ecx;");
    asm("loc_6713BFD: push $0x800;");
    asm("loc_6713C02: push %eax;");
    asm("loc_6713C03: calll *_data_671CF94;");
    asm("loc_6713C09: shr $1,%eax;");
    asm("loc_6713C0B: lea 0x20(%esp),%edx;");
    asm("loc_6713C0F: push %edx;");
    asm("loc_6713C10: mov %bp,0x24(%esp,%eax,2);");
    asm("loc_6713C15: calll *_off_671937C;");
    asm("loc_6713C1B: push %eax;");
    asm("loc_6713C1C: mov _data_671CF98,%eax;");
    asm("loc_6713C21: push %ebp;");
    asm("loc_6713C22: push %eax;");
    asm("loc_6713C23: call _sub_6714360;");
    asm("loc_6713C28: add $0xC,%esp;");
    asm("loc_6713C2B: lea 0x20(%esp),%ecx;");
    asm("loc_6713C2F: push %ecx;");
    asm("loc_6713C30: push $_data_671B7C0;");
    asm("loc_6713C35: call *%esi;");
    asm("loc_6713C37: calll *_data_671B3FC;");
    asm("loc_6713C3D: call _sub_6714470;");
    asm("loc_6713C42: test $8,%bl;");
    asm("loc_6713C45: je loc_6713DFE;");
    asm("loc_6713C4B: mov 0x18(%esp),%edi;");
    asm("loc_6713C4F: lea 0x20(%esp),%edx;");
    asm("loc_6713C53: push $0x100;");
    asm("loc_6713C58: push %edx;");
    asm("loc_6713C59: push $8;");
    asm("loc_6713C5B: push %edi;");
    asm("loc_6713C5C: calll *_data_671CF94;");
    asm("loc_6713C62: shr $1,%eax;");
    asm("loc_6713C64: movw $0,0x20(%esp,%eax,2);");
    asm("loc_6713C6B: lea 0x20(%esp),%eax;");
    asm("loc_6713C6F: push %eax;");
    asm("loc_6713C70: calll *_off_671937C;");
    asm("loc_6713C76: mov _data_671CF98,%ecx;");
    asm("loc_6713C7C: push %eax;");
    asm("loc_6713C7D: push $0;");
    asm("loc_6713C7F: push %ecx;");
    asm("loc_6713C80: call _sub_6714360;");
    asm("loc_6713C85: add $0xC,%esp;");
    asm("loc_6713C88: lea 0x20(%esp),%edx;");
    asm("loc_6713C8C: push %edx;");
    asm("loc_6713C8D: push $_data_671B7C0;");
    asm("loc_6713C92: call *%esi;");
    asm("loc_6713C94: push $0x100;");
    asm("loc_6713C99: push $_data_671B410;");
    asm("loc_6713C9E: push $0x10;");
    asm("loc_6713CA0: push %edi;");
    asm("loc_6713CA1: calll *_data_671CF94;");
    asm("loc_6713CA7: cmpw $0x404,_data_671CFC4;");
    asm("loc_6713CB0: movb $0,_data_671B410(%eax);");
    asm("loc_6713CB7: jne loc_6713DB2;");
    asm("loc_6713CBD: push $0;");
    asm("loc_6713CBF: call _sub_6714BD0;");
    asm("loc_6713CC4: add $4,%esp;");
    asm("loc_6713CC7: test %eax,%eax;");
    asm("loc_6713CC9: jne loc_6713DB2;");
    asm("loc_6713CCF: push $_data_671B7C0;");
    asm("loc_6713CD4: calll *_off_671937C;");
    asm("loc_6713CDA: xor %esi,%esi;");
    asm("loc_6713CDC: cmp %esi,%eax;");
    asm("loc_6713CDE: je loc_6713DAC;");
    asm("loc_6713CE4: or $0xFFFFFFFF,%edi;");
    asm("loc_6713CE7: lea -1(%eax),%edx;");
    asm("loc_6713CEA: movl $4,_data_671CEEC;");
    asm("loc_6713CF4: mov %edi,_data_671CED8;");
    asm("loc_6713CFA: mov $3,%ecx;");
    asm("loc_6713CFF: mov $_data_671C0D0,%eax;");
    asm("loc_6713D04: cmp %edx,%ecx;");
    asm("loc_6713D06: jle loc_6713D0D;");
    asm("loc_6713D08: mov %si,(%eax);");
    asm("loc_6713D0B: jmp loc_6713D1C;");
    asm("loc_6713D0D: mov _data_671B7C0(,%ecx,2),%bx;");
    asm("loc_6713D15: mov %si,2(%eax);");
    asm("loc_6713D19: mov %bx,(%eax);");
    asm("loc_6713D1C: dec %ecx;");
    asm("loc_6713D1D: sub $0x200,%eax;");
    asm("loc_6713D22: cmp %esi,%ecx;");
    asm("loc_6713D24: jge loc_6713D04;");
    asm("loc_6713D26: xor %eax,%eax;");
    asm("loc_6713D28: push %esi;");
    asm("loc_6713D29: mov %eax,_data_671B7C0;");
    asm("loc_6713D2E: movl $0xA,_data_671CEE8;");
    asm("loc_6713D38: mov %eax,_data_671B7C4;");
    asm("loc_6713D3D: movb $1,_data_671CFAC;");
    asm("loc_6713D44: call _sub_6715AA0;");
    asm("loc_6713D49: mov _data_671CFAD,%al;");
    asm("loc_6713D4E: add $4,%esp;");
    asm("loc_6713D51: test %al,%al;");
    asm("loc_6713D53: je loc_6713DB2;");
    asm("loc_6713D55: mov _data_671CEEC,%eax;");
    asm("loc_6713D5A: xor %esi,%esi;");
    asm("loc_6713D5C: cmp %esi,%eax;");
    asm("loc_6713D5E: mov %edi,_data_671B554;");
    asm("loc_6713D64: mov %si,_data_671B560;");
    asm("loc_6713D6B: jbe loc_6713DB2;");
    asm("loc_6713D6D: mov _off_6719370,%ebp;");
    asm("loc_6713D73: mov _off_671937C,%ebx;");
    asm("loc_6713D79: mov $_data_671BAD0,%edi;");
    asm("loc_6713D7E: cmp %esi,_data_671CED8;");
    asm("loc_6713D84: jne loc_6713D92;");
    asm("loc_6713D86: push $_data_671B560;");
    asm("loc_6713D8B: call *%ebx;");
    asm("loc_6713D8D: mov %eax,_data_671B554;");
    asm("loc_6713D92: push %edi;");
    asm("loc_6713D93: push $_data_671B560;");
    asm("loc_6713D98: call *%ebp;");
    asm("loc_6713D9A: mov _data_671CEEC,%eax;");
    asm("loc_6713D9F: inc %esi;");
    asm("loc_6713DA0: add $0x200,%edi;");
    asm("loc_6713DA6: cmp %eax,%esi;");
    asm("loc_6713DA8: jb loc_6713D7E;");
    asm("loc_6713DAA: jmp loc_6713DB2;");
    asm("loc_6713DAC: mov %esi,_data_671CEEC;");
    asm("loc_6713DB2: mov 0x18(%esp),%ecx;");
    asm("loc_6713DB6: push $0;");
    asm("loc_6713DB8: push $0;");
    asm("loc_6713DBA: push $0x80;");
    asm("loc_6713DBF: push %ecx;");
    asm("loc_6713DC0: calll *_data_671CF94;");
    asm("loc_6713DC6: mov %eax,_data_671CFA0;");
    asm("loc_6713DCB: mov %eax,_data_671CFA4;");
    asm("loc_6713DD0: cmpl $3,_data_671B400;");
    asm("loc_6713DD7: jne loc_6713DFE;");
    asm("loc_6713DD9: calll *_data_671B3FC;");
    asm("loc_6713DDF: mov _data_671CFA0,%edx;");
    asm("loc_6713DE5: lea _data_671B7C0(,%edx,2),%eax;");
    asm("loc_6713DEC: push %eax;");
    asm("loc_6713DED: calll *_off_671937C;");
    asm("loc_6713DF3: push %eax;");
    asm("loc_6713DF4: push $0x25;");
    asm("loc_6713DF6: call _sub_67142E0;");
    asm("loc_6713DFB: add $8,%esp;");
    asm("loc_6713DFE: mov 0x18(%esp),%ecx;");
    asm("loc_6713E02: mov 0x224(%esp),%edx;");
    asm("loc_6713E09: push %ecx;");
    asm("loc_6713E0A: push %edx;");
    asm("loc_6713E0B: call _sub_6716982;");
    asm("loc_6713E10: pop %edi;");
    asm("loc_6713E11: pop %ebx;");
    asm("loc_6713E12: pop %esi;");
    asm("loc_6713E13: xor %eax,%eax;");
    asm("loc_6713E15: pop %ebp;");
    asm("loc_6713E16: add $0x210,%esp;");
    asm("loc_6713E1C: ret;");
    asm("loc_6713E1D: mov _data_671CF98,%eax;");
    asm("loc_6713E22: push %ebp;");
    asm("loc_6713E23: push $1;");
    asm("loc_6713E25: push %eax;");
    asm("loc_6713E26: call _sub_6714360;");
    asm("loc_6713E2B: add $0xC,%esp;");
    asm("loc_6713E2E: call _sub_6714470;");
    asm("loc_6713E33: pop %edi;");
    asm("loc_6713E34: pop %ebx;");
    asm("loc_6713E35: pop %esi;");
    asm("loc_6713E36: xor %eax,%eax;");
    asm("loc_6713E38: pop %ebp;");
    asm("loc_6713E39: add $0x210,%esp;");
    asm("loc_6713E3F: ret;");
    asm("loc_6713E40: cmp $0x282,%eax;");
    asm("loc_6713E45: jne loc_671416C;");
    asm("loc_6713E4B: mov 0x22C(%esp),%ecx;");
    asm("loc_6713E52: lea -3(%ecx),%eax;");
    asm("loc_6713E55: cmp $0xB,%eax;");
    asm("loc_6713E58: ja loc_6714169;");
    asm("loc_6713E5E: xor %edx,%edx;");
    asm("loc_6713E60: mov _data_6714258(%eax),%dl;");
    asm("loc_6713E66: jmpl *_jmp_6714244(,%edx,4);");
    asm("loc_6713E6D: call _sub_67154C0;");
    asm("loc_6713E72: pop %edi;");
    asm("loc_6713E73: pop %ebx;");
    asm("loc_6713E74: pop %esi;");
    asm("loc_6713E75: xor %eax,%eax;");
    asm("loc_6713E77: pop %ebp;");
    asm("loc_6713E78: add $0x210,%esp;");
    asm("loc_6713E7E: ret;");
    asm("loc_6713E7F: mov 0x224(%esp),%eax;");
    asm("loc_6713E86: movb $1,_data_671CFBB;");
    asm("loc_6713E8D: push %eax;");
    asm("loc_6713E8E: movb $1,(%esi);");
    asm("loc_6713E91: call _sub_6716988;");
    asm("loc_6713E96: cmp %ebp,%eax;");
    asm("loc_6713E98: mov %eax,0x18(%esp);");
    asm("loc_6713E9C: je loc_671416C;");
    asm("loc_6713EA2: lea 0x10(%esp),%ecx;");
    asm("loc_6713EA6: movb $0,_data_671CFAC;");
    asm("loc_6713EAD: push %ecx;");
    asm("loc_6713EAE: push %ebp;");
    asm("loc_6713EAF: push %eax;");
    asm("loc_6713EB0: calll *_data_671CED0;");
    asm("loc_6713EB6: add $0xC,%esp;");
    asm("loc_6713EB9: test %eax,%eax;");
    asm("loc_6713EBB: je loc_671416C;");
    asm("loc_6713EC1: mov 0x10(%esp),%esi;");
    asm("loc_6713EC5: xor %ebp,%ebp;");
    asm("loc_6713EC7: cmpw $0x804,_data_671CFC4;");
    asm("loc_6713ED0: mov %ebp,0x14(%esp);");
    asm("loc_6713ED4: mov 0xC(%esi),%edx;");
    asm("loc_6713ED7: mov %edx,_data_671CED8;");
    asm("loc_6713EDD: mov 8(%esi),%eax;");
    asm("loc_6713EE0: mov %eax,_data_671CEEC;");
    asm("loc_6713EE5: jne loc_6713F52;");
    asm("loc_6713EE7: push %ebp;");
    asm("loc_6713EE8: call _sub_6714BD0;");
    asm("loc_6713EED: add $4,%esp;");
    asm("loc_6713EF0: test %eax,%eax;");
    asm("loc_6713EF2: je loc_6713F4E;");
    asm("loc_6713EF4: mov _data_671CEEC,%eax;");
    asm("loc_6713EF9: xor %edi,%edi;");
    asm("loc_6713EFB: xor %esi,%esi;");
    asm("loc_6713EFD: test %eax,%eax;");
    asm("loc_6713EFF: jbe loc_6713F40;");
    asm("loc_6713F01: mov $0x18,%ebx;");
    asm("loc_6713F06: mov 0x10(%esp),%eax;");
    asm("loc_6713F0A: mov (%ebx,%eax),%ecx;");
    asm("loc_6713F0D: add %eax,%ecx;");
    asm("loc_6713F0F: push %ecx;");
    asm("loc_6713F10: calll *_off_671937C;");
    asm("loc_6713F16: inc %eax;");
    asm("loc_6713F17: lea (%eax,%edi),%ecx;");
    asm("loc_6713F1A: cmp $0x12,%ecx;");
    asm("loc_6713F1D: jbe loc_6713F2D;");
    asm("loc_6713F1F: cmp _data_671CED8,%esi;");
    asm("loc_6713F25: ja loc_6713F3C;");
    asm("loc_6713F27: mov %esi,%ebp;");
    asm("loc_6713F29: mov %eax,%edi;");
    asm("loc_6713F2B: jmp loc_6713F2F;");
    asm("loc_6713F2D: mov %ecx,%edi;");
    asm("loc_6713F2F: mov _data_671CEEC,%eax;");
    asm("loc_6713F34: inc %esi;");
    asm("loc_6713F35: add $4,%ebx;");
    asm("loc_6713F38: cmp %eax,%esi;");
    asm("loc_6713F3A: jb loc_6713F06;");
    asm("loc_6713F3C: mov %ebp,0x14(%esp);");
    asm("loc_6713F40: sub %ebp,%esi;");
    asm("loc_6713F42: mov %esi,_data_671CEE8;");
    asm("loc_6713F48: mov 0x10(%esp),%esi;");
    asm("loc_6713F4C: jmp loc_6713F77;");
    asm("loc_6713F4E: mov 0x10(%esp),%esi;");
    asm("loc_6713F52: mov 0x14(%esi),%ecx;");
    asm("loc_6713F55: cmp $0xA,%ecx;");
    asm("loc_6713F58: jb loc_6713F5F;");
    asm("loc_6713F5A: mov $0xA,%ecx;");
    asm("loc_6713F5F: mov _data_671CED8,%eax;");
    asm("loc_6713F64: xor %edx,%edx;");
    asm("loc_6713F66: div %ecx;");
    asm("loc_6713F68: mov %ecx,_data_671CEE8;");
    asm("loc_6713F6E: mov %eax,%ebp;");
    asm("loc_6713F70: imul %ecx,%ebp;");
    asm("loc_6713F73: mov %ebp,0x14(%esp);");
    asm("loc_6713F77: cmpw $0x804,_data_671CFC4;");
    asm("loc_6713F80: jne loc_6713FA0;");
    asm("loc_6713F82: push $0;");
    asm("loc_6713F84: call _sub_6714BD0;");
    asm("loc_6713F89: mov 0x14(%esp),%esi;");
    asm("loc_6713F8D: add $4,%esp;");
    asm("loc_6713F90: test %eax,%eax;");
    asm("loc_6713F92: jne loc_6713FA0;");
    asm("loc_6713F94: movl $0xFFFFFFFF,_data_671CED8;");
    asm("loc_6713F9E: jmp loc_6713FA6;");
    asm("loc_6713FA0: sub %ebp,_data_671CED8;");
    asm("loc_6713FA6: mov $0x500,%ecx;");
    asm("loc_6713FAB: xor %eax,%eax;");
    asm("loc_6713FAD: mov $_data_671BAD0,%edi;");
    asm("loc_6713FB2: mov %eax,0x1C(%esp);");
    asm("loc_6713FB6: rep stos %eax,(%edi);");
    asm("loc_6713FB8: cmp 8(%esi),%ebp;");
    asm("loc_6713FBB: jae loc_6714019;");
    asm("loc_6713FBD: mov 0x14(%esp),%edi;");
    asm("loc_6713FC1: mov $1,%eax;");
    asm("loc_6713FC6: sub %edi,%eax;");
    asm("loc_6713FC8: mov $_data_671BAD0,%ebx;");
    asm("loc_6713FCD: lea 0x18(,%edi,4),%ebp;");
    asm("loc_6713FD4: mov %eax,0x14(%esp);");
    asm("loc_6713FD8: mov 0x1C(%esp),%edx;");
    asm("loc_6713FDC: mov _data_671CEE8,%eax;");
    asm("loc_6713FE1: cmp %eax,%edx;");
    asm("loc_6713FE3: jae loc_6714019;");
    asm("loc_6713FE5: mov (%esi,%ebp),%eax;");
    asm("loc_6713FE8: mov 0x14(%esp),%ecx;");
    asm("loc_6713FEC: add %esi,%eax;");
    asm("loc_6713FEE: add %edi,%ecx;");
    asm("loc_6713FF0: push %eax;");
    asm("loc_6713FF1: push %ecx;");
    asm("loc_6713FF2: push %ebx;");
    asm("loc_6713FF3: call _sub_6714270;");
    asm("loc_6713FF8: mov 0x28(%esp),%eax;");
    asm("loc_6713FFC: mov 0x1C(%esp),%esi;");
    asm("loc_6714000: add $0xC,%esp;");
    asm("loc_6714003: inc %eax;");
    asm("loc_6714004: mov %eax,0x1C(%esp);");
    asm("loc_6714008: mov 8(%esi),%eax;");
    asm("loc_671400B: add $4,%ebp;");
    asm("loc_671400E: add $0x200,%ebx;");
    asm("loc_6714014: inc %edi;");
    asm("loc_6714015: cmp %eax,%edi;");
    asm("loc_6714017: jb loc_6713FD8;");
    asm("loc_6714019: push %esi;");
    asm("loc_671401A: calll *_data_671B404;");
    asm("loc_6714020: mov 0x1C(%esp),%edx;");
    asm("loc_6714024: mov 0x228(%esp),%eax;");
    asm("loc_671402B: add $4,%esp;");
    asm("loc_671402E: push %edx;");
    asm("loc_671402F: push %eax;");
    asm("loc_6714030: call _sub_6716982;");
    asm("loc_6714035: mov _data_671CFC4,%eax;");
    asm("loc_671403A: mov %eax,%ecx;");
    asm("loc_671403C: and $0x3FF,%ecx;");
    asm("loc_6714042: cmp $0x12,%ecx;");
    asm("loc_6714045: je loc_6714063;");
    asm("loc_6714047: cmp $0x404,%ax;");
    asm("loc_671404B: jne loc_671416C;");
    asm("loc_6714051: push $0;");
    asm("loc_6714053: call _sub_6714BD0;");
    asm("loc_6714058: add $4,%esp;");
    asm("loc_671405B: test %eax,%eax;");
    asm("loc_671405D: jne loc_671416C;");
    asm("loc_6714063: pop %edi;");
    asm("loc_6714064: pop %ebx;");
    asm("loc_6714065: pop %esi;");
    asm("loc_6714066: movl $0xFFFFFFFF,_data_671CED8;");
    asm("loc_6714070: xor %eax,%eax;");
    asm("loc_6714072: pop %ebp;");
    asm("loc_6714073: add $0x210,%esp;");
    asm("loc_6714079: ret;");
    asm("loc_671407A: mov _data_671CFAC,%al;");
    asm("loc_671407F: movb $0,_data_671CFBB;");
    asm("loc_6714086: test %al,%al;");
    asm("loc_6714088: jne loc_6714169;");
    asm("loc_671408E: mov $0x500,%ecx;");
    asm("loc_6714093: xor %eax,%eax;");
    asm("loc_6714095: mov $_data_671BAD0,%edi;");
    asm("loc_671409A: mov %ebp,_data_671CEEC;");
    asm("loc_67140A0: rep stos %eax,(%edi);");
    asm("loc_67140A2: pop %edi;");
    asm("loc_67140A3: movb $1,(%esi);");
    asm("loc_67140A6: pop %ebx;");
    asm("loc_67140A7: pop %esi;");
    asm("loc_67140A8: pop %ebp;");
    asm("loc_67140A9: add $0x210,%esp;");
    asm("loc_67140AF: ret;");
    asm("loc_67140B0: mov _data_671CFBB,%al;");
    asm("loc_67140B5: test %al,%al;");
    asm("loc_67140B7: jne loc_67140C9;");
    asm("loc_67140B9: mov 0x224(%esp),%edx;");
    asm("loc_67140C0: push %edx;");
    asm("loc_67140C1: call _sub_6714E20;");
    asm("loc_67140C6: add $4,%esp;");
    asm("loc_67140C9: push %ebp;");
    asm("loc_67140CA: call _sub_6714BD0;");
    asm("loc_67140CF: add $4,%esp;");
    asm("loc_67140D2: cmp $0x5000404,%eax;");
    asm("loc_67140D7: ja loc_671411E;");
    asm("loc_67140D9: je loc_6714149;");
    asm("loc_67140DB: cmp $0x4020804,%eax;");
    asm("loc_67140E0: ja loc_67140FF;");
    asm("loc_67140E2: je loc_671410D;");
    asm("loc_67140E4: cmp $0x4010804,%eax;");
    asm("loc_67140E9: je loc_671410D;");
    asm("loc_67140EB: cmp $0x4020404,%eax;");
    asm("loc_67140F0: je loc_671410D;");
    asm("loc_67140F2: pop %edi;");
    asm("loc_67140F3: pop %ebx;");
    asm("loc_67140F4: pop %esi;");
    asm("loc_67140F5: xor %eax,%eax;");
    asm("loc_67140F7: pop %ebp;");
    asm("loc_67140F8: add $0x210,%esp;");
    asm("loc_67140FE: ret;");
    asm("loc_67140FF: cmp $0x4030404,%eax;");
    asm("loc_6714104: je loc_671410D;");
    asm("loc_6714106: cmp $0x4040404,%eax;");
    asm("loc_671410B: jne loc_671416C;");
    asm("loc_671410D: mov 0x230(%esp),%eax;");
    asm("loc_6714114: cmp $1,%eax;");
    asm("loc_6714117: je loc_6714169;");
    asm("loc_6714119: cmp $2,%eax;");
    asm("loc_671411C: jmp loc_6714167;");
    asm("loc_671411E: cmp $0x5030804,%eax;");
    asm("loc_6714123: ja loc_6714142;");
    asm("loc_6714125: je loc_6714149;");
    asm("loc_6714127: cmp $0x5010404,%eax;");
    asm("loc_671412C: je loc_6714149;");
    asm("loc_671412E: cmp $0x5020404,%eax;");
    asm("loc_6714133: je loc_6714149;");
    asm("loc_6714135: pop %edi;");
    asm("loc_6714136: pop %ebx;");
    asm("loc_6714137: pop %esi;");
    asm("loc_6714138: xor %eax,%eax;");
    asm("loc_671413A: pop %ebp;");
    asm("loc_671413B: add $0x210,%esp;");
    asm("loc_6714141: ret;");
    asm("loc_6714142: cmp $0x6000404,%eax;");
    asm("loc_6714147: jne loc_671416C;");
    asm("loc_6714149: mov 0x230(%esp),%eax;");
    asm("loc_6714150: cmp $0x10,%eax;");
    asm("loc_6714153: je loc_6714169;");
    asm("loc_6714155: cmp $0x11,%eax;");
    asm("loc_6714158: je loc_6714169;");
    asm("loc_671415A: cmp $0x1A,%eax;");
    asm("loc_671415D: je loc_6714169;");
    asm("loc_671415F: cmp $0x1B,%eax;");
    asm("loc_6714162: je loc_6714169;");
    asm("loc_6714164: cmp $0x1C,%eax;");
    asm("loc_6714167: jne loc_671416C;");
    asm("loc_6714169: movb $1,(%esi);");
    asm("loc_671416C: pop %edi;");
    asm("loc_671416D: pop %ebx;");
    asm("loc_671416E: pop %esi;");
    asm("loc_671416F: xor %eax,%eax;");
    asm("loc_6714171: pop %ebp;");
    asm("loc_6714172: add $0x210,%esp;");
    asm("loc_6714178: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_671417C: .long loc_6713A0B;");
    asm(".long loc_6713B2F;");
    asm(".long loc_6713A92;");
    asm(".long loc_671416C;");
    asm("_jmp_6714244: .long loc_6713E7F;");
    asm(".long loc_671407A;");
    asm(".long loc_6713E6D;");
    asm(".long loc_67140B0;");
    asm(".long loc_6714169;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_67139A0);
_naked _weak void _sub_6714270() // _sub_6714270
{
    __DEBUG_ASM(6714270);
    // chunk 0x6714270 _sub_6714270
    asm("loc_6714270: mov 8(%esp),%eax;");
    asm("loc_6714274: mov $0xA,%ecx;");
    asm("loc_6714279: cltd;");
    asm("loc_671427A: idiv %ecx;");
    asm("loc_671427C: mov 4(%esp),%eax;");
    asm("loc_6714280: add $2,%eax;");
    asm("loc_6714283: add $0x30,%edx;");
    asm("loc_6714286: mov %dx,-2(%eax);");
    asm("loc_671428A: mov _data_67190A4,%cl;");
    asm("loc_6714290: test %cl,%cl;");
    asm("loc_6714292: je loc_671429C;");
    asm("loc_6714294: movw $0x20,(%eax);");
    asm("loc_6714299: add $2,%eax;");
    asm("loc_671429C: mov 0xC(%esp),%edx;");
    asm("loc_67142A0: mov (%edx),%cx;");
    asm("loc_67142A3: test %cx,%cx;");
    asm("loc_67142A6: je loc_67142B9;");
    asm("loc_67142A8: add $2,%edx;");
    asm("loc_67142AB: mov %cx,(%eax);");
    asm("loc_67142AE: add $2,%eax;");
    asm("loc_67142B1: mov (%edx),%cx;");
    asm("loc_67142B4: test %cx,%cx;");
    asm("loc_67142B7: jne loc_67142A8;");
    asm("loc_67142B9: mov _data_67190A4,%cl;");
    asm("loc_67142BF: test %cl,%cl;");
    asm("loc_67142C1: jne loc_67142CB;");
    asm("loc_67142C3: movw $0x20,(%eax);");
    asm("loc_67142C8: add $2,%eax;");
    asm("loc_67142CB: movw $0,(%eax);");
    asm("loc_67142D0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67142E0() // _sub_67142E0
{
    __DEBUG_ASM(67142E0);
    // chunk 0x67142E0 _sub_67142E0
    asm("loc_67142E0: mov 8(%esp),%eax;");
    asm("loc_67142E4: push %esi;");
    asm("loc_67142E5: test %eax,%eax;");
    asm("loc_67142E7: push %edi;");
    asm("loc_67142E8: je loc_6714354;");
    asm("loc_67142EA: mov 0xC(%esp),%esi;");
    asm("loc_67142EE: mov _import_671710C,%edi;");
    asm("loc_67142F4: jbe loc_671432C;");
    asm("loc_67142F6: push %ebp;");
    asm("loc_67142F7: mov %eax,%ebp;");
    asm("loc_67142F9: mov _data_671CF8C,%eax;");
    asm("loc_67142FE: test %eax,%eax;");
    asm("loc_6714300: je loc_671430A;");
    asm("loc_6714302: push %esi;");
    asm("loc_6714303: call *%eax;");
    asm("loc_6714305: add $4,%esp;");
    asm("loc_6714308: jmp loc_6714328;");
    asm("loc_671430A: mov _data_671CF98,%eax;");
    asm("loc_671430F: push $0;");
    asm("loc_6714311: push %esi;");
    asm("loc_6714312: push $0x100;");
    asm("loc_6714317: push %eax;");
    asm("loc_6714318: movb $1,_data_671CFB9;");
    asm("loc_671431F: call *%edi;");
    asm("loc_6714321: movb $0,_data_671CFB9;");
    asm("loc_6714328: dec %ebp;");
    asm("loc_6714329: jne loc_67142F9;");
    asm("loc_671432B: pop %ebp;");
    asm("loc_671432C: mov _data_671CF8C,%eax;");
    asm("loc_6714331: test %eax,%eax;");
    asm("loc_6714333: jne loc_6714354;");
    asm("loc_6714335: mov _data_671CF98,%ecx;");
    asm("loc_671433B: push $0;");
    asm("loc_671433D: push %esi;");
    asm("loc_671433E: push $0x101;");
    asm("loc_6714343: push %ecx;");
    asm("loc_6714344: movb $1,_data_671CFB9;");
    asm("loc_671434B: call *%edi;");
    asm("loc_671434D: movb $0,_data_671CFB9;");
    asm("loc_6714354: pop %edi;");
    asm("loc_6714355: pop %esi;");
    asm("loc_6714356: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6714360() // _sub_6714360
{
    __DEBUG_ASM(6714360);
    // chunk 0x6714360 _sub_6714360
    asm("loc_6714360: cmpl $3,_data_671B400;");
    asm("loc_6714367: jne loc_671444C;");
    asm("loc_671436D: push %ebp;");
    asm("loc_671436E: push %esi;");
    asm("loc_671436F: push %edi;");
    asm("loc_6714370: push $_data_671B7C0;");
    asm("loc_6714375: calll *_off_671937C;");
    asm("loc_671437B: mov %eax,%esi;");
    asm("loc_671437D: call _sub_6714450;");
    asm("loc_6714382: mov 0x14(%esp),%al;");
    asm("loc_6714386: test %al,%al;");
    asm("loc_6714388: jne loc_6714393;");
    asm("loc_671438A: mov _data_67190A5,%al;");
    asm("loc_671438F: test %al,%al;");
    asm("loc_6714391: je loc_6714397;");
    asm("loc_6714393: xor %ebp,%ebp;");
    asm("loc_6714395: jmp loc_671439B;");
    asm("loc_6714397: mov 0x18(%esp),%ebp;");
    asm("loc_671439B: cmp %esi,%ebp;");
    asm("loc_671439D: jge loc_671443C;");
    asm("loc_67143A3: mov _import_671710C,%edi;");
    asm("loc_67143A9: mov %esi,%eax;");
    asm("loc_67143AB: mov 0x10(%esp),%esi;");
    asm("loc_67143AF: sub %ebp,%eax;");
    asm("loc_67143B1: test %eax,%eax;");
    asm("loc_67143B3: jle loc_671440B;");
    asm("loc_67143B5: mov %eax,0x14(%esp);");
    asm("loc_67143B9: mov _data_671CF8C,%eax;");
    asm("loc_67143BE: test %eax,%eax;");
    asm("loc_67143C0: je loc_67143CB;");
    asm("loc_67143C2: push $8;");
    asm("loc_67143C4: call *%eax;");
    asm("loc_67143C6: add $4,%esp;");
    asm("loc_67143C9: jmp loc_67143E5;");
    asm("loc_67143CB: push $0;");
    asm("loc_67143CD: push $8;");
    asm("loc_67143CF: push $0x100;");
    asm("loc_67143D4: push %esi;");
    asm("loc_67143D5: movb $1,_data_671CFB9;");
    asm("loc_67143DC: call *%edi;");
    asm("loc_67143DE: movb $0,_data_671CFB9;");
    asm("loc_67143E5: mov _data_671CF8C,%eax;");
    asm("loc_67143EA: test %eax,%eax;");
    asm("loc_67143EC: jne loc_67143FE;");
    asm("loc_67143EE: push %eax;");
    asm("loc_67143EF: push $8;");
    asm("loc_67143F1: push $0x102;");
    asm("loc_67143F6: push %esi;");
    asm("loc_67143F7: call *%edi;");
    asm("loc_67143F9: mov _data_671CF8C,%eax;");
    asm("loc_67143FE: mov 0x14(%esp),%ecx;");
    asm("loc_6714402: dec %ecx;");
    asm("loc_6714403: mov %ecx,0x14(%esp);");
    asm("loc_6714407: jne loc_67143BE;");
    asm("loc_6714409: jmp loc_6714410;");
    asm("loc_671440B: mov _data_671CF8C,%eax;");
    asm("loc_6714410: test %eax,%eax;");
    asm("loc_6714412: jne loc_671443E;");
    asm("loc_6714414: push %eax;");
    asm("loc_6714415: push $8;");
    asm("loc_6714417: push $0x101;");
    asm("loc_671441C: push %esi;");
    asm("loc_671441D: movb $1,_data_671CFB9;");
    asm("loc_6714424: call *%edi;");
    asm("loc_6714426: push %ebp;");
    asm("loc_6714427: push $0x25;");
    asm("loc_6714429: movb $0,_data_671CFB9;");
    asm("loc_6714430: call _sub_67142E0;");
    asm("loc_6714435: add $8,%esp;");
    asm("loc_6714438: pop %edi;");
    asm("loc_6714439: pop %esi;");
    asm("loc_671443A: pop %ebp;");
    asm("loc_671443B: ret;");
    asm("loc_671443C: mov %esi,%ebp;");
    asm("loc_671443E: push %ebp;");
    asm("loc_671443F: push $0x25;");
    asm("loc_6714441: call _sub_67142E0;");
    asm("loc_6714446: add $8,%esp;");
    asm("loc_6714449: pop %edi;");
    asm("loc_671444A: pop %esi;");
    asm("loc_671444B: pop %ebp;");
    asm("loc_671444C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6714450() // _sub_6714450
{
    __DEBUG_ASM(6714450);
    // chunk 0x6714450 _sub_6714450
    asm("loc_6714450: push $_data_671B7C0;");
    asm("loc_6714455: calll *_off_671937C;");
    asm("loc_671445B: sub _data_671CFA4,%eax;");
    asm("loc_6714461: push %eax;");
    asm("loc_6714462: push $0x27;");
    asm("loc_6714464: call _sub_67142E0;");
    asm("loc_6714469: add $8,%esp;");
    asm("loc_671446C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6714470() // _sub_6714470
{
    __DEBUG_ASM(6714470);
    // chunk 0x6714470 _sub_6714470
    asm("loc_6714470: push %edi;");
    asm("loc_6714471: xor %eax,%eax;");
    asm("loc_6714473: mov $0x80,%ecx;");
    asm("loc_6714478: mov $_data_671B7C0,%edi;");
    asm("loc_671447D: rep stos %eax,(%edi);");
    asm("loc_671447F: mov $0x40,%ecx;");
    asm("loc_6714484: mov $_data_671B410,%edi;");
    asm("loc_6714489: rep stos %eax,(%edi);");
    asm("loc_671448B: mov %eax,_data_671CFA0;");
    asm("loc_6714490: mov %eax,_data_671CFA4;");
    asm("loc_6714495: pop %edi;");
    asm("loc_6714496: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67144A0() // _sub_67144A0
{
    __DEBUG_ASM(67144A0);
    // chunk 0x67144A0 _sub_67144A0
    asm("loc_67144A0: mov _data_671CFBA,%al;");
    asm("loc_67144A5: test %al,%al;");
    asm("loc_67144A7: je loc_67144BC;");
    asm("loc_67144A9: mov 4(%esp),%eax;");
    asm("loc_67144AD: mov 8(%esp),%ecx;");
    asm("loc_67144B1: mov %eax,_data_671B510;");
    asm("loc_67144B6: mov %ecx,_data_671B514;");
    asm("loc_67144BC: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67144C0() // _sub_67144C0
{
    __DEBUG_ASM(67144C0);
    // chunk 0x67144C0 _sub_67144C0
    asm("loc_67144C0: mov _data_671CFBA,%al;");
    asm("loc_67144C5: test %al,%al;");
    asm("loc_67144C7: je loc_6714523;");
    asm("loc_67144C9: mov 4(%esp),%eax;");
    asm("loc_67144CD: mov 0xC(%esp),%ecx;");
    asm("loc_67144D1: mov %eax,_data_671B518;");
    asm("loc_67144D6: mov (%ecx),%edx;");
    asm("loc_67144D8: mov %edx,_data_671B524;");
    asm("loc_67144DE: mov 4(%ecx),%eax;");
    asm("loc_67144E1: mov %eax,_data_671B528;");
    asm("loc_67144E6: mov 8(%ecx),%edx;");
    asm("loc_67144E9: mov %edx,_data_671B52C;");
    asm("loc_67144EF: mov 0xC(%ecx),%eax;");
    asm("loc_67144F2: mov 8(%esp),%ecx;");
    asm("loc_67144F6: mov %eax,_data_671B530;");
    asm("loc_67144FB: mov _data_6719084,%eax;");
    asm("loc_6714500: test %eax,%eax;");
    asm("loc_6714502: mov %ecx,_data_671B520;");
    asm("loc_6714508: je loc_671450F;");
    asm("loc_671450A: mov %eax,_data_671B520;");
    asm("loc_671450F: mov _data_67190A0,%eax;");
    asm("loc_6714514: mov %ecx,_data_671B51C;");
    asm("loc_671451A: test %eax,%eax;");
    asm("loc_671451C: je loc_6714523;");
    asm("loc_671451E: mov %eax,_data_671B51C;");
    asm("loc_6714523: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6714530() // _sub_6714530
{
    __DEBUG_ASM(6714530);
    // chunk 0x6714530 _sub_6714530
    asm("loc_6714530: mov _data_671CFBA,%al;");
    asm("loc_6714535: test %al,%al;");
    asm("loc_6714537: jne loc_671453C;");
    asm("loc_6714539: xor %eax,%eax;");
    asm("loc_671453B: ret;");
    asm("loc_671453C: call _sub_67154C0;");
    asm("loc_6714541: mov _data_671CFBC,%eax;");
    asm("loc_6714546: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6714550() // _sub_6714550
{
    __DEBUG_ASM(6714550);
    // chunk 0x6714550 _sub_6714550
    asm("loc_6714550: mov _data_671CFBA,%al;");
    asm("loc_6714555: test %al,%al;");
    asm("loc_6714557: je loc_67145A2;");
    asm("loc_6714559: mov _data_671CF98,%eax;");
    asm("loc_671455E: test %eax,%eax;");
    asm("loc_6714560: je loc_67145A2;");
    asm("loc_6714562: mov _data_671CFA8,%ecx;");
    asm("loc_6714568: push %ebx;");
    asm("loc_6714569: test %ecx,%ecx;");
    asm("loc_671456B: je loc_6714571;");
    asm("loc_671456D: xor %bl,%bl;");
    asm("loc_671456F: jmp loc_6714575;");
    asm("loc_6714571: mov 8(%esp),%bl;");
    asm("loc_6714575: cmp _data_671B54C,%eax;");
    asm("loc_671457B: jne loc_6714592;");
    asm("loc_671457D: mov _data_671B3F8,%edx;");
    asm("loc_6714583: mov %bl,%cl;");
    asm("loc_6714585: neg %cl;");
    asm("loc_6714587: sbb %ecx,%ecx;");
    asm("loc_6714589: and %edx,%ecx;");
    asm("loc_671458B: push %ecx;");
    asm("loc_671458C: push %eax;");
    asm("loc_671458D: call _sub_6716994;");
    asm("loc_6714592: mov %bl,_data_671CF9C;");
    asm("loc_6714598: test %bl,%bl;");
    asm("loc_671459A: pop %ebx;");
    asm("loc_671459B: je loc_67145A2;");
    asm("loc_671459D: jmp _sub_67154C0;");
    asm("loc_67145A2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67145B0() // _sub_67145B0
{
    __DEBUG_ASM(67145B0);
    // chunk 0x67145B0 _sub_67145B0
    asm("loc_67145B0: mov 4(%esp),%eax;");
    asm("loc_67145B4: push %ebx;");
    asm("loc_67145B5: push %ebp;");
    asm("loc_67145B6: push %esi;");
    asm("loc_67145B7: push $_data_671CEF8;");
    asm("loc_67145BC: mov %eax,_data_671B54C;");
    asm("loc_67145C1: movl $0x94,_data_671CEF8;");
    asm("loc_67145CB: calll *_import_67170AC;");
    asm("loc_67145D1: mov _data_671CEF8+0x10,%eax;");
    asm("loc_67145D6: xor %bl,%bl;");
    asm("loc_67145D8: cmp $2,%eax;");
    asm("loc_67145DB: je loc_67145F8;");
    asm("loc_67145DD: mov _data_671CEF8+4,%eax;");
    asm("loc_67145E2: cmp $4,%eax;");
    asm("loc_67145E5: ja loc_67145F8;");
    asm("loc_67145E7: jne loc_67145FE;");
    asm("loc_67145E9: mov _data_671CEF8+8,%eax;");
    asm("loc_67145EE: xor %ebp,%ebp;");
    asm("loc_67145F0: cmp %ebp,%eax;");
    asm("loc_67145F2: jbe loc_6714600;");
    asm("loc_67145F4: mov $1,%bl;");
    asm("loc_67145F6: jmp loc_6714600;");
    asm("loc_67145F8: xor %ebp,%ebp;");
    asm("loc_67145FA: mov $1,%bl;");
    asm("loc_67145FC: jmp loc_6714600;");
    asm("loc_67145FE: xor %ebp,%ebp;");
    asm("loc_6714600: push $_data_67191DC;");
    asm("loc_6714605: calll *_import_67170A8;");
    asm("loc_671460B: mov %eax,%esi;");
    asm("loc_671460D: cmp %ebp,%esi;");
    asm("loc_671460F: je loc_67147F4;");
    asm("loc_6714615: push %edi;");
    asm("loc_6714616: mov _off_6719358,%edi;");
    asm("loc_671461C: push $_data_67191D0;");
    asm("loc_6714621: push %esi;");
    asm("loc_6714622: call *%edi;");
    asm("loc_6714624: push $_data_67191C0;");
    asm("loc_6714629: push %esi;");
    asm("loc_671462A: mov %eax,_data_671B5A0;");
    asm("loc_671462F: call *%edi;");
    asm("loc_6714631: push $_data_67191B4;");
    asm("loc_6714636: push %esi;");
    asm("loc_6714637: mov %eax,_data_671B558;");
    asm("loc_671463C: call *%edi;");
    asm("loc_671463E: push $_data_67191A4;");
    asm("loc_6714643: push %esi;");
    asm("loc_6714644: mov %eax,_data_671CED4;");
    asm("loc_6714649: call *%edi;");
    asm("loc_671464B: push $_data_6719188;");
    asm("loc_6714650: push %esi;");
    asm("loc_6714651: mov %eax,_data_671B550;");
    asm("loc_6714656: call *%edi;");
    asm("loc_6714658: cmp %ebp,%eax;");
    asm("loc_671465A: pop %edi;");
    asm("loc_671465B: je loc_6714661;");
    asm("loc_671465D: push $0xFFFFFFFF;");
    asm("loc_671465F: call *%eax;");
    asm("loc_6714661: test %bl,%bl;");
    asm("loc_6714663: je loc_6714685;");
    asm("loc_6714665: movl $_sub_67169A6,_data_671CF94;");
    asm("loc_671466F: movl $_sub_67169A0,_data_671B9C0;");
    asm("loc_6714679: movl $_sub_6714B80,_data_671CED0;");
    asm("loc_6714683: jmp loc_67146A3;");
    asm("loc_6714685: movl $_sub_671699A,_data_671B9C0;");
    asm("loc_671468F: movl $_sub_67149E0,_data_671CF94;");
    asm("loc_6714699: movl $_sub_67148B0,_data_671CED0;");
    asm("loc_67146A3: cmpl $2,_data_671CEF8+0x10;");
    asm("loc_67146AA: je loc_67146C5;");
    asm("loc_67146AC: mov 0x10(%esp),%ecx;");
    asm("loc_67146B0: push %ecx;");
    asm("loc_67146B1: calll *_off_6719380;");
    asm("loc_67146B7: test %eax,%eax;");
    asm("loc_67146B9: movl $_sub_6714810,_data_671B3FC;");
    asm("loc_67146C3: je loc_67146CF;");
    asm("loc_67146C5: movl $_sub_6714B10,_data_671B3FC;");
    asm("loc_67146CF: mov _data_671CFCC,%al;");
    asm("loc_67146D4: movb $1,_data_671CFBA;");
    asm("loc_67146DB: test %al,%al;");
    asm("loc_67146DD: jne loc_6714712;");
    asm("loc_67146DF: mov _data_671B54C,%edx;");
    asm("loc_67146E5: movb $1,_data_671CFCC;");
    asm("loc_67146EC: push %edx;");
    asm("loc_67146ED: call _sub_6715F60;");
    asm("loc_67146F2: mov _data_671B54C,%eax;");
    asm("loc_67146F7: add $4,%esp;");
    asm("loc_67146FA: push %eax;");
    asm("loc_67146FB: call _sub_6716988;");
    asm("loc_6714700: mov _data_671B54C,%ecx;");
    asm("loc_6714706: push %eax;");
    asm("loc_6714707: push %ecx;");
    asm("loc_6714708: mov %eax,_data_671B3F8;");
    asm("loc_671470D: call _sub_6716982;");
    asm("loc_6714712: cmp %ebp,_data_671B3F8;");
    asm("loc_6714718: jne loc_671473B;");
    asm("loc_671471A: mov $1,%bl;");
    asm("loc_671471C: push %ebp;");
    asm("loc_671471D: movl $1,_data_671CFA8;");
    asm("loc_6714727: call _sub_6714550;");
    asm("loc_671472C: add $4,%esp;");
    asm("loc_671472F: mov %bl,_data_671CFBA;");
    asm("loc_6714735: xor %al,%al;");
    asm("loc_6714737: pop %esi;");
    asm("loc_6714738: pop %ebp;");
    asm("loc_6714739: pop %ebx;");
    asm("loc_671473A: ret;");
    asm("loc_671473B: mov 0x14(%esp),%bl;");
    asm("loc_671473F: test %bl,%bl;");
    asm("loc_6714741: jne loc_671471C;");
    asm("loc_6714743: cmp %ebp,_data_671B7AC;");
    asm("loc_6714749: je loc_671471C;");
    asm("loc_671474B: cmp %ebp,_data_671B408;");
    asm("loc_6714751: je loc_671471C;");
    asm("loc_6714753: cmp %ebp,_data_671B404;");
    asm("loc_6714759: je loc_671471C;");
    asm("loc_671475B: cmp %ebp,_data_671BACC;");
    asm("loc_6714761: je loc_671471C;");
    asm("loc_6714763: calll *_import_6717100;");
    asm("loc_6714769: mov %eax,_data_671CFB0;");
    asm("loc_671476E: mov %ebp,_data_671B510;");
    asm("loc_6714774: mov %ebp,_data_671B514;");
    asm("loc_671477A: mov %ebp,_data_671B518;");
    asm("loc_6714780: mov %ebp,_data_671B51C;");
    asm("loc_6714786: mov %ebp,_data_671B520;");
    asm("loc_671478C: mov %ebp,_data_671B524;");
    asm("loc_6714792: movl $0x280,_data_671B52C;");
    asm("loc_671479C: mov %ebp,_data_671B528;");
    asm("loc_67147A2: movl $0x1E0,_data_671B530;");
    asm("loc_67147AC: call _sub_6715DA0;");
    asm("loc_67147B1: push $3;");
    asm("loc_67147B3: call _sub_6715440;");
    asm("loc_67147B8: call _sub_67154C0;");
    asm("loc_67147BD: push %ebp;");
    asm("loc_67147BE: call _sub_6714550;");
    asm("loc_67147C3: add $8,%esp;");
    asm("loc_67147C6: call _sub_6715D30;");
    asm("loc_67147CB: mov _data_671CFCC,%al;");
    asm("loc_67147D0: test %al,%al;");
    asm("loc_67147D2: je loc_67147EE;");
    asm("loc_67147D4: mov _data_671CFBA,%al;");
    asm("loc_67147D9: test %al,%al;");
    asm("loc_67147DB: je loc_67147EE;");
    asm("loc_67147DD: cmp %ebp,_data_671CFA8;");
    asm("loc_67147E3: jne loc_67147EE;");
    asm("loc_67147E5: pop %esi;");
    asm("loc_67147E6: pop %ebp;");
    asm("loc_67147E7: mov $1,%eax;");
    asm("loc_67147EC: pop %ebx;");
    asm("loc_67147ED: ret;");
    asm("loc_67147EE: pop %esi;");
    asm("loc_67147EF: pop %ebp;");
    asm("loc_67147F0: xor %eax,%eax;");
    asm("loc_67147F2: pop %ebx;");
    asm("loc_67147F3: ret;");
    asm("loc_67147F4: pop %esi;");
    asm("loc_67147F5: pop %ebp;");
    asm("loc_67147F6: movl $1,_data_671CFA8;");
    asm("loc_6714800: xor %al,%al;");
    asm("loc_6714802: pop %ebx;");
    asm("loc_6714803: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6714810() // _sub_6714810
{
    __DEBUG_ASM(6714810);
    // chunk 0x6714810 _sub_6714810
    asm("loc_6714810: mov _data_671CEF0,%eax;");
    asm("loc_6714815: sub $0x200,%esp;");
    asm("loc_671481B: test %eax,%eax;");
    asm("loc_671481D: push %esi;");
    asm("loc_671481E: push %edi;");
    asm("loc_671481F: je loc_671484F;");
    asm("loc_6714821: mov _data_671B7C0,%eax;");
    asm("loc_6714826: test %ax,%ax;");
    asm("loc_6714829: je loc_671489E;");
    asm("loc_671482B: mov $_data_671B7C0,%esi;");
    asm("loc_6714830: push %eax;");
    asm("loc_6714831: calll *_data_671CEF0;");
    asm("loc_6714837: mov 2(%esi),%ax;");
    asm("loc_671483B: add $2,%esi;");
    asm("loc_671483E: add $4,%esp;");
    asm("loc_6714841: test %ax,%ax;");
    asm("loc_6714844: jne loc_6714830;");
    asm("loc_6714846: pop %edi;");
    asm("loc_6714847: pop %esi;");
    asm("loc_6714848: add $0x200,%esp;");
    asm("loc_671484E: ret;");
    asm("loc_671484F: mov _data_671CFC8,%ecx;");
    asm("loc_6714855: push $0;");
    asm("loc_6714857: push $0;");
    asm("loc_6714859: lea 0x10(%esp),%eax;");
    asm("loc_671485D: push $0x200;");
    asm("loc_6714862: push %eax;");
    asm("loc_6714863: push $0xFFFFFFFF;");
    asm("loc_6714865: push $_data_671B7C0;");
    asm("loc_671486A: push $0;");
    asm("loc_671486C: push %ecx;");
    asm("loc_671486D: calll *_off_671936C;");
    asm("loc_6714873: mov %eax,%edi;");
    asm("loc_6714875: xor %esi,%esi;");
    asm("loc_6714877: test %edi,%edi;");
    asm("loc_6714879: jle loc_671489E;");
    asm("loc_671487B: push %ebx;");
    asm("loc_671487C: mov _import_671710C,%ebx;");
    asm("loc_6714882: mov _data_671CF98,%eax;");
    asm("loc_6714887: xor %edx,%edx;");
    asm("loc_6714889: mov 0xC(%esp,%esi),%dl;");
    asm("loc_671488D: push $0;");
    asm("loc_671488F: push %edx;");
    asm("loc_6714890: push $0x102;");
    asm("loc_6714895: push %eax;");
    asm("loc_6714896: call *%ebx;");
    asm("loc_6714898: inc %esi;");
    asm("loc_6714899: cmp %edi,%esi;");
    asm("loc_671489B: jl loc_6714882;");
    asm("loc_671489D: pop %ebx;");
    asm("loc_671489E: pop %edi;");
    asm("loc_671489F: pop %esi;");
    asm("loc_67148A0: add $0x200,%esp;");
    asm("loc_67148A6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67148B0() // _sub_67148B0
{
    __DEBUG_ASM(67148B0);
    // chunk 0x67148B0 _sub_67148B0
    asm("loc_67148B0: push %ebx;");
    asm("loc_67148B1: push %ebp;");
    asm("loc_67148B2: mov 0xC(%esp),%ebp;");
    asm("loc_67148B6: push %esi;");
    asm("loc_67148B7: push %edi;");
    asm("loc_67148B8: mov 0x18(%esp),%edi;");
    asm("loc_67148BC: push $0;");
    asm("loc_67148BE: push $0;");
    asm("loc_67148C0: push %edi;");
    asm("loc_67148C1: push %ebp;");
    asm("loc_67148C2: call _sub_671699A;");
    asm("loc_67148C7: mov %eax,%esi;");
    asm("loc_67148C9: test %esi,%esi;");
    asm("loc_67148CB: je loc_67149CE;");
    asm("loc_67148D1: push %esi;");
    asm("loc_67148D2: calll *_data_671B408;");
    asm("loc_67148D8: mov %eax,%ebx;");
    asm("loc_67148DA: add $4,%esp;");
    asm("loc_67148DD: test %ebx,%ebx;");
    asm("loc_67148DF: je loc_67149CE;");
    asm("loc_67148E5: push %esi;");
    asm("loc_67148E6: push %ebx;");
    asm("loc_67148E7: push %edi;");
    asm("loc_67148E8: push %ebp;");
    asm("loc_67148E9: call _sub_671699A;");
    asm("loc_67148EE: mov %eax,%esi;");
    asm("loc_67148F0: test %esi,%esi;");
    asm("loc_67148F2: je loc_67149C4;");
    asm("loc_67148F8: mov 8(%ebx),%eax;");
    asm("loc_67148FB: xor %edi,%edi;");
    asm("loc_67148FD: xor %esi,%esi;");
    asm("loc_67148FF: test %eax,%eax;");
    asm("loc_6714901: jle loc_6714935;");
    asm("loc_6714903: lea 0x18(%ebx),%ebp;");
    asm("loc_6714906: mov (%ebp),%eax;");
    asm("loc_6714909: mov _data_671CFC8,%ecx;");
    asm("loc_671490F: push $0;");
    asm("loc_6714911: push $0;");
    asm("loc_6714913: add %ebx,%eax;");
    asm("loc_6714915: push $0xFFFFFFFF;");
    asm("loc_6714917: push %eax;");
    asm("loc_6714918: push $0;");
    asm("loc_671491A: push %ecx;");
    asm("loc_671491B: calll *_off_6719368;");
    asm("loc_6714921: lea (%edi,%eax,2),%edx;");
    asm("loc_6714924: mov 8(%ebx),%eax;");
    asm("loc_6714927: inc %esi;");
    asm("loc_6714928: add $4,%ebp;");
    asm("loc_671492B: cmp %eax,%esi;");
    asm("loc_671492D: mov %edx,0x18(%esp);");
    asm("loc_6714931: mov %edx,%edi;");
    asm("loc_6714933: jl loc_6714906;");
    asm("loc_6714935: add 0x18(%ebx),%edi;");
    asm("loc_6714938: push %edi;");
    asm("loc_6714939: mov %edi,0x1C(%esp);");
    asm("loc_671493D: calll *_data_671B408;");
    asm("loc_6714943: mov %eax,%ebp;");
    asm("loc_6714945: mov 0x20(%esp),%eax;");
    asm("loc_6714949: mov %ebx,%esi;");
    asm("loc_671494B: mov %ebp,%edi;");
    asm("loc_671494D: mov %ebp,(%eax);");
    asm("loc_671494F: mov 0x18(%ebx),%ecx;");
    asm("loc_6714952: mov %ecx,%edx;");
    asm("loc_6714954: add $4,%esp;");
    asm("loc_6714957: shr $2,%ecx;");
    asm("loc_671495A: rep movsl (%esi),(%edi);");
    asm("loc_671495C: mov %edx,%ecx;");
    asm("loc_671495E: movl $0,0x14(%esp);");
    asm("loc_6714966: and $3,%ecx;");
    asm("loc_6714969: rep movsb (%esi),(%edi);");
    asm("loc_671496B: mov 0x18(%ebx),%esi;");
    asm("loc_671496E: mov 8(%ebx),%eax;");
    asm("loc_6714971: lea 0x18(%ebx),%edi;");
    asm("loc_6714974: add %ebp,%esi;");
    asm("loc_6714976: test %eax,%eax;");
    asm("loc_6714978: jle loc_67149C0;");
    asm("loc_671497A: mov %ebp,%eax;");
    asm("loc_671497C: sub %ebx,%eax;");
    asm("loc_671497E: mov %eax,0x1C(%esp);");
    asm("loc_6714982: jmp loc_6714988;");
    asm("loc_6714984: mov 0x1C(%esp),%eax;");
    asm("loc_6714988: mov %esi,%ecx;");
    asm("loc_671498A: push $0x100;");
    asm("loc_671498F: sub %ebp,%ecx;");
    asm("loc_6714991: push %esi;");
    asm("loc_6714992: mov %ecx,(%eax,%edi);");
    asm("loc_6714995: mov (%edi),%edx;");
    asm("loc_6714997: mov _data_671CFC8,%eax;");
    asm("loc_671499C: add %ebx,%edx;");
    asm("loc_671499E: push $0xFFFFFFFF;");
    asm("loc_67149A0: push %edx;");
    asm("loc_67149A1: push $0;");
    asm("loc_67149A3: push %eax;");
    asm("loc_67149A4: calll *_off_6719368;");
    asm("loc_67149AA: mov 8(%ebx),%ecx;");
    asm("loc_67149AD: lea (%esi,%eax,2),%esi;");
    asm("loc_67149B0: mov 0x14(%esp),%eax;");
    asm("loc_67149B4: add $4,%edi;");
    asm("loc_67149B7: inc %eax;");
    asm("loc_67149B8: cmp %ecx,%eax;");
    asm("loc_67149BA: mov %eax,0x14(%esp);");
    asm("loc_67149BE: jl loc_6714984;");
    asm("loc_67149C0: mov 0x18(%esp),%esi;");
    asm("loc_67149C4: push %ebx;");
    asm("loc_67149C5: calll *_data_671B404;");
    asm("loc_67149CB: add $4,%esp;");
    asm("loc_67149CE: mov %esi,%eax;");
    asm("loc_67149D0: pop %edi;");
    asm("loc_67149D1: pop %esi;");
    asm("loc_67149D2: pop %ebp;");
    asm("loc_67149D3: pop %ebx;");
    asm("loc_67149D4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67149E0() // _sub_67149E0
{
    __DEBUG_ASM(67149E0);
    // chunk 0x67149E0 _sub_67149E0
    asm("loc_67149E0: sub $0x400,%esp;");
    asm("loc_67149E6: lea (%esp),%eax;");
    asm("loc_67149EA: push %ebx;");
    asm("loc_67149EB: mov 0x408(%esp),%ebx;");
    asm("loc_67149F2: push %esi;");
    asm("loc_67149F3: push %edi;");
    asm("loc_67149F4: mov 0x414(%esp),%edi;");
    asm("loc_67149FB: push $0x200;");
    asm("loc_6714A00: push %eax;");
    asm("loc_6714A01: push %edi;");
    asm("loc_6714A02: push %ebx;");
    asm("loc_6714A03: call _sub_67169AC;");
    asm("loc_6714A08: cmp $0x80,%edi;");
    asm("loc_6714A0E: mov %eax,%esi;");
    asm("loc_6714A10: ja loc_6714AC0;");
    asm("loc_6714A16: je loc_6714AB0;");
    asm("loc_6714A1C: cmp $8,%edi;");
    asm("loc_6714A1F: je loc_6714AC8;");
    asm("loc_6714A25: cmp $0x10,%edi;");
    asm("loc_6714A28: jne loc_6714B00;");
    asm("loc_6714A2E: lea 0x20C(%esp),%ecx;");
    asm("loc_6714A35: push $0x200;");
    asm("loc_6714A3A: push %ecx;");
    asm("loc_6714A3B: push $8;");
    asm("loc_6714A3D: push %ebx;");
    asm("loc_6714A3E: call _sub_67169AC;");
    asm("loc_6714A43: test %eax,%eax;");
    asm("loc_6714A45: jne loc_6714A6F;");
    asm("loc_6714A47: lea 0x20C(%esp),%edx;");
    asm("loc_6714A4E: push $0x200;");
    asm("loc_6714A53: push %edx;");
    asm("loc_6714A54: push $0x800;");
    asm("loc_6714A59: push %ebx;");
    asm("loc_6714A5A: call _sub_67169AC;");
    asm("loc_6714A5F: test %eax,%eax;");
    asm("loc_6714A61: jne loc_6714A6F;");
    asm("loc_6714A63: pop %edi;");
    asm("loc_6714A64: pop %esi;");
    asm("loc_6714A65: pop %ebx;");
    asm("loc_6714A66: add $0x400,%esp;");
    asm("loc_6714A6C: ret $0x10;");
    asm("loc_6714A6F: mov 0x418(%esp),%edi;");
    asm("loc_6714A76: xor %eax,%eax;");
    asm("loc_6714A78: test %esi,%esi;");
    asm("loc_6714A7A: mov %edi,%ecx;");
    asm("loc_6714A7C: jbe loc_6714A9E;");
    asm("loc_6714A7E: mov 0xC(%esp,%eax),%dl;");
    asm("loc_6714A82: mov %dl,(%ecx);");
    asm("loc_6714A84: xor %edx,%edx;");
    asm("loc_6714A86: mov 0x20C(%esp,%eax),%dl;");
    asm("loc_6714A8D: inc %ecx;");
    asm("loc_6714A8E: mov _data_671B9C8(%edx),%bl;");
    asm("loc_6714A94: test %bl,%bl;");
    asm("loc_6714A96: je loc_6714A99;");
    asm("loc_6714A98: inc %eax;");
    asm("loc_6714A99: inc %eax;");
    asm("loc_6714A9A: cmp %esi,%eax;");
    asm("loc_6714A9C: jb loc_6714A7E;");
    asm("loc_6714A9E: sub %edi,%ecx;");
    asm("loc_6714AA0: pop %edi;");
    asm("loc_6714AA1: mov %ecx,%esi;");
    asm("loc_6714AA3: mov %esi,%eax;");
    asm("loc_6714AA5: pop %esi;");
    asm("loc_6714AA6: pop %ebx;");
    asm("loc_6714AA7: add $0x400,%esp;");
    asm("loc_6714AAD: ret $0x10;");
    asm("loc_6714AB0: shr $1,%esi;");
    asm("loc_6714AB2: mov %esi,%eax;");
    asm("loc_6714AB4: pop %edi;");
    asm("loc_6714AB5: pop %esi;");
    asm("loc_6714AB6: pop %ebx;");
    asm("loc_6714AB7: add $0x400,%esp;");
    asm("loc_6714ABD: ret $0x10;");
    asm("loc_6714AC0: cmp $0x800,%edi;");
    asm("loc_6714AC6: jne loc_6714B00;");
    asm("loc_6714AC8: test %esi,%esi;");
    asm("loc_6714ACA: je loc_6714B00;");
    asm("loc_6714ACC: mov 0x41C(%esp),%eax;");
    asm("loc_6714AD3: mov 0x418(%esp),%ecx;");
    asm("loc_6714ADA: push %eax;");
    asm("loc_6714ADB: mov _data_671CFC8,%eax;");
    asm("loc_6714AE0: push %ecx;");
    asm("loc_6714AE1: lea 0x14(%esp),%edx;");
    asm("loc_6714AE5: push $0xFFFFFFFF;");
    asm("loc_6714AE7: push %edx;");
    asm("loc_6714AE8: push $0;");
    asm("loc_6714AEA: push %eax;");
    asm("loc_6714AEB: movb $0,0x24(%esp,%esi);");
    asm("loc_6714AF0: calll *_off_6719368;");
    asm("loc_6714AF6: mov %eax,%esi;");
    asm("loc_6714AF8: test %esi,%esi;");
    asm("loc_6714AFA: je loc_6714B00;");
    asm("loc_6714AFC: lea -2(%esi,%esi),%esi;");
    asm("loc_6714B00: mov %esi,%eax;");
    asm("loc_6714B02: pop %edi;");
    asm("loc_6714B03: pop %esi;");
    asm("loc_6714B04: pop %ebx;");
    asm("loc_6714B05: add $0x400,%esp;");
    asm("loc_6714B0B: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6714B10() // _sub_6714B10
{
    __DEBUG_ASM(6714B10);
    // chunk 0x6714B10 _sub_6714B10
    asm("loc_6714B10: push %esi;");
    asm("loc_6714B11: push %edi;");
    asm("loc_6714B12: push $_data_671B7C0;");
    asm("loc_6714B17: calll *_off_671937C;");
    asm("loc_6714B1D: mov %eax,%edi;");
    asm("loc_6714B1F: mov _data_671CEF0,%eax;");
    asm("loc_6714B24: xor %esi,%esi;");
    asm("loc_6714B26: test %eax,%eax;");
    asm("loc_6714B28: je loc_6714B48;");
    asm("loc_6714B2A: test %edi,%edi;");
    asm("loc_6714B2C: jle loc_6714B74;");
    asm("loc_6714B2E: mov _data_671B7C0(,%esi,2),%ax;");
    asm("loc_6714B36: push %eax;");
    asm("loc_6714B37: calll *_data_671CEF0;");
    asm("loc_6714B3D: add $4,%esp;");
    asm("loc_6714B40: inc %esi;");
    asm("loc_6714B41: cmp %edi,%esi;");
    asm("loc_6714B43: jl loc_6714B2E;");
    asm("loc_6714B45: pop %edi;");
    asm("loc_6714B46: pop %esi;");
    asm("loc_6714B47: ret;");
    asm("loc_6714B48: test %edi,%edi;");
    asm("loc_6714B4A: jle loc_6714B74;");
    asm("loc_6714B4C: push %ebx;");
    asm("loc_6714B4D: mov _off_6719388,%ebx;");
    asm("loc_6714B53: mov _data_671CF98,%edx;");
    asm("loc_6714B59: xor %ecx,%ecx;");
    asm("loc_6714B5B: mov _data_671B7C0(,%esi,2),%cx;");
    asm("loc_6714B63: push $0;");
    asm("loc_6714B65: push %ecx;");
    asm("loc_6714B66: push $0x102;");
    asm("loc_6714B6B: push %edx;");
    asm("loc_6714B6C: call *%ebx;");
    asm("loc_6714B6E: inc %esi;");
    asm("loc_6714B6F: cmp %edi,%esi;");
    asm("loc_6714B71: jl loc_6714B53;");
    asm("loc_6714B73: pop %ebx;");
    asm("loc_6714B74: pop %edi;");
    asm("loc_6714B75: pop %esi;");
    asm("loc_6714B76: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6714B80() // _sub_6714B80
{
    __DEBUG_ASM(6714B80);
    // chunk 0x6714B80 _sub_6714B80
    asm("loc_6714B80: push %ebx;");
    asm("loc_6714B81: mov 8(%esp),%ebx;");
    asm("loc_6714B85: push %esi;");
    asm("loc_6714B86: push %edi;");
    asm("loc_6714B87: mov 0x14(%esp),%edi;");
    asm("loc_6714B8B: push $0;");
    asm("loc_6714B8D: push $0;");
    asm("loc_6714B8F: push %edi;");
    asm("loc_6714B90: push %ebx;");
    asm("loc_6714B91: calll *_data_671B9C0;");
    asm("loc_6714B97: mov %eax,%esi;");
    asm("loc_6714B99: test %esi,%esi;");
    asm("loc_6714B9B: je loc_6714BBB;");
    asm("loc_6714B9D: push %esi;");
    asm("loc_6714B9E: calll *_data_671B408;");
    asm("loc_6714BA4: mov 0x1C(%esp),%ecx;");
    asm("loc_6714BA8: add $4,%esp;");
    asm("loc_6714BAB: push %esi;");
    asm("loc_6714BAC: push %eax;");
    asm("loc_6714BAD: push %edi;");
    asm("loc_6714BAE: push %ebx;");
    asm("loc_6714BAF: mov %eax,(%ecx);");
    asm("loc_6714BB1: calll *_data_671B9C0;");
    asm("loc_6714BB7: pop %edi;");
    asm("loc_6714BB8: pop %esi;");
    asm("loc_6714BB9: pop %ebx;");
    asm("loc_6714BBA: ret;");
    asm("loc_6714BBB: mov %esi,%eax;");
    asm("loc_6714BBD: pop %edi;");
    asm("loc_6714BBE: pop %esi;");
    asm("loc_6714BBF: pop %ebx;");
    asm("loc_6714BC0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6714BD0() // _sub_6714BD0
{
    __DEBUG_ASM(6714BD0);
    // chunk 0x6714BD0 _sub_6714BD0
    asm("loc_6714BD0: sub $0x40C,%esp;");
    asm("loc_6714BD6: push %ebp;");
    asm("loc_6714BD7: push %esi;");
    asm("loc_6714BD8: push %edi;");
    asm("loc_6714BD9: mov 0x41C(%esp),%edi;");
    asm("loc_6714BE0: cmp $2,%edi;");
    asm("loc_6714BE3: jb loc_6714BF1;");
    asm("loc_6714BE5: pop %edi;");
    asm("loc_6714BE6: pop %esi;");
    asm("loc_6714BE7: xor %eax,%eax;");
    asm("loc_6714BE9: pop %ebp;");
    asm("loc_6714BEA: add $0x40C,%esp;");
    asm("loc_6714BF0: ret;");
    asm("loc_6714BF1: mov _data_671CFC4,%eax;");
    asm("loc_6714BF6: mov _data_671CFD0,%ecx;");
    asm("loc_6714BFC: cmp %eax,%ecx;");
    asm("loc_6714BFE: je loc_6714DC3;");
    asm("loc_6714C04: mov %eax,%ebp;");
    asm("loc_6714C06: mov %eax,_data_671CFD0;");
    asm("loc_6714C0B: and $0xFFFF,%ebp;");
    asm("loc_6714C11: cmp $0xE0080404,%eax;");
    asm("loc_6714C16: je loc_6714C2A;");
    asm("loc_6714C18: cmp $0xE0090404,%eax;");
    asm("loc_6714C1D: je loc_6714C2A;");
    asm("loc_6714C1F: cmp $0xE00E0804,%eax;");
    asm("loc_6714C24: jne loc_6714DAF;");
    asm("loc_6714C2A: lea 0x18(%esp),%ecx;");
    asm("loc_6714C2E: push $0x3FF;");
    asm("loc_6714C33: push %ecx;");
    asm("loc_6714C34: push %eax;");
    asm("loc_6714C35: call _sub_67169B2;");
    asm("loc_6714C3A: test %eax,%eax;");
    asm("loc_6714C3C: jbe loc_6714DAF;");
    asm("loc_6714C42: mov _data_671B548,%eax;");
    asm("loc_6714C47: test %eax,%eax;");
    asm("loc_6714C49: jne loc_6714CE5;");
    asm("loc_6714C4F: mov _import_6717088,%esi;");
    asm("loc_6714C55: push $0xFFFFFFFF;");
    asm("loc_6714C57: push $_data_671922C;");
    asm("loc_6714C5C: lea 0x20(%esp),%edx;");
    asm("loc_6714C60: push $0xFFFFFFFF;");
    asm("loc_6714C62: push %edx;");
    asm("loc_6714C63: push $1;");
    asm("loc_6714C65: push $0x409;");
    asm("loc_6714C6A: call *%esi;");
    asm("loc_6714C6C: cmp $2,%eax;");
    asm("loc_6714C6F: je loc_6714CE5;");
    asm("loc_6714C71: push $0xFFFFFFFF;");
    asm("loc_6714C73: push $_data_671921C;");
    asm("loc_6714C78: lea 0x20(%esp),%eax;");
    asm("loc_6714C7C: push $0xFFFFFFFF;");
    asm("loc_6714C7E: push %eax;");
    asm("loc_6714C7F: push $1;");
    asm("loc_6714C81: push $0x409;");
    asm("loc_6714C86: call *%esi;");
    asm("loc_6714C88: cmp $2,%eax;");
    asm("loc_6714C8B: je loc_6714CE5;");
    asm("loc_6714C8D: push $0xFFFFFFFF;");
    asm("loc_6714C8F: push $_data_671920C;");
    asm("loc_6714C94: lea 0x20(%esp),%ecx;");
    asm("loc_6714C98: push $0xFFFFFFFF;");
    asm("loc_6714C9A: push %ecx;");
    asm("loc_6714C9B: push $1;");
    asm("loc_6714C9D: push $0x409;");
    asm("loc_6714CA2: call *%esi;");
    asm("loc_6714CA4: cmp $2,%eax;");
    asm("loc_6714CA7: je loc_6714CE5;");
    asm("loc_6714CA9: push $0xFFFFFFFF;");
    asm("loc_6714CAB: push $_data_67191FC;");
    asm("loc_6714CB0: lea 0x20(%esp),%edx;");
    asm("loc_6714CB4: push $0xFFFFFFFF;");
    asm("loc_6714CB6: push %edx;");
    asm("loc_6714CB7: push $1;");
    asm("loc_6714CB9: push $0x409;");
    asm("loc_6714CBE: call *%esi;");
    asm("loc_6714CC0: cmp $2,%eax;");
    asm("loc_6714CC3: je loc_6714CE5;");
    asm("loc_6714CC5: push $0xFFFFFFFF;");
    asm("loc_6714CC7: push $_data_67191EC;");
    asm("loc_6714CCC: lea 0x20(%esp),%eax;");
    asm("loc_6714CD0: push $0xFFFFFFFF;");
    asm("loc_6714CD2: push %eax;");
    asm("loc_6714CD3: push $1;");
    asm("loc_6714CD5: push $0x409;");
    asm("loc_6714CDA: call *%esi;");
    asm("loc_6714CDC: cmp $2,%eax;");
    asm("loc_6714CDF: jne loc_6714DAF;");
    asm("loc_6714CE5: lea 0x10(%esp),%ecx;");
    asm("loc_6714CE9: lea 0x18(%esp),%edx;");
    asm("loc_6714CED: push %ecx;");
    asm("loc_6714CEE: push %edx;");
    asm("loc_6714CEF: call _sub_6716976;");
    asm("loc_6714CF4: mov %eax,%esi;");
    asm("loc_6714CF6: test %esi,%esi;");
    asm("loc_6714CF8: je loc_6714DAF;");
    asm("loc_6714CFE: push %esi;");
    asm("loc_6714CFF: calll *_data_671B408;");
    asm("loc_6714D05: mov %eax,%edi;");
    asm("loc_6714D07: add $4,%esp;");
    asm("loc_6714D0A: test %edi,%edi;");
    asm("loc_6714D0C: je loc_6714D9E;");
    asm("loc_6714D12: mov 0x10(%esp),%eax;");
    asm("loc_6714D16: push %edi;");
    asm("loc_6714D17: push %esi;");
    asm("loc_6714D18: lea 0x20(%esp),%ecx;");
    asm("loc_6714D1C: push %eax;");
    asm("loc_6714D1D: push %ecx;");
    asm("loc_6714D1E: call _sub_6716970;");
    asm("loc_6714D23: test %eax,%eax;");
    asm("loc_6714D25: je loc_6714D9E;");
    asm("loc_6714D27: lea 0x14(%esp),%edx;");
    asm("loc_6714D2B: lea 0xC(%esp),%eax;");
    asm("loc_6714D2F: push %edx;");
    asm("loc_6714D30: push %eax;");
    asm("loc_6714D31: push $_data_67191E8;");
    asm("loc_6714D36: push %edi;");
    asm("loc_6714D37: call _sub_671696A;");
    asm("loc_6714D3C: test %eax,%eax;");
    asm("loc_6714D3E: je loc_6714D9E;");
    asm("loc_6714D40: mov 0xC(%esp),%ecx;");
    asm("loc_6714D44: xor %edx,%edx;");
    asm("loc_6714D46: mov 8(%ecx),%eax;");
    asm("loc_6714D49: mov %al,%dh;");
    asm("loc_6714D4B: and $0xFFFF0000,%eax;");
    asm("loc_6714D50: or %eax,%edx;");
    asm("loc_6714D52: shl $8,%edx;");
    asm("loc_6714D55: mov %edx,%eax;");
    asm("loc_6714D57: mov _data_671B548,%edx;");
    asm("loc_6714D5D: test %edx,%edx;");
    asm("loc_6714D5F: jne loc_6714DF1;");
    asm("loc_6714D65: cmp $0x404,%ebp;");
    asm("loc_6714D6B: jne loc_6714DD4;");
    asm("loc_6714D6D: cmp $0x4020000,%eax;");
    asm("loc_6714D72: je loc_6714DF1;");
    asm("loc_6714D74: cmp $0x4030000,%eax;");
    asm("loc_6714D79: je loc_6714DF1;");
    asm("loc_6714D7B: cmp $0x4040000,%eax;");
    asm("loc_6714D80: je loc_6714DF1;");
    asm("loc_6714D82: cmp $0x5000000,%eax;");
    asm("loc_6714D87: je loc_6714DF1;");
    asm("loc_6714D89: cmp $0x5010000,%eax;");
    asm("loc_6714D8E: je loc_6714DF1;");
    asm("loc_6714D90: cmp $0x5020000,%eax;");
    asm("loc_6714D95: je loc_6714DF1;");
    asm("loc_6714D97: cmp $0x6000000,%eax;");
    asm("loc_6714D9C: je loc_6714DF1;");
    asm("loc_6714D9E: push %edi;");
    asm("loc_6714D9F: calll *_data_671B404;");
    asm("loc_6714DA5: mov 0x420(%esp),%edi;");
    asm("loc_6714DAC: add $4,%esp;");
    asm("loc_6714DAF: movl $0,_data_671CFD8;");
    asm("loc_6714DB9: movl $0,_data_671CFD4;");
    asm("loc_6714DC3: mov _data_671CFD4(,%edi,4),%eax;");
    asm("loc_6714DCA: pop %edi;");
    asm("loc_6714DCB: pop %esi;");
    asm("loc_6714DCC: pop %ebp;");
    asm("loc_6714DCD: add $0x40C,%esp;");
    asm("loc_6714DD3: ret;");
    asm("loc_6714DD4: cmp $0x804,%ebp;");
    asm("loc_6714DDA: jne loc_6714D9E;");
    asm("loc_6714DDC: cmp $0x4010000,%eax;");
    asm("loc_6714DE1: je loc_6714DF1;");
    asm("loc_6714DE3: cmp $0x4020000,%eax;");
    asm("loc_6714DE8: je loc_6714DF1;");
    asm("loc_6714DEA: cmp $0x5030000,%eax;");
    asm("loc_6714DEF: jne loc_6714D9E;");
    asm("loc_6714DF1: or %ebp,%eax;");
    asm("loc_6714DF3: push %edi;");
    asm("loc_6714DF4: mov %eax,_data_671CFD4;");
    asm("loc_6714DF9: mov 0xC(%ecx),%eax;");
    asm("loc_6714DFC: mov %eax,_data_671CFD8;");
    asm("loc_6714E01: calll *_data_671B404;");
    asm("loc_6714E07: mov _data_671CFD4,%eax;");
    asm("loc_6714E0C: add $4,%esp;");
    asm("loc_6714E0F: pop %edi;");
    asm("loc_6714E10: pop %esi;");
    asm("loc_6714E11: pop %ebp;");
    asm("loc_6714E12: add $0x40C,%esp;");
    asm("loc_6714E18: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6714E20() // _sub_6714E20
{
    __DEBUG_ASM(6714E20);
    // chunk 0x6714E20 _sub_6714E20
    asm("loc_6714E20: push %ebp;");
    asm("loc_6714E21: mov %esp,%ebp;");
    asm("loc_6714E23: sub $0x28,%esp;");
    asm("loc_6714E26: push %ebx;");
    asm("loc_6714E27: push %esi;");
    asm("loc_6714E28: push %edi;");
    asm("loc_6714E29: push $0;");
    asm("loc_6714E2B: call _sub_6714BD0;");
    asm("loc_6714E30: mov %eax,%ebx;");
    asm("loc_6714E32: add $4,%esp;");
    asm("loc_6714E35: test %ebx,%ebx;");
    asm("loc_6714E37: mov %ebx,-0x10(%ebp);");
    asm("loc_6714E3A: je loc_6715250;");
    asm("loc_6714E40: mov 8(%ebp),%eax;");
    asm("loc_6714E43: push %eax;");
    asm("loc_6714E44: call _sub_6716988;");
    asm("loc_6714E49: mov %eax,%esi;");
    asm("loc_6714E4B: test %esi,%esi;");
    asm("loc_6714E4D: mov %esi,-0x1C(%ebp);");
    asm("loc_6714E50: je loc_6715250;");
    asm("loc_6714E56: mov _data_671B548,%eax;");
    asm("loc_6714E5B: xor %ecx,%ecx;");
    asm("loc_6714E5D: xor %edi,%edi;");
    asm("loc_6714E5F: cmp %ecx,%eax;");
    asm("loc_6714E61: mov %ecx,-8(%ebp);");
    asm("loc_6714E64: mov %ecx,-0xC(%ebp);");
    asm("loc_6714E67: mov %cl,-1(%ebp);");
    asm("loc_6714E6A: mov %ecx,-0x24(%ebp);");
    asm("loc_6714E6D: je loc_6714EC3;");
    asm("loc_6714E6F: lea -0x28(%ebp),%edx;");
    asm("loc_6714E72: push %edx;");
    asm("loc_6714E73: lea -0x20(%ebp),%edx;");
    asm("loc_6714E76: push %edx;");
    asm("loc_6714E77: lea -8(%ebp),%edx;");
    asm("loc_6714E7A: push %edx;");
    asm("loc_6714E7B: push %ecx;");
    asm("loc_6714E7C: push %ecx;");
    asm("loc_6714E7D: push %esi;");
    asm("loc_6714E7E: call *%eax;");
    asm("loc_6714E80: mov %eax,%edi;");
    asm("loc_6714E82: test %edi,%edi;");
    asm("loc_6714E84: je loc_6714EAC;");
    asm("loc_6714E86: add $3,%eax;");
    asm("loc_6714E89: and $0xFC,%al;");
    asm("loc_6714E8B: call _sub_6716AF0;");
    asm("loc_6714E90: lea -0x28(%ebp),%ecx;");
    asm("loc_6714E93: mov %esp,%eax;");
    asm("loc_6714E95: push %ecx;");
    asm("loc_6714E96: lea -0x20(%ebp),%edx;");
    asm("loc_6714E99: lea -8(%ebp),%ecx;");
    asm("loc_6714E9C: push %edx;");
    asm("loc_6714E9D: push %ecx;");
    asm("loc_6714E9E: push %eax;");
    asm("loc_6714E9F: push %edi;");
    asm("loc_6714EA0: push %esi;");
    asm("loc_6714EA1: mov %eax,-0xC(%ebp);");
    asm("loc_6714EA4: calll *_data_671B548;");
    asm("loc_6714EAA: mov %eax,%edi;");
    asm("loc_6714EAC: mov -0x20(%ebp),%eax;");
    asm("loc_6714EAF: movb $1,-1(%ebp);");
    asm("loc_6714EB3: test %eax,%eax;");
    asm("loc_6714EB5: sete %dl;");
    asm("loc_6714EB8: mov %dl,_data_671CFAD;");
    asm("loc_6714EBE: jmp loc_6714F6F;");
    asm("loc_6714EC3: push %esi;");
    asm("loc_6714EC4: calll *_data_671B5A0;");
    asm("loc_6714ECA: mov %eax,%esi;");
    asm("loc_6714ECC: cmp $0x4040404,%ebx;");
    asm("loc_6714ED2: mov %esi,-0x24(%ebp);");
    asm("loc_6714ED5: ja loc_6715071;");
    asm("loc_6714EDB: je loc_671503B;");
    asm("loc_6714EE1: cmp $0x4020804,%ebx;");
    asm("loc_6714EE7: ja loc_671502F;");
    asm("loc_6714EED: je loc_6714FDD;");
    asm("loc_6714EF3: cmp $0x4010804,%ebx;");
    asm("loc_6714EF9: je loc_6714F09;");
    asm("loc_6714EFB: cmp $0x4020404,%ebx;");
    asm("loc_6714F01: je loc_671503B;");
    asm("loc_6714F07: jmp loc_6714F52;");
    asm("loc_6714F09: push $1;");
    asm("loc_6714F0B: call _sub_6714BD0;");
    asm("loc_6714F10: add $4,%esp;");
    asm("loc_6714F13: cmp $2,%eax;");
    asm("loc_6714F16: mov 0x124(%esi),%eax;");
    asm("loc_6714F1C: sbb %ebx,%ebx;");
    asm("loc_6714F1E: push %eax;");
    asm("loc_6714F1F: add $8,%ebx;");
    asm("loc_6714F22: calll *_data_671CED4;");
    asm("loc_6714F28: mov (%eax,%ebx,4),%eax;");
    asm("loc_6714F2B: test %eax,%eax;");
    asm("loc_6714F2D: je loc_6714F4F;");
    asm("loc_6714F2F: mov 0x9C(%eax),%edi;");
    asm("loc_6714F35: mov 0xA0(%eax),%ecx;");
    asm("loc_6714F3B: cmp %edi,%ecx;");
    asm("loc_6714F3D: mov %ecx,-8(%ebp);");
    asm("loc_6714F40: jb loc_6714F45;");
    asm("loc_6714F42: mov %edi,-8(%ebp);");
    asm("loc_6714F45: add $0x38,%eax;");
    asm("loc_6714F48: movb $1,-1(%ebp);");
    asm("loc_6714F4C: mov %eax,-0xC(%ebp);");
    asm("loc_6714F4F: mov -0x10(%ebp),%ebx;");
    asm("loc_6714F52: mov -0x1C(%ebp),%esi;");
    asm("loc_6714F55: xor %eax,%eax;");
    asm("loc_6714F57: mov %ax,_data_671BAD0;");
    asm("loc_6714F5D: mov %ax,_data_671BCD0;");
    asm("loc_6714F63: mov %ax,_data_671BED0;");
    asm("loc_6714F69: mov %ax,_data_671C0D0;");
    asm("loc_6714F6F: mov -1(%ebp),%al;");
    asm("loc_6714F72: or $0xFFFFFFFF,%edx;");
    asm("loc_6714F75: test %al,%al;");
    asm("loc_6714F77: mov %edi,_data_671CEEC;");
    asm("loc_6714F7D: mov %edx,_data_671CED8;");
    asm("loc_6714F83: je loc_6715112;");
    asm("loc_6714F89: xor %eax,%eax;");
    asm("loc_6714F8B: test %edi,%edi;");
    asm("loc_6714F8D: jbe loc_6714FCC;");
    asm("loc_6714F8F: mov $_data_671BAD2,%ecx;");
    asm("loc_6714F94: cmp %eax,-8(%ebp);");
    asm("loc_6714F97: ja loc_6714FA6;");
    asm("loc_6714F99: cmp $0xFFFFFFFF,%edx;");
    asm("loc_6714F9C: jne loc_6714FA6;");
    asm("loc_6714F9E: mov %eax,%edx;");
    asm("loc_6714FA0: mov %edx,_data_671CED8;");
    asm("loc_6714FA6: mov -0xC(%ebp),%esi;");
    asm("loc_6714FA9: inc %eax;");
    asm("loc_6714FAA: add $0x200,%ecx;");
    asm("loc_6714FB0: cmp %edi,%eax;");
    asm("loc_6714FB2: mov -2(%esi,%eax,2),%si;");
    asm("loc_6714FB7: movw $0,-0x200(%ecx);");
    asm("loc_6714FC0: mov %si,-0x202(%ecx);");
    asm("loc_6714FC7: jb loc_6714F94;");
    asm("loc_6714FC9: mov -0x1C(%ebp),%esi;");
    asm("loc_6714FCC: shl $9,%eax;");
    asm("loc_6714FCF: movw $0,_data_671BAD0(%eax);");
    asm("loc_6714FD8: jmp loc_67151AC;");
    asm("loc_6714FDD: mov _data_671CEF8+0x10,%ecx;");
    asm("loc_6714FE3: xor %ebx,%ebx;");
    asm("loc_6714FE5: cmp $2,%ecx;");
    asm("loc_6714FE8: mov 0x124(%esi),%ecx;");
    asm("loc_6714FEE: sete %bl;");
    asm("loc_6714FF1: push %ecx;");
    asm("loc_6714FF2: inc %ebx;");
    asm("loc_6714FF3: calll *_data_671CED4;");
    asm("loc_6714FF9: mov 0x20(%eax),%eax;");
    asm("loc_6714FFC: test %eax,%eax;");
    asm("loc_6714FFE: je loc_6714F4F;");
    asm("loc_6715004: lea 4(%ebx),%edx;");
    asm("loc_6715007: add $0x40,%eax;");
    asm("loc_671500A: shl $4,%edx;");
    asm("loc_671500D: shl $4,%ebx;");
    asm("loc_6715010: mov -0x40(%edx,%eax),%edi;");
    asm("loc_6715014: mov %eax,-0xC(%ebp);");
    asm("loc_6715017: mov 4(%ebx,%eax),%ecx;");
    asm("loc_671501B: mov _data_671CEF8+0x10,%eax;");
    asm("loc_6715020: cmp $2,%eax;");
    asm("loc_6715023: mov %ecx,-8(%ebp);");
    asm("loc_6715026: sete -1(%ebp);");
    asm("loc_671502A: jmp loc_6714F4F;");
    asm("loc_671502F: cmp $0x4030404,%ebx;");
    asm("loc_6715035: jne loc_6714F52;");
    asm("loc_671503B: mov 0x124(%esi),%edx;");
    asm("loc_6715041: push %edx;");
    asm("loc_6715042: calll *_data_671CED4;");
    asm("loc_6715048: mov 0x18(%eax),%eax;");
    asm("loc_671504B: test %eax,%eax;");
    asm("loc_671504D: je loc_6714F52;");
    asm("loc_6715053: mov 0x9C(%eax),%edi;");
    asm("loc_6715059: mov 0xA0(%eax),%ecx;");
    asm("loc_671505F: add $0x38,%eax;");
    asm("loc_6715062: mov %ecx,-8(%ebp);");
    asm("loc_6715065: mov %eax,-0xC(%ebp);");
    asm("loc_6715068: movb $1,-1(%ebp);");
    asm("loc_671506C: jmp loc_6714F52;");
    asm("loc_6715071: cmp $0x5020404,%ebx;");
    asm("loc_6715077: ja loc_67150CB;");
    asm("loc_6715079: je loc_67150D7;");
    asm("loc_671507B: cmp $0x5000404,%ebx;");
    asm("loc_6715081: je loc_6715090;");
    asm("loc_6715083: cmp $0x5010404,%ebx;");
    asm("loc_6715089: je loc_67150D7;");
    asm("loc_671508B: jmp loc_6714F52;");
    asm("loc_6715090: mov 0x124(%esi),%edx;");
    asm("loc_6715096: push %edx;");
    asm("loc_6715097: calll *_data_671CED4;");
    asm("loc_671509D: mov 0xC(%eax),%eax;");
    asm("loc_67150A0: test %eax,%eax;");
    asm("loc_67150A2: je loc_6714F52;");
    asm("loc_67150A8: mov 0x20(%eax),%eax;");
    asm("loc_67150AB: test %eax,%eax;");
    asm("loc_67150AD: je loc_6714F52;");
    asm("loc_67150B3: mov 0x50(%eax),%edi;");
    asm("loc_67150B6: mov 0x54(%eax),%ecx;");
    asm("loc_67150B9: add $0x40,%eax;");
    asm("loc_67150BC: mov %ecx,-8(%ebp);");
    asm("loc_67150BF: mov %eax,-0xC(%ebp);");
    asm("loc_67150C2: movb $0,-1(%ebp);");
    asm("loc_67150C6: jmp loc_6714F52;");
    asm("loc_67150CB: cmp $0x5030804,%ebx;");
    asm("loc_67150D1: jne loc_6714F52;");
    asm("loc_67150D7: mov 0x124(%esi),%edx;");
    asm("loc_67150DD: push %edx;");
    asm("loc_67150DE: calll *_data_671CED4;");
    asm("loc_67150E4: mov 4(%eax),%eax;");
    asm("loc_67150E7: test %eax,%eax;");
    asm("loc_67150E9: je loc_6714F52;");
    asm("loc_67150EF: mov 0x18(%eax),%eax;");
    asm("loc_67150F2: test %eax,%eax;");
    asm("loc_67150F4: je loc_6714F52;");
    asm("loc_67150FA: mov 0x60(%eax),%edi;");
    asm("loc_67150FD: mov 0x64(%eax),%ecx;");
    asm("loc_6715100: add $0x40,%eax;");
    asm("loc_6715103: mov %ecx,-8(%ebp);");
    asm("loc_6715106: mov %eax,-0xC(%ebp);");
    asm("loc_6715109: movb $1,-1(%ebp);");
    asm("loc_671510D: jmp loc_6714F52;");
    asm("loc_6715112: xor %ebx,%ebx;");
    asm("loc_6715114: xor %eax,%eax;");
    asm("loc_6715116: test %edi,%edi;");
    asm("loc_6715118: mov %eax,-0x14(%ebp);");
    asm("loc_671511B: jbe loc_6715193;");
    asm("loc_671511D: movl $_data_671BAD0,-0x18(%ebp);");
    asm("loc_6715124: jmp loc_671512C;");
    asm("loc_6715126: mov _data_671CED8,%edx;");
    asm("loc_671512C: cmp %ebx,-8(%ebp);");
    asm("loc_671512F: ja loc_671513B;");
    asm("loc_6715131: cmp $0xFFFFFFFF,%edx;");
    asm("loc_6715134: jne loc_671513B;");
    asm("loc_6715136: mov %eax,_data_671CED8;");
    asm("loc_671513B: mov -0xC(%ebp),%edx;");
    asm("loc_671513E: mov -0x18(%ebp),%eax;");
    asm("loc_6715141: xor %ecx,%ecx;");
    asm("loc_6715143: push $1;");
    asm("loc_6715145: mov (%ebx,%edx),%cl;");
    asm("loc_6715148: lea (%ebx,%edx),%esi;");
    asm("loc_671514B: push %eax;");
    asm("loc_671514C: xor %edx,%edx;");
    asm("loc_671514E: mov _data_671B9C8(%ecx),%al;");
    asm("loc_6715154: test %al,%al;");
    asm("loc_6715156: mov _data_671CFC8,%eax;");
    asm("loc_671515B: setne %dl;");
    asm("loc_671515E: inc %edx;");
    asm("loc_671515F: push %edx;");
    asm("loc_6715160: push %esi;");
    asm("loc_6715161: push $0;");
    asm("loc_6715163: push %eax;");
    asm("loc_6715164: calll *_off_6719368;");
    asm("loc_671516A: xor %ecx,%ecx;");
    asm("loc_671516C: mov (%esi),%cl;");
    asm("loc_671516E: mov _data_671B9C8(%ecx),%al;");
    asm("loc_6715174: test %al,%al;");
    asm("loc_6715176: je loc_6715179;");
    asm("loc_6715178: inc %ebx;");
    asm("loc_6715179: mov -0x14(%ebp),%edx;");
    asm("loc_671517C: mov -0x18(%ebp),%ecx;");
    asm("loc_671517F: inc %ebx;");
    asm("loc_6715180: inc %edx;");
    asm("loc_6715181: add $0x200,%ecx;");
    asm("loc_6715187: cmp %edi,%ebx;");
    asm("loc_6715189: mov %edx,-0x14(%ebp);");
    asm("loc_671518C: mov %ecx,-0x18(%ebp);");
    asm("loc_671518F: mov %edx,%eax;");
    asm("loc_6715191: jb loc_6715126;");
    asm("loc_6715193: mov -0x10(%ebp),%ebx;");
    asm("loc_6715196: mov -0x1C(%ebp),%esi;");
    asm("loc_6715199: mov %eax,%edx;");
    asm("loc_671519B: mov %eax,_data_671CEEC;");
    asm("loc_67151A0: shl $9,%edx;");
    asm("loc_67151A3: movw $0,_data_671BAD0(%edx);");
    asm("loc_67151AC: mov _data_671B548,%eax;");
    asm("loc_67151B1: test %eax,%eax;");
    asm("loc_67151B3: jne loc_67151D5;");
    asm("loc_67151B5: mov -0x24(%ebp),%eax;");
    asm("loc_67151B8: mov 0x124(%eax),%ecx;");
    asm("loc_67151BE: push %ecx;");
    asm("loc_67151BF: calll *_data_671B550;");
    asm("loc_67151C5: push %esi;");
    asm("loc_67151C6: calll *_data_671B558;");
    asm("loc_67151CC: push %ebx;");
    asm("loc_67151CD: call _sub_6715AA0;");
    asm("loc_67151D2: add $4,%esp;");
    asm("loc_67151D5: mov 8(%ebp),%edx;");
    asm("loc_67151D8: push %esi;");
    asm("loc_67151D9: push %edx;");
    asm("loc_67151DA: call _sub_6716982;");
    asm("loc_67151DF: mov _data_671CFAD,%al;");
    asm("loc_67151E4: movb $1,_data_671CFAC;");
    asm("loc_67151EB: test %al,%al;");
    asm("loc_67151ED: je loc_6715246;");
    asm("loc_67151EF: mov _data_671CEEC,%eax;");
    asm("loc_67151F4: xor %esi,%esi;");
    asm("loc_67151F6: test %eax,%eax;");
    asm("loc_67151F8: movl $0xFFFFFFFF,_data_671B554;");
    asm("loc_6715202: mov %si,_data_671B560;");
    asm("loc_6715209: jbe loc_6715246;");
    asm("loc_671520B: mov _off_6719370,%ebx;");
    asm("loc_6715211: mov $_data_671BAD0,%edi;");
    asm("loc_6715216: cmp %esi,_data_671CED8;");
    asm("loc_671521C: jne loc_671522E;");
    asm("loc_671521E: push $_data_671B560;");
    asm("loc_6715223: calll *_off_671937C;");
    asm("loc_6715229: mov %eax,_data_671B554;");
    asm("loc_671522E: push %edi;");
    asm("loc_671522F: push $_data_671B560;");
    asm("loc_6715234: call *%ebx;");
    asm("loc_6715236: mov _data_671CEEC,%eax;");
    asm("loc_671523B: inc %esi;");
    asm("loc_671523C: add $0x200,%edi;");
    asm("loc_6715242: cmp %eax,%esi;");
    asm("loc_6715244: jb loc_6715216;");
    asm("loc_6715246: movl $0xA,_data_671CEE8;");
    asm("loc_6715250: lea -0x34(%ebp),%esp;");
    asm("loc_6715253: pop %edi;");
    asm("loc_6715254: pop %esi;");
    asm("loc_6715255: pop %ebx;");
    asm("loc_6715256: mov %ebp,%esp;");
    asm("loc_6715258: pop %ebp;");
    asm("loc_6715259: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6715260() // _sub_6715260
{
    __DEBUG_ASM(6715260);
    // chunk 0x6715260 _sub_6715260
    asm("loc_6715260: mov _data_671CFBA,%al;");
    asm("loc_6715265: push %ebx;");
    asm("loc_6715266: test %al,%al;");
    asm("loc_6715268: push %edi;");
    asm("loc_6715269: je loc_67152DC;");
    asm("loc_671526B: mov 0xC(%esp),%eax;");
    asm("loc_671526F: test %eax,%eax;");
    asm("loc_6715271: je loc_67152DC;");
    asm("loc_6715273: cmpl $0xE5,8(%eax);");
    asm("loc_671527A: jne loc_67152DC;");
    asm("loc_671527C: mov 4(%eax),%ecx;");
    asm("loc_671527F: cmp $0x100,%ecx;");
    asm("loc_6715285: je loc_671528F;");
    asm("loc_6715287: cmp $0x104,%ecx;");
    asm("loc_671528D: jne loc_67152DC;");
    asm("loc_671528F: mov (%eax),%eax;");
    asm("loc_6715291: push %esi;");
    asm("loc_6715292: push %eax;");
    asm("loc_6715293: call _sub_67169B8;");
    asm("loc_6715298: mov _import_6717110,%esi;");
    asm("loc_671529E: push $0x11;");
    asm("loc_67152A0: mov %eax,%edi;");
    asm("loc_67152A2: call *%esi;");
    asm("loc_67152A4: mov %ax,%bx;");
    asm("loc_67152A7: push $0x10;");
    asm("loc_67152A9: shr $0xF,%ebx;");
    asm("loc_67152AC: and $1,%bl;");
    asm("loc_67152AF: call *%esi;");
    asm("loc_67152B1: shr $0xF,%eax;");
    asm("loc_67152B4: and $1,%al;");
    asm("loc_67152B6: xor %ecx,%ecx;");
    asm("loc_67152B8: pop %esi;");
    asm("loc_67152B9: cmp %bl,_data_67190C8(%ecx);");
    asm("loc_67152BF: jne loc_67152D1;");
    asm("loc_67152C1: cmp %al,_data_67190C9(%ecx);");
    asm("loc_67152C7: jne loc_67152D1;");
    asm("loc_67152C9: cmp %edi,_data_67190CC(%ecx);");
    asm("loc_67152CF: je loc_67152E1;");
    asm("loc_67152D1: add $8,%ecx;");
    asm("loc_67152D4: cmp $0xA0,%ecx;");
    asm("loc_67152DA: jb loc_67152B9;");
    asm("loc_67152DC: pop %edi;");
    asm("loc_67152DD: xor %al,%al;");
    asm("loc_67152DF: pop %ebx;");
    asm("loc_67152E0: ret;");
    asm("loc_67152E1: pop %edi;");
    asm("loc_67152E2: mov $1,%al;");
    asm("loc_67152E4: pop %ebx;");
    asm("loc_67152E5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67152F0() // _sub_67152F0
{
    __DEBUG_ASM(67152F0);
    // chunk 0x67152F0 _sub_67152F0
    asm("loc_67152F0: mov _data_671CFBA,%al;");
    asm("loc_67152F5: push %esi;");
    asm("loc_67152F6: test %al,%al;");
    asm("loc_67152F8: je loc_6715382;");
    asm("loc_67152FE: mov _data_671CF98,%eax;");
    asm("loc_6715303: push %eax;");
    asm("loc_6715304: call _sub_6716988;");
    asm("loc_6715309: mov %eax,%esi;");
    asm("loc_671530B: test %esi,%esi;");
    asm("loc_671530D: je loc_6715382;");
    asm("loc_671530F: mov _data_671CFDC,%al;");
    asm("loc_6715314: test %al,%al;");
    asm("loc_6715316: je loc_6715327;");
    asm("loc_6715318: mov _data_671CF98,%ecx;");
    asm("loc_671531E: push %esi;");
    asm("loc_671531F: push %ecx;");
    asm("loc_6715320: call _sub_6716982;");
    asm("loc_6715325: pop %esi;");
    asm("loc_6715326: ret;");
    asm("loc_6715327: mov _data_671B400,%eax;");
    asm("loc_671532C: movb $1,_data_671CFDC;");
    asm("loc_6715333: cmp $2,%eax;");
    asm("loc_6715336: jne loc_6715351;");
    asm("loc_6715338: mov 8(%esp),%al;");
    asm("loc_671533C: test %al,%al;");
    asm("loc_671533E: je loc_6715351;");
    asm("loc_6715340: push $_data_671B7C0;");
    asm("loc_6715345: calll *_off_671937C;");
    asm("loc_671534B: calll *_data_671B3FC;");
    asm("loc_6715351: call _sub_6714470;");
    asm("loc_6715356: push $0;");
    asm("loc_6715358: push $4;");
    asm("loc_671535A: push $0x15;");
    asm("loc_671535C: push %esi;");
    asm("loc_671535D: call _sub_67169BE;");
    asm("loc_6715362: push $0;");
    asm("loc_6715364: push $0;");
    asm("loc_6715366: push $0x11;");
    asm("loc_6715368: push %esi;");
    asm("loc_6715369: call _sub_67169BE;");
    asm("loc_671536E: mov _data_671CF98,%edx;");
    asm("loc_6715374: push %esi;");
    asm("loc_6715375: push %edx;");
    asm("loc_6715376: call _sub_6716982;");
    asm("loc_671537B: movb $0,_data_671CFDC;");
    asm("loc_6715382: pop %esi;");
    asm("loc_6715383: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6715390() // _sub_6715390
{
    __DEBUG_ASM(6715390);
    // chunk 0x6715390 _sub_6715390
    asm("loc_6715390: mov 4(%esp),%eax;");
    asm("loc_6715394: cmp $2,%eax;");
    asm("loc_6715397: jb loc_67153C8;");
    asm("loc_6715399: cmp $3,%eax;");
    asm("loc_671539C: ja loc_67153C8;");
    asm("loc_671539E: mov _data_671CFC4,%ecx;");
    asm("loc_67153A4: and $0x3FF,%ecx;");
    asm("loc_67153AA: cmp $0x12,%ecx;");
    asm("loc_67153AD: jne loc_67153B4;");
    asm("loc_67153AF: mov $3,%eax;");
    asm("loc_67153B4: push $1;");
    asm("loc_67153B6: mov %eax,_data_671B400;");
    asm("loc_67153BB: call _sub_67152F0;");
    asm("loc_67153C0: add $4,%esp;");
    asm("loc_67153C3: jmp _sub_67153D0;");
    asm("loc_67153C8: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67153D0() // _sub_67153D0
{
    __DEBUG_ASM(67153D0);
    // chunk 0x67153D0 _sub_67153D0
    asm("loc_67153D0: cmpl $2,_data_671B400;");
    asm("loc_67153D7: jne loc_67153E0;");
    asm("loc_67153D9: mov $0xFF000000,%eax;");
    asm("loc_67153DE: jmp loc_67153ED;");
    asm("loc_67153E0: mov _data_671909C,%eax;");
    asm("loc_67153E5: and $0xFF,%eax;");
    asm("loc_67153EA: shl $0x18,%eax;");
    asm("loc_67153ED: mov _data_6719088,%ecx;");
    asm("loc_67153F3: mov _data_671908C,%edx;");
    asm("loc_67153F9: or %eax,%ecx;");
    asm("loc_67153FB: or %eax,%edx;");
    asm("loc_67153FD: mov %ecx,_data_671B534;");
    asm("loc_6715403: mov _data_6719090,%ecx;");
    asm("loc_6715409: or %eax,%ecx;");
    asm("loc_671540B: mov %edx,_data_671B538;");
    asm("loc_6715411: mov _data_6719094,%edx;");
    asm("loc_6715417: mov %ecx,_data_671B53C;");
    asm("loc_671541D: mov _data_6719098,%ecx;");
    asm("loc_6715423: or %eax,%edx;");
    asm("loc_6715425: or %eax,%ecx;");
    asm("loc_6715427: mov %edx,_data_671B540;");
    asm("loc_671542D: mov %ecx,_data_671B544;");
    asm("loc_6715433: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6715440() // _sub_6715440
{
    __DEBUG_ASM(6715440);
    // chunk 0x6715440 _sub_6715440
    asm("loc_6715440: mov _data_671CFBA,%al;");
    asm("loc_6715445: test %al,%al;");
    asm("loc_6715447: je loc_671545B;");
    asm("loc_6715449: mov 4(%esp),%eax;");
    asm("loc_671544D: mov %eax,_data_671B7B4;");
    asm("loc_6715452: mov %eax,4(%esp);");
    asm("loc_6715456: jmp _sub_6715390;");
    asm("loc_671545B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6715460() // _sub_6715460
{
    __DEBUG_ASM(6715460);
    // chunk 0x6715460 _sub_6715460
    asm("loc_6715460: mov _data_671CFBA,%cl;");
    asm("loc_6715466: xor %eax,%eax;");
    asm("loc_6715468: cmp %al,%cl;");
    asm("loc_671546A: push %esi;");
    asm("loc_671546B: je loc_67154B1;");
    asm("loc_671546D: mov 8(%esp),%esi;");
    asm("loc_6715471: cmp %eax,%esi;");
    asm("loc_6715473: je loc_67154B1;");
    asm("loc_6715475: push %edi;");
    asm("loc_6715476: mov $0xF,%ecx;");
    asm("loc_671547B: mov $_data_6719068,%edi;");
    asm("loc_6715480: rep movsl (%esi),(%edi);");
    asm("loc_6715482: pop %edi;");
    asm("loc_6715483: mov %al,_data_671906B;");
    asm("loc_6715488: mov %al,_data_671906F;");
    asm("loc_671548D: mov %al,_data_6719073;");
    asm("loc_6715492: mov %al,_data_6719088+3;");
    asm("loc_6715497: mov %al,_data_671908C+3;");
    asm("loc_671549C: mov %al,_data_6719090+3;");
    asm("loc_67154A1: mov %al,_data_6719094+3;");
    asm("loc_67154A6: mov %al,_data_6719098+3;");
    asm("loc_67154AB: pop %esi;");
    asm("loc_67154AC: jmp _sub_67153D0;");
    asm("loc_67154B1: pop %esi;");
    asm("loc_67154B2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67154C0() // _sub_67154C0
{
    __DEBUG_ASM(67154C0);
    // chunk 0x67154C0 _sub_67154C0
    asm("loc_67154C0: sub $8,%esp;");
    asm("loc_67154C3: call _sub_6715DA0;");
    asm("loc_67154C8: mov _data_671CFC4,%eax;");
    asm("loc_67154CD: push %eax;");
    asm("loc_67154CE: call _sub_671697C;");
    asm("loc_67154D3: mov _data_671CFC4,%ecx;");
    asm("loc_67154D9: test %eax,%eax;");
    asm("loc_67154DB: setne %al;");
    asm("loc_67154DE: and $0x3FF,%ecx;");
    asm("loc_67154E4: mov %al,_data_671B7B9;");
    asm("loc_67154E9: cmp $4,%ecx;");
    asm("loc_67154EC: jne loc_67154F9;");
    asm("loc_67154EE: test %al,%al;");
    asm("loc_67154F0: movb $1,_data_671B7B8;");
    asm("loc_67154F7: jne loc_6715500;");
    asm("loc_67154F9: movb $0,_data_671B7B8;");
    asm("loc_6715500: mov _data_671CF98,%edx;");
    asm("loc_6715506: push %esi;");
    asm("loc_6715507: push %edx;");
    asm("loc_6715508: call _sub_6716988;");
    asm("loc_671550D: mov %eax,%esi;");
    asm("loc_671550F: test %esi,%esi;");
    asm("loc_6715511: je loc_6715589;");
    asm("loc_6715513: mov _data_671B7B8,%al;");
    asm("loc_6715518: test %al,%al;");
    asm("loc_671551A: je loc_6715551;");
    asm("loc_671551C: lea 8(%esp),%eax;");
    asm("loc_6715520: lea 4(%esp),%ecx;");
    asm("loc_6715524: push %eax;");
    asm("loc_6715525: push %ecx;");
    asm("loc_6715526: push %esi;");
    asm("loc_6715527: call _sub_671698E;");
    asm("loc_671552C: mov 4(%esp),%edx;");
    asm("loc_6715530: mov _data_671CF98,%eax;");
    asm("loc_6715535: and $1,%dl;");
    asm("loc_6715538: push %esi;");
    asm("loc_6715539: neg %dl;");
    asm("loc_671553B: sbb %edx,%edx;");
    asm("loc_671553D: push %eax;");
    asm("loc_671553E: add $2,%edx;");
    asm("loc_6715541: mov %edx,_data_671CFBC;");
    asm("loc_6715547: call _sub_6716982;");
    asm("loc_671554C: pop %esi;");
    asm("loc_671554D: add $8,%esp;");
    asm("loc_6715550: ret;");
    asm("loc_6715551: mov _data_671B7B9,%al;");
    asm("loc_6715556: test %al,%al;");
    asm("loc_6715558: je loc_671556E;");
    asm("loc_671555A: push %esi;");
    asm("loc_671555B: call _sub_67169C4;");
    asm("loc_6715560: test %eax,%eax;");
    asm("loc_6715562: movl $1,_data_671CFBC;");
    asm("loc_671556C: jne loc_6715578;");
    asm("loc_671556E: movl $0,_data_671CFBC;");
    asm("loc_6715578: mov _data_671CF98,%eax;");
    asm("loc_671557D: push %esi;");
    asm("loc_671557E: push %eax;");
    asm("loc_671557F: call _sub_6716982;");
    asm("loc_6715584: pop %esi;");
    asm("loc_6715585: add $8,%esp;");
    asm("loc_6715588: ret;");
    asm("loc_6715589: movl $0,_data_671CFBC;");
    asm("loc_6715593: pop %esi;");
    asm("loc_6715594: add $8,%esp;");
    asm("loc_6715597: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67155A0() // _sub_67155A0
{
    __DEBUG_ASM(67155A0);
    // chunk 0x67155A0 _sub_67155A0
    asm("loc_67155A0: mov _data_671CFBA,%al;");
    asm("loc_67155A5: test %al,%al;");
    asm("loc_67155A7: je loc_67155B2;");
    asm("loc_67155A9: mov 4(%esp),%al;");
    asm("loc_67155AD: mov %al,_data_67190A5;");
    asm("loc_67155B2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67155C0() // _sub_67155C0
{
    __DEBUG_ASM(67155C0);
    // chunk 0x67155C0 _sub_67155C0
    asm("loc_67155C0: mov _data_671CFBA,%al;");
    asm("loc_67155C5: test %al,%al;");
    asm("loc_67155C7: je loc_67155D6;");
    asm("loc_67155C9: cmpw $0,_data_671B7C0;");
    asm("loc_67155D1: je loc_67155D6;");
    asm("loc_67155D3: xor %eax,%eax;");
    asm("loc_67155D5: ret;");
    asm("loc_67155D6: mov $1,%eax;");
    asm("loc_67155DB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67155E0() // _sub_67155E0
{
    __DEBUG_ASM(67155E0);
    // chunk 0x67155E0 _sub_67155E0
    asm("loc_67155E0: mov _data_671CFBA,%al;");
    asm("loc_67155E5: test %al,%al;");
    asm("loc_67155E7: je loc_67155FC;");
    asm("loc_67155E9: mov 4(%esp),%eax;");
    asm("loc_67155ED: mov 8(%esp),%ecx;");
    asm("loc_67155F1: mov %eax,_data_671BAC8;");
    asm("loc_67155F6: mov %ecx,_data_671B7B0;");
    asm("loc_67155FC: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6715600() // _sub_6715600
{
    asm("jmp dgb_6715600;"); // jumptable skip
    asm(".long _jmp_6715A80;"); // jumptable address
    __DEBUG_ASM(6715600);
    // chunk 0x6715600 _sub_6715600
    asm("loc_6715600: sub $0x214,%esp;");
    asm("loc_6715606: mov _data_6719074,%edx;");
    asm("loc_671560C: push %ebx;");
    asm("loc_671560D: push %esi;");
    asm("loc_671560E: push %edi;");
    asm("loc_671560F: mov _data_671CFBC,%edi;");
    asm("loc_6715615: xor %ebx,%ebx;");
    asm("loc_6715617: cmp %ebx,%edi;");
    asm("loc_6715619: mov %edx,%eax;");
    asm("loc_671561B: setne 0x1C(%esp);");
    asm("loc_6715620: and $0xFF,%eax;");
    asm("loc_6715625: lea 0x20(%esp),%edi;");
    asm("loc_6715629: mov %eax,0xC(%esp);");
    asm("loc_671562D: xor %eax,%eax;");
    asm("loc_671562F: fildl 0xC(%esp);");
    asm("loc_6715633: fstps 0xC(%esp);");
    asm("loc_6715637: mov 0xC(%esp),%ecx;");
    asm("loc_671563B: mov %ecx,0x18(%esp);");
    asm("loc_671563F: mov $0x80,%ecx;");
    asm("loc_6715644: rep stos %eax,(%edi);");
    asm("loc_6715646: mov _data_6719074+2,%al;");
    asm("loc_671564B: cmp $4,%eax;");
    asm("loc_671564E: ja loc_67157A9;");
    asm("loc_6715654: jmpl *_jmp_6715A80(,%eax,4);");
    asm("loc_671565B: fildl _data_671B52C;");
    asm("loc_6715661: flds 0x18(%esp);");
    asm("loc_6715665: mov _data_671BAC8,%eax;");
    asm("loc_671566A: mov %ebx,0x14(%esp);");
    asm("loc_671566E: fadd %st(1),%st;");
    asm("loc_6715670: mov %eax,0x10(%esp);");
    asm("loc_6715674: shr $1,%dl;");
    asm("loc_6715676: fadds _data_6717220;");
    asm("loc_671567C: fildll 0x10(%esp);");
    asm("loc_6715680: and $0xFF,%edx;");
    asm("loc_6715686: fcompp;");
    asm("loc_6715688: fnstsw %ax;");
    asm("loc_671568A: test $5,%ah;");
    asm("loc_671568D: jp loc_67156C2;");
    asm("loc_671568F: fstp %st(0);");
    asm("loc_6715691: flds 0x18(%esp);");
    asm("loc_6715695: fmuls _data_671721C;");
    asm("loc_671569B: fiaddl _data_671B524;");
    asm("loc_67156A1: mov %edx,0xC(%esp);");
    asm("loc_67156A5: fsubs _data_6717220;");
    asm("loc_67156AB: fstps 0x20(%esp);");
    asm("loc_67156AF: fildl _data_671B530;");
    asm("loc_67156B5: fisubl 0xC(%esp);");
    asm("loc_67156B9: fstps 0x24(%esp);");
    asm("loc_67156BD: jmp loc_67157A9;");
    asm("loc_67156C2: flds 0x18(%esp);");
    asm("loc_67156C6: fmuls _data_6717218;");
    asm("loc_67156CC: fsubr %st(1),%st;");
    asm("loc_67156CE: fadds 0xC(%esp);");
    asm("loc_67156D2: mov %edx,0xC(%esp);");
    asm("loc_67156D6: fadds _data_6717220;");
    asm("loc_67156DC: fstps 0x20(%esp);");
    asm("loc_67156E0: fstp %st(0);");
    asm("loc_67156E2: fildl _data_671B530;");
    asm("loc_67156E8: fisubl 0xC(%esp);");
    asm("loc_67156EC: fstps 0x24(%esp);");
    asm("loc_67156F0: jmp loc_67157A9;");
    asm("loc_67156F5: flds 0x18(%esp);");
    asm("loc_67156F9: fmuls _data_6717218;");
    asm("loc_67156FF: fadds _data_6717220;");
    asm("loc_6715705: fsts 0x20(%esp);");
    asm("loc_6715709: fstps 0x24(%esp);");
    asm("loc_671570D: jmp loc_67157A9;");
    asm("loc_6715712: flds 0x18(%esp);");
    asm("loc_6715716: fmuls _data_6717218;");
    asm("loc_671571C: mov _data_671BAC8,%ecx;");
    asm("loc_6715722: mov %ebx,0x14(%esp);");
    asm("loc_6715726: mov %ecx,0x10(%esp);");
    asm("loc_671572A: fadds _data_6717220;");
    asm("loc_6715730: fildll 0x10(%esp);");
    asm("loc_6715734: fsub %st(1),%st;");
    asm("loc_6715736: fstps 0x20(%esp);");
    asm("loc_671573A: fstps 0x24(%esp);");
    asm("loc_671573E: jmp loc_67157A9;");
    asm("loc_6715740: flds 0x18(%esp);");
    asm("loc_6715744: fmuls _data_6717218;");
    asm("loc_671574A: mov _data_671BAC8,%edx;");
    asm("loc_6715750: mov %ebx,0x14(%esp);");
    asm("loc_6715754: mov %edx,0x10(%esp);");
    asm("loc_6715758: mov _data_671B7B0,%eax;");
    asm("loc_671575D: fadds _data_6717220;");
    asm("loc_6715763: fildll 0x10(%esp);");
    asm("loc_6715767: mov %eax,0x10(%esp);");
    asm("loc_671576B: mov %ebx,0x14(%esp);");
    asm("loc_671576F: fsub %st(1),%st;");
    asm("loc_6715771: fstps 0x20(%esp);");
    asm("loc_6715775: fildll 0x10(%esp);");
    asm("loc_6715779: jmp loc_67157A1;");
    asm("loc_671577B: flds 0x18(%esp);");
    asm("loc_671577F: fmuls _data_6717218;");
    asm("loc_6715785: mov _data_671B7B0,%ecx;");
    asm("loc_671578B: mov %ebx,0x14(%esp);");
    asm("loc_671578F: mov %ecx,0x10(%esp);");
    asm("loc_6715793: fadds _data_6717220;");
    asm("loc_6715799: fsts 0x20(%esp);");
    asm("loc_671579D: fildll 0x10(%esp);");
    asm("loc_67157A1: fsub %st(1),%st;");
    asm("loc_67157A3: fstps 0x24(%esp);");
    asm("loc_67157A7: fstp %st(0);");
    asm("loc_67157A9: mov 0x1C(%esp),%al;");
    asm("loc_67157AD: movl $0x3F800000,0x2C(%esp);");
    asm("loc_67157B5: cmp %bl,%al;");
    asm("loc_67157B7: je loc_6715806;");
    asm("loc_67157B9: mov _import_67170A4,%esi;");
    asm("loc_67157BF: call *%esi;");
    asm("loc_67157C1: mov %eax,0x10(%esp);");
    asm("loc_67157C5: mov %ebx,0x14(%esp);");
    asm("loc_67157C9: fildll 0x10(%esp);");
    asm("loc_67157CD: fsubl _data_671CEE0;");
    asm("loc_67157D3: fcompl _data_6717210;");
    asm("loc_67157D9: fnstsw %ax;");
    asm("loc_67157DB: and $0x4100,%eax;");
    asm("loc_67157E0: jne loc_671580C;");
    asm("loc_67157E2: incl _data_671CFC0;");
    asm("loc_67157E8: call *%esi;");
    asm("loc_67157EA: mov %eax,0x10(%esp);");
    asm("loc_67157EE: mov _data_671CFC0,%eax;");
    asm("loc_67157F3: mov %ebx,0x14(%esp);");
    asm("loc_67157F7: cmp $0xD,%eax;");
    asm("loc_67157FA: fildll 0x10(%esp);");
    asm("loc_67157FE: fstpl _data_671CEE0;");
    asm("loc_6715804: jbe loc_671580C;");
    asm("loc_6715806: mov %ebx,_data_671CFC0;");
    asm("loc_671580C: mov 0x1C(%esp),%ecx;");
    asm("loc_6715810: lea 0x44(%esp),%eax;");
    asm("loc_6715814: flds 0x18(%esp);");
    asm("loc_6715818: fmuls _data_6717218;");
    asm("loc_671581E: and $0xFF,%ecx;");
    asm("loc_6715824: mov $0xF,%edx;");
    asm("loc_6715829: imul _data_671CFC0,%ecx;");
    asm("loc_6715830: mov $0x3F800000,%esi;");
    asm("loc_6715835: mov %ecx,0x10(%esp);");
    asm("loc_6715839: mov %ebx,0x14(%esp);");
    asm("loc_671583D: fildll 0x10(%esp);");
    asm("loc_6715841: inc %ecx;");
    asm("loc_6715842: add $0x20,%eax;");
    asm("loc_6715845: dec %edx;");
    asm("loc_6715846: fmuls _data_671720C;");
    asm("loc_671584C: fld %st(0);");
    asm("loc_671584E: fcos;");
    asm("loc_6715850: fld %st(2);");
    asm("loc_6715852: fmulp;");
    asm("loc_6715854: fadds 0x20(%esp);");
    asm("loc_6715858: fstps -0x24(%eax);");
    asm("loc_671585B: fsin;");
    asm("loc_671585D: fld %st(1);");
    asm("loc_671585F: fmulp;");
    asm("loc_6715861: fadds 0x24(%esp);");
    asm("loc_6715865: fstps -0x20(%eax);");
    asm("loc_6715868: mov %esi,-0x18(%eax);");
    asm("loc_671586B: jne loc_6715835;");
    asm("loc_671586D: mov _data_6719068,%ecx;");
    asm("loc_6715873: xor %eax,%eax;");
    asm("loc_6715875: mov _data_6719074+1,%al;");
    asm("loc_671587A: shl $0x18,%eax;");
    asm("loc_671587D: cmp %ebx,%ecx;");
    asm("loc_671587F: lea 0xFFFFFF(%eax),%edx;");
    asm("loc_6715885: fstp %st(0);");
    asm("loc_6715887: mov %edx,0x30(%esp);");
    asm("loc_671588B: jne loc_6715959;");
    asm("loc_6715891: cmp %bl,0x1C(%esp);");
    asm("loc_6715895: je loc_671595F;");
    asm("loc_671589B: lea 0xFF0000(%eax),%ecx;");
    asm("loc_67158A1: lea 0xFF3000(%eax),%edx;");
    asm("loc_67158A7: mov %ecx,0x50(%esp);");
    asm("loc_67158AB: mov %edx,0x70(%esp);");
    asm("loc_67158AF: lea 0xFF6000(%eax),%ecx;");
    asm("loc_67158B5: lea 0xFF9000(%eax),%edx;");
    asm("loc_67158BB: mov %ecx,0x90(%esp);");
    asm("loc_67158C2: mov %edx,0xB0(%esp);");
    asm("loc_67158C9: lea 0xFFC000(%eax),%ecx;");
    asm("loc_67158CF: lea 0xFFFF00(%eax),%edx;");
    asm("loc_67158D5: mov %ecx,0xD0(%esp);");
    asm("loc_67158DC: mov %edx,0xF0(%esp);");
    asm("loc_67158E3: lea 0xC0FF00(%eax),%ecx;");
    asm("loc_67158E9: lea 0x90FF00(%eax),%edx;");
    asm("loc_67158EF: mov %ecx,0x110(%esp);");
    asm("loc_67158F6: mov %edx,0x130(%esp);");
    asm("loc_67158FD: lea 0x60FF00(%eax),%ecx;");
    asm("loc_6715903: lea 0x30C0FF(%eax),%edx;");
    asm("loc_6715909: mov %ecx,0x150(%esp);");
    asm("loc_6715910: mov %edx,0x170(%esp);");
    asm("loc_6715917: lea 0xA0FF(%eax),%ecx;");
    asm("loc_671591D: lea 0x3090FF(%eax),%edx;");
    asm("loc_6715923: mov %ecx,0x190(%esp);");
    asm("loc_671592A: mov %edx,0x1B0(%esp);");
    asm("loc_6715931: lea 0x6060FF(%eax),%ecx;");
    asm("loc_6715937: lea 0x9030FF(%eax),%edx;");
    asm("loc_671593D: add $0xC000FF,%eax;");
    asm("loc_6715942: mov %ecx,0x1D0(%esp);");
    asm("loc_6715949: mov %edx,0x1F0(%esp);");
    asm("loc_6715950: mov %eax,0x210(%esp);");
    asm("loc_6715957: jmp loc_6715979;");
    asm("loc_6715959: cmp %bl,0x1C(%esp);");
    asm("loc_671595D: jne loc_6715965;");
    asm("loc_671595F: mov _data_671906C,%ecx;");
    asm("loc_6715965: lea (%eax,%ecx),%edx;");
    asm("loc_6715968: lea 0x50(%esp),%eax;");
    asm("loc_671596C: mov $0xF,%ecx;");
    asm("loc_6715971: mov %edx,(%eax);");
    asm("loc_6715973: add $0x20,%eax;");
    asm("loc_6715976: dec %ecx;");
    asm("loc_6715977: jne loc_6715971;");
    asm("loc_6715979: lea 0x20(%esp),%eax;");
    asm("loc_671597D: push $0x10;");
    asm("loc_671597F: push %eax;");
    asm("loc_6715980: calll *_data_671BACC;");
    asm("loc_6715986: mov _data_6719074,%ecx;");
    asm("loc_671598C: mov _data_671CFC4,%edx;");
    asm("loc_6715992: and $0xFF,%ecx;");
    asm("loc_6715998: and $0x3FF,%edx;");
    asm("loc_671599E: mov %ecx,0x14(%esp);");
    asm("loc_67159A2: add $8,%esp;");
    asm("loc_67159A5: fildl 0xC(%esp);");
    asm("loc_67159A9: cmp $0x12,%edx;");
    asm("loc_67159AC: fmuls _data_6717208;");
    asm("loc_67159B2: jne loc_67159C0;");
    asm("loc_67159B4: cmp %bl,0x1C(%esp);");
    asm("loc_67159B8: je loc_67159C0;");
    asm("loc_67159BA: fmuls _data_6717204;");
    asm("loc_67159C0: mov _data_6719078,%esi;");
    asm("loc_67159C6: cmp %ebx,%esi;");
    asm("loc_67159C8: je loc_6715A74;");
    asm("loc_67159CE: fmuls _data_6717200;");
    asm("loc_67159D4: mov (%esi),%edi;");
    asm("loc_67159D6: call _sub_6716B20;");
    asm("loc_67159DB: push %eax;");
    asm("loc_67159DC: mov %esi,%ecx;");
    asm("loc_67159DE: calll *(%edi);");
    asm("loc_67159E0: mov _data_6719078,%ecx;");
    asm("loc_67159E6: mov _data_6719070,%edi;");
    asm("loc_67159EC: xor %edx,%edx;");
    asm("loc_67159EE: mov _data_6719074+1,%dl;");
    asm("loc_67159F4: mov (%ecx),%eax;");
    asm("loc_67159F6: shl $0x18,%edx;");
    asm("loc_67159F9: or %edi,%edx;");
    asm("loc_67159FB: push %edx;");
    asm("loc_67159FC: calll *4(%eax);");
    asm("loc_67159FF: mov _data_671CFBC,%eax;");
    asm("loc_6715A04: mov _data_671CF90,%esi;");
    asm("loc_6715A0A: cmp $1,%eax;");
    asm("loc_6715A0D: je loc_6715A15;");
    asm("loc_6715A0F: mov _off_67190A8,%esi;");
    asm("loc_6715A15: mov _data_6719078,%ecx;");
    asm("loc_6715A1B: lea 0xC(%esp),%edx;");
    asm("loc_6715A1F: push %ebp;");
    asm("loc_6715A20: push %edx;");
    asm("loc_6715A21: mov (%ecx),%eax;");
    asm("loc_6715A23: lea 0x24(%esp),%edx;");
    asm("loc_6715A27: push %edx;");
    asm("loc_6715A28: push %esi;");
    asm("loc_6715A29: calll *0xC(%eax);");
    asm("loc_6715A2C: mov _data_6719078,%edi;");
    asm("loc_6715A32: mov 0x10(%esp),%ebp;");
    asm("loc_6715A36: flds 0x28(%esp);");
    asm("loc_6715A3A: mov (%edi),%ebx;");
    asm("loc_6715A3C: shr $1,%ebp;");
    asm("loc_6715A3E: call _sub_6716B20;");
    asm("loc_6715A43: flds 0x24(%esp);");
    asm("loc_6715A47: sub %ebp,%eax;");
    asm("loc_6715A49: mov 0x20(%esp),%ebp;");
    asm("loc_6715A4D: push %eax;");
    asm("loc_6715A4E: shr $1,%ebp;");
    asm("loc_6715A50: call _sub_6716B20;");
    asm("loc_6715A55: sub %ebp,%eax;");
    asm("loc_6715A57: mov %edi,%ecx;");
    asm("loc_6715A59: push %eax;");
    asm("loc_6715A5A: calll *8(%ebx);");
    asm("loc_6715A5D: mov _data_6719078,%ecx;");
    asm("loc_6715A63: push %esi;");
    asm("loc_6715A64: mov (%ecx),%eax;");
    asm("loc_6715A66: calll *0x10(%eax);");
    asm("loc_6715A69: pop %ebp;");
    asm("loc_6715A6A: pop %edi;");
    asm("loc_6715A6B: pop %esi;");
    asm("loc_6715A6C: pop %ebx;");
    asm("loc_6715A6D: add $0x214,%esp;");
    asm("loc_6715A73: ret;");
    asm("loc_6715A74: pop %edi;");
    asm("loc_6715A75: pop %esi;");
    asm("loc_6715A76: fstp %st(0);");
    asm("loc_6715A78: pop %ebx;");
    asm("loc_6715A79: add $0x214,%esp;");
    asm("loc_6715A7F: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_6715A80: .long loc_671565B;");
    asm(".long loc_67156F5;");
    asm(".long loc_6715712;");
    asm(".long loc_6715740;");
    asm(".long loc_671577B;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6715600);
_naked _weak void _sub_6715AA0() // _sub_6715AA0
{
    __DEBUG_ASM(6715AA0);
    // chunk 0x6715AA0 _sub_6715AA0
    asm("loc_6715AA0: mov _data_671CFC4,%eax;");
    asm("loc_6715AA5: sub $0x114,%esp;");
    asm("loc_6715AAB: cmp $0xE00E0804,%eax;");
    asm("loc_6715AB0: push %esi;");
    asm("loc_6715AB1: je loc_6715BB4;");
    asm("loc_6715AB7: cmp $0xE0090404,%eax;");
    asm("loc_6715ABC: je loc_6715BB4;");
    asm("loc_6715AC2: mov 0x11C(%esp),%eax;");
    asm("loc_6715AC9: test %eax,%eax;");
    asm("loc_6715ACB: je loc_6715BB4;");
    asm("loc_6715AD1: mov %eax,%ecx;");
    asm("loc_6715AD3: movb $0,_data_671CFAD;");
    asm("loc_6715ADA: and $0xFFFF,%ecx;");
    asm("loc_6715AE0: cmp $0x404,%ecx;");
    asm("loc_6715AE6: jne loc_6715BAC;");
    asm("loc_6715AEC: lea 0x14(%esp),%edx;");
    asm("loc_6715AF0: and $0xFFFF0000,%eax;");
    asm("loc_6715AF5: push $_data_6719264;");
    asm("loc_6715AFA: push %edx;");
    asm("loc_6715AFB: mov %eax,%esi;");
    asm("loc_6715AFD: calll *_import_6717064;");
    asm("loc_6715B03: cmp $0x5010000,%esi;");
    asm("loc_6715B09: mov $_data_671925C,%eax;");
    asm("loc_6715B0E: jae loc_6715B15;");
    asm("loc_6715B10: mov $_data_6719250,%eax;");
    asm("loc_6715B15: push %eax;");
    asm("loc_6715B16: lea 0x18(%esp),%eax;");
    asm("loc_6715B1A: push %eax;");
    asm("loc_6715B1B: calll *_import_6717074;");
    asm("loc_6715B21: lea 4(%esp),%ecx;");
    asm("loc_6715B25: lea 0x14(%esp),%edx;");
    asm("loc_6715B29: push %ecx;");
    asm("loc_6715B2A: push $0x20019;");
    asm("loc_6715B2F: push $0;");
    asm("loc_6715B31: push %edx;");
    asm("loc_6715B32: push $0x80000001;");
    asm("loc_6715B37: calll *_import_6717004;");
    asm("loc_6715B3D: test %eax,%eax;");
    asm("loc_6715B3F: jne loc_6715BAC;");
    asm("loc_6715B41: lea 0xC(%esp),%eax;");
    asm("loc_6715B45: lea 8(%esp),%ecx;");
    asm("loc_6715B49: push %eax;");
    asm("loc_6715B4A: mov 8(%esp),%eax;");
    asm("loc_6715B4E: lea 0x14(%esp),%edx;");
    asm("loc_6715B52: push %ecx;");
    asm("loc_6715B53: push %edx;");
    asm("loc_6715B54: push $0;");
    asm("loc_6715B56: push $_data_671923C;");
    asm("loc_6715B5B: push %eax;");
    asm("loc_6715B5C: movl $4,0x24(%esp);");
    asm("loc_6715B64: calll *_import_6717008;");
    asm("loc_6715B6A: test %eax,%eax;");
    asm("loc_6715B6C: jne loc_6715BA1;");
    asm("loc_6715B6E: mov 8(%esp),%al;");
    asm("loc_6715B72: cmp $0x5000000,%esi;");
    asm("loc_6715B78: ja loc_6715B82;");
    asm("loc_6715B7A: cmp $0x22,%al;");
    asm("loc_6715B7C: je loc_6715B9A;");
    asm("loc_6715B7E: cmp $0x23,%al;");
    asm("loc_6715B80: je loc_6715B9A;");
    asm("loc_6715B82: cmp $0x5010000,%esi;");
    asm("loc_6715B88: je loc_6715B92;");
    asm("loc_6715B8A: cmp $0x5020000,%esi;");
    asm("loc_6715B90: jne loc_6715BA1;");
    asm("loc_6715B92: cmp $0x22,%al;");
    asm("loc_6715B94: jb loc_6715BA1;");
    asm("loc_6715B96: cmp $0x24,%al;");
    asm("loc_6715B98: ja loc_6715BA1;");
    asm("loc_6715B9A: movb $1,_data_671CFAD;");
    asm("loc_6715BA1: mov 4(%esp),%ecx;");
    asm("loc_6715BA5: push %ecx;");
    asm("loc_6715BA6: calll *_import_6717000;");
    asm("loc_6715BAC: pop %esi;");
    asm("loc_6715BAD: add $0x114,%esp;");
    asm("loc_6715BB3: ret;");
    asm("loc_6715BB4: movb $1,_data_671CFAD;");
    asm("loc_6715BBB: pop %esi;");
    asm("loc_6715BBC: add $0x114,%esp;");
    asm("loc_6715BC2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6715BD0() // _sub_6715BD0
{
    __DEBUG_ASM(6715BD0);
    // chunk 0x6715BD0 _sub_6715BD0
    asm("loc_6715BD0: push %ecx;");
    asm("loc_6715BD1: mov _data_6719168,%eax;");
    asm("loc_6715BD6: push %ebp;");
    asm("loc_6715BD7: mov 0xC(%esp),%ebp;");
    asm("loc_6715BDB: push %esi;");
    asm("loc_6715BDC: cmp $1,%eax;");
    asm("loc_6715BDF: push %edi;");
    asm("loc_6715BE0: je loc_6715BEB;");
    asm("loc_6715BE2: cmp $1,%ebp;");
    asm("loc_6715BE5: je loc_6715BEB;");
    asm("loc_6715BE7: xor %al,%al;");
    asm("loc_6715BE9: jmp loc_6715BED;");
    asm("loc_6715BEB: mov $1,%al;");
    asm("loc_6715BED: test %al,%al;");
    asm("loc_6715BEF: mov %ebp,_data_6719168;");
    asm("loc_6715BF5: je loc_6715D1C;");
    asm("loc_6715BFB: cmpl $0xFFFFFFFF,_data_671916C;");
    asm("loc_6715C02: jne loc_6715C47;");
    asm("loc_6715C04: cmpl $2,_data_671CEF8+0x10;");
    asm("loc_6715C0B: jne loc_6715C3D;");
    asm("loc_6715C0D: cmpl $5,_data_671CEF8+4;");
    asm("loc_6715C14: jb loc_6715C3D;");
    asm("loc_6715C16: mov _data_671CEF8+8,%eax;");
    asm("loc_6715C1B: cmp $1,%eax;");
    asm("loc_6715C1E: ja loc_6715C31;");
    asm("loc_6715C20: jne loc_6715C3D;");
    asm("loc_6715C22: push $_data_671CEF8+0x14;");
    asm("loc_6715C27: calll *_import_6717068;");
    asm("loc_6715C2D: test %eax,%eax;");
    asm("loc_6715C2F: je loc_6715C3D;");
    asm("loc_6715C31: movl $1,_data_671916C;");
    asm("loc_6715C3B: jmp loc_6715C47;");
    asm("loc_6715C3D: movl $0,_data_671916C;");
    asm("loc_6715C47: mov _data_671CF98,%eax;");
    asm("loc_6715C4C: push %eax;");
    asm("loc_6715C4D: call _sub_67169CA;");
    asm("loc_6715C52: mov _import_671710C,%edi;");
    asm("loc_6715C58: mov %eax,%esi;");
    asm("loc_6715C5A: test %esi,%esi;");
    asm("loc_6715C5C: je loc_6715C77;");
    asm("loc_6715C5E: test %ebp,%ebp;");
    asm("loc_6715C60: je loc_6715C77;");
    asm("loc_6715C62: mov _data_671916C,%eax;");
    asm("loc_6715C67: test %eax,%eax;");
    asm("loc_6715C69: je loc_6715C77;");
    asm("loc_6715C6B: push $0;");
    asm("loc_6715C6D: push $0x22;");
    asm("loc_6715C6F: push $0x283;");
    asm("loc_6715C74: push %esi;");
    asm("loc_6715C75: call *%edi;");
    asm("loc_6715C77: push $0;");
    asm("loc_6715C79: calll *_import_6717134;");
    asm("loc_6715C7F: test %eax,%eax;");
    asm("loc_6715C81: jl loc_6715D09;");
    asm("loc_6715C87: lea 0x14(%esp),%ecx;");
    asm("loc_6715C8B: movl $0,0x14(%esp);");
    asm("loc_6715C93: push %ecx;");
    asm("loc_6715C94: push $_data_6717804;");
    asm("loc_6715C99: push $1;");
    asm("loc_6715C9B: push $0;");
    asm("loc_6715C9D: push $_data_6717494;");
    asm("loc_6715CA2: calll *_import_671712C;");
    asm("loc_6715CA8: test %eax,%eax;");
    asm("loc_6715CAA: jl loc_6715D03;");
    asm("loc_6715CAC: mov 0x14(%esp),%eax;");
    asm("loc_6715CB0: test %eax,%eax;");
    asm("loc_6715CB2: je loc_6715D03;");
    asm("loc_6715CB4: test %ebp,%ebp;");
    asm("loc_6715CB6: je loc_6715CCB;");
    asm("loc_6715CB8: mov _data_671B7A8,%ecx;");
    asm("loc_6715CBE: test %ecx,%ecx;");
    asm("loc_6715CC0: je loc_6715CFD;");
    asm("loc_6715CC2: mov (%eax),%edx;");
    asm("loc_6715CC4: push %ecx;");
    asm("loc_6715CC5: push %eax;");
    asm("loc_6715CC6: calll *0x28(%edx);");
    asm("loc_6715CC9: jmp loc_6715CF9;");
    asm("loc_6715CCB: mov (%eax),%ecx;");
    asm("loc_6715CCD: lea 0xC(%esp),%edx;");
    asm("loc_6715CD1: push %edx;");
    asm("loc_6715CD2: push %eax;");
    asm("loc_6715CD3: calll *0x2C(%ecx);");
    asm("loc_6715CD6: test %eax,%eax;");
    asm("loc_6715CD8: jl loc_6715CE3;");
    asm("loc_6715CDA: mov 0xC(%esp),%eax;");
    asm("loc_6715CDE: mov %eax,_data_671B7A8;");
    asm("loc_6715CE3: mov _data_671B7A8,%eax;");
    asm("loc_6715CE8: test $8,%ah;");
    asm("loc_6715CEB: jne loc_6715CF9;");
    asm("loc_6715CED: mov 0x14(%esp),%eax;");
    asm("loc_6715CF1: push $8;");
    asm("loc_6715CF3: push %eax;");
    asm("loc_6715CF4: mov (%eax),%ecx;");
    asm("loc_6715CF6: calll *0x28(%ecx);");
    asm("loc_6715CF9: mov 0x14(%esp),%eax;");
    asm("loc_6715CFD: mov (%eax),%edx;");
    asm("loc_6715CFF: push %eax;");
    asm("loc_6715D00: calll *8(%edx);");
    asm("loc_6715D03: calll *_import_6717130;");
    asm("loc_6715D09: test %esi,%esi;");
    asm("loc_6715D0B: je loc_6715D1C;");
    asm("loc_6715D0D: test %ebp,%ebp;");
    asm("loc_6715D0F: jne loc_6715D1C;");
    asm("loc_6715D11: push %ebp;");
    asm("loc_6715D12: push $0x21;");
    asm("loc_6715D14: push $0x283;");
    asm("loc_6715D19: push %esi;");
    asm("loc_6715D1A: call *%edi;");
    asm("loc_6715D1C: pop %edi;");
    asm("loc_6715D1D: pop %esi;");
    asm("loc_6715D1E: pop %ebp;");
    asm("loc_6715D1F: pop %ecx;");
    asm("loc_6715D20: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6715D30() // _sub_6715D30
{
    __DEBUG_ASM(6715D30);
    // chunk 0x6715D30 _sub_6715D30
    asm("loc_6715D30: mov _data_671CFC4,%ecx;");
    asm("loc_6715D36: sub $0x108,%esp;");
    asm("loc_6715D3C: lea (%esp),%eax;");
    asm("loc_6715D40: push %esi;");
    asm("loc_6715D41: push %edi;");
    asm("loc_6715D42: push $0x104;");
    asm("loc_6715D47: xor %edi,%edi;");
    asm("loc_6715D49: push %eax;");
    asm("loc_6715D4A: push %ecx;");
    asm("loc_6715D4B: mov %edi,_data_671B548;");
    asm("loc_6715D51: mov %edi,_data_671CEF4;");
    asm("loc_6715D57: call _sub_67169B2;");
    asm("loc_6715D5C: test %eax,%eax;");
    asm("loc_6715D5E: jbe loc_6715D91;");
    asm("loc_6715D60: lea 8(%esp),%edx;");
    asm("loc_6715D64: push %edx;");
    asm("loc_6715D65: calll *_import_67170A8;");
    asm("loc_6715D6B: mov %eax,%esi;");
    asm("loc_6715D6D: cmp %edi,%esi;");
    asm("loc_6715D6F: je loc_6715D91;");
    asm("loc_6715D71: mov _off_6719358,%edi;");
    asm("loc_6715D77: push $_data_67192A4;");
    asm("loc_6715D7C: push %esi;");
    asm("loc_6715D7D: call *%edi;");
    asm("loc_6715D7F: push $_data_6719290;");
    asm("loc_6715D84: push %esi;");
    asm("loc_6715D85: mov %eax,_data_671B548;");
    asm("loc_6715D8A: call *%edi;");
    asm("loc_6715D8C: mov %eax,_data_671CEF4;");
    asm("loc_6715D91: pop %edi;");
    asm("loc_6715D92: pop %esi;");
    asm("loc_6715D93: add $0x108,%esp;");
    asm("loc_6715D99: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6715DA0() // _sub_6715DA0
{
    __DEBUG_ASM(6715DA0);
    // chunk 0x6715DA0 _sub_6715DA0
    asm("loc_6715DA0: sub $8,%esp;");
    asm("loc_6715DA3: push $0;");
    asm("loc_6715DA5: calll *_import_6717108;");
    asm("loc_6715DAB: mov _data_671CFE0,%ecx;");
    asm("loc_6715DB1: mov %eax,_data_671CFC4;");
    asm("loc_6715DB6: cmp %eax,%ecx;");
    asm("loc_6715DB8: je loc_6715EAE;");
    asm("loc_6715DBE: mov %eax,%edx;");
    asm("loc_6715DC0: mov %eax,_data_671CFE0;");
    asm("loc_6715DC5: and $0xFFFF,%edx;");
    asm("loc_6715DCB: mov %edx,%ecx;");
    asm("loc_6715DCD: and $0x3FF,%ecx;");
    asm("loc_6715DD3: sub $4,%ecx;");
    asm("loc_6715DD6: je loc_6715E12;");
    asm("loc_6715DD8: sub $0xD,%ecx;");
    asm("loc_6715DDB: je loc_6715DFD;");
    asm("loc_6715DDD: dec %ecx;");
    asm("loc_6715DDE: je loc_6715DEE;");
    asm("loc_6715DE0: mov _off_67190A8,%ecx;");
    asm("loc_6715DE6: mov %ecx,_data_671CF90;");
    asm("loc_6715DEC: jmp loc_6715E5C;");
    asm("loc_6715DEE: mov _off_67190B4,%edx;");
    asm("loc_6715DF4: movb $0,_data_67190A4;");
    asm("loc_6715DFB: jmp loc_6715E56;");
    asm("loc_6715DFD: mov _off_67190B8,%ecx;");
    asm("loc_6715E03: movb $1,_data_67190A4;");
    asm("loc_6715E0A: mov %ecx,_data_671CF90;");
    asm("loc_6715E10: jmp loc_6715E5C;");
    asm("loc_6715E12: shr $0xA,%edx;");
    asm("loc_6715E15: dec %edx;");
    asm("loc_6715E16: movb $1,_data_67190A4;");
    asm("loc_6715E1D: je loc_6715E50;");
    asm("loc_6715E1F: dec %edx;");
    asm("loc_6715E20: je loc_6715E2A;");
    asm("loc_6715E22: mov _off_67190A8,%edx;");
    asm("loc_6715E28: jmp loc_6715E56;");
    asm("loc_6715E2A: mov _off_67190AC,%eax;");
    asm("loc_6715E2F: push $0;");
    asm("loc_6715E31: mov %eax,_data_671CF90;");
    asm("loc_6715E36: call _sub_6714BD0;");
    asm("loc_6715E3B: add $4,%esp;");
    asm("loc_6715E3E: test %eax,%eax;");
    asm("loc_6715E40: mov _data_671CFC4,%eax;");
    asm("loc_6715E45: sete %cl;");
    asm("loc_6715E48: mov %cl,_data_67190A4;");
    asm("loc_6715E4E: jmp loc_6715E5C;");
    asm("loc_6715E50: mov _off_67190B0,%edx;");
    asm("loc_6715E56: mov %edx,_data_671CF90;");
    asm("loc_6715E5C: push %esi;");
    asm("loc_6715E5D: push %edi;");
    asm("loc_6715E5E: lea 8(%esp),%ecx;");
    asm("loc_6715E62: push $8;");
    asm("loc_6715E64: push %ecx;");
    asm("loc_6715E65: and $0xFFFF,%eax;");
    asm("loc_6715E6A: push $0x1004;");
    asm("loc_6715E6F: push %eax;");
    asm("loc_6715E70: calll *_import_6717070;");
    asm("loc_6715E76: push $0;");
    asm("loc_6715E78: lea 0xC(%esp),%edx;");
    asm("loc_6715E7C: push $0;");
    asm("loc_6715E7E: push %edx;");
    asm("loc_6715E7F: call _sub_6715EC0;");
    asm("loc_6715E84: mov _import_671706C,%edi;");
    asm("loc_6715E8A: add $0xC,%esp;");
    asm("loc_6715E8D: mov %eax,_data_671CFC8;");
    asm("loc_6715E92: xor %esi,%esi;");
    asm("loc_6715E94: mov _data_671CFC8,%eax;");
    asm("loc_6715E99: push %esi;");
    asm("loc_6715E9A: push %eax;");
    asm("loc_6715E9B: call *%edi;");
    asm("loc_6715E9D: mov %al,_data_671B9C8(%esi);");
    asm("loc_6715EA3: inc %esi;");
    asm("loc_6715EA4: cmp $0x100,%esi;");
    asm("loc_6715EAA: jl loc_6715E94;");
    asm("loc_6715EAC: pop %edi;");
    asm("loc_6715EAD: pop %esi;");
    asm("loc_6715EAE: add $8,%esp;");
    asm("loc_6715EB1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6715EC0() // _sub_6715EC0
{
    __DEBUG_ASM(6715EC0);
    // chunk 0x6715EC0 _sub_6715EC0
    asm("loc_6715EC0: mov 4(%esp),%edx;");
    asm("loc_6715EC4: test %edx,%edx;");
    asm("loc_6715EC6: jne loc_6715ECB;");
    asm("loc_6715EC8: xor %eax,%eax;");
    asm("loc_6715ECA: ret;");
    asm("loc_6715ECB: mov (%edx),%cl;");
    asm("loc_6715ECD: push %esi;");
    asm("loc_6715ECE: xor %esi,%esi;");
    asm("loc_6715ED0: cmp $0x30,%cl;");
    asm("loc_6715ED3: jne loc_6715F2F;");
    asm("loc_6715ED5: mov 1(%edx),%al;");
    asm("loc_6715ED8: cmp $0x78,%al;");
    asm("loc_6715EDA: je loc_6715EE0;");
    asm("loc_6715EDC: cmp $0x58,%al;");
    asm("loc_6715EDE: jne loc_6715F2F;");
    asm("loc_6715EE0: mov 2(%edx),%cl;");
    asm("loc_6715EE3: add $2,%edx;");
    asm("loc_6715EE6: test %cl,%cl;");
    asm("loc_6715EE8: je loc_6715F4E;");
    asm("loc_6715EEA: cmp $0x30,%cl;");
    asm("loc_6715EED: jl loc_6715EFC;");
    asm("loc_6715EEF: cmp $0x39,%cl;");
    asm("loc_6715EF2: jg loc_6715EFC;");
    asm("loc_6715EF4: movsbl %cl,%ecx;");
    asm("loc_6715EF7: sub $0x30,%ecx;");
    asm("loc_6715EFA: jmp loc_6715F1E;");
    asm("loc_6715EFC: cmp $0x41,%cl;");
    asm("loc_6715EFF: jl loc_6715F0E;");
    asm("loc_6715F01: cmp $0x46,%cl;");
    asm("loc_6715F04: jg loc_6715F0E;");
    asm("loc_6715F06: movsbl %cl,%ecx;");
    asm("loc_6715F09: sub $0x37,%ecx;");
    asm("loc_6715F0C: jmp loc_6715F1E;");
    asm("loc_6715F0E: cmp $0x61,%cl;");
    asm("loc_6715F11: jl loc_6715F4E;");
    asm("loc_6715F13: cmp $0x66,%cl;");
    asm("loc_6715F16: jg loc_6715F4E;");
    asm("loc_6715F18: movsbl %cl,%ecx;");
    asm("loc_6715F1B: sub $0x57,%ecx;");
    asm("loc_6715F1E: shl $4,%esi;");
    asm("loc_6715F21: add %ecx,%esi;");
    asm("loc_6715F23: mov 1(%edx),%cl;");
    asm("loc_6715F26: inc %edx;");
    asm("loc_6715F27: test %cl,%cl;");
    asm("loc_6715F29: jne loc_6715EEA;");
    asm("loc_6715F2B: mov %esi,%eax;");
    asm("loc_6715F2D: pop %esi;");
    asm("loc_6715F2E: ret;");
    asm("loc_6715F2F: test %cl,%cl;");
    asm("loc_6715F31: je loc_6715F4E;");
    asm("loc_6715F33: cmp $0x30,%cl;");
    asm("loc_6715F36: jl loc_6715F4E;");
    asm("loc_6715F38: cmp $0x39,%cl;");
    asm("loc_6715F3B: jg loc_6715F4E;");
    asm("loc_6715F3D: movsbl %cl,%ecx;");
    asm("loc_6715F40: lea (%esi,%esi,4),%eax;");
    asm("loc_6715F43: inc %edx;");
    asm("loc_6715F44: lea -0x30(%ecx,%eax,2),%esi;");
    asm("loc_6715F48: mov (%edx),%cl;");
    asm("loc_6715F4A: test %cl,%cl;");
    asm("loc_6715F4C: jne loc_6715F33;");
    asm("loc_6715F4E: mov %esi,%eax;");
    asm("loc_6715F50: pop %esi;");
    asm("loc_6715F51: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6715F60() // _sub_6715F60
{
    __DEBUG_ASM(6715F60);
    // chunk 0x6715F60 _sub_6715F60
    asm("loc_6715F60: mov 4(%esp),%eax;");
    asm("loc_6715F64: mov %eax,_data_671CF98;");
    asm("loc_6715F69: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6715F70() // _sub_6715F70
{
    __DEBUG_ASM(6715F70);
    // chunk 0x6715F70 _sub_6715F70
    asm("loc_6715F70: push $_sub_67168FE;");
    asm("loc_6715F75: pushl _data_671D030;");
    asm("loc_6715F7B: push $_off_6719380;");
    asm("loc_6715F80: push $_data_6717230;");
    asm("loc_6715F85: push $_data_6717224;");
    asm("loc_6715F8A: call _sub_671669B;");
    asm("loc_6715F8F: jmpl *_off_6719380;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6715F95() // _sub_6715F95
{
    __DEBUG_ASM(6715F95);
    // chunk 0x6715F95 _sub_6715F95
    asm("loc_6715F95: push $_sub_671680D;");
    asm("loc_6715F9A: pushl _data_671D02C;");
    asm("loc_6715FA0: push $_off_6719364;");
    asm("loc_6715FA5: push $_data_6717250;");
    asm("loc_6715FAA: push $_data_6717240;");
    asm("loc_6715FAF: call _sub_671669B;");
    asm("loc_6715FB4: jmpl *_off_6719364;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6715FBA() // _sub_6715FBA
{
    __DEBUG_ASM(6715FBA);
    // chunk 0x6715FBA _sub_6715FBA
    asm("loc_6715FBA: push $_sub_671686C;");
    asm("loc_6715FBF: pushl _data_671D028;");
    asm("loc_6715FC5: push $_off_6719378;");
    asm("loc_6715FCA: push $_data_6717260;");
    asm("loc_6715FCF: push $_data_6717240;");
    asm("loc_6715FD4: call _sub_671669B;");
    asm("loc_6715FD9: jmpl *_off_6719378;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6715FDF() // _sub_6715FDF
{
    __DEBUG_ASM(6715FDF);
    // chunk 0x6715FDF _sub_6715FDF
    asm("loc_6715FDF: push $_sub_67168D0;");
    asm("loc_6715FE4: pushl _data_671D024;");
    asm("loc_6715FEA: push $_off_671936C;");
    asm("loc_6715FEF: push $_data_671726C;");
    asm("loc_6715FF4: push $_data_6717240;");
    asm("loc_6715FF9: call _sub_671669B;");
    asm("loc_6715FFE: jmpl *_off_671936C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716004() // _sub_6716004
{
    __DEBUG_ASM(6716004);
    // chunk 0x6716004 _sub_6716004
    asm("loc_6716004: push $_sub_6716940;");
    asm("loc_6716009: pushl _data_671D020;");
    asm("loc_671600F: push $_off_6719350;");
    asm("loc_6716014: push $_data_671728C;");
    asm("loc_6716019: push $_data_6717280;");
    asm("loc_671601E: call _sub_671669B;");
    asm("loc_6716023: jmpl *_off_6719350;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716029() // _sub_6716029
{
    __DEBUG_ASM(6716029);
    // chunk 0x6716029 _sub_6716029
    asm("loc_6716029: push $_sub_671680D;");
    asm("loc_671602E: pushl _data_671D01C;");
    asm("loc_6716034: push $_off_6719360;");
    asm("loc_6716039: push $_data_67172A4;");
    asm("loc_671603E: push $_data_6717240;");
    asm("loc_6716043: call _sub_671669B;");
    asm("loc_6716048: jmpl *_off_6719360;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_671604E() // _sub_671604E
{
    __DEBUG_ASM(671604E);
    // chunk 0x671604E _sub_671604E
    asm("loc_671604E: push $_sub_6716934;");
    asm("loc_6716053: pushl _data_671D018;");
    asm("loc_6716059: push $_off_671938C;");
    asm("loc_671605E: push $_data_67172B4;");
    asm("loc_6716063: push $_data_6717224;");
    asm("loc_6716068: call _sub_671669B;");
    asm("loc_671606D: jmpl *_off_671938C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716073() // _sub_6716073
{
    __DEBUG_ASM(6716073);
    // chunk 0x6716073 _sub_6716073
    asm("loc_6716073: push $_sub_6716927;");
    asm("loc_6716078: pushl _data_671D014;");
    asm("loc_671607E: push $_off_6719384;");
    asm("loc_6716083: push $_data_67172C0;");
    asm("loc_6716088: push $_data_6717224;");
    asm("loc_671608D: call _sub_671669B;");
    asm("loc_6716092: jmpl *_off_6719384;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716098() // _sub_6716098
{
    __DEBUG_ASM(6716098);
    // chunk 0x6716098 _sub_6716098
    asm("loc_6716098: push $_sub_6716879;");
    asm("loc_671609D: pushl _data_671D010;");
    asm("loc_67160A3: push $_off_671937C;");
    asm("loc_67160A8: push $_data_67172CC;");
    asm("loc_67160AD: push $_data_6717240;");
    asm("loc_67160B2: call _sub_671669B;");
    asm("loc_67160B7: jmpl *_off_671937C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67160BD() // _sub_67160BD
{
    __DEBUG_ASM(67160BD);
    // chunk 0x67160BD _sub_67160BD
    asm("loc_67160BD: push $_sub_6716800;");
    asm("loc_67160C2: pushl _data_671D00C;");
    asm("loc_67160C8: push $_off_671935C;");
    asm("loc_67160CD: push $_data_67172D8;");
    asm("loc_67160D2: push $_data_6717240;");
    asm("loc_67160D7: call _sub_671669B;");
    asm("loc_67160DC: jmpl *_off_671935C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67160E2() // _sub_67160E2
{
    __DEBUG_ASM(67160E2);
    // chunk 0x67160E2 _sub_67160E2
    asm("loc_67160E2: push $_sub_67167EE;");
    asm("loc_67160E7: pushl _data_671D008;");
    asm("loc_67160ED: push $_off_6719354;");
    asm("loc_67160F2: push $_data_67172EC;");
    asm("loc_67160F7: push $_data_6717240;");
    asm("loc_67160FC: call _sub_671669B;");
    asm("loc_6716101: jmpl *_off_6719354;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716107() // _sub_6716107
{
    __DEBUG_ASM(6716107);
    // chunk 0x6716107 _sub_6716107
    asm("loc_6716107: push $_sub_67168A2;");
    asm("loc_671610C: pushl _data_671D004;");
    asm("loc_6716112: push $_off_6719368;");
    asm("loc_6716117: push $_data_67172FC;");
    asm("loc_671611C: push $_data_6717240;");
    asm("loc_6716121: call _sub_671669B;");
    asm("loc_6716126: jmpl *_off_6719368;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_671612C() // _sub_671612C
{
    __DEBUG_ASM(671612C);
    // chunk 0x671612C _sub_671612C
    asm("loc_671612C: push $_sub_6716843;");
    asm("loc_6716131: pushl _data_671D000;");
    asm("loc_6716137: push $_off_6719374;");
    asm("loc_671613C: push $_data_6717310;");
    asm("loc_6716141: push $_data_6717240;");
    asm("loc_6716146: call _sub_671669B;");
    asm("loc_671614B: jmpl *_off_6719374;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716151() // _sub_6716151
{
    __DEBUG_ASM(6716151);
    // chunk 0x6716151 _sub_6716151
    asm("loc_6716151: push $_sub_671681A;");
    asm("loc_6716156: pushl _data_671CFFC;");
    asm("loc_671615C: push $_off_6719370;");
    asm("loc_6716161: push $_data_671731C;");
    asm("loc_6716166: push $_data_6717240;");
    asm("loc_671616B: call _sub_671669B;");
    asm("loc_6716170: jmpl *_off_6719370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716176() // _sub_6716176
{
    __DEBUG_ASM(6716176);
    // chunk 0x6716176 _sub_6716176
    asm("loc_6716176: push $_sub_67167FB;");
    asm("loc_671617B: pushl _data_671CFF8;");
    asm("loc_6716181: push $_off_6719358;");
    asm("loc_6716186: push $_data_6717328;");
    asm("loc_671618B: push $_data_6717240;");
    asm("loc_6716190: call _sub_671669B;");
    asm("loc_6716195: jmpl *_off_6719358;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_671619B() // _sub_671619B
{
    __DEBUG_ASM(671619B);
    // chunk 0x671619B _sub_671619B
    asm("loc_671619B: push $_sub_6716927;");
    asm("loc_67161A0: pushl _data_671CFF4;");
    asm("loc_67161A6: push $_off_6719388;");
    asm("loc_67161AB: push $_data_6717338;");
    asm("loc_67161B0: push $_data_6717224;");
    asm("loc_67161B5: call _sub_671669B;");
    asm("loc_67161BA: jmpl *_off_6719388;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67161C0() // _sub_67161C0
{
    __DEBUG_ASM(67161C0);
    // chunk 0x67161C0 _sub_67161C0
    asm("loc_67161C0: push %ebp;");
    asm("loc_67161C1: mov %esp,%ebp;");
    asm("loc_67161C3: push %ecx;");
    asm("loc_67161C4: andl $0,-4(%ebp);");
    asm("loc_67161C8: mov 0xC(%ebp),%ecx;");
    asm("loc_67161CB: dec %ecx;");
    asm("loc_67161CC: test %ecx,%ecx;");
    asm("loc_67161CE: push %esi;");
    asm("loc_67161CF: jl loc_671622B;");
    asm("loc_67161D1: push %ebx;");
    asm("loc_67161D2: push %edi;");
    asm("loc_67161D3: mov -4(%ebp),%eax;");
    asm("loc_67161D6: mov 8(%ebp),%edi;");
    asm("loc_67161D9: lea (%ecx,%eax),%esi;");
    asm("loc_67161DC: mov 0x14(%ebp),%eax;");
    asm("loc_67161DF: sar $1,%esi;");
    asm("loc_67161E1: mov (%eax,%esi,4),%eax;");
    asm("loc_67161E4: add 0x10(%ebp),%eax;");
    asm("loc_67161E7: mov (%edi),%bl;");
    asm("loc_67161E9: mov %bl,%dl;");
    asm("loc_67161EB: cmp (%eax),%bl;");
    asm("loc_67161ED: jne loc_6716209;");
    asm("loc_67161EF: test %dl,%dl;");
    asm("loc_67161F1: je loc_6716205;");
    asm("loc_67161F3: mov 1(%edi),%bl;");
    asm("loc_67161F6: mov %bl,%dl;");
    asm("loc_67161F8: cmp 1(%eax),%bl;");
    asm("loc_67161FB: jne loc_6716209;");
    asm("loc_67161FD: inc %edi;");
    asm("loc_67161FE: inc %edi;");
    asm("loc_67161FF: inc %eax;");
    asm("loc_6716200: inc %eax;");
    asm("loc_6716201: test %dl,%dl;");
    asm("loc_6716203: jne loc_67161E7;");
    asm("loc_6716205: xor %eax,%eax;");
    asm("loc_6716207: jmp loc_671620E;");
    asm("loc_6716209: sbb %eax,%eax;");
    asm("loc_671620B: sbb $0xFFFFFFFF,%eax;");
    asm("loc_671620E: test %eax,%eax;");
    asm("loc_6716210: jge loc_6716217;");
    asm("loc_6716212: lea -1(%esi),%ecx;");
    asm("loc_6716215: jmp loc_671621F;");
    asm("loc_6716217: jle loc_6716224;");
    asm("loc_6716219: lea 1(%esi),%eax;");
    asm("loc_671621C: mov %eax,-4(%ebp);");
    asm("loc_671621F: cmp -4(%ebp),%ecx;");
    asm("loc_6716222: jge loc_67161D3;");
    asm("loc_6716224: cmp -4(%ebp),%ecx;");
    asm("loc_6716227: pop %edi;");
    asm("loc_6716228: pop %ebx;");
    asm("loc_6716229: jge loc_6716231;");
    asm("loc_671622B: or $0xFFFF,%ax;");
    asm("loc_671622F: jmp loc_6716238;");
    asm("loc_6716231: mov 0x18(%ebp),%eax;");
    asm("loc_6716234: mov (%eax,%esi,2),%ax;");
    asm("loc_6716238: pop %esi;");
    asm("loc_6716239: leave;");
    asm("loc_671623A: ret $0x14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_671623D() // _sub_671623D
{
    __DEBUG_ASM(671623D);
    // chunk 0x671623D _sub_671623D
    asm("loc_671623D: push %esi;");
    asm("loc_671623E: mov 8(%esp),%esi;");
    asm("loc_6716242: mov 0x3C(%esi),%eax;");
    asm("loc_6716245: add %esi,%eax;");
    asm("loc_6716247: je loc_671626A;");
    asm("loc_6716249: movzwl 0xC(%esp),%ecx;");
    asm("loc_671624E: cmp 0x74(%eax),%ecx;");
    asm("loc_6716251: jae loc_671626A;");
    asm("loc_6716253: mov 0x78(%eax,%ecx,8),%edx;");
    asm("loc_6716257: test %edx,%edx;");
    asm("loc_6716259: je loc_671626A;");
    asm("loc_671625B: mov 0x7C(%eax,%ecx,8),%eax;");
    asm("loc_671625F: mov 0x10(%esp),%ecx;");
    asm("loc_6716263: mov %eax,(%ecx);");
    asm("loc_6716265: lea (%edx,%esi),%eax;");
    asm("loc_6716268: jmp loc_6716273;");
    asm("loc_671626A: mov 0x10(%esp),%eax;");
    asm("loc_671626E: andl $0,(%eax);");
    asm("loc_6716271: xor %eax,%eax;");
    asm("loc_6716273: pop %esi;");
    asm("loc_6716274: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716277() // _sub_6716277
{
    __DEBUG_ASM(6716277);
    // chunk 0x6716277 _sub_6716277
    asm("loc_6716277: push $0xFFFFFFFF;");
    asm("loc_6716279: pushl 0xC(%esp);");
    asm("loc_671627D: push $0xFFFFFFFF;");
    asm("loc_671627F: pushl 0x10(%esp);");
    asm("loc_6716283: push $1;");
    asm("loc_6716285: push $0x409;");
    asm("loc_671628A: calll *_import_6717088;");
    asm("loc_6716290: dec %eax;");
    asm("loc_6716291: dec %eax;");
    asm("loc_6716292: neg %eax;");
    asm("loc_6716294: sbb %eax,%eax;");
    asm("loc_6716296: inc %eax;");
    asm("loc_6716297: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_671629A() // _sub_671629A
{
    __DEBUG_ASM(671629A);
    // chunk 0x671629A _sub_671629A
    asm("loc_671629A: mov 0xC(%esp),%ecx;");
    asm("loc_671629E: test %ecx,%ecx;");
    asm("loc_67162A0: push %esi;");
    asm("loc_67162A1: push %edi;");
    asm("loc_67162A2: mov 0xC(%esp),%edi;");
    asm("loc_67162A6: mov %edi,%esi;");
    asm("loc_67162A8: je loc_67162D2;");
    asm("loc_67162AA: mov 0x10(%esp),%edx;");
    asm("loc_67162AE: mov (%edx),%al;");
    asm("loc_67162B0: mov %al,(%edi);");
    asm("loc_67162B2: inc %edi;");
    asm("loc_67162B3: inc %edx;");
    asm("loc_67162B4: test %al,%al;");
    asm("loc_67162B6: je loc_67162BB;");
    asm("loc_67162B8: dec %ecx;");
    asm("loc_67162B9: jne loc_67162AE;");
    asm("loc_67162BB: test %ecx,%ecx;");
    asm("loc_67162BD: je loc_67162D2;");
    asm("loc_67162BF: dec %ecx;");
    asm("loc_67162C0: je loc_67162D2;");
    asm("loc_67162C2: mov %ecx,%edx;");
    asm("loc_67162C4: shr $2,%ecx;");
    asm("loc_67162C7: xor %eax,%eax;");
    asm("loc_67162C9: rep stos %eax,(%edi);");
    asm("loc_67162CB: mov %edx,%ecx;");
    asm("loc_67162CD: and $3,%ecx;");
    asm("loc_67162D0: rep stos %al,(%edi);");
    asm("loc_67162D2: pop %edi;");
    asm("loc_67162D3: mov %esi,%eax;");
    asm("loc_67162D5: pop %esi;");
    asm("loc_67162D6: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67162D9() // _sub_67162D9
{
    __DEBUG_ASM(67162D9);
    // chunk 0x67162D9 _sub_67162D9
    asm("loc_67162D9: push %ebp;");
    asm("loc_67162DA: mov %esp,%ebp;");
    asm("loc_67162DC: push %esi;");
    asm("loc_67162DD: push %edi;");
    asm("loc_67162DE: mov 8(%ebp),%edi;");
    asm("loc_67162E1: test %edi,%edi;");
    asm("loc_67162E3: je loc_6716335;");
    asm("loc_67162E5: cmpl $0,0xC(%ebp);");
    asm("loc_67162E9: je loc_6716335;");
    asm("loc_67162EB: lea 8(%ebp),%eax;");
    asm("loc_67162EE: push %eax;");
    asm("loc_67162EF: push $0;");
    asm("loc_67162F1: push %edi;");
    asm("loc_67162F2: call _sub_671623D;");
    asm("loc_67162F7: mov %eax,%esi;");
    asm("loc_67162F9: test %esi,%esi;");
    asm("loc_67162FB: je loc_6716335;");
    asm("loc_67162FD: mov 0x24(%esi),%eax;");
    asm("loc_6716300: add %edi,%eax;");
    asm("loc_6716302: push %eax;");
    asm("loc_6716303: mov 0x20(%esi),%eax;");
    asm("loc_6716306: add %edi,%eax;");
    asm("loc_6716308: push %eax;");
    asm("loc_6716309: push %edi;");
    asm("loc_671630A: pushl 0x18(%esi);");
    asm("loc_671630D: pushl 0xC(%ebp);");
    asm("loc_6716310: call _sub_67161C0;");
    asm("loc_6716315: movzwl %ax,%eax;");
    asm("loc_6716318: cmp 0x14(%esi),%eax;");
    asm("loc_671631B: jae loc_6716335;");
    asm("loc_671631D: mov 0x1C(%esi),%ecx;");
    asm("loc_6716320: lea (%ecx,%eax,4),%eax;");
    asm("loc_6716323: mov (%eax,%edi),%eax;");
    asm("loc_6716326: add %edi,%eax;");
    asm("loc_6716328: cmp %esi,%eax;");
    asm("loc_671632A: jbe loc_6716337;");
    asm("loc_671632C: mov 8(%ebp),%ecx;");
    asm("loc_671632F: add %esi,%ecx;");
    asm("loc_6716331: cmp %ecx,%eax;");
    asm("loc_6716333: jae loc_6716337;");
    asm("loc_6716335: xor %eax,%eax;");
    asm("loc_6716337: pop %edi;");
    asm("loc_6716338: pop %esi;");
    asm("loc_6716339: pop %ebp;");
    asm("loc_671633A: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_671633D() // _sub_671633D
{
    __DEBUG_ASM(671633D);
    // chunk 0x671633D _sub_671633D
    asm("loc_671633D: push %ebp;");
    asm("loc_671633E: mov %esp,%ebp;");
    asm("loc_6716340: push %ebx;");
    asm("loc_6716341: mov 8(%ebp),%ebx;");
    asm("loc_6716344: push %esi;");
    asm("loc_6716345: mov %ebx,%eax;");
    asm("loc_6716347: push %edi;");
    asm("loc_6716348: lea 1(%eax),%edx;");
    asm("loc_671634B: mov (%eax),%cl;");
    asm("loc_671634D: inc %eax;");
    asm("loc_671634E: test %cl,%cl;");
    asm("loc_6716350: jne loc_671634B;");
    asm("loc_6716352: sub %edx,%eax;");
    asm("loc_6716354: cmp $1,%eax;");
    asm("loc_6716357: jb loc_6716377;");
    asm("loc_6716359: cmpb $0x3A,1(%ebx);");
    asm("loc_671635D: jne loc_6716377;");
    asm("loc_671635F: mov 0xC(%ebp),%esi;");
    asm("loc_6716362: test %esi,%esi;");
    asm("loc_6716364: je loc_6716373;");
    asm("loc_6716366: push $2;");
    asm("loc_6716368: push %ebx;");
    asm("loc_6716369: push %esi;");
    asm("loc_671636A: call _sub_671629A;");
    asm("loc_671636F: andb $0,2(%esi);");
    asm("loc_6716373: inc %ebx;");
    asm("loc_6716374: inc %ebx;");
    asm("loc_6716375: jmp loc_6716381;");
    asm("loc_6716377: mov 0xC(%ebp),%eax;");
    asm("loc_671637A: test %eax,%eax;");
    asm("loc_671637C: je loc_6716381;");
    asm("loc_671637E: andb $0,(%eax);");
    asm("loc_6716381: mov (%ebx),%cl;");
    asm("loc_6716383: xor %eax,%eax;");
    asm("loc_6716385: test %cl,%cl;");
    asm("loc_6716387: mov %ebx,%edx;");
    asm("loc_6716389: je loc_67163C7;");
    asm("loc_671638B: cmp $0x2F,%cl;");
    asm("loc_671638E: je loc_6716395;");
    asm("loc_6716390: cmp $0x5C,%cl;");
    asm("loc_6716393: jne loc_6716398;");
    asm("loc_6716395: lea 1(%edx),%eax;");
    asm("loc_6716398: inc %edx;");
    asm("loc_6716399: mov (%edx),%cl;");
    asm("loc_671639B: test %cl,%cl;");
    asm("loc_671639D: jne loc_671638B;");
    asm("loc_671639F: test %eax,%eax;");
    asm("loc_67163A1: je loc_67163C7;");
    asm("loc_67163A3: mov 0x10(%ebp),%edi;");
    asm("loc_67163A6: test %edi,%edi;");
    asm("loc_67163A8: je loc_67163D1;");
    asm("loc_67163AA: sub %ebx,%eax;");
    asm("loc_67163AC: mov %eax,%esi;");
    asm("loc_67163AE: mov $0xFF,%eax;");
    asm("loc_67163B3: cmp %eax,%esi;");
    asm("loc_67163B5: jbe loc_67163B9;");
    asm("loc_67163B7: mov %eax,%esi;");
    asm("loc_67163B9: push %esi;");
    asm("loc_67163BA: push %ebx;");
    asm("loc_67163BB: push %edi;");
    asm("loc_67163BC: call _sub_671629A;");
    asm("loc_67163C1: andb $0,(%esi,%edi);");
    asm("loc_67163C5: jmp loc_67163D1;");
    asm("loc_67163C7: mov 0x10(%ebp),%eax;");
    asm("loc_67163CA: test %eax,%eax;");
    asm("loc_67163CC: je loc_67163D1;");
    asm("loc_67163CE: andb $0,(%eax);");
    asm("loc_67163D1: pop %edi;");
    asm("loc_67163D2: pop %esi;");
    asm("loc_67163D3: pop %ebx;");
    asm("loc_67163D4: pop %ebp;");
    asm("loc_67163D5: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67163D8() // _sub_67163D8
{
    __DEBUG_ASM(67163D8);
    // chunk 0x67163D8 _sub_67163D8
    asm("loc_67163D8: push %ebp;");
    asm("loc_67163D9: mov %esp,%ebp;");
    asm("loc_67163DB: sub $0x52C,%esp;");
    asm("loc_67163E1: mov _data_671CFF0,%eax;");
    asm("loc_67163E6: push %ebx;");
    asm("loc_67163E7: xor %ebx,%ebx;");
    asm("loc_67163E9: cmp %ebx,%eax;");
    asm("loc_67163EB: je loc_67163FA;");
    asm("loc_67163ED: call *%eax;");
    asm("loc_67163EF: cmp %ebx,%eax;");
    asm("loc_67163F1: mov %eax,-8(%ebp);");
    asm("loc_67163F4: jne loc_6716695;");
    asm("loc_67163FA: push %esi;");
    asm("loc_67163FB: push %edi;");
    asm("loc_67163FC: pushl _off_67192B8;");
    asm("loc_6716402: calll *_import_67170A8;");
    asm("loc_6716408: cmp %ebx,%eax;");
    asm("loc_671640A: mov %eax,-8(%ebp);");
    asm("loc_671640D: je loc_6716576;");
    asm("loc_6716413: mov $0x104,%edi;");
    asm("loc_6716418: push %edi;");
    asm("loc_6716419: lea -0x52C(%ebp),%eax;");
    asm("loc_671641F: push %eax;");
    asm("loc_6716420: calll *_import_671708C;");
    asm("loc_6716426: test %eax,%eax;");
    asm("loc_6716428: jne loc_6716430;");
    asm("loc_671642A: mov %bl,-0x52C(%ebp);");
    asm("loc_6716430: push %edi;");
    asm("loc_6716431: lea -0x424(%ebp),%eax;");
    asm("loc_6716437: push %eax;");
    asm("loc_6716438: calll *_import_6717094;");
    asm("loc_671643E: test %eax,%eax;");
    asm("loc_6716440: jne loc_6716448;");
    asm("loc_6716442: mov %bl,-0x424(%ebp);");
    asm("loc_6716448: mov _import_6717084,%esi;");
    asm("loc_671644E: push %edi;");
    asm("loc_671644F: lea -0x21C(%ebp),%eax;");
    asm("loc_6716455: push %eax;");
    asm("loc_6716456: pushl -8(%ebp);");
    asm("loc_6716459: call *%esi;");
    asm("loc_671645B: test %eax,%eax;");
    asm("loc_671645D: jne loc_6716465;");
    asm("loc_671645F: mov %bl,-0x21C(%ebp);");
    asm("loc_6716465: push %edi;");
    asm("loc_6716466: lea -0x114(%ebp),%eax;");
    asm("loc_671646C: push %eax;");
    asm("loc_671646D: push %ebx;");
    asm("loc_671646E: calll *_import_6717080;");
    asm("loc_6716474: push %eax;");
    asm("loc_6716475: call *%esi;");
    asm("loc_6716477: test %eax,%eax;");
    asm("loc_6716479: jne loc_6716481;");
    asm("loc_671647B: mov %bl,-0x114(%ebp);");
    asm("loc_6716481: lea -0x31C(%ebp),%eax;");
    asm("loc_6716487: push %eax;");
    asm("loc_6716488: lea -4(%ebp),%eax;");
    asm("loc_671648B: push %eax;");
    asm("loc_671648C: lea -0x114(%ebp),%eax;");
    asm("loc_6716492: push %eax;");
    asm("loc_6716493: call _sub_671633D;");
    asm("loc_6716498: lea -4(%ebp),%eax;");
    asm("loc_671649B: lea 1(%eax),%edx;");
    asm("loc_671649E: mov (%eax),%cl;");
    asm("loc_67164A0: inc %eax;");
    asm("loc_67164A1: cmp %bl,%cl;");
    asm("loc_67164A3: jne loc_671649E;");
    asm("loc_67164A5: sub %edx,%eax;");
    asm("loc_67164A7: mov %eax,%ecx;");
    asm("loc_67164A9: lea -0x31C(%ebp),%eax;");
    asm("loc_67164AF: lea 1(%eax),%esi;");
    asm("loc_67164B2: mov (%eax),%dl;");
    asm("loc_67164B4: inc %eax;");
    asm("loc_67164B5: cmp %bl,%dl;");
    asm("loc_67164B7: jne loc_67164B2;");
    asm("loc_67164B9: sub %esi,%eax;");
    asm("loc_67164BB: add %ecx,%eax;");
    asm("loc_67164BD: mov %bl,-0x113(%ebp,%eax);");
    asm("loc_67164C4: lea -0x31C(%ebp),%eax;");
    asm("loc_67164CA: push %eax;");
    asm("loc_67164CB: lea -4(%ebp),%eax;");
    asm("loc_67164CE: push %eax;");
    asm("loc_67164CF: lea -0x21C(%ebp),%eax;");
    asm("loc_67164D5: push %eax;");
    asm("loc_67164D6: call _sub_671633D;");
    asm("loc_67164DB: lea -4(%ebp),%eax;");
    asm("loc_67164DE: lea 1(%eax),%ecx;");
    asm("loc_67164E1: mov (%eax),%dl;");
    asm("loc_67164E3: inc %eax;");
    asm("loc_67164E4: cmp %bl,%dl;");
    asm("loc_67164E6: jne loc_67164E1;");
    asm("loc_67164E8: sub %ecx,%eax;");
    asm("loc_67164EA: lea -0x31C(%ebp),%ecx;");
    asm("loc_67164F0: lea 1(%ecx),%esi;");
    asm("loc_67164F3: mov (%ecx),%dl;");
    asm("loc_67164F5: inc %ecx;");
    asm("loc_67164F6: cmp %bl,%dl;");
    asm("loc_67164F8: jne loc_67164F3;");
    asm("loc_67164FA: sub %esi,%ecx;");
    asm("loc_67164FC: add %eax,%ecx;");
    asm("loc_67164FE: lea -0x21C(%ebp),%eax;");
    asm("loc_6716504: push %eax;");
    asm("loc_6716505: lea -0x424(%ebp),%eax;");
    asm("loc_671650B: push %eax;");
    asm("loc_671650C: mov %bl,-0x21B(%ebp,%ecx);");
    asm("loc_6716513: call _sub_6716277;");
    asm("loc_6716518: test %eax,%eax;");
    asm("loc_671651A: jne loc_6716533;");
    asm("loc_671651C: lea -0x114(%ebp),%eax;");
    asm("loc_6716522: push %eax;");
    asm("loc_6716523: lea -0x424(%ebp),%eax;");
    asm("loc_6716529: push %eax;");
    asm("loc_671652A: call _sub_6716277;");
    asm("loc_671652F: test %eax,%eax;");
    asm("loc_6716531: jne loc_6716561;");
    asm("loc_6716533: lea -0x21C(%ebp),%eax;");
    asm("loc_6716539: push %eax;");
    asm("loc_671653A: lea -0x52C(%ebp),%eax;");
    asm("loc_6716540: push %eax;");
    asm("loc_6716541: call _sub_6716277;");
    asm("loc_6716546: test %eax,%eax;");
    asm("loc_6716548: jne loc_671656D;");
    asm("loc_671654A: lea -0x114(%ebp),%eax;");
    asm("loc_6716550: push %eax;");
    asm("loc_6716551: lea -0x52C(%ebp),%eax;");
    asm("loc_6716557: push %eax;");
    asm("loc_6716558: call _sub_6716277;");
    asm("loc_671655D: test %eax,%eax;");
    asm("loc_671655F: je loc_671656D;");
    asm("loc_6716561: pushl -8(%ebp);");
    asm("loc_6716564: calll *_import_671707C;");
    asm("loc_671656A: mov %ebx,-8(%ebp);");
    asm("loc_671656D: cmp %ebx,-8(%ebp);");
    asm("loc_6716570: jne loc_6716693;");
    asm("loc_6716576: push $_data_67173F0;");
    asm("loc_671657B: mov %ebx,-4(%ebp);");
    asm("loc_671657E: calll *_import_67170A8;");
    asm("loc_6716584: mov %eax,%esi;");
    asm("loc_6716586: push %esi;");
    asm("loc_6716587: push $_data_67192DC;");
    asm("loc_671658C: calll *_import_6717078;");
    asm("loc_6716592: test %eax,%eax;");
    asm("loc_6716594: je loc_671659D;");
    asm("loc_6716596: push %esi;");
    asm("loc_6716597: calll *_import_671707C;");
    asm("loc_671659D: mov _data_67192DC,%eax;");
    asm("loc_67165A2: cmp %ebx,%eax;");
    asm("loc_67165A4: je loc_6716693;");
    asm("loc_67165AA: push $_data_6717474;");
    asm("loc_67165AF: push %eax;");
    asm("loc_67165B0: call _sub_67162D9;");
    asm("loc_67165B5: push $_data_6717460;");
    asm("loc_67165BA: pushl _data_67192DC;");
    asm("loc_67165C0: mov %eax,%esi;");
    asm("loc_67165C2: call _sub_67162D9;");
    asm("loc_67165C7: cmp %ebx,%esi;");
    asm("loc_67165C9: mov %eax,%edi;");
    asm("loc_67165CB: je loc_6716693;");
    asm("loc_67165D1: cmp %ebx,%edi;");
    asm("loc_67165D3: je loc_6716693;");
    asm("loc_67165D9: lea -4(%ebp),%eax;");
    asm("loc_67165DC: push %eax;");
    asm("loc_67165DD: push $1;");
    asm("loc_67165DF: push %ebx;");
    asm("loc_67165E0: push $_data_671740C;");
    asm("loc_67165E5: push $0x80000002;");
    asm("loc_67165EA: call *%esi;");
    asm("loc_67165EC: test %eax,%eax;");
    asm("loc_67165EE: jne loc_6716693;");
    asm("loc_67165F4: lea -0xC(%ebp),%eax;");
    asm("loc_67165F7: push %eax;");
    asm("loc_67165F8: lea -0x114(%ebp),%eax;");
    asm("loc_67165FE: push %eax;");
    asm("loc_67165FF: push %ebx;");
    asm("loc_6716600: push %ebx;");
    asm("loc_6716601: push $_data_6717438;");
    asm("loc_6716606: pushl -4(%ebp);");
    asm("loc_6716609: movl $0x104,-0xC(%ebp);");
    asm("loc_6716610: mov %bl,-0x114(%ebp);");
    asm("loc_6716616: call *%edi;");
    asm("loc_6716618: test %eax,%eax;");
    asm("loc_671661A: jne loc_671668A;");
    asm("loc_671661C: mov $_data_6717448,%eax;");
    asm("loc_6716621: mov %eax,%edx;");
    asm("loc_6716623: mov (%eax),%cl;");
    asm("loc_6716625: inc %eax;");
    asm("loc_6716626: cmp %bl,%cl;");
    asm("loc_6716628: jne loc_6716623;");
    asm("loc_671662A: lea -0x114(%ebp),%edi;");
    asm("loc_6716630: sub %edx,%eax;");
    asm("loc_6716632: dec %edi;");
    asm("loc_6716633: mov 1(%edi),%cl;");
    asm("loc_6716636: inc %edi;");
    asm("loc_6716637: cmp %bl,%cl;");
    asm("loc_6716639: jne loc_6716633;");
    asm("loc_671663B: mov %eax,%ecx;");
    asm("loc_671663D: shr $2,%ecx;");
    asm("loc_6716640: mov %edx,%esi;");
    asm("loc_6716642: rep movsl (%esi),(%edi);");
    asm("loc_6716644: mov %eax,%ecx;");
    asm("loc_6716646: mov _off_67192B8,%eax;");
    asm("loc_671664B: and $3,%ecx;");
    asm("loc_671664E: rep movsb (%esi),(%edi);");
    asm("loc_6716650: mov %eax,%ecx;");
    asm("loc_6716652: mov (%eax),%dl;");
    asm("loc_6716654: inc %eax;");
    asm("loc_6716655: cmp %bl,%dl;");
    asm("loc_6716657: jne loc_6716652;");
    asm("loc_6716659: lea -0x114(%ebp),%edi;");
    asm("loc_671665F: sub %ecx,%eax;");
    asm("loc_6716661: mov %ecx,%esi;");
    asm("loc_6716663: dec %edi;");
    asm("loc_6716664: mov 1(%edi),%cl;");
    asm("loc_6716667: inc %edi;");
    asm("loc_6716668: cmp %bl,%cl;");
    asm("loc_671666A: jne loc_6716664;");
    asm("loc_671666C: mov %eax,%ecx;");
    asm("loc_671666E: shr $2,%ecx;");
    asm("loc_6716671: rep movsl (%esi),(%edi);");
    asm("loc_6716673: mov %eax,%ecx;");
    asm("loc_6716675: lea -0x114(%ebp),%eax;");
    asm("loc_671667B: and $3,%ecx;");
    asm("loc_671667E: push %eax;");
    asm("loc_671667F: rep movsb (%esi),(%edi);");
    asm("loc_6716681: calll *_import_67170A8;");
    asm("loc_6716687: mov %eax,-8(%ebp);");
    asm("loc_671668A: pushl -4(%ebp);");
    asm("loc_671668D: calll *_import_6717000;");
    asm("loc_6716693: pop %edi;");
    asm("loc_6716694: pop %esi;");
    asm("loc_6716695: mov -8(%ebp),%eax;");
    asm("loc_6716698: pop %ebx;");
    asm("loc_6716699: leave;");
    asm("loc_671669A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_671669B() // _sub_671669B
{
    __DEBUG_ASM(671669B);
    // chunk 0x671669B _sub_671669B
    asm("loc_671669B: push %ebp;");
    asm("loc_671669C: mov %esp,%ebp;");
    asm("loc_671669E: sub $0x1C,%esp;");
    asm("loc_67166A1: push %ebx;");
    asm("loc_67166A2: mov _import_6717078,%ebx;");
    asm("loc_67166A8: push %esi;");
    asm("loc_67166A9: xor %esi,%esi;");
    asm("loc_67166AB: cmp %esi,_data_671CFE4;");
    asm("loc_67166B1: push %edi;");
    asm("loc_67166B2: jne loc_67166D6;");
    asm("loc_67166B4: calll *_import_6717098;");
    asm("loc_67166BA: cmp $0x80000000,%eax;");
    asm("loc_67166BF: jae loc_67166CC;");
    asm("loc_67166C1: xor %edi,%edi;");
    asm("loc_67166C3: inc %edi;");
    asm("loc_67166C4: mov %edi,_data_671CFE4;");
    asm("loc_67166CA: jmp loc_67166E5;");
    asm("loc_67166CC: movl $2,_data_671CFE4;");
    asm("loc_67166D6: xor %edi,%edi;");
    asm("loc_67166D8: inc %edi;");
    asm("loc_67166D9: cmp %edi,_data_671CFE4;");
    asm("loc_67166DF: jne loc_6716798;");
    asm("loc_67166E5: cmp %esi,_data_671CFE8;");
    asm("loc_67166EB: jne loc_6716706;");
    asm("loc_67166ED: push $0x1C;");
    asm("loc_67166EF: lea -0x1C(%ebp),%eax;");
    asm("loc_67166F2: push %eax;");
    asm("loc_67166F3: push $_sub_671669B;");
    asm("loc_67166F8: calll *_import_67170B8;");
    asm("loc_67166FE: mov -0x18(%ebp),%eax;");
    asm("loc_6716701: mov %eax,_data_671CFE8;");
    asm("loc_6716706: mov _off_67192C0,%eax;");
    asm("loc_671670B: cmp %esi,%eax;");
    asm("loc_671670D: je loc_671674B;");
    asm("loc_671670F: mov %eax,%esi;");
    asm("loc_6716711: mov 8(%ebp),%eax;");
    asm("loc_6716714: mov (%eax),%dl;");
    asm("loc_6716716: mov %dl,%cl;");
    asm("loc_6716718: cmp (%esi),%dl;");
    asm("loc_671671A: jne loc_6716736;");
    asm("loc_671671C: test %cl,%cl;");
    asm("loc_671671E: je loc_6716732;");
    asm("loc_6716720: mov 1(%eax),%dl;");
    asm("loc_6716723: mov %dl,%cl;");
    asm("loc_6716725: cmp 1(%esi),%dl;");
    asm("loc_6716728: jne loc_6716736;");
    asm("loc_671672A: inc %eax;");
    asm("loc_671672B: inc %eax;");
    asm("loc_671672C: inc %esi;");
    asm("loc_671672D: inc %esi;");
    asm("loc_671672E: test %cl,%cl;");
    asm("loc_6716730: jne loc_6716714;");
    asm("loc_6716732: xor %eax,%eax;");
    asm("loc_6716734: jmp loc_671673B;");
    asm("loc_6716736: sbb %eax,%eax;");
    asm("loc_6716738: sbb $0xFFFFFFFF,%eax;");
    asm("loc_671673B: test %eax,%eax;");
    asm("loc_671673D: je loc_671676B;");
    asm("loc_671673F: mov _off_67192C0(,%edi,8),%eax;");
    asm("loc_6716746: inc %edi;");
    asm("loc_6716747: test %eax,%eax;");
    asm("loc_6716749: jne loc_671670F;");
    asm("loc_671674B: pushl 0x18(%ebp);");
    asm("loc_671674E: pushl 0x10(%ebp);");
    asm("loc_6716751: call *%ebx;");
    asm("loc_6716753: push $4;");
    asm("loc_6716755: pushl 0x10(%ebp);");
    asm("loc_6716758: pushl _data_671CFE8;");
    asm("loc_671675E: calll *_import_6717090;");
    asm("loc_6716764: pop %edi;");
    asm("loc_6716765: pop %esi;");
    asm("loc_6716766: pop %ebx;");
    asm("loc_6716767: leave;");
    asm("loc_6716768: ret $0x14;");
    asm("loc_671676B: lea _data_67192BC(,%edi,8),%esi;");
    asm("loc_6716772: cmpl $0,(%esi);");
    asm("loc_6716775: jne loc_6716791;");
    asm("loc_6716777: pushl 8(%ebp);");
    asm("loc_671677A: calll *_import_67170A8;");
    asm("loc_6716780: mov %eax,%edi;");
    asm("loc_6716782: push %edi;");
    asm("loc_6716783: push %esi;");
    asm("loc_6716784: call *%ebx;");
    asm("loc_6716786: test %eax,%eax;");
    asm("loc_6716788: je loc_6716791;");
    asm("loc_671678A: push %edi;");
    asm("loc_671678B: calll *_import_671707C;");
    asm("loc_6716791: pushl 0xC(%ebp);");
    asm("loc_6716794: pushl (%esi);");
    asm("loc_6716796: jmp loc_67167DB;");
    asm("loc_6716798: mov 0x14(%ebp),%eax;");
    asm("loc_671679B: cmp %esi,%eax;");
    asm("loc_671679D: jne loc_67167E0;");
    asm("loc_671679F: cmp %esi,_data_67192BC;");
    asm("loc_67167A5: jne loc_67167D2;");
    asm("loc_67167A7: call _sub_67163D8;");
    asm("loc_67167AC: mov %eax,%esi;");
    asm("loc_67167AE: test %esi,%esi;");
    asm("loc_67167B0: je loc_67167C5;");
    asm("loc_67167B2: push %esi;");
    asm("loc_67167B3: push $_data_67192BC;");
    asm("loc_67167B8: call *%ebx;");
    asm("loc_67167BA: test %eax,%eax;");
    asm("loc_67167BC: je loc_67167C5;");
    asm("loc_67167BE: push %esi;");
    asm("loc_67167BF: calll *_import_671707C;");
    asm("loc_67167C5: cmpl $0,_data_67192BC;");
    asm("loc_67167CC: je loc_671674B;");
    asm("loc_67167D2: pushl 0xC(%ebp);");
    asm("loc_67167D5: pushl _data_67192BC;");
    asm("loc_67167DB: call _sub_67162D9;");
    asm("loc_67167E0: test %eax,%eax;");
    asm("loc_67167E2: je loc_671674B;");
    asm("loc_67167E8: push %eax;");
    asm("loc_67167E9: jmp loc_671674E;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67167EE() // _sub_67167EE
{
    __DEBUG_ASM(67167EE);
    // chunk 0x67167EE _sub_67167EE
    asm("loc_67167EE: push $0x78;");
    asm("loc_67167F0: calll *_import_671709C;");
    asm("loc_67167F6: xor %eax,%eax;");
    asm("loc_67167F8: ret $0x1C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67167FB() // _sub_67167FB
{
    __DEBUG_ASM(67167FB);
    // chunk 0x67167FB _sub_67167FB
    asm("loc_67167FB: jmp _sub_67162D9;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716800() // _sub_6716800
{
    __DEBUG_ASM(6716800);
    // chunk 0x6716800 _sub_6716800
    asm("loc_6716800: push $0x78;");
    asm("loc_6716802: calll *_import_671709C;");
    asm("loc_6716808: xor %eax,%eax;");
    asm("loc_671680A: ret $0x14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_671680D() // _sub_671680D
{
    __DEBUG_ASM(671680D);
    // chunk 0x671680D _sub_671680D
    asm("loc_671680D: push $0x78;");
    asm("loc_671680F: calll *_import_671709C;");
    asm("loc_6716815: xor %eax,%eax;");
    asm("loc_6716817: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_671681A() // _sub_671681A
{
    __DEBUG_ASM(671681A);
    // chunk 0x671681A _sub_671681A
    asm("loc_671681A: push $_data_671731C;");
    asm("loc_671681F: push $_data_6717240;");
    asm("loc_6716824: calll *_import_6717080;");
    asm("loc_671682A: push %eax;");
    asm("loc_671682B: call _sub_67162D9;");
    asm("loc_6716830: test %eax,%eax;");
    asm("loc_6716832: je loc_6716836;");
    asm("loc_6716834: jmp *%eax;");
    asm("loc_6716836: push $0x7F;");
    asm("loc_6716838: calll *_import_671709C;");
    asm("loc_671683E: xor %eax,%eax;");
    asm("loc_6716840: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716843() // _sub_6716843
{
    __DEBUG_ASM(6716843);
    // chunk 0x6716843 _sub_6716843
    asm("loc_6716843: push $_data_6717310;");
    asm("loc_6716848: push $_data_6717240;");
    asm("loc_671684D: calll *_import_6717080;");
    asm("loc_6716853: push %eax;");
    asm("loc_6716854: call _sub_67162D9;");
    asm("loc_6716859: test %eax,%eax;");
    asm("loc_671685B: je loc_671685F;");
    asm("loc_671685D: jmp *%eax;");
    asm("loc_671685F: push $0x7F;");
    asm("loc_6716861: calll *_import_671709C;");
    asm("loc_6716867: xor %eax,%eax;");
    asm("loc_6716869: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_671686C() // _sub_671686C
{
    __DEBUG_ASM(671686C);
    // chunk 0x671686C _sub_671686C
    asm("loc_671686C: push $0x78;");
    asm("loc_671686E: calll *_import_671709C;");
    asm("loc_6716874: xor %eax,%eax;");
    asm("loc_6716876: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716879() // _sub_6716879
{
    __DEBUG_ASM(6716879);
    // chunk 0x6716879 _sub_6716879
    asm("loc_6716879: push $_data_67172CC;");
    asm("loc_671687E: push $_data_6717240;");
    asm("loc_6716883: calll *_import_6717080;");
    asm("loc_6716889: push %eax;");
    asm("loc_671688A: call _sub_67162D9;");
    asm("loc_671688F: test %eax,%eax;");
    asm("loc_6716891: je loc_6716895;");
    asm("loc_6716893: jmp *%eax;");
    asm("loc_6716895: push $0x7F;");
    asm("loc_6716897: calll *_import_671709C;");
    asm("loc_671689D: xor %eax,%eax;");
    asm("loc_671689F: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67168A2() // _sub_67168A2
{
    __DEBUG_ASM(67168A2);
    // chunk 0x67168A2 _sub_67168A2
    asm("loc_67168A2: push %ebp;");
    asm("loc_67168A3: mov %esp,%ebp;");
    asm("loc_67168A5: push $_data_67172FC;");
    asm("loc_67168AA: push $_data_6717240;");
    asm("loc_67168AF: calll *_import_6717080;");
    asm("loc_67168B5: push %eax;");
    asm("loc_67168B6: call _sub_67162D9;");
    asm("loc_67168BB: test %eax,%eax;");
    asm("loc_67168BD: je loc_67168C2;");
    asm("loc_67168BF: pop %ebp;");
    asm("loc_67168C0: jmp *%eax;");
    asm("loc_67168C2: push $0x7F;");
    asm("loc_67168C4: calll *_import_671709C;");
    asm("loc_67168CA: xor %eax,%eax;");
    asm("loc_67168CC: pop %ebp;");
    asm("loc_67168CD: ret $0x18;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67168D0() // _sub_67168D0
{
    __DEBUG_ASM(67168D0);
    // chunk 0x67168D0 _sub_67168D0
    asm("loc_67168D0: push %ebp;");
    asm("loc_67168D1: mov %esp,%ebp;");
    asm("loc_67168D3: push $_data_671726C;");
    asm("loc_67168D8: push $_data_6717240;");
    asm("loc_67168DD: calll *_import_6717080;");
    asm("loc_67168E3: push %eax;");
    asm("loc_67168E4: call _sub_67162D9;");
    asm("loc_67168E9: test %eax,%eax;");
    asm("loc_67168EB: je loc_67168F0;");
    asm("loc_67168ED: pop %ebp;");
    asm("loc_67168EE: jmp *%eax;");
    asm("loc_67168F0: push $0x7F;");
    asm("loc_67168F2: calll *_import_671709C;");
    asm("loc_67168F8: xor %eax,%eax;");
    asm("loc_67168FA: pop %ebp;");
    asm("loc_67168FB: ret $0x20;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67168FE() // _sub_67168FE
{
    __DEBUG_ASM(67168FE);
    // chunk 0x67168FE _sub_67168FE
    asm("loc_67168FE: push $_data_6717230;");
    asm("loc_6716903: push $_data_6717224;");
    asm("loc_6716908: calll *_import_6717080;");
    asm("loc_671690E: push %eax;");
    asm("loc_671690F: call _sub_67162D9;");
    asm("loc_6716914: test %eax,%eax;");
    asm("loc_6716916: je loc_671691A;");
    asm("loc_6716918: jmp *%eax;");
    asm("loc_671691A: push $0x7F;");
    asm("loc_671691C: calll *_import_671709C;");
    asm("loc_6716922: xor %eax,%eax;");
    asm("loc_6716924: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716927() // _sub_6716927
{
    __DEBUG_ASM(6716927);
    // chunk 0x6716927 _sub_6716927
    asm("loc_6716927: push $0x78;");
    asm("loc_6716929: calll *_import_671709C;");
    asm("loc_671692F: xor %eax,%eax;");
    asm("loc_6716931: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716934() // _sub_6716934
{
    __DEBUG_ASM(6716934);
    // chunk 0x6716934 _sub_6716934
    asm("loc_6716934: push $0x78;");
    asm("loc_6716936: calll *_import_671709C;");
    asm("loc_671693C: or $0xFFFFFFFF,%eax;");
    asm("loc_671693F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716940() // _sub_6716940
{
    __DEBUG_ASM(6716940);
    // chunk 0x6716940 _sub_6716940
    asm("loc_6716940: push $_data_671728C;");
    asm("loc_6716945: push $_data_6717280;");
    asm("loc_671694A: calll *_import_6717080;");
    asm("loc_6716950: push %eax;");
    asm("loc_6716951: call _sub_67162D9;");
    asm("loc_6716956: test %eax,%eax;");
    asm("loc_6716958: je loc_671695C;");
    asm("loc_671695A: jmp *%eax;");
    asm("loc_671695C: push $0x7F;");
    asm("loc_671695E: calll *_import_671709C;");
    asm("loc_6716964: xor %eax,%eax;");
    asm("loc_6716966: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_671696A() // _VerQueryValueA
{
    __DEBUG_ASM(671696A);
    // chunk 0x671696A _sub_671696A
    asm("loc_671696A: jmpl *_import_6717120;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716970() // _GetFileVersionInfoA
{
    __DEBUG_ASM(6716970);
    // chunk 0x6716970 _sub_6716970
    asm("loc_6716970: jmpl *_import_6717124;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716976() // _GetFileVersionInfoSizeA
{
    __DEBUG_ASM(6716976);
    // chunk 0x6716976 _sub_6716976
    asm("loc_6716976: jmpl *_import_671711C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_671697C() // _ImmIsIME
{
    __DEBUG_ASM(671697C);
    // chunk 0x671697C _sub_671697C
    asm("loc_671697C: jmpl *_import_671705C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716982() // _ImmReleaseContext
{
    __DEBUG_ASM(6716982);
    // chunk 0x6716982 _sub_6716982
    asm("loc_6716982: jmpl *_import_6717058;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716988() // _ImmGetContext
{
    __DEBUG_ASM(6716988);
    // chunk 0x6716988 _sub_6716988
    asm("loc_6716988: jmpl *_import_671704C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_671698E() // _ImmGetConversionStatus
{
    __DEBUG_ASM(671698E);
    // chunk 0x671698E _sub_671698E
    asm("loc_671698E: jmpl *_import_6717038;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716994() // _ImmAssociateContext
{
    __DEBUG_ASM(6716994);
    // chunk 0x6716994 _sub_6716994
    asm("loc_6716994: jmpl *_import_6717028;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_671699A() // _ImmGetCandidateListA
{
    __DEBUG_ASM(671699A);
    // chunk 0x671699A _sub_671699A
    asm("loc_671699A: jmpl *_import_671702C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67169A0() // _ImmGetCandidateListW
{
    __DEBUG_ASM(67169A0);
    // chunk 0x67169A0 _sub_67169A0
    asm("loc_67169A0: jmpl *_import_6717030;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67169A6() // _ImmGetCompositionStringW
{
    __DEBUG_ASM(67169A6);
    // chunk 0x67169A6 _sub_67169A6
    asm("loc_67169A6: jmpl *_import_6717034;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67169AC() // _ImmGetCompositionStringA
{
    __DEBUG_ASM(67169AC);
    // chunk 0x67169AC _sub_67169AC
    asm("loc_67169AC: jmpl *_import_6717054;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67169B2() // _ImmGetIMEFileNameA
{
    __DEBUG_ASM(67169B2);
    // chunk 0x67169B2 _sub_67169B2
    asm("loc_67169B2: jmpl *_import_6717050;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67169B8() // _ImmGetVirtualKey
{
    __DEBUG_ASM(67169B8);
    // chunk 0x67169B8 _sub_67169B8
    asm("loc_67169B8: jmpl *_import_671703C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67169BE() // _ImmNotifyIME
{
    __DEBUG_ASM(67169BE);
    // chunk 0x67169BE _sub_67169BE
    asm("loc_67169BE: jmpl *_import_6717040;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67169C4() // _ImmGetOpenStatus
{
    __DEBUG_ASM(67169C4);
    // chunk 0x67169C4 _sub_67169C4
    asm("loc_67169C4: jmpl *_import_6717044;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67169CA() // _ImmGetDefaultIMEWnd
{
    __DEBUG_ASM(67169CA);
    // chunk 0x67169CA _sub_67169CA
    asm("loc_67169CA: jmpl *_import_6717048;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67169D0() // _sub_67169D0
{
    __DEBUG_ASM(67169D0);
    // chunk 0x67169D0 _sub_67169D0
    asm("loc_67169D0: pushl 4(%esp);");
    asm("loc_67169D4: call _sub_67169F0;");
    asm("loc_67169D9: pop %ecx;");
    asm("loc_67169DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67169DC() // ??2@YAPAXI@Z
{
    __DEBUG_ASM(67169DC);
    // chunk 0x67169DC _sub_67169DC
    asm("loc_67169DC: jmpl *_import_67170E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67169E2() // _purecall
{
    __DEBUG_ASM(67169E2);
    // chunk 0x67169E2 _sub_67169E2
    asm("loc_67169E2: jmpl *_import_67170D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67169E8() // __CxxFrameHandler
{
    __DEBUG_ASM(67169E8);
    // chunk 0x67169E8 _sub_67169E8
    asm("loc_67169E8: jmpl *_import_67170D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67169F0() // _free
{
    __DEBUG_ASM(67169F0);
    // chunk 0x67169F0 _sub_67169F0
    asm("loc_67169F0: jmpl *_import_67170C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_67169F6() // ??_M@YGXPAXIHP6EX0@Z@Z
{
    __DEBUG_ASM(67169F6);
    // chunk 0x67169F6 _sub_67169F6
    asm("loc_67169F6: push %ebp;");
    asm("loc_67169F7: mov %esp,%ebp;");
    asm("loc_67169F9: push $0xFFFFFFFF;");
    asm("loc_67169FB: push $_data_67178E8;");
    asm("loc_6716A00: push $_sub_6716C6E;");
    asm("loc_6716A05: mov %fs:0,%eax;");
    asm("loc_6716A0B: push %eax;");
    asm("loc_6716A0C: mov %esp,%fs:0;");
    asm("loc_6716A13: sub $0xC,%esp;");
    asm("loc_6716A16: push %ebx;");
    asm("loc_6716A17: push %esi;");
    asm("loc_6716A18: push %edi;");
    asm("loc_6716A19: andl $0,-0x1C(%ebp);");
    asm("loc_6716A1D: mov 0xC(%ebp),%esi;");
    asm("loc_6716A20: mov %esi,%eax;");
    asm("loc_6716A22: imul 0x10(%ebp),%eax;");
    asm("loc_6716A26: add %eax,8(%ebp);");
    asm("loc_6716A29: andl $0,-4(%ebp);");
    asm("loc_6716A2D: decl 0x10(%ebp);");
    asm("loc_6716A30: js loc_6716A3D;");
    asm("loc_6716A32: sub %esi,8(%ebp);");
    asm("loc_6716A35: mov 8(%ebp),%ecx;");
    asm("loc_6716A38: calll *0x14(%ebp);");
    asm("loc_6716A3B: jmp loc_6716A2D;");
    asm("loc_6716A3D: movl $1,-0x1C(%ebp);");
    asm("loc_6716A44: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_6716A48: call loc_6716A5E;");
    asm("loc_6716A4D: mov -0x10(%ebp),%ecx;");
    asm("loc_6716A50: mov %ecx,%fs:0;");
    asm("loc_6716A57: pop %edi;");
    asm("loc_6716A58: pop %esi;");
    asm("loc_6716A59: pop %ebx;");
    asm("loc_6716A5A: leave;");
    asm("loc_6716A5B: ret $0x10;");
    asm("loc_6716A5E: cmpl $0,-0x1C(%ebp);");
    asm("loc_6716A62: jne loc_6716A75;");
    asm("loc_6716A64: pushl 0x14(%ebp);");
    asm("loc_6716A67: pushl 0x10(%ebp);");
    asm("loc_6716A6A: pushl 0xC(%ebp);");
    asm("loc_6716A6D: pushl 8(%ebp);");
    asm("loc_6716A70: call _sub_6716A76;");
    asm("loc_6716A75: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716A76() // ?__ArrayUnwind@@YGXPAXIHP6EX0@Z@Z
{
    __DEBUG_ASM(6716A76);
    // chunk 0x6716A76 _sub_6716A76
    asm("loc_6716A76: push %ebp;");
    asm("loc_6716A77: mov %esp,%ebp;");
    asm("loc_6716A79: push $0xFFFFFFFF;");
    asm("loc_6716A7B: push $_data_67178F8;");
    asm("loc_6716A80: push $_sub_6716C6E;");
    asm("loc_6716A85: mov %fs:0,%eax;");
    asm("loc_6716A8B: push %eax;");
    asm("loc_6716A8C: mov %esp,%fs:0;");
    asm("loc_6716A93: push %ecx;");
    asm("loc_6716A94: push %ecx;");
    asm("loc_6716A95: push %ebx;");
    asm("loc_6716A96: push %esi;");
    asm("loc_6716A97: push %edi;");
    asm("loc_6716A98: mov %esp,-0x18(%ebp);");
    asm("loc_6716A9B: andl $0,-4(%ebp);");
    asm("loc_6716A9F: decl 0x10(%ebp);");
    asm("loc_6716AA2: js loc_6716ABF;");
    asm("loc_6716AA4: mov 8(%ebp),%ecx;");
    asm("loc_6716AA7: sub 0xC(%ebp),%ecx;");
    asm("loc_6716AAA: mov %ecx,8(%ebp);");
    asm("loc_6716AAD: calll *0x14(%ebp);");
    asm("loc_6716AB0: jmp loc_6716A9F;");
    asm("loc_6716AB2: pushl -0x14(%ebp);");
    asm("loc_6716AB5: call _sub_6716AD4;");
    asm("loc_6716ABA: pop %ecx;");
    asm("loc_6716ABB: ret;");
    asm("loc_6716ABC: mov -0x18(%ebp),%esp;");
    asm("loc_6716ABF: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_6716AC3: mov -0x10(%ebp),%ecx;");
    asm("loc_6716AC6: mov %ecx,%fs:0;");
    asm("loc_6716ACD: pop %edi;");
    asm("loc_6716ACE: pop %esi;");
    asm("loc_6716ACF: pop %ebx;");
    asm("loc_6716AD0: leave;");
    asm("loc_6716AD1: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716AD4() // _unknown_libname_1
{
    __DEBUG_ASM(6716AD4);
    // chunk 0x6716AD4 _sub_6716AD4
    asm("loc_6716AD4: mov 4(%esp),%eax;");
    asm("loc_6716AD8: mov (%eax),%eax;");
    asm("loc_6716ADA: cmpl $0xE06D7363,(%eax);");
    asm("loc_6716AE0: je loc_6716AE5;");
    asm("loc_6716AE2: xor %eax,%eax;");
    asm("loc_6716AE4: ret;");
    asm("loc_6716AE5: jmp _sub_6716C74;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716AF0() // __alloca_probe
{
    __DEBUG_ASM(6716AF0);
    // chunk 0x6716AF0 _sub_6716AF0
    asm("loc_6716AF0: push %ecx;");
    asm("loc_6716AF1: cmp $0x1000,%eax;");
    asm("loc_6716AF6: lea 8(%esp),%ecx;");
    asm("loc_6716AFA: jb loc_6716B10;");
    asm("loc_6716AFC: sub $0x1000,%ecx;");
    asm("loc_6716B02: sub $0x1000,%eax;");
    asm("loc_6716B07: test %eax,(%ecx);");
    asm("loc_6716B09: cmp $0x1000,%eax;");
    asm("loc_6716B0E: jae loc_6716AFC;");
    asm("loc_6716B10: sub %eax,%ecx;");
    asm("loc_6716B12: mov %esp,%eax;");
    asm("loc_6716B14: test %eax,(%ecx);");
    asm("loc_6716B16: mov %ecx,%esp;");
    asm("loc_6716B18: mov (%eax),%ecx;");
    asm("loc_6716B1A: mov 4(%eax),%eax;");
    asm("loc_6716B1D: push %eax;");
    asm("loc_6716B1E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716B20() // _ftol
{
    __DEBUG_ASM(6716B20);
    // chunk 0x6716B20 _sub_6716B20
    asm("loc_6716B20: jmpl *_import_67170C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716B26() // __CRT_INIT@12
{
    __DEBUG_ASM(6716B26);
    // chunk 0x6716B26 _sub_6716B26
    asm("loc_6716B26: mov 8(%esp),%eax;");
    asm("loc_6716B2A: test %eax,%eax;");
    asm("loc_6716B2C: jne loc_6716B3C;");
    asm("loc_6716B2E: cmp %eax,_data_671CFEC;");
    asm("loc_6716B34: jle loc_6716B64;");
    asm("loc_6716B36: decl _data_671CFEC;");
    asm("loc_6716B3C: mov _import_67170E8,%ecx;");
    asm("loc_6716B42: cmp $1,%eax;");
    asm("loc_6716B45: mov (%ecx),%ecx;");
    asm("loc_6716B47: mov %ecx,_data_671D034;");
    asm("loc_6716B4D: jne loc_6716B8E;");
    asm("loc_6716B4F: push $0x80;");
    asm("loc_6716B54: calll *_import_67170C4;");
    asm("loc_6716B5A: test %eax,%eax;");
    asm("loc_6716B5C: pop %ecx;");
    asm("loc_6716B5D: mov %eax,_data_671D03C;");
    asm("loc_6716B62: jne loc_6716B68;");
    asm("loc_6716B64: xor %eax,%eax;");
    asm("loc_6716B66: jmp loc_6716BCE;");
    asm("loc_6716B68: andl $0,(%eax);");
    asm("loc_6716B6B: mov _data_671D03C,%eax;");
    asm("loc_6716B70: push $_data_671900C;");
    asm("loc_6716B75: push $_data_6719000;");
    asm("loc_6716B7A: mov %eax,_data_671D038;");
    asm("loc_6716B7F: call _sub_6716C7A;");
    asm("loc_6716B84: incl _data_671CFEC;");
    asm("loc_6716B8A: pop %ecx;");
    asm("loc_6716B8B: pop %ecx;");
    asm("loc_6716B8C: jmp loc_6716BCB;");
    asm("loc_6716B8E: test %eax,%eax;");
    asm("loc_6716B90: jne loc_6716BCB;");
    asm("loc_6716B92: mov _data_671D03C,%eax;");
    asm("loc_6716B97: test %eax,%eax;");
    asm("loc_6716B99: je loc_6716BCB;");
    asm("loc_6716B9B: mov _data_671D038,%ecx;");
    asm("loc_6716BA1: push %esi;");
    asm("loc_6716BA2: lea -4(%ecx),%esi;");
    asm("loc_6716BA5: cmp %eax,%esi;");
    asm("loc_6716BA7: jb loc_6716BBB;");
    asm("loc_6716BA9: mov (%esi),%ecx;");
    asm("loc_6716BAB: test %ecx,%ecx;");
    asm("loc_6716BAD: je loc_6716BB6;");
    asm("loc_6716BAF: call *%ecx;");
    asm("loc_6716BB1: mov _data_671D03C,%eax;");
    asm("loc_6716BB6: sub $4,%esi;");
    asm("loc_6716BB9: jmp loc_6716BA5;");
    asm("loc_6716BBB: push %eax;");
    asm("loc_6716BBC: calll *_import_67170C8;");
    asm("loc_6716BC2: andl $0,_data_671D03C;");
    asm("loc_6716BC9: pop %ecx;");
    asm("loc_6716BCA: pop %esi;");
    asm("loc_6716BCB: push $1;");
    asm("loc_6716BCD: pop %eax;");
    asm("loc_6716BCE: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716BD1() // _DllEntryPoint
{
    __DEBUG_ASM(6716BD1);
    // chunk 0x6716BD1 _sub_6716BD1
    asm("loc_6716BD1: push %ebp;");
    asm("loc_6716BD2: mov %esp,%ebp;");
    asm("loc_6716BD4: push %ebx;");
    asm("loc_6716BD5: mov 8(%ebp),%ebx;");
    asm("loc_6716BD8: push %esi;");
    asm("loc_6716BD9: mov 0xC(%ebp),%esi;");
    asm("loc_6716BDC: push %edi;");
    asm("loc_6716BDD: mov 0x10(%ebp),%edi;");
    asm("loc_6716BE0: test %esi,%esi;");
    asm("loc_6716BE2: jne loc_6716BED;");
    asm("loc_6716BE4: cmpl $0,_data_671CFEC;");
    asm("loc_6716BEB: jmp loc_6716C13;");
    asm("loc_6716BED: cmp $1,%esi;");
    asm("loc_6716BF0: je loc_6716BF7;");
    asm("loc_6716BF2: cmp $2,%esi;");
    asm("loc_6716BF5: jne loc_6716C19;");
    asm("loc_6716BF7: mov _data_671D040,%eax;");
    asm("loc_6716BFC: test %eax,%eax;");
    asm("loc_6716BFE: je loc_6716C09;");
    asm("loc_6716C00: push %edi;");
    asm("loc_6716C01: push %esi;");
    asm("loc_6716C02: push %ebx;");
    asm("loc_6716C03: call *%eax;");
    asm("loc_6716C05: test %eax,%eax;");
    asm("loc_6716C07: je loc_6716C15;");
    asm("loc_6716C09: push %edi;");
    asm("loc_6716C0A: push %esi;");
    asm("loc_6716C0B: push %ebx;");
    asm("loc_6716C0C: call _sub_6716B26;");
    asm("loc_6716C11: test %eax,%eax;");
    asm("loc_6716C13: jne loc_6716C19;");
    asm("loc_6716C15: xor %eax,%eax;");
    asm("loc_6716C17: jmp loc_6716C67;");
    asm("loc_6716C19: push %edi;");
    asm("loc_6716C1A: push %esi;");
    asm("loc_6716C1B: push %ebx;");
    asm("loc_6716C1C: call _sub_6716C80;");
    asm("loc_6716C21: cmp $1,%esi;");
    asm("loc_6716C24: mov %eax,0xC(%ebp);");
    asm("loc_6716C27: jne loc_6716C35;");
    asm("loc_6716C29: test %eax,%eax;");
    asm("loc_6716C2B: jne loc_6716C64;");
    asm("loc_6716C2D: push %edi;");
    asm("loc_6716C2E: push %eax;");
    asm("loc_6716C2F: push %ebx;");
    asm("loc_6716C30: call _sub_6716B26;");
    asm("loc_6716C35: test %esi,%esi;");
    asm("loc_6716C37: je loc_6716C3E;");
    asm("loc_6716C39: cmp $3,%esi;");
    asm("loc_6716C3C: jne loc_6716C64;");
    asm("loc_6716C3E: push %edi;");
    asm("loc_6716C3F: push %esi;");
    asm("loc_6716C40: push %ebx;");
    asm("loc_6716C41: call _sub_6716B26;");
    asm("loc_6716C46: test %eax,%eax;");
    asm("loc_6716C48: jne loc_6716C4D;");
    asm("loc_6716C4A: and %eax,0xC(%ebp);");
    asm("loc_6716C4D: cmpl $0,0xC(%ebp);");
    asm("loc_6716C51: je loc_6716C64;");
    asm("loc_6716C53: mov _data_671D040,%eax;");
    asm("loc_6716C58: test %eax,%eax;");
    asm("loc_6716C5A: je loc_6716C64;");
    asm("loc_6716C5C: push %edi;");
    asm("loc_6716C5D: push %esi;");
    asm("loc_6716C5E: push %ebx;");
    asm("loc_6716C5F: call *%eax;");
    asm("loc_6716C61: mov %eax,0xC(%ebp);");
    asm("loc_6716C64: mov 0xC(%ebp),%eax;");
    asm("loc_6716C67: pop %edi;");
    asm("loc_6716C68: pop %esi;");
    asm("loc_6716C69: pop %ebx;");
    asm("loc_6716C6A: pop %ebp;");
    asm("loc_6716C6B: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716C6E() // _except_handler3
{
    __DEBUG_ASM(6716C6E);
    // chunk 0x6716C6E _sub_6716C6E
    asm("loc_6716C6E: jmpl *_import_67170DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716C74() // ?terminate@@YAXXZ
{
    __DEBUG_ASM(6716C74);
    // chunk 0x6716C74 _sub_6716C74
    asm("loc_6716C74: jmpl *_import_67170E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716C7A() // _initterm
{
    __DEBUG_ASM(6716C7A);
    // chunk 0x6716C7A _sub_6716C7A
    asm("loc_6716C7A: jmpl *_import_67170EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716C80() // _DllMain@12
{
    __DEBUG_ASM(6716C80);
    // chunk 0x6716C80 _sub_6716C80
    asm("loc_6716C80: cmpl $1,8(%esp);");
    asm("loc_6716C85: jne loc_6716C9A;");
    asm("loc_6716C87: cmpl $0,_data_671D040;");
    asm("loc_6716C8E: jne loc_6716C9A;");
    asm("loc_6716C90: pushl 4(%esp);");
    asm("loc_6716C94: calll *_import_67170A0;");
    asm("loc_6716C9A: push $1;");
    asm("loc_6716C9C: pop %eax;");
    asm("loc_6716C9D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716CE0() // _sub_6716CE0
{
    __DEBUG_ASM(6716CE0);
    // chunk 0x6716CE0 _sub_6716CE0
    asm("loc_6716CE0: mov -0x10(%ebp),%ecx;");
    asm("loc_6716CE3: jmp _sub_6712720;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6716CE8() // ??0IMEInputBox@@QAE@PBUtagLOGFONTA@@@Z_SEH
{
    __DEBUG_ASM(6716CE8);
    // chunk 0x6716CE8 _sub_6716CE8
    asm("loc_6716CE8: mov $_data_6717954,%eax;");
    asm("loc_6716CED: jmp _sub_67169E8;");
    asm("int3;"); // unreachable
}
#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __INTELLISENSE__
