#ifndef __INTELLISENSE__
// clang-format off
#include "..\..\PCH.h"
#pragma init_seg(lib)
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

_naked _weak void _sub_6C02500() // _sub_6C02500
{
    __DEBUG_ASM(6C02500);
    // chunk 0x6C02500 _sub_6C02500
    asm("loc_6C02500: mov _data_6C0E474,%eax;");
    asm("loc_6C02505: mov %eax,_data_6C14128;");
    asm("loc_6C0250A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02510() // _sub_6C02510
{
    __DEBUG_ASM(6C02510);
    // chunk 0x6C02510 _sub_6C02510
    asm("loc_6C02510: mov _data_6C0E474,%eax;");
    asm("loc_6C02515: mov %eax,_data_6C1412C;");
    asm("loc_6C0251A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02520() // _sub_6C02520
{
    __DEBUG_ASM(6C02520);
    // chunk 0x6C02520 _sub_6C02520
    asm("loc_6C02520: mov _data_6C0E478,%eax;");
    asm("loc_6C02525: mov %eax,_data_6C14124;");
    asm("loc_6C0252A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02530() // _sub_6C02530
{
    __DEBUG_ASM(6C02530);
    // chunk 0x6C02530 _sub_6C02530
    asm("loc_6C02530: mov 8(%esp),%eax;");
    asm("loc_6C02534: push %ebx;");
    asm("loc_6C02535: push %esi;");
    asm("loc_6C02536: push %edi;");
    asm("loc_6C02537: mov %ecx,%edi;");
    asm("loc_6C02539: mov 0x10(%esp),%ecx;");
    asm("loc_6C0253D: lea 0x10(%edi),%esi;");
    asm("loc_6C02540: mov %eax,4(%esi);");
    asm("loc_6C02543: mov (%ecx),%edx;");
    asm("loc_6C02545: mov %edx,8(%esi);");
    asm("loc_6C02548: movl $0,(%esi);");
    asm("loc_6C0254E: movl $0,0xC(%esi);");
    asm("loc_6C02555: mov 0x14(%edi),%eax;");
    asm("loc_6C02558: push %esi;");
    asm("loc_6C02559: push %eax;");
    asm("loc_6C0255A: lea 0x18(%edi),%ebx;");
    asm("loc_6C0255D: push %ebx;");
    asm("loc_6C0255E: mov %edi,%ecx;");
    asm("loc_6C02560: call _sub_6BEBE50;");
    asm("loc_6C02565: test %eax,%eax;");
    asm("loc_6C02567: mov %eax,0x1C(%edi);");
    asm("loc_6C0256A: je loc_6C02577;");
    asm("loc_6C0256C: pop %edi;");
    asm("loc_6C0256D: pop %esi;");
    asm("loc_6C0256E: mov $0x16,%eax;");
    asm("loc_6C02573: pop %ebx;");
    asm("loc_6C02574: ret $0xC;");
    asm("loc_6C02577: mov (%esi),%edx;");
    asm("loc_6C02579: mov 4(%esi),%ecx;");
    asm("loc_6C0257C: add $4,%edx;");
    asm("loc_6C0257F: mov %edx,%eax;");
    asm("loc_6C02581: cmp %ecx,%eax;");
    asm("loc_6C02583: mov %edx,(%esi);");
    asm("loc_6C02585: jbe loc_6C0258E;");
    asm("loc_6C02587: movl $0x16,0xC(%esi);");
    asm("loc_6C0258E: mov 0x1C(%edi),%eax;");
    asm("loc_6C02591: test %eax,%eax;");
    asm("loc_6C02593: je loc_6C025A0;");
    asm("loc_6C02595: pop %edi;");
    asm("loc_6C02596: pop %esi;");
    asm("loc_6C02597: mov $0x16,%eax;");
    asm("loc_6C0259C: pop %ebx;");
    asm("loc_6C0259D: ret $0xC;");
    asm("loc_6C025A0: mov (%ebx),%eax;");
    asm("loc_6C025A2: mov 0x20(%edi),%ecx;");
    asm("loc_6C025A5: mov %ecx,(%eax);");
    asm("loc_6C025A7: mov 0x14(%edi),%edx;");
    asm("loc_6C025AA: push %esi;");
    asm("loc_6C025AB: push %edx;");
    asm("loc_6C025AC: add $4,%eax;");
    asm("loc_6C025AF: push %ebx;");
    asm("loc_6C025B0: mov %edi,%ecx;");
    asm("loc_6C025B2: mov %eax,(%ebx);");
    asm("loc_6C025B4: call _sub_6BEBEA0;");
    asm("loc_6C025B9: test %eax,%eax;");
    asm("loc_6C025BB: mov %eax,0x1C(%edi);");
    asm("loc_6C025BE: je loc_6C025CB;");
    asm("loc_6C025C0: pop %edi;");
    asm("loc_6C025C1: pop %esi;");
    asm("loc_6C025C2: mov $0x16,%eax;");
    asm("loc_6C025C7: pop %ebx;");
    asm("loc_6C025C8: ret $0xC;");
    asm("loc_6C025CB: mov (%esi),%eax;");
    asm("loc_6C025CD: mov 0x18(%esp),%ecx;");
    asm("loc_6C025D1: mov %eax,(%ecx);");
    asm("loc_6C025D3: mov 0xC(%edi),%edx;");
    asm("loc_6C025D6: push %edx;");
    asm("loc_6C025D7: call _sub_6BEC3B0;");
    asm("loc_6C025DC: mov %eax,%ecx;");
    asm("loc_6C025DE: mov (%ecx),%edi;");
    asm("loc_6C025E0: mov 0x18(%ecx),%edx;");
    asm("loc_6C025E3: add $4,%esp;");
    asm("loc_6C025E6: inc %edi;");
    asm("loc_6C025E7: mov %edi,(%ecx);");
    asm("loc_6C025E9: mov (%esi),%eax;");
    asm("loc_6C025EB: add %eax,%edx;");
    asm("loc_6C025ED: mov 0x10(%ecx),%eax;");
    asm("loc_6C025F0: mov %edx,0x18(%ecx);");
    asm("loc_6C025F3: mov (%esi),%esi;");
    asm("loc_6C025F5: cmp %eax,%esi;");
    asm("loc_6C025F7: jbe loc_6C025FC;");
    asm("loc_6C025F9: mov %esi,0x10(%ecx);");
    asm("loc_6C025FC: mov 0x18(%ecx),%eax;");
    asm("loc_6C025FF: xor %edx,%edx;");
    asm("loc_6C02601: div %edi;");
    asm("loc_6C02603: pop %edi;");
    asm("loc_6C02604: pop %esi;");
    asm("loc_6C02605: pop %ebx;");
    asm("loc_6C02606: mov %eax,8(%ecx);");
    asm("loc_6C02609: xor %eax,%eax;");
    asm("loc_6C0260B: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02610() // _sub_6C02610
{
    __DEBUG_ASM(6C02610);
    // chunk 0x6C02610 _sub_6C02610
    asm("loc_6C02610: mov 4(%esp),%eax;");
    asm("loc_6C02614: push %ebx;");
    asm("loc_6C02615: push %ebp;");
    asm("loc_6C02616: mov 0x10(%esp),%ebp;");
    asm("loc_6C0261A: push %esi;");
    asm("loc_6C0261B: push %edi;");
    asm("loc_6C0261C: mov %ecx,%edi;");
    asm("loc_6C0261E: lea 0x10(%edi),%esi;");
    asm("loc_6C02621: push %esi;");
    asm("loc_6C02622: push %ebp;");
    asm("loc_6C02623: lea 0x18(%edi),%ebx;");
    asm("loc_6C02626: push %ebx;");
    asm("loc_6C02627: mov %ebp,4(%esi);");
    asm("loc_6C0262A: mov %eax,8(%esi);");
    asm("loc_6C0262D: movl $0,(%esi);");
    asm("loc_6C02633: movl $0,0xC(%esi);");
    asm("loc_6C0263A: call _sub_6BEBE90;");
    asm("loc_6C0263F: test %eax,%eax;");
    asm("loc_6C02641: mov %eax,0x1C(%edi);");
    asm("loc_6C02644: je loc_6C02652;");
    asm("loc_6C02646: pop %edi;");
    asm("loc_6C02647: pop %esi;");
    asm("loc_6C02648: pop %ebp;");
    asm("loc_6C02649: mov $0x17,%eax;");
    asm("loc_6C0264E: pop %ebx;");
    asm("loc_6C0264F: ret $0xC;");
    asm("loc_6C02652: mov (%esi),%edx;");
    asm("loc_6C02654: mov 4(%esi),%ecx;");
    asm("loc_6C02657: add $4,%edx;");
    asm("loc_6C0265A: mov %edx,%eax;");
    asm("loc_6C0265C: cmp %ecx,%eax;");
    asm("loc_6C0265E: mov %edx,(%esi);");
    asm("loc_6C02660: jbe loc_6C02669;");
    asm("loc_6C02662: movl $0x17,0xC(%esi);");
    asm("loc_6C02669: mov 0x1C(%edi),%eax;");
    asm("loc_6C0266C: test %eax,%eax;");
    asm("loc_6C0266E: jne loc_6C026E3;");
    asm("loc_6C02670: mov (%ebx),%eax;");
    asm("loc_6C02672: mov (%eax),%ecx;");
    asm("loc_6C02674: push %esi;");
    asm("loc_6C02675: push %ebp;");
    asm("loc_6C02676: mov %ecx,0x20(%edi);");
    asm("loc_6C02679: add $4,%eax;");
    asm("loc_6C0267C: push %ebx;");
    asm("loc_6C0267D: mov %edi,%ecx;");
    asm("loc_6C0267F: mov %eax,(%ebx);");
    asm("loc_6C02681: call _sub_6BEBEB0;");
    asm("loc_6C02686: test %eax,%eax;");
    asm("loc_6C02688: mov %eax,0x1C(%edi);");
    asm("loc_6C0268B: je loc_6C02699;");
    asm("loc_6C0268D: pop %edi;");
    asm("loc_6C0268E: pop %esi;");
    asm("loc_6C0268F: pop %ebp;");
    asm("loc_6C02690: mov $0x17,%eax;");
    asm("loc_6C02695: pop %ebx;");
    asm("loc_6C02696: ret $0xC;");
    asm("loc_6C02699: mov (%esi),%edx;");
    asm("loc_6C0269B: mov 0x1C(%esp),%eax;");
    asm("loc_6C0269F: mov %edx,(%eax);");
    asm("loc_6C026A1: mov 0xC(%edi),%ecx;");
    asm("loc_6C026A4: push %ecx;");
    asm("loc_6C026A5: call _sub_6BEC3B0;");
    asm("loc_6C026AA: mov %eax,%ecx;");
    asm("loc_6C026AC: mov 4(%ecx),%edx;");
    asm("loc_6C026AF: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C026B2: mov 0x14(%ecx),%eax;");
    asm("loc_6C026B5: add $4,%esp;");
    asm("loc_6C026B8: inc %edx;");
    asm("loc_6C026B9: mov %edx,4(%ecx);");
    asm("loc_6C026BC: mov %edx,%edi;");
    asm("loc_6C026BE: mov (%esi),%edx;");
    asm("loc_6C026C0: add $2,%edx;");
    asm("loc_6C026C3: add %edx,%ebp;");
    asm("loc_6C026C5: mov %ebp,0x1C(%ecx);");
    asm("loc_6C026C8: mov (%esi),%esi;");
    asm("loc_6C026CA: add $2,%eax;");
    asm("loc_6C026CD: cmp %eax,%esi;");
    asm("loc_6C026CF: jbe loc_6C026D7;");
    asm("loc_6C026D1: add $2,%esi;");
    asm("loc_6C026D4: mov %esi,0x14(%ecx);");
    asm("loc_6C026D7: mov 0x1C(%ecx),%eax;");
    asm("loc_6C026DA: xor %edx,%edx;");
    asm("loc_6C026DC: div %edi;");
    asm("loc_6C026DE: mov %eax,0xC(%ecx);");
    asm("loc_6C026E1: xor %eax,%eax;");
    asm("loc_6C026E3: pop %edi;");
    asm("loc_6C026E4: pop %esi;");
    asm("loc_6C026E5: pop %ebp;");
    asm("loc_6C026E6: pop %ebx;");
    asm("loc_6C026E7: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C026F0() // _sub_6C026F0
{
    __DEBUG_ASM(6C026F0);
    // chunk 0x6C026F0 _sub_6C026F0
    asm("loc_6C026F0: mov _data_6C0E480,%eax;");
    asm("loc_6C026F5: mov %eax,_data_6C14138;");
    asm("loc_6C026FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02700() // _sub_6C02700
{
    __DEBUG_ASM(6C02700);
    // chunk 0x6C02700 _sub_6C02700
    asm("loc_6C02700: mov _data_6C0E480,%eax;");
    asm("loc_6C02705: mov %eax,_data_6C1413C;");
    asm("loc_6C0270A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02710() // _sub_6C02710
{
    __DEBUG_ASM(6C02710);
    // chunk 0x6C02710 _sub_6C02710
    asm("loc_6C02710: mov _data_6C0E484,%eax;");
    asm("loc_6C02715: mov %eax,_data_6C14134;");
    asm("loc_6C0271A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02720() // _sub_6C02720
{
    __DEBUG_ASM(6C02720);
    // chunk 0x6C02720 _sub_6C02720
    asm("loc_6C02720: mov _data_6C0E48C,%eax;");
    asm("loc_6C02725: mov %eax,_data_6C14148;");
    asm("loc_6C0272A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02730() // _sub_6C02730
{
    __DEBUG_ASM(6C02730);
    // chunk 0x6C02730 _sub_6C02730
    asm("loc_6C02730: mov _data_6C0E48C,%eax;");
    asm("loc_6C02735: mov %eax,_data_6C1414C;");
    asm("loc_6C0273A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02740() // _sub_6C02740
{
    __DEBUG_ASM(6C02740);
    // chunk 0x6C02740 _sub_6C02740
    asm("loc_6C02740: mov _data_6C0E490,%eax;");
    asm("loc_6C02745: mov %eax,_data_6C14144;");
    asm("loc_6C0274A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02750() // _sub_6C02750
{
    __DEBUG_ASM(6C02750);
    // chunk 0x6C02750 _sub_6C02750
    asm("loc_6C02750: mov 8(%esp),%eax;");
    asm("loc_6C02754: push %ebx;");
    asm("loc_6C02755: push %esi;");
    asm("loc_6C02756: push %edi;");
    asm("loc_6C02757: mov %ecx,%edi;");
    asm("loc_6C02759: mov 0x10(%esp),%ecx;");
    asm("loc_6C0275D: lea 0x10(%edi),%esi;");
    asm("loc_6C02760: mov %eax,4(%esi);");
    asm("loc_6C02763: mov (%ecx),%edx;");
    asm("loc_6C02765: mov %edx,8(%esi);");
    asm("loc_6C02768: movl $0,(%esi);");
    asm("loc_6C0276E: movl $0,0xC(%esi);");
    asm("loc_6C02775: mov 0x14(%edi),%eax;");
    asm("loc_6C02778: push %esi;");
    asm("loc_6C02779: push %eax;");
    asm("loc_6C0277A: lea 0x18(%edi),%ebx;");
    asm("loc_6C0277D: push %ebx;");
    asm("loc_6C0277E: mov %edi,%ecx;");
    asm("loc_6C02780: call _sub_6BEBE50;");
    asm("loc_6C02785: test %eax,%eax;");
    asm("loc_6C02787: mov %eax,0x1C(%edi);");
    asm("loc_6C0278A: je loc_6C02797;");
    asm("loc_6C0278C: pop %edi;");
    asm("loc_6C0278D: pop %esi;");
    asm("loc_6C0278E: mov $0x16,%eax;");
    asm("loc_6C02793: pop %ebx;");
    asm("loc_6C02794: ret $0xC;");
    asm("loc_6C02797: mov (%esi),%edx;");
    asm("loc_6C02799: mov 4(%esi),%ecx;");
    asm("loc_6C0279C: add $4,%edx;");
    asm("loc_6C0279F: mov %edx,%eax;");
    asm("loc_6C027A1: cmp %ecx,%eax;");
    asm("loc_6C027A3: mov %edx,(%esi);");
    asm("loc_6C027A5: jbe loc_6C027AE;");
    asm("loc_6C027A7: movl $0x16,0xC(%esi);");
    asm("loc_6C027AE: mov 0x1C(%edi),%eax;");
    asm("loc_6C027B1: test %eax,%eax;");
    asm("loc_6C027B3: je loc_6C027C0;");
    asm("loc_6C027B5: pop %edi;");
    asm("loc_6C027B6: pop %esi;");
    asm("loc_6C027B7: mov $0x16,%eax;");
    asm("loc_6C027BC: pop %ebx;");
    asm("loc_6C027BD: ret $0xC;");
    asm("loc_6C027C0: mov (%ebx),%eax;");
    asm("loc_6C027C2: mov 0x20(%edi),%ecx;");
    asm("loc_6C027C5: mov %ecx,(%eax);");
    asm("loc_6C027C7: add $4,%eax;");
    asm("loc_6C027CA: mov %eax,(%ebx);");
    asm("loc_6C027CC: mov (%esi),%edx;");
    asm("loc_6C027CE: mov 4(%esi),%ecx;");
    asm("loc_6C027D1: add $4,%edx;");
    asm("loc_6C027D4: mov %edx,%eax;");
    asm("loc_6C027D6: cmp %ecx,%eax;");
    asm("loc_6C027D8: mov %edx,(%esi);");
    asm("loc_6C027DA: jbe loc_6C027E3;");
    asm("loc_6C027DC: movl $0x16,0xC(%esi);");
    asm("loc_6C027E3: mov 0x1C(%edi),%eax;");
    asm("loc_6C027E6: test %eax,%eax;");
    asm("loc_6C027E8: je loc_6C027F5;");
    asm("loc_6C027EA: pop %edi;");
    asm("loc_6C027EB: pop %esi;");
    asm("loc_6C027EC: mov $0x16,%eax;");
    asm("loc_6C027F1: pop %ebx;");
    asm("loc_6C027F2: ret $0xC;");
    asm("loc_6C027F5: mov (%ebx),%eax;");
    asm("loc_6C027F7: mov 0x24(%edi),%edx;");
    asm("loc_6C027FA: mov %edx,(%eax);");
    asm("loc_6C027FC: add $4,%eax;");
    asm("loc_6C027FF: mov %eax,(%ebx);");
    asm("loc_6C02801: mov (%esi),%edx;");
    asm("loc_6C02803: mov 4(%esi),%ecx;");
    asm("loc_6C02806: inc %edx;");
    asm("loc_6C02807: mov %edx,%eax;");
    asm("loc_6C02809: cmp %ecx,%eax;");
    asm("loc_6C0280B: mov %edx,(%esi);");
    asm("loc_6C0280D: jbe loc_6C02816;");
    asm("loc_6C0280F: movl $0x16,0xC(%esi);");
    asm("loc_6C02816: mov 0x1C(%edi),%eax;");
    asm("loc_6C02819: test %eax,%eax;");
    asm("loc_6C0281B: je loc_6C02828;");
    asm("loc_6C0281D: pop %edi;");
    asm("loc_6C0281E: pop %esi;");
    asm("loc_6C0281F: mov $0x16,%eax;");
    asm("loc_6C02824: pop %ebx;");
    asm("loc_6C02825: ret $0xC;");
    asm("loc_6C02828: mov (%ebx),%eax;");
    asm("loc_6C0282A: mov 0x28(%edi),%cl;");
    asm("loc_6C0282D: mov %cl,(%eax);");
    asm("loc_6C0282F: mov 0x14(%edi),%edx;");
    asm("loc_6C02832: push %esi;");
    asm("loc_6C02833: push %edx;");
    asm("loc_6C02834: inc %eax;");
    asm("loc_6C02835: push %ebx;");
    asm("loc_6C02836: mov %edi,%ecx;");
    asm("loc_6C02838: mov %eax,(%ebx);");
    asm("loc_6C0283A: call _sub_6BEBEA0;");
    asm("loc_6C0283F: test %eax,%eax;");
    asm("loc_6C02841: mov %eax,0x1C(%edi);");
    asm("loc_6C02844: je loc_6C02851;");
    asm("loc_6C02846: pop %edi;");
    asm("loc_6C02847: pop %esi;");
    asm("loc_6C02848: mov $0x16,%eax;");
    asm("loc_6C0284D: pop %ebx;");
    asm("loc_6C0284E: ret $0xC;");
    asm("loc_6C02851: mov (%esi),%eax;");
    asm("loc_6C02853: mov 0x18(%esp),%ecx;");
    asm("loc_6C02857: mov %eax,(%ecx);");
    asm("loc_6C02859: mov 0xC(%edi),%edx;");
    asm("loc_6C0285C: push %edx;");
    asm("loc_6C0285D: call _sub_6BEC3B0;");
    asm("loc_6C02862: mov %eax,%ecx;");
    asm("loc_6C02864: mov (%ecx),%edi;");
    asm("loc_6C02866: mov 0x18(%ecx),%edx;");
    asm("loc_6C02869: add $4,%esp;");
    asm("loc_6C0286C: inc %edi;");
    asm("loc_6C0286D: mov %edi,(%ecx);");
    asm("loc_6C0286F: mov (%esi),%eax;");
    asm("loc_6C02871: add %eax,%edx;");
    asm("loc_6C02873: mov 0x10(%ecx),%eax;");
    asm("loc_6C02876: mov %edx,0x18(%ecx);");
    asm("loc_6C02879: mov (%esi),%esi;");
    asm("loc_6C0287B: cmp %eax,%esi;");
    asm("loc_6C0287D: jbe loc_6C02882;");
    asm("loc_6C0287F: mov %esi,0x10(%ecx);");
    asm("loc_6C02882: mov 0x18(%ecx),%eax;");
    asm("loc_6C02885: xor %edx,%edx;");
    asm("loc_6C02887: div %edi;");
    asm("loc_6C02889: pop %edi;");
    asm("loc_6C0288A: pop %esi;");
    asm("loc_6C0288B: pop %ebx;");
    asm("loc_6C0288C: mov %eax,8(%ecx);");
    asm("loc_6C0288F: xor %eax,%eax;");
    asm("loc_6C02891: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C028A0() // _sub_6C028A0
{
    __DEBUG_ASM(6C028A0);
    // chunk 0x6C028A0 _sub_6C028A0
    asm("loc_6C028A0: mov 4(%esp),%eax;");
    asm("loc_6C028A4: push %ebx;");
    asm("loc_6C028A5: push %ebp;");
    asm("loc_6C028A6: mov 0x10(%esp),%ebp;");
    asm("loc_6C028AA: push %esi;");
    asm("loc_6C028AB: push %edi;");
    asm("loc_6C028AC: mov %ecx,%edi;");
    asm("loc_6C028AE: lea 0x10(%edi),%esi;");
    asm("loc_6C028B1: push %esi;");
    asm("loc_6C028B2: push %ebp;");
    asm("loc_6C028B3: lea 0x18(%edi),%ebx;");
    asm("loc_6C028B6: push %ebx;");
    asm("loc_6C028B7: mov %ebp,4(%esi);");
    asm("loc_6C028BA: mov %eax,8(%esi);");
    asm("loc_6C028BD: movl $0,(%esi);");
    asm("loc_6C028C3: movl $0,0xC(%esi);");
    asm("loc_6C028CA: call _sub_6BEBE90;");
    asm("loc_6C028CF: test %eax,%eax;");
    asm("loc_6C028D1: mov %eax,0x1C(%edi);");
    asm("loc_6C028D4: je loc_6C028E2;");
    asm("loc_6C028D6: pop %edi;");
    asm("loc_6C028D7: pop %esi;");
    asm("loc_6C028D8: pop %ebp;");
    asm("loc_6C028D9: mov $0x17,%eax;");
    asm("loc_6C028DE: pop %ebx;");
    asm("loc_6C028DF: ret $0xC;");
    asm("loc_6C028E2: mov (%esi),%edx;");
    asm("loc_6C028E4: mov 4(%esi),%ecx;");
    asm("loc_6C028E7: add $4,%edx;");
    asm("loc_6C028EA: mov %edx,%eax;");
    asm("loc_6C028EC: cmp %ecx,%eax;");
    asm("loc_6C028EE: mov %edx,(%esi);");
    asm("loc_6C028F0: mov $0x17,%ecx;");
    asm("loc_6C028F5: jbe loc_6C028FA;");
    asm("loc_6C028F7: mov %ecx,0xC(%esi);");
    asm("loc_6C028FA: mov 0x1C(%edi),%eax;");
    asm("loc_6C028FD: test %eax,%eax;");
    asm("loc_6C028FF: jne loc_6C029C0;");
    asm("loc_6C02905: mov (%ebx),%eax;");
    asm("loc_6C02907: mov (%eax),%edx;");
    asm("loc_6C02909: add $4,%eax;");
    asm("loc_6C0290C: mov %eax,(%ebx);");
    asm("loc_6C0290E: mov %edx,0x20(%edi);");
    asm("loc_6C02911: mov (%esi),%eax;");
    asm("loc_6C02913: mov 4(%esi),%edx;");
    asm("loc_6C02916: add $4,%eax;");
    asm("loc_6C02919: cmp %edx,%eax;");
    asm("loc_6C0291B: mov %eax,(%esi);");
    asm("loc_6C0291D: jbe loc_6C02922;");
    asm("loc_6C0291F: mov %ecx,0xC(%esi);");
    asm("loc_6C02922: mov 0x1C(%edi),%eax;");
    asm("loc_6C02925: test %eax,%eax;");
    asm("loc_6C02927: jne loc_6C029C0;");
    asm("loc_6C0292D: mov (%ebx),%eax;");
    asm("loc_6C0292F: mov (%eax),%edx;");
    asm("loc_6C02931: add $4,%eax;");
    asm("loc_6C02934: mov %eax,(%ebx);");
    asm("loc_6C02936: mov %edx,0x24(%edi);");
    asm("loc_6C02939: mov (%esi),%eax;");
    asm("loc_6C0293B: mov 4(%esi),%edx;");
    asm("loc_6C0293E: inc %eax;");
    asm("loc_6C0293F: cmp %edx,%eax;");
    asm("loc_6C02941: mov %eax,(%esi);");
    asm("loc_6C02943: jbe loc_6C02948;");
    asm("loc_6C02945: mov %ecx,0xC(%esi);");
    asm("loc_6C02948: mov 0x1C(%edi),%eax;");
    asm("loc_6C0294B: test %eax,%eax;");
    asm("loc_6C0294D: jne loc_6C029C0;");
    asm("loc_6C0294F: mov (%ebx),%eax;");
    asm("loc_6C02951: mov (%eax),%cl;");
    asm("loc_6C02953: push %esi;");
    asm("loc_6C02954: push %ebp;");
    asm("loc_6C02955: mov %cl,0x28(%edi);");
    asm("loc_6C02958: inc %eax;");
    asm("loc_6C02959: push %ebx;");
    asm("loc_6C0295A: mov %edi,%ecx;");
    asm("loc_6C0295C: mov %eax,(%ebx);");
    asm("loc_6C0295E: call _sub_6BEBEB0;");
    asm("loc_6C02963: test %eax,%eax;");
    asm("loc_6C02965: mov %eax,0x1C(%edi);");
    asm("loc_6C02968: je loc_6C02976;");
    asm("loc_6C0296A: pop %edi;");
    asm("loc_6C0296B: pop %esi;");
    asm("loc_6C0296C: pop %ebp;");
    asm("loc_6C0296D: mov $0x17,%eax;");
    asm("loc_6C02972: pop %ebx;");
    asm("loc_6C02973: ret $0xC;");
    asm("loc_6C02976: mov (%esi),%edx;");
    asm("loc_6C02978: mov 0x1C(%esp),%eax;");
    asm("loc_6C0297C: mov %edx,(%eax);");
    asm("loc_6C0297E: mov 0xC(%edi),%ecx;");
    asm("loc_6C02981: push %ecx;");
    asm("loc_6C02982: call _sub_6BEC3B0;");
    asm("loc_6C02987: mov %eax,%ecx;");
    asm("loc_6C02989: mov 4(%ecx),%edx;");
    asm("loc_6C0298C: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C0298F: mov 0x14(%ecx),%eax;");
    asm("loc_6C02992: add $4,%esp;");
    asm("loc_6C02995: inc %edx;");
    asm("loc_6C02996: mov %edx,4(%ecx);");
    asm("loc_6C02999: mov %edx,%edi;");
    asm("loc_6C0299B: mov (%esi),%edx;");
    asm("loc_6C0299D: add $2,%edx;");
    asm("loc_6C029A0: add %edx,%ebp;");
    asm("loc_6C029A2: mov %ebp,0x1C(%ecx);");
    asm("loc_6C029A5: mov (%esi),%esi;");
    asm("loc_6C029A7: add $2,%eax;");
    asm("loc_6C029AA: cmp %eax,%esi;");
    asm("loc_6C029AC: jbe loc_6C029B4;");
    asm("loc_6C029AE: add $2,%esi;");
    asm("loc_6C029B1: mov %esi,0x14(%ecx);");
    asm("loc_6C029B4: mov 0x1C(%ecx),%eax;");
    asm("loc_6C029B7: xor %edx,%edx;");
    asm("loc_6C029B9: div %edi;");
    asm("loc_6C029BB: mov %eax,0xC(%ecx);");
    asm("loc_6C029BE: xor %eax,%eax;");
    asm("loc_6C029C0: pop %edi;");
    asm("loc_6C029C1: pop %esi;");
    asm("loc_6C029C2: pop %ebp;");
    asm("loc_6C029C3: pop %ebx;");
    asm("loc_6C029C4: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C029D0() // _sub_6C029D0
{
    __DEBUG_ASM(6C029D0);
    // chunk 0x6C029D0 _sub_6C029D0
    asm("loc_6C029D0: mov 8(%esp),%eax;");
    asm("loc_6C029D4: push %ebx;");
    asm("loc_6C029D5: push %esi;");
    asm("loc_6C029D6: push %edi;");
    asm("loc_6C029D7: mov %ecx,%edi;");
    asm("loc_6C029D9: mov 0x10(%esp),%ecx;");
    asm("loc_6C029DD: lea 0x10(%edi),%esi;");
    asm("loc_6C029E0: mov %eax,4(%esi);");
    asm("loc_6C029E3: mov (%ecx),%edx;");
    asm("loc_6C029E5: mov %edx,8(%esi);");
    asm("loc_6C029E8: movl $0,(%esi);");
    asm("loc_6C029EE: movl $0,0xC(%esi);");
    asm("loc_6C029F5: mov 0x14(%edi),%eax;");
    asm("loc_6C029F8: push %esi;");
    asm("loc_6C029F9: push %eax;");
    asm("loc_6C029FA: lea 0x18(%edi),%ebx;");
    asm("loc_6C029FD: push %ebx;");
    asm("loc_6C029FE: mov %edi,%ecx;");
    asm("loc_6C02A00: call _sub_6BEBE50;");
    asm("loc_6C02A05: test %eax,%eax;");
    asm("loc_6C02A07: mov %eax,0x1C(%edi);");
    asm("loc_6C02A0A: je loc_6C02A17;");
    asm("loc_6C02A0C: pop %edi;");
    asm("loc_6C02A0D: pop %esi;");
    asm("loc_6C02A0E: mov $0x16,%eax;");
    asm("loc_6C02A13: pop %ebx;");
    asm("loc_6C02A14: ret $0xC;");
    asm("loc_6C02A17: mov (%esi),%edx;");
    asm("loc_6C02A19: mov 4(%esi),%ecx;");
    asm("loc_6C02A1C: add $4,%edx;");
    asm("loc_6C02A1F: mov %edx,%eax;");
    asm("loc_6C02A21: cmp %ecx,%eax;");
    asm("loc_6C02A23: mov %edx,(%esi);");
    asm("loc_6C02A25: jbe loc_6C02A2E;");
    asm("loc_6C02A27: movl $0x16,0xC(%esi);");
    asm("loc_6C02A2E: mov 0x1C(%edi),%eax;");
    asm("loc_6C02A31: test %eax,%eax;");
    asm("loc_6C02A33: je loc_6C02A40;");
    asm("loc_6C02A35: pop %edi;");
    asm("loc_6C02A36: pop %esi;");
    asm("loc_6C02A37: mov $0x16,%eax;");
    asm("loc_6C02A3C: pop %ebx;");
    asm("loc_6C02A3D: ret $0xC;");
    asm("loc_6C02A40: mov (%ebx),%eax;");
    asm("loc_6C02A42: mov 0x20(%edi),%ecx;");
    asm("loc_6C02A45: mov %ecx,(%eax);");
    asm("loc_6C02A47: mov 0x14(%edi),%edx;");
    asm("loc_6C02A4A: push %esi;");
    asm("loc_6C02A4B: push %edx;");
    asm("loc_6C02A4C: add $4,%eax;");
    asm("loc_6C02A4F: push %ebx;");
    asm("loc_6C02A50: mov %edi,%ecx;");
    asm("loc_6C02A52: mov %eax,(%ebx);");
    asm("loc_6C02A54: call _sub_6BEBEA0;");
    asm("loc_6C02A59: test %eax,%eax;");
    asm("loc_6C02A5B: mov %eax,0x1C(%edi);");
    asm("loc_6C02A5E: je loc_6C02A6B;");
    asm("loc_6C02A60: pop %edi;");
    asm("loc_6C02A61: pop %esi;");
    asm("loc_6C02A62: mov $0x16,%eax;");
    asm("loc_6C02A67: pop %ebx;");
    asm("loc_6C02A68: ret $0xC;");
    asm("loc_6C02A6B: mov (%esi),%eax;");
    asm("loc_6C02A6D: mov 0x18(%esp),%ecx;");
    asm("loc_6C02A71: mov %eax,(%ecx);");
    asm("loc_6C02A73: mov 0xC(%edi),%edx;");
    asm("loc_6C02A76: push %edx;");
    asm("loc_6C02A77: call _sub_6BEC3B0;");
    asm("loc_6C02A7C: mov %eax,%ecx;");
    asm("loc_6C02A7E: mov (%ecx),%edi;");
    asm("loc_6C02A80: mov 0x18(%ecx),%edx;");
    asm("loc_6C02A83: add $4,%esp;");
    asm("loc_6C02A86: inc %edi;");
    asm("loc_6C02A87: mov %edi,(%ecx);");
    asm("loc_6C02A89: mov (%esi),%eax;");
    asm("loc_6C02A8B: add %eax,%edx;");
    asm("loc_6C02A8D: mov 0x10(%ecx),%eax;");
    asm("loc_6C02A90: mov %edx,0x18(%ecx);");
    asm("loc_6C02A93: mov (%esi),%esi;");
    asm("loc_6C02A95: cmp %eax,%esi;");
    asm("loc_6C02A97: jbe loc_6C02A9C;");
    asm("loc_6C02A99: mov %esi,0x10(%ecx);");
    asm("loc_6C02A9C: mov 0x18(%ecx),%eax;");
    asm("loc_6C02A9F: xor %edx,%edx;");
    asm("loc_6C02AA1: div %edi;");
    asm("loc_6C02AA3: pop %edi;");
    asm("loc_6C02AA4: pop %esi;");
    asm("loc_6C02AA5: pop %ebx;");
    asm("loc_6C02AA6: mov %eax,8(%ecx);");
    asm("loc_6C02AA9: xor %eax,%eax;");
    asm("loc_6C02AAB: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02AB0() // _sub_6C02AB0
{
    __DEBUG_ASM(6C02AB0);
    // chunk 0x6C02AB0 _sub_6C02AB0
    asm("loc_6C02AB0: mov 4(%esp),%eax;");
    asm("loc_6C02AB4: push %ebx;");
    asm("loc_6C02AB5: push %ebp;");
    asm("loc_6C02AB6: mov 0x10(%esp),%ebp;");
    asm("loc_6C02ABA: push %esi;");
    asm("loc_6C02ABB: push %edi;");
    asm("loc_6C02ABC: mov %ecx,%edi;");
    asm("loc_6C02ABE: lea 0x10(%edi),%esi;");
    asm("loc_6C02AC1: push %esi;");
    asm("loc_6C02AC2: push %ebp;");
    asm("loc_6C02AC3: lea 0x18(%edi),%ebx;");
    asm("loc_6C02AC6: push %ebx;");
    asm("loc_6C02AC7: mov %ebp,4(%esi);");
    asm("loc_6C02ACA: mov %eax,8(%esi);");
    asm("loc_6C02ACD: movl $0,(%esi);");
    asm("loc_6C02AD3: movl $0,0xC(%esi);");
    asm("loc_6C02ADA: call _sub_6BEBE90;");
    asm("loc_6C02ADF: test %eax,%eax;");
    asm("loc_6C02AE1: mov %eax,0x1C(%edi);");
    asm("loc_6C02AE4: je loc_6C02AF2;");
    asm("loc_6C02AE6: pop %edi;");
    asm("loc_6C02AE7: pop %esi;");
    asm("loc_6C02AE8: pop %ebp;");
    asm("loc_6C02AE9: mov $0x17,%eax;");
    asm("loc_6C02AEE: pop %ebx;");
    asm("loc_6C02AEF: ret $0xC;");
    asm("loc_6C02AF2: mov (%esi),%edx;");
    asm("loc_6C02AF4: mov 4(%esi),%ecx;");
    asm("loc_6C02AF7: add $4,%edx;");
    asm("loc_6C02AFA: mov %edx,%eax;");
    asm("loc_6C02AFC: cmp %ecx,%eax;");
    asm("loc_6C02AFE: mov %edx,(%esi);");
    asm("loc_6C02B00: jbe loc_6C02B09;");
    asm("loc_6C02B02: movl $0x17,0xC(%esi);");
    asm("loc_6C02B09: mov 0x1C(%edi),%eax;");
    asm("loc_6C02B0C: test %eax,%eax;");
    asm("loc_6C02B0E: jne loc_6C02B83;");
    asm("loc_6C02B10: mov (%ebx),%eax;");
    asm("loc_6C02B12: mov (%eax),%ecx;");
    asm("loc_6C02B14: push %esi;");
    asm("loc_6C02B15: push %ebp;");
    asm("loc_6C02B16: mov %ecx,0x20(%edi);");
    asm("loc_6C02B19: add $4,%eax;");
    asm("loc_6C02B1C: push %ebx;");
    asm("loc_6C02B1D: mov %edi,%ecx;");
    asm("loc_6C02B1F: mov %eax,(%ebx);");
    asm("loc_6C02B21: call _sub_6BEBEB0;");
    asm("loc_6C02B26: test %eax,%eax;");
    asm("loc_6C02B28: mov %eax,0x1C(%edi);");
    asm("loc_6C02B2B: je loc_6C02B39;");
    asm("loc_6C02B2D: pop %edi;");
    asm("loc_6C02B2E: pop %esi;");
    asm("loc_6C02B2F: pop %ebp;");
    asm("loc_6C02B30: mov $0x17,%eax;");
    asm("loc_6C02B35: pop %ebx;");
    asm("loc_6C02B36: ret $0xC;");
    asm("loc_6C02B39: mov (%esi),%edx;");
    asm("loc_6C02B3B: mov 0x1C(%esp),%eax;");
    asm("loc_6C02B3F: mov %edx,(%eax);");
    asm("loc_6C02B41: mov 0xC(%edi),%ecx;");
    asm("loc_6C02B44: push %ecx;");
    asm("loc_6C02B45: call _sub_6BEC3B0;");
    asm("loc_6C02B4A: mov %eax,%ecx;");
    asm("loc_6C02B4C: mov 4(%ecx),%edx;");
    asm("loc_6C02B4F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C02B52: mov 0x14(%ecx),%eax;");
    asm("loc_6C02B55: add $4,%esp;");
    asm("loc_6C02B58: inc %edx;");
    asm("loc_6C02B59: mov %edx,4(%ecx);");
    asm("loc_6C02B5C: mov %edx,%edi;");
    asm("loc_6C02B5E: mov (%esi),%edx;");
    asm("loc_6C02B60: add $2,%edx;");
    asm("loc_6C02B63: add %edx,%ebp;");
    asm("loc_6C02B65: mov %ebp,0x1C(%ecx);");
    asm("loc_6C02B68: mov (%esi),%esi;");
    asm("loc_6C02B6A: add $2,%eax;");
    asm("loc_6C02B6D: cmp %eax,%esi;");
    asm("loc_6C02B6F: jbe loc_6C02B77;");
    asm("loc_6C02B71: add $2,%esi;");
    asm("loc_6C02B74: mov %esi,0x14(%ecx);");
    asm("loc_6C02B77: mov 0x1C(%ecx),%eax;");
    asm("loc_6C02B7A: xor %edx,%edx;");
    asm("loc_6C02B7C: div %edi;");
    asm("loc_6C02B7E: mov %eax,0xC(%ecx);");
    asm("loc_6C02B81: xor %eax,%eax;");
    asm("loc_6C02B83: pop %edi;");
    asm("loc_6C02B84: pop %esi;");
    asm("loc_6C02B85: pop %ebp;");
    asm("loc_6C02B86: pop %ebx;");
    asm("loc_6C02B87: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02B90() // _sub_6C02B90
{
    __DEBUG_ASM(6C02B90);
    // chunk 0x6C02B90 _sub_6C02B90
    asm("loc_6C02B90: mov _data_6C0E498,%eax;");
    asm("loc_6C02B95: mov %eax,_data_6C14158;");
    asm("loc_6C02B9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02BA0() // _sub_6C02BA0
{
    __DEBUG_ASM(6C02BA0);
    // chunk 0x6C02BA0 _sub_6C02BA0
    asm("loc_6C02BA0: mov _data_6C0E498,%eax;");
    asm("loc_6C02BA5: mov %eax,_data_6C1415C;");
    asm("loc_6C02BAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02BB0() // _sub_6C02BB0
{
    __DEBUG_ASM(6C02BB0);
    // chunk 0x6C02BB0 _sub_6C02BB0
    asm("loc_6C02BB0: mov _data_6C0E49C,%eax;");
    asm("loc_6C02BB5: mov %eax,_data_6C14154;");
    asm("loc_6C02BBA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02BC0() // _sub_6C02BC0
{
    __DEBUG_ASM(6C02BC0);
    // chunk 0x6C02BC0 _sub_6C02BC0
    asm("loc_6C02BC0: mov 8(%esp),%eax;");
    asm("loc_6C02BC4: push %ebx;");
    asm("loc_6C02BC5: push %esi;");
    asm("loc_6C02BC6: push %edi;");
    asm("loc_6C02BC7: mov %ecx,%edi;");
    asm("loc_6C02BC9: mov 0x10(%esp),%ecx;");
    asm("loc_6C02BCD: lea 0x10(%edi),%esi;");
    asm("loc_6C02BD0: mov %eax,4(%esi);");
    asm("loc_6C02BD3: mov (%ecx),%edx;");
    asm("loc_6C02BD5: mov %edx,8(%esi);");
    asm("loc_6C02BD8: movl $0,(%esi);");
    asm("loc_6C02BDE: movl $0,0xC(%esi);");
    asm("loc_6C02BE5: mov 0x14(%edi),%eax;");
    asm("loc_6C02BE8: push %esi;");
    asm("loc_6C02BE9: push %eax;");
    asm("loc_6C02BEA: lea 0x18(%edi),%ebx;");
    asm("loc_6C02BED: push %ebx;");
    asm("loc_6C02BEE: mov %edi,%ecx;");
    asm("loc_6C02BF0: call _sub_6BEBE50;");
    asm("loc_6C02BF5: test %eax,%eax;");
    asm("loc_6C02BF7: mov %eax,0x1C(%edi);");
    asm("loc_6C02BFA: je loc_6C02C07;");
    asm("loc_6C02BFC: pop %edi;");
    asm("loc_6C02BFD: pop %esi;");
    asm("loc_6C02BFE: mov $0x16,%eax;");
    asm("loc_6C02C03: pop %ebx;");
    asm("loc_6C02C04: ret $0xC;");
    asm("loc_6C02C07: mov (%esi),%edx;");
    asm("loc_6C02C09: mov 4(%esi),%ecx;");
    asm("loc_6C02C0C: add $4,%edx;");
    asm("loc_6C02C0F: mov %edx,%eax;");
    asm("loc_6C02C11: cmp %ecx,%eax;");
    asm("loc_6C02C13: mov %edx,(%esi);");
    asm("loc_6C02C15: jbe loc_6C02C1E;");
    asm("loc_6C02C17: movl $0x16,0xC(%esi);");
    asm("loc_6C02C1E: mov 0x1C(%edi),%eax;");
    asm("loc_6C02C21: test %eax,%eax;");
    asm("loc_6C02C23: je loc_6C02C30;");
    asm("loc_6C02C25: pop %edi;");
    asm("loc_6C02C26: pop %esi;");
    asm("loc_6C02C27: mov $0x16,%eax;");
    asm("loc_6C02C2C: pop %ebx;");
    asm("loc_6C02C2D: ret $0xC;");
    asm("loc_6C02C30: mov (%ebx),%eax;");
    asm("loc_6C02C32: mov 0x20(%edi),%ecx;");
    asm("loc_6C02C35: mov %ecx,(%eax);");
    asm("loc_6C02C37: mov 0x14(%edi),%edx;");
    asm("loc_6C02C3A: push %esi;");
    asm("loc_6C02C3B: push %edx;");
    asm("loc_6C02C3C: add $4,%eax;");
    asm("loc_6C02C3F: push %ebx;");
    asm("loc_6C02C40: mov %edi,%ecx;");
    asm("loc_6C02C42: mov %eax,(%ebx);");
    asm("loc_6C02C44: call _sub_6BEBEA0;");
    asm("loc_6C02C49: test %eax,%eax;");
    asm("loc_6C02C4B: mov %eax,0x1C(%edi);");
    asm("loc_6C02C4E: je loc_6C02C5B;");
    asm("loc_6C02C50: pop %edi;");
    asm("loc_6C02C51: pop %esi;");
    asm("loc_6C02C52: mov $0x16,%eax;");
    asm("loc_6C02C57: pop %ebx;");
    asm("loc_6C02C58: ret $0xC;");
    asm("loc_6C02C5B: mov (%esi),%eax;");
    asm("loc_6C02C5D: mov 0x18(%esp),%ecx;");
    asm("loc_6C02C61: mov %eax,(%ecx);");
    asm("loc_6C02C63: mov 0xC(%edi),%edx;");
    asm("loc_6C02C66: push %edx;");
    asm("loc_6C02C67: call _sub_6BEC3B0;");
    asm("loc_6C02C6C: mov %eax,%ecx;");
    asm("loc_6C02C6E: mov (%ecx),%edi;");
    asm("loc_6C02C70: mov 0x18(%ecx),%edx;");
    asm("loc_6C02C73: add $4,%esp;");
    asm("loc_6C02C76: inc %edi;");
    asm("loc_6C02C77: mov %edi,(%ecx);");
    asm("loc_6C02C79: mov (%esi),%eax;");
    asm("loc_6C02C7B: add %eax,%edx;");
    asm("loc_6C02C7D: mov 0x10(%ecx),%eax;");
    asm("loc_6C02C80: mov %edx,0x18(%ecx);");
    asm("loc_6C02C83: mov (%esi),%esi;");
    asm("loc_6C02C85: cmp %eax,%esi;");
    asm("loc_6C02C87: jbe loc_6C02C8C;");
    asm("loc_6C02C89: mov %esi,0x10(%ecx);");
    asm("loc_6C02C8C: mov 0x18(%ecx),%eax;");
    asm("loc_6C02C8F: xor %edx,%edx;");
    asm("loc_6C02C91: div %edi;");
    asm("loc_6C02C93: pop %edi;");
    asm("loc_6C02C94: pop %esi;");
    asm("loc_6C02C95: pop %ebx;");
    asm("loc_6C02C96: mov %eax,8(%ecx);");
    asm("loc_6C02C99: xor %eax,%eax;");
    asm("loc_6C02C9B: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02CA0() // _sub_6C02CA0
{
    __DEBUG_ASM(6C02CA0);
    // chunk 0x6C02CA0 _sub_6C02CA0
    asm("loc_6C02CA0: mov 4(%esp),%eax;");
    asm("loc_6C02CA4: push %ebx;");
    asm("loc_6C02CA5: push %ebp;");
    asm("loc_6C02CA6: mov 0x10(%esp),%ebp;");
    asm("loc_6C02CAA: push %esi;");
    asm("loc_6C02CAB: push %edi;");
    asm("loc_6C02CAC: mov %ecx,%edi;");
    asm("loc_6C02CAE: lea 0x10(%edi),%esi;");
    asm("loc_6C02CB1: push %esi;");
    asm("loc_6C02CB2: push %ebp;");
    asm("loc_6C02CB3: lea 0x18(%edi),%ebx;");
    asm("loc_6C02CB6: push %ebx;");
    asm("loc_6C02CB7: mov %ebp,4(%esi);");
    asm("loc_6C02CBA: mov %eax,8(%esi);");
    asm("loc_6C02CBD: movl $0,(%esi);");
    asm("loc_6C02CC3: movl $0,0xC(%esi);");
    asm("loc_6C02CCA: call _sub_6BEBE90;");
    asm("loc_6C02CCF: test %eax,%eax;");
    asm("loc_6C02CD1: mov %eax,0x1C(%edi);");
    asm("loc_6C02CD4: je loc_6C02CE2;");
    asm("loc_6C02CD6: pop %edi;");
    asm("loc_6C02CD7: pop %esi;");
    asm("loc_6C02CD8: pop %ebp;");
    asm("loc_6C02CD9: mov $0x17,%eax;");
    asm("loc_6C02CDE: pop %ebx;");
    asm("loc_6C02CDF: ret $0xC;");
    asm("loc_6C02CE2: mov (%esi),%edx;");
    asm("loc_6C02CE4: mov 4(%esi),%ecx;");
    asm("loc_6C02CE7: add $4,%edx;");
    asm("loc_6C02CEA: mov %edx,%eax;");
    asm("loc_6C02CEC: cmp %ecx,%eax;");
    asm("loc_6C02CEE: mov %edx,(%esi);");
    asm("loc_6C02CF0: jbe loc_6C02CF9;");
    asm("loc_6C02CF2: movl $0x17,0xC(%esi);");
    asm("loc_6C02CF9: mov 0x1C(%edi),%eax;");
    asm("loc_6C02CFC: test %eax,%eax;");
    asm("loc_6C02CFE: jne loc_6C02D73;");
    asm("loc_6C02D00: mov (%ebx),%eax;");
    asm("loc_6C02D02: mov (%eax),%ecx;");
    asm("loc_6C02D04: push %esi;");
    asm("loc_6C02D05: push %ebp;");
    asm("loc_6C02D06: mov %ecx,0x20(%edi);");
    asm("loc_6C02D09: add $4,%eax;");
    asm("loc_6C02D0C: push %ebx;");
    asm("loc_6C02D0D: mov %edi,%ecx;");
    asm("loc_6C02D0F: mov %eax,(%ebx);");
    asm("loc_6C02D11: call _sub_6BEBEB0;");
    asm("loc_6C02D16: test %eax,%eax;");
    asm("loc_6C02D18: mov %eax,0x1C(%edi);");
    asm("loc_6C02D1B: je loc_6C02D29;");
    asm("loc_6C02D1D: pop %edi;");
    asm("loc_6C02D1E: pop %esi;");
    asm("loc_6C02D1F: pop %ebp;");
    asm("loc_6C02D20: mov $0x17,%eax;");
    asm("loc_6C02D25: pop %ebx;");
    asm("loc_6C02D26: ret $0xC;");
    asm("loc_6C02D29: mov (%esi),%edx;");
    asm("loc_6C02D2B: mov 0x1C(%esp),%eax;");
    asm("loc_6C02D2F: mov %edx,(%eax);");
    asm("loc_6C02D31: mov 0xC(%edi),%ecx;");
    asm("loc_6C02D34: push %ecx;");
    asm("loc_6C02D35: call _sub_6BEC3B0;");
    asm("loc_6C02D3A: mov %eax,%ecx;");
    asm("loc_6C02D3C: mov 4(%ecx),%edx;");
    asm("loc_6C02D3F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C02D42: mov 0x14(%ecx),%eax;");
    asm("loc_6C02D45: add $4,%esp;");
    asm("loc_6C02D48: inc %edx;");
    asm("loc_6C02D49: mov %edx,4(%ecx);");
    asm("loc_6C02D4C: mov %edx,%edi;");
    asm("loc_6C02D4E: mov (%esi),%edx;");
    asm("loc_6C02D50: add $2,%edx;");
    asm("loc_6C02D53: add %edx,%ebp;");
    asm("loc_6C02D55: mov %ebp,0x1C(%ecx);");
    asm("loc_6C02D58: mov (%esi),%esi;");
    asm("loc_6C02D5A: add $2,%eax;");
    asm("loc_6C02D5D: cmp %eax,%esi;");
    asm("loc_6C02D5F: jbe loc_6C02D67;");
    asm("loc_6C02D61: add $2,%esi;");
    asm("loc_6C02D64: mov %esi,0x14(%ecx);");
    asm("loc_6C02D67: mov 0x1C(%ecx),%eax;");
    asm("loc_6C02D6A: xor %edx,%edx;");
    asm("loc_6C02D6C: div %edi;");
    asm("loc_6C02D6E: mov %eax,0xC(%ecx);");
    asm("loc_6C02D71: xor %eax,%eax;");
    asm("loc_6C02D73: pop %edi;");
    asm("loc_6C02D74: pop %esi;");
    asm("loc_6C02D75: pop %ebp;");
    asm("loc_6C02D76: pop %ebx;");
    asm("loc_6C02D77: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02D80() // _sub_6C02D80
{
    __DEBUG_ASM(6C02D80);
    // chunk 0x6C02D80 _sub_6C02D80
    asm("loc_6C02D80: mov _data_6C0E4A4,%eax;");
    asm("loc_6C02D85: mov %eax,_data_6C14168;");
    asm("loc_6C02D8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02D90() // _sub_6C02D90
{
    __DEBUG_ASM(6C02D90);
    // chunk 0x6C02D90 _sub_6C02D90
    asm("loc_6C02D90: mov _data_6C0E4A4,%eax;");
    asm("loc_6C02D95: mov %eax,_data_6C1416C;");
    asm("loc_6C02D9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02DA0() // _sub_6C02DA0
{
    __DEBUG_ASM(6C02DA0);
    // chunk 0x6C02DA0 _sub_6C02DA0
    asm("loc_6C02DA0: mov _data_6C0E4A8,%eax;");
    asm("loc_6C02DA5: mov %eax,_data_6C14164;");
    asm("loc_6C02DAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02DB0() // _sub_6C02DB0
{
    __DEBUG_ASM(6C02DB0);
    // chunk 0x6C02DB0 _sub_6C02DB0
    asm("loc_6C02DB0: mov _data_6C0E4B0,%eax;");
    asm("loc_6C02DB5: mov %eax,_data_6C14178;");
    asm("loc_6C02DBA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02DC0() // _sub_6C02DC0
{
    __DEBUG_ASM(6C02DC0);
    // chunk 0x6C02DC0 _sub_6C02DC0
    asm("loc_6C02DC0: mov _data_6C0E4B0,%eax;");
    asm("loc_6C02DC5: mov %eax,_data_6C1417C;");
    asm("loc_6C02DCA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02DD0() // _sub_6C02DD0
{
    __DEBUG_ASM(6C02DD0);
    // chunk 0x6C02DD0 _sub_6C02DD0
    asm("loc_6C02DD0: mov _data_6C0E4B4,%eax;");
    asm("loc_6C02DD5: mov %eax,_data_6C14174;");
    asm("loc_6C02DDA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02DE0() // _sub_6C02DE0
{
    __DEBUG_ASM(6C02DE0);
    // chunk 0x6C02DE0 _sub_6C02DE0
    asm("loc_6C02DE0: mov 8(%esp),%eax;");
    asm("loc_6C02DE4: push %ebx;");
    asm("loc_6C02DE5: push %esi;");
    asm("loc_6C02DE6: push %edi;");
    asm("loc_6C02DE7: mov %ecx,%edi;");
    asm("loc_6C02DE9: mov 0x10(%esp),%ecx;");
    asm("loc_6C02DED: lea 0x10(%edi),%esi;");
    asm("loc_6C02DF0: mov %eax,4(%esi);");
    asm("loc_6C02DF3: mov (%ecx),%edx;");
    asm("loc_6C02DF5: mov %edx,8(%esi);");
    asm("loc_6C02DF8: movl $0,(%esi);");
    asm("loc_6C02DFE: movl $0,0xC(%esi);");
    asm("loc_6C02E05: mov 0x14(%edi),%eax;");
    asm("loc_6C02E08: push %esi;");
    asm("loc_6C02E09: push %eax;");
    asm("loc_6C02E0A: lea 0x18(%edi),%ebx;");
    asm("loc_6C02E0D: push %ebx;");
    asm("loc_6C02E0E: mov %edi,%ecx;");
    asm("loc_6C02E10: call _sub_6BEBE50;");
    asm("loc_6C02E15: test %eax,%eax;");
    asm("loc_6C02E17: mov %eax,0x1C(%edi);");
    asm("loc_6C02E1A: je loc_6C02E27;");
    asm("loc_6C02E1C: pop %edi;");
    asm("loc_6C02E1D: pop %esi;");
    asm("loc_6C02E1E: mov $0x16,%eax;");
    asm("loc_6C02E23: pop %ebx;");
    asm("loc_6C02E24: ret $0xC;");
    asm("loc_6C02E27: mov (%esi),%edx;");
    asm("loc_6C02E29: mov 4(%esi),%ecx;");
    asm("loc_6C02E2C: add $4,%edx;");
    asm("loc_6C02E2F: mov %edx,%eax;");
    asm("loc_6C02E31: cmp %ecx,%eax;");
    asm("loc_6C02E33: mov %edx,(%esi);");
    asm("loc_6C02E35: jbe loc_6C02E3E;");
    asm("loc_6C02E37: movl $0x16,0xC(%esi);");
    asm("loc_6C02E3E: mov 0x1C(%edi),%eax;");
    asm("loc_6C02E41: test %eax,%eax;");
    asm("loc_6C02E43: je loc_6C02E50;");
    asm("loc_6C02E45: pop %edi;");
    asm("loc_6C02E46: pop %esi;");
    asm("loc_6C02E47: mov $0x16,%eax;");
    asm("loc_6C02E4C: pop %ebx;");
    asm("loc_6C02E4D: ret $0xC;");
    asm("loc_6C02E50: mov (%ebx),%eax;");
    asm("loc_6C02E52: mov 0x20(%edi),%ecx;");
    asm("loc_6C02E55: mov %ecx,(%eax);");
    asm("loc_6C02E57: mov 0x14(%edi),%edx;");
    asm("loc_6C02E5A: push %esi;");
    asm("loc_6C02E5B: push %edx;");
    asm("loc_6C02E5C: add $4,%eax;");
    asm("loc_6C02E5F: push %ebx;");
    asm("loc_6C02E60: mov %edi,%ecx;");
    asm("loc_6C02E62: mov %eax,(%ebx);");
    asm("loc_6C02E64: call _sub_6BEBEA0;");
    asm("loc_6C02E69: test %eax,%eax;");
    asm("loc_6C02E6B: mov %eax,0x1C(%edi);");
    asm("loc_6C02E6E: je loc_6C02E7B;");
    asm("loc_6C02E70: pop %edi;");
    asm("loc_6C02E71: pop %esi;");
    asm("loc_6C02E72: mov $0x16,%eax;");
    asm("loc_6C02E77: pop %ebx;");
    asm("loc_6C02E78: ret $0xC;");
    asm("loc_6C02E7B: mov (%esi),%eax;");
    asm("loc_6C02E7D: mov 0x18(%esp),%ecx;");
    asm("loc_6C02E81: mov %eax,(%ecx);");
    asm("loc_6C02E83: mov 0xC(%edi),%edx;");
    asm("loc_6C02E86: push %edx;");
    asm("loc_6C02E87: call _sub_6BEC3B0;");
    asm("loc_6C02E8C: mov %eax,%ecx;");
    asm("loc_6C02E8E: mov (%ecx),%edi;");
    asm("loc_6C02E90: mov 0x18(%ecx),%edx;");
    asm("loc_6C02E93: add $4,%esp;");
    asm("loc_6C02E96: inc %edi;");
    asm("loc_6C02E97: mov %edi,(%ecx);");
    asm("loc_6C02E99: mov (%esi),%eax;");
    asm("loc_6C02E9B: add %eax,%edx;");
    asm("loc_6C02E9D: mov 0x10(%ecx),%eax;");
    asm("loc_6C02EA0: mov %edx,0x18(%ecx);");
    asm("loc_6C02EA3: mov (%esi),%esi;");
    asm("loc_6C02EA5: cmp %eax,%esi;");
    asm("loc_6C02EA7: jbe loc_6C02EAC;");
    asm("loc_6C02EA9: mov %esi,0x10(%ecx);");
    asm("loc_6C02EAC: mov 0x18(%ecx),%eax;");
    asm("loc_6C02EAF: xor %edx,%edx;");
    asm("loc_6C02EB1: div %edi;");
    asm("loc_6C02EB3: pop %edi;");
    asm("loc_6C02EB4: pop %esi;");
    asm("loc_6C02EB5: pop %ebx;");
    asm("loc_6C02EB6: mov %eax,8(%ecx);");
    asm("loc_6C02EB9: xor %eax,%eax;");
    asm("loc_6C02EBB: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02EC0() // _sub_6C02EC0
{
    __DEBUG_ASM(6C02EC0);
    // chunk 0x6C02EC0 _sub_6C02EC0
    asm("loc_6C02EC0: mov 4(%esp),%eax;");
    asm("loc_6C02EC4: push %ebx;");
    asm("loc_6C02EC5: push %ebp;");
    asm("loc_6C02EC6: mov 0x10(%esp),%ebp;");
    asm("loc_6C02ECA: push %esi;");
    asm("loc_6C02ECB: push %edi;");
    asm("loc_6C02ECC: mov %ecx,%edi;");
    asm("loc_6C02ECE: lea 0x10(%edi),%esi;");
    asm("loc_6C02ED1: push %esi;");
    asm("loc_6C02ED2: push %ebp;");
    asm("loc_6C02ED3: lea 0x18(%edi),%ebx;");
    asm("loc_6C02ED6: push %ebx;");
    asm("loc_6C02ED7: mov %ebp,4(%esi);");
    asm("loc_6C02EDA: mov %eax,8(%esi);");
    asm("loc_6C02EDD: movl $0,(%esi);");
    asm("loc_6C02EE3: movl $0,0xC(%esi);");
    asm("loc_6C02EEA: call _sub_6BEBE90;");
    asm("loc_6C02EEF: test %eax,%eax;");
    asm("loc_6C02EF1: mov %eax,0x1C(%edi);");
    asm("loc_6C02EF4: je loc_6C02F02;");
    asm("loc_6C02EF6: pop %edi;");
    asm("loc_6C02EF7: pop %esi;");
    asm("loc_6C02EF8: pop %ebp;");
    asm("loc_6C02EF9: mov $0x17,%eax;");
    asm("loc_6C02EFE: pop %ebx;");
    asm("loc_6C02EFF: ret $0xC;");
    asm("loc_6C02F02: mov (%esi),%edx;");
    asm("loc_6C02F04: mov 4(%esi),%ecx;");
    asm("loc_6C02F07: add $4,%edx;");
    asm("loc_6C02F0A: mov %edx,%eax;");
    asm("loc_6C02F0C: cmp %ecx,%eax;");
    asm("loc_6C02F0E: mov %edx,(%esi);");
    asm("loc_6C02F10: jbe loc_6C02F19;");
    asm("loc_6C02F12: movl $0x17,0xC(%esi);");
    asm("loc_6C02F19: mov 0x1C(%edi),%eax;");
    asm("loc_6C02F1C: test %eax,%eax;");
    asm("loc_6C02F1E: jne loc_6C02F93;");
    asm("loc_6C02F20: mov (%ebx),%eax;");
    asm("loc_6C02F22: mov (%eax),%ecx;");
    asm("loc_6C02F24: push %esi;");
    asm("loc_6C02F25: push %ebp;");
    asm("loc_6C02F26: mov %ecx,0x20(%edi);");
    asm("loc_6C02F29: add $4,%eax;");
    asm("loc_6C02F2C: push %ebx;");
    asm("loc_6C02F2D: mov %edi,%ecx;");
    asm("loc_6C02F2F: mov %eax,(%ebx);");
    asm("loc_6C02F31: call _sub_6BEBEB0;");
    asm("loc_6C02F36: test %eax,%eax;");
    asm("loc_6C02F38: mov %eax,0x1C(%edi);");
    asm("loc_6C02F3B: je loc_6C02F49;");
    asm("loc_6C02F3D: pop %edi;");
    asm("loc_6C02F3E: pop %esi;");
    asm("loc_6C02F3F: pop %ebp;");
    asm("loc_6C02F40: mov $0x17,%eax;");
    asm("loc_6C02F45: pop %ebx;");
    asm("loc_6C02F46: ret $0xC;");
    asm("loc_6C02F49: mov (%esi),%edx;");
    asm("loc_6C02F4B: mov 0x1C(%esp),%eax;");
    asm("loc_6C02F4F: mov %edx,(%eax);");
    asm("loc_6C02F51: mov 0xC(%edi),%ecx;");
    asm("loc_6C02F54: push %ecx;");
    asm("loc_6C02F55: call _sub_6BEC3B0;");
    asm("loc_6C02F5A: mov %eax,%ecx;");
    asm("loc_6C02F5C: mov 4(%ecx),%edx;");
    asm("loc_6C02F5F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C02F62: mov 0x14(%ecx),%eax;");
    asm("loc_6C02F65: add $4,%esp;");
    asm("loc_6C02F68: inc %edx;");
    asm("loc_6C02F69: mov %edx,4(%ecx);");
    asm("loc_6C02F6C: mov %edx,%edi;");
    asm("loc_6C02F6E: mov (%esi),%edx;");
    asm("loc_6C02F70: add $2,%edx;");
    asm("loc_6C02F73: add %edx,%ebp;");
    asm("loc_6C02F75: mov %ebp,0x1C(%ecx);");
    asm("loc_6C02F78: mov (%esi),%esi;");
    asm("loc_6C02F7A: add $2,%eax;");
    asm("loc_6C02F7D: cmp %eax,%esi;");
    asm("loc_6C02F7F: jbe loc_6C02F87;");
    asm("loc_6C02F81: add $2,%esi;");
    asm("loc_6C02F84: mov %esi,0x14(%ecx);");
    asm("loc_6C02F87: mov 0x1C(%ecx),%eax;");
    asm("loc_6C02F8A: xor %edx,%edx;");
    asm("loc_6C02F8C: div %edi;");
    asm("loc_6C02F8E: mov %eax,0xC(%ecx);");
    asm("loc_6C02F91: xor %eax,%eax;");
    asm("loc_6C02F93: pop %edi;");
    asm("loc_6C02F94: pop %esi;");
    asm("loc_6C02F95: pop %ebp;");
    asm("loc_6C02F96: pop %ebx;");
    asm("loc_6C02F97: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02FA0() // _sub_6C02FA0
{
    __DEBUG_ASM(6C02FA0);
    // chunk 0x6C02FA0 _sub_6C02FA0
    asm("loc_6C02FA0: mov _data_6C0E4BC,%eax;");
    asm("loc_6C02FA5: mov %eax,_data_6C14188;");
    asm("loc_6C02FAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02FB0() // _sub_6C02FB0
{
    __DEBUG_ASM(6C02FB0);
    // chunk 0x6C02FB0 _sub_6C02FB0
    asm("loc_6C02FB0: mov _data_6C0E4BC,%eax;");
    asm("loc_6C02FB5: mov %eax,_data_6C1418C;");
    asm("loc_6C02FBA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02FC0() // _sub_6C02FC0
{
    __DEBUG_ASM(6C02FC0);
    // chunk 0x6C02FC0 _sub_6C02FC0
    asm("loc_6C02FC0: mov _data_6C0E4C0,%eax;");
    asm("loc_6C02FC5: mov %eax,_data_6C14184;");
    asm("loc_6C02FCA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C02FD0() // _sub_6C02FD0
{
    __DEBUG_ASM(6C02FD0);
    // chunk 0x6C02FD0 _sub_6C02FD0
    asm("loc_6C02FD0: mov 8(%esp),%eax;");
    asm("loc_6C02FD4: push %ebx;");
    asm("loc_6C02FD5: push %esi;");
    asm("loc_6C02FD6: push %edi;");
    asm("loc_6C02FD7: mov %ecx,%edi;");
    asm("loc_6C02FD9: mov 0x10(%esp),%ecx;");
    asm("loc_6C02FDD: lea 0x10(%edi),%esi;");
    asm("loc_6C02FE0: mov %eax,4(%esi);");
    asm("loc_6C02FE3: mov (%ecx),%edx;");
    asm("loc_6C02FE5: mov %edx,8(%esi);");
    asm("loc_6C02FE8: movl $0,(%esi);");
    asm("loc_6C02FEE: movl $0,0xC(%esi);");
    asm("loc_6C02FF5: mov 0x14(%edi),%eax;");
    asm("loc_6C02FF8: push %esi;");
    asm("loc_6C02FF9: push %eax;");
    asm("loc_6C02FFA: lea 0x18(%edi),%ebx;");
    asm("loc_6C02FFD: push %ebx;");
    asm("loc_6C02FFE: mov %edi,%ecx;");
    asm("loc_6C03000: call _sub_6BEBE50;");
    asm("loc_6C03005: test %eax,%eax;");
    asm("loc_6C03007: mov %eax,0x1C(%edi);");
    asm("loc_6C0300A: je loc_6C03017;");
    asm("loc_6C0300C: pop %edi;");
    asm("loc_6C0300D: pop %esi;");
    asm("loc_6C0300E: mov $0x16,%eax;");
    asm("loc_6C03013: pop %ebx;");
    asm("loc_6C03014: ret $0xC;");
    asm("loc_6C03017: mov (%esi),%edx;");
    asm("loc_6C03019: mov 4(%esi),%ecx;");
    asm("loc_6C0301C: add $4,%edx;");
    asm("loc_6C0301F: mov %edx,%eax;");
    asm("loc_6C03021: cmp %ecx,%eax;");
    asm("loc_6C03023: mov %edx,(%esi);");
    asm("loc_6C03025: jbe loc_6C0302E;");
    asm("loc_6C03027: movl $0x16,0xC(%esi);");
    asm("loc_6C0302E: mov 0x1C(%edi),%eax;");
    asm("loc_6C03031: test %eax,%eax;");
    asm("loc_6C03033: je loc_6C03040;");
    asm("loc_6C03035: pop %edi;");
    asm("loc_6C03036: pop %esi;");
    asm("loc_6C03037: mov $0x16,%eax;");
    asm("loc_6C0303C: pop %ebx;");
    asm("loc_6C0303D: ret $0xC;");
    asm("loc_6C03040: mov (%ebx),%eax;");
    asm("loc_6C03042: mov 0x20(%edi),%ecx;");
    asm("loc_6C03045: mov %ecx,(%eax);");
    asm("loc_6C03047: mov 0x14(%edi),%edx;");
    asm("loc_6C0304A: push %esi;");
    asm("loc_6C0304B: push %edx;");
    asm("loc_6C0304C: add $4,%eax;");
    asm("loc_6C0304F: push %ebx;");
    asm("loc_6C03050: mov %edi,%ecx;");
    asm("loc_6C03052: mov %eax,(%ebx);");
    asm("loc_6C03054: call _sub_6BEBEA0;");
    asm("loc_6C03059: test %eax,%eax;");
    asm("loc_6C0305B: mov %eax,0x1C(%edi);");
    asm("loc_6C0305E: je loc_6C0306B;");
    asm("loc_6C03060: pop %edi;");
    asm("loc_6C03061: pop %esi;");
    asm("loc_6C03062: mov $0x16,%eax;");
    asm("loc_6C03067: pop %ebx;");
    asm("loc_6C03068: ret $0xC;");
    asm("loc_6C0306B: mov (%esi),%eax;");
    asm("loc_6C0306D: mov 0x18(%esp),%ecx;");
    asm("loc_6C03071: mov %eax,(%ecx);");
    asm("loc_6C03073: mov 0xC(%edi),%edx;");
    asm("loc_6C03076: push %edx;");
    asm("loc_6C03077: call _sub_6BEC3B0;");
    asm("loc_6C0307C: mov %eax,%ecx;");
    asm("loc_6C0307E: mov (%ecx),%edi;");
    asm("loc_6C03080: mov 0x18(%ecx),%edx;");
    asm("loc_6C03083: add $4,%esp;");
    asm("loc_6C03086: inc %edi;");
    asm("loc_6C03087: mov %edi,(%ecx);");
    asm("loc_6C03089: mov (%esi),%eax;");
    asm("loc_6C0308B: add %eax,%edx;");
    asm("loc_6C0308D: mov 0x10(%ecx),%eax;");
    asm("loc_6C03090: mov %edx,0x18(%ecx);");
    asm("loc_6C03093: mov (%esi),%esi;");
    asm("loc_6C03095: cmp %eax,%esi;");
    asm("loc_6C03097: jbe loc_6C0309C;");
    asm("loc_6C03099: mov %esi,0x10(%ecx);");
    asm("loc_6C0309C: mov 0x18(%ecx),%eax;");
    asm("loc_6C0309F: xor %edx,%edx;");
    asm("loc_6C030A1: div %edi;");
    asm("loc_6C030A3: pop %edi;");
    asm("loc_6C030A4: pop %esi;");
    asm("loc_6C030A5: pop %ebx;");
    asm("loc_6C030A6: mov %eax,8(%ecx);");
    asm("loc_6C030A9: xor %eax,%eax;");
    asm("loc_6C030AB: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C030B0() // _sub_6C030B0
{
    __DEBUG_ASM(6C030B0);
    // chunk 0x6C030B0 _sub_6C030B0
    asm("loc_6C030B0: mov 4(%esp),%eax;");
    asm("loc_6C030B4: push %ebx;");
    asm("loc_6C030B5: push %ebp;");
    asm("loc_6C030B6: mov 0x10(%esp),%ebp;");
    asm("loc_6C030BA: push %esi;");
    asm("loc_6C030BB: push %edi;");
    asm("loc_6C030BC: mov %ecx,%edi;");
    asm("loc_6C030BE: lea 0x10(%edi),%esi;");
    asm("loc_6C030C1: push %esi;");
    asm("loc_6C030C2: push %ebp;");
    asm("loc_6C030C3: lea 0x18(%edi),%ebx;");
    asm("loc_6C030C6: push %ebx;");
    asm("loc_6C030C7: mov %ebp,4(%esi);");
    asm("loc_6C030CA: mov %eax,8(%esi);");
    asm("loc_6C030CD: movl $0,(%esi);");
    asm("loc_6C030D3: movl $0,0xC(%esi);");
    asm("loc_6C030DA: call _sub_6BEBE90;");
    asm("loc_6C030DF: test %eax,%eax;");
    asm("loc_6C030E1: mov %eax,0x1C(%edi);");
    asm("loc_6C030E4: je loc_6C030F2;");
    asm("loc_6C030E6: pop %edi;");
    asm("loc_6C030E7: pop %esi;");
    asm("loc_6C030E8: pop %ebp;");
    asm("loc_6C030E9: mov $0x17,%eax;");
    asm("loc_6C030EE: pop %ebx;");
    asm("loc_6C030EF: ret $0xC;");
    asm("loc_6C030F2: mov (%esi),%edx;");
    asm("loc_6C030F4: mov 4(%esi),%ecx;");
    asm("loc_6C030F7: add $4,%edx;");
    asm("loc_6C030FA: mov %edx,%eax;");
    asm("loc_6C030FC: cmp %ecx,%eax;");
    asm("loc_6C030FE: mov %edx,(%esi);");
    asm("loc_6C03100: jbe loc_6C03109;");
    asm("loc_6C03102: movl $0x17,0xC(%esi);");
    asm("loc_6C03109: mov 0x1C(%edi),%eax;");
    asm("loc_6C0310C: test %eax,%eax;");
    asm("loc_6C0310E: jne loc_6C03183;");
    asm("loc_6C03110: mov (%ebx),%eax;");
    asm("loc_6C03112: mov (%eax),%ecx;");
    asm("loc_6C03114: push %esi;");
    asm("loc_6C03115: push %ebp;");
    asm("loc_6C03116: mov %ecx,0x20(%edi);");
    asm("loc_6C03119: add $4,%eax;");
    asm("loc_6C0311C: push %ebx;");
    asm("loc_6C0311D: mov %edi,%ecx;");
    asm("loc_6C0311F: mov %eax,(%ebx);");
    asm("loc_6C03121: call _sub_6BEBEB0;");
    asm("loc_6C03126: test %eax,%eax;");
    asm("loc_6C03128: mov %eax,0x1C(%edi);");
    asm("loc_6C0312B: je loc_6C03139;");
    asm("loc_6C0312D: pop %edi;");
    asm("loc_6C0312E: pop %esi;");
    asm("loc_6C0312F: pop %ebp;");
    asm("loc_6C03130: mov $0x17,%eax;");
    asm("loc_6C03135: pop %ebx;");
    asm("loc_6C03136: ret $0xC;");
    asm("loc_6C03139: mov (%esi),%edx;");
    asm("loc_6C0313B: mov 0x1C(%esp),%eax;");
    asm("loc_6C0313F: mov %edx,(%eax);");
    asm("loc_6C03141: mov 0xC(%edi),%ecx;");
    asm("loc_6C03144: push %ecx;");
    asm("loc_6C03145: call _sub_6BEC3B0;");
    asm("loc_6C0314A: mov %eax,%ecx;");
    asm("loc_6C0314C: mov 4(%ecx),%edx;");
    asm("loc_6C0314F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C03152: mov 0x14(%ecx),%eax;");
    asm("loc_6C03155: add $4,%esp;");
    asm("loc_6C03158: inc %edx;");
    asm("loc_6C03159: mov %edx,4(%ecx);");
    asm("loc_6C0315C: mov %edx,%edi;");
    asm("loc_6C0315E: mov (%esi),%edx;");
    asm("loc_6C03160: add $2,%edx;");
    asm("loc_6C03163: add %edx,%ebp;");
    asm("loc_6C03165: mov %ebp,0x1C(%ecx);");
    asm("loc_6C03168: mov (%esi),%esi;");
    asm("loc_6C0316A: add $2,%eax;");
    asm("loc_6C0316D: cmp %eax,%esi;");
    asm("loc_6C0316F: jbe loc_6C03177;");
    asm("loc_6C03171: add $2,%esi;");
    asm("loc_6C03174: mov %esi,0x14(%ecx);");
    asm("loc_6C03177: mov 0x1C(%ecx),%eax;");
    asm("loc_6C0317A: xor %edx,%edx;");
    asm("loc_6C0317C: div %edi;");
    asm("loc_6C0317E: mov %eax,0xC(%ecx);");
    asm("loc_6C03181: xor %eax,%eax;");
    asm("loc_6C03183: pop %edi;");
    asm("loc_6C03184: pop %esi;");
    asm("loc_6C03185: pop %ebp;");
    asm("loc_6C03186: pop %ebx;");
    asm("loc_6C03187: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03190() // _sub_6C03190
{
    __DEBUG_ASM(6C03190);
    // chunk 0x6C03190 _sub_6C03190
    asm("loc_6C03190: mov 8(%esp),%eax;");
    asm("loc_6C03194: push %ebx;");
    asm("loc_6C03195: push %esi;");
    asm("loc_6C03196: push %edi;");
    asm("loc_6C03197: mov %ecx,%edi;");
    asm("loc_6C03199: mov 0x10(%esp),%ecx;");
    asm("loc_6C0319D: lea 0x10(%edi),%esi;");
    asm("loc_6C031A0: mov %eax,4(%esi);");
    asm("loc_6C031A3: mov (%ecx),%edx;");
    asm("loc_6C031A5: mov %edx,8(%esi);");
    asm("loc_6C031A8: movl $0,(%esi);");
    asm("loc_6C031AE: movl $0,0xC(%esi);");
    asm("loc_6C031B5: mov 0x14(%edi),%eax;");
    asm("loc_6C031B8: push %esi;");
    asm("loc_6C031B9: push %eax;");
    asm("loc_6C031BA: lea 0x18(%edi),%ebx;");
    asm("loc_6C031BD: push %ebx;");
    asm("loc_6C031BE: mov %edi,%ecx;");
    asm("loc_6C031C0: call _sub_6BEBE50;");
    asm("loc_6C031C5: test %eax,%eax;");
    asm("loc_6C031C7: mov %eax,0x1C(%edi);");
    asm("loc_6C031CA: je loc_6C031D7;");
    asm("loc_6C031CC: pop %edi;");
    asm("loc_6C031CD: pop %esi;");
    asm("loc_6C031CE: mov $0x16,%eax;");
    asm("loc_6C031D3: pop %ebx;");
    asm("loc_6C031D4: ret $0xC;");
    asm("loc_6C031D7: mov (%esi),%edx;");
    asm("loc_6C031D9: mov 4(%esi),%ecx;");
    asm("loc_6C031DC: add $4,%edx;");
    asm("loc_6C031DF: mov %edx,%eax;");
    asm("loc_6C031E1: cmp %ecx,%eax;");
    asm("loc_6C031E3: mov %edx,(%esi);");
    asm("loc_6C031E5: jbe loc_6C031EE;");
    asm("loc_6C031E7: movl $0x16,0xC(%esi);");
    asm("loc_6C031EE: mov 0x1C(%edi),%eax;");
    asm("loc_6C031F1: test %eax,%eax;");
    asm("loc_6C031F3: je loc_6C03200;");
    asm("loc_6C031F5: pop %edi;");
    asm("loc_6C031F6: pop %esi;");
    asm("loc_6C031F7: mov $0x16,%eax;");
    asm("loc_6C031FC: pop %ebx;");
    asm("loc_6C031FD: ret $0xC;");
    asm("loc_6C03200: mov (%ebx),%eax;");
    asm("loc_6C03202: mov 0x20(%edi),%ecx;");
    asm("loc_6C03205: mov %ecx,(%eax);");
    asm("loc_6C03207: add $4,%eax;");
    asm("loc_6C0320A: mov %eax,(%ebx);");
    asm("loc_6C0320C: mov (%esi),%edx;");
    asm("loc_6C0320E: mov 4(%esi),%ecx;");
    asm("loc_6C03211: inc %edx;");
    asm("loc_6C03212: mov %edx,%eax;");
    asm("loc_6C03214: cmp %ecx,%eax;");
    asm("loc_6C03216: mov %edx,(%esi);");
    asm("loc_6C03218: jbe loc_6C03221;");
    asm("loc_6C0321A: movl $0x16,0xC(%esi);");
    asm("loc_6C03221: mov 0x1C(%edi),%eax;");
    asm("loc_6C03224: test %eax,%eax;");
    asm("loc_6C03226: je loc_6C03233;");
    asm("loc_6C03228: pop %edi;");
    asm("loc_6C03229: pop %esi;");
    asm("loc_6C0322A: mov $0x16,%eax;");
    asm("loc_6C0322F: pop %ebx;");
    asm("loc_6C03230: ret $0xC;");
    asm("loc_6C03233: mov (%ebx),%eax;");
    asm("loc_6C03235: mov 0x24(%edi),%dl;");
    asm("loc_6C03238: mov %dl,(%eax);");
    asm("loc_6C0323A: inc %eax;");
    asm("loc_6C0323B: mov %eax,(%ebx);");
    asm("loc_6C0323D: mov 0x14(%edi),%eax;");
    asm("loc_6C03240: push %esi;");
    asm("loc_6C03241: push %eax;");
    asm("loc_6C03242: push %ebx;");
    asm("loc_6C03243: mov %edi,%ecx;");
    asm("loc_6C03245: call _sub_6BEBEA0;");
    asm("loc_6C0324A: test %eax,%eax;");
    asm("loc_6C0324C: mov %eax,0x1C(%edi);");
    asm("loc_6C0324F: je loc_6C0325C;");
    asm("loc_6C03251: pop %edi;");
    asm("loc_6C03252: pop %esi;");
    asm("loc_6C03253: mov $0x16,%eax;");
    asm("loc_6C03258: pop %ebx;");
    asm("loc_6C03259: ret $0xC;");
    asm("loc_6C0325C: mov (%esi),%ecx;");
    asm("loc_6C0325E: mov 0x18(%esp),%edx;");
    asm("loc_6C03262: mov %ecx,(%edx);");
    asm("loc_6C03264: mov 0xC(%edi),%eax;");
    asm("loc_6C03267: push %eax;");
    asm("loc_6C03268: call _sub_6BEC3B0;");
    asm("loc_6C0326D: mov %eax,%ecx;");
    asm("loc_6C0326F: mov (%ecx),%eax;");
    asm("loc_6C03271: mov 0x18(%ecx),%ebx;");
    asm("loc_6C03274: add $4,%esp;");
    asm("loc_6C03277: inc %eax;");
    asm("loc_6C03278: mov %eax,(%ecx);");
    asm("loc_6C0327A: mov (%esi),%edx;");
    asm("loc_6C0327C: add %edx,%ebx;");
    asm("loc_6C0327E: mov %eax,%edi;");
    asm("loc_6C03280: mov 0x10(%ecx),%eax;");
    asm("loc_6C03283: mov %ebx,0x18(%ecx);");
    asm("loc_6C03286: mov (%esi),%esi;");
    asm("loc_6C03288: cmp %eax,%esi;");
    asm("loc_6C0328A: jbe loc_6C0328F;");
    asm("loc_6C0328C: mov %esi,0x10(%ecx);");
    asm("loc_6C0328F: mov 0x18(%ecx),%eax;");
    asm("loc_6C03292: xor %edx,%edx;");
    asm("loc_6C03294: div %edi;");
    asm("loc_6C03296: pop %edi;");
    asm("loc_6C03297: pop %esi;");
    asm("loc_6C03298: pop %ebx;");
    asm("loc_6C03299: mov %eax,8(%ecx);");
    asm("loc_6C0329C: xor %eax,%eax;");
    asm("loc_6C0329E: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C032B0() // _sub_6C032B0
{
    __DEBUG_ASM(6C032B0);
    // chunk 0x6C032B0 _sub_6C032B0
    asm("loc_6C032B0: mov 4(%esp),%eax;");
    asm("loc_6C032B4: push %ebx;");
    asm("loc_6C032B5: push %ebp;");
    asm("loc_6C032B6: mov 0x10(%esp),%ebp;");
    asm("loc_6C032BA: push %esi;");
    asm("loc_6C032BB: push %edi;");
    asm("loc_6C032BC: mov %ecx,%edi;");
    asm("loc_6C032BE: lea 0x10(%edi),%esi;");
    asm("loc_6C032C1: push %esi;");
    asm("loc_6C032C2: push %ebp;");
    asm("loc_6C032C3: lea 0x18(%edi),%ebx;");
    asm("loc_6C032C6: push %ebx;");
    asm("loc_6C032C7: mov %ebp,4(%esi);");
    asm("loc_6C032CA: mov %eax,8(%esi);");
    asm("loc_6C032CD: movl $0,(%esi);");
    asm("loc_6C032D3: movl $0,0xC(%esi);");
    asm("loc_6C032DA: call _sub_6BEBE90;");
    asm("loc_6C032DF: test %eax,%eax;");
    asm("loc_6C032E1: mov %eax,0x1C(%edi);");
    asm("loc_6C032E4: je loc_6C032F2;");
    asm("loc_6C032E6: pop %edi;");
    asm("loc_6C032E7: pop %esi;");
    asm("loc_6C032E8: pop %ebp;");
    asm("loc_6C032E9: mov $0x17,%eax;");
    asm("loc_6C032EE: pop %ebx;");
    asm("loc_6C032EF: ret $0xC;");
    asm("loc_6C032F2: mov (%esi),%edx;");
    asm("loc_6C032F4: mov 4(%esi),%ecx;");
    asm("loc_6C032F7: add $4,%edx;");
    asm("loc_6C032FA: mov %edx,%eax;");
    asm("loc_6C032FC: cmp %ecx,%eax;");
    asm("loc_6C032FE: mov %edx,(%esi);");
    asm("loc_6C03300: jbe loc_6C03309;");
    asm("loc_6C03302: movl $0x17,0xC(%esi);");
    asm("loc_6C03309: mov 0x1C(%edi),%eax;");
    asm("loc_6C0330C: test %eax,%eax;");
    asm("loc_6C0330E: jne loc_6C033AB;");
    asm("loc_6C03314: mov (%ebx),%eax;");
    asm("loc_6C03316: mov (%eax),%ecx;");
    asm("loc_6C03318: add $4,%eax;");
    asm("loc_6C0331B: mov %eax,(%ebx);");
    asm("loc_6C0331D: mov %ecx,0x20(%edi);");
    asm("loc_6C03320: mov (%esi),%edx;");
    asm("loc_6C03322: mov 4(%esi),%ecx;");
    asm("loc_6C03325: inc %edx;");
    asm("loc_6C03326: mov %edx,%eax;");
    asm("loc_6C03328: cmp %ecx,%eax;");
    asm("loc_6C0332A: mov %edx,(%esi);");
    asm("loc_6C0332C: jbe loc_6C03335;");
    asm("loc_6C0332E: movl $0x17,0xC(%esi);");
    asm("loc_6C03335: mov 0x1C(%edi),%eax;");
    asm("loc_6C03338: test %eax,%eax;");
    asm("loc_6C0333A: jne loc_6C033AB;");
    asm("loc_6C0333C: mov (%ebx),%eax;");
    asm("loc_6C0333E: mov (%eax),%dl;");
    asm("loc_6C03340: push %esi;");
    asm("loc_6C03341: push %ebp;");
    asm("loc_6C03342: inc %eax;");
    asm("loc_6C03343: push %ebx;");
    asm("loc_6C03344: mov %edi,%ecx;");
    asm("loc_6C03346: mov %dl,0x24(%edi);");
    asm("loc_6C03349: mov %eax,(%ebx);");
    asm("loc_6C0334B: call _sub_6BEBEB0;");
    asm("loc_6C03350: test %eax,%eax;");
    asm("loc_6C03352: mov %eax,0x1C(%edi);");
    asm("loc_6C03355: je loc_6C03363;");
    asm("loc_6C03357: pop %edi;");
    asm("loc_6C03358: pop %esi;");
    asm("loc_6C03359: pop %ebp;");
    asm("loc_6C0335A: mov $0x17,%eax;");
    asm("loc_6C0335F: pop %ebx;");
    asm("loc_6C03360: ret $0xC;");
    asm("loc_6C03363: mov (%esi),%eax;");
    asm("loc_6C03365: mov 0x1C(%esp),%ecx;");
    asm("loc_6C03369: mov %eax,(%ecx);");
    asm("loc_6C0336B: mov 0xC(%edi),%edx;");
    asm("loc_6C0336E: push %edx;");
    asm("loc_6C0336F: call _sub_6BEC3B0;");
    asm("loc_6C03374: mov %eax,%ecx;");
    asm("loc_6C03376: mov 4(%ecx),%edi;");
    asm("loc_6C03379: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C0337C: mov 0x14(%ecx),%edx;");
    asm("loc_6C0337F: add $4,%esp;");
    asm("loc_6C03382: inc %edi;");
    asm("loc_6C03383: mov %edi,4(%ecx);");
    asm("loc_6C03386: mov (%esi),%eax;");
    asm("loc_6C03388: add $2,%eax;");
    asm("loc_6C0338B: add %eax,%ebp;");
    asm("loc_6C0338D: mov %ebp,0x1C(%ecx);");
    asm("loc_6C03390: mov (%esi),%esi;");
    asm("loc_6C03392: add $2,%edx;");
    asm("loc_6C03395: cmp %edx,%esi;");
    asm("loc_6C03397: jbe loc_6C0339F;");
    asm("loc_6C03399: add $2,%esi;");
    asm("loc_6C0339C: mov %esi,0x14(%ecx);");
    asm("loc_6C0339F: mov 0x1C(%ecx),%eax;");
    asm("loc_6C033A2: xor %edx,%edx;");
    asm("loc_6C033A4: div %edi;");
    asm("loc_6C033A6: mov %eax,0xC(%ecx);");
    asm("loc_6C033A9: xor %eax,%eax;");
    asm("loc_6C033AB: pop %edi;");
    asm("loc_6C033AC: pop %esi;");
    asm("loc_6C033AD: pop %ebp;");
    asm("loc_6C033AE: pop %ebx;");
    asm("loc_6C033AF: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C033C0() // _sub_6C033C0
{
    __DEBUG_ASM(6C033C0);
    // chunk 0x6C033C0 _sub_6C033C0
    asm("loc_6C033C0: mov _data_6C0E4C8,%eax;");
    asm("loc_6C033C5: mov %eax,_data_6C14198;");
    asm("loc_6C033CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C033D0() // _sub_6C033D0
{
    __DEBUG_ASM(6C033D0);
    // chunk 0x6C033D0 _sub_6C033D0
    asm("loc_6C033D0: mov _data_6C0E4C8,%eax;");
    asm("loc_6C033D5: mov %eax,_data_6C1419C;");
    asm("loc_6C033DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C033E0() // _sub_6C033E0
{
    __DEBUG_ASM(6C033E0);
    // chunk 0x6C033E0 _sub_6C033E0
    asm("loc_6C033E0: mov _data_6C0E4CC,%eax;");
    asm("loc_6C033E5: mov %eax,_data_6C14194;");
    asm("loc_6C033EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C033F0() // _sub_6C033F0
{
    __DEBUG_ASM(6C033F0);
    // chunk 0x6C033F0 _sub_6C033F0
    asm("loc_6C033F0: mov 8(%esp),%eax;");
    asm("loc_6C033F4: push %ebx;");
    asm("loc_6C033F5: push %esi;");
    asm("loc_6C033F6: push %edi;");
    asm("loc_6C033F7: mov %ecx,%edi;");
    asm("loc_6C033F9: mov 0x10(%esp),%ecx;");
    asm("loc_6C033FD: lea 0x10(%edi),%esi;");
    asm("loc_6C03400: mov %eax,4(%esi);");
    asm("loc_6C03403: mov (%ecx),%edx;");
    asm("loc_6C03405: mov %edx,8(%esi);");
    asm("loc_6C03408: movl $0,(%esi);");
    asm("loc_6C0340E: movl $0,0xC(%esi);");
    asm("loc_6C03415: mov 0x14(%edi),%eax;");
    asm("loc_6C03418: push %esi;");
    asm("loc_6C03419: push %eax;");
    asm("loc_6C0341A: lea 0x18(%edi),%ebx;");
    asm("loc_6C0341D: push %ebx;");
    asm("loc_6C0341E: mov %edi,%ecx;");
    asm("loc_6C03420: call _sub_6BEBE50;");
    asm("loc_6C03425: test %eax,%eax;");
    asm("loc_6C03427: mov %eax,0x1C(%edi);");
    asm("loc_6C0342A: je loc_6C03437;");
    asm("loc_6C0342C: pop %edi;");
    asm("loc_6C0342D: pop %esi;");
    asm("loc_6C0342E: mov $0x16,%eax;");
    asm("loc_6C03433: pop %ebx;");
    asm("loc_6C03434: ret $0xC;");
    asm("loc_6C03437: mov (%esi),%edx;");
    asm("loc_6C03439: mov 4(%esi),%ecx;");
    asm("loc_6C0343C: add $4,%edx;");
    asm("loc_6C0343F: mov %edx,%eax;");
    asm("loc_6C03441: cmp %ecx,%eax;");
    asm("loc_6C03443: mov %edx,(%esi);");
    asm("loc_6C03445: jbe loc_6C0344E;");
    asm("loc_6C03447: movl $0x16,0xC(%esi);");
    asm("loc_6C0344E: mov 0x1C(%edi),%eax;");
    asm("loc_6C03451: test %eax,%eax;");
    asm("loc_6C03453: je loc_6C03460;");
    asm("loc_6C03455: pop %edi;");
    asm("loc_6C03456: pop %esi;");
    asm("loc_6C03457: mov $0x16,%eax;");
    asm("loc_6C0345C: pop %ebx;");
    asm("loc_6C0345D: ret $0xC;");
    asm("loc_6C03460: mov (%ebx),%eax;");
    asm("loc_6C03462: mov 0x20(%edi),%ecx;");
    asm("loc_6C03465: mov %ecx,(%eax);");
    asm("loc_6C03467: add $4,%eax;");
    asm("loc_6C0346A: mov %eax,(%ebx);");
    asm("loc_6C0346C: mov (%esi),%edx;");
    asm("loc_6C0346E: mov 4(%esi),%ecx;");
    asm("loc_6C03471: inc %edx;");
    asm("loc_6C03472: mov %edx,%eax;");
    asm("loc_6C03474: cmp %ecx,%eax;");
    asm("loc_6C03476: mov %edx,(%esi);");
    asm("loc_6C03478: jbe loc_6C03481;");
    asm("loc_6C0347A: movl $0x16,0xC(%esi);");
    asm("loc_6C03481: mov 0x1C(%edi),%eax;");
    asm("loc_6C03484: test %eax,%eax;");
    asm("loc_6C03486: je loc_6C03493;");
    asm("loc_6C03488: pop %edi;");
    asm("loc_6C03489: pop %esi;");
    asm("loc_6C0348A: mov $0x16,%eax;");
    asm("loc_6C0348F: pop %ebx;");
    asm("loc_6C03490: ret $0xC;");
    asm("loc_6C03493: mov (%ebx),%eax;");
    asm("loc_6C03495: mov 0x24(%edi),%dl;");
    asm("loc_6C03498: mov %dl,(%eax);");
    asm("loc_6C0349A: inc %eax;");
    asm("loc_6C0349B: mov %eax,(%ebx);");
    asm("loc_6C0349D: mov 0x14(%edi),%eax;");
    asm("loc_6C034A0: push %esi;");
    asm("loc_6C034A1: push %eax;");
    asm("loc_6C034A2: push %ebx;");
    asm("loc_6C034A3: mov %edi,%ecx;");
    asm("loc_6C034A5: call _sub_6BEBEA0;");
    asm("loc_6C034AA: test %eax,%eax;");
    asm("loc_6C034AC: mov %eax,0x1C(%edi);");
    asm("loc_6C034AF: je loc_6C034BC;");
    asm("loc_6C034B1: pop %edi;");
    asm("loc_6C034B2: pop %esi;");
    asm("loc_6C034B3: mov $0x16,%eax;");
    asm("loc_6C034B8: pop %ebx;");
    asm("loc_6C034B9: ret $0xC;");
    asm("loc_6C034BC: mov (%esi),%ecx;");
    asm("loc_6C034BE: mov 0x18(%esp),%edx;");
    asm("loc_6C034C2: mov %ecx,(%edx);");
    asm("loc_6C034C4: mov 0xC(%edi),%eax;");
    asm("loc_6C034C7: push %eax;");
    asm("loc_6C034C8: call _sub_6BEC3B0;");
    asm("loc_6C034CD: mov %eax,%ecx;");
    asm("loc_6C034CF: mov (%ecx),%eax;");
    asm("loc_6C034D1: mov 0x18(%ecx),%ebx;");
    asm("loc_6C034D4: add $4,%esp;");
    asm("loc_6C034D7: inc %eax;");
    asm("loc_6C034D8: mov %eax,(%ecx);");
    asm("loc_6C034DA: mov (%esi),%edx;");
    asm("loc_6C034DC: add %edx,%ebx;");
    asm("loc_6C034DE: mov %eax,%edi;");
    asm("loc_6C034E0: mov 0x10(%ecx),%eax;");
    asm("loc_6C034E3: mov %ebx,0x18(%ecx);");
    asm("loc_6C034E6: mov (%esi),%esi;");
    asm("loc_6C034E8: cmp %eax,%esi;");
    asm("loc_6C034EA: jbe loc_6C034EF;");
    asm("loc_6C034EC: mov %esi,0x10(%ecx);");
    asm("loc_6C034EF: mov 0x18(%ecx),%eax;");
    asm("loc_6C034F2: xor %edx,%edx;");
    asm("loc_6C034F4: div %edi;");
    asm("loc_6C034F6: pop %edi;");
    asm("loc_6C034F7: pop %esi;");
    asm("loc_6C034F8: pop %ebx;");
    asm("loc_6C034F9: mov %eax,8(%ecx);");
    asm("loc_6C034FC: xor %eax,%eax;");
    asm("loc_6C034FE: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03510() // _sub_6C03510
{
    __DEBUG_ASM(6C03510);
    // chunk 0x6C03510 _sub_6C03510
    asm("loc_6C03510: mov 4(%esp),%eax;");
    asm("loc_6C03514: push %ebx;");
    asm("loc_6C03515: push %ebp;");
    asm("loc_6C03516: mov 0x10(%esp),%ebp;");
    asm("loc_6C0351A: push %esi;");
    asm("loc_6C0351B: push %edi;");
    asm("loc_6C0351C: mov %ecx,%edi;");
    asm("loc_6C0351E: lea 0x10(%edi),%esi;");
    asm("loc_6C03521: push %esi;");
    asm("loc_6C03522: push %ebp;");
    asm("loc_6C03523: lea 0x18(%edi),%ebx;");
    asm("loc_6C03526: push %ebx;");
    asm("loc_6C03527: mov %ebp,4(%esi);");
    asm("loc_6C0352A: mov %eax,8(%esi);");
    asm("loc_6C0352D: movl $0,(%esi);");
    asm("loc_6C03533: movl $0,0xC(%esi);");
    asm("loc_6C0353A: call _sub_6BEBE90;");
    asm("loc_6C0353F: test %eax,%eax;");
    asm("loc_6C03541: mov %eax,0x1C(%edi);");
    asm("loc_6C03544: je loc_6C03552;");
    asm("loc_6C03546: pop %edi;");
    asm("loc_6C03547: pop %esi;");
    asm("loc_6C03548: pop %ebp;");
    asm("loc_6C03549: mov $0x17,%eax;");
    asm("loc_6C0354E: pop %ebx;");
    asm("loc_6C0354F: ret $0xC;");
    asm("loc_6C03552: mov (%esi),%edx;");
    asm("loc_6C03554: mov 4(%esi),%ecx;");
    asm("loc_6C03557: add $4,%edx;");
    asm("loc_6C0355A: mov %edx,%eax;");
    asm("loc_6C0355C: cmp %ecx,%eax;");
    asm("loc_6C0355E: mov %edx,(%esi);");
    asm("loc_6C03560: jbe loc_6C03569;");
    asm("loc_6C03562: movl $0x17,0xC(%esi);");
    asm("loc_6C03569: mov 0x1C(%edi),%eax;");
    asm("loc_6C0356C: test %eax,%eax;");
    asm("loc_6C0356E: jne loc_6C0360B;");
    asm("loc_6C03574: mov (%ebx),%eax;");
    asm("loc_6C03576: mov (%eax),%ecx;");
    asm("loc_6C03578: add $4,%eax;");
    asm("loc_6C0357B: mov %eax,(%ebx);");
    asm("loc_6C0357D: mov %ecx,0x20(%edi);");
    asm("loc_6C03580: mov (%esi),%edx;");
    asm("loc_6C03582: mov 4(%esi),%ecx;");
    asm("loc_6C03585: inc %edx;");
    asm("loc_6C03586: mov %edx,%eax;");
    asm("loc_6C03588: cmp %ecx,%eax;");
    asm("loc_6C0358A: mov %edx,(%esi);");
    asm("loc_6C0358C: jbe loc_6C03595;");
    asm("loc_6C0358E: movl $0x17,0xC(%esi);");
    asm("loc_6C03595: mov 0x1C(%edi),%eax;");
    asm("loc_6C03598: test %eax,%eax;");
    asm("loc_6C0359A: jne loc_6C0360B;");
    asm("loc_6C0359C: mov (%ebx),%eax;");
    asm("loc_6C0359E: mov (%eax),%dl;");
    asm("loc_6C035A0: push %esi;");
    asm("loc_6C035A1: push %ebp;");
    asm("loc_6C035A2: inc %eax;");
    asm("loc_6C035A3: push %ebx;");
    asm("loc_6C035A4: mov %edi,%ecx;");
    asm("loc_6C035A6: mov %dl,0x24(%edi);");
    asm("loc_6C035A9: mov %eax,(%ebx);");
    asm("loc_6C035AB: call _sub_6BEBEB0;");
    asm("loc_6C035B0: test %eax,%eax;");
    asm("loc_6C035B2: mov %eax,0x1C(%edi);");
    asm("loc_6C035B5: je loc_6C035C3;");
    asm("loc_6C035B7: pop %edi;");
    asm("loc_6C035B8: pop %esi;");
    asm("loc_6C035B9: pop %ebp;");
    asm("loc_6C035BA: mov $0x17,%eax;");
    asm("loc_6C035BF: pop %ebx;");
    asm("loc_6C035C0: ret $0xC;");
    asm("loc_6C035C3: mov (%esi),%eax;");
    asm("loc_6C035C5: mov 0x1C(%esp),%ecx;");
    asm("loc_6C035C9: mov %eax,(%ecx);");
    asm("loc_6C035CB: mov 0xC(%edi),%edx;");
    asm("loc_6C035CE: push %edx;");
    asm("loc_6C035CF: call _sub_6BEC3B0;");
    asm("loc_6C035D4: mov %eax,%ecx;");
    asm("loc_6C035D6: mov 4(%ecx),%edi;");
    asm("loc_6C035D9: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C035DC: mov 0x14(%ecx),%edx;");
    asm("loc_6C035DF: add $4,%esp;");
    asm("loc_6C035E2: inc %edi;");
    asm("loc_6C035E3: mov %edi,4(%ecx);");
    asm("loc_6C035E6: mov (%esi),%eax;");
    asm("loc_6C035E8: add $2,%eax;");
    asm("loc_6C035EB: add %eax,%ebp;");
    asm("loc_6C035ED: mov %ebp,0x1C(%ecx);");
    asm("loc_6C035F0: mov (%esi),%esi;");
    asm("loc_6C035F2: add $2,%edx;");
    asm("loc_6C035F5: cmp %edx,%esi;");
    asm("loc_6C035F7: jbe loc_6C035FF;");
    asm("loc_6C035F9: add $2,%esi;");
    asm("loc_6C035FC: mov %esi,0x14(%ecx);");
    asm("loc_6C035FF: mov 0x1C(%ecx),%eax;");
    asm("loc_6C03602: xor %edx,%edx;");
    asm("loc_6C03604: div %edi;");
    asm("loc_6C03606: mov %eax,0xC(%ecx);");
    asm("loc_6C03609: xor %eax,%eax;");
    asm("loc_6C0360B: pop %edi;");
    asm("loc_6C0360C: pop %esi;");
    asm("loc_6C0360D: pop %ebp;");
    asm("loc_6C0360E: pop %ebx;");
    asm("loc_6C0360F: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03620() // _sub_6C03620
{
    __DEBUG_ASM(6C03620);
    // chunk 0x6C03620 _sub_6C03620
    asm("loc_6C03620: mov _data_6C0E4D4,%eax;");
    asm("loc_6C03625: mov %eax,_data_6C141A8;");
    asm("loc_6C0362A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03630() // _sub_6C03630
{
    __DEBUG_ASM(6C03630);
    // chunk 0x6C03630 _sub_6C03630
    asm("loc_6C03630: mov _data_6C0E4D4,%eax;");
    asm("loc_6C03635: mov %eax,_data_6C141AC;");
    asm("loc_6C0363A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03640() // _sub_6C03640
{
    __DEBUG_ASM(6C03640);
    // chunk 0x6C03640 _sub_6C03640
    asm("loc_6C03640: mov _data_6C0E4D8,%eax;");
    asm("loc_6C03645: mov %eax,_data_6C141A4;");
    asm("loc_6C0364A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03650() // _sub_6C03650
{
    __DEBUG_ASM(6C03650);
    // chunk 0x6C03650 _sub_6C03650
    asm("loc_6C03650: mov 8(%esp),%eax;");
    asm("loc_6C03654: push %ebx;");
    asm("loc_6C03655: push %esi;");
    asm("loc_6C03656: push %edi;");
    asm("loc_6C03657: mov %ecx,%edi;");
    asm("loc_6C03659: mov 0x10(%esp),%ecx;");
    asm("loc_6C0365D: lea 0x10(%edi),%esi;");
    asm("loc_6C03660: mov %eax,4(%esi);");
    asm("loc_6C03663: mov (%ecx),%edx;");
    asm("loc_6C03665: mov %edx,8(%esi);");
    asm("loc_6C03668: movl $0,(%esi);");
    asm("loc_6C0366E: movl $0,0xC(%esi);");
    asm("loc_6C03675: mov 0x14(%edi),%eax;");
    asm("loc_6C03678: push %esi;");
    asm("loc_6C03679: push %eax;");
    asm("loc_6C0367A: lea 0x18(%edi),%ebx;");
    asm("loc_6C0367D: push %ebx;");
    asm("loc_6C0367E: mov %edi,%ecx;");
    asm("loc_6C03680: call _sub_6BEBE50;");
    asm("loc_6C03685: test %eax,%eax;");
    asm("loc_6C03687: mov %eax,0x1C(%edi);");
    asm("loc_6C0368A: je loc_6C03697;");
    asm("loc_6C0368C: pop %edi;");
    asm("loc_6C0368D: pop %esi;");
    asm("loc_6C0368E: mov $0x16,%eax;");
    asm("loc_6C03693: pop %ebx;");
    asm("loc_6C03694: ret $0xC;");
    asm("loc_6C03697: mov (%esi),%edx;");
    asm("loc_6C03699: mov 4(%esi),%ecx;");
    asm("loc_6C0369C: add $4,%edx;");
    asm("loc_6C0369F: mov %edx,%eax;");
    asm("loc_6C036A1: cmp %ecx,%eax;");
    asm("loc_6C036A3: mov %edx,(%esi);");
    asm("loc_6C036A5: jbe loc_6C036AE;");
    asm("loc_6C036A7: movl $0x16,0xC(%esi);");
    asm("loc_6C036AE: mov 0x1C(%edi),%eax;");
    asm("loc_6C036B1: test %eax,%eax;");
    asm("loc_6C036B3: je loc_6C036C0;");
    asm("loc_6C036B5: pop %edi;");
    asm("loc_6C036B6: pop %esi;");
    asm("loc_6C036B7: mov $0x16,%eax;");
    asm("loc_6C036BC: pop %ebx;");
    asm("loc_6C036BD: ret $0xC;");
    asm("loc_6C036C0: mov (%ebx),%eax;");
    asm("loc_6C036C2: mov 0x20(%edi),%ecx;");
    asm("loc_6C036C5: mov %ecx,(%eax);");
    asm("loc_6C036C7: mov 0x14(%edi),%edx;");
    asm("loc_6C036CA: push %esi;");
    asm("loc_6C036CB: push %edx;");
    asm("loc_6C036CC: add $4,%eax;");
    asm("loc_6C036CF: push %ebx;");
    asm("loc_6C036D0: mov %edi,%ecx;");
    asm("loc_6C036D2: mov %eax,(%ebx);");
    asm("loc_6C036D4: call _sub_6BEBEA0;");
    asm("loc_6C036D9: test %eax,%eax;");
    asm("loc_6C036DB: mov %eax,0x1C(%edi);");
    asm("loc_6C036DE: je loc_6C036EB;");
    asm("loc_6C036E0: pop %edi;");
    asm("loc_6C036E1: pop %esi;");
    asm("loc_6C036E2: mov $0x16,%eax;");
    asm("loc_6C036E7: pop %ebx;");
    asm("loc_6C036E8: ret $0xC;");
    asm("loc_6C036EB: mov (%esi),%eax;");
    asm("loc_6C036ED: mov 0x18(%esp),%ecx;");
    asm("loc_6C036F1: mov %eax,(%ecx);");
    asm("loc_6C036F3: mov 0xC(%edi),%edx;");
    asm("loc_6C036F6: push %edx;");
    asm("loc_6C036F7: call _sub_6BEC3B0;");
    asm("loc_6C036FC: mov %eax,%ecx;");
    asm("loc_6C036FE: mov (%ecx),%edi;");
    asm("loc_6C03700: mov 0x18(%ecx),%edx;");
    asm("loc_6C03703: add $4,%esp;");
    asm("loc_6C03706: inc %edi;");
    asm("loc_6C03707: mov %edi,(%ecx);");
    asm("loc_6C03709: mov (%esi),%eax;");
    asm("loc_6C0370B: add %eax,%edx;");
    asm("loc_6C0370D: mov 0x10(%ecx),%eax;");
    asm("loc_6C03710: mov %edx,0x18(%ecx);");
    asm("loc_6C03713: mov (%esi),%esi;");
    asm("loc_6C03715: cmp %eax,%esi;");
    asm("loc_6C03717: jbe loc_6C0371C;");
    asm("loc_6C03719: mov %esi,0x10(%ecx);");
    asm("loc_6C0371C: mov 0x18(%ecx),%eax;");
    asm("loc_6C0371F: xor %edx,%edx;");
    asm("loc_6C03721: div %edi;");
    asm("loc_6C03723: pop %edi;");
    asm("loc_6C03724: pop %esi;");
    asm("loc_6C03725: pop %ebx;");
    asm("loc_6C03726: mov %eax,8(%ecx);");
    asm("loc_6C03729: xor %eax,%eax;");
    asm("loc_6C0372B: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03730() // _sub_6C03730
{
    __DEBUG_ASM(6C03730);
    // chunk 0x6C03730 _sub_6C03730
    asm("loc_6C03730: mov 4(%esp),%eax;");
    asm("loc_6C03734: push %ebx;");
    asm("loc_6C03735: push %ebp;");
    asm("loc_6C03736: mov 0x10(%esp),%ebp;");
    asm("loc_6C0373A: push %esi;");
    asm("loc_6C0373B: push %edi;");
    asm("loc_6C0373C: mov %ecx,%edi;");
    asm("loc_6C0373E: lea 0x10(%edi),%esi;");
    asm("loc_6C03741: push %esi;");
    asm("loc_6C03742: push %ebp;");
    asm("loc_6C03743: lea 0x18(%edi),%ebx;");
    asm("loc_6C03746: push %ebx;");
    asm("loc_6C03747: mov %ebp,4(%esi);");
    asm("loc_6C0374A: mov %eax,8(%esi);");
    asm("loc_6C0374D: movl $0,(%esi);");
    asm("loc_6C03753: movl $0,0xC(%esi);");
    asm("loc_6C0375A: call _sub_6BEBE90;");
    asm("loc_6C0375F: test %eax,%eax;");
    asm("loc_6C03761: mov %eax,0x1C(%edi);");
    asm("loc_6C03764: je loc_6C03772;");
    asm("loc_6C03766: pop %edi;");
    asm("loc_6C03767: pop %esi;");
    asm("loc_6C03768: pop %ebp;");
    asm("loc_6C03769: mov $0x17,%eax;");
    asm("loc_6C0376E: pop %ebx;");
    asm("loc_6C0376F: ret $0xC;");
    asm("loc_6C03772: mov (%esi),%edx;");
    asm("loc_6C03774: mov 4(%esi),%ecx;");
    asm("loc_6C03777: add $4,%edx;");
    asm("loc_6C0377A: mov %edx,%eax;");
    asm("loc_6C0377C: cmp %ecx,%eax;");
    asm("loc_6C0377E: mov %edx,(%esi);");
    asm("loc_6C03780: jbe loc_6C03789;");
    asm("loc_6C03782: movl $0x17,0xC(%esi);");
    asm("loc_6C03789: mov 0x1C(%edi),%eax;");
    asm("loc_6C0378C: test %eax,%eax;");
    asm("loc_6C0378E: jne loc_6C03803;");
    asm("loc_6C03790: mov (%ebx),%eax;");
    asm("loc_6C03792: mov (%eax),%ecx;");
    asm("loc_6C03794: push %esi;");
    asm("loc_6C03795: push %ebp;");
    asm("loc_6C03796: mov %ecx,0x20(%edi);");
    asm("loc_6C03799: add $4,%eax;");
    asm("loc_6C0379C: push %ebx;");
    asm("loc_6C0379D: mov %edi,%ecx;");
    asm("loc_6C0379F: mov %eax,(%ebx);");
    asm("loc_6C037A1: call _sub_6BEBEB0;");
    asm("loc_6C037A6: test %eax,%eax;");
    asm("loc_6C037A8: mov %eax,0x1C(%edi);");
    asm("loc_6C037AB: je loc_6C037B9;");
    asm("loc_6C037AD: pop %edi;");
    asm("loc_6C037AE: pop %esi;");
    asm("loc_6C037AF: pop %ebp;");
    asm("loc_6C037B0: mov $0x17,%eax;");
    asm("loc_6C037B5: pop %ebx;");
    asm("loc_6C037B6: ret $0xC;");
    asm("loc_6C037B9: mov (%esi),%edx;");
    asm("loc_6C037BB: mov 0x1C(%esp),%eax;");
    asm("loc_6C037BF: mov %edx,(%eax);");
    asm("loc_6C037C1: mov 0xC(%edi),%ecx;");
    asm("loc_6C037C4: push %ecx;");
    asm("loc_6C037C5: call _sub_6BEC3B0;");
    asm("loc_6C037CA: mov %eax,%ecx;");
    asm("loc_6C037CC: mov 4(%ecx),%edx;");
    asm("loc_6C037CF: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C037D2: mov 0x14(%ecx),%eax;");
    asm("loc_6C037D5: add $4,%esp;");
    asm("loc_6C037D8: inc %edx;");
    asm("loc_6C037D9: mov %edx,4(%ecx);");
    asm("loc_6C037DC: mov %edx,%edi;");
    asm("loc_6C037DE: mov (%esi),%edx;");
    asm("loc_6C037E0: add $2,%edx;");
    asm("loc_6C037E3: add %edx,%ebp;");
    asm("loc_6C037E5: mov %ebp,0x1C(%ecx);");
    asm("loc_6C037E8: mov (%esi),%esi;");
    asm("loc_6C037EA: add $2,%eax;");
    asm("loc_6C037ED: cmp %eax,%esi;");
    asm("loc_6C037EF: jbe loc_6C037F7;");
    asm("loc_6C037F1: add $2,%esi;");
    asm("loc_6C037F4: mov %esi,0x14(%ecx);");
    asm("loc_6C037F7: mov 0x1C(%ecx),%eax;");
    asm("loc_6C037FA: xor %edx,%edx;");
    asm("loc_6C037FC: div %edi;");
    asm("loc_6C037FE: mov %eax,0xC(%ecx);");
    asm("loc_6C03801: xor %eax,%eax;");
    asm("loc_6C03803: pop %edi;");
    asm("loc_6C03804: pop %esi;");
    asm("loc_6C03805: pop %ebp;");
    asm("loc_6C03806: pop %ebx;");
    asm("loc_6C03807: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03810() // _sub_6C03810
{
    __DEBUG_ASM(6C03810);
    // chunk 0x6C03810 _sub_6C03810
    asm("loc_6C03810: mov 0x20(%ecx),%eax;");
    asm("loc_6C03813: mov 4(%esp),%ecx;");
    asm("loc_6C03817: push %esi;");
    asm("loc_6C03818: mov _import_6C0B154,%esi;");
    asm("loc_6C0381E: push $_data_6C0BBF4;");
    asm("loc_6C03823: push %eax;");
    asm("loc_6C03824: push $_data_6C0E4E8;");
    asm("loc_6C03829: push %ecx;");
    asm("loc_6C0382A: call *%esi;");
    asm("loc_6C0382C: add $8,%esp;");
    asm("loc_6C0382F: mov %eax,%ecx;");
    asm("loc_6C03831: calll *_import_6C0B170;");
    asm("loc_6C03837: push %eax;");
    asm("loc_6C03838: call *%esi;");
    asm("loc_6C0383A: add $8,%esp;");
    asm("loc_6C0383D: pop %esi;");
    asm("loc_6C0383E: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03850() // _sub_6C03850
{
    __DEBUG_ASM(6C03850);
    // chunk 0x6C03850 _sub_6C03850
    asm("loc_6C03850: mov _data_6C0E4E0,%eax;");
    asm("loc_6C03855: mov %eax,_data_6C141B8;");
    asm("loc_6C0385A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03860() // _sub_6C03860
{
    __DEBUG_ASM(6C03860);
    // chunk 0x6C03860 _sub_6C03860
    asm("loc_6C03860: mov _data_6C0E4E0,%eax;");
    asm("loc_6C03865: mov %eax,_data_6C141BC;");
    asm("loc_6C0386A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03870() // _sub_6C03870
{
    __DEBUG_ASM(6C03870);
    // chunk 0x6C03870 _sub_6C03870
    asm("loc_6C03870: mov _data_6C0E4E4,%eax;");
    asm("loc_6C03875: mov %eax,_data_6C141B4;");
    asm("loc_6C0387A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03880() // _sub_6C03880
{
    __DEBUG_ASM(6C03880);
    // chunk 0x6C03880 _sub_6C03880
    asm("loc_6C03880: mov _data_6C0E4FC,%eax;");
    asm("loc_6C03885: mov %eax,_data_6C141C8;");
    asm("loc_6C0388A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03890() // _sub_6C03890
{
    __DEBUG_ASM(6C03890);
    // chunk 0x6C03890 _sub_6C03890
    asm("loc_6C03890: mov _data_6C0E4FC,%eax;");
    asm("loc_6C03895: mov %eax,_data_6C141CC;");
    asm("loc_6C0389A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C038A0() // _sub_6C038A0
{
    __DEBUG_ASM(6C038A0);
    // chunk 0x6C038A0 _sub_6C038A0
    asm("loc_6C038A0: mov _data_6C0E500,%eax;");
    asm("loc_6C038A5: mov %eax,_data_6C141C4;");
    asm("loc_6C038AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C038B0() // _sub_6C038B0
{
    __DEBUG_ASM(6C038B0);
    // chunk 0x6C038B0 _sub_6C038B0
    asm("loc_6C038B0: mov 8(%esp),%eax;");
    asm("loc_6C038B4: push %ebx;");
    asm("loc_6C038B5: push %ebp;");
    asm("loc_6C038B6: push %esi;");
    asm("loc_6C038B7: push %edi;");
    asm("loc_6C038B8: mov %ecx,%edi;");
    asm("loc_6C038BA: mov 0x14(%esp),%ecx;");
    asm("loc_6C038BE: lea 0x10(%edi),%esi;");
    asm("loc_6C038C1: mov %eax,4(%esi);");
    asm("loc_6C038C4: mov (%ecx),%edx;");
    asm("loc_6C038C6: mov %edx,8(%esi);");
    asm("loc_6C038C9: movl $0,(%esi);");
    asm("loc_6C038CF: movl $0,0xC(%esi);");
    asm("loc_6C038D6: mov 0x14(%edi),%eax;");
    asm("loc_6C038D9: push %esi;");
    asm("loc_6C038DA: push %eax;");
    asm("loc_6C038DB: lea 0x18(%edi),%ebx;");
    asm("loc_6C038DE: push %ebx;");
    asm("loc_6C038DF: mov %edi,%ecx;");
    asm("loc_6C038E1: call _sub_6BEBE50;");
    asm("loc_6C038E6: test %eax,%eax;");
    asm("loc_6C038E8: mov %eax,0x1C(%edi);");
    asm("loc_6C038EB: je loc_6C038F9;");
    asm("loc_6C038ED: pop %edi;");
    asm("loc_6C038EE: pop %esi;");
    asm("loc_6C038EF: pop %ebp;");
    asm("loc_6C038F0: mov $0x16,%eax;");
    asm("loc_6C038F5: pop %ebx;");
    asm("loc_6C038F6: ret $0xC;");
    asm("loc_6C038F9: mov 0x14(%edi),%ecx;");
    asm("loc_6C038FC: push %ecx;");
    asm("loc_6C038FD: push %esi;");
    asm("loc_6C038FE: lea 0x20(%edi),%edx;");
    asm("loc_6C03901: push %edx;");
    asm("loc_6C03902: push %ebx;");
    asm("loc_6C03903: mov %edi,%ecx;");
    asm("loc_6C03905: call _sub_6BEBFE0;");
    asm("loc_6C0390A: test %eax,%eax;");
    asm("loc_6C0390C: je loc_6C0391A;");
    asm("loc_6C0390E: pop %edi;");
    asm("loc_6C0390F: pop %esi;");
    asm("loc_6C03910: pop %ebp;");
    asm("loc_6C03911: mov $0x16,%eax;");
    asm("loc_6C03916: pop %ebx;");
    asm("loc_6C03917: ret $0xC;");
    asm("loc_6C0391A: mov (%esi),%edx;");
    asm("loc_6C0391C: mov 4(%esi),%ecx;");
    asm("loc_6C0391F: add $4,%edx;");
    asm("loc_6C03922: mov %edx,%eax;");
    asm("loc_6C03924: cmp %ecx,%eax;");
    asm("loc_6C03926: mov %edx,(%esi);");
    asm("loc_6C03928: mov $0x16,%ebp;");
    asm("loc_6C0392D: jbe loc_6C03932;");
    asm("loc_6C0392F: mov %ebp,0xC(%esi);");
    asm("loc_6C03932: mov 0x1C(%edi),%eax;");
    asm("loc_6C03935: test %eax,%eax;");
    asm("loc_6C03937: je loc_6C03942;");
    asm("loc_6C03939: pop %edi;");
    asm("loc_6C0393A: pop %esi;");
    asm("loc_6C0393B: mov %ebp,%eax;");
    asm("loc_6C0393D: pop %ebp;");
    asm("loc_6C0393E: pop %ebx;");
    asm("loc_6C0393F: ret $0xC;");
    asm("loc_6C03942: mov (%ebx),%eax;");
    asm("loc_6C03944: mov 0xA0(%edi),%ecx;");
    asm("loc_6C0394A: mov %ecx,(%eax);");
    asm("loc_6C0394C: add $4,%eax;");
    asm("loc_6C0394F: mov %eax,(%ebx);");
    asm("loc_6C03951: mov (%esi),%edx;");
    asm("loc_6C03953: mov 4(%esi),%ecx;");
    asm("loc_6C03956: add $4,%edx;");
    asm("loc_6C03959: mov %edx,%eax;");
    asm("loc_6C0395B: cmp %ecx,%eax;");
    asm("loc_6C0395D: mov %edx,(%esi);");
    asm("loc_6C0395F: jbe loc_6C03964;");
    asm("loc_6C03961: mov %ebp,0xC(%esi);");
    asm("loc_6C03964: mov 0x1C(%edi),%eax;");
    asm("loc_6C03967: test %eax,%eax;");
    asm("loc_6C03969: je loc_6C03974;");
    asm("loc_6C0396B: pop %edi;");
    asm("loc_6C0396C: pop %esi;");
    asm("loc_6C0396D: mov %ebp,%eax;");
    asm("loc_6C0396F: pop %ebp;");
    asm("loc_6C03970: pop %ebx;");
    asm("loc_6C03971: ret $0xC;");
    asm("loc_6C03974: mov (%ebx),%eax;");
    asm("loc_6C03976: mov 0xA4(%edi),%edx;");
    asm("loc_6C0397C: mov %edx,(%eax);");
    asm("loc_6C0397E: add $4,%eax;");
    asm("loc_6C03981: mov %eax,(%ebx);");
    asm("loc_6C03983: mov (%esi),%edx;");
    asm("loc_6C03985: mov 4(%esi),%ecx;");
    asm("loc_6C03988: add $4,%edx;");
    asm("loc_6C0398B: mov %edx,%eax;");
    asm("loc_6C0398D: cmp %ecx,%eax;");
    asm("loc_6C0398F: mov %edx,(%esi);");
    asm("loc_6C03991: jbe loc_6C03996;");
    asm("loc_6C03993: mov %ebp,0xC(%esi);");
    asm("loc_6C03996: mov 0x1C(%edi),%eax;");
    asm("loc_6C03999: test %eax,%eax;");
    asm("loc_6C0399B: je loc_6C039A6;");
    asm("loc_6C0399D: pop %edi;");
    asm("loc_6C0399E: pop %esi;");
    asm("loc_6C0399F: mov %ebp,%eax;");
    asm("loc_6C039A1: pop %ebp;");
    asm("loc_6C039A2: pop %ebx;");
    asm("loc_6C039A3: ret $0xC;");
    asm("loc_6C039A6: mov (%ebx),%eax;");
    asm("loc_6C039A8: mov 0xA8(%edi),%ecx;");
    asm("loc_6C039AE: mov %ecx,(%eax);");
    asm("loc_6C039B0: add $4,%eax;");
    asm("loc_6C039B3: mov %eax,(%ebx);");
    asm("loc_6C039B5: mov (%esi),%edx;");
    asm("loc_6C039B7: mov 4(%esi),%ecx;");
    asm("loc_6C039BA: add $4,%edx;");
    asm("loc_6C039BD: mov %edx,%eax;");
    asm("loc_6C039BF: cmp %ecx,%eax;");
    asm("loc_6C039C1: mov %edx,(%esi);");
    asm("loc_6C039C3: jbe loc_6C039C8;");
    asm("loc_6C039C5: mov %ebp,0xC(%esi);");
    asm("loc_6C039C8: mov 0x1C(%edi),%eax;");
    asm("loc_6C039CB: test %eax,%eax;");
    asm("loc_6C039CD: je loc_6C039D8;");
    asm("loc_6C039CF: pop %edi;");
    asm("loc_6C039D0: pop %esi;");
    asm("loc_6C039D1: mov %ebp,%eax;");
    asm("loc_6C039D3: pop %ebp;");
    asm("loc_6C039D4: pop %ebx;");
    asm("loc_6C039D5: ret $0xC;");
    asm("loc_6C039D8: mov (%ebx),%eax;");
    asm("loc_6C039DA: mov 0xAC(%edi),%edx;");
    asm("loc_6C039E0: mov %edx,(%eax);");
    asm("loc_6C039E2: add $4,%eax;");
    asm("loc_6C039E5: mov %eax,(%ebx);");
    asm("loc_6C039E7: mov 0x14(%edi),%eax;");
    asm("loc_6C039EA: push %esi;");
    asm("loc_6C039EB: push %eax;");
    asm("loc_6C039EC: push %ebx;");
    asm("loc_6C039ED: mov %edi,%ecx;");
    asm("loc_6C039EF: call _sub_6BEBEA0;");
    asm("loc_6C039F4: test %eax,%eax;");
    asm("loc_6C039F6: mov %eax,0x1C(%edi);");
    asm("loc_6C039F9: je loc_6C03A04;");
    asm("loc_6C039FB: pop %edi;");
    asm("loc_6C039FC: pop %esi;");
    asm("loc_6C039FD: mov %ebp,%eax;");
    asm("loc_6C039FF: pop %ebp;");
    asm("loc_6C03A00: pop %ebx;");
    asm("loc_6C03A01: ret $0xC;");
    asm("loc_6C03A04: mov (%esi),%ecx;");
    asm("loc_6C03A06: mov 0x1C(%esp),%edx;");
    asm("loc_6C03A0A: mov %ecx,(%edx);");
    asm("loc_6C03A0C: mov 0xC(%edi),%eax;");
    asm("loc_6C03A0F: push %eax;");
    asm("loc_6C03A10: call _sub_6BEC3B0;");
    asm("loc_6C03A15: mov %eax,%ecx;");
    asm("loc_6C03A17: mov (%ecx),%ebp;");
    asm("loc_6C03A19: mov 0x18(%ecx),%ebx;");
    asm("loc_6C03A1C: mov 0x10(%ecx),%eax;");
    asm("loc_6C03A1F: add $4,%esp;");
    asm("loc_6C03A22: inc %ebp;");
    asm("loc_6C03A23: mov %ebp,(%ecx);");
    asm("loc_6C03A25: mov (%esi),%edx;");
    asm("loc_6C03A27: add %edx,%ebx;");
    asm("loc_6C03A29: mov %ebx,0x18(%ecx);");
    asm("loc_6C03A2C: mov (%esi),%esi;");
    asm("loc_6C03A2E: cmp %eax,%esi;");
    asm("loc_6C03A30: mov %ebp,%edi;");
    asm("loc_6C03A32: jbe loc_6C03A37;");
    asm("loc_6C03A34: mov %esi,0x10(%ecx);");
    asm("loc_6C03A37: mov 0x18(%ecx),%eax;");
    asm("loc_6C03A3A: xor %edx,%edx;");
    asm("loc_6C03A3C: div %edi;");
    asm("loc_6C03A3E: pop %edi;");
    asm("loc_6C03A3F: pop %esi;");
    asm("loc_6C03A40: pop %ebp;");
    asm("loc_6C03A41: pop %ebx;");
    asm("loc_6C03A42: mov %eax,8(%ecx);");
    asm("loc_6C03A45: xor %eax,%eax;");
    asm("loc_6C03A47: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03A50() // _sub_6C03A50
{
    __DEBUG_ASM(6C03A50);
    // chunk 0x6C03A50 _sub_6C03A50
    asm("loc_6C03A50: mov 4(%esp),%eax;");
    asm("loc_6C03A54: push %ebx;");
    asm("loc_6C03A55: push %ebp;");
    asm("loc_6C03A56: mov 0x10(%esp),%ebp;");
    asm("loc_6C03A5A: push %esi;");
    asm("loc_6C03A5B: push %edi;");
    asm("loc_6C03A5C: mov %ecx,%edi;");
    asm("loc_6C03A5E: lea 0x10(%edi),%esi;");
    asm("loc_6C03A61: push %esi;");
    asm("loc_6C03A62: push %ebp;");
    asm("loc_6C03A63: lea 0x18(%edi),%ebx;");
    asm("loc_6C03A66: push %ebx;");
    asm("loc_6C03A67: mov %ebp,4(%esi);");
    asm("loc_6C03A6A: mov %eax,8(%esi);");
    asm("loc_6C03A6D: movl $0,(%esi);");
    asm("loc_6C03A73: movl $0,0xC(%esi);");
    asm("loc_6C03A7A: call _sub_6BEBE90;");
    asm("loc_6C03A7F: test %eax,%eax;");
    asm("loc_6C03A81: mov %eax,0x1C(%edi);");
    asm("loc_6C03A84: je loc_6C03A92;");
    asm("loc_6C03A86: pop %edi;");
    asm("loc_6C03A87: pop %esi;");
    asm("loc_6C03A88: pop %ebp;");
    asm("loc_6C03A89: mov $0x17,%eax;");
    asm("loc_6C03A8E: pop %ebx;");
    asm("loc_6C03A8F: ret $0xC;");
    asm("loc_6C03A92: mov 0x14(%edi),%ecx;");
    asm("loc_6C03A95: push %ecx;");
    asm("loc_6C03A96: push %esi;");
    asm("loc_6C03A97: push %ebx;");
    asm("loc_6C03A98: lea 0x24(%esp),%edx;");
    asm("loc_6C03A9C: push %edx;");
    asm("loc_6C03A9D: mov %edi,%ecx;");
    asm("loc_6C03A9F: call _sub_6BEC070;");
    asm("loc_6C03AA4: test %eax,%eax;");
    asm("loc_6C03AA6: je loc_6C03AB4;");
    asm("loc_6C03AA8: pop %edi;");
    asm("loc_6C03AA9: pop %esi;");
    asm("loc_6C03AAA: pop %ebp;");
    asm("loc_6C03AAB: mov $0x17,%eax;");
    asm("loc_6C03AB0: pop %ebx;");
    asm("loc_6C03AB1: ret $0xC;");
    asm("loc_6C03AB4: mov 0x18(%esp),%eax;");
    asm("loc_6C03AB8: test %eax,%eax;");
    asm("loc_6C03ABA: je loc_6C03AD4;");
    asm("loc_6C03ABC: push %eax;");
    asm("loc_6C03ABD: lea 0x20(%edi),%eax;");
    asm("loc_6C03AC0: push %eax;");
    asm("loc_6C03AC1: calll *_import_6C0B220;");
    asm("loc_6C03AC7: mov 0x20(%esp),%ecx;");
    asm("loc_6C03ACB: push %ecx;");
    asm("loc_6C03ACC: call _sub_6C09AAA;");
    asm("loc_6C03AD1: add $0xC,%esp;");
    asm("loc_6C03AD4: mov (%esi),%edx;");
    asm("loc_6C03AD6: mov 4(%esi),%ecx;");
    asm("loc_6C03AD9: add $4,%edx;");
    asm("loc_6C03ADC: mov %edx,%eax;");
    asm("loc_6C03ADE: cmp %ecx,%eax;");
    asm("loc_6C03AE0: mov %edx,(%esi);");
    asm("loc_6C03AE2: mov $0x17,%ecx;");
    asm("loc_6C03AE7: jbe loc_6C03AEC;");
    asm("loc_6C03AE9: mov %ecx,0xC(%esi);");
    asm("loc_6C03AEC: mov 0x1C(%edi),%eax;");
    asm("loc_6C03AEF: test %eax,%eax;");
    asm("loc_6C03AF1: jne loc_6C03BEA;");
    asm("loc_6C03AF7: mov (%ebx),%eax;");
    asm("loc_6C03AF9: mov (%eax),%edx;");
    asm("loc_6C03AFB: add $4,%eax;");
    asm("loc_6C03AFE: mov %eax,(%ebx);");
    asm("loc_6C03B00: mov %edx,0xA0(%edi);");
    asm("loc_6C03B06: mov (%esi),%eax;");
    asm("loc_6C03B08: mov 4(%esi),%edx;");
    asm("loc_6C03B0B: add $4,%eax;");
    asm("loc_6C03B0E: cmp %edx,%eax;");
    asm("loc_6C03B10: mov %eax,(%esi);");
    asm("loc_6C03B12: jbe loc_6C03B17;");
    asm("loc_6C03B14: mov %ecx,0xC(%esi);");
    asm("loc_6C03B17: mov 0x1C(%edi),%eax;");
    asm("loc_6C03B1A: test %eax,%eax;");
    asm("loc_6C03B1C: jne loc_6C03BEA;");
    asm("loc_6C03B22: mov (%ebx),%eax;");
    asm("loc_6C03B24: mov (%eax),%edx;");
    asm("loc_6C03B26: add $4,%eax;");
    asm("loc_6C03B29: mov %eax,(%ebx);");
    asm("loc_6C03B2B: mov %edx,0xA4(%edi);");
    asm("loc_6C03B31: mov (%esi),%eax;");
    asm("loc_6C03B33: mov 4(%esi),%edx;");
    asm("loc_6C03B36: add $4,%eax;");
    asm("loc_6C03B39: cmp %edx,%eax;");
    asm("loc_6C03B3B: mov %eax,(%esi);");
    asm("loc_6C03B3D: jbe loc_6C03B42;");
    asm("loc_6C03B3F: mov %ecx,0xC(%esi);");
    asm("loc_6C03B42: mov 0x1C(%edi),%eax;");
    asm("loc_6C03B45: test %eax,%eax;");
    asm("loc_6C03B47: jne loc_6C03BEA;");
    asm("loc_6C03B4D: mov (%ebx),%eax;");
    asm("loc_6C03B4F: mov (%eax),%edx;");
    asm("loc_6C03B51: add $4,%eax;");
    asm("loc_6C03B54: mov %eax,(%ebx);");
    asm("loc_6C03B56: mov %edx,0xA8(%edi);");
    asm("loc_6C03B5C: mov (%esi),%eax;");
    asm("loc_6C03B5E: mov 4(%esi),%edx;");
    asm("loc_6C03B61: add $4,%eax;");
    asm("loc_6C03B64: cmp %edx,%eax;");
    asm("loc_6C03B66: mov %eax,(%esi);");
    asm("loc_6C03B68: jbe loc_6C03B6D;");
    asm("loc_6C03B6A: mov %ecx,0xC(%esi);");
    asm("loc_6C03B6D: mov 0x1C(%edi),%eax;");
    asm("loc_6C03B70: test %eax,%eax;");
    asm("loc_6C03B72: jne loc_6C03BEA;");
    asm("loc_6C03B74: mov (%ebx),%eax;");
    asm("loc_6C03B76: mov (%eax),%ecx;");
    asm("loc_6C03B78: push %esi;");
    asm("loc_6C03B79: push %ebp;");
    asm("loc_6C03B7A: mov %ecx,0xAC(%edi);");
    asm("loc_6C03B80: add $4,%eax;");
    asm("loc_6C03B83: push %ebx;");
    asm("loc_6C03B84: mov %edi,%ecx;");
    asm("loc_6C03B86: mov %eax,(%ebx);");
    asm("loc_6C03B88: call _sub_6BEBEB0;");
    asm("loc_6C03B8D: test %eax,%eax;");
    asm("loc_6C03B8F: mov %eax,0x1C(%edi);");
    asm("loc_6C03B92: je loc_6C03BA0;");
    asm("loc_6C03B94: pop %edi;");
    asm("loc_6C03B95: pop %esi;");
    asm("loc_6C03B96: pop %ebp;");
    asm("loc_6C03B97: mov $0x17,%eax;");
    asm("loc_6C03B9C: pop %ebx;");
    asm("loc_6C03B9D: ret $0xC;");
    asm("loc_6C03BA0: mov (%esi),%edx;");
    asm("loc_6C03BA2: mov 0x1C(%esp),%eax;");
    asm("loc_6C03BA6: mov %edx,(%eax);");
    asm("loc_6C03BA8: mov 0xC(%edi),%ecx;");
    asm("loc_6C03BAB: push %ecx;");
    asm("loc_6C03BAC: call _sub_6BEC3B0;");
    asm("loc_6C03BB1: mov %eax,%ecx;");
    asm("loc_6C03BB3: mov 4(%ecx),%edx;");
    asm("loc_6C03BB6: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C03BB9: mov 0x14(%ecx),%eax;");
    asm("loc_6C03BBC: add $4,%esp;");
    asm("loc_6C03BBF: inc %edx;");
    asm("loc_6C03BC0: mov %edx,4(%ecx);");
    asm("loc_6C03BC3: mov %edx,%edi;");
    asm("loc_6C03BC5: mov (%esi),%edx;");
    asm("loc_6C03BC7: add $2,%edx;");
    asm("loc_6C03BCA: add %edx,%ebp;");
    asm("loc_6C03BCC: mov %ebp,0x1C(%ecx);");
    asm("loc_6C03BCF: mov (%esi),%esi;");
    asm("loc_6C03BD1: add $2,%eax;");
    asm("loc_6C03BD4: cmp %eax,%esi;");
    asm("loc_6C03BD6: jbe loc_6C03BDE;");
    asm("loc_6C03BD8: add $2,%esi;");
    asm("loc_6C03BDB: mov %esi,0x14(%ecx);");
    asm("loc_6C03BDE: mov 0x1C(%ecx),%eax;");
    asm("loc_6C03BE1: xor %edx,%edx;");
    asm("loc_6C03BE3: div %edi;");
    asm("loc_6C03BE5: mov %eax,0xC(%ecx);");
    asm("loc_6C03BE8: xor %eax,%eax;");
    asm("loc_6C03BEA: pop %edi;");
    asm("loc_6C03BEB: pop %esi;");
    asm("loc_6C03BEC: pop %ebp;");
    asm("loc_6C03BED: pop %ebx;");
    asm("loc_6C03BEE: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03C00() // _sub_6C03C00
{
    __DEBUG_ASM(6C03C00);
    // chunk 0x6C03C00 _sub_6C03C00
    asm("loc_6C03C00: mov 0xAC(%ecx),%eax;");
    asm("loc_6C03C06: mov 0xA8(%ecx),%edx;");
    asm("loc_6C03C0C: push %esi;");
    asm("loc_6C03C0D: push $_data_6C0BBF4;");
    asm("loc_6C03C12: push %eax;");
    asm("loc_6C03C13: mov 0xA4(%ecx),%eax;");
    asm("loc_6C03C19: mov _import_6C0B154,%esi;");
    asm("loc_6C03C1F: push $_data_6C0E534;");
    asm("loc_6C03C24: push %edx;");
    asm("loc_6C03C25: mov 0xA0(%ecx),%edx;");
    asm("loc_6C03C2B: push $_data_6C0E528;");
    asm("loc_6C03C30: push %eax;");
    asm("loc_6C03C31: mov 0x20(%esp),%eax;");
    asm("loc_6C03C35: push $_data_6C0E51C;");
    asm("loc_6C03C3A: push %edx;");
    asm("loc_6C03C3B: push $_data_6C0E510;");
    asm("loc_6C03C40: add $0x20,%ecx;");
    asm("loc_6C03C43: push %ecx;");
    asm("loc_6C03C44: push $_data_6C0E504;");
    asm("loc_6C03C49: push %eax;");
    asm("loc_6C03C4A: call *%esi;");
    asm("loc_6C03C4C: add $8,%esp;");
    asm("loc_6C03C4F: mov %eax,%ecx;");
    asm("loc_6C03C51: calll *_import_6C0B1A4;");
    asm("loc_6C03C57: push %eax;");
    asm("loc_6C03C58: call *%esi;");
    asm("loc_6C03C5A: add $8,%esp;");
    asm("loc_6C03C5D: mov %eax,%ecx;");
    asm("loc_6C03C5F: calll *_import_6C0B170;");
    asm("loc_6C03C65: push %eax;");
    asm("loc_6C03C66: call *%esi;");
    asm("loc_6C03C68: add $8,%esp;");
    asm("loc_6C03C6B: mov %eax,%ecx;");
    asm("loc_6C03C6D: calll *_import_6C0B170;");
    asm("loc_6C03C73: push %eax;");
    asm("loc_6C03C74: call *%esi;");
    asm("loc_6C03C76: add $8,%esp;");
    asm("loc_6C03C79: mov %eax,%ecx;");
    asm("loc_6C03C7B: calll *_import_6C0B170;");
    asm("loc_6C03C81: push %eax;");
    asm("loc_6C03C82: call *%esi;");
    asm("loc_6C03C84: add $8,%esp;");
    asm("loc_6C03C87: mov %eax,%ecx;");
    asm("loc_6C03C89: calll *_import_6C0B170;");
    asm("loc_6C03C8F: push %eax;");
    asm("loc_6C03C90: call *%esi;");
    asm("loc_6C03C92: add $8,%esp;");
    asm("loc_6C03C95: pop %esi;");
    asm("loc_6C03C96: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03CA0() // _sub_6C03CA0
{
    __DEBUG_ASM(6C03CA0);
    // chunk 0x6C03CA0 _sub_6C03CA0
    asm("loc_6C03CA0: mov _data_6C0E544,%eax;");
    asm("loc_6C03CA5: mov %eax,_data_6C141D8;");
    asm("loc_6C03CAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03CB0() // _sub_6C03CB0
{
    __DEBUG_ASM(6C03CB0);
    // chunk 0x6C03CB0 _sub_6C03CB0
    asm("loc_6C03CB0: mov _data_6C0E544,%eax;");
    asm("loc_6C03CB5: mov %eax,_data_6C141DC;");
    asm("loc_6C03CBA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03CC0() // _sub_6C03CC0
{
    __DEBUG_ASM(6C03CC0);
    // chunk 0x6C03CC0 _sub_6C03CC0
    asm("loc_6C03CC0: mov _data_6C0E548,%eax;");
    asm("loc_6C03CC5: mov %eax,_data_6C141D4;");
    asm("loc_6C03CCA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03CD0() // _sub_6C03CD0
{
    __DEBUG_ASM(6C03CD0);
    // chunk 0x6C03CD0 _sub_6C03CD0
    asm("loc_6C03CD0: mov 8(%esp),%eax;");
    asm("loc_6C03CD4: push %ebx;");
    asm("loc_6C03CD5: push %ebp;");
    asm("loc_6C03CD6: mov %ecx,%ebp;");
    asm("loc_6C03CD8: mov 0xC(%esp),%ecx;");
    asm("loc_6C03CDC: lea 0x10(%ebp),%ebx;");
    asm("loc_6C03CDF: push %esi;");
    asm("loc_6C03CE0: mov %eax,4(%ebx);");
    asm("loc_6C03CE3: mov (%ecx),%edx;");
    asm("loc_6C03CE5: push %edi;");
    asm("loc_6C03CE6: mov %edx,8(%ebx);");
    asm("loc_6C03CE9: movl $0,(%ebx);");
    asm("loc_6C03CEF: movl $0,0xC(%ebx);");
    asm("loc_6C03CF6: mov 0x14(%ebp),%eax;");
    asm("loc_6C03CF9: push %ebx;");
    asm("loc_6C03CFA: push %eax;");
    asm("loc_6C03CFB: lea 0x18(%ebp),%esi;");
    asm("loc_6C03CFE: push %esi;");
    asm("loc_6C03CFF: mov %ebp,%ecx;");
    asm("loc_6C03D01: call _sub_6BEBE50;");
    asm("loc_6C03D06: test %eax,%eax;");
    asm("loc_6C03D08: mov %eax,0x1C(%ebp);");
    asm("loc_6C03D0B: je loc_6C03D19;");
    asm("loc_6C03D0D: pop %edi;");
    asm("loc_6C03D0E: pop %esi;");
    asm("loc_6C03D0F: pop %ebp;");
    asm("loc_6C03D10: mov $0x16,%eax;");
    asm("loc_6C03D15: pop %ebx;");
    asm("loc_6C03D16: ret $0xC;");
    asm("loc_6C03D19: xor %eax,%eax;");
    asm("loc_6C03D1B: or $0xFFFFFFFF,%ecx;");
    asm("loc_6C03D1E: lea 0x20(%ebp),%edx;");
    asm("loc_6C03D21: mov %edx,%edi;");
    asm("loc_6C03D23: repne scas (%edi),%al;");
    asm("loc_6C03D25: mov (%ebx),%eax;");
    asm("loc_6C03D27: mov 4(%ebx),%edi;");
    asm("loc_6C03D2A: not %ecx;");
    asm("loc_6C03D2C: add $2,%eax;");
    asm("loc_6C03D2F: dec %ecx;");
    asm("loc_6C03D30: cmp %edi,%eax;");
    asm("loc_6C03D32: mov %eax,(%ebx);");
    asm("loc_6C03D34: jbe loc_6C03D3D;");
    asm("loc_6C03D36: movl $0x16,0xC(%ebx);");
    asm("loc_6C03D3D: mov 0x1C(%ebp),%eax;");
    asm("loc_6C03D40: test %eax,%eax;");
    asm("loc_6C03D42: je loc_6C03D50;");
    asm("loc_6C03D44: pop %edi;");
    asm("loc_6C03D45: pop %esi;");
    asm("loc_6C03D46: pop %ebp;");
    asm("loc_6C03D47: mov $0x16,%eax;");
    asm("loc_6C03D4C: pop %ebx;");
    asm("loc_6C03D4D: ret $0xC;");
    asm("loc_6C03D50: mov (%esi),%eax;");
    asm("loc_6C03D52: mov %cx,(%eax);");
    asm("loc_6C03D55: add $2,%eax;");
    asm("loc_6C03D58: mov %eax,(%esi);");
    asm("loc_6C03D5A: mov 4(%ebx),%edi;");
    asm("loc_6C03D5D: xor %eax,%eax;");
    asm("loc_6C03D5F: mov %cx,%ax;");
    asm("loc_6C03D62: mov (%ebx),%ecx;");
    asm("loc_6C03D64: add %eax,%ecx;");
    asm("loc_6C03D66: cmp %edi,%ecx;");
    asm("loc_6C03D68: mov %ecx,(%ebx);");
    asm("loc_6C03D6A: jbe loc_6C03D73;");
    asm("loc_6C03D6C: movl $0x16,0xC(%ebx);");
    asm("loc_6C03D73: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C03D76: test %ecx,%ecx;");
    asm("loc_6C03D78: je loc_6C03D86;");
    asm("loc_6C03D7A: pop %edi;");
    asm("loc_6C03D7B: pop %esi;");
    asm("loc_6C03D7C: pop %ebp;");
    asm("loc_6C03D7D: mov $0x16,%eax;");
    asm("loc_6C03D82: pop %ebx;");
    asm("loc_6C03D83: ret $0xC;");
    asm("loc_6C03D86: mov (%esi),%edi;");
    asm("loc_6C03D88: mov %eax,%ecx;");
    asm("loc_6C03D8A: mov %edx,%esi;");
    asm("loc_6C03D8C: mov %ecx,%edx;");
    asm("loc_6C03D8E: shr $2,%ecx;");
    asm("loc_6C03D91: mov %edi,0x18(%esp);");
    asm("loc_6C03D95: rep movsl (%esi),(%edi);");
    asm("loc_6C03D97: mov %edx,%ecx;");
    asm("loc_6C03D99: and $3,%ecx;");
    asm("loc_6C03D9C: rep movsb (%esi),(%edi);");
    asm("loc_6C03D9E: mov 0x18(%esp),%ecx;");
    asm("loc_6C03DA2: mov 0x14(%ebp),%edx;");
    asm("loc_6C03DA5: add %eax,%ecx;");
    asm("loc_6C03DA7: push %ebx;");
    asm("loc_6C03DA8: lea 0x18(%ebp),%eax;");
    asm("loc_6C03DAB: push %edx;");
    asm("loc_6C03DAC: mov %ecx,(%eax);");
    asm("loc_6C03DAE: push %eax;");
    asm("loc_6C03DAF: mov %ebp,%ecx;");
    asm("loc_6C03DB1: call _sub_6BEBEA0;");
    asm("loc_6C03DB6: test %eax,%eax;");
    asm("loc_6C03DB8: mov %eax,0x1C(%ebp);");
    asm("loc_6C03DBB: je loc_6C03DC9;");
    asm("loc_6C03DBD: pop %edi;");
    asm("loc_6C03DBE: pop %esi;");
    asm("loc_6C03DBF: pop %ebp;");
    asm("loc_6C03DC0: mov $0x16,%eax;");
    asm("loc_6C03DC5: pop %ebx;");
    asm("loc_6C03DC6: ret $0xC;");
    asm("loc_6C03DC9: mov (%ebx),%eax;");
    asm("loc_6C03DCB: mov 0x1C(%esp),%ecx;");
    asm("loc_6C03DCF: mov %eax,(%ecx);");
    asm("loc_6C03DD1: mov 0xC(%ebp),%edx;");
    asm("loc_6C03DD4: push %edx;");
    asm("loc_6C03DD5: call _sub_6BEC3B0;");
    asm("loc_6C03DDA: mov %eax,%ecx;");
    asm("loc_6C03DDC: mov (%ecx),%esi;");
    asm("loc_6C03DDE: mov 0x18(%ecx),%edx;");
    asm("loc_6C03DE1: add $4,%esp;");
    asm("loc_6C03DE4: inc %esi;");
    asm("loc_6C03DE5: mov %esi,(%ecx);");
    asm("loc_6C03DE7: mov (%ebx),%eax;");
    asm("loc_6C03DE9: add %eax,%edx;");
    asm("loc_6C03DEB: mov 0x10(%ecx),%eax;");
    asm("loc_6C03DEE: mov %edx,0x18(%ecx);");
    asm("loc_6C03DF1: mov (%ebx),%ebx;");
    asm("loc_6C03DF3: cmp %eax,%ebx;");
    asm("loc_6C03DF5: jbe loc_6C03DFA;");
    asm("loc_6C03DF7: mov %ebx,0x10(%ecx);");
    asm("loc_6C03DFA: mov 0x18(%ecx),%eax;");
    asm("loc_6C03DFD: xor %edx,%edx;");
    asm("loc_6C03DFF: div %esi;");
    asm("loc_6C03E01: pop %edi;");
    asm("loc_6C03E02: pop %esi;");
    asm("loc_6C03E03: pop %ebp;");
    asm("loc_6C03E04: pop %ebx;");
    asm("loc_6C03E05: mov %eax,8(%ecx);");
    asm("loc_6C03E08: xor %eax,%eax;");
    asm("loc_6C03E0A: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03E10() // _sub_6C03E10
{
    __DEBUG_ASM(6C03E10);
    // chunk 0x6C03E10 _sub_6C03E10
    asm("loc_6C03E10: mov 8(%esp),%eax;");
    asm("loc_6C03E14: push %ebx;");
    asm("loc_6C03E15: push %ebp;");
    asm("loc_6C03E16: push %esi;");
    asm("loc_6C03E17: mov %ecx,%ebx;");
    asm("loc_6C03E19: mov 0x10(%esp),%ecx;");
    asm("loc_6C03E1D: lea 0x10(%ebx),%ebp;");
    asm("loc_6C03E20: push %edi;");
    asm("loc_6C03E21: push %ebp;");
    asm("loc_6C03E22: push %eax;");
    asm("loc_6C03E23: mov %ecx,8(%ebp);");
    asm("loc_6C03E26: lea 0x18(%ebx),%esi;");
    asm("loc_6C03E29: push %esi;");
    asm("loc_6C03E2A: mov %ebx,%ecx;");
    asm("loc_6C03E2C: mov %eax,4(%ebp);");
    asm("loc_6C03E2F: movl $0,(%ebp);");
    asm("loc_6C03E36: movl $0,0xC(%ebp);");
    asm("loc_6C03E3D: call _sub_6BEBE90;");
    asm("loc_6C03E42: test %eax,%eax;");
    asm("loc_6C03E44: mov %eax,0x1C(%ebx);");
    asm("loc_6C03E47: je loc_6C03E55;");
    asm("loc_6C03E49: pop %edi;");
    asm("loc_6C03E4A: pop %esi;");
    asm("loc_6C03E4B: pop %ebp;");
    asm("loc_6C03E4C: mov $0x17,%eax;");
    asm("loc_6C03E51: pop %ebx;");
    asm("loc_6C03E52: ret $0xC;");
    asm("loc_6C03E55: mov (%ebp),%edx;");
    asm("loc_6C03E58: mov 4(%ebp),%ecx;");
    asm("loc_6C03E5B: add $2,%edx;");
    asm("loc_6C03E5E: mov %edx,%eax;");
    asm("loc_6C03E60: cmp %ecx,%eax;");
    asm("loc_6C03E62: mov %edx,(%ebp);");
    asm("loc_6C03E65: jbe loc_6C03E6E;");
    asm("loc_6C03E67: movl $0x17,0xC(%ebp);");
    asm("loc_6C03E6E: mov 0x1C(%ebx),%eax;");
    asm("loc_6C03E71: test %eax,%eax;");
    asm("loc_6C03E73: jne loc_6C03F40;");
    asm("loc_6C03E79: mov (%esi),%eax;");
    asm("loc_6C03E7B: mov (%eax),%cx;");
    asm("loc_6C03E7E: xor %edx,%edx;");
    asm("loc_6C03E80: mov %cx,%dx;");
    asm("loc_6C03E83: add $2,%eax;");
    asm("loc_6C03E86: mov %eax,(%esi);");
    asm("loc_6C03E88: mov (%ebp),%edi;");
    asm("loc_6C03E8B: mov 4(%ebp),%ecx;");
    asm("loc_6C03E8E: add %edx,%edi;");
    asm("loc_6C03E90: mov %edi,%eax;");
    asm("loc_6C03E92: cmp %ecx,%eax;");
    asm("loc_6C03E94: mov %edi,(%ebp);");
    asm("loc_6C03E97: jbe loc_6C03EA0;");
    asm("loc_6C03E99: movl $0x17,0xC(%ebp);");
    asm("loc_6C03EA0: mov 0x1C(%ebx),%eax;");
    asm("loc_6C03EA3: test %eax,%eax;");
    asm("loc_6C03EA5: jne loc_6C03F40;");
    asm("loc_6C03EAB: mov (%esi),%esi;");
    asm("loc_6C03EAD: mov %edx,%ecx;");
    asm("loc_6C03EAF: mov %ecx,%eax;");
    asm("loc_6C03EB1: shr $2,%ecx;");
    asm("loc_6C03EB4: mov %esi,0x14(%esp);");
    asm("loc_6C03EB8: lea 0x20(%ebx),%edi;");
    asm("loc_6C03EBB: rep movsl (%esi),(%edi);");
    asm("loc_6C03EBD: mov %eax,%ecx;");
    asm("loc_6C03EBF: and $3,%ecx;");
    asm("loc_6C03EC2: rep movsb (%esi),(%edi);");
    asm("loc_6C03EC4: mov 0x14(%esp),%ecx;");
    asm("loc_6C03EC8: add %edx,%ecx;");
    asm("loc_6C03ECA: lea 0x18(%ebx),%eax;");
    asm("loc_6C03ECD: mov %ecx,(%eax);");
    asm("loc_6C03ECF: movb $0,0x20(%edx,%ebx);");
    asm("loc_6C03ED4: mov 0x18(%esp),%edx;");
    asm("loc_6C03ED8: push %ebp;");
    asm("loc_6C03ED9: push %edx;");
    asm("loc_6C03EDA: push %eax;");
    asm("loc_6C03EDB: mov %ebx,%ecx;");
    asm("loc_6C03EDD: call _sub_6BEBEB0;");
    asm("loc_6C03EE2: test %eax,%eax;");
    asm("loc_6C03EE4: mov %eax,0x1C(%ebx);");
    asm("loc_6C03EE7: je loc_6C03EF5;");
    asm("loc_6C03EE9: pop %edi;");
    asm("loc_6C03EEA: pop %esi;");
    asm("loc_6C03EEB: pop %ebp;");
    asm("loc_6C03EEC: mov $0x17,%eax;");
    asm("loc_6C03EF1: pop %ebx;");
    asm("loc_6C03EF2: ret $0xC;");
    asm("loc_6C03EF5: mov (%ebp),%eax;");
    asm("loc_6C03EF8: mov 0x1C(%esp),%ecx;");
    asm("loc_6C03EFC: mov %eax,(%ecx);");
    asm("loc_6C03EFE: mov 0xC(%ebx),%edx;");
    asm("loc_6C03F01: push %edx;");
    asm("loc_6C03F02: call _sub_6BEC3B0;");
    asm("loc_6C03F07: mov %eax,%ecx;");
    asm("loc_6C03F09: mov 4(%ecx),%esi;");
    asm("loc_6C03F0C: mov 0x1C(%ecx),%ebx;");
    asm("loc_6C03F0F: mov 0x14(%ecx),%edx;");
    asm("loc_6C03F12: add $4,%esp;");
    asm("loc_6C03F15: inc %esi;");
    asm("loc_6C03F16: mov %esi,4(%ecx);");
    asm("loc_6C03F19: mov (%ebp),%eax;");
    asm("loc_6C03F1C: add $2,%eax;");
    asm("loc_6C03F1F: add %eax,%ebx;");
    asm("loc_6C03F21: mov %ebx,0x1C(%ecx);");
    asm("loc_6C03F24: mov (%ebp),%ebp;");
    asm("loc_6C03F27: add $2,%edx;");
    asm("loc_6C03F2A: cmp %edx,%ebp;");
    asm("loc_6C03F2C: jbe loc_6C03F34;");
    asm("loc_6C03F2E: add $2,%ebp;");
    asm("loc_6C03F31: mov %ebp,0x14(%ecx);");
    asm("loc_6C03F34: mov 0x1C(%ecx),%eax;");
    asm("loc_6C03F37: xor %edx,%edx;");
    asm("loc_6C03F39: div %esi;");
    asm("loc_6C03F3B: mov %eax,0xC(%ecx);");
    asm("loc_6C03F3E: xor %eax,%eax;");
    asm("loc_6C03F40: pop %edi;");
    asm("loc_6C03F41: pop %esi;");
    asm("loc_6C03F42: pop %ebp;");
    asm("loc_6C03F43: pop %ebx;");
    asm("loc_6C03F44: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03F50() // _sub_6C03F50
{
    __DEBUG_ASM(6C03F50);
    // chunk 0x6C03F50 _sub_6C03F50
    asm("loc_6C03F50: mov 4(%esp),%eax;");
    asm("loc_6C03F54: push %esi;");
    asm("loc_6C03F55: mov _import_6C0B154,%esi;");
    asm("loc_6C03F5B: push $_data_6C0BBF4;");
    asm("loc_6C03F60: add $0x20,%ecx;");
    asm("loc_6C03F63: push %ecx;");
    asm("loc_6C03F64: push $_data_6C0E54C;");
    asm("loc_6C03F69: push %eax;");
    asm("loc_6C03F6A: call *%esi;");
    asm("loc_6C03F6C: add $8,%esp;");
    asm("loc_6C03F6F: push %eax;");
    asm("loc_6C03F70: call *%esi;");
    asm("loc_6C03F72: add $8,%esp;");
    asm("loc_6C03F75: push %eax;");
    asm("loc_6C03F76: call *%esi;");
    asm("loc_6C03F78: add $8,%esp;");
    asm("loc_6C03F7B: pop %esi;");
    asm("loc_6C03F7C: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C03F80() // _sub_6C03F80
{
    __DEBUG_ASM(6C03F80);
    // chunk 0x6C03F80 _sub_6C03F80
    asm("loc_6C03F80: mov 8(%esp),%eax;");
    asm("loc_6C03F84: push %ebx;");
    asm("loc_6C03F85: push %ebp;");
    asm("loc_6C03F86: mov %ecx,%ebp;");
    asm("loc_6C03F88: mov 0xC(%esp),%ecx;");
    asm("loc_6C03F8C: lea 0x10(%ebp),%ebx;");
    asm("loc_6C03F8F: push %esi;");
    asm("loc_6C03F90: mov %eax,4(%ebx);");
    asm("loc_6C03F93: mov (%ecx),%edx;");
    asm("loc_6C03F95: push %edi;");
    asm("loc_6C03F96: mov %edx,8(%ebx);");
    asm("loc_6C03F99: movl $0,(%ebx);");
    asm("loc_6C03F9F: movl $0,0xC(%ebx);");
    asm("loc_6C03FA6: mov 0x14(%ebp),%eax;");
    asm("loc_6C03FA9: push %ebx;");
    asm("loc_6C03FAA: push %eax;");
    asm("loc_6C03FAB: lea 0x18(%ebp),%esi;");
    asm("loc_6C03FAE: push %esi;");
    asm("loc_6C03FAF: mov %ebp,%ecx;");
    asm("loc_6C03FB1: call _sub_6BEBE50;");
    asm("loc_6C03FB6: test %eax,%eax;");
    asm("loc_6C03FB8: mov %eax,0x1C(%ebp);");
    asm("loc_6C03FBB: je loc_6C03FC9;");
    asm("loc_6C03FBD: pop %edi;");
    asm("loc_6C03FBE: pop %esi;");
    asm("loc_6C03FBF: pop %ebp;");
    asm("loc_6C03FC0: mov $0x16,%eax;");
    asm("loc_6C03FC5: pop %ebx;");
    asm("loc_6C03FC6: ret $0xC;");
    asm("loc_6C03FC9: xor %eax,%eax;");
    asm("loc_6C03FCB: or $0xFFFFFFFF,%ecx;");
    asm("loc_6C03FCE: lea 0x20(%ebp),%edx;");
    asm("loc_6C03FD1: mov %edx,%edi;");
    asm("loc_6C03FD3: repne scas (%edi),%al;");
    asm("loc_6C03FD5: mov (%ebx),%eax;");
    asm("loc_6C03FD7: mov 4(%ebx),%edi;");
    asm("loc_6C03FDA: not %ecx;");
    asm("loc_6C03FDC: add $2,%eax;");
    asm("loc_6C03FDF: dec %ecx;");
    asm("loc_6C03FE0: cmp %edi,%eax;");
    asm("loc_6C03FE2: mov %eax,(%ebx);");
    asm("loc_6C03FE4: jbe loc_6C03FED;");
    asm("loc_6C03FE6: movl $0x16,0xC(%ebx);");
    asm("loc_6C03FED: mov 0x1C(%ebp),%eax;");
    asm("loc_6C03FF0: test %eax,%eax;");
    asm("loc_6C03FF2: je loc_6C04000;");
    asm("loc_6C03FF4: pop %edi;");
    asm("loc_6C03FF5: pop %esi;");
    asm("loc_6C03FF6: pop %ebp;");
    asm("loc_6C03FF7: mov $0x16,%eax;");
    asm("loc_6C03FFC: pop %ebx;");
    asm("loc_6C03FFD: ret $0xC;");
    asm("loc_6C04000: mov (%esi),%eax;");
    asm("loc_6C04002: mov %cx,(%eax);");
    asm("loc_6C04005: add $2,%eax;");
    asm("loc_6C04008: mov %eax,(%esi);");
    asm("loc_6C0400A: mov 4(%ebx),%edi;");
    asm("loc_6C0400D: xor %eax,%eax;");
    asm("loc_6C0400F: mov %cx,%ax;");
    asm("loc_6C04012: mov (%ebx),%ecx;");
    asm("loc_6C04014: add %eax,%ecx;");
    asm("loc_6C04016: cmp %edi,%ecx;");
    asm("loc_6C04018: mov %ecx,(%ebx);");
    asm("loc_6C0401A: jbe loc_6C04023;");
    asm("loc_6C0401C: movl $0x16,0xC(%ebx);");
    asm("loc_6C04023: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C04026: test %ecx,%ecx;");
    asm("loc_6C04028: je loc_6C04036;");
    asm("loc_6C0402A: pop %edi;");
    asm("loc_6C0402B: pop %esi;");
    asm("loc_6C0402C: pop %ebp;");
    asm("loc_6C0402D: mov $0x16,%eax;");
    asm("loc_6C04032: pop %ebx;");
    asm("loc_6C04033: ret $0xC;");
    asm("loc_6C04036: mov (%esi),%edi;");
    asm("loc_6C04038: mov %eax,%ecx;");
    asm("loc_6C0403A: mov %edx,%esi;");
    asm("loc_6C0403C: mov %ecx,%edx;");
    asm("loc_6C0403E: shr $2,%ecx;");
    asm("loc_6C04041: mov %edi,0x18(%esp);");
    asm("loc_6C04045: rep movsl (%esi),(%edi);");
    asm("loc_6C04047: mov %edx,%ecx;");
    asm("loc_6C04049: and $3,%ecx;");
    asm("loc_6C0404C: rep movsb (%esi),(%edi);");
    asm("loc_6C0404E: mov 0x18(%esp),%ecx;");
    asm("loc_6C04052: mov 0x14(%ebp),%edx;");
    asm("loc_6C04055: add %eax,%ecx;");
    asm("loc_6C04057: push %ebx;");
    asm("loc_6C04058: lea 0x18(%ebp),%eax;");
    asm("loc_6C0405B: push %edx;");
    asm("loc_6C0405C: mov %ecx,(%eax);");
    asm("loc_6C0405E: push %eax;");
    asm("loc_6C0405F: mov %ebp,%ecx;");
    asm("loc_6C04061: call _sub_6BEBEA0;");
    asm("loc_6C04066: test %eax,%eax;");
    asm("loc_6C04068: mov %eax,0x1C(%ebp);");
    asm("loc_6C0406B: je loc_6C04079;");
    asm("loc_6C0406D: pop %edi;");
    asm("loc_6C0406E: pop %esi;");
    asm("loc_6C0406F: pop %ebp;");
    asm("loc_6C04070: mov $0x16,%eax;");
    asm("loc_6C04075: pop %ebx;");
    asm("loc_6C04076: ret $0xC;");
    asm("loc_6C04079: mov (%ebx),%eax;");
    asm("loc_6C0407B: mov 0x1C(%esp),%ecx;");
    asm("loc_6C0407F: mov %eax,(%ecx);");
    asm("loc_6C04081: mov 0xC(%ebp),%edx;");
    asm("loc_6C04084: push %edx;");
    asm("loc_6C04085: call _sub_6BEC3B0;");
    asm("loc_6C0408A: mov %eax,%ecx;");
    asm("loc_6C0408C: mov (%ecx),%esi;");
    asm("loc_6C0408E: mov 0x18(%ecx),%edx;");
    asm("loc_6C04091: add $4,%esp;");
    asm("loc_6C04094: inc %esi;");
    asm("loc_6C04095: mov %esi,(%ecx);");
    asm("loc_6C04097: mov (%ebx),%eax;");
    asm("loc_6C04099: add %eax,%edx;");
    asm("loc_6C0409B: mov 0x10(%ecx),%eax;");
    asm("loc_6C0409E: mov %edx,0x18(%ecx);");
    asm("loc_6C040A1: mov (%ebx),%ebx;");
    asm("loc_6C040A3: cmp %eax,%ebx;");
    asm("loc_6C040A5: jbe loc_6C040AA;");
    asm("loc_6C040A7: mov %ebx,0x10(%ecx);");
    asm("loc_6C040AA: mov 0x18(%ecx),%eax;");
    asm("loc_6C040AD: xor %edx,%edx;");
    asm("loc_6C040AF: div %esi;");
    asm("loc_6C040B1: pop %edi;");
    asm("loc_6C040B2: pop %esi;");
    asm("loc_6C040B3: pop %ebp;");
    asm("loc_6C040B4: pop %ebx;");
    asm("loc_6C040B5: mov %eax,8(%ecx);");
    asm("loc_6C040B8: xor %eax,%eax;");
    asm("loc_6C040BA: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C040C0() // _sub_6C040C0
{
    __DEBUG_ASM(6C040C0);
    // chunk 0x6C040C0 _sub_6C040C0
    asm("loc_6C040C0: mov 8(%esp),%eax;");
    asm("loc_6C040C4: push %ebx;");
    asm("loc_6C040C5: push %ebp;");
    asm("loc_6C040C6: push %esi;");
    asm("loc_6C040C7: mov %ecx,%ebx;");
    asm("loc_6C040C9: mov 0x10(%esp),%ecx;");
    asm("loc_6C040CD: lea 0x10(%ebx),%ebp;");
    asm("loc_6C040D0: push %edi;");
    asm("loc_6C040D1: push %ebp;");
    asm("loc_6C040D2: push %eax;");
    asm("loc_6C040D3: mov %ecx,8(%ebp);");
    asm("loc_6C040D6: lea 0x18(%ebx),%esi;");
    asm("loc_6C040D9: push %esi;");
    asm("loc_6C040DA: mov %ebx,%ecx;");
    asm("loc_6C040DC: mov %eax,4(%ebp);");
    asm("loc_6C040DF: movl $0,(%ebp);");
    asm("loc_6C040E6: movl $0,0xC(%ebp);");
    asm("loc_6C040ED: call _sub_6BEBE90;");
    asm("loc_6C040F2: test %eax,%eax;");
    asm("loc_6C040F4: mov %eax,0x1C(%ebx);");
    asm("loc_6C040F7: je loc_6C04105;");
    asm("loc_6C040F9: pop %edi;");
    asm("loc_6C040FA: pop %esi;");
    asm("loc_6C040FB: pop %ebp;");
    asm("loc_6C040FC: mov $0x17,%eax;");
    asm("loc_6C04101: pop %ebx;");
    asm("loc_6C04102: ret $0xC;");
    asm("loc_6C04105: mov (%ebp),%edx;");
    asm("loc_6C04108: mov 4(%ebp),%ecx;");
    asm("loc_6C0410B: add $2,%edx;");
    asm("loc_6C0410E: mov %edx,%eax;");
    asm("loc_6C04110: cmp %ecx,%eax;");
    asm("loc_6C04112: mov %edx,(%ebp);");
    asm("loc_6C04115: jbe loc_6C0411E;");
    asm("loc_6C04117: movl $0x17,0xC(%ebp);");
    asm("loc_6C0411E: mov 0x1C(%ebx),%eax;");
    asm("loc_6C04121: test %eax,%eax;");
    asm("loc_6C04123: jne loc_6C041F0;");
    asm("loc_6C04129: mov (%esi),%eax;");
    asm("loc_6C0412B: mov (%eax),%cx;");
    asm("loc_6C0412E: xor %edx,%edx;");
    asm("loc_6C04130: mov %cx,%dx;");
    asm("loc_6C04133: add $2,%eax;");
    asm("loc_6C04136: mov %eax,(%esi);");
    asm("loc_6C04138: mov (%ebp),%edi;");
    asm("loc_6C0413B: mov 4(%ebp),%ecx;");
    asm("loc_6C0413E: add %edx,%edi;");
    asm("loc_6C04140: mov %edi,%eax;");
    asm("loc_6C04142: cmp %ecx,%eax;");
    asm("loc_6C04144: mov %edi,(%ebp);");
    asm("loc_6C04147: jbe loc_6C04150;");
    asm("loc_6C04149: movl $0x17,0xC(%ebp);");
    asm("loc_6C04150: mov 0x1C(%ebx),%eax;");
    asm("loc_6C04153: test %eax,%eax;");
    asm("loc_6C04155: jne loc_6C041F0;");
    asm("loc_6C0415B: mov (%esi),%esi;");
    asm("loc_6C0415D: mov %edx,%ecx;");
    asm("loc_6C0415F: mov %ecx,%eax;");
    asm("loc_6C04161: shr $2,%ecx;");
    asm("loc_6C04164: mov %esi,0x14(%esp);");
    asm("loc_6C04168: lea 0x20(%ebx),%edi;");
    asm("loc_6C0416B: rep movsl (%esi),(%edi);");
    asm("loc_6C0416D: mov %eax,%ecx;");
    asm("loc_6C0416F: and $3,%ecx;");
    asm("loc_6C04172: rep movsb (%esi),(%edi);");
    asm("loc_6C04174: mov 0x14(%esp),%ecx;");
    asm("loc_6C04178: add %edx,%ecx;");
    asm("loc_6C0417A: lea 0x18(%ebx),%eax;");
    asm("loc_6C0417D: mov %ecx,(%eax);");
    asm("loc_6C0417F: movb $0,0x20(%edx,%ebx);");
    asm("loc_6C04184: mov 0x18(%esp),%edx;");
    asm("loc_6C04188: push %ebp;");
    asm("loc_6C04189: push %edx;");
    asm("loc_6C0418A: push %eax;");
    asm("loc_6C0418B: mov %ebx,%ecx;");
    asm("loc_6C0418D: call _sub_6BEBEB0;");
    asm("loc_6C04192: test %eax,%eax;");
    asm("loc_6C04194: mov %eax,0x1C(%ebx);");
    asm("loc_6C04197: je loc_6C041A5;");
    asm("loc_6C04199: pop %edi;");
    asm("loc_6C0419A: pop %esi;");
    asm("loc_6C0419B: pop %ebp;");
    asm("loc_6C0419C: mov $0x17,%eax;");
    asm("loc_6C041A1: pop %ebx;");
    asm("loc_6C041A2: ret $0xC;");
    asm("loc_6C041A5: mov (%ebp),%eax;");
    asm("loc_6C041A8: mov 0x1C(%esp),%ecx;");
    asm("loc_6C041AC: mov %eax,(%ecx);");
    asm("loc_6C041AE: mov 0xC(%ebx),%edx;");
    asm("loc_6C041B1: push %edx;");
    asm("loc_6C041B2: call _sub_6BEC3B0;");
    asm("loc_6C041B7: mov %eax,%ecx;");
    asm("loc_6C041B9: mov 4(%ecx),%esi;");
    asm("loc_6C041BC: mov 0x1C(%ecx),%ebx;");
    asm("loc_6C041BF: mov 0x14(%ecx),%edx;");
    asm("loc_6C041C2: add $4,%esp;");
    asm("loc_6C041C5: inc %esi;");
    asm("loc_6C041C6: mov %esi,4(%ecx);");
    asm("loc_6C041C9: mov (%ebp),%eax;");
    asm("loc_6C041CC: add $2,%eax;");
    asm("loc_6C041CF: add %eax,%ebx;");
    asm("loc_6C041D1: mov %ebx,0x1C(%ecx);");
    asm("loc_6C041D4: mov (%ebp),%ebp;");
    asm("loc_6C041D7: add $2,%edx;");
    asm("loc_6C041DA: cmp %edx,%ebp;");
    asm("loc_6C041DC: jbe loc_6C041E4;");
    asm("loc_6C041DE: add $2,%ebp;");
    asm("loc_6C041E1: mov %ebp,0x14(%ecx);");
    asm("loc_6C041E4: mov 0x1C(%ecx),%eax;");
    asm("loc_6C041E7: xor %edx,%edx;");
    asm("loc_6C041E9: div %esi;");
    asm("loc_6C041EB: mov %eax,0xC(%ecx);");
    asm("loc_6C041EE: xor %eax,%eax;");
    asm("loc_6C041F0: pop %edi;");
    asm("loc_6C041F1: pop %esi;");
    asm("loc_6C041F2: pop %ebp;");
    asm("loc_6C041F3: pop %ebx;");
    asm("loc_6C041F4: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04200() // _sub_6C04200
{
    __DEBUG_ASM(6C04200);
    // chunk 0x6C04200 _sub_6C04200
    asm("loc_6C04200: mov 4(%esp),%eax;");
    asm("loc_6C04204: push %esi;");
    asm("loc_6C04205: mov _import_6C0B154,%esi;");
    asm("loc_6C0420B: push $_data_6C0BBF4;");
    asm("loc_6C04210: add $0x20,%ecx;");
    asm("loc_6C04213: push %ecx;");
    asm("loc_6C04214: push $_data_6C0E54C;");
    asm("loc_6C04219: push %eax;");
    asm("loc_6C0421A: call *%esi;");
    asm("loc_6C0421C: add $8,%esp;");
    asm("loc_6C0421F: push %eax;");
    asm("loc_6C04220: call *%esi;");
    asm("loc_6C04222: add $8,%esp;");
    asm("loc_6C04225: push %eax;");
    asm("loc_6C04226: call *%esi;");
    asm("loc_6C04228: add $8,%esp;");
    asm("loc_6C0422B: pop %esi;");
    asm("loc_6C0422C: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04230() // _sub_6C04230
{
    __DEBUG_ASM(6C04230);
    // chunk 0x6C04230 _sub_6C04230
    asm("loc_6C04230: mov _data_6C0E560,%eax;");
    asm("loc_6C04235: mov %eax,_data_6C141E8;");
    asm("loc_6C0423A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04240() // _sub_6C04240
{
    __DEBUG_ASM(6C04240);
    // chunk 0x6C04240 _sub_6C04240
    asm("loc_6C04240: mov _data_6C0E560,%eax;");
    asm("loc_6C04245: mov %eax,_data_6C141EC;");
    asm("loc_6C0424A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04250() // _sub_6C04250
{
    __DEBUG_ASM(6C04250);
    // chunk 0x6C04250 _sub_6C04250
    asm("loc_6C04250: mov _data_6C0E564,%eax;");
    asm("loc_6C04255: mov %eax,_data_6C141E4;");
    asm("loc_6C0425A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04260() // _sub_6C04260
{
    __DEBUG_ASM(6C04260);
    // chunk 0x6C04260 _sub_6C04260
    asm("loc_6C04260: mov 8(%esp),%eax;");
    asm("loc_6C04264: push %ebx;");
    asm("loc_6C04265: push %ebp;");
    asm("loc_6C04266: mov %ecx,%ebx;");
    asm("loc_6C04268: mov 0xC(%esp),%ecx;");
    asm("loc_6C0426C: lea 0x10(%ebx),%ebp;");
    asm("loc_6C0426F: push %esi;");
    asm("loc_6C04270: push %edi;");
    asm("loc_6C04271: mov %eax,4(%ebp);");
    asm("loc_6C04274: mov (%ecx),%edx;");
    asm("loc_6C04276: mov %edx,8(%ebp);");
    asm("loc_6C04279: movl $0,(%ebp);");
    asm("loc_6C04280: movl $0,0xC(%ebp);");
    asm("loc_6C04287: mov 0x14(%ebx),%eax;");
    asm("loc_6C0428A: push %ebp;");
    asm("loc_6C0428B: push %eax;");
    asm("loc_6C0428C: lea 0x18(%ebx),%edi;");
    asm("loc_6C0428F: push %edi;");
    asm("loc_6C04290: mov %ebx,%ecx;");
    asm("loc_6C04292: call _sub_6BEBE50;");
    asm("loc_6C04297: test %eax,%eax;");
    asm("loc_6C04299: mov %eax,0x1C(%ebx);");
    asm("loc_6C0429C: je loc_6C042AA;");
    asm("loc_6C0429E: pop %edi;");
    asm("loc_6C0429F: pop %esi;");
    asm("loc_6C042A0: pop %ebp;");
    asm("loc_6C042A1: mov $0x16,%eax;");
    asm("loc_6C042A6: pop %ebx;");
    asm("loc_6C042A7: ret $0xC;");
    asm("loc_6C042AA: mov (%ebp),%edx;");
    asm("loc_6C042AD: mov 4(%ebp),%ecx;");
    asm("loc_6C042B0: inc %edx;");
    asm("loc_6C042B1: mov %edx,%eax;");
    asm("loc_6C042B3: cmp %ecx,%eax;");
    asm("loc_6C042B5: mov %edx,(%ebp);");
    asm("loc_6C042B8: jbe loc_6C042C1;");
    asm("loc_6C042BA: movl $0x16,0xC(%ebp);");
    asm("loc_6C042C1: mov 0x1C(%ebx),%eax;");
    asm("loc_6C042C4: test %eax,%eax;");
    asm("loc_6C042C6: je loc_6C042D4;");
    asm("loc_6C042C8: pop %edi;");
    asm("loc_6C042C9: pop %esi;");
    asm("loc_6C042CA: pop %ebp;");
    asm("loc_6C042CB: mov $0x16,%eax;");
    asm("loc_6C042D0: pop %ebx;");
    asm("loc_6C042D1: ret $0xC;");
    asm("loc_6C042D4: mov (%edi),%eax;");
    asm("loc_6C042D6: mov 0x420(%ebx),%cl;");
    asm("loc_6C042DC: mov _import_6C0B210,%esi;");
    asm("loc_6C042E2: mov %cl,(%eax);");
    asm("loc_6C042E4: inc %eax;");
    asm("loc_6C042E5: mov %eax,(%edi);");
    asm("loc_6C042E7: lea 0x20(%ebx),%eax;");
    asm("loc_6C042EA: push %eax;");
    asm("loc_6C042EB: call *%esi;");
    asm("loc_6C042ED: mov %al,0x1C(%esp);");
    asm("loc_6C042F1: lea 0x220(%ebx),%eax;");
    asm("loc_6C042F7: push %eax;");
    asm("loc_6C042F8: call *%esi;");
    asm("loc_6C042FA: mov (%ebp),%esi;");
    asm("loc_6C042FD: mov 4(%ebp),%edx;");
    asm("loc_6C04300: add $8,%esp;");
    asm("loc_6C04303: inc %esi;");
    asm("loc_6C04304: mov %esi,%ecx;");
    asm("loc_6C04306: cmp %edx,%ecx;");
    asm("loc_6C04308: mov %al,0x14(%esp);");
    asm("loc_6C0430C: mov %esi,(%ebp);");
    asm("loc_6C0430F: jbe loc_6C04318;");
    asm("loc_6C04311: movl $0x16,0xC(%ebp);");
    asm("loc_6C04318: mov 0x1C(%ebx),%ecx;");
    asm("loc_6C0431B: test %ecx,%ecx;");
    asm("loc_6C0431D: je loc_6C0432B;");
    asm("loc_6C0431F: pop %edi;");
    asm("loc_6C04320: pop %esi;");
    asm("loc_6C04321: pop %ebp;");
    asm("loc_6C04322: mov $0x16,%eax;");
    asm("loc_6C04327: pop %ebx;");
    asm("loc_6C04328: ret $0xC;");
    asm("loc_6C0432B: mov (%edi),%ecx;");
    asm("loc_6C0432D: mov 0x18(%esp),%dl;");
    asm("loc_6C04331: mov %dl,(%ecx);");
    asm("loc_6C04333: inc %ecx;");
    asm("loc_6C04334: mov %ecx,(%edi);");
    asm("loc_6C04336: mov (%ebp),%ecx;");
    asm("loc_6C04339: mov 4(%ebp),%esi;");
    asm("loc_6C0433C: inc %ecx;");
    asm("loc_6C0433D: cmp %esi,%ecx;");
    asm("loc_6C0433F: mov %ecx,(%ebp);");
    asm("loc_6C04342: jbe loc_6C0434B;");
    asm("loc_6C04344: movl $0x16,0xC(%ebp);");
    asm("loc_6C0434B: mov 0x1C(%ebx),%ecx;");
    asm("loc_6C0434E: test %ecx,%ecx;");
    asm("loc_6C04350: je loc_6C0435E;");
    asm("loc_6C04352: pop %edi;");
    asm("loc_6C04353: pop %esi;");
    asm("loc_6C04354: pop %ebp;");
    asm("loc_6C04355: mov $0x16,%eax;");
    asm("loc_6C0435A: pop %ebx;");
    asm("loc_6C0435B: ret $0xC;");
    asm("loc_6C0435E: mov (%edi),%ecx;");
    asm("loc_6C04360: mov %al,(%ecx);");
    asm("loc_6C04362: inc %ecx;");
    asm("loc_6C04363: test %dl,%dl;");
    asm("loc_6C04365: mov %ecx,(%edi);");
    asm("loc_6C04367: je loc_6C043C9;");
    asm("loc_6C04369: lea 0x20(%ebx),%esi;");
    asm("loc_6C0436C: push %esi;");
    asm("loc_6C0436D: calll *_import_6C0B234;");
    asm("loc_6C04373: movzbl 0x1C(%esp),%eax;");
    asm("loc_6C04378: mov (%ebp),%ecx;");
    asm("loc_6C0437B: mov 4(%ebp),%edx;");
    asm("loc_6C0437E: shl $1,%eax;");
    asm("loc_6C04380: add %eax,%ecx;");
    asm("loc_6C04382: add $4,%esp;");
    asm("loc_6C04385: cmp %edx,%ecx;");
    asm("loc_6C04387: mov %ecx,(%ebp);");
    asm("loc_6C0438A: jbe loc_6C04393;");
    asm("loc_6C0438C: movl $0x16,0xC(%ebp);");
    asm("loc_6C04393: mov 0x1C(%ebx),%ecx;");
    asm("loc_6C04396: test %ecx,%ecx;");
    asm("loc_6C04398: je loc_6C043A6;");
    asm("loc_6C0439A: pop %edi;");
    asm("loc_6C0439B: pop %esi;");
    asm("loc_6C0439C: pop %ebp;");
    asm("loc_6C0439D: mov $0x16,%eax;");
    asm("loc_6C043A2: pop %ebx;");
    asm("loc_6C043A3: ret $0xC;");
    asm("loc_6C043A6: mov (%edi),%edi;");
    asm("loc_6C043A8: mov %eax,%ecx;");
    asm("loc_6C043AA: mov %ecx,%edx;");
    asm("loc_6C043AC: shr $2,%ecx;");
    asm("loc_6C043AF: mov %edi,0x18(%esp);");
    asm("loc_6C043B3: rep movsl (%esi),(%edi);");
    asm("loc_6C043B5: mov %edx,%ecx;");
    asm("loc_6C043B7: and $3,%ecx;");
    asm("loc_6C043BA: rep movsb (%esi),(%edi);");
    asm("loc_6C043BC: mov 0x18(%esp),%ecx;");
    asm("loc_6C043C0: add %eax,%ecx;");
    asm("loc_6C043C2: mov 0x14(%esp),%al;");
    asm("loc_6C043C6: mov %ecx,0x18(%ebx);");
    asm("loc_6C043C9: test %al,%al;");
    asm("loc_6C043CB: je loc_6C04423;");
    asm("loc_6C043CD: mov (%ebp),%esi;");
    asm("loc_6C043D0: mov 4(%ebp),%edx;");
    asm("loc_6C043D3: movzbl %al,%eax;");
    asm("loc_6C043D6: shl $1,%eax;");
    asm("loc_6C043D8: add %eax,%esi;");
    asm("loc_6C043DA: mov %esi,%ecx;");
    asm("loc_6C043DC: cmp %edx,%ecx;");
    asm("loc_6C043DE: mov %esi,(%ebp);");
    asm("loc_6C043E1: jbe loc_6C043EA;");
    asm("loc_6C043E3: movl $0x16,0xC(%ebp);");
    asm("loc_6C043EA: mov 0x1C(%ebx),%ecx;");
    asm("loc_6C043ED: test %ecx,%ecx;");
    asm("loc_6C043EF: je loc_6C043FD;");
    asm("loc_6C043F1: pop %edi;");
    asm("loc_6C043F2: pop %esi;");
    asm("loc_6C043F3: pop %ebp;");
    asm("loc_6C043F4: mov $0x16,%eax;");
    asm("loc_6C043F9: pop %ebx;");
    asm("loc_6C043FA: ret $0xC;");
    asm("loc_6C043FD: mov 0x18(%ebx),%edi;");
    asm("loc_6C04400: mov %eax,%ecx;");
    asm("loc_6C04402: mov %ecx,%edx;");
    asm("loc_6C04404: shr $2,%ecx;");
    asm("loc_6C04407: mov %edi,0x18(%esp);");
    asm("loc_6C0440B: lea 0x220(%ebx),%esi;");
    asm("loc_6C04411: rep movsl (%esi),(%edi);");
    asm("loc_6C04413: mov %edx,%ecx;");
    asm("loc_6C04415: and $3,%ecx;");
    asm("loc_6C04418: rep movsb (%esi),(%edi);");
    asm("loc_6C0441A: mov 0x18(%esp),%ecx;");
    asm("loc_6C0441E: add %eax,%ecx;");
    asm("loc_6C04420: mov %ecx,0x18(%ebx);");
    asm("loc_6C04423: mov 0x14(%ebx),%edx;");
    asm("loc_6C04426: push %ebp;");
    asm("loc_6C04427: push %edx;");
    asm("loc_6C04428: lea 0x18(%ebx),%eax;");
    asm("loc_6C0442B: push %eax;");
    asm("loc_6C0442C: mov %ebx,%ecx;");
    asm("loc_6C0442E: call _sub_6BEBEA0;");
    asm("loc_6C04433: test %eax,%eax;");
    asm("loc_6C04435: mov %eax,0x1C(%ebx);");
    asm("loc_6C04438: je loc_6C04446;");
    asm("loc_6C0443A: pop %edi;");
    asm("loc_6C0443B: pop %esi;");
    asm("loc_6C0443C: pop %ebp;");
    asm("loc_6C0443D: mov $0x16,%eax;");
    asm("loc_6C04442: pop %ebx;");
    asm("loc_6C04443: ret $0xC;");
    asm("loc_6C04446: mov (%ebp),%eax;");
    asm("loc_6C04449: mov 0x1C(%esp),%ecx;");
    asm("loc_6C0444D: mov %eax,(%ecx);");
    asm("loc_6C0444F: mov 0xC(%ebx),%edx;");
    asm("loc_6C04452: push %edx;");
    asm("loc_6C04453: call _sub_6BEC3B0;");
    asm("loc_6C04458: mov %eax,%ecx;");
    asm("loc_6C0445A: mov (%ecx),%esi;");
    asm("loc_6C0445C: mov 0x18(%ecx),%edx;");
    asm("loc_6C0445F: add $4,%esp;");
    asm("loc_6C04462: inc %esi;");
    asm("loc_6C04463: mov %esi,(%ecx);");
    asm("loc_6C04465: mov (%ebp),%eax;");
    asm("loc_6C04468: add %eax,%edx;");
    asm("loc_6C0446A: mov 0x10(%ecx),%eax;");
    asm("loc_6C0446D: mov %edx,0x18(%ecx);");
    asm("loc_6C04470: mov (%ebp),%ebp;");
    asm("loc_6C04473: cmp %eax,%ebp;");
    asm("loc_6C04475: jbe loc_6C0447A;");
    asm("loc_6C04477: mov %ebp,0x10(%ecx);");
    asm("loc_6C0447A: mov 0x18(%ecx),%eax;");
    asm("loc_6C0447D: xor %edx,%edx;");
    asm("loc_6C0447F: div %esi;");
    asm("loc_6C04481: pop %edi;");
    asm("loc_6C04482: pop %esi;");
    asm("loc_6C04483: pop %ebp;");
    asm("loc_6C04484: pop %ebx;");
    asm("loc_6C04485: mov %eax,8(%ecx);");
    asm("loc_6C04488: xor %eax,%eax;");
    asm("loc_6C0448A: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04490() // _sub_6C04490
{
    __DEBUG_ASM(6C04490);
    // chunk 0x6C04490 _sub_6C04490
    asm("loc_6C04490: push %ecx;");
    asm("loc_6C04491: mov 0xC(%esp),%eax;");
    asm("loc_6C04495: push %ebx;");
    asm("loc_6C04496: push %ebp;");
    asm("loc_6C04497: push %esi;");
    asm("loc_6C04498: mov %ecx,%ebx;");
    asm("loc_6C0449A: mov 0x14(%esp),%ecx;");
    asm("loc_6C0449E: lea 0x10(%ebx),%ebp;");
    asm("loc_6C044A1: push %edi;");
    asm("loc_6C044A2: push %ebp;");
    asm("loc_6C044A3: push %eax;");
    asm("loc_6C044A4: mov %ecx,8(%ebp);");
    asm("loc_6C044A7: lea 0x18(%ebx),%esi;");
    asm("loc_6C044AA: push %esi;");
    asm("loc_6C044AB: mov %ebx,%ecx;");
    asm("loc_6C044AD: mov %eax,4(%ebp);");
    asm("loc_6C044B0: movl $0,(%ebp);");
    asm("loc_6C044B7: movl $0,0xC(%ebp);");
    asm("loc_6C044BE: call _sub_6BEBE90;");
    asm("loc_6C044C3: test %eax,%eax;");
    asm("loc_6C044C5: mov %eax,0x1C(%ebx);");
    asm("loc_6C044C8: je loc_6C044D7;");
    asm("loc_6C044CA: pop %edi;");
    asm("loc_6C044CB: pop %esi;");
    asm("loc_6C044CC: pop %ebp;");
    asm("loc_6C044CD: mov $0x17,%eax;");
    asm("loc_6C044D2: pop %ebx;");
    asm("loc_6C044D3: pop %ecx;");
    asm("loc_6C044D4: ret $0xC;");
    asm("loc_6C044D7: xor %eax,%eax;");
    asm("loc_6C044D9: lea 0x20(%ebx),%edi;");
    asm("loc_6C044DC: mov $0x100,%ecx;");
    asm("loc_6C044E1: rep stos %eax,(%edi);");
    asm("loc_6C044E3: stos %ax,(%edi);");
    asm("loc_6C044E5: mov (%ebp),%edx;");
    asm("loc_6C044E8: mov 4(%ebp),%ecx;");
    asm("loc_6C044EB: inc %edx;");
    asm("loc_6C044EC: mov %edx,%eax;");
    asm("loc_6C044EE: cmp %ecx,%eax;");
    asm("loc_6C044F0: mov %edx,(%ebp);");
    asm("loc_6C044F3: mov $0x17,%edi;");
    asm("loc_6C044F8: jbe loc_6C044FD;");
    asm("loc_6C044FA: mov %edi,0xC(%ebp);");
    asm("loc_6C044FD: mov 0x1C(%ebx),%eax;");
    asm("loc_6C04500: test %eax,%eax;");
    asm("loc_6C04502: jne loc_6C04692;");
    asm("loc_6C04508: mov (%esi),%eax;");
    asm("loc_6C0450A: mov (%eax),%dl;");
    asm("loc_6C0450C: inc %eax;");
    asm("loc_6C0450D: mov %dl,0x420(%ebx);");
    asm("loc_6C04513: mov %eax,(%esi);");
    asm("loc_6C04515: mov (%ebp),%edx;");
    asm("loc_6C04518: mov 4(%ebp),%ecx;");
    asm("loc_6C0451B: inc %edx;");
    asm("loc_6C0451C: mov %edx,%eax;");
    asm("loc_6C0451E: cmp %ecx,%eax;");
    asm("loc_6C04520: mov %edx,(%ebp);");
    asm("loc_6C04523: jbe loc_6C04528;");
    asm("loc_6C04525: mov %edi,0xC(%ebp);");
    asm("loc_6C04528: mov 0x1C(%ebx),%eax;");
    asm("loc_6C0452B: test %eax,%eax;");
    asm("loc_6C0452D: jne loc_6C04692;");
    asm("loc_6C04533: mov (%esi),%eax;");
    asm("loc_6C04535: mov (%eax),%cl;");
    asm("loc_6C04537: inc %eax;");
    asm("loc_6C04538: mov %eax,(%esi);");
    asm("loc_6C0453A: mov (%ebp),%eax;");
    asm("loc_6C0453D: mov 4(%ebp),%edx;");
    asm("loc_6C04540: inc %eax;");
    asm("loc_6C04541: cmp %edx,%eax;");
    asm("loc_6C04543: mov %eax,(%ebp);");
    asm("loc_6C04546: jbe loc_6C0454B;");
    asm("loc_6C04548: mov %edi,0xC(%ebp);");
    asm("loc_6C0454B: mov 0x1C(%ebx),%eax;");
    asm("loc_6C0454E: test %eax,%eax;");
    asm("loc_6C04550: jne loc_6C04692;");
    asm("loc_6C04556: mov (%esi),%eax;");
    asm("loc_6C04558: mov (%eax),%dl;");
    asm("loc_6C0455A: inc %eax;");
    asm("loc_6C0455B: test %cl,%cl;");
    asm("loc_6C0455D: mov %dl,0x18(%esp);");
    asm("loc_6C04561: mov %eax,(%esi);");
    asm("loc_6C04563: je loc_6C045BC;");
    asm("loc_6C04565: mov 4(%ebp),%edx;");
    asm("loc_6C04568: xor %eax,%eax;");
    asm("loc_6C0456A: mov %cl,%al;");
    asm("loc_6C0456C: mov %eax,0x10(%esp);");
    asm("loc_6C04570: lea (%eax,%eax),%ecx;");
    asm("loc_6C04573: mov (%ebp),%eax;");
    asm("loc_6C04576: add %ecx,%eax;");
    asm("loc_6C04578: cmp %edx,%eax;");
    asm("loc_6C0457A: mov %eax,(%ebp);");
    asm("loc_6C0457D: jbe loc_6C04582;");
    asm("loc_6C0457F: mov %edi,0xC(%ebp);");
    asm("loc_6C04582: mov 0x1C(%ebx),%eax;");
    asm("loc_6C04585: test %eax,%eax;");
    asm("loc_6C04587: jne loc_6C04692;");
    asm("loc_6C0458D: mov (%esi),%eax;");
    asm("loc_6C0458F: mov %ecx,%edx;");
    asm("loc_6C04591: shr $2,%ecx;");
    asm("loc_6C04594: mov %eax,%esi;");
    asm("loc_6C04596: lea 0x20(%ebx),%edi;");
    asm("loc_6C04599: rep movsl (%esi),(%edi);");
    asm("loc_6C0459B: mov %edx,%ecx;");
    asm("loc_6C0459D: mov 0x18(%esp),%dl;");
    asm("loc_6C045A1: and $3,%ecx;");
    asm("loc_6C045A4: rep movsb (%esi),(%edi);");
    asm("loc_6C045A6: mov 0x10(%esp),%ecx;");
    asm("loc_6C045AA: lea (%eax,%ecx,2),%eax;");
    asm("loc_6C045AD: mov %eax,0x18(%ebx);");
    asm("loc_6C045B0: movw $0,0x20(%ebx,%ecx,2);");
    asm("loc_6C045B7: mov $0x17,%edi;");
    asm("loc_6C045BC: test %dl,%dl;");
    asm("loc_6C045BE: je loc_6C04623;");
    asm("loc_6C045C0: mov (%ebp),%esi;");
    asm("loc_6C045C3: mov 4(%ebp),%ecx;");
    asm("loc_6C045C6: xor %eax,%eax;");
    asm("loc_6C045C8: mov %dl,%al;");
    asm("loc_6C045CA: lea (%eax,%eax),%edx;");
    asm("loc_6C045CD: add %edx,%esi;");
    asm("loc_6C045CF: mov %eax,0x10(%esp);");
    asm("loc_6C045D3: mov %esi,%eax;");
    asm("loc_6C045D5: cmp %ecx,%eax;");
    asm("loc_6C045D7: mov %esi,(%ebp);");
    asm("loc_6C045DA: jbe loc_6C045DF;");
    asm("loc_6C045DC: mov %edi,0xC(%ebp);");
    asm("loc_6C045DF: mov 0x1C(%ebx),%eax;");
    asm("loc_6C045E2: test %eax,%eax;");
    asm("loc_6C045E4: jne loc_6C04692;");
    asm("loc_6C045EA: mov 0x18(%ebx),%esi;");
    asm("loc_6C045ED: mov %edx,%ecx;");
    asm("loc_6C045EF: mov %ecx,%eax;");
    asm("loc_6C045F1: shr $2,%ecx;");
    asm("loc_6C045F4: mov %esi,0x18(%esp);");
    asm("loc_6C045F8: lea 0x220(%ebx),%edi;");
    asm("loc_6C045FE: rep movsl (%esi),(%edi);");
    asm("loc_6C04600: mov %eax,%ecx;");
    asm("loc_6C04602: and $3,%ecx;");
    asm("loc_6C04605: rep movsb (%esi),(%edi);");
    asm("loc_6C04607: mov 0x18(%esp),%ecx;");
    asm("loc_6C0460B: add %edx,%ecx;");
    asm("loc_6C0460D: mov 0x10(%esp),%edx;");
    asm("loc_6C04611: mov %ecx,0x18(%ebx);");
    asm("loc_6C04614: movw $0,0x220(%ebx,%edx,2);");
    asm("loc_6C0461E: mov $0x17,%edi;");
    asm("loc_6C04623: mov 0x1C(%esp),%eax;");
    asm("loc_6C04627: push %ebp;");
    asm("loc_6C04628: push %eax;");
    asm("loc_6C04629: lea 0x18(%ebx),%eax;");
    asm("loc_6C0462C: push %eax;");
    asm("loc_6C0462D: mov %ebx,%ecx;");
    asm("loc_6C0462F: call _sub_6BEBEB0;");
    asm("loc_6C04634: test %eax,%eax;");
    asm("loc_6C04636: mov %eax,0x1C(%ebx);");
    asm("loc_6C04639: je loc_6C04645;");
    asm("loc_6C0463B: mov %edi,%eax;");
    asm("loc_6C0463D: pop %edi;");
    asm("loc_6C0463E: pop %esi;");
    asm("loc_6C0463F: pop %ebp;");
    asm("loc_6C04640: pop %ebx;");
    asm("loc_6C04641: pop %ecx;");
    asm("loc_6C04642: ret $0xC;");
    asm("loc_6C04645: mov (%ebp),%ecx;");
    asm("loc_6C04648: mov 0x20(%esp),%edx;");
    asm("loc_6C0464C: mov %ecx,(%edx);");
    asm("loc_6C0464E: mov 0xC(%ebx),%eax;");
    asm("loc_6C04651: push %eax;");
    asm("loc_6C04652: call _sub_6BEC3B0;");
    asm("loc_6C04657: mov %eax,%ecx;");
    asm("loc_6C04659: mov 4(%ecx),%edx;");
    asm("loc_6C0465C: mov 0x1C(%ecx),%ebx;");
    asm("loc_6C0465F: mov 0x14(%ecx),%eax;");
    asm("loc_6C04662: add $4,%esp;");
    asm("loc_6C04665: inc %edx;");
    asm("loc_6C04666: mov %edx,4(%ecx);");
    asm("loc_6C04669: mov %edx,%esi;");
    asm("loc_6C0466B: mov (%ebp),%edx;");
    asm("loc_6C0466E: add $2,%edx;");
    asm("loc_6C04671: add %edx,%ebx;");
    asm("loc_6C04673: mov %ebx,0x1C(%ecx);");
    asm("loc_6C04676: mov (%ebp),%ebp;");
    asm("loc_6C04679: add $2,%eax;");
    asm("loc_6C0467C: cmp %eax,%ebp;");
    asm("loc_6C0467E: jbe loc_6C04686;");
    asm("loc_6C04680: add $2,%ebp;");
    asm("loc_6C04683: mov %ebp,0x14(%ecx);");
    asm("loc_6C04686: mov 0x1C(%ecx),%eax;");
    asm("loc_6C04689: xor %edx,%edx;");
    asm("loc_6C0468B: div %esi;");
    asm("loc_6C0468D: mov %eax,0xC(%ecx);");
    asm("loc_6C04690: xor %eax,%eax;");
    asm("loc_6C04692: pop %edi;");
    asm("loc_6C04693: pop %esi;");
    asm("loc_6C04694: pop %ebp;");
    asm("loc_6C04695: pop %ebx;");
    asm("loc_6C04696: pop %ecx;");
    asm("loc_6C04697: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C046A0() // _sub_6C046A0
{
    __DEBUG_ASM(6C046A0);
    // chunk 0x6C046A0 _sub_6C046A0
    asm("loc_6C046A0: mov 4(%esp),%eax;");
    asm("loc_6C046A4: push %esi;");
    asm("loc_6C046A5: mov _import_6C0B154,%esi;");
    asm("loc_6C046AB: push $_data_6C0BBF4;");
    asm("loc_6C046B0: add $0x20,%ecx;");
    asm("loc_6C046B3: push %ecx;");
    asm("loc_6C046B4: push $_data_6C0E574;");
    asm("loc_6C046B9: push %eax;");
    asm("loc_6C046BA: call *%esi;");
    asm("loc_6C046BC: add $8,%esp;");
    asm("loc_6C046BF: mov %eax,%ecx;");
    asm("loc_6C046C1: calll *_import_6C0B1A4;");
    asm("loc_6C046C7: push %eax;");
    asm("loc_6C046C8: call *%esi;");
    asm("loc_6C046CA: add $8,%esp;");
    asm("loc_6C046CD: pop %esi;");
    asm("loc_6C046CE: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C046E0() // _sub_6C046E0
{
    __DEBUG_ASM(6C046E0);
    // chunk 0x6C046E0 _sub_6C046E0
    asm("loc_6C046E0: mov _data_6C0E56C,%eax;");
    asm("loc_6C046E5: mov %eax,_data_6C141F8;");
    asm("loc_6C046EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C046F0() // _sub_6C046F0
{
    __DEBUG_ASM(6C046F0);
    // chunk 0x6C046F0 _sub_6C046F0
    asm("loc_6C046F0: mov _data_6C0E56C,%eax;");
    asm("loc_6C046F5: mov %eax,_data_6C141FC;");
    asm("loc_6C046FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04700() // _sub_6C04700
{
    __DEBUG_ASM(6C04700);
    // chunk 0x6C04700 _sub_6C04700
    asm("loc_6C04700: mov _data_6C0E570,%eax;");
    asm("loc_6C04705: mov %eax,_data_6C141F4;");
    asm("loc_6C0470A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04710() // _sub_6C04710
{
    __DEBUG_ASM(6C04710);
    // chunk 0x6C04710 _sub_6C04710
    asm("loc_6C04710: mov 8(%esp),%eax;");
    asm("loc_6C04714: push %ebx;");
    asm("loc_6C04715: push %ebp;");
    asm("loc_6C04716: push %esi;");
    asm("loc_6C04717: push %edi;");
    asm("loc_6C04718: mov %ecx,%edi;");
    asm("loc_6C0471A: mov 0x14(%esp),%ecx;");
    asm("loc_6C0471E: lea 0x10(%edi),%esi;");
    asm("loc_6C04721: mov %eax,4(%esi);");
    asm("loc_6C04724: mov (%ecx),%edx;");
    asm("loc_6C04726: mov %edx,8(%esi);");
    asm("loc_6C04729: movl $0,(%esi);");
    asm("loc_6C0472F: movl $0,0xC(%esi);");
    asm("loc_6C04736: mov 0x14(%edi),%eax;");
    asm("loc_6C04739: push %esi;");
    asm("loc_6C0473A: push %eax;");
    asm("loc_6C0473B: lea 0x18(%edi),%ebx;");
    asm("loc_6C0473E: push %ebx;");
    asm("loc_6C0473F: mov %edi,%ecx;");
    asm("loc_6C04741: call _sub_6BEBE50;");
    asm("loc_6C04746: test %eax,%eax;");
    asm("loc_6C04748: mov %eax,0x1C(%edi);");
    asm("loc_6C0474B: je loc_6C04759;");
    asm("loc_6C0474D: pop %edi;");
    asm("loc_6C0474E: pop %esi;");
    asm("loc_6C0474F: pop %ebp;");
    asm("loc_6C04750: mov $0x16,%eax;");
    asm("loc_6C04755: pop %ebx;");
    asm("loc_6C04756: ret $0xC;");
    asm("loc_6C04759: mov (%esi),%edx;");
    asm("loc_6C0475B: mov 4(%esi),%ecx;");
    asm("loc_6C0475E: add $4,%edx;");
    asm("loc_6C04761: mov %edx,%eax;");
    asm("loc_6C04763: cmp %ecx,%eax;");
    asm("loc_6C04765: mov %edx,(%esi);");
    asm("loc_6C04767: mov $0x16,%ebp;");
    asm("loc_6C0476C: jbe loc_6C04771;");
    asm("loc_6C0476E: mov %ebp,0xC(%esi);");
    asm("loc_6C04771: mov 0x1C(%edi),%eax;");
    asm("loc_6C04774: test %eax,%eax;");
    asm("loc_6C04776: je loc_6C04781;");
    asm("loc_6C04778: pop %edi;");
    asm("loc_6C04779: pop %esi;");
    asm("loc_6C0477A: mov %ebp,%eax;");
    asm("loc_6C0477C: pop %ebp;");
    asm("loc_6C0477D: pop %ebx;");
    asm("loc_6C0477E: ret $0xC;");
    asm("loc_6C04781: mov (%ebx),%eax;");
    asm("loc_6C04783: mov 0x20(%edi),%ecx;");
    asm("loc_6C04786: mov %ecx,(%eax);");
    asm("loc_6C04788: add $4,%eax;");
    asm("loc_6C0478B: mov %eax,(%ebx);");
    asm("loc_6C0478D: mov (%esi),%edx;");
    asm("loc_6C0478F: mov 4(%esi),%ecx;");
    asm("loc_6C04792: add $4,%edx;");
    asm("loc_6C04795: mov %edx,%eax;");
    asm("loc_6C04797: cmp %ecx,%eax;");
    asm("loc_6C04799: mov %edx,(%esi);");
    asm("loc_6C0479B: jbe loc_6C047A0;");
    asm("loc_6C0479D: mov %ebp,0xC(%esi);");
    asm("loc_6C047A0: mov 0x1C(%edi),%eax;");
    asm("loc_6C047A3: test %eax,%eax;");
    asm("loc_6C047A5: je loc_6C047B0;");
    asm("loc_6C047A7: pop %edi;");
    asm("loc_6C047A8: pop %esi;");
    asm("loc_6C047A9: mov %ebp,%eax;");
    asm("loc_6C047AB: pop %ebp;");
    asm("loc_6C047AC: pop %ebx;");
    asm("loc_6C047AD: ret $0xC;");
    asm("loc_6C047B0: mov (%ebx),%eax;");
    asm("loc_6C047B2: mov 0x24(%edi),%edx;");
    asm("loc_6C047B5: mov %edx,(%eax);");
    asm("loc_6C047B7: add $4,%eax;");
    asm("loc_6C047BA: mov %eax,(%ebx);");
    asm("loc_6C047BC: mov (%esi),%edx;");
    asm("loc_6C047BE: mov 4(%esi),%ecx;");
    asm("loc_6C047C1: add $4,%edx;");
    asm("loc_6C047C4: mov %edx,%eax;");
    asm("loc_6C047C6: cmp %ecx,%eax;");
    asm("loc_6C047C8: mov %edx,(%esi);");
    asm("loc_6C047CA: jbe loc_6C047CF;");
    asm("loc_6C047CC: mov %ebp,0xC(%esi);");
    asm("loc_6C047CF: mov 0x1C(%edi),%eax;");
    asm("loc_6C047D2: test %eax,%eax;");
    asm("loc_6C047D4: je loc_6C047DF;");
    asm("loc_6C047D6: pop %edi;");
    asm("loc_6C047D7: pop %esi;");
    asm("loc_6C047D8: mov %ebp,%eax;");
    asm("loc_6C047DA: pop %ebp;");
    asm("loc_6C047DB: pop %ebx;");
    asm("loc_6C047DC: ret $0xC;");
    asm("loc_6C047DF: mov (%ebx),%eax;");
    asm("loc_6C047E1: mov 0x28(%edi),%ecx;");
    asm("loc_6C047E4: mov %ecx,(%eax);");
    asm("loc_6C047E6: add $4,%eax;");
    asm("loc_6C047E9: mov %eax,(%ebx);");
    asm("loc_6C047EB: mov (%esi),%edx;");
    asm("loc_6C047ED: mov 4(%esi),%ecx;");
    asm("loc_6C047F0: add $4,%edx;");
    asm("loc_6C047F3: mov %edx,%eax;");
    asm("loc_6C047F5: cmp %ecx,%eax;");
    asm("loc_6C047F7: mov %edx,(%esi);");
    asm("loc_6C047F9: jbe loc_6C047FE;");
    asm("loc_6C047FB: mov %ebp,0xC(%esi);");
    asm("loc_6C047FE: mov 0x1C(%edi),%eax;");
    asm("loc_6C04801: test %eax,%eax;");
    asm("loc_6C04803: je loc_6C0480E;");
    asm("loc_6C04805: pop %edi;");
    asm("loc_6C04806: pop %esi;");
    asm("loc_6C04807: mov %ebp,%eax;");
    asm("loc_6C04809: pop %ebp;");
    asm("loc_6C0480A: pop %ebx;");
    asm("loc_6C0480B: ret $0xC;");
    asm("loc_6C0480E: mov (%ebx),%eax;");
    asm("loc_6C04810: mov 0x2C(%edi),%edx;");
    asm("loc_6C04813: mov %edx,(%eax);");
    asm("loc_6C04815: add $4,%eax;");
    asm("loc_6C04818: mov %eax,(%ebx);");
    asm("loc_6C0481A: mov 0x14(%edi),%eax;");
    asm("loc_6C0481D: push %esi;");
    asm("loc_6C0481E: push %eax;");
    asm("loc_6C0481F: push %ebx;");
    asm("loc_6C04820: mov %edi,%ecx;");
    asm("loc_6C04822: call _sub_6BEBEA0;");
    asm("loc_6C04827: test %eax,%eax;");
    asm("loc_6C04829: mov %eax,0x1C(%edi);");
    asm("loc_6C0482C: je loc_6C04837;");
    asm("loc_6C0482E: pop %edi;");
    asm("loc_6C0482F: pop %esi;");
    asm("loc_6C04830: mov %ebp,%eax;");
    asm("loc_6C04832: pop %ebp;");
    asm("loc_6C04833: pop %ebx;");
    asm("loc_6C04834: ret $0xC;");
    asm("loc_6C04837: mov (%esi),%ecx;");
    asm("loc_6C04839: mov 0x1C(%esp),%edx;");
    asm("loc_6C0483D: mov %ecx,(%edx);");
    asm("loc_6C0483F: mov 0xC(%edi),%eax;");
    asm("loc_6C04842: push %eax;");
    asm("loc_6C04843: call _sub_6BEC3B0;");
    asm("loc_6C04848: mov %eax,%ecx;");
    asm("loc_6C0484A: mov (%ecx),%ebp;");
    asm("loc_6C0484C: mov 0x18(%ecx),%ebx;");
    asm("loc_6C0484F: mov 0x10(%ecx),%eax;");
    asm("loc_6C04852: add $4,%esp;");
    asm("loc_6C04855: inc %ebp;");
    asm("loc_6C04856: mov %ebp,(%ecx);");
    asm("loc_6C04858: mov (%esi),%edx;");
    asm("loc_6C0485A: add %edx,%ebx;");
    asm("loc_6C0485C: mov %ebx,0x18(%ecx);");
    asm("loc_6C0485F: mov (%esi),%esi;");
    asm("loc_6C04861: cmp %eax,%esi;");
    asm("loc_6C04863: mov %ebp,%edi;");
    asm("loc_6C04865: jbe loc_6C0486A;");
    asm("loc_6C04867: mov %esi,0x10(%ecx);");
    asm("loc_6C0486A: mov 0x18(%ecx),%eax;");
    asm("loc_6C0486D: xor %edx,%edx;");
    asm("loc_6C0486F: div %edi;");
    asm("loc_6C04871: pop %edi;");
    asm("loc_6C04872: pop %esi;");
    asm("loc_6C04873: pop %ebp;");
    asm("loc_6C04874: pop %ebx;");
    asm("loc_6C04875: mov %eax,8(%ecx);");
    asm("loc_6C04878: xor %eax,%eax;");
    asm("loc_6C0487A: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04880() // _sub_6C04880
{
    __DEBUG_ASM(6C04880);
    // chunk 0x6C04880 _sub_6C04880
    asm("loc_6C04880: mov 4(%esp),%eax;");
    asm("loc_6C04884: push %ebx;");
    asm("loc_6C04885: push %ebp;");
    asm("loc_6C04886: mov 0x10(%esp),%ebp;");
    asm("loc_6C0488A: push %esi;");
    asm("loc_6C0488B: push %edi;");
    asm("loc_6C0488C: mov %ecx,%edi;");
    asm("loc_6C0488E: lea 0x10(%edi),%esi;");
    asm("loc_6C04891: push %esi;");
    asm("loc_6C04892: push %ebp;");
    asm("loc_6C04893: lea 0x18(%edi),%ebx;");
    asm("loc_6C04896: push %ebx;");
    asm("loc_6C04897: mov %ebp,4(%esi);");
    asm("loc_6C0489A: mov %eax,8(%esi);");
    asm("loc_6C0489D: movl $0,(%esi);");
    asm("loc_6C048A3: movl $0,0xC(%esi);");
    asm("loc_6C048AA: call _sub_6BEBE90;");
    asm("loc_6C048AF: test %eax,%eax;");
    asm("loc_6C048B1: mov %eax,0x1C(%edi);");
    asm("loc_6C048B4: je loc_6C048C2;");
    asm("loc_6C048B6: pop %edi;");
    asm("loc_6C048B7: pop %esi;");
    asm("loc_6C048B8: pop %ebp;");
    asm("loc_6C048B9: mov $0x17,%eax;");
    asm("loc_6C048BE: pop %ebx;");
    asm("loc_6C048BF: ret $0xC;");
    asm("loc_6C048C2: mov (%esi),%edx;");
    asm("loc_6C048C4: mov 4(%esi),%ecx;");
    asm("loc_6C048C7: add $4,%edx;");
    asm("loc_6C048CA: mov %edx,%eax;");
    asm("loc_6C048CC: cmp %ecx,%eax;");
    asm("loc_6C048CE: mov %edx,(%esi);");
    asm("loc_6C048D0: mov $0x17,%ecx;");
    asm("loc_6C048D5: jbe loc_6C048DA;");
    asm("loc_6C048D7: mov %ecx,0xC(%esi);");
    asm("loc_6C048DA: mov 0x1C(%edi),%eax;");
    asm("loc_6C048DD: test %eax,%eax;");
    asm("loc_6C048DF: jne loc_6C049CC;");
    asm("loc_6C048E5: mov (%ebx),%eax;");
    asm("loc_6C048E7: mov (%eax),%edx;");
    asm("loc_6C048E9: add $4,%eax;");
    asm("loc_6C048EC: mov %eax,(%ebx);");
    asm("loc_6C048EE: mov %edx,0x20(%edi);");
    asm("loc_6C048F1: mov (%esi),%eax;");
    asm("loc_6C048F3: mov 4(%esi),%edx;");
    asm("loc_6C048F6: add $4,%eax;");
    asm("loc_6C048F9: cmp %edx,%eax;");
    asm("loc_6C048FB: mov %eax,(%esi);");
    asm("loc_6C048FD: jbe loc_6C04902;");
    asm("loc_6C048FF: mov %ecx,0xC(%esi);");
    asm("loc_6C04902: mov 0x1C(%edi),%eax;");
    asm("loc_6C04905: test %eax,%eax;");
    asm("loc_6C04907: jne loc_6C049CC;");
    asm("loc_6C0490D: mov (%ebx),%eax;");
    asm("loc_6C0490F: mov (%eax),%edx;");
    asm("loc_6C04911: add $4,%eax;");
    asm("loc_6C04914: mov %eax,(%ebx);");
    asm("loc_6C04916: mov %edx,0x24(%edi);");
    asm("loc_6C04919: mov (%esi),%eax;");
    asm("loc_6C0491B: mov 4(%esi),%edx;");
    asm("loc_6C0491E: add $4,%eax;");
    asm("loc_6C04921: cmp %edx,%eax;");
    asm("loc_6C04923: mov %eax,(%esi);");
    asm("loc_6C04925: jbe loc_6C0492A;");
    asm("loc_6C04927: mov %ecx,0xC(%esi);");
    asm("loc_6C0492A: mov 0x1C(%edi),%eax;");
    asm("loc_6C0492D: test %eax,%eax;");
    asm("loc_6C0492F: jne loc_6C049CC;");
    asm("loc_6C04935: mov (%ebx),%eax;");
    asm("loc_6C04937: mov (%eax),%edx;");
    asm("loc_6C04939: add $4,%eax;");
    asm("loc_6C0493C: mov %eax,(%ebx);");
    asm("loc_6C0493E: mov %edx,0x28(%edi);");
    asm("loc_6C04941: mov (%esi),%eax;");
    asm("loc_6C04943: mov 4(%esi),%edx;");
    asm("loc_6C04946: add $4,%eax;");
    asm("loc_6C04949: cmp %edx,%eax;");
    asm("loc_6C0494B: mov %eax,(%esi);");
    asm("loc_6C0494D: jbe loc_6C04952;");
    asm("loc_6C0494F: mov %ecx,0xC(%esi);");
    asm("loc_6C04952: mov 0x1C(%edi),%eax;");
    asm("loc_6C04955: test %eax,%eax;");
    asm("loc_6C04957: jne loc_6C049CC;");
    asm("loc_6C04959: mov (%ebx),%eax;");
    asm("loc_6C0495B: mov (%eax),%ecx;");
    asm("loc_6C0495D: push %esi;");
    asm("loc_6C0495E: push %ebp;");
    asm("loc_6C0495F: mov %ecx,0x2C(%edi);");
    asm("loc_6C04962: add $4,%eax;");
    asm("loc_6C04965: push %ebx;");
    asm("loc_6C04966: mov %edi,%ecx;");
    asm("loc_6C04968: mov %eax,(%ebx);");
    asm("loc_6C0496A: call _sub_6BEBEB0;");
    asm("loc_6C0496F: test %eax,%eax;");
    asm("loc_6C04971: mov %eax,0x1C(%edi);");
    asm("loc_6C04974: je loc_6C04982;");
    asm("loc_6C04976: pop %edi;");
    asm("loc_6C04977: pop %esi;");
    asm("loc_6C04978: pop %ebp;");
    asm("loc_6C04979: mov $0x17,%eax;");
    asm("loc_6C0497E: pop %ebx;");
    asm("loc_6C0497F: ret $0xC;");
    asm("loc_6C04982: mov (%esi),%edx;");
    asm("loc_6C04984: mov 0x1C(%esp),%eax;");
    asm("loc_6C04988: mov %edx,(%eax);");
    asm("loc_6C0498A: mov 0xC(%edi),%ecx;");
    asm("loc_6C0498D: push %ecx;");
    asm("loc_6C0498E: call _sub_6BEC3B0;");
    asm("loc_6C04993: mov %eax,%ecx;");
    asm("loc_6C04995: mov 4(%ecx),%edx;");
    asm("loc_6C04998: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C0499B: mov 0x14(%ecx),%eax;");
    asm("loc_6C0499E: add $4,%esp;");
    asm("loc_6C049A1: inc %edx;");
    asm("loc_6C049A2: mov %edx,4(%ecx);");
    asm("loc_6C049A5: mov %edx,%edi;");
    asm("loc_6C049A7: mov (%esi),%edx;");
    asm("loc_6C049A9: add $2,%edx;");
    asm("loc_6C049AC: add %edx,%ebp;");
    asm("loc_6C049AE: mov %ebp,0x1C(%ecx);");
    asm("loc_6C049B1: mov (%esi),%esi;");
    asm("loc_6C049B3: add $2,%eax;");
    asm("loc_6C049B6: cmp %eax,%esi;");
    asm("loc_6C049B8: jbe loc_6C049C0;");
    asm("loc_6C049BA: add $2,%esi;");
    asm("loc_6C049BD: mov %esi,0x14(%ecx);");
    asm("loc_6C049C0: mov 0x1C(%ecx),%eax;");
    asm("loc_6C049C3: xor %edx,%edx;");
    asm("loc_6C049C5: div %edi;");
    asm("loc_6C049C7: mov %eax,0xC(%ecx);");
    asm("loc_6C049CA: xor %eax,%eax;");
    asm("loc_6C049CC: pop %edi;");
    asm("loc_6C049CD: pop %esi;");
    asm("loc_6C049CE: pop %ebp;");
    asm("loc_6C049CF: pop %ebx;");
    asm("loc_6C049D0: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C049E0() // _sub_6C049E0
{
    __DEBUG_ASM(6C049E0);
    // chunk 0x6C049E0 _sub_6C049E0
    asm("loc_6C049E0: mov _data_6C0E588,%eax;");
    asm("loc_6C049E5: mov %eax,_data_6C14208;");
    asm("loc_6C049EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C049F0() // _sub_6C049F0
{
    __DEBUG_ASM(6C049F0);
    // chunk 0x6C049F0 _sub_6C049F0
    asm("loc_6C049F0: mov _data_6C0E588,%eax;");
    asm("loc_6C049F5: mov %eax,_data_6C1420C;");
    asm("loc_6C049FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04A00() // _sub_6C04A00
{
    __DEBUG_ASM(6C04A00);
    // chunk 0x6C04A00 _sub_6C04A00
    asm("loc_6C04A00: mov _data_6C0E58C,%eax;");
    asm("loc_6C04A05: mov %eax,_data_6C14204;");
    asm("loc_6C04A0A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04A10() // _sub_6C04A10
{
    __DEBUG_ASM(6C04A10);
    // chunk 0x6C04A10 _sub_6C04A10
    asm("loc_6C04A10: mov 8(%esp),%eax;");
    asm("loc_6C04A14: push %ebx;");
    asm("loc_6C04A15: push %esi;");
    asm("loc_6C04A16: push %edi;");
    asm("loc_6C04A17: mov %ecx,%edi;");
    asm("loc_6C04A19: mov 0x10(%esp),%ecx;");
    asm("loc_6C04A1D: lea 0x10(%edi),%esi;");
    asm("loc_6C04A20: mov %eax,4(%esi);");
    asm("loc_6C04A23: mov (%ecx),%edx;");
    asm("loc_6C04A25: mov %edx,8(%esi);");
    asm("loc_6C04A28: movl $0,(%esi);");
    asm("loc_6C04A2E: movl $0,0xC(%esi);");
    asm("loc_6C04A35: mov 0x14(%edi),%eax;");
    asm("loc_6C04A38: push %esi;");
    asm("loc_6C04A39: push %eax;");
    asm("loc_6C04A3A: lea 0x18(%edi),%ebx;");
    asm("loc_6C04A3D: push %ebx;");
    asm("loc_6C04A3E: mov %edi,%ecx;");
    asm("loc_6C04A40: call _sub_6BEBE50;");
    asm("loc_6C04A45: test %eax,%eax;");
    asm("loc_6C04A47: mov %eax,0x1C(%edi);");
    asm("loc_6C04A4A: je loc_6C04A57;");
    asm("loc_6C04A4C: pop %edi;");
    asm("loc_6C04A4D: pop %esi;");
    asm("loc_6C04A4E: mov $0x16,%eax;");
    asm("loc_6C04A53: pop %ebx;");
    asm("loc_6C04A54: ret $0xC;");
    asm("loc_6C04A57: mov (%esi),%edx;");
    asm("loc_6C04A59: mov 4(%esi),%ecx;");
    asm("loc_6C04A5C: add $4,%edx;");
    asm("loc_6C04A5F: mov %edx,%eax;");
    asm("loc_6C04A61: cmp %ecx,%eax;");
    asm("loc_6C04A63: mov %edx,(%esi);");
    asm("loc_6C04A65: jbe loc_6C04A6E;");
    asm("loc_6C04A67: movl $0x16,0xC(%esi);");
    asm("loc_6C04A6E: mov 0x1C(%edi),%eax;");
    asm("loc_6C04A71: test %eax,%eax;");
    asm("loc_6C04A73: je loc_6C04A80;");
    asm("loc_6C04A75: pop %edi;");
    asm("loc_6C04A76: pop %esi;");
    asm("loc_6C04A77: mov $0x16,%eax;");
    asm("loc_6C04A7C: pop %ebx;");
    asm("loc_6C04A7D: ret $0xC;");
    asm("loc_6C04A80: mov (%ebx),%eax;");
    asm("loc_6C04A82: mov 0x20(%edi),%ecx;");
    asm("loc_6C04A85: mov %ecx,(%eax);");
    asm("loc_6C04A87: add $4,%eax;");
    asm("loc_6C04A8A: mov %eax,(%ebx);");
    asm("loc_6C04A8C: mov (%esi),%edx;");
    asm("loc_6C04A8E: mov 4(%esi),%ecx;");
    asm("loc_6C04A91: add $4,%edx;");
    asm("loc_6C04A94: mov %edx,%eax;");
    asm("loc_6C04A96: cmp %ecx,%eax;");
    asm("loc_6C04A98: mov %edx,(%esi);");
    asm("loc_6C04A9A: jbe loc_6C04AA3;");
    asm("loc_6C04A9C: movl $0x16,0xC(%esi);");
    asm("loc_6C04AA3: mov 0x1C(%edi),%eax;");
    asm("loc_6C04AA6: test %eax,%eax;");
    asm("loc_6C04AA8: je loc_6C04AB5;");
    asm("loc_6C04AAA: pop %edi;");
    asm("loc_6C04AAB: pop %esi;");
    asm("loc_6C04AAC: mov $0x16,%eax;");
    asm("loc_6C04AB1: pop %ebx;");
    asm("loc_6C04AB2: ret $0xC;");
    asm("loc_6C04AB5: mov (%ebx),%eax;");
    asm("loc_6C04AB7: mov 0x24(%edi),%edx;");
    asm("loc_6C04ABA: mov %edx,(%eax);");
    asm("loc_6C04ABC: add $4,%eax;");
    asm("loc_6C04ABF: mov %eax,(%ebx);");
    asm("loc_6C04AC1: mov (%esi),%edx;");
    asm("loc_6C04AC3: mov 4(%esi),%ecx;");
    asm("loc_6C04AC6: add $4,%edx;");
    asm("loc_6C04AC9: mov %edx,%eax;");
    asm("loc_6C04ACB: cmp %ecx,%eax;");
    asm("loc_6C04ACD: mov %edx,(%esi);");
    asm("loc_6C04ACF: jbe loc_6C04AD8;");
    asm("loc_6C04AD1: movl $0x16,0xC(%esi);");
    asm("loc_6C04AD8: mov 0x1C(%edi),%eax;");
    asm("loc_6C04ADB: test %eax,%eax;");
    asm("loc_6C04ADD: je loc_6C04AEA;");
    asm("loc_6C04ADF: pop %edi;");
    asm("loc_6C04AE0: pop %esi;");
    asm("loc_6C04AE1: mov $0x16,%eax;");
    asm("loc_6C04AE6: pop %ebx;");
    asm("loc_6C04AE7: ret $0xC;");
    asm("loc_6C04AEA: mov (%ebx),%eax;");
    asm("loc_6C04AEC: mov 0x28(%edi),%ecx;");
    asm("loc_6C04AEF: mov %ecx,(%eax);");
    asm("loc_6C04AF1: mov 0x14(%edi),%edx;");
    asm("loc_6C04AF4: push %esi;");
    asm("loc_6C04AF5: push %edx;");
    asm("loc_6C04AF6: add $4,%eax;");
    asm("loc_6C04AF9: push %ebx;");
    asm("loc_6C04AFA: mov %edi,%ecx;");
    asm("loc_6C04AFC: mov %eax,(%ebx);");
    asm("loc_6C04AFE: call _sub_6BEBEA0;");
    asm("loc_6C04B03: test %eax,%eax;");
    asm("loc_6C04B05: mov %eax,0x1C(%edi);");
    asm("loc_6C04B08: je loc_6C04B15;");
    asm("loc_6C04B0A: pop %edi;");
    asm("loc_6C04B0B: pop %esi;");
    asm("loc_6C04B0C: mov $0x16,%eax;");
    asm("loc_6C04B11: pop %ebx;");
    asm("loc_6C04B12: ret $0xC;");
    asm("loc_6C04B15: mov (%esi),%eax;");
    asm("loc_6C04B17: mov 0x18(%esp),%ecx;");
    asm("loc_6C04B1B: mov %eax,(%ecx);");
    asm("loc_6C04B1D: mov 0xC(%edi),%edx;");
    asm("loc_6C04B20: push %edx;");
    asm("loc_6C04B21: call _sub_6BEC3B0;");
    asm("loc_6C04B26: mov %eax,%ecx;");
    asm("loc_6C04B28: mov (%ecx),%edi;");
    asm("loc_6C04B2A: mov 0x18(%ecx),%edx;");
    asm("loc_6C04B2D: add $4,%esp;");
    asm("loc_6C04B30: inc %edi;");
    asm("loc_6C04B31: mov %edi,(%ecx);");
    asm("loc_6C04B33: mov (%esi),%eax;");
    asm("loc_6C04B35: add %eax,%edx;");
    asm("loc_6C04B37: mov 0x10(%ecx),%eax;");
    asm("loc_6C04B3A: mov %edx,0x18(%ecx);");
    asm("loc_6C04B3D: mov (%esi),%esi;");
    asm("loc_6C04B3F: cmp %eax,%esi;");
    asm("loc_6C04B41: jbe loc_6C04B46;");
    asm("loc_6C04B43: mov %esi,0x10(%ecx);");
    asm("loc_6C04B46: mov 0x18(%ecx),%eax;");
    asm("loc_6C04B49: xor %edx,%edx;");
    asm("loc_6C04B4B: div %edi;");
    asm("loc_6C04B4D: pop %edi;");
    asm("loc_6C04B4E: pop %esi;");
    asm("loc_6C04B4F: pop %ebx;");
    asm("loc_6C04B50: mov %eax,8(%ecx);");
    asm("loc_6C04B53: xor %eax,%eax;");
    asm("loc_6C04B55: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04B60() // _sub_6C04B60
{
    __DEBUG_ASM(6C04B60);
    // chunk 0x6C04B60 _sub_6C04B60
    asm("loc_6C04B60: mov 4(%esp),%eax;");
    asm("loc_6C04B64: push %ebx;");
    asm("loc_6C04B65: push %ebp;");
    asm("loc_6C04B66: mov 0x10(%esp),%ebp;");
    asm("loc_6C04B6A: push %esi;");
    asm("loc_6C04B6B: push %edi;");
    asm("loc_6C04B6C: mov %ecx,%edi;");
    asm("loc_6C04B6E: lea 0x10(%edi),%esi;");
    asm("loc_6C04B71: push %esi;");
    asm("loc_6C04B72: push %ebp;");
    asm("loc_6C04B73: lea 0x18(%edi),%ebx;");
    asm("loc_6C04B76: push %ebx;");
    asm("loc_6C04B77: mov %ebp,4(%esi);");
    asm("loc_6C04B7A: mov %eax,8(%esi);");
    asm("loc_6C04B7D: movl $0,(%esi);");
    asm("loc_6C04B83: movl $0,0xC(%esi);");
    asm("loc_6C04B8A: call _sub_6BEBE90;");
    asm("loc_6C04B8F: test %eax,%eax;");
    asm("loc_6C04B91: mov %eax,0x1C(%edi);");
    asm("loc_6C04B94: je loc_6C04BA2;");
    asm("loc_6C04B96: pop %edi;");
    asm("loc_6C04B97: pop %esi;");
    asm("loc_6C04B98: pop %ebp;");
    asm("loc_6C04B99: mov $0x17,%eax;");
    asm("loc_6C04B9E: pop %ebx;");
    asm("loc_6C04B9F: ret $0xC;");
    asm("loc_6C04BA2: mov (%esi),%edx;");
    asm("loc_6C04BA4: mov 4(%esi),%ecx;");
    asm("loc_6C04BA7: add $4,%edx;");
    asm("loc_6C04BAA: mov %edx,%eax;");
    asm("loc_6C04BAC: cmp %ecx,%eax;");
    asm("loc_6C04BAE: mov %edx,(%esi);");
    asm("loc_6C04BB0: mov $0x17,%ecx;");
    asm("loc_6C04BB5: jbe loc_6C04BBA;");
    asm("loc_6C04BB7: mov %ecx,0xC(%esi);");
    asm("loc_6C04BBA: mov 0x1C(%edi),%eax;");
    asm("loc_6C04BBD: test %eax,%eax;");
    asm("loc_6C04BBF: jne loc_6C04C84;");
    asm("loc_6C04BC5: mov (%ebx),%eax;");
    asm("loc_6C04BC7: mov (%eax),%edx;");
    asm("loc_6C04BC9: add $4,%eax;");
    asm("loc_6C04BCC: mov %eax,(%ebx);");
    asm("loc_6C04BCE: mov %edx,0x20(%edi);");
    asm("loc_6C04BD1: mov (%esi),%eax;");
    asm("loc_6C04BD3: mov 4(%esi),%edx;");
    asm("loc_6C04BD6: add $4,%eax;");
    asm("loc_6C04BD9: cmp %edx,%eax;");
    asm("loc_6C04BDB: mov %eax,(%esi);");
    asm("loc_6C04BDD: jbe loc_6C04BE2;");
    asm("loc_6C04BDF: mov %ecx,0xC(%esi);");
    asm("loc_6C04BE2: mov 0x1C(%edi),%eax;");
    asm("loc_6C04BE5: test %eax,%eax;");
    asm("loc_6C04BE7: jne loc_6C04C84;");
    asm("loc_6C04BED: mov (%ebx),%eax;");
    asm("loc_6C04BEF: mov (%eax),%edx;");
    asm("loc_6C04BF1: add $4,%eax;");
    asm("loc_6C04BF4: mov %eax,(%ebx);");
    asm("loc_6C04BF6: mov %edx,0x24(%edi);");
    asm("loc_6C04BF9: mov (%esi),%eax;");
    asm("loc_6C04BFB: mov 4(%esi),%edx;");
    asm("loc_6C04BFE: add $4,%eax;");
    asm("loc_6C04C01: cmp %edx,%eax;");
    asm("loc_6C04C03: mov %eax,(%esi);");
    asm("loc_6C04C05: jbe loc_6C04C0A;");
    asm("loc_6C04C07: mov %ecx,0xC(%esi);");
    asm("loc_6C04C0A: mov 0x1C(%edi),%eax;");
    asm("loc_6C04C0D: test %eax,%eax;");
    asm("loc_6C04C0F: jne loc_6C04C84;");
    asm("loc_6C04C11: mov (%ebx),%eax;");
    asm("loc_6C04C13: mov (%eax),%ecx;");
    asm("loc_6C04C15: push %esi;");
    asm("loc_6C04C16: push %ebp;");
    asm("loc_6C04C17: mov %ecx,0x28(%edi);");
    asm("loc_6C04C1A: add $4,%eax;");
    asm("loc_6C04C1D: push %ebx;");
    asm("loc_6C04C1E: mov %edi,%ecx;");
    asm("loc_6C04C20: mov %eax,(%ebx);");
    asm("loc_6C04C22: call _sub_6BEBEB0;");
    asm("loc_6C04C27: test %eax,%eax;");
    asm("loc_6C04C29: mov %eax,0x1C(%edi);");
    asm("loc_6C04C2C: je loc_6C04C3A;");
    asm("loc_6C04C2E: pop %edi;");
    asm("loc_6C04C2F: pop %esi;");
    asm("loc_6C04C30: pop %ebp;");
    asm("loc_6C04C31: mov $0x17,%eax;");
    asm("loc_6C04C36: pop %ebx;");
    asm("loc_6C04C37: ret $0xC;");
    asm("loc_6C04C3A: mov (%esi),%edx;");
    asm("loc_6C04C3C: mov 0x1C(%esp),%eax;");
    asm("loc_6C04C40: mov %edx,(%eax);");
    asm("loc_6C04C42: mov 0xC(%edi),%ecx;");
    asm("loc_6C04C45: push %ecx;");
    asm("loc_6C04C46: call _sub_6BEC3B0;");
    asm("loc_6C04C4B: mov %eax,%ecx;");
    asm("loc_6C04C4D: mov 4(%ecx),%edx;");
    asm("loc_6C04C50: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C04C53: mov 0x14(%ecx),%eax;");
    asm("loc_6C04C56: add $4,%esp;");
    asm("loc_6C04C59: inc %edx;");
    asm("loc_6C04C5A: mov %edx,4(%ecx);");
    asm("loc_6C04C5D: mov %edx,%edi;");
    asm("loc_6C04C5F: mov (%esi),%edx;");
    asm("loc_6C04C61: add $2,%edx;");
    asm("loc_6C04C64: add %edx,%ebp;");
    asm("loc_6C04C66: mov %ebp,0x1C(%ecx);");
    asm("loc_6C04C69: mov (%esi),%esi;");
    asm("loc_6C04C6B: add $2,%eax;");
    asm("loc_6C04C6E: cmp %eax,%esi;");
    asm("loc_6C04C70: jbe loc_6C04C78;");
    asm("loc_6C04C72: add $2,%esi;");
    asm("loc_6C04C75: mov %esi,0x14(%ecx);");
    asm("loc_6C04C78: mov 0x1C(%ecx),%eax;");
    asm("loc_6C04C7B: xor %edx,%edx;");
    asm("loc_6C04C7D: div %edi;");
    asm("loc_6C04C7F: mov %eax,0xC(%ecx);");
    asm("loc_6C04C82: xor %eax,%eax;");
    asm("loc_6C04C84: pop %edi;");
    asm("loc_6C04C85: pop %esi;");
    asm("loc_6C04C86: pop %ebp;");
    asm("loc_6C04C87: pop %ebx;");
    asm("loc_6C04C88: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04C90() // _sub_6C04C90
{
    __DEBUG_ASM(6C04C90);
    // chunk 0x6C04C90 _sub_6C04C90
    asm("loc_6C04C90: mov 8(%esp),%eax;");
    asm("loc_6C04C94: push %ebx;");
    asm("loc_6C04C95: push %esi;");
    asm("loc_6C04C96: push %edi;");
    asm("loc_6C04C97: mov %ecx,%edi;");
    asm("loc_6C04C99: mov 0x10(%esp),%ecx;");
    asm("loc_6C04C9D: lea 0x10(%edi),%esi;");
    asm("loc_6C04CA0: mov %eax,4(%esi);");
    asm("loc_6C04CA3: mov (%ecx),%edx;");
    asm("loc_6C04CA5: mov %edx,8(%esi);");
    asm("loc_6C04CA8: movl $0,(%esi);");
    asm("loc_6C04CAE: movl $0,0xC(%esi);");
    asm("loc_6C04CB5: mov 0x14(%edi),%eax;");
    asm("loc_6C04CB8: push %esi;");
    asm("loc_6C04CB9: push %eax;");
    asm("loc_6C04CBA: lea 0x18(%edi),%ebx;");
    asm("loc_6C04CBD: push %ebx;");
    asm("loc_6C04CBE: mov %edi,%ecx;");
    asm("loc_6C04CC0: call _sub_6BEBE50;");
    asm("loc_6C04CC5: test %eax,%eax;");
    asm("loc_6C04CC7: mov %eax,0x1C(%edi);");
    asm("loc_6C04CCA: je loc_6C04CD7;");
    asm("loc_6C04CCC: pop %edi;");
    asm("loc_6C04CCD: pop %esi;");
    asm("loc_6C04CCE: mov $0x16,%eax;");
    asm("loc_6C04CD3: pop %ebx;");
    asm("loc_6C04CD4: ret $0xC;");
    asm("loc_6C04CD7: mov (%esi),%edx;");
    asm("loc_6C04CD9: mov 4(%esi),%ecx;");
    asm("loc_6C04CDC: add $4,%edx;");
    asm("loc_6C04CDF: mov %edx,%eax;");
    asm("loc_6C04CE1: cmp %ecx,%eax;");
    asm("loc_6C04CE3: mov %edx,(%esi);");
    asm("loc_6C04CE5: jbe loc_6C04CEE;");
    asm("loc_6C04CE7: movl $0x16,0xC(%esi);");
    asm("loc_6C04CEE: mov 0x1C(%edi),%eax;");
    asm("loc_6C04CF1: test %eax,%eax;");
    asm("loc_6C04CF3: je loc_6C04D00;");
    asm("loc_6C04CF5: pop %edi;");
    asm("loc_6C04CF6: pop %esi;");
    asm("loc_6C04CF7: mov $0x16,%eax;");
    asm("loc_6C04CFC: pop %ebx;");
    asm("loc_6C04CFD: ret $0xC;");
    asm("loc_6C04D00: mov (%ebx),%eax;");
    asm("loc_6C04D02: mov 0x20(%edi),%ecx;");
    asm("loc_6C04D05: mov %ecx,(%eax);");
    asm("loc_6C04D07: mov 0x14(%edi),%edx;");
    asm("loc_6C04D0A: push %esi;");
    asm("loc_6C04D0B: push %edx;");
    asm("loc_6C04D0C: add $4,%eax;");
    asm("loc_6C04D0F: push %ebx;");
    asm("loc_6C04D10: mov %edi,%ecx;");
    asm("loc_6C04D12: mov %eax,(%ebx);");
    asm("loc_6C04D14: call _sub_6BEBEA0;");
    asm("loc_6C04D19: test %eax,%eax;");
    asm("loc_6C04D1B: mov %eax,0x1C(%edi);");
    asm("loc_6C04D1E: je loc_6C04D2B;");
    asm("loc_6C04D20: pop %edi;");
    asm("loc_6C04D21: pop %esi;");
    asm("loc_6C04D22: mov $0x16,%eax;");
    asm("loc_6C04D27: pop %ebx;");
    asm("loc_6C04D28: ret $0xC;");
    asm("loc_6C04D2B: mov (%esi),%eax;");
    asm("loc_6C04D2D: mov 0x18(%esp),%ecx;");
    asm("loc_6C04D31: mov %eax,(%ecx);");
    asm("loc_6C04D33: mov 0xC(%edi),%edx;");
    asm("loc_6C04D36: push %edx;");
    asm("loc_6C04D37: call _sub_6BEC3B0;");
    asm("loc_6C04D3C: mov %eax,%ecx;");
    asm("loc_6C04D3E: mov (%ecx),%edi;");
    asm("loc_6C04D40: mov 0x18(%ecx),%edx;");
    asm("loc_6C04D43: add $4,%esp;");
    asm("loc_6C04D46: inc %edi;");
    asm("loc_6C04D47: mov %edi,(%ecx);");
    asm("loc_6C04D49: mov (%esi),%eax;");
    asm("loc_6C04D4B: add %eax,%edx;");
    asm("loc_6C04D4D: mov 0x10(%ecx),%eax;");
    asm("loc_6C04D50: mov %edx,0x18(%ecx);");
    asm("loc_6C04D53: mov (%esi),%esi;");
    asm("loc_6C04D55: cmp %eax,%esi;");
    asm("loc_6C04D57: jbe loc_6C04D5C;");
    asm("loc_6C04D59: mov %esi,0x10(%ecx);");
    asm("loc_6C04D5C: mov 0x18(%ecx),%eax;");
    asm("loc_6C04D5F: xor %edx,%edx;");
    asm("loc_6C04D61: div %edi;");
    asm("loc_6C04D63: pop %edi;");
    asm("loc_6C04D64: pop %esi;");
    asm("loc_6C04D65: pop %ebx;");
    asm("loc_6C04D66: mov %eax,8(%ecx);");
    asm("loc_6C04D69: xor %eax,%eax;");
    asm("loc_6C04D6B: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04D70() // _sub_6C04D70
{
    __DEBUG_ASM(6C04D70);
    // chunk 0x6C04D70 _sub_6C04D70
    asm("loc_6C04D70: mov 4(%esp),%eax;");
    asm("loc_6C04D74: push %ebx;");
    asm("loc_6C04D75: push %ebp;");
    asm("loc_6C04D76: mov 0x10(%esp),%ebp;");
    asm("loc_6C04D7A: push %esi;");
    asm("loc_6C04D7B: push %edi;");
    asm("loc_6C04D7C: mov %ecx,%edi;");
    asm("loc_6C04D7E: lea 0x10(%edi),%esi;");
    asm("loc_6C04D81: push %esi;");
    asm("loc_6C04D82: push %ebp;");
    asm("loc_6C04D83: lea 0x18(%edi),%ebx;");
    asm("loc_6C04D86: push %ebx;");
    asm("loc_6C04D87: mov %ebp,4(%esi);");
    asm("loc_6C04D8A: mov %eax,8(%esi);");
    asm("loc_6C04D8D: movl $0,(%esi);");
    asm("loc_6C04D93: movl $0,0xC(%esi);");
    asm("loc_6C04D9A: call _sub_6BEBE90;");
    asm("loc_6C04D9F: test %eax,%eax;");
    asm("loc_6C04DA1: mov %eax,0x1C(%edi);");
    asm("loc_6C04DA4: je loc_6C04DB2;");
    asm("loc_6C04DA6: pop %edi;");
    asm("loc_6C04DA7: pop %esi;");
    asm("loc_6C04DA8: pop %ebp;");
    asm("loc_6C04DA9: mov $0x17,%eax;");
    asm("loc_6C04DAE: pop %ebx;");
    asm("loc_6C04DAF: ret $0xC;");
    asm("loc_6C04DB2: mov (%esi),%edx;");
    asm("loc_6C04DB4: mov 4(%esi),%ecx;");
    asm("loc_6C04DB7: add $4,%edx;");
    asm("loc_6C04DBA: mov %edx,%eax;");
    asm("loc_6C04DBC: cmp %ecx,%eax;");
    asm("loc_6C04DBE: mov %edx,(%esi);");
    asm("loc_6C04DC0: jbe loc_6C04DC9;");
    asm("loc_6C04DC2: movl $0x17,0xC(%esi);");
    asm("loc_6C04DC9: mov 0x1C(%edi),%eax;");
    asm("loc_6C04DCC: test %eax,%eax;");
    asm("loc_6C04DCE: jne loc_6C04E43;");
    asm("loc_6C04DD0: mov (%ebx),%eax;");
    asm("loc_6C04DD2: mov (%eax),%ecx;");
    asm("loc_6C04DD4: push %esi;");
    asm("loc_6C04DD5: push %ebp;");
    asm("loc_6C04DD6: mov %ecx,0x20(%edi);");
    asm("loc_6C04DD9: add $4,%eax;");
    asm("loc_6C04DDC: push %ebx;");
    asm("loc_6C04DDD: mov %edi,%ecx;");
    asm("loc_6C04DDF: mov %eax,(%ebx);");
    asm("loc_6C04DE1: call _sub_6BEBEB0;");
    asm("loc_6C04DE6: test %eax,%eax;");
    asm("loc_6C04DE8: mov %eax,0x1C(%edi);");
    asm("loc_6C04DEB: je loc_6C04DF9;");
    asm("loc_6C04DED: pop %edi;");
    asm("loc_6C04DEE: pop %esi;");
    asm("loc_6C04DEF: pop %ebp;");
    asm("loc_6C04DF0: mov $0x17,%eax;");
    asm("loc_6C04DF5: pop %ebx;");
    asm("loc_6C04DF6: ret $0xC;");
    asm("loc_6C04DF9: mov (%esi),%edx;");
    asm("loc_6C04DFB: mov 0x1C(%esp),%eax;");
    asm("loc_6C04DFF: mov %edx,(%eax);");
    asm("loc_6C04E01: mov 0xC(%edi),%ecx;");
    asm("loc_6C04E04: push %ecx;");
    asm("loc_6C04E05: call _sub_6BEC3B0;");
    asm("loc_6C04E0A: mov %eax,%ecx;");
    asm("loc_6C04E0C: mov 4(%ecx),%edx;");
    asm("loc_6C04E0F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C04E12: mov 0x14(%ecx),%eax;");
    asm("loc_6C04E15: add $4,%esp;");
    asm("loc_6C04E18: inc %edx;");
    asm("loc_6C04E19: mov %edx,4(%ecx);");
    asm("loc_6C04E1C: mov %edx,%edi;");
    asm("loc_6C04E1E: mov (%esi),%edx;");
    asm("loc_6C04E20: add $2,%edx;");
    asm("loc_6C04E23: add %edx,%ebp;");
    asm("loc_6C04E25: mov %ebp,0x1C(%ecx);");
    asm("loc_6C04E28: mov (%esi),%esi;");
    asm("loc_6C04E2A: add $2,%eax;");
    asm("loc_6C04E2D: cmp %eax,%esi;");
    asm("loc_6C04E2F: jbe loc_6C04E37;");
    asm("loc_6C04E31: add $2,%esi;");
    asm("loc_6C04E34: mov %esi,0x14(%ecx);");
    asm("loc_6C04E37: mov 0x1C(%ecx),%eax;");
    asm("loc_6C04E3A: xor %edx,%edx;");
    asm("loc_6C04E3C: div %edi;");
    asm("loc_6C04E3E: mov %eax,0xC(%ecx);");
    asm("loc_6C04E41: xor %eax,%eax;");
    asm("loc_6C04E43: pop %edi;");
    asm("loc_6C04E44: pop %esi;");
    asm("loc_6C04E45: pop %ebp;");
    asm("loc_6C04E46: pop %ebx;");
    asm("loc_6C04E47: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04E50() // _sub_6C04E50
{
    __DEBUG_ASM(6C04E50);
    // chunk 0x6C04E50 _sub_6C04E50
    asm("loc_6C04E50: mov 8(%esp),%eax;");
    asm("loc_6C04E54: push %ebx;");
    asm("loc_6C04E55: push %esi;");
    asm("loc_6C04E56: push %edi;");
    asm("loc_6C04E57: mov %ecx,%edi;");
    asm("loc_6C04E59: mov 0x10(%esp),%ecx;");
    asm("loc_6C04E5D: lea 0x10(%edi),%esi;");
    asm("loc_6C04E60: mov %eax,4(%esi);");
    asm("loc_6C04E63: mov (%ecx),%edx;");
    asm("loc_6C04E65: mov %edx,8(%esi);");
    asm("loc_6C04E68: movl $0,(%esi);");
    asm("loc_6C04E6E: movl $0,0xC(%esi);");
    asm("loc_6C04E75: mov 0x14(%edi),%eax;");
    asm("loc_6C04E78: push %esi;");
    asm("loc_6C04E79: push %eax;");
    asm("loc_6C04E7A: lea 0x18(%edi),%ebx;");
    asm("loc_6C04E7D: push %ebx;");
    asm("loc_6C04E7E: mov %edi,%ecx;");
    asm("loc_6C04E80: call _sub_6BEBE50;");
    asm("loc_6C04E85: test %eax,%eax;");
    asm("loc_6C04E87: mov %eax,0x1C(%edi);");
    asm("loc_6C04E8A: je loc_6C04E97;");
    asm("loc_6C04E8C: pop %edi;");
    asm("loc_6C04E8D: pop %esi;");
    asm("loc_6C04E8E: mov $0x16,%eax;");
    asm("loc_6C04E93: pop %ebx;");
    asm("loc_6C04E94: ret $0xC;");
    asm("loc_6C04E97: mov (%esi),%edx;");
    asm("loc_6C04E99: mov 4(%esi),%ecx;");
    asm("loc_6C04E9C: add $4,%edx;");
    asm("loc_6C04E9F: mov %edx,%eax;");
    asm("loc_6C04EA1: cmp %ecx,%eax;");
    asm("loc_6C04EA3: mov %edx,(%esi);");
    asm("loc_6C04EA5: jbe loc_6C04EAE;");
    asm("loc_6C04EA7: movl $0x16,0xC(%esi);");
    asm("loc_6C04EAE: mov 0x1C(%edi),%eax;");
    asm("loc_6C04EB1: test %eax,%eax;");
    asm("loc_6C04EB3: je loc_6C04EC0;");
    asm("loc_6C04EB5: pop %edi;");
    asm("loc_6C04EB6: pop %esi;");
    asm("loc_6C04EB7: mov $0x16,%eax;");
    asm("loc_6C04EBC: pop %ebx;");
    asm("loc_6C04EBD: ret $0xC;");
    asm("loc_6C04EC0: mov (%ebx),%eax;");
    asm("loc_6C04EC2: mov 0x20(%edi),%ecx;");
    asm("loc_6C04EC5: mov %ecx,(%eax);");
    asm("loc_6C04EC7: mov 0x14(%edi),%edx;");
    asm("loc_6C04ECA: push %esi;");
    asm("loc_6C04ECB: push %edx;");
    asm("loc_6C04ECC: add $4,%eax;");
    asm("loc_6C04ECF: push %ebx;");
    asm("loc_6C04ED0: mov %edi,%ecx;");
    asm("loc_6C04ED2: mov %eax,(%ebx);");
    asm("loc_6C04ED4: call _sub_6BEBEA0;");
    asm("loc_6C04ED9: test %eax,%eax;");
    asm("loc_6C04EDB: mov %eax,0x1C(%edi);");
    asm("loc_6C04EDE: je loc_6C04EEB;");
    asm("loc_6C04EE0: pop %edi;");
    asm("loc_6C04EE1: pop %esi;");
    asm("loc_6C04EE2: mov $0x16,%eax;");
    asm("loc_6C04EE7: pop %ebx;");
    asm("loc_6C04EE8: ret $0xC;");
    asm("loc_6C04EEB: mov (%esi),%eax;");
    asm("loc_6C04EED: mov 0x18(%esp),%ecx;");
    asm("loc_6C04EF1: mov %eax,(%ecx);");
    asm("loc_6C04EF3: mov 0xC(%edi),%edx;");
    asm("loc_6C04EF6: push %edx;");
    asm("loc_6C04EF7: call _sub_6BEC3B0;");
    asm("loc_6C04EFC: mov %eax,%ecx;");
    asm("loc_6C04EFE: mov (%ecx),%edi;");
    asm("loc_6C04F00: mov 0x18(%ecx),%edx;");
    asm("loc_6C04F03: add $4,%esp;");
    asm("loc_6C04F06: inc %edi;");
    asm("loc_6C04F07: mov %edi,(%ecx);");
    asm("loc_6C04F09: mov (%esi),%eax;");
    asm("loc_6C04F0B: add %eax,%edx;");
    asm("loc_6C04F0D: mov 0x10(%ecx),%eax;");
    asm("loc_6C04F10: mov %edx,0x18(%ecx);");
    asm("loc_6C04F13: mov (%esi),%esi;");
    asm("loc_6C04F15: cmp %eax,%esi;");
    asm("loc_6C04F17: jbe loc_6C04F1C;");
    asm("loc_6C04F19: mov %esi,0x10(%ecx);");
    asm("loc_6C04F1C: mov 0x18(%ecx),%eax;");
    asm("loc_6C04F1F: xor %edx,%edx;");
    asm("loc_6C04F21: div %edi;");
    asm("loc_6C04F23: pop %edi;");
    asm("loc_6C04F24: pop %esi;");
    asm("loc_6C04F25: pop %ebx;");
    asm("loc_6C04F26: mov %eax,8(%ecx);");
    asm("loc_6C04F29: xor %eax,%eax;");
    asm("loc_6C04F2B: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C04F30() // _sub_6C04F30
{
    __DEBUG_ASM(6C04F30);
    // chunk 0x6C04F30 _sub_6C04F30
    asm("loc_6C04F30: mov 4(%esp),%eax;");
    asm("loc_6C04F34: push %ebx;");
    asm("loc_6C04F35: push %ebp;");
    asm("loc_6C04F36: mov 0x10(%esp),%ebp;");
    asm("loc_6C04F3A: push %esi;");
    asm("loc_6C04F3B: push %edi;");
    asm("loc_6C04F3C: mov %ecx,%edi;");
    asm("loc_6C04F3E: lea 0x10(%edi),%esi;");
    asm("loc_6C04F41: push %esi;");
    asm("loc_6C04F42: push %ebp;");
    asm("loc_6C04F43: lea 0x18(%edi),%ebx;");
    asm("loc_6C04F46: push %ebx;");
    asm("loc_6C04F47: mov %ebp,4(%esi);");
    asm("loc_6C04F4A: mov %eax,8(%esi);");
    asm("loc_6C04F4D: movl $0,(%esi);");
    asm("loc_6C04F53: movl $0,0xC(%esi);");
    asm("loc_6C04F5A: call _sub_6BEBE90;");
    asm("loc_6C04F5F: test %eax,%eax;");
    asm("loc_6C04F61: mov %eax,0x1C(%edi);");
    asm("loc_6C04F64: je loc_6C04F72;");
    asm("loc_6C04F66: pop %edi;");
    asm("loc_6C04F67: pop %esi;");
    asm("loc_6C04F68: pop %ebp;");
    asm("loc_6C04F69: mov $0x17,%eax;");
    asm("loc_6C04F6E: pop %ebx;");
    asm("loc_6C04F6F: ret $0xC;");
    asm("loc_6C04F72: mov (%esi),%edx;");
    asm("loc_6C04F74: mov 4(%esi),%ecx;");
    asm("loc_6C04F77: add $4,%edx;");
    asm("loc_6C04F7A: mov %edx,%eax;");
    asm("loc_6C04F7C: cmp %ecx,%eax;");
    asm("loc_6C04F7E: mov %edx,(%esi);");
    asm("loc_6C04F80: jbe loc_6C04F89;");
    asm("loc_6C04F82: movl $0x17,0xC(%esi);");
    asm("loc_6C04F89: mov 0x1C(%edi),%eax;");
    asm("loc_6C04F8C: test %eax,%eax;");
    asm("loc_6C04F8E: jne loc_6C05003;");
    asm("loc_6C04F90: mov (%ebx),%eax;");
    asm("loc_6C04F92: mov (%eax),%ecx;");
    asm("loc_6C04F94: push %esi;");
    asm("loc_6C04F95: push %ebp;");
    asm("loc_6C04F96: mov %ecx,0x20(%edi);");
    asm("loc_6C04F99: add $4,%eax;");
    asm("loc_6C04F9C: push %ebx;");
    asm("loc_6C04F9D: mov %edi,%ecx;");
    asm("loc_6C04F9F: mov %eax,(%ebx);");
    asm("loc_6C04FA1: call _sub_6BEBEB0;");
    asm("loc_6C04FA6: test %eax,%eax;");
    asm("loc_6C04FA8: mov %eax,0x1C(%edi);");
    asm("loc_6C04FAB: je loc_6C04FB9;");
    asm("loc_6C04FAD: pop %edi;");
    asm("loc_6C04FAE: pop %esi;");
    asm("loc_6C04FAF: pop %ebp;");
    asm("loc_6C04FB0: mov $0x17,%eax;");
    asm("loc_6C04FB5: pop %ebx;");
    asm("loc_6C04FB6: ret $0xC;");
    asm("loc_6C04FB9: mov (%esi),%edx;");
    asm("loc_6C04FBB: mov 0x1C(%esp),%eax;");
    asm("loc_6C04FBF: mov %edx,(%eax);");
    asm("loc_6C04FC1: mov 0xC(%edi),%ecx;");
    asm("loc_6C04FC4: push %ecx;");
    asm("loc_6C04FC5: call _sub_6BEC3B0;");
    asm("loc_6C04FCA: mov %eax,%ecx;");
    asm("loc_6C04FCC: mov 4(%ecx),%edx;");
    asm("loc_6C04FCF: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C04FD2: mov 0x14(%ecx),%eax;");
    asm("loc_6C04FD5: add $4,%esp;");
    asm("loc_6C04FD8: inc %edx;");
    asm("loc_6C04FD9: mov %edx,4(%ecx);");
    asm("loc_6C04FDC: mov %edx,%edi;");
    asm("loc_6C04FDE: mov (%esi),%edx;");
    asm("loc_6C04FE0: add $2,%edx;");
    asm("loc_6C04FE3: add %edx,%ebp;");
    asm("loc_6C04FE5: mov %ebp,0x1C(%ecx);");
    asm("loc_6C04FE8: mov (%esi),%esi;");
    asm("loc_6C04FEA: add $2,%eax;");
    asm("loc_6C04FED: cmp %eax,%esi;");
    asm("loc_6C04FEF: jbe loc_6C04FF7;");
    asm("loc_6C04FF1: add $2,%esi;");
    asm("loc_6C04FF4: mov %esi,0x14(%ecx);");
    asm("loc_6C04FF7: mov 0x1C(%ecx),%eax;");
    asm("loc_6C04FFA: xor %edx,%edx;");
    asm("loc_6C04FFC: div %edi;");
    asm("loc_6C04FFE: mov %eax,0xC(%ecx);");
    asm("loc_6C05001: xor %eax,%eax;");
    asm("loc_6C05003: pop %edi;");
    asm("loc_6C05004: pop %esi;");
    asm("loc_6C05005: pop %ebp;");
    asm("loc_6C05006: pop %ebx;");
    asm("loc_6C05007: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05010() // _sub_6C05010
{
    __DEBUG_ASM(6C05010);
    // chunk 0x6C05010 _sub_6C05010
    asm("loc_6C05010: mov 8(%esp),%eax;");
    asm("loc_6C05014: push %ebx;");
    asm("loc_6C05015: push %esi;");
    asm("loc_6C05016: push %edi;");
    asm("loc_6C05017: mov %ecx,%edi;");
    asm("loc_6C05019: mov 0x10(%esp),%ecx;");
    asm("loc_6C0501D: lea 0x10(%edi),%esi;");
    asm("loc_6C05020: mov %eax,4(%esi);");
    asm("loc_6C05023: mov (%ecx),%edx;");
    asm("loc_6C05025: mov %edx,8(%esi);");
    asm("loc_6C05028: movl $0,(%esi);");
    asm("loc_6C0502E: movl $0,0xC(%esi);");
    asm("loc_6C05035: mov 0x14(%edi),%eax;");
    asm("loc_6C05038: push %esi;");
    asm("loc_6C05039: push %eax;");
    asm("loc_6C0503A: lea 0x18(%edi),%ebx;");
    asm("loc_6C0503D: push %ebx;");
    asm("loc_6C0503E: mov %edi,%ecx;");
    asm("loc_6C05040: call _sub_6BEBE50;");
    asm("loc_6C05045: test %eax,%eax;");
    asm("loc_6C05047: mov %eax,0x1C(%edi);");
    asm("loc_6C0504A: je loc_6C05057;");
    asm("loc_6C0504C: pop %edi;");
    asm("loc_6C0504D: pop %esi;");
    asm("loc_6C0504E: mov $0x16,%eax;");
    asm("loc_6C05053: pop %ebx;");
    asm("loc_6C05054: ret $0xC;");
    asm("loc_6C05057: mov (%esi),%edx;");
    asm("loc_6C05059: mov 4(%esi),%ecx;");
    asm("loc_6C0505C: add $4,%edx;");
    asm("loc_6C0505F: mov %edx,%eax;");
    asm("loc_6C05061: cmp %ecx,%eax;");
    asm("loc_6C05063: mov %edx,(%esi);");
    asm("loc_6C05065: jbe loc_6C0506E;");
    asm("loc_6C05067: movl $0x16,0xC(%esi);");
    asm("loc_6C0506E: mov 0x1C(%edi),%eax;");
    asm("loc_6C05071: test %eax,%eax;");
    asm("loc_6C05073: je loc_6C05080;");
    asm("loc_6C05075: pop %edi;");
    asm("loc_6C05076: pop %esi;");
    asm("loc_6C05077: mov $0x16,%eax;");
    asm("loc_6C0507C: pop %ebx;");
    asm("loc_6C0507D: ret $0xC;");
    asm("loc_6C05080: mov (%ebx),%eax;");
    asm("loc_6C05082: mov 0x20(%edi),%ecx;");
    asm("loc_6C05085: mov %ecx,(%eax);");
    asm("loc_6C05087: mov 0x14(%edi),%edx;");
    asm("loc_6C0508A: push %esi;");
    asm("loc_6C0508B: push %edx;");
    asm("loc_6C0508C: add $4,%eax;");
    asm("loc_6C0508F: push %ebx;");
    asm("loc_6C05090: mov %edi,%ecx;");
    asm("loc_6C05092: mov %eax,(%ebx);");
    asm("loc_6C05094: call _sub_6BEBEA0;");
    asm("loc_6C05099: test %eax,%eax;");
    asm("loc_6C0509B: mov %eax,0x1C(%edi);");
    asm("loc_6C0509E: je loc_6C050AB;");
    asm("loc_6C050A0: pop %edi;");
    asm("loc_6C050A1: pop %esi;");
    asm("loc_6C050A2: mov $0x16,%eax;");
    asm("loc_6C050A7: pop %ebx;");
    asm("loc_6C050A8: ret $0xC;");
    asm("loc_6C050AB: mov (%esi),%eax;");
    asm("loc_6C050AD: mov 0x18(%esp),%ecx;");
    asm("loc_6C050B1: mov %eax,(%ecx);");
    asm("loc_6C050B3: mov 0xC(%edi),%edx;");
    asm("loc_6C050B6: push %edx;");
    asm("loc_6C050B7: call _sub_6BEC3B0;");
    asm("loc_6C050BC: mov %eax,%ecx;");
    asm("loc_6C050BE: mov (%ecx),%edi;");
    asm("loc_6C050C0: mov 0x18(%ecx),%edx;");
    asm("loc_6C050C3: add $4,%esp;");
    asm("loc_6C050C6: inc %edi;");
    asm("loc_6C050C7: mov %edi,(%ecx);");
    asm("loc_6C050C9: mov (%esi),%eax;");
    asm("loc_6C050CB: add %eax,%edx;");
    asm("loc_6C050CD: mov 0x10(%ecx),%eax;");
    asm("loc_6C050D0: mov %edx,0x18(%ecx);");
    asm("loc_6C050D3: mov (%esi),%esi;");
    asm("loc_6C050D5: cmp %eax,%esi;");
    asm("loc_6C050D7: jbe loc_6C050DC;");
    asm("loc_6C050D9: mov %esi,0x10(%ecx);");
    asm("loc_6C050DC: mov 0x18(%ecx),%eax;");
    asm("loc_6C050DF: xor %edx,%edx;");
    asm("loc_6C050E1: div %edi;");
    asm("loc_6C050E3: pop %edi;");
    asm("loc_6C050E4: pop %esi;");
    asm("loc_6C050E5: pop %ebx;");
    asm("loc_6C050E6: mov %eax,8(%ecx);");
    asm("loc_6C050E9: xor %eax,%eax;");
    asm("loc_6C050EB: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C050F0() // _sub_6C050F0
{
    __DEBUG_ASM(6C050F0);
    // chunk 0x6C050F0 _sub_6C050F0
    asm("loc_6C050F0: mov 4(%esp),%eax;");
    asm("loc_6C050F4: push %ebx;");
    asm("loc_6C050F5: push %ebp;");
    asm("loc_6C050F6: mov 0x10(%esp),%ebp;");
    asm("loc_6C050FA: push %esi;");
    asm("loc_6C050FB: push %edi;");
    asm("loc_6C050FC: mov %ecx,%edi;");
    asm("loc_6C050FE: lea 0x10(%edi),%esi;");
    asm("loc_6C05101: push %esi;");
    asm("loc_6C05102: push %ebp;");
    asm("loc_6C05103: lea 0x18(%edi),%ebx;");
    asm("loc_6C05106: push %ebx;");
    asm("loc_6C05107: mov %ebp,4(%esi);");
    asm("loc_6C0510A: mov %eax,8(%esi);");
    asm("loc_6C0510D: movl $0,(%esi);");
    asm("loc_6C05113: movl $0,0xC(%esi);");
    asm("loc_6C0511A: call _sub_6BEBE90;");
    asm("loc_6C0511F: test %eax,%eax;");
    asm("loc_6C05121: mov %eax,0x1C(%edi);");
    asm("loc_6C05124: je loc_6C05132;");
    asm("loc_6C05126: pop %edi;");
    asm("loc_6C05127: pop %esi;");
    asm("loc_6C05128: pop %ebp;");
    asm("loc_6C05129: mov $0x17,%eax;");
    asm("loc_6C0512E: pop %ebx;");
    asm("loc_6C0512F: ret $0xC;");
    asm("loc_6C05132: mov (%esi),%edx;");
    asm("loc_6C05134: mov 4(%esi),%ecx;");
    asm("loc_6C05137: add $4,%edx;");
    asm("loc_6C0513A: mov %edx,%eax;");
    asm("loc_6C0513C: cmp %ecx,%eax;");
    asm("loc_6C0513E: mov %edx,(%esi);");
    asm("loc_6C05140: jbe loc_6C05149;");
    asm("loc_6C05142: movl $0x17,0xC(%esi);");
    asm("loc_6C05149: mov 0x1C(%edi),%eax;");
    asm("loc_6C0514C: test %eax,%eax;");
    asm("loc_6C0514E: jne loc_6C051C3;");
    asm("loc_6C05150: mov (%ebx),%eax;");
    asm("loc_6C05152: mov (%eax),%ecx;");
    asm("loc_6C05154: push %esi;");
    asm("loc_6C05155: push %ebp;");
    asm("loc_6C05156: mov %ecx,0x20(%edi);");
    asm("loc_6C05159: add $4,%eax;");
    asm("loc_6C0515C: push %ebx;");
    asm("loc_6C0515D: mov %edi,%ecx;");
    asm("loc_6C0515F: mov %eax,(%ebx);");
    asm("loc_6C05161: call _sub_6BEBEB0;");
    asm("loc_6C05166: test %eax,%eax;");
    asm("loc_6C05168: mov %eax,0x1C(%edi);");
    asm("loc_6C0516B: je loc_6C05179;");
    asm("loc_6C0516D: pop %edi;");
    asm("loc_6C0516E: pop %esi;");
    asm("loc_6C0516F: pop %ebp;");
    asm("loc_6C05170: mov $0x17,%eax;");
    asm("loc_6C05175: pop %ebx;");
    asm("loc_6C05176: ret $0xC;");
    asm("loc_6C05179: mov (%esi),%edx;");
    asm("loc_6C0517B: mov 0x1C(%esp),%eax;");
    asm("loc_6C0517F: mov %edx,(%eax);");
    asm("loc_6C05181: mov 0xC(%edi),%ecx;");
    asm("loc_6C05184: push %ecx;");
    asm("loc_6C05185: call _sub_6BEC3B0;");
    asm("loc_6C0518A: mov %eax,%ecx;");
    asm("loc_6C0518C: mov 4(%ecx),%edx;");
    asm("loc_6C0518F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C05192: mov 0x14(%ecx),%eax;");
    asm("loc_6C05195: add $4,%esp;");
    asm("loc_6C05198: inc %edx;");
    asm("loc_6C05199: mov %edx,4(%ecx);");
    asm("loc_6C0519C: mov %edx,%edi;");
    asm("loc_6C0519E: mov (%esi),%edx;");
    asm("loc_6C051A0: add $2,%edx;");
    asm("loc_6C051A3: add %edx,%ebp;");
    asm("loc_6C051A5: mov %ebp,0x1C(%ecx);");
    asm("loc_6C051A8: mov (%esi),%esi;");
    asm("loc_6C051AA: add $2,%eax;");
    asm("loc_6C051AD: cmp %eax,%esi;");
    asm("loc_6C051AF: jbe loc_6C051B7;");
    asm("loc_6C051B1: add $2,%esi;");
    asm("loc_6C051B4: mov %esi,0x14(%ecx);");
    asm("loc_6C051B7: mov 0x1C(%ecx),%eax;");
    asm("loc_6C051BA: xor %edx,%edx;");
    asm("loc_6C051BC: div %edi;");
    asm("loc_6C051BE: mov %eax,0xC(%ecx);");
    asm("loc_6C051C1: xor %eax,%eax;");
    asm("loc_6C051C3: pop %edi;");
    asm("loc_6C051C4: pop %esi;");
    asm("loc_6C051C5: pop %ebp;");
    asm("loc_6C051C6: pop %ebx;");
    asm("loc_6C051C7: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C051D0() // _sub_6C051D0
{
    __DEBUG_ASM(6C051D0);
    // chunk 0x6C051D0 _sub_6C051D0
    asm("loc_6C051D0: mov 8(%esp),%eax;");
    asm("loc_6C051D4: push %ebx;");
    asm("loc_6C051D5: push %esi;");
    asm("loc_6C051D6: push %edi;");
    asm("loc_6C051D7: mov %ecx,%edi;");
    asm("loc_6C051D9: mov 0x10(%esp),%ecx;");
    asm("loc_6C051DD: lea 0x10(%edi),%esi;");
    asm("loc_6C051E0: mov %eax,4(%esi);");
    asm("loc_6C051E3: mov (%ecx),%edx;");
    asm("loc_6C051E5: mov %edx,8(%esi);");
    asm("loc_6C051E8: movl $0,(%esi);");
    asm("loc_6C051EE: movl $0,0xC(%esi);");
    asm("loc_6C051F5: mov 0x14(%edi),%eax;");
    asm("loc_6C051F8: push %esi;");
    asm("loc_6C051F9: push %eax;");
    asm("loc_6C051FA: lea 0x18(%edi),%ebx;");
    asm("loc_6C051FD: push %ebx;");
    asm("loc_6C051FE: mov %edi,%ecx;");
    asm("loc_6C05200: call _sub_6BEBE50;");
    asm("loc_6C05205: test %eax,%eax;");
    asm("loc_6C05207: mov %eax,0x1C(%edi);");
    asm("loc_6C0520A: je loc_6C05217;");
    asm("loc_6C0520C: pop %edi;");
    asm("loc_6C0520D: pop %esi;");
    asm("loc_6C0520E: mov $0x16,%eax;");
    asm("loc_6C05213: pop %ebx;");
    asm("loc_6C05214: ret $0xC;");
    asm("loc_6C05217: mov (%esi),%edx;");
    asm("loc_6C05219: mov 4(%esi),%ecx;");
    asm("loc_6C0521C: add $4,%edx;");
    asm("loc_6C0521F: mov %edx,%eax;");
    asm("loc_6C05221: cmp %ecx,%eax;");
    asm("loc_6C05223: mov %edx,(%esi);");
    asm("loc_6C05225: jbe loc_6C0522E;");
    asm("loc_6C05227: movl $0x16,0xC(%esi);");
    asm("loc_6C0522E: mov 0x1C(%edi),%eax;");
    asm("loc_6C05231: test %eax,%eax;");
    asm("loc_6C05233: je loc_6C05240;");
    asm("loc_6C05235: pop %edi;");
    asm("loc_6C05236: pop %esi;");
    asm("loc_6C05237: mov $0x16,%eax;");
    asm("loc_6C0523C: pop %ebx;");
    asm("loc_6C0523D: ret $0xC;");
    asm("loc_6C05240: mov (%ebx),%eax;");
    asm("loc_6C05242: mov 0x20(%edi),%ecx;");
    asm("loc_6C05245: mov %ecx,(%eax);");
    asm("loc_6C05247: add $4,%eax;");
    asm("loc_6C0524A: mov %eax,(%ebx);");
    asm("loc_6C0524C: mov (%esi),%edx;");
    asm("loc_6C0524E: mov 4(%esi),%ecx;");
    asm("loc_6C05251: add $4,%edx;");
    asm("loc_6C05254: mov %edx,%eax;");
    asm("loc_6C05256: cmp %ecx,%eax;");
    asm("loc_6C05258: mov %edx,(%esi);");
    asm("loc_6C0525A: jbe loc_6C05263;");
    asm("loc_6C0525C: movl $0x16,0xC(%esi);");
    asm("loc_6C05263: mov 0x1C(%edi),%eax;");
    asm("loc_6C05266: test %eax,%eax;");
    asm("loc_6C05268: je loc_6C05275;");
    asm("loc_6C0526A: pop %edi;");
    asm("loc_6C0526B: pop %esi;");
    asm("loc_6C0526C: mov $0x16,%eax;");
    asm("loc_6C05271: pop %ebx;");
    asm("loc_6C05272: ret $0xC;");
    asm("loc_6C05275: mov (%ebx),%eax;");
    asm("loc_6C05277: mov 0x24(%edi),%edx;");
    asm("loc_6C0527A: mov %edx,(%eax);");
    asm("loc_6C0527C: add $4,%eax;");
    asm("loc_6C0527F: mov %eax,(%ebx);");
    asm("loc_6C05281: mov 0x14(%edi),%eax;");
    asm("loc_6C05284: push %esi;");
    asm("loc_6C05285: push %eax;");
    asm("loc_6C05286: push %ebx;");
    asm("loc_6C05287: mov %edi,%ecx;");
    asm("loc_6C05289: call _sub_6BEBEA0;");
    asm("loc_6C0528E: test %eax,%eax;");
    asm("loc_6C05290: mov %eax,0x1C(%edi);");
    asm("loc_6C05293: je loc_6C052A0;");
    asm("loc_6C05295: pop %edi;");
    asm("loc_6C05296: pop %esi;");
    asm("loc_6C05297: mov $0x16,%eax;");
    asm("loc_6C0529C: pop %ebx;");
    asm("loc_6C0529D: ret $0xC;");
    asm("loc_6C052A0: mov (%esi),%ecx;");
    asm("loc_6C052A2: mov 0x18(%esp),%edx;");
    asm("loc_6C052A6: mov %ecx,(%edx);");
    asm("loc_6C052A8: mov 0xC(%edi),%eax;");
    asm("loc_6C052AB: push %eax;");
    asm("loc_6C052AC: call _sub_6BEC3B0;");
    asm("loc_6C052B1: mov %eax,%ecx;");
    asm("loc_6C052B3: mov (%ecx),%eax;");
    asm("loc_6C052B5: mov 0x18(%ecx),%ebx;");
    asm("loc_6C052B8: add $4,%esp;");
    asm("loc_6C052BB: inc %eax;");
    asm("loc_6C052BC: mov %eax,(%ecx);");
    asm("loc_6C052BE: mov (%esi),%edx;");
    asm("loc_6C052C0: add %edx,%ebx;");
    asm("loc_6C052C2: mov %eax,%edi;");
    asm("loc_6C052C4: mov 0x10(%ecx),%eax;");
    asm("loc_6C052C7: mov %ebx,0x18(%ecx);");
    asm("loc_6C052CA: mov (%esi),%esi;");
    asm("loc_6C052CC: cmp %eax,%esi;");
    asm("loc_6C052CE: jbe loc_6C052D3;");
    asm("loc_6C052D0: mov %esi,0x10(%ecx);");
    asm("loc_6C052D3: mov 0x18(%ecx),%eax;");
    asm("loc_6C052D6: xor %edx,%edx;");
    asm("loc_6C052D8: div %edi;");
    asm("loc_6C052DA: pop %edi;");
    asm("loc_6C052DB: pop %esi;");
    asm("loc_6C052DC: pop %ebx;");
    asm("loc_6C052DD: mov %eax,8(%ecx);");
    asm("loc_6C052E0: xor %eax,%eax;");
    asm("loc_6C052E2: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C052F0() // _sub_6C052F0
{
    __DEBUG_ASM(6C052F0);
    // chunk 0x6C052F0 _sub_6C052F0
    asm("loc_6C052F0: mov 4(%esp),%eax;");
    asm("loc_6C052F4: push %ebx;");
    asm("loc_6C052F5: push %ebp;");
    asm("loc_6C052F6: mov 0x10(%esp),%ebp;");
    asm("loc_6C052FA: push %esi;");
    asm("loc_6C052FB: push %edi;");
    asm("loc_6C052FC: mov %ecx,%edi;");
    asm("loc_6C052FE: lea 0x10(%edi),%esi;");
    asm("loc_6C05301: push %esi;");
    asm("loc_6C05302: push %ebp;");
    asm("loc_6C05303: lea 0x18(%edi),%ebx;");
    asm("loc_6C05306: push %ebx;");
    asm("loc_6C05307: mov %ebp,4(%esi);");
    asm("loc_6C0530A: mov %eax,8(%esi);");
    asm("loc_6C0530D: movl $0,(%esi);");
    asm("loc_6C05313: movl $0,0xC(%esi);");
    asm("loc_6C0531A: call _sub_6BEBE90;");
    asm("loc_6C0531F: test %eax,%eax;");
    asm("loc_6C05321: mov %eax,0x1C(%edi);");
    asm("loc_6C05324: je loc_6C05332;");
    asm("loc_6C05326: pop %edi;");
    asm("loc_6C05327: pop %esi;");
    asm("loc_6C05328: pop %ebp;");
    asm("loc_6C05329: mov $0x17,%eax;");
    asm("loc_6C0532E: pop %ebx;");
    asm("loc_6C0532F: ret $0xC;");
    asm("loc_6C05332: mov (%esi),%edx;");
    asm("loc_6C05334: mov 4(%esi),%ecx;");
    asm("loc_6C05337: add $4,%edx;");
    asm("loc_6C0533A: mov %edx,%eax;");
    asm("loc_6C0533C: cmp %ecx,%eax;");
    asm("loc_6C0533E: mov %edx,(%esi);");
    asm("loc_6C05340: jbe loc_6C05349;");
    asm("loc_6C05342: movl $0x17,0xC(%esi);");
    asm("loc_6C05349: mov 0x1C(%edi),%eax;");
    asm("loc_6C0534C: test %eax,%eax;");
    asm("loc_6C0534E: jne loc_6C053EF;");
    asm("loc_6C05354: mov (%ebx),%eax;");
    asm("loc_6C05356: mov (%eax),%ecx;");
    asm("loc_6C05358: add $4,%eax;");
    asm("loc_6C0535B: mov %eax,(%ebx);");
    asm("loc_6C0535D: mov %ecx,0x20(%edi);");
    asm("loc_6C05360: mov (%esi),%edx;");
    asm("loc_6C05362: mov 4(%esi),%ecx;");
    asm("loc_6C05365: add $4,%edx;");
    asm("loc_6C05368: mov %edx,%eax;");
    asm("loc_6C0536A: cmp %ecx,%eax;");
    asm("loc_6C0536C: mov %edx,(%esi);");
    asm("loc_6C0536E: jbe loc_6C05377;");
    asm("loc_6C05370: movl $0x17,0xC(%esi);");
    asm("loc_6C05377: mov 0x1C(%edi),%eax;");
    asm("loc_6C0537A: test %eax,%eax;");
    asm("loc_6C0537C: jne loc_6C053EF;");
    asm("loc_6C0537E: mov (%ebx),%eax;");
    asm("loc_6C05380: mov (%eax),%edx;");
    asm("loc_6C05382: push %esi;");
    asm("loc_6C05383: push %ebp;");
    asm("loc_6C05384: add $4,%eax;");
    asm("loc_6C05387: push %ebx;");
    asm("loc_6C05388: mov %edi,%ecx;");
    asm("loc_6C0538A: mov %edx,0x24(%edi);");
    asm("loc_6C0538D: mov %eax,(%ebx);");
    asm("loc_6C0538F: call _sub_6BEBEB0;");
    asm("loc_6C05394: test %eax,%eax;");
    asm("loc_6C05396: mov %eax,0x1C(%edi);");
    asm("loc_6C05399: je loc_6C053A7;");
    asm("loc_6C0539B: pop %edi;");
    asm("loc_6C0539C: pop %esi;");
    asm("loc_6C0539D: pop %ebp;");
    asm("loc_6C0539E: mov $0x17,%eax;");
    asm("loc_6C053A3: pop %ebx;");
    asm("loc_6C053A4: ret $0xC;");
    asm("loc_6C053A7: mov (%esi),%eax;");
    asm("loc_6C053A9: mov 0x1C(%esp),%ecx;");
    asm("loc_6C053AD: mov %eax,(%ecx);");
    asm("loc_6C053AF: mov 0xC(%edi),%edx;");
    asm("loc_6C053B2: push %edx;");
    asm("loc_6C053B3: call _sub_6BEC3B0;");
    asm("loc_6C053B8: mov %eax,%ecx;");
    asm("loc_6C053BA: mov 4(%ecx),%edi;");
    asm("loc_6C053BD: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C053C0: mov 0x14(%ecx),%edx;");
    asm("loc_6C053C3: add $4,%esp;");
    asm("loc_6C053C6: inc %edi;");
    asm("loc_6C053C7: mov %edi,4(%ecx);");
    asm("loc_6C053CA: mov (%esi),%eax;");
    asm("loc_6C053CC: add $2,%eax;");
    asm("loc_6C053CF: add %eax,%ebp;");
    asm("loc_6C053D1: mov %ebp,0x1C(%ecx);");
    asm("loc_6C053D4: mov (%esi),%esi;");
    asm("loc_6C053D6: add $2,%edx;");
    asm("loc_6C053D9: cmp %edx,%esi;");
    asm("loc_6C053DB: jbe loc_6C053E3;");
    asm("loc_6C053DD: add $2,%esi;");
    asm("loc_6C053E0: mov %esi,0x14(%ecx);");
    asm("loc_6C053E3: mov 0x1C(%ecx),%eax;");
    asm("loc_6C053E6: xor %edx,%edx;");
    asm("loc_6C053E8: div %edi;");
    asm("loc_6C053EA: mov %eax,0xC(%ecx);");
    asm("loc_6C053ED: xor %eax,%eax;");
    asm("loc_6C053EF: pop %edi;");
    asm("loc_6C053F0: pop %esi;");
    asm("loc_6C053F1: pop %ebp;");
    asm("loc_6C053F2: pop %ebx;");
    asm("loc_6C053F3: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05400() // _sub_6C05400
{
    __DEBUG_ASM(6C05400);
    // chunk 0x6C05400 _sub_6C05400
    asm("loc_6C05400: mov 8(%esp),%eax;");
    asm("loc_6C05404: push %ebx;");
    asm("loc_6C05405: push %esi;");
    asm("loc_6C05406: push %edi;");
    asm("loc_6C05407: mov %ecx,%edi;");
    asm("loc_6C05409: mov 0x10(%esp),%ecx;");
    asm("loc_6C0540D: lea 0x10(%edi),%esi;");
    asm("loc_6C05410: mov %eax,4(%esi);");
    asm("loc_6C05413: mov (%ecx),%edx;");
    asm("loc_6C05415: mov %edx,8(%esi);");
    asm("loc_6C05418: movl $0,(%esi);");
    asm("loc_6C0541E: movl $0,0xC(%esi);");
    asm("loc_6C05425: mov 0x14(%edi),%eax;");
    asm("loc_6C05428: push %esi;");
    asm("loc_6C05429: push %eax;");
    asm("loc_6C0542A: lea 0x18(%edi),%ebx;");
    asm("loc_6C0542D: push %ebx;");
    asm("loc_6C0542E: mov %edi,%ecx;");
    asm("loc_6C05430: call _sub_6BEBE50;");
    asm("loc_6C05435: test %eax,%eax;");
    asm("loc_6C05437: mov %eax,0x1C(%edi);");
    asm("loc_6C0543A: je loc_6C05447;");
    asm("loc_6C0543C: pop %edi;");
    asm("loc_6C0543D: pop %esi;");
    asm("loc_6C0543E: mov $0x16,%eax;");
    asm("loc_6C05443: pop %ebx;");
    asm("loc_6C05444: ret $0xC;");
    asm("loc_6C05447: mov (%esi),%edx;");
    asm("loc_6C05449: mov 4(%esi),%ecx;");
    asm("loc_6C0544C: add $4,%edx;");
    asm("loc_6C0544F: mov %edx,%eax;");
    asm("loc_6C05451: cmp %ecx,%eax;");
    asm("loc_6C05453: mov %edx,(%esi);");
    asm("loc_6C05455: jbe loc_6C0545E;");
    asm("loc_6C05457: movl $0x16,0xC(%esi);");
    asm("loc_6C0545E: mov 0x1C(%edi),%eax;");
    asm("loc_6C05461: test %eax,%eax;");
    asm("loc_6C05463: je loc_6C05470;");
    asm("loc_6C05465: pop %edi;");
    asm("loc_6C05466: pop %esi;");
    asm("loc_6C05467: mov $0x16,%eax;");
    asm("loc_6C0546C: pop %ebx;");
    asm("loc_6C0546D: ret $0xC;");
    asm("loc_6C05470: mov (%ebx),%eax;");
    asm("loc_6C05472: mov 0x20(%edi),%ecx;");
    asm("loc_6C05475: mov %ecx,(%eax);");
    asm("loc_6C05477: add $4,%eax;");
    asm("loc_6C0547A: mov %eax,(%ebx);");
    asm("loc_6C0547C: mov (%esi),%edx;");
    asm("loc_6C0547E: mov 4(%esi),%ecx;");
    asm("loc_6C05481: add $4,%edx;");
    asm("loc_6C05484: mov %edx,%eax;");
    asm("loc_6C05486: cmp %ecx,%eax;");
    asm("loc_6C05488: mov %edx,(%esi);");
    asm("loc_6C0548A: jbe loc_6C05493;");
    asm("loc_6C0548C: movl $0x16,0xC(%esi);");
    asm("loc_6C05493: mov 0x1C(%edi),%eax;");
    asm("loc_6C05496: test %eax,%eax;");
    asm("loc_6C05498: je loc_6C054A5;");
    asm("loc_6C0549A: pop %edi;");
    asm("loc_6C0549B: pop %esi;");
    asm("loc_6C0549C: mov $0x16,%eax;");
    asm("loc_6C054A1: pop %ebx;");
    asm("loc_6C054A2: ret $0xC;");
    asm("loc_6C054A5: mov (%ebx),%eax;");
    asm("loc_6C054A7: mov 0x24(%edi),%edx;");
    asm("loc_6C054AA: mov %edx,(%eax);");
    asm("loc_6C054AC: add $4,%eax;");
    asm("loc_6C054AF: mov %eax,(%ebx);");
    asm("loc_6C054B1: mov 0x14(%edi),%eax;");
    asm("loc_6C054B4: push %esi;");
    asm("loc_6C054B5: push %eax;");
    asm("loc_6C054B6: push %ebx;");
    asm("loc_6C054B7: mov %edi,%ecx;");
    asm("loc_6C054B9: call _sub_6BEBEA0;");
    asm("loc_6C054BE: test %eax,%eax;");
    asm("loc_6C054C0: mov %eax,0x1C(%edi);");
    asm("loc_6C054C3: je loc_6C054D0;");
    asm("loc_6C054C5: pop %edi;");
    asm("loc_6C054C6: pop %esi;");
    asm("loc_6C054C7: mov $0x16,%eax;");
    asm("loc_6C054CC: pop %ebx;");
    asm("loc_6C054CD: ret $0xC;");
    asm("loc_6C054D0: mov (%esi),%ecx;");
    asm("loc_6C054D2: mov 0x18(%esp),%edx;");
    asm("loc_6C054D6: mov %ecx,(%edx);");
    asm("loc_6C054D8: mov 0xC(%edi),%eax;");
    asm("loc_6C054DB: push %eax;");
    asm("loc_6C054DC: call _sub_6BEC3B0;");
    asm("loc_6C054E1: mov %eax,%ecx;");
    asm("loc_6C054E3: mov (%ecx),%eax;");
    asm("loc_6C054E5: mov 0x18(%ecx),%ebx;");
    asm("loc_6C054E8: add $4,%esp;");
    asm("loc_6C054EB: inc %eax;");
    asm("loc_6C054EC: mov %eax,(%ecx);");
    asm("loc_6C054EE: mov (%esi),%edx;");
    asm("loc_6C054F0: add %edx,%ebx;");
    asm("loc_6C054F2: mov %eax,%edi;");
    asm("loc_6C054F4: mov 0x10(%ecx),%eax;");
    asm("loc_6C054F7: mov %ebx,0x18(%ecx);");
    asm("loc_6C054FA: mov (%esi),%esi;");
    asm("loc_6C054FC: cmp %eax,%esi;");
    asm("loc_6C054FE: jbe loc_6C05503;");
    asm("loc_6C05500: mov %esi,0x10(%ecx);");
    asm("loc_6C05503: mov 0x18(%ecx),%eax;");
    asm("loc_6C05506: xor %edx,%edx;");
    asm("loc_6C05508: div %edi;");
    asm("loc_6C0550A: pop %edi;");
    asm("loc_6C0550B: pop %esi;");
    asm("loc_6C0550C: pop %ebx;");
    asm("loc_6C0550D: mov %eax,8(%ecx);");
    asm("loc_6C05510: xor %eax,%eax;");
    asm("loc_6C05512: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05520() // _sub_6C05520
{
    __DEBUG_ASM(6C05520);
    // chunk 0x6C05520 _sub_6C05520
    asm("loc_6C05520: mov 4(%esp),%eax;");
    asm("loc_6C05524: push %ebx;");
    asm("loc_6C05525: push %ebp;");
    asm("loc_6C05526: mov 0x10(%esp),%ebp;");
    asm("loc_6C0552A: push %esi;");
    asm("loc_6C0552B: push %edi;");
    asm("loc_6C0552C: mov %ecx,%edi;");
    asm("loc_6C0552E: lea 0x10(%edi),%esi;");
    asm("loc_6C05531: push %esi;");
    asm("loc_6C05532: push %ebp;");
    asm("loc_6C05533: lea 0x18(%edi),%ebx;");
    asm("loc_6C05536: push %ebx;");
    asm("loc_6C05537: mov %ebp,4(%esi);");
    asm("loc_6C0553A: mov %eax,8(%esi);");
    asm("loc_6C0553D: movl $0,(%esi);");
    asm("loc_6C05543: movl $0,0xC(%esi);");
    asm("loc_6C0554A: call _sub_6BEBE90;");
    asm("loc_6C0554F: test %eax,%eax;");
    asm("loc_6C05551: mov %eax,0x1C(%edi);");
    asm("loc_6C05554: je loc_6C05562;");
    asm("loc_6C05556: pop %edi;");
    asm("loc_6C05557: pop %esi;");
    asm("loc_6C05558: pop %ebp;");
    asm("loc_6C05559: mov $0x17,%eax;");
    asm("loc_6C0555E: pop %ebx;");
    asm("loc_6C0555F: ret $0xC;");
    asm("loc_6C05562: mov (%esi),%edx;");
    asm("loc_6C05564: mov 4(%esi),%ecx;");
    asm("loc_6C05567: add $4,%edx;");
    asm("loc_6C0556A: mov %edx,%eax;");
    asm("loc_6C0556C: cmp %ecx,%eax;");
    asm("loc_6C0556E: mov %edx,(%esi);");
    asm("loc_6C05570: jbe loc_6C05579;");
    asm("loc_6C05572: movl $0x17,0xC(%esi);");
    asm("loc_6C05579: mov 0x1C(%edi),%eax;");
    asm("loc_6C0557C: test %eax,%eax;");
    asm("loc_6C0557E: jne loc_6C0561F;");
    asm("loc_6C05584: mov (%ebx),%eax;");
    asm("loc_6C05586: mov (%eax),%ecx;");
    asm("loc_6C05588: add $4,%eax;");
    asm("loc_6C0558B: mov %eax,(%ebx);");
    asm("loc_6C0558D: mov %ecx,0x20(%edi);");
    asm("loc_6C05590: mov (%esi),%edx;");
    asm("loc_6C05592: mov 4(%esi),%ecx;");
    asm("loc_6C05595: add $4,%edx;");
    asm("loc_6C05598: mov %edx,%eax;");
    asm("loc_6C0559A: cmp %ecx,%eax;");
    asm("loc_6C0559C: mov %edx,(%esi);");
    asm("loc_6C0559E: jbe loc_6C055A7;");
    asm("loc_6C055A0: movl $0x17,0xC(%esi);");
    asm("loc_6C055A7: mov 0x1C(%edi),%eax;");
    asm("loc_6C055AA: test %eax,%eax;");
    asm("loc_6C055AC: jne loc_6C0561F;");
    asm("loc_6C055AE: mov (%ebx),%eax;");
    asm("loc_6C055B0: mov (%eax),%edx;");
    asm("loc_6C055B2: push %esi;");
    asm("loc_6C055B3: push %ebp;");
    asm("loc_6C055B4: add $4,%eax;");
    asm("loc_6C055B7: push %ebx;");
    asm("loc_6C055B8: mov %edi,%ecx;");
    asm("loc_6C055BA: mov %edx,0x24(%edi);");
    asm("loc_6C055BD: mov %eax,(%ebx);");
    asm("loc_6C055BF: call _sub_6BEBEB0;");
    asm("loc_6C055C4: test %eax,%eax;");
    asm("loc_6C055C6: mov %eax,0x1C(%edi);");
    asm("loc_6C055C9: je loc_6C055D7;");
    asm("loc_6C055CB: pop %edi;");
    asm("loc_6C055CC: pop %esi;");
    asm("loc_6C055CD: pop %ebp;");
    asm("loc_6C055CE: mov $0x17,%eax;");
    asm("loc_6C055D3: pop %ebx;");
    asm("loc_6C055D4: ret $0xC;");
    asm("loc_6C055D7: mov (%esi),%eax;");
    asm("loc_6C055D9: mov 0x1C(%esp),%ecx;");
    asm("loc_6C055DD: mov %eax,(%ecx);");
    asm("loc_6C055DF: mov 0xC(%edi),%edx;");
    asm("loc_6C055E2: push %edx;");
    asm("loc_6C055E3: call _sub_6BEC3B0;");
    asm("loc_6C055E8: mov %eax,%ecx;");
    asm("loc_6C055EA: mov 4(%ecx),%edi;");
    asm("loc_6C055ED: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C055F0: mov 0x14(%ecx),%edx;");
    asm("loc_6C055F3: add $4,%esp;");
    asm("loc_6C055F6: inc %edi;");
    asm("loc_6C055F7: mov %edi,4(%ecx);");
    asm("loc_6C055FA: mov (%esi),%eax;");
    asm("loc_6C055FC: add $2,%eax;");
    asm("loc_6C055FF: add %eax,%ebp;");
    asm("loc_6C05601: mov %ebp,0x1C(%ecx);");
    asm("loc_6C05604: mov (%esi),%esi;");
    asm("loc_6C05606: add $2,%edx;");
    asm("loc_6C05609: cmp %edx,%esi;");
    asm("loc_6C0560B: jbe loc_6C05613;");
    asm("loc_6C0560D: add $2,%esi;");
    asm("loc_6C05610: mov %esi,0x14(%ecx);");
    asm("loc_6C05613: mov 0x1C(%ecx),%eax;");
    asm("loc_6C05616: xor %edx,%edx;");
    asm("loc_6C05618: div %edi;");
    asm("loc_6C0561A: mov %eax,0xC(%ecx);");
    asm("loc_6C0561D: xor %eax,%eax;");
    asm("loc_6C0561F: pop %edi;");
    asm("loc_6C05620: pop %esi;");
    asm("loc_6C05621: pop %ebp;");
    asm("loc_6C05622: pop %ebx;");
    asm("loc_6C05623: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05630() // _sub_6C05630
{
    __DEBUG_ASM(6C05630);
    // chunk 0x6C05630 _sub_6C05630
    asm("loc_6C05630: mov _data_6C0E594,%eax;");
    asm("loc_6C05635: mov %eax,_data_6C14218;");
    asm("loc_6C0563A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05640() // _sub_6C05640
{
    __DEBUG_ASM(6C05640);
    // chunk 0x6C05640 _sub_6C05640
    asm("loc_6C05640: mov _data_6C0E594,%eax;");
    asm("loc_6C05645: mov %eax,_data_6C1421C;");
    asm("loc_6C0564A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05650() // _sub_6C05650
{
    __DEBUG_ASM(6C05650);
    // chunk 0x6C05650 _sub_6C05650
    asm("loc_6C05650: mov _data_6C0E598,%eax;");
    asm("loc_6C05655: mov %eax,_data_6C14214;");
    asm("loc_6C0565A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05660() // _sub_6C05660
{
    __DEBUG_ASM(6C05660);
    // chunk 0x6C05660 _sub_6C05660
    asm("loc_6C05660: mov 8(%esp),%eax;");
    asm("loc_6C05664: push %ebx;");
    asm("loc_6C05665: push %esi;");
    asm("loc_6C05666: push %edi;");
    asm("loc_6C05667: mov %ecx,%edi;");
    asm("loc_6C05669: mov 0x10(%esp),%ecx;");
    asm("loc_6C0566D: lea 0x10(%edi),%esi;");
    asm("loc_6C05670: mov %eax,4(%esi);");
    asm("loc_6C05673: mov (%ecx),%edx;");
    asm("loc_6C05675: mov %edx,8(%esi);");
    asm("loc_6C05678: movl $0,(%esi);");
    asm("loc_6C0567E: movl $0,0xC(%esi);");
    asm("loc_6C05685: mov 0x14(%edi),%eax;");
    asm("loc_6C05688: push %esi;");
    asm("loc_6C05689: push %eax;");
    asm("loc_6C0568A: lea 0x18(%edi),%ebx;");
    asm("loc_6C0568D: push %ebx;");
    asm("loc_6C0568E: mov %edi,%ecx;");
    asm("loc_6C05690: call _sub_6BEBE50;");
    asm("loc_6C05695: test %eax,%eax;");
    asm("loc_6C05697: mov %eax,0x1C(%edi);");
    asm("loc_6C0569A: je loc_6C056A7;");
    asm("loc_6C0569C: pop %edi;");
    asm("loc_6C0569D: pop %esi;");
    asm("loc_6C0569E: mov $0x16,%eax;");
    asm("loc_6C056A3: pop %ebx;");
    asm("loc_6C056A4: ret $0xC;");
    asm("loc_6C056A7: mov (%esi),%edx;");
    asm("loc_6C056A9: mov 4(%esi),%ecx;");
    asm("loc_6C056AC: add $4,%edx;");
    asm("loc_6C056AF: mov %edx,%eax;");
    asm("loc_6C056B1: cmp %ecx,%eax;");
    asm("loc_6C056B3: mov %edx,(%esi);");
    asm("loc_6C056B5: jbe loc_6C056BE;");
    asm("loc_6C056B7: movl $0x16,0xC(%esi);");
    asm("loc_6C056BE: mov 0x1C(%edi),%eax;");
    asm("loc_6C056C1: test %eax,%eax;");
    asm("loc_6C056C3: je loc_6C056D0;");
    asm("loc_6C056C5: pop %edi;");
    asm("loc_6C056C6: pop %esi;");
    asm("loc_6C056C7: mov $0x16,%eax;");
    asm("loc_6C056CC: pop %ebx;");
    asm("loc_6C056CD: ret $0xC;");
    asm("loc_6C056D0: mov (%ebx),%eax;");
    asm("loc_6C056D2: mov 0x20(%edi),%ecx;");
    asm("loc_6C056D5: mov %ecx,(%eax);");
    asm("loc_6C056D7: add $4,%eax;");
    asm("loc_6C056DA: mov %eax,(%ebx);");
    asm("loc_6C056DC: mov (%esi),%edx;");
    asm("loc_6C056DE: mov 4(%esi),%ecx;");
    asm("loc_6C056E1: add $4,%edx;");
    asm("loc_6C056E4: mov %edx,%eax;");
    asm("loc_6C056E6: cmp %ecx,%eax;");
    asm("loc_6C056E8: mov %edx,(%esi);");
    asm("loc_6C056EA: jbe loc_6C056F3;");
    asm("loc_6C056EC: movl $0x16,0xC(%esi);");
    asm("loc_6C056F3: mov 0x1C(%edi),%eax;");
    asm("loc_6C056F6: test %eax,%eax;");
    asm("loc_6C056F8: je loc_6C05705;");
    asm("loc_6C056FA: pop %edi;");
    asm("loc_6C056FB: pop %esi;");
    asm("loc_6C056FC: mov $0x16,%eax;");
    asm("loc_6C05701: pop %ebx;");
    asm("loc_6C05702: ret $0xC;");
    asm("loc_6C05705: mov (%ebx),%eax;");
    asm("loc_6C05707: mov 0x24(%edi),%edx;");
    asm("loc_6C0570A: mov %edx,(%eax);");
    asm("loc_6C0570C: add $4,%eax;");
    asm("loc_6C0570F: mov %eax,(%ebx);");
    asm("loc_6C05711: mov (%esi),%edx;");
    asm("loc_6C05713: mov 4(%esi),%ecx;");
    asm("loc_6C05716: add $4,%edx;");
    asm("loc_6C05719: mov %edx,%eax;");
    asm("loc_6C0571B: cmp %ecx,%eax;");
    asm("loc_6C0571D: mov %edx,(%esi);");
    asm("loc_6C0571F: jbe loc_6C05728;");
    asm("loc_6C05721: movl $0x16,0xC(%esi);");
    asm("loc_6C05728: mov 0x1C(%edi),%eax;");
    asm("loc_6C0572B: test %eax,%eax;");
    asm("loc_6C0572D: je loc_6C0573A;");
    asm("loc_6C0572F: pop %edi;");
    asm("loc_6C05730: pop %esi;");
    asm("loc_6C05731: mov $0x16,%eax;");
    asm("loc_6C05736: pop %ebx;");
    asm("loc_6C05737: ret $0xC;");
    asm("loc_6C0573A: mov (%ebx),%eax;");
    asm("loc_6C0573C: mov 0x28(%edi),%ecx;");
    asm("loc_6C0573F: mov %ecx,(%eax);");
    asm("loc_6C05741: mov 0x14(%edi),%edx;");
    asm("loc_6C05744: push %esi;");
    asm("loc_6C05745: push %edx;");
    asm("loc_6C05746: add $4,%eax;");
    asm("loc_6C05749: push %ebx;");
    asm("loc_6C0574A: mov %edi,%ecx;");
    asm("loc_6C0574C: mov %eax,(%ebx);");
    asm("loc_6C0574E: call _sub_6BEBEA0;");
    asm("loc_6C05753: test %eax,%eax;");
    asm("loc_6C05755: mov %eax,0x1C(%edi);");
    asm("loc_6C05758: je loc_6C05765;");
    asm("loc_6C0575A: pop %edi;");
    asm("loc_6C0575B: pop %esi;");
    asm("loc_6C0575C: mov $0x16,%eax;");
    asm("loc_6C05761: pop %ebx;");
    asm("loc_6C05762: ret $0xC;");
    asm("loc_6C05765: mov (%esi),%eax;");
    asm("loc_6C05767: mov 0x18(%esp),%ecx;");
    asm("loc_6C0576B: mov %eax,(%ecx);");
    asm("loc_6C0576D: mov 0xC(%edi),%edx;");
    asm("loc_6C05770: push %edx;");
    asm("loc_6C05771: call _sub_6BEC3B0;");
    asm("loc_6C05776: mov %eax,%ecx;");
    asm("loc_6C05778: mov (%ecx),%edi;");
    asm("loc_6C0577A: mov 0x18(%ecx),%edx;");
    asm("loc_6C0577D: add $4,%esp;");
    asm("loc_6C05780: inc %edi;");
    asm("loc_6C05781: mov %edi,(%ecx);");
    asm("loc_6C05783: mov (%esi),%eax;");
    asm("loc_6C05785: add %eax,%edx;");
    asm("loc_6C05787: mov 0x10(%ecx),%eax;");
    asm("loc_6C0578A: mov %edx,0x18(%ecx);");
    asm("loc_6C0578D: mov (%esi),%esi;");
    asm("loc_6C0578F: cmp %eax,%esi;");
    asm("loc_6C05791: jbe loc_6C05796;");
    asm("loc_6C05793: mov %esi,0x10(%ecx);");
    asm("loc_6C05796: mov 0x18(%ecx),%eax;");
    asm("loc_6C05799: xor %edx,%edx;");
    asm("loc_6C0579B: div %edi;");
    asm("loc_6C0579D: pop %edi;");
    asm("loc_6C0579E: pop %esi;");
    asm("loc_6C0579F: pop %ebx;");
    asm("loc_6C057A0: mov %eax,8(%ecx);");
    asm("loc_6C057A3: xor %eax,%eax;");
    asm("loc_6C057A5: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C057B0() // _sub_6C057B0
{
    __DEBUG_ASM(6C057B0);
    // chunk 0x6C057B0 _sub_6C057B0
    asm("loc_6C057B0: mov 4(%esp),%eax;");
    asm("loc_6C057B4: push %ebx;");
    asm("loc_6C057B5: push %ebp;");
    asm("loc_6C057B6: mov 0x10(%esp),%ebp;");
    asm("loc_6C057BA: push %esi;");
    asm("loc_6C057BB: push %edi;");
    asm("loc_6C057BC: mov %ecx,%edi;");
    asm("loc_6C057BE: lea 0x10(%edi),%esi;");
    asm("loc_6C057C1: push %esi;");
    asm("loc_6C057C2: push %ebp;");
    asm("loc_6C057C3: lea 0x18(%edi),%ebx;");
    asm("loc_6C057C6: push %ebx;");
    asm("loc_6C057C7: mov %ebp,4(%esi);");
    asm("loc_6C057CA: mov %eax,8(%esi);");
    asm("loc_6C057CD: movl $0,(%esi);");
    asm("loc_6C057D3: movl $0,0xC(%esi);");
    asm("loc_6C057DA: call _sub_6BEBE90;");
    asm("loc_6C057DF: test %eax,%eax;");
    asm("loc_6C057E1: mov %eax,0x1C(%edi);");
    asm("loc_6C057E4: je loc_6C057F2;");
    asm("loc_6C057E6: pop %edi;");
    asm("loc_6C057E7: pop %esi;");
    asm("loc_6C057E8: pop %ebp;");
    asm("loc_6C057E9: mov $0x17,%eax;");
    asm("loc_6C057EE: pop %ebx;");
    asm("loc_6C057EF: ret $0xC;");
    asm("loc_6C057F2: mov (%esi),%edx;");
    asm("loc_6C057F4: mov 4(%esi),%ecx;");
    asm("loc_6C057F7: add $4,%edx;");
    asm("loc_6C057FA: mov %edx,%eax;");
    asm("loc_6C057FC: cmp %ecx,%eax;");
    asm("loc_6C057FE: mov %edx,(%esi);");
    asm("loc_6C05800: mov $0x17,%ecx;");
    asm("loc_6C05805: jbe loc_6C0580A;");
    asm("loc_6C05807: mov %ecx,0xC(%esi);");
    asm("loc_6C0580A: mov 0x1C(%edi),%eax;");
    asm("loc_6C0580D: test %eax,%eax;");
    asm("loc_6C0580F: jne loc_6C058D4;");
    asm("loc_6C05815: mov (%ebx),%eax;");
    asm("loc_6C05817: mov (%eax),%edx;");
    asm("loc_6C05819: add $4,%eax;");
    asm("loc_6C0581C: mov %eax,(%ebx);");
    asm("loc_6C0581E: mov %edx,0x20(%edi);");
    asm("loc_6C05821: mov (%esi),%eax;");
    asm("loc_6C05823: mov 4(%esi),%edx;");
    asm("loc_6C05826: add $4,%eax;");
    asm("loc_6C05829: cmp %edx,%eax;");
    asm("loc_6C0582B: mov %eax,(%esi);");
    asm("loc_6C0582D: jbe loc_6C05832;");
    asm("loc_6C0582F: mov %ecx,0xC(%esi);");
    asm("loc_6C05832: mov 0x1C(%edi),%eax;");
    asm("loc_6C05835: test %eax,%eax;");
    asm("loc_6C05837: jne loc_6C058D4;");
    asm("loc_6C0583D: mov (%ebx),%eax;");
    asm("loc_6C0583F: mov (%eax),%edx;");
    asm("loc_6C05841: add $4,%eax;");
    asm("loc_6C05844: mov %eax,(%ebx);");
    asm("loc_6C05846: mov %edx,0x24(%edi);");
    asm("loc_6C05849: mov (%esi),%eax;");
    asm("loc_6C0584B: mov 4(%esi),%edx;");
    asm("loc_6C0584E: add $4,%eax;");
    asm("loc_6C05851: cmp %edx,%eax;");
    asm("loc_6C05853: mov %eax,(%esi);");
    asm("loc_6C05855: jbe loc_6C0585A;");
    asm("loc_6C05857: mov %ecx,0xC(%esi);");
    asm("loc_6C0585A: mov 0x1C(%edi),%eax;");
    asm("loc_6C0585D: test %eax,%eax;");
    asm("loc_6C0585F: jne loc_6C058D4;");
    asm("loc_6C05861: mov (%ebx),%eax;");
    asm("loc_6C05863: mov (%eax),%ecx;");
    asm("loc_6C05865: push %esi;");
    asm("loc_6C05866: push %ebp;");
    asm("loc_6C05867: mov %ecx,0x28(%edi);");
    asm("loc_6C0586A: add $4,%eax;");
    asm("loc_6C0586D: push %ebx;");
    asm("loc_6C0586E: mov %edi,%ecx;");
    asm("loc_6C05870: mov %eax,(%ebx);");
    asm("loc_6C05872: call _sub_6BEBEB0;");
    asm("loc_6C05877: test %eax,%eax;");
    asm("loc_6C05879: mov %eax,0x1C(%edi);");
    asm("loc_6C0587C: je loc_6C0588A;");
    asm("loc_6C0587E: pop %edi;");
    asm("loc_6C0587F: pop %esi;");
    asm("loc_6C05880: pop %ebp;");
    asm("loc_6C05881: mov $0x17,%eax;");
    asm("loc_6C05886: pop %ebx;");
    asm("loc_6C05887: ret $0xC;");
    asm("loc_6C0588A: mov (%esi),%edx;");
    asm("loc_6C0588C: mov 0x1C(%esp),%eax;");
    asm("loc_6C05890: mov %edx,(%eax);");
    asm("loc_6C05892: mov 0xC(%edi),%ecx;");
    asm("loc_6C05895: push %ecx;");
    asm("loc_6C05896: call _sub_6BEC3B0;");
    asm("loc_6C0589B: mov %eax,%ecx;");
    asm("loc_6C0589D: mov 4(%ecx),%edx;");
    asm("loc_6C058A0: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C058A3: mov 0x14(%ecx),%eax;");
    asm("loc_6C058A6: add $4,%esp;");
    asm("loc_6C058A9: inc %edx;");
    asm("loc_6C058AA: mov %edx,4(%ecx);");
    asm("loc_6C058AD: mov %edx,%edi;");
    asm("loc_6C058AF: mov (%esi),%edx;");
    asm("loc_6C058B1: add $2,%edx;");
    asm("loc_6C058B4: add %edx,%ebp;");
    asm("loc_6C058B6: mov %ebp,0x1C(%ecx);");
    asm("loc_6C058B9: mov (%esi),%esi;");
    asm("loc_6C058BB: add $2,%eax;");
    asm("loc_6C058BE: cmp %eax,%esi;");
    asm("loc_6C058C0: jbe loc_6C058C8;");
    asm("loc_6C058C2: add $2,%esi;");
    asm("loc_6C058C5: mov %esi,0x14(%ecx);");
    asm("loc_6C058C8: mov 0x1C(%ecx),%eax;");
    asm("loc_6C058CB: xor %edx,%edx;");
    asm("loc_6C058CD: div %edi;");
    asm("loc_6C058CF: mov %eax,0xC(%ecx);");
    asm("loc_6C058D2: xor %eax,%eax;");
    asm("loc_6C058D4: pop %edi;");
    asm("loc_6C058D5: pop %esi;");
    asm("loc_6C058D6: pop %ebp;");
    asm("loc_6C058D7: pop %ebx;");
    asm("loc_6C058D8: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C058E0() // _sub_6C058E0
{
    __DEBUG_ASM(6C058E0);
    // chunk 0x6C058E0 _sub_6C058E0
    asm("loc_6C058E0: mov _data_6C0E5A0,%eax;");
    asm("loc_6C058E5: mov %eax,_data_6C14228;");
    asm("loc_6C058EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C058F0() // _sub_6C058F0
{
    __DEBUG_ASM(6C058F0);
    // chunk 0x6C058F0 _sub_6C058F0
    asm("loc_6C058F0: mov _data_6C0E5A0,%eax;");
    asm("loc_6C058F5: mov %eax,_data_6C1422C;");
    asm("loc_6C058FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05900() // _sub_6C05900
{
    __DEBUG_ASM(6C05900);
    // chunk 0x6C05900 _sub_6C05900
    asm("loc_6C05900: mov _data_6C0E5A4,%eax;");
    asm("loc_6C05905: mov %eax,_data_6C14224;");
    asm("loc_6C0590A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05910() // _sub_6C05910
{
    __DEBUG_ASM(6C05910);
    // chunk 0x6C05910 _sub_6C05910
    asm("loc_6C05910: mov 8(%esp),%eax;");
    asm("loc_6C05914: push %ebx;");
    asm("loc_6C05915: push %esi;");
    asm("loc_6C05916: push %edi;");
    asm("loc_6C05917: mov %ecx,%edi;");
    asm("loc_6C05919: mov 0x10(%esp),%ecx;");
    asm("loc_6C0591D: lea 0x10(%edi),%esi;");
    asm("loc_6C05920: mov %eax,4(%esi);");
    asm("loc_6C05923: mov (%ecx),%edx;");
    asm("loc_6C05925: mov %edx,8(%esi);");
    asm("loc_6C05928: movl $0,(%esi);");
    asm("loc_6C0592E: movl $0,0xC(%esi);");
    asm("loc_6C05935: mov 0x14(%edi),%eax;");
    asm("loc_6C05938: push %esi;");
    asm("loc_6C05939: push %eax;");
    asm("loc_6C0593A: lea 0x18(%edi),%ebx;");
    asm("loc_6C0593D: push %ebx;");
    asm("loc_6C0593E: mov %edi,%ecx;");
    asm("loc_6C05940: call _sub_6BEBE50;");
    asm("loc_6C05945: test %eax,%eax;");
    asm("loc_6C05947: mov %eax,0x1C(%edi);");
    asm("loc_6C0594A: je loc_6C05957;");
    asm("loc_6C0594C: pop %edi;");
    asm("loc_6C0594D: pop %esi;");
    asm("loc_6C0594E: mov $0x16,%eax;");
    asm("loc_6C05953: pop %ebx;");
    asm("loc_6C05954: ret $0xC;");
    asm("loc_6C05957: mov (%esi),%edx;");
    asm("loc_6C05959: mov 4(%esi),%ecx;");
    asm("loc_6C0595C: add $4,%edx;");
    asm("loc_6C0595F: mov %edx,%eax;");
    asm("loc_6C05961: cmp %ecx,%eax;");
    asm("loc_6C05963: mov %edx,(%esi);");
    asm("loc_6C05965: jbe loc_6C0596E;");
    asm("loc_6C05967: movl $0x16,0xC(%esi);");
    asm("loc_6C0596E: mov 0x1C(%edi),%eax;");
    asm("loc_6C05971: test %eax,%eax;");
    asm("loc_6C05973: je loc_6C05980;");
    asm("loc_6C05975: pop %edi;");
    asm("loc_6C05976: pop %esi;");
    asm("loc_6C05977: mov $0x16,%eax;");
    asm("loc_6C0597C: pop %ebx;");
    asm("loc_6C0597D: ret $0xC;");
    asm("loc_6C05980: mov (%ebx),%eax;");
    asm("loc_6C05982: mov 0x20(%edi),%ecx;");
    asm("loc_6C05985: mov %ecx,(%eax);");
    asm("loc_6C05987: mov 0x14(%edi),%edx;");
    asm("loc_6C0598A: push %esi;");
    asm("loc_6C0598B: push %edx;");
    asm("loc_6C0598C: add $4,%eax;");
    asm("loc_6C0598F: push %ebx;");
    asm("loc_6C05990: mov %edi,%ecx;");
    asm("loc_6C05992: mov %eax,(%ebx);");
    asm("loc_6C05994: call _sub_6BEBEA0;");
    asm("loc_6C05999: test %eax,%eax;");
    asm("loc_6C0599B: mov %eax,0x1C(%edi);");
    asm("loc_6C0599E: je loc_6C059AB;");
    asm("loc_6C059A0: pop %edi;");
    asm("loc_6C059A1: pop %esi;");
    asm("loc_6C059A2: mov $0x16,%eax;");
    asm("loc_6C059A7: pop %ebx;");
    asm("loc_6C059A8: ret $0xC;");
    asm("loc_6C059AB: mov (%esi),%eax;");
    asm("loc_6C059AD: mov 0x18(%esp),%ecx;");
    asm("loc_6C059B1: mov %eax,(%ecx);");
    asm("loc_6C059B3: mov 0xC(%edi),%edx;");
    asm("loc_6C059B6: push %edx;");
    asm("loc_6C059B7: call _sub_6BEC3B0;");
    asm("loc_6C059BC: mov %eax,%ecx;");
    asm("loc_6C059BE: mov (%ecx),%edi;");
    asm("loc_6C059C0: mov 0x18(%ecx),%edx;");
    asm("loc_6C059C3: add $4,%esp;");
    asm("loc_6C059C6: inc %edi;");
    asm("loc_6C059C7: mov %edi,(%ecx);");
    asm("loc_6C059C9: mov (%esi),%eax;");
    asm("loc_6C059CB: add %eax,%edx;");
    asm("loc_6C059CD: mov 0x10(%ecx),%eax;");
    asm("loc_6C059D0: mov %edx,0x18(%ecx);");
    asm("loc_6C059D3: mov (%esi),%esi;");
    asm("loc_6C059D5: cmp %eax,%esi;");
    asm("loc_6C059D7: jbe loc_6C059DC;");
    asm("loc_6C059D9: mov %esi,0x10(%ecx);");
    asm("loc_6C059DC: mov 0x18(%ecx),%eax;");
    asm("loc_6C059DF: xor %edx,%edx;");
    asm("loc_6C059E1: div %edi;");
    asm("loc_6C059E3: pop %edi;");
    asm("loc_6C059E4: pop %esi;");
    asm("loc_6C059E5: pop %ebx;");
    asm("loc_6C059E6: mov %eax,8(%ecx);");
    asm("loc_6C059E9: xor %eax,%eax;");
    asm("loc_6C059EB: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C059F0() // _sub_6C059F0
{
    __DEBUG_ASM(6C059F0);
    // chunk 0x6C059F0 _sub_6C059F0
    asm("loc_6C059F0: mov 4(%esp),%eax;");
    asm("loc_6C059F4: push %ebx;");
    asm("loc_6C059F5: push %ebp;");
    asm("loc_6C059F6: mov 0x10(%esp),%ebp;");
    asm("loc_6C059FA: push %esi;");
    asm("loc_6C059FB: push %edi;");
    asm("loc_6C059FC: mov %ecx,%edi;");
    asm("loc_6C059FE: lea 0x10(%edi),%esi;");
    asm("loc_6C05A01: push %esi;");
    asm("loc_6C05A02: push %ebp;");
    asm("loc_6C05A03: lea 0x18(%edi),%ebx;");
    asm("loc_6C05A06: push %ebx;");
    asm("loc_6C05A07: mov %ebp,4(%esi);");
    asm("loc_6C05A0A: mov %eax,8(%esi);");
    asm("loc_6C05A0D: movl $0,(%esi);");
    asm("loc_6C05A13: movl $0,0xC(%esi);");
    asm("loc_6C05A1A: call _sub_6BEBE90;");
    asm("loc_6C05A1F: test %eax,%eax;");
    asm("loc_6C05A21: mov %eax,0x1C(%edi);");
    asm("loc_6C05A24: je loc_6C05A32;");
    asm("loc_6C05A26: pop %edi;");
    asm("loc_6C05A27: pop %esi;");
    asm("loc_6C05A28: pop %ebp;");
    asm("loc_6C05A29: mov $0x17,%eax;");
    asm("loc_6C05A2E: pop %ebx;");
    asm("loc_6C05A2F: ret $0xC;");
    asm("loc_6C05A32: mov (%esi),%edx;");
    asm("loc_6C05A34: mov 4(%esi),%ecx;");
    asm("loc_6C05A37: add $4,%edx;");
    asm("loc_6C05A3A: mov %edx,%eax;");
    asm("loc_6C05A3C: cmp %ecx,%eax;");
    asm("loc_6C05A3E: mov %edx,(%esi);");
    asm("loc_6C05A40: jbe loc_6C05A49;");
    asm("loc_6C05A42: movl $0x17,0xC(%esi);");
    asm("loc_6C05A49: mov 0x1C(%edi),%eax;");
    asm("loc_6C05A4C: test %eax,%eax;");
    asm("loc_6C05A4E: jne loc_6C05AC3;");
    asm("loc_6C05A50: mov (%ebx),%eax;");
    asm("loc_6C05A52: mov (%eax),%ecx;");
    asm("loc_6C05A54: push %esi;");
    asm("loc_6C05A55: push %ebp;");
    asm("loc_6C05A56: mov %ecx,0x20(%edi);");
    asm("loc_6C05A59: add $4,%eax;");
    asm("loc_6C05A5C: push %ebx;");
    asm("loc_6C05A5D: mov %edi,%ecx;");
    asm("loc_6C05A5F: mov %eax,(%ebx);");
    asm("loc_6C05A61: call _sub_6BEBEB0;");
    asm("loc_6C05A66: test %eax,%eax;");
    asm("loc_6C05A68: mov %eax,0x1C(%edi);");
    asm("loc_6C05A6B: je loc_6C05A79;");
    asm("loc_6C05A6D: pop %edi;");
    asm("loc_6C05A6E: pop %esi;");
    asm("loc_6C05A6F: pop %ebp;");
    asm("loc_6C05A70: mov $0x17,%eax;");
    asm("loc_6C05A75: pop %ebx;");
    asm("loc_6C05A76: ret $0xC;");
    asm("loc_6C05A79: mov (%esi),%edx;");
    asm("loc_6C05A7B: mov 0x1C(%esp),%eax;");
    asm("loc_6C05A7F: mov %edx,(%eax);");
    asm("loc_6C05A81: mov 0xC(%edi),%ecx;");
    asm("loc_6C05A84: push %ecx;");
    asm("loc_6C05A85: call _sub_6BEC3B0;");
    asm("loc_6C05A8A: mov %eax,%ecx;");
    asm("loc_6C05A8C: mov 4(%ecx),%edx;");
    asm("loc_6C05A8F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C05A92: mov 0x14(%ecx),%eax;");
    asm("loc_6C05A95: add $4,%esp;");
    asm("loc_6C05A98: inc %edx;");
    asm("loc_6C05A99: mov %edx,4(%ecx);");
    asm("loc_6C05A9C: mov %edx,%edi;");
    asm("loc_6C05A9E: mov (%esi),%edx;");
    asm("loc_6C05AA0: add $2,%edx;");
    asm("loc_6C05AA3: add %edx,%ebp;");
    asm("loc_6C05AA5: mov %ebp,0x1C(%ecx);");
    asm("loc_6C05AA8: mov (%esi),%esi;");
    asm("loc_6C05AAA: add $2,%eax;");
    asm("loc_6C05AAD: cmp %eax,%esi;");
    asm("loc_6C05AAF: jbe loc_6C05AB7;");
    asm("loc_6C05AB1: add $2,%esi;");
    asm("loc_6C05AB4: mov %esi,0x14(%ecx);");
    asm("loc_6C05AB7: mov 0x1C(%ecx),%eax;");
    asm("loc_6C05ABA: xor %edx,%edx;");
    asm("loc_6C05ABC: div %edi;");
    asm("loc_6C05ABE: mov %eax,0xC(%ecx);");
    asm("loc_6C05AC1: xor %eax,%eax;");
    asm("loc_6C05AC3: pop %edi;");
    asm("loc_6C05AC4: pop %esi;");
    asm("loc_6C05AC5: pop %ebp;");
    asm("loc_6C05AC6: pop %ebx;");
    asm("loc_6C05AC7: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05AD0() // _sub_6C05AD0
{
    __DEBUG_ASM(6C05AD0);
    // chunk 0x6C05AD0 _sub_6C05AD0
    asm("loc_6C05AD0: mov _data_6C0E5AC,%eax;");
    asm("loc_6C05AD5: mov %eax,_data_6C14238;");
    asm("loc_6C05ADA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05AE0() // _sub_6C05AE0
{
    __DEBUG_ASM(6C05AE0);
    // chunk 0x6C05AE0 _sub_6C05AE0
    asm("loc_6C05AE0: mov _data_6C0E5AC,%eax;");
    asm("loc_6C05AE5: mov %eax,_data_6C1423C;");
    asm("loc_6C05AEA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05AF0() // _sub_6C05AF0
{
    __DEBUG_ASM(6C05AF0);
    // chunk 0x6C05AF0 _sub_6C05AF0
    asm("loc_6C05AF0: mov _data_6C0E5B0,%eax;");
    asm("loc_6C05AF5: mov %eax,_data_6C14234;");
    asm("loc_6C05AFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05B00() // _sub_6C05B00
{
    __DEBUG_ASM(6C05B00);
    // chunk 0x6C05B00 _sub_6C05B00
    asm("loc_6C05B00: push %esi;");
    asm("loc_6C05B01: mov %ecx,%esi;");
    asm("loc_6C05B03: mov 0x60(%esi),%eax;");
    asm("loc_6C05B06: test %eax,%eax;");
    asm("loc_6C05B08: movl $_off_6C0DB10,(%esi);");
    asm("loc_6C05B0E: je loc_6C05B19;");
    asm("loc_6C05B10: push %eax;");
    asm("loc_6C05B11: call _sub_6C09AAA;");
    asm("loc_6C05B16: add $4,%esp;");
    asm("loc_6C05B19: mov 0x88(%esi),%eax;");
    asm("loc_6C05B1F: test %eax,%eax;");
    asm("loc_6C05B21: je loc_6C05B2C;");
    asm("loc_6C05B23: push %eax;");
    asm("loc_6C05B24: call _sub_6C09AAA;");
    asm("loc_6C05B29: add $4,%esp;");
    asm("loc_6C05B2C: mov 0x8C(%esi),%eax;");
    asm("loc_6C05B32: test %eax,%eax;");
    asm("loc_6C05B34: je loc_6C05B3F;");
    asm("loc_6C05B36: push %eax;");
    asm("loc_6C05B37: call _sub_6C09AAA;");
    asm("loc_6C05B3C: add $4,%esp;");
    asm("loc_6C05B3F: mov 0x84(%esi),%eax;");
    asm("loc_6C05B45: test %eax,%eax;");
    asm("loc_6C05B47: je loc_6C05B52;");
    asm("loc_6C05B49: push %eax;");
    asm("loc_6C05B4A: call _sub_6C09AAA;");
    asm("loc_6C05B4F: add $4,%esp;");
    asm("loc_6C05B52: mov %esi,%ecx;");
    asm("loc_6C05B54: pop %esi;");
    asm("loc_6C05B55: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05B60() // _sub_6C05B60
{
    __DEBUG_ASM(6C05B60);
    // chunk 0x6C05B60 _sub_6C05B60
    asm("loc_6C05B60: mov 8(%esp),%eax;");
    asm("loc_6C05B64: test %eax,%eax;");
    asm("loc_6C05B66: push %ebp;");
    asm("loc_6C05B67: mov %ecx,%ebp;");
    asm("loc_6C05B69: jbe loc_6C05B9C;");
    asm("loc_6C05B6B: push %ebx;");
    asm("loc_6C05B6C: push %esi;");
    asm("loc_6C05B6D: lea 1(%eax),%ebx;");
    asm("loc_6C05B70: push %edi;");
    asm("loc_6C05B71: lea (%ebx,%ebx),%esi;");
    asm("loc_6C05B74: push %esi;");
    asm("loc_6C05B75: call _sub_6C09D26;");
    asm("loc_6C05B7A: mov %esi,%ecx;");
    asm("loc_6C05B7C: mov 0x18(%esp),%esi;");
    asm("loc_6C05B80: mov %eax,0x60(%ebp);");
    asm("loc_6C05B83: mov %eax,%edi;");
    asm("loc_6C05B85: mov %ecx,%eax;");
    asm("loc_6C05B87: shr $2,%ecx;");
    asm("loc_6C05B8A: rep movsl (%esi),(%edi);");
    asm("loc_6C05B8C: add $4,%esp;");
    asm("loc_6C05B8F: mov %eax,%ecx;");
    asm("loc_6C05B91: and $3,%ecx;");
    asm("loc_6C05B94: rep movsb (%esi),(%edi);");
    asm("loc_6C05B96: pop %edi;");
    asm("loc_6C05B97: pop %esi;");
    asm("loc_6C05B98: mov %ebx,0x64(%ebp);");
    asm("loc_6C05B9B: pop %ebx;");
    asm("loc_6C05B9C: pop %ebp;");
    asm("loc_6C05B9D: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05BA0() // _sub_6C05BA0
{
    __DEBUG_ASM(6C05BA0);
    // chunk 0x6C05BA0 _sub_6C05BA0
    asm("loc_6C05BA0: mov 8(%esp),%eax;");
    asm("loc_6C05BA4: test %eax,%eax;");
    asm("loc_6C05BA6: push %ebp;");
    asm("loc_6C05BA7: mov %ecx,%ebp;");
    asm("loc_6C05BA9: jbe loc_6C05BDC;");
    asm("loc_6C05BAB: push %ebx;");
    asm("loc_6C05BAC: push %esi;");
    asm("loc_6C05BAD: lea 1(%eax),%ebx;");
    asm("loc_6C05BB0: push %edi;");
    asm("loc_6C05BB1: push %ebx;");
    asm("loc_6C05BB2: call _sub_6C09D26;");
    asm("loc_6C05BB7: mov 0x18(%esp),%esi;");
    asm("loc_6C05BBB: mov %eax,0x88(%ebp);");
    asm("loc_6C05BC1: mov %ebx,%ecx;");
    asm("loc_6C05BC3: mov %eax,%edi;");
    asm("loc_6C05BC5: mov %ecx,%eax;");
    asm("loc_6C05BC7: shr $2,%ecx;");
    asm("loc_6C05BCA: rep movsl (%esi),(%edi);");
    asm("loc_6C05BCC: add $4,%esp;");
    asm("loc_6C05BCF: mov %eax,%ecx;");
    asm("loc_6C05BD1: and $3,%ecx;");
    asm("loc_6C05BD4: rep movsb (%esi),(%edi);");
    asm("loc_6C05BD6: pop %edi;");
    asm("loc_6C05BD7: pop %esi;");
    asm("loc_6C05BD8: mov %ebx,0x68(%ebp);");
    asm("loc_6C05BDB: pop %ebx;");
    asm("loc_6C05BDC: pop %ebp;");
    asm("loc_6C05BDD: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05BE0() // _sub_6C05BE0
{
    __DEBUG_ASM(6C05BE0);
    // chunk 0x6C05BE0 _sub_6C05BE0
    asm("loc_6C05BE0: mov 8(%esp),%eax;");
    asm("loc_6C05BE4: test %eax,%eax;");
    asm("loc_6C05BE6: push %ebp;");
    asm("loc_6C05BE7: mov %ecx,%ebp;");
    asm("loc_6C05BE9: jbe loc_6C05C1C;");
    asm("loc_6C05BEB: push %ebx;");
    asm("loc_6C05BEC: push %esi;");
    asm("loc_6C05BED: lea 1(%eax),%ebx;");
    asm("loc_6C05BF0: push %edi;");
    asm("loc_6C05BF1: push %ebx;");
    asm("loc_6C05BF2: call _sub_6C09D26;");
    asm("loc_6C05BF7: mov 0x18(%esp),%esi;");
    asm("loc_6C05BFB: mov %eax,0x8C(%ebp);");
    asm("loc_6C05C01: mov %ebx,%ecx;");
    asm("loc_6C05C03: mov %eax,%edi;");
    asm("loc_6C05C05: mov %ecx,%eax;");
    asm("loc_6C05C07: shr $2,%ecx;");
    asm("loc_6C05C0A: rep movsl (%esi),(%edi);");
    asm("loc_6C05C0C: add $4,%esp;");
    asm("loc_6C05C0F: mov %eax,%ecx;");
    asm("loc_6C05C11: and $3,%ecx;");
    asm("loc_6C05C14: rep movsb (%esi),(%edi);");
    asm("loc_6C05C16: pop %edi;");
    asm("loc_6C05C17: pop %esi;");
    asm("loc_6C05C18: mov %ebx,0x6C(%ebp);");
    asm("loc_6C05C1B: pop %ebx;");
    asm("loc_6C05C1C: pop %ebp;");
    asm("loc_6C05C1D: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05C20() // _sub_6C05C20
{
    __DEBUG_ASM(6C05C20);
    // chunk 0x6C05C20 _sub_6C05C20
    asm("loc_6C05C20: mov 4(%esp),%eax;");
    asm("loc_6C05C24: push %ebx;");
    asm("loc_6C05C25: mov %ecx,%ebx;");
    asm("loc_6C05C27: mov 4(%eax),%ecx;");
    asm("loc_6C05C2A: mov %ecx,0x74(%ebx);");
    asm("loc_6C05C2D: mov (%eax),%edx;");
    asm("loc_6C05C2F: mov %edx,0x70(%ebx);");
    asm("loc_6C05C32: mov 8(%eax),%ecx;");
    asm("loc_6C05C35: mov %ecx,0x78(%ebx);");
    asm("loc_6C05C38: mov 0xC(%eax),%edx;");
    asm("loc_6C05C3B: mov %edx,0x7C(%ebx);");
    asm("loc_6C05C3E: mov 0x10(%eax),%eax;");
    asm("loc_6C05C41: test %eax,%eax;");
    asm("loc_6C05C43: mov %eax,0x80(%ebx);");
    asm("loc_6C05C49: jbe loc_6C05C7C;");
    asm("loc_6C05C4B: push %esi;");
    asm("loc_6C05C4C: shl $2,%eax;");
    asm("loc_6C05C4F: push %edi;");
    asm("loc_6C05C50: push %eax;");
    asm("loc_6C05C51: call _sub_6C09D26;");
    asm("loc_6C05C56: mov 0x80(%ebx),%ecx;");
    asm("loc_6C05C5C: shl $2,%ecx;");
    asm("loc_6C05C5F: mov %ecx,%edx;");
    asm("loc_6C05C61: shr $2,%ecx;");
    asm("loc_6C05C64: mov %eax,0x84(%ebx);");
    asm("loc_6C05C6A: mov %eax,%esi;");
    asm("loc_6C05C6C: mov %eax,%edi;");
    asm("loc_6C05C6E: rep movsl (%esi),(%edi);");
    asm("loc_6C05C70: add $4,%esp;");
    asm("loc_6C05C73: mov %edx,%ecx;");
    asm("loc_6C05C75: and $3,%ecx;");
    asm("loc_6C05C78: rep movsb (%esi),(%edi);");
    asm("loc_6C05C7A: pop %edi;");
    asm("loc_6C05C7B: pop %esi;");
    asm("loc_6C05C7C: pop %ebx;");
    asm("loc_6C05C7D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C05C80() // _sub_6C05C80
{
    __DEBUG_ASM(6C05C80);
    // chunk 0x6C05C80 _sub_6C05C80
    asm("loc_6C05C80: mov 8(%esp),%eax;");
    asm("loc_6C05C84: sub $0x10,%esp;");
    asm("loc_6C05C87: push %ebx;");
    asm("loc_6C05C88: push %ebp;");
    asm("loc_6C05C89: mov %ecx,%ebp;");
    asm("loc_6C05C8B: mov 0x1C(%esp),%ecx;");
    asm("loc_6C05C8F: lea 0x10(%ebp),%ebx;");
    asm("loc_6C05C92: push %esi;");
    asm("loc_6C05C93: mov %eax,4(%ebx);");
    asm("loc_6C05C96: mov (%ecx),%edx;");
    asm("loc_6C05C98: push %edi;");
    asm("loc_6C05C99: mov %edx,8(%ebx);");
    asm("loc_6C05C9C: movl $0,(%ebx);");
    asm("loc_6C05CA2: movl $0,0xC(%ebx);");
    asm("loc_6C05CA9: mov 0x14(%ebp),%eax;");
    asm("loc_6C05CAC: push %ebx;");
    asm("loc_6C05CAD: push %eax;");
    asm("loc_6C05CAE: lea 0x18(%ebp),%esi;");
    asm("loc_6C05CB1: push %esi;");
    asm("loc_6C05CB2: mov %ebp,%ecx;");
    asm("loc_6C05CB4: call _sub_6BEBE50;");
    asm("loc_6C05CB9: mov %eax,0x1C(%ebp);");
    asm("loc_6C05CBC: test %eax,%eax;");
    asm("loc_6C05CBE: mov $0x16,%eax;");
    asm("loc_6C05CC3: jne loc_6C0623F;");
    asm("loc_6C05CC9: mov (%ebx),%edi;");
    asm("loc_6C05CCB: mov 4(%ebx),%edx;");
    asm("loc_6C05CCE: add $4,%edi;");
    asm("loc_6C05CD1: mov %edi,%ecx;");
    asm("loc_6C05CD3: cmp %edx,%ecx;");
    asm("loc_6C05CD5: mov %edi,(%ebx);");
    asm("loc_6C05CD7: jbe loc_6C05CDC;");
    asm("loc_6C05CD9: mov %eax,0xC(%ebx);");
    asm("loc_6C05CDC: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C05CDF: test %ecx,%ecx;");
    asm("loc_6C05CE1: jne loc_6C0623F;");
    asm("loc_6C05CE7: mov (%esi),%ecx;");
    asm("loc_6C05CE9: mov 0x20(%ebp),%edx;");
    asm("loc_6C05CEC: mov %edx,(%ecx);");
    asm("loc_6C05CEE: add $4,%ecx;");
    asm("loc_6C05CF1: mov %ecx,(%esi);");
    asm("loc_6C05CF3: mov (%ebx),%edi;");
    asm("loc_6C05CF5: mov 4(%ebx),%edx;");
    asm("loc_6C05CF8: add $4,%edi;");
    asm("loc_6C05CFB: mov %edi,%ecx;");
    asm("loc_6C05CFD: cmp %edx,%ecx;");
    asm("loc_6C05CFF: mov %edi,(%ebx);");
    asm("loc_6C05D01: jbe loc_6C05D06;");
    asm("loc_6C05D03: mov %eax,0xC(%ebx);");
    asm("loc_6C05D06: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C05D09: test %ecx,%ecx;");
    asm("loc_6C05D0B: jne loc_6C0623F;");
    asm("loc_6C05D11: mov (%esi),%ecx;");
    asm("loc_6C05D13: mov 0x24(%ebp),%edx;");
    asm("loc_6C05D16: mov %edx,(%ecx);");
    asm("loc_6C05D18: add $4,%ecx;");
    asm("loc_6C05D1B: mov %ecx,(%esi);");
    asm("loc_6C05D1D: mov (%ebx),%edi;");
    asm("loc_6C05D1F: mov 4(%ebx),%edx;");
    asm("loc_6C05D22: add $4,%edi;");
    asm("loc_6C05D25: mov %edi,%ecx;");
    asm("loc_6C05D27: cmp %edx,%ecx;");
    asm("loc_6C05D29: mov %edi,(%ebx);");
    asm("loc_6C05D2B: jbe loc_6C05D30;");
    asm("loc_6C05D2D: mov %eax,0xC(%ebx);");
    asm("loc_6C05D30: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C05D33: test %ecx,%ecx;");
    asm("loc_6C05D35: jne loc_6C0623F;");
    asm("loc_6C05D3B: mov (%esi),%ecx;");
    asm("loc_6C05D3D: mov 0x28(%ebp),%edx;");
    asm("loc_6C05D40: mov %edx,(%ecx);");
    asm("loc_6C05D42: add $4,%ecx;");
    asm("loc_6C05D45: mov %ecx,(%esi);");
    asm("loc_6C05D47: mov (%ebx),%edi;");
    asm("loc_6C05D49: mov 4(%ebx),%edx;");
    asm("loc_6C05D4C: add $4,%edi;");
    asm("loc_6C05D4F: mov %edi,%ecx;");
    asm("loc_6C05D51: cmp %edx,%ecx;");
    asm("loc_6C05D53: mov %edi,(%ebx);");
    asm("loc_6C05D55: jbe loc_6C05D5A;");
    asm("loc_6C05D57: mov %eax,0xC(%ebx);");
    asm("loc_6C05D5A: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C05D5D: test %ecx,%ecx;");
    asm("loc_6C05D5F: jne loc_6C0623F;");
    asm("loc_6C05D65: mov (%esi),%ecx;");
    asm("loc_6C05D67: mov 0x2C(%ebp),%edx;");
    asm("loc_6C05D6A: mov %edx,(%ecx);");
    asm("loc_6C05D6C: add $4,%ecx;");
    asm("loc_6C05D6F: mov %ecx,(%esi);");
    asm("loc_6C05D71: mov (%ebx),%edi;");
    asm("loc_6C05D73: mov 4(%ebx),%edx;");
    asm("loc_6C05D76: add $4,%edi;");
    asm("loc_6C05D79: mov %edi,%ecx;");
    asm("loc_6C05D7B: cmp %edx,%ecx;");
    asm("loc_6C05D7D: mov %edi,(%ebx);");
    asm("loc_6C05D7F: jbe loc_6C05D84;");
    asm("loc_6C05D81: mov %eax,0xC(%ebx);");
    asm("loc_6C05D84: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C05D87: test %ecx,%ecx;");
    asm("loc_6C05D89: jne loc_6C0623F;");
    asm("loc_6C05D8F: mov (%esi),%ecx;");
    asm("loc_6C05D91: mov 0x30(%ebp),%edx;");
    asm("loc_6C05D94: mov %edx,(%ecx);");
    asm("loc_6C05D96: add $4,%ecx;");
    asm("loc_6C05D99: mov %ecx,(%esi);");
    asm("loc_6C05D9B: mov (%ebx),%edi;");
    asm("loc_6C05D9D: mov 4(%ebx),%edx;");
    asm("loc_6C05DA0: add $0xC,%edi;");
    asm("loc_6C05DA3: mov %edi,%ecx;");
    asm("loc_6C05DA5: cmp %edx,%ecx;");
    asm("loc_6C05DA7: mov %edi,(%ebx);");
    asm("loc_6C05DA9: jbe loc_6C05DAE;");
    asm("loc_6C05DAB: mov %eax,0xC(%ebx);");
    asm("loc_6C05DAE: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C05DB1: test %ecx,%ecx;");
    asm("loc_6C05DB3: jne loc_6C0623F;");
    asm("loc_6C05DB9: mov 0x34(%ebp),%eax;");
    asm("loc_6C05DBC: mov 0x38(%ebp),%ecx;");
    asm("loc_6C05DBF: mov (%esi),%edi;");
    asm("loc_6C05DC1: mov 0x3C(%ebp),%edx;");
    asm("loc_6C05DC4: mov %eax,0x10(%esp);");
    asm("loc_6C05DC8: lea 0x10(%esp),%eax;");
    asm("loc_6C05DCC: mov %ecx,0x14(%esp);");
    asm("loc_6C05DD0: push %eax;");
    asm("loc_6C05DD1: mov %edi,%ecx;");
    asm("loc_6C05DD3: mov %edx,0x1C(%esp);");
    asm("loc_6C05DD7: call _sub_6BDA4C0;");
    asm("loc_6C05DDC: add $0xC,%edi;");
    asm("loc_6C05DDF: mov %edi,(%esi);");
    asm("loc_6C05DE1: mov (%ebx),%edx;");
    asm("loc_6C05DE3: mov 4(%ebx),%ecx;");
    asm("loc_6C05DE6: add $0xC,%edx;");
    asm("loc_6C05DE9: mov %edx,%eax;");
    asm("loc_6C05DEB: cmp %ecx,%eax;");
    asm("loc_6C05DED: mov %edx,(%ebx);");
    asm("loc_6C05DEF: jbe loc_6C05DF8;");
    asm("loc_6C05DF1: movl $0x16,0xC(%ebx);");
    asm("loc_6C05DF8: mov 0x1C(%ebp),%eax;");
    asm("loc_6C05DFB: test %eax,%eax;");
    asm("loc_6C05DFD: je loc_6C05E0E;");
    asm("loc_6C05DFF: pop %edi;");
    asm("loc_6C05E00: pop %esi;");
    asm("loc_6C05E01: pop %ebp;");
    asm("loc_6C05E02: mov $0x16,%eax;");
    asm("loc_6C05E07: pop %ebx;");
    asm("loc_6C05E08: add $0x10,%esp;");
    asm("loc_6C05E0B: ret $0xC;");
    asm("loc_6C05E0E: mov 0x40(%ebp),%ecx;");
    asm("loc_6C05E11: mov (%esi),%edi;");
    asm("loc_6C05E13: mov 0x44(%ebp),%edx;");
    asm("loc_6C05E16: mov 0x48(%ebp),%eax;");
    asm("loc_6C05E19: mov %ecx,0x10(%esp);");
    asm("loc_6C05E1D: lea 0x10(%esp),%ecx;");
    asm("loc_6C05E21: push %ecx;");
    asm("loc_6C05E22: mov %edi,%ecx;");
    asm("loc_6C05E24: mov %edx,0x18(%esp);");
    asm("loc_6C05E28: mov %eax,0x1C(%esp);");
    asm("loc_6C05E2C: call _sub_6BDA4C0;");
    asm("loc_6C05E31: add $0xC,%edi;");
    asm("loc_6C05E34: mov %edi,(%esi);");
    asm("loc_6C05E36: mov (%ebx),%edx;");
    asm("loc_6C05E38: mov 4(%ebx),%ecx;");
    asm("loc_6C05E3B: add $0x10,%edx;");
    asm("loc_6C05E3E: mov %edx,%eax;");
    asm("loc_6C05E40: cmp %ecx,%eax;");
    asm("loc_6C05E42: mov %edx,(%ebx);");
    asm("loc_6C05E44: jbe loc_6C05E4D;");
    asm("loc_6C05E46: movl $0x16,0xC(%ebx);");
    asm("loc_6C05E4D: mov 0x1C(%ebp),%eax;");
    asm("loc_6C05E50: test %eax,%eax;");
    asm("loc_6C05E52: je loc_6C05E63;");
    asm("loc_6C05E54: pop %edi;");
    asm("loc_6C05E55: pop %esi;");
    asm("loc_6C05E56: pop %ebp;");
    asm("loc_6C05E57: mov $0x16,%eax;");
    asm("loc_6C05E5C: pop %ebx;");
    asm("loc_6C05E5D: add $0x10,%esp;");
    asm("loc_6C05E60: ret $0xC;");
    asm("loc_6C05E63: mov (%esi),%edi;");
    asm("loc_6C05E65: lea 0x4C(%ebp),%edx;");
    asm("loc_6C05E68: mov (%edx),%eax;");
    asm("loc_6C05E6A: mov 4(%edx),%ecx;");
    asm("loc_6C05E6D: mov %eax,0x10(%esp);");
    asm("loc_6C05E71: mov 8(%edx),%eax;");
    asm("loc_6C05E74: mov %ecx,0x14(%esp);");
    asm("loc_6C05E78: mov 0xC(%edx),%ecx;");
    asm("loc_6C05E7B: lea 0x10(%esp),%edx;");
    asm("loc_6C05E7F: mov %ecx,0x1C(%esp);");
    asm("loc_6C05E83: push %edx;");
    asm("loc_6C05E84: mov %edi,%ecx;");
    asm("loc_6C05E86: mov %eax,0x1C(%esp);");
    asm("loc_6C05E8A: call _sub_6BDA220;");
    asm("loc_6C05E8F: add $0x10,%edi;");
    asm("loc_6C05E92: mov %edi,(%esi);");
    asm("loc_6C05E94: mov (%ebx),%edx;");
    asm("loc_6C05E96: mov 4(%ebx),%ecx;");
    asm("loc_6C05E99: add $4,%edx;");
    asm("loc_6C05E9C: mov %edx,%eax;");
    asm("loc_6C05E9E: cmp %ecx,%eax;");
    asm("loc_6C05EA0: mov %edx,(%ebx);");
    asm("loc_6C05EA2: mov $0x16,%ecx;");
    asm("loc_6C05EA7: jbe loc_6C05EAC;");
    asm("loc_6C05EA9: mov %ecx,0xC(%ebx);");
    asm("loc_6C05EAC: mov 0x1C(%ebp),%eax;");
    asm("loc_6C05EAF: test %eax,%eax;");
    asm("loc_6C05EB1: je loc_6C05EBF;");
    asm("loc_6C05EB3: pop %edi;");
    asm("loc_6C05EB4: pop %esi;");
    asm("loc_6C05EB5: pop %ebp;");
    asm("loc_6C05EB6: mov %ecx,%eax;");
    asm("loc_6C05EB8: pop %ebx;");
    asm("loc_6C05EB9: add $0x10,%esp;");
    asm("loc_6C05EBC: ret $0xC;");
    asm("loc_6C05EBF: mov (%esi),%eax;");
    asm("loc_6C05EC1: mov 0x5C(%ebp),%edx;");
    asm("loc_6C05EC4: mov %edx,(%eax);");
    asm("loc_6C05EC6: add $4,%eax;");
    asm("loc_6C05EC9: mov %eax,(%esi);");
    asm("loc_6C05ECB: mov (%ebx),%edi;");
    asm("loc_6C05ECD: mov 4(%ebx),%edx;");
    asm("loc_6C05ED0: add $4,%edi;");
    asm("loc_6C05ED3: mov %edi,%eax;");
    asm("loc_6C05ED5: cmp %edx,%eax;");
    asm("loc_6C05ED7: mov %edi,(%ebx);");
    asm("loc_6C05ED9: jbe loc_6C05EDE;");
    asm("loc_6C05EDB: mov %ecx,0xC(%ebx);");
    asm("loc_6C05EDE: mov 0x1C(%ebp),%eax;");
    asm("loc_6C05EE1: test %eax,%eax;");
    asm("loc_6C05EE3: je loc_6C05EF1;");
    asm("loc_6C05EE5: pop %edi;");
    asm("loc_6C05EE6: pop %esi;");
    asm("loc_6C05EE7: pop %ebp;");
    asm("loc_6C05EE8: mov %ecx,%eax;");
    asm("loc_6C05EEA: pop %ebx;");
    asm("loc_6C05EEB: add $0x10,%esp;");
    asm("loc_6C05EEE: ret $0xC;");
    asm("loc_6C05EF1: mov (%esi),%eax;");
    asm("loc_6C05EF3: mov 0x64(%ebp),%edx;");
    asm("loc_6C05EF6: mov %edx,(%eax);");
    asm("loc_6C05EF8: add $4,%eax;");
    asm("loc_6C05EFB: mov %eax,(%esi);");
    asm("loc_6C05EFD: mov 0x64(%ebp),%eax;");
    asm("loc_6C05F00: test %eax,%eax;");
    asm("loc_6C05F02: jbe loc_6C05F58;");
    asm("loc_6C05F04: mov (%ebx),%esi;");
    asm("loc_6C05F06: mov 4(%ebx),%edx;");
    asm("loc_6C05F09: add %eax,%eax;");
    asm("loc_6C05F0B: add %eax,%esi;");
    asm("loc_6C05F0D: mov %esi,%eax;");
    asm("loc_6C05F0F: cmp %edx,%eax;");
    asm("loc_6C05F11: mov %esi,(%ebx);");
    asm("loc_6C05F13: jbe loc_6C05F18;");
    asm("loc_6C05F15: mov %ecx,0xC(%ebx);");
    asm("loc_6C05F18: mov 0x1C(%ebp),%eax;");
    asm("loc_6C05F1B: test %eax,%eax;");
    asm("loc_6C05F1D: je loc_6C05F2B;");
    asm("loc_6C05F1F: pop %edi;");
    asm("loc_6C05F20: pop %esi;");
    asm("loc_6C05F21: pop %ebp;");
    asm("loc_6C05F22: mov %ecx,%eax;");
    asm("loc_6C05F24: pop %ebx;");
    asm("loc_6C05F25: add $0x10,%esp;");
    asm("loc_6C05F28: ret $0xC;");
    asm("loc_6C05F2B: mov 0x64(%ebp),%eax;");
    asm("loc_6C05F2E: mov 0x18(%ebp),%edi;");
    asm("loc_6C05F31: mov 0x60(%ebp),%esi;");
    asm("loc_6C05F34: shl $1,%eax;");
    asm("loc_6C05F36: mov %eax,%ecx;");
    asm("loc_6C05F38: mov %ecx,%edx;");
    asm("loc_6C05F3A: shr $2,%ecx;");
    asm("loc_6C05F3D: mov %edi,0x28(%esp);");
    asm("loc_6C05F41: rep movsl (%esi),(%edi);");
    asm("loc_6C05F43: mov %edx,%ecx;");
    asm("loc_6C05F45: and $3,%ecx;");
    asm("loc_6C05F48: rep movsb (%esi),(%edi);");
    asm("loc_6C05F4A: mov 0x28(%esp),%ecx;");
    asm("loc_6C05F4E: add %eax,%ecx;");
    asm("loc_6C05F50: mov %ecx,0x18(%ebp);");
    asm("loc_6C05F53: mov $0x16,%ecx;");
    asm("loc_6C05F58: mov (%ebx),%esi;");
    asm("loc_6C05F5A: mov 4(%ebx),%edx;");
    asm("loc_6C05F5D: add $4,%esi;");
    asm("loc_6C05F60: mov %esi,%eax;");
    asm("loc_6C05F62: cmp %edx,%eax;");
    asm("loc_6C05F64: mov %esi,(%ebx);");
    asm("loc_6C05F66: jbe loc_6C05F6B;");
    asm("loc_6C05F68: mov %ecx,0xC(%ebx);");
    asm("loc_6C05F6B: mov 0x1C(%ebp),%eax;");
    asm("loc_6C05F6E: test %eax,%eax;");
    asm("loc_6C05F70: je loc_6C05F7E;");
    asm("loc_6C05F72: pop %edi;");
    asm("loc_6C05F73: pop %esi;");
    asm("loc_6C05F74: pop %ebp;");
    asm("loc_6C05F75: mov %ecx,%eax;");
    asm("loc_6C05F77: pop %ebx;");
    asm("loc_6C05F78: add $0x10,%esp;");
    asm("loc_6C05F7B: ret $0xC;");
    asm("loc_6C05F7E: mov 0x18(%ebp),%eax;");
    asm("loc_6C05F81: mov 0x68(%ebp),%edx;");
    asm("loc_6C05F84: mov %edx,(%eax);");
    asm("loc_6C05F86: add $4,%eax;");
    asm("loc_6C05F89: mov %eax,0x18(%ebp);");
    asm("loc_6C05F8C: mov 0x68(%ebp),%eax;");
    asm("loc_6C05F8F: test %eax,%eax;");
    asm("loc_6C05F91: jbe loc_6C05FE6;");
    asm("loc_6C05F93: mov (%ebx),%esi;");
    asm("loc_6C05F95: mov 4(%ebx),%edx;");
    asm("loc_6C05F98: add %eax,%esi;");
    asm("loc_6C05F9A: mov %esi,%eax;");
    asm("loc_6C05F9C: cmp %edx,%eax;");
    asm("loc_6C05F9E: mov %esi,(%ebx);");
    asm("loc_6C05FA0: jbe loc_6C05FA5;");
    asm("loc_6C05FA2: mov %ecx,0xC(%ebx);");
    asm("loc_6C05FA5: mov 0x1C(%ebp),%eax;");
    asm("loc_6C05FA8: test %eax,%eax;");
    asm("loc_6C05FAA: je loc_6C05FB8;");
    asm("loc_6C05FAC: pop %edi;");
    asm("loc_6C05FAD: pop %esi;");
    asm("loc_6C05FAE: pop %ebp;");
    asm("loc_6C05FAF: mov %ecx,%eax;");
    asm("loc_6C05FB1: pop %ebx;");
    asm("loc_6C05FB2: add $0x10,%esp;");
    asm("loc_6C05FB5: ret $0xC;");
    asm("loc_6C05FB8: mov 0x68(%ebp),%eax;");
    asm("loc_6C05FBB: mov 0x18(%ebp),%edi;");
    asm("loc_6C05FBE: mov 0x88(%ebp),%esi;");
    asm("loc_6C05FC4: mov %eax,%ecx;");
    asm("loc_6C05FC6: mov %ecx,%edx;");
    asm("loc_6C05FC8: shr $2,%ecx;");
    asm("loc_6C05FCB: mov %edi,0x28(%esp);");
    asm("loc_6C05FCF: rep movsl (%esi),(%edi);");
    asm("loc_6C05FD1: mov %edx,%ecx;");
    asm("loc_6C05FD3: and $3,%ecx;");
    asm("loc_6C05FD6: rep movsb (%esi),(%edi);");
    asm("loc_6C05FD8: mov 0x28(%esp),%ecx;");
    asm("loc_6C05FDC: add %eax,%ecx;");
    asm("loc_6C05FDE: mov %ecx,0x18(%ebp);");
    asm("loc_6C05FE1: mov $0x16,%ecx;");
    asm("loc_6C05FE6: mov (%ebx),%esi;");
    asm("loc_6C05FE8: mov 4(%ebx),%edx;");
    asm("loc_6C05FEB: add $4,%esi;");
    asm("loc_6C05FEE: mov %esi,%eax;");
    asm("loc_6C05FF0: cmp %edx,%eax;");
    asm("loc_6C05FF2: mov %esi,(%ebx);");
    asm("loc_6C05FF4: jbe loc_6C05FF9;");
    asm("loc_6C05FF6: mov %ecx,0xC(%ebx);");
    asm("loc_6C05FF9: mov 0x1C(%ebp),%eax;");
    asm("loc_6C05FFC: test %eax,%eax;");
    asm("loc_6C05FFE: je loc_6C0600C;");
    asm("loc_6C06000: pop %edi;");
    asm("loc_6C06001: pop %esi;");
    asm("loc_6C06002: pop %ebp;");
    asm("loc_6C06003: mov %ecx,%eax;");
    asm("loc_6C06005: pop %ebx;");
    asm("loc_6C06006: add $0x10,%esp;");
    asm("loc_6C06009: ret $0xC;");
    asm("loc_6C0600C: mov 0x18(%ebp),%eax;");
    asm("loc_6C0600F: mov 0x6C(%ebp),%edx;");
    asm("loc_6C06012: mov %edx,(%eax);");
    asm("loc_6C06014: add $4,%eax;");
    asm("loc_6C06017: mov %eax,0x18(%ebp);");
    asm("loc_6C0601A: mov 0x6C(%ebp),%eax;");
    asm("loc_6C0601D: test %eax,%eax;");
    asm("loc_6C0601F: jbe loc_6C06074;");
    asm("loc_6C06021: mov (%ebx),%esi;");
    asm("loc_6C06023: mov 4(%ebx),%edx;");
    asm("loc_6C06026: add %eax,%esi;");
    asm("loc_6C06028: mov %esi,%eax;");
    asm("loc_6C0602A: cmp %edx,%eax;");
    asm("loc_6C0602C: mov %esi,(%ebx);");
    asm("loc_6C0602E: jbe loc_6C06033;");
    asm("loc_6C06030: mov %ecx,0xC(%ebx);");
    asm("loc_6C06033: mov 0x1C(%ebp),%eax;");
    asm("loc_6C06036: test %eax,%eax;");
    asm("loc_6C06038: je loc_6C06046;");
    asm("loc_6C0603A: pop %edi;");
    asm("loc_6C0603B: pop %esi;");
    asm("loc_6C0603C: pop %ebp;");
    asm("loc_6C0603D: mov %ecx,%eax;");
    asm("loc_6C0603F: pop %ebx;");
    asm("loc_6C06040: add $0x10,%esp;");
    asm("loc_6C06043: ret $0xC;");
    asm("loc_6C06046: mov 0x6C(%ebp),%eax;");
    asm("loc_6C06049: mov 0x18(%ebp),%edi;");
    asm("loc_6C0604C: mov 0x8C(%ebp),%esi;");
    asm("loc_6C06052: mov %eax,%ecx;");
    asm("loc_6C06054: mov %ecx,%edx;");
    asm("loc_6C06056: shr $2,%ecx;");
    asm("loc_6C06059: mov %edi,0x28(%esp);");
    asm("loc_6C0605D: rep movsl (%esi),(%edi);");
    asm("loc_6C0605F: mov %edx,%ecx;");
    asm("loc_6C06061: and $3,%ecx;");
    asm("loc_6C06064: rep movsb (%esi),(%edi);");
    asm("loc_6C06066: mov 0x28(%esp),%ecx;");
    asm("loc_6C0606A: add %eax,%ecx;");
    asm("loc_6C0606C: mov %ecx,0x18(%ebp);");
    asm("loc_6C0606F: mov $0x16,%ecx;");
    asm("loc_6C06074: mov (%ebx),%esi;");
    asm("loc_6C06076: mov 4(%ebx),%edx;");
    asm("loc_6C06079: add $4,%esi;");
    asm("loc_6C0607C: mov %esi,%eax;");
    asm("loc_6C0607E: cmp %edx,%eax;");
    asm("loc_6C06080: mov %esi,(%ebx);");
    asm("loc_6C06082: jbe loc_6C06087;");
    asm("loc_6C06084: mov %ecx,0xC(%ebx);");
    asm("loc_6C06087: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0608A: test %eax,%eax;");
    asm("loc_6C0608C: je loc_6C0609A;");
    asm("loc_6C0608E: pop %edi;");
    asm("loc_6C0608F: pop %esi;");
    asm("loc_6C06090: pop %ebp;");
    asm("loc_6C06091: mov %ecx,%eax;");
    asm("loc_6C06093: pop %ebx;");
    asm("loc_6C06094: add $0x10,%esp;");
    asm("loc_6C06097: ret $0xC;");
    asm("loc_6C0609A: mov 0x18(%ebp),%eax;");
    asm("loc_6C0609D: mov 0x70(%ebp),%edx;");
    asm("loc_6C060A0: mov %edx,(%eax);");
    asm("loc_6C060A2: add $4,%eax;");
    asm("loc_6C060A5: mov %eax,0x18(%ebp);");
    asm("loc_6C060A8: mov (%ebx),%esi;");
    asm("loc_6C060AA: mov 4(%ebx),%edx;");
    asm("loc_6C060AD: add $4,%esi;");
    asm("loc_6C060B0: mov %esi,%eax;");
    asm("loc_6C060B2: cmp %edx,%eax;");
    asm("loc_6C060B4: mov %esi,(%ebx);");
    asm("loc_6C060B6: jbe loc_6C060BB;");
    asm("loc_6C060B8: mov %ecx,0xC(%ebx);");
    asm("loc_6C060BB: mov 0x1C(%ebp),%eax;");
    asm("loc_6C060BE: test %eax,%eax;");
    asm("loc_6C060C0: je loc_6C060CE;");
    asm("loc_6C060C2: pop %edi;");
    asm("loc_6C060C3: pop %esi;");
    asm("loc_6C060C4: pop %ebp;");
    asm("loc_6C060C5: mov %ecx,%eax;");
    asm("loc_6C060C7: pop %ebx;");
    asm("loc_6C060C8: add $0x10,%esp;");
    asm("loc_6C060CB: ret $0xC;");
    asm("loc_6C060CE: mov 0x18(%ebp),%eax;");
    asm("loc_6C060D1: mov 0x74(%ebp),%edx;");
    asm("loc_6C060D4: mov %edx,(%eax);");
    asm("loc_6C060D6: add $4,%eax;");
    asm("loc_6C060D9: mov %eax,0x18(%ebp);");
    asm("loc_6C060DC: mov (%ebx),%esi;");
    asm("loc_6C060DE: mov 4(%ebx),%edx;");
    asm("loc_6C060E1: add $4,%esi;");
    asm("loc_6C060E4: mov %esi,%eax;");
    asm("loc_6C060E6: cmp %edx,%eax;");
    asm("loc_6C060E8: mov %esi,(%ebx);");
    asm("loc_6C060EA: jbe loc_6C060EF;");
    asm("loc_6C060EC: mov %ecx,0xC(%ebx);");
    asm("loc_6C060EF: mov 0x1C(%ebp),%eax;");
    asm("loc_6C060F2: test %eax,%eax;");
    asm("loc_6C060F4: je loc_6C06102;");
    asm("loc_6C060F6: pop %edi;");
    asm("loc_6C060F7: pop %esi;");
    asm("loc_6C060F8: pop %ebp;");
    asm("loc_6C060F9: mov %ecx,%eax;");
    asm("loc_6C060FB: pop %ebx;");
    asm("loc_6C060FC: add $0x10,%esp;");
    asm("loc_6C060FF: ret $0xC;");
    asm("loc_6C06102: mov 0x18(%ebp),%eax;");
    asm("loc_6C06105: mov 0x78(%ebp),%edx;");
    asm("loc_6C06108: mov %edx,(%eax);");
    asm("loc_6C0610A: add $4,%eax;");
    asm("loc_6C0610D: mov %eax,0x18(%ebp);");
    asm("loc_6C06110: mov (%ebx),%esi;");
    asm("loc_6C06112: mov 4(%ebx),%edx;");
    asm("loc_6C06115: add $4,%esi;");
    asm("loc_6C06118: mov %esi,%eax;");
    asm("loc_6C0611A: cmp %edx,%eax;");
    asm("loc_6C0611C: mov %esi,(%ebx);");
    asm("loc_6C0611E: jbe loc_6C06123;");
    asm("loc_6C06120: mov %ecx,0xC(%ebx);");
    asm("loc_6C06123: mov 0x1C(%ebp),%eax;");
    asm("loc_6C06126: test %eax,%eax;");
    asm("loc_6C06128: je loc_6C06136;");
    asm("loc_6C0612A: pop %edi;");
    asm("loc_6C0612B: pop %esi;");
    asm("loc_6C0612C: pop %ebp;");
    asm("loc_6C0612D: mov %ecx,%eax;");
    asm("loc_6C0612F: pop %ebx;");
    asm("loc_6C06130: add $0x10,%esp;");
    asm("loc_6C06133: ret $0xC;");
    asm("loc_6C06136: mov 0x18(%ebp),%eax;");
    asm("loc_6C06139: mov 0x7C(%ebp),%edx;");
    asm("loc_6C0613C: mov %edx,(%eax);");
    asm("loc_6C0613E: add $4,%eax;");
    asm("loc_6C06141: mov %eax,0x18(%ebp);");
    asm("loc_6C06144: mov (%ebx),%esi;");
    asm("loc_6C06146: mov 4(%ebx),%edx;");
    asm("loc_6C06149: add $4,%esi;");
    asm("loc_6C0614C: mov %esi,%eax;");
    asm("loc_6C0614E: cmp %edx,%eax;");
    asm("loc_6C06150: mov %esi,(%ebx);");
    asm("loc_6C06152: jbe loc_6C06157;");
    asm("loc_6C06154: mov %ecx,0xC(%ebx);");
    asm("loc_6C06157: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0615A: test %eax,%eax;");
    asm("loc_6C0615C: je loc_6C0616A;");
    asm("loc_6C0615E: pop %edi;");
    asm("loc_6C0615F: pop %esi;");
    asm("loc_6C06160: pop %ebp;");
    asm("loc_6C06161: mov %ecx,%eax;");
    asm("loc_6C06163: pop %ebx;");
    asm("loc_6C06164: add $0x10,%esp;");
    asm("loc_6C06167: ret $0xC;");
    asm("loc_6C0616A: mov 0x18(%ebp),%eax;");
    asm("loc_6C0616D: mov 0x80(%ebp),%edx;");
    asm("loc_6C06173: mov %edx,(%eax);");
    asm("loc_6C06175: add $4,%eax;");
    asm("loc_6C06178: mov %eax,0x18(%ebp);");
    asm("loc_6C0617B: mov 0x80(%ebp),%eax;");
    asm("loc_6C06181: test %eax,%eax;");
    asm("loc_6C06183: jbe loc_6C061DC;");
    asm("loc_6C06185: mov (%ebx),%esi;");
    asm("loc_6C06187: mov 4(%ebx),%edx;");
    asm("loc_6C0618A: shl $2,%eax;");
    asm("loc_6C0618D: add %eax,%esi;");
    asm("loc_6C0618F: mov %esi,%eax;");
    asm("loc_6C06191: cmp %edx,%eax;");
    asm("loc_6C06193: mov %esi,(%ebx);");
    asm("loc_6C06195: jbe loc_6C0619A;");
    asm("loc_6C06197: mov %ecx,0xC(%ebx);");
    asm("loc_6C0619A: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0619D: test %eax,%eax;");
    asm("loc_6C0619F: je loc_6C061AD;");
    asm("loc_6C061A1: pop %edi;");
    asm("loc_6C061A2: pop %esi;");
    asm("loc_6C061A3: pop %ebp;");
    asm("loc_6C061A4: mov %ecx,%eax;");
    asm("loc_6C061A6: pop %ebx;");
    asm("loc_6C061A7: add $0x10,%esp;");
    asm("loc_6C061AA: ret $0xC;");
    asm("loc_6C061AD: mov 0x80(%ebp),%eax;");
    asm("loc_6C061B3: mov 0x18(%ebp),%edi;");
    asm("loc_6C061B6: mov 0x84(%ebp),%esi;");
    asm("loc_6C061BC: shl $2,%eax;");
    asm("loc_6C061BF: mov %eax,%ecx;");
    asm("loc_6C061C1: mov %ecx,%edx;");
    asm("loc_6C061C3: shr $2,%ecx;");
    asm("loc_6C061C6: mov %edi,0x28(%esp);");
    asm("loc_6C061CA: rep movsl (%esi),(%edi);");
    asm("loc_6C061CC: mov %edx,%ecx;");
    asm("loc_6C061CE: and $3,%ecx;");
    asm("loc_6C061D1: rep movsb (%esi),(%edi);");
    asm("loc_6C061D3: mov 0x28(%esp),%ecx;");
    asm("loc_6C061D7: add %eax,%ecx;");
    asm("loc_6C061D9: mov %ecx,0x18(%ebp);");
    asm("loc_6C061DC: mov 0x14(%ebp),%edx;");
    asm("loc_6C061DF: push %ebx;");
    asm("loc_6C061E0: push %edx;");
    asm("loc_6C061E1: lea 0x18(%ebp),%eax;");
    asm("loc_6C061E4: push %eax;");
    asm("loc_6C061E5: mov %ebp,%ecx;");
    asm("loc_6C061E7: call _sub_6BEBEA0;");
    asm("loc_6C061EC: test %eax,%eax;");
    asm("loc_6C061EE: mov %eax,0x1C(%ebp);");
    asm("loc_6C061F1: je loc_6C06202;");
    asm("loc_6C061F3: pop %edi;");
    asm("loc_6C061F4: pop %esi;");
    asm("loc_6C061F5: pop %ebp;");
    asm("loc_6C061F6: mov $0x16,%eax;");
    asm("loc_6C061FB: pop %ebx;");
    asm("loc_6C061FC: add $0x10,%esp;");
    asm("loc_6C061FF: ret $0xC;");
    asm("loc_6C06202: mov (%ebx),%eax;");
    asm("loc_6C06204: mov 0x2C(%esp),%ecx;");
    asm("loc_6C06208: mov %eax,(%ecx);");
    asm("loc_6C0620A: mov 0xC(%ebp),%edx;");
    asm("loc_6C0620D: push %edx;");
    asm("loc_6C0620E: call _sub_6BEC3B0;");
    asm("loc_6C06213: mov %eax,%ecx;");
    asm("loc_6C06215: mov (%ecx),%esi;");
    asm("loc_6C06217: mov 0x18(%ecx),%edx;");
    asm("loc_6C0621A: add $4,%esp;");
    asm("loc_6C0621D: inc %esi;");
    asm("loc_6C0621E: mov %esi,(%ecx);");
    asm("loc_6C06220: mov (%ebx),%eax;");
    asm("loc_6C06222: add %eax,%edx;");
    asm("loc_6C06224: mov 0x10(%ecx),%eax;");
    asm("loc_6C06227: mov %edx,0x18(%ecx);");
    asm("loc_6C0622A: mov (%ebx),%ebx;");
    asm("loc_6C0622C: cmp %eax,%ebx;");
    asm("loc_6C0622E: jbe loc_6C06233;");
    asm("loc_6C06230: mov %ebx,0x10(%ecx);");
    asm("loc_6C06233: mov 0x18(%ecx),%eax;");
    asm("loc_6C06236: xor %edx,%edx;");
    asm("loc_6C06238: div %esi;");
    asm("loc_6C0623A: mov %eax,8(%ecx);");
    asm("loc_6C0623D: xor %eax,%eax;");
    asm("loc_6C0623F: pop %edi;");
    asm("loc_6C06240: pop %esi;");
    asm("loc_6C06241: pop %ebp;");
    asm("loc_6C06242: pop %ebx;");
    asm("loc_6C06243: add $0x10,%esp;");
    asm("loc_6C06246: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06250() // _sub_6C06250
{
    __DEBUG_ASM(6C06250);
    // chunk 0x6C06250 _sub_6C06250
    asm("loc_6C06250: mov 8(%esp),%eax;");
    asm("loc_6C06254: push %ebx;");
    asm("loc_6C06255: push %ebp;");
    asm("loc_6C06256: push %esi;");
    asm("loc_6C06257: mov %ecx,%ebp;");
    asm("loc_6C06259: mov 0x10(%esp),%ecx;");
    asm("loc_6C0625D: lea 0x10(%ebp),%ebx;");
    asm("loc_6C06260: push %edi;");
    asm("loc_6C06261: push %ebx;");
    asm("loc_6C06262: push %eax;");
    asm("loc_6C06263: mov %ecx,8(%ebx);");
    asm("loc_6C06266: lea 0x18(%ebp),%esi;");
    asm("loc_6C06269: push %esi;");
    asm("loc_6C0626A: mov %ebp,%ecx;");
    asm("loc_6C0626C: mov %eax,4(%ebx);");
    asm("loc_6C0626F: movl $0,(%ebx);");
    asm("loc_6C06275: movl $0,0xC(%ebx);");
    asm("loc_6C0627C: call _sub_6BEBE90;");
    asm("loc_6C06281: test %eax,%eax;");
    asm("loc_6C06283: mov %eax,0x1C(%ebp);");
    asm("loc_6C06286: je loc_6C06294;");
    asm("loc_6C06288: pop %edi;");
    asm("loc_6C06289: pop %esi;");
    asm("loc_6C0628A: pop %ebp;");
    asm("loc_6C0628B: mov $0x17,%eax;");
    asm("loc_6C06290: pop %ebx;");
    asm("loc_6C06291: ret $0xC;");
    asm("loc_6C06294: mov (%ebx),%edi;");
    asm("loc_6C06296: mov 4(%ebx),%edx;");
    asm("loc_6C06299: add $4,%edi;");
    asm("loc_6C0629C: mov %edi,%eax;");
    asm("loc_6C0629E: cmp %edx,%eax;");
    asm("loc_6C062A0: mov %edi,(%ebx);");
    asm("loc_6C062A2: mov $0x17,%ecx;");
    asm("loc_6C062A7: jbe loc_6C062AC;");
    asm("loc_6C062A9: mov %ecx,0xC(%ebx);");
    asm("loc_6C062AC: mov 0x1C(%ebp),%eax;");
    asm("loc_6C062AF: test %eax,%eax;");
    asm("loc_6C062B1: jne loc_6C06791;");
    asm("loc_6C062B7: mov (%esi),%eax;");
    asm("loc_6C062B9: mov (%eax),%edx;");
    asm("loc_6C062BB: add $4,%eax;");
    asm("loc_6C062BE: mov %eax,(%esi);");
    asm("loc_6C062C0: mov %edx,0x20(%ebp);");
    asm("loc_6C062C3: mov (%ebx),%edi;");
    asm("loc_6C062C5: mov 4(%ebx),%edx;");
    asm("loc_6C062C8: add $4,%edi;");
    asm("loc_6C062CB: mov %edi,%eax;");
    asm("loc_6C062CD: cmp %edx,%eax;");
    asm("loc_6C062CF: mov %edi,(%ebx);");
    asm("loc_6C062D1: jbe loc_6C062D6;");
    asm("loc_6C062D3: mov %ecx,0xC(%ebx);");
    asm("loc_6C062D6: mov 0x1C(%ebp),%eax;");
    asm("loc_6C062D9: test %eax,%eax;");
    asm("loc_6C062DB: jne loc_6C06791;");
    asm("loc_6C062E1: mov (%esi),%eax;");
    asm("loc_6C062E3: mov (%eax),%edx;");
    asm("loc_6C062E5: add $4,%eax;");
    asm("loc_6C062E8: mov %eax,(%esi);");
    asm("loc_6C062EA: mov %edx,0x24(%ebp);");
    asm("loc_6C062ED: mov (%ebx),%edi;");
    asm("loc_6C062EF: mov 4(%ebx),%edx;");
    asm("loc_6C062F2: add $4,%edi;");
    asm("loc_6C062F5: mov %edi,%eax;");
    asm("loc_6C062F7: cmp %edx,%eax;");
    asm("loc_6C062F9: mov %edi,(%ebx);");
    asm("loc_6C062FB: jbe loc_6C06300;");
    asm("loc_6C062FD: mov %ecx,0xC(%ebx);");
    asm("loc_6C06300: mov 0x1C(%ebp),%eax;");
    asm("loc_6C06303: test %eax,%eax;");
    asm("loc_6C06305: jne loc_6C06791;");
    asm("loc_6C0630B: mov (%esi),%eax;");
    asm("loc_6C0630D: mov (%eax),%edx;");
    asm("loc_6C0630F: add $4,%eax;");
    asm("loc_6C06312: mov %eax,(%esi);");
    asm("loc_6C06314: mov %edx,0x28(%ebp);");
    asm("loc_6C06317: mov (%ebx),%edi;");
    asm("loc_6C06319: mov 4(%ebx),%edx;");
    asm("loc_6C0631C: add $4,%edi;");
    asm("loc_6C0631F: mov %edi,%eax;");
    asm("loc_6C06321: cmp %edx,%eax;");
    asm("loc_6C06323: mov %edi,(%ebx);");
    asm("loc_6C06325: jbe loc_6C0632A;");
    asm("loc_6C06327: mov %ecx,0xC(%ebx);");
    asm("loc_6C0632A: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0632D: test %eax,%eax;");
    asm("loc_6C0632F: jne loc_6C06791;");
    asm("loc_6C06335: mov (%esi),%eax;");
    asm("loc_6C06337: mov (%eax),%edx;");
    asm("loc_6C06339: add $4,%eax;");
    asm("loc_6C0633C: mov %eax,(%esi);");
    asm("loc_6C0633E: mov %edx,0x2C(%ebp);");
    asm("loc_6C06341: mov (%ebx),%edi;");
    asm("loc_6C06343: mov 4(%ebx),%edx;");
    asm("loc_6C06346: add $4,%edi;");
    asm("loc_6C06349: mov %edi,%eax;");
    asm("loc_6C0634B: cmp %edx,%eax;");
    asm("loc_6C0634D: mov %edi,(%ebx);");
    asm("loc_6C0634F: jbe loc_6C06354;");
    asm("loc_6C06351: mov %ecx,0xC(%ebx);");
    asm("loc_6C06354: mov 0x1C(%ebp),%eax;");
    asm("loc_6C06357: test %eax,%eax;");
    asm("loc_6C06359: jne loc_6C06791;");
    asm("loc_6C0635F: mov (%esi),%eax;");
    asm("loc_6C06361: mov (%eax),%edx;");
    asm("loc_6C06363: add $4,%eax;");
    asm("loc_6C06366: mov %eax,(%esi);");
    asm("loc_6C06368: mov %edx,0x30(%ebp);");
    asm("loc_6C0636B: mov (%ebx),%edi;");
    asm("loc_6C0636D: mov 4(%ebx),%edx;");
    asm("loc_6C06370: add $0xC,%edi;");
    asm("loc_6C06373: mov %edi,%eax;");
    asm("loc_6C06375: cmp %edx,%eax;");
    asm("loc_6C06377: mov %edi,(%ebx);");
    asm("loc_6C06379: jbe loc_6C0637E;");
    asm("loc_6C0637B: mov %ecx,0xC(%ebx);");
    asm("loc_6C0637E: mov 0x1C(%ebp),%eax;");
    asm("loc_6C06381: test %eax,%eax;");
    asm("loc_6C06383: jne loc_6C06791;");
    asm("loc_6C06389: mov (%esi),%edi;");
    asm("loc_6C0638B: push %edi;");
    asm("loc_6C0638C: lea 0x34(%ebp),%ecx;");
    asm("loc_6C0638F: call _sub_6BDA4C0;");
    asm("loc_6C06394: add $0xC,%edi;");
    asm("loc_6C06397: mov %edi,(%esi);");
    asm("loc_6C06399: mov (%ebx),%edx;");
    asm("loc_6C0639B: mov 4(%ebx),%ecx;");
    asm("loc_6C0639E: add $0xC,%edx;");
    asm("loc_6C063A1: mov %edx,%eax;");
    asm("loc_6C063A3: cmp %ecx,%eax;");
    asm("loc_6C063A5: mov %edx,(%ebx);");
    asm("loc_6C063A7: jbe loc_6C063B0;");
    asm("loc_6C063A9: movl $0x17,0xC(%ebx);");
    asm("loc_6C063B0: mov 0x1C(%ebp),%eax;");
    asm("loc_6C063B3: test %eax,%eax;");
    asm("loc_6C063B5: jne loc_6C06791;");
    asm("loc_6C063BB: mov (%esi),%edi;");
    asm("loc_6C063BD: push %edi;");
    asm("loc_6C063BE: lea 0x40(%ebp),%ecx;");
    asm("loc_6C063C1: call _sub_6BDA4C0;");
    asm("loc_6C063C6: add $0xC,%edi;");
    asm("loc_6C063C9: mov %edi,(%esi);");
    asm("loc_6C063CB: mov (%ebx),%edx;");
    asm("loc_6C063CD: mov 4(%ebx),%ecx;");
    asm("loc_6C063D0: add $0x10,%edx;");
    asm("loc_6C063D3: mov %edx,%eax;");
    asm("loc_6C063D5: cmp %ecx,%eax;");
    asm("loc_6C063D7: mov %edx,(%ebx);");
    asm("loc_6C063D9: jbe loc_6C063E2;");
    asm("loc_6C063DB: movl $0x17,0xC(%ebx);");
    asm("loc_6C063E2: mov 0x1C(%ebp),%eax;");
    asm("loc_6C063E5: test %eax,%eax;");
    asm("loc_6C063E7: jne loc_6C06791;");
    asm("loc_6C063ED: mov (%esi),%edi;");
    asm("loc_6C063EF: push %edi;");
    asm("loc_6C063F0: lea 0x4C(%ebp),%ecx;");
    asm("loc_6C063F3: call _sub_6BDA220;");
    asm("loc_6C063F8: add $0x10,%edi;");
    asm("loc_6C063FB: mov %edi,(%esi);");
    asm("loc_6C063FD: mov (%ebx),%edx;");
    asm("loc_6C063FF: mov 4(%ebx),%ecx;");
    asm("loc_6C06402: add $4,%edx;");
    asm("loc_6C06405: mov %edx,%eax;");
    asm("loc_6C06407: cmp %ecx,%eax;");
    asm("loc_6C06409: mov %edx,(%ebx);");
    asm("loc_6C0640B: mov $0x17,%edi;");
    asm("loc_6C06410: jbe loc_6C06415;");
    asm("loc_6C06412: mov %edi,0xC(%ebx);");
    asm("loc_6C06415: mov 0x1C(%ebp),%eax;");
    asm("loc_6C06418: test %eax,%eax;");
    asm("loc_6C0641A: jne loc_6C06791;");
    asm("loc_6C06420: mov (%esi),%eax;");
    asm("loc_6C06422: mov (%eax),%ecx;");
    asm("loc_6C06424: add $4,%eax;");
    asm("loc_6C06427: mov %eax,(%esi);");
    asm("loc_6C06429: mov %ecx,0x5C(%ebp);");
    asm("loc_6C0642C: mov (%ebx),%edx;");
    asm("loc_6C0642E: mov 4(%ebx),%ecx;");
    asm("loc_6C06431: add $4,%edx;");
    asm("loc_6C06434: mov %edx,%eax;");
    asm("loc_6C06436: cmp %ecx,%eax;");
    asm("loc_6C06438: mov %edx,(%ebx);");
    asm("loc_6C0643A: jbe loc_6C0643F;");
    asm("loc_6C0643C: mov %edi,0xC(%ebx);");
    asm("loc_6C0643F: mov 0x1C(%ebp),%eax;");
    asm("loc_6C06442: test %eax,%eax;");
    asm("loc_6C06444: jne loc_6C06791;");
    asm("loc_6C0644A: mov (%esi),%eax;");
    asm("loc_6C0644C: mov (%eax),%edx;");
    asm("loc_6C0644E: add $4,%eax;");
    asm("loc_6C06451: mov %eax,(%esi);");
    asm("loc_6C06453: mov %edx,%eax;");
    asm("loc_6C06455: test %eax,%eax;");
    asm("loc_6C06457: mov %edx,0x64(%ebp);");
    asm("loc_6C0645A: jbe loc_6C064B9;");
    asm("loc_6C0645C: add %eax,%eax;");
    asm("loc_6C0645E: push %eax;");
    asm("loc_6C0645F: call _sub_6C09D26;");
    asm("loc_6C06464: mov 0x64(%ebp),%ecx;");
    asm("loc_6C06467: mov %eax,0x60(%ebp);");
    asm("loc_6C0646A: mov (%ebx),%edx;");
    asm("loc_6C0646C: shl $1,%ecx;");
    asm("loc_6C0646E: add %ecx,%edx;");
    asm("loc_6C06470: mov 4(%ebx),%ecx;");
    asm("loc_6C06473: mov %edx,%eax;");
    asm("loc_6C06475: add $4,%esp;");
    asm("loc_6C06478: cmp %ecx,%eax;");
    asm("loc_6C0647A: mov %edx,(%ebx);");
    asm("loc_6C0647C: jbe loc_6C06481;");
    asm("loc_6C0647E: mov %edi,0xC(%ebx);");
    asm("loc_6C06481: mov 0x1C(%ebp),%eax;");
    asm("loc_6C06484: test %eax,%eax;");
    asm("loc_6C06486: jne loc_6C06791;");
    asm("loc_6C0648C: mov 0x64(%ebp),%eax;");
    asm("loc_6C0648F: mov 0x18(%ebp),%esi;");
    asm("loc_6C06492: mov 0x60(%ebp),%edi;");
    asm("loc_6C06495: shl $1,%eax;");
    asm("loc_6C06497: mov %eax,%ecx;");
    asm("loc_6C06499: mov %ecx,%edx;");
    asm("loc_6C0649B: shr $2,%ecx;");
    asm("loc_6C0649E: mov %esi,0x14(%esp);");
    asm("loc_6C064A2: rep movsl (%esi),(%edi);");
    asm("loc_6C064A4: mov %edx,%ecx;");
    asm("loc_6C064A6: and $3,%ecx;");
    asm("loc_6C064A9: rep movsb (%esi),(%edi);");
    asm("loc_6C064AB: mov 0x14(%esp),%ecx;");
    asm("loc_6C064AF: add %eax,%ecx;");
    asm("loc_6C064B1: mov %ecx,0x18(%ebp);");
    asm("loc_6C064B4: mov $0x17,%edi;");
    asm("loc_6C064B9: mov (%ebx),%edx;");
    asm("loc_6C064BB: mov 4(%ebx),%ecx;");
    asm("loc_6C064BE: add $4,%edx;");
    asm("loc_6C064C1: mov %edx,%eax;");
    asm("loc_6C064C3: cmp %ecx,%eax;");
    asm("loc_6C064C5: mov %edx,(%ebx);");
    asm("loc_6C064C7: jbe loc_6C064CC;");
    asm("loc_6C064C9: mov %edi,0xC(%ebx);");
    asm("loc_6C064CC: mov 0x1C(%ebp),%eax;");
    asm("loc_6C064CF: test %eax,%eax;");
    asm("loc_6C064D1: jne loc_6C06791;");
    asm("loc_6C064D7: mov 0x18(%ebp),%eax;");
    asm("loc_6C064DA: mov (%eax),%edx;");
    asm("loc_6C064DC: add $4,%eax;");
    asm("loc_6C064DF: mov %eax,0x18(%ebp);");
    asm("loc_6C064E2: mov %edx,%eax;");
    asm("loc_6C064E4: test %eax,%eax;");
    asm("loc_6C064E6: mov %edx,0x68(%ebp);");
    asm("loc_6C064E9: jbe loc_6C06548;");
    asm("loc_6C064EB: push %eax;");
    asm("loc_6C064EC: call _sub_6C09D26;");
    asm("loc_6C064F1: mov %eax,0x88(%ebp);");
    asm("loc_6C064F7: mov 0x68(%ebp),%eax;");
    asm("loc_6C064FA: mov (%ebx),%edx;");
    asm("loc_6C064FC: mov 4(%ebx),%ecx;");
    asm("loc_6C064FF: add %eax,%edx;");
    asm("loc_6C06501: mov %edx,%eax;");
    asm("loc_6C06503: add $4,%esp;");
    asm("loc_6C06506: cmp %ecx,%eax;");
    asm("loc_6C06508: mov %edx,(%ebx);");
    asm("loc_6C0650A: jbe loc_6C0650F;");
    asm("loc_6C0650C: mov %edi,0xC(%ebx);");
    asm("loc_6C0650F: mov 0x1C(%ebp),%eax;");
    asm("loc_6C06512: test %eax,%eax;");
    asm("loc_6C06514: jne loc_6C06791;");
    asm("loc_6C0651A: mov 0x68(%ebp),%eax;");
    asm("loc_6C0651D: mov 0x18(%ebp),%esi;");
    asm("loc_6C06520: mov 0x88(%ebp),%edi;");
    asm("loc_6C06526: mov %eax,%ecx;");
    asm("loc_6C06528: mov %ecx,%edx;");
    asm("loc_6C0652A: shr $2,%ecx;");
    asm("loc_6C0652D: mov %esi,0x14(%esp);");
    asm("loc_6C06531: rep movsl (%esi),(%edi);");
    asm("loc_6C06533: mov %edx,%ecx;");
    asm("loc_6C06535: and $3,%ecx;");
    asm("loc_6C06538: rep movsb (%esi),(%edi);");
    asm("loc_6C0653A: mov 0x14(%esp),%ecx;");
    asm("loc_6C0653E: add %eax,%ecx;");
    asm("loc_6C06540: mov %ecx,0x18(%ebp);");
    asm("loc_6C06543: mov $0x17,%edi;");
    asm("loc_6C06548: mov (%ebx),%edx;");
    asm("loc_6C0654A: mov 4(%ebx),%ecx;");
    asm("loc_6C0654D: add $4,%edx;");
    asm("loc_6C06550: mov %edx,%eax;");
    asm("loc_6C06552: cmp %ecx,%eax;");
    asm("loc_6C06554: mov %edx,(%ebx);");
    asm("loc_6C06556: jbe loc_6C0655B;");
    asm("loc_6C06558: mov %edi,0xC(%ebx);");
    asm("loc_6C0655B: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0655E: test %eax,%eax;");
    asm("loc_6C06560: jne loc_6C06791;");
    asm("loc_6C06566: mov 0x18(%ebp),%eax;");
    asm("loc_6C06569: mov (%eax),%edx;");
    asm("loc_6C0656B: add $4,%eax;");
    asm("loc_6C0656E: mov %eax,0x18(%ebp);");
    asm("loc_6C06571: mov %edx,%eax;");
    asm("loc_6C06573: test %eax,%eax;");
    asm("loc_6C06575: mov %edx,0x6C(%ebp);");
    asm("loc_6C06578: jbe loc_6C065D7;");
    asm("loc_6C0657A: push %eax;");
    asm("loc_6C0657B: call _sub_6C09D26;");
    asm("loc_6C06580: mov %eax,0x8C(%ebp);");
    asm("loc_6C06586: mov 0x6C(%ebp),%eax;");
    asm("loc_6C06589: mov (%ebx),%edx;");
    asm("loc_6C0658B: mov 4(%ebx),%ecx;");
    asm("loc_6C0658E: add %eax,%edx;");
    asm("loc_6C06590: mov %edx,%eax;");
    asm("loc_6C06592: add $4,%esp;");
    asm("loc_6C06595: cmp %ecx,%eax;");
    asm("loc_6C06597: mov %edx,(%ebx);");
    asm("loc_6C06599: jbe loc_6C0659E;");
    asm("loc_6C0659B: mov %edi,0xC(%ebx);");
    asm("loc_6C0659E: mov 0x1C(%ebp),%eax;");
    asm("loc_6C065A1: test %eax,%eax;");
    asm("loc_6C065A3: jne loc_6C06791;");
    asm("loc_6C065A9: mov 0x6C(%ebp),%eax;");
    asm("loc_6C065AC: mov 0x18(%ebp),%esi;");
    asm("loc_6C065AF: mov 0x8C(%ebp),%edi;");
    asm("loc_6C065B5: mov %eax,%ecx;");
    asm("loc_6C065B7: mov %ecx,%edx;");
    asm("loc_6C065B9: shr $2,%ecx;");
    asm("loc_6C065BC: mov %esi,0x14(%esp);");
    asm("loc_6C065C0: rep movsl (%esi),(%edi);");
    asm("loc_6C065C2: mov %edx,%ecx;");
    asm("loc_6C065C4: and $3,%ecx;");
    asm("loc_6C065C7: rep movsb (%esi),(%edi);");
    asm("loc_6C065C9: mov 0x14(%esp),%ecx;");
    asm("loc_6C065CD: add %eax,%ecx;");
    asm("loc_6C065CF: mov %ecx,0x18(%ebp);");
    asm("loc_6C065D2: mov $0x17,%edi;");
    asm("loc_6C065D7: mov (%ebx),%edx;");
    asm("loc_6C065D9: mov 4(%ebx),%ecx;");
    asm("loc_6C065DC: add $4,%edx;");
    asm("loc_6C065DF: mov %edx,%eax;");
    asm("loc_6C065E1: cmp %ecx,%eax;");
    asm("loc_6C065E3: mov %edx,(%ebx);");
    asm("loc_6C065E5: jbe loc_6C065EA;");
    asm("loc_6C065E7: mov %edi,0xC(%ebx);");
    asm("loc_6C065EA: mov 0x1C(%ebp),%eax;");
    asm("loc_6C065ED: test %eax,%eax;");
    asm("loc_6C065EF: jne loc_6C06791;");
    asm("loc_6C065F5: mov 0x18(%ebp),%eax;");
    asm("loc_6C065F8: mov (%eax),%edx;");
    asm("loc_6C065FA: add $4,%eax;");
    asm("loc_6C065FD: mov %edx,0x70(%ebp);");
    asm("loc_6C06600: mov %eax,0x18(%ebp);");
    asm("loc_6C06603: mov (%ebx),%edx;");
    asm("loc_6C06605: mov 4(%ebx),%ecx;");
    asm("loc_6C06608: add $4,%edx;");
    asm("loc_6C0660B: mov %edx,%eax;");
    asm("loc_6C0660D: cmp %ecx,%eax;");
    asm("loc_6C0660F: mov %edx,(%ebx);");
    asm("loc_6C06611: jbe loc_6C06616;");
    asm("loc_6C06613: mov %edi,0xC(%ebx);");
    asm("loc_6C06616: mov 0x1C(%ebp),%eax;");
    asm("loc_6C06619: test %eax,%eax;");
    asm("loc_6C0661B: jne loc_6C06791;");
    asm("loc_6C06621: mov 0x18(%ebp),%eax;");
    asm("loc_6C06624: mov (%eax),%ecx;");
    asm("loc_6C06626: add $4,%eax;");
    asm("loc_6C06629: mov %eax,0x18(%ebp);");
    asm("loc_6C0662C: mov %ecx,0x74(%ebp);");
    asm("loc_6C0662F: mov (%ebx),%edx;");
    asm("loc_6C06631: mov 4(%ebx),%ecx;");
    asm("loc_6C06634: add $4,%edx;");
    asm("loc_6C06637: mov %edx,%eax;");
    asm("loc_6C06639: cmp %ecx,%eax;");
    asm("loc_6C0663B: mov %edx,(%ebx);");
    asm("loc_6C0663D: jbe loc_6C06642;");
    asm("loc_6C0663F: mov %edi,0xC(%ebx);");
    asm("loc_6C06642: mov 0x1C(%ebp),%eax;");
    asm("loc_6C06645: test %eax,%eax;");
    asm("loc_6C06647: jne loc_6C06791;");
    asm("loc_6C0664D: mov 0x18(%ebp),%eax;");
    asm("loc_6C06650: mov (%eax),%edx;");
    asm("loc_6C06652: add $4,%eax;");
    asm("loc_6C06655: mov %edx,0x78(%ebp);");
    asm("loc_6C06658: mov %eax,0x18(%ebp);");
    asm("loc_6C0665B: mov (%ebx),%edx;");
    asm("loc_6C0665D: mov 4(%ebx),%ecx;");
    asm("loc_6C06660: add $4,%edx;");
    asm("loc_6C06663: mov %edx,%eax;");
    asm("loc_6C06665: cmp %ecx,%eax;");
    asm("loc_6C06667: mov %edx,(%ebx);");
    asm("loc_6C06669: jbe loc_6C0666E;");
    asm("loc_6C0666B: mov %edi,0xC(%ebx);");
    asm("loc_6C0666E: mov 0x1C(%ebp),%eax;");
    asm("loc_6C06671: test %eax,%eax;");
    asm("loc_6C06673: jne loc_6C06791;");
    asm("loc_6C06679: mov 0x18(%ebp),%eax;");
    asm("loc_6C0667C: mov (%eax),%ecx;");
    asm("loc_6C0667E: add $4,%eax;");
    asm("loc_6C06681: mov %eax,0x18(%ebp);");
    asm("loc_6C06684: mov %ecx,0x7C(%ebp);");
    asm("loc_6C06687: mov (%ebx),%edx;");
    asm("loc_6C06689: mov 4(%ebx),%ecx;");
    asm("loc_6C0668C: add $4,%edx;");
    asm("loc_6C0668F: mov %edx,%eax;");
    asm("loc_6C06691: cmp %ecx,%eax;");
    asm("loc_6C06693: mov %edx,(%ebx);");
    asm("loc_6C06695: jbe loc_6C0669A;");
    asm("loc_6C06697: mov %edi,0xC(%ebx);");
    asm("loc_6C0669A: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0669D: test %eax,%eax;");
    asm("loc_6C0669F: jne loc_6C06791;");
    asm("loc_6C066A5: mov 0x18(%ebp),%eax;");
    asm("loc_6C066A8: mov (%eax),%edx;");
    asm("loc_6C066AA: add $4,%eax;");
    asm("loc_6C066AD: mov %eax,0x18(%ebp);");
    asm("loc_6C066B0: mov %edx,%eax;");
    asm("loc_6C066B2: test %eax,%eax;");
    asm("loc_6C066B4: mov %edx,0x80(%ebp);");
    asm("loc_6C066BA: jbe loc_6C06728;");
    asm("loc_6C066BC: shl $2,%eax;");
    asm("loc_6C066BF: push %eax;");
    asm("loc_6C066C0: call _sub_6C09D26;");
    asm("loc_6C066C5: mov 0x80(%ebp),%ecx;");
    asm("loc_6C066CB: mov %eax,0x84(%ebp);");
    asm("loc_6C066D1: mov (%ebx),%edx;");
    asm("loc_6C066D3: shl $2,%ecx;");
    asm("loc_6C066D6: add %ecx,%edx;");
    asm("loc_6C066D8: mov 4(%ebx),%ecx;");
    asm("loc_6C066DB: mov %edx,%eax;");
    asm("loc_6C066DD: add $4,%esp;");
    asm("loc_6C066E0: cmp %ecx,%eax;");
    asm("loc_6C066E2: mov %edx,(%ebx);");
    asm("loc_6C066E4: jbe loc_6C066E9;");
    asm("loc_6C066E6: mov %edi,0xC(%ebx);");
    asm("loc_6C066E9: mov 0x1C(%ebp),%eax;");
    asm("loc_6C066EC: test %eax,%eax;");
    asm("loc_6C066EE: jne loc_6C06791;");
    asm("loc_6C066F4: mov 0x80(%ebp),%eax;");
    asm("loc_6C066FA: mov 0x18(%ebp),%esi;");
    asm("loc_6C066FD: mov 0x84(%ebp),%edi;");
    asm("loc_6C06703: shl $2,%eax;");
    asm("loc_6C06706: mov %eax,%ecx;");
    asm("loc_6C06708: mov %ecx,%edx;");
    asm("loc_6C0670A: shr $2,%ecx;");
    asm("loc_6C0670D: mov %esi,0x14(%esp);");
    asm("loc_6C06711: rep movsl (%esi),(%edi);");
    asm("loc_6C06713: mov %edx,%ecx;");
    asm("loc_6C06715: and $3,%ecx;");
    asm("loc_6C06718: rep movsb (%esi),(%edi);");
    asm("loc_6C0671A: mov 0x14(%esp),%ecx;");
    asm("loc_6C0671E: add %eax,%ecx;");
    asm("loc_6C06720: mov %ecx,0x18(%ebp);");
    asm("loc_6C06723: mov $0x17,%edi;");
    asm("loc_6C06728: mov 0x18(%esp),%edx;");
    asm("loc_6C0672C: push %ebx;");
    asm("loc_6C0672D: push %edx;");
    asm("loc_6C0672E: lea 0x18(%ebp),%eax;");
    asm("loc_6C06731: push %eax;");
    asm("loc_6C06732: mov %ebp,%ecx;");
    asm("loc_6C06734: call _sub_6BEBEB0;");
    asm("loc_6C06739: test %eax,%eax;");
    asm("loc_6C0673B: mov %eax,0x1C(%ebp);");
    asm("loc_6C0673E: je loc_6C06749;");
    asm("loc_6C06740: mov %edi,%eax;");
    asm("loc_6C06742: pop %edi;");
    asm("loc_6C06743: pop %esi;");
    asm("loc_6C06744: pop %ebp;");
    asm("loc_6C06745: pop %ebx;");
    asm("loc_6C06746: ret $0xC;");
    asm("loc_6C06749: mov (%ebx),%eax;");
    asm("loc_6C0674B: mov 0x1C(%esp),%ecx;");
    asm("loc_6C0674F: mov %eax,(%ecx);");
    asm("loc_6C06751: mov 0xC(%ebp),%edx;");
    asm("loc_6C06754: push %edx;");
    asm("loc_6C06755: call _sub_6BEC3B0;");
    asm("loc_6C0675A: mov %eax,%ecx;");
    asm("loc_6C0675C: mov 4(%ecx),%esi;");
    asm("loc_6C0675F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C06762: mov 0x14(%ecx),%edx;");
    asm("loc_6C06765: add $4,%esp;");
    asm("loc_6C06768: inc %esi;");
    asm("loc_6C06769: mov %esi,4(%ecx);");
    asm("loc_6C0676C: mov (%ebx),%eax;");
    asm("loc_6C0676E: add $2,%eax;");
    asm("loc_6C06771: add %eax,%ebp;");
    asm("loc_6C06773: mov %ebp,0x1C(%ecx);");
    asm("loc_6C06776: mov (%ebx),%ebx;");
    asm("loc_6C06778: add $2,%edx;");
    asm("loc_6C0677B: cmp %edx,%ebx;");
    asm("loc_6C0677D: jbe loc_6C06785;");
    asm("loc_6C0677F: add $2,%ebx;");
    asm("loc_6C06782: mov %ebx,0x14(%ecx);");
    asm("loc_6C06785: mov 0x1C(%ecx),%eax;");
    asm("loc_6C06788: xor %edx,%edx;");
    asm("loc_6C0678A: div %esi;");
    asm("loc_6C0678C: mov %eax,0xC(%ecx);");
    asm("loc_6C0678F: xor %eax,%eax;");
    asm("loc_6C06791: pop %edi;");
    asm("loc_6C06792: pop %esi;");
    asm("loc_6C06793: pop %ebp;");
    asm("loc_6C06794: pop %ebx;");
    asm("loc_6C06795: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C067A0() // _sub_6C067A0
{
    __DEBUG_ASM(6C067A0);
    // chunk 0x6C067A0 _sub_6C067A0
    asm("loc_6C067A0: mov _data_6C0E5B8,%eax;");
    asm("loc_6C067A5: mov %eax,_data_6C14248;");
    asm("loc_6C067AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C067B0() // _sub_6C067B0
{
    __DEBUG_ASM(6C067B0);
    // chunk 0x6C067B0 _sub_6C067B0
    asm("loc_6C067B0: mov _data_6C0E5B8,%eax;");
    asm("loc_6C067B5: mov %eax,_data_6C1424C;");
    asm("loc_6C067BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C067C0() // _sub_6C067C0
{
    __DEBUG_ASM(6C067C0);
    // chunk 0x6C067C0 _sub_6C067C0
    asm("loc_6C067C0: mov _data_6C0E5BC,%eax;");
    asm("loc_6C067C5: mov %eax,_data_6C14244;");
    asm("loc_6C067CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C067D0() // _sub_6C067D0
{
    __DEBUG_ASM(6C067D0);
    // chunk 0x6C067D0 _sub_6C067D0
    asm("loc_6C067D0: push %esi;");
    asm("loc_6C067D1: mov %ecx,%esi;");
    asm("loc_6C067D3: mov 0x20(%esi),%eax;");
    asm("loc_6C067D6: test %eax,%eax;");
    asm("loc_6C067D8: movl $_off_6C0DB20,(%esi);");
    asm("loc_6C067DE: je loc_6C067E9;");
    asm("loc_6C067E0: push %eax;");
    asm("loc_6C067E1: call _sub_6C09AAA;");
    asm("loc_6C067E6: add $4,%esp;");
    asm("loc_6C067E9: mov %esi,%ecx;");
    asm("loc_6C067EB: pop %esi;");
    asm("loc_6C067EC: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06800() // _sub_6C06800
{
    __DEBUG_ASM(6C06800);
    // chunk 0x6C06800 _sub_6C06800
    asm("loc_6C06800: mov 8(%esp),%eax;");
    asm("loc_6C06804: push %ebx;");
    asm("loc_6C06805: push %ebp;");
    asm("loc_6C06806: mov %ecx,%ebp;");
    asm("loc_6C06808: mov 0xC(%esp),%ecx;");
    asm("loc_6C0680C: lea 0x10(%ebp),%ebx;");
    asm("loc_6C0680F: push %esi;");
    asm("loc_6C06810: mov %eax,4(%ebx);");
    asm("loc_6C06813: mov (%ecx),%edx;");
    asm("loc_6C06815: push %edi;");
    asm("loc_6C06816: mov %edx,8(%ebx);");
    asm("loc_6C06819: movl $0,(%ebx);");
    asm("loc_6C0681F: movl $0,0xC(%ebx);");
    asm("loc_6C06826: mov 0x14(%ebp),%eax;");
    asm("loc_6C06829: push %ebx;");
    asm("loc_6C0682A: push %eax;");
    asm("loc_6C0682B: lea 0x18(%ebp),%esi;");
    asm("loc_6C0682E: push %esi;");
    asm("loc_6C0682F: mov %ebp,%ecx;");
    asm("loc_6C06831: call _sub_6BEBE50;");
    asm("loc_6C06836: test %eax,%eax;");
    asm("loc_6C06838: mov %eax,0x1C(%ebp);");
    asm("loc_6C0683B: je loc_6C06849;");
    asm("loc_6C0683D: pop %edi;");
    asm("loc_6C0683E: pop %esi;");
    asm("loc_6C0683F: pop %ebp;");
    asm("loc_6C06840: mov $0x16,%eax;");
    asm("loc_6C06845: pop %ebx;");
    asm("loc_6C06846: ret $0xC;");
    asm("loc_6C06849: mov (%ebx),%edx;");
    asm("loc_6C0684B: mov 4(%ebx),%ecx;");
    asm("loc_6C0684E: add $4,%edx;");
    asm("loc_6C06851: mov %edx,%eax;");
    asm("loc_6C06853: cmp %ecx,%eax;");
    asm("loc_6C06855: mov %edx,(%ebx);");
    asm("loc_6C06857: jbe loc_6C06860;");
    asm("loc_6C06859: movl $0x16,0xC(%ebx);");
    asm("loc_6C06860: mov 0x1C(%ebp),%eax;");
    asm("loc_6C06863: test %eax,%eax;");
    asm("loc_6C06865: je loc_6C06873;");
    asm("loc_6C06867: pop %edi;");
    asm("loc_6C06868: pop %esi;");
    asm("loc_6C06869: pop %ebp;");
    asm("loc_6C0686A: mov $0x16,%eax;");
    asm("loc_6C0686F: pop %ebx;");
    asm("loc_6C06870: ret $0xC;");
    asm("loc_6C06873: mov (%esi),%eax;");
    asm("loc_6C06875: mov 0x24(%ebp),%ecx;");
    asm("loc_6C06878: mov %ecx,(%eax);");
    asm("loc_6C0687A: mov 0x24(%ebp),%edx;");
    asm("loc_6C0687D: add $4,%eax;");
    asm("loc_6C06880: mov %eax,(%esi);");
    asm("loc_6C06882: mov (%ebx),%edi;");
    asm("loc_6C06884: mov 4(%ebx),%ecx;");
    asm("loc_6C06887: add %edx,%edi;");
    asm("loc_6C06889: mov %edi,%eax;");
    asm("loc_6C0688B: cmp %ecx,%eax;");
    asm("loc_6C0688D: mov %edi,(%ebx);");
    asm("loc_6C0688F: jbe loc_6C06898;");
    asm("loc_6C06891: movl $0x16,0xC(%ebx);");
    asm("loc_6C06898: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0689B: test %eax,%eax;");
    asm("loc_6C0689D: je loc_6C068AB;");
    asm("loc_6C0689F: pop %edi;");
    asm("loc_6C068A0: pop %esi;");
    asm("loc_6C068A1: pop %ebp;");
    asm("loc_6C068A2: mov $0x16,%eax;");
    asm("loc_6C068A7: pop %ebx;");
    asm("loc_6C068A8: ret $0xC;");
    asm("loc_6C068AB: mov 0x24(%ebp),%eax;");
    asm("loc_6C068AE: mov (%esi),%edi;");
    asm("loc_6C068B0: mov 0x20(%ebp),%esi;");
    asm("loc_6C068B3: mov %eax,%ecx;");
    asm("loc_6C068B5: mov %ecx,%edx;");
    asm("loc_6C068B7: shr $2,%ecx;");
    asm("loc_6C068BA: mov %edi,0x18(%esp);");
    asm("loc_6C068BE: rep movsl (%esi),(%edi);");
    asm("loc_6C068C0: mov %edx,%ecx;");
    asm("loc_6C068C2: and $3,%ecx;");
    asm("loc_6C068C5: rep movsb (%esi),(%edi);");
    asm("loc_6C068C7: mov 0x18(%esp),%ecx;");
    asm("loc_6C068CB: mov 0x14(%ebp),%edx;");
    asm("loc_6C068CE: add %eax,%ecx;");
    asm("loc_6C068D0: push %ebx;");
    asm("loc_6C068D1: lea 0x18(%ebp),%eax;");
    asm("loc_6C068D4: push %edx;");
    asm("loc_6C068D5: mov %ecx,(%eax);");
    asm("loc_6C068D7: push %eax;");
    asm("loc_6C068D8: mov %ebp,%ecx;");
    asm("loc_6C068DA: call _sub_6BEBEA0;");
    asm("loc_6C068DF: test %eax,%eax;");
    asm("loc_6C068E1: mov %eax,0x1C(%ebp);");
    asm("loc_6C068E4: je loc_6C068F2;");
    asm("loc_6C068E6: pop %edi;");
    asm("loc_6C068E7: pop %esi;");
    asm("loc_6C068E8: pop %ebp;");
    asm("loc_6C068E9: mov $0x16,%eax;");
    asm("loc_6C068EE: pop %ebx;");
    asm("loc_6C068EF: ret $0xC;");
    asm("loc_6C068F2: mov (%ebx),%eax;");
    asm("loc_6C068F4: mov 0x1C(%esp),%ecx;");
    asm("loc_6C068F8: mov %eax,(%ecx);");
    asm("loc_6C068FA: mov 0xC(%ebp),%edx;");
    asm("loc_6C068FD: push %edx;");
    asm("loc_6C068FE: call _sub_6BEC3B0;");
    asm("loc_6C06903: mov %eax,%ecx;");
    asm("loc_6C06905: mov (%ecx),%esi;");
    asm("loc_6C06907: mov 0x18(%ecx),%edx;");
    asm("loc_6C0690A: add $4,%esp;");
    asm("loc_6C0690D: inc %esi;");
    asm("loc_6C0690E: mov %esi,(%ecx);");
    asm("loc_6C06910: mov (%ebx),%eax;");
    asm("loc_6C06912: add %eax,%edx;");
    asm("loc_6C06914: mov 0x10(%ecx),%eax;");
    asm("loc_6C06917: mov %edx,0x18(%ecx);");
    asm("loc_6C0691A: mov (%ebx),%ebx;");
    asm("loc_6C0691C: cmp %eax,%ebx;");
    asm("loc_6C0691E: jbe loc_6C06923;");
    asm("loc_6C06920: mov %ebx,0x10(%ecx);");
    asm("loc_6C06923: mov 0x18(%ecx),%eax;");
    asm("loc_6C06926: xor %edx,%edx;");
    asm("loc_6C06928: div %esi;");
    asm("loc_6C0692A: pop %edi;");
    asm("loc_6C0692B: pop %esi;");
    asm("loc_6C0692C: pop %ebp;");
    asm("loc_6C0692D: pop %ebx;");
    asm("loc_6C0692E: mov %eax,8(%ecx);");
    asm("loc_6C06931: xor %eax,%eax;");
    asm("loc_6C06933: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06940() // _sub_6C06940
{
    __DEBUG_ASM(6C06940);
    // chunk 0x6C06940 _sub_6C06940
    asm("loc_6C06940: mov 4(%esp),%eax;");
    asm("loc_6C06944: push %ebx;");
    asm("loc_6C06945: push %ebp;");
    asm("loc_6C06946: push %esi;");
    asm("loc_6C06947: push %edi;");
    asm("loc_6C06948: mov 0x18(%esp),%edi;");
    asm("loc_6C0694C: mov %ecx,%ebp;");
    asm("loc_6C0694E: lea 0x10(%ebp),%ebx;");
    asm("loc_6C06951: push %ebx;");
    asm("loc_6C06952: push %edi;");
    asm("loc_6C06953: lea 0x18(%ebp),%esi;");
    asm("loc_6C06956: push %esi;");
    asm("loc_6C06957: mov %edi,4(%ebx);");
    asm("loc_6C0695A: mov %eax,8(%ebx);");
    asm("loc_6C0695D: movl $0,(%ebx);");
    asm("loc_6C06963: movl $0,0xC(%ebx);");
    asm("loc_6C0696A: call _sub_6BEBE90;");
    asm("loc_6C0696F: test %eax,%eax;");
    asm("loc_6C06971: mov %eax,0x1C(%ebp);");
    asm("loc_6C06974: je loc_6C06982;");
    asm("loc_6C06976: pop %edi;");
    asm("loc_6C06977: pop %esi;");
    asm("loc_6C06978: pop %ebp;");
    asm("loc_6C06979: mov $0x17,%eax;");
    asm("loc_6C0697E: pop %ebx;");
    asm("loc_6C0697F: ret $0xC;");
    asm("loc_6C06982: mov (%ebx),%edx;");
    asm("loc_6C06984: mov 4(%ebx),%ecx;");
    asm("loc_6C06987: add $4,%edx;");
    asm("loc_6C0698A: mov %edx,%eax;");
    asm("loc_6C0698C: cmp %ecx,%eax;");
    asm("loc_6C0698E: mov %edx,(%ebx);");
    asm("loc_6C06990: jbe loc_6C06999;");
    asm("loc_6C06992: movl $0x17,0xC(%ebx);");
    asm("loc_6C06999: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0699C: test %eax,%eax;");
    asm("loc_6C0699E: jne loc_6C06A79;");
    asm("loc_6C069A4: mov (%esi),%eax;");
    asm("loc_6C069A6: mov (%eax),%ecx;");
    asm("loc_6C069A8: add $4,%eax;");
    asm("loc_6C069AB: mov %eax,(%esi);");
    asm("loc_6C069AD: mov %ecx,%eax;");
    asm("loc_6C069AF: test %eax,%eax;");
    asm("loc_6C069B1: mov %ecx,0x24(%ebp);");
    asm("loc_6C069B4: jbe loc_6C06A0F;");
    asm("loc_6C069B6: push %eax;");
    asm("loc_6C069B7: call _sub_6C09D26;");
    asm("loc_6C069BC: mov 0x24(%ebp),%edx;");
    asm("loc_6C069BF: mov %eax,0x20(%ebp);");
    asm("loc_6C069C2: mov (%ebx),%edi;");
    asm("loc_6C069C4: mov 4(%ebx),%ecx;");
    asm("loc_6C069C7: add %edx,%edi;");
    asm("loc_6C069C9: mov %edi,%eax;");
    asm("loc_6C069CB: add $4,%esp;");
    asm("loc_6C069CE: cmp %ecx,%eax;");
    asm("loc_6C069D0: mov %edi,(%ebx);");
    asm("loc_6C069D2: jbe loc_6C069DB;");
    asm("loc_6C069D4: movl $0x17,0xC(%ebx);");
    asm("loc_6C069DB: mov 0x1C(%ebp),%eax;");
    asm("loc_6C069DE: test %eax,%eax;");
    asm("loc_6C069E0: jne loc_6C06A79;");
    asm("loc_6C069E6: mov 0x24(%ebp),%eax;");
    asm("loc_6C069E9: mov (%esi),%esi;");
    asm("loc_6C069EB: mov 0x20(%ebp),%edi;");
    asm("loc_6C069EE: mov %eax,%ecx;");
    asm("loc_6C069F0: mov %ecx,%edx;");
    asm("loc_6C069F2: shr $2,%ecx;");
    asm("loc_6C069F5: mov %esi,0x14(%esp);");
    asm("loc_6C069F9: rep movsl (%esi),(%edi);");
    asm("loc_6C069FB: mov %edx,%ecx;");
    asm("loc_6C069FD: and $3,%ecx;");
    asm("loc_6C06A00: rep movsb (%esi),(%edi);");
    asm("loc_6C06A02: mov 0x14(%esp),%ecx;");
    asm("loc_6C06A06: mov 0x18(%esp),%edi;");
    asm("loc_6C06A0A: add %eax,%ecx;");
    asm("loc_6C06A0C: mov %ecx,0x18(%ebp);");
    asm("loc_6C06A0F: push %ebx;");
    asm("loc_6C06A10: push %edi;");
    asm("loc_6C06A11: lea 0x18(%ebp),%eax;");
    asm("loc_6C06A14: push %eax;");
    asm("loc_6C06A15: mov %ebp,%ecx;");
    asm("loc_6C06A17: call _sub_6BEBEB0;");
    asm("loc_6C06A1C: test %eax,%eax;");
    asm("loc_6C06A1E: mov %eax,0x1C(%ebp);");
    asm("loc_6C06A21: je loc_6C06A2F;");
    asm("loc_6C06A23: pop %edi;");
    asm("loc_6C06A24: pop %esi;");
    asm("loc_6C06A25: pop %ebp;");
    asm("loc_6C06A26: mov $0x17,%eax;");
    asm("loc_6C06A2B: pop %ebx;");
    asm("loc_6C06A2C: ret $0xC;");
    asm("loc_6C06A2F: mov (%ebx),%edx;");
    asm("loc_6C06A31: mov 0x1C(%esp),%eax;");
    asm("loc_6C06A35: mov %edx,(%eax);");
    asm("loc_6C06A37: mov 0xC(%ebp),%ecx;");
    asm("loc_6C06A3A: push %ecx;");
    asm("loc_6C06A3B: call _sub_6BEC3B0;");
    asm("loc_6C06A40: mov %eax,%ecx;");
    asm("loc_6C06A42: mov 4(%ecx),%edx;");
    asm("loc_6C06A45: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C06A48: mov 0x14(%ecx),%eax;");
    asm("loc_6C06A4B: add $4,%esp;");
    asm("loc_6C06A4E: inc %edx;");
    asm("loc_6C06A4F: mov %edx,4(%ecx);");
    asm("loc_6C06A52: mov %edx,%esi;");
    asm("loc_6C06A54: mov (%ebx),%edx;");
    asm("loc_6C06A56: add $2,%edx;");
    asm("loc_6C06A59: add %edx,%ebp;");
    asm("loc_6C06A5B: mov %ebp,0x1C(%ecx);");
    asm("loc_6C06A5E: mov (%ebx),%ebx;");
    asm("loc_6C06A60: add $2,%eax;");
    asm("loc_6C06A63: cmp %eax,%ebx;");
    asm("loc_6C06A65: jbe loc_6C06A6D;");
    asm("loc_6C06A67: add $2,%ebx;");
    asm("loc_6C06A6A: mov %ebx,0x14(%ecx);");
    asm("loc_6C06A6D: mov 0x1C(%ecx),%eax;");
    asm("loc_6C06A70: xor %edx,%edx;");
    asm("loc_6C06A72: div %esi;");
    asm("loc_6C06A74: mov %eax,0xC(%ecx);");
    asm("loc_6C06A77: xor %eax,%eax;");
    asm("loc_6C06A79: pop %edi;");
    asm("loc_6C06A7A: pop %esi;");
    asm("loc_6C06A7B: pop %ebp;");
    asm("loc_6C06A7C: pop %ebx;");
    asm("loc_6C06A7D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06A80() // _sub_6C06A80
{
    __DEBUG_ASM(6C06A80);
    // chunk 0x6C06A80 _sub_6C06A80
    asm("loc_6C06A80: push %ebx;");
    asm("loc_6C06A81: mov 8(%esp),%ebx;");
    asm("loc_6C06A85: test %ebx,%ebx;");
    asm("loc_6C06A87: push %ebp;");
    asm("loc_6C06A88: mov %ecx,%ebp;");
    asm("loc_6C06A8A: je loc_6C06ABF;");
    asm("loc_6C06A8C: push %esi;");
    asm("loc_6C06A8D: or $0xFFFFFFFF,%ecx;");
    asm("loc_6C06A90: push %edi;");
    asm("loc_6C06A91: xor %eax,%eax;");
    asm("loc_6C06A93: mov %ebx,%edi;");
    asm("loc_6C06A95: repne scas (%edi),%al;");
    asm("loc_6C06A97: not %ecx;");
    asm("loc_6C06A99: dec %ecx;");
    asm("loc_6C06A9A: mov %ecx,%esi;");
    asm("loc_6C06A9C: inc %esi;");
    asm("loc_6C06A9D: push %esi;");
    asm("loc_6C06A9E: call _sub_6C09D26;");
    asm("loc_6C06AA3: add $4,%esp;");
    asm("loc_6C06AA6: mov %eax,0x20(%ebp);");
    asm("loc_6C06AA9: mov %ebx,%ecx;");
    asm("loc_6C06AAB: mov %eax,%edx;");
    asm("loc_6C06AAD: lea (%ecx),%ecx;");
    asm("loc_6C06AB0: mov (%ecx),%al;");
    asm("loc_6C06AB2: inc %ecx;");
    asm("loc_6C06AB3: mov %al,(%edx);");
    asm("loc_6C06AB5: inc %edx;");
    asm("loc_6C06AB6: test %al,%al;");
    asm("loc_6C06AB8: jne loc_6C06AB0;");
    asm("loc_6C06ABA: pop %edi;");
    asm("loc_6C06ABB: mov %esi,0x24(%ebp);");
    asm("loc_6C06ABE: pop %esi;");
    asm("loc_6C06ABF: pop %ebp;");
    asm("loc_6C06AC0: pop %ebx;");
    asm("loc_6C06AC1: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06AD0() // _sub_6C06AD0
{
    __DEBUG_ASM(6C06AD0);
    // chunk 0x6C06AD0 _sub_6C06AD0
    asm("loc_6C06AD0: mov _data_6C0E5C4,%eax;");
    asm("loc_6C06AD5: mov %eax,_data_6C14258;");
    asm("loc_6C06ADA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06AE0() // _sub_6C06AE0
{
    __DEBUG_ASM(6C06AE0);
    // chunk 0x6C06AE0 _sub_6C06AE0
    asm("loc_6C06AE0: mov _data_6C0E5C4,%eax;");
    asm("loc_6C06AE5: mov %eax,_data_6C1425C;");
    asm("loc_6C06AEA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06AF0() // _sub_6C06AF0
{
    __DEBUG_ASM(6C06AF0);
    // chunk 0x6C06AF0 _sub_6C06AF0
    asm("loc_6C06AF0: mov _data_6C0E5C8,%eax;");
    asm("loc_6C06AF5: mov %eax,_data_6C14254;");
    asm("loc_6C06AFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06B00() // _sub_6C06B00
{
    __DEBUG_ASM(6C06B00);
    // chunk 0x6C06B00 _sub_6C06B00
    asm("loc_6C06B00: movl $_off_6C0DB30,(%ecx);");
    asm("loc_6C06B06: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06B10() // _sub_6C06B10
{
    __DEBUG_ASM(6C06B10);
    // chunk 0x6C06B10 _sub_6C06B10
    asm("loc_6C06B10: mov 8(%esp),%eax;");
    asm("loc_6C06B14: push %ebx;");
    asm("loc_6C06B15: push %esi;");
    asm("loc_6C06B16: mov %ecx,%esi;");
    asm("loc_6C06B18: mov 0xC(%esp),%ecx;");
    asm("loc_6C06B1C: push %edi;");
    asm("loc_6C06B1D: lea 0x10(%esi),%edi;");
    asm("loc_6C06B20: mov %eax,4(%edi);");
    asm("loc_6C06B23: mov (%ecx),%edx;");
    asm("loc_6C06B25: mov %edx,8(%edi);");
    asm("loc_6C06B28: movl $0,(%edi);");
    asm("loc_6C06B2E: movl $0,0xC(%edi);");
    asm("loc_6C06B35: mov 0x14(%esi),%eax;");
    asm("loc_6C06B38: push %edi;");
    asm("loc_6C06B39: push %eax;");
    asm("loc_6C06B3A: lea 0x18(%esi),%ebx;");
    asm("loc_6C06B3D: push %ebx;");
    asm("loc_6C06B3E: mov %esi,%ecx;");
    asm("loc_6C06B40: call _sub_6BEBE50;");
    asm("loc_6C06B45: test %eax,%eax;");
    asm("loc_6C06B47: mov %eax,0x1C(%esi);");
    asm("loc_6C06B4A: je loc_6C06B57;");
    asm("loc_6C06B4C: pop %edi;");
    asm("loc_6C06B4D: pop %esi;");
    asm("loc_6C06B4E: mov $0x16,%eax;");
    asm("loc_6C06B53: pop %ebx;");
    asm("loc_6C06B54: ret $0xC;");
    asm("loc_6C06B57: mov 0x14(%esi),%ecx;");
    asm("loc_6C06B5A: push %edi;");
    asm("loc_6C06B5B: push %ecx;");
    asm("loc_6C06B5C: push %ebx;");
    asm("loc_6C06B5D: mov %esi,%ecx;");
    asm("loc_6C06B5F: call _sub_6BEBEA0;");
    asm("loc_6C06B64: test %eax,%eax;");
    asm("loc_6C06B66: mov %eax,0x1C(%esi);");
    asm("loc_6C06B69: je loc_6C06B76;");
    asm("loc_6C06B6B: pop %edi;");
    asm("loc_6C06B6C: pop %esi;");
    asm("loc_6C06B6D: mov $0x16,%eax;");
    asm("loc_6C06B72: pop %ebx;");
    asm("loc_6C06B73: ret $0xC;");
    asm("loc_6C06B76: mov (%edi),%edx;");
    asm("loc_6C06B78: mov 0x18(%esp),%eax;");
    asm("loc_6C06B7C: mov %edx,(%eax);");
    asm("loc_6C06B7E: mov 0xC(%esi),%ecx;");
    asm("loc_6C06B81: push %ecx;");
    asm("loc_6C06B82: call _sub_6BEC3B0;");
    asm("loc_6C06B87: mov %eax,%ecx;");
    asm("loc_6C06B89: mov (%ecx),%eax;");
    asm("loc_6C06B8B: mov 0x18(%ecx),%ebx;");
    asm("loc_6C06B8E: add $4,%esp;");
    asm("loc_6C06B91: inc %eax;");
    asm("loc_6C06B92: mov %eax,(%ecx);");
    asm("loc_6C06B94: mov (%edi),%edx;");
    asm("loc_6C06B96: add %edx,%ebx;");
    asm("loc_6C06B98: mov %eax,%esi;");
    asm("loc_6C06B9A: mov 0x10(%ecx),%eax;");
    asm("loc_6C06B9D: mov %ebx,0x18(%ecx);");
    asm("loc_6C06BA0: mov (%edi),%edi;");
    asm("loc_6C06BA2: cmp %eax,%edi;");
    asm("loc_6C06BA4: jbe loc_6C06BA9;");
    asm("loc_6C06BA6: mov %edi,0x10(%ecx);");
    asm("loc_6C06BA9: mov 0x18(%ecx),%eax;");
    asm("loc_6C06BAC: xor %edx,%edx;");
    asm("loc_6C06BAE: div %esi;");
    asm("loc_6C06BB0: pop %edi;");
    asm("loc_6C06BB1: pop %esi;");
    asm("loc_6C06BB2: pop %ebx;");
    asm("loc_6C06BB3: mov %eax,8(%ecx);");
    asm("loc_6C06BB6: xor %eax,%eax;");
    asm("loc_6C06BB8: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06BC0() // _sub_6C06BC0
{
    __DEBUG_ASM(6C06BC0);
    // chunk 0x6C06BC0 _sub_6C06BC0
    asm("loc_6C06BC0: mov 4(%esp),%eax;");
    asm("loc_6C06BC4: push %ebx;");
    asm("loc_6C06BC5: mov 0xC(%esp),%ebx;");
    asm("loc_6C06BC9: push %ebp;");
    asm("loc_6C06BCA: push %esi;");
    asm("loc_6C06BCB: push %edi;");
    asm("loc_6C06BCC: mov %ecx,%edi;");
    asm("loc_6C06BCE: lea 0x10(%edi),%esi;");
    asm("loc_6C06BD1: push %esi;");
    asm("loc_6C06BD2: push %ebx;");
    asm("loc_6C06BD3: lea 0x18(%edi),%ebp;");
    asm("loc_6C06BD6: push %ebp;");
    asm("loc_6C06BD7: mov %ebx,4(%esi);");
    asm("loc_6C06BDA: mov %eax,8(%esi);");
    asm("loc_6C06BDD: movl $0,(%esi);");
    asm("loc_6C06BE3: movl $0,0xC(%esi);");
    asm("loc_6C06BEA: call _sub_6BEBE90;");
    asm("loc_6C06BEF: test %eax,%eax;");
    asm("loc_6C06BF1: mov %eax,0x1C(%edi);");
    asm("loc_6C06BF4: je loc_6C06C02;");
    asm("loc_6C06BF6: pop %edi;");
    asm("loc_6C06BF7: pop %esi;");
    asm("loc_6C06BF8: pop %ebp;");
    asm("loc_6C06BF9: mov $0x17,%eax;");
    asm("loc_6C06BFE: pop %ebx;");
    asm("loc_6C06BFF: ret $0xC;");
    asm("loc_6C06C02: push %esi;");
    asm("loc_6C06C03: push %ebx;");
    asm("loc_6C06C04: push %ebp;");
    asm("loc_6C06C05: mov %edi,%ecx;");
    asm("loc_6C06C07: call _sub_6BEBEB0;");
    asm("loc_6C06C0C: test %eax,%eax;");
    asm("loc_6C06C0E: mov %eax,0x1C(%edi);");
    asm("loc_6C06C11: je loc_6C06C1F;");
    asm("loc_6C06C13: pop %edi;");
    asm("loc_6C06C14: pop %esi;");
    asm("loc_6C06C15: pop %ebp;");
    asm("loc_6C06C16: mov $0x17,%eax;");
    asm("loc_6C06C1B: pop %ebx;");
    asm("loc_6C06C1C: ret $0xC;");
    asm("loc_6C06C1F: mov (%esi),%ecx;");
    asm("loc_6C06C21: mov 0x1C(%esp),%edx;");
    asm("loc_6C06C25: mov %ecx,(%edx);");
    asm("loc_6C06C27: mov 0xC(%edi),%eax;");
    asm("loc_6C06C2A: push %eax;");
    asm("loc_6C06C2B: call _sub_6BEC3B0;");
    asm("loc_6C06C30: mov %eax,%ecx;");
    asm("loc_6C06C32: mov 4(%ecx),%edx;");
    asm("loc_6C06C35: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C06C38: mov 0x14(%ecx),%eax;");
    asm("loc_6C06C3B: add $4,%esp;");
    asm("loc_6C06C3E: inc %edx;");
    asm("loc_6C06C3F: mov %edx,4(%ecx);");
    asm("loc_6C06C42: mov %edx,%edi;");
    asm("loc_6C06C44: mov (%esi),%edx;");
    asm("loc_6C06C46: add $2,%edx;");
    asm("loc_6C06C49: add %edx,%ebp;");
    asm("loc_6C06C4B: mov %ebp,0x1C(%ecx);");
    asm("loc_6C06C4E: mov (%esi),%esi;");
    asm("loc_6C06C50: add $2,%eax;");
    asm("loc_6C06C53: cmp %eax,%esi;");
    asm("loc_6C06C55: jbe loc_6C06C5D;");
    asm("loc_6C06C57: add $2,%esi;");
    asm("loc_6C06C5A: mov %esi,0x14(%ecx);");
    asm("loc_6C06C5D: mov 0x1C(%ecx),%eax;");
    asm("loc_6C06C60: xor %edx,%edx;");
    asm("loc_6C06C62: div %edi;");
    asm("loc_6C06C64: pop %edi;");
    asm("loc_6C06C65: pop %esi;");
    asm("loc_6C06C66: pop %ebp;");
    asm("loc_6C06C67: pop %ebx;");
    asm("loc_6C06C68: mov %eax,0xC(%ecx);");
    asm("loc_6C06C6B: xor %eax,%eax;");
    asm("loc_6C06C6D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06C70() // _sub_6C06C70
{
    __DEBUG_ASM(6C06C70);
    // chunk 0x6C06C70 _sub_6C06C70
    asm("loc_6C06C70: mov _data_6C0E5D0,%eax;");
    asm("loc_6C06C75: mov %eax,_data_6C14268;");
    asm("loc_6C06C7A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06C80() // _sub_6C06C80
{
    __DEBUG_ASM(6C06C80);
    // chunk 0x6C06C80 _sub_6C06C80
    asm("loc_6C06C80: mov _data_6C0E5D0,%eax;");
    asm("loc_6C06C85: mov %eax,_data_6C1426C;");
    asm("loc_6C06C8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06C90() // _sub_6C06C90
{
    __DEBUG_ASM(6C06C90);
    // chunk 0x6C06C90 _sub_6C06C90
    asm("loc_6C06C90: mov _data_6C0E5D4,%eax;");
    asm("loc_6C06C95: mov %eax,_data_6C14264;");
    asm("loc_6C06C9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06CA0() // _sub_6C06CA0
{
    __DEBUG_ASM(6C06CA0);
    // chunk 0x6C06CA0 _sub_6C06CA0
    asm("loc_6C06CA0: mov 8(%esp),%eax;");
    asm("loc_6C06CA4: push %ebx;");
    asm("loc_6C06CA5: push %esi;");
    asm("loc_6C06CA6: push %edi;");
    asm("loc_6C06CA7: mov %ecx,%edi;");
    asm("loc_6C06CA9: mov 0x10(%esp),%ecx;");
    asm("loc_6C06CAD: lea 0x10(%edi),%esi;");
    asm("loc_6C06CB0: mov %eax,4(%esi);");
    asm("loc_6C06CB3: mov (%ecx),%edx;");
    asm("loc_6C06CB5: mov %edx,8(%esi);");
    asm("loc_6C06CB8: movl $0,(%esi);");
    asm("loc_6C06CBE: movl $0,0xC(%esi);");
    asm("loc_6C06CC5: mov 0x14(%edi),%eax;");
    asm("loc_6C06CC8: push %esi;");
    asm("loc_6C06CC9: push %eax;");
    asm("loc_6C06CCA: lea 0x18(%edi),%ebx;");
    asm("loc_6C06CCD: push %ebx;");
    asm("loc_6C06CCE: mov %edi,%ecx;");
    asm("loc_6C06CD0: call _sub_6BEBE50;");
    asm("loc_6C06CD5: test %eax,%eax;");
    asm("loc_6C06CD7: mov %eax,0x1C(%edi);");
    asm("loc_6C06CDA: je loc_6C06CE7;");
    asm("loc_6C06CDC: pop %edi;");
    asm("loc_6C06CDD: pop %esi;");
    asm("loc_6C06CDE: mov $0x16,%eax;");
    asm("loc_6C06CE3: pop %ebx;");
    asm("loc_6C06CE4: ret $0xC;");
    asm("loc_6C06CE7: mov (%esi),%edx;");
    asm("loc_6C06CE9: mov 4(%esi),%ecx;");
    asm("loc_6C06CEC: add $4,%edx;");
    asm("loc_6C06CEF: mov %edx,%eax;");
    asm("loc_6C06CF1: cmp %ecx,%eax;");
    asm("loc_6C06CF3: mov %edx,(%esi);");
    asm("loc_6C06CF5: jbe loc_6C06CFE;");
    asm("loc_6C06CF7: movl $0x16,0xC(%esi);");
    asm("loc_6C06CFE: mov 0x1C(%edi),%eax;");
    asm("loc_6C06D01: test %eax,%eax;");
    asm("loc_6C06D03: je loc_6C06D10;");
    asm("loc_6C06D05: pop %edi;");
    asm("loc_6C06D06: pop %esi;");
    asm("loc_6C06D07: mov $0x16,%eax;");
    asm("loc_6C06D0C: pop %ebx;");
    asm("loc_6C06D0D: ret $0xC;");
    asm("loc_6C06D10: mov (%ebx),%eax;");
    asm("loc_6C06D12: mov 0x20(%edi),%ecx;");
    asm("loc_6C06D15: mov %ecx,(%eax);");
    asm("loc_6C06D17: mov 0x14(%edi),%edx;");
    asm("loc_6C06D1A: push %esi;");
    asm("loc_6C06D1B: push %edx;");
    asm("loc_6C06D1C: add $4,%eax;");
    asm("loc_6C06D1F: push %ebx;");
    asm("loc_6C06D20: mov %edi,%ecx;");
    asm("loc_6C06D22: mov %eax,(%ebx);");
    asm("loc_6C06D24: call _sub_6BEBEA0;");
    asm("loc_6C06D29: test %eax,%eax;");
    asm("loc_6C06D2B: mov %eax,0x1C(%edi);");
    asm("loc_6C06D2E: je loc_6C06D3B;");
    asm("loc_6C06D30: pop %edi;");
    asm("loc_6C06D31: pop %esi;");
    asm("loc_6C06D32: mov $0x16,%eax;");
    asm("loc_6C06D37: pop %ebx;");
    asm("loc_6C06D38: ret $0xC;");
    asm("loc_6C06D3B: mov (%esi),%eax;");
    asm("loc_6C06D3D: mov 0x18(%esp),%ecx;");
    asm("loc_6C06D41: mov %eax,(%ecx);");
    asm("loc_6C06D43: mov 0xC(%edi),%edx;");
    asm("loc_6C06D46: push %edx;");
    asm("loc_6C06D47: call _sub_6BEC3B0;");
    asm("loc_6C06D4C: mov %eax,%ecx;");
    asm("loc_6C06D4E: mov (%ecx),%edi;");
    asm("loc_6C06D50: mov 0x18(%ecx),%edx;");
    asm("loc_6C06D53: add $4,%esp;");
    asm("loc_6C06D56: inc %edi;");
    asm("loc_6C06D57: mov %edi,(%ecx);");
    asm("loc_6C06D59: mov (%esi),%eax;");
    asm("loc_6C06D5B: add %eax,%edx;");
    asm("loc_6C06D5D: mov 0x10(%ecx),%eax;");
    asm("loc_6C06D60: mov %edx,0x18(%ecx);");
    asm("loc_6C06D63: mov (%esi),%esi;");
    asm("loc_6C06D65: cmp %eax,%esi;");
    asm("loc_6C06D67: jbe loc_6C06D6C;");
    asm("loc_6C06D69: mov %esi,0x10(%ecx);");
    asm("loc_6C06D6C: mov 0x18(%ecx),%eax;");
    asm("loc_6C06D6F: xor %edx,%edx;");
    asm("loc_6C06D71: div %edi;");
    asm("loc_6C06D73: pop %edi;");
    asm("loc_6C06D74: pop %esi;");
    asm("loc_6C06D75: pop %ebx;");
    asm("loc_6C06D76: mov %eax,8(%ecx);");
    asm("loc_6C06D79: xor %eax,%eax;");
    asm("loc_6C06D7B: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06D80() // _sub_6C06D80
{
    __DEBUG_ASM(6C06D80);
    // chunk 0x6C06D80 _sub_6C06D80
    asm("loc_6C06D80: mov 4(%esp),%eax;");
    asm("loc_6C06D84: push %ebx;");
    asm("loc_6C06D85: push %ebp;");
    asm("loc_6C06D86: mov 0x10(%esp),%ebp;");
    asm("loc_6C06D8A: push %esi;");
    asm("loc_6C06D8B: push %edi;");
    asm("loc_6C06D8C: mov %ecx,%edi;");
    asm("loc_6C06D8E: lea 0x10(%edi),%esi;");
    asm("loc_6C06D91: push %esi;");
    asm("loc_6C06D92: push %ebp;");
    asm("loc_6C06D93: lea 0x18(%edi),%ebx;");
    asm("loc_6C06D96: push %ebx;");
    asm("loc_6C06D97: mov %ebp,4(%esi);");
    asm("loc_6C06D9A: mov %eax,8(%esi);");
    asm("loc_6C06D9D: movl $0,(%esi);");
    asm("loc_6C06DA3: movl $0,0xC(%esi);");
    asm("loc_6C06DAA: call _sub_6BEBE90;");
    asm("loc_6C06DAF: test %eax,%eax;");
    asm("loc_6C06DB1: mov %eax,0x1C(%edi);");
    asm("loc_6C06DB4: je loc_6C06DC2;");
    asm("loc_6C06DB6: pop %edi;");
    asm("loc_6C06DB7: pop %esi;");
    asm("loc_6C06DB8: pop %ebp;");
    asm("loc_6C06DB9: mov $0x17,%eax;");
    asm("loc_6C06DBE: pop %ebx;");
    asm("loc_6C06DBF: ret $0xC;");
    asm("loc_6C06DC2: mov (%esi),%edx;");
    asm("loc_6C06DC4: mov 4(%esi),%ecx;");
    asm("loc_6C06DC7: add $4,%edx;");
    asm("loc_6C06DCA: mov %edx,%eax;");
    asm("loc_6C06DCC: cmp %ecx,%eax;");
    asm("loc_6C06DCE: mov %edx,(%esi);");
    asm("loc_6C06DD0: jbe loc_6C06DD9;");
    asm("loc_6C06DD2: movl $0x17,0xC(%esi);");
    asm("loc_6C06DD9: mov 0x1C(%edi),%eax;");
    asm("loc_6C06DDC: test %eax,%eax;");
    asm("loc_6C06DDE: jne loc_6C06E53;");
    asm("loc_6C06DE0: mov (%ebx),%eax;");
    asm("loc_6C06DE2: mov (%eax),%ecx;");
    asm("loc_6C06DE4: push %esi;");
    asm("loc_6C06DE5: push %ebp;");
    asm("loc_6C06DE6: mov %ecx,0x20(%edi);");
    asm("loc_6C06DE9: add $4,%eax;");
    asm("loc_6C06DEC: push %ebx;");
    asm("loc_6C06DED: mov %edi,%ecx;");
    asm("loc_6C06DEF: mov %eax,(%ebx);");
    asm("loc_6C06DF1: call _sub_6BEBEB0;");
    asm("loc_6C06DF6: test %eax,%eax;");
    asm("loc_6C06DF8: mov %eax,0x1C(%edi);");
    asm("loc_6C06DFB: je loc_6C06E09;");
    asm("loc_6C06DFD: pop %edi;");
    asm("loc_6C06DFE: pop %esi;");
    asm("loc_6C06DFF: pop %ebp;");
    asm("loc_6C06E00: mov $0x17,%eax;");
    asm("loc_6C06E05: pop %ebx;");
    asm("loc_6C06E06: ret $0xC;");
    asm("loc_6C06E09: mov (%esi),%edx;");
    asm("loc_6C06E0B: mov 0x1C(%esp),%eax;");
    asm("loc_6C06E0F: mov %edx,(%eax);");
    asm("loc_6C06E11: mov 0xC(%edi),%ecx;");
    asm("loc_6C06E14: push %ecx;");
    asm("loc_6C06E15: call _sub_6BEC3B0;");
    asm("loc_6C06E1A: mov %eax,%ecx;");
    asm("loc_6C06E1C: mov 4(%ecx),%edx;");
    asm("loc_6C06E1F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C06E22: mov 0x14(%ecx),%eax;");
    asm("loc_6C06E25: add $4,%esp;");
    asm("loc_6C06E28: inc %edx;");
    asm("loc_6C06E29: mov %edx,4(%ecx);");
    asm("loc_6C06E2C: mov %edx,%edi;");
    asm("loc_6C06E2E: mov (%esi),%edx;");
    asm("loc_6C06E30: add $2,%edx;");
    asm("loc_6C06E33: add %edx,%ebp;");
    asm("loc_6C06E35: mov %ebp,0x1C(%ecx);");
    asm("loc_6C06E38: mov (%esi),%esi;");
    asm("loc_6C06E3A: add $2,%eax;");
    asm("loc_6C06E3D: cmp %eax,%esi;");
    asm("loc_6C06E3F: jbe loc_6C06E47;");
    asm("loc_6C06E41: add $2,%esi;");
    asm("loc_6C06E44: mov %esi,0x14(%ecx);");
    asm("loc_6C06E47: mov 0x1C(%ecx),%eax;");
    asm("loc_6C06E4A: xor %edx,%edx;");
    asm("loc_6C06E4C: div %edi;");
    asm("loc_6C06E4E: mov %eax,0xC(%ecx);");
    asm("loc_6C06E51: xor %eax,%eax;");
    asm("loc_6C06E53: pop %edi;");
    asm("loc_6C06E54: pop %esi;");
    asm("loc_6C06E55: pop %ebp;");
    asm("loc_6C06E56: pop %ebx;");
    asm("loc_6C06E57: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06E60() // _sub_6C06E60
{
    __DEBUG_ASM(6C06E60);
    // chunk 0x6C06E60 _sub_6C06E60
    asm("loc_6C06E60: mov _data_6C0E5DC,%eax;");
    asm("loc_6C06E65: mov %eax,_data_6C14278;");
    asm("loc_6C06E6A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06E70() // _sub_6C06E70
{
    __DEBUG_ASM(6C06E70);
    // chunk 0x6C06E70 _sub_6C06E70
    asm("loc_6C06E70: mov _data_6C0E5DC,%eax;");
    asm("loc_6C06E75: mov %eax,_data_6C1427C;");
    asm("loc_6C06E7A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06E80() // _sub_6C06E80
{
    __DEBUG_ASM(6C06E80);
    // chunk 0x6C06E80 _sub_6C06E80
    asm("loc_6C06E80: mov _data_6C0E5E0,%eax;");
    asm("loc_6C06E85: mov %eax,_data_6C14274;");
    asm("loc_6C06E8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06E90() // _sub_6C06E90
{
    __DEBUG_ASM(6C06E90);
    // chunk 0x6C06E90 _sub_6C06E90
    asm("loc_6C06E90: mov 8(%esp),%eax;");
    asm("loc_6C06E94: push %ebx;");
    asm("loc_6C06E95: push %esi;");
    asm("loc_6C06E96: push %edi;");
    asm("loc_6C06E97: mov %ecx,%edi;");
    asm("loc_6C06E99: mov 0x10(%esp),%ecx;");
    asm("loc_6C06E9D: lea 0x10(%edi),%esi;");
    asm("loc_6C06EA0: mov %eax,4(%esi);");
    asm("loc_6C06EA3: mov (%ecx),%edx;");
    asm("loc_6C06EA5: mov %edx,8(%esi);");
    asm("loc_6C06EA8: movl $0,(%esi);");
    asm("loc_6C06EAE: movl $0,0xC(%esi);");
    asm("loc_6C06EB5: mov 0x14(%edi),%eax;");
    asm("loc_6C06EB8: push %esi;");
    asm("loc_6C06EB9: push %eax;");
    asm("loc_6C06EBA: lea 0x18(%edi),%ebx;");
    asm("loc_6C06EBD: push %ebx;");
    asm("loc_6C06EBE: mov %edi,%ecx;");
    asm("loc_6C06EC0: call _sub_6BEBE50;");
    asm("loc_6C06EC5: test %eax,%eax;");
    asm("loc_6C06EC7: mov %eax,0x1C(%edi);");
    asm("loc_6C06ECA: je loc_6C06ED7;");
    asm("loc_6C06ECC: pop %edi;");
    asm("loc_6C06ECD: pop %esi;");
    asm("loc_6C06ECE: mov $0x16,%eax;");
    asm("loc_6C06ED3: pop %ebx;");
    asm("loc_6C06ED4: ret $0xC;");
    asm("loc_6C06ED7: mov (%esi),%edx;");
    asm("loc_6C06ED9: mov 4(%esi),%ecx;");
    asm("loc_6C06EDC: add $4,%edx;");
    asm("loc_6C06EDF: mov %edx,%eax;");
    asm("loc_6C06EE1: cmp %ecx,%eax;");
    asm("loc_6C06EE3: mov %edx,(%esi);");
    asm("loc_6C06EE5: jbe loc_6C06EEE;");
    asm("loc_6C06EE7: movl $0x16,0xC(%esi);");
    asm("loc_6C06EEE: mov 0x1C(%edi),%eax;");
    asm("loc_6C06EF1: test %eax,%eax;");
    asm("loc_6C06EF3: je loc_6C06F00;");
    asm("loc_6C06EF5: pop %edi;");
    asm("loc_6C06EF6: pop %esi;");
    asm("loc_6C06EF7: mov $0x16,%eax;");
    asm("loc_6C06EFC: pop %ebx;");
    asm("loc_6C06EFD: ret $0xC;");
    asm("loc_6C06F00: mov (%ebx),%eax;");
    asm("loc_6C06F02: mov 0x20(%edi),%ecx;");
    asm("loc_6C06F05: mov %ecx,(%eax);");
    asm("loc_6C06F07: add $4,%eax;");
    asm("loc_6C06F0A: mov %eax,(%ebx);");
    asm("loc_6C06F0C: mov (%esi),%edx;");
    asm("loc_6C06F0E: mov 4(%esi),%ecx;");
    asm("loc_6C06F11: add $2,%edx;");
    asm("loc_6C06F14: mov %edx,%eax;");
    asm("loc_6C06F16: cmp %ecx,%eax;");
    asm("loc_6C06F18: mov %edx,(%esi);");
    asm("loc_6C06F1A: jbe loc_6C06F23;");
    asm("loc_6C06F1C: movl $0x16,0xC(%esi);");
    asm("loc_6C06F23: mov 0x1C(%edi),%eax;");
    asm("loc_6C06F26: test %eax,%eax;");
    asm("loc_6C06F28: je loc_6C06F35;");
    asm("loc_6C06F2A: pop %edi;");
    asm("loc_6C06F2B: pop %esi;");
    asm("loc_6C06F2C: mov $0x16,%eax;");
    asm("loc_6C06F31: pop %ebx;");
    asm("loc_6C06F32: ret $0xC;");
    asm("loc_6C06F35: mov (%ebx),%eax;");
    asm("loc_6C06F37: mov 0x24(%edi),%dx;");
    asm("loc_6C06F3B: mov %dx,(%eax);");
    asm("loc_6C06F3E: add $2,%eax;");
    asm("loc_6C06F41: mov %eax,(%ebx);");
    asm("loc_6C06F43: mov 0x14(%edi),%eax;");
    asm("loc_6C06F46: push %esi;");
    asm("loc_6C06F47: push %eax;");
    asm("loc_6C06F48: push %ebx;");
    asm("loc_6C06F49: mov %edi,%ecx;");
    asm("loc_6C06F4B: call _sub_6BEBEA0;");
    asm("loc_6C06F50: test %eax,%eax;");
    asm("loc_6C06F52: mov %eax,0x1C(%edi);");
    asm("loc_6C06F55: je loc_6C06F62;");
    asm("loc_6C06F57: pop %edi;");
    asm("loc_6C06F58: pop %esi;");
    asm("loc_6C06F59: mov $0x16,%eax;");
    asm("loc_6C06F5E: pop %ebx;");
    asm("loc_6C06F5F: ret $0xC;");
    asm("loc_6C06F62: mov (%esi),%ecx;");
    asm("loc_6C06F64: mov 0x18(%esp),%edx;");
    asm("loc_6C06F68: mov %ecx,(%edx);");
    asm("loc_6C06F6A: mov 0xC(%edi),%eax;");
    asm("loc_6C06F6D: push %eax;");
    asm("loc_6C06F6E: call _sub_6BEC3B0;");
    asm("loc_6C06F73: mov %eax,%ecx;");
    asm("loc_6C06F75: mov (%ecx),%eax;");
    asm("loc_6C06F77: mov 0x18(%ecx),%ebx;");
    asm("loc_6C06F7A: add $4,%esp;");
    asm("loc_6C06F7D: inc %eax;");
    asm("loc_6C06F7E: mov %eax,(%ecx);");
    asm("loc_6C06F80: mov (%esi),%edx;");
    asm("loc_6C06F82: add %edx,%ebx;");
    asm("loc_6C06F84: mov %eax,%edi;");
    asm("loc_6C06F86: mov 0x10(%ecx),%eax;");
    asm("loc_6C06F89: mov %ebx,0x18(%ecx);");
    asm("loc_6C06F8C: mov (%esi),%esi;");
    asm("loc_6C06F8E: cmp %eax,%esi;");
    asm("loc_6C06F90: jbe loc_6C06F95;");
    asm("loc_6C06F92: mov %esi,0x10(%ecx);");
    asm("loc_6C06F95: mov 0x18(%ecx),%eax;");
    asm("loc_6C06F98: xor %edx,%edx;");
    asm("loc_6C06F9A: div %edi;");
    asm("loc_6C06F9C: pop %edi;");
    asm("loc_6C06F9D: pop %esi;");
    asm("loc_6C06F9E: pop %ebx;");
    asm("loc_6C06F9F: mov %eax,8(%ecx);");
    asm("loc_6C06FA2: xor %eax,%eax;");
    asm("loc_6C06FA4: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C06FB0() // _sub_6C06FB0
{
    __DEBUG_ASM(6C06FB0);
    // chunk 0x6C06FB0 _sub_6C06FB0
    asm("loc_6C06FB0: mov 4(%esp),%eax;");
    asm("loc_6C06FB4: push %ebx;");
    asm("loc_6C06FB5: push %ebp;");
    asm("loc_6C06FB6: mov 0x10(%esp),%ebp;");
    asm("loc_6C06FBA: push %esi;");
    asm("loc_6C06FBB: push %edi;");
    asm("loc_6C06FBC: mov %ecx,%edi;");
    asm("loc_6C06FBE: lea 0x10(%edi),%esi;");
    asm("loc_6C06FC1: push %esi;");
    asm("loc_6C06FC2: push %ebp;");
    asm("loc_6C06FC3: lea 0x18(%edi),%ebx;");
    asm("loc_6C06FC6: push %ebx;");
    asm("loc_6C06FC7: mov %ebp,4(%esi);");
    asm("loc_6C06FCA: mov %eax,8(%esi);");
    asm("loc_6C06FCD: movl $0,(%esi);");
    asm("loc_6C06FD3: movl $0,0xC(%esi);");
    asm("loc_6C06FDA: call _sub_6BEBE90;");
    asm("loc_6C06FDF: test %eax,%eax;");
    asm("loc_6C06FE1: mov %eax,0x1C(%edi);");
    asm("loc_6C06FE4: je loc_6C06FF2;");
    asm("loc_6C06FE6: pop %edi;");
    asm("loc_6C06FE7: pop %esi;");
    asm("loc_6C06FE8: pop %ebp;");
    asm("loc_6C06FE9: mov $0x17,%eax;");
    asm("loc_6C06FEE: pop %ebx;");
    asm("loc_6C06FEF: ret $0xC;");
    asm("loc_6C06FF2: mov (%esi),%edx;");
    asm("loc_6C06FF4: mov 4(%esi),%ecx;");
    asm("loc_6C06FF7: add $4,%edx;");
    asm("loc_6C06FFA: mov %edx,%eax;");
    asm("loc_6C06FFC: cmp %ecx,%eax;");
    asm("loc_6C06FFE: mov %edx,(%esi);");
    asm("loc_6C07000: jbe loc_6C07009;");
    asm("loc_6C07002: movl $0x17,0xC(%esi);");
    asm("loc_6C07009: mov 0x1C(%edi),%eax;");
    asm("loc_6C0700C: test %eax,%eax;");
    asm("loc_6C0700E: jne loc_6C070B1;");
    asm("loc_6C07014: mov (%ebx),%eax;");
    asm("loc_6C07016: mov (%eax),%ecx;");
    asm("loc_6C07018: add $4,%eax;");
    asm("loc_6C0701B: mov %eax,(%ebx);");
    asm("loc_6C0701D: mov %ecx,0x20(%edi);");
    asm("loc_6C07020: mov (%esi),%edx;");
    asm("loc_6C07022: mov 4(%esi),%ecx;");
    asm("loc_6C07025: add $2,%edx;");
    asm("loc_6C07028: mov %edx,%eax;");
    asm("loc_6C0702A: cmp %ecx,%eax;");
    asm("loc_6C0702C: mov %edx,(%esi);");
    asm("loc_6C0702E: jbe loc_6C07037;");
    asm("loc_6C07030: movl $0x17,0xC(%esi);");
    asm("loc_6C07037: mov 0x1C(%edi),%eax;");
    asm("loc_6C0703A: test %eax,%eax;");
    asm("loc_6C0703C: jne loc_6C070B1;");
    asm("loc_6C0703E: mov (%ebx),%eax;");
    asm("loc_6C07040: mov (%eax),%dx;");
    asm("loc_6C07043: push %esi;");
    asm("loc_6C07044: push %ebp;");
    asm("loc_6C07045: add $2,%eax;");
    asm("loc_6C07048: push %ebx;");
    asm("loc_6C07049: mov %edi,%ecx;");
    asm("loc_6C0704B: mov %dx,0x24(%edi);");
    asm("loc_6C0704F: mov %eax,(%ebx);");
    asm("loc_6C07051: call _sub_6BEBEB0;");
    asm("loc_6C07056: test %eax,%eax;");
    asm("loc_6C07058: mov %eax,0x1C(%edi);");
    asm("loc_6C0705B: je loc_6C07069;");
    asm("loc_6C0705D: pop %edi;");
    asm("loc_6C0705E: pop %esi;");
    asm("loc_6C0705F: pop %ebp;");
    asm("loc_6C07060: mov $0x17,%eax;");
    asm("loc_6C07065: pop %ebx;");
    asm("loc_6C07066: ret $0xC;");
    asm("loc_6C07069: mov (%esi),%eax;");
    asm("loc_6C0706B: mov 0x1C(%esp),%ecx;");
    asm("loc_6C0706F: mov %eax,(%ecx);");
    asm("loc_6C07071: mov 0xC(%edi),%edx;");
    asm("loc_6C07074: push %edx;");
    asm("loc_6C07075: call _sub_6BEC3B0;");
    asm("loc_6C0707A: mov %eax,%ecx;");
    asm("loc_6C0707C: mov 4(%ecx),%edi;");
    asm("loc_6C0707F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C07082: mov 0x14(%ecx),%edx;");
    asm("loc_6C07085: add $4,%esp;");
    asm("loc_6C07088: inc %edi;");
    asm("loc_6C07089: mov %edi,4(%ecx);");
    asm("loc_6C0708C: mov (%esi),%eax;");
    asm("loc_6C0708E: add $2,%eax;");
    asm("loc_6C07091: add %eax,%ebp;");
    asm("loc_6C07093: mov %ebp,0x1C(%ecx);");
    asm("loc_6C07096: mov (%esi),%esi;");
    asm("loc_6C07098: add $2,%edx;");
    asm("loc_6C0709B: cmp %edx,%esi;");
    asm("loc_6C0709D: jbe loc_6C070A5;");
    asm("loc_6C0709F: add $2,%esi;");
    asm("loc_6C070A2: mov %esi,0x14(%ecx);");
    asm("loc_6C070A5: mov 0x1C(%ecx),%eax;");
    asm("loc_6C070A8: xor %edx,%edx;");
    asm("loc_6C070AA: div %edi;");
    asm("loc_6C070AC: mov %eax,0xC(%ecx);");
    asm("loc_6C070AF: xor %eax,%eax;");
    asm("loc_6C070B1: pop %edi;");
    asm("loc_6C070B2: pop %esi;");
    asm("loc_6C070B3: pop %ebp;");
    asm("loc_6C070B4: pop %ebx;");
    asm("loc_6C070B5: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C070C0() // _sub_6C070C0
{
    __DEBUG_ASM(6C070C0);
    // chunk 0x6C070C0 _sub_6C070C0
    asm("loc_6C070C0: mov 8(%esp),%eax;");
    asm("loc_6C070C4: sub $0xC,%esp;");
    asm("loc_6C070C7: push %ebx;");
    asm("loc_6C070C8: push %ebp;");
    asm("loc_6C070C9: push %esi;");
    asm("loc_6C070CA: push %edi;");
    asm("loc_6C070CB: mov %ecx,%edi;");
    asm("loc_6C070CD: mov 0x20(%esp),%ecx;");
    asm("loc_6C070D1: lea 0x10(%edi),%esi;");
    asm("loc_6C070D4: mov %eax,4(%esi);");
    asm("loc_6C070D7: mov (%ecx),%edx;");
    asm("loc_6C070D9: mov %edx,8(%esi);");
    asm("loc_6C070DC: movl $0,(%esi);");
    asm("loc_6C070E2: movl $0,0xC(%esi);");
    asm("loc_6C070E9: mov 0x14(%edi),%eax;");
    asm("loc_6C070EC: push %esi;");
    asm("loc_6C070ED: push %eax;");
    asm("loc_6C070EE: lea 0x18(%edi),%ebx;");
    asm("loc_6C070F1: push %ebx;");
    asm("loc_6C070F2: mov %edi,%ecx;");
    asm("loc_6C070F4: call _sub_6BEBE50;");
    asm("loc_6C070F9: test %eax,%eax;");
    asm("loc_6C070FB: mov %eax,0x1C(%edi);");
    asm("loc_6C070FE: je loc_6C0710F;");
    asm("loc_6C07100: pop %edi;");
    asm("loc_6C07101: pop %esi;");
    asm("loc_6C07102: pop %ebp;");
    asm("loc_6C07103: mov $0x16,%eax;");
    asm("loc_6C07108: pop %ebx;");
    asm("loc_6C07109: add $0xC,%esp;");
    asm("loc_6C0710C: ret $0xC;");
    asm("loc_6C0710F: mov (%esi),%edx;");
    asm("loc_6C07111: mov 4(%esi),%ecx;");
    asm("loc_6C07114: add $4,%edx;");
    asm("loc_6C07117: mov %edx,%eax;");
    asm("loc_6C07119: cmp %ecx,%eax;");
    asm("loc_6C0711B: mov %edx,(%esi);");
    asm("loc_6C0711D: jbe loc_6C07126;");
    asm("loc_6C0711F: movl $0x16,0xC(%esi);");
    asm("loc_6C07126: mov 0x1C(%edi),%eax;");
    asm("loc_6C07129: test %eax,%eax;");
    asm("loc_6C0712B: je loc_6C0713C;");
    asm("loc_6C0712D: pop %edi;");
    asm("loc_6C0712E: pop %esi;");
    asm("loc_6C0712F: pop %ebp;");
    asm("loc_6C07130: mov $0x16,%eax;");
    asm("loc_6C07135: pop %ebx;");
    asm("loc_6C07136: add $0xC,%esp;");
    asm("loc_6C07139: ret $0xC;");
    asm("loc_6C0713C: mov (%ebx),%eax;");
    asm("loc_6C0713E: mov 0x20(%edi),%ecx;");
    asm("loc_6C07141: mov %ecx,(%eax);");
    asm("loc_6C07143: add $4,%eax;");
    asm("loc_6C07146: mov %eax,(%ebx);");
    asm("loc_6C07148: mov (%esi),%edx;");
    asm("loc_6C0714A: mov 4(%esi),%ecx;");
    asm("loc_6C0714D: add $0xC,%edx;");
    asm("loc_6C07150: mov %edx,%eax;");
    asm("loc_6C07152: cmp %ecx,%eax;");
    asm("loc_6C07154: mov %edx,(%esi);");
    asm("loc_6C07156: jbe loc_6C0715F;");
    asm("loc_6C07158: movl $0x16,0xC(%esi);");
    asm("loc_6C0715F: mov 0x1C(%edi),%eax;");
    asm("loc_6C07162: test %eax,%eax;");
    asm("loc_6C07164: je loc_6C07175;");
    asm("loc_6C07166: pop %edi;");
    asm("loc_6C07167: pop %esi;");
    asm("loc_6C07168: pop %ebp;");
    asm("loc_6C07169: mov $0x16,%eax;");
    asm("loc_6C0716E: pop %ebx;");
    asm("loc_6C0716F: add $0xC,%esp;");
    asm("loc_6C07172: ret $0xC;");
    asm("loc_6C07175: mov 0x24(%edi),%edx;");
    asm("loc_6C07178: mov 0x2C(%edi),%ecx;");
    asm("loc_6C0717B: mov (%ebx),%ebp;");
    asm("loc_6C0717D: mov 0x28(%edi),%eax;");
    asm("loc_6C07180: mov %edx,0x10(%esp);");
    asm("loc_6C07184: lea 0x10(%esp),%edx;");
    asm("loc_6C07188: mov %ecx,0x18(%esp);");
    asm("loc_6C0718C: push %edx;");
    asm("loc_6C0718D: mov %ebp,%ecx;");
    asm("loc_6C0718F: mov %eax,0x18(%esp);");
    asm("loc_6C07193: call _sub_6BDA4C0;");
    asm("loc_6C07198: mov 0x14(%edi),%eax;");
    asm("loc_6C0719B: push %esi;");
    asm("loc_6C0719C: push %eax;");
    asm("loc_6C0719D: add $0xC,%ebp;");
    asm("loc_6C071A0: push %ebx;");
    asm("loc_6C071A1: mov %edi,%ecx;");
    asm("loc_6C071A3: mov %ebp,(%ebx);");
    asm("loc_6C071A5: call _sub_6BEBEA0;");
    asm("loc_6C071AA: test %eax,%eax;");
    asm("loc_6C071AC: mov %eax,0x1C(%edi);");
    asm("loc_6C071AF: je loc_6C071C0;");
    asm("loc_6C071B1: pop %edi;");
    asm("loc_6C071B2: pop %esi;");
    asm("loc_6C071B3: pop %ebp;");
    asm("loc_6C071B4: mov $0x16,%eax;");
    asm("loc_6C071B9: pop %ebx;");
    asm("loc_6C071BA: add $0xC,%esp;");
    asm("loc_6C071BD: ret $0xC;");
    asm("loc_6C071C0: mov (%esi),%ecx;");
    asm("loc_6C071C2: mov 0x28(%esp),%edx;");
    asm("loc_6C071C6: mov %ecx,(%edx);");
    asm("loc_6C071C8: mov 0xC(%edi),%eax;");
    asm("loc_6C071CB: push %eax;");
    asm("loc_6C071CC: call _sub_6BEC3B0;");
    asm("loc_6C071D1: mov %eax,%ecx;");
    asm("loc_6C071D3: mov (%ecx),%ebp;");
    asm("loc_6C071D5: mov 0x18(%ecx),%ebx;");
    asm("loc_6C071D8: mov 0x10(%ecx),%eax;");
    asm("loc_6C071DB: add $4,%esp;");
    asm("loc_6C071DE: inc %ebp;");
    asm("loc_6C071DF: mov %ebp,(%ecx);");
    asm("loc_6C071E1: mov (%esi),%edx;");
    asm("loc_6C071E3: add %edx,%ebx;");
    asm("loc_6C071E5: mov %ebx,0x18(%ecx);");
    asm("loc_6C071E8: mov (%esi),%esi;");
    asm("loc_6C071EA: cmp %eax,%esi;");
    asm("loc_6C071EC: mov %ebp,%edi;");
    asm("loc_6C071EE: jbe loc_6C071F3;");
    asm("loc_6C071F0: mov %esi,0x10(%ecx);");
    asm("loc_6C071F3: mov 0x18(%ecx),%eax;");
    asm("loc_6C071F6: xor %edx,%edx;");
    asm("loc_6C071F8: div %edi;");
    asm("loc_6C071FA: pop %edi;");
    asm("loc_6C071FB: pop %esi;");
    asm("loc_6C071FC: pop %ebp;");
    asm("loc_6C071FD: pop %ebx;");
    asm("loc_6C071FE: mov %eax,8(%ecx);");
    asm("loc_6C07201: xor %eax,%eax;");
    asm("loc_6C07203: add $0xC,%esp;");
    asm("loc_6C07206: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07210() // _sub_6C07210
{
    __DEBUG_ASM(6C07210);
    // chunk 0x6C07210 _sub_6C07210
    asm("loc_6C07210: mov 8(%esp),%eax;");
    asm("loc_6C07214: push %ebx;");
    asm("loc_6C07215: push %ebp;");
    asm("loc_6C07216: push %esi;");
    asm("loc_6C07217: push %edi;");
    asm("loc_6C07218: mov %ecx,%edi;");
    asm("loc_6C0721A: mov 0x14(%esp),%ecx;");
    asm("loc_6C0721E: lea 0x10(%edi),%esi;");
    asm("loc_6C07221: push %esi;");
    asm("loc_6C07222: push %eax;");
    asm("loc_6C07223: mov %ecx,8(%esi);");
    asm("loc_6C07226: lea 0x18(%edi),%ebx;");
    asm("loc_6C07229: push %ebx;");
    asm("loc_6C0722A: mov %edi,%ecx;");
    asm("loc_6C0722C: mov %eax,4(%esi);");
    asm("loc_6C0722F: movl $0,(%esi);");
    asm("loc_6C07235: movl $0,0xC(%esi);");
    asm("loc_6C0723C: call _sub_6BEBE90;");
    asm("loc_6C07241: test %eax,%eax;");
    asm("loc_6C07243: mov %eax,0x1C(%edi);");
    asm("loc_6C07246: je loc_6C07254;");
    asm("loc_6C07248: pop %edi;");
    asm("loc_6C07249: pop %esi;");
    asm("loc_6C0724A: pop %ebp;");
    asm("loc_6C0724B: mov $0x17,%eax;");
    asm("loc_6C07250: pop %ebx;");
    asm("loc_6C07251: ret $0xC;");
    asm("loc_6C07254: mov (%esi),%edx;");
    asm("loc_6C07256: mov 4(%esi),%ecx;");
    asm("loc_6C07259: add $4,%edx;");
    asm("loc_6C0725C: mov %edx,%eax;");
    asm("loc_6C0725E: cmp %ecx,%eax;");
    asm("loc_6C07260: mov %edx,(%esi);");
    asm("loc_6C07262: jbe loc_6C0726B;");
    asm("loc_6C07264: movl $0x17,0xC(%esi);");
    asm("loc_6C0726B: mov 0x1C(%edi),%eax;");
    asm("loc_6C0726E: test %eax,%eax;");
    asm("loc_6C07270: jne loc_6C0731B;");
    asm("loc_6C07276: mov (%ebx),%eax;");
    asm("loc_6C07278: mov (%eax),%edx;");
    asm("loc_6C0727A: add $4,%eax;");
    asm("loc_6C0727D: mov %edx,0x20(%edi);");
    asm("loc_6C07280: mov %eax,(%ebx);");
    asm("loc_6C07282: mov (%esi),%edx;");
    asm("loc_6C07284: mov 4(%esi),%ecx;");
    asm("loc_6C07287: add $0xC,%edx;");
    asm("loc_6C0728A: mov %edx,%eax;");
    asm("loc_6C0728C: cmp %ecx,%eax;");
    asm("loc_6C0728E: mov %edx,(%esi);");
    asm("loc_6C07290: jbe loc_6C07299;");
    asm("loc_6C07292: movl $0x17,0xC(%esi);");
    asm("loc_6C07299: mov 0x1C(%edi),%eax;");
    asm("loc_6C0729C: test %eax,%eax;");
    asm("loc_6C0729E: jne loc_6C0731B;");
    asm("loc_6C072A0: mov (%ebx),%ebp;");
    asm("loc_6C072A2: push %ebp;");
    asm("loc_6C072A3: lea 0x24(%edi),%ecx;");
    asm("loc_6C072A6: call _sub_6BDA4C0;");
    asm("loc_6C072AB: mov 0x18(%esp),%eax;");
    asm("loc_6C072AF: push %esi;");
    asm("loc_6C072B0: push %eax;");
    asm("loc_6C072B1: add $0xC,%ebp;");
    asm("loc_6C072B4: push %ebx;");
    asm("loc_6C072B5: mov %edi,%ecx;");
    asm("loc_6C072B7: mov %ebp,(%ebx);");
    asm("loc_6C072B9: call _sub_6BEBEB0;");
    asm("loc_6C072BE: test %eax,%eax;");
    asm("loc_6C072C0: mov %eax,0x1C(%edi);");
    asm("loc_6C072C3: je loc_6C072D1;");
    asm("loc_6C072C5: pop %edi;");
    asm("loc_6C072C6: pop %esi;");
    asm("loc_6C072C7: pop %ebp;");
    asm("loc_6C072C8: mov $0x17,%eax;");
    asm("loc_6C072CD: pop %ebx;");
    asm("loc_6C072CE: ret $0xC;");
    asm("loc_6C072D1: mov (%esi),%ecx;");
    asm("loc_6C072D3: mov 0x1C(%esp),%edx;");
    asm("loc_6C072D7: mov %ecx,(%edx);");
    asm("loc_6C072D9: mov 0xC(%edi),%eax;");
    asm("loc_6C072DC: push %eax;");
    asm("loc_6C072DD: call _sub_6BEC3B0;");
    asm("loc_6C072E2: mov %eax,%ecx;");
    asm("loc_6C072E4: mov 4(%ecx),%edx;");
    asm("loc_6C072E7: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C072EA: mov 0x14(%ecx),%eax;");
    asm("loc_6C072ED: add $4,%esp;");
    asm("loc_6C072F0: inc %edx;");
    asm("loc_6C072F1: mov %edx,4(%ecx);");
    asm("loc_6C072F4: mov %edx,%edi;");
    asm("loc_6C072F6: mov (%esi),%edx;");
    asm("loc_6C072F8: add $2,%edx;");
    asm("loc_6C072FB: add %edx,%ebp;");
    asm("loc_6C072FD: mov %ebp,0x1C(%ecx);");
    asm("loc_6C07300: mov (%esi),%esi;");
    asm("loc_6C07302: add $2,%eax;");
    asm("loc_6C07305: cmp %eax,%esi;");
    asm("loc_6C07307: jbe loc_6C0730F;");
    asm("loc_6C07309: add $2,%esi;");
    asm("loc_6C0730C: mov %esi,0x14(%ecx);");
    asm("loc_6C0730F: mov 0x1C(%ecx),%eax;");
    asm("loc_6C07312: xor %edx,%edx;");
    asm("loc_6C07314: div %edi;");
    asm("loc_6C07316: mov %eax,0xC(%ecx);");
    asm("loc_6C07319: xor %eax,%eax;");
    asm("loc_6C0731B: pop %edi;");
    asm("loc_6C0731C: pop %esi;");
    asm("loc_6C0731D: pop %ebp;");
    asm("loc_6C0731E: pop %ebx;");
    asm("loc_6C0731F: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07330() // _sub_6C07330
{
    __DEBUG_ASM(6C07330);
    // chunk 0x6C07330 _sub_6C07330
    asm("loc_6C07330: mov _data_6C0E5E8,%eax;");
    asm("loc_6C07335: mov %eax,_data_6C14288;");
    asm("loc_6C0733A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07340() // _sub_6C07340
{
    __DEBUG_ASM(6C07340);
    // chunk 0x6C07340 _sub_6C07340
    asm("loc_6C07340: mov _data_6C0E5E8,%eax;");
    asm("loc_6C07345: mov %eax,_data_6C1428C;");
    asm("loc_6C0734A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07350() // _sub_6C07350
{
    __DEBUG_ASM(6C07350);
    // chunk 0x6C07350 _sub_6C07350
    asm("loc_6C07350: mov _data_6C0E5EC,%eax;");
    asm("loc_6C07355: mov %eax,_data_6C14284;");
    asm("loc_6C0735A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07360() // _sub_6C07360
{
    __DEBUG_ASM(6C07360);
    // chunk 0x6C07360 _sub_6C07360
    asm("loc_6C07360: mov 8(%esp),%eax;");
    asm("loc_6C07364: push %ebx;");
    asm("loc_6C07365: push %ebp;");
    asm("loc_6C07366: mov %ecx,%ebp;");
    asm("loc_6C07368: mov 0xC(%esp),%ecx;");
    asm("loc_6C0736C: lea 0x10(%ebp),%ebx;");
    asm("loc_6C0736F: push %esi;");
    asm("loc_6C07370: mov %eax,4(%ebx);");
    asm("loc_6C07373: mov (%ecx),%edx;");
    asm("loc_6C07375: push %edi;");
    asm("loc_6C07376: mov %edx,8(%ebx);");
    asm("loc_6C07379: movl $0,(%ebx);");
    asm("loc_6C0737F: movl $0,0xC(%ebx);");
    asm("loc_6C07386: mov 0x14(%ebp),%eax;");
    asm("loc_6C07389: push %ebx;");
    asm("loc_6C0738A: push %eax;");
    asm("loc_6C0738B: lea 0x18(%ebp),%esi;");
    asm("loc_6C0738E: push %esi;");
    asm("loc_6C0738F: mov %ebp,%ecx;");
    asm("loc_6C07391: call _sub_6BEBE50;");
    asm("loc_6C07396: test %eax,%eax;");
    asm("loc_6C07398: mov %eax,0x1C(%ebp);");
    asm("loc_6C0739B: je loc_6C073A9;");
    asm("loc_6C0739D: pop %edi;");
    asm("loc_6C0739E: pop %esi;");
    asm("loc_6C0739F: pop %ebp;");
    asm("loc_6C073A0: mov $0x16,%eax;");
    asm("loc_6C073A5: pop %ebx;");
    asm("loc_6C073A6: ret $0xC;");
    asm("loc_6C073A9: mov (%ebx),%edx;");
    asm("loc_6C073AB: mov 4(%ebx),%ecx;");
    asm("loc_6C073AE: add $4,%edx;");
    asm("loc_6C073B1: mov %edx,%eax;");
    asm("loc_6C073B3: cmp %ecx,%eax;");
    asm("loc_6C073B5: mov %edx,(%ebx);");
    asm("loc_6C073B7: jbe loc_6C073C0;");
    asm("loc_6C073B9: movl $0x16,0xC(%ebx);");
    asm("loc_6C073C0: mov 0x1C(%ebp),%eax;");
    asm("loc_6C073C3: test %eax,%eax;");
    asm("loc_6C073C5: je loc_6C073D3;");
    asm("loc_6C073C7: pop %edi;");
    asm("loc_6C073C8: pop %esi;");
    asm("loc_6C073C9: pop %ebp;");
    asm("loc_6C073CA: mov $0x16,%eax;");
    asm("loc_6C073CF: pop %ebx;");
    asm("loc_6C073D0: ret $0xC;");
    asm("loc_6C073D3: mov (%esi),%eax;");
    asm("loc_6C073D5: mov 0x20(%ebp),%ecx;");
    asm("loc_6C073D8: mov %ecx,(%eax);");
    asm("loc_6C073DA: add $4,%eax;");
    asm("loc_6C073DD: mov %eax,(%esi);");
    asm("loc_6C073DF: mov (%ebx),%edx;");
    asm("loc_6C073E1: mov 4(%ebx),%ecx;");
    asm("loc_6C073E4: add $0x80,%edx;");
    asm("loc_6C073EA: mov %edx,%eax;");
    asm("loc_6C073EC: cmp %ecx,%eax;");
    asm("loc_6C073EE: mov %edx,(%ebx);");
    asm("loc_6C073F0: jbe loc_6C073F9;");
    asm("loc_6C073F2: movl $0x16,0xC(%ebx);");
    asm("loc_6C073F9: mov 0x1C(%ebp),%eax;");
    asm("loc_6C073FC: test %eax,%eax;");
    asm("loc_6C073FE: je loc_6C0740C;");
    asm("loc_6C07400: pop %edi;");
    asm("loc_6C07401: pop %esi;");
    asm("loc_6C07402: pop %ebp;");
    asm("loc_6C07403: mov $0x16,%eax;");
    asm("loc_6C07408: pop %ebx;");
    asm("loc_6C07409: ret $0xC;");
    asm("loc_6C0740C: mov (%esi),%eax;");
    asm("loc_6C0740E: mov %eax,%edi;");
    asm("loc_6C07410: mov $0x20,%ecx;");
    asm("loc_6C07415: lea 0x24(%ebp),%esi;");
    asm("loc_6C07418: rep movsl (%esi),(%edi);");
    asm("loc_6C0741A: mov 0x14(%ebp),%ecx;");
    asm("loc_6C0741D: push %ebx;");
    asm("loc_6C0741E: lea 0x80(%eax),%edx;");
    asm("loc_6C07424: lea 0x18(%ebp),%eax;");
    asm("loc_6C07427: push %ecx;");
    asm("loc_6C07428: push %eax;");
    asm("loc_6C07429: mov %ebp,%ecx;");
    asm("loc_6C0742B: mov %edx,(%eax);");
    asm("loc_6C0742D: call _sub_6BEBEA0;");
    asm("loc_6C07432: test %eax,%eax;");
    asm("loc_6C07434: mov %eax,0x1C(%ebp);");
    asm("loc_6C07437: je loc_6C07445;");
    asm("loc_6C07439: pop %edi;");
    asm("loc_6C0743A: pop %esi;");
    asm("loc_6C0743B: pop %ebp;");
    asm("loc_6C0743C: mov $0x16,%eax;");
    asm("loc_6C07441: pop %ebx;");
    asm("loc_6C07442: ret $0xC;");
    asm("loc_6C07445: mov (%ebx),%edx;");
    asm("loc_6C07447: mov 0x1C(%esp),%eax;");
    asm("loc_6C0744B: mov %edx,(%eax);");
    asm("loc_6C0744D: mov 0xC(%ebp),%ecx;");
    asm("loc_6C07450: push %ecx;");
    asm("loc_6C07451: call _sub_6BEC3B0;");
    asm("loc_6C07456: mov %eax,%ecx;");
    asm("loc_6C07458: mov (%ecx),%ebp;");
    asm("loc_6C0745A: mov 0x18(%ecx),%edi;");
    asm("loc_6C0745D: mov 0x10(%ecx),%eax;");
    asm("loc_6C07460: add $4,%esp;");
    asm("loc_6C07463: inc %ebp;");
    asm("loc_6C07464: mov %ebp,(%ecx);");
    asm("loc_6C07466: mov (%ebx),%edx;");
    asm("loc_6C07468: add %edx,%edi;");
    asm("loc_6C0746A: mov %edi,0x18(%ecx);");
    asm("loc_6C0746D: mov (%ebx),%ebx;");
    asm("loc_6C0746F: cmp %eax,%ebx;");
    asm("loc_6C07471: mov %ebp,%esi;");
    asm("loc_6C07473: jbe loc_6C07478;");
    asm("loc_6C07475: mov %ebx,0x10(%ecx);");
    asm("loc_6C07478: mov 0x18(%ecx),%eax;");
    asm("loc_6C0747B: xor %edx,%edx;");
    asm("loc_6C0747D: div %esi;");
    asm("loc_6C0747F: pop %edi;");
    asm("loc_6C07480: pop %esi;");
    asm("loc_6C07481: pop %ebp;");
    asm("loc_6C07482: pop %ebx;");
    asm("loc_6C07483: mov %eax,8(%ecx);");
    asm("loc_6C07486: xor %eax,%eax;");
    asm("loc_6C07488: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07490() // _sub_6C07490
{
    __DEBUG_ASM(6C07490);
    // chunk 0x6C07490 _sub_6C07490
    asm("loc_6C07490: mov 8(%esp),%eax;");
    asm("loc_6C07494: push %ebx;");
    asm("loc_6C07495: push %ebp;");
    asm("loc_6C07496: mov %ecx,%ebp;");
    asm("loc_6C07498: mov 0xC(%esp),%ecx;");
    asm("loc_6C0749C: push %esi;");
    asm("loc_6C0749D: lea 0x10(%ebp),%ebx;");
    asm("loc_6C074A0: push %ebx;");
    asm("loc_6C074A1: push %eax;");
    asm("loc_6C074A2: mov %ecx,8(%ebx);");
    asm("loc_6C074A5: lea 0x18(%ebp),%esi;");
    asm("loc_6C074A8: push %esi;");
    asm("loc_6C074A9: mov %ebp,%ecx;");
    asm("loc_6C074AB: mov %eax,4(%ebx);");
    asm("loc_6C074AE: movl $0,(%ebx);");
    asm("loc_6C074B4: movl $0,0xC(%ebx);");
    asm("loc_6C074BB: call _sub_6BEBE90;");
    asm("loc_6C074C0: test %eax,%eax;");
    asm("loc_6C074C2: mov %eax,0x1C(%ebp);");
    asm("loc_6C074C5: je loc_6C074D2;");
    asm("loc_6C074C7: pop %esi;");
    asm("loc_6C074C8: pop %ebp;");
    asm("loc_6C074C9: mov $0x17,%eax;");
    asm("loc_6C074CE: pop %ebx;");
    asm("loc_6C074CF: ret $0xC;");
    asm("loc_6C074D2: mov (%ebx),%edx;");
    asm("loc_6C074D4: mov 4(%ebx),%ecx;");
    asm("loc_6C074D7: add $4,%edx;");
    asm("loc_6C074DA: mov %edx,%eax;");
    asm("loc_6C074DC: cmp %ecx,%eax;");
    asm("loc_6C074DE: mov %edx,(%ebx);");
    asm("loc_6C074E0: jbe loc_6C074E9;");
    asm("loc_6C074E2: movl $0x17,0xC(%ebx);");
    asm("loc_6C074E9: mov 0x1C(%ebp),%eax;");
    asm("loc_6C074EC: test %eax,%eax;");
    asm("loc_6C074EE: jne loc_6C075A8;");
    asm("loc_6C074F4: mov (%esi),%eax;");
    asm("loc_6C074F6: mov (%eax),%edx;");
    asm("loc_6C074F8: add $4,%eax;");
    asm("loc_6C074FB: mov %edx,0x20(%ebp);");
    asm("loc_6C074FE: mov %eax,(%esi);");
    asm("loc_6C07500: mov (%ebx),%edx;");
    asm("loc_6C07502: mov 4(%ebx),%ecx;");
    asm("loc_6C07505: add $0x80,%edx;");
    asm("loc_6C0750B: mov %edx,%eax;");
    asm("loc_6C0750D: cmp %ecx,%eax;");
    asm("loc_6C0750F: mov %edx,(%ebx);");
    asm("loc_6C07511: jbe loc_6C0751A;");
    asm("loc_6C07513: movl $0x17,0xC(%ebx);");
    asm("loc_6C0751A: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0751D: test %eax,%eax;");
    asm("loc_6C0751F: jne loc_6C075A8;");
    asm("loc_6C07525: mov (%esi),%eax;");
    asm("loc_6C07527: mov 0x14(%esp),%edx;");
    asm("loc_6C0752B: push %edi;");
    asm("loc_6C0752C: mov %eax,%esi;");
    asm("loc_6C0752E: mov $0x20,%ecx;");
    asm("loc_6C07533: lea 0x24(%ebp),%edi;");
    asm("loc_6C07536: rep movsl (%esi),(%edi);");
    asm("loc_6C07538: lea 0x80(%eax),%ecx;");
    asm("loc_6C0753E: push %ebx;");
    asm("loc_6C0753F: lea 0x18(%ebp),%eax;");
    asm("loc_6C07542: push %edx;");
    asm("loc_6C07543: mov %ecx,(%eax);");
    asm("loc_6C07545: push %eax;");
    asm("loc_6C07546: mov %ebp,%ecx;");
    asm("loc_6C07548: call _sub_6BEBEB0;");
    asm("loc_6C0754D: test %eax,%eax;");
    asm("loc_6C0754F: mov %eax,0x1C(%ebp);");
    asm("loc_6C07552: pop %edi;");
    asm("loc_6C07553: je loc_6C07560;");
    asm("loc_6C07555: pop %esi;");
    asm("loc_6C07556: pop %ebp;");
    asm("loc_6C07557: mov $0x17,%eax;");
    asm("loc_6C0755C: pop %ebx;");
    asm("loc_6C0755D: ret $0xC;");
    asm("loc_6C07560: mov (%ebx),%eax;");
    asm("loc_6C07562: mov 0x18(%esp),%ecx;");
    asm("loc_6C07566: mov %eax,(%ecx);");
    asm("loc_6C07568: mov 0xC(%ebp),%edx;");
    asm("loc_6C0756B: push %edx;");
    asm("loc_6C0756C: call _sub_6BEC3B0;");
    asm("loc_6C07571: mov %eax,%ecx;");
    asm("loc_6C07573: mov 4(%ecx),%esi;");
    asm("loc_6C07576: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C07579: mov 0x14(%ecx),%edx;");
    asm("loc_6C0757C: add $4,%esp;");
    asm("loc_6C0757F: inc %esi;");
    asm("loc_6C07580: mov %esi,4(%ecx);");
    asm("loc_6C07583: mov (%ebx),%eax;");
    asm("loc_6C07585: add $2,%eax;");
    asm("loc_6C07588: add %eax,%ebp;");
    asm("loc_6C0758A: mov %ebp,0x1C(%ecx);");
    asm("loc_6C0758D: mov (%ebx),%ebx;");
    asm("loc_6C0758F: add $2,%edx;");
    asm("loc_6C07592: cmp %edx,%ebx;");
    asm("loc_6C07594: jbe loc_6C0759C;");
    asm("loc_6C07596: add $2,%ebx;");
    asm("loc_6C07599: mov %ebx,0x14(%ecx);");
    asm("loc_6C0759C: mov 0x1C(%ecx),%eax;");
    asm("loc_6C0759F: xor %edx,%edx;");
    asm("loc_6C075A1: div %esi;");
    asm("loc_6C075A3: mov %eax,0xC(%ecx);");
    asm("loc_6C075A6: xor %eax,%eax;");
    asm("loc_6C075A8: pop %esi;");
    asm("loc_6C075A9: pop %ebp;");
    asm("loc_6C075AA: pop %ebx;");
    asm("loc_6C075AB: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C075B0() // _sub_6C075B0
{
    __DEBUG_ASM(6C075B0);
    // chunk 0x6C075B0 _sub_6C075B0
    asm("loc_6C075B0: mov _data_6C0E5F4,%eax;");
    asm("loc_6C075B5: mov %eax,_data_6C14298;");
    asm("loc_6C075BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C075C0() // _sub_6C075C0
{
    __DEBUG_ASM(6C075C0);
    // chunk 0x6C075C0 _sub_6C075C0
    asm("loc_6C075C0: mov _data_6C0E5F4,%eax;");
    asm("loc_6C075C5: mov %eax,_data_6C1429C;");
    asm("loc_6C075CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C075D0() // _sub_6C075D0
{
    __DEBUG_ASM(6C075D0);
    // chunk 0x6C075D0 _sub_6C075D0
    asm("loc_6C075D0: mov _data_6C0E5F8,%eax;");
    asm("loc_6C075D5: mov %eax,_data_6C14294;");
    asm("loc_6C075DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C075E0() // _sub_6C075E0
{
    __DEBUG_ASM(6C075E0);
    // chunk 0x6C075E0 _sub_6C075E0
    asm("loc_6C075E0: mov _data_6C0E600,%eax;");
    asm("loc_6C075E5: mov %eax,_data_6C142A8;");
    asm("loc_6C075EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C075F0() // _sub_6C075F0
{
    __DEBUG_ASM(6C075F0);
    // chunk 0x6C075F0 _sub_6C075F0
    asm("loc_6C075F0: mov _data_6C0E600,%eax;");
    asm("loc_6C075F5: mov %eax,_data_6C142AC;");
    asm("loc_6C075FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07600() // _sub_6C07600
{
    __DEBUG_ASM(6C07600);
    // chunk 0x6C07600 _sub_6C07600
    asm("loc_6C07600: mov _data_6C0E604,%eax;");
    asm("loc_6C07605: mov %eax,_data_6C142A4;");
    asm("loc_6C0760A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07610() // _sub_6C07610
{
    __DEBUG_ASM(6C07610);
    // chunk 0x6C07610 _sub_6C07610
    asm("loc_6C07610: mov 8(%esp),%eax;");
    asm("loc_6C07614: push %ebx;");
    asm("loc_6C07615: push %esi;");
    asm("loc_6C07616: push %edi;");
    asm("loc_6C07617: mov %ecx,%edi;");
    asm("loc_6C07619: mov 0x10(%esp),%ecx;");
    asm("loc_6C0761D: lea 0x10(%edi),%esi;");
    asm("loc_6C07620: mov %eax,4(%esi);");
    asm("loc_6C07623: mov (%ecx),%edx;");
    asm("loc_6C07625: mov %edx,8(%esi);");
    asm("loc_6C07628: movl $0,(%esi);");
    asm("loc_6C0762E: movl $0,0xC(%esi);");
    asm("loc_6C07635: mov 0x14(%edi),%eax;");
    asm("loc_6C07638: push %esi;");
    asm("loc_6C07639: push %eax;");
    asm("loc_6C0763A: lea 0x18(%edi),%ebx;");
    asm("loc_6C0763D: push %ebx;");
    asm("loc_6C0763E: mov %edi,%ecx;");
    asm("loc_6C07640: call _sub_6BEBE50;");
    asm("loc_6C07645: test %eax,%eax;");
    asm("loc_6C07647: mov %eax,0x1C(%edi);");
    asm("loc_6C0764A: je loc_6C07657;");
    asm("loc_6C0764C: pop %edi;");
    asm("loc_6C0764D: pop %esi;");
    asm("loc_6C0764E: mov $0x16,%eax;");
    asm("loc_6C07653: pop %ebx;");
    asm("loc_6C07654: ret $0xC;");
    asm("loc_6C07657: mov (%esi),%edx;");
    asm("loc_6C07659: mov 4(%esi),%ecx;");
    asm("loc_6C0765C: add $4,%edx;");
    asm("loc_6C0765F: mov %edx,%eax;");
    asm("loc_6C07661: cmp %ecx,%eax;");
    asm("loc_6C07663: mov %edx,(%esi);");
    asm("loc_6C07665: jbe loc_6C0766E;");
    asm("loc_6C07667: movl $0x16,0xC(%esi);");
    asm("loc_6C0766E: mov 0x1C(%edi),%eax;");
    asm("loc_6C07671: test %eax,%eax;");
    asm("loc_6C07673: je loc_6C07680;");
    asm("loc_6C07675: pop %edi;");
    asm("loc_6C07676: pop %esi;");
    asm("loc_6C07677: mov $0x16,%eax;");
    asm("loc_6C0767C: pop %ebx;");
    asm("loc_6C0767D: ret $0xC;");
    asm("loc_6C07680: mov (%ebx),%eax;");
    asm("loc_6C07682: mov 0x20(%edi),%ecx;");
    asm("loc_6C07685: mov %ecx,(%eax);");
    asm("loc_6C07687: add $4,%eax;");
    asm("loc_6C0768A: mov %eax,(%ebx);");
    asm("loc_6C0768C: mov (%esi),%edx;");
    asm("loc_6C0768E: mov 4(%esi),%ecx;");
    asm("loc_6C07691: add $4,%edx;");
    asm("loc_6C07694: mov %edx,%eax;");
    asm("loc_6C07696: cmp %ecx,%eax;");
    asm("loc_6C07698: mov %edx,(%esi);");
    asm("loc_6C0769A: jbe loc_6C076A3;");
    asm("loc_6C0769C: movl $0x16,0xC(%esi);");
    asm("loc_6C076A3: mov 0x1C(%edi),%eax;");
    asm("loc_6C076A6: test %eax,%eax;");
    asm("loc_6C076A8: je loc_6C076B5;");
    asm("loc_6C076AA: pop %edi;");
    asm("loc_6C076AB: pop %esi;");
    asm("loc_6C076AC: mov $0x16,%eax;");
    asm("loc_6C076B1: pop %ebx;");
    asm("loc_6C076B2: ret $0xC;");
    asm("loc_6C076B5: mov (%ebx),%eax;");
    asm("loc_6C076B7: mov 0x24(%edi),%edx;");
    asm("loc_6C076BA: mov %edx,(%eax);");
    asm("loc_6C076BC: add $4,%eax;");
    asm("loc_6C076BF: mov %eax,(%ebx);");
    asm("loc_6C076C1: mov (%esi),%edx;");
    asm("loc_6C076C3: mov 4(%esi),%ecx;");
    asm("loc_6C076C6: add $4,%edx;");
    asm("loc_6C076C9: mov %edx,%eax;");
    asm("loc_6C076CB: cmp %ecx,%eax;");
    asm("loc_6C076CD: mov %edx,(%esi);");
    asm("loc_6C076CF: jbe loc_6C076D8;");
    asm("loc_6C076D1: movl $0x16,0xC(%esi);");
    asm("loc_6C076D8: mov 0x1C(%edi),%eax;");
    asm("loc_6C076DB: test %eax,%eax;");
    asm("loc_6C076DD: je loc_6C076EA;");
    asm("loc_6C076DF: pop %edi;");
    asm("loc_6C076E0: pop %esi;");
    asm("loc_6C076E1: mov $0x16,%eax;");
    asm("loc_6C076E6: pop %ebx;");
    asm("loc_6C076E7: ret $0xC;");
    asm("loc_6C076EA: mov (%ebx),%eax;");
    asm("loc_6C076EC: mov 0x28(%edi),%ecx;");
    asm("loc_6C076EF: mov %ecx,(%eax);");
    asm("loc_6C076F1: mov 0x14(%edi),%edx;");
    asm("loc_6C076F4: push %esi;");
    asm("loc_6C076F5: push %edx;");
    asm("loc_6C076F6: add $4,%eax;");
    asm("loc_6C076F9: push %ebx;");
    asm("loc_6C076FA: mov %edi,%ecx;");
    asm("loc_6C076FC: mov %eax,(%ebx);");
    asm("loc_6C076FE: call _sub_6BEBEA0;");
    asm("loc_6C07703: test %eax,%eax;");
    asm("loc_6C07705: mov %eax,0x1C(%edi);");
    asm("loc_6C07708: je loc_6C07715;");
    asm("loc_6C0770A: pop %edi;");
    asm("loc_6C0770B: pop %esi;");
    asm("loc_6C0770C: mov $0x16,%eax;");
    asm("loc_6C07711: pop %ebx;");
    asm("loc_6C07712: ret $0xC;");
    asm("loc_6C07715: mov (%esi),%eax;");
    asm("loc_6C07717: mov 0x18(%esp),%ecx;");
    asm("loc_6C0771B: mov %eax,(%ecx);");
    asm("loc_6C0771D: mov 0xC(%edi),%edx;");
    asm("loc_6C07720: push %edx;");
    asm("loc_6C07721: call _sub_6BEC3B0;");
    asm("loc_6C07726: mov %eax,%ecx;");
    asm("loc_6C07728: mov (%ecx),%edi;");
    asm("loc_6C0772A: mov 0x18(%ecx),%edx;");
    asm("loc_6C0772D: add $4,%esp;");
    asm("loc_6C07730: inc %edi;");
    asm("loc_6C07731: mov %edi,(%ecx);");
    asm("loc_6C07733: mov (%esi),%eax;");
    asm("loc_6C07735: add %eax,%edx;");
    asm("loc_6C07737: mov 0x10(%ecx),%eax;");
    asm("loc_6C0773A: mov %edx,0x18(%ecx);");
    asm("loc_6C0773D: mov (%esi),%esi;");
    asm("loc_6C0773F: cmp %eax,%esi;");
    asm("loc_6C07741: jbe loc_6C07746;");
    asm("loc_6C07743: mov %esi,0x10(%ecx);");
    asm("loc_6C07746: mov 0x18(%ecx),%eax;");
    asm("loc_6C07749: xor %edx,%edx;");
    asm("loc_6C0774B: div %edi;");
    asm("loc_6C0774D: pop %edi;");
    asm("loc_6C0774E: pop %esi;");
    asm("loc_6C0774F: pop %ebx;");
    asm("loc_6C07750: mov %eax,8(%ecx);");
    asm("loc_6C07753: xor %eax,%eax;");
    asm("loc_6C07755: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07760() // _sub_6C07760
{
    __DEBUG_ASM(6C07760);
    // chunk 0x6C07760 _sub_6C07760
    asm("loc_6C07760: mov 4(%esp),%eax;");
    asm("loc_6C07764: push %ebx;");
    asm("loc_6C07765: push %ebp;");
    asm("loc_6C07766: mov 0x10(%esp),%ebp;");
    asm("loc_6C0776A: push %esi;");
    asm("loc_6C0776B: push %edi;");
    asm("loc_6C0776C: mov %ecx,%edi;");
    asm("loc_6C0776E: lea 0x10(%edi),%esi;");
    asm("loc_6C07771: push %esi;");
    asm("loc_6C07772: push %ebp;");
    asm("loc_6C07773: lea 0x18(%edi),%ebx;");
    asm("loc_6C07776: push %ebx;");
    asm("loc_6C07777: mov %ebp,4(%esi);");
    asm("loc_6C0777A: mov %eax,8(%esi);");
    asm("loc_6C0777D: movl $0,(%esi);");
    asm("loc_6C07783: movl $0,0xC(%esi);");
    asm("loc_6C0778A: call _sub_6BEBE90;");
    asm("loc_6C0778F: test %eax,%eax;");
    asm("loc_6C07791: mov %eax,0x1C(%edi);");
    asm("loc_6C07794: je loc_6C077A2;");
    asm("loc_6C07796: pop %edi;");
    asm("loc_6C07797: pop %esi;");
    asm("loc_6C07798: pop %ebp;");
    asm("loc_6C07799: mov $0x17,%eax;");
    asm("loc_6C0779E: pop %ebx;");
    asm("loc_6C0779F: ret $0xC;");
    asm("loc_6C077A2: mov (%esi),%edx;");
    asm("loc_6C077A4: mov 4(%esi),%ecx;");
    asm("loc_6C077A7: add $4,%edx;");
    asm("loc_6C077AA: mov %edx,%eax;");
    asm("loc_6C077AC: cmp %ecx,%eax;");
    asm("loc_6C077AE: mov %edx,(%esi);");
    asm("loc_6C077B0: mov $0x17,%ecx;");
    asm("loc_6C077B5: jbe loc_6C077BA;");
    asm("loc_6C077B7: mov %ecx,0xC(%esi);");
    asm("loc_6C077BA: mov 0x1C(%edi),%eax;");
    asm("loc_6C077BD: test %eax,%eax;");
    asm("loc_6C077BF: jne loc_6C07884;");
    asm("loc_6C077C5: mov (%ebx),%eax;");
    asm("loc_6C077C7: mov (%eax),%edx;");
    asm("loc_6C077C9: add $4,%eax;");
    asm("loc_6C077CC: mov %eax,(%ebx);");
    asm("loc_6C077CE: mov %edx,0x20(%edi);");
    asm("loc_6C077D1: mov (%esi),%eax;");
    asm("loc_6C077D3: mov 4(%esi),%edx;");
    asm("loc_6C077D6: add $4,%eax;");
    asm("loc_6C077D9: cmp %edx,%eax;");
    asm("loc_6C077DB: mov %eax,(%esi);");
    asm("loc_6C077DD: jbe loc_6C077E2;");
    asm("loc_6C077DF: mov %ecx,0xC(%esi);");
    asm("loc_6C077E2: mov 0x1C(%edi),%eax;");
    asm("loc_6C077E5: test %eax,%eax;");
    asm("loc_6C077E7: jne loc_6C07884;");
    asm("loc_6C077ED: mov (%ebx),%eax;");
    asm("loc_6C077EF: mov (%eax),%edx;");
    asm("loc_6C077F1: add $4,%eax;");
    asm("loc_6C077F4: mov %eax,(%ebx);");
    asm("loc_6C077F6: mov %edx,0x24(%edi);");
    asm("loc_6C077F9: mov (%esi),%eax;");
    asm("loc_6C077FB: mov 4(%esi),%edx;");
    asm("loc_6C077FE: add $4,%eax;");
    asm("loc_6C07801: cmp %edx,%eax;");
    asm("loc_6C07803: mov %eax,(%esi);");
    asm("loc_6C07805: jbe loc_6C0780A;");
    asm("loc_6C07807: mov %ecx,0xC(%esi);");
    asm("loc_6C0780A: mov 0x1C(%edi),%eax;");
    asm("loc_6C0780D: test %eax,%eax;");
    asm("loc_6C0780F: jne loc_6C07884;");
    asm("loc_6C07811: mov (%ebx),%eax;");
    asm("loc_6C07813: mov (%eax),%ecx;");
    asm("loc_6C07815: push %esi;");
    asm("loc_6C07816: push %ebp;");
    asm("loc_6C07817: mov %ecx,0x28(%edi);");
    asm("loc_6C0781A: add $4,%eax;");
    asm("loc_6C0781D: push %ebx;");
    asm("loc_6C0781E: mov %edi,%ecx;");
    asm("loc_6C07820: mov %eax,(%ebx);");
    asm("loc_6C07822: call _sub_6BEBEB0;");
    asm("loc_6C07827: test %eax,%eax;");
    asm("loc_6C07829: mov %eax,0x1C(%edi);");
    asm("loc_6C0782C: je loc_6C0783A;");
    asm("loc_6C0782E: pop %edi;");
    asm("loc_6C0782F: pop %esi;");
    asm("loc_6C07830: pop %ebp;");
    asm("loc_6C07831: mov $0x17,%eax;");
    asm("loc_6C07836: pop %ebx;");
    asm("loc_6C07837: ret $0xC;");
    asm("loc_6C0783A: mov (%esi),%edx;");
    asm("loc_6C0783C: mov 0x1C(%esp),%eax;");
    asm("loc_6C07840: mov %edx,(%eax);");
    asm("loc_6C07842: mov 0xC(%edi),%ecx;");
    asm("loc_6C07845: push %ecx;");
    asm("loc_6C07846: call _sub_6BEC3B0;");
    asm("loc_6C0784B: mov %eax,%ecx;");
    asm("loc_6C0784D: mov 4(%ecx),%edx;");
    asm("loc_6C07850: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C07853: mov 0x14(%ecx),%eax;");
    asm("loc_6C07856: add $4,%esp;");
    asm("loc_6C07859: inc %edx;");
    asm("loc_6C0785A: mov %edx,4(%ecx);");
    asm("loc_6C0785D: mov %edx,%edi;");
    asm("loc_6C0785F: mov (%esi),%edx;");
    asm("loc_6C07861: add $2,%edx;");
    asm("loc_6C07864: add %edx,%ebp;");
    asm("loc_6C07866: mov %ebp,0x1C(%ecx);");
    asm("loc_6C07869: mov (%esi),%esi;");
    asm("loc_6C0786B: add $2,%eax;");
    asm("loc_6C0786E: cmp %eax,%esi;");
    asm("loc_6C07870: jbe loc_6C07878;");
    asm("loc_6C07872: add $2,%esi;");
    asm("loc_6C07875: mov %esi,0x14(%ecx);");
    asm("loc_6C07878: mov 0x1C(%ecx),%eax;");
    asm("loc_6C0787B: xor %edx,%edx;");
    asm("loc_6C0787D: div %edi;");
    asm("loc_6C0787F: mov %eax,0xC(%ecx);");
    asm("loc_6C07882: xor %eax,%eax;");
    asm("loc_6C07884: pop %edi;");
    asm("loc_6C07885: pop %esi;");
    asm("loc_6C07886: pop %ebp;");
    asm("loc_6C07887: pop %ebx;");
    asm("loc_6C07888: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07890() // _sub_6C07890
{
    __DEBUG_ASM(6C07890);
    // chunk 0x6C07890 _sub_6C07890
    asm("loc_6C07890: mov _data_6C0E60C,%eax;");
    asm("loc_6C07895: mov %eax,_data_6C142B8;");
    asm("loc_6C0789A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C078A0() // _sub_6C078A0
{
    __DEBUG_ASM(6C078A0);
    // chunk 0x6C078A0 _sub_6C078A0
    asm("loc_6C078A0: mov _data_6C0E60C,%eax;");
    asm("loc_6C078A5: mov %eax,_data_6C142BC;");
    asm("loc_6C078AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C078B0() // _sub_6C078B0
{
    __DEBUG_ASM(6C078B0);
    // chunk 0x6C078B0 _sub_6C078B0
    asm("loc_6C078B0: mov _data_6C0E610,%eax;");
    asm("loc_6C078B5: mov %eax,_data_6C142B4;");
    asm("loc_6C078BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C078C0() // _sub_6C078C0
{
    __DEBUG_ASM(6C078C0);
    // chunk 0x6C078C0 _sub_6C078C0
    asm("loc_6C078C0: mov 4(%esp),%eax;");
    asm("loc_6C078C4: push %ebx;");
    asm("loc_6C078C5: push %ebp;");
    asm("loc_6C078C6: mov 0x10(%esp),%ebp;");
    asm("loc_6C078CA: push %esi;");
    asm("loc_6C078CB: mov %ecx,%esi;");
    asm("loc_6C078CD: push %edi;");
    asm("loc_6C078CE: lea 0x10(%esi),%edi;");
    asm("loc_6C078D1: mov %ebp,4(%edi);");
    asm("loc_6C078D4: mov (%eax),%ecx;");
    asm("loc_6C078D6: mov %ecx,8(%edi);");
    asm("loc_6C078D9: movl $0,(%edi);");
    asm("loc_6C078DF: movl $0,0xC(%edi);");
    asm("loc_6C078E6: mov 0x14(%esi),%edx;");
    asm("loc_6C078E9: push %edi;");
    asm("loc_6C078EA: push %edx;");
    asm("loc_6C078EB: lea 0x18(%esi),%ebx;");
    asm("loc_6C078EE: push %ebx;");
    asm("loc_6C078EF: mov %esi,%ecx;");
    asm("loc_6C078F1: call _sub_6BEBE50;");
    asm("loc_6C078F6: test %eax,%eax;");
    asm("loc_6C078F8: mov %eax,0x1C(%esi);");
    asm("loc_6C078FB: je loc_6C07909;");
    asm("loc_6C078FD: pop %edi;");
    asm("loc_6C078FE: pop %esi;");
    asm("loc_6C078FF: pop %ebp;");
    asm("loc_6C07900: mov $0x16,%eax;");
    asm("loc_6C07905: pop %ebx;");
    asm("loc_6C07906: ret $0xC;");
    asm("loc_6C07909: mov 0x1C(%esp),%eax;");
    asm("loc_6C0790D: mov 0x14(%esp),%ecx;");
    asm("loc_6C07911: push %eax;");
    asm("loc_6C07912: push %ebp;");
    asm("loc_6C07913: push %ecx;");
    asm("loc_6C07914: mov %esi,%ecx;");
    asm("loc_6C07916: call _sub_6BDA4E0;");
    asm("loc_6C0791B: test %eax,%eax;");
    asm("loc_6C0791D: jne loc_6C0797C;");
    asm("loc_6C0791F: mov 0x14(%esi),%edx;");
    asm("loc_6C07922: push %edi;");
    asm("loc_6C07923: push %edx;");
    asm("loc_6C07924: push %ebx;");
    asm("loc_6C07925: mov %esi,%ecx;");
    asm("loc_6C07927: call _sub_6BEBEA0;");
    asm("loc_6C0792C: test %eax,%eax;");
    asm("loc_6C0792E: mov %eax,0x1C(%esi);");
    asm("loc_6C07931: je loc_6C0793F;");
    asm("loc_6C07933: pop %edi;");
    asm("loc_6C07934: pop %esi;");
    asm("loc_6C07935: pop %ebp;");
    asm("loc_6C07936: mov $0x16,%eax;");
    asm("loc_6C0793B: pop %ebx;");
    asm("loc_6C0793C: ret $0xC;");
    asm("loc_6C0793F: mov (%edi),%eax;");
    asm("loc_6C07941: mov 0x1C(%esp),%ecx;");
    asm("loc_6C07945: mov %eax,(%ecx);");
    asm("loc_6C07947: mov 0xC(%esi),%edx;");
    asm("loc_6C0794A: push %edx;");
    asm("loc_6C0794B: call _sub_6BEC3B0;");
    asm("loc_6C07950: mov %eax,%ecx;");
    asm("loc_6C07952: mov (%ecx),%esi;");
    asm("loc_6C07954: mov 0x18(%ecx),%edx;");
    asm("loc_6C07957: add $4,%esp;");
    asm("loc_6C0795A: inc %esi;");
    asm("loc_6C0795B: mov %esi,(%ecx);");
    asm("loc_6C0795D: mov (%edi),%eax;");
    asm("loc_6C0795F: add %eax,%edx;");
    asm("loc_6C07961: mov 0x10(%ecx),%eax;");
    asm("loc_6C07964: mov %edx,0x18(%ecx);");
    asm("loc_6C07967: mov (%edi),%edi;");
    asm("loc_6C07969: cmp %eax,%edi;");
    asm("loc_6C0796B: jbe loc_6C07970;");
    asm("loc_6C0796D: mov %edi,0x10(%ecx);");
    asm("loc_6C07970: mov 0x18(%ecx),%eax;");
    asm("loc_6C07973: xor %edx,%edx;");
    asm("loc_6C07975: div %esi;");
    asm("loc_6C07977: mov %eax,8(%ecx);");
    asm("loc_6C0797A: xor %eax,%eax;");
    asm("loc_6C0797C: pop %edi;");
    asm("loc_6C0797D: pop %esi;");
    asm("loc_6C0797E: pop %ebp;");
    asm("loc_6C0797F: pop %ebx;");
    asm("loc_6C07980: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07990() // _sub_6C07990
{
    __DEBUG_ASM(6C07990);
    // chunk 0x6C07990 _sub_6C07990
    asm("loc_6C07990: mov 4(%esp),%eax;");
    asm("loc_6C07994: push %ebx;");
    asm("loc_6C07995: mov 0xC(%esp),%ebx;");
    asm("loc_6C07999: push %ebp;");
    asm("loc_6C0799A: push %esi;");
    asm("loc_6C0799B: push %edi;");
    asm("loc_6C0799C: mov %ecx,%edi;");
    asm("loc_6C0799E: lea 0x10(%edi),%esi;");
    asm("loc_6C079A1: push %esi;");
    asm("loc_6C079A2: push %ebx;");
    asm("loc_6C079A3: lea 0x18(%edi),%ebp;");
    asm("loc_6C079A6: push %ebp;");
    asm("loc_6C079A7: mov %ebx,4(%esi);");
    asm("loc_6C079AA: mov %eax,8(%esi);");
    asm("loc_6C079AD: movl $0,(%esi);");
    asm("loc_6C079B3: movl $0,0xC(%esi);");
    asm("loc_6C079BA: call _sub_6BEBE90;");
    asm("loc_6C079BF: test %eax,%eax;");
    asm("loc_6C079C1: mov %eax,0x1C(%edi);");
    asm("loc_6C079C4: je loc_6C079D2;");
    asm("loc_6C079C6: pop %edi;");
    asm("loc_6C079C7: pop %esi;");
    asm("loc_6C079C8: pop %ebp;");
    asm("loc_6C079C9: mov $0x17,%eax;");
    asm("loc_6C079CE: pop %ebx;");
    asm("loc_6C079CF: ret $0xC;");
    asm("loc_6C079D2: mov 0x1C(%esp),%ecx;");
    asm("loc_6C079D6: mov 0x14(%esp),%edx;");
    asm("loc_6C079DA: push %ecx;");
    asm("loc_6C079DB: push %ebx;");
    asm("loc_6C079DC: push %edx;");
    asm("loc_6C079DD: mov %edi,%ecx;");
    asm("loc_6C079DF: call _sub_6BDA590;");
    asm("loc_6C079E4: test %eax,%eax;");
    asm("loc_6C079E6: jne loc_6C07A4D;");
    asm("loc_6C079E8: push %esi;");
    asm("loc_6C079E9: push %ebx;");
    asm("loc_6C079EA: push %ebp;");
    asm("loc_6C079EB: mov %edi,%ecx;");
    asm("loc_6C079ED: call _sub_6BEBEB0;");
    asm("loc_6C079F2: test %eax,%eax;");
    asm("loc_6C079F4: mov %eax,0x1C(%edi);");
    asm("loc_6C079F7: je loc_6C07A05;");
    asm("loc_6C079F9: pop %edi;");
    asm("loc_6C079FA: pop %esi;");
    asm("loc_6C079FB: pop %ebp;");
    asm("loc_6C079FC: mov $0x17,%eax;");
    asm("loc_6C07A01: pop %ebx;");
    asm("loc_6C07A02: ret $0xC;");
    asm("loc_6C07A05: mov (%esi),%eax;");
    asm("loc_6C07A07: mov 0x1C(%esp),%ecx;");
    asm("loc_6C07A0B: mov %eax,(%ecx);");
    asm("loc_6C07A0D: mov 0xC(%edi),%edx;");
    asm("loc_6C07A10: push %edx;");
    asm("loc_6C07A11: call _sub_6BEC3B0;");
    asm("loc_6C07A16: mov %eax,%ecx;");
    asm("loc_6C07A18: mov 4(%ecx),%edi;");
    asm("loc_6C07A1B: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C07A1E: mov 0x14(%ecx),%edx;");
    asm("loc_6C07A21: add $4,%esp;");
    asm("loc_6C07A24: inc %edi;");
    asm("loc_6C07A25: mov %edi,4(%ecx);");
    asm("loc_6C07A28: mov (%esi),%eax;");
    asm("loc_6C07A2A: add $2,%eax;");
    asm("loc_6C07A2D: add %eax,%ebp;");
    asm("loc_6C07A2F: mov %ebp,0x1C(%ecx);");
    asm("loc_6C07A32: mov (%esi),%esi;");
    asm("loc_6C07A34: add $2,%edx;");
    asm("loc_6C07A37: cmp %edx,%esi;");
    asm("loc_6C07A39: jbe loc_6C07A41;");
    asm("loc_6C07A3B: add $2,%esi;");
    asm("loc_6C07A3E: mov %esi,0x14(%ecx);");
    asm("loc_6C07A41: mov 0x1C(%ecx),%eax;");
    asm("loc_6C07A44: xor %edx,%edx;");
    asm("loc_6C07A46: div %edi;");
    asm("loc_6C07A48: mov %eax,0xC(%ecx);");
    asm("loc_6C07A4B: xor %eax,%eax;");
    asm("loc_6C07A4D: pop %edi;");
    asm("loc_6C07A4E: pop %esi;");
    asm("loc_6C07A4F: pop %ebp;");
    asm("loc_6C07A50: pop %ebx;");
    asm("loc_6C07A51: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07A60() // _sub_6C07A60
{
    __DEBUG_ASM(6C07A60);
    // chunk 0x6C07A60 _sub_6C07A60
    asm("loc_6C07A60: mov _data_6C0E618,%eax;");
    asm("loc_6C07A65: mov %eax,_data_6C142C8;");
    asm("loc_6C07A6A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07A70() // _sub_6C07A70
{
    __DEBUG_ASM(6C07A70);
    // chunk 0x6C07A70 _sub_6C07A70
    asm("loc_6C07A70: mov _data_6C0E618,%eax;");
    asm("loc_6C07A75: mov %eax,_data_6C142CC;");
    asm("loc_6C07A7A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07A80() // _sub_6C07A80
{
    __DEBUG_ASM(6C07A80);
    // chunk 0x6C07A80 _sub_6C07A80
    asm("loc_6C07A80: mov _data_6C0E61C,%eax;");
    asm("loc_6C07A85: mov %eax,_data_6C142C4;");
    asm("loc_6C07A8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07A90() // _sub_6C07A90
{
    __DEBUG_ASM(6C07A90);
    // chunk 0x6C07A90 _sub_6C07A90
    asm("loc_6C07A90: mov 8(%esp),%eax;");
    asm("loc_6C07A94: push %ebx;");
    asm("loc_6C07A95: push %esi;");
    asm("loc_6C07A96: push %edi;");
    asm("loc_6C07A97: mov %ecx,%edi;");
    asm("loc_6C07A99: mov 0x10(%esp),%ecx;");
    asm("loc_6C07A9D: lea 0x10(%edi),%esi;");
    asm("loc_6C07AA0: mov %eax,4(%esi);");
    asm("loc_6C07AA3: mov (%ecx),%edx;");
    asm("loc_6C07AA5: mov %edx,8(%esi);");
    asm("loc_6C07AA8: movl $0,(%esi);");
    asm("loc_6C07AAE: movl $0,0xC(%esi);");
    asm("loc_6C07AB5: mov 0x14(%edi),%eax;");
    asm("loc_6C07AB8: push %esi;");
    asm("loc_6C07AB9: push %eax;");
    asm("loc_6C07ABA: lea 0x18(%edi),%ebx;");
    asm("loc_6C07ABD: push %ebx;");
    asm("loc_6C07ABE: mov %edi,%ecx;");
    asm("loc_6C07AC0: call _sub_6BEBE50;");
    asm("loc_6C07AC5: test %eax,%eax;");
    asm("loc_6C07AC7: mov %eax,0x1C(%edi);");
    asm("loc_6C07ACA: je loc_6C07AD7;");
    asm("loc_6C07ACC: pop %edi;");
    asm("loc_6C07ACD: pop %esi;");
    asm("loc_6C07ACE: mov $0x16,%eax;");
    asm("loc_6C07AD3: pop %ebx;");
    asm("loc_6C07AD4: ret $0xC;");
    asm("loc_6C07AD7: mov (%esi),%edx;");
    asm("loc_6C07AD9: mov 4(%esi),%ecx;");
    asm("loc_6C07ADC: add $4,%edx;");
    asm("loc_6C07ADF: mov %edx,%eax;");
    asm("loc_6C07AE1: cmp %ecx,%eax;");
    asm("loc_6C07AE3: mov %edx,(%esi);");
    asm("loc_6C07AE5: jbe loc_6C07AEE;");
    asm("loc_6C07AE7: movl $0x16,0xC(%esi);");
    asm("loc_6C07AEE: mov 0x1C(%edi),%eax;");
    asm("loc_6C07AF1: test %eax,%eax;");
    asm("loc_6C07AF3: je loc_6C07B00;");
    asm("loc_6C07AF5: pop %edi;");
    asm("loc_6C07AF6: pop %esi;");
    asm("loc_6C07AF7: mov $0x16,%eax;");
    asm("loc_6C07AFC: pop %ebx;");
    asm("loc_6C07AFD: ret $0xC;");
    asm("loc_6C07B00: mov (%ebx),%eax;");
    asm("loc_6C07B02: flds 0x20(%edi);");
    asm("loc_6C07B05: fstps (%eax);");
    asm("loc_6C07B07: mov 0x14(%edi),%ecx;");
    asm("loc_6C07B0A: push %esi;");
    asm("loc_6C07B0B: push %ecx;");
    asm("loc_6C07B0C: add $4,%eax;");
    asm("loc_6C07B0F: push %ebx;");
    asm("loc_6C07B10: mov %edi,%ecx;");
    asm("loc_6C07B12: mov %eax,(%ebx);");
    asm("loc_6C07B14: call _sub_6BEBEA0;");
    asm("loc_6C07B19: test %eax,%eax;");
    asm("loc_6C07B1B: mov %eax,0x1C(%edi);");
    asm("loc_6C07B1E: je loc_6C07B2B;");
    asm("loc_6C07B20: pop %edi;");
    asm("loc_6C07B21: pop %esi;");
    asm("loc_6C07B22: mov $0x16,%eax;");
    asm("loc_6C07B27: pop %ebx;");
    asm("loc_6C07B28: ret $0xC;");
    asm("loc_6C07B2B: mov (%esi),%edx;");
    asm("loc_6C07B2D: mov 0x18(%esp),%eax;");
    asm("loc_6C07B31: mov %edx,(%eax);");
    asm("loc_6C07B33: mov 0xC(%edi),%ecx;");
    asm("loc_6C07B36: push %ecx;");
    asm("loc_6C07B37: call _sub_6BEC3B0;");
    asm("loc_6C07B3C: mov %eax,%ecx;");
    asm("loc_6C07B3E: mov (%ecx),%eax;");
    asm("loc_6C07B40: mov 0x18(%ecx),%ebx;");
    asm("loc_6C07B43: add $4,%esp;");
    asm("loc_6C07B46: inc %eax;");
    asm("loc_6C07B47: mov %eax,(%ecx);");
    asm("loc_6C07B49: mov (%esi),%edx;");
    asm("loc_6C07B4B: add %edx,%ebx;");
    asm("loc_6C07B4D: mov %eax,%edi;");
    asm("loc_6C07B4F: mov 0x10(%ecx),%eax;");
    asm("loc_6C07B52: mov %ebx,0x18(%ecx);");
    asm("loc_6C07B55: mov (%esi),%esi;");
    asm("loc_6C07B57: cmp %eax,%esi;");
    asm("loc_6C07B59: jbe loc_6C07B5E;");
    asm("loc_6C07B5B: mov %esi,0x10(%ecx);");
    asm("loc_6C07B5E: mov 0x18(%ecx),%eax;");
    asm("loc_6C07B61: xor %edx,%edx;");
    asm("loc_6C07B63: div %edi;");
    asm("loc_6C07B65: pop %edi;");
    asm("loc_6C07B66: pop %esi;");
    asm("loc_6C07B67: pop %ebx;");
    asm("loc_6C07B68: mov %eax,8(%ecx);");
    asm("loc_6C07B6B: xor %eax,%eax;");
    asm("loc_6C07B6D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07B70() // _sub_6C07B70
{
    __DEBUG_ASM(6C07B70);
    // chunk 0x6C07B70 _sub_6C07B70
    asm("loc_6C07B70: mov 4(%esp),%eax;");
    asm("loc_6C07B74: push %ebx;");
    asm("loc_6C07B75: push %ebp;");
    asm("loc_6C07B76: mov 0x10(%esp),%ebp;");
    asm("loc_6C07B7A: push %esi;");
    asm("loc_6C07B7B: push %edi;");
    asm("loc_6C07B7C: mov %ecx,%edi;");
    asm("loc_6C07B7E: lea 0x10(%edi),%esi;");
    asm("loc_6C07B81: push %esi;");
    asm("loc_6C07B82: push %ebp;");
    asm("loc_6C07B83: lea 0x18(%edi),%ebx;");
    asm("loc_6C07B86: push %ebx;");
    asm("loc_6C07B87: mov %ebp,4(%esi);");
    asm("loc_6C07B8A: mov %eax,8(%esi);");
    asm("loc_6C07B8D: movl $0,(%esi);");
    asm("loc_6C07B93: movl $0,0xC(%esi);");
    asm("loc_6C07B9A: call _sub_6BEBE90;");
    asm("loc_6C07B9F: test %eax,%eax;");
    asm("loc_6C07BA1: mov %eax,0x1C(%edi);");
    asm("loc_6C07BA4: je loc_6C07BB2;");
    asm("loc_6C07BA6: pop %edi;");
    asm("loc_6C07BA7: pop %esi;");
    asm("loc_6C07BA8: pop %ebp;");
    asm("loc_6C07BA9: mov $0x17,%eax;");
    asm("loc_6C07BAE: pop %ebx;");
    asm("loc_6C07BAF: ret $0xC;");
    asm("loc_6C07BB2: mov (%esi),%edx;");
    asm("loc_6C07BB4: mov 4(%esi),%ecx;");
    asm("loc_6C07BB7: add $4,%edx;");
    asm("loc_6C07BBA: mov %edx,%eax;");
    asm("loc_6C07BBC: cmp %ecx,%eax;");
    asm("loc_6C07BBE: mov %edx,(%esi);");
    asm("loc_6C07BC0: jbe loc_6C07BC9;");
    asm("loc_6C07BC2: movl $0x17,0xC(%esi);");
    asm("loc_6C07BC9: mov 0x1C(%edi),%eax;");
    asm("loc_6C07BCC: test %eax,%eax;");
    asm("loc_6C07BCE: jne loc_6C07C43;");
    asm("loc_6C07BD0: mov (%ebx),%eax;");
    asm("loc_6C07BD2: mov (%eax),%ecx;");
    asm("loc_6C07BD4: push %esi;");
    asm("loc_6C07BD5: push %ebp;");
    asm("loc_6C07BD6: mov %ecx,0x20(%edi);");
    asm("loc_6C07BD9: add $4,%eax;");
    asm("loc_6C07BDC: push %ebx;");
    asm("loc_6C07BDD: mov %edi,%ecx;");
    asm("loc_6C07BDF: mov %eax,(%ebx);");
    asm("loc_6C07BE1: call _sub_6BEBEB0;");
    asm("loc_6C07BE6: test %eax,%eax;");
    asm("loc_6C07BE8: mov %eax,0x1C(%edi);");
    asm("loc_6C07BEB: je loc_6C07BF9;");
    asm("loc_6C07BED: pop %edi;");
    asm("loc_6C07BEE: pop %esi;");
    asm("loc_6C07BEF: pop %ebp;");
    asm("loc_6C07BF0: mov $0x17,%eax;");
    asm("loc_6C07BF5: pop %ebx;");
    asm("loc_6C07BF6: ret $0xC;");
    asm("loc_6C07BF9: mov (%esi),%edx;");
    asm("loc_6C07BFB: mov 0x1C(%esp),%eax;");
    asm("loc_6C07BFF: mov %edx,(%eax);");
    asm("loc_6C07C01: mov 0xC(%edi),%ecx;");
    asm("loc_6C07C04: push %ecx;");
    asm("loc_6C07C05: call _sub_6BEC3B0;");
    asm("loc_6C07C0A: mov %eax,%ecx;");
    asm("loc_6C07C0C: mov 4(%ecx),%edx;");
    asm("loc_6C07C0F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C07C12: mov 0x14(%ecx),%eax;");
    asm("loc_6C07C15: add $4,%esp;");
    asm("loc_6C07C18: inc %edx;");
    asm("loc_6C07C19: mov %edx,4(%ecx);");
    asm("loc_6C07C1C: mov %edx,%edi;");
    asm("loc_6C07C1E: mov (%esi),%edx;");
    asm("loc_6C07C20: add $2,%edx;");
    asm("loc_6C07C23: add %edx,%ebp;");
    asm("loc_6C07C25: mov %ebp,0x1C(%ecx);");
    asm("loc_6C07C28: mov (%esi),%esi;");
    asm("loc_6C07C2A: add $2,%eax;");
    asm("loc_6C07C2D: cmp %eax,%esi;");
    asm("loc_6C07C2F: jbe loc_6C07C37;");
    asm("loc_6C07C31: add $2,%esi;");
    asm("loc_6C07C34: mov %esi,0x14(%ecx);");
    asm("loc_6C07C37: mov 0x1C(%ecx),%eax;");
    asm("loc_6C07C3A: xor %edx,%edx;");
    asm("loc_6C07C3C: div %edi;");
    asm("loc_6C07C3E: mov %eax,0xC(%ecx);");
    asm("loc_6C07C41: xor %eax,%eax;");
    asm("loc_6C07C43: pop %edi;");
    asm("loc_6C07C44: pop %esi;");
    asm("loc_6C07C45: pop %ebp;");
    asm("loc_6C07C46: pop %ebx;");
    asm("loc_6C07C47: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07C50() // _sub_6C07C50
{
    __DEBUG_ASM(6C07C50);
    // chunk 0x6C07C50 _sub_6C07C50
    asm("loc_6C07C50: mov 8(%esp),%eax;");
    asm("loc_6C07C54: push %ebx;");
    asm("loc_6C07C55: push %esi;");
    asm("loc_6C07C56: push %edi;");
    asm("loc_6C07C57: mov %ecx,%edi;");
    asm("loc_6C07C59: mov 0x10(%esp),%ecx;");
    asm("loc_6C07C5D: lea 0x10(%edi),%esi;");
    asm("loc_6C07C60: mov %eax,4(%esi);");
    asm("loc_6C07C63: mov (%ecx),%edx;");
    asm("loc_6C07C65: mov %edx,8(%esi);");
    asm("loc_6C07C68: movl $0,(%esi);");
    asm("loc_6C07C6E: movl $0,0xC(%esi);");
    asm("loc_6C07C75: mov 0x14(%edi),%eax;");
    asm("loc_6C07C78: push %esi;");
    asm("loc_6C07C79: push %eax;");
    asm("loc_6C07C7A: lea 0x18(%edi),%ebx;");
    asm("loc_6C07C7D: push %ebx;");
    asm("loc_6C07C7E: mov %edi,%ecx;");
    asm("loc_6C07C80: call _sub_6BEBE50;");
    asm("loc_6C07C85: test %eax,%eax;");
    asm("loc_6C07C87: mov %eax,0x1C(%edi);");
    asm("loc_6C07C8A: je loc_6C07C97;");
    asm("loc_6C07C8C: pop %edi;");
    asm("loc_6C07C8D: pop %esi;");
    asm("loc_6C07C8E: mov $0x16,%eax;");
    asm("loc_6C07C93: pop %ebx;");
    asm("loc_6C07C94: ret $0xC;");
    asm("loc_6C07C97: mov (%esi),%edx;");
    asm("loc_6C07C99: mov 4(%esi),%ecx;");
    asm("loc_6C07C9C: add $4,%edx;");
    asm("loc_6C07C9F: mov %edx,%eax;");
    asm("loc_6C07CA1: cmp %ecx,%eax;");
    asm("loc_6C07CA3: mov %edx,(%esi);");
    asm("loc_6C07CA5: jbe loc_6C07CAE;");
    asm("loc_6C07CA7: movl $0x16,0xC(%esi);");
    asm("loc_6C07CAE: mov 0x1C(%edi),%eax;");
    asm("loc_6C07CB1: test %eax,%eax;");
    asm("loc_6C07CB3: je loc_6C07CC0;");
    asm("loc_6C07CB5: pop %edi;");
    asm("loc_6C07CB6: pop %esi;");
    asm("loc_6C07CB7: mov $0x16,%eax;");
    asm("loc_6C07CBC: pop %ebx;");
    asm("loc_6C07CBD: ret $0xC;");
    asm("loc_6C07CC0: mov (%ebx),%eax;");
    asm("loc_6C07CC2: mov 0x20(%edi),%ecx;");
    asm("loc_6C07CC5: mov %ecx,(%eax);");
    asm("loc_6C07CC7: add $4,%eax;");
    asm("loc_6C07CCA: mov %eax,(%ebx);");
    asm("loc_6C07CCC: mov (%esi),%edx;");
    asm("loc_6C07CCE: mov 4(%esi),%ecx;");
    asm("loc_6C07CD1: add $4,%edx;");
    asm("loc_6C07CD4: mov %edx,%eax;");
    asm("loc_6C07CD6: cmp %ecx,%eax;");
    asm("loc_6C07CD8: mov %edx,(%esi);");
    asm("loc_6C07CDA: jbe loc_6C07CE3;");
    asm("loc_6C07CDC: movl $0x16,0xC(%esi);");
    asm("loc_6C07CE3: mov 0x1C(%edi),%eax;");
    asm("loc_6C07CE6: test %eax,%eax;");
    asm("loc_6C07CE8: je loc_6C07CF5;");
    asm("loc_6C07CEA: pop %edi;");
    asm("loc_6C07CEB: pop %esi;");
    asm("loc_6C07CEC: mov $0x16,%eax;");
    asm("loc_6C07CF1: pop %ebx;");
    asm("loc_6C07CF2: ret $0xC;");
    asm("loc_6C07CF5: mov (%ebx),%eax;");
    asm("loc_6C07CF7: mov 0x24(%edi),%edx;");
    asm("loc_6C07CFA: mov %edx,(%eax);");
    asm("loc_6C07CFC: add $4,%eax;");
    asm("loc_6C07CFF: mov %eax,(%ebx);");
    asm("loc_6C07D01: mov (%esi),%edx;");
    asm("loc_6C07D03: mov 4(%esi),%ecx;");
    asm("loc_6C07D06: add $4,%edx;");
    asm("loc_6C07D09: mov %edx,%eax;");
    asm("loc_6C07D0B: cmp %ecx,%eax;");
    asm("loc_6C07D0D: mov %edx,(%esi);");
    asm("loc_6C07D0F: jbe loc_6C07D18;");
    asm("loc_6C07D11: movl $0x16,0xC(%esi);");
    asm("loc_6C07D18: mov 0x1C(%edi),%eax;");
    asm("loc_6C07D1B: test %eax,%eax;");
    asm("loc_6C07D1D: je loc_6C07D2A;");
    asm("loc_6C07D1F: pop %edi;");
    asm("loc_6C07D20: pop %esi;");
    asm("loc_6C07D21: mov $0x16,%eax;");
    asm("loc_6C07D26: pop %ebx;");
    asm("loc_6C07D27: ret $0xC;");
    asm("loc_6C07D2A: mov (%ebx),%eax;");
    asm("loc_6C07D2C: mov 0x28(%edi),%ecx;");
    asm("loc_6C07D2F: mov %ecx,(%eax);");
    asm("loc_6C07D31: mov 0x14(%edi),%edx;");
    asm("loc_6C07D34: push %esi;");
    asm("loc_6C07D35: push %edx;");
    asm("loc_6C07D36: add $4,%eax;");
    asm("loc_6C07D39: push %ebx;");
    asm("loc_6C07D3A: mov %edi,%ecx;");
    asm("loc_6C07D3C: mov %eax,(%ebx);");
    asm("loc_6C07D3E: call _sub_6BEBEA0;");
    asm("loc_6C07D43: test %eax,%eax;");
    asm("loc_6C07D45: mov %eax,0x1C(%edi);");
    asm("loc_6C07D48: je loc_6C07D55;");
    asm("loc_6C07D4A: pop %edi;");
    asm("loc_6C07D4B: pop %esi;");
    asm("loc_6C07D4C: mov $0x16,%eax;");
    asm("loc_6C07D51: pop %ebx;");
    asm("loc_6C07D52: ret $0xC;");
    asm("loc_6C07D55: mov (%esi),%eax;");
    asm("loc_6C07D57: mov 0x18(%esp),%ecx;");
    asm("loc_6C07D5B: mov %eax,(%ecx);");
    asm("loc_6C07D5D: mov 0xC(%edi),%edx;");
    asm("loc_6C07D60: push %edx;");
    asm("loc_6C07D61: call _sub_6BEC3B0;");
    asm("loc_6C07D66: mov %eax,%ecx;");
    asm("loc_6C07D68: mov (%ecx),%edi;");
    asm("loc_6C07D6A: mov 0x18(%ecx),%edx;");
    asm("loc_6C07D6D: add $4,%esp;");
    asm("loc_6C07D70: inc %edi;");
    asm("loc_6C07D71: mov %edi,(%ecx);");
    asm("loc_6C07D73: mov (%esi),%eax;");
    asm("loc_6C07D75: add %eax,%edx;");
    asm("loc_6C07D77: mov 0x10(%ecx),%eax;");
    asm("loc_6C07D7A: mov %edx,0x18(%ecx);");
    asm("loc_6C07D7D: mov (%esi),%esi;");
    asm("loc_6C07D7F: cmp %eax,%esi;");
    asm("loc_6C07D81: jbe loc_6C07D86;");
    asm("loc_6C07D83: mov %esi,0x10(%ecx);");
    asm("loc_6C07D86: mov 0x18(%ecx),%eax;");
    asm("loc_6C07D89: xor %edx,%edx;");
    asm("loc_6C07D8B: div %edi;");
    asm("loc_6C07D8D: pop %edi;");
    asm("loc_6C07D8E: pop %esi;");
    asm("loc_6C07D8F: pop %ebx;");
    asm("loc_6C07D90: mov %eax,8(%ecx);");
    asm("loc_6C07D93: xor %eax,%eax;");
    asm("loc_6C07D95: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07DA0() // _sub_6C07DA0
{
    __DEBUG_ASM(6C07DA0);
    // chunk 0x6C07DA0 _sub_6C07DA0
    asm("loc_6C07DA0: mov 4(%esp),%eax;");
    asm("loc_6C07DA4: push %ebx;");
    asm("loc_6C07DA5: push %ebp;");
    asm("loc_6C07DA6: mov 0x10(%esp),%ebp;");
    asm("loc_6C07DAA: push %esi;");
    asm("loc_6C07DAB: push %edi;");
    asm("loc_6C07DAC: mov %ecx,%edi;");
    asm("loc_6C07DAE: lea 0x10(%edi),%esi;");
    asm("loc_6C07DB1: push %esi;");
    asm("loc_6C07DB2: push %ebp;");
    asm("loc_6C07DB3: lea 0x18(%edi),%ebx;");
    asm("loc_6C07DB6: push %ebx;");
    asm("loc_6C07DB7: mov %ebp,4(%esi);");
    asm("loc_6C07DBA: mov %eax,8(%esi);");
    asm("loc_6C07DBD: movl $0,(%esi);");
    asm("loc_6C07DC3: movl $0,0xC(%esi);");
    asm("loc_6C07DCA: call _sub_6BEBE90;");
    asm("loc_6C07DCF: test %eax,%eax;");
    asm("loc_6C07DD1: mov %eax,0x1C(%edi);");
    asm("loc_6C07DD4: je loc_6C07DE2;");
    asm("loc_6C07DD6: pop %edi;");
    asm("loc_6C07DD7: pop %esi;");
    asm("loc_6C07DD8: pop %ebp;");
    asm("loc_6C07DD9: mov $0x17,%eax;");
    asm("loc_6C07DDE: pop %ebx;");
    asm("loc_6C07DDF: ret $0xC;");
    asm("loc_6C07DE2: mov (%esi),%edx;");
    asm("loc_6C07DE4: mov 4(%esi),%ecx;");
    asm("loc_6C07DE7: add $4,%edx;");
    asm("loc_6C07DEA: mov %edx,%eax;");
    asm("loc_6C07DEC: cmp %ecx,%eax;");
    asm("loc_6C07DEE: mov %edx,(%esi);");
    asm("loc_6C07DF0: mov $0x17,%ecx;");
    asm("loc_6C07DF5: jbe loc_6C07DFA;");
    asm("loc_6C07DF7: mov %ecx,0xC(%esi);");
    asm("loc_6C07DFA: mov 0x1C(%edi),%eax;");
    asm("loc_6C07DFD: test %eax,%eax;");
    asm("loc_6C07DFF: jne loc_6C07EC4;");
    asm("loc_6C07E05: mov (%ebx),%eax;");
    asm("loc_6C07E07: mov (%eax),%edx;");
    asm("loc_6C07E09: add $4,%eax;");
    asm("loc_6C07E0C: mov %eax,(%ebx);");
    asm("loc_6C07E0E: mov %edx,0x20(%edi);");
    asm("loc_6C07E11: mov (%esi),%eax;");
    asm("loc_6C07E13: mov 4(%esi),%edx;");
    asm("loc_6C07E16: add $4,%eax;");
    asm("loc_6C07E19: cmp %edx,%eax;");
    asm("loc_6C07E1B: mov %eax,(%esi);");
    asm("loc_6C07E1D: jbe loc_6C07E22;");
    asm("loc_6C07E1F: mov %ecx,0xC(%esi);");
    asm("loc_6C07E22: mov 0x1C(%edi),%eax;");
    asm("loc_6C07E25: test %eax,%eax;");
    asm("loc_6C07E27: jne loc_6C07EC4;");
    asm("loc_6C07E2D: mov (%ebx),%eax;");
    asm("loc_6C07E2F: mov (%eax),%edx;");
    asm("loc_6C07E31: add $4,%eax;");
    asm("loc_6C07E34: mov %eax,(%ebx);");
    asm("loc_6C07E36: mov %edx,0x24(%edi);");
    asm("loc_6C07E39: mov (%esi),%eax;");
    asm("loc_6C07E3B: mov 4(%esi),%edx;");
    asm("loc_6C07E3E: add $4,%eax;");
    asm("loc_6C07E41: cmp %edx,%eax;");
    asm("loc_6C07E43: mov %eax,(%esi);");
    asm("loc_6C07E45: jbe loc_6C07E4A;");
    asm("loc_6C07E47: mov %ecx,0xC(%esi);");
    asm("loc_6C07E4A: mov 0x1C(%edi),%eax;");
    asm("loc_6C07E4D: test %eax,%eax;");
    asm("loc_6C07E4F: jne loc_6C07EC4;");
    asm("loc_6C07E51: mov (%ebx),%eax;");
    asm("loc_6C07E53: mov (%eax),%ecx;");
    asm("loc_6C07E55: push %esi;");
    asm("loc_6C07E56: push %ebp;");
    asm("loc_6C07E57: mov %ecx,0x28(%edi);");
    asm("loc_6C07E5A: add $4,%eax;");
    asm("loc_6C07E5D: push %ebx;");
    asm("loc_6C07E5E: mov %edi,%ecx;");
    asm("loc_6C07E60: mov %eax,(%ebx);");
    asm("loc_6C07E62: call _sub_6BEBEB0;");
    asm("loc_6C07E67: test %eax,%eax;");
    asm("loc_6C07E69: mov %eax,0x1C(%edi);");
    asm("loc_6C07E6C: je loc_6C07E7A;");
    asm("loc_6C07E6E: pop %edi;");
    asm("loc_6C07E6F: pop %esi;");
    asm("loc_6C07E70: pop %ebp;");
    asm("loc_6C07E71: mov $0x17,%eax;");
    asm("loc_6C07E76: pop %ebx;");
    asm("loc_6C07E77: ret $0xC;");
    asm("loc_6C07E7A: mov (%esi),%edx;");
    asm("loc_6C07E7C: mov 0x1C(%esp),%eax;");
    asm("loc_6C07E80: mov %edx,(%eax);");
    asm("loc_6C07E82: mov 0xC(%edi),%ecx;");
    asm("loc_6C07E85: push %ecx;");
    asm("loc_6C07E86: call _sub_6BEC3B0;");
    asm("loc_6C07E8B: mov %eax,%ecx;");
    asm("loc_6C07E8D: mov 4(%ecx),%edx;");
    asm("loc_6C07E90: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C07E93: mov 0x14(%ecx),%eax;");
    asm("loc_6C07E96: add $4,%esp;");
    asm("loc_6C07E99: inc %edx;");
    asm("loc_6C07E9A: mov %edx,4(%ecx);");
    asm("loc_6C07E9D: mov %edx,%edi;");
    asm("loc_6C07E9F: mov (%esi),%edx;");
    asm("loc_6C07EA1: add $2,%edx;");
    asm("loc_6C07EA4: add %edx,%ebp;");
    asm("loc_6C07EA6: mov %ebp,0x1C(%ecx);");
    asm("loc_6C07EA9: mov (%esi),%esi;");
    asm("loc_6C07EAB: add $2,%eax;");
    asm("loc_6C07EAE: cmp %eax,%esi;");
    asm("loc_6C07EB0: jbe loc_6C07EB8;");
    asm("loc_6C07EB2: add $2,%esi;");
    asm("loc_6C07EB5: mov %esi,0x14(%ecx);");
    asm("loc_6C07EB8: mov 0x1C(%ecx),%eax;");
    asm("loc_6C07EBB: xor %edx,%edx;");
    asm("loc_6C07EBD: div %edi;");
    asm("loc_6C07EBF: mov %eax,0xC(%ecx);");
    asm("loc_6C07EC2: xor %eax,%eax;");
    asm("loc_6C07EC4: pop %edi;");
    asm("loc_6C07EC5: pop %esi;");
    asm("loc_6C07EC6: pop %ebp;");
    asm("loc_6C07EC7: pop %ebx;");
    asm("loc_6C07EC8: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07ED0() // _sub_6C07ED0
{
    __DEBUG_ASM(6C07ED0);
    // chunk 0x6C07ED0 _sub_6C07ED0
    asm("loc_6C07ED0: mov _data_6C0E624,%eax;");
    asm("loc_6C07ED5: mov %eax,_data_6C142D8;");
    asm("loc_6C07EDA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07EE0() // _sub_6C07EE0
{
    __DEBUG_ASM(6C07EE0);
    // chunk 0x6C07EE0 _sub_6C07EE0
    asm("loc_6C07EE0: mov _data_6C0E624,%eax;");
    asm("loc_6C07EE5: mov %eax,_data_6C142DC;");
    asm("loc_6C07EEA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07EF0() // _sub_6C07EF0
{
    __DEBUG_ASM(6C07EF0);
    // chunk 0x6C07EF0 _sub_6C07EF0
    asm("loc_6C07EF0: mov _data_6C0E628,%eax;");
    asm("loc_6C07EF5: mov %eax,_data_6C142D4;");
    asm("loc_6C07EFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C07F00() // _sub_6C07F00
{
    __DEBUG_ASM(6C07F00);
    // chunk 0x6C07F00 _sub_6C07F00
    asm("loc_6C07F00: mov 8(%esp),%eax;");
    asm("loc_6C07F04: push %ebx;");
    asm("loc_6C07F05: push %esi;");
    asm("loc_6C07F06: push %edi;");
    asm("loc_6C07F07: mov %ecx,%edi;");
    asm("loc_6C07F09: mov 0x10(%esp),%ecx;");
    asm("loc_6C07F0D: lea 0x10(%edi),%esi;");
    asm("loc_6C07F10: mov %eax,4(%esi);");
    asm("loc_6C07F13: mov (%ecx),%edx;");
    asm("loc_6C07F15: mov %edx,8(%esi);");
    asm("loc_6C07F18: movl $0,(%esi);");
    asm("loc_6C07F1E: movl $0,0xC(%esi);");
    asm("loc_6C07F25: mov 0x14(%edi),%eax;");
    asm("loc_6C07F28: push %esi;");
    asm("loc_6C07F29: push %eax;");
    asm("loc_6C07F2A: lea 0x18(%edi),%ebx;");
    asm("loc_6C07F2D: push %ebx;");
    asm("loc_6C07F2E: mov %edi,%ecx;");
    asm("loc_6C07F30: call _sub_6BEBE50;");
    asm("loc_6C07F35: test %eax,%eax;");
    asm("loc_6C07F37: mov %eax,0x1C(%edi);");
    asm("loc_6C07F3A: je loc_6C07F47;");
    asm("loc_6C07F3C: pop %edi;");
    asm("loc_6C07F3D: pop %esi;");
    asm("loc_6C07F3E: mov $0x16,%eax;");
    asm("loc_6C07F43: pop %ebx;");
    asm("loc_6C07F44: ret $0xC;");
    asm("loc_6C07F47: mov (%esi),%edx;");
    asm("loc_6C07F49: mov 4(%esi),%ecx;");
    asm("loc_6C07F4C: add $4,%edx;");
    asm("loc_6C07F4F: mov %edx,%eax;");
    asm("loc_6C07F51: cmp %ecx,%eax;");
    asm("loc_6C07F53: mov %edx,(%esi);");
    asm("loc_6C07F55: jbe loc_6C07F5E;");
    asm("loc_6C07F57: movl $0x16,0xC(%esi);");
    asm("loc_6C07F5E: mov 0x1C(%edi),%eax;");
    asm("loc_6C07F61: test %eax,%eax;");
    asm("loc_6C07F63: je loc_6C07F70;");
    asm("loc_6C07F65: pop %edi;");
    asm("loc_6C07F66: pop %esi;");
    asm("loc_6C07F67: mov $0x16,%eax;");
    asm("loc_6C07F6C: pop %ebx;");
    asm("loc_6C07F6D: ret $0xC;");
    asm("loc_6C07F70: mov (%ebx),%eax;");
    asm("loc_6C07F72: mov 0x20(%edi),%ecx;");
    asm("loc_6C07F75: mov %ecx,(%eax);");
    asm("loc_6C07F77: add $4,%eax;");
    asm("loc_6C07F7A: mov %eax,(%ebx);");
    asm("loc_6C07F7C: mov (%esi),%edx;");
    asm("loc_6C07F7E: mov 4(%esi),%ecx;");
    asm("loc_6C07F81: add $2,%edx;");
    asm("loc_6C07F84: mov %edx,%eax;");
    asm("loc_6C07F86: cmp %ecx,%eax;");
    asm("loc_6C07F88: mov %edx,(%esi);");
    asm("loc_6C07F8A: jbe loc_6C07F93;");
    asm("loc_6C07F8C: movl $0x16,0xC(%esi);");
    asm("loc_6C07F93: mov 0x1C(%edi),%eax;");
    asm("loc_6C07F96: test %eax,%eax;");
    asm("loc_6C07F98: je loc_6C07FA5;");
    asm("loc_6C07F9A: pop %edi;");
    asm("loc_6C07F9B: pop %esi;");
    asm("loc_6C07F9C: mov $0x16,%eax;");
    asm("loc_6C07FA1: pop %ebx;");
    asm("loc_6C07FA2: ret $0xC;");
    asm("loc_6C07FA5: mov (%ebx),%eax;");
    asm("loc_6C07FA7: mov 0x24(%edi),%dx;");
    asm("loc_6C07FAB: mov %dx,(%eax);");
    asm("loc_6C07FAE: add $2,%eax;");
    asm("loc_6C07FB1: mov %eax,(%ebx);");
    asm("loc_6C07FB3: mov (%esi),%edx;");
    asm("loc_6C07FB5: mov 4(%esi),%ecx;");
    asm("loc_6C07FB8: add $2,%edx;");
    asm("loc_6C07FBB: mov %edx,%eax;");
    asm("loc_6C07FBD: cmp %ecx,%eax;");
    asm("loc_6C07FBF: mov %edx,(%esi);");
    asm("loc_6C07FC1: jbe loc_6C07FCA;");
    asm("loc_6C07FC3: movl $0x16,0xC(%esi);");
    asm("loc_6C07FCA: mov 0x1C(%edi),%eax;");
    asm("loc_6C07FCD: test %eax,%eax;");
    asm("loc_6C07FCF: je loc_6C07FDC;");
    asm("loc_6C07FD1: pop %edi;");
    asm("loc_6C07FD2: pop %esi;");
    asm("loc_6C07FD3: mov $0x16,%eax;");
    asm("loc_6C07FD8: pop %ebx;");
    asm("loc_6C07FD9: ret $0xC;");
    asm("loc_6C07FDC: mov (%ebx),%eax;");
    asm("loc_6C07FDE: mov 0x26(%edi),%cx;");
    asm("loc_6C07FE2: mov %cx,(%eax);");
    asm("loc_6C07FE5: mov 0x14(%edi),%edx;");
    asm("loc_6C07FE8: push %esi;");
    asm("loc_6C07FE9: push %edx;");
    asm("loc_6C07FEA: add $2,%eax;");
    asm("loc_6C07FED: push %ebx;");
    asm("loc_6C07FEE: mov %edi,%ecx;");
    asm("loc_6C07FF0: mov %eax,(%ebx);");
    asm("loc_6C07FF2: call _sub_6BEBEA0;");
    asm("loc_6C07FF7: test %eax,%eax;");
    asm("loc_6C07FF9: mov %eax,0x1C(%edi);");
    asm("loc_6C07FFC: je loc_6C08009;");
    asm("loc_6C07FFE: pop %edi;");
    asm("loc_6C07FFF: pop %esi;");
    asm("loc_6C08000: mov $0x16,%eax;");
    asm("loc_6C08005: pop %ebx;");
    asm("loc_6C08006: ret $0xC;");
    asm("loc_6C08009: mov (%esi),%eax;");
    asm("loc_6C0800B: mov 0x18(%esp),%ecx;");
    asm("loc_6C0800F: mov %eax,(%ecx);");
    asm("loc_6C08011: mov 0xC(%edi),%edx;");
    asm("loc_6C08014: push %edx;");
    asm("loc_6C08015: call _sub_6BEC3B0;");
    asm("loc_6C0801A: mov %eax,%ecx;");
    asm("loc_6C0801C: mov (%ecx),%edi;");
    asm("loc_6C0801E: mov 0x18(%ecx),%edx;");
    asm("loc_6C08021: add $4,%esp;");
    asm("loc_6C08024: inc %edi;");
    asm("loc_6C08025: mov %edi,(%ecx);");
    asm("loc_6C08027: mov (%esi),%eax;");
    asm("loc_6C08029: add %eax,%edx;");
    asm("loc_6C0802B: mov 0x10(%ecx),%eax;");
    asm("loc_6C0802E: mov %edx,0x18(%ecx);");
    asm("loc_6C08031: mov (%esi),%esi;");
    asm("loc_6C08033: cmp %eax,%esi;");
    asm("loc_6C08035: jbe loc_6C0803A;");
    asm("loc_6C08037: mov %esi,0x10(%ecx);");
    asm("loc_6C0803A: mov 0x18(%ecx),%eax;");
    asm("loc_6C0803D: xor %edx,%edx;");
    asm("loc_6C0803F: div %edi;");
    asm("loc_6C08041: pop %edi;");
    asm("loc_6C08042: pop %esi;");
    asm("loc_6C08043: pop %ebx;");
    asm("loc_6C08044: mov %eax,8(%ecx);");
    asm("loc_6C08047: xor %eax,%eax;");
    asm("loc_6C08049: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C08050() // _sub_6C08050
{
    __DEBUG_ASM(6C08050);
    // chunk 0x6C08050 _sub_6C08050
    asm("loc_6C08050: mov 4(%esp),%eax;");
    asm("loc_6C08054: push %ebx;");
    asm("loc_6C08055: push %ebp;");
    asm("loc_6C08056: mov 0x10(%esp),%ebp;");
    asm("loc_6C0805A: push %esi;");
    asm("loc_6C0805B: push %edi;");
    asm("loc_6C0805C: mov %ecx,%edi;");
    asm("loc_6C0805E: lea 0x10(%edi),%esi;");
    asm("loc_6C08061: push %esi;");
    asm("loc_6C08062: push %ebp;");
    asm("loc_6C08063: lea 0x18(%edi),%ebx;");
    asm("loc_6C08066: push %ebx;");
    asm("loc_6C08067: mov %ebp,4(%esi);");
    asm("loc_6C0806A: mov %eax,8(%esi);");
    asm("loc_6C0806D: movl $0,(%esi);");
    asm("loc_6C08073: movl $0,0xC(%esi);");
    asm("loc_6C0807A: call _sub_6BEBE90;");
    asm("loc_6C0807F: test %eax,%eax;");
    asm("loc_6C08081: mov %eax,0x1C(%edi);");
    asm("loc_6C08084: je loc_6C08092;");
    asm("loc_6C08086: pop %edi;");
    asm("loc_6C08087: pop %esi;");
    asm("loc_6C08088: pop %ebp;");
    asm("loc_6C08089: mov $0x17,%eax;");
    asm("loc_6C0808E: pop %ebx;");
    asm("loc_6C0808F: ret $0xC;");
    asm("loc_6C08092: mov (%esi),%edx;");
    asm("loc_6C08094: mov 4(%esi),%ecx;");
    asm("loc_6C08097: add $4,%edx;");
    asm("loc_6C0809A: mov %edx,%eax;");
    asm("loc_6C0809C: cmp %ecx,%eax;");
    asm("loc_6C0809E: mov %edx,(%esi);");
    asm("loc_6C080A0: mov $0x17,%ecx;");
    asm("loc_6C080A5: jbe loc_6C080AA;");
    asm("loc_6C080A7: mov %ecx,0xC(%esi);");
    asm("loc_6C080AA: mov 0x1C(%edi),%eax;");
    asm("loc_6C080AD: test %eax,%eax;");
    asm("loc_6C080AF: jne loc_6C08178;");
    asm("loc_6C080B5: mov (%ebx),%eax;");
    asm("loc_6C080B7: mov (%eax),%edx;");
    asm("loc_6C080B9: add $4,%eax;");
    asm("loc_6C080BC: mov %eax,(%ebx);");
    asm("loc_6C080BE: mov %edx,0x20(%edi);");
    asm("loc_6C080C1: mov (%esi),%eax;");
    asm("loc_6C080C3: mov 4(%esi),%edx;");
    asm("loc_6C080C6: add $2,%eax;");
    asm("loc_6C080C9: cmp %edx,%eax;");
    asm("loc_6C080CB: mov %eax,(%esi);");
    asm("loc_6C080CD: jbe loc_6C080D2;");
    asm("loc_6C080CF: mov %ecx,0xC(%esi);");
    asm("loc_6C080D2: mov 0x1C(%edi),%eax;");
    asm("loc_6C080D5: test %eax,%eax;");
    asm("loc_6C080D7: jne loc_6C08178;");
    asm("loc_6C080DD: mov (%ebx),%eax;");
    asm("loc_6C080DF: mov (%eax),%dx;");
    asm("loc_6C080E2: add $2,%eax;");
    asm("loc_6C080E5: mov %eax,(%ebx);");
    asm("loc_6C080E7: mov %dx,0x24(%edi);");
    asm("loc_6C080EB: mov (%esi),%eax;");
    asm("loc_6C080ED: mov 4(%esi),%edx;");
    asm("loc_6C080F0: add $2,%eax;");
    asm("loc_6C080F3: cmp %edx,%eax;");
    asm("loc_6C080F5: mov %eax,(%esi);");
    asm("loc_6C080F7: jbe loc_6C080FC;");
    asm("loc_6C080F9: mov %ecx,0xC(%esi);");
    asm("loc_6C080FC: mov 0x1C(%edi),%eax;");
    asm("loc_6C080FF: test %eax,%eax;");
    asm("loc_6C08101: jne loc_6C08178;");
    asm("loc_6C08103: mov (%ebx),%eax;");
    asm("loc_6C08105: mov (%eax),%cx;");
    asm("loc_6C08108: push %esi;");
    asm("loc_6C08109: push %ebp;");
    asm("loc_6C0810A: mov %cx,0x26(%edi);");
    asm("loc_6C0810E: add $2,%eax;");
    asm("loc_6C08111: push %ebx;");
    asm("loc_6C08112: mov %edi,%ecx;");
    asm("loc_6C08114: mov %eax,(%ebx);");
    asm("loc_6C08116: call _sub_6BEBEB0;");
    asm("loc_6C0811B: test %eax,%eax;");
    asm("loc_6C0811D: mov %eax,0x1C(%edi);");
    asm("loc_6C08120: je loc_6C0812E;");
    asm("loc_6C08122: pop %edi;");
    asm("loc_6C08123: pop %esi;");
    asm("loc_6C08124: pop %ebp;");
    asm("loc_6C08125: mov $0x17,%eax;");
    asm("loc_6C0812A: pop %ebx;");
    asm("loc_6C0812B: ret $0xC;");
    asm("loc_6C0812E: mov (%esi),%edx;");
    asm("loc_6C08130: mov 0x1C(%esp),%eax;");
    asm("loc_6C08134: mov %edx,(%eax);");
    asm("loc_6C08136: mov 0xC(%edi),%ecx;");
    asm("loc_6C08139: push %ecx;");
    asm("loc_6C0813A: call _sub_6BEC3B0;");
    asm("loc_6C0813F: mov %eax,%ecx;");
    asm("loc_6C08141: mov 4(%ecx),%edx;");
    asm("loc_6C08144: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C08147: mov 0x14(%ecx),%eax;");
    asm("loc_6C0814A: add $4,%esp;");
    asm("loc_6C0814D: inc %edx;");
    asm("loc_6C0814E: mov %edx,4(%ecx);");
    asm("loc_6C08151: mov %edx,%edi;");
    asm("loc_6C08153: mov (%esi),%edx;");
    asm("loc_6C08155: add $2,%edx;");
    asm("loc_6C08158: add %edx,%ebp;");
    asm("loc_6C0815A: mov %ebp,0x1C(%ecx);");
    asm("loc_6C0815D: mov (%esi),%esi;");
    asm("loc_6C0815F: add $2,%eax;");
    asm("loc_6C08162: cmp %eax,%esi;");
    asm("loc_6C08164: jbe loc_6C0816C;");
    asm("loc_6C08166: add $2,%esi;");
    asm("loc_6C08169: mov %esi,0x14(%ecx);");
    asm("loc_6C0816C: mov 0x1C(%ecx),%eax;");
    asm("loc_6C0816F: xor %edx,%edx;");
    asm("loc_6C08171: div %edi;");
    asm("loc_6C08173: mov %eax,0xC(%ecx);");
    asm("loc_6C08176: xor %eax,%eax;");
    asm("loc_6C08178: pop %edi;");
    asm("loc_6C08179: pop %esi;");
    asm("loc_6C0817A: pop %ebp;");
    asm("loc_6C0817B: pop %ebx;");
    asm("loc_6C0817C: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C08180() // _sub_6C08180
{
    __DEBUG_ASM(6C08180);
    // chunk 0x6C08180 _sub_6C08180
    asm("loc_6C08180: mov _data_6C0E630,%eax;");
    asm("loc_6C08185: mov %eax,_data_6C142E8;");
    asm("loc_6C0818A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C08190() // _sub_6C08190
{
    __DEBUG_ASM(6C08190);
    // chunk 0x6C08190 _sub_6C08190
    asm("loc_6C08190: mov _data_6C0E630,%eax;");
    asm("loc_6C08195: mov %eax,_data_6C142EC;");
    asm("loc_6C0819A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C081A0() // _sub_6C081A0
{
    __DEBUG_ASM(6C081A0);
    // chunk 0x6C081A0 _sub_6C081A0
    asm("loc_6C081A0: mov _data_6C0E634,%eax;");
    asm("loc_6C081A5: mov %eax,_data_6C142E4;");
    asm("loc_6C081AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C081B0() // _sub_6C081B0
{
    __DEBUG_ASM(6C081B0);
    // chunk 0x6C081B0 _sub_6C081B0
    asm("loc_6C081B0: mov _data_6C0E63C,%eax;");
    asm("loc_6C081B5: mov %eax,_data_6C142F8;");
    asm("loc_6C081BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C081C0() // _sub_6C081C0
{
    __DEBUG_ASM(6C081C0);
    // chunk 0x6C081C0 _sub_6C081C0
    asm("loc_6C081C0: mov _data_6C0E63C,%eax;");
    asm("loc_6C081C5: mov %eax,_data_6C142FC;");
    asm("loc_6C081CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C081D0() // _sub_6C081D0
{
    __DEBUG_ASM(6C081D0);
    // chunk 0x6C081D0 _sub_6C081D0
    asm("loc_6C081D0: mov _data_6C0E640,%eax;");
    asm("loc_6C081D5: mov %eax,_data_6C142F4;");
    asm("loc_6C081DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C081E0() // _sub_6C081E0
{
    __DEBUG_ASM(6C081E0);
    // chunk 0x6C081E0 _sub_6C081E0
    asm("loc_6C081E0: mov 8(%esp),%eax;");
    asm("loc_6C081E4: push %ebx;");
    asm("loc_6C081E5: push %esi;");
    asm("loc_6C081E6: push %edi;");
    asm("loc_6C081E7: mov %ecx,%edi;");
    asm("loc_6C081E9: mov 0x10(%esp),%ecx;");
    asm("loc_6C081ED: lea 0x10(%edi),%esi;");
    asm("loc_6C081F0: mov %eax,4(%esi);");
    asm("loc_6C081F3: mov (%ecx),%edx;");
    asm("loc_6C081F5: mov %edx,8(%esi);");
    asm("loc_6C081F8: movl $0,(%esi);");
    asm("loc_6C081FE: movl $0,0xC(%esi);");
    asm("loc_6C08205: mov 0x14(%edi),%eax;");
    asm("loc_6C08208: push %esi;");
    asm("loc_6C08209: push %eax;");
    asm("loc_6C0820A: lea 0x18(%edi),%ebx;");
    asm("loc_6C0820D: push %ebx;");
    asm("loc_6C0820E: mov %edi,%ecx;");
    asm("loc_6C08210: call _sub_6BEBE50;");
    asm("loc_6C08215: test %eax,%eax;");
    asm("loc_6C08217: mov %eax,0x1C(%edi);");
    asm("loc_6C0821A: je loc_6C08227;");
    asm("loc_6C0821C: pop %edi;");
    asm("loc_6C0821D: pop %esi;");
    asm("loc_6C0821E: mov $0x16,%eax;");
    asm("loc_6C08223: pop %ebx;");
    asm("loc_6C08224: ret $0xC;");
    asm("loc_6C08227: mov (%esi),%edx;");
    asm("loc_6C08229: mov 4(%esi),%ecx;");
    asm("loc_6C0822C: add $4,%edx;");
    asm("loc_6C0822F: mov %edx,%eax;");
    asm("loc_6C08231: cmp %ecx,%eax;");
    asm("loc_6C08233: mov %edx,(%esi);");
    asm("loc_6C08235: jbe loc_6C0823E;");
    asm("loc_6C08237: movl $0x16,0xC(%esi);");
    asm("loc_6C0823E: mov 0x1C(%edi),%eax;");
    asm("loc_6C08241: test %eax,%eax;");
    asm("loc_6C08243: je loc_6C08250;");
    asm("loc_6C08245: pop %edi;");
    asm("loc_6C08246: pop %esi;");
    asm("loc_6C08247: mov $0x16,%eax;");
    asm("loc_6C0824C: pop %ebx;");
    asm("loc_6C0824D: ret $0xC;");
    asm("loc_6C08250: mov (%ebx),%eax;");
    asm("loc_6C08252: mov 0x20(%edi),%ecx;");
    asm("loc_6C08255: mov %ecx,(%eax);");
    asm("loc_6C08257: add $4,%eax;");
    asm("loc_6C0825A: mov %eax,(%ebx);");
    asm("loc_6C0825C: mov (%esi),%edx;");
    asm("loc_6C0825E: mov 4(%esi),%ecx;");
    asm("loc_6C08261: inc %edx;");
    asm("loc_6C08262: mov %edx,%eax;");
    asm("loc_6C08264: cmp %ecx,%eax;");
    asm("loc_6C08266: mov %edx,(%esi);");
    asm("loc_6C08268: jbe loc_6C08271;");
    asm("loc_6C0826A: movl $0x16,0xC(%esi);");
    asm("loc_6C08271: mov 0x1C(%edi),%eax;");
    asm("loc_6C08274: test %eax,%eax;");
    asm("loc_6C08276: je loc_6C08283;");
    asm("loc_6C08278: pop %edi;");
    asm("loc_6C08279: pop %esi;");
    asm("loc_6C0827A: mov $0x16,%eax;");
    asm("loc_6C0827F: pop %ebx;");
    asm("loc_6C08280: ret $0xC;");
    asm("loc_6C08283: mov (%ebx),%eax;");
    asm("loc_6C08285: mov 0x24(%edi),%dl;");
    asm("loc_6C08288: mov %dl,(%eax);");
    asm("loc_6C0828A: inc %eax;");
    asm("loc_6C0828B: mov %eax,(%ebx);");
    asm("loc_6C0828D: mov (%esi),%edx;");
    asm("loc_6C0828F: mov 4(%esi),%ecx;");
    asm("loc_6C08292: inc %edx;");
    asm("loc_6C08293: mov %edx,%eax;");
    asm("loc_6C08295: cmp %ecx,%eax;");
    asm("loc_6C08297: mov %edx,(%esi);");
    asm("loc_6C08299: jbe loc_6C082A2;");
    asm("loc_6C0829B: movl $0x16,0xC(%esi);");
    asm("loc_6C082A2: mov 0x1C(%edi),%eax;");
    asm("loc_6C082A5: test %eax,%eax;");
    asm("loc_6C082A7: je loc_6C082B4;");
    asm("loc_6C082A9: pop %edi;");
    asm("loc_6C082AA: pop %esi;");
    asm("loc_6C082AB: mov $0x16,%eax;");
    asm("loc_6C082B0: pop %ebx;");
    asm("loc_6C082B1: ret $0xC;");
    asm("loc_6C082B4: mov (%ebx),%eax;");
    asm("loc_6C082B6: mov 0x25(%edi),%cl;");
    asm("loc_6C082B9: mov %cl,(%eax);");
    asm("loc_6C082BB: mov 0x14(%edi),%edx;");
    asm("loc_6C082BE: push %esi;");
    asm("loc_6C082BF: push %edx;");
    asm("loc_6C082C0: inc %eax;");
    asm("loc_6C082C1: push %ebx;");
    asm("loc_6C082C2: mov %edi,%ecx;");
    asm("loc_6C082C4: mov %eax,(%ebx);");
    asm("loc_6C082C6: call _sub_6BEBEA0;");
    asm("loc_6C082CB: test %eax,%eax;");
    asm("loc_6C082CD: mov %eax,0x1C(%edi);");
    asm("loc_6C082D0: je loc_6C082DD;");
    asm("loc_6C082D2: pop %edi;");
    asm("loc_6C082D3: pop %esi;");
    asm("loc_6C082D4: mov $0x16,%eax;");
    asm("loc_6C082D9: pop %ebx;");
    asm("loc_6C082DA: ret $0xC;");
    asm("loc_6C082DD: mov (%esi),%eax;");
    asm("loc_6C082DF: mov 0x18(%esp),%ecx;");
    asm("loc_6C082E3: mov %eax,(%ecx);");
    asm("loc_6C082E5: mov 0xC(%edi),%edx;");
    asm("loc_6C082E8: push %edx;");
    asm("loc_6C082E9: call _sub_6BEC3B0;");
    asm("loc_6C082EE: mov %eax,%ecx;");
    asm("loc_6C082F0: mov (%ecx),%edi;");
    asm("loc_6C082F2: mov 0x18(%ecx),%edx;");
    asm("loc_6C082F5: add $4,%esp;");
    asm("loc_6C082F8: inc %edi;");
    asm("loc_6C082F9: mov %edi,(%ecx);");
    asm("loc_6C082FB: mov (%esi),%eax;");
    asm("loc_6C082FD: add %eax,%edx;");
    asm("loc_6C082FF: mov 0x10(%ecx),%eax;");
    asm("loc_6C08302: mov %edx,0x18(%ecx);");
    asm("loc_6C08305: mov (%esi),%esi;");
    asm("loc_6C08307: cmp %eax,%esi;");
    asm("loc_6C08309: jbe loc_6C0830E;");
    asm("loc_6C0830B: mov %esi,0x10(%ecx);");
    asm("loc_6C0830E: mov 0x18(%ecx),%eax;");
    asm("loc_6C08311: xor %edx,%edx;");
    asm("loc_6C08313: div %edi;");
    asm("loc_6C08315: pop %edi;");
    asm("loc_6C08316: pop %esi;");
    asm("loc_6C08317: pop %ebx;");
    asm("loc_6C08318: mov %eax,8(%ecx);");
    asm("loc_6C0831B: xor %eax,%eax;");
    asm("loc_6C0831D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C08320() // _sub_6C08320
{
    __DEBUG_ASM(6C08320);
    // chunk 0x6C08320 _sub_6C08320
    asm("loc_6C08320: mov 4(%esp),%eax;");
    asm("loc_6C08324: push %ebx;");
    asm("loc_6C08325: push %ebp;");
    asm("loc_6C08326: mov 0x10(%esp),%ebp;");
    asm("loc_6C0832A: push %esi;");
    asm("loc_6C0832B: push %edi;");
    asm("loc_6C0832C: mov %ecx,%edi;");
    asm("loc_6C0832E: lea 0x10(%edi),%esi;");
    asm("loc_6C08331: push %esi;");
    asm("loc_6C08332: push %ebp;");
    asm("loc_6C08333: lea 0x18(%edi),%ebx;");
    asm("loc_6C08336: push %ebx;");
    asm("loc_6C08337: mov %ebp,4(%esi);");
    asm("loc_6C0833A: mov %eax,8(%esi);");
    asm("loc_6C0833D: movl $0,(%esi);");
    asm("loc_6C08343: movl $0,0xC(%esi);");
    asm("loc_6C0834A: call _sub_6BEBE90;");
    asm("loc_6C0834F: test %eax,%eax;");
    asm("loc_6C08351: mov %eax,0x1C(%edi);");
    asm("loc_6C08354: je loc_6C08362;");
    asm("loc_6C08356: pop %edi;");
    asm("loc_6C08357: pop %esi;");
    asm("loc_6C08358: pop %ebp;");
    asm("loc_6C08359: mov $0x17,%eax;");
    asm("loc_6C0835E: pop %ebx;");
    asm("loc_6C0835F: ret $0xC;");
    asm("loc_6C08362: mov (%esi),%edx;");
    asm("loc_6C08364: mov 4(%esi),%ecx;");
    asm("loc_6C08367: add $4,%edx;");
    asm("loc_6C0836A: mov %edx,%eax;");
    asm("loc_6C0836C: cmp %ecx,%eax;");
    asm("loc_6C0836E: mov %edx,(%esi);");
    asm("loc_6C08370: mov $0x17,%ecx;");
    asm("loc_6C08375: jbe loc_6C0837A;");
    asm("loc_6C08377: mov %ecx,0xC(%esi);");
    asm("loc_6C0837A: mov 0x1C(%edi),%eax;");
    asm("loc_6C0837D: test %eax,%eax;");
    asm("loc_6C0837F: jne loc_6C0843C;");
    asm("loc_6C08385: mov (%ebx),%eax;");
    asm("loc_6C08387: mov (%eax),%edx;");
    asm("loc_6C08389: add $4,%eax;");
    asm("loc_6C0838C: mov %eax,(%ebx);");
    asm("loc_6C0838E: mov %edx,0x20(%edi);");
    asm("loc_6C08391: mov (%esi),%eax;");
    asm("loc_6C08393: mov 4(%esi),%edx;");
    asm("loc_6C08396: inc %eax;");
    asm("loc_6C08397: cmp %edx,%eax;");
    asm("loc_6C08399: mov %eax,(%esi);");
    asm("loc_6C0839B: jbe loc_6C083A0;");
    asm("loc_6C0839D: mov %ecx,0xC(%esi);");
    asm("loc_6C083A0: mov 0x1C(%edi),%eax;");
    asm("loc_6C083A3: test %eax,%eax;");
    asm("loc_6C083A5: jne loc_6C0843C;");
    asm("loc_6C083AB: mov (%ebx),%eax;");
    asm("loc_6C083AD: mov (%eax),%dl;");
    asm("loc_6C083AF: inc %eax;");
    asm("loc_6C083B0: mov %eax,(%ebx);");
    asm("loc_6C083B2: mov %dl,0x24(%edi);");
    asm("loc_6C083B5: mov (%esi),%eax;");
    asm("loc_6C083B7: mov 4(%esi),%edx;");
    asm("loc_6C083BA: inc %eax;");
    asm("loc_6C083BB: cmp %edx,%eax;");
    asm("loc_6C083BD: mov %eax,(%esi);");
    asm("loc_6C083BF: jbe loc_6C083C4;");
    asm("loc_6C083C1: mov %ecx,0xC(%esi);");
    asm("loc_6C083C4: mov 0x1C(%edi),%eax;");
    asm("loc_6C083C7: test %eax,%eax;");
    asm("loc_6C083C9: jne loc_6C0843C;");
    asm("loc_6C083CB: mov (%ebx),%eax;");
    asm("loc_6C083CD: mov (%eax),%cl;");
    asm("loc_6C083CF: push %esi;");
    asm("loc_6C083D0: push %ebp;");
    asm("loc_6C083D1: mov %cl,0x25(%edi);");
    asm("loc_6C083D4: inc %eax;");
    asm("loc_6C083D5: push %ebx;");
    asm("loc_6C083D6: mov %edi,%ecx;");
    asm("loc_6C083D8: mov %eax,(%ebx);");
    asm("loc_6C083DA: call _sub_6BEBEB0;");
    asm("loc_6C083DF: test %eax,%eax;");
    asm("loc_6C083E1: mov %eax,0x1C(%edi);");
    asm("loc_6C083E4: je loc_6C083F2;");
    asm("loc_6C083E6: pop %edi;");
    asm("loc_6C083E7: pop %esi;");
    asm("loc_6C083E8: pop %ebp;");
    asm("loc_6C083E9: mov $0x17,%eax;");
    asm("loc_6C083EE: pop %ebx;");
    asm("loc_6C083EF: ret $0xC;");
    asm("loc_6C083F2: mov (%esi),%edx;");
    asm("loc_6C083F4: mov 0x1C(%esp),%eax;");
    asm("loc_6C083F8: mov %edx,(%eax);");
    asm("loc_6C083FA: mov 0xC(%edi),%ecx;");
    asm("loc_6C083FD: push %ecx;");
    asm("loc_6C083FE: call _sub_6BEC3B0;");
    asm("loc_6C08403: mov %eax,%ecx;");
    asm("loc_6C08405: mov 4(%ecx),%edx;");
    asm("loc_6C08408: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C0840B: mov 0x14(%ecx),%eax;");
    asm("loc_6C0840E: add $4,%esp;");
    asm("loc_6C08411: inc %edx;");
    asm("loc_6C08412: mov %edx,4(%ecx);");
    asm("loc_6C08415: mov %edx,%edi;");
    asm("loc_6C08417: mov (%esi),%edx;");
    asm("loc_6C08419: add $2,%edx;");
    asm("loc_6C0841C: add %edx,%ebp;");
    asm("loc_6C0841E: mov %ebp,0x1C(%ecx);");
    asm("loc_6C08421: mov (%esi),%esi;");
    asm("loc_6C08423: add $2,%eax;");
    asm("loc_6C08426: cmp %eax,%esi;");
    asm("loc_6C08428: jbe loc_6C08430;");
    asm("loc_6C0842A: add $2,%esi;");
    asm("loc_6C0842D: mov %esi,0x14(%ecx);");
    asm("loc_6C08430: mov 0x1C(%ecx),%eax;");
    asm("loc_6C08433: xor %edx,%edx;");
    asm("loc_6C08435: div %edi;");
    asm("loc_6C08437: mov %eax,0xC(%ecx);");
    asm("loc_6C0843A: xor %eax,%eax;");
    asm("loc_6C0843C: pop %edi;");
    asm("loc_6C0843D: pop %esi;");
    asm("loc_6C0843E: pop %ebp;");
    asm("loc_6C0843F: pop %ebx;");
    asm("loc_6C08440: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C08450() // _sub_6C08450
{
    __DEBUG_ASM(6C08450);
    // chunk 0x6C08450 _sub_6C08450
    asm("loc_6C08450: mov _data_6C0E648,%eax;");
    asm("loc_6C08455: mov %eax,_data_6C14308;");
    asm("loc_6C0845A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C08460() // _sub_6C08460
{
    __DEBUG_ASM(6C08460);
    // chunk 0x6C08460 _sub_6C08460
    asm("loc_6C08460: mov _data_6C0E648,%eax;");
    asm("loc_6C08465: mov %eax,_data_6C1430C;");
    asm("loc_6C0846A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C08470() // _sub_6C08470
{
    __DEBUG_ASM(6C08470);
    // chunk 0x6C08470 _sub_6C08470
    asm("loc_6C08470: mov _data_6C0E64C,%eax;");
    asm("loc_6C08475: mov %eax,_data_6C14304;");
    asm("loc_6C0847A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C08480() // _sub_6C08480
{
    __DEBUG_ASM(6C08480);
    // chunk 0x6C08480 _sub_6C08480
    asm("loc_6C08480: mov 8(%esp),%eax;");
    asm("loc_6C08484: push %ebx;");
    asm("loc_6C08485: push %esi;");
    asm("loc_6C08486: push %edi;");
    asm("loc_6C08487: mov %ecx,%edi;");
    asm("loc_6C08489: mov 0x10(%esp),%ecx;");
    asm("loc_6C0848D: lea 0x10(%edi),%esi;");
    asm("loc_6C08490: mov %eax,4(%esi);");
    asm("loc_6C08493: mov (%ecx),%edx;");
    asm("loc_6C08495: mov %edx,8(%esi);");
    asm("loc_6C08498: movl $0,(%esi);");
    asm("loc_6C0849E: movl $0,0xC(%esi);");
    asm("loc_6C084A5: mov 0x14(%edi),%eax;");
    asm("loc_6C084A8: push %esi;");
    asm("loc_6C084A9: push %eax;");
    asm("loc_6C084AA: lea 0x18(%edi),%ebx;");
    asm("loc_6C084AD: push %ebx;");
    asm("loc_6C084AE: mov %edi,%ecx;");
    asm("loc_6C084B0: call _sub_6BEBE50;");
    asm("loc_6C084B5: test %eax,%eax;");
    asm("loc_6C084B7: mov %eax,0x1C(%edi);");
    asm("loc_6C084BA: je loc_6C084C7;");
    asm("loc_6C084BC: pop %edi;");
    asm("loc_6C084BD: pop %esi;");
    asm("loc_6C084BE: mov $0x16,%eax;");
    asm("loc_6C084C3: pop %ebx;");
    asm("loc_6C084C4: ret $0xC;");
    asm("loc_6C084C7: mov (%esi),%edx;");
    asm("loc_6C084C9: mov 4(%esi),%ecx;");
    asm("loc_6C084CC: add $4,%edx;");
    asm("loc_6C084CF: mov %edx,%eax;");
    asm("loc_6C084D1: cmp %ecx,%eax;");
    asm("loc_6C084D3: mov %edx,(%esi);");
    asm("loc_6C084D5: jbe loc_6C084DE;");
    asm("loc_6C084D7: movl $0x16,0xC(%esi);");
    asm("loc_6C084DE: mov 0x1C(%edi),%eax;");
    asm("loc_6C084E1: test %eax,%eax;");
    asm("loc_6C084E3: je loc_6C084F0;");
    asm("loc_6C084E5: pop %edi;");
    asm("loc_6C084E6: pop %esi;");
    asm("loc_6C084E7: mov $0x16,%eax;");
    asm("loc_6C084EC: pop %ebx;");
    asm("loc_6C084ED: ret $0xC;");
    asm("loc_6C084F0: mov (%ebx),%eax;");
    asm("loc_6C084F2: flds 0x20(%edi);");
    asm("loc_6C084F5: fstps (%eax);");
    asm("loc_6C084F7: mov 0x14(%edi),%ecx;");
    asm("loc_6C084FA: push %esi;");
    asm("loc_6C084FB: push %ecx;");
    asm("loc_6C084FC: add $4,%eax;");
    asm("loc_6C084FF: push %ebx;");
    asm("loc_6C08500: mov %edi,%ecx;");
    asm("loc_6C08502: mov %eax,(%ebx);");
    asm("loc_6C08504: call _sub_6BEBEA0;");
    asm("loc_6C08509: test %eax,%eax;");
    asm("loc_6C0850B: mov %eax,0x1C(%edi);");
    asm("loc_6C0850E: je loc_6C0851B;");
    asm("loc_6C08510: pop %edi;");
    asm("loc_6C08511: pop %esi;");
    asm("loc_6C08512: mov $0x16,%eax;");
    asm("loc_6C08517: pop %ebx;");
    asm("loc_6C08518: ret $0xC;");
    asm("loc_6C0851B: mov (%esi),%edx;");
    asm("loc_6C0851D: mov 0x18(%esp),%eax;");
    asm("loc_6C08521: mov %edx,(%eax);");
    asm("loc_6C08523: mov 0xC(%edi),%ecx;");
    asm("loc_6C08526: push %ecx;");
    asm("loc_6C08527: call _sub_6BEC3B0;");
    asm("loc_6C0852C: mov %eax,%ecx;");
    asm("loc_6C0852E: mov (%ecx),%eax;");
    asm("loc_6C08530: mov 0x18(%ecx),%ebx;");
    asm("loc_6C08533: add $4,%esp;");
    asm("loc_6C08536: inc %eax;");
    asm("loc_6C08537: mov %eax,(%ecx);");
    asm("loc_6C08539: mov (%esi),%edx;");
    asm("loc_6C0853B: add %edx,%ebx;");
    asm("loc_6C0853D: mov %eax,%edi;");
    asm("loc_6C0853F: mov 0x10(%ecx),%eax;");
    asm("loc_6C08542: mov %ebx,0x18(%ecx);");
    asm("loc_6C08545: mov (%esi),%esi;");
    asm("loc_6C08547: cmp %eax,%esi;");
    asm("loc_6C08549: jbe loc_6C0854E;");
    asm("loc_6C0854B: mov %esi,0x10(%ecx);");
    asm("loc_6C0854E: mov 0x18(%ecx),%eax;");
    asm("loc_6C08551: xor %edx,%edx;");
    asm("loc_6C08553: div %edi;");
    asm("loc_6C08555: pop %edi;");
    asm("loc_6C08556: pop %esi;");
    asm("loc_6C08557: pop %ebx;");
    asm("loc_6C08558: mov %eax,8(%ecx);");
    asm("loc_6C0855B: xor %eax,%eax;");
    asm("loc_6C0855D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C08560() // _sub_6C08560
{
    __DEBUG_ASM(6C08560);
    // chunk 0x6C08560 _sub_6C08560
    asm("loc_6C08560: mov 4(%esp),%eax;");
    asm("loc_6C08564: push %ebx;");
    asm("loc_6C08565: push %ebp;");
    asm("loc_6C08566: mov 0x10(%esp),%ebp;");
    asm("loc_6C0856A: push %esi;");
    asm("loc_6C0856B: push %edi;");
    asm("loc_6C0856C: mov %ecx,%edi;");
    asm("loc_6C0856E: lea 0x10(%edi),%esi;");
    asm("loc_6C08571: push %esi;");
    asm("loc_6C08572: push %ebp;");
    asm("loc_6C08573: lea 0x18(%edi),%ebx;");
    asm("loc_6C08576: push %ebx;");
    asm("loc_6C08577: mov %ebp,4(%esi);");
    asm("loc_6C0857A: mov %eax,8(%esi);");
    asm("loc_6C0857D: movl $0,(%esi);");
    asm("loc_6C08583: movl $0,0xC(%esi);");
    asm("loc_6C0858A: call _sub_6BEBE90;");
    asm("loc_6C0858F: test %eax,%eax;");
    asm("loc_6C08591: mov %eax,0x1C(%edi);");
    asm("loc_6C08594: je loc_6C085A2;");
    asm("loc_6C08596: pop %edi;");
    asm("loc_6C08597: pop %esi;");
    asm("loc_6C08598: pop %ebp;");
    asm("loc_6C08599: mov $0x17,%eax;");
    asm("loc_6C0859E: pop %ebx;");
    asm("loc_6C0859F: ret $0xC;");
    asm("loc_6C085A2: mov (%esi),%edx;");
    asm("loc_6C085A4: mov 4(%esi),%ecx;");
    asm("loc_6C085A7: add $4,%edx;");
    asm("loc_6C085AA: mov %edx,%eax;");
    asm("loc_6C085AC: cmp %ecx,%eax;");
    asm("loc_6C085AE: mov %edx,(%esi);");
    asm("loc_6C085B0: jbe loc_6C085B9;");
    asm("loc_6C085B2: movl $0x17,0xC(%esi);");
    asm("loc_6C085B9: mov 0x1C(%edi),%eax;");
    asm("loc_6C085BC: test %eax,%eax;");
    asm("loc_6C085BE: jne loc_6C08633;");
    asm("loc_6C085C0: mov (%ebx),%eax;");
    asm("loc_6C085C2: mov (%eax),%ecx;");
    asm("loc_6C085C4: push %esi;");
    asm("loc_6C085C5: push %ebp;");
    asm("loc_6C085C6: mov %ecx,0x20(%edi);");
    asm("loc_6C085C9: add $4,%eax;");
    asm("loc_6C085CC: push %ebx;");
    asm("loc_6C085CD: mov %edi,%ecx;");
    asm("loc_6C085CF: mov %eax,(%ebx);");
    asm("loc_6C085D1: call _sub_6BEBEB0;");
    asm("loc_6C085D6: test %eax,%eax;");
    asm("loc_6C085D8: mov %eax,0x1C(%edi);");
    asm("loc_6C085DB: je loc_6C085E9;");
    asm("loc_6C085DD: pop %edi;");
    asm("loc_6C085DE: pop %esi;");
    asm("loc_6C085DF: pop %ebp;");
    asm("loc_6C085E0: mov $0x17,%eax;");
    asm("loc_6C085E5: pop %ebx;");
    asm("loc_6C085E6: ret $0xC;");
    asm("loc_6C085E9: mov (%esi),%edx;");
    asm("loc_6C085EB: mov 0x1C(%esp),%eax;");
    asm("loc_6C085EF: mov %edx,(%eax);");
    asm("loc_6C085F1: mov 0xC(%edi),%ecx;");
    asm("loc_6C085F4: push %ecx;");
    asm("loc_6C085F5: call _sub_6BEC3B0;");
    asm("loc_6C085FA: mov %eax,%ecx;");
    asm("loc_6C085FC: mov 4(%ecx),%edx;");
    asm("loc_6C085FF: mov 0x1C(%ecx),%ebp;");
    asm("loc_6C08602: mov 0x14(%ecx),%eax;");
    asm("loc_6C08605: add $4,%esp;");
    asm("loc_6C08608: inc %edx;");
    asm("loc_6C08609: mov %edx,4(%ecx);");
    asm("loc_6C0860C: mov %edx,%edi;");
    asm("loc_6C0860E: mov (%esi),%edx;");
    asm("loc_6C08610: add $2,%edx;");
    asm("loc_6C08613: add %edx,%ebp;");
    asm("loc_6C08615: mov %ebp,0x1C(%ecx);");
    asm("loc_6C08618: mov (%esi),%esi;");
    asm("loc_6C0861A: add $2,%eax;");
    asm("loc_6C0861D: cmp %eax,%esi;");
    asm("loc_6C0861F: jbe loc_6C08627;");
    asm("loc_6C08621: add $2,%esi;");
    asm("loc_6C08624: mov %esi,0x14(%ecx);");
    asm("loc_6C08627: mov 0x1C(%ecx),%eax;");
    asm("loc_6C0862A: xor %edx,%edx;");
    asm("loc_6C0862C: div %edi;");
    asm("loc_6C0862E: mov %eax,0xC(%ecx);");
    asm("loc_6C08631: xor %eax,%eax;");
    asm("loc_6C08633: pop %edi;");
    asm("loc_6C08634: pop %esi;");
    asm("loc_6C08635: pop %ebp;");
    asm("loc_6C08636: pop %ebx;");
    asm("loc_6C08637: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C08640() // _sub_6C08640
{
    __DEBUG_ASM(6C08640);
    // chunk 0x6C08640 _sub_6C08640
    asm("loc_6C08640: sub $0x18,%esp;");
    asm("loc_6C08643: push %ebx;");
    asm("loc_6C08644: push %ebp;");
    asm("loc_6C08645: mov %ecx,%ebp;");
    asm("loc_6C08647: mov 0x10(%ebp),%edx;");
    asm("loc_6C0864A: mov 0x14(%ebp),%ecx;");
    asm("loc_6C0864D: push %esi;");
    asm("loc_6C0864E: mov $4,%esi;");
    asm("loc_6C08653: add %esi,%edx;");
    asm("loc_6C08655: mov %edx,%eax;");
    asm("loc_6C08657: cmp %ecx,%eax;");
    asm("loc_6C08659: push %edi;");
    asm("loc_6C0865A: mov %edx,0x10(%ebp);");
    asm("loc_6C0865D: mov $0x16,%edi;");
    asm("loc_6C08662: jbe loc_6C08667;");
    asm("loc_6C08664: mov %edi,0x1C(%ebp);");
    asm("loc_6C08667: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0866A: test %eax,%eax;");
    asm("loc_6C0866C: je loc_6C0867A;");
    asm("loc_6C0866E: mov %edi,%eax;");
    asm("loc_6C08670: pop %edi;");
    asm("loc_6C08671: pop %esi;");
    asm("loc_6C08672: pop %ebp;");
    asm("loc_6C08673: pop %ebx;");
    asm("loc_6C08674: add $0x18,%esp;");
    asm("loc_6C08677: ret $0xC;");
    asm("loc_6C0867A: mov 0x18(%ebp),%eax;");
    asm("loc_6C0867D: mov 0x20(%ebp),%ecx;");
    asm("loc_6C08680: mov %ecx,(%eax);");
    asm("loc_6C08682: mov 0x24(%ebp),%edx;");
    asm("loc_6C08685: add $4,%eax;");
    asm("loc_6C08688: push %edx;");
    asm("loc_6C08689: mov %eax,0x18(%ebp);");
    asm("loc_6C0868C: calll *_import_6C0B00C;");
    asm("loc_6C08692: mov 0x10(%ebp),%ebx;");
    asm("loc_6C08695: mov 0x14(%ebp),%edx;");
    asm("loc_6C08698: add $2,%ebx;");
    asm("loc_6C0869B: mov %ebx,%ecx;");
    asm("loc_6C0869D: add $4,%esp;");
    asm("loc_6C086A0: cmp %edx,%ecx;");
    asm("loc_6C086A2: mov %ebx,0x10(%ebp);");
    asm("loc_6C086A5: jbe loc_6C086AA;");
    asm("loc_6C086A7: mov %edi,0x1C(%ebp);");
    asm("loc_6C086AA: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C086AD: test %ecx,%ecx;");
    asm("loc_6C086AF: je loc_6C086BD;");
    asm("loc_6C086B1: mov %edi,%eax;");
    asm("loc_6C086B3: pop %edi;");
    asm("loc_6C086B4: pop %esi;");
    asm("loc_6C086B5: pop %ebp;");
    asm("loc_6C086B6: pop %ebx;");
    asm("loc_6C086B7: add $0x18,%esp;");
    asm("loc_6C086BA: ret $0xC;");
    asm("loc_6C086BD: mov 0x18(%ebp),%ecx;");
    asm("loc_6C086C0: mov %ax,(%ecx);");
    asm("loc_6C086C3: add $2,%ecx;");
    asm("loc_6C086C6: mov %ecx,0x18(%ebp);");
    asm("loc_6C086C9: mov 0x10(%ebp),%edx;");
    asm("loc_6C086CC: mov 0x14(%ebp),%ecx;");
    asm("loc_6C086CF: add %esi,%edx;");
    asm("loc_6C086D1: mov %edx,%eax;");
    asm("loc_6C086D3: cmp %ecx,%eax;");
    asm("loc_6C086D5: mov %edx,0x10(%ebp);");
    asm("loc_6C086D8: jbe loc_6C086DD;");
    asm("loc_6C086DA: mov %edi,0x1C(%ebp);");
    asm("loc_6C086DD: mov 0x1C(%ebp),%eax;");
    asm("loc_6C086E0: test %eax,%eax;");
    asm("loc_6C086E2: je loc_6C086F0;");
    asm("loc_6C086E4: mov %edi,%eax;");
    asm("loc_6C086E6: pop %edi;");
    asm("loc_6C086E7: pop %esi;");
    asm("loc_6C086E8: pop %ebp;");
    asm("loc_6C086E9: pop %ebx;");
    asm("loc_6C086EA: add $0x18,%esp;");
    asm("loc_6C086ED: ret $0xC;");
    asm("loc_6C086F0: mov 0x18(%ebp),%eax;");
    asm("loc_6C086F3: mov 0x28(%ebp),%ecx;");
    asm("loc_6C086F6: mov %ecx,(%eax);");
    asm("loc_6C086F8: add $4,%eax;");
    asm("loc_6C086FB: mov %eax,0x18(%ebp);");
    asm("loc_6C086FE: mov 0x10(%ebp),%edx;");
    asm("loc_6C08701: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08704: add %esi,%edx;");
    asm("loc_6C08706: mov %edx,%eax;");
    asm("loc_6C08708: cmp %ecx,%eax;");
    asm("loc_6C0870A: mov %edx,0x10(%ebp);");
    asm("loc_6C0870D: jbe loc_6C08712;");
    asm("loc_6C0870F: mov %edi,0x1C(%ebp);");
    asm("loc_6C08712: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08715: test %eax,%eax;");
    asm("loc_6C08717: je loc_6C08725;");
    asm("loc_6C08719: mov %edi,%eax;");
    asm("loc_6C0871B: pop %edi;");
    asm("loc_6C0871C: pop %esi;");
    asm("loc_6C0871D: pop %ebp;");
    asm("loc_6C0871E: pop %ebx;");
    asm("loc_6C0871F: add $0x18,%esp;");
    asm("loc_6C08722: ret $0xC;");
    asm("loc_6C08725: mov 0x18(%ebp),%eax;");
    asm("loc_6C08728: mov 0x2C(%ebp),%edx;");
    asm("loc_6C0872B: mov %edx,(%eax);");
    asm("loc_6C0872D: add $4,%eax;");
    asm("loc_6C08730: mov %eax,0x18(%ebp);");
    asm("loc_6C08733: mov 0x10(%ebp),%edx;");
    asm("loc_6C08736: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08739: add %esi,%edx;");
    asm("loc_6C0873B: mov %edx,%eax;");
    asm("loc_6C0873D: cmp %ecx,%eax;");
    asm("loc_6C0873F: mov %edx,0x10(%ebp);");
    asm("loc_6C08742: jbe loc_6C08747;");
    asm("loc_6C08744: mov %edi,0x1C(%ebp);");
    asm("loc_6C08747: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0874A: test %eax,%eax;");
    asm("loc_6C0874C: je loc_6C0875A;");
    asm("loc_6C0874E: mov %edi,%eax;");
    asm("loc_6C08750: pop %edi;");
    asm("loc_6C08751: pop %esi;");
    asm("loc_6C08752: pop %ebp;");
    asm("loc_6C08753: pop %ebx;");
    asm("loc_6C08754: add $0x18,%esp;");
    asm("loc_6C08757: ret $0xC;");
    asm("loc_6C0875A: mov 0x18(%ebp),%eax;");
    asm("loc_6C0875D: mov 0x34(%ebp),%ecx;");
    asm("loc_6C08760: mov %ecx,(%eax);");
    asm("loc_6C08762: add $4,%eax;");
    asm("loc_6C08765: mov %eax,0x18(%ebp);");
    asm("loc_6C08768: mov 0x10(%ebp),%edx;");
    asm("loc_6C0876B: mov 0x14(%ebp),%ecx;");
    asm("loc_6C0876E: add %esi,%edx;");
    asm("loc_6C08770: mov %edx,%eax;");
    asm("loc_6C08772: cmp %ecx,%eax;");
    asm("loc_6C08774: mov %edx,0x10(%ebp);");
    asm("loc_6C08777: jbe loc_6C0877C;");
    asm("loc_6C08779: mov %edi,0x1C(%ebp);");
    asm("loc_6C0877C: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0877F: test %eax,%eax;");
    asm("loc_6C08781: je loc_6C0878F;");
    asm("loc_6C08783: mov %edi,%eax;");
    asm("loc_6C08785: pop %edi;");
    asm("loc_6C08786: pop %esi;");
    asm("loc_6C08787: pop %ebp;");
    asm("loc_6C08788: pop %ebx;");
    asm("loc_6C08789: add $0x18,%esp;");
    asm("loc_6C0878C: ret $0xC;");
    asm("loc_6C0878F: mov 0x18(%ebp),%eax;");
    asm("loc_6C08792: mov 0x30(%ebp),%edx;");
    asm("loc_6C08795: mov %edx,(%eax);");
    asm("loc_6C08797: mov 0x40(%ebp),%cl;");
    asm("loc_6C0879A: add $4,%eax;");
    asm("loc_6C0879D: mov %eax,0x18(%ebp);");
    asm("loc_6C087A0: mov 0x10(%ebp),%esi;");
    asm("loc_6C087A3: mov 0x14(%ebp),%edx;");
    asm("loc_6C087A6: inc %esi;");
    asm("loc_6C087A7: mov %esi,%eax;");
    asm("loc_6C087A9: cmp %edx,%eax;");
    asm("loc_6C087AB: mov %esi,0x10(%ebp);");
    asm("loc_6C087AE: jbe loc_6C087B3;");
    asm("loc_6C087B0: mov %edi,0x1C(%ebp);");
    asm("loc_6C087B3: mov 0x1C(%ebp),%eax;");
    asm("loc_6C087B6: test %eax,%eax;");
    asm("loc_6C087B8: je loc_6C087C6;");
    asm("loc_6C087BA: mov %edi,%eax;");
    asm("loc_6C087BC: pop %edi;");
    asm("loc_6C087BD: pop %esi;");
    asm("loc_6C087BE: pop %ebp;");
    asm("loc_6C087BF: pop %ebx;");
    asm("loc_6C087C0: add $0x18,%esp;");
    asm("loc_6C087C3: ret $0xC;");
    asm("loc_6C087C6: mov 0x18(%ebp),%eax;");
    asm("loc_6C087C9: mov %cl,(%eax);");
    asm("loc_6C087CB: inc %eax;");
    asm("loc_6C087CC: mov %eax,0x18(%ebp);");
    asm("loc_6C087CF: mov 0x40(%ebp),%eax;");
    asm("loc_6C087D2: mov 0x10(%ebp),%edx;");
    asm("loc_6C087D5: mov 0x14(%ebp),%ecx;");
    asm("loc_6C087D8: shl $2,%eax;");
    asm("loc_6C087DB: add %eax,%edx;");
    asm("loc_6C087DD: mov %edx,%eax;");
    asm("loc_6C087DF: cmp %ecx,%eax;");
    asm("loc_6C087E1: mov %edx,0x10(%ebp);");
    asm("loc_6C087E4: jbe loc_6C087E9;");
    asm("loc_6C087E6: mov %edi,0x1C(%ebp);");
    asm("loc_6C087E9: mov 0x1C(%ebp),%eax;");
    asm("loc_6C087EC: test %eax,%eax;");
    asm("loc_6C087EE: je loc_6C087FC;");
    asm("loc_6C087F0: mov %edi,%eax;");
    asm("loc_6C087F2: pop %edi;");
    asm("loc_6C087F3: pop %esi;");
    asm("loc_6C087F4: pop %ebp;");
    asm("loc_6C087F5: pop %ebx;");
    asm("loc_6C087F6: add $0x18,%esp;");
    asm("loc_6C087F9: ret $0xC;");
    asm("loc_6C087FC: mov 0x40(%ebp),%eax;");
    asm("loc_6C087FF: mov 0x18(%ebp),%edx;");
    asm("loc_6C08802: mov 0x44(%ebp),%esi;");
    asm("loc_6C08805: shl $2,%eax;");
    asm("loc_6C08808: mov %eax,%ecx;");
    asm("loc_6C0880A: mov %ecx,%ebx;");
    asm("loc_6C0880C: shr $2,%ecx;");
    asm("loc_6C0880F: mov %edx,%edi;");
    asm("loc_6C08811: rep movsl (%esi),(%edi);");
    asm("loc_6C08813: add %eax,%edx;");
    asm("loc_6C08815: mov %ebx,%ecx;");
    asm("loc_6C08817: and $3,%ecx;");
    asm("loc_6C0881A: rep movsb (%esi),(%edi);");
    asm("loc_6C0881C: mov %edx,0x18(%ebp);");
    asm("loc_6C0881F: mov 0x10(%ebp),%edx;");
    asm("loc_6C08822: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08825: add $4,%edx;");
    asm("loc_6C08828: mov %edx,%eax;");
    asm("loc_6C0882A: cmp %ecx,%eax;");
    asm("loc_6C0882C: mov %edx,0x10(%ebp);");
    asm("loc_6C0882F: jbe loc_6C08838;");
    asm("loc_6C08831: movl $0x16,0x1C(%ebp);");
    asm("loc_6C08838: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0883B: test %eax,%eax;");
    asm("loc_6C0883D: je loc_6C0884E;");
    asm("loc_6C0883F: pop %edi;");
    asm("loc_6C08840: pop %esi;");
    asm("loc_6C08841: pop %ebp;");
    asm("loc_6C08842: mov $0x16,%eax;");
    asm("loc_6C08847: pop %ebx;");
    asm("loc_6C08848: add $0x18,%esp;");
    asm("loc_6C0884B: ret $0xC;");
    asm("loc_6C0884E: mov 0x18(%ebp),%eax;");
    asm("loc_6C08851: mov 0x48(%ebp),%ecx;");
    asm("loc_6C08854: mov %ecx,(%eax);");
    asm("loc_6C08856: add $4,%eax;");
    asm("loc_6C08859: mov %eax,0x18(%ebp);");
    asm("loc_6C0885C: mov 0x10(%ebp),%edx;");
    asm("loc_6C0885F: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08862: add $0xC,%edx;");
    asm("loc_6C08865: mov %edx,%eax;");
    asm("loc_6C08867: cmp %ecx,%eax;");
    asm("loc_6C08869: mov %edx,0x10(%ebp);");
    asm("loc_6C0886C: jbe loc_6C08875;");
    asm("loc_6C0886E: movl $0x16,0x1C(%ebp);");
    asm("loc_6C08875: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08878: test %eax,%eax;");
    asm("loc_6C0887A: je loc_6C0888B;");
    asm("loc_6C0887C: pop %edi;");
    asm("loc_6C0887D: pop %esi;");
    asm("loc_6C0887E: pop %ebp;");
    asm("loc_6C0887F: mov $0x16,%eax;");
    asm("loc_6C08884: pop %ebx;");
    asm("loc_6C08885: add $0x18,%esp;");
    asm("loc_6C08888: ret $0xC;");
    asm("loc_6C0888B: mov 0x4C(%ebp),%edx;");
    asm("loc_6C0888E: mov 0x54(%ebp),%ecx;");
    asm("loc_6C08891: mov 0x18(%ebp),%esi;");
    asm("loc_6C08894: mov 0x50(%ebp),%eax;");
    asm("loc_6C08897: mov %edx,0x1C(%esp);");
    asm("loc_6C0889B: lea 0x1C(%esp),%edx;");
    asm("loc_6C0889F: mov %ecx,0x24(%esp);");
    asm("loc_6C088A3: push %edx;");
    asm("loc_6C088A4: mov %esi,%ecx;");
    asm("loc_6C088A6: mov %eax,0x24(%esp);");
    asm("loc_6C088AA: call _sub_6BDA4C0;");
    asm("loc_6C088AF: flds 0x5C(%ebp);");
    asm("loc_6C088B2: fmull _data_6C0DF40;");
    asm("loc_6C088B8: add $0xC,%esi;");
    asm("loc_6C088BB: mov %esi,0x18(%ebp);");
    asm("loc_6C088BE: call _sub_6C09EE8;");
    asm("loc_6C088C3: flds 0x60(%ebp);");
    asm("loc_6C088C6: fmull _data_6C0DF40;");
    asm("loc_6C088CC: mov %al,%bl;");
    asm("loc_6C088CE: call _sub_6C09EE8;");
    asm("loc_6C088D3: flds 0x64(%ebp);");
    asm("loc_6C088D6: fmull _data_6C0DF40;");
    asm("loc_6C088DC: mov %al,0x12(%esp);");
    asm("loc_6C088E0: call _sub_6C09EE8;");
    asm("loc_6C088E5: flds 0x58(%ebp);");
    asm("loc_6C088E8: fmull _data_6C0DF40;");
    asm("loc_6C088EE: mov %al,0x13(%esp);");
    asm("loc_6C088F2: call _sub_6C09EE8;");
    asm("loc_6C088F7: mov 0x10(%ebp),%esi;");
    asm("loc_6C088FA: mov 0x14(%ebp),%edx;");
    asm("loc_6C088FD: inc %esi;");
    asm("loc_6C088FE: mov %esi,%ecx;");
    asm("loc_6C08900: cmp %edx,%ecx;");
    asm("loc_6C08902: mov %esi,0x10(%ebp);");
    asm("loc_6C08905: mov $0x16,%esi;");
    asm("loc_6C0890A: jbe loc_6C0890F;");
    asm("loc_6C0890C: mov %esi,0x1C(%ebp);");
    asm("loc_6C0890F: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C08912: test %ecx,%ecx;");
    asm("loc_6C08914: je loc_6C08922;");
    asm("loc_6C08916: pop %edi;");
    asm("loc_6C08917: mov %esi,%eax;");
    asm("loc_6C08919: pop %esi;");
    asm("loc_6C0891A: pop %ebp;");
    asm("loc_6C0891B: pop %ebx;");
    asm("loc_6C0891C: add $0x18,%esp;");
    asm("loc_6C0891F: ret $0xC;");
    asm("loc_6C08922: mov 0x18(%ebp),%ecx;");
    asm("loc_6C08925: mov %bl,(%ecx);");
    asm("loc_6C08927: inc %ecx;");
    asm("loc_6C08928: mov %ecx,0x18(%ebp);");
    asm("loc_6C0892B: mov 0x10(%ebp),%edi;");
    asm("loc_6C0892E: mov 0x14(%ebp),%edx;");
    asm("loc_6C08931: inc %edi;");
    asm("loc_6C08932: mov %edi,%ecx;");
    asm("loc_6C08934: cmp %edx,%ecx;");
    asm("loc_6C08936: mov %edi,0x10(%ebp);");
    asm("loc_6C08939: jbe loc_6C0893E;");
    asm("loc_6C0893B: mov %esi,0x1C(%ebp);");
    asm("loc_6C0893E: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C08941: test %ecx,%ecx;");
    asm("loc_6C08943: je loc_6C08951;");
    asm("loc_6C08945: pop %edi;");
    asm("loc_6C08946: mov %esi,%eax;");
    asm("loc_6C08948: pop %esi;");
    asm("loc_6C08949: pop %ebp;");
    asm("loc_6C0894A: pop %ebx;");
    asm("loc_6C0894B: add $0x18,%esp;");
    asm("loc_6C0894E: ret $0xC;");
    asm("loc_6C08951: mov 0x18(%ebp),%ecx;");
    asm("loc_6C08954: mov 0x12(%esp),%dl;");
    asm("loc_6C08958: mov %dl,(%ecx);");
    asm("loc_6C0895A: inc %ecx;");
    asm("loc_6C0895B: mov %ecx,0x18(%ebp);");
    asm("loc_6C0895E: mov 0x10(%ebp),%edi;");
    asm("loc_6C08961: mov 0x14(%ebp),%edx;");
    asm("loc_6C08964: inc %edi;");
    asm("loc_6C08965: mov %edi,%ecx;");
    asm("loc_6C08967: cmp %edx,%ecx;");
    asm("loc_6C08969: mov %edi,0x10(%ebp);");
    asm("loc_6C0896C: jbe loc_6C08971;");
    asm("loc_6C0896E: mov %esi,0x1C(%ebp);");
    asm("loc_6C08971: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C08974: test %ecx,%ecx;");
    asm("loc_6C08976: je loc_6C08984;");
    asm("loc_6C08978: pop %edi;");
    asm("loc_6C08979: mov %esi,%eax;");
    asm("loc_6C0897B: pop %esi;");
    asm("loc_6C0897C: pop %ebp;");
    asm("loc_6C0897D: pop %ebx;");
    asm("loc_6C0897E: add $0x18,%esp;");
    asm("loc_6C08981: ret $0xC;");
    asm("loc_6C08984: mov 0x18(%ebp),%ecx;");
    asm("loc_6C08987: mov 0x13(%esp),%dl;");
    asm("loc_6C0898B: mov %dl,(%ecx);");
    asm("loc_6C0898D: inc %ecx;");
    asm("loc_6C0898E: mov %ecx,0x18(%ebp);");
    asm("loc_6C08991: mov 0x10(%ebp),%edi;");
    asm("loc_6C08994: mov 0x14(%ebp),%edx;");
    asm("loc_6C08997: inc %edi;");
    asm("loc_6C08998: mov %edi,%ecx;");
    asm("loc_6C0899A: cmp %edx,%ecx;");
    asm("loc_6C0899C: mov %edi,0x10(%ebp);");
    asm("loc_6C0899F: jbe loc_6C089A4;");
    asm("loc_6C089A1: mov %esi,0x1C(%ebp);");
    asm("loc_6C089A4: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C089A7: test %ecx,%ecx;");
    asm("loc_6C089A9: je loc_6C089B7;");
    asm("loc_6C089AB: pop %edi;");
    asm("loc_6C089AC: mov %esi,%eax;");
    asm("loc_6C089AE: pop %esi;");
    asm("loc_6C089AF: pop %ebp;");
    asm("loc_6C089B0: pop %ebx;");
    asm("loc_6C089B1: add $0x18,%esp;");
    asm("loc_6C089B4: ret $0xC;");
    asm("loc_6C089B7: mov 0x18(%ebp),%ecx;");
    asm("loc_6C089BA: mov %al,(%ecx);");
    asm("loc_6C089BC: fildl 0x68(%ebp);");
    asm("loc_6C089BF: mov 0x24(%ebp),%eax;");
    asm("loc_6C089C2: inc %ecx;");
    asm("loc_6C089C3: push %eax;");
    asm("loc_6C089C4: fstps 0x18(%esp);");
    asm("loc_6C089C8: mov %ecx,0x18(%ebp);");
    asm("loc_6C089CB: calll *_import_6C0B024;");
    asm("loc_6C089D1: mov %eax,0x1C(%esp);");
    asm("loc_6C089D5: fildl 0x1C(%esp);");
    asm("loc_6C089D9: add $4,%esp;");
    asm("loc_6C089DC: fdivrs 0x14(%esp);");
    asm("loc_6C089E0: fmull _data_6C0E270;");
    asm("loc_6C089E6: call _sub_6C09EE8;");
    asm("loc_6C089EB: mov 0x10(%ebp),%edi;");
    asm("loc_6C089EE: mov 0x14(%ebp),%edx;");
    asm("loc_6C089F1: inc %edi;");
    asm("loc_6C089F2: mov %edi,%ecx;");
    asm("loc_6C089F4: cmp %edx,%ecx;");
    asm("loc_6C089F6: mov %edi,0x10(%ebp);");
    asm("loc_6C089F9: jbe loc_6C089FE;");
    asm("loc_6C089FB: mov %esi,0x1C(%ebp);");
    asm("loc_6C089FE: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C08A01: test %ecx,%ecx;");
    asm("loc_6C08A03: je loc_6C08A11;");
    asm("loc_6C08A05: pop %edi;");
    asm("loc_6C08A06: mov %esi,%eax;");
    asm("loc_6C08A08: pop %esi;");
    asm("loc_6C08A09: pop %ebp;");
    asm("loc_6C08A0A: pop %ebx;");
    asm("loc_6C08A0B: add $0x18,%esp;");
    asm("loc_6C08A0E: ret $0xC;");
    asm("loc_6C08A11: mov 0x18(%ebp),%ecx;");
    asm("loc_6C08A14: mov %al,(%ecx);");
    asm("loc_6C08A16: inc %ecx;");
    asm("loc_6C08A17: mov %ecx,0x18(%ebp);");
    asm("loc_6C08A1A: calll *_import_6C0B080;");
    asm("loc_6C08A20: test %al,%al;");
    asm("loc_6C08A22: je loc_6C08A5A;");
    asm("loc_6C08A24: mov 0x10(%ebp),%edx;");
    asm("loc_6C08A27: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08A2A: add $4,%edx;");
    asm("loc_6C08A2D: mov %edx,%eax;");
    asm("loc_6C08A2F: cmp %ecx,%eax;");
    asm("loc_6C08A31: mov %edx,0x10(%ebp);");
    asm("loc_6C08A34: jbe loc_6C08A39;");
    asm("loc_6C08A36: mov %esi,0x1C(%ebp);");
    asm("loc_6C08A39: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08A3C: test %eax,%eax;");
    asm("loc_6C08A3E: je loc_6C08A4C;");
    asm("loc_6C08A40: pop %edi;");
    asm("loc_6C08A41: mov %esi,%eax;");
    asm("loc_6C08A43: pop %esi;");
    asm("loc_6C08A44: pop %ebp;");
    asm("loc_6C08A45: pop %ebx;");
    asm("loc_6C08A46: add $0x18,%esp;");
    asm("loc_6C08A49: ret $0xC;");
    asm("loc_6C08A4C: mov 0x18(%ebp),%eax;");
    asm("loc_6C08A4F: mov 0x6C(%ebp),%ecx;");
    asm("loc_6C08A52: mov %ecx,(%eax);");
    asm("loc_6C08A54: add $4,%eax;");
    asm("loc_6C08A57: mov %eax,0x18(%ebp);");
    asm("loc_6C08A5A: lea 0x70(%ebp),%ecx;");
    asm("loc_6C08A5D: call _sub_6BDC830;");
    asm("loc_6C08A62: test %eax,%eax;");
    asm("loc_6C08A64: mov %eax,0x18(%esp);");
    asm("loc_6C08A68: je loc_6C08D5F;");
    asm("loc_6C08A6E: mov 0x10(%ebp),%edi;");
    asm("loc_6C08A71: mov 8(%eax),%cx;");
    asm("loc_6C08A75: mov 0x14(%ebp),%edx;");
    asm("loc_6C08A78: add $2,%edi;");
    asm("loc_6C08A7B: mov %edi,%eax;");
    asm("loc_6C08A7D: cmp %edx,%eax;");
    asm("loc_6C08A7F: mov %edi,0x10(%ebp);");
    asm("loc_6C08A82: jbe loc_6C08A87;");
    asm("loc_6C08A84: mov %esi,0x1C(%ebp);");
    asm("loc_6C08A87: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08A8A: test %eax,%eax;");
    asm("loc_6C08A8C: je loc_6C08A9A;");
    asm("loc_6C08A8E: pop %edi;");
    asm("loc_6C08A8F: mov %esi,%eax;");
    asm("loc_6C08A91: pop %esi;");
    asm("loc_6C08A92: pop %ebp;");
    asm("loc_6C08A93: pop %ebx;");
    asm("loc_6C08A94: add $0x18,%esp;");
    asm("loc_6C08A97: ret $0xC;");
    asm("loc_6C08A9A: mov 0x18(%ebp),%eax;");
    asm("loc_6C08A9D: mov 0x18(%esp),%edx;");
    asm("loc_6C08AA1: mov %cx,(%eax);");
    asm("loc_6C08AA4: add $2,%eax;");
    asm("loc_6C08AA7: mov %eax,0x18(%ebp);");
    asm("loc_6C08AAA: mov 4(%edx),%eax;");
    asm("loc_6C08AAD: mov (%eax),%edi;");
    asm("loc_6C08AAF: cmp %eax,%edi;");
    asm("loc_6C08AB1: mov %edi,0x14(%esp);");
    asm("loc_6C08AB5: je loc_6C08D95;");
    asm("loc_6C08ABB: nop;");
    asm("loc_6C08ABC: lea (%esp),%esp;");
    asm("loc_6C08AC0: mov 8(%edi),%esi;");
    asm("loc_6C08AC3: mov 0xE(%esi),%al;");
    asm("loc_6C08AC6: xor %bl,%bl;");
    asm("loc_6C08AC8: test %al,%al;");
    asm("loc_6C08ACA: mov %bl,0x12(%esp);");
    asm("loc_6C08ACE: je loc_6C08AD2;");
    asm("loc_6C08AD0: mov $1,%bl;");
    asm("loc_6C08AD2: mov 0xF(%esi),%al;");
    asm("loc_6C08AD5: test %al,%al;");
    asm("loc_6C08AD7: je loc_6C08ADC;");
    asm("loc_6C08AD9: or $2,%bl;");
    asm("loc_6C08ADC: mov 4(%esi),%ecx;");
    asm("loc_6C08ADF: mov $0xFF,%eax;");
    asm("loc_6C08AE4: cmp %eax,%ecx;");
    asm("loc_6C08AE6: jle loc_6C08AEB;");
    asm("loc_6C08AE8: or $4,%bl;");
    asm("loc_6C08AEB: cmp %ax,0xC(%esi);");
    asm("loc_6C08AEF: jbe loc_6C08AF4;");
    asm("loc_6C08AF1: or $8,%bl;");
    asm("loc_6C08AF4: mov 0x14(%esi),%eax;");
    asm("loc_6C08AF7: test %eax,%eax;");
    asm("loc_6C08AF9: jne loc_6C08B00;");
    asm("loc_6C08AFB: or $0x20,%bl;");
    asm("loc_6C08AFE: jmp loc_6C08B14;");
    asm("loc_6C08B00: push %eax;");
    asm("loc_6C08B01: call _sub_6BED6F0;");
    asm("loc_6C08B06: add $4,%esp;");
    asm("loc_6C08B09: test %al,%al;");
    asm("loc_6C08B0B: mov %al,0x12(%esp);");
    asm("loc_6C08B0F: jne loc_6C08B14;");
    asm("loc_6C08B11: or $0x10,%bl;");
    asm("loc_6C08B14: cmpl $1,4(%esi);");
    asm("loc_6C08B18: jne loc_6C08B1D;");
    asm("loc_6C08B1A: or $0x80,%bl;");
    asm("loc_6C08B1D: flds 8(%esi);");
    asm("loc_6C08B20: fcompl _data_6C0BAB0;");
    asm("loc_6C08B26: fnstsw %ax;");
    asm("loc_6C08B28: test $0x44,%ah;");
    asm("loc_6C08B2B: jp loc_6C08B30;");
    asm("loc_6C08B2D: or $0x40,%bl;");
    asm("loc_6C08B30: mov 0x10(%ebp),%edx;");
    asm("loc_6C08B33: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08B36: inc %edx;");
    asm("loc_6C08B37: mov %edx,%eax;");
    asm("loc_6C08B39: cmp %ecx,%eax;");
    asm("loc_6C08B3B: mov %edx,0x10(%ebp);");
    asm("loc_6C08B3E: mov $0x16,%edx;");
    asm("loc_6C08B43: jbe loc_6C08B48;");
    asm("loc_6C08B45: mov %edx,0x1C(%ebp);");
    asm("loc_6C08B48: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08B4B: test %eax,%eax;");
    asm("loc_6C08B4D: jne loc_6C08D53;");
    asm("loc_6C08B53: mov 0x18(%ebp),%eax;");
    asm("loc_6C08B56: mov %bl,(%eax);");
    asm("loc_6C08B58: inc %eax;");
    asm("loc_6C08B59: test %bl,%bl;");
    asm("loc_6C08B5B: mov %eax,0x18(%ebp);");
    asm("loc_6C08B5E: js loc_6C08BB3;");
    asm("loc_6C08B60: test $4,%bl;");
    asm("loc_6C08B63: mov 0x10(%ebp),%eax;");
    asm("loc_6C08B66: je loc_6C08B90;");
    asm("loc_6C08B68: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08B6B: add $4,%eax;");
    asm("loc_6C08B6E: cmp %ecx,%eax;");
    asm("loc_6C08B70: mov %eax,0x10(%ebp);");
    asm("loc_6C08B73: jbe loc_6C08B78;");
    asm("loc_6C08B75: mov %edx,0x1C(%ebp);");
    asm("loc_6C08B78: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08B7B: test %eax,%eax;");
    asm("loc_6C08B7D: jne loc_6C08D53;");
    asm("loc_6C08B83: mov 0x18(%ebp),%eax;");
    asm("loc_6C08B86: mov 4(%esi),%ecx;");
    asm("loc_6C08B89: mov %ecx,(%eax);");
    asm("loc_6C08B8B: add $4,%eax;");
    asm("loc_6C08B8E: jmp loc_6C08BB0;");
    asm("loc_6C08B90: mov 4(%esi),%cl;");
    asm("loc_6C08B93: inc %eax;");
    asm("loc_6C08B94: cmp 0x14(%ebp),%eax;");
    asm("loc_6C08B97: mov %eax,0x10(%ebp);");
    asm("loc_6C08B9A: jbe loc_6C08B9F;");
    asm("loc_6C08B9C: mov %edx,0x1C(%ebp);");
    asm("loc_6C08B9F: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08BA2: test %eax,%eax;");
    asm("loc_6C08BA4: jne loc_6C08D53;");
    asm("loc_6C08BAA: mov 0x18(%ebp),%eax;");
    asm("loc_6C08BAD: mov %cl,(%eax);");
    asm("loc_6C08BAF: inc %eax;");
    asm("loc_6C08BB0: mov %eax,0x18(%ebp);");
    asm("loc_6C08BB3: test $0x40,%bl;");
    asm("loc_6C08BB6: jne loc_6C08BF5;");
    asm("loc_6C08BB8: flds 8(%esi);");
    asm("loc_6C08BBB: fmull _data_6C0E270;");
    asm("loc_6C08BC1: call _sub_6C09EE8;");
    asm("loc_6C08BC6: mov 0x10(%ebp),%edi;");
    asm("loc_6C08BC9: mov 0x14(%ebp),%edx;");
    asm("loc_6C08BCC: inc %edi;");
    asm("loc_6C08BCD: mov %edi,%ecx;");
    asm("loc_6C08BCF: cmp %edx,%ecx;");
    asm("loc_6C08BD1: mov %edi,0x10(%ebp);");
    asm("loc_6C08BD4: jbe loc_6C08BDD;");
    asm("loc_6C08BD6: movl $0x16,0x1C(%ebp);");
    asm("loc_6C08BDD: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C08BE0: test %ecx,%ecx;");
    asm("loc_6C08BE2: jne loc_6C08DB6;");
    asm("loc_6C08BE8: mov 0x18(%ebp),%ecx;");
    asm("loc_6C08BEB: mov 0x14(%esp),%edi;");
    asm("loc_6C08BEF: mov %al,(%ecx);");
    asm("loc_6C08BF1: inc %ecx;");
    asm("loc_6C08BF2: mov %ecx,0x18(%ebp);");
    asm("loc_6C08BF5: mov (%esi),%edx;");
    asm("loc_6C08BF7: push %edx;");
    asm("loc_6C08BF8: calll *_import_6C0B00C;");
    asm("loc_6C08BFE: mov 0x10(%ebp),%ecx;");
    asm("loc_6C08C01: mov 0x14(%ebp),%edx;");
    asm("loc_6C08C04: add $2,%ecx;");
    asm("loc_6C08C07: add $4,%esp;");
    asm("loc_6C08C0A: cmp %edx,%ecx;");
    asm("loc_6C08C0C: mov %ecx,0x10(%ebp);");
    asm("loc_6C08C0F: mov $0x16,%edx;");
    asm("loc_6C08C14: jbe loc_6C08C19;");
    asm("loc_6C08C16: mov %edx,0x1C(%ebp);");
    asm("loc_6C08C19: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C08C1C: test %ecx,%ecx;");
    asm("loc_6C08C1E: jne loc_6C08D53;");
    asm("loc_6C08C24: mov 0x18(%ebp),%ecx;");
    asm("loc_6C08C27: mov %ax,(%ecx);");
    asm("loc_6C08C2A: add $2,%ecx;");
    asm("loc_6C08C2D: test $8,%bl;");
    asm("loc_6C08C30: mov %ecx,0x18(%ebp);");
    asm("loc_6C08C33: mov 0x10(%ebp),%eax;");
    asm("loc_6C08C36: je loc_6C08C62;");
    asm("loc_6C08C38: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08C3B: add $2,%eax;");
    asm("loc_6C08C3E: cmp %ecx,%eax;");
    asm("loc_6C08C40: mov %eax,0x10(%ebp);");
    asm("loc_6C08C43: jbe loc_6C08C48;");
    asm("loc_6C08C45: mov %edx,0x1C(%ebp);");
    asm("loc_6C08C48: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08C4B: test %eax,%eax;");
    asm("loc_6C08C4D: jne loc_6C08D53;");
    asm("loc_6C08C53: mov 0x18(%ebp),%eax;");
    asm("loc_6C08C56: mov 0xC(%esi),%cx;");
    asm("loc_6C08C5A: mov %cx,(%eax);");
    asm("loc_6C08C5D: add $2,%eax;");
    asm("loc_6C08C60: jmp loc_6C08C82;");
    asm("loc_6C08C62: mov 0xC(%esi),%cl;");
    asm("loc_6C08C65: inc %eax;");
    asm("loc_6C08C66: cmp 0x14(%ebp),%eax;");
    asm("loc_6C08C69: mov %eax,0x10(%ebp);");
    asm("loc_6C08C6C: jbe loc_6C08C71;");
    asm("loc_6C08C6E: mov %edx,0x1C(%ebp);");
    asm("loc_6C08C71: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08C74: test %eax,%eax;");
    asm("loc_6C08C76: jne loc_6C08D53;");
    asm("loc_6C08C7C: mov 0x18(%ebp),%eax;");
    asm("loc_6C08C7F: mov %cl,(%eax);");
    asm("loc_6C08C81: inc %eax;");
    asm("loc_6C08C82: test $0x20,%bl;");
    asm("loc_6C08C85: mov %eax,0x18(%ebp);");
    asm("loc_6C08C88: jne loc_6C08D3E;");
    asm("loc_6C08C8E: test $0x10,%bl;");
    asm("loc_6C08C91: je loc_6C08D0F;");
    asm("loc_6C08C93: mov 0x10(%ebp),%edi;");
    asm("loc_6C08C96: mov 0x14(%ebp),%edx;");
    asm("loc_6C08C99: mov 0x10(%esi),%cl;");
    asm("loc_6C08C9C: inc %edi;");
    asm("loc_6C08C9D: mov %edi,%eax;");
    asm("loc_6C08C9F: cmp %edx,%eax;");
    asm("loc_6C08CA1: mov %edi,0x10(%ebp);");
    asm("loc_6C08CA4: jbe loc_6C08CAD;");
    asm("loc_6C08CA6: movl $0x16,0x1C(%ebp);");
    asm("loc_6C08CAD: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08CB0: test %eax,%eax;");
    asm("loc_6C08CB2: jne loc_6C08DB6;");
    asm("loc_6C08CB8: mov 0x18(%ebp),%eax;");
    asm("loc_6C08CBB: mov %cl,(%eax);");
    asm("loc_6C08CBD: inc %eax;");
    asm("loc_6C08CBE: mov %eax,0x18(%ebp);");
    asm("loc_6C08CC1: movzwl 0x10(%esi),%edx;");
    asm("loc_6C08CC5: mov 0x10(%ebp),%edi;");
    asm("loc_6C08CC8: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08CCB: add %edx,%edi;");
    asm("loc_6C08CCD: mov %edi,%eax;");
    asm("loc_6C08CCF: cmp %ecx,%eax;");
    asm("loc_6C08CD1: mov %edi,0x10(%ebp);");
    asm("loc_6C08CD4: jbe loc_6C08CDD;");
    asm("loc_6C08CD6: movl $0x16,0x1C(%ebp);");
    asm("loc_6C08CDD: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08CE0: test %eax,%eax;");
    asm("loc_6C08CE2: jne loc_6C08DB6;");
    asm("loc_6C08CE8: movzwl 0x10(%esi),%eax;");
    asm("loc_6C08CEC: mov 0x18(%ebp),%edx;");
    asm("loc_6C08CEF: mov 0x14(%esi),%esi;");
    asm("loc_6C08CF2: mov %eax,%ecx;");
    asm("loc_6C08CF4: mov %ecx,%ebx;");
    asm("loc_6C08CF6: shr $2,%ecx;");
    asm("loc_6C08CF9: mov %edx,%edi;");
    asm("loc_6C08CFB: rep movsl (%esi),(%edi);");
    asm("loc_6C08CFD: mov %ebx,%ecx;");
    asm("loc_6C08CFF: and $3,%ecx;");
    asm("loc_6C08D02: rep movsb (%esi),(%edi);");
    asm("loc_6C08D04: mov 0x14(%esp),%edi;");
    asm("loc_6C08D08: add %eax,%edx;");
    asm("loc_6C08D0A: mov %edx,0x18(%ebp);");
    asm("loc_6C08D0D: jmp loc_6C08D3E;");
    asm("loc_6C08D0F: mov 0x10(%ebp),%edx;");
    asm("loc_6C08D12: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08D15: inc %edx;");
    asm("loc_6C08D16: mov %edx,%eax;");
    asm("loc_6C08D18: cmp %ecx,%eax;");
    asm("loc_6C08D1A: mov %edx,0x10(%ebp);");
    asm("loc_6C08D1D: jbe loc_6C08D26;");
    asm("loc_6C08D1F: movl $0x16,0x1C(%ebp);");
    asm("loc_6C08D26: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08D29: test %eax,%eax;");
    asm("loc_6C08D2B: jne loc_6C08DB6;");
    asm("loc_6C08D31: mov 0x18(%ebp),%eax;");
    asm("loc_6C08D34: mov 0x12(%esp),%cl;");
    asm("loc_6C08D38: mov %cl,(%eax);");
    asm("loc_6C08D3A: inc %eax;");
    asm("loc_6C08D3B: mov %eax,0x18(%ebp);");
    asm("loc_6C08D3E: mov 0x18(%esp),%edx;");
    asm("loc_6C08D42: mov (%edi),%edi;");
    asm("loc_6C08D44: cmp 4(%edx),%edi;");
    asm("loc_6C08D47: mov %edi,0x14(%esp);");
    asm("loc_6C08D4B: jne loc_6C08AC0;");
    asm("loc_6C08D51: jmp loc_6C08D95;");
    asm("loc_6C08D53: pop %edi;");
    asm("loc_6C08D54: pop %esi;");
    asm("loc_6C08D55: pop %ebp;");
    asm("loc_6C08D56: mov %edx,%eax;");
    asm("loc_6C08D58: pop %ebx;");
    asm("loc_6C08D59: add $0x18,%esp;");
    asm("loc_6C08D5C: ret $0xC;");
    asm("loc_6C08D5F: mov 0x10(%ebp),%edx;");
    asm("loc_6C08D62: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08D65: add $2,%edx;");
    asm("loc_6C08D68: mov %edx,%eax;");
    asm("loc_6C08D6A: cmp %ecx,%eax;");
    asm("loc_6C08D6C: mov %edx,0x10(%ebp);");
    asm("loc_6C08D6F: jbe loc_6C08D74;");
    asm("loc_6C08D71: mov %esi,0x1C(%ebp);");
    asm("loc_6C08D74: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08D77: test %eax,%eax;");
    asm("loc_6C08D79: je loc_6C08D87;");
    asm("loc_6C08D7B: pop %edi;");
    asm("loc_6C08D7C: mov %esi,%eax;");
    asm("loc_6C08D7E: pop %esi;");
    asm("loc_6C08D7F: pop %ebp;");
    asm("loc_6C08D80: pop %ebx;");
    asm("loc_6C08D81: add $0x18,%esp;");
    asm("loc_6C08D84: ret $0xC;");
    asm("loc_6C08D87: mov 0x18(%ebp),%eax;");
    asm("loc_6C08D8A: movw $0,(%eax);");
    asm("loc_6C08D8F: add $2,%eax;");
    asm("loc_6C08D92: mov %eax,0x18(%ebp);");
    asm("loc_6C08D95: mov 0x10(%ebp),%esi;");
    asm("loc_6C08D98: mov 0x14(%ebp),%edx;");
    asm("loc_6C08D9B: mov 0x7C(%ebp),%cl;");
    asm("loc_6C08D9E: inc %esi;");
    asm("loc_6C08D9F: mov %esi,%eax;");
    asm("loc_6C08DA1: cmp %edx,%eax;");
    asm("loc_6C08DA3: mov %esi,0x10(%ebp);");
    asm("loc_6C08DA6: jbe loc_6C08DAF;");
    asm("loc_6C08DA8: movl $0x16,0x1C(%ebp);");
    asm("loc_6C08DAF: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08DB2: test %eax,%eax;");
    asm("loc_6C08DB4: je loc_6C08DC5;");
    asm("loc_6C08DB6: pop %edi;");
    asm("loc_6C08DB7: pop %esi;");
    asm("loc_6C08DB8: pop %ebp;");
    asm("loc_6C08DB9: mov $0x16,%eax;");
    asm("loc_6C08DBE: pop %ebx;");
    asm("loc_6C08DBF: add $0x18,%esp;");
    asm("loc_6C08DC2: ret $0xC;");
    asm("loc_6C08DC5: mov 0x18(%ebp),%eax;");
    asm("loc_6C08DC8: mov %cl,(%eax);");
    asm("loc_6C08DCA: mov 0x78(%ebp),%ebx;");
    asm("loc_6C08DCD: inc %eax;");
    asm("loc_6C08DCE: mov %eax,0x18(%ebp);");
    asm("loc_6C08DD1: mov (%ebx),%esi;");
    asm("loc_6C08DD3: cmp %ebx,%esi;");
    asm("loc_6C08DD5: je loc_6C08E3C;");
    asm("loc_6C08DD7: mov 0x10(%ebp),%edi;");
    asm("loc_6C08DDA: mov 0x14(%ebp),%edx;");
    asm("loc_6C08DDD: mov 8(%esi),%cl;");
    asm("loc_6C08DE0: inc %edi;");
    asm("loc_6C08DE1: mov %edi,%eax;");
    asm("loc_6C08DE3: cmp %edx,%eax;");
    asm("loc_6C08DE5: mov %edi,0x10(%ebp);");
    asm("loc_6C08DE8: jbe loc_6C08DF1;");
    asm("loc_6C08DEA: movl $0x16,0x1C(%ebp);");
    asm("loc_6C08DF1: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08DF4: test %eax,%eax;");
    asm("loc_6C08DF6: jne loc_6C08DB6;");
    asm("loc_6C08DF8: mov 0x18(%ebp),%eax;");
    asm("loc_6C08DFB: mov %cl,(%eax);");
    asm("loc_6C08DFD: inc %eax;");
    asm("loc_6C08DFE: mov %eax,0x18(%ebp);");
    asm("loc_6C08E01: flds 0xC(%esi);");
    asm("loc_6C08E04: fmull _data_6C0E270;");
    asm("loc_6C08E0A: call _sub_6C09EE8;");
    asm("loc_6C08E0F: mov 0x10(%ebp),%edi;");
    asm("loc_6C08E12: mov 0x14(%ebp),%edx;");
    asm("loc_6C08E15: inc %edi;");
    asm("loc_6C08E16: mov %edi,%ecx;");
    asm("loc_6C08E18: cmp %edx,%ecx;");
    asm("loc_6C08E1A: mov %edi,0x10(%ebp);");
    asm("loc_6C08E1D: jbe loc_6C08E26;");
    asm("loc_6C08E1F: movl $0x16,0x1C(%ebp);");
    asm("loc_6C08E26: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C08E29: test %ecx,%ecx;");
    asm("loc_6C08E2B: jne loc_6C08DB6;");
    asm("loc_6C08E2D: mov 0x18(%ebp),%ecx;");
    asm("loc_6C08E30: mov %al,(%ecx);");
    asm("loc_6C08E32: inc %ecx;");
    asm("loc_6C08E33: mov %ecx,0x18(%ebp);");
    asm("loc_6C08E36: mov (%esi),%esi;");
    asm("loc_6C08E38: cmp %ebx,%esi;");
    asm("loc_6C08E3A: jne loc_6C08DD7;");
    asm("loc_6C08E3C: calll *_import_6C0B080;");
    asm("loc_6C08E42: test %al,%al;");
    asm("loc_6C08E44: je loc_6C08F2A;");
    asm("loc_6C08E4A: mov 0x10(%ebp),%esi;");
    asm("loc_6C08E4D: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08E50: mov $4,%edx;");
    asm("loc_6C08E55: add %edx,%esi;");
    asm("loc_6C08E57: mov %esi,%eax;");
    asm("loc_6C08E59: cmp %ecx,%eax;");
    asm("loc_6C08E5B: mov %esi,0x10(%ebp);");
    asm("loc_6C08E5E: mov $0x16,%esi;");
    asm("loc_6C08E63: jbe loc_6C08E68;");
    asm("loc_6C08E65: mov %esi,0x1C(%ebp);");
    asm("loc_6C08E68: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08E6B: test %eax,%eax;");
    asm("loc_6C08E6D: je loc_6C08E7B;");
    asm("loc_6C08E6F: pop %edi;");
    asm("loc_6C08E70: mov %esi,%eax;");
    asm("loc_6C08E72: pop %esi;");
    asm("loc_6C08E73: pop %ebp;");
    asm("loc_6C08E74: pop %ebx;");
    asm("loc_6C08E75: add $0x18,%esp;");
    asm("loc_6C08E78: ret $0xC;");
    asm("loc_6C08E7B: mov 0x18(%ebp),%eax;");
    asm("loc_6C08E7E: mov 0x88(%ebp),%ecx;");
    asm("loc_6C08E84: mov %ecx,(%eax);");
    asm("loc_6C08E86: mov 0x84(%ebp),%ecx;");
    asm("loc_6C08E8C: add $4,%eax;");
    asm("loc_6C08E8F: mov %eax,0x18(%ebp);");
    asm("loc_6C08E92: mov (%ecx),%eax;");
    asm("loc_6C08E94: cmp %ecx,%eax;");
    asm("loc_6C08E96: je loc_6C08F2A;");
    asm("loc_6C08E9C: mov $2,%edi;");
    asm("loc_6C08EA1: mov 0x10(%ebp),%ecx;");
    asm("loc_6C08EA4: mov 0x14(%ebp),%ebx;");
    asm("loc_6C08EA7: add %edi,%ecx;");
    asm("loc_6C08EA9: cmp %ebx,%ecx;");
    asm("loc_6C08EAB: mov %ecx,0x10(%ebp);");
    asm("loc_6C08EAE: jbe loc_6C08EB3;");
    asm("loc_6C08EB0: mov %esi,0x1C(%ebp);");
    asm("loc_6C08EB3: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C08EB6: test %ecx,%ecx;");
    asm("loc_6C08EB8: jne loc_6C08E6F;");
    asm("loc_6C08EBA: mov 0x18(%ebp),%ecx;");
    asm("loc_6C08EBD: mov 8(%eax),%bx;");
    asm("loc_6C08EC1: mov %bx,(%ecx);");
    asm("loc_6C08EC4: add $2,%ecx;");
    asm("loc_6C08EC7: mov %ecx,0x18(%ebp);");
    asm("loc_6C08ECA: mov 0x10(%ebp),%ecx;");
    asm("loc_6C08ECD: mov 0x14(%ebp),%ebx;");
    asm("loc_6C08ED0: add %edx,%ecx;");
    asm("loc_6C08ED2: cmp %ebx,%ecx;");
    asm("loc_6C08ED4: mov %ecx,0x10(%ebp);");
    asm("loc_6C08ED7: jbe loc_6C08EDC;");
    asm("loc_6C08ED9: mov %esi,0x1C(%ebp);");
    asm("loc_6C08EDC: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C08EDF: test %ecx,%ecx;");
    asm("loc_6C08EE1: jne loc_6C08E6F;");
    asm("loc_6C08EE3: mov 0x18(%ebp),%ecx;");
    asm("loc_6C08EE6: mov 0x10(%eax),%ebx;");
    asm("loc_6C08EE9: mov %ebx,(%ecx);");
    asm("loc_6C08EEB: add $4,%ecx;");
    asm("loc_6C08EEE: mov %ecx,0x18(%ebp);");
    asm("loc_6C08EF1: mov 0x10(%ebp),%ecx;");
    asm("loc_6C08EF4: mov 0x14(%ebp),%ebx;");
    asm("loc_6C08EF7: add %edx,%ecx;");
    asm("loc_6C08EF9: cmp %ebx,%ecx;");
    asm("loc_6C08EFB: mov %ecx,0x10(%ebp);");
    asm("loc_6C08EFE: jbe loc_6C08F03;");
    asm("loc_6C08F00: mov %esi,0x1C(%ebp);");
    asm("loc_6C08F03: mov 0x1C(%ebp),%ecx;");
    asm("loc_6C08F06: test %ecx,%ecx;");
    asm("loc_6C08F08: jne loc_6C08E6F;");
    asm("loc_6C08F0E: flds 0xC(%eax);");
    asm("loc_6C08F11: mov 0x18(%ebp),%ecx;");
    asm("loc_6C08F14: fstps (%ecx);");
    asm("loc_6C08F16: add $4,%ecx;");
    asm("loc_6C08F19: mov %ecx,0x18(%ebp);");
    asm("loc_6C08F1C: mov (%eax),%eax;");
    asm("loc_6C08F1E: cmp 0x84(%ebp),%eax;");
    asm("loc_6C08F24: jne loc_6C08EA1;");
    asm("loc_6C08F2A: pop %edi;");
    asm("loc_6C08F2B: pop %esi;");
    asm("loc_6C08F2C: pop %ebp;");
    asm("loc_6C08F2D: xor %eax,%eax;");
    asm("loc_6C08F2F: pop %ebx;");
    asm("loc_6C08F30: add $0x18,%esp;");
    asm("loc_6C08F33: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C08F40() // _sub_6C08F40
{
    __DEBUG_ASM(6C08F40);
    // chunk 0x6C08F40 _sub_6C08F40
    asm("loc_6C08F40: sub $0x18,%esp;");
    asm("loc_6C08F43: push %ebx;");
    asm("loc_6C08F44: push %ebp;");
    asm("loc_6C08F45: mov %ecx,%ebp;");
    asm("loc_6C08F47: mov 0x10(%ebp),%edx;");
    asm("loc_6C08F4A: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08F4D: push %esi;");
    asm("loc_6C08F4E: mov $4,%esi;");
    asm("loc_6C08F53: add %esi,%edx;");
    asm("loc_6C08F55: mov %edx,%eax;");
    asm("loc_6C08F57: cmp %ecx,%eax;");
    asm("loc_6C08F59: push %edi;");
    asm("loc_6C08F5A: mov %edx,0x10(%ebp);");
    asm("loc_6C08F5D: mov $0x17,%edi;");
    asm("loc_6C08F62: jbe loc_6C08F67;");
    asm("loc_6C08F64: mov %edi,0x1C(%ebp);");
    asm("loc_6C08F67: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08F6A: xor %ebx,%ebx;");
    asm("loc_6C08F6C: cmp %ebx,%eax;");
    asm("loc_6C08F6E: jne loc_6C098AD;");
    asm("loc_6C08F74: mov 0x18(%ebp),%eax;");
    asm("loc_6C08F77: mov (%eax),%ecx;");
    asm("loc_6C08F79: add $4,%eax;");
    asm("loc_6C08F7C: mov %eax,0x18(%ebp);");
    asm("loc_6C08F7F: mov %ecx,0x20(%ebp);");
    asm("loc_6C08F82: mov 0x10(%ebp),%edx;");
    asm("loc_6C08F85: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08F88: add $2,%edx;");
    asm("loc_6C08F8B: mov %edx,%eax;");
    asm("loc_6C08F8D: cmp %ecx,%eax;");
    asm("loc_6C08F8F: mov %edx,0x10(%ebp);");
    asm("loc_6C08F92: jbe loc_6C08F97;");
    asm("loc_6C08F94: mov %edi,0x1C(%ebp);");
    asm("loc_6C08F97: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08F9A: cmp %ebx,%eax;");
    asm("loc_6C08F9C: jne loc_6C098AD;");
    asm("loc_6C08FA2: mov 0x18(%ebp),%eax;");
    asm("loc_6C08FA5: xor %ecx,%ecx;");
    asm("loc_6C08FA7: mov (%eax),%cx;");
    asm("loc_6C08FAA: add $2,%eax;");
    asm("loc_6C08FAD: mov %eax,0x18(%ebp);");
    asm("loc_6C08FB0: push %ecx;");
    asm("loc_6C08FB1: calll *_import_6C0B000;");
    asm("loc_6C08FB7: mov %eax,0x24(%ebp);");
    asm("loc_6C08FBA: mov 0x10(%ebp),%edx;");
    asm("loc_6C08FBD: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08FC0: add %esi,%edx;");
    asm("loc_6C08FC2: mov %edx,%eax;");
    asm("loc_6C08FC4: add $4,%esp;");
    asm("loc_6C08FC7: cmp %ecx,%eax;");
    asm("loc_6C08FC9: mov %edx,0x10(%ebp);");
    asm("loc_6C08FCC: jbe loc_6C08FD1;");
    asm("loc_6C08FCE: mov %edi,0x1C(%ebp);");
    asm("loc_6C08FD1: mov 0x1C(%ebp),%eax;");
    asm("loc_6C08FD4: cmp %ebx,%eax;");
    asm("loc_6C08FD6: jne loc_6C098AD;");
    asm("loc_6C08FDC: mov 0x18(%ebp),%eax;");
    asm("loc_6C08FDF: mov (%eax),%edx;");
    asm("loc_6C08FE1: add $4,%eax;");
    asm("loc_6C08FE4: mov %edx,0x28(%ebp);");
    asm("loc_6C08FE7: mov %eax,0x18(%ebp);");
    asm("loc_6C08FEA: mov 0x10(%ebp),%edx;");
    asm("loc_6C08FED: mov 0x14(%ebp),%ecx;");
    asm("loc_6C08FF0: add %esi,%edx;");
    asm("loc_6C08FF2: mov %edx,%eax;");
    asm("loc_6C08FF4: cmp %ecx,%eax;");
    asm("loc_6C08FF6: mov %edx,0x10(%ebp);");
    asm("loc_6C08FF9: jbe loc_6C08FFE;");
    asm("loc_6C08FFB: mov %edi,0x1C(%ebp);");
    asm("loc_6C08FFE: mov 0x1C(%ebp),%eax;");
    asm("loc_6C09001: cmp %ebx,%eax;");
    asm("loc_6C09003: jne loc_6C098AD;");
    asm("loc_6C09009: mov 0x18(%ebp),%eax;");
    asm("loc_6C0900C: mov (%eax),%ecx;");
    asm("loc_6C0900E: add $4,%eax;");
    asm("loc_6C09011: mov %eax,0x18(%ebp);");
    asm("loc_6C09014: mov %ecx,0x2C(%ebp);");
    asm("loc_6C09017: mov 0x10(%ebp),%edx;");
    asm("loc_6C0901A: mov 0x14(%ebp),%ecx;");
    asm("loc_6C0901D: add %esi,%edx;");
    asm("loc_6C0901F: mov %edx,%eax;");
    asm("loc_6C09021: cmp %ecx,%eax;");
    asm("loc_6C09023: mov %edx,0x10(%ebp);");
    asm("loc_6C09026: jbe loc_6C0902B;");
    asm("loc_6C09028: mov %edi,0x1C(%ebp);");
    asm("loc_6C0902B: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0902E: cmp %ebx,%eax;");
    asm("loc_6C09030: jne loc_6C098AD;");
    asm("loc_6C09036: mov 0x18(%ebp),%eax;");
    asm("loc_6C09039: mov (%eax),%edx;");
    asm("loc_6C0903B: add $4,%eax;");
    asm("loc_6C0903E: mov %edx,0x34(%ebp);");
    asm("loc_6C09041: mov %eax,0x18(%ebp);");
    asm("loc_6C09044: mov 0x10(%ebp),%edx;");
    asm("loc_6C09047: mov 0x14(%ebp),%ecx;");
    asm("loc_6C0904A: add %esi,%edx;");
    asm("loc_6C0904C: mov %edx,%eax;");
    asm("loc_6C0904E: cmp %ecx,%eax;");
    asm("loc_6C09050: mov %edx,0x10(%ebp);");
    asm("loc_6C09053: jbe loc_6C09058;");
    asm("loc_6C09055: mov %edi,0x1C(%ebp);");
    asm("loc_6C09058: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0905B: cmp %ebx,%eax;");
    asm("loc_6C0905D: jne loc_6C098AD;");
    asm("loc_6C09063: mov 0x18(%ebp),%eax;");
    asm("loc_6C09066: mov (%eax),%ecx;");
    asm("loc_6C09068: add $4,%eax;");
    asm("loc_6C0906B: mov %eax,0x18(%ebp);");
    asm("loc_6C0906E: mov %ecx,0x30(%ebp);");
    asm("loc_6C09071: mov %ebx,0x38(%ebp);");
    asm("loc_6C09074: mov %ebx,0x3C(%ebp);");
    asm("loc_6C09077: mov 0x10(%ebp),%edx;");
    asm("loc_6C0907A: mov 0x14(%ebp),%ecx;");
    asm("loc_6C0907D: inc %edx;");
    asm("loc_6C0907E: mov %edx,%eax;");
    asm("loc_6C09080: cmp %ecx,%eax;");
    asm("loc_6C09082: mov %edx,0x10(%ebp);");
    asm("loc_6C09085: jbe loc_6C0908A;");
    asm("loc_6C09087: mov %edi,0x1C(%ebp);");
    asm("loc_6C0908A: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0908D: cmp %ebx,%eax;");
    asm("loc_6C0908F: jne loc_6C098AD;");
    asm("loc_6C09095: mov 0x18(%ebp),%eax;");
    asm("loc_6C09098: mov (%eax),%cl;");
    asm("loc_6C0909A: inc %eax;");
    asm("loc_6C0909B: mov %eax,0x18(%ebp);");
    asm("loc_6C0909E: xor %eax,%eax;");
    asm("loc_6C090A0: mov %cl,%al;");
    asm("loc_6C090A2: cmp %ebx,%eax;");
    asm("loc_6C090A4: mov %eax,0x40(%ebp);");
    asm("loc_6C090A7: jbe loc_6C0910E;");
    asm("loc_6C090A9: lea (,%eax,4),%edx;");
    asm("loc_6C090B0: push %edx;");
    asm("loc_6C090B1: call _sub_6C09D26;");
    asm("loc_6C090B6: mov %eax,0x44(%ebp);");
    asm("loc_6C090B9: mov 0x40(%ebp),%eax;");
    asm("loc_6C090BC: mov 0x10(%ebp),%edx;");
    asm("loc_6C090BF: mov 0x14(%ebp),%ecx;");
    asm("loc_6C090C2: shl $2,%eax;");
    asm("loc_6C090C5: add %eax,%edx;");
    asm("loc_6C090C7: mov %edx,%eax;");
    asm("loc_6C090C9: add $4,%esp;");
    asm("loc_6C090CC: cmp %ecx,%eax;");
    asm("loc_6C090CE: mov %edx,0x10(%ebp);");
    asm("loc_6C090D1: jbe loc_6C090D6;");
    asm("loc_6C090D3: mov %edi,0x1C(%ebp);");
    asm("loc_6C090D6: mov 0x1C(%ebp),%eax;");
    asm("loc_6C090D9: cmp %ebx,%eax;");
    asm("loc_6C090DB: jne loc_6C098AD;");
    asm("loc_6C090E1: mov 0x40(%ebp),%eax;");
    asm("loc_6C090E4: mov 0x18(%ebp),%edx;");
    asm("loc_6C090E7: mov 0x44(%ebp),%edi;");
    asm("loc_6C090EA: shl $2,%eax;");
    asm("loc_6C090ED: mov %eax,%ecx;");
    asm("loc_6C090EF: mov %ecx,%ebx;");
    asm("loc_6C090F1: shr $2,%ecx;");
    asm("loc_6C090F4: mov %edx,%esi;");
    asm("loc_6C090F6: rep movsl (%esi),(%edi);");
    asm("loc_6C090F8: mov %ebx,%ecx;");
    asm("loc_6C090FA: and $3,%ecx;");
    asm("loc_6C090FD: rep movsb (%esi),(%edi);");
    asm("loc_6C090FF: add %eax,%edx;");
    asm("loc_6C09101: mov %edx,0x18(%ebp);");
    asm("loc_6C09104: mov $4,%esi;");
    asm("loc_6C09109: mov $0x17,%edi;");
    asm("loc_6C0910E: mov 0x10(%ebp),%edx;");
    asm("loc_6C09111: mov 0x14(%ebp),%ecx;");
    asm("loc_6C09114: add %esi,%edx;");
    asm("loc_6C09116: mov %edx,%eax;");
    asm("loc_6C09118: cmp %ecx,%eax;");
    asm("loc_6C0911A: mov %edx,0x10(%ebp);");
    asm("loc_6C0911D: jbe loc_6C09122;");
    asm("loc_6C0911F: mov %edi,0x1C(%ebp);");
    asm("loc_6C09122: mov 0x1C(%ebp),%eax;");
    asm("loc_6C09125: test %eax,%eax;");
    asm("loc_6C09127: jne loc_6C098AD;");
    asm("loc_6C0912D: mov 0x18(%ebp),%eax;");
    asm("loc_6C09130: mov (%eax),%ecx;");
    asm("loc_6C09132: add $4,%eax;");
    asm("loc_6C09135: mov %eax,0x18(%ebp);");
    asm("loc_6C09138: mov %ecx,0x48(%ebp);");
    asm("loc_6C0913B: mov 0x10(%ebp),%edx;");
    asm("loc_6C0913E: mov 0x14(%ebp),%ecx;");
    asm("loc_6C09141: add $0xC,%edx;");
    asm("loc_6C09144: mov %edx,%eax;");
    asm("loc_6C09146: cmp %ecx,%eax;");
    asm("loc_6C09148: mov %edx,0x10(%ebp);");
    asm("loc_6C0914B: jbe loc_6C09150;");
    asm("loc_6C0914D: mov %edi,0x1C(%ebp);");
    asm("loc_6C09150: mov 0x1C(%ebp),%eax;");
    asm("loc_6C09153: test %eax,%eax;");
    asm("loc_6C09155: jne loc_6C098AD;");
    asm("loc_6C0915B: mov 0x18(%ebp),%esi;");
    asm("loc_6C0915E: push %esi;");
    asm("loc_6C0915F: lea 0x4C(%ebp),%ecx;");
    asm("loc_6C09162: call _sub_6BDA4C0;");
    asm("loc_6C09167: add $0xC,%esi;");
    asm("loc_6C0916A: mov %esi,0x18(%ebp);");
    asm("loc_6C0916D: mov 0x10(%ebp),%edx;");
    asm("loc_6C09170: mov 0x14(%ebp),%ecx;");
    asm("loc_6C09173: inc %edx;");
    asm("loc_6C09174: mov %edx,%eax;");
    asm("loc_6C09176: cmp %ecx,%eax;");
    asm("loc_6C09178: mov %edx,0x10(%ebp);");
    asm("loc_6C0917B: jbe loc_6C09180;");
    asm("loc_6C0917D: mov %edi,0x1C(%ebp);");
    asm("loc_6C09180: mov 0x1C(%ebp),%eax;");
    asm("loc_6C09183: test %eax,%eax;");
    asm("loc_6C09185: jne loc_6C098AD;");
    asm("loc_6C0918B: mov 0x18(%ebp),%eax;");
    asm("loc_6C0918E: mov (%eax),%dl;");
    asm("loc_6C09190: inc %eax;");
    asm("loc_6C09191: mov %eax,0x18(%ebp);");
    asm("loc_6C09194: mov 0x14(%ebp),%ecx;");
    asm("loc_6C09197: mov %dl,0x13(%esp);");
    asm("loc_6C0919B: mov 0x10(%ebp),%edx;");
    asm("loc_6C0919E: inc %edx;");
    asm("loc_6C0919F: mov %edx,%eax;");
    asm("loc_6C091A1: cmp %ecx,%eax;");
    asm("loc_6C091A3: mov %edx,0x10(%ebp);");
    asm("loc_6C091A6: jbe loc_6C091AB;");
    asm("loc_6C091A8: mov %edi,0x1C(%ebp);");
    asm("loc_6C091AB: mov 0x1C(%ebp),%eax;");
    asm("loc_6C091AE: test %eax,%eax;");
    asm("loc_6C091B0: jne loc_6C098AD;");
    asm("loc_6C091B6: mov 0x18(%ebp),%eax;");
    asm("loc_6C091B9: mov (%eax),%bl;");
    asm("loc_6C091BB: inc %eax;");
    asm("loc_6C091BC: mov %eax,0x18(%ebp);");
    asm("loc_6C091BF: mov 0x10(%ebp),%edx;");
    asm("loc_6C091C2: mov 0x14(%ebp),%ecx;");
    asm("loc_6C091C5: inc %edx;");
    asm("loc_6C091C6: mov %edx,%eax;");
    asm("loc_6C091C8: cmp %ecx,%eax;");
    asm("loc_6C091CA: mov %edx,0x10(%ebp);");
    asm("loc_6C091CD: jbe loc_6C091D2;");
    asm("loc_6C091CF: mov %edi,0x1C(%ebp);");
    asm("loc_6C091D2: mov 0x1C(%ebp),%eax;");
    asm("loc_6C091D5: test %eax,%eax;");
    asm("loc_6C091D7: jne loc_6C098AD;");
    asm("loc_6C091DD: mov 0x18(%ebp),%eax;");
    asm("loc_6C091E0: mov (%eax),%dl;");
    asm("loc_6C091E2: inc %eax;");
    asm("loc_6C091E3: mov %eax,0x18(%ebp);");
    asm("loc_6C091E6: mov 0x10(%ebp),%esi;");
    asm("loc_6C091E9: mov 0x14(%ebp),%ecx;");
    asm("loc_6C091EC: inc %esi;");
    asm("loc_6C091ED: mov %esi,%eax;");
    asm("loc_6C091EF: cmp %ecx,%eax;");
    asm("loc_6C091F1: mov %esi,0x10(%ebp);");
    asm("loc_6C091F4: jbe loc_6C091F9;");
    asm("loc_6C091F6: mov %edi,0x1C(%ebp);");
    asm("loc_6C091F9: mov 0x1C(%ebp),%eax;");
    asm("loc_6C091FC: test %eax,%eax;");
    asm("loc_6C091FE: jne loc_6C098AD;");
    asm("loc_6C09204: mov 0x18(%ebp),%eax;");
    asm("loc_6C09207: mov (%eax),%cl;");
    asm("loc_6C09209: inc %eax;");
    asm("loc_6C0920A: mov %eax,0x18(%ebp);");
    asm("loc_6C0920D: movsbl 0x13(%esp),%eax;");
    asm("loc_6C09212: mov %eax,0x14(%esp);");
    asm("loc_6C09216: movsbl %bl,%eax;");
    asm("loc_6C09219: fildl 0x14(%esp);");
    asm("loc_6C0921D: mov %eax,0x14(%esp);");
    asm("loc_6C09221: fmull _data_6C0DF48;");
    asm("loc_6C09227: movsbl %dl,%edx;");
    asm("loc_6C0922A: movsbl %cl,%eax;");
    asm("loc_6C0922D: fstps 0x5C(%ebp);");
    asm("loc_6C09230: fildl 0x14(%esp);");
    asm("loc_6C09234: mov %edx,0x14(%esp);");
    asm("loc_6C09238: fmull _data_6C0DF48;");
    asm("loc_6C0923E: fstps 0x60(%ebp);");
    asm("loc_6C09241: fildl 0x14(%esp);");
    asm("loc_6C09245: mov %eax,0x14(%esp);");
    asm("loc_6C09249: fmull _data_6C0DF48;");
    asm("loc_6C0924F: fstps 0x64(%ebp);");
    asm("loc_6C09252: fildl 0x14(%esp);");
    asm("loc_6C09256: fmull _data_6C0DF48;");
    asm("loc_6C0925C: fstps 0x58(%ebp);");
    asm("loc_6C0925F: mov 0x10(%ebp),%edx;");
    asm("loc_6C09262: mov 0x14(%ebp),%ecx;");
    asm("loc_6C09265: inc %edx;");
    asm("loc_6C09266: mov %edx,%eax;");
    asm("loc_6C09268: cmp %ecx,%eax;");
    asm("loc_6C0926A: mov %edx,0x10(%ebp);");
    asm("loc_6C0926D: jbe loc_6C09272;");
    asm("loc_6C0926F: mov %edi,0x1C(%ebp);");
    asm("loc_6C09272: mov 0x1C(%ebp),%eax;");
    asm("loc_6C09275: test %eax,%eax;");
    asm("loc_6C09277: jne loc_6C098AD;");
    asm("loc_6C0927D: mov 0x18(%ebp),%eax;");
    asm("loc_6C09280: mov (%eax),%bl;");
    asm("loc_6C09282: mov 0x24(%ebp),%ecx;");
    asm("loc_6C09285: inc %eax;");
    asm("loc_6C09286: push %ecx;");
    asm("loc_6C09287: mov %eax,0x18(%ebp);");
    asm("loc_6C0928A: calll *_import_6C0B024;");
    asm("loc_6C09290: xor %edx,%edx;");
    asm("loc_6C09292: mov %bl,%dl;");
    asm("loc_6C09294: mov %eax,0x18(%esp);");
    asm("loc_6C09298: fildl 0x18(%esp);");
    asm("loc_6C0929C: add $4,%esp;");
    asm("loc_6C0929F: mov %edx,0x14(%esp);");
    asm("loc_6C092A3: fildl 0x14(%esp);");
    asm("loc_6C092A7: fmull _data_6C0E660;");
    asm("loc_6C092AD: fmulp;");
    asm("loc_6C092AF: call _sub_6C09EE8;");
    asm("loc_6C092B4: mov %eax,0x68(%ebp);");
    asm("loc_6C092B7: calll *_import_6C0B080;");
    asm("loc_6C092BD: test %al,%al;");
    asm("loc_6C092BF: je loc_6C092F3;");
    asm("loc_6C092C1: mov 0x10(%ebp),%edx;");
    asm("loc_6C092C4: mov 0x14(%ebp),%ecx;");
    asm("loc_6C092C7: add $4,%edx;");
    asm("loc_6C092CA: mov %edx,%eax;");
    asm("loc_6C092CC: cmp %ecx,%eax;");
    asm("loc_6C092CE: mov %edx,0x10(%ebp);");
    asm("loc_6C092D1: jbe loc_6C092DA;");
    asm("loc_6C092D3: movl $0x17,0x1C(%ebp);");
    asm("loc_6C092DA: mov 0x1C(%ebp),%eax;");
    asm("loc_6C092DD: test %eax,%eax;");
    asm("loc_6C092DF: jne loc_6C098AD;");
    asm("loc_6C092E5: mov 0x18(%ebp),%eax;");
    asm("loc_6C092E8: mov (%eax),%ecx;");
    asm("loc_6C092EA: add $4,%eax;");
    asm("loc_6C092ED: mov %ecx,0x6C(%ebp);");
    asm("loc_6C092F0: mov %eax,0x18(%ebp);");
    asm("loc_6C092F3: mov 0x10(%ebp),%edx;");
    asm("loc_6C092F6: mov 0x14(%ebp),%ecx;");
    asm("loc_6C092F9: add $2,%edx;");
    asm("loc_6C092FC: mov %edx,%eax;");
    asm("loc_6C092FE: cmp %ecx,%eax;");
    asm("loc_6C09300: mov %edx,0x10(%ebp);");
    asm("loc_6C09303: jbe loc_6C0930C;");
    asm("loc_6C09305: movl $0x17,0x1C(%ebp);");
    asm("loc_6C0930C: mov 0x1C(%ebp),%eax;");
    asm("loc_6C0930F: test %eax,%eax;");
    asm("loc_6C09311: jne loc_6C098AD;");
    asm("loc_6C09317: mov 0x18(%ebp),%eax;");
    asm("loc_6C0931A: xor %ecx,%ecx;");
    asm("loc_6C0931C: mov (%eax),%cx;");
    asm("loc_6C0931F: add $2,%eax;");
    asm("loc_6C09322: test %cx,%cx;");
    asm("loc_6C09325: mov %eax,0x18(%ebp);");
    asm("loc_6C09328: movl $0,0x14(%esp);");
    asm("loc_6C09330: mov %ecx,0x24(%esp);");
    asm("loc_6C09334: jbe loc_6C09647;");
    asm("loc_6C0933A: mov $2,%esi;");
    asm("loc_6C0933F: xor %edi,%edi;");
    asm("loc_6C09341: push $0x18;");
    asm("loc_6C09343: call _sub_6C09D26;");
    asm("loc_6C09348: mov %eax,%ebx;");
    asm("loc_6C0934A: add $4,%esp;");
    asm("loc_6C0934D: cmp %edi,%ebx;");
    asm("loc_6C0934F: je loc_6C09633;");
    asm("loc_6C09355: mov %edi,(%ebx);");
    asm("loc_6C09357: mov %edi,4(%ebx);");
    asm("loc_6C0935A: mov %edi,8(%ebx);");
    asm("loc_6C0935D: mov %di,0xC(%ebx);");
    asm("loc_6C09361: movb $0,0xE(%ebx);");
    asm("loc_6C09365: movb $0,0xF(%ebx);");
    asm("loc_6C09369: mov %di,0x10(%ebx);");
    asm("loc_6C0936D: mov %edi,0x14(%ebx);");
    asm("loc_6C09370: mov 0x10(%ebp),%edx;");
    asm("loc_6C09373: mov 0x14(%ebp),%ecx;");
    asm("loc_6C09376: inc %edx;");
    asm("loc_6C09377: mov %edx,%eax;");
    asm("loc_6C09379: cmp %ecx,%eax;");
    asm("loc_6C0937B: mov %edx,0x10(%ebp);");
    asm("loc_6C0937E: jbe loc_6C09387;");
    asm("loc_6C09380: movl $0x17,0x1C(%ebp);");
    asm("loc_6C09387: cmp %edi,0x1C(%ebp);");
    asm("loc_6C0938A: jne loc_6C098B7;");
    asm("loc_6C09390: mov 0x18(%ebp),%eax;");
    asm("loc_6C09393: mov (%eax),%dl;");
    asm("loc_6C09395: inc %eax;");
    asm("loc_6C09396: mov %eax,0x18(%ebp);");
    asm("loc_6C09399: mov %dl,%al;");
    asm("loc_6C0939B: shr $1,%al;");
    asm("loc_6C0939D: mov %dl,%cl;");
    asm("loc_6C0939F: and $1,%al;");
    asm("loc_6C093A1: and $1,%cl;");
    asm("loc_6C093A4: test %dl,%dl;");
    asm("loc_6C093A6: mov %dl,0x13(%esp);");
    asm("loc_6C093AA: mov %al,0xF(%ebx);");
    asm("loc_6C093AD: mov %cl,0xE(%ebx);");
    asm("loc_6C093B0: jns loc_6C093BB;");
    asm("loc_6C093B2: movl $1,4(%ebx);");
    asm("loc_6C093B9: jmp loc_6C09418;");
    asm("loc_6C093BB: test $4,%dl;");
    asm("loc_6C093BE: mov 0x14(%ebp),%ecx;");
    asm("loc_6C093C1: mov 0x10(%ebp),%eax;");
    asm("loc_6C093C4: je loc_6C093F0;");
    asm("loc_6C093C6: add $4,%eax;");
    asm("loc_6C093C9: cmp %ecx,%eax;");
    asm("loc_6C093CB: mov %eax,0x10(%ebp);");
    asm("loc_6C093CE: jbe loc_6C093D7;");
    asm("loc_6C093D0: movl $0x17,0x1C(%ebp);");
    asm("loc_6C093D7: cmp %edi,0x1C(%ebp);");
    asm("loc_6C093DA: jne loc_6C098B7;");
    asm("loc_6C093E0: mov 0x18(%ebp),%eax;");
    asm("loc_6C093E3: mov (%eax),%ecx;");
    asm("loc_6C093E5: add $4,%eax;");
    asm("loc_6C093E8: mov %ecx,4(%ebx);");
    asm("loc_6C093EB: mov %eax,0x18(%ebp);");
    asm("loc_6C093EE: jmp loc_6C09418;");
    asm("loc_6C093F0: inc %eax;");
    asm("loc_6C093F1: cmp %ecx,%eax;");
    asm("loc_6C093F3: mov %eax,0x10(%ebp);");
    asm("loc_6C093F6: jbe loc_6C093FF;");
    asm("loc_6C093F8: movl $0x17,0x1C(%ebp);");
    asm("loc_6C093FF: cmp %edi,0x1C(%ebp);");
    asm("loc_6C09402: jne loc_6C098B7;");
    asm("loc_6C09408: mov 0x18(%ebp),%eax;");
    asm("loc_6C0940B: mov (%eax),%cl;");
    asm("loc_6C0940D: inc %eax;");
    asm("loc_6C0940E: mov %eax,0x18(%ebp);");
    asm("loc_6C09411: xor %eax,%eax;");
    asm("loc_6C09413: mov %cl,%al;");
    asm("loc_6C09415: mov %eax,4(%ebx);");
    asm("loc_6C09418: test $0x40,%dl;");
    asm("loc_6C0941B: je loc_6C09426;");
    asm("loc_6C0941D: movl $0x3F800000,8(%ebx);");
    asm("loc_6C09424: jmp loc_6C09463;");
    asm("loc_6C09426: mov 0x10(%ebp),%edx;");
    asm("loc_6C09429: mov 0x14(%ebp),%ecx;");
    asm("loc_6C0942C: inc %edx;");
    asm("loc_6C0942D: mov %edx,%eax;");
    asm("loc_6C0942F: cmp %ecx,%eax;");
    asm("loc_6C09431: mov %edx,0x10(%ebp);");
    asm("loc_6C09434: jbe loc_6C0943D;");
    asm("loc_6C09436: movl $0x17,0x1C(%ebp);");
    asm("loc_6C0943D: cmp %edi,0x1C(%ebp);");
    asm("loc_6C09440: jne loc_6C098B7;");
    asm("loc_6C09446: mov 0x18(%ebp),%eax;");
    asm("loc_6C09449: mov (%eax),%cl;");
    asm("loc_6C0944B: movzbl %cl,%ecx;");
    asm("loc_6C0944E: mov %ecx,0x20(%esp);");
    asm("loc_6C09452: inc %eax;");
    asm("loc_6C09453: mov %eax,0x18(%ebp);");
    asm("loc_6C09456: fildl 0x20(%esp);");
    asm("loc_6C0945A: fmull _data_6C0E660;");
    asm("loc_6C09460: fstps 8(%ebx);");
    asm("loc_6C09463: mov 0x10(%ebp),%edx;");
    asm("loc_6C09466: mov 0x14(%ebp),%ecx;");
    asm("loc_6C09469: add %esi,%edx;");
    asm("loc_6C0946B: mov %edx,%eax;");
    asm("loc_6C0946D: cmp %ecx,%eax;");
    asm("loc_6C0946F: mov %edx,0x10(%ebp);");
    asm("loc_6C09472: jbe loc_6C0947B;");
    asm("loc_6C09474: movl $0x17,0x1C(%ebp);");
    asm("loc_6C0947B: cmp %edi,0x1C(%ebp);");
    asm("loc_6C0947E: jne loc_6C098B7;");
    asm("loc_6C09484: mov 0x18(%ebp),%eax;");
    asm("loc_6C09487: xor %ecx,%ecx;");
    asm("loc_6C09489: mov (%eax),%cx;");
    asm("loc_6C0948C: add $2,%eax;");
    asm("loc_6C0948F: mov %eax,0x18(%ebp);");
    asm("loc_6C09492: push %ecx;");
    asm("loc_6C09493: calll *_import_6C0B000;");
    asm("loc_6C09499: mov 0x17(%esp),%dl;");
    asm("loc_6C0949D: add $4,%esp;");
    asm("loc_6C094A0: test $8,%dl;");
    asm("loc_6C094A3: mov %eax,(%ebx);");
    asm("loc_6C094A5: mov 0x14(%ebp),%ecx;");
    asm("loc_6C094A8: je loc_6C094D8;");
    asm("loc_6C094AA: mov 0x10(%ebp),%eax;");
    asm("loc_6C094AD: add %esi,%eax;");
    asm("loc_6C094AF: cmp %ecx,%eax;");
    asm("loc_6C094B1: mov %eax,0x10(%ebp);");
    asm("loc_6C094B4: jbe loc_6C094BD;");
    asm("loc_6C094B6: movl $0x17,0x1C(%ebp);");
    asm("loc_6C094BD: cmp %edi,0x1C(%ebp);");
    asm("loc_6C094C0: jne loc_6C098B7;");
    asm("loc_6C094C6: mov 0x18(%ebp),%eax;");
    asm("loc_6C094C9: mov (%eax),%cx;");
    asm("loc_6C094CC: add $2,%eax;");
    asm("loc_6C094CF: mov %cx,0xC(%ebx);");
    asm("loc_6C094D3: mov %eax,0x18(%ebp);");
    asm("loc_6C094D6: jmp loc_6C09507;");
    asm("loc_6C094D8: mov 0x10(%ebp),%esi;");
    asm("loc_6C094DB: inc %esi;");
    asm("loc_6C094DC: mov %esi,%eax;");
    asm("loc_6C094DE: cmp %ecx,%eax;");
    asm("loc_6C094E0: mov %esi,0x10(%ebp);");
    asm("loc_6C094E3: jbe loc_6C094EC;");
    asm("loc_6C094E5: movl $0x17,0x1C(%ebp);");
    asm("loc_6C094EC: cmp %edi,0x1C(%ebp);");
    asm("loc_6C094EF: jne loc_6C098B7;");
    asm("loc_6C094F5: mov 0x18(%ebp),%eax;");
    asm("loc_6C094F8: mov (%eax),%cl;");
    asm("loc_6C094FA: inc %eax;");
    asm("loc_6C094FB: mov %eax,0x18(%ebp);");
    asm("loc_6C094FE: xor %ax,%ax;");
    asm("loc_6C09501: mov %cl,%al;");
    asm("loc_6C09503: mov %ax,0xC(%ebx);");
    asm("loc_6C09507: test $0x20,%dl;");
    asm("loc_6C0950A: jne loc_6C0961C;");
    asm("loc_6C09510: mov 0x14(%ebp),%ecx;");
    asm("loc_6C09513: test $0x10,%dl;");
    asm("loc_6C09516: mov 0x10(%ebp),%edx;");
    asm("loc_6C09519: je loc_6C095B5;");
    asm("loc_6C0951F: inc %edx;");
    asm("loc_6C09520: mov %edx,%eax;");
    asm("loc_6C09522: cmp %ecx,%eax;");
    asm("loc_6C09524: mov %edx,0x10(%ebp);");
    asm("loc_6C09527: jbe loc_6C09530;");
    asm("loc_6C09529: movl $0x17,0x1C(%ebp);");
    asm("loc_6C09530: cmp %edi,0x1C(%ebp);");
    asm("loc_6C09533: jne loc_6C098B7;");
    asm("loc_6C09539: mov 0x18(%ebp),%eax;");
    asm("loc_6C0953C: mov (%eax),%cl;");
    asm("loc_6C0953E: inc %eax;");
    asm("loc_6C0953F: mov %eax,0x18(%ebp);");
    asm("loc_6C09542: xor %ax,%ax;");
    asm("loc_6C09545: mov %cl,%al;");
    asm("loc_6C09547: cmp %di,%ax;");
    asm("loc_6C0954A: mov %ax,0x10(%ebx);");
    asm("loc_6C0954E: je loc_6C09623;");
    asm("loc_6C09554: xor %ecx,%ecx;");
    asm("loc_6C09556: mov %ax,%cx;");
    asm("loc_6C09559: push %ecx;");
    asm("loc_6C0955A: call _sub_6C09D26;");
    asm("loc_6C0955F: movzwl 0x10(%ebx),%edx;");
    asm("loc_6C09563: mov %eax,0x14(%ebx);");
    asm("loc_6C09566: mov 0x10(%ebp),%esi;");
    asm("loc_6C09569: mov 0x14(%ebp),%ecx;");
    asm("loc_6C0956C: add %edx,%esi;");
    asm("loc_6C0956E: mov %esi,%eax;");
    asm("loc_6C09570: add $4,%esp;");
    asm("loc_6C09573: cmp %ecx,%eax;");
    asm("loc_6C09575: mov %esi,0x10(%ebp);");
    asm("loc_6C09578: jbe loc_6C09581;");
    asm("loc_6C0957A: movl $0x17,0x1C(%ebp);");
    asm("loc_6C09581: mov 0x1C(%ebp),%eax;");
    asm("loc_6C09584: test %eax,%eax;");
    asm("loc_6C09586: jne loc_6C098B7;");
    asm("loc_6C0958C: movzwl 0x10(%ebx),%eax;");
    asm("loc_6C09590: mov 0x18(%ebp),%esi;");
    asm("loc_6C09593: mov 0x14(%ebx),%edi;");
    asm("loc_6C09596: mov %eax,%ecx;");
    asm("loc_6C09598: mov %ecx,%edx;");
    asm("loc_6C0959A: shr $2,%ecx;");
    asm("loc_6C0959D: mov %esi,0x20(%esp);");
    asm("loc_6C095A1: rep movsl (%esi),(%edi);");
    asm("loc_6C095A3: mov %edx,%ecx;");
    asm("loc_6C095A5: and $3,%ecx;");
    asm("loc_6C095A8: rep movsb (%esi),(%edi);");
    asm("loc_6C095AA: mov 0x20(%esp),%ecx;");
    asm("loc_6C095AE: add %eax,%ecx;");
    asm("loc_6C095B0: mov %ecx,0x18(%ebp);");
    asm("loc_6C095B3: jmp loc_6C09623;");
    asm("loc_6C095B5: inc %edx;");
    asm("loc_6C095B6: mov %edx,%eax;");
    asm("loc_6C095B8: cmp %ecx,%eax;");
    asm("loc_6C095BA: mov %edx,0x10(%ebp);");
    asm("loc_6C095BD: jbe loc_6C095C6;");
    asm("loc_6C095BF: movl $0x17,0x1C(%ebp);");
    asm("loc_6C095C6: cmp %edi,0x1C(%ebp);");
    asm("loc_6C095C9: jne loc_6C098B7;");
    asm("loc_6C095CF: mov 0x18(%ebp),%eax;");
    asm("loc_6C095D2: mov (%eax),%cl;");
    asm("loc_6C095D4: xor %edx,%edx;");
    asm("loc_6C095D6: mov %cl,%dl;");
    asm("loc_6C095D8: inc %eax;");
    asm("loc_6C095D9: mov %eax,0x18(%ebp);");
    asm("loc_6C095DC: push %edx;");
    asm("loc_6C095DD: call _sub_6BED7F0;");
    asm("loc_6C095E2: mov %eax,%esi;");
    asm("loc_6C095E4: add $4,%esp;");
    asm("loc_6C095E7: cmp %edi,%esi;");
    asm("loc_6C095E9: je loc_6C09623;");
    asm("loc_6C095EB: xor %eax,%eax;");
    asm("loc_6C095ED: or $0xFFFFFFFF,%ecx;");
    asm("loc_6C095F0: mov %esi,%edi;");
    asm("loc_6C095F2: repne scas (%edi),%al;");
    asm("loc_6C095F4: not %ecx;");
    asm("loc_6C095F6: mov %ecx,%eax;");
    asm("loc_6C095F8: mov %ax,0x10(%ebx);");
    asm("loc_6C095FC: movzwl %ax,%eax;");
    asm("loc_6C095FF: push %eax;");
    asm("loc_6C09600: call _sub_6C09D26;");
    asm("loc_6C09605: add $4,%esp;");
    asm("loc_6C09608: mov %eax,0x14(%ebx);");
    asm("loc_6C0960B: mov %eax,%ecx;");
    asm("loc_6C0960D: lea (%ecx),%ecx;");
    asm("loc_6C09610: mov (%esi),%al;");
    asm("loc_6C09612: inc %esi;");
    asm("loc_6C09613: mov %al,(%ecx);");
    asm("loc_6C09615: inc %ecx;");
    asm("loc_6C09616: test %al,%al;");
    asm("loc_6C09618: jne loc_6C09610;");
    asm("loc_6C0961A: jmp loc_6C09623;");
    asm("loc_6C0961C: mov %di,0x10(%ebx);");
    asm("loc_6C09620: mov %edi,0x14(%ebx);");
    asm("loc_6C09623: push %ebx;");
    asm("loc_6C09624: lea 0x70(%ebp),%ecx;");
    asm("loc_6C09627: call _sub_6BDCB60;");
    asm("loc_6C0962C: xor %edi,%edi;");
    asm("loc_6C0962E: mov $2,%esi;");
    asm("loc_6C09633: mov 0x14(%esp),%eax;");
    asm("loc_6C09637: inc %eax;");
    asm("loc_6C09638: cmp 0x24(%esp),%ax;");
    asm("loc_6C0963D: mov %eax,0x14(%esp);");
    asm("loc_6C09641: jb loc_6C09341;");
    asm("loc_6C09647: mov 0x10(%ebp),%edx;");
    asm("loc_6C0964A: mov 0x14(%ebp),%ecx;");
    asm("loc_6C0964D: inc %edx;");
    asm("loc_6C0964E: mov %edx,%eax;");
    asm("loc_6C09650: cmp %ecx,%eax;");
    asm("loc_6C09652: mov %edx,0x10(%ebp);");
    asm("loc_6C09655: jbe loc_6C0965E;");
    asm("loc_6C09657: movl $0x17,0x1C(%ebp);");
    asm("loc_6C0965E: mov 0x1C(%ebp),%eax;");
    asm("loc_6C09661: test %eax,%eax;");
    asm("loc_6C09663: jne loc_6C098AD;");
    asm("loc_6C09669: mov 0x18(%ebp),%eax;");
    asm("loc_6C0966C: mov (%eax),%cl;");
    asm("loc_6C0966E: inc %eax;");
    asm("loc_6C0966F: mov %eax,0x18(%ebp);");
    asm("loc_6C09672: xor %eax,%eax;");
    asm("loc_6C09674: mov %cl,%al;");
    asm("loc_6C09676: xor %ebx,%ebx;");
    asm("loc_6C09678: test %eax,%eax;");
    asm("loc_6C0967A: mov %eax,0x20(%esp);");
    asm("loc_6C0967E: jbe loc_6C0974C;");
    asm("loc_6C09684: mov 0x78(%ebp),%esi;");
    asm("loc_6C09687: mov 4(%esi),%edi;");
    asm("loc_6C0968A: push $0x10;");
    asm("loc_6C0968C: call _sub_6C09D26;");
    asm("loc_6C09691: add $4,%esp;");
    asm("loc_6C09694: test %edi,%edi;");
    asm("loc_6C09696: mov %esi,(%eax);");
    asm("loc_6C09698: jne loc_6C0969C;");
    asm("loc_6C0969A: mov %eax,%edi;");
    asm("loc_6C0969C: mov %edi,4(%eax);");
    asm("loc_6C0969F: mov %eax,4(%esi);");
    asm("loc_6C096A2: mov 4(%eax),%ecx;");
    asm("loc_6C096A5: lea 0x14(%esp),%edx;");
    asm("loc_6C096A9: mov %eax,(%ecx);");
    asm("loc_6C096AB: push %edx;");
    asm("loc_6C096AC: add $8,%eax;");
    asm("loc_6C096AF: push %eax;");
    asm("loc_6C096B0: call _sub_6BD59E0;");
    asm("loc_6C096B5: mov 0x7C(%ebp),%esi;");
    asm("loc_6C096B8: add $8,%esp;");
    asm("loc_6C096BB: inc %esi;");
    asm("loc_6C096BC: mov %esi,0x7C(%ebp);");
    asm("loc_6C096BF: mov 0x10(%ebp),%edx;");
    asm("loc_6C096C2: mov 0x14(%ebp),%ecx;");
    asm("loc_6C096C5: inc %edx;");
    asm("loc_6C096C6: mov %edx,%eax;");
    asm("loc_6C096C8: cmp %ecx,%eax;");
    asm("loc_6C096CA: mov %edx,0x10(%ebp);");
    asm("loc_6C096CD: jbe loc_6C096D6;");
    asm("loc_6C096CF: movl $0x17,0x1C(%ebp);");
    asm("loc_6C096D6: mov 0x1C(%ebp),%eax;");
    asm("loc_6C096D9: test %eax,%eax;");
    asm("loc_6C096DB: jne loc_6C098B7;");
    asm("loc_6C096E1: mov 0x18(%ebp),%eax;");
    asm("loc_6C096E4: mov (%eax),%cl;");
    asm("loc_6C096E6: inc %eax;");
    asm("loc_6C096E7: mov %eax,0x18(%ebp);");
    asm("loc_6C096EA: xor %ax,%ax;");
    asm("loc_6C096ED: mov %cl,%al;");
    asm("loc_6C096EF: mov 0x78(%ebp),%ecx;");
    asm("loc_6C096F2: mov 4(%ecx),%edx;");
    asm("loc_6C096F5: mov %ax,8(%edx);");
    asm("loc_6C096F9: mov 0x10(%ebp),%edx;");
    asm("loc_6C096FC: mov 0x14(%ebp),%ecx;");
    asm("loc_6C096FF: inc %edx;");
    asm("loc_6C09700: mov %edx,%eax;");
    asm("loc_6C09702: cmp %ecx,%eax;");
    asm("loc_6C09704: mov %edx,0x10(%ebp);");
    asm("loc_6C09707: jbe loc_6C09710;");
    asm("loc_6C09709: movl $0x17,0x1C(%ebp);");
    asm("loc_6C09710: mov 0x1C(%ebp),%eax;");
    asm("loc_6C09713: test %eax,%eax;");
    asm("loc_6C09715: jne loc_6C098B7;");
    asm("loc_6C0971B: mov 0x18(%ebp),%eax;");
    asm("loc_6C0971E: mov (%eax),%cl;");
    asm("loc_6C09720: inc %eax;");
    asm("loc_6C09721: mov %eax,0x18(%ebp);");
    asm("loc_6C09724: xor %eax,%eax;");
    asm("loc_6C09726: mov %cl,%al;");
    asm("loc_6C09728: mov 0x78(%ebp),%ecx;");
    asm("loc_6C0972B: mov 4(%ecx),%edx;");
    asm("loc_6C0972E: inc %ebx;");
    asm("loc_6C0972F: mov %eax,0x24(%esp);");
    asm("loc_6C09733: fildl 0x24(%esp);");
    asm("loc_6C09737: mov 0x20(%esp),%eax;");
    asm("loc_6C0973B: cmp %eax,%ebx;");
    asm("loc_6C0973D: fmull _data_6C0E660;");
    asm("loc_6C09743: fstps 0xC(%edx);");
    asm("loc_6C09746: jb loc_6C09684;");
    asm("loc_6C0974C: calll *_import_6C0B080;");
    asm("loc_6C09752: test %al,%al;");
    asm("loc_6C09754: je loc_6C098AB;");
    asm("loc_6C0975A: mov 0x10(%ebp),%edx;");
    asm("loc_6C0975D: mov 0x14(%ebp),%ecx;");
    asm("loc_6C09760: add $4,%edx;");
    asm("loc_6C09763: mov %edx,%eax;");
    asm("loc_6C09765: cmp %ecx,%eax;");
    asm("loc_6C09767: mov %edx,0x10(%ebp);");
    asm("loc_6C0976A: jbe loc_6C09773;");
    asm("loc_6C0976C: movl $0x17,0x1C(%ebp);");
    asm("loc_6C09773: mov 0x1C(%ebp),%eax;");
    asm("loc_6C09776: xor %ebx,%ebx;");
    asm("loc_6C09778: cmp %ebx,%eax;");
    asm("loc_6C0977A: jne loc_6C098AD;");
    asm("loc_6C09780: mov 0x18(%ebp),%eax;");
    asm("loc_6C09783: mov (%eax),%ecx;");
    asm("loc_6C09785: add $4,%eax;");
    asm("loc_6C09788: cmp %ebx,%ecx;");
    asm("loc_6C0978A: mov %ecx,0x24(%esp);");
    asm("loc_6C0978E: mov %eax,0x18(%ebp);");
    asm("loc_6C09791: jbe loc_6C098AB;");
    asm("loc_6C09797: movl $0xBF800000,0x18(%esp);");
    asm("loc_6C0979F: mov %ebx,0x1C(%esp);");
    asm("loc_6C097A3: mov _import_6C0B014,%eax;");
    asm("loc_6C097A8: mov (%eax),%cx;");
    asm("loc_6C097AB: mov 0x84(%ebp),%esi;");
    asm("loc_6C097B1: mov 4(%esi),%edi;");
    asm("loc_6C097B4: push $0x14;");
    asm("loc_6C097B6: mov %cx,0x18(%esp);");
    asm("loc_6C097BB: call _sub_6C09D26;");
    asm("loc_6C097C0: add $4,%esp;");
    asm("loc_6C097C3: test %edi,%edi;");
    asm("loc_6C097C5: mov %esi,(%eax);");
    asm("loc_6C097C7: jne loc_6C097CB;");
    asm("loc_6C097C9: mov %eax,%edi;");
    asm("loc_6C097CB: mov %edi,4(%eax);");
    asm("loc_6C097CE: mov %eax,4(%esi);");
    asm("loc_6C097D1: mov 4(%eax),%edx;");
    asm("loc_6C097D4: mov %eax,(%edx);");
    asm("loc_6C097D6: add $8,%eax;");
    asm("loc_6C097D9: test %eax,%eax;");
    asm("loc_6C097DB: je loc_6C097F1;");
    asm("loc_6C097DD: mov 0x14(%esp),%ecx;");
    asm("loc_6C097E1: mov 0x18(%esp),%edx;");
    asm("loc_6C097E5: mov %ecx,(%eax);");
    asm("loc_6C097E7: mov 0x1C(%esp),%ecx;");
    asm("loc_6C097EB: mov %edx,4(%eax);");
    asm("loc_6C097EE: mov %ecx,8(%eax);");
    asm("loc_6C097F1: incl 0x88(%ebp);");
    asm("loc_6C097F7: mov 0x10(%ebp),%edx;");
    asm("loc_6C097FA: mov 0x14(%ebp),%ecx;");
    asm("loc_6C097FD: add $2,%edx;");
    asm("loc_6C09800: mov %edx,%eax;");
    asm("loc_6C09802: cmp %ecx,%eax;");
    asm("loc_6C09804: mov %edx,0x10(%ebp);");
    asm("loc_6C09807: mov $0x17,%edx;");
    asm("loc_6C0980C: jbe loc_6C09811;");
    asm("loc_6C0980E: mov %edx,0x1C(%ebp);");
    asm("loc_6C09811: mov 0x1C(%ebp),%eax;");
    asm("loc_6C09814: test %eax,%eax;");
    asm("loc_6C09816: jne loc_6C098B7;");
    asm("loc_6C0981C: mov 0x18(%ebp),%eax;");
    asm("loc_6C0981F: mov (%eax),%si;");
    asm("loc_6C09822: mov 0x84(%ebp),%ecx;");
    asm("loc_6C09828: mov 4(%ecx),%ecx;");
    asm("loc_6C0982B: mov %si,8(%ecx);");
    asm("loc_6C0982F: add $2,%eax;");
    asm("loc_6C09832: mov %eax,0x18(%ebp);");
    asm("loc_6C09835: mov 0x10(%ebp),%edi;");
    asm("loc_6C09838: mov 0x14(%ebp),%esi;");
    asm("loc_6C0983B: mov $4,%ecx;");
    asm("loc_6C09840: add %ecx,%edi;");
    asm("loc_6C09842: mov %edi,%eax;");
    asm("loc_6C09844: cmp %esi,%eax;");
    asm("loc_6C09846: mov %edi,0x10(%ebp);");
    asm("loc_6C09849: jbe loc_6C0984E;");
    asm("loc_6C0984B: mov %edx,0x1C(%ebp);");
    asm("loc_6C0984E: mov 0x1C(%ebp),%eax;");
    asm("loc_6C09851: test %eax,%eax;");
    asm("loc_6C09853: jne loc_6C098B7;");
    asm("loc_6C09855: mov 0x18(%ebp),%eax;");
    asm("loc_6C09858: mov 0x84(%ebp),%esi;");
    asm("loc_6C0985E: mov 4(%esi),%esi;");
    asm("loc_6C09861: mov (%eax),%edi;");
    asm("loc_6C09863: mov %edi,0x10(%esi);");
    asm("loc_6C09866: add $4,%eax;");
    asm("loc_6C09869: mov %eax,0x18(%ebp);");
    asm("loc_6C0986C: mov 0x10(%ebp),%esi;");
    asm("loc_6C0986F: add %ecx,%esi;");
    asm("loc_6C09871: mov 0x14(%ebp),%ecx;");
    asm("loc_6C09874: mov %esi,%eax;");
    asm("loc_6C09876: cmp %ecx,%eax;");
    asm("loc_6C09878: mov %esi,0x10(%ebp);");
    asm("loc_6C0987B: jbe loc_6C09880;");
    asm("loc_6C0987D: mov %edx,0x1C(%ebp);");
    asm("loc_6C09880: mov 0x1C(%ebp),%eax;");
    asm("loc_6C09883: test %eax,%eax;");
    asm("loc_6C09885: jne loc_6C098B7;");
    asm("loc_6C09887: mov 0x18(%ebp),%eax;");
    asm("loc_6C0988A: mov 0x84(%ebp),%edx;");
    asm("loc_6C09890: mov 4(%edx),%ecx;");
    asm("loc_6C09893: mov (%eax),%edx;");
    asm("loc_6C09895: add $4,%eax;");
    asm("loc_6C09898: mov %edx,0xC(%ecx);");
    asm("loc_6C0989B: mov %eax,0x18(%ebp);");
    asm("loc_6C0989E: mov 0x24(%esp),%eax;");
    asm("loc_6C098A2: inc %ebx;");
    asm("loc_6C098A3: cmp %eax,%ebx;");
    asm("loc_6C098A5: jb loc_6C097A3;");
    asm("loc_6C098AB: xor %eax,%eax;");
    asm("loc_6C098AD: pop %edi;");
    asm("loc_6C098AE: pop %esi;");
    asm("loc_6C098AF: pop %ebp;");
    asm("loc_6C098B0: pop %ebx;");
    asm("loc_6C098B1: add $0x18,%esp;");
    asm("loc_6C098B4: ret $0xC;");
    asm("loc_6C098B7: mov 0x1C(%ebp),%eax;");
    asm("loc_6C098BA: pop %edi;");
    asm("loc_6C098BB: pop %esi;");
    asm("loc_6C098BC: pop %ebp;");
    asm("loc_6C098BD: pop %ebx;");
    asm("loc_6C098BE: add $0x18,%esp;");
    asm("loc_6C098C1: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C098D0() // _sub_6C098D0
{
    __DEBUG_ASM(6C098D0);
    // chunk 0x6C098D0 _sub_6C098D0
    asm("loc_6C098D0: mov _data_6C0E654,%eax;");
    asm("loc_6C098D5: mov %eax,_data_6C14318;");
    asm("loc_6C098DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C098E0() // _sub_6C098E0
{
    __DEBUG_ASM(6C098E0);
    // chunk 0x6C098E0 _sub_6C098E0
    asm("loc_6C098E0: mov _data_6C0E654,%eax;");
    asm("loc_6C098E5: mov %eax,_data_6C1431C;");
    asm("loc_6C098EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C098F0() // _sub_6C098F0
{
    __DEBUG_ASM(6C098F0);
    // chunk 0x6C098F0 _sub_6C098F0
    asm("loc_6C098F0: mov _data_6C0E658,%eax;");
    asm("loc_6C098F5: mov %eax,_data_6C14314;");
    asm("loc_6C098FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09900() // ??1CDPMsgList@@UAE@XZ
{
    __DEBUG_ASM(6C09900);
    // chunk 0x6C09900 _sub_6C09900
    asm("loc_6C09900: jmpl *_import_6C0B118;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09906() // ??1CDPClient@@UAE@XZ
{
    __DEBUG_ASM(6C09906);
    // chunk 0x6C09906 _sub_6C09906
    asm("loc_6C09906: jmpl *_import_6C0B114;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0990C() // ??0CDPClient@@QAE@XZ
{
    __DEBUG_ASM(6C0990C);
    // chunk 0x6C0990C _sub_6C0990C
    asm("loc_6C0990C: jmpl *_import_6C0B11C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09912() // ?Send@CDPClient@@QAE_NPAEK@Z
{
    __DEBUG_ASM(6C09912);
    // chunk 0x6C09912 _sub_6C09912
    asm("loc_6C09912: jmpl *_import_6C0B108;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09918() // ?ProcessConnectAttempt@CDPClient@@QAE_NXZ
{
    __DEBUG_ASM(6C09918);
    // chunk 0x6C09918 _sub_6C09918
    asm("loc_6C09918: jmpl *_import_6C0B110;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0991E() // ?AddConnectAttempt@CDPClient@@QAE_NPBGPAG@Z
{
    __DEBUG_ASM(6C0991E);
    // chunk 0x6C0991E _sub_6C0991E
    asm("loc_6C0991E: jmpl *_import_6C0B10C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09924() // ?SetGUID@CDPClient@@QAEXAAU_GUID@@@Z
{
    __DEBUG_ASM(6C09924);
    // chunk 0x6C09924 _sub_6C09924
    asm("loc_6C09924: jmpl *_import_6C0B100;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0992A() // ?DispatchMsgs@CDPClient@@QAEXK@Z
{
    __DEBUG_ASM(6C0992A);
    // chunk 0x6C0992A _sub_6C0992A
    asm("loc_6C0992A: jmpl *_import_6C0B104;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09930() // _HandleConnectError
{
    __DEBUG_ASM(6C09930);
    // chunk 0x6C09930 _sub_6C09930
    asm("loc_6C09930: jmpl *_import_6C0B124;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09936() // ?unflatten@FmtStr@@QAEHPAXI@Z
{
    __DEBUG_ASM(6C09936);
    // chunk 0x6C09936 _sub_6C09936
    asm("loc_6C09936: jmpl *_import_6C0B02C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0993C() // ?CleanUp@CostumeHint@@UAEXPAE@Z
{
    __DEBUG_ASM(6C0993C);
    // chunk 0x6C0993C _sub_6C0993C
    asm("loc_6C0993C: jmpl *_import_6C0B030;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09942() // ?UnSerialize@CostumeHint@@UAEXPAEI@Z
{
    __DEBUG_ASM(6C09942);
    // chunk 0x6C09942 _sub_6C09942
    asm("loc_6C09942: jmpl *_import_6C0B034;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09948() // ?Serialize@CostumeHint@@UAEIPAPAE@Z
{
    __DEBUG_ASM(6C09948);
    // chunk 0x6C09948 _sub_6C09948
    asm("loc_6C09948: jmpl *_import_6C0B038;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0994E() // ??1?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE@XZ
{
    __DEBUG_ASM(6C0994E);
    // chunk 0x6C0994E _sub_6C0994E
    asm("loc_6C0994E: jmpl *_import_6C0B03C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09954() // ??1DamageList@@QAE@XZ
{
    __DEBUG_ASM(6C09954);
    // chunk 0x6C09954 _sub_6C09954
    asm("loc_6C09954: jmpl *_import_6C0B040;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0995A() // ??1EquipDescVector@@QAE@XZ
{
    __DEBUG_ASM(6C0995A);
    // chunk 0x6C0995A _sub_6C0995A
    asm("loc_6C0995A: jmpl *_import_6C0B044;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09960() // ??1?$vector@GV?$allocator@G@std@@@std@@QAE@XZ
{
    __DEBUG_ASM(6C09960);
    // chunk 0x6C09960 _sub_6C09960
    asm("loc_6C09960: jmpl *_import_6C0B048;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09966() // ?_Ucopy@?$vector@GV?$allocator@G@std@@@std@@IAEPAGPBG0PAG@Z
{
    __DEBUG_ASM(6C09966);
    // chunk 0x6C09966 _sub_6C09966
    asm("loc_6C09966: jmpl *_import_6C0B04C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0996C() // ?capacity@?$vector@GV?$allocator@G@std@@@std@@QBEIXZ
{
    __DEBUG_ASM(6C0996C);
    // chunk 0x6C0996C _sub_6C0996C
    asm("loc_6C0996C: jmpl *_import_6C0B050;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09972() // ?size@?$vector@GV?$allocator@G@std@@@std@@QBEIXZ
{
    __DEBUG_ASM(6C09972);
    // chunk 0x6C09972 _sub_6C09972
    asm("loc_6C09972: jmpl *_import_6C0B054;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09978() // ?_Destroy@?$vector@GV?$allocator@G@std@@@std@@IAEXPAG0@Z
{
    __DEBUG_ASM(6C09978);
    // chunk 0x6C09978 _sub_6C09978
    asm("loc_6C09978: jmpl *_import_6C0B058;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0997E() // ??0?$vector@GV?$allocator@G@std@@@std@@QAE@ABV?$allocator@G@1@@Z
{
    __DEBUG_ASM(6C0997E);
    // chunk 0x6C0997E _sub_6C0997E
    asm("loc_6C0997E: jmpl *_import_6C0B05C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09984() // ?clear@?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAEXXZ
{
    __DEBUG_ASM(6C09984);
    // chunk 0x6C09984 _sub_6C09984
    asm("loc_6C09984: jmpl *_import_6C0B060;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0998A() // ?erase@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE?AViterator@12@V312@0@Z
{
    __DEBUG_ASM(6C0998A);
    // chunk 0x6C0998A _sub_6C0998A
    asm("loc_6C0998A: jmpl *_import_6C0B064;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09990() // ?begin@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE?AViterator@12@XZ
{
    __DEBUG_ASM(6C09990);
    // chunk 0x6C09990 _sub_6C09990
    asm("loc_6C09990: jmpl *_import_6C0B068;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09996() // ?erase@?$vector@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@QAEPAUEquipDesc@@PAU3@0@Z
{
    __DEBUG_ASM(6C09996);
    // chunk 0x6C09996 _sub_6C09996
    asm("loc_6C09996: jmpl *_import_6C0B06C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0999C() // ?SetAttitudeTowardsPlayer@Vibe@Reputation@@YAHHM@Z
{
    __DEBUG_ASM(6C0999C);
    // chunk 0x6C0999C _sub_6C0999C
    asm("loc_6C0999C: jmpl *_import_6C0B070;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099A2() // ?SetAffiliation@Vibe@Reputation@@YAHABHI_N@Z
{
    __DEBUG_ASM(6C099A2);
    // chunk 0x6C099A2 _sub_6C099A2
    asm("loc_6C099A2: jmpl *_import_6C0B074;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099A8() // ?SetName@Vibe@Reputation@@YAHABHABUFmtStr@@1PBG@Z
{
    __DEBUG_ASM(6C099A8);
    // chunk 0x6C099A8 _sub_6C099A8
    asm("loc_6C099A8: jmpl *_import_6C0B078;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099AE() // ?EnsureExists@Vibe@Reputation@@YAHABH@Z
{
    __DEBUG_ASM(6C099AE);
    // chunk 0x6C099AE _sub_6C099AE
    asm("loc_6C099AE: jmpl *_import_6C0B07C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099B4() // ?SinglePlayer@@YA_NXZ
{
    __DEBUG_ASM(6C099B4);
    // chunk 0x6C099B4 _sub_6C099B4
    asm("loc_6C099B4: jmpl *_import_6C0B080;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099BA() // ?erase@?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAE?AViterator@12@V312@0@Z
{
    __DEBUG_ASM(6C099BA);
    // chunk 0x6C099BA _sub_6C099BA
    asm("loc_6C099BA: jmpl *_import_6C0B084;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099C0() // ?begin@?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAE?AViterator@12@XZ
{
    __DEBUG_ASM(6C099C0);
    // chunk 0x6C099C0 _sub_6C099C0
    asm("loc_6C099C0: jmpl *_import_6C0B088;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099C6() // ??0?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAE@ABV?$allocator@UDamageEntry@@@1@@Z
{
    __DEBUG_ASM(6C099C6);
    // chunk 0x6C099C6 _sub_6C099C6
    asm("loc_6C099C6: jmpl *_import_6C0B008;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099CC() // ??0CostumeHint@@QAE@XZ
{
    __DEBUG_ASM(6C099CC);
    // chunk 0x6C099CC _sub_6C099CC
    asm("loc_6C099CC: jmpl *_import_6C0B010;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099D2() // ?make_internal@EquipDesc@@QAEXXZ
{
    __DEBUG_ASM(6C099D2);
    // chunk 0x6C099D2 _sub_6C099D2
    asm("loc_6C099D2: jmpl *_import_6C0B094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099D8() // ?set_hardpoint@EquipDesc@@QAEXABUCacheString@@@Z
{
    __DEBUG_ASM(6C099D8);
    // chunk 0x6C099D8 _sub_6C099D8
    asm("loc_6C099D8: jmpl *_import_6C0B098;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099DE() // ?StringAlloc@@YAPADPBD_N@Z
{
    __DEBUG_ASM(6C099DE);
    // chunk 0x6C099DE _sub_6C099DE
    asm("loc_6C099DE: jmpl *_import_6C0B09C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099E4() // ?set_equipped@EquipDesc@@QAEX_N@Z
{
    __DEBUG_ASM(6C099E4);
    // chunk 0x6C099E4 _sub_6C099E4
    asm("loc_6C099E4: jmpl *_import_6C0B0A0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099EA() // ?set_status@EquipDesc@@QAEXM@Z
{
    __DEBUG_ASM(6C099EA);
    // chunk 0x6C099EA _sub_6C099EA
    asm("loc_6C099EA: jmpl *_import_6C0B0A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099F0() // ?set_count@EquipDesc@@QAEXH@Z
{
    __DEBUG_ASM(6C099F0);
    // chunk 0x6C099F0 _sub_6C099F0
    asm("loc_6C099F0: jmpl *_import_6C0B0A8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099F6() // ?set_id@EquipDesc@@QAEXG@Z
{
    __DEBUG_ASM(6C099F6);
    // chunk 0x6C099F6 _sub_6C099F6
    asm("loc_6C099F6: jmpl *_import_6C0B0AC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C099FC() // ?set_arch_id@EquipDesc@@QAEXI@Z
{
    __DEBUG_ASM(6C099FC);
    // chunk 0x6C099FC _sub_6C099FC
    asm("loc_6C099FC: jmpl *_import_6C0B0B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A02() // ??0EquipDesc@@QAE@XZ
{
    __DEBUG_ASM(6C09A02);
    // chunk 0x6C09A02 _sub_6C09A02
    asm("loc_6C09A02: jmpl *_import_6C0B0B4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A08() // ?_Destroy@?$vector@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@IAEXPAUEquipDesc@@0@Z
{
    __DEBUG_ASM(6C09A08);
    // chunk 0x6C09A08 _sub_6C09A08
    asm("loc_6C09A08: jmpl *_import_6C0B0B8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A0E() // ??1FmtStr@@QAE@XZ_1
{
    __DEBUG_ASM(6C09A0E);
    // chunk 0x6C09A0E _sub_6C09A0E
    asm("loc_6C09A0E: jmpl *_import_6C0B0BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A14() // ??1CostumeHint@@UAE@XZ
{
    __DEBUG_ASM(6C09A14);
    // chunk 0x6C09A14 _sub_6C09A14
    asm("loc_6C09A14: jmpl *_import_6C0B0C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A1A() // ?erase@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE?AViterator@12@V312@@Z
{
    __DEBUG_ASM(6C09A1A);
    // chunk 0x6C09A1A _sub_6C09A1A
    asm("loc_6C09A1A: jmpl *_import_6C0B0C4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A20() // ?erase@?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAE?AViterator@12@V312@@Z
{
    __DEBUG_ASM(6C09A20);
    // chunk 0x6C09A20 _sub_6C09A20
    asm("loc_6C09A20: jmpl *_import_6C0B0C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A26() // ??1EquipDescList@@QAE@XZ
{
    __DEBUG_ASM(6C09A26);
    // chunk 0x6C09A26 _sub_6C09A26
    asm("loc_6C09A26: jmpl *_import_6C0B0CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A2C() // ?insert@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAEXViterator@12@Vconst_iterator@12@1@Z
{
    __DEBUG_ASM(6C09A2C);
    // chunk 0x6C09A2C _sub_6C09A2C
    asm("loc_6C09A2C: jmpl *_import_6C0B0D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A32() // ?_Buynode@?$list@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@IAEPAU_Node@12@PAU312@0@Z
{
    __DEBUG_ASM(6C09A32);
    // chunk 0x6C09A32 _sub_6C09A32
    asm("loc_6C09A32: jmpl *_import_6C0B0D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A38() // ??4CHARACTER_ID@@QAEABU0@ABU0@@Z
{
    __DEBUG_ASM(6C09A38);
    // chunk 0x6C09A38 _sub_6C09A38
    asm("loc_6C09A38: jmpl *_import_6C0B0D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A3E() // ??0?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE@ABV?$allocator@UCollisionGroupDesc@@@1@@Z
{
    __DEBUG_ASM(6C09A3E);
    // chunk 0x6C09A3E _sub_6C09A3E
    asm("loc_6C09A3E: jmpl *_import_6C0B0DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A44() // ??0EquipDescList@@QAE@XZ
{
    __DEBUG_ASM(6C09A44);
    // chunk 0x6C09A44 _sub_6C09A44
    asm("loc_6C09A44: jmpl *_import_6C0B0E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A4A() // ??1?$list@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@QAE@XZ
{
    __DEBUG_ASM(6C09A4A);
    // chunk 0x6C09A4A _sub_6C09A4A
    asm("loc_6C09A4A: jmpl *_import_6C0B0E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A50() // ?insert@?$vector@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@QAEXPAUEquipDesc@@IABU3@@Z
{
    __DEBUG_ASM(6C09A50);
    // chunk 0x6C09A50 _sub_6C09A50
    asm("loc_6C09A50: jmpl *_import_6C0B0E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A56() // ?size@?$vector@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@QBEIXZ
{
    __DEBUG_ASM(6C09A56);
    // chunk 0x6C09A56 _sub_6C09A56
    asm("loc_6C09A56: jmpl *_import_6C0B0EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A5C() // ?_Ucopy@?$vector@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@IAEPAUEquipDesc@@PBU3@0PAU3@@Z
{
    __DEBUG_ASM(6C09A5C);
    // chunk 0x6C09A5C _sub_6C09A5C
    asm("loc_6C09A5C: jmpl *_import_6C0B0F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A62() // ?insert@?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAEXViterator@12@Vconst_iterator@12@1@Z
{
    __DEBUG_ASM(6C09A62);
    // chunk 0x6C09A62 _sub_6C09A62
    asm("loc_6C09A62: jmpl *_import_6C0B0F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A68() // ?_Buynode@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@IAEPAU_Node@12@PAU312@0@Z
{
    __DEBUG_ASM(6C09A68);
    // chunk 0x6C09A68 _sub_6C09A68
    asm("loc_6C09A68: jmpl *_import_6C0B0F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A6E() // ?erase@?$list@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@QAE?AViterator@12@V312@@Z
{
    __DEBUG_ASM(6C09A6E);
    // chunk 0x6C09A6E _sub_6C09A6E
    asm("loc_6C09A6E: jmpl *_import_6C0B08C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A74() // ?is_internal@EquipDesc@@QBE_NXZ
{
    __DEBUG_ASM(6C09A74);
    // chunk 0x6C09A74 _sub_6C09A74
    asm("loc_6C09A74: jmpl *_import_6C0B020;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A7A() // ?WaitForClientRunPermission@@YAXXZ
{
    __DEBUG_ASM(6C09A7A);
    // chunk 0x6C09A7A _sub_6C09A7A
    asm("loc_6C09A7A: jmpl *_import_6C0B090;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A80() // ?GiveServerRunPermission@@YAXXZ
{
    __DEBUG_ASM(6C09A80);
    // chunk 0x6C09A80 _sub_6C09A80
    asm("loc_6C09A80: jmpl *_import_6C0B018;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A86() // ?IsMPServer@@YA_NXZ
{
    __DEBUG_ASM(6C09A86);
    // chunk 0x6C09A86 _sub_6C09A86
    asm("loc_6C09A86: jmpl *_import_6C0B01C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A8C() // ?LargeIDToSmallID@Archetype@@YAGI@Z
{
    __DEBUG_ASM(6C09A8C);
    // chunk 0x6C09A8C _sub_6C09A8C
    asm("loc_6C09A8C: jmpl *_import_6C0B00C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A92() // ?SmallIDToLargeID@Archetype@@YAIG@Z
{
    __DEBUG_ASM(6C09A92);
    // chunk 0x6C09A92 _sub_6C09A92
    asm("loc_6C09A92: jmpl *_import_6C0B000;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A98() // ??0DamageList@@QAE@XZ
{
    __DEBUG_ASM(6C09A98);
    // chunk 0x6C09A98 _sub_6C09A98
    asm("loc_6C09A98: jmpl *_import_6C0B004;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09A9E() // ?insert@?$vector@GV?$allocator@G@std@@@std@@QAEXPAGIABG@Z
{
    __DEBUG_ASM(6C09A9E);
    // chunk 0x6C09A9E _sub_6C09A9E
    asm("loc_6C09A9E: jmpl *_import_6C0B028;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09AA4() // ?GetArchMaxHitPts@Archetype@@YAHI@Z
{
    __DEBUG_ASM(6C09AA4);
    // chunk 0x6C09AA4 _sub_6C09AA4
    asm("loc_6C09AA4: jmpl *_import_6C0B024;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09AAA() // _sub_6C09AAA
{
    __DEBUG_ASM(6C09AAA);
    // chunk 0x6C09AAA _sub_6C09AAA
    asm("loc_6C09AAA: pushl 4(%esp);");
    asm("loc_6C09AAE: call _sub_6C09D70;");
    asm("loc_6C09AB3: pop %ecx;");
    asm("loc_6C09AB4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09AB6() // ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAE@XZ
{
    __DEBUG_ASM(6C09AB6);
    // chunk 0x6C09AB6 _sub_6C09AB6
    asm("loc_6C09AB6: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09ABC() // ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAEAAV12@ABV12@II@Z
{
    __DEBUG_ASM(6C09ABC);
    // chunk 0x6C09ABC _sub_6C09ABC
    asm("loc_6C09ABC: jmpl *_import_6C0B1BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09AC2() // ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAE@ABV?$allocator@G@1@@Z
{
    __DEBUG_ASM(6C09AC2);
    // chunk 0x6C09AC2 _sub_6C09AC2
    asm("loc_6C09AC2: jmpl *_import_6C0B1B4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09AC8() // ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEX_N@Z
{
    __DEBUG_ASM(6C09AC8);
    // chunk 0x6C09AC8 _sub_6C09AC8
    asm("loc_6C09AC8: jmpl *_import_6C0B1AC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09ACE() // ?_Eos@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEXI@Z
{
    __DEBUG_ASM(6C09ACE);
    // chunk 0x6C09ACE _sub_6C09ACE
    asm("loc_6C09ACE: jmpl *_import_6C0B1A8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09AD4() // ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAE_NI_N@Z
{
    __DEBUG_ASM(6C09AD4);
    // chunk 0x6C09AD4 _sub_6C09AD4
    asm("loc_6C09AD4: jmpl *_import_6C0B178;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09ADA() // ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAEAAV12@II@Z
{
    __DEBUG_ASM(6C09ADA);
    // chunk 0x6C09ADA _sub_6C09ADA
    asm("loc_6C09ADA: jmpl *_import_6C0B15C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09AE0() // ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@I@Z
{
    __DEBUG_ASM(6C09AE0);
    // chunk 0x6C09AE0 _sub_6C09AE0
    asm("loc_6C09AE0: jmpl *_import_6C0B170;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09AE6() // ??6std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z
{
    __DEBUG_ASM(6C09AE6);
    // chunk 0x6C09AE6 _sub_6C09AE6
    asm("loc_6C09AE6: jmpl *_import_6C0B154;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09AEC() // ?_Xlen@std@@YAXXZ
{
    __DEBUG_ASM(6C09AEC);
    // chunk 0x6C09AEC _sub_6C09AEC
    asm("loc_6C09AEC: jmpl *_import_6C0B158;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09AF2() // ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAE_NI_N@Z
{
    __DEBUG_ASM(6C09AF2);
    // chunk 0x6C09AF2 _sub_6C09AF2
    asm("loc_6C09AF2: jmpl *_import_6C0B174;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09AF8() // ?_Eos@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEXI@Z
{
    __DEBUG_ASM(6C09AF8);
    // chunk 0x6C09AF8 _sub_6C09AF8
    asm("loc_6C09AF8: jmpl *_import_6C0B164;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09AFE() // ?_Split@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEXXZ
{
    __DEBUG_ASM(6C09AFE);
    // chunk 0x6C09AFE _sub_6C09AFE
    asm("loc_6C09AFE: jmpl *_import_6C0B168;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B04() // ?_Xran@std@@YAXXZ
{
    __DEBUG_ASM(6C09B04);
    // chunk 0x6C09B04 _sub_6C09B04
    asm("loc_6C09B04: jmpl *_import_6C0B16C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B0A() // ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ
{
    __DEBUG_ASM(6C09B0A);
    // chunk 0x6C09B0A _sub_6C09B0A
    asm("loc_6C09B0A: jmpl *_import_6C0B1C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B10() // ??6std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z
{
    __DEBUG_ASM(6C09B10);
    // chunk 0x6C09B10 _sub_6C09B10
    asm("loc_6C09B10: jmpl *_import_6C0B1C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B16() // ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEX_N@Z
{
    __DEBUG_ASM(6C09B16);
    // chunk 0x6C09B16 _sub_6C09B16
    asm("loc_6C09B16: jmpl *_import_6C0B180;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B1C() // ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z
{
    __DEBUG_ASM(6C09B1C);
    // chunk 0x6C09B1C _sub_6C09B1C
    asm("loc_6C09B1C: jmpl *_import_6C0B184;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B22() // ??Mstd@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z
{
    __DEBUG_ASM(6C09B22);
    // chunk 0x6C09B22 _sub_6C09B22
    asm("loc_6C09B22: jmpl *_import_6C0B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B28() // ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV12@PBDI@Z
{
    __DEBUG_ASM(6C09B28);
    // chunk 0x6C09B28 _sub_6C09B28
    asm("loc_6C09B28: jmpl *_import_6C0B18C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B2E() // ??6std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@E@Z
{
    __DEBUG_ASM(6C09B2E);
    // chunk 0x6C09B2E _sub_6C09B2E
    asm("loc_6C09B2E: jmpl *_import_6C0B190;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B34() // ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@M@Z
{
    __DEBUG_ASM(6C09B34);
    // chunk 0x6C09B34 _sub_6C09B34
    asm("loc_6C09B34: jmpl *_import_6C0B194;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B3A() // ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@N@Z
{
    __DEBUG_ASM(6C09B3A);
    // chunk 0x6C09B3A _sub_6C09B3A
    asm("loc_6C09B3A: jmpl *_import_6C0B198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B40() // ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@H@Z
{
    __DEBUG_ASM(6C09B40);
    // chunk 0x6C09B40 _sub_6C09B40
    asm("loc_6C09B40: jmpl *_import_6C0B19C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B46() // ?_Split@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEXXZ
{
    __DEBUG_ASM(6C09B46);
    // chunk 0x6C09B46 _sub_6C09B46
    asm("loc_6C09B46: jmpl *_import_6C0B1A0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B4C() // ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@PBX@Z
{
    __DEBUG_ASM(6C09B4C);
    // chunk 0x6C09B4C _sub_6C09B4C
    asm("loc_6C09B4C: jmpl *_import_6C0B1A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B60() // _purecall
{
    __DEBUG_ASM(6C09B60);
    // chunk 0x6C09B60 _sub_6C09B60
    asm("loc_6C09B60: jmpl *_import_6C0B224;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09B66() // ??_M@YGXPAXIHP6EX0@Z@Z
{
    __DEBUG_ASM(6C09B66);
    // chunk 0x6C09B66 _sub_6C09B66
    asm("loc_6C09B66: push %ebp;");
    asm("loc_6C09B67: mov %esp,%ebp;");
    asm("loc_6C09B69: push $0xFFFFFFFF;");
    asm("loc_6C09B6B: push $_data_6C0E668;");
    asm("loc_6C09B70: push $_sub_6C09EF4;");
    asm("loc_6C09B75: mov %fs:0,%eax;");
    asm("loc_6C09B7B: push %eax;");
    asm("loc_6C09B7C: mov %esp,%fs:0;");
    asm("loc_6C09B83: sub $0xC,%esp;");
    asm("loc_6C09B86: push %ebx;");
    asm("loc_6C09B87: push %esi;");
    asm("loc_6C09B88: push %edi;");
    asm("loc_6C09B89: andl $0,-0x1C(%ebp);");
    asm("loc_6C09B8D: mov 0xC(%ebp),%esi;");
    asm("loc_6C09B90: mov %esi,%eax;");
    asm("loc_6C09B92: imul 0x10(%ebp),%eax;");
    asm("loc_6C09B96: add %eax,8(%ebp);");
    asm("loc_6C09B99: andl $0,-4(%ebp);");
    asm("loc_6C09B9D: decl 0x10(%ebp);");
    asm("loc_6C09BA0: js loc_6C09BAD;");
    asm("loc_6C09BA2: sub %esi,8(%ebp);");
    asm("loc_6C09BA5: mov 8(%ebp),%ecx;");
    asm("loc_6C09BA8: calll *0x14(%ebp);");
    asm("loc_6C09BAB: jmp loc_6C09B9D;");
    asm("loc_6C09BAD: movl $1,-0x1C(%ebp);");
    asm("loc_6C09BB4: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_6C09BB8: call loc_6C09BCE;");
    asm("loc_6C09BBD: mov -0x10(%ebp),%ecx;");
    asm("loc_6C09BC0: mov %ecx,%fs:0;");
    asm("loc_6C09BC7: pop %edi;");
    asm("loc_6C09BC8: pop %esi;");
    asm("loc_6C09BC9: pop %ebx;");
    asm("loc_6C09BCA: leave;");
    asm("loc_6C09BCB: ret $0x10;");
    asm("loc_6C09BCE: cmpl $0,-0x1C(%ebp);");
    asm("loc_6C09BD2: jne loc_6C09BE5;");
    asm("loc_6C09BD4: pushl 0x14(%ebp);");
    asm("loc_6C09BD7: pushl 0x10(%ebp);");
    asm("loc_6C09BDA: pushl 0xC(%ebp);");
    asm("loc_6C09BDD: pushl 8(%ebp);");
    asm("loc_6C09BE0: call _sub_6C09BE6;");
    asm("loc_6C09BE5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09BE6() // ?__ArrayUnwind@@YGXPAXIHP6EX0@Z@Z
{
    __DEBUG_ASM(6C09BE6);
    // chunk 0x6C09BE6 _sub_6C09BE6
    asm("loc_6C09BE6: push %ebp;");
    asm("loc_6C09BE7: mov %esp,%ebp;");
    asm("loc_6C09BE9: push $0xFFFFFFFF;");
    asm("loc_6C09BEB: push $_data_6C0E678;");
    asm("loc_6C09BF0: push $_sub_6C09EF4;");
    asm("loc_6C09BF5: mov %fs:0,%eax;");
    asm("loc_6C09BFB: push %eax;");
    asm("loc_6C09BFC: mov %esp,%fs:0;");
    asm("loc_6C09C03: push %ecx;");
    asm("loc_6C09C04: push %ecx;");
    asm("loc_6C09C05: push %ebx;");
    asm("loc_6C09C06: push %esi;");
    asm("loc_6C09C07: push %edi;");
    asm("loc_6C09C08: mov %esp,-0x18(%ebp);");
    asm("loc_6C09C0B: andl $0,-4(%ebp);");
    asm("loc_6C09C0F: decl 0x10(%ebp);");
    asm("loc_6C09C12: js loc_6C09C2F;");
    asm("loc_6C09C14: mov 8(%ebp),%ecx;");
    asm("loc_6C09C17: sub 0xC(%ebp),%ecx;");
    asm("loc_6C09C1A: mov %ecx,8(%ebp);");
    asm("loc_6C09C1D: calll *0x14(%ebp);");
    asm("loc_6C09C20: jmp loc_6C09C0F;");
    asm("loc_6C09C22: pushl -0x14(%ebp);");
    asm("loc_6C09C25: call _sub_6C09C44;");
    asm("loc_6C09C2A: pop %ecx;");
    asm("loc_6C09C2B: ret;");
    asm("loc_6C09C2C: mov -0x18(%ebp),%esp;");
    asm("loc_6C09C2F: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_6C09C33: mov -0x10(%ebp),%ecx;");
    asm("loc_6C09C36: mov %ecx,%fs:0;");
    asm("loc_6C09C3D: pop %edi;");
    asm("loc_6C09C3E: pop %esi;");
    asm("loc_6C09C3F: pop %ebx;");
    asm("loc_6C09C40: leave;");
    asm("loc_6C09C41: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09C44() // _unknown_libname_2
{
    __DEBUG_ASM(6C09C44);
    // chunk 0x6C09C44 _sub_6C09C44
    asm("loc_6C09C44: mov 4(%esp),%eax;");
    asm("loc_6C09C48: mov (%eax),%eax;");
    asm("loc_6C09C4A: cmpl $0xE06D7363,(%eax);");
    asm("loc_6C09C50: je loc_6C09C55;");
    asm("loc_6C09C52: xor %eax,%eax;");
    asm("loc_6C09C54: ret;");
    asm("loc_6C09C55: jmp _sub_6C09EFA;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09C5A() // ??_L@YGXPAXIHP6EX0@Z1@Z
{
    __DEBUG_ASM(6C09C5A);
    // chunk 0x6C09C5A _sub_6C09C5A
    asm("loc_6C09C5A: push %ebp;");
    asm("loc_6C09C5B: mov %esp,%ebp;");
    asm("loc_6C09C5D: push $0xFFFFFFFF;");
    asm("loc_6C09C5F: push $_data_6C0E688;");
    asm("loc_6C09C64: push $_sub_6C09EF4;");
    asm("loc_6C09C69: mov %fs:0,%eax;");
    asm("loc_6C09C6F: push %eax;");
    asm("loc_6C09C70: mov %esp,%fs:0;");
    asm("loc_6C09C77: sub $0x10,%esp;");
    asm("loc_6C09C7A: push %ebx;");
    asm("loc_6C09C7B: push %esi;");
    asm("loc_6C09C7C: push %edi;");
    asm("loc_6C09C7D: xor %eax,%eax;");
    asm("loc_6C09C7F: mov %eax,-0x20(%ebp);");
    asm("loc_6C09C82: mov %eax,-4(%ebp);");
    asm("loc_6C09C85: mov %eax,-0x1C(%ebp);");
    asm("loc_6C09C88: mov -0x1C(%ebp),%eax;");
    asm("loc_6C09C8B: cmp 0x10(%ebp),%eax;");
    asm("loc_6C09C8E: jge loc_6C09CA3;");
    asm("loc_6C09C90: mov 8(%ebp),%esi;");
    asm("loc_6C09C93: mov %esi,%ecx;");
    asm("loc_6C09C95: calll *0x14(%ebp);");
    asm("loc_6C09C98: add 0xC(%ebp),%esi;");
    asm("loc_6C09C9B: mov %esi,8(%ebp);");
    asm("loc_6C09C9E: incl -0x1C(%ebp);");
    asm("loc_6C09CA1: jmp loc_6C09C88;");
    asm("loc_6C09CA3: movl $1,-0x20(%ebp);");
    asm("loc_6C09CAA: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_6C09CAE: call loc_6C09CC4;");
    asm("loc_6C09CB3: mov -0x10(%ebp),%ecx;");
    asm("loc_6C09CB6: mov %ecx,%fs:0;");
    asm("loc_6C09CBD: pop %edi;");
    asm("loc_6C09CBE: pop %esi;");
    asm("loc_6C09CBF: pop %ebx;");
    asm("loc_6C09CC0: leave;");
    asm("loc_6C09CC1: ret $0x14;");
    asm("loc_6C09CC4: cmpl $0,-0x20(%ebp);");
    asm("loc_6C09CC8: jne loc_6C09CDB;");
    asm("loc_6C09CCA: pushl 0x18(%ebp);");
    asm("loc_6C09CCD: pushl -0x1C(%ebp);");
    asm("loc_6C09CD0: pushl 0xC(%ebp);");
    asm("loc_6C09CD3: pushl 8(%ebp);");
    asm("loc_6C09CD6: call _sub_6C09BE6;");
    asm("loc_6C09CDB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09CDC() // __onexit
{
    __DEBUG_ASM(6C09CDC);
    // chunk 0x6C09CDC _sub_6C09CDC
    asm("loc_6C09CDC: cmpl $0xFFFFFFFF,_data_6C14334;");
    asm("loc_6C09CE3: jne loc_6C09CF1;");
    asm("loc_6C09CE5: pushl 4(%esp);");
    asm("loc_6C09CE9: calll *_import_6C0B1D0;");
    asm("loc_6C09CEF: pop %ecx;");
    asm("loc_6C09CF0: ret;");
    asm("loc_6C09CF1: push $_data_6C14330;");
    asm("loc_6C09CF6: push $_data_6C14334;");
    asm("loc_6C09CFB: pushl 0xC(%esp);");
    asm("loc_6C09CFF: call _sub_6C09F00;");
    asm("loc_6C09D04: add $0xC,%esp;");
    asm("loc_6C09D07: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09D08() // _atexit
{
    __DEBUG_ASM(6C09D08);
    // chunk 0x6C09D08 _sub_6C09D08
    asm("loc_6C09D08: pushl 4(%esp);");
    asm("loc_6C09D0C: call _sub_6C09CDC;");
    asm("loc_6C09D11: neg %eax;");
    asm("loc_6C09D13: sbb %eax,%eax;");
    asm("loc_6C09D15: pop %ecx;");
    asm("loc_6C09D16: neg %eax;");
    asm("loc_6C09D18: dec %eax;");
    asm("loc_6C09D19: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09D1A() // _strncpy
{
    __DEBUG_ASM(6C09D1A);
    // chunk 0x6C09D1A _sub_6C09D1A
    asm("loc_6C09D1A: jmpl *_import_6C0B228;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09D20() // _wcscpy
{
    __DEBUG_ASM(6C09D20);
    // chunk 0x6C09D20 _sub_6C09D20
    asm("loc_6C09D20: jmpl *_import_6C0B220;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09D26() // ??2@YAPAXI@Z
{
    __DEBUG_ASM(6C09D26);
    // chunk 0x6C09D26 _sub_6C09D26
    asm("loc_6C09D26: jmpl *_import_6C0B21C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09D2C() // __CxxFrameHandler
{
    __DEBUG_ASM(6C09D2C);
    // chunk 0x6C09D2C _sub_6C09D2C
    asm("loc_6C09D2C: jmpl *_import_6C0B218;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09D32() // _wcsncpy
{
    __DEBUG_ASM(6C09D32);
    // chunk 0x6C09D32 _sub_6C09D32
    asm("loc_6C09D32: jmpl *_import_6C0B214;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09D38() // _wcslen
{
    __DEBUG_ASM(6C09D38);
    // chunk 0x6C09D38 _sub_6C09D38
    asm("loc_6C09D38: jmpl *_import_6C0B210;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09D40() // __alloca_probe
{
    __DEBUG_ASM(6C09D40);
    // chunk 0x6C09D40 _sub_6C09D40
    asm("loc_6C09D40: push %ecx;");
    asm("loc_6C09D41: cmp $0x1000,%eax;");
    asm("loc_6C09D46: lea 8(%esp),%ecx;");
    asm("loc_6C09D4A: jb loc_6C09D60;");
    asm("loc_6C09D4C: sub $0x1000,%ecx;");
    asm("loc_6C09D52: sub $0x1000,%eax;");
    asm("loc_6C09D57: test %eax,(%ecx);");
    asm("loc_6C09D59: cmp $0x1000,%eax;");
    asm("loc_6C09D5E: jae loc_6C09D4C;");
    asm("loc_6C09D60: sub %eax,%ecx;");
    asm("loc_6C09D62: mov %esp,%eax;");
    asm("loc_6C09D64: test %eax,(%ecx);");
    asm("loc_6C09D66: mov %ecx,%esp;");
    asm("loc_6C09D68: mov (%eax),%ecx;");
    asm("loc_6C09D6A: mov 4(%eax),%eax;");
    asm("loc_6C09D6D: push %eax;");
    asm("loc_6C09D6E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09D70() // _free
{
    __DEBUG_ASM(6C09D70);
    // chunk 0x6C09D70 _sub_6C09D70
    asm("loc_6C09D70: jmpl *_import_6C0B20C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09D76() // _swprintf
{
    __DEBUG_ASM(6C09D76);
    // chunk 0x6C09D76 _sub_6C09D76
    asm("loc_6C09D76: jmpl *_import_6C0B208;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09D7C() // _atoi
{
    __DEBUG_ASM(6C09D7C);
    // chunk 0x6C09D7C _sub_6C09D7C
    asm("loc_6C09D7C: jmpl *_import_6C0B1FC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09D82() // _strrchr
{
    __DEBUG_ASM(6C09D82);
    // chunk 0x6C09D82 _sub_6C09D82
    asm("loc_6C09D82: jmpl *_import_6C0B1D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09D88() // __CRT_INIT@12
{
    __DEBUG_ASM(6C09D88);
    // chunk 0x6C09D88 _sub_6C09D88
    asm("loc_6C09D88: mov 8(%esp),%eax;");
    asm("loc_6C09D8C: test %eax,%eax;");
    asm("loc_6C09D8E: jne loc_6C09D9E;");
    asm("loc_6C09D90: cmp %eax,_data_6C14324;");
    asm("loc_6C09D96: jle loc_6C09DC6;");
    asm("loc_6C09D98: decl _data_6C14324;");
    asm("loc_6C09D9E: mov _import_6C0B204,%ecx;");
    asm("loc_6C09DA4: cmp $1,%eax;");
    asm("loc_6C09DA7: mov (%ecx),%ecx;");
    asm("loc_6C09DA9: mov %ecx,_data_6C14328;");
    asm("loc_6C09DAF: jne loc_6C09DF0;");
    asm("loc_6C09DB1: push $0x80;");
    asm("loc_6C09DB6: calll *_import_6C0B1EC;");
    asm("loc_6C09DBC: test %eax,%eax;");
    asm("loc_6C09DBE: pop %ecx;");
    asm("loc_6C09DBF: mov %eax,_data_6C14334;");
    asm("loc_6C09DC4: jne loc_6C09DCA;");
    asm("loc_6C09DC6: xor %eax,%eax;");
    asm("loc_6C09DC8: jmp loc_6C09E30;");
    asm("loc_6C09DCA: andl $0,(%eax);");
    asm("loc_6C09DCD: mov _data_6C14334,%eax;");
    asm("loc_6C09DD2: push $_data_6C136F0;");
    asm("loc_6C09DD7: push $_data_6C13000;");
    asm("loc_6C09DDC: mov %eax,_data_6C14330;");
    asm("loc_6C09DE1: call _sub_6C09F06;");
    asm("loc_6C09DE6: incl _data_6C14324;");
    asm("loc_6C09DEC: pop %ecx;");
    asm("loc_6C09DED: pop %ecx;");
    asm("loc_6C09DEE: jmp loc_6C09E2D;");
    asm("loc_6C09DF0: test %eax,%eax;");
    asm("loc_6C09DF2: jne loc_6C09E2D;");
    asm("loc_6C09DF4: mov _data_6C14334,%eax;");
    asm("loc_6C09DF9: test %eax,%eax;");
    asm("loc_6C09DFB: je loc_6C09E2D;");
    asm("loc_6C09DFD: mov _data_6C14330,%ecx;");
    asm("loc_6C09E03: push %esi;");
    asm("loc_6C09E04: lea -4(%ecx),%esi;");
    asm("loc_6C09E07: cmp %eax,%esi;");
    asm("loc_6C09E09: jb loc_6C09E1D;");
    asm("loc_6C09E0B: mov (%esi),%ecx;");
    asm("loc_6C09E0D: test %ecx,%ecx;");
    asm("loc_6C09E0F: je loc_6C09E18;");
    asm("loc_6C09E11: call *%ecx;");
    asm("loc_6C09E13: mov _data_6C14334,%eax;");
    asm("loc_6C09E18: sub $4,%esi;");
    asm("loc_6C09E1B: jmp loc_6C09E07;");
    asm("loc_6C09E1D: push %eax;");
    asm("loc_6C09E1E: calll *_import_6C0B20C;");
    asm("loc_6C09E24: andl $0,_data_6C14334;");
    asm("loc_6C09E2B: pop %ecx;");
    asm("loc_6C09E2C: pop %esi;");
    asm("loc_6C09E2D: push $1;");
    asm("loc_6C09E2F: pop %eax;");
    asm("loc_6C09E30: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09E33() // _DllEntryPoint
{
    __DEBUG_ASM(6C09E33);
    // chunk 0x6C09E33 _sub_6C09E33
    asm("loc_6C09E33: push %ebp;");
    asm("loc_6C09E34: mov %esp,%ebp;");
    asm("loc_6C09E36: push %ebx;");
    asm("loc_6C09E37: mov 8(%ebp),%ebx;");
    asm("loc_6C09E3A: push %esi;");
    asm("loc_6C09E3B: mov 0xC(%ebp),%esi;");
    asm("loc_6C09E3E: push %edi;");
    asm("loc_6C09E3F: mov 0x10(%ebp),%edi;");
    asm("loc_6C09E42: test %esi,%esi;");
    asm("loc_6C09E44: jne loc_6C09E4F;");
    asm("loc_6C09E46: cmpl $0,_data_6C14324;");
    asm("loc_6C09E4D: jmp loc_6C09E75;");
    asm("loc_6C09E4F: cmp $1,%esi;");
    asm("loc_6C09E52: je loc_6C09E59;");
    asm("loc_6C09E54: cmp $2,%esi;");
    asm("loc_6C09E57: jne loc_6C09E7B;");
    asm("loc_6C09E59: mov _data_6C1432C,%eax;");
    asm("loc_6C09E5E: test %eax,%eax;");
    asm("loc_6C09E60: je loc_6C09E6B;");
    asm("loc_6C09E62: push %edi;");
    asm("loc_6C09E63: push %esi;");
    asm("loc_6C09E64: push %ebx;");
    asm("loc_6C09E65: call *%eax;");
    asm("loc_6C09E67: test %eax,%eax;");
    asm("loc_6C09E69: je loc_6C09E77;");
    asm("loc_6C09E6B: push %edi;");
    asm("loc_6C09E6C: push %esi;");
    asm("loc_6C09E6D: push %ebx;");
    asm("loc_6C09E6E: call _sub_6C09D88;");
    asm("loc_6C09E73: test %eax,%eax;");
    asm("loc_6C09E75: jne loc_6C09E7B;");
    asm("loc_6C09E77: xor %eax,%eax;");
    asm("loc_6C09E79: jmp loc_6C09EC9;");
    asm("loc_6C09E7B: push %edi;");
    asm("loc_6C09E7C: push %esi;");
    asm("loc_6C09E7D: push %ebx;");
    asm("loc_6C09E7E: call _sub_6BD9860;");
    asm("loc_6C09E83: cmp $1,%esi;");
    asm("loc_6C09E86: mov %eax,0xC(%ebp);");
    asm("loc_6C09E89: jne loc_6C09E97;");
    asm("loc_6C09E8B: test %eax,%eax;");
    asm("loc_6C09E8D: jne loc_6C09EC6;");
    asm("loc_6C09E8F: push %edi;");
    asm("loc_6C09E90: push %eax;");
    asm("loc_6C09E91: push %ebx;");
    asm("loc_6C09E92: call _sub_6C09D88;");
    asm("loc_6C09E97: test %esi,%esi;");
    asm("loc_6C09E99: je loc_6C09EA0;");
    asm("loc_6C09E9B: cmp $3,%esi;");
    asm("loc_6C09E9E: jne loc_6C09EC6;");
    asm("loc_6C09EA0: push %edi;");
    asm("loc_6C09EA1: push %esi;");
    asm("loc_6C09EA2: push %ebx;");
    asm("loc_6C09EA3: call _sub_6C09D88;");
    asm("loc_6C09EA8: test %eax,%eax;");
    asm("loc_6C09EAA: jne loc_6C09EAF;");
    asm("loc_6C09EAC: and %eax,0xC(%ebp);");
    asm("loc_6C09EAF: cmpl $0,0xC(%ebp);");
    asm("loc_6C09EB3: je loc_6C09EC6;");
    asm("loc_6C09EB5: mov _data_6C1432C,%eax;");
    asm("loc_6C09EBA: test %eax,%eax;");
    asm("loc_6C09EBC: je loc_6C09EC6;");
    asm("loc_6C09EBE: push %edi;");
    asm("loc_6C09EBF: push %esi;");
    asm("loc_6C09EC0: push %ebx;");
    asm("loc_6C09EC1: call *%eax;");
    asm("loc_6C09EC3: mov %eax,0xC(%ebp);");
    asm("loc_6C09EC6: mov 0xC(%ebp),%eax;");
    asm("loc_6C09EC9: pop %edi;");
    asm("loc_6C09ECA: pop %esi;");
    asm("loc_6C09ECB: pop %ebx;");
    asm("loc_6C09ECC: pop %ebp;");
    asm("loc_6C09ECD: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09ED0() // _fclose
{
    __DEBUG_ASM(6C09ED0);
    // chunk 0x6C09ED0 _sub_6C09ED0
    asm("loc_6C09ED0: jmpl *_import_6C0B1D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09ED6() // _fprintf
{
    __DEBUG_ASM(6C09ED6);
    // chunk 0x6C09ED6 _sub_6C09ED6
    asm("loc_6C09ED6: jmpl *_import_6C0B1DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09EDC() // _fopen
{
    __DEBUG_ASM(6C09EDC);
    // chunk 0x6C09EDC _sub_6C09EDC
    asm("loc_6C09EDC: jmpl *_import_6C0B1E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09EE2() // _memmove
{
    __DEBUG_ASM(6C09EE2);
    // chunk 0x6C09EE2 _sub_6C09EE2
    asm("loc_6C09EE2: jmpl *_import_6C0B1E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09EE8() // _ftol
{
    __DEBUG_ASM(6C09EE8);
    // chunk 0x6C09EE8 _sub_6C09EE8
    asm("loc_6C09EE8: jmpl *_import_6C0B1E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09EEE() // _malloc
{
    __DEBUG_ASM(6C09EEE);
    // chunk 0x6C09EEE _sub_6C09EEE
    asm("loc_6C09EEE: jmpl *_import_6C0B1EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09EF4() // _except_handler3
{
    __DEBUG_ASM(6C09EF4);
    // chunk 0x6C09EF4 _sub_6C09EF4
    asm("loc_6C09EF4: jmpl *_import_6C0B1F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09EFA() // ?terminate@@YAXXZ
{
    __DEBUG_ASM(6C09EFA);
    // chunk 0x6C09EFA _sub_6C09EFA
    asm("loc_6C09EFA: jmpl *_import_6C0B1F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F00() // __dllonexit
{
    __DEBUG_ASM(6C09F00);
    // chunk 0x6C09F00 _sub_6C09F00
    asm("loc_6C09F00: jmpl *_import_6C0B1F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F06() // _initterm
{
    __DEBUG_ASM(6C09F06);
    // chunk 0x6C09F06 _sub_6C09F06
    asm("loc_6C09F06: jmpl *_import_6C0B200;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F10() // _GetProcAddress
{
    __DEBUG_ASM(6C09F10);
    // chunk 0x6C09F10 _sub_6C09F10
    asm("loc_6C09F10: jmpl *_import_6C0B134;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F16() // _LoadLibraryA
{
    __DEBUG_ASM(6C09F16);
    // chunk 0x6C09F16 _sub_6C09F16
    asm("loc_6C09F16: jmpl *_import_6C0B130;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F1C() // _FreeLibrary
{
    __DEBUG_ASM(6C09F1C);
    // chunk 0x6C09F1C _sub_6C09F1C
    asm("loc_6C09F1C: jmpl *_import_6C0B14C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F22() // _DeleteCriticalSection
{
    __DEBUG_ASM(6C09F22);
    // chunk 0x6C09F22 _sub_6C09F22
    asm("loc_6C09F22: jmpl *_import_6C0B138;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F28() // _InitializeCriticalSection
{
    __DEBUG_ASM(6C09F28);
    // chunk 0x6C09F28 _sub_6C09F28
    asm("loc_6C09F28: jmpl *_import_6C0B13C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F2E() // _LeaveCriticalSection
{
    __DEBUG_ASM(6C09F2E);
    // chunk 0x6C09F2E _sub_6C09F2E
    asm("loc_6C09F2E: jmpl *_import_6C0B140;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F34() // _EnterCriticalSection
{
    __DEBUG_ASM(6C09F34);
    // chunk 0x6C09F34 _sub_6C09F34
    asm("loc_6C09F34: jmpl *_import_6C0B144;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F3A() // _DisableThreadLibraryCalls
{
    __DEBUG_ASM(6C09F3A);
    // chunk 0x6C09F3A _sub_6C09F3A
    asm("loc_6C09F3A: jmpl *_import_6C0B148;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F40() // _strdup
{
    __DEBUG_ASM(6C09F40);
    // chunk 0x6C09F40 _sub_6C09F40
    asm("loc_6C09F40: jmpl *_import_6C0B22C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F46() // _wcsdup
{
    __DEBUG_ASM(6C09F46);
    // chunk 0x6C09F46 _sub_6C09F46
    asm("loc_6C09F46: jmpl *_import_6C0B230;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F4C() // _wcslwr
{
    __DEBUG_ASM(6C09F4C);
    // chunk 0x6C09F4C _sub_6C09F4C
    asm("loc_6C09F4C: jmpl *_import_6C0B234;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F60() // _sub_6C09F60
{
    __DEBUG_ASM(6C09F60);
    // chunk 0x6C09F60 _sub_6C09F60
    asm("loc_6C09F60: mov -0x21C(%ebp),%eax;");
    asm("loc_6C09F66: push %eax;");
    asm("loc_6C09F67: call _sub_6C09AAA;");
    asm("loc_6C09F6C: pop %ecx;");
    asm("loc_6C09F6D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F6E() // _sub_6C09F6E
{
    __DEBUG_ASM(6C09F6E);
    // chunk 0x6C09F6E _sub_6C09F6E
    asm("loc_6C09F6E: lea -0x1C8(%ebp),%ecx;");
    asm("loc_6C09F74: jmpl *_import_6C0B0BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F7A() // _sub_6C09F7A
{
    __DEBUG_ASM(6C09F7A);
    // chunk 0x6C09F7A _sub_6C09F7A
    asm("loc_6C09F7A: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6C09F80: jmp _sub_6BD4420;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F85() // _sub_6C09F85
{
    __DEBUG_ASM(6C09F85);
    // chunk 0x6C09F85 _sub_6C09F85
    asm("loc_6C09F85: lea -0x218(%ebp),%ecx;");
    asm("loc_6C09F8B: jmp _sub_6BD5600;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F90() // _sub_6C09F90
{
    __DEBUG_ASM(6C09F90);
    // chunk 0x6C09F90 _sub_6C09F90
    asm("loc_6C09F90: lea -0x1C8(%ebp),%ecx;");
    asm("loc_6C09F96: jmpl *_import_6C0B0BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09F9C() // _sub_6C09F9C
{
    __DEBUG_ASM(6C09F9C);
    // chunk 0x6C09F9C _sub_6C09F9C
    asm("loc_6C09F9C: lea -0x218(%ebp),%ecx;");
    asm("loc_6C09FA2: jmp _sub_6BD5600;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09FA7() // _sub_6C09FA7
{
    __DEBUG_ASM(6C09FA7);
    // chunk 0x6C09FA7 _sub_6C09FA7
    asm("loc_6C09FA7: lea -0x218(%ebp),%ecx;");
    asm("loc_6C09FAD: jmpl *_import_6C0B044;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09FB3() // _sub_6C09FB3
{
    __DEBUG_ASM(6C09FB3);
    // chunk 0x6C09FB3 _sub_6C09FB3
    asm("loc_6C09FB3: lea -0x21C(%ebp),%ecx;");
    asm("loc_6C09FB9: jmp _sub_6BDC790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09FBE() // _sub_6C09FBE
{
    __DEBUG_ASM(6C09FBE);
    // chunk 0x6C09FBE _sub_6C09FBE
    asm("loc_6C09FBE: lea -0x218(%ebp),%ecx;");
    asm("loc_6C09FC4: jmpl *_import_6C0B044;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09FCA() // _sub_6C09FCA
{
    __DEBUG_ASM(6C09FCA);
    // chunk 0x6C09FCA _sub_6C09FCA
    asm("loc_6C09FCA: lea -0x21C(%ebp),%ecx;");
    asm("loc_6C09FD0: jmp _sub_6BDC790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09FD5() // _sub_6C09FD5
{
    __DEBUG_ASM(6C09FD5);
    // chunk 0x6C09FD5 _sub_6C09FD5
    asm("loc_6C09FD5: mov -0x1EC(%ebp),%eax;");
    asm("loc_6C09FDB: push %eax;");
    asm("loc_6C09FDC: call _sub_6C09AAA;");
    asm("loc_6C09FE1: pop %ecx;");
    asm("loc_6C09FE2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09FE3() // _sub_6C09FE3
{
    __DEBUG_ASM(6C09FE3);
    // chunk 0x6C09FE3 _sub_6C09FE3
    asm("loc_6C09FE3: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6C09FE9: jmpl *_import_6C0B040;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09FEF() // _sub_6C09FEF
{
    __DEBUG_ASM(6C09FEF);
    // chunk 0x6C09FEF _sub_6C09FEF
    asm("loc_6C09FEF: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6C09FF5: jmpl *_import_6C0B0BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C09FFB() // _sub_6C09FFB
{
    __DEBUG_ASM(6C09FFB);
    // chunk 0x6C09FFB _sub_6C09FFB
    asm("loc_6C09FFB: lea -0x218(%ebp),%ecx;");
    asm("loc_6C0A001: jmpl *_import_6C0B0BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A007() // _sub_6C0A007
{
    __DEBUG_ASM(6C0A007);
    // chunk 0x6C0A007 _sub_6C0A007
    asm("loc_6C0A007: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6C0A00D: jmp _sub_6BD4550;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A012() // _sub_6C0A012
{
    __DEBUG_ASM(6C0A012);
    // chunk 0x6C0A012 _sub_6C0A012
    asm("loc_6C0A012: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6C0A018: jmp _sub_6BD4560;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A01D() // _sub_6C0A01D
{
    __DEBUG_ASM(6C0A01D);
    // chunk 0x6C0A01D _sub_6C0A01D
    asm("loc_6C0A01D: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6C0A023: jmp _sub_6BD4570;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A028() // _sub_6C0A028
{
    __DEBUG_ASM(6C0A028);
    // chunk 0x6C0A028 _sub_6C0A028
    asm("loc_6C0A028: mov -0x1EC(%ebp),%eax;");
    asm("loc_6C0A02E: push %eax;");
    asm("loc_6C0A02F: call _sub_6C09AAA;");
    asm("loc_6C0A034: pop %ecx;");
    asm("loc_6C0A035: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A036() // _sub_6C0A036
{
    __DEBUG_ASM(6C0A036);
    // chunk 0x6C0A036 _sub_6C0A036
    asm("loc_6C0A036: lea -0x1D4(%ebp),%ecx;");
    asm("loc_6C0A03C: jmpl *_import_6C0B0BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A042() // _sub_6C0A042
{
    __DEBUG_ASM(6C0A042);
    // chunk 0x6C0A042 _sub_6C0A042
    asm("loc_6C0A042: lea -0x218(%ebp),%ecx;");
    asm("loc_6C0A048: jmpl *_import_6C0B044;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A04E() // _sub_6C0A04E
{
    __DEBUG_ASM(6C0A04E);
    // chunk 0x6C0A04E _sub_6C0A04E
    asm("loc_6C0A04E: lea -0x21C(%ebp),%ecx;");
    asm("loc_6C0A054: jmp _sub_6BDC790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A059() // _sub_6C0A059
{
    __DEBUG_ASM(6C0A059);
    // chunk 0x6C0A059 _sub_6C0A059
    asm("loc_6C0A059: mov $_data_6C13850,%ecx;");
    asm("loc_6C0A05E: jmpl *_import_6C0B044;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A064() // _sub_6C0A064
{
    __DEBUG_ASM(6C0A064);
    // chunk 0x6C0A064 _sub_6C0A064
    asm("loc_6C0A064: mov $_data_6C13860,%ecx;");
    asm("loc_6C0A069: jmpl *_import_6C0B03C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A06F() // _sub_6C0A06F
{
    __DEBUG_ASM(6C0A06F);
    // chunk 0x6C0A06F _sub_6C0A06F
    asm("loc_6C0A06F: lea -0xC8(%ebp),%ecx;");
    asm("loc_6C0A075: jmpl *_import_6C0B0BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A07B() // _sub_6C0A07B
{
    __DEBUG_ASM(6C0A07B);
    // chunk 0x6C0A07B _sub_6C0A07B
    asm("loc_6C0A07B: lea -0xB0(%ebp),%ecx;");
    asm("loc_6C0A081: jmpl *_import_6C0B0BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A087() // _sub_6C0A087
{
    __DEBUG_ASM(6C0A087);
    // chunk 0x6C0A087 _sub_6C0A087
    asm("loc_6C0A087: lea -0x218(%ebp),%ecx;");
    asm("loc_6C0A08D: jmp _sub_6BD43B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A092() // _sub_6C0A092
{
    __DEBUG_ASM(6C0A092);
    // chunk 0x6C0A092 _sub_6C0A092
    asm("loc_6C0A092: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6C0A098: jmp _sub_6BD43D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A09D() // _sub_6C0A09D
{
    __DEBUG_ASM(6C0A09D);
    // chunk 0x6C0A09D _sub_6C0A09D
    asm("loc_6C0A09D: lea -0x218(%ebp),%ecx;");
    asm("loc_6C0A0A3: jmpl *_import_6C0B0BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A0A9() // _sub_6C0A0A9
{
    __DEBUG_ASM(6C0A0A9);
    // chunk 0x6C0A0A9 _sub_6C0A0A9
    asm("loc_6C0A0A9: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6C0A0AF: jmpl *_import_6C0B0BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A0B5() // ?HandlePacket@IServerImpl@@QAEXPAVCDAPacket@@@Z_SEH
{
    __DEBUG_ASM(6C0A0B5);
    // chunk 0x6C0A0B5 _sub_6C0A0B5
    asm("loc_6C0A0B5: mov $_data_6C0E7B0,%eax;");
    asm("loc_6C0A0BA: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A0C0() // _sub_6C0A0C0
{
    __DEBUG_ASM(6C0A0C0);
    // chunk 0x6C0A0C0 _sub_6C0A0C0
    asm("loc_6C0A0C0: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A0C3: add $0x70,%ecx;");
    asm("loc_6C0A0C6: jmpl *_import_6C0B044;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A0CC() // _sub_6C0A0CC
{
    __DEBUG_ASM(6C0A0CC);
    // chunk 0x6C0A0CC _sub_6C0A0CC
    asm("loc_6C0A0CC: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A0CF: add $0x80,%ecx;");
    asm("loc_6C0A0D5: jmpl *_import_6C0B03C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A0DB() // _SEH_6BD3F20
{
    __DEBUG_ASM(6C0A0DB);
    // chunk 0x6C0A0DB _sub_6C0A0DB
    asm("loc_6C0A0DB: mov $_data_6C0E7DC,%eax;");
    asm("loc_6C0A0E0: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A0F0() // _sub_6C0A0F0
{
    __DEBUG_ASM(6C0A0F0);
    // chunk 0x6C0A0F0 _sub_6C0A0F0
    asm("loc_6C0A0F0: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A0F3: add $0x18,%ecx;");
    asm("loc_6C0A0F6: jmpl *_import_6C0B0BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A0FC() // _SEH_6BD4420
{
    __DEBUG_ASM(6C0A0FC);
    // chunk 0x6C0A0FC _sub_6C0A0FC
    asm("loc_6C0A0FC: mov $_data_6C0E800,%eax;");
    asm("loc_6C0A101: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A140() // _sub_6C0A140
{
    __DEBUG_ASM(6C0A140);
    // chunk 0x6C0A140 _sub_6C0A140
    asm("loc_6C0A140: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A143: add $0xC,%ecx;");
    asm("loc_6C0A146: jmpl *_import_6C0B0BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A14C() // _SEH_6BD4570
{
    __DEBUG_ASM(6C0A14C);
    // chunk 0x6C0A14C _sub_6C0A14C
    asm("loc_6C0A14C: mov $_data_6C0E850,%eax;");
    asm("loc_6C0A151: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A190() // _sub_6C0A190
{
    __DEBUG_ASM(6C0A190);
    // chunk 0x6C0A190 _sub_6C0A190
    asm("loc_6C0A190: lea -0x44(%ebp),%ecx;");
    asm("loc_6C0A193: jmp _sub_6BD4F00;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A198() // _sub_6C0A198
{
    __DEBUG_ASM(6C0A198);
    // chunk 0x6C0A198 _sub_6C0A198
    asm("loc_6C0A198: lea -0x50(%ebp),%ecx;");
    asm("loc_6C0A19B: jmp _sub_6BD5660;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A1A0() // _sub_6C0A1A0
{
    __DEBUG_ASM(6C0A1A0);
    // chunk 0x6C0A1A0 _sub_6C0A1A0
    asm("loc_6C0A1A0: mov -0x60(%ebp),%eax;");
    asm("loc_6C0A1A3: push %eax;");
    asm("loc_6C0A1A4: call _sub_6C09AAA;");
    asm("loc_6C0A1A9: pop %ecx;");
    asm("loc_6C0A1AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A1AB() // _sub_6C0A1AB
{
    __DEBUG_ASM(6C0A1AB);
    // chunk 0x6C0A1AB _sub_6C0A1AB
    asm("loc_6C0A1AB: mov -0x60(%ebp),%ecx;");
    asm("loc_6C0A1AE: add $0x204,%ecx;");
    asm("loc_6C0A1B4: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A1BA() // _sub_6C0A1BA
{
    __DEBUG_ASM(6C0A1BA);
    // chunk 0x6C0A1BA _sub_6C0A1BA
    asm("loc_6C0A1BA: mov -0x60(%ebp),%ecx;");
    asm("loc_6C0A1BD: add $0x214,%ecx;");
    asm("loc_6C0A1C3: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A1C9() // _sub_6C0A1C9
{
    __DEBUG_ASM(6C0A1C9);
    // chunk 0x6C0A1C9 _sub_6C0A1C9
    asm("loc_6C0A1C9: mov -0x60(%ebp),%ecx;");
    asm("loc_6C0A1CC: add $0x248,%ecx;");
    asm("loc_6C0A1D2: jmpl *_import_6C0B0CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A1D8() // _sub_6C0A1D8
{
    __DEBUG_ASM(6C0A1D8);
    // chunk 0x6C0A1D8 _sub_6C0A1D8
    asm("loc_6C0A1D8: mov -0x60(%ebp),%ecx;");
    asm("loc_6C0A1DB: add $0x254,%ecx;");
    asm("loc_6C0A1E1: jmpl *_import_6C0B03C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A1E7() // _sub_6C0A1E7
{
    __DEBUG_ASM(6C0A1E7);
    // chunk 0x6C0A1E7 _sub_6C0A1E7
    asm("loc_6C0A1E7: mov -0x5C(%ebp),%ecx;");
    asm("loc_6C0A1EA: add $0x204,%ecx;");
    asm("loc_6C0A1F0: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A1F6() // _sub_6C0A1F6
{
    __DEBUG_ASM(6C0A1F6);
    // chunk 0x6C0A1F6 _sub_6C0A1F6
    asm("loc_6C0A1F6: mov -0x5C(%ebp),%ecx;");
    asm("loc_6C0A1F9: add $0x214,%ecx;");
    asm("loc_6C0A1FF: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A205() // _sub_6C0A205
{
    __DEBUG_ASM(6C0A205);
    // chunk 0x6C0A205 _sub_6C0A205
    asm("loc_6C0A205: mov -0x5C(%ebp),%ecx;");
    asm("loc_6C0A208: add $0x264,%ecx;");
    asm("loc_6C0A20E: jmp _sub_6BDC790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A213() // _sub_6C0A213
{
    __DEBUG_ASM(6C0A213);
    // chunk 0x6C0A213 _sub_6C0A213
    asm("loc_6C0A213: mov -0x5C(%ebp),%ecx;");
    asm("loc_6C0A216: add $0x268,%ecx;");
    asm("loc_6C0A21C: jmpl *_import_6C0B03C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A222() // _sub_6C0A222
{
    __DEBUG_ASM(6C0A222);
    // chunk 0x6C0A222 _sub_6C0A222
    asm("loc_6C0A222: lea -0x44(%ebp),%ecx;");
    asm("loc_6C0A225: jmp _sub_6BD57C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A22A() // ?HandleCharacterInfo@IServerImpl@@QAE_NPAVCDAPCharacterInfo@@PAVIClient@@I@Z_SEH
{
    __DEBUG_ASM(6C0A22A);
    // chunk 0x6C0A22A _sub_6C0A22A
    asm("loc_6C0A22A: mov $_data_6C0E8F8,%eax;");
    asm("loc_6C0A22F: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A240() // _sub_6C0A240
{
    __DEBUG_ASM(6C0A240);
    // chunk 0x6C0A240 _sub_6C0A240
    asm("loc_6C0A240: mov -0x14(%ebp),%ecx;");
    asm("loc_6C0A243: jmp _sub_6BD57C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A248() // _sub_6C0A248
{
    __DEBUG_ASM(6C0A248);
    // chunk 0x6C0A248 _sub_6C0A248
    asm("loc_6C0A248: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A24B: add $0x204,%ecx;");
    asm("loc_6C0A251: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A257() // _sub_6C0A257
{
    __DEBUG_ASM(6C0A257);
    // chunk 0x6C0A257 _sub_6C0A257
    asm("loc_6C0A257: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A25A: add $0x214,%ecx;");
    asm("loc_6C0A260: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A266() // _sub_6C0A266
{
    __DEBUG_ASM(6C0A266);
    // chunk 0x6C0A266 _sub_6C0A266
    asm("loc_6C0A266: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A269: add $0x248,%ecx;");
    asm("loc_6C0A26F: jmpl *_import_6C0B0CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A275() // _SEH_6BD4F00
{
    __DEBUG_ASM(6C0A275);
    // chunk 0x6C0A275 _sub_6C0A275
    asm("loc_6C0A275: mov $_data_6C0E934,%eax;");
    asm("loc_6C0A27A: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A280() // _sub_6C0A280
{
    __DEBUG_ASM(6C0A280);
    // chunk 0x6C0A280 _sub_6C0A280
    asm("loc_6C0A280: lea -0x28(%ebp),%ecx;");
    asm("loc_6C0A283: jmpl *_import_6C0B040;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A289() // ?HandleDamageObject@IServerImpl@@QAE_NPAVCDAPDamageSpaceObj@@PAVIClient@@I@Z_SEH
{
    __DEBUG_ASM(6C0A289);
    // chunk 0x6C0A289 _sub_6C0A289
    asm("loc_6C0A289: mov $_data_6C0E958,%eax;");
    asm("loc_6C0A28E: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A2A0() // _sub_6C0A2A0
{
    __DEBUG_ASM(6C0A2A0);
    // chunk 0x6C0A2A0 _sub_6C0A2A0
    asm("loc_6C0A2A0: mov -0x14(%ebp),%ecx;");
    asm("loc_6C0A2A3: jmp _sub_6BD57C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A2A8() // _sub_6C0A2A8
{
    __DEBUG_ASM(6C0A2A8);
    // chunk 0x6C0A2A8 _sub_6C0A2A8
    asm("loc_6C0A2A8: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A2AB: add $0x204,%ecx;");
    asm("loc_6C0A2B1: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A2B7() // _sub_6C0A2B7
{
    __DEBUG_ASM(6C0A2B7);
    // chunk 0x6C0A2B7 _sub_6C0A2B7
    asm("loc_6C0A2B7: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A2BA: add $0x214,%ecx;");
    asm("loc_6C0A2C0: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A2C6() // _sub_6C0A2C6
{
    __DEBUG_ASM(6C0A2C6);
    // chunk 0x6C0A2C6 _sub_6C0A2C6
    asm("loc_6C0A2C6: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A2C9: add $0x248,%ecx;");
    asm("loc_6C0A2CF: jmpl *_import_6C0B0CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A2D5() // _SEH_6BD5820
{
    __DEBUG_ASM(6C0A2D5);
    // chunk 0x6C0A2D5 _sub_6C0A2D5
    asm("loc_6C0A2D5: mov $_data_6C0E994,%eax;");
    asm("loc_6C0A2DA: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A2E0() // _sub_6C0A2E0
{
    __DEBUG_ASM(6C0A2E0);
    // chunk 0x6C0A2E0 _sub_6C0A2E0
    asm("loc_6C0A2E0: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A2E3: add $0x204,%ecx;");
    asm("loc_6C0A2E9: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A2EF() // _sub_6C0A2EF
{
    __DEBUG_ASM(6C0A2EF);
    // chunk 0x6C0A2EF _sub_6C0A2EF
    asm("loc_6C0A2EF: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A2F2: add $0x214,%ecx;");
    asm("loc_6C0A2F8: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A2FE() // _sub_6C0A2FE
{
    __DEBUG_ASM(6C0A2FE);
    // chunk 0x6C0A2FE _sub_6C0A2FE
    asm("loc_6C0A2FE: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A301: add $0x248,%ecx;");
    asm("loc_6C0A307: jmpl *_import_6C0B0CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A30D() // _SEH_6BD5AA0
{
    __DEBUG_ASM(6C0A30D);
    // chunk 0x6C0A30D _sub_6C0A30D
    asm("loc_6C0A30D: mov $_data_6C0E9C8,%eax;");
    asm("loc_6C0A312: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A320() // _unknown_libname_3
{
    __DEBUG_ASM(6C0A320);
    // chunk 0x6C0A320 _sub_6C0A320
    asm("loc_6C0A320: mov -0x10(%ebp),%eax;");
    asm("loc_6C0A323: push %eax;");
    asm("loc_6C0A324: call _sub_6C09AAA;");
    asm("loc_6C0A329: pop %ecx;");
    asm("loc_6C0A32A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A32B() // _sub_6C0A32B
{
    __DEBUG_ASM(6C0A32B);
    // chunk 0x6C0A32B _sub_6C0A32B
    asm("loc_6C0A32B: mov -0x10(%ebp),%eax;");
    asm("loc_6C0A32E: push %eax;");
    asm("loc_6C0A32F: call _sub_6C09AAA;");
    asm("loc_6C0A334: pop %ecx;");
    asm("loc_6C0A335: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A336() // _sub_6C0A336
{
    __DEBUG_ASM(6C0A336);
    // chunk 0x6C0A336 _sub_6C0A336
    asm("loc_6C0A336: mov -0x10(%ebp),%eax;");
    asm("loc_6C0A339: push %eax;");
    asm("loc_6C0A33A: call _sub_6C09AAA;");
    asm("loc_6C0A33F: pop %ecx;");
    asm("loc_6C0A340: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A341() // _sub_6C0A341
{
    __DEBUG_ASM(6C0A341);
    // chunk 0x6C0A341 _sub_6C0A341
    asm("loc_6C0A341: mov -0x10(%ebp),%eax;");
    asm("loc_6C0A344: push %eax;");
    asm("loc_6C0A345: call _sub_6C09AAA;");
    asm("loc_6C0A34A: pop %ecx;");
    asm("loc_6C0A34B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A34C() // _sub_6C0A34C
{
    __DEBUG_ASM(6C0A34C);
    // chunk 0x6C0A34C _sub_6C0A34C
    asm("loc_6C0A34C: mov -0x10(%ebp),%eax;");
    asm("loc_6C0A34F: push %eax;");
    asm("loc_6C0A350: call _sub_6C09AAA;");
    asm("loc_6C0A355: pop %ecx;");
    asm("loc_6C0A356: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A357() // _unknown_libname_4
{
    __DEBUG_ASM(6C0A357);
    // chunk 0x6C0A357 _sub_6C0A357
    asm("loc_6C0A357: mov -0x10(%ebp),%eax;");
    asm("loc_6C0A35A: push %eax;");
    asm("loc_6C0A35B: call _sub_6C09AAA;");
    asm("loc_6C0A360: pop %ecx;");
    asm("loc_6C0A361: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A362() // _SEH_6BD6070
{
    __DEBUG_ASM(6C0A362);
    // chunk 0x6C0A362 _sub_6C0A362
    asm("loc_6C0A362: mov $_data_6C0EA14,%eax;");
    asm("loc_6C0A367: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A370() // _sub_6C0A370
{
    __DEBUG_ASM(6C0A370);
    // chunk 0x6C0A370 _sub_6C0A370
    asm("loc_6C0A370: lea -0x18(%ebp),%ecx;");
    asm("loc_6C0A373: jmp _sub_6BDC790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A378() // ?ReqEquipment@IServerImpl@@UAEXABVEquipDescList@@I@Z_SEH
{
    __DEBUG_ASM(6C0A378);
    // chunk 0x6C0A378 _sub_6C0A378
    asm("loc_6C0A378: mov $_data_6C0EA38,%eax;");
    asm("loc_6C0A37D: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A390() // _sub_6C0A390
{
    __DEBUG_ASM(6C0A390);
    // chunk 0x6C0A390 _sub_6C0A390
    asm("loc_6C0A390: lea -0x18(%ebp),%ecx;");
    asm("loc_6C0A393: jmp _sub_6BDC790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A398() // ?ReqCargo@IServerImpl@@UAEXABVEquipDescList@@I@Z_SEH
{
    __DEBUG_ASM(6C0A398);
    // chunk 0x6C0A398 _sub_6C0A398
    asm("loc_6C0A398: mov $_data_6C0EA5C,%eax;");
    asm("loc_6C0A39D: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A3B0() // _sub_6C0A3B0
{
    __DEBUG_ASM(6C0A3B0);
    // chunk 0x6C0A3B0 _sub_6C0A3B0
    asm("loc_6C0A3B0: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A3B3: add $0x10,%ecx;");
    asm("loc_6C0A3B6: jmp _sub_6C09900;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A3BB() // _sub_6C0A3BB
{
    __DEBUG_ASM(6C0A3BB);
    // chunk 0x6C0A3BB _sub_6C0A3BB
    asm("loc_6C0A3BB: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A3BE: add $0x3C,%ecx;");
    asm("loc_6C0A3C1: jmp _sub_6C09900;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A3C6() // ??0CDPClient@@QAE@ABV0@@Z_SEH
{
    __DEBUG_ASM(6C0A3C6);
    // chunk 0x6C0A3C6 _sub_6C0A3C6
    asm("loc_6C0A3C6: mov $_data_6C0EA88,%eax;");
    asm("loc_6C0A3CB: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A3D0() // _sub_6C0A3D0
{
    __DEBUG_ASM(6C0A3D0);
    // chunk 0x6C0A3D0 _sub_6C0A3D0
    asm("loc_6C0A3D0: mov 4(%ebp),%eax;");
    asm("loc_6C0A3D3: push %eax;");
    asm("loc_6C0A3D4: call _sub_6C09AAA;");
    asm("loc_6C0A3D9: pop %ecx;");
    asm("loc_6C0A3DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A3DB() // _SEH_6BD9930
{
    __DEBUG_ASM(6C0A3DB);
    // chunk 0x6C0A3DB _sub_6C0A3DB
    asm("loc_6C0A3DB: mov $_data_6C0EAAC,%eax;");
    asm("loc_6C0A3E0: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A3F0() // _sub_6C0A3F0
{
    __DEBUG_ASM(6C0A3F0);
    // chunk 0x6C0A3F0 _sub_6C0A3F0
    asm("loc_6C0A3F0: mov 4(%ebp),%eax;");
    asm("loc_6C0A3F3: push %eax;");
    asm("loc_6C0A3F4: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A3F7: push %ecx;");
    asm("loc_6C0A3F8: call _sub_6BDA0F0;");
    asm("loc_6C0A3FD: add $8,%esp;");
    asm("loc_6C0A400: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A401() // _sub_6C0A401
{
    __DEBUG_ASM(6C0A401);
    // chunk 0x6C0A401 _sub_6C0A401
    asm("loc_6C0A401: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A404: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A40A() // _SEH_6BD9F70
{
    __DEBUG_ASM(6C0A40A);
    // chunk 0x6C0A40A _sub_6C0A40A
    asm("loc_6C0A40A: mov $_data_6C0EAD8,%eax;");
    asm("loc_6C0A40F: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A420() // _sub_6C0A420
{
    __DEBUG_ASM(6C0A420);
    // chunk 0x6C0A420 _sub_6C0A420
    asm("loc_6C0A420: mov -0x14(%ebp),%ecx;");
    asm("loc_6C0A423: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A428() // _sub_6C0A428
{
    __DEBUG_ASM(6C0A428);
    // chunk 0x6C0A428 _sub_6C0A428
    asm("loc_6C0A428: mov -0x14(%ebp),%ecx;");
    asm("loc_6C0A42B: add $0x28,%ecx;");
    asm("loc_6C0A42E: jmp _sub_6BDABB0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A433() // _sub_6C0A433
{
    __DEBUG_ASM(6C0A433);
    // chunk 0x6C0A433 _sub_6C0A433
    asm("loc_6C0A433: mov -0x14(%ebp),%ecx;");
    asm("loc_6C0A436: add $0x30,%ecx;");
    asm("loc_6C0A439: jmp _sub_6BDABB0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A43E() // _SEH_6BDAAD0
{
    __DEBUG_ASM(6C0A43E);
    // chunk 0x6C0A43E _sub_6C0A43E
    asm("loc_6C0A43E: mov $_data_6C0EB0C,%eax;");
    asm("loc_6C0A443: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A450() // _unknown_libname_5
{
    __DEBUG_ASM(6C0A450);
    // chunk 0x6C0A450 _sub_6C0A450
    asm("loc_6C0A450: mov -0x14(%ebp),%eax;");
    asm("loc_6C0A453: push %eax;");
    asm("loc_6C0A454: call _sub_6C09AAA;");
    asm("loc_6C0A459: pop %ecx;");
    asm("loc_6C0A45A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A45B() // _SEH_6BDC850
{
    __DEBUG_ASM(6C0A45B);
    // chunk 0x6C0A45B _sub_6C0A45B
    asm("loc_6C0A45B: mov $_data_6C0EB30,%eax;");
    asm("loc_6C0A460: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A470() // _unknown_libname_6
{
    __DEBUG_ASM(6C0A470);
    // chunk 0x6C0A470 _sub_6C0A470
    asm("loc_6C0A470: mov -0x14(%ebp),%eax;");
    asm("loc_6C0A473: push %eax;");
    asm("loc_6C0A474: call _sub_6C09AAA;");
    asm("loc_6C0A479: pop %ecx;");
    asm("loc_6C0A47A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A47B() // _SEH_6BDC9E0
{
    __DEBUG_ASM(6C0A47B);
    // chunk 0x6C0A47B _sub_6C0A47B
    asm("loc_6C0A47B: mov $_data_6C0EB54,%eax;");
    asm("loc_6C0A480: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A490() // _unknown_libname_7
{
    __DEBUG_ASM(6C0A490);
    // chunk 0x6C0A490 _sub_6C0A490
    asm("loc_6C0A490: mov -0x10(%ebp),%eax;");
    asm("loc_6C0A493: push %eax;");
    asm("loc_6C0A494: call _sub_6C09AAA;");
    asm("loc_6C0A499: pop %ecx;");
    asm("loc_6C0A49A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A49B() // _SEH_6BDCB60
{
    __DEBUG_ASM(6C0A49B);
    // chunk 0x6C0A49B _sub_6C0A49B
    asm("loc_6C0A49B: mov $_data_6C0EB78,%eax;");
    asm("loc_6C0A4A0: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A4B0() // _sub_6C0A4B0
{
    __DEBUG_ASM(6C0A4B0);
    // chunk 0x6C0A4B0 _sub_6C0A4B0
    asm("loc_6C0A4B0: mov -0x14(%ebp),%ecx;");
    asm("loc_6C0A4B3: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A4B8() // _sub_6C0A4B8
{
    __DEBUG_ASM(6C0A4B8);
    // chunk 0x6C0A4B8 _sub_6C0A4B8
    asm("loc_6C0A4B8: mov -0x14(%ebp),%ecx;");
    asm("loc_6C0A4BB: add $0x20,%ecx;");
    asm("loc_6C0A4BE: jmp _sub_6BDABB0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A4C3() // _sub_6C0A4C3
{
    __DEBUG_ASM(6C0A4C3);
    // chunk 0x6C0A4C3 _sub_6C0A4C3
    asm("loc_6C0A4C3: mov -0x14(%ebp),%ecx;");
    asm("loc_6C0A4C6: add $0x28,%ecx;");
    asm("loc_6C0A4C9: jmp _sub_6BDABB0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A4CE() // _SEH_6BDD4E0
{
    __DEBUG_ASM(6C0A4CE);
    // chunk 0x6C0A4CE _sub_6C0A4CE
    asm("loc_6C0A4CE: mov $_data_6C0EBAC,%eax;");
    asm("loc_6C0A4D3: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A4E0() // _sub_6C0A4E0
{
    __DEBUG_ASM(6C0A4E0);
    // chunk 0x6C0A4E0 _sub_6C0A4E0
    asm("loc_6C0A4E0: mov -0x1C(%ebp),%ecx;");
    asm("loc_6C0A4E3: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A4E8() // _sub_6C0A4E8
{
    __DEBUG_ASM(6C0A4E8);
    // chunk 0x6C0A4E8 _sub_6C0A4E8
    asm("loc_6C0A4E8: mov -0x1C(%ebp),%ecx;");
    asm("loc_6C0A4EB: add $0x24,%ecx;");
    asm("loc_6C0A4EE: jmp _sub_6BD5660;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A4F3() // _sub_6C0A4F3
{
    __DEBUG_ASM(6C0A4F3);
    // chunk 0x6C0A4F3 _sub_6C0A4F3
    asm("loc_6C0A4F3: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A4F6: add $0x204,%ecx;");
    asm("loc_6C0A4FC: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A502() // _sub_6C0A502
{
    __DEBUG_ASM(6C0A502);
    // chunk 0x6C0A502 _sub_6C0A502
    asm("loc_6C0A502: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A505: add $0x214,%ecx;");
    asm("loc_6C0A50B: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A511() // _sub_6C0A511
{
    __DEBUG_ASM(6C0A511);
    // chunk 0x6C0A511 _sub_6C0A511
    asm("loc_6C0A511: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A514: add $0x264,%ecx;");
    asm("loc_6C0A51A: jmp _sub_6BDC790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A51F() // _sub_6C0A51F
{
    __DEBUG_ASM(6C0A51F);
    // chunk 0x6C0A51F _sub_6C0A51F
    asm("loc_6C0A51F: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A522: add $0x268,%ecx;");
    asm("loc_6C0A528: jmpl *_import_6C0B03C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A52E() // _SEH_6BDEA60
{
    __DEBUG_ASM(6C0A52E);
    // chunk 0x6C0A52E _sub_6C0A52E
    asm("loc_6C0A52E: mov $_data_6C0EBF8,%eax;");
    asm("loc_6C0A533: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A540() // _sub_6C0A540
{
    __DEBUG_ASM(6C0A540);
    // chunk 0x6C0A540 _sub_6C0A540
    asm("loc_6C0A540: mov -0x14(%ebp),%eax;");
    asm("loc_6C0A543: push %eax;");
    asm("loc_6C0A544: call _sub_6C09AAA;");
    asm("loc_6C0A549: pop %ecx;");
    asm("loc_6C0A54A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A54B() // _sub_6C0A54B
{
    __DEBUG_ASM(6C0A54B);
    // chunk 0x6C0A54B _sub_6C0A54B
    asm("loc_6C0A54B: mov -0x14(%ebp),%ecx;");
    asm("loc_6C0A54E: add $0x204,%ecx;");
    asm("loc_6C0A554: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A55A() // _sub_6C0A55A
{
    __DEBUG_ASM(6C0A55A);
    // chunk 0x6C0A55A _sub_6C0A55A
    asm("loc_6C0A55A: mov -0x14(%ebp),%ecx;");
    asm("loc_6C0A55D: add $0x214,%ecx;");
    asm("loc_6C0A563: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A569() // _sub_6C0A569
{
    __DEBUG_ASM(6C0A569);
    // chunk 0x6C0A569 _sub_6C0A569
    asm("loc_6C0A569: mov -0x14(%ebp),%ecx;");
    asm("loc_6C0A56C: add $0x264,%ecx;");
    asm("loc_6C0A572: jmp _sub_6BDC790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A577() // _SEH_6BDEBE0
{
    __DEBUG_ASM(6C0A577);
    // chunk 0x6C0A577 _sub_6C0A577
    asm("loc_6C0A577: mov $_data_6C0EC34,%eax;");
    asm("loc_6C0A57C: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A590() // _sub_6C0A590
{
    __DEBUG_ASM(6C0A590);
    // chunk 0x6C0A590 _sub_6C0A590
    asm("loc_6C0A590: mov -0x1C(%ebp),%eax;");
    asm("loc_6C0A593: push %eax;");
    asm("loc_6C0A594: call _sub_6C09AAA;");
    asm("loc_6C0A599: pop %ecx;");
    asm("loc_6C0A59A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A59B() // _sub_6C0A59B
{
    __DEBUG_ASM(6C0A59B);
    // chunk 0x6C0A59B _sub_6C0A59B
    asm("loc_6C0A59B: mov -0x1C(%ebp),%ecx;");
    asm("loc_6C0A59E: add $0x204,%ecx;");
    asm("loc_6C0A5A4: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A5AA() // _sub_6C0A5AA
{
    __DEBUG_ASM(6C0A5AA);
    // chunk 0x6C0A5AA _sub_6C0A5AA
    asm("loc_6C0A5AA: mov -0x1C(%ebp),%ecx;");
    asm("loc_6C0A5AD: add $0x214,%ecx;");
    asm("loc_6C0A5B3: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A5B9() // _sub_6C0A5B9
{
    __DEBUG_ASM(6C0A5B9);
    // chunk 0x6C0A5B9 _sub_6C0A5B9
    asm("loc_6C0A5B9: mov -0x1C(%ebp),%ecx;");
    asm("loc_6C0A5BC: add $0x264,%ecx;");
    asm("loc_6C0A5C2: jmp _sub_6BDC790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A5C7() // _SEH_6BDFB70
{
    __DEBUG_ASM(6C0A5C7);
    // chunk 0x6C0A5C7 _sub_6C0A5C7
    asm("loc_6C0A5C7: mov $_data_6C0EC70,%eax;");
    asm("loc_6C0A5CC: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A5E0() // _sub_6C0A5E0
{
    __DEBUG_ASM(6C0A5E0);
    // chunk 0x6C0A5E0 _sub_6C0A5E0
    asm("loc_6C0A5E0: mov -0x1C(%ebp),%eax;");
    asm("loc_6C0A5E3: push %eax;");
    asm("loc_6C0A5E4: call _sub_6C09AAA;");
    asm("loc_6C0A5E9: pop %ecx;");
    asm("loc_6C0A5EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A5EB() // _sub_6C0A5EB
{
    __DEBUG_ASM(6C0A5EB);
    // chunk 0x6C0A5EB _sub_6C0A5EB
    asm("loc_6C0A5EB: mov -0x1C(%ebp),%ecx;");
    asm("loc_6C0A5EE: add $0x204,%ecx;");
    asm("loc_6C0A5F4: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A5FA() // _sub_6C0A5FA
{
    __DEBUG_ASM(6C0A5FA);
    // chunk 0x6C0A5FA _sub_6C0A5FA
    asm("loc_6C0A5FA: mov -0x1C(%ebp),%ecx;");
    asm("loc_6C0A5FD: add $0x214,%ecx;");
    asm("loc_6C0A603: jmpl *_import_6C0B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A609() // _sub_6C0A609
{
    __DEBUG_ASM(6C0A609);
    // chunk 0x6C0A609 _sub_6C0A609
    asm("loc_6C0A609: mov -0x1C(%ebp),%ecx;");
    asm("loc_6C0A60C: add $0x264,%ecx;");
    asm("loc_6C0A612: jmp _sub_6BDC790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A617() // _SEH_6BE0CD0
{
    __DEBUG_ASM(6C0A617);
    // chunk 0x6C0A617 _sub_6C0A617
    asm("loc_6C0A617: mov $_data_6C0ECAC,%eax;");
    asm("loc_6C0A61C: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A630() // _sub_6C0A630
{
    __DEBUG_ASM(6C0A630);
    // chunk 0x6C0A630 _sub_6C0A630
    asm("loc_6C0A630: mov -0x10(%ebp),%eax;");
    asm("loc_6C0A633: push %eax;");
    asm("loc_6C0A634: call _sub_6C09AAA;");
    asm("loc_6C0A639: pop %ecx;");
    asm("loc_6C0A63A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A63B() // _unknown_libname_8
{
    __DEBUG_ASM(6C0A63B);
    // chunk 0x6C0A63B _sub_6C0A63B
    asm("loc_6C0A63B: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A63E: jmp _sub_6BDA1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A643() // _sub_6C0A643
{
    __DEBUG_ASM(6C0A643);
    // chunk 0x6C0A643 _sub_6C0A643
    asm("loc_6C0A643: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A646: add $8,%ecx;");
    asm("loc_6C0A649: jmp _sub_6BE1AE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A64E() // _SEH_6BE12A0
{
    __DEBUG_ASM(6C0A64E);
    // chunk 0x6C0A64E _sub_6C0A64E
    asm("loc_6C0A64E: mov $_data_6C0ECE0,%eax;");
    asm("loc_6C0A653: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A660() // _sub_6C0A660
{
    __DEBUG_ASM(6C0A660);
    // chunk 0x6C0A660 _sub_6C0A660
    asm("loc_6C0A660: mov -0x1C(%ebp),%ecx;");
    asm("loc_6C0A663: jmp _sub_6BDA1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A668() // _sub_6C0A668
{
    __DEBUG_ASM(6C0A668);
    // chunk 0x6C0A668 _sub_6C0A668
    asm("loc_6C0A668: mov -0x1C(%ebp),%ecx;");
    asm("loc_6C0A66B: add $8,%ecx;");
    asm("loc_6C0A66E: jmp _sub_6BE1AE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A673() // _SEH_6BE1380
{
    __DEBUG_ASM(6C0A673);
    // chunk 0x6C0A673 _sub_6C0A673
    asm("loc_6C0A673: mov $_data_6C0ED0C,%eax;");
    asm("loc_6C0A678: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A680() // _sub_6C0A680
{
    __DEBUG_ASM(6C0A680);
    // chunk 0x6C0A680 _sub_6C0A680
    asm("loc_6C0A680: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A683: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A688() // _SEH_6BE4A40
{
    __DEBUG_ASM(6C0A688);
    // chunk 0x6C0A688 _sub_6C0A688
    asm("loc_6C0A688: mov $_data_6C0ED30,%eax;");
    asm("loc_6C0A68D: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A6A0() // _sub_6C0A6A0
{
    __DEBUG_ASM(6C0A6A0);
    // chunk 0x6C0A6A0 _sub_6C0A6A0
    asm("loc_6C0A6A0: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A6A3: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A6A8() // _SEH_6BE4E90
{
    __DEBUG_ASM(6C0A6A8);
    // chunk 0x6C0A6A8 _sub_6C0A6A8
    asm("loc_6C0A6A8: mov $_data_6C0ED54,%eax;");
    asm("loc_6C0A6AD: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A6C0() // _sub_6C0A6C0
{
    __DEBUG_ASM(6C0A6C0);
    // chunk 0x6C0A6C0 _sub_6C0A6C0
    asm("loc_6C0A6C0: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A6C3: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A6C8() // _sub_6C0A6C8
{
    __DEBUG_ASM(6C0A6C8);
    // chunk 0x6C0A6C8 _sub_6C0A6C8
    asm("loc_6C0A6C8: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A6CB: add $0x30,%ecx;");
    asm("loc_6C0A6CE: jmp _sub_6BE1270;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A6D3() // _sub_6C0A6D3
{
    __DEBUG_ASM(6C0A6D3);
    // chunk 0x6C0A6D3 _sub_6C0A6D3
    asm("loc_6C0A6D3: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A6D6: add $0x70,%ecx;");
    asm("loc_6C0A6D9: jmp _sub_6BDC790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A6DE() // _sub_6C0A6DE
{
    __DEBUG_ASM(6C0A6DE);
    // chunk 0x6C0A6DE _sub_6C0A6DE
    asm("loc_6C0A6DE: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A6E1: add $0x74,%ecx;");
    asm("loc_6C0A6E4: jmpl *_import_6C0B03C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A6EA() // _SEH_6BE5340
{
    __DEBUG_ASM(6C0A6EA);
    // chunk 0x6C0A6EA _sub_6C0A6EA
    asm("loc_6C0A6EA: mov $_data_6C0ED90,%eax;");
    asm("loc_6C0A6EF: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A700() // _sub_6C0A700
{
    __DEBUG_ASM(6C0A700);
    // chunk 0x6C0A700 _sub_6C0A700
    asm("loc_6C0A700: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A703: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A708() // _SEH_6BE5900
{
    __DEBUG_ASM(6C0A708);
    // chunk 0x6C0A708 _sub_6C0A708
    asm("loc_6C0A708: mov $_data_6C0EDB4,%eax;");
    asm("loc_6C0A70D: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A720() // _sub_6C0A720
{
    __DEBUG_ASM(6C0A720);
    // chunk 0x6C0A720 _sub_6C0A720
    asm("loc_6C0A720: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A723: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A728() // _sub_6C0A728
{
    __DEBUG_ASM(6C0A728);
    // chunk 0x6C0A728 _sub_6C0A728
    asm("loc_6C0A728: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A72B: add $0x20,%ecx;");
    asm("loc_6C0A72E: jmp _sub_6BDABB0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A733() // _sub_6C0A733
{
    __DEBUG_ASM(6C0A733);
    // chunk 0x6C0A733 _sub_6C0A733
    asm("loc_6C0A733: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A736: add $0x28,%ecx;");
    asm("loc_6C0A739: jmp _sub_6BDABB0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A73E() // _SEH_6BE5A50
{
    __DEBUG_ASM(6C0A73E);
    // chunk 0x6C0A73E _sub_6C0A73E
    asm("loc_6C0A73E: mov $_data_6C0EDE8,%eax;");
    asm("loc_6C0A743: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A750() // _sub_6C0A750
{
    __DEBUG_ASM(6C0A750);
    // chunk 0x6C0A750 _sub_6C0A750
    asm("loc_6C0A750: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A753: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A758() // _SEH_6BE5D40
{
    __DEBUG_ASM(6C0A758);
    // chunk 0x6C0A758 _sub_6C0A758
    asm("loc_6C0A758: mov $_data_6C0EE0C,%eax;");
    asm("loc_6C0A75D: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A770() // _sub_6C0A770
{
    __DEBUG_ASM(6C0A770);
    // chunk 0x6C0A770 _sub_6C0A770
    asm("loc_6C0A770: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A773: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A778() // _sub_6C0A778
{
    __DEBUG_ASM(6C0A778);
    // chunk 0x6C0A778 _sub_6C0A778
    asm("loc_6C0A778: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A77B: add $0x28,%ecx;");
    asm("loc_6C0A77E: jmp _sub_6BDABB0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A783() // _sub_6C0A783
{
    __DEBUG_ASM(6C0A783);
    // chunk 0x6C0A783 _sub_6C0A783
    asm("loc_6C0A783: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A786: add $0x30,%ecx;");
    asm("loc_6C0A789: jmp _sub_6BDABB0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A78E() // _SEH_6BE63E0
{
    __DEBUG_ASM(6C0A78E);
    // chunk 0x6C0A78E _sub_6C0A78E
    asm("loc_6C0A78E: mov $_data_6C0EE40,%eax;");
    asm("loc_6C0A793: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A7A0() // _sub_6C0A7A0
{
    __DEBUG_ASM(6C0A7A0);
    // chunk 0x6C0A7A0 _sub_6C0A7A0
    asm("loc_6C0A7A0: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A7A3: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A7A8() // _sub_6C0A7A8
{
    __DEBUG_ASM(6C0A7A8);
    // chunk 0x6C0A7A8 _sub_6C0A7A8
    asm("loc_6C0A7A8: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A7AB: add $0x30,%ecx;");
    asm("loc_6C0A7AE: jmp _sub_6BE1270;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A7B3() // _sub_6C0A7B3
{
    __DEBUG_ASM(6C0A7B3);
    // chunk 0x6C0A7B3 _sub_6C0A7B3
    asm("loc_6C0A7B3: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A7B6: add $0x70,%ecx;");
    asm("loc_6C0A7B9: jmp _sub_6BDC790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A7BE() // _sub_6C0A7BE
{
    __DEBUG_ASM(6C0A7BE);
    // chunk 0x6C0A7BE _sub_6C0A7BE
    asm("loc_6C0A7BE: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A7C1: add $0x74,%ecx;");
    asm("loc_6C0A7C4: jmpl *_import_6C0B03C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A7CA() // _SEH_6BE7410
{
    __DEBUG_ASM(6C0A7CA);
    // chunk 0x6C0A7CA _sub_6C0A7CA
    asm("loc_6C0A7CA: mov $_data_6C0EE7C,%eax;");
    asm("loc_6C0A7CF: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A7E0() // _sub_6C0A7E0
{
    __DEBUG_ASM(6C0A7E0);
    // chunk 0x6C0A7E0 _sub_6C0A7E0
    asm("loc_6C0A7E0: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A7E3: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A7E8() // _sub_6C0A7E8
{
    __DEBUG_ASM(6C0A7E8);
    // chunk 0x6C0A7E8 _sub_6C0A7E8
    asm("loc_6C0A7E8: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A7EB: add $0x30,%ecx;");
    asm("loc_6C0A7EE: jmp _sub_6BE1270;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A7F3() // _sub_6C0A7F3
{
    __DEBUG_ASM(6C0A7F3);
    // chunk 0x6C0A7F3 _sub_6C0A7F3
    asm("loc_6C0A7F3: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A7F6: add $0x70,%ecx;");
    asm("loc_6C0A7F9: jmp _sub_6BDC790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A7FE() // _sub_6C0A7FE
{
    __DEBUG_ASM(6C0A7FE);
    // chunk 0x6C0A7FE _sub_6C0A7FE
    asm("loc_6C0A7FE: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A801: add $0x74,%ecx;");
    asm("loc_6C0A804: jmpl *_import_6C0B03C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A80A() // _SEH_6BE7520
{
    __DEBUG_ASM(6C0A80A);
    // chunk 0x6C0A80A _sub_6C0A80A
    asm("loc_6C0A80A: mov $_data_6C0EEB8,%eax;");
    asm("loc_6C0A80F: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A820() // _sub_6C0A820
{
    __DEBUG_ASM(6C0A820);
    // chunk 0x6C0A820 _sub_6C0A820
    asm("loc_6C0A820: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A823: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A828() // _SEH_6BE7690
{
    __DEBUG_ASM(6C0A828);
    // chunk 0x6C0A828 _sub_6C0A828
    asm("loc_6C0A828: mov $_data_6C0EEDC,%eax;");
    asm("loc_6C0A82D: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A840() // _sub_6C0A840
{
    __DEBUG_ASM(6C0A840);
    // chunk 0x6C0A840 _sub_6C0A840
    asm("loc_6C0A840: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A843: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A848() // _SEH_6BEBA40
{
    __DEBUG_ASM(6C0A848);
    // chunk 0x6C0A848 _sub_6C0A848
    asm("loc_6C0A848: mov $_data_6C0EF00,%eax;");
    asm("loc_6C0A84D: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A860() // _sub_6C0A860
{
    __DEBUG_ASM(6C0A860);
    // chunk 0x6C0A860 _sub_6C0A860
    asm("loc_6C0A860: lea -0x1C(%ebp),%ecx;");
    asm("loc_6C0A863: jmpl *_import_6C0B1C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A869() // _SEH_6BEC2D0
{
    __DEBUG_ASM(6C0A869);
    // chunk 0x6C0A869 _sub_6C0A869
    asm("loc_6C0A869: mov $_data_6C0EF24,%eax;");
    asm("loc_6C0A86E: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A880() // _sub_6C0A880
{
    __DEBUG_ASM(6C0A880);
    // chunk 0x6C0A880 _sub_6C0A880
    asm("loc_6C0A880: lea -0x74(%ebp),%ecx;");
    asm("loc_6C0A883: jmp _sub_6BEC4E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A888() // _sub_6C0A888
{
    __DEBUG_ASM(6C0A888);
    // chunk 0x6C0A888 _sub_6C0A888
    asm("loc_6C0A888: lea -0x44(%ebp),%ecx;");
    asm("loc_6C0A88B: jmp _sub_6BEC4F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A890() // _SEH_6BEC430
{
    __DEBUG_ASM(6C0A890);
    // chunk 0x6C0A890 _sub_6C0A890
    asm("loc_6C0A890: mov $_data_6C0EF50,%eax;");
    asm("loc_6C0A895: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A8A0() // _sub_6C0A8A0
{
    __DEBUG_ASM(6C0A8A0);
    // chunk 0x6C0A8A0 _sub_6C0A8A0
    asm("loc_6C0A8A0: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A8A3: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A8A8() // ??1_Locimp@locale@std@@UAE@XZ_SEH
{
    __DEBUG_ASM(6C0A8A8);
    // chunk 0x6C0A8A8 _sub_6C0A8A8
    asm("loc_6C0A8A8: mov $_data_6C0EF74,%eax;");
    asm("loc_6C0A8AD: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A8C0() // _sub_6C0A8C0
{
    __DEBUG_ASM(6C0A8C0);
    // chunk 0x6C0A8C0 _sub_6C0A8C0
    asm("loc_6C0A8C0: lea -0x30(%ebp),%ecx;");
    asm("loc_6C0A8C3: jmpl *_import_6C0B1C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A8C9() // _sub_6C0A8C9
{
    __DEBUG_ASM(6C0A8C9);
    // chunk 0x6C0A8C9 _sub_6C0A8C9
    asm("loc_6C0A8C9: lea -0x20(%ebp),%ecx;");
    asm("loc_6C0A8CC: jmp _sub_6BED880;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A8D1() // _SEH_6BED590
{
    __DEBUG_ASM(6C0A8D1);
    // chunk 0x6C0A8D1 _sub_6C0A8D1
    asm("loc_6C0A8D1: mov $_data_6C0EFA0,%eax;");
    asm("loc_6C0A8D6: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A8E0() // _sub_6C0A8E0
{
    __DEBUG_ASM(6C0A8E0);
    // chunk 0x6C0A8E0 _sub_6C0A8E0
    asm("loc_6C0A8E0: lea -0x1C(%ebp),%ecx;");
    asm("loc_6C0A8E3: jmpl *_import_6C0B1C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A8E9() // _SEH_6BED6F0
{
    __DEBUG_ASM(6C0A8E9);
    // chunk 0x6C0A8E9 _sub_6C0A8E9
    asm("loc_6C0A8E9: mov $_data_6C0EFC4,%eax;");
    asm("loc_6C0A8EE: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A900() // _sub_6C0A900
{
    __DEBUG_ASM(6C0A900);
    // chunk 0x6C0A900 _sub_6C0A900
    asm("loc_6C0A900: mov 4(%ebp),%eax;");
    asm("loc_6C0A903: push %eax;");
    asm("loc_6C0A904: mov -0x10(%ebp),%ecx;");
    asm("loc_6C0A907: push %ecx;");
    asm("loc_6C0A908: call _sub_6BDA0F0;");
    asm("loc_6C0A90D: add $8,%esp;");
    asm("loc_6C0A910: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A911() // _SEH_6BEE370
{
    __DEBUG_ASM(6C0A911);
    // chunk 0x6C0A911 _sub_6C0A911
    asm("loc_6C0A911: mov $_data_6C0EFE8,%eax;");
    asm("loc_6C0A916: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A920() // _sub_6C0A920
{
    __DEBUG_ASM(6C0A920);
    // chunk 0x6C0A920 _sub_6C0A920
    asm("loc_6C0A920: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A923: jmp _sub_6BEBE40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A928() // _sub_6C0A928
{
    __DEBUG_ASM(6C0A928);
    // chunk 0x6C0A928 _sub_6C0A928
    asm("loc_6C0A928: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A92B: add $0x30,%ecx;");
    asm("loc_6C0A92E: jmp _sub_6BE1270;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A933() // _sub_6C0A933
{
    __DEBUG_ASM(6C0A933);
    // chunk 0x6C0A933 _sub_6C0A933
    asm("loc_6C0A933: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A936: add $0x70,%ecx;");
    asm("loc_6C0A939: jmp _sub_6BDC790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A93E() // _sub_6C0A93E
{
    __DEBUG_ASM(6C0A93E);
    // chunk 0x6C0A93E _sub_6C0A93E
    asm("loc_6C0A93E: mov -0x18(%ebp),%ecx;");
    asm("loc_6C0A941: add $0x74,%ecx;");
    asm("loc_6C0A944: jmpl *_import_6C0B03C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6C0A94A() // _SEH_6BF0C10
{
    __DEBUG_ASM(6C0A94A);
    // chunk 0x6C0A94A _sub_6C0A94A
    asm("loc_6C0A94A: mov $_data_6C0F024,%eax;");
    asm("loc_6C0A94F: jmp _sub_6C09D2C;");
    asm("int3;"); // unreachable
}
#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __INTELLISENSE__
