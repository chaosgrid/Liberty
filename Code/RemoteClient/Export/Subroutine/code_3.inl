#ifndef __INTELLISENSE__
// clang-format off
#include "..\..\PCH.h"
#pragma init_seg(lib)
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

_naked _weak void _sub_6B62610() // _sub_6B62610
{
    __DEBUG_ASM(6B62610);
    // chunk 0x6B62610 _sub_6B62610
    asm("loc_6B62610: mov _data_6B6E8E8,%eax;");
    asm("loc_6B62615: mov %eax,_data_6B74450;");
    asm("loc_6B6261A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62620() // _sub_6B62620
{
    __DEBUG_ASM(6B62620);
    // chunk 0x6B62620 _sub_6B62620
    asm("loc_6B62620: mov _data_6B6E8E8,%eax;");
    asm("loc_6B62625: mov %eax,_data_6B74454;");
    asm("loc_6B6262A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62630() // _sub_6B62630
{
    __DEBUG_ASM(6B62630);
    // chunk 0x6B62630 _sub_6B62630
    asm("loc_6B62630: mov _data_6B6E8EC,%eax;");
    asm("loc_6B62635: mov %eax,_data_6B7444C;");
    asm("loc_6B6263A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62640() // _sub_6B62640
{
    __DEBUG_ASM(6B62640);
    // chunk 0x6B62640 _sub_6B62640
    asm("loc_6B62640: mov 4(%esp),%eax;");
    asm("loc_6B62644: push %ebx;");
    asm("loc_6B62645: push %ebp;");
    asm("loc_6B62646: push %esi;");
    asm("loc_6B62647: mov %ecx,%ebp;");
    asm("loc_6B62649: push %edi;");
    asm("loc_6B6264A: mov 0x18(%esp),%edi;");
    asm("loc_6B6264E: lea 0x10(%ebp),%ebx;");
    asm("loc_6B62651: mov %edi,4(%ebx);");
    asm("loc_6B62654: mov (%eax),%ecx;");
    asm("loc_6B62656: mov %ecx,8(%ebx);");
    asm("loc_6B62659: movl $0,(%ebx);");
    asm("loc_6B6265F: movl $0,0xC(%ebx);");
    asm("loc_6B62666: mov 0x14(%ebp),%edx;");
    asm("loc_6B62669: push %ebx;");
    asm("loc_6B6266A: push %edx;");
    asm("loc_6B6266B: lea 0x18(%ebp),%esi;");
    asm("loc_6B6266E: push %esi;");
    asm("loc_6B6266F: mov %ebp,%ecx;");
    asm("loc_6B62671: call _sub_6B4E740;");
    asm("loc_6B62676: test %eax,%eax;");
    asm("loc_6B62678: mov %eax,0x1C(%ebp);");
    asm("loc_6B6267B: je loc_6B62689;");
    asm("loc_6B6267D: pop %edi;");
    asm("loc_6B6267E: pop %esi;");
    asm("loc_6B6267F: pop %ebp;");
    asm("loc_6B62680: mov $0x16,%eax;");
    asm("loc_6B62685: pop %ebx;");
    asm("loc_6B62686: ret $0xC;");
    asm("loc_6B62689: mov 0x1C(%esp),%eax;");
    asm("loc_6B6268D: mov 0x14(%esp),%ecx;");
    asm("loc_6B62691: push %eax;");
    asm("loc_6B62692: push %edi;");
    asm("loc_6B62693: push %ecx;");
    asm("loc_6B62694: mov %ebp,%ecx;");
    asm("loc_6B62696: call _sub_6B50E50;");
    asm("loc_6B6269B: mov (%ebx),%edx;");
    asm("loc_6B6269D: mov 4(%ebx),%ecx;");
    asm("loc_6B626A0: inc %edx;");
    asm("loc_6B626A1: mov %edx,%eax;");
    asm("loc_6B626A3: cmp %ecx,%eax;");
    asm("loc_6B626A5: mov %edx,(%ebx);");
    asm("loc_6B626A7: jbe loc_6B626B0;");
    asm("loc_6B626A9: movl $0x16,0xC(%ebx);");
    asm("loc_6B626B0: mov 0x1C(%ebp),%eax;");
    asm("loc_6B626B3: test %eax,%eax;");
    asm("loc_6B626B5: je loc_6B626C3;");
    asm("loc_6B626B7: pop %edi;");
    asm("loc_6B626B8: pop %esi;");
    asm("loc_6B626B9: pop %ebp;");
    asm("loc_6B626BA: mov $0x16,%eax;");
    asm("loc_6B626BF: pop %ebx;");
    asm("loc_6B626C0: ret $0xC;");
    asm("loc_6B626C3: mov (%esi),%eax;");
    asm("loc_6B626C5: mov 0x9C(%ebp),%dl;");
    asm("loc_6B626CB: mov %dl,(%eax);");
    asm("loc_6B626CD: inc %eax;");
    asm("loc_6B626CE: mov %eax,(%esi);");
    asm("loc_6B626D0: mov (%ebx),%edx;");
    asm("loc_6B626D2: mov 4(%ebx),%ecx;");
    asm("loc_6B626D5: inc %edx;");
    asm("loc_6B626D6: mov %edx,%eax;");
    asm("loc_6B626D8: cmp %ecx,%eax;");
    asm("loc_6B626DA: mov %edx,(%ebx);");
    asm("loc_6B626DC: jbe loc_6B626E5;");
    asm("loc_6B626DE: movl $0x16,0xC(%ebx);");
    asm("loc_6B626E5: mov 0x1C(%ebp),%eax;");
    asm("loc_6B626E8: test %eax,%eax;");
    asm("loc_6B626EA: je loc_6B626F8;");
    asm("loc_6B626EC: pop %edi;");
    asm("loc_6B626ED: pop %esi;");
    asm("loc_6B626EE: pop %ebp;");
    asm("loc_6B626EF: mov $0x16,%eax;");
    asm("loc_6B626F4: pop %ebx;");
    asm("loc_6B626F5: ret $0xC;");
    asm("loc_6B626F8: mov (%esi),%eax;");
    asm("loc_6B626FA: mov 0x9D(%ebp),%cl;");
    asm("loc_6B62700: mov %cl,(%eax);");
    asm("loc_6B62702: inc %eax;");
    asm("loc_6B62703: mov %eax,(%esi);");
    asm("loc_6B62705: calll *_import_6B6B0A4;");
    asm("loc_6B6270B: test %al,%al;");
    asm("loc_6B6270D: jne loc_6B62896;");
    asm("loc_6B62713: mov (%ebx),%edx;");
    asm("loc_6B62715: mov 4(%ebx),%ecx;");
    asm("loc_6B62718: add $4,%edx;");
    asm("loc_6B6271B: mov %edx,%eax;");
    asm("loc_6B6271D: cmp %ecx,%eax;");
    asm("loc_6B6271F: mov %edx,(%ebx);");
    asm("loc_6B62721: jbe loc_6B6272A;");
    asm("loc_6B62723: movl $0x16,0xC(%ebx);");
    asm("loc_6B6272A: mov 0x1C(%ebp),%eax;");
    asm("loc_6B6272D: test %eax,%eax;");
    asm("loc_6B6272F: je loc_6B6273D;");
    asm("loc_6B62731: pop %edi;");
    asm("loc_6B62732: pop %esi;");
    asm("loc_6B62733: pop %ebp;");
    asm("loc_6B62734: mov $0x16,%eax;");
    asm("loc_6B62739: pop %ebx;");
    asm("loc_6B6273A: ret $0xC;");
    asm("loc_6B6273D: mov (%esi),%eax;");
    asm("loc_6B6273F: mov 0xB0(%ebp),%edx;");
    asm("loc_6B62745: mov %edx,(%eax);");
    asm("loc_6B62747: flds 0xB4(%ebp);");
    asm("loc_6B6274D: fmull _data_6B6C1E0;");
    asm("loc_6B62753: add $4,%eax;");
    asm("loc_6B62756: mov %eax,(%esi);");
    asm("loc_6B62758: call _sub_6B6A3F8;");
    asm("loc_6B6275D: mov (%ebx),%ecx;");
    asm("loc_6B6275F: mov %al,%dl;");
    asm("loc_6B62761: mov 4(%ebx),%eax;");
    asm("loc_6B62764: inc %ecx;");
    asm("loc_6B62765: cmp %eax,%ecx;");
    asm("loc_6B62767: mov %ecx,(%ebx);");
    asm("loc_6B62769: mov $0x16,%eax;");
    asm("loc_6B6276E: jbe loc_6B62773;");
    asm("loc_6B62770: mov %eax,0xC(%ebx);");
    asm("loc_6B62773: mov 0x1C(%ebp),%ecx;");
    asm("loc_6B62776: test %ecx,%ecx;");
    asm("loc_6B62778: jne loc_6B628F6;");
    asm("loc_6B6277E: mov (%esi),%ecx;");
    asm("loc_6B62780: mov %dl,(%ecx);");
    asm("loc_6B62782: inc %ecx;");
    asm("loc_6B62783: mov %ecx,(%esi);");
    asm("loc_6B62785: mov (%ebx),%edi;");
    asm("loc_6B62787: mov 4(%ebx),%edx;");
    asm("loc_6B6278A: add $4,%edi;");
    asm("loc_6B6278D: mov %edi,%ecx;");
    asm("loc_6B6278F: cmp %edx,%ecx;");
    asm("loc_6B62791: mov %edi,(%ebx);");
    asm("loc_6B62793: jbe loc_6B62798;");
    asm("loc_6B62795: mov %eax,0xC(%ebx);");
    asm("loc_6B62798: mov 0x1C(%ebp),%ecx;");
    asm("loc_6B6279B: test %ecx,%ecx;");
    asm("loc_6B6279D: jne loc_6B628F6;");
    asm("loc_6B627A3: mov (%esi),%ecx;");
    asm("loc_6B627A5: mov 0xA0(%ebp),%edx;");
    asm("loc_6B627AB: mov %edx,(%ecx);");
    asm("loc_6B627AD: add $4,%ecx;");
    asm("loc_6B627B0: mov %ecx,(%esi);");
    asm("loc_6B627B2: mov 0xA0(%ebp),%ecx;");
    asm("loc_6B627B8: mov (%ebx),%edi;");
    asm("loc_6B627BA: mov 4(%ebx),%edx;");
    asm("loc_6B627BD: add %ecx,%edi;");
    asm("loc_6B627BF: mov %edi,%ecx;");
    asm("loc_6B627C1: cmp %edx,%ecx;");
    asm("loc_6B627C3: mov %edi,(%ebx);");
    asm("loc_6B627C5: jbe loc_6B627CA;");
    asm("loc_6B627C7: mov %eax,0xC(%ebx);");
    asm("loc_6B627CA: mov 0x1C(%ebp),%ecx;");
    asm("loc_6B627CD: test %ecx,%ecx;");
    asm("loc_6B627CF: jne loc_6B628F6;");
    asm("loc_6B627D5: mov 0xA0(%ebp),%eax;");
    asm("loc_6B627DB: mov (%esi),%edi;");
    asm("loc_6B627DD: mov 0xA4(%ebp),%esi;");
    asm("loc_6B627E3: mov %eax,%ecx;");
    asm("loc_6B627E5: mov %ecx,%edx;");
    asm("loc_6B627E7: shr $2,%ecx;");
    asm("loc_6B627EA: mov %edi,0x14(%esp);");
    asm("loc_6B627EE: rep movsl (%esi),(%edi);");
    asm("loc_6B627F0: mov %edx,%ecx;");
    asm("loc_6B627F2: and $3,%ecx;");
    asm("loc_6B627F5: rep movsb (%esi),(%edi);");
    asm("loc_6B627F7: mov 0x14(%esp),%ecx;");
    asm("loc_6B627FB: add %eax,%ecx;");
    asm("loc_6B627FD: mov %ecx,0x18(%ebp);");
    asm("loc_6B62800: mov (%ebx),%edx;");
    asm("loc_6B62802: mov 4(%ebx),%ecx;");
    asm("loc_6B62805: add $4,%edx;");
    asm("loc_6B62808: mov %edx,%eax;");
    asm("loc_6B6280A: cmp %ecx,%eax;");
    asm("loc_6B6280C: mov %edx,(%ebx);");
    asm("loc_6B6280E: jbe loc_6B62817;");
    asm("loc_6B62810: movl $0x16,0xC(%ebx);");
    asm("loc_6B62817: mov 0x1C(%ebp),%eax;");
    asm("loc_6B6281A: test %eax,%eax;");
    asm("loc_6B6281C: je loc_6B6282A;");
    asm("loc_6B6281E: pop %edi;");
    asm("loc_6B6281F: pop %esi;");
    asm("loc_6B62820: pop %ebp;");
    asm("loc_6B62821: mov $0x16,%eax;");
    asm("loc_6B62826: pop %ebx;");
    asm("loc_6B62827: ret $0xC;");
    asm("loc_6B6282A: mov 0x18(%ebp),%eax;");
    asm("loc_6B6282D: mov 0xA8(%ebp),%edx;");
    asm("loc_6B62833: mov %edx,(%eax);");
    asm("loc_6B62835: add $4,%eax;");
    asm("loc_6B62838: mov %eax,0x18(%ebp);");
    asm("loc_6B6283B: mov 0xA8(%ebp),%eax;");
    asm("loc_6B62841: mov (%ebx),%edx;");
    asm("loc_6B62843: mov 4(%ebx),%ecx;");
    asm("loc_6B62846: add %eax,%edx;");
    asm("loc_6B62848: mov %edx,%eax;");
    asm("loc_6B6284A: cmp %ecx,%eax;");
    asm("loc_6B6284C: mov %edx,(%ebx);");
    asm("loc_6B6284E: jbe loc_6B62857;");
    asm("loc_6B62850: movl $0x16,0xC(%ebx);");
    asm("loc_6B62857: mov 0x1C(%ebp),%eax;");
    asm("loc_6B6285A: test %eax,%eax;");
    asm("loc_6B6285C: je loc_6B6286A;");
    asm("loc_6B6285E: pop %edi;");
    asm("loc_6B6285F: pop %esi;");
    asm("loc_6B62860: pop %ebp;");
    asm("loc_6B62861: mov $0x16,%eax;");
    asm("loc_6B62866: pop %ebx;");
    asm("loc_6B62867: ret $0xC;");
    asm("loc_6B6286A: mov 0xA8(%ebp),%eax;");
    asm("loc_6B62870: mov 0x18(%ebp),%edi;");
    asm("loc_6B62873: mov 0xAC(%ebp),%esi;");
    asm("loc_6B62879: mov %eax,%ecx;");
    asm("loc_6B6287B: mov %ecx,%edx;");
    asm("loc_6B6287D: shr $2,%ecx;");
    asm("loc_6B62880: mov %edi,0x14(%esp);");
    asm("loc_6B62884: rep movsl (%esi),(%edi);");
    asm("loc_6B62886: mov %edx,%ecx;");
    asm("loc_6B62888: and $3,%ecx;");
    asm("loc_6B6288B: rep movsb (%esi),(%edi);");
    asm("loc_6B6288D: mov 0x14(%esp),%ecx;");
    asm("loc_6B62891: add %eax,%ecx;");
    asm("loc_6B62893: mov %ecx,0x18(%ebp);");
    asm("loc_6B62896: mov 0x14(%ebp),%edx;");
    asm("loc_6B62899: push %ebx;");
    asm("loc_6B6289A: push %edx;");
    asm("loc_6B6289B: lea 0x18(%ebp),%eax;");
    asm("loc_6B6289E: push %eax;");
    asm("loc_6B6289F: mov %ebp,%ecx;");
    asm("loc_6B628A1: call _sub_6B4E790;");
    asm("loc_6B628A6: test %eax,%eax;");
    asm("loc_6B628A8: mov %eax,0x1C(%ebp);");
    asm("loc_6B628AB: je loc_6B628B9;");
    asm("loc_6B628AD: pop %edi;");
    asm("loc_6B628AE: pop %esi;");
    asm("loc_6B628AF: pop %ebp;");
    asm("loc_6B628B0: mov $0x16,%eax;");
    asm("loc_6B628B5: pop %ebx;");
    asm("loc_6B628B6: ret $0xC;");
    asm("loc_6B628B9: mov (%ebx),%eax;");
    asm("loc_6B628BB: mov 0x1C(%esp),%ecx;");
    asm("loc_6B628BF: mov %eax,(%ecx);");
    asm("loc_6B628C1: mov 0xC(%ebp),%edx;");
    asm("loc_6B628C4: push %edx;");
    asm("loc_6B628C5: call _sub_6B4ECD0;");
    asm("loc_6B628CA: mov %eax,%ecx;");
    asm("loc_6B628CC: mov (%ecx),%esi;");
    asm("loc_6B628CE: mov 0x18(%ecx),%edx;");
    asm("loc_6B628D1: add $4,%esp;");
    asm("loc_6B628D4: inc %esi;");
    asm("loc_6B628D5: mov %esi,(%ecx);");
    asm("loc_6B628D7: mov (%ebx),%eax;");
    asm("loc_6B628D9: add %eax,%edx;");
    asm("loc_6B628DB: mov 0x10(%ecx),%eax;");
    asm("loc_6B628DE: mov %edx,0x18(%ecx);");
    asm("loc_6B628E1: mov (%ebx),%ebx;");
    asm("loc_6B628E3: cmp %eax,%ebx;");
    asm("loc_6B628E5: jbe loc_6B628EA;");
    asm("loc_6B628E7: mov %ebx,0x10(%ecx);");
    asm("loc_6B628EA: mov 0x18(%ecx),%eax;");
    asm("loc_6B628ED: xor %edx,%edx;");
    asm("loc_6B628EF: div %esi;");
    asm("loc_6B628F1: mov %eax,8(%ecx);");
    asm("loc_6B628F4: xor %eax,%eax;");
    asm("loc_6B628F6: pop %edi;");
    asm("loc_6B628F7: pop %esi;");
    asm("loc_6B628F8: pop %ebp;");
    asm("loc_6B628F9: pop %ebx;");
    asm("loc_6B628FA: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62900() // _sub_6B62900
{
    __DEBUG_ASM(6B62900);
    // chunk 0x6B62900 _sub_6B62900
    asm("loc_6B62900: mov 4(%esp),%eax;");
    asm("loc_6B62904: push %ebx;");
    asm("loc_6B62905: push %ebp;");
    asm("loc_6B62906: mov 0x10(%esp),%ebp;");
    asm("loc_6B6290A: push %esi;");
    asm("loc_6B6290B: push %edi;");
    asm("loc_6B6290C: mov %ecx,%edi;");
    asm("loc_6B6290E: lea 0x10(%edi),%esi;");
    asm("loc_6B62911: push %esi;");
    asm("loc_6B62912: push %ebp;");
    asm("loc_6B62913: lea 0x18(%edi),%ebx;");
    asm("loc_6B62916: push %ebx;");
    asm("loc_6B62917: mov %ebp,4(%esi);");
    asm("loc_6B6291A: mov %eax,8(%esi);");
    asm("loc_6B6291D: movl $0,(%esi);");
    asm("loc_6B62923: movl $0,0xC(%esi);");
    asm("loc_6B6292A: call _sub_6B4E780;");
    asm("loc_6B6292F: test %eax,%eax;");
    asm("loc_6B62931: mov %eax,0x1C(%edi);");
    asm("loc_6B62934: je loc_6B62942;");
    asm("loc_6B62936: pop %edi;");
    asm("loc_6B62937: pop %esi;");
    asm("loc_6B62938: pop %ebp;");
    asm("loc_6B62939: mov $0x17,%eax;");
    asm("loc_6B6293E: pop %ebx;");
    asm("loc_6B6293F: ret $0xC;");
    asm("loc_6B62942: mov 0x1C(%esp),%ecx;");
    asm("loc_6B62946: mov 0x14(%esp),%edx;");
    asm("loc_6B6294A: push %ecx;");
    asm("loc_6B6294B: push %ebp;");
    asm("loc_6B6294C: push %edx;");
    asm("loc_6B6294D: mov %edi,%ecx;");
    asm("loc_6B6294F: call _sub_6B51750;");
    asm("loc_6B62954: mov (%esi),%edx;");
    asm("loc_6B62956: mov 4(%esi),%ecx;");
    asm("loc_6B62959: inc %edx;");
    asm("loc_6B6295A: mov %edx,%eax;");
    asm("loc_6B6295C: cmp %ecx,%eax;");
    asm("loc_6B6295E: mov %edx,(%esi);");
    asm("loc_6B62960: mov $0x17,%ebp;");
    asm("loc_6B62965: jbe loc_6B6296A;");
    asm("loc_6B62967: mov %ebp,0xC(%esi);");
    asm("loc_6B6296A: mov 0x1C(%edi),%eax;");
    asm("loc_6B6296D: test %eax,%eax;");
    asm("loc_6B6296F: jne loc_6B62AAD;");
    asm("loc_6B62975: mov (%ebx),%eax;");
    asm("loc_6B62977: mov (%eax),%cl;");
    asm("loc_6B62979: inc %eax;");
    asm("loc_6B6297A: mov %eax,(%ebx);");
    asm("loc_6B6297C: mov %cl,0x9C(%edi);");
    asm("loc_6B62982: mov (%esi),%edx;");
    asm("loc_6B62984: mov 4(%esi),%ecx;");
    asm("loc_6B62987: inc %edx;");
    asm("loc_6B62988: mov %edx,%eax;");
    asm("loc_6B6298A: cmp %ecx,%eax;");
    asm("loc_6B6298C: mov %edx,(%esi);");
    asm("loc_6B6298E: jbe loc_6B62993;");
    asm("loc_6B62990: mov %ebp,0xC(%esi);");
    asm("loc_6B62993: mov 0x1C(%edi),%eax;");
    asm("loc_6B62996: test %eax,%eax;");
    asm("loc_6B62998: jne loc_6B62AAD;");
    asm("loc_6B6299E: mov (%ebx),%eax;");
    asm("loc_6B629A0: mov (%eax),%dl;");
    asm("loc_6B629A2: inc %eax;");
    asm("loc_6B629A3: mov %dl,0x9D(%edi);");
    asm("loc_6B629A9: mov %eax,(%ebx);");
    asm("loc_6B629AB: calll *_import_6B6B0A4;");
    asm("loc_6B629B1: test %al,%al;");
    asm("loc_6B629B3: jne loc_6B62A44;");
    asm("loc_6B629B9: mov (%esi),%edx;");
    asm("loc_6B629BB: mov 4(%esi),%ecx;");
    asm("loc_6B629BE: add $4,%edx;");
    asm("loc_6B629C1: mov %edx,%eax;");
    asm("loc_6B629C3: cmp %ecx,%eax;");
    asm("loc_6B629C5: mov %edx,(%esi);");
    asm("loc_6B629C7: jbe loc_6B629D0;");
    asm("loc_6B629C9: movl $0x17,0xC(%esi);");
    asm("loc_6B629D0: mov 0x1C(%edi),%eax;");
    asm("loc_6B629D3: test %eax,%eax;");
    asm("loc_6B629D5: jne loc_6B62AAD;");
    asm("loc_6B629DB: mov (%ebx),%eax;");
    asm("loc_6B629DD: mov (%eax),%ecx;");
    asm("loc_6B629DF: add $4,%eax;");
    asm("loc_6B629E2: mov %eax,(%ebx);");
    asm("loc_6B629E4: mov %ecx,0xB0(%edi);");
    asm("loc_6B629EA: mov (%esi),%edx;");
    asm("loc_6B629EC: mov 4(%esi),%ecx;");
    asm("loc_6B629EF: inc %edx;");
    asm("loc_6B629F0: mov %edx,%eax;");
    asm("loc_6B629F2: cmp %ecx,%eax;");
    asm("loc_6B629F4: mov %edx,(%esi);");
    asm("loc_6B629F6: jbe loc_6B629FF;");
    asm("loc_6B629F8: movl $0x17,0xC(%esi);");
    asm("loc_6B629FF: mov 0x1C(%edi),%eax;");
    asm("loc_6B62A02: test %eax,%eax;");
    asm("loc_6B62A04: jne loc_6B62AAD;");
    asm("loc_6B62A0A: mov (%ebx),%eax;");
    asm("loc_6B62A0C: mov (%eax),%cl;");
    asm("loc_6B62A0E: movsbl %cl,%edx;");
    asm("loc_6B62A11: mov %edx,0x14(%esp);");
    asm("loc_6B62A15: inc %eax;");
    asm("loc_6B62A16: mov %eax,(%ebx);");
    asm("loc_6B62A18: fildl 0x14(%esp);");
    asm("loc_6B62A1C: lea 0xA0(%edi),%eax;");
    asm("loc_6B62A22: push %eax;");
    asm("loc_6B62A23: fmull _data_6B6C1E8;");
    asm("loc_6B62A29: mov %edi,%ecx;");
    asm("loc_6B62A2B: fstps 0xB4(%edi);");
    asm("loc_6B62A31: call _sub_6B4EB30;");
    asm("loc_6B62A36: lea 0xA8(%edi),%ecx;");
    asm("loc_6B62A3C: push %ecx;");
    asm("loc_6B62A3D: mov %edi,%ecx;");
    asm("loc_6B62A3F: call _sub_6B4EB30;");
    asm("loc_6B62A44: mov 0x18(%esp),%edx;");
    asm("loc_6B62A48: push %esi;");
    asm("loc_6B62A49: push %edx;");
    asm("loc_6B62A4A: push %ebx;");
    asm("loc_6B62A4B: mov %edi,%ecx;");
    asm("loc_6B62A4D: call _sub_6B4E7A0;");
    asm("loc_6B62A52: test %eax,%eax;");
    asm("loc_6B62A54: mov %eax,0x1C(%edi);");
    asm("loc_6B62A57: je loc_6B62A65;");
    asm("loc_6B62A59: pop %edi;");
    asm("loc_6B62A5A: pop %esi;");
    asm("loc_6B62A5B: pop %ebp;");
    asm("loc_6B62A5C: mov $0x17,%eax;");
    asm("loc_6B62A61: pop %ebx;");
    asm("loc_6B62A62: ret $0xC;");
    asm("loc_6B62A65: mov (%esi),%eax;");
    asm("loc_6B62A67: mov 0x1C(%esp),%ecx;");
    asm("loc_6B62A6B: mov %eax,(%ecx);");
    asm("loc_6B62A6D: mov 0xC(%edi),%edx;");
    asm("loc_6B62A70: push %edx;");
    asm("loc_6B62A71: call _sub_6B4ECD0;");
    asm("loc_6B62A76: mov %eax,%ecx;");
    asm("loc_6B62A78: mov 4(%ecx),%edi;");
    asm("loc_6B62A7B: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B62A7E: mov 0x14(%ecx),%edx;");
    asm("loc_6B62A81: add $4,%esp;");
    asm("loc_6B62A84: inc %edi;");
    asm("loc_6B62A85: mov %edi,4(%ecx);");
    asm("loc_6B62A88: mov (%esi),%eax;");
    asm("loc_6B62A8A: add $2,%eax;");
    asm("loc_6B62A8D: add %eax,%ebp;");
    asm("loc_6B62A8F: mov %ebp,0x1C(%ecx);");
    asm("loc_6B62A92: mov (%esi),%esi;");
    asm("loc_6B62A94: add $2,%edx;");
    asm("loc_6B62A97: cmp %edx,%esi;");
    asm("loc_6B62A99: jbe loc_6B62AA1;");
    asm("loc_6B62A9B: add $2,%esi;");
    asm("loc_6B62A9E: mov %esi,0x14(%ecx);");
    asm("loc_6B62AA1: mov 0x1C(%ecx),%eax;");
    asm("loc_6B62AA4: xor %edx,%edx;");
    asm("loc_6B62AA6: div %edi;");
    asm("loc_6B62AA8: mov %eax,0xC(%ecx);");
    asm("loc_6B62AAB: xor %eax,%eax;");
    asm("loc_6B62AAD: pop %edi;");
    asm("loc_6B62AAE: pop %esi;");
    asm("loc_6B62AAF: pop %ebp;");
    asm("loc_6B62AB0: pop %ebx;");
    asm("loc_6B62AB1: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62AC0() // _sub_6B62AC0
{
    __DEBUG_ASM(6B62AC0);
    // chunk 0x6B62AC0 _sub_6B62AC0
    asm("loc_6B62AC0: mov _data_6B6E8F8,%eax;");
    asm("loc_6B62AC5: mov %eax,_data_6B74460;");
    asm("loc_6B62ACA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62AD0() // _sub_6B62AD0
{
    __DEBUG_ASM(6B62AD0);
    // chunk 0x6B62AD0 _sub_6B62AD0
    asm("loc_6B62AD0: mov _data_6B6E8F8,%eax;");
    asm("loc_6B62AD5: mov %eax,_data_6B74464;");
    asm("loc_6B62ADA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62AE0() // _sub_6B62AE0
{
    __DEBUG_ASM(6B62AE0);
    // chunk 0x6B62AE0 _sub_6B62AE0
    asm("loc_6B62AE0: mov _data_6B6E8FC,%eax;");
    asm("loc_6B62AE5: mov %eax,_data_6B7445C;");
    asm("loc_6B62AEA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62AF0() // _sub_6B62AF0
{
    __DEBUG_ASM(6B62AF0);
    // chunk 0x6B62AF0 _sub_6B62AF0
    asm("loc_6B62AF0: mov _data_6B6E908,%eax;");
    asm("loc_6B62AF5: mov %eax,_data_6B74470;");
    asm("loc_6B62AFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62B00() // _sub_6B62B00
{
    __DEBUG_ASM(6B62B00);
    // chunk 0x6B62B00 _sub_6B62B00
    asm("loc_6B62B00: mov _data_6B6E908,%eax;");
    asm("loc_6B62B05: mov %eax,_data_6B74474;");
    asm("loc_6B62B0A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62B10() // _sub_6B62B10
{
    __DEBUG_ASM(6B62B10);
    // chunk 0x6B62B10 _sub_6B62B10
    asm("loc_6B62B10: mov _data_6B6E90C,%eax;");
    asm("loc_6B62B15: mov %eax,_data_6B7446C;");
    asm("loc_6B62B1A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62B20() // _sub_6B62B20
{
    __DEBUG_ASM(6B62B20);
    // chunk 0x6B62B20 _sub_6B62B20
    asm("loc_6B62B20: mov 4(%esp),%eax;");
    asm("loc_6B62B24: push %ebx;");
    asm("loc_6B62B25: push %ebp;");
    asm("loc_6B62B26: mov 0x10(%esp),%ebp;");
    asm("loc_6B62B2A: push %esi;");
    asm("loc_6B62B2B: mov %ecx,%esi;");
    asm("loc_6B62B2D: push %edi;");
    asm("loc_6B62B2E: lea 0x10(%esi),%edi;");
    asm("loc_6B62B31: mov %ebp,4(%edi);");
    asm("loc_6B62B34: mov (%eax),%ecx;");
    asm("loc_6B62B36: mov %ecx,8(%edi);");
    asm("loc_6B62B39: movl $0,(%edi);");
    asm("loc_6B62B3F: movl $0,0xC(%edi);");
    asm("loc_6B62B46: mov 0x14(%esi),%edx;");
    asm("loc_6B62B49: push %edi;");
    asm("loc_6B62B4A: push %edx;");
    asm("loc_6B62B4B: lea 0x18(%esi),%ebx;");
    asm("loc_6B62B4E: push %ebx;");
    asm("loc_6B62B4F: mov %esi,%ecx;");
    asm("loc_6B62B51: call _sub_6B4E740;");
    asm("loc_6B62B56: test %eax,%eax;");
    asm("loc_6B62B58: mov %eax,0x1C(%esi);");
    asm("loc_6B62B5B: je loc_6B62B69;");
    asm("loc_6B62B5D: pop %edi;");
    asm("loc_6B62B5E: pop %esi;");
    asm("loc_6B62B5F: pop %ebp;");
    asm("loc_6B62B60: mov $0x16,%eax;");
    asm("loc_6B62B65: pop %ebx;");
    asm("loc_6B62B66: ret $0xC;");
    asm("loc_6B62B69: mov 0x1C(%esp),%eax;");
    asm("loc_6B62B6D: mov 0x14(%esp),%ecx;");
    asm("loc_6B62B71: push %eax;");
    asm("loc_6B62B72: push %ebp;");
    asm("loc_6B62B73: push %ecx;");
    asm("loc_6B62B74: mov %esi,%ecx;");
    asm("loc_6B62B76: call _sub_6B3A180;");
    asm("loc_6B62B7B: test %eax,%eax;");
    asm("loc_6B62B7D: jne loc_6B62BDC;");
    asm("loc_6B62B7F: mov 0x14(%esi),%edx;");
    asm("loc_6B62B82: push %edi;");
    asm("loc_6B62B83: push %edx;");
    asm("loc_6B62B84: push %ebx;");
    asm("loc_6B62B85: mov %esi,%ecx;");
    asm("loc_6B62B87: call _sub_6B4E790;");
    asm("loc_6B62B8C: test %eax,%eax;");
    asm("loc_6B62B8E: mov %eax,0x1C(%esi);");
    asm("loc_6B62B91: je loc_6B62B9F;");
    asm("loc_6B62B93: pop %edi;");
    asm("loc_6B62B94: pop %esi;");
    asm("loc_6B62B95: pop %ebp;");
    asm("loc_6B62B96: mov $0x16,%eax;");
    asm("loc_6B62B9B: pop %ebx;");
    asm("loc_6B62B9C: ret $0xC;");
    asm("loc_6B62B9F: mov (%edi),%eax;");
    asm("loc_6B62BA1: mov 0x1C(%esp),%ecx;");
    asm("loc_6B62BA5: mov %eax,(%ecx);");
    asm("loc_6B62BA7: mov 0xC(%esi),%edx;");
    asm("loc_6B62BAA: push %edx;");
    asm("loc_6B62BAB: call _sub_6B4ECD0;");
    asm("loc_6B62BB0: mov %eax,%ecx;");
    asm("loc_6B62BB2: mov (%ecx),%esi;");
    asm("loc_6B62BB4: mov 0x18(%ecx),%edx;");
    asm("loc_6B62BB7: add $4,%esp;");
    asm("loc_6B62BBA: inc %esi;");
    asm("loc_6B62BBB: mov %esi,(%ecx);");
    asm("loc_6B62BBD: mov (%edi),%eax;");
    asm("loc_6B62BBF: add %eax,%edx;");
    asm("loc_6B62BC1: mov 0x10(%ecx),%eax;");
    asm("loc_6B62BC4: mov %edx,0x18(%ecx);");
    asm("loc_6B62BC7: mov (%edi),%edi;");
    asm("loc_6B62BC9: cmp %eax,%edi;");
    asm("loc_6B62BCB: jbe loc_6B62BD0;");
    asm("loc_6B62BCD: mov %edi,0x10(%ecx);");
    asm("loc_6B62BD0: mov 0x18(%ecx),%eax;");
    asm("loc_6B62BD3: xor %edx,%edx;");
    asm("loc_6B62BD5: div %esi;");
    asm("loc_6B62BD7: mov %eax,8(%ecx);");
    asm("loc_6B62BDA: xor %eax,%eax;");
    asm("loc_6B62BDC: pop %edi;");
    asm("loc_6B62BDD: pop %esi;");
    asm("loc_6B62BDE: pop %ebp;");
    asm("loc_6B62BDF: pop %ebx;");
    asm("loc_6B62BE0: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62BF0() // _sub_6B62BF0
{
    __DEBUG_ASM(6B62BF0);
    // chunk 0x6B62BF0 _sub_6B62BF0
    asm("loc_6B62BF0: mov 4(%esp),%eax;");
    asm("loc_6B62BF4: push %ebx;");
    asm("loc_6B62BF5: mov 0xC(%esp),%ebx;");
    asm("loc_6B62BF9: push %ebp;");
    asm("loc_6B62BFA: push %esi;");
    asm("loc_6B62BFB: push %edi;");
    asm("loc_6B62BFC: mov %ecx,%edi;");
    asm("loc_6B62BFE: lea 0x10(%edi),%esi;");
    asm("loc_6B62C01: push %esi;");
    asm("loc_6B62C02: push %ebx;");
    asm("loc_6B62C03: lea 0x18(%edi),%ebp;");
    asm("loc_6B62C06: push %ebp;");
    asm("loc_6B62C07: mov %ebx,4(%esi);");
    asm("loc_6B62C0A: mov %eax,8(%esi);");
    asm("loc_6B62C0D: movl $0,(%esi);");
    asm("loc_6B62C13: movl $0,0xC(%esi);");
    asm("loc_6B62C1A: call _sub_6B4E780;");
    asm("loc_6B62C1F: test %eax,%eax;");
    asm("loc_6B62C21: mov %eax,0x1C(%edi);");
    asm("loc_6B62C24: je loc_6B62C32;");
    asm("loc_6B62C26: pop %edi;");
    asm("loc_6B62C27: pop %esi;");
    asm("loc_6B62C28: pop %ebp;");
    asm("loc_6B62C29: mov $0x17,%eax;");
    asm("loc_6B62C2E: pop %ebx;");
    asm("loc_6B62C2F: ret $0xC;");
    asm("loc_6B62C32: mov 0x1C(%esp),%ecx;");
    asm("loc_6B62C36: mov 0x14(%esp),%edx;");
    asm("loc_6B62C3A: push %ecx;");
    asm("loc_6B62C3B: push %ebx;");
    asm("loc_6B62C3C: push %edx;");
    asm("loc_6B62C3D: mov %edi,%ecx;");
    asm("loc_6B62C3F: call _sub_6B3A230;");
    asm("loc_6B62C44: test %eax,%eax;");
    asm("loc_6B62C46: jne loc_6B62CAD;");
    asm("loc_6B62C48: push %esi;");
    asm("loc_6B62C49: push %ebx;");
    asm("loc_6B62C4A: push %ebp;");
    asm("loc_6B62C4B: mov %edi,%ecx;");
    asm("loc_6B62C4D: call _sub_6B4E7A0;");
    asm("loc_6B62C52: test %eax,%eax;");
    asm("loc_6B62C54: mov %eax,0x1C(%edi);");
    asm("loc_6B62C57: je loc_6B62C65;");
    asm("loc_6B62C59: pop %edi;");
    asm("loc_6B62C5A: pop %esi;");
    asm("loc_6B62C5B: pop %ebp;");
    asm("loc_6B62C5C: mov $0x17,%eax;");
    asm("loc_6B62C61: pop %ebx;");
    asm("loc_6B62C62: ret $0xC;");
    asm("loc_6B62C65: mov (%esi),%eax;");
    asm("loc_6B62C67: mov 0x1C(%esp),%ecx;");
    asm("loc_6B62C6B: mov %eax,(%ecx);");
    asm("loc_6B62C6D: mov 0xC(%edi),%edx;");
    asm("loc_6B62C70: push %edx;");
    asm("loc_6B62C71: call _sub_6B4ECD0;");
    asm("loc_6B62C76: mov %eax,%ecx;");
    asm("loc_6B62C78: mov 4(%ecx),%edi;");
    asm("loc_6B62C7B: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B62C7E: mov 0x14(%ecx),%edx;");
    asm("loc_6B62C81: add $4,%esp;");
    asm("loc_6B62C84: inc %edi;");
    asm("loc_6B62C85: mov %edi,4(%ecx);");
    asm("loc_6B62C88: mov (%esi),%eax;");
    asm("loc_6B62C8A: add $2,%eax;");
    asm("loc_6B62C8D: add %eax,%ebp;");
    asm("loc_6B62C8F: mov %ebp,0x1C(%ecx);");
    asm("loc_6B62C92: mov (%esi),%esi;");
    asm("loc_6B62C94: add $2,%edx;");
    asm("loc_6B62C97: cmp %edx,%esi;");
    asm("loc_6B62C99: jbe loc_6B62CA1;");
    asm("loc_6B62C9B: add $2,%esi;");
    asm("loc_6B62C9E: mov %esi,0x14(%ecx);");
    asm("loc_6B62CA1: mov 0x1C(%ecx),%eax;");
    asm("loc_6B62CA4: xor %edx,%edx;");
    asm("loc_6B62CA6: div %edi;");
    asm("loc_6B62CA8: mov %eax,0xC(%ecx);");
    asm("loc_6B62CAB: xor %eax,%eax;");
    asm("loc_6B62CAD: pop %edi;");
    asm("loc_6B62CAE: pop %esi;");
    asm("loc_6B62CAF: pop %ebp;");
    asm("loc_6B62CB0: pop %ebx;");
    asm("loc_6B62CB1: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62CC0() // _sub_6B62CC0
{
    __DEBUG_ASM(6B62CC0);
    // chunk 0x6B62CC0 _sub_6B62CC0
    asm("loc_6B62CC0: mov _data_6B6E918,%eax;");
    asm("loc_6B62CC5: mov %eax,_data_6B74480;");
    asm("loc_6B62CCA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62CD0() // _sub_6B62CD0
{
    __DEBUG_ASM(6B62CD0);
    // chunk 0x6B62CD0 _sub_6B62CD0
    asm("loc_6B62CD0: mov _data_6B6E918,%eax;");
    asm("loc_6B62CD5: mov %eax,_data_6B74484;");
    asm("loc_6B62CDA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62CE0() // _sub_6B62CE0
{
    __DEBUG_ASM(6B62CE0);
    // chunk 0x6B62CE0 _sub_6B62CE0
    asm("loc_6B62CE0: mov _data_6B6E91C,%eax;");
    asm("loc_6B62CE5: mov %eax,_data_6B7447C;");
    asm("loc_6B62CEA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62CF0() // _sub_6B62CF0
{
    __DEBUG_ASM(6B62CF0);
    // chunk 0x6B62CF0 _sub_6B62CF0
    asm("loc_6B62CF0: mov 8(%esp),%eax;");
    asm("loc_6B62CF4: push %ebx;");
    asm("loc_6B62CF5: push %esi;");
    asm("loc_6B62CF6: push %edi;");
    asm("loc_6B62CF7: mov %ecx,%edi;");
    asm("loc_6B62CF9: mov 0x10(%esp),%ecx;");
    asm("loc_6B62CFD: lea 0x10(%edi),%esi;");
    asm("loc_6B62D00: mov %eax,4(%esi);");
    asm("loc_6B62D03: mov (%ecx),%edx;");
    asm("loc_6B62D05: mov %edx,8(%esi);");
    asm("loc_6B62D08: movl $0,(%esi);");
    asm("loc_6B62D0E: movl $0,0xC(%esi);");
    asm("loc_6B62D15: mov 0x14(%edi),%eax;");
    asm("loc_6B62D18: push %esi;");
    asm("loc_6B62D19: push %eax;");
    asm("loc_6B62D1A: lea 0x18(%edi),%ebx;");
    asm("loc_6B62D1D: push %ebx;");
    asm("loc_6B62D1E: mov %edi,%ecx;");
    asm("loc_6B62D20: call _sub_6B4E740;");
    asm("loc_6B62D25: test %eax,%eax;");
    asm("loc_6B62D27: mov %eax,0x1C(%edi);");
    asm("loc_6B62D2A: je loc_6B62D37;");
    asm("loc_6B62D2C: pop %edi;");
    asm("loc_6B62D2D: pop %esi;");
    asm("loc_6B62D2E: mov $0x16,%eax;");
    asm("loc_6B62D33: pop %ebx;");
    asm("loc_6B62D34: ret $0xC;");
    asm("loc_6B62D37: mov (%esi),%edx;");
    asm("loc_6B62D39: mov 4(%esi),%ecx;");
    asm("loc_6B62D3C: add $4,%edx;");
    asm("loc_6B62D3F: mov %edx,%eax;");
    asm("loc_6B62D41: cmp %ecx,%eax;");
    asm("loc_6B62D43: mov %edx,(%esi);");
    asm("loc_6B62D45: jbe loc_6B62D4E;");
    asm("loc_6B62D47: movl $0x16,0xC(%esi);");
    asm("loc_6B62D4E: mov 0x1C(%edi),%eax;");
    asm("loc_6B62D51: test %eax,%eax;");
    asm("loc_6B62D53: je loc_6B62D60;");
    asm("loc_6B62D55: pop %edi;");
    asm("loc_6B62D56: pop %esi;");
    asm("loc_6B62D57: mov $0x16,%eax;");
    asm("loc_6B62D5C: pop %ebx;");
    asm("loc_6B62D5D: ret $0xC;");
    asm("loc_6B62D60: mov (%ebx),%eax;");
    asm("loc_6B62D62: flds 0x20(%edi);");
    asm("loc_6B62D65: fstps (%eax);");
    asm("loc_6B62D67: mov 0x14(%edi),%ecx;");
    asm("loc_6B62D6A: push %esi;");
    asm("loc_6B62D6B: push %ecx;");
    asm("loc_6B62D6C: add $4,%eax;");
    asm("loc_6B62D6F: push %ebx;");
    asm("loc_6B62D70: mov %edi,%ecx;");
    asm("loc_6B62D72: mov %eax,(%ebx);");
    asm("loc_6B62D74: call _sub_6B4E790;");
    asm("loc_6B62D79: test %eax,%eax;");
    asm("loc_6B62D7B: mov %eax,0x1C(%edi);");
    asm("loc_6B62D7E: je loc_6B62D8B;");
    asm("loc_6B62D80: pop %edi;");
    asm("loc_6B62D81: pop %esi;");
    asm("loc_6B62D82: mov $0x16,%eax;");
    asm("loc_6B62D87: pop %ebx;");
    asm("loc_6B62D88: ret $0xC;");
    asm("loc_6B62D8B: mov (%esi),%edx;");
    asm("loc_6B62D8D: mov 0x18(%esp),%eax;");
    asm("loc_6B62D91: mov %edx,(%eax);");
    asm("loc_6B62D93: mov 0xC(%edi),%ecx;");
    asm("loc_6B62D96: push %ecx;");
    asm("loc_6B62D97: call _sub_6B4ECD0;");
    asm("loc_6B62D9C: mov %eax,%ecx;");
    asm("loc_6B62D9E: mov (%ecx),%eax;");
    asm("loc_6B62DA0: mov 0x18(%ecx),%ebx;");
    asm("loc_6B62DA3: add $4,%esp;");
    asm("loc_6B62DA6: inc %eax;");
    asm("loc_6B62DA7: mov %eax,(%ecx);");
    asm("loc_6B62DA9: mov (%esi),%edx;");
    asm("loc_6B62DAB: add %edx,%ebx;");
    asm("loc_6B62DAD: mov %eax,%edi;");
    asm("loc_6B62DAF: mov 0x10(%ecx),%eax;");
    asm("loc_6B62DB2: mov %ebx,0x18(%ecx);");
    asm("loc_6B62DB5: mov (%esi),%esi;");
    asm("loc_6B62DB7: cmp %eax,%esi;");
    asm("loc_6B62DB9: jbe loc_6B62DBE;");
    asm("loc_6B62DBB: mov %esi,0x10(%ecx);");
    asm("loc_6B62DBE: mov 0x18(%ecx),%eax;");
    asm("loc_6B62DC1: xor %edx,%edx;");
    asm("loc_6B62DC3: div %edi;");
    asm("loc_6B62DC5: pop %edi;");
    asm("loc_6B62DC6: pop %esi;");
    asm("loc_6B62DC7: pop %ebx;");
    asm("loc_6B62DC8: mov %eax,8(%ecx);");
    asm("loc_6B62DCB: xor %eax,%eax;");
    asm("loc_6B62DCD: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62DD0() // _sub_6B62DD0
{
    __DEBUG_ASM(6B62DD0);
    // chunk 0x6B62DD0 _sub_6B62DD0
    asm("loc_6B62DD0: mov 4(%esp),%eax;");
    asm("loc_6B62DD4: push %ebx;");
    asm("loc_6B62DD5: push %ebp;");
    asm("loc_6B62DD6: mov 0x10(%esp),%ebp;");
    asm("loc_6B62DDA: push %esi;");
    asm("loc_6B62DDB: push %edi;");
    asm("loc_6B62DDC: mov %ecx,%edi;");
    asm("loc_6B62DDE: lea 0x10(%edi),%esi;");
    asm("loc_6B62DE1: push %esi;");
    asm("loc_6B62DE2: push %ebp;");
    asm("loc_6B62DE3: lea 0x18(%edi),%ebx;");
    asm("loc_6B62DE6: push %ebx;");
    asm("loc_6B62DE7: mov %ebp,4(%esi);");
    asm("loc_6B62DEA: mov %eax,8(%esi);");
    asm("loc_6B62DED: movl $0,(%esi);");
    asm("loc_6B62DF3: movl $0,0xC(%esi);");
    asm("loc_6B62DFA: call _sub_6B4E780;");
    asm("loc_6B62DFF: test %eax,%eax;");
    asm("loc_6B62E01: mov %eax,0x1C(%edi);");
    asm("loc_6B62E04: je loc_6B62E12;");
    asm("loc_6B62E06: pop %edi;");
    asm("loc_6B62E07: pop %esi;");
    asm("loc_6B62E08: pop %ebp;");
    asm("loc_6B62E09: mov $0x17,%eax;");
    asm("loc_6B62E0E: pop %ebx;");
    asm("loc_6B62E0F: ret $0xC;");
    asm("loc_6B62E12: mov (%esi),%edx;");
    asm("loc_6B62E14: mov 4(%esi),%ecx;");
    asm("loc_6B62E17: add $4,%edx;");
    asm("loc_6B62E1A: mov %edx,%eax;");
    asm("loc_6B62E1C: cmp %ecx,%eax;");
    asm("loc_6B62E1E: mov %edx,(%esi);");
    asm("loc_6B62E20: jbe loc_6B62E29;");
    asm("loc_6B62E22: movl $0x17,0xC(%esi);");
    asm("loc_6B62E29: mov 0x1C(%edi),%eax;");
    asm("loc_6B62E2C: test %eax,%eax;");
    asm("loc_6B62E2E: jne loc_6B62EA3;");
    asm("loc_6B62E30: mov (%ebx),%eax;");
    asm("loc_6B62E32: mov (%eax),%ecx;");
    asm("loc_6B62E34: push %esi;");
    asm("loc_6B62E35: push %ebp;");
    asm("loc_6B62E36: mov %ecx,0x20(%edi);");
    asm("loc_6B62E39: add $4,%eax;");
    asm("loc_6B62E3C: push %ebx;");
    asm("loc_6B62E3D: mov %edi,%ecx;");
    asm("loc_6B62E3F: mov %eax,(%ebx);");
    asm("loc_6B62E41: call _sub_6B4E7A0;");
    asm("loc_6B62E46: test %eax,%eax;");
    asm("loc_6B62E48: mov %eax,0x1C(%edi);");
    asm("loc_6B62E4B: je loc_6B62E59;");
    asm("loc_6B62E4D: pop %edi;");
    asm("loc_6B62E4E: pop %esi;");
    asm("loc_6B62E4F: pop %ebp;");
    asm("loc_6B62E50: mov $0x17,%eax;");
    asm("loc_6B62E55: pop %ebx;");
    asm("loc_6B62E56: ret $0xC;");
    asm("loc_6B62E59: mov (%esi),%edx;");
    asm("loc_6B62E5B: mov 0x1C(%esp),%eax;");
    asm("loc_6B62E5F: mov %edx,(%eax);");
    asm("loc_6B62E61: mov 0xC(%edi),%ecx;");
    asm("loc_6B62E64: push %ecx;");
    asm("loc_6B62E65: call _sub_6B4ECD0;");
    asm("loc_6B62E6A: mov %eax,%ecx;");
    asm("loc_6B62E6C: mov 4(%ecx),%edx;");
    asm("loc_6B62E6F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B62E72: mov 0x14(%ecx),%eax;");
    asm("loc_6B62E75: add $4,%esp;");
    asm("loc_6B62E78: inc %edx;");
    asm("loc_6B62E79: mov %edx,4(%ecx);");
    asm("loc_6B62E7C: mov %edx,%edi;");
    asm("loc_6B62E7E: mov (%esi),%edx;");
    asm("loc_6B62E80: add $2,%edx;");
    asm("loc_6B62E83: add %edx,%ebp;");
    asm("loc_6B62E85: mov %ebp,0x1C(%ecx);");
    asm("loc_6B62E88: mov (%esi),%esi;");
    asm("loc_6B62E8A: add $2,%eax;");
    asm("loc_6B62E8D: cmp %eax,%esi;");
    asm("loc_6B62E8F: jbe loc_6B62E97;");
    asm("loc_6B62E91: add $2,%esi;");
    asm("loc_6B62E94: mov %esi,0x14(%ecx);");
    asm("loc_6B62E97: mov 0x1C(%ecx),%eax;");
    asm("loc_6B62E9A: xor %edx,%edx;");
    asm("loc_6B62E9C: div %edi;");
    asm("loc_6B62E9E: mov %eax,0xC(%ecx);");
    asm("loc_6B62EA1: xor %eax,%eax;");
    asm("loc_6B62EA3: pop %edi;");
    asm("loc_6B62EA4: pop %esi;");
    asm("loc_6B62EA5: pop %ebp;");
    asm("loc_6B62EA6: pop %ebx;");
    asm("loc_6B62EA7: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62EB0() // _sub_6B62EB0
{
    __DEBUG_ASM(6B62EB0);
    // chunk 0x6B62EB0 _sub_6B62EB0
    asm("loc_6B62EB0: mov _data_6B6E928,%eax;");
    asm("loc_6B62EB5: mov %eax,_data_6B74490;");
    asm("loc_6B62EBA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62EC0() // _sub_6B62EC0
{
    __DEBUG_ASM(6B62EC0);
    // chunk 0x6B62EC0 _sub_6B62EC0
    asm("loc_6B62EC0: mov _data_6B6E928,%eax;");
    asm("loc_6B62EC5: mov %eax,_data_6B74494;");
    asm("loc_6B62ECA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62ED0() // _sub_6B62ED0
{
    __DEBUG_ASM(6B62ED0);
    // chunk 0x6B62ED0 _sub_6B62ED0
    asm("loc_6B62ED0: mov _data_6B6E92C,%eax;");
    asm("loc_6B62ED5: mov %eax,_data_6B7448C;");
    asm("loc_6B62EDA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B62EE0() // _sub_6B62EE0
{
    __DEBUG_ASM(6B62EE0);
    // chunk 0x6B62EE0 _sub_6B62EE0
    asm("loc_6B62EE0: mov 8(%esp),%eax;");
    asm("loc_6B62EE4: push %ebx;");
    asm("loc_6B62EE5: push %esi;");
    asm("loc_6B62EE6: push %edi;");
    asm("loc_6B62EE7: mov %ecx,%edi;");
    asm("loc_6B62EE9: mov 0x10(%esp),%ecx;");
    asm("loc_6B62EED: lea 0x10(%edi),%esi;");
    asm("loc_6B62EF0: mov %eax,4(%esi);");
    asm("loc_6B62EF3: mov (%ecx),%edx;");
    asm("loc_6B62EF5: mov %edx,8(%esi);");
    asm("loc_6B62EF8: movl $0,(%esi);");
    asm("loc_6B62EFE: movl $0,0xC(%esi);");
    asm("loc_6B62F05: mov 0x14(%edi),%eax;");
    asm("loc_6B62F08: push %esi;");
    asm("loc_6B62F09: push %eax;");
    asm("loc_6B62F0A: lea 0x18(%edi),%ebx;");
    asm("loc_6B62F0D: push %ebx;");
    asm("loc_6B62F0E: mov %edi,%ecx;");
    asm("loc_6B62F10: call _sub_6B4E740;");
    asm("loc_6B62F15: test %eax,%eax;");
    asm("loc_6B62F17: mov %eax,0x1C(%edi);");
    asm("loc_6B62F1A: je loc_6B62F27;");
    asm("loc_6B62F1C: pop %edi;");
    asm("loc_6B62F1D: pop %esi;");
    asm("loc_6B62F1E: mov $0x16,%eax;");
    asm("loc_6B62F23: pop %ebx;");
    asm("loc_6B62F24: ret $0xC;");
    asm("loc_6B62F27: mov (%esi),%edx;");
    asm("loc_6B62F29: mov 4(%esi),%ecx;");
    asm("loc_6B62F2C: add $4,%edx;");
    asm("loc_6B62F2F: mov %edx,%eax;");
    asm("loc_6B62F31: cmp %ecx,%eax;");
    asm("loc_6B62F33: mov %edx,(%esi);");
    asm("loc_6B62F35: jbe loc_6B62F3E;");
    asm("loc_6B62F37: movl $0x16,0xC(%esi);");
    asm("loc_6B62F3E: mov 0x1C(%edi),%eax;");
    asm("loc_6B62F41: test %eax,%eax;");
    asm("loc_6B62F43: je loc_6B62F50;");
    asm("loc_6B62F45: pop %edi;");
    asm("loc_6B62F46: pop %esi;");
    asm("loc_6B62F47: mov $0x16,%eax;");
    asm("loc_6B62F4C: pop %ebx;");
    asm("loc_6B62F4D: ret $0xC;");
    asm("loc_6B62F50: mov (%ebx),%eax;");
    asm("loc_6B62F52: mov 0x20(%edi),%ecx;");
    asm("loc_6B62F55: mov %ecx,(%eax);");
    asm("loc_6B62F57: add $4,%eax;");
    asm("loc_6B62F5A: mov %eax,(%ebx);");
    asm("loc_6B62F5C: mov (%esi),%edx;");
    asm("loc_6B62F5E: mov 4(%esi),%ecx;");
    asm("loc_6B62F61: add $4,%edx;");
    asm("loc_6B62F64: mov %edx,%eax;");
    asm("loc_6B62F66: cmp %ecx,%eax;");
    asm("loc_6B62F68: mov %edx,(%esi);");
    asm("loc_6B62F6A: jbe loc_6B62F73;");
    asm("loc_6B62F6C: movl $0x16,0xC(%esi);");
    asm("loc_6B62F73: mov 0x1C(%edi),%eax;");
    asm("loc_6B62F76: test %eax,%eax;");
    asm("loc_6B62F78: je loc_6B62F85;");
    asm("loc_6B62F7A: pop %edi;");
    asm("loc_6B62F7B: pop %esi;");
    asm("loc_6B62F7C: mov $0x16,%eax;");
    asm("loc_6B62F81: pop %ebx;");
    asm("loc_6B62F82: ret $0xC;");
    asm("loc_6B62F85: mov (%ebx),%eax;");
    asm("loc_6B62F87: mov 0x24(%edi),%edx;");
    asm("loc_6B62F8A: mov %edx,(%eax);");
    asm("loc_6B62F8C: add $4,%eax;");
    asm("loc_6B62F8F: mov %eax,(%ebx);");
    asm("loc_6B62F91: mov (%esi),%edx;");
    asm("loc_6B62F93: mov 4(%esi),%ecx;");
    asm("loc_6B62F96: add $2,%edx;");
    asm("loc_6B62F99: mov %edx,%eax;");
    asm("loc_6B62F9B: cmp %ecx,%eax;");
    asm("loc_6B62F9D: mov %edx,(%esi);");
    asm("loc_6B62F9F: jbe loc_6B62FA8;");
    asm("loc_6B62FA1: movl $0x16,0xC(%esi);");
    asm("loc_6B62FA8: mov 0x1C(%edi),%eax;");
    asm("loc_6B62FAB: test %eax,%eax;");
    asm("loc_6B62FAD: je loc_6B62FBA;");
    asm("loc_6B62FAF: pop %edi;");
    asm("loc_6B62FB0: pop %esi;");
    asm("loc_6B62FB1: mov $0x16,%eax;");
    asm("loc_6B62FB6: pop %ebx;");
    asm("loc_6B62FB7: ret $0xC;");
    asm("loc_6B62FBA: mov (%ebx),%eax;");
    asm("loc_6B62FBC: mov 0x28(%edi),%cx;");
    asm("loc_6B62FC0: mov %cx,(%eax);");
    asm("loc_6B62FC3: mov 0x14(%edi),%edx;");
    asm("loc_6B62FC6: push %esi;");
    asm("loc_6B62FC7: push %edx;");
    asm("loc_6B62FC8: add $2,%eax;");
    asm("loc_6B62FCB: push %ebx;");
    asm("loc_6B62FCC: mov %edi,%ecx;");
    asm("loc_6B62FCE: mov %eax,(%ebx);");
    asm("loc_6B62FD0: call _sub_6B4E790;");
    asm("loc_6B62FD5: test %eax,%eax;");
    asm("loc_6B62FD7: mov %eax,0x1C(%edi);");
    asm("loc_6B62FDA: je loc_6B62FE7;");
    asm("loc_6B62FDC: pop %edi;");
    asm("loc_6B62FDD: pop %esi;");
    asm("loc_6B62FDE: mov $0x16,%eax;");
    asm("loc_6B62FE3: pop %ebx;");
    asm("loc_6B62FE4: ret $0xC;");
    asm("loc_6B62FE7: mov (%esi),%eax;");
    asm("loc_6B62FE9: mov 0x18(%esp),%ecx;");
    asm("loc_6B62FED: mov %eax,(%ecx);");
    asm("loc_6B62FEF: mov 0xC(%edi),%edx;");
    asm("loc_6B62FF2: push %edx;");
    asm("loc_6B62FF3: call _sub_6B4ECD0;");
    asm("loc_6B62FF8: mov %eax,%ecx;");
    asm("loc_6B62FFA: mov (%ecx),%edi;");
    asm("loc_6B62FFC: mov 0x18(%ecx),%edx;");
    asm("loc_6B62FFF: add $4,%esp;");
    asm("loc_6B63002: inc %edi;");
    asm("loc_6B63003: mov %edi,(%ecx);");
    asm("loc_6B63005: mov (%esi),%eax;");
    asm("loc_6B63007: add %eax,%edx;");
    asm("loc_6B63009: mov 0x10(%ecx),%eax;");
    asm("loc_6B6300C: mov %edx,0x18(%ecx);");
    asm("loc_6B6300F: mov (%esi),%esi;");
    asm("loc_6B63011: cmp %eax,%esi;");
    asm("loc_6B63013: jbe loc_6B63018;");
    asm("loc_6B63015: mov %esi,0x10(%ecx);");
    asm("loc_6B63018: mov 0x18(%ecx),%eax;");
    asm("loc_6B6301B: xor %edx,%edx;");
    asm("loc_6B6301D: div %edi;");
    asm("loc_6B6301F: pop %edi;");
    asm("loc_6B63020: pop %esi;");
    asm("loc_6B63021: pop %ebx;");
    asm("loc_6B63022: mov %eax,8(%ecx);");
    asm("loc_6B63025: xor %eax,%eax;");
    asm("loc_6B63027: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63030() // _sub_6B63030
{
    __DEBUG_ASM(6B63030);
    // chunk 0x6B63030 _sub_6B63030
    asm("loc_6B63030: mov 4(%esp),%eax;");
    asm("loc_6B63034: push %ebx;");
    asm("loc_6B63035: push %ebp;");
    asm("loc_6B63036: mov 0x10(%esp),%ebp;");
    asm("loc_6B6303A: push %esi;");
    asm("loc_6B6303B: push %edi;");
    asm("loc_6B6303C: mov %ecx,%edi;");
    asm("loc_6B6303E: lea 0x10(%edi),%esi;");
    asm("loc_6B63041: push %esi;");
    asm("loc_6B63042: push %ebp;");
    asm("loc_6B63043: lea 0x18(%edi),%ebx;");
    asm("loc_6B63046: push %ebx;");
    asm("loc_6B63047: mov %ebp,4(%esi);");
    asm("loc_6B6304A: mov %eax,8(%esi);");
    asm("loc_6B6304D: movl $0,(%esi);");
    asm("loc_6B63053: movl $0,0xC(%esi);");
    asm("loc_6B6305A: call _sub_6B4E780;");
    asm("loc_6B6305F: test %eax,%eax;");
    asm("loc_6B63061: mov %eax,0x1C(%edi);");
    asm("loc_6B63064: je loc_6B63072;");
    asm("loc_6B63066: pop %edi;");
    asm("loc_6B63067: pop %esi;");
    asm("loc_6B63068: pop %ebp;");
    asm("loc_6B63069: mov $0x17,%eax;");
    asm("loc_6B6306E: pop %ebx;");
    asm("loc_6B6306F: ret $0xC;");
    asm("loc_6B63072: mov (%esi),%edx;");
    asm("loc_6B63074: mov 4(%esi),%ecx;");
    asm("loc_6B63077: add $4,%edx;");
    asm("loc_6B6307A: mov %edx,%eax;");
    asm("loc_6B6307C: cmp %ecx,%eax;");
    asm("loc_6B6307E: mov %edx,(%esi);");
    asm("loc_6B63080: mov $0x17,%ecx;");
    asm("loc_6B63085: jbe loc_6B6308A;");
    asm("loc_6B63087: mov %ecx,0xC(%esi);");
    asm("loc_6B6308A: mov 0x1C(%edi),%eax;");
    asm("loc_6B6308D: test %eax,%eax;");
    asm("loc_6B6308F: jne loc_6B63156;");
    asm("loc_6B63095: mov (%ebx),%eax;");
    asm("loc_6B63097: mov (%eax),%edx;");
    asm("loc_6B63099: add $4,%eax;");
    asm("loc_6B6309C: mov %eax,(%ebx);");
    asm("loc_6B6309E: mov %edx,0x20(%edi);");
    asm("loc_6B630A1: mov (%esi),%eax;");
    asm("loc_6B630A3: mov 4(%esi),%edx;");
    asm("loc_6B630A6: add $4,%eax;");
    asm("loc_6B630A9: cmp %edx,%eax;");
    asm("loc_6B630AB: mov %eax,(%esi);");
    asm("loc_6B630AD: jbe loc_6B630B2;");
    asm("loc_6B630AF: mov %ecx,0xC(%esi);");
    asm("loc_6B630B2: mov 0x1C(%edi),%eax;");
    asm("loc_6B630B5: test %eax,%eax;");
    asm("loc_6B630B7: jne loc_6B63156;");
    asm("loc_6B630BD: mov (%ebx),%eax;");
    asm("loc_6B630BF: mov (%eax),%edx;");
    asm("loc_6B630C1: add $4,%eax;");
    asm("loc_6B630C4: mov %eax,(%ebx);");
    asm("loc_6B630C6: mov %edx,0x24(%edi);");
    asm("loc_6B630C9: mov (%esi),%eax;");
    asm("loc_6B630CB: mov 4(%esi),%edx;");
    asm("loc_6B630CE: add $2,%eax;");
    asm("loc_6B630D1: cmp %edx,%eax;");
    asm("loc_6B630D3: mov %eax,(%esi);");
    asm("loc_6B630D5: jbe loc_6B630DA;");
    asm("loc_6B630D7: mov %ecx,0xC(%esi);");
    asm("loc_6B630DA: mov 0x1C(%edi),%eax;");
    asm("loc_6B630DD: test %eax,%eax;");
    asm("loc_6B630DF: jne loc_6B63156;");
    asm("loc_6B630E1: mov (%ebx),%eax;");
    asm("loc_6B630E3: mov (%eax),%cx;");
    asm("loc_6B630E6: push %esi;");
    asm("loc_6B630E7: push %ebp;");
    asm("loc_6B630E8: mov %cx,0x28(%edi);");
    asm("loc_6B630EC: add $2,%eax;");
    asm("loc_6B630EF: push %ebx;");
    asm("loc_6B630F0: mov %edi,%ecx;");
    asm("loc_6B630F2: mov %eax,(%ebx);");
    asm("loc_6B630F4: call _sub_6B4E7A0;");
    asm("loc_6B630F9: test %eax,%eax;");
    asm("loc_6B630FB: mov %eax,0x1C(%edi);");
    asm("loc_6B630FE: je loc_6B6310C;");
    asm("loc_6B63100: pop %edi;");
    asm("loc_6B63101: pop %esi;");
    asm("loc_6B63102: pop %ebp;");
    asm("loc_6B63103: mov $0x17,%eax;");
    asm("loc_6B63108: pop %ebx;");
    asm("loc_6B63109: ret $0xC;");
    asm("loc_6B6310C: mov (%esi),%edx;");
    asm("loc_6B6310E: mov 0x1C(%esp),%eax;");
    asm("loc_6B63112: mov %edx,(%eax);");
    asm("loc_6B63114: mov 0xC(%edi),%ecx;");
    asm("loc_6B63117: push %ecx;");
    asm("loc_6B63118: call _sub_6B4ECD0;");
    asm("loc_6B6311D: mov %eax,%ecx;");
    asm("loc_6B6311F: mov 4(%ecx),%edx;");
    asm("loc_6B63122: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B63125: mov 0x14(%ecx),%eax;");
    asm("loc_6B63128: add $4,%esp;");
    asm("loc_6B6312B: inc %edx;");
    asm("loc_6B6312C: mov %edx,4(%ecx);");
    asm("loc_6B6312F: mov %edx,%edi;");
    asm("loc_6B63131: mov (%esi),%edx;");
    asm("loc_6B63133: add $2,%edx;");
    asm("loc_6B63136: add %edx,%ebp;");
    asm("loc_6B63138: mov %ebp,0x1C(%ecx);");
    asm("loc_6B6313B: mov (%esi),%esi;");
    asm("loc_6B6313D: add $2,%eax;");
    asm("loc_6B63140: cmp %eax,%esi;");
    asm("loc_6B63142: jbe loc_6B6314A;");
    asm("loc_6B63144: add $2,%esi;");
    asm("loc_6B63147: mov %esi,0x14(%ecx);");
    asm("loc_6B6314A: mov 0x1C(%ecx),%eax;");
    asm("loc_6B6314D: xor %edx,%edx;");
    asm("loc_6B6314F: div %edi;");
    asm("loc_6B63151: mov %eax,0xC(%ecx);");
    asm("loc_6B63154: xor %eax,%eax;");
    asm("loc_6B63156: pop %edi;");
    asm("loc_6B63157: pop %esi;");
    asm("loc_6B63158: pop %ebp;");
    asm("loc_6B63159: pop %ebx;");
    asm("loc_6B6315A: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63160() // _sub_6B63160
{
    __DEBUG_ASM(6B63160);
    // chunk 0x6B63160 _sub_6B63160
    asm("loc_6B63160: mov _data_6B6E938,%eax;");
    asm("loc_6B63165: mov %eax,_data_6B744A0;");
    asm("loc_6B6316A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63170() // _sub_6B63170
{
    __DEBUG_ASM(6B63170);
    // chunk 0x6B63170 _sub_6B63170
    asm("loc_6B63170: mov _data_6B6E938,%eax;");
    asm("loc_6B63175: mov %eax,_data_6B744A4;");
    asm("loc_6B6317A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63180() // _sub_6B63180
{
    __DEBUG_ASM(6B63180);
    // chunk 0x6B63180 _sub_6B63180
    asm("loc_6B63180: mov _data_6B6E93C,%eax;");
    asm("loc_6B63185: mov %eax,_data_6B7449C;");
    asm("loc_6B6318A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63190() // _sub_6B63190
{
    __DEBUG_ASM(6B63190);
    // chunk 0x6B63190 _sub_6B63190
    asm("loc_6B63190: mov 8(%esp),%eax;");
    asm("loc_6B63194: push %ebx;");
    asm("loc_6B63195: push %ebp;");
    asm("loc_6B63196: push %esi;");
    asm("loc_6B63197: push %edi;");
    asm("loc_6B63198: mov %ecx,%edi;");
    asm("loc_6B6319A: mov 0x14(%esp),%ecx;");
    asm("loc_6B6319E: lea 0x10(%edi),%esi;");
    asm("loc_6B631A1: mov %eax,4(%esi);");
    asm("loc_6B631A4: mov (%ecx),%edx;");
    asm("loc_6B631A6: mov %edx,8(%esi);");
    asm("loc_6B631A9: movl $0,(%esi);");
    asm("loc_6B631AF: movl $0,0xC(%esi);");
    asm("loc_6B631B6: mov 0x14(%edi),%eax;");
    asm("loc_6B631B9: push %esi;");
    asm("loc_6B631BA: push %eax;");
    asm("loc_6B631BB: lea 0x18(%edi),%ebx;");
    asm("loc_6B631BE: push %ebx;");
    asm("loc_6B631BF: mov %edi,%ecx;");
    asm("loc_6B631C1: call _sub_6B4E740;");
    asm("loc_6B631C6: mov %eax,0x1C(%edi);");
    asm("loc_6B631C9: test %eax,%eax;");
    asm("loc_6B631CB: mov $0x16,%eax;");
    asm("loc_6B631D0: jne loc_6B6349F;");
    asm("loc_6B631D6: mov (%esi),%ebp;");
    asm("loc_6B631D8: mov 4(%esi),%edx;");
    asm("loc_6B631DB: add $4,%ebp;");
    asm("loc_6B631DE: mov %ebp,%ecx;");
    asm("loc_6B631E0: cmp %edx,%ecx;");
    asm("loc_6B631E2: mov %ebp,(%esi);");
    asm("loc_6B631E4: jbe loc_6B631E9;");
    asm("loc_6B631E6: mov %eax,0xC(%esi);");
    asm("loc_6B631E9: mov 0x1C(%edi),%ecx;");
    asm("loc_6B631EC: test %ecx,%ecx;");
    asm("loc_6B631EE: jne loc_6B6349F;");
    asm("loc_6B631F4: mov (%ebx),%ecx;");
    asm("loc_6B631F6: mov 0x20(%edi),%edx;");
    asm("loc_6B631F9: mov %edx,(%ecx);");
    asm("loc_6B631FB: add $4,%ecx;");
    asm("loc_6B631FE: mov %ecx,(%ebx);");
    asm("loc_6B63200: mov (%esi),%ebp;");
    asm("loc_6B63202: mov 4(%esi),%edx;");
    asm("loc_6B63205: add $4,%ebp;");
    asm("loc_6B63208: mov %ebp,%ecx;");
    asm("loc_6B6320A: cmp %edx,%ecx;");
    asm("loc_6B6320C: mov %ebp,(%esi);");
    asm("loc_6B6320E: jbe loc_6B63213;");
    asm("loc_6B63210: mov %eax,0xC(%esi);");
    asm("loc_6B63213: mov 0x1C(%edi),%ecx;");
    asm("loc_6B63216: test %ecx,%ecx;");
    asm("loc_6B63218: jne loc_6B6349F;");
    asm("loc_6B6321E: mov (%ebx),%ecx;");
    asm("loc_6B63220: mov 0x24(%edi),%edx;");
    asm("loc_6B63223: mov %edx,(%ecx);");
    asm("loc_6B63225: add $4,%ecx;");
    asm("loc_6B63228: mov %ecx,(%ebx);");
    asm("loc_6B6322A: mov (%esi),%ebp;");
    asm("loc_6B6322C: mov 4(%esi),%edx;");
    asm("loc_6B6322F: add $4,%ebp;");
    asm("loc_6B63232: mov %ebp,%ecx;");
    asm("loc_6B63234: cmp %edx,%ecx;");
    asm("loc_6B63236: mov %ebp,(%esi);");
    asm("loc_6B63238: jbe loc_6B6323D;");
    asm("loc_6B6323A: mov %eax,0xC(%esi);");
    asm("loc_6B6323D: mov 0x1C(%edi),%ecx;");
    asm("loc_6B63240: test %ecx,%ecx;");
    asm("loc_6B63242: jne loc_6B6349F;");
    asm("loc_6B63248: mov (%ebx),%ecx;");
    asm("loc_6B6324A: mov 0x28(%edi),%edx;");
    asm("loc_6B6324D: mov %edx,(%ecx);");
    asm("loc_6B6324F: add $4,%ecx;");
    asm("loc_6B63252: mov %ecx,(%ebx);");
    asm("loc_6B63254: mov (%esi),%ebp;");
    asm("loc_6B63256: mov 4(%esi),%edx;");
    asm("loc_6B63259: inc %ebp;");
    asm("loc_6B6325A: mov %ebp,%ecx;");
    asm("loc_6B6325C: cmp %edx,%ecx;");
    asm("loc_6B6325E: mov %ebp,(%esi);");
    asm("loc_6B63260: jbe loc_6B63265;");
    asm("loc_6B63262: mov %eax,0xC(%esi);");
    asm("loc_6B63265: mov 0x1C(%edi),%ecx;");
    asm("loc_6B63268: test %ecx,%ecx;");
    asm("loc_6B6326A: jne loc_6B6349F;");
    asm("loc_6B63270: mov (%ebx),%ecx;");
    asm("loc_6B63272: mov 0x74(%edi),%dl;");
    asm("loc_6B63275: mov %dl,(%ecx);");
    asm("loc_6B63277: inc %ecx;");
    asm("loc_6B63278: mov %ecx,(%ebx);");
    asm("loc_6B6327A: mov 0x74(%edi),%cl;");
    asm("loc_6B6327D: test %cl,%cl;");
    asm("loc_6B6327F: je loc_6B63346;");
    asm("loc_6B63285: mov (%esi),%ebp;");
    asm("loc_6B63287: mov 4(%esi),%edx;");
    asm("loc_6B6328A: add $4,%ebp;");
    asm("loc_6B6328D: mov %ebp,%ecx;");
    asm("loc_6B6328F: cmp %edx,%ecx;");
    asm("loc_6B63291: mov %ebp,(%esi);");
    asm("loc_6B63293: jbe loc_6B63298;");
    asm("loc_6B63295: mov %eax,0xC(%esi);");
    asm("loc_6B63298: mov 0x1C(%edi),%ecx;");
    asm("loc_6B6329B: test %ecx,%ecx;");
    asm("loc_6B6329D: jne loc_6B6349F;");
    asm("loc_6B632A3: mov (%ebx),%ecx;");
    asm("loc_6B632A5: mov 0x2C(%edi),%edx;");
    asm("loc_6B632A8: mov %edx,(%ecx);");
    asm("loc_6B632AA: add $4,%ecx;");
    asm("loc_6B632AD: mov %ecx,(%ebx);");
    asm("loc_6B632AF: mov (%esi),%ebp;");
    asm("loc_6B632B1: mov 4(%esi),%edx;");
    asm("loc_6B632B4: add $4,%ebp;");
    asm("loc_6B632B7: mov %ebp,%ecx;");
    asm("loc_6B632B9: cmp %edx,%ecx;");
    asm("loc_6B632BB: mov %ebp,(%esi);");
    asm("loc_6B632BD: jbe loc_6B632C2;");
    asm("loc_6B632BF: mov %eax,0xC(%esi);");
    asm("loc_6B632C2: mov 0x1C(%edi),%ecx;");
    asm("loc_6B632C5: test %ecx,%ecx;");
    asm("loc_6B632C7: jne loc_6B6349F;");
    asm("loc_6B632CD: mov (%ebx),%ecx;");
    asm("loc_6B632CF: mov 0x30(%edi),%edx;");
    asm("loc_6B632D2: mov %edx,(%ecx);");
    asm("loc_6B632D4: mov 0x5C(%edi),%dl;");
    asm("loc_6B632D7: add $4,%ecx;");
    asm("loc_6B632DA: mov %ecx,(%ebx);");
    asm("loc_6B632DC: mov (%esi),%ecx;");
    asm("loc_6B632DE: mov 4(%esi),%ebp;");
    asm("loc_6B632E1: inc %ecx;");
    asm("loc_6B632E2: cmp %ebp,%ecx;");
    asm("loc_6B632E4: mov %ecx,(%esi);");
    asm("loc_6B632E6: jbe loc_6B632EB;");
    asm("loc_6B632E8: mov %eax,0xC(%esi);");
    asm("loc_6B632EB: mov 0x1C(%edi),%ecx;");
    asm("loc_6B632EE: test %ecx,%ecx;");
    asm("loc_6B632F0: jne loc_6B6349F;");
    asm("loc_6B632F6: mov (%ebx),%ecx;");
    asm("loc_6B632F8: mov %dl,(%ecx);");
    asm("loc_6B632FA: inc %ecx;");
    asm("loc_6B632FB: mov %ecx,(%ebx);");
    asm("loc_6B632FD: mov 0x5C(%edi),%ecx;");
    asm("loc_6B63300: xor %edx,%edx;");
    asm("loc_6B63302: test %ecx,%ecx;");
    asm("loc_6B63304: jle loc_6B63346;");
    asm("loc_6B63306: lea 0x3C(%edi),%ebp;");
    asm("loc_6B63309: lea (%esp),%esp;");
    asm("loc_6B63310: mov (%esi),%ecx;");
    asm("loc_6B63312: add $4,%ecx;");
    asm("loc_6B63315: cmp 4(%esi),%ecx;");
    asm("loc_6B63318: mov %ecx,(%esi);");
    asm("loc_6B6331A: jbe loc_6B6331F;");
    asm("loc_6B6331C: mov %eax,0xC(%esi);");
    asm("loc_6B6331F: mov 0x1C(%edi),%ecx;");
    asm("loc_6B63322: test %ecx,%ecx;");
    asm("loc_6B63324: jne loc_6B6349F;");
    asm("loc_6B6332A: mov (%ebp),%eax;");
    asm("loc_6B6332D: mov (%ebx),%ecx;");
    asm("loc_6B6332F: mov %eax,(%ecx);");
    asm("loc_6B63331: mov 0x5C(%edi),%eax;");
    asm("loc_6B63334: add $4,%ecx;");
    asm("loc_6B63337: inc %edx;");
    asm("loc_6B63338: add $4,%ebp;");
    asm("loc_6B6333B: cmp %eax,%edx;");
    asm("loc_6B6333D: mov %ecx,(%ebx);");
    asm("loc_6B6333F: mov $0x16,%eax;");
    asm("loc_6B63344: jl loc_6B63310;");
    asm("loc_6B63346: mov (%esi),%ebp;");
    asm("loc_6B63348: mov 4(%esi),%edx;");
    asm("loc_6B6334B: add $4,%ebp;");
    asm("loc_6B6334E: mov %ebp,%ecx;");
    asm("loc_6B63350: cmp %edx,%ecx;");
    asm("loc_6B63352: mov %ebp,(%esi);");
    asm("loc_6B63354: jbe loc_6B63359;");
    asm("loc_6B63356: mov %eax,0xC(%esi);");
    asm("loc_6B63359: mov 0x1C(%edi),%ecx;");
    asm("loc_6B6335C: test %ecx,%ecx;");
    asm("loc_6B6335E: jne loc_6B6349F;");
    asm("loc_6B63364: mov (%ebx),%ecx;");
    asm("loc_6B63366: mov 0x60(%edi),%edx;");
    asm("loc_6B63369: mov %edx,(%ecx);");
    asm("loc_6B6336B: add $4,%ecx;");
    asm("loc_6B6336E: mov %ecx,(%ebx);");
    asm("loc_6B63370: mov (%esi),%ebp;");
    asm("loc_6B63372: mov 4(%esi),%edx;");
    asm("loc_6B63375: inc %ebp;");
    asm("loc_6B63376: mov %ebp,%ecx;");
    asm("loc_6B63378: cmp %edx,%ecx;");
    asm("loc_6B6337A: mov %ebp,(%esi);");
    asm("loc_6B6337C: jbe loc_6B63381;");
    asm("loc_6B6337E: mov %eax,0xC(%esi);");
    asm("loc_6B63381: mov 0x1C(%edi),%ecx;");
    asm("loc_6B63384: test %ecx,%ecx;");
    asm("loc_6B63386: jne loc_6B6349F;");
    asm("loc_6B6338C: mov (%ebx),%ecx;");
    asm("loc_6B6338E: mov 0x68(%edi),%dl;");
    asm("loc_6B63391: mov %dl,(%ecx);");
    asm("loc_6B63393: inc %ecx;");
    asm("loc_6B63394: mov %ecx,(%ebx);");
    asm("loc_6B63396: mov 0x68(%edi),%cl;");
    asm("loc_6B63399: xor %edx,%edx;");
    asm("loc_6B6339B: test %cl,%cl;");
    asm("loc_6B6339D: jle loc_6B633D5;");
    asm("loc_6B6339F: nop;");
    asm("loc_6B633A0: mov (%esi),%ecx;");
    asm("loc_6B633A2: mov 4(%esi),%ebp;");
    asm("loc_6B633A5: add $4,%ecx;");
    asm("loc_6B633A8: cmp %ebp,%ecx;");
    asm("loc_6B633AA: mov %ecx,(%esi);");
    asm("loc_6B633AC: jbe loc_6B633B1;");
    asm("loc_6B633AE: mov %eax,0xC(%esi);");
    asm("loc_6B633B1: mov 0x1C(%edi),%ecx;");
    asm("loc_6B633B4: test %ecx,%ecx;");
    asm("loc_6B633B6: jne loc_6B6349F;");
    asm("loc_6B633BC: mov 0x64(%edi),%ebp;");
    asm("loc_6B633BF: mov (%ebx),%ecx;");
    asm("loc_6B633C1: mov (%ebp,%edx,4),%ebp;");
    asm("loc_6B633C5: mov %ebp,(%ecx);");
    asm("loc_6B633C7: add $4,%ecx;");
    asm("loc_6B633CA: mov %ecx,(%ebx);");
    asm("loc_6B633CC: movsbl 0x68(%edi),%ecx;");
    asm("loc_6B633D0: inc %edx;");
    asm("loc_6B633D1: cmp %ecx,%edx;");
    asm("loc_6B633D3: jl loc_6B633A0;");
    asm("loc_6B633D5: mov (%esi),%edx;");
    asm("loc_6B633D7: mov 4(%esi),%ebp;");
    asm("loc_6B633DA: mov 0x6C(%edi),%cx;");
    asm("loc_6B633DE: add $2,%edx;");
    asm("loc_6B633E1: cmp %ebp,%edx;");
    asm("loc_6B633E3: mov %edx,(%esi);");
    asm("loc_6B633E5: jbe loc_6B633EA;");
    asm("loc_6B633E7: mov %eax,0xC(%esi);");
    asm("loc_6B633EA: mov 0x1C(%edi),%edx;");
    asm("loc_6B633ED: test %edx,%edx;");
    asm("loc_6B633EF: jne loc_6B6349F;");
    asm("loc_6B633F5: mov (%ebx),%eax;");
    asm("loc_6B633F7: mov %cx,(%eax);");
    asm("loc_6B633FA: flds 0x70(%edi);");
    asm("loc_6B633FD: fmuls _data_6B6E944;");
    asm("loc_6B63403: add $2,%eax;");
    asm("loc_6B63406: mov %eax,(%ebx);");
    asm("loc_6B63408: fmull _data_6B6E390;");
    asm("loc_6B6340E: call _sub_6B6A3F8;");
    asm("loc_6B63413: mov (%esi),%ebp;");
    asm("loc_6B63415: mov 4(%esi),%edx;");
    asm("loc_6B63418: inc %ebp;");
    asm("loc_6B63419: mov %ebp,%ecx;");
    asm("loc_6B6341B: cmp %edx,%ecx;");
    asm("loc_6B6341D: mov %ebp,(%esi);");
    asm("loc_6B6341F: jbe loc_6B63428;");
    asm("loc_6B63421: movl $0x16,0xC(%esi);");
    asm("loc_6B63428: mov 0x1C(%edi),%ecx;");
    asm("loc_6B6342B: test %ecx,%ecx;");
    asm("loc_6B6342D: je loc_6B6343B;");
    asm("loc_6B6342F: pop %edi;");
    asm("loc_6B63430: pop %esi;");
    asm("loc_6B63431: pop %ebp;");
    asm("loc_6B63432: mov $0x16,%eax;");
    asm("loc_6B63437: pop %ebx;");
    asm("loc_6B63438: ret $0xC;");
    asm("loc_6B6343B: mov (%ebx),%ecx;");
    asm("loc_6B6343D: mov %al,(%ecx);");
    asm("loc_6B6343F: mov 0x14(%edi),%edx;");
    asm("loc_6B63442: push %esi;");
    asm("loc_6B63443: inc %ecx;");
    asm("loc_6B63444: push %edx;");
    asm("loc_6B63445: mov %ecx,(%ebx);");
    asm("loc_6B63447: push %ebx;");
    asm("loc_6B63448: mov %edi,%ecx;");
    asm("loc_6B6344A: call _sub_6B4E790;");
    asm("loc_6B6344F: test %eax,%eax;");
    asm("loc_6B63451: mov %eax,0x1C(%edi);");
    asm("loc_6B63454: je loc_6B63462;");
    asm("loc_6B63456: pop %edi;");
    asm("loc_6B63457: pop %esi;");
    asm("loc_6B63458: pop %ebp;");
    asm("loc_6B63459: mov $0x16,%eax;");
    asm("loc_6B6345E: pop %ebx;");
    asm("loc_6B6345F: ret $0xC;");
    asm("loc_6B63462: mov (%esi),%eax;");
    asm("loc_6B63464: mov 0x1C(%esp),%ecx;");
    asm("loc_6B63468: mov %eax,(%ecx);");
    asm("loc_6B6346A: mov 0xC(%edi),%edx;");
    asm("loc_6B6346D: push %edx;");
    asm("loc_6B6346E: call _sub_6B4ECD0;");
    asm("loc_6B63473: mov %eax,%ecx;");
    asm("loc_6B63475: mov (%ecx),%edi;");
    asm("loc_6B63477: mov 0x18(%ecx),%edx;");
    asm("loc_6B6347A: add $4,%esp;");
    asm("loc_6B6347D: inc %edi;");
    asm("loc_6B6347E: mov %edi,(%ecx);");
    asm("loc_6B63480: mov (%esi),%eax;");
    asm("loc_6B63482: add %eax,%edx;");
    asm("loc_6B63484: mov 0x10(%ecx),%eax;");
    asm("loc_6B63487: mov %edx,0x18(%ecx);");
    asm("loc_6B6348A: mov (%esi),%esi;");
    asm("loc_6B6348C: cmp %eax,%esi;");
    asm("loc_6B6348E: jbe loc_6B63493;");
    asm("loc_6B63490: mov %esi,0x10(%ecx);");
    asm("loc_6B63493: mov 0x18(%ecx),%eax;");
    asm("loc_6B63496: xor %edx,%edx;");
    asm("loc_6B63498: div %edi;");
    asm("loc_6B6349A: mov %eax,8(%ecx);");
    asm("loc_6B6349D: xor %eax,%eax;");
    asm("loc_6B6349F: pop %edi;");
    asm("loc_6B634A0: pop %esi;");
    asm("loc_6B634A1: pop %ebp;");
    asm("loc_6B634A2: pop %ebx;");
    asm("loc_6B634A3: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B634B0() // _sub_6B634B0
{
    __DEBUG_ASM(6B634B0);
    // chunk 0x6B634B0 _sub_6B634B0
    asm("loc_6B634B0: mov 8(%esp),%eax;");
    asm("loc_6B634B4: push %ebx;");
    asm("loc_6B634B5: push %ebp;");
    asm("loc_6B634B6: push %esi;");
    asm("loc_6B634B7: push %edi;");
    asm("loc_6B634B8: mov %ecx,%edi;");
    asm("loc_6B634BA: mov 0x14(%esp),%ecx;");
    asm("loc_6B634BE: lea 0x10(%edi),%esi;");
    asm("loc_6B634C1: push %esi;");
    asm("loc_6B634C2: push %eax;");
    asm("loc_6B634C3: mov %ecx,8(%esi);");
    asm("loc_6B634C6: xor %ebx,%ebx;");
    asm("loc_6B634C8: lea 0x18(%edi),%ebp;");
    asm("loc_6B634CB: push %ebp;");
    asm("loc_6B634CC: mov %edi,%ecx;");
    asm("loc_6B634CE: mov %eax,4(%esi);");
    asm("loc_6B634D1: mov %ebx,(%esi);");
    asm("loc_6B634D3: mov %ebx,0xC(%esi);");
    asm("loc_6B634D6: call _sub_6B4E780;");
    asm("loc_6B634DB: cmp %ebx,%eax;");
    asm("loc_6B634DD: mov %eax,0x1C(%edi);");
    asm("loc_6B634E0: je loc_6B634EE;");
    asm("loc_6B634E2: pop %edi;");
    asm("loc_6B634E3: pop %esi;");
    asm("loc_6B634E4: pop %ebp;");
    asm("loc_6B634E5: mov $0x17,%eax;");
    asm("loc_6B634EA: pop %ebx;");
    asm("loc_6B634EB: ret $0xC;");
    asm("loc_6B634EE: mov (%esi),%edx;");
    asm("loc_6B634F0: mov 4(%esi),%ecx;");
    asm("loc_6B634F3: add $4,%edx;");
    asm("loc_6B634F6: mov %edx,%eax;");
    asm("loc_6B634F8: cmp %ecx,%eax;");
    asm("loc_6B634FA: mov %edx,(%esi);");
    asm("loc_6B634FC: mov $0x17,%edx;");
    asm("loc_6B63501: jbe loc_6B63506;");
    asm("loc_6B63503: mov %edx,0xC(%esi);");
    asm("loc_6B63506: mov 0x1C(%edi),%eax;");
    asm("loc_6B63509: cmp %ebx,%eax;");
    asm("loc_6B6350B: jne loc_6B63844;");
    asm("loc_6B63511: mov (%ebp),%eax;");
    asm("loc_6B63514: mov (%eax),%ecx;");
    asm("loc_6B63516: add $4,%eax;");
    asm("loc_6B63519: mov %eax,(%ebp);");
    asm("loc_6B6351C: mov %ecx,0x20(%edi);");
    asm("loc_6B6351F: mov (%esi),%eax;");
    asm("loc_6B63521: mov 4(%esi),%ecx;");
    asm("loc_6B63524: add $4,%eax;");
    asm("loc_6B63527: cmp %ecx,%eax;");
    asm("loc_6B63529: mov %eax,(%esi);");
    asm("loc_6B6352B: jbe loc_6B63530;");
    asm("loc_6B6352D: mov %edx,0xC(%esi);");
    asm("loc_6B63530: mov 0x1C(%edi),%eax;");
    asm("loc_6B63533: cmp %ebx,%eax;");
    asm("loc_6B63535: jne loc_6B63844;");
    asm("loc_6B6353B: mov (%ebp),%eax;");
    asm("loc_6B6353E: mov (%eax),%ecx;");
    asm("loc_6B63540: add $4,%eax;");
    asm("loc_6B63543: mov %eax,(%ebp);");
    asm("loc_6B63546: mov %ecx,0x24(%edi);");
    asm("loc_6B63549: mov (%esi),%eax;");
    asm("loc_6B6354B: mov 4(%esi),%ecx;");
    asm("loc_6B6354E: add $4,%eax;");
    asm("loc_6B63551: cmp %ecx,%eax;");
    asm("loc_6B63553: mov %eax,(%esi);");
    asm("loc_6B63555: jbe loc_6B6355A;");
    asm("loc_6B63557: mov %edx,0xC(%esi);");
    asm("loc_6B6355A: mov 0x1C(%edi),%eax;");
    asm("loc_6B6355D: cmp %ebx,%eax;");
    asm("loc_6B6355F: jne loc_6B63844;");
    asm("loc_6B63565: mov (%ebp),%eax;");
    asm("loc_6B63568: mov (%eax),%ecx;");
    asm("loc_6B6356A: add $4,%eax;");
    asm("loc_6B6356D: mov %eax,(%ebp);");
    asm("loc_6B63570: mov %ecx,0x28(%edi);");
    asm("loc_6B63573: mov (%esi),%eax;");
    asm("loc_6B63575: mov 4(%esi),%ecx;");
    asm("loc_6B63578: inc %eax;");
    asm("loc_6B63579: cmp %ecx,%eax;");
    asm("loc_6B6357B: mov %eax,(%esi);");
    asm("loc_6B6357D: jbe loc_6B63582;");
    asm("loc_6B6357F: mov %edx,0xC(%esi);");
    asm("loc_6B63582: mov 0x1C(%edi),%eax;");
    asm("loc_6B63585: cmp %ebx,%eax;");
    asm("loc_6B63587: jne loc_6B63844;");
    asm("loc_6B6358D: mov (%ebp),%eax;");
    asm("loc_6B63590: mov (%eax),%cl;");
    asm("loc_6B63592: inc %eax;");
    asm("loc_6B63593: mov %eax,(%ebp);");
    asm("loc_6B63596: mov %cl,%al;");
    asm("loc_6B63598: cmp %bl,%al;");
    asm("loc_6B6359A: mov %cl,0x74(%edi);");
    asm("loc_6B6359D: je loc_6B6366D;");
    asm("loc_6B635A3: mov (%esi),%eax;");
    asm("loc_6B635A5: mov 4(%esi),%ecx;");
    asm("loc_6B635A8: add $4,%eax;");
    asm("loc_6B635AB: cmp %ecx,%eax;");
    asm("loc_6B635AD: mov %eax,(%esi);");
    asm("loc_6B635AF: jbe loc_6B635B4;");
    asm("loc_6B635B1: mov %edx,0xC(%esi);");
    asm("loc_6B635B4: mov 0x1C(%edi),%eax;");
    asm("loc_6B635B7: cmp %ebx,%eax;");
    asm("loc_6B635B9: jne loc_6B63844;");
    asm("loc_6B635BF: mov (%ebp),%eax;");
    asm("loc_6B635C2: mov (%eax),%ecx;");
    asm("loc_6B635C4: add $4,%eax;");
    asm("loc_6B635C7: mov %eax,(%ebp);");
    asm("loc_6B635CA: mov %ecx,0x2C(%edi);");
    asm("loc_6B635CD: mov (%esi),%eax;");
    asm("loc_6B635CF: mov 4(%esi),%ecx;");
    asm("loc_6B635D2: add $4,%eax;");
    asm("loc_6B635D5: cmp %ecx,%eax;");
    asm("loc_6B635D7: mov %eax,(%esi);");
    asm("loc_6B635D9: jbe loc_6B635DE;");
    asm("loc_6B635DB: mov %edx,0xC(%esi);");
    asm("loc_6B635DE: mov 0x1C(%edi),%eax;");
    asm("loc_6B635E1: cmp %ebx,%eax;");
    asm("loc_6B635E3: jne loc_6B63844;");
    asm("loc_6B635E9: mov (%ebp),%eax;");
    asm("loc_6B635EC: mov (%eax),%ecx;");
    asm("loc_6B635EE: add $4,%eax;");
    asm("loc_6B635F1: mov %eax,(%ebp);");
    asm("loc_6B635F4: mov %ecx,0x30(%edi);");
    asm("loc_6B635F7: mov %ebx,0x34(%edi);");
    asm("loc_6B635FA: mov %ebx,0x38(%edi);");
    asm("loc_6B635FD: mov (%esi),%eax;");
    asm("loc_6B635FF: mov 4(%esi),%ecx;");
    asm("loc_6B63602: inc %eax;");
    asm("loc_6B63603: cmp %ecx,%eax;");
    asm("loc_6B63605: mov %eax,(%esi);");
    asm("loc_6B63607: jbe loc_6B6360C;");
    asm("loc_6B63609: mov %edx,0xC(%esi);");
    asm("loc_6B6360C: mov 0x1C(%edi),%eax;");
    asm("loc_6B6360F: cmp %ebx,%eax;");
    asm("loc_6B63611: jne loc_6B63844;");
    asm("loc_6B63617: mov (%ebp),%eax;");
    asm("loc_6B6361A: mov (%eax),%cl;");
    asm("loc_6B6361C: inc %eax;");
    asm("loc_6B6361D: mov %eax,(%ebp);");
    asm("loc_6B63620: xor %eax,%eax;");
    asm("loc_6B63622: mov %cl,%al;");
    asm("loc_6B63624: xor %ecx,%ecx;");
    asm("loc_6B63626: cmp %ebx,%eax;");
    asm("loc_6B63628: mov %eax,0x5C(%edi);");
    asm("loc_6B6362B: jle loc_6B6367C;");
    asm("loc_6B6362D: lea 0x3C(%edi),%edx;");
    asm("loc_6B63630: mov (%esi),%eax;");
    asm("loc_6B63632: add $4,%eax;");
    asm("loc_6B63635: cmp 4(%esi),%eax;");
    asm("loc_6B63638: mov %eax,(%esi);");
    asm("loc_6B6363A: jbe loc_6B63643;");
    asm("loc_6B6363C: movl $0x17,0xC(%esi);");
    asm("loc_6B63643: cmp %ebx,0x1C(%edi);");
    asm("loc_6B63646: jne loc_6B637F0;");
    asm("loc_6B6364C: mov (%ebp),%eax;");
    asm("loc_6B6364F: mov (%eax),%ebx;");
    asm("loc_6B63651: add $4,%eax;");
    asm("loc_6B63654: mov %ebx,(%edx);");
    asm("loc_6B63656: mov %eax,(%ebp);");
    asm("loc_6B63659: mov 0x5C(%edi),%eax;");
    asm("loc_6B6365C: inc %ecx;");
    asm("loc_6B6365D: add $4,%edx;");
    asm("loc_6B63660: xor %ebx,%ebx;");
    asm("loc_6B63662: cmp %eax,%ecx;");
    asm("loc_6B63664: jl loc_6B63630;");
    asm("loc_6B63666: mov $0x17,%edx;");
    asm("loc_6B6366B: jmp loc_6B6367C;");
    asm("loc_6B6366D: mov %ebx,0x2C(%edi);");
    asm("loc_6B63670: mov %ebx,0x30(%edi);");
    asm("loc_6B63673: mov %ebx,0x34(%edi);");
    asm("loc_6B63676: mov %ebx,0x38(%edi);");
    asm("loc_6B63679: mov %ebx,0x5C(%edi);");
    asm("loc_6B6367C: mov (%esi),%eax;");
    asm("loc_6B6367E: mov 4(%esi),%ecx;");
    asm("loc_6B63681: add $4,%eax;");
    asm("loc_6B63684: cmp %ecx,%eax;");
    asm("loc_6B63686: mov %eax,(%esi);");
    asm("loc_6B63688: jbe loc_6B6368D;");
    asm("loc_6B6368A: mov %edx,0xC(%esi);");
    asm("loc_6B6368D: mov 0x1C(%edi),%eax;");
    asm("loc_6B63690: cmp %ebx,%eax;");
    asm("loc_6B63692: jne loc_6B63844;");
    asm("loc_6B63698: mov (%ebp),%eax;");
    asm("loc_6B6369B: mov (%eax),%ecx;");
    asm("loc_6B6369D: add $4,%eax;");
    asm("loc_6B636A0: mov %eax,(%ebp);");
    asm("loc_6B636A3: mov %ecx,0x60(%edi);");
    asm("loc_6B636A6: mov (%esi),%eax;");
    asm("loc_6B636A8: mov 4(%esi),%ecx;");
    asm("loc_6B636AB: inc %eax;");
    asm("loc_6B636AC: cmp %ecx,%eax;");
    asm("loc_6B636AE: mov %eax,(%esi);");
    asm("loc_6B636B0: jbe loc_6B636B5;");
    asm("loc_6B636B2: mov %edx,0xC(%esi);");
    asm("loc_6B636B5: mov 0x1C(%edi),%eax;");
    asm("loc_6B636B8: cmp %ebx,%eax;");
    asm("loc_6B636BA: jne loc_6B63844;");
    asm("loc_6B636C0: mov (%ebp),%eax;");
    asm("loc_6B636C3: mov (%eax),%cl;");
    asm("loc_6B636C5: inc %eax;");
    asm("loc_6B636C6: mov %eax,(%ebp);");
    asm("loc_6B636C9: movsbl %cl,%eax;");
    asm("loc_6B636CC: mov %cl,0x68(%edi);");
    asm("loc_6B636CF: mov (%esi),%ecx;");
    asm("loc_6B636D1: lea (%ecx,%eax,4),%eax;");
    asm("loc_6B636D4: cmp 4(%esi),%eax;");
    asm("loc_6B636D7: jbe loc_6B636DC;");
    asm("loc_6B636D9: mov %edx,0xC(%esi);");
    asm("loc_6B636DC: mov 0x1C(%edi),%eax;");
    asm("loc_6B636DF: cmp %ebx,%eax;");
    asm("loc_6B636E1: jne loc_6B63844;");
    asm("loc_6B636E7: mov 0x64(%edi),%eax;");
    asm("loc_6B636EA: cmp %ebx,%eax;");
    asm("loc_6B636EC: je loc_6B636F7;");
    asm("loc_6B636EE: push %eax;");
    asm("loc_6B636EF: call _sub_6B6A092;");
    asm("loc_6B636F4: add $4,%esp;");
    asm("loc_6B636F7: movsbl 0x68(%edi),%ecx;");
    asm("loc_6B636FB: shl $2,%ecx;");
    asm("loc_6B636FE: push %ecx;");
    asm("loc_6B636FF: call _sub_6B6A134;");
    asm("loc_6B63704: add $4,%esp;");
    asm("loc_6B63707: cmp %ebx,%eax;");
    asm("loc_6B63709: mov %eax,0x64(%edi);");
    asm("loc_6B6370C: jne loc_6B6371A;");
    asm("loc_6B6370E: pop %edi;");
    asm("loc_6B6370F: pop %esi;");
    asm("loc_6B63710: pop %ebp;");
    asm("loc_6B63711: mov $5,%eax;");
    asm("loc_6B63716: pop %ebx;");
    asm("loc_6B63717: ret $0xC;");
    asm("loc_6B6371A: mov 0x68(%edi),%al;");
    asm("loc_6B6371D: xor %ecx,%ecx;");
    asm("loc_6B6371F: cmp %bl,%al;");
    asm("loc_6B63721: jle loc_6B6375D;");
    asm("loc_6B63723: mov (%esi),%eax;");
    asm("loc_6B63725: mov 4(%esi),%edx;");
    asm("loc_6B63728: add $4,%eax;");
    asm("loc_6B6372B: cmp %edx,%eax;");
    asm("loc_6B6372D: mov %eax,(%esi);");
    asm("loc_6B6372F: jbe loc_6B63738;");
    asm("loc_6B63731: movl $0x17,0xC(%esi);");
    asm("loc_6B63738: cmp %ebx,0x1C(%edi);");
    asm("loc_6B6373B: jne loc_6B637F0;");
    asm("loc_6B63741: mov (%ebp),%eax;");
    asm("loc_6B63744: mov (%eax),%ebx;");
    asm("loc_6B63746: mov 0x64(%edi),%edx;");
    asm("loc_6B63749: add $4,%eax;");
    asm("loc_6B6374C: mov %ebx,(%edx,%ecx,4);");
    asm("loc_6B6374F: mov %eax,(%ebp);");
    asm("loc_6B63752: movsbl 0x68(%edi),%eax;");
    asm("loc_6B63756: inc %ecx;");
    asm("loc_6B63757: xor %ebx,%ebx;");
    asm("loc_6B63759: cmp %eax,%ecx;");
    asm("loc_6B6375B: jl loc_6B63723;");
    asm("loc_6B6375D: mov (%esi),%edx;");
    asm("loc_6B6375F: mov 4(%esi),%ecx;");
    asm("loc_6B63762: add $2,%edx;");
    asm("loc_6B63765: mov %edx,%eax;");
    asm("loc_6B63767: cmp %ecx,%eax;");
    asm("loc_6B63769: mov %edx,(%esi);");
    asm("loc_6B6376B: jbe loc_6B63774;");
    asm("loc_6B6376D: movl $0x17,0xC(%esi);");
    asm("loc_6B63774: mov 0x1C(%edi),%eax;");
    asm("loc_6B63777: cmp %ebx,%eax;");
    asm("loc_6B63779: jne loc_6B63844;");
    asm("loc_6B6377F: mov (%ebp),%eax;");
    asm("loc_6B63782: mov (%eax),%cx;");
    asm("loc_6B63785: add $2,%eax;");
    asm("loc_6B63788: movzwl %cx,%ecx;");
    asm("loc_6B6378B: mov %eax,(%ebp);");
    asm("loc_6B6378E: mov %ecx,0x6C(%edi);");
    asm("loc_6B63791: mov (%esi),%edx;");
    asm("loc_6B63793: mov 4(%esi),%ecx;");
    asm("loc_6B63796: inc %edx;");
    asm("loc_6B63797: mov %edx,%eax;");
    asm("loc_6B63799: cmp %ecx,%eax;");
    asm("loc_6B6379B: mov %edx,(%esi);");
    asm("loc_6B6379D: jbe loc_6B637A6;");
    asm("loc_6B6379F: movl $0x17,0xC(%esi);");
    asm("loc_6B637A6: mov 0x1C(%edi),%eax;");
    asm("loc_6B637A9: cmp %ebx,%eax;");
    asm("loc_6B637AB: jne loc_6B63844;");
    asm("loc_6B637B1: mov (%ebp),%eax;");
    asm("loc_6B637B4: mov (%eax),%cl;");
    asm("loc_6B637B6: xor %edx,%edx;");
    asm("loc_6B637B8: mov %cl,%dl;");
    asm("loc_6B637BA: inc %eax;");
    asm("loc_6B637BB: mov %eax,(%ebp);");
    asm("loc_6B637BE: mov 0x18(%esp),%eax;");
    asm("loc_6B637C2: push %esi;");
    asm("loc_6B637C3: push %eax;");
    asm("loc_6B637C4: push %ebp;");
    asm("loc_6B637C5: mov %edx,0x20(%esp);");
    asm("loc_6B637C9: fildl 0x20(%esp);");
    asm("loc_6B637CD: mov %edi,%ecx;");
    asm("loc_6B637CF: fmull _data_6B6E948;");
    asm("loc_6B637D5: fstps 0x70(%edi);");
    asm("loc_6B637D8: call _sub_6B4E7A0;");
    asm("loc_6B637DD: cmp %ebx,%eax;");
    asm("loc_6B637DF: mov %eax,0x1C(%edi);");
    asm("loc_6B637E2: je loc_6B637FA;");
    asm("loc_6B637E4: pop %edi;");
    asm("loc_6B637E5: pop %esi;");
    asm("loc_6B637E6: pop %ebp;");
    asm("loc_6B637E7: mov $0x17,%eax;");
    asm("loc_6B637EC: pop %ebx;");
    asm("loc_6B637ED: ret $0xC;");
    asm("loc_6B637F0: mov 0x1C(%edi),%eax;");
    asm("loc_6B637F3: pop %edi;");
    asm("loc_6B637F4: pop %esi;");
    asm("loc_6B637F5: pop %ebp;");
    asm("loc_6B637F6: pop %ebx;");
    asm("loc_6B637F7: ret $0xC;");
    asm("loc_6B637FA: mov (%esi),%ecx;");
    asm("loc_6B637FC: mov 0x1C(%esp),%edx;");
    asm("loc_6B63800: mov %ecx,(%edx);");
    asm("loc_6B63802: mov 0xC(%edi),%eax;");
    asm("loc_6B63805: push %eax;");
    asm("loc_6B63806: call _sub_6B4ECD0;");
    asm("loc_6B6380B: mov %eax,%ecx;");
    asm("loc_6B6380D: mov 4(%ecx),%edx;");
    asm("loc_6B63810: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B63813: mov 0x14(%ecx),%eax;");
    asm("loc_6B63816: add $4,%esp;");
    asm("loc_6B63819: inc %edx;");
    asm("loc_6B6381A: mov %edx,4(%ecx);");
    asm("loc_6B6381D: mov %edx,%edi;");
    asm("loc_6B6381F: mov (%esi),%edx;");
    asm("loc_6B63821: add $2,%edx;");
    asm("loc_6B63824: add %edx,%ebp;");
    asm("loc_6B63826: mov %ebp,0x1C(%ecx);");
    asm("loc_6B63829: mov (%esi),%esi;");
    asm("loc_6B6382B: add $2,%eax;");
    asm("loc_6B6382E: cmp %eax,%esi;");
    asm("loc_6B63830: jbe loc_6B63838;");
    asm("loc_6B63832: add $2,%esi;");
    asm("loc_6B63835: mov %esi,0x14(%ecx);");
    asm("loc_6B63838: mov 0x1C(%ecx),%eax;");
    asm("loc_6B6383B: xor %edx,%edx;");
    asm("loc_6B6383D: div %edi;");
    asm("loc_6B6383F: mov %eax,0xC(%ecx);");
    asm("loc_6B63842: xor %eax,%eax;");
    asm("loc_6B63844: pop %edi;");
    asm("loc_6B63845: pop %esi;");
    asm("loc_6B63846: pop %ebp;");
    asm("loc_6B63847: pop %ebx;");
    asm("loc_6B63848: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63850() // _sub_6B63850
{
    __DEBUG_ASM(6B63850);
    // chunk 0x6B63850 _sub_6B63850
    asm("loc_6B63850: mov 8(%esp),%eax;");
    asm("loc_6B63854: push %ebx;");
    asm("loc_6B63855: push %esi;");
    asm("loc_6B63856: push %edi;");
    asm("loc_6B63857: mov %ecx,%edi;");
    asm("loc_6B63859: mov 0x10(%esp),%ecx;");
    asm("loc_6B6385D: lea 0x10(%edi),%esi;");
    asm("loc_6B63860: mov %eax,4(%esi);");
    asm("loc_6B63863: mov (%ecx),%edx;");
    asm("loc_6B63865: mov %edx,8(%esi);");
    asm("loc_6B63868: movl $0,(%esi);");
    asm("loc_6B6386E: movl $0,0xC(%esi);");
    asm("loc_6B63875: mov 0x14(%edi),%eax;");
    asm("loc_6B63878: push %esi;");
    asm("loc_6B63879: push %eax;");
    asm("loc_6B6387A: lea 0x18(%edi),%ebx;");
    asm("loc_6B6387D: push %ebx;");
    asm("loc_6B6387E: mov %edi,%ecx;");
    asm("loc_6B63880: call _sub_6B4E740;");
    asm("loc_6B63885: test %eax,%eax;");
    asm("loc_6B63887: mov %eax,0x1C(%edi);");
    asm("loc_6B6388A: je loc_6B63897;");
    asm("loc_6B6388C: pop %edi;");
    asm("loc_6B6388D: pop %esi;");
    asm("loc_6B6388E: mov $0x16,%eax;");
    asm("loc_6B63893: pop %ebx;");
    asm("loc_6B63894: ret $0xC;");
    asm("loc_6B63897: mov (%esi),%edx;");
    asm("loc_6B63899: mov 4(%esi),%ecx;");
    asm("loc_6B6389C: add $4,%edx;");
    asm("loc_6B6389F: mov %edx,%eax;");
    asm("loc_6B638A1: cmp %ecx,%eax;");
    asm("loc_6B638A3: mov %edx,(%esi);");
    asm("loc_6B638A5: jbe loc_6B638AE;");
    asm("loc_6B638A7: movl $0x16,0xC(%esi);");
    asm("loc_6B638AE: mov 0x1C(%edi),%eax;");
    asm("loc_6B638B1: test %eax,%eax;");
    asm("loc_6B638B3: je loc_6B638C0;");
    asm("loc_6B638B5: pop %edi;");
    asm("loc_6B638B6: pop %esi;");
    asm("loc_6B638B7: mov $0x16,%eax;");
    asm("loc_6B638BC: pop %ebx;");
    asm("loc_6B638BD: ret $0xC;");
    asm("loc_6B638C0: mov (%ebx),%eax;");
    asm("loc_6B638C2: mov 0x20(%edi),%ecx;");
    asm("loc_6B638C5: mov %ecx,(%eax);");
    asm("loc_6B638C7: add $4,%eax;");
    asm("loc_6B638CA: mov %eax,(%ebx);");
    asm("loc_6B638CC: mov (%esi),%edx;");
    asm("loc_6B638CE: mov 4(%esi),%ecx;");
    asm("loc_6B638D1: add $2,%edx;");
    asm("loc_6B638D4: mov %edx,%eax;");
    asm("loc_6B638D6: cmp %ecx,%eax;");
    asm("loc_6B638D8: mov %edx,(%esi);");
    asm("loc_6B638DA: jbe loc_6B638E3;");
    asm("loc_6B638DC: movl $0x16,0xC(%esi);");
    asm("loc_6B638E3: mov 0x1C(%edi),%eax;");
    asm("loc_6B638E6: test %eax,%eax;");
    asm("loc_6B638E8: je loc_6B638F5;");
    asm("loc_6B638EA: pop %edi;");
    asm("loc_6B638EB: pop %esi;");
    asm("loc_6B638EC: mov $0x16,%eax;");
    asm("loc_6B638F1: pop %ebx;");
    asm("loc_6B638F2: ret $0xC;");
    asm("loc_6B638F5: mov (%ebx),%eax;");
    asm("loc_6B638F7: mov 0x24(%edi),%dx;");
    asm("loc_6B638FB: mov %dx,(%eax);");
    asm("loc_6B638FE: add $2,%eax;");
    asm("loc_6B63901: mov %eax,(%ebx);");
    asm("loc_6B63903: mov (%esi),%edx;");
    asm("loc_6B63905: mov 4(%esi),%ecx;");
    asm("loc_6B63908: add $2,%edx;");
    asm("loc_6B6390B: mov %edx,%eax;");
    asm("loc_6B6390D: cmp %ecx,%eax;");
    asm("loc_6B6390F: mov %edx,(%esi);");
    asm("loc_6B63911: jbe loc_6B6391A;");
    asm("loc_6B63913: movl $0x16,0xC(%esi);");
    asm("loc_6B6391A: mov 0x1C(%edi),%eax;");
    asm("loc_6B6391D: test %eax,%eax;");
    asm("loc_6B6391F: je loc_6B6392C;");
    asm("loc_6B63921: pop %edi;");
    asm("loc_6B63922: pop %esi;");
    asm("loc_6B63923: mov $0x16,%eax;");
    asm("loc_6B63928: pop %ebx;");
    asm("loc_6B63929: ret $0xC;");
    asm("loc_6B6392C: mov (%ebx),%eax;");
    asm("loc_6B6392E: mov 0x26(%edi),%cx;");
    asm("loc_6B63932: mov %cx,(%eax);");
    asm("loc_6B63935: mov 0x14(%edi),%edx;");
    asm("loc_6B63938: push %esi;");
    asm("loc_6B63939: push %edx;");
    asm("loc_6B6393A: add $2,%eax;");
    asm("loc_6B6393D: push %ebx;");
    asm("loc_6B6393E: mov %edi,%ecx;");
    asm("loc_6B63940: mov %eax,(%ebx);");
    asm("loc_6B63942: call _sub_6B4E790;");
    asm("loc_6B63947: test %eax,%eax;");
    asm("loc_6B63949: mov %eax,0x1C(%edi);");
    asm("loc_6B6394C: je loc_6B63959;");
    asm("loc_6B6394E: pop %edi;");
    asm("loc_6B6394F: pop %esi;");
    asm("loc_6B63950: mov $0x16,%eax;");
    asm("loc_6B63955: pop %ebx;");
    asm("loc_6B63956: ret $0xC;");
    asm("loc_6B63959: mov (%esi),%eax;");
    asm("loc_6B6395B: mov 0x18(%esp),%ecx;");
    asm("loc_6B6395F: mov %eax,(%ecx);");
    asm("loc_6B63961: mov 0xC(%edi),%edx;");
    asm("loc_6B63964: push %edx;");
    asm("loc_6B63965: call _sub_6B4ECD0;");
    asm("loc_6B6396A: mov %eax,%ecx;");
    asm("loc_6B6396C: mov (%ecx),%edi;");
    asm("loc_6B6396E: mov 0x18(%ecx),%edx;");
    asm("loc_6B63971: add $4,%esp;");
    asm("loc_6B63974: inc %edi;");
    asm("loc_6B63975: mov %edi,(%ecx);");
    asm("loc_6B63977: mov (%esi),%eax;");
    asm("loc_6B63979: add %eax,%edx;");
    asm("loc_6B6397B: mov 0x10(%ecx),%eax;");
    asm("loc_6B6397E: mov %edx,0x18(%ecx);");
    asm("loc_6B63981: mov (%esi),%esi;");
    asm("loc_6B63983: cmp %eax,%esi;");
    asm("loc_6B63985: jbe loc_6B6398A;");
    asm("loc_6B63987: mov %esi,0x10(%ecx);");
    asm("loc_6B6398A: mov 0x18(%ecx),%eax;");
    asm("loc_6B6398D: xor %edx,%edx;");
    asm("loc_6B6398F: div %edi;");
    asm("loc_6B63991: pop %edi;");
    asm("loc_6B63992: pop %esi;");
    asm("loc_6B63993: pop %ebx;");
    asm("loc_6B63994: mov %eax,8(%ecx);");
    asm("loc_6B63997: xor %eax,%eax;");
    asm("loc_6B63999: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B639A0() // _sub_6B639A0
{
    __DEBUG_ASM(6B639A0);
    // chunk 0x6B639A0 _sub_6B639A0
    asm("loc_6B639A0: mov 4(%esp),%eax;");
    asm("loc_6B639A4: push %ebx;");
    asm("loc_6B639A5: push %ebp;");
    asm("loc_6B639A6: mov 0x10(%esp),%ebp;");
    asm("loc_6B639AA: push %esi;");
    asm("loc_6B639AB: push %edi;");
    asm("loc_6B639AC: mov %ecx,%edi;");
    asm("loc_6B639AE: lea 0x10(%edi),%esi;");
    asm("loc_6B639B1: push %esi;");
    asm("loc_6B639B2: push %ebp;");
    asm("loc_6B639B3: lea 0x18(%edi),%ebx;");
    asm("loc_6B639B6: push %ebx;");
    asm("loc_6B639B7: mov %ebp,4(%esi);");
    asm("loc_6B639BA: mov %eax,8(%esi);");
    asm("loc_6B639BD: movl $0,(%esi);");
    asm("loc_6B639C3: movl $0,0xC(%esi);");
    asm("loc_6B639CA: call _sub_6B4E780;");
    asm("loc_6B639CF: test %eax,%eax;");
    asm("loc_6B639D1: mov %eax,0x1C(%edi);");
    asm("loc_6B639D4: je loc_6B639E2;");
    asm("loc_6B639D6: pop %edi;");
    asm("loc_6B639D7: pop %esi;");
    asm("loc_6B639D8: pop %ebp;");
    asm("loc_6B639D9: mov $0x17,%eax;");
    asm("loc_6B639DE: pop %ebx;");
    asm("loc_6B639DF: ret $0xC;");
    asm("loc_6B639E2: mov (%esi),%edx;");
    asm("loc_6B639E4: mov 4(%esi),%ecx;");
    asm("loc_6B639E7: add $4,%edx;");
    asm("loc_6B639EA: mov %edx,%eax;");
    asm("loc_6B639EC: cmp %ecx,%eax;");
    asm("loc_6B639EE: mov %edx,(%esi);");
    asm("loc_6B639F0: mov $0x17,%ecx;");
    asm("loc_6B639F5: jbe loc_6B639FA;");
    asm("loc_6B639F7: mov %ecx,0xC(%esi);");
    asm("loc_6B639FA: mov 0x1C(%edi),%eax;");
    asm("loc_6B639FD: test %eax,%eax;");
    asm("loc_6B639FF: jne loc_6B63AC8;");
    asm("loc_6B63A05: mov (%ebx),%eax;");
    asm("loc_6B63A07: mov (%eax),%edx;");
    asm("loc_6B63A09: add $4,%eax;");
    asm("loc_6B63A0C: mov %eax,(%ebx);");
    asm("loc_6B63A0E: mov %edx,0x20(%edi);");
    asm("loc_6B63A11: mov (%esi),%eax;");
    asm("loc_6B63A13: mov 4(%esi),%edx;");
    asm("loc_6B63A16: add $2,%eax;");
    asm("loc_6B63A19: cmp %edx,%eax;");
    asm("loc_6B63A1B: mov %eax,(%esi);");
    asm("loc_6B63A1D: jbe loc_6B63A22;");
    asm("loc_6B63A1F: mov %ecx,0xC(%esi);");
    asm("loc_6B63A22: mov 0x1C(%edi),%eax;");
    asm("loc_6B63A25: test %eax,%eax;");
    asm("loc_6B63A27: jne loc_6B63AC8;");
    asm("loc_6B63A2D: mov (%ebx),%eax;");
    asm("loc_6B63A2F: mov (%eax),%dx;");
    asm("loc_6B63A32: add $2,%eax;");
    asm("loc_6B63A35: mov %eax,(%ebx);");
    asm("loc_6B63A37: mov %dx,0x24(%edi);");
    asm("loc_6B63A3B: mov (%esi),%eax;");
    asm("loc_6B63A3D: mov 4(%esi),%edx;");
    asm("loc_6B63A40: add $2,%eax;");
    asm("loc_6B63A43: cmp %edx,%eax;");
    asm("loc_6B63A45: mov %eax,(%esi);");
    asm("loc_6B63A47: jbe loc_6B63A4C;");
    asm("loc_6B63A49: mov %ecx,0xC(%esi);");
    asm("loc_6B63A4C: mov 0x1C(%edi),%eax;");
    asm("loc_6B63A4F: test %eax,%eax;");
    asm("loc_6B63A51: jne loc_6B63AC8;");
    asm("loc_6B63A53: mov (%ebx),%eax;");
    asm("loc_6B63A55: mov (%eax),%cx;");
    asm("loc_6B63A58: push %esi;");
    asm("loc_6B63A59: push %ebp;");
    asm("loc_6B63A5A: mov %cx,0x26(%edi);");
    asm("loc_6B63A5E: add $2,%eax;");
    asm("loc_6B63A61: push %ebx;");
    asm("loc_6B63A62: mov %edi,%ecx;");
    asm("loc_6B63A64: mov %eax,(%ebx);");
    asm("loc_6B63A66: call _sub_6B4E7A0;");
    asm("loc_6B63A6B: test %eax,%eax;");
    asm("loc_6B63A6D: mov %eax,0x1C(%edi);");
    asm("loc_6B63A70: je loc_6B63A7E;");
    asm("loc_6B63A72: pop %edi;");
    asm("loc_6B63A73: pop %esi;");
    asm("loc_6B63A74: pop %ebp;");
    asm("loc_6B63A75: mov $0x17,%eax;");
    asm("loc_6B63A7A: pop %ebx;");
    asm("loc_6B63A7B: ret $0xC;");
    asm("loc_6B63A7E: mov (%esi),%edx;");
    asm("loc_6B63A80: mov 0x1C(%esp),%eax;");
    asm("loc_6B63A84: mov %edx,(%eax);");
    asm("loc_6B63A86: mov 0xC(%edi),%ecx;");
    asm("loc_6B63A89: push %ecx;");
    asm("loc_6B63A8A: call _sub_6B4ECD0;");
    asm("loc_6B63A8F: mov %eax,%ecx;");
    asm("loc_6B63A91: mov 4(%ecx),%edx;");
    asm("loc_6B63A94: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B63A97: mov 0x14(%ecx),%eax;");
    asm("loc_6B63A9A: add $4,%esp;");
    asm("loc_6B63A9D: inc %edx;");
    asm("loc_6B63A9E: mov %edx,4(%ecx);");
    asm("loc_6B63AA1: mov %edx,%edi;");
    asm("loc_6B63AA3: mov (%esi),%edx;");
    asm("loc_6B63AA5: add $2,%edx;");
    asm("loc_6B63AA8: add %edx,%ebp;");
    asm("loc_6B63AAA: mov %ebp,0x1C(%ecx);");
    asm("loc_6B63AAD: mov (%esi),%esi;");
    asm("loc_6B63AAF: add $2,%eax;");
    asm("loc_6B63AB2: cmp %eax,%esi;");
    asm("loc_6B63AB4: jbe loc_6B63ABC;");
    asm("loc_6B63AB6: add $2,%esi;");
    asm("loc_6B63AB9: mov %esi,0x14(%ecx);");
    asm("loc_6B63ABC: mov 0x1C(%ecx),%eax;");
    asm("loc_6B63ABF: xor %edx,%edx;");
    asm("loc_6B63AC1: div %edi;");
    asm("loc_6B63AC3: mov %eax,0xC(%ecx);");
    asm("loc_6B63AC6: xor %eax,%eax;");
    asm("loc_6B63AC8: pop %edi;");
    asm("loc_6B63AC9: pop %esi;");
    asm("loc_6B63ACA: pop %ebp;");
    asm("loc_6B63ACB: pop %ebx;");
    asm("loc_6B63ACC: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63AD0() // _sub_6B63AD0
{
    __DEBUG_ASM(6B63AD0);
    // chunk 0x6B63AD0 _sub_6B63AD0
    asm("loc_6B63AD0: mov _data_6B6E954,%eax;");
    asm("loc_6B63AD5: mov %eax,_data_6B744B0;");
    asm("loc_6B63ADA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63AE0() // _sub_6B63AE0
{
    __DEBUG_ASM(6B63AE0);
    // chunk 0x6B63AE0 _sub_6B63AE0
    asm("loc_6B63AE0: mov _data_6B6E954,%eax;");
    asm("loc_6B63AE5: mov %eax,_data_6B744B4;");
    asm("loc_6B63AEA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63AF0() // _sub_6B63AF0
{
    __DEBUG_ASM(6B63AF0);
    // chunk 0x6B63AF0 _sub_6B63AF0
    asm("loc_6B63AF0: mov _data_6B6E958,%eax;");
    asm("loc_6B63AF5: mov %eax,_data_6B744AC;");
    asm("loc_6B63AFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63B00() // _sub_6B63B00
{
    __DEBUG_ASM(6B63B00);
    // chunk 0x6B63B00 _sub_6B63B00
    asm("loc_6B63B00: mov 8(%esp),%eax;");
    asm("loc_6B63B04: push %ebx;");
    asm("loc_6B63B05: push %esi;");
    asm("loc_6B63B06: push %edi;");
    asm("loc_6B63B07: mov %ecx,%edi;");
    asm("loc_6B63B09: mov 0x10(%esp),%ecx;");
    asm("loc_6B63B0D: lea 0x10(%edi),%esi;");
    asm("loc_6B63B10: mov %eax,4(%esi);");
    asm("loc_6B63B13: mov (%ecx),%edx;");
    asm("loc_6B63B15: mov %edx,8(%esi);");
    asm("loc_6B63B18: movl $0,(%esi);");
    asm("loc_6B63B1E: movl $0,0xC(%esi);");
    asm("loc_6B63B25: mov 0x14(%edi),%eax;");
    asm("loc_6B63B28: push %esi;");
    asm("loc_6B63B29: push %eax;");
    asm("loc_6B63B2A: lea 0x18(%edi),%ebx;");
    asm("loc_6B63B2D: push %ebx;");
    asm("loc_6B63B2E: mov %edi,%ecx;");
    asm("loc_6B63B30: call _sub_6B4E740;");
    asm("loc_6B63B35: test %eax,%eax;");
    asm("loc_6B63B37: mov %eax,0x1C(%edi);");
    asm("loc_6B63B3A: je loc_6B63B47;");
    asm("loc_6B63B3C: pop %edi;");
    asm("loc_6B63B3D: pop %esi;");
    asm("loc_6B63B3E: mov $0x16,%eax;");
    asm("loc_6B63B43: pop %ebx;");
    asm("loc_6B63B44: ret $0xC;");
    asm("loc_6B63B47: mov (%esi),%edx;");
    asm("loc_6B63B49: mov 4(%esi),%ecx;");
    asm("loc_6B63B4C: add $4,%edx;");
    asm("loc_6B63B4F: mov %edx,%eax;");
    asm("loc_6B63B51: cmp %ecx,%eax;");
    asm("loc_6B63B53: mov %edx,(%esi);");
    asm("loc_6B63B55: jbe loc_6B63B5E;");
    asm("loc_6B63B57: movl $0x16,0xC(%esi);");
    asm("loc_6B63B5E: mov 0x1C(%edi),%eax;");
    asm("loc_6B63B61: test %eax,%eax;");
    asm("loc_6B63B63: je loc_6B63B70;");
    asm("loc_6B63B65: pop %edi;");
    asm("loc_6B63B66: pop %esi;");
    asm("loc_6B63B67: mov $0x16,%eax;");
    asm("loc_6B63B6C: pop %ebx;");
    asm("loc_6B63B6D: ret $0xC;");
    asm("loc_6B63B70: mov (%ebx),%eax;");
    asm("loc_6B63B72: mov 0x20(%edi),%ecx;");
    asm("loc_6B63B75: mov %ecx,(%eax);");
    asm("loc_6B63B77: add $4,%eax;");
    asm("loc_6B63B7A: mov %eax,(%ebx);");
    asm("loc_6B63B7C: mov (%esi),%edx;");
    asm("loc_6B63B7E: mov 4(%esi),%ecx;");
    asm("loc_6B63B81: add $4,%edx;");
    asm("loc_6B63B84: mov %edx,%eax;");
    asm("loc_6B63B86: cmp %ecx,%eax;");
    asm("loc_6B63B88: mov %edx,(%esi);");
    asm("loc_6B63B8A: jbe loc_6B63B93;");
    asm("loc_6B63B8C: movl $0x16,0xC(%esi);");
    asm("loc_6B63B93: mov 0x1C(%edi),%eax;");
    asm("loc_6B63B96: test %eax,%eax;");
    asm("loc_6B63B98: je loc_6B63BA5;");
    asm("loc_6B63B9A: pop %edi;");
    asm("loc_6B63B9B: pop %esi;");
    asm("loc_6B63B9C: mov $0x16,%eax;");
    asm("loc_6B63BA1: pop %ebx;");
    asm("loc_6B63BA2: ret $0xC;");
    asm("loc_6B63BA5: mov (%ebx),%eax;");
    asm("loc_6B63BA7: mov 0x24(%edi),%edx;");
    asm("loc_6B63BAA: mov %edx,(%eax);");
    asm("loc_6B63BAC: add $4,%eax;");
    asm("loc_6B63BAF: mov %eax,(%ebx);");
    asm("loc_6B63BB1: mov 0x14(%edi),%eax;");
    asm("loc_6B63BB4: push %esi;");
    asm("loc_6B63BB5: push %eax;");
    asm("loc_6B63BB6: push %ebx;");
    asm("loc_6B63BB7: mov %edi,%ecx;");
    asm("loc_6B63BB9: call _sub_6B4E790;");
    asm("loc_6B63BBE: test %eax,%eax;");
    asm("loc_6B63BC0: mov %eax,0x1C(%edi);");
    asm("loc_6B63BC3: je loc_6B63BD0;");
    asm("loc_6B63BC5: pop %edi;");
    asm("loc_6B63BC6: pop %esi;");
    asm("loc_6B63BC7: mov $0x16,%eax;");
    asm("loc_6B63BCC: pop %ebx;");
    asm("loc_6B63BCD: ret $0xC;");
    asm("loc_6B63BD0: mov (%esi),%ecx;");
    asm("loc_6B63BD2: mov 0x18(%esp),%edx;");
    asm("loc_6B63BD6: mov %ecx,(%edx);");
    asm("loc_6B63BD8: mov 0xC(%edi),%eax;");
    asm("loc_6B63BDB: push %eax;");
    asm("loc_6B63BDC: call _sub_6B4ECD0;");
    asm("loc_6B63BE1: mov %eax,%ecx;");
    asm("loc_6B63BE3: mov (%ecx),%eax;");
    asm("loc_6B63BE5: mov 0x18(%ecx),%ebx;");
    asm("loc_6B63BE8: add $4,%esp;");
    asm("loc_6B63BEB: inc %eax;");
    asm("loc_6B63BEC: mov %eax,(%ecx);");
    asm("loc_6B63BEE: mov (%esi),%edx;");
    asm("loc_6B63BF0: add %edx,%ebx;");
    asm("loc_6B63BF2: mov %eax,%edi;");
    asm("loc_6B63BF4: mov 0x10(%ecx),%eax;");
    asm("loc_6B63BF7: mov %ebx,0x18(%ecx);");
    asm("loc_6B63BFA: mov (%esi),%esi;");
    asm("loc_6B63BFC: cmp %eax,%esi;");
    asm("loc_6B63BFE: jbe loc_6B63C03;");
    asm("loc_6B63C00: mov %esi,0x10(%ecx);");
    asm("loc_6B63C03: mov 0x18(%ecx),%eax;");
    asm("loc_6B63C06: xor %edx,%edx;");
    asm("loc_6B63C08: div %edi;");
    asm("loc_6B63C0A: pop %edi;");
    asm("loc_6B63C0B: pop %esi;");
    asm("loc_6B63C0C: pop %ebx;");
    asm("loc_6B63C0D: mov %eax,8(%ecx);");
    asm("loc_6B63C10: xor %eax,%eax;");
    asm("loc_6B63C12: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63C20() // _sub_6B63C20
{
    __DEBUG_ASM(6B63C20);
    // chunk 0x6B63C20 _sub_6B63C20
    asm("loc_6B63C20: mov 4(%esp),%eax;");
    asm("loc_6B63C24: push %ebx;");
    asm("loc_6B63C25: push %ebp;");
    asm("loc_6B63C26: mov 0x10(%esp),%ebp;");
    asm("loc_6B63C2A: push %esi;");
    asm("loc_6B63C2B: push %edi;");
    asm("loc_6B63C2C: mov %ecx,%edi;");
    asm("loc_6B63C2E: lea 0x10(%edi),%esi;");
    asm("loc_6B63C31: push %esi;");
    asm("loc_6B63C32: push %ebp;");
    asm("loc_6B63C33: lea 0x18(%edi),%ebx;");
    asm("loc_6B63C36: push %ebx;");
    asm("loc_6B63C37: mov %ebp,4(%esi);");
    asm("loc_6B63C3A: mov %eax,8(%esi);");
    asm("loc_6B63C3D: movl $0,(%esi);");
    asm("loc_6B63C43: movl $0,0xC(%esi);");
    asm("loc_6B63C4A: call _sub_6B4E780;");
    asm("loc_6B63C4F: test %eax,%eax;");
    asm("loc_6B63C51: mov %eax,0x1C(%edi);");
    asm("loc_6B63C54: je loc_6B63C62;");
    asm("loc_6B63C56: pop %edi;");
    asm("loc_6B63C57: pop %esi;");
    asm("loc_6B63C58: pop %ebp;");
    asm("loc_6B63C59: mov $0x17,%eax;");
    asm("loc_6B63C5E: pop %ebx;");
    asm("loc_6B63C5F: ret $0xC;");
    asm("loc_6B63C62: mov (%esi),%edx;");
    asm("loc_6B63C64: mov 4(%esi),%ecx;");
    asm("loc_6B63C67: add $4,%edx;");
    asm("loc_6B63C6A: mov %edx,%eax;");
    asm("loc_6B63C6C: cmp %ecx,%eax;");
    asm("loc_6B63C6E: mov %edx,(%esi);");
    asm("loc_6B63C70: jbe loc_6B63C79;");
    asm("loc_6B63C72: movl $0x17,0xC(%esi);");
    asm("loc_6B63C79: mov 0x1C(%edi),%eax;");
    asm("loc_6B63C7C: test %eax,%eax;");
    asm("loc_6B63C7E: jne loc_6B63D1F;");
    asm("loc_6B63C84: mov (%ebx),%eax;");
    asm("loc_6B63C86: mov (%eax),%ecx;");
    asm("loc_6B63C88: add $4,%eax;");
    asm("loc_6B63C8B: mov %eax,(%ebx);");
    asm("loc_6B63C8D: mov %ecx,0x20(%edi);");
    asm("loc_6B63C90: mov (%esi),%edx;");
    asm("loc_6B63C92: mov 4(%esi),%ecx;");
    asm("loc_6B63C95: add $4,%edx;");
    asm("loc_6B63C98: mov %edx,%eax;");
    asm("loc_6B63C9A: cmp %ecx,%eax;");
    asm("loc_6B63C9C: mov %edx,(%esi);");
    asm("loc_6B63C9E: jbe loc_6B63CA7;");
    asm("loc_6B63CA0: movl $0x17,0xC(%esi);");
    asm("loc_6B63CA7: mov 0x1C(%edi),%eax;");
    asm("loc_6B63CAA: test %eax,%eax;");
    asm("loc_6B63CAC: jne loc_6B63D1F;");
    asm("loc_6B63CAE: mov (%ebx),%eax;");
    asm("loc_6B63CB0: mov (%eax),%edx;");
    asm("loc_6B63CB2: push %esi;");
    asm("loc_6B63CB3: push %ebp;");
    asm("loc_6B63CB4: add $4,%eax;");
    asm("loc_6B63CB7: push %ebx;");
    asm("loc_6B63CB8: mov %edi,%ecx;");
    asm("loc_6B63CBA: mov %edx,0x24(%edi);");
    asm("loc_6B63CBD: mov %eax,(%ebx);");
    asm("loc_6B63CBF: call _sub_6B4E7A0;");
    asm("loc_6B63CC4: test %eax,%eax;");
    asm("loc_6B63CC6: mov %eax,0x1C(%edi);");
    asm("loc_6B63CC9: je loc_6B63CD7;");
    asm("loc_6B63CCB: pop %edi;");
    asm("loc_6B63CCC: pop %esi;");
    asm("loc_6B63CCD: pop %ebp;");
    asm("loc_6B63CCE: mov $0x17,%eax;");
    asm("loc_6B63CD3: pop %ebx;");
    asm("loc_6B63CD4: ret $0xC;");
    asm("loc_6B63CD7: mov (%esi),%eax;");
    asm("loc_6B63CD9: mov 0x1C(%esp),%ecx;");
    asm("loc_6B63CDD: mov %eax,(%ecx);");
    asm("loc_6B63CDF: mov 0xC(%edi),%edx;");
    asm("loc_6B63CE2: push %edx;");
    asm("loc_6B63CE3: call _sub_6B4ECD0;");
    asm("loc_6B63CE8: mov %eax,%ecx;");
    asm("loc_6B63CEA: mov 4(%ecx),%edi;");
    asm("loc_6B63CED: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B63CF0: mov 0x14(%ecx),%edx;");
    asm("loc_6B63CF3: add $4,%esp;");
    asm("loc_6B63CF6: inc %edi;");
    asm("loc_6B63CF7: mov %edi,4(%ecx);");
    asm("loc_6B63CFA: mov (%esi),%eax;");
    asm("loc_6B63CFC: add $2,%eax;");
    asm("loc_6B63CFF: add %eax,%ebp;");
    asm("loc_6B63D01: mov %ebp,0x1C(%ecx);");
    asm("loc_6B63D04: mov (%esi),%esi;");
    asm("loc_6B63D06: add $2,%edx;");
    asm("loc_6B63D09: cmp %edx,%esi;");
    asm("loc_6B63D0B: jbe loc_6B63D13;");
    asm("loc_6B63D0D: add $2,%esi;");
    asm("loc_6B63D10: mov %esi,0x14(%ecx);");
    asm("loc_6B63D13: mov 0x1C(%ecx),%eax;");
    asm("loc_6B63D16: xor %edx,%edx;");
    asm("loc_6B63D18: div %edi;");
    asm("loc_6B63D1A: mov %eax,0xC(%ecx);");
    asm("loc_6B63D1D: xor %eax,%eax;");
    asm("loc_6B63D1F: pop %edi;");
    asm("loc_6B63D20: pop %esi;");
    asm("loc_6B63D21: pop %ebp;");
    asm("loc_6B63D22: pop %ebx;");
    asm("loc_6B63D23: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63D30() // _sub_6B63D30
{
    __DEBUG_ASM(6B63D30);
    // chunk 0x6B63D30 _sub_6B63D30
    asm("loc_6B63D30: mov _data_6B6E964,%eax;");
    asm("loc_6B63D35: mov %eax,_data_6B744C0;");
    asm("loc_6B63D3A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63D40() // _sub_6B63D40
{
    __DEBUG_ASM(6B63D40);
    // chunk 0x6B63D40 _sub_6B63D40
    asm("loc_6B63D40: mov _data_6B6E964,%eax;");
    asm("loc_6B63D45: mov %eax,_data_6B744C4;");
    asm("loc_6B63D4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63D50() // _sub_6B63D50
{
    __DEBUG_ASM(6B63D50);
    // chunk 0x6B63D50 _sub_6B63D50
    asm("loc_6B63D50: mov _data_6B6E968,%eax;");
    asm("loc_6B63D55: mov %eax,_data_6B744BC;");
    asm("loc_6B63D5A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63D60() // _sub_6B63D60
{
    __DEBUG_ASM(6B63D60);
    // chunk 0x6B63D60 _sub_6B63D60
    asm("loc_6B63D60: mov 8(%esp),%eax;");
    asm("loc_6B63D64: sub $0xC,%esp;");
    asm("loc_6B63D67: push %ebx;");
    asm("loc_6B63D68: push %ebp;");
    asm("loc_6B63D69: push %esi;");
    asm("loc_6B63D6A: push %edi;");
    asm("loc_6B63D6B: mov %ecx,%edi;");
    asm("loc_6B63D6D: mov 0x20(%esp),%ecx;");
    asm("loc_6B63D71: lea 0x10(%edi),%esi;");
    asm("loc_6B63D74: mov %eax,4(%esi);");
    asm("loc_6B63D77: mov (%ecx),%edx;");
    asm("loc_6B63D79: mov %edx,8(%esi);");
    asm("loc_6B63D7C: movl $0,(%esi);");
    asm("loc_6B63D82: movl $0,0xC(%esi);");
    asm("loc_6B63D89: mov 0x14(%edi),%eax;");
    asm("loc_6B63D8C: push %esi;");
    asm("loc_6B63D8D: push %eax;");
    asm("loc_6B63D8E: lea 0x18(%edi),%ebx;");
    asm("loc_6B63D91: push %ebx;");
    asm("loc_6B63D92: mov %edi,%ecx;");
    asm("loc_6B63D94: call _sub_6B4E740;");
    asm("loc_6B63D99: test %eax,%eax;");
    asm("loc_6B63D9B: mov %eax,0x1C(%edi);");
    asm("loc_6B63D9E: je loc_6B63DAF;");
    asm("loc_6B63DA0: pop %edi;");
    asm("loc_6B63DA1: pop %esi;");
    asm("loc_6B63DA2: pop %ebp;");
    asm("loc_6B63DA3: mov $0x16,%eax;");
    asm("loc_6B63DA8: pop %ebx;");
    asm("loc_6B63DA9: add $0xC,%esp;");
    asm("loc_6B63DAC: ret $0xC;");
    asm("loc_6B63DAF: mov (%esi),%edx;");
    asm("loc_6B63DB1: mov 4(%esi),%ecx;");
    asm("loc_6B63DB4: add $4,%edx;");
    asm("loc_6B63DB7: mov %edx,%eax;");
    asm("loc_6B63DB9: cmp %ecx,%eax;");
    asm("loc_6B63DBB: mov %edx,(%esi);");
    asm("loc_6B63DBD: jbe loc_6B63DC6;");
    asm("loc_6B63DBF: movl $0x16,0xC(%esi);");
    asm("loc_6B63DC6: mov 0x1C(%edi),%eax;");
    asm("loc_6B63DC9: test %eax,%eax;");
    asm("loc_6B63DCB: je loc_6B63DDC;");
    asm("loc_6B63DCD: pop %edi;");
    asm("loc_6B63DCE: pop %esi;");
    asm("loc_6B63DCF: pop %ebp;");
    asm("loc_6B63DD0: mov $0x16,%eax;");
    asm("loc_6B63DD5: pop %ebx;");
    asm("loc_6B63DD6: add $0xC,%esp;");
    asm("loc_6B63DD9: ret $0xC;");
    asm("loc_6B63DDC: mov (%ebx),%eax;");
    asm("loc_6B63DDE: mov 0x20(%edi),%ecx;");
    asm("loc_6B63DE1: mov %ecx,(%eax);");
    asm("loc_6B63DE3: add $4,%eax;");
    asm("loc_6B63DE6: mov %eax,(%ebx);");
    asm("loc_6B63DE8: mov (%esi),%edx;");
    asm("loc_6B63DEA: mov 4(%esi),%ecx;");
    asm("loc_6B63DED: add $0xC,%edx;");
    asm("loc_6B63DF0: mov %edx,%eax;");
    asm("loc_6B63DF2: cmp %ecx,%eax;");
    asm("loc_6B63DF4: mov %edx,(%esi);");
    asm("loc_6B63DF6: jbe loc_6B63DFF;");
    asm("loc_6B63DF8: movl $0x16,0xC(%esi);");
    asm("loc_6B63DFF: mov 0x1C(%edi),%eax;");
    asm("loc_6B63E02: test %eax,%eax;");
    asm("loc_6B63E04: je loc_6B63E15;");
    asm("loc_6B63E06: pop %edi;");
    asm("loc_6B63E07: pop %esi;");
    asm("loc_6B63E08: pop %ebp;");
    asm("loc_6B63E09: mov $0x16,%eax;");
    asm("loc_6B63E0E: pop %ebx;");
    asm("loc_6B63E0F: add $0xC,%esp;");
    asm("loc_6B63E12: ret $0xC;");
    asm("loc_6B63E15: mov 0x24(%edi),%edx;");
    asm("loc_6B63E18: mov 0x2C(%edi),%ecx;");
    asm("loc_6B63E1B: mov (%ebx),%ebp;");
    asm("loc_6B63E1D: mov 0x28(%edi),%eax;");
    asm("loc_6B63E20: mov %edx,0x10(%esp);");
    asm("loc_6B63E24: lea 0x10(%esp),%edx;");
    asm("loc_6B63E28: mov %ecx,0x18(%esp);");
    asm("loc_6B63E2C: push %edx;");
    asm("loc_6B63E2D: mov %ebp,%ecx;");
    asm("loc_6B63E2F: mov %eax,0x18(%esp);");
    asm("loc_6B63E33: call _sub_6B3A160;");
    asm("loc_6B63E38: mov 0x14(%edi),%eax;");
    asm("loc_6B63E3B: push %esi;");
    asm("loc_6B63E3C: push %eax;");
    asm("loc_6B63E3D: add $0xC,%ebp;");
    asm("loc_6B63E40: push %ebx;");
    asm("loc_6B63E41: mov %edi,%ecx;");
    asm("loc_6B63E43: mov %ebp,(%ebx);");
    asm("loc_6B63E45: call _sub_6B4E790;");
    asm("loc_6B63E4A: test %eax,%eax;");
    asm("loc_6B63E4C: mov %eax,0x1C(%edi);");
    asm("loc_6B63E4F: je loc_6B63E60;");
    asm("loc_6B63E51: pop %edi;");
    asm("loc_6B63E52: pop %esi;");
    asm("loc_6B63E53: pop %ebp;");
    asm("loc_6B63E54: mov $0x16,%eax;");
    asm("loc_6B63E59: pop %ebx;");
    asm("loc_6B63E5A: add $0xC,%esp;");
    asm("loc_6B63E5D: ret $0xC;");
    asm("loc_6B63E60: mov (%esi),%ecx;");
    asm("loc_6B63E62: mov 0x28(%esp),%edx;");
    asm("loc_6B63E66: mov %ecx,(%edx);");
    asm("loc_6B63E68: mov 0xC(%edi),%eax;");
    asm("loc_6B63E6B: push %eax;");
    asm("loc_6B63E6C: call _sub_6B4ECD0;");
    asm("loc_6B63E71: mov %eax,%ecx;");
    asm("loc_6B63E73: mov (%ecx),%ebp;");
    asm("loc_6B63E75: mov 0x18(%ecx),%ebx;");
    asm("loc_6B63E78: mov 0x10(%ecx),%eax;");
    asm("loc_6B63E7B: add $4,%esp;");
    asm("loc_6B63E7E: inc %ebp;");
    asm("loc_6B63E7F: mov %ebp,(%ecx);");
    asm("loc_6B63E81: mov (%esi),%edx;");
    asm("loc_6B63E83: add %edx,%ebx;");
    asm("loc_6B63E85: mov %ebx,0x18(%ecx);");
    asm("loc_6B63E88: mov (%esi),%esi;");
    asm("loc_6B63E8A: cmp %eax,%esi;");
    asm("loc_6B63E8C: mov %ebp,%edi;");
    asm("loc_6B63E8E: jbe loc_6B63E93;");
    asm("loc_6B63E90: mov %esi,0x10(%ecx);");
    asm("loc_6B63E93: mov 0x18(%ecx),%eax;");
    asm("loc_6B63E96: xor %edx,%edx;");
    asm("loc_6B63E98: div %edi;");
    asm("loc_6B63E9A: pop %edi;");
    asm("loc_6B63E9B: pop %esi;");
    asm("loc_6B63E9C: pop %ebp;");
    asm("loc_6B63E9D: pop %ebx;");
    asm("loc_6B63E9E: mov %eax,8(%ecx);");
    asm("loc_6B63EA1: xor %eax,%eax;");
    asm("loc_6B63EA3: add $0xC,%esp;");
    asm("loc_6B63EA6: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63EB0() // _sub_6B63EB0
{
    __DEBUG_ASM(6B63EB0);
    // chunk 0x6B63EB0 _sub_6B63EB0
    asm("loc_6B63EB0: mov 8(%esp),%eax;");
    asm("loc_6B63EB4: push %ebx;");
    asm("loc_6B63EB5: push %ebp;");
    asm("loc_6B63EB6: push %esi;");
    asm("loc_6B63EB7: push %edi;");
    asm("loc_6B63EB8: mov %ecx,%edi;");
    asm("loc_6B63EBA: mov 0x14(%esp),%ecx;");
    asm("loc_6B63EBE: lea 0x10(%edi),%esi;");
    asm("loc_6B63EC1: push %esi;");
    asm("loc_6B63EC2: push %eax;");
    asm("loc_6B63EC3: mov %ecx,8(%esi);");
    asm("loc_6B63EC6: lea 0x18(%edi),%ebx;");
    asm("loc_6B63EC9: push %ebx;");
    asm("loc_6B63ECA: mov %edi,%ecx;");
    asm("loc_6B63ECC: mov %eax,4(%esi);");
    asm("loc_6B63ECF: movl $0,(%esi);");
    asm("loc_6B63ED5: movl $0,0xC(%esi);");
    asm("loc_6B63EDC: call _sub_6B4E780;");
    asm("loc_6B63EE1: test %eax,%eax;");
    asm("loc_6B63EE3: mov %eax,0x1C(%edi);");
    asm("loc_6B63EE6: je loc_6B63EF4;");
    asm("loc_6B63EE8: pop %edi;");
    asm("loc_6B63EE9: pop %esi;");
    asm("loc_6B63EEA: pop %ebp;");
    asm("loc_6B63EEB: mov $0x17,%eax;");
    asm("loc_6B63EF0: pop %ebx;");
    asm("loc_6B63EF1: ret $0xC;");
    asm("loc_6B63EF4: mov (%esi),%edx;");
    asm("loc_6B63EF6: mov 4(%esi),%ecx;");
    asm("loc_6B63EF9: add $4,%edx;");
    asm("loc_6B63EFC: mov %edx,%eax;");
    asm("loc_6B63EFE: cmp %ecx,%eax;");
    asm("loc_6B63F00: mov %edx,(%esi);");
    asm("loc_6B63F02: jbe loc_6B63F0B;");
    asm("loc_6B63F04: movl $0x17,0xC(%esi);");
    asm("loc_6B63F0B: mov 0x1C(%edi),%eax;");
    asm("loc_6B63F0E: test %eax,%eax;");
    asm("loc_6B63F10: jne loc_6B63FBB;");
    asm("loc_6B63F16: mov (%ebx),%eax;");
    asm("loc_6B63F18: mov (%eax),%edx;");
    asm("loc_6B63F1A: add $4,%eax;");
    asm("loc_6B63F1D: mov %edx,0x20(%edi);");
    asm("loc_6B63F20: mov %eax,(%ebx);");
    asm("loc_6B63F22: mov (%esi),%edx;");
    asm("loc_6B63F24: mov 4(%esi),%ecx;");
    asm("loc_6B63F27: add $0xC,%edx;");
    asm("loc_6B63F2A: mov %edx,%eax;");
    asm("loc_6B63F2C: cmp %ecx,%eax;");
    asm("loc_6B63F2E: mov %edx,(%esi);");
    asm("loc_6B63F30: jbe loc_6B63F39;");
    asm("loc_6B63F32: movl $0x17,0xC(%esi);");
    asm("loc_6B63F39: mov 0x1C(%edi),%eax;");
    asm("loc_6B63F3C: test %eax,%eax;");
    asm("loc_6B63F3E: jne loc_6B63FBB;");
    asm("loc_6B63F40: mov (%ebx),%ebp;");
    asm("loc_6B63F42: push %ebp;");
    asm("loc_6B63F43: lea 0x24(%edi),%ecx;");
    asm("loc_6B63F46: call _sub_6B3A160;");
    asm("loc_6B63F4B: mov 0x18(%esp),%eax;");
    asm("loc_6B63F4F: push %esi;");
    asm("loc_6B63F50: push %eax;");
    asm("loc_6B63F51: add $0xC,%ebp;");
    asm("loc_6B63F54: push %ebx;");
    asm("loc_6B63F55: mov %edi,%ecx;");
    asm("loc_6B63F57: mov %ebp,(%ebx);");
    asm("loc_6B63F59: call _sub_6B4E7A0;");
    asm("loc_6B63F5E: test %eax,%eax;");
    asm("loc_6B63F60: mov %eax,0x1C(%edi);");
    asm("loc_6B63F63: je loc_6B63F71;");
    asm("loc_6B63F65: pop %edi;");
    asm("loc_6B63F66: pop %esi;");
    asm("loc_6B63F67: pop %ebp;");
    asm("loc_6B63F68: mov $0x17,%eax;");
    asm("loc_6B63F6D: pop %ebx;");
    asm("loc_6B63F6E: ret $0xC;");
    asm("loc_6B63F71: mov (%esi),%ecx;");
    asm("loc_6B63F73: mov 0x1C(%esp),%edx;");
    asm("loc_6B63F77: mov %ecx,(%edx);");
    asm("loc_6B63F79: mov 0xC(%edi),%eax;");
    asm("loc_6B63F7C: push %eax;");
    asm("loc_6B63F7D: call _sub_6B4ECD0;");
    asm("loc_6B63F82: mov %eax,%ecx;");
    asm("loc_6B63F84: mov 4(%ecx),%edx;");
    asm("loc_6B63F87: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B63F8A: mov 0x14(%ecx),%eax;");
    asm("loc_6B63F8D: add $4,%esp;");
    asm("loc_6B63F90: inc %edx;");
    asm("loc_6B63F91: mov %edx,4(%ecx);");
    asm("loc_6B63F94: mov %edx,%edi;");
    asm("loc_6B63F96: mov (%esi),%edx;");
    asm("loc_6B63F98: add $2,%edx;");
    asm("loc_6B63F9B: add %edx,%ebp;");
    asm("loc_6B63F9D: mov %ebp,0x1C(%ecx);");
    asm("loc_6B63FA0: mov (%esi),%esi;");
    asm("loc_6B63FA2: add $2,%eax;");
    asm("loc_6B63FA5: cmp %eax,%esi;");
    asm("loc_6B63FA7: jbe loc_6B63FAF;");
    asm("loc_6B63FA9: add $2,%esi;");
    asm("loc_6B63FAC: mov %esi,0x14(%ecx);");
    asm("loc_6B63FAF: mov 0x1C(%ecx),%eax;");
    asm("loc_6B63FB2: xor %edx,%edx;");
    asm("loc_6B63FB4: div %edi;");
    asm("loc_6B63FB6: mov %eax,0xC(%ecx);");
    asm("loc_6B63FB9: xor %eax,%eax;");
    asm("loc_6B63FBB: pop %edi;");
    asm("loc_6B63FBC: pop %esi;");
    asm("loc_6B63FBD: pop %ebp;");
    asm("loc_6B63FBE: pop %ebx;");
    asm("loc_6B63FBF: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63FD0() // _sub_6B63FD0
{
    __DEBUG_ASM(6B63FD0);
    // chunk 0x6B63FD0 _sub_6B63FD0
    asm("loc_6B63FD0: mov _data_6B6E974,%eax;");
    asm("loc_6B63FD5: mov %eax,_data_6B744D0;");
    asm("loc_6B63FDA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63FE0() // _sub_6B63FE0
{
    __DEBUG_ASM(6B63FE0);
    // chunk 0x6B63FE0 _sub_6B63FE0
    asm("loc_6B63FE0: mov _data_6B6E974,%eax;");
    asm("loc_6B63FE5: mov %eax,_data_6B744D4;");
    asm("loc_6B63FEA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B63FF0() // _sub_6B63FF0
{
    __DEBUG_ASM(6B63FF0);
    // chunk 0x6B63FF0 _sub_6B63FF0
    asm("loc_6B63FF0: mov _data_6B6E978,%eax;");
    asm("loc_6B63FF5: mov %eax,_data_6B744CC;");
    asm("loc_6B63FFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64000() // _sub_6B64000
{
    __DEBUG_ASM(6B64000);
    // chunk 0x6B64000 _sub_6B64000
    asm("loc_6B64000: mov _data_6B6E984,%eax;");
    asm("loc_6B64005: mov %eax,_data_6B744E0;");
    asm("loc_6B6400A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64010() // _sub_6B64010
{
    __DEBUG_ASM(6B64010);
    // chunk 0x6B64010 _sub_6B64010
    asm("loc_6B64010: mov _data_6B6E984,%eax;");
    asm("loc_6B64015: mov %eax,_data_6B744E4;");
    asm("loc_6B6401A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64020() // _sub_6B64020
{
    __DEBUG_ASM(6B64020);
    // chunk 0x6B64020 _sub_6B64020
    asm("loc_6B64020: mov _data_6B6E988,%eax;");
    asm("loc_6B64025: mov %eax,_data_6B744DC;");
    asm("loc_6B6402A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64030() // _sub_6B64030
{
    __DEBUG_ASM(6B64030);
    // chunk 0x6B64030 _sub_6B64030
    asm("loc_6B64030: movl $_off_6B6DC84,(%ecx);");
    asm("loc_6B64036: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64040() // _sub_6B64040
{
    __DEBUG_ASM(6B64040);
    // chunk 0x6B64040 _sub_6B64040
    asm("loc_6B64040: mov 8(%esp),%eax;");
    asm("loc_6B64044: push %ebx;");
    asm("loc_6B64045: push %ebp;");
    asm("loc_6B64046: push %esi;");
    asm("loc_6B64047: push %edi;");
    asm("loc_6B64048: mov %ecx,%edi;");
    asm("loc_6B6404A: mov 0x14(%esp),%ecx;");
    asm("loc_6B6404E: lea 0x10(%edi),%esi;");
    asm("loc_6B64051: mov %eax,4(%esi);");
    asm("loc_6B64054: mov (%ecx),%edx;");
    asm("loc_6B64056: mov %edx,8(%esi);");
    asm("loc_6B64059: movl $0,(%esi);");
    asm("loc_6B6405F: movl $0,0xC(%esi);");
    asm("loc_6B64066: mov 0x14(%edi),%eax;");
    asm("loc_6B64069: push %esi;");
    asm("loc_6B6406A: push %eax;");
    asm("loc_6B6406B: lea 0x18(%edi),%ebx;");
    asm("loc_6B6406E: push %ebx;");
    asm("loc_6B6406F: mov %edi,%ecx;");
    asm("loc_6B64071: call _sub_6B4E740;");
    asm("loc_6B64076: test %eax,%eax;");
    asm("loc_6B64078: mov %eax,0x1C(%edi);");
    asm("loc_6B6407B: je loc_6B64089;");
    asm("loc_6B6407D: pop %edi;");
    asm("loc_6B6407E: pop %esi;");
    asm("loc_6B6407F: pop %ebp;");
    asm("loc_6B64080: mov $0x16,%eax;");
    asm("loc_6B64085: pop %ebx;");
    asm("loc_6B64086: ret $0xC;");
    asm("loc_6B64089: mov (%esi),%edx;");
    asm("loc_6B6408B: mov 4(%esi),%ecx;");
    asm("loc_6B6408E: add $4,%edx;");
    asm("loc_6B64091: mov %edx,%eax;");
    asm("loc_6B64093: cmp %ecx,%eax;");
    asm("loc_6B64095: mov %edx,(%esi);");
    asm("loc_6B64097: mov $0x16,%ebp;");
    asm("loc_6B6409C: jbe loc_6B640A1;");
    asm("loc_6B6409E: mov %ebp,0xC(%esi);");
    asm("loc_6B640A1: mov 0x1C(%edi),%eax;");
    asm("loc_6B640A4: test %eax,%eax;");
    asm("loc_6B640A6: je loc_6B640B1;");
    asm("loc_6B640A8: pop %edi;");
    asm("loc_6B640A9: pop %esi;");
    asm("loc_6B640AA: mov %ebp,%eax;");
    asm("loc_6B640AC: pop %ebp;");
    asm("loc_6B640AD: pop %ebx;");
    asm("loc_6B640AE: ret $0xC;");
    asm("loc_6B640B1: mov (%ebx),%eax;");
    asm("loc_6B640B3: mov 0x20(%edi),%ecx;");
    asm("loc_6B640B6: mov %ecx,(%eax);");
    asm("loc_6B640B8: add $4,%eax;");
    asm("loc_6B640BB: mov %eax,(%ebx);");
    asm("loc_6B640BD: mov (%esi),%edx;");
    asm("loc_6B640BF: mov 4(%esi),%ecx;");
    asm("loc_6B640C2: add $4,%edx;");
    asm("loc_6B640C5: mov %edx,%eax;");
    asm("loc_6B640C7: cmp %ecx,%eax;");
    asm("loc_6B640C9: mov %edx,(%esi);");
    asm("loc_6B640CB: jbe loc_6B640D0;");
    asm("loc_6B640CD: mov %ebp,0xC(%esi);");
    asm("loc_6B640D0: mov 0x1C(%edi),%eax;");
    asm("loc_6B640D3: test %eax,%eax;");
    asm("loc_6B640D5: je loc_6B640E0;");
    asm("loc_6B640D7: pop %edi;");
    asm("loc_6B640D8: pop %esi;");
    asm("loc_6B640D9: mov %ebp,%eax;");
    asm("loc_6B640DB: pop %ebp;");
    asm("loc_6B640DC: pop %ebx;");
    asm("loc_6B640DD: ret $0xC;");
    asm("loc_6B640E0: mov (%ebx),%eax;");
    asm("loc_6B640E2: mov 0x24(%edi),%edx;");
    asm("loc_6B640E5: mov %edx,(%eax);");
    asm("loc_6B640E7: add $4,%eax;");
    asm("loc_6B640EA: mov %eax,(%ebx);");
    asm("loc_6B640EC: mov (%esi),%edx;");
    asm("loc_6B640EE: mov 4(%esi),%ecx;");
    asm("loc_6B640F1: add $2,%edx;");
    asm("loc_6B640F4: mov %edx,%eax;");
    asm("loc_6B640F6: cmp %ecx,%eax;");
    asm("loc_6B640F8: mov %edx,(%esi);");
    asm("loc_6B640FA: jbe loc_6B640FF;");
    asm("loc_6B640FC: mov %ebp,0xC(%esi);");
    asm("loc_6B640FF: mov 0x1C(%edi),%eax;");
    asm("loc_6B64102: test %eax,%eax;");
    asm("loc_6B64104: je loc_6B6410F;");
    asm("loc_6B64106: pop %edi;");
    asm("loc_6B64107: pop %esi;");
    asm("loc_6B64108: mov %ebp,%eax;");
    asm("loc_6B6410A: pop %ebp;");
    asm("loc_6B6410B: pop %ebx;");
    asm("loc_6B6410C: ret $0xC;");
    asm("loc_6B6410F: mov (%ebx),%eax;");
    asm("loc_6B64111: mov 0x28(%edi),%cx;");
    asm("loc_6B64115: mov %cx,(%eax);");
    asm("loc_6B64118: add $2,%eax;");
    asm("loc_6B6411B: mov %eax,(%ebx);");
    asm("loc_6B6411D: mov (%esi),%edx;");
    asm("loc_6B6411F: mov 4(%esi),%ecx;");
    asm("loc_6B64122: add $2,%edx;");
    asm("loc_6B64125: mov %edx,%eax;");
    asm("loc_6B64127: cmp %ecx,%eax;");
    asm("loc_6B64129: mov %edx,(%esi);");
    asm("loc_6B6412B: jbe loc_6B64130;");
    asm("loc_6B6412D: mov %ebp,0xC(%esi);");
    asm("loc_6B64130: mov 0x1C(%edi),%eax;");
    asm("loc_6B64133: test %eax,%eax;");
    asm("loc_6B64135: je loc_6B64140;");
    asm("loc_6B64137: pop %edi;");
    asm("loc_6B64138: pop %esi;");
    asm("loc_6B64139: mov %ebp,%eax;");
    asm("loc_6B6413B: pop %ebp;");
    asm("loc_6B6413C: pop %ebx;");
    asm("loc_6B6413D: ret $0xC;");
    asm("loc_6B64140: mov (%ebx),%eax;");
    asm("loc_6B64142: mov 0x2A(%edi),%dx;");
    asm("loc_6B64146: mov %dx,(%eax);");
    asm("loc_6B64149: add $2,%eax;");
    asm("loc_6B6414C: mov %eax,(%ebx);");
    asm("loc_6B6414E: mov (%esi),%edx;");
    asm("loc_6B64150: mov 4(%esi),%ecx;");
    asm("loc_6B64153: add $4,%edx;");
    asm("loc_6B64156: mov %edx,%eax;");
    asm("loc_6B64158: cmp %ecx,%eax;");
    asm("loc_6B6415A: mov %edx,(%esi);");
    asm("loc_6B6415C: jbe loc_6B64161;");
    asm("loc_6B6415E: mov %ebp,0xC(%esi);");
    asm("loc_6B64161: mov 0x1C(%edi),%eax;");
    asm("loc_6B64164: test %eax,%eax;");
    asm("loc_6B64166: je loc_6B64171;");
    asm("loc_6B64168: pop %edi;");
    asm("loc_6B64169: pop %esi;");
    asm("loc_6B6416A: mov %ebp,%eax;");
    asm("loc_6B6416C: pop %ebp;");
    asm("loc_6B6416D: pop %ebx;");
    asm("loc_6B6416E: ret $0xC;");
    asm("loc_6B64171: mov (%ebx),%eax;");
    asm("loc_6B64173: flds 0x2C(%edi);");
    asm("loc_6B64176: add $4,%eax;");
    asm("loc_6B64179: fstps -4(%eax);");
    asm("loc_6B6417C: mov %eax,(%ebx);");
    asm("loc_6B6417E: mov (%esi),%edx;");
    asm("loc_6B64180: mov 4(%esi),%ecx;");
    asm("loc_6B64183: inc %edx;");
    asm("loc_6B64184: mov %edx,%eax;");
    asm("loc_6B64186: cmp %ecx,%eax;");
    asm("loc_6B64188: mov %edx,(%esi);");
    asm("loc_6B6418A: jbe loc_6B6418F;");
    asm("loc_6B6418C: mov %ebp,0xC(%esi);");
    asm("loc_6B6418F: mov 0x1C(%edi),%eax;");
    asm("loc_6B64192: test %eax,%eax;");
    asm("loc_6B64194: je loc_6B6419F;");
    asm("loc_6B64196: pop %edi;");
    asm("loc_6B64197: pop %esi;");
    asm("loc_6B64198: mov %ebp,%eax;");
    asm("loc_6B6419A: pop %ebp;");
    asm("loc_6B6419B: pop %ebx;");
    asm("loc_6B6419C: ret $0xC;");
    asm("loc_6B6419F: mov (%ebx),%eax;");
    asm("loc_6B641A1: mov 0x30(%edi),%cl;");
    asm("loc_6B641A4: mov %cl,(%eax);");
    asm("loc_6B641A6: mov 0x14(%edi),%edx;");
    asm("loc_6B641A9: push %esi;");
    asm("loc_6B641AA: push %edx;");
    asm("loc_6B641AB: inc %eax;");
    asm("loc_6B641AC: push %ebx;");
    asm("loc_6B641AD: mov %edi,%ecx;");
    asm("loc_6B641AF: mov %eax,(%ebx);");
    asm("loc_6B641B1: call _sub_6B4E790;");
    asm("loc_6B641B6: test %eax,%eax;");
    asm("loc_6B641B8: mov %eax,0x1C(%edi);");
    asm("loc_6B641BB: je loc_6B641C6;");
    asm("loc_6B641BD: pop %edi;");
    asm("loc_6B641BE: pop %esi;");
    asm("loc_6B641BF: mov %ebp,%eax;");
    asm("loc_6B641C1: pop %ebp;");
    asm("loc_6B641C2: pop %ebx;");
    asm("loc_6B641C3: ret $0xC;");
    asm("loc_6B641C6: mov (%esi),%eax;");
    asm("loc_6B641C8: mov 0x1C(%esp),%ecx;");
    asm("loc_6B641CC: mov %eax,(%ecx);");
    asm("loc_6B641CE: mov 0xC(%edi),%edx;");
    asm("loc_6B641D1: push %edx;");
    asm("loc_6B641D2: call _sub_6B4ECD0;");
    asm("loc_6B641D7: mov %eax,%ecx;");
    asm("loc_6B641D9: mov (%ecx),%edi;");
    asm("loc_6B641DB: mov 0x18(%ecx),%edx;");
    asm("loc_6B641DE: add $4,%esp;");
    asm("loc_6B641E1: inc %edi;");
    asm("loc_6B641E2: mov %edi,(%ecx);");
    asm("loc_6B641E4: mov (%esi),%eax;");
    asm("loc_6B641E6: add %eax,%edx;");
    asm("loc_6B641E8: mov 0x10(%ecx),%eax;");
    asm("loc_6B641EB: mov %edx,0x18(%ecx);");
    asm("loc_6B641EE: mov (%esi),%esi;");
    asm("loc_6B641F0: cmp %eax,%esi;");
    asm("loc_6B641F2: jbe loc_6B641F7;");
    asm("loc_6B641F4: mov %esi,0x10(%ecx);");
    asm("loc_6B641F7: mov 0x18(%ecx),%eax;");
    asm("loc_6B641FA: xor %edx,%edx;");
    asm("loc_6B641FC: div %edi;");
    asm("loc_6B641FE: pop %edi;");
    asm("loc_6B641FF: pop %esi;");
    asm("loc_6B64200: pop %ebp;");
    asm("loc_6B64201: pop %ebx;");
    asm("loc_6B64202: mov %eax,8(%ecx);");
    asm("loc_6B64205: xor %eax,%eax;");
    asm("loc_6B64207: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64210() // _sub_6B64210
{
    __DEBUG_ASM(6B64210);
    // chunk 0x6B64210 _sub_6B64210
    asm("loc_6B64210: mov 4(%esp),%eax;");
    asm("loc_6B64214: push %ebx;");
    asm("loc_6B64215: push %ebp;");
    asm("loc_6B64216: mov 0x10(%esp),%ebp;");
    asm("loc_6B6421A: push %esi;");
    asm("loc_6B6421B: push %edi;");
    asm("loc_6B6421C: mov %ecx,%edi;");
    asm("loc_6B6421E: lea 0x10(%edi),%esi;");
    asm("loc_6B64221: push %esi;");
    asm("loc_6B64222: push %ebp;");
    asm("loc_6B64223: lea 0x18(%edi),%ebx;");
    asm("loc_6B64226: push %ebx;");
    asm("loc_6B64227: mov %ebp,4(%esi);");
    asm("loc_6B6422A: mov %eax,8(%esi);");
    asm("loc_6B6422D: movl $0,(%esi);");
    asm("loc_6B64233: movl $0,0xC(%esi);");
    asm("loc_6B6423A: call _sub_6B4E780;");
    asm("loc_6B6423F: test %eax,%eax;");
    asm("loc_6B64241: mov %eax,0x1C(%edi);");
    asm("loc_6B64244: je loc_6B64252;");
    asm("loc_6B64246: pop %edi;");
    asm("loc_6B64247: pop %esi;");
    asm("loc_6B64248: pop %ebp;");
    asm("loc_6B64249: mov $0x17,%eax;");
    asm("loc_6B6424E: pop %ebx;");
    asm("loc_6B6424F: ret $0xC;");
    asm("loc_6B64252: mov (%esi),%edx;");
    asm("loc_6B64254: mov 4(%esi),%ecx;");
    asm("loc_6B64257: add $4,%edx;");
    asm("loc_6B6425A: mov %edx,%eax;");
    asm("loc_6B6425C: cmp %ecx,%eax;");
    asm("loc_6B6425E: mov %edx,(%esi);");
    asm("loc_6B64260: mov $0x17,%ecx;");
    asm("loc_6B64265: jbe loc_6B6426A;");
    asm("loc_6B64267: mov %ecx,0xC(%esi);");
    asm("loc_6B6426A: mov 0x1C(%edi),%eax;");
    asm("loc_6B6426D: test %eax,%eax;");
    asm("loc_6B6426F: jne loc_6B643AC;");
    asm("loc_6B64275: mov (%ebx),%eax;");
    asm("loc_6B64277: mov (%eax),%edx;");
    asm("loc_6B64279: add $4,%eax;");
    asm("loc_6B6427C: mov %eax,(%ebx);");
    asm("loc_6B6427E: mov %edx,0x20(%edi);");
    asm("loc_6B64281: mov (%esi),%eax;");
    asm("loc_6B64283: mov 4(%esi),%edx;");
    asm("loc_6B64286: add $4,%eax;");
    asm("loc_6B64289: cmp %edx,%eax;");
    asm("loc_6B6428B: mov %eax,(%esi);");
    asm("loc_6B6428D: jbe loc_6B64292;");
    asm("loc_6B6428F: mov %ecx,0xC(%esi);");
    asm("loc_6B64292: mov 0x1C(%edi),%eax;");
    asm("loc_6B64295: test %eax,%eax;");
    asm("loc_6B64297: jne loc_6B643AC;");
    asm("loc_6B6429D: mov (%ebx),%eax;");
    asm("loc_6B6429F: mov (%eax),%edx;");
    asm("loc_6B642A1: add $4,%eax;");
    asm("loc_6B642A4: mov %eax,(%ebx);");
    asm("loc_6B642A6: mov %edx,0x24(%edi);");
    asm("loc_6B642A9: mov (%esi),%eax;");
    asm("loc_6B642AB: mov 4(%esi),%edx;");
    asm("loc_6B642AE: add $2,%eax;");
    asm("loc_6B642B1: cmp %edx,%eax;");
    asm("loc_6B642B3: mov %eax,(%esi);");
    asm("loc_6B642B5: jbe loc_6B642BA;");
    asm("loc_6B642B7: mov %ecx,0xC(%esi);");
    asm("loc_6B642BA: mov 0x1C(%edi),%eax;");
    asm("loc_6B642BD: test %eax,%eax;");
    asm("loc_6B642BF: jne loc_6B643AC;");
    asm("loc_6B642C5: mov (%ebx),%eax;");
    asm("loc_6B642C7: mov (%eax),%dx;");
    asm("loc_6B642CA: add $2,%eax;");
    asm("loc_6B642CD: mov %eax,(%ebx);");
    asm("loc_6B642CF: mov %dx,0x28(%edi);");
    asm("loc_6B642D3: mov (%esi),%eax;");
    asm("loc_6B642D5: mov 4(%esi),%edx;");
    asm("loc_6B642D8: add $2,%eax;");
    asm("loc_6B642DB: cmp %edx,%eax;");
    asm("loc_6B642DD: mov %eax,(%esi);");
    asm("loc_6B642DF: jbe loc_6B642E4;");
    asm("loc_6B642E1: mov %ecx,0xC(%esi);");
    asm("loc_6B642E4: mov 0x1C(%edi),%eax;");
    asm("loc_6B642E7: test %eax,%eax;");
    asm("loc_6B642E9: jne loc_6B643AC;");
    asm("loc_6B642EF: mov (%ebx),%eax;");
    asm("loc_6B642F1: mov (%eax),%dx;");
    asm("loc_6B642F4: add $2,%eax;");
    asm("loc_6B642F7: mov %eax,(%ebx);");
    asm("loc_6B642F9: mov %dx,0x2A(%edi);");
    asm("loc_6B642FD: mov (%esi),%eax;");
    asm("loc_6B642FF: mov 4(%esi),%edx;");
    asm("loc_6B64302: add $4,%eax;");
    asm("loc_6B64305: cmp %edx,%eax;");
    asm("loc_6B64307: mov %eax,(%esi);");
    asm("loc_6B64309: jbe loc_6B6430E;");
    asm("loc_6B6430B: mov %ecx,0xC(%esi);");
    asm("loc_6B6430E: mov 0x1C(%edi),%eax;");
    asm("loc_6B64311: test %eax,%eax;");
    asm("loc_6B64313: jne loc_6B643AC;");
    asm("loc_6B64319: mov (%ebx),%eax;");
    asm("loc_6B6431B: mov (%eax),%edx;");
    asm("loc_6B6431D: add $4,%eax;");
    asm("loc_6B64320: mov %eax,(%ebx);");
    asm("loc_6B64322: mov %edx,0x2C(%edi);");
    asm("loc_6B64325: mov (%esi),%eax;");
    asm("loc_6B64327: mov 4(%esi),%edx;");
    asm("loc_6B6432A: inc %eax;");
    asm("loc_6B6432B: cmp %edx,%eax;");
    asm("loc_6B6432D: mov %eax,(%esi);");
    asm("loc_6B6432F: jbe loc_6B64334;");
    asm("loc_6B64331: mov %ecx,0xC(%esi);");
    asm("loc_6B64334: mov 0x1C(%edi),%eax;");
    asm("loc_6B64337: test %eax,%eax;");
    asm("loc_6B64339: jne loc_6B643AC;");
    asm("loc_6B6433B: mov (%ebx),%eax;");
    asm("loc_6B6433D: mov (%eax),%cl;");
    asm("loc_6B6433F: push %esi;");
    asm("loc_6B64340: push %ebp;");
    asm("loc_6B64341: mov %cl,0x30(%edi);");
    asm("loc_6B64344: inc %eax;");
    asm("loc_6B64345: push %ebx;");
    asm("loc_6B64346: mov %edi,%ecx;");
    asm("loc_6B64348: mov %eax,(%ebx);");
    asm("loc_6B6434A: call _sub_6B4E7A0;");
    asm("loc_6B6434F: test %eax,%eax;");
    asm("loc_6B64351: mov %eax,0x1C(%edi);");
    asm("loc_6B64354: je loc_6B64362;");
    asm("loc_6B64356: pop %edi;");
    asm("loc_6B64357: pop %esi;");
    asm("loc_6B64358: pop %ebp;");
    asm("loc_6B64359: mov $0x17,%eax;");
    asm("loc_6B6435E: pop %ebx;");
    asm("loc_6B6435F: ret $0xC;");
    asm("loc_6B64362: mov (%esi),%edx;");
    asm("loc_6B64364: mov 0x1C(%esp),%eax;");
    asm("loc_6B64368: mov %edx,(%eax);");
    asm("loc_6B6436A: mov 0xC(%edi),%ecx;");
    asm("loc_6B6436D: push %ecx;");
    asm("loc_6B6436E: call _sub_6B4ECD0;");
    asm("loc_6B64373: mov %eax,%ecx;");
    asm("loc_6B64375: mov 4(%ecx),%edx;");
    asm("loc_6B64378: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B6437B: mov 0x14(%ecx),%eax;");
    asm("loc_6B6437E: add $4,%esp;");
    asm("loc_6B64381: inc %edx;");
    asm("loc_6B64382: mov %edx,4(%ecx);");
    asm("loc_6B64385: mov %edx,%edi;");
    asm("loc_6B64387: mov (%esi),%edx;");
    asm("loc_6B64389: add $2,%edx;");
    asm("loc_6B6438C: add %edx,%ebp;");
    asm("loc_6B6438E: mov %ebp,0x1C(%ecx);");
    asm("loc_6B64391: mov (%esi),%esi;");
    asm("loc_6B64393: add $2,%eax;");
    asm("loc_6B64396: cmp %eax,%esi;");
    asm("loc_6B64398: jbe loc_6B643A0;");
    asm("loc_6B6439A: add $2,%esi;");
    asm("loc_6B6439D: mov %esi,0x14(%ecx);");
    asm("loc_6B643A0: mov 0x1C(%ecx),%eax;");
    asm("loc_6B643A3: xor %edx,%edx;");
    asm("loc_6B643A5: div %edi;");
    asm("loc_6B643A7: mov %eax,0xC(%ecx);");
    asm("loc_6B643AA: xor %eax,%eax;");
    asm("loc_6B643AC: pop %edi;");
    asm("loc_6B643AD: pop %esi;");
    asm("loc_6B643AE: pop %ebp;");
    asm("loc_6B643AF: pop %ebx;");
    asm("loc_6B643B0: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B643C0() // _sub_6B643C0
{
    __DEBUG_ASM(6B643C0);
    // chunk 0x6B643C0 _sub_6B643C0
    asm("loc_6B643C0: mov _data_6B6E994,%eax;");
    asm("loc_6B643C5: mov %eax,_data_6B744F0;");
    asm("loc_6B643CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B643D0() // _sub_6B643D0
{
    __DEBUG_ASM(6B643D0);
    // chunk 0x6B643D0 _sub_6B643D0
    asm("loc_6B643D0: mov _data_6B6E994,%eax;");
    asm("loc_6B643D5: mov %eax,_data_6B744F4;");
    asm("loc_6B643DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B643E0() // _sub_6B643E0
{
    __DEBUG_ASM(6B643E0);
    // chunk 0x6B643E0 _sub_6B643E0
    asm("loc_6B643E0: mov _data_6B6E998,%eax;");
    asm("loc_6B643E5: mov %eax,_data_6B744EC;");
    asm("loc_6B643EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B643F0() // _sub_6B643F0
{
    __DEBUG_ASM(6B643F0);
    // chunk 0x6B643F0 _sub_6B643F0
    asm("loc_6B643F0: mov 8(%esp),%eax;");
    asm("loc_6B643F4: push %ebx;");
    asm("loc_6B643F5: push %esi;");
    asm("loc_6B643F6: push %edi;");
    asm("loc_6B643F7: mov %ecx,%edi;");
    asm("loc_6B643F9: mov 0x10(%esp),%ecx;");
    asm("loc_6B643FD: lea 0x10(%edi),%esi;");
    asm("loc_6B64400: mov %eax,4(%esi);");
    asm("loc_6B64403: mov (%ecx),%edx;");
    asm("loc_6B64405: mov %edx,8(%esi);");
    asm("loc_6B64408: movl $0,(%esi);");
    asm("loc_6B6440E: movl $0,0xC(%esi);");
    asm("loc_6B64415: mov 0x14(%edi),%eax;");
    asm("loc_6B64418: push %esi;");
    asm("loc_6B64419: push %eax;");
    asm("loc_6B6441A: lea 0x18(%edi),%ebx;");
    asm("loc_6B6441D: push %ebx;");
    asm("loc_6B6441E: mov %edi,%ecx;");
    asm("loc_6B64420: call _sub_6B4E740;");
    asm("loc_6B64425: test %eax,%eax;");
    asm("loc_6B64427: mov %eax,0x1C(%edi);");
    asm("loc_6B6442A: je loc_6B64437;");
    asm("loc_6B6442C: pop %edi;");
    asm("loc_6B6442D: pop %esi;");
    asm("loc_6B6442E: mov $0x16,%eax;");
    asm("loc_6B64433: pop %ebx;");
    asm("loc_6B64434: ret $0xC;");
    asm("loc_6B64437: mov (%esi),%edx;");
    asm("loc_6B64439: mov 4(%esi),%ecx;");
    asm("loc_6B6443C: add $4,%edx;");
    asm("loc_6B6443F: mov %edx,%eax;");
    asm("loc_6B64441: cmp %ecx,%eax;");
    asm("loc_6B64443: mov %edx,(%esi);");
    asm("loc_6B64445: jbe loc_6B6444E;");
    asm("loc_6B64447: movl $0x16,0xC(%esi);");
    asm("loc_6B6444E: mov 0x1C(%edi),%eax;");
    asm("loc_6B64451: test %eax,%eax;");
    asm("loc_6B64453: je loc_6B64460;");
    asm("loc_6B64455: pop %edi;");
    asm("loc_6B64456: pop %esi;");
    asm("loc_6B64457: mov $0x16,%eax;");
    asm("loc_6B6445C: pop %ebx;");
    asm("loc_6B6445D: ret $0xC;");
    asm("loc_6B64460: mov (%ebx),%eax;");
    asm("loc_6B64462: mov 0x20(%edi),%ecx;");
    asm("loc_6B64465: mov %ecx,(%eax);");
    asm("loc_6B64467: mov 0x14(%edi),%edx;");
    asm("loc_6B6446A: push %esi;");
    asm("loc_6B6446B: push %edx;");
    asm("loc_6B6446C: add $4,%eax;");
    asm("loc_6B6446F: push %ebx;");
    asm("loc_6B64470: mov %edi,%ecx;");
    asm("loc_6B64472: mov %eax,(%ebx);");
    asm("loc_6B64474: call _sub_6B4E790;");
    asm("loc_6B64479: test %eax,%eax;");
    asm("loc_6B6447B: mov %eax,0x1C(%edi);");
    asm("loc_6B6447E: je loc_6B6448B;");
    asm("loc_6B64480: pop %edi;");
    asm("loc_6B64481: pop %esi;");
    asm("loc_6B64482: mov $0x16,%eax;");
    asm("loc_6B64487: pop %ebx;");
    asm("loc_6B64488: ret $0xC;");
    asm("loc_6B6448B: mov (%esi),%eax;");
    asm("loc_6B6448D: mov 0x18(%esp),%ecx;");
    asm("loc_6B64491: mov %eax,(%ecx);");
    asm("loc_6B64493: mov 0xC(%edi),%edx;");
    asm("loc_6B64496: push %edx;");
    asm("loc_6B64497: call _sub_6B4ECD0;");
    asm("loc_6B6449C: mov %eax,%ecx;");
    asm("loc_6B6449E: mov (%ecx),%edi;");
    asm("loc_6B644A0: mov 0x18(%ecx),%edx;");
    asm("loc_6B644A3: add $4,%esp;");
    asm("loc_6B644A6: inc %edi;");
    asm("loc_6B644A7: mov %edi,(%ecx);");
    asm("loc_6B644A9: mov (%esi),%eax;");
    asm("loc_6B644AB: add %eax,%edx;");
    asm("loc_6B644AD: mov 0x10(%ecx),%eax;");
    asm("loc_6B644B0: mov %edx,0x18(%ecx);");
    asm("loc_6B644B3: mov (%esi),%esi;");
    asm("loc_6B644B5: cmp %eax,%esi;");
    asm("loc_6B644B7: jbe loc_6B644BC;");
    asm("loc_6B644B9: mov %esi,0x10(%ecx);");
    asm("loc_6B644BC: mov 0x18(%ecx),%eax;");
    asm("loc_6B644BF: xor %edx,%edx;");
    asm("loc_6B644C1: div %edi;");
    asm("loc_6B644C3: pop %edi;");
    asm("loc_6B644C4: pop %esi;");
    asm("loc_6B644C5: pop %ebx;");
    asm("loc_6B644C6: mov %eax,8(%ecx);");
    asm("loc_6B644C9: xor %eax,%eax;");
    asm("loc_6B644CB: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B644D0() // _sub_6B644D0
{
    __DEBUG_ASM(6B644D0);
    // chunk 0x6B644D0 _sub_6B644D0
    asm("loc_6B644D0: mov 4(%esp),%eax;");
    asm("loc_6B644D4: push %ebx;");
    asm("loc_6B644D5: push %ebp;");
    asm("loc_6B644D6: mov 0x10(%esp),%ebp;");
    asm("loc_6B644DA: push %esi;");
    asm("loc_6B644DB: push %edi;");
    asm("loc_6B644DC: mov %ecx,%edi;");
    asm("loc_6B644DE: lea 0x10(%edi),%esi;");
    asm("loc_6B644E1: push %esi;");
    asm("loc_6B644E2: push %ebp;");
    asm("loc_6B644E3: lea 0x18(%edi),%ebx;");
    asm("loc_6B644E6: push %ebx;");
    asm("loc_6B644E7: mov %ebp,4(%esi);");
    asm("loc_6B644EA: mov %eax,8(%esi);");
    asm("loc_6B644ED: movl $0,(%esi);");
    asm("loc_6B644F3: movl $0,0xC(%esi);");
    asm("loc_6B644FA: call _sub_6B4E780;");
    asm("loc_6B644FF: test %eax,%eax;");
    asm("loc_6B64501: mov %eax,0x1C(%edi);");
    asm("loc_6B64504: je loc_6B64512;");
    asm("loc_6B64506: pop %edi;");
    asm("loc_6B64507: pop %esi;");
    asm("loc_6B64508: pop %ebp;");
    asm("loc_6B64509: mov $0x17,%eax;");
    asm("loc_6B6450E: pop %ebx;");
    asm("loc_6B6450F: ret $0xC;");
    asm("loc_6B64512: mov (%esi),%edx;");
    asm("loc_6B64514: mov 4(%esi),%ecx;");
    asm("loc_6B64517: add $4,%edx;");
    asm("loc_6B6451A: mov %edx,%eax;");
    asm("loc_6B6451C: cmp %ecx,%eax;");
    asm("loc_6B6451E: mov %edx,(%esi);");
    asm("loc_6B64520: jbe loc_6B64529;");
    asm("loc_6B64522: movl $0x17,0xC(%esi);");
    asm("loc_6B64529: mov 0x1C(%edi),%eax;");
    asm("loc_6B6452C: test %eax,%eax;");
    asm("loc_6B6452E: jne loc_6B645A3;");
    asm("loc_6B64530: mov (%ebx),%eax;");
    asm("loc_6B64532: mov (%eax),%ecx;");
    asm("loc_6B64534: push %esi;");
    asm("loc_6B64535: push %ebp;");
    asm("loc_6B64536: mov %ecx,0x20(%edi);");
    asm("loc_6B64539: add $4,%eax;");
    asm("loc_6B6453C: push %ebx;");
    asm("loc_6B6453D: mov %edi,%ecx;");
    asm("loc_6B6453F: mov %eax,(%ebx);");
    asm("loc_6B64541: call _sub_6B4E7A0;");
    asm("loc_6B64546: test %eax,%eax;");
    asm("loc_6B64548: mov %eax,0x1C(%edi);");
    asm("loc_6B6454B: je loc_6B64559;");
    asm("loc_6B6454D: pop %edi;");
    asm("loc_6B6454E: pop %esi;");
    asm("loc_6B6454F: pop %ebp;");
    asm("loc_6B64550: mov $0x17,%eax;");
    asm("loc_6B64555: pop %ebx;");
    asm("loc_6B64556: ret $0xC;");
    asm("loc_6B64559: mov (%esi),%edx;");
    asm("loc_6B6455B: mov 0x1C(%esp),%eax;");
    asm("loc_6B6455F: mov %edx,(%eax);");
    asm("loc_6B64561: mov 0xC(%edi),%ecx;");
    asm("loc_6B64564: push %ecx;");
    asm("loc_6B64565: call _sub_6B4ECD0;");
    asm("loc_6B6456A: mov %eax,%ecx;");
    asm("loc_6B6456C: mov 4(%ecx),%edx;");
    asm("loc_6B6456F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B64572: mov 0x14(%ecx),%eax;");
    asm("loc_6B64575: add $4,%esp;");
    asm("loc_6B64578: inc %edx;");
    asm("loc_6B64579: mov %edx,4(%ecx);");
    asm("loc_6B6457C: mov %edx,%edi;");
    asm("loc_6B6457E: mov (%esi),%edx;");
    asm("loc_6B64580: add $2,%edx;");
    asm("loc_6B64583: add %edx,%ebp;");
    asm("loc_6B64585: mov %ebp,0x1C(%ecx);");
    asm("loc_6B64588: mov (%esi),%esi;");
    asm("loc_6B6458A: add $2,%eax;");
    asm("loc_6B6458D: cmp %eax,%esi;");
    asm("loc_6B6458F: jbe loc_6B64597;");
    asm("loc_6B64591: add $2,%esi;");
    asm("loc_6B64594: mov %esi,0x14(%ecx);");
    asm("loc_6B64597: mov 0x1C(%ecx),%eax;");
    asm("loc_6B6459A: xor %edx,%edx;");
    asm("loc_6B6459C: div %edi;");
    asm("loc_6B6459E: mov %eax,0xC(%ecx);");
    asm("loc_6B645A1: xor %eax,%eax;");
    asm("loc_6B645A3: pop %edi;");
    asm("loc_6B645A4: pop %esi;");
    asm("loc_6B645A5: pop %ebp;");
    asm("loc_6B645A6: pop %ebx;");
    asm("loc_6B645A7: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B645B0() // _sub_6B645B0
{
    __DEBUG_ASM(6B645B0);
    // chunk 0x6B645B0 _sub_6B645B0
    asm("loc_6B645B0: mov 8(%esp),%eax;");
    asm("loc_6B645B4: push %ebx;");
    asm("loc_6B645B5: push %ebp;");
    asm("loc_6B645B6: push %esi;");
    asm("loc_6B645B7: push %edi;");
    asm("loc_6B645B8: mov %ecx,%edi;");
    asm("loc_6B645BA: mov 0x14(%esp),%ecx;");
    asm("loc_6B645BE: lea 0x10(%edi),%esi;");
    asm("loc_6B645C1: mov %eax,4(%esi);");
    asm("loc_6B645C4: mov (%ecx),%edx;");
    asm("loc_6B645C6: mov %edx,8(%esi);");
    asm("loc_6B645C9: movl $0,(%esi);");
    asm("loc_6B645CF: movl $0,0xC(%esi);");
    asm("loc_6B645D6: mov 0x14(%edi),%eax;");
    asm("loc_6B645D9: push %esi;");
    asm("loc_6B645DA: push %eax;");
    asm("loc_6B645DB: lea 0x18(%edi),%ebx;");
    asm("loc_6B645DE: push %ebx;");
    asm("loc_6B645DF: mov %edi,%ecx;");
    asm("loc_6B645E1: call _sub_6B4E740;");
    asm("loc_6B645E6: test %eax,%eax;");
    asm("loc_6B645E8: mov %eax,0x1C(%edi);");
    asm("loc_6B645EB: je loc_6B645F9;");
    asm("loc_6B645ED: pop %edi;");
    asm("loc_6B645EE: pop %esi;");
    asm("loc_6B645EF: pop %ebp;");
    asm("loc_6B645F0: mov $0x16,%eax;");
    asm("loc_6B645F5: pop %ebx;");
    asm("loc_6B645F6: ret $0xC;");
    asm("loc_6B645F9: mov (%esi),%edx;");
    asm("loc_6B645FB: mov 4(%esi),%ecx;");
    asm("loc_6B645FE: add $4,%edx;");
    asm("loc_6B64601: mov %edx,%eax;");
    asm("loc_6B64603: cmp %ecx,%eax;");
    asm("loc_6B64605: mov %edx,(%esi);");
    asm("loc_6B64607: mov $0x16,%ebp;");
    asm("loc_6B6460C: jbe loc_6B64611;");
    asm("loc_6B6460E: mov %ebp,0xC(%esi);");
    asm("loc_6B64611: mov 0x1C(%edi),%eax;");
    asm("loc_6B64614: test %eax,%eax;");
    asm("loc_6B64616: je loc_6B64621;");
    asm("loc_6B64618: pop %edi;");
    asm("loc_6B64619: pop %esi;");
    asm("loc_6B6461A: mov %ebp,%eax;");
    asm("loc_6B6461C: pop %ebp;");
    asm("loc_6B6461D: pop %ebx;");
    asm("loc_6B6461E: ret $0xC;");
    asm("loc_6B64621: mov (%ebx),%eax;");
    asm("loc_6B64623: mov 0x20(%edi),%ecx;");
    asm("loc_6B64626: mov %ecx,(%eax);");
    asm("loc_6B64628: add $4,%eax;");
    asm("loc_6B6462B: mov %eax,(%ebx);");
    asm("loc_6B6462D: mov (%esi),%edx;");
    asm("loc_6B6462F: mov 4(%esi),%ecx;");
    asm("loc_6B64632: add $4,%edx;");
    asm("loc_6B64635: mov %edx,%eax;");
    asm("loc_6B64637: cmp %ecx,%eax;");
    asm("loc_6B64639: mov %edx,(%esi);");
    asm("loc_6B6463B: jbe loc_6B64640;");
    asm("loc_6B6463D: mov %ebp,0xC(%esi);");
    asm("loc_6B64640: mov 0x1C(%edi),%eax;");
    asm("loc_6B64643: test %eax,%eax;");
    asm("loc_6B64645: je loc_6B64650;");
    asm("loc_6B64647: pop %edi;");
    asm("loc_6B64648: pop %esi;");
    asm("loc_6B64649: mov %ebp,%eax;");
    asm("loc_6B6464B: pop %ebp;");
    asm("loc_6B6464C: pop %ebx;");
    asm("loc_6B6464D: ret $0xC;");
    asm("loc_6B64650: mov (%ebx),%eax;");
    asm("loc_6B64652: mov 0x24(%edi),%edx;");
    asm("loc_6B64655: mov %edx,(%eax);");
    asm("loc_6B64657: add $4,%eax;");
    asm("loc_6B6465A: mov %eax,(%ebx);");
    asm("loc_6B6465C: mov (%esi),%edx;");
    asm("loc_6B6465E: mov 4(%esi),%ecx;");
    asm("loc_6B64661: add $4,%edx;");
    asm("loc_6B64664: mov %edx,%eax;");
    asm("loc_6B64666: cmp %ecx,%eax;");
    asm("loc_6B64668: mov %edx,(%esi);");
    asm("loc_6B6466A: jbe loc_6B6466F;");
    asm("loc_6B6466C: mov %ebp,0xC(%esi);");
    asm("loc_6B6466F: mov 0x1C(%edi),%eax;");
    asm("loc_6B64672: test %eax,%eax;");
    asm("loc_6B64674: je loc_6B6467F;");
    asm("loc_6B64676: pop %edi;");
    asm("loc_6B64677: pop %esi;");
    asm("loc_6B64678: mov %ebp,%eax;");
    asm("loc_6B6467A: pop %ebp;");
    asm("loc_6B6467B: pop %ebx;");
    asm("loc_6B6467C: ret $0xC;");
    asm("loc_6B6467F: mov (%ebx),%eax;");
    asm("loc_6B64681: mov 0x28(%edi),%ecx;");
    asm("loc_6B64684: mov %ecx,(%eax);");
    asm("loc_6B64686: add $4,%eax;");
    asm("loc_6B64689: mov %eax,(%ebx);");
    asm("loc_6B6468B: mov (%esi),%edx;");
    asm("loc_6B6468D: mov 4(%esi),%ecx;");
    asm("loc_6B64690: add $4,%edx;");
    asm("loc_6B64693: mov %edx,%eax;");
    asm("loc_6B64695: cmp %ecx,%eax;");
    asm("loc_6B64697: mov %edx,(%esi);");
    asm("loc_6B64699: jbe loc_6B6469E;");
    asm("loc_6B6469B: mov %ebp,0xC(%esi);");
    asm("loc_6B6469E: mov 0x1C(%edi),%eax;");
    asm("loc_6B646A1: test %eax,%eax;");
    asm("loc_6B646A3: je loc_6B646AE;");
    asm("loc_6B646A5: pop %edi;");
    asm("loc_6B646A6: pop %esi;");
    asm("loc_6B646A7: mov %ebp,%eax;");
    asm("loc_6B646A9: pop %ebp;");
    asm("loc_6B646AA: pop %ebx;");
    asm("loc_6B646AB: ret $0xC;");
    asm("loc_6B646AE: mov (%ebx),%eax;");
    asm("loc_6B646B0: mov 0x2C(%edi),%edx;");
    asm("loc_6B646B3: mov %edx,(%eax);");
    asm("loc_6B646B5: add $4,%eax;");
    asm("loc_6B646B8: mov %eax,(%ebx);");
    asm("loc_6B646BA: mov (%esi),%edx;");
    asm("loc_6B646BC: mov 4(%esi),%ecx;");
    asm("loc_6B646BF: inc %edx;");
    asm("loc_6B646C0: mov %edx,%eax;");
    asm("loc_6B646C2: cmp %ecx,%eax;");
    asm("loc_6B646C4: mov %edx,(%esi);");
    asm("loc_6B646C6: jbe loc_6B646CB;");
    asm("loc_6B646C8: mov %ebp,0xC(%esi);");
    asm("loc_6B646CB: mov 0x1C(%edi),%eax;");
    asm("loc_6B646CE: test %eax,%eax;");
    asm("loc_6B646D0: je loc_6B646DB;");
    asm("loc_6B646D2: pop %edi;");
    asm("loc_6B646D3: pop %esi;");
    asm("loc_6B646D4: mov %ebp,%eax;");
    asm("loc_6B646D6: pop %ebp;");
    asm("loc_6B646D7: pop %ebx;");
    asm("loc_6B646D8: ret $0xC;");
    asm("loc_6B646DB: mov (%ebx),%eax;");
    asm("loc_6B646DD: mov 0x30(%edi),%cl;");
    asm("loc_6B646E0: mov %cl,(%eax);");
    asm("loc_6B646E2: inc %eax;");
    asm("loc_6B646E3: mov %eax,(%ebx);");
    asm("loc_6B646E5: mov (%esi),%edx;");
    asm("loc_6B646E7: mov 4(%esi),%ecx;");
    asm("loc_6B646EA: add $4,%edx;");
    asm("loc_6B646ED: mov %edx,%eax;");
    asm("loc_6B646EF: cmp %ecx,%eax;");
    asm("loc_6B646F1: mov %edx,(%esi);");
    asm("loc_6B646F3: jbe loc_6B646F8;");
    asm("loc_6B646F5: mov %ebp,0xC(%esi);");
    asm("loc_6B646F8: mov 0x1C(%edi),%eax;");
    asm("loc_6B646FB: test %eax,%eax;");
    asm("loc_6B646FD: je loc_6B64708;");
    asm("loc_6B646FF: pop %edi;");
    asm("loc_6B64700: pop %esi;");
    asm("loc_6B64701: mov %ebp,%eax;");
    asm("loc_6B64703: pop %ebp;");
    asm("loc_6B64704: pop %ebx;");
    asm("loc_6B64705: ret $0xC;");
    asm("loc_6B64708: mov (%ebx),%eax;");
    asm("loc_6B6470A: flds 0x34(%edi);");
    asm("loc_6B6470D: fstps (%eax);");
    asm("loc_6B6470F: mov 0x14(%edi),%edx;");
    asm("loc_6B64712: push %esi;");
    asm("loc_6B64713: push %edx;");
    asm("loc_6B64714: add $4,%eax;");
    asm("loc_6B64717: push %ebx;");
    asm("loc_6B64718: mov %edi,%ecx;");
    asm("loc_6B6471A: mov %eax,(%ebx);");
    asm("loc_6B6471C: call _sub_6B4E790;");
    asm("loc_6B64721: test %eax,%eax;");
    asm("loc_6B64723: mov %eax,0x1C(%edi);");
    asm("loc_6B64726: je loc_6B64731;");
    asm("loc_6B64728: pop %edi;");
    asm("loc_6B64729: pop %esi;");
    asm("loc_6B6472A: mov %ebp,%eax;");
    asm("loc_6B6472C: pop %ebp;");
    asm("loc_6B6472D: pop %ebx;");
    asm("loc_6B6472E: ret $0xC;");
    asm("loc_6B64731: mov (%esi),%eax;");
    asm("loc_6B64733: mov 0x1C(%esp),%ecx;");
    asm("loc_6B64737: mov %eax,(%ecx);");
    asm("loc_6B64739: mov 0xC(%edi),%edx;");
    asm("loc_6B6473C: push %edx;");
    asm("loc_6B6473D: call _sub_6B4ECD0;");
    asm("loc_6B64742: mov %eax,%ecx;");
    asm("loc_6B64744: mov (%ecx),%edi;");
    asm("loc_6B64746: mov 0x18(%ecx),%edx;");
    asm("loc_6B64749: add $4,%esp;");
    asm("loc_6B6474C: inc %edi;");
    asm("loc_6B6474D: mov %edi,(%ecx);");
    asm("loc_6B6474F: mov (%esi),%eax;");
    asm("loc_6B64751: add %eax,%edx;");
    asm("loc_6B64753: mov 0x10(%ecx),%eax;");
    asm("loc_6B64756: mov %edx,0x18(%ecx);");
    asm("loc_6B64759: mov (%esi),%esi;");
    asm("loc_6B6475B: cmp %eax,%esi;");
    asm("loc_6B6475D: jbe loc_6B64762;");
    asm("loc_6B6475F: mov %esi,0x10(%ecx);");
    asm("loc_6B64762: mov 0x18(%ecx),%eax;");
    asm("loc_6B64765: xor %edx,%edx;");
    asm("loc_6B64767: div %edi;");
    asm("loc_6B64769: pop %edi;");
    asm("loc_6B6476A: pop %esi;");
    asm("loc_6B6476B: pop %ebp;");
    asm("loc_6B6476C: pop %ebx;");
    asm("loc_6B6476D: mov %eax,8(%ecx);");
    asm("loc_6B64770: xor %eax,%eax;");
    asm("loc_6B64772: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64780() // _sub_6B64780
{
    __DEBUG_ASM(6B64780);
    // chunk 0x6B64780 _sub_6B64780
    asm("loc_6B64780: mov 4(%esp),%eax;");
    asm("loc_6B64784: push %ebx;");
    asm("loc_6B64785: push %ebp;");
    asm("loc_6B64786: mov 0x10(%esp),%ebp;");
    asm("loc_6B6478A: push %esi;");
    asm("loc_6B6478B: push %edi;");
    asm("loc_6B6478C: mov %ecx,%edi;");
    asm("loc_6B6478E: lea 0x10(%edi),%esi;");
    asm("loc_6B64791: push %esi;");
    asm("loc_6B64792: push %ebp;");
    asm("loc_6B64793: lea 0x18(%edi),%ebx;");
    asm("loc_6B64796: push %ebx;");
    asm("loc_6B64797: mov %ebp,4(%esi);");
    asm("loc_6B6479A: mov %eax,8(%esi);");
    asm("loc_6B6479D: movl $0,(%esi);");
    asm("loc_6B647A3: movl $0,0xC(%esi);");
    asm("loc_6B647AA: call _sub_6B4E780;");
    asm("loc_6B647AF: test %eax,%eax;");
    asm("loc_6B647B1: mov %eax,0x1C(%edi);");
    asm("loc_6B647B4: je loc_6B647C2;");
    asm("loc_6B647B6: pop %edi;");
    asm("loc_6B647B7: pop %esi;");
    asm("loc_6B647B8: pop %ebp;");
    asm("loc_6B647B9: mov $0x17,%eax;");
    asm("loc_6B647BE: pop %ebx;");
    asm("loc_6B647BF: ret $0xC;");
    asm("loc_6B647C2: mov (%esi),%edx;");
    asm("loc_6B647C4: mov 4(%esi),%ecx;");
    asm("loc_6B647C7: add $4,%edx;");
    asm("loc_6B647CA: mov %edx,%eax;");
    asm("loc_6B647CC: cmp %ecx,%eax;");
    asm("loc_6B647CE: mov %edx,(%esi);");
    asm("loc_6B647D0: mov $0x17,%ecx;");
    asm("loc_6B647D5: jbe loc_6B647DA;");
    asm("loc_6B647D7: mov %ecx,0xC(%esi);");
    asm("loc_6B647DA: mov 0x1C(%edi),%eax;");
    asm("loc_6B647DD: test %eax,%eax;");
    asm("loc_6B647DF: jne loc_6B64918;");
    asm("loc_6B647E5: mov (%ebx),%eax;");
    asm("loc_6B647E7: mov (%eax),%edx;");
    asm("loc_6B647E9: add $4,%eax;");
    asm("loc_6B647EC: mov %eax,(%ebx);");
    asm("loc_6B647EE: mov %edx,0x20(%edi);");
    asm("loc_6B647F1: mov (%esi),%eax;");
    asm("loc_6B647F3: mov 4(%esi),%edx;");
    asm("loc_6B647F6: add $4,%eax;");
    asm("loc_6B647F9: cmp %edx,%eax;");
    asm("loc_6B647FB: mov %eax,(%esi);");
    asm("loc_6B647FD: jbe loc_6B64802;");
    asm("loc_6B647FF: mov %ecx,0xC(%esi);");
    asm("loc_6B64802: mov 0x1C(%edi),%eax;");
    asm("loc_6B64805: test %eax,%eax;");
    asm("loc_6B64807: jne loc_6B64918;");
    asm("loc_6B6480D: mov (%ebx),%eax;");
    asm("loc_6B6480F: mov (%eax),%edx;");
    asm("loc_6B64811: add $4,%eax;");
    asm("loc_6B64814: mov %eax,(%ebx);");
    asm("loc_6B64816: mov %edx,0x24(%edi);");
    asm("loc_6B64819: mov (%esi),%eax;");
    asm("loc_6B6481B: mov 4(%esi),%edx;");
    asm("loc_6B6481E: add $4,%eax;");
    asm("loc_6B64821: cmp %edx,%eax;");
    asm("loc_6B64823: mov %eax,(%esi);");
    asm("loc_6B64825: jbe loc_6B6482A;");
    asm("loc_6B64827: mov %ecx,0xC(%esi);");
    asm("loc_6B6482A: mov 0x1C(%edi),%eax;");
    asm("loc_6B6482D: test %eax,%eax;");
    asm("loc_6B6482F: jne loc_6B64918;");
    asm("loc_6B64835: mov (%ebx),%eax;");
    asm("loc_6B64837: mov (%eax),%edx;");
    asm("loc_6B64839: add $4,%eax;");
    asm("loc_6B6483C: mov %eax,(%ebx);");
    asm("loc_6B6483E: mov %edx,0x28(%edi);");
    asm("loc_6B64841: mov (%esi),%eax;");
    asm("loc_6B64843: mov 4(%esi),%edx;");
    asm("loc_6B64846: add $4,%eax;");
    asm("loc_6B64849: cmp %edx,%eax;");
    asm("loc_6B6484B: mov %eax,(%esi);");
    asm("loc_6B6484D: jbe loc_6B64852;");
    asm("loc_6B6484F: mov %ecx,0xC(%esi);");
    asm("loc_6B64852: mov 0x1C(%edi),%eax;");
    asm("loc_6B64855: test %eax,%eax;");
    asm("loc_6B64857: jne loc_6B64918;");
    asm("loc_6B6485D: mov (%ebx),%eax;");
    asm("loc_6B6485F: mov (%eax),%edx;");
    asm("loc_6B64861: add $4,%eax;");
    asm("loc_6B64864: mov %eax,(%ebx);");
    asm("loc_6B64866: mov %edx,0x2C(%edi);");
    asm("loc_6B64869: mov (%esi),%eax;");
    asm("loc_6B6486B: mov 4(%esi),%edx;");
    asm("loc_6B6486E: inc %eax;");
    asm("loc_6B6486F: cmp %edx,%eax;");
    asm("loc_6B64871: mov %eax,(%esi);");
    asm("loc_6B64873: jbe loc_6B64878;");
    asm("loc_6B64875: mov %ecx,0xC(%esi);");
    asm("loc_6B64878: mov 0x1C(%edi),%eax;");
    asm("loc_6B6487B: test %eax,%eax;");
    asm("loc_6B6487D: jne loc_6B64918;");
    asm("loc_6B64883: mov (%ebx),%eax;");
    asm("loc_6B64885: mov (%eax),%dl;");
    asm("loc_6B64887: inc %eax;");
    asm("loc_6B64888: mov %eax,(%ebx);");
    asm("loc_6B6488A: mov %dl,0x30(%edi);");
    asm("loc_6B6488D: mov (%esi),%eax;");
    asm("loc_6B6488F: mov 4(%esi),%edx;");
    asm("loc_6B64892: add $4,%eax;");
    asm("loc_6B64895: cmp %edx,%eax;");
    asm("loc_6B64897: mov %eax,(%esi);");
    asm("loc_6B64899: jbe loc_6B6489E;");
    asm("loc_6B6489B: mov %ecx,0xC(%esi);");
    asm("loc_6B6489E: mov 0x1C(%edi),%eax;");
    asm("loc_6B648A1: test %eax,%eax;");
    asm("loc_6B648A3: jne loc_6B64918;");
    asm("loc_6B648A5: mov (%ebx),%eax;");
    asm("loc_6B648A7: mov (%eax),%ecx;");
    asm("loc_6B648A9: push %esi;");
    asm("loc_6B648AA: push %ebp;");
    asm("loc_6B648AB: mov %ecx,0x34(%edi);");
    asm("loc_6B648AE: add $4,%eax;");
    asm("loc_6B648B1: push %ebx;");
    asm("loc_6B648B2: mov %edi,%ecx;");
    asm("loc_6B648B4: mov %eax,(%ebx);");
    asm("loc_6B648B6: call _sub_6B4E7A0;");
    asm("loc_6B648BB: test %eax,%eax;");
    asm("loc_6B648BD: mov %eax,0x1C(%edi);");
    asm("loc_6B648C0: je loc_6B648CE;");
    asm("loc_6B648C2: pop %edi;");
    asm("loc_6B648C3: pop %esi;");
    asm("loc_6B648C4: pop %ebp;");
    asm("loc_6B648C5: mov $0x17,%eax;");
    asm("loc_6B648CA: pop %ebx;");
    asm("loc_6B648CB: ret $0xC;");
    asm("loc_6B648CE: mov (%esi),%edx;");
    asm("loc_6B648D0: mov 0x1C(%esp),%eax;");
    asm("loc_6B648D4: mov %edx,(%eax);");
    asm("loc_6B648D6: mov 0xC(%edi),%ecx;");
    asm("loc_6B648D9: push %ecx;");
    asm("loc_6B648DA: call _sub_6B4ECD0;");
    asm("loc_6B648DF: mov %eax,%ecx;");
    asm("loc_6B648E1: mov 4(%ecx),%edx;");
    asm("loc_6B648E4: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B648E7: mov 0x14(%ecx),%eax;");
    asm("loc_6B648EA: add $4,%esp;");
    asm("loc_6B648ED: inc %edx;");
    asm("loc_6B648EE: mov %edx,4(%ecx);");
    asm("loc_6B648F1: mov %edx,%edi;");
    asm("loc_6B648F3: mov (%esi),%edx;");
    asm("loc_6B648F5: add $2,%edx;");
    asm("loc_6B648F8: add %edx,%ebp;");
    asm("loc_6B648FA: mov %ebp,0x1C(%ecx);");
    asm("loc_6B648FD: mov (%esi),%esi;");
    asm("loc_6B648FF: add $2,%eax;");
    asm("loc_6B64902: cmp %eax,%esi;");
    asm("loc_6B64904: jbe loc_6B6490C;");
    asm("loc_6B64906: add $2,%esi;");
    asm("loc_6B64909: mov %esi,0x14(%ecx);");
    asm("loc_6B6490C: mov 0x1C(%ecx),%eax;");
    asm("loc_6B6490F: xor %edx,%edx;");
    asm("loc_6B64911: div %edi;");
    asm("loc_6B64913: mov %eax,0xC(%ecx);");
    asm("loc_6B64916: xor %eax,%eax;");
    asm("loc_6B64918: pop %edi;");
    asm("loc_6B64919: pop %esi;");
    asm("loc_6B6491A: pop %ebp;");
    asm("loc_6B6491B: pop %ebx;");
    asm("loc_6B6491C: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64920() // _sub_6B64920
{
    __DEBUG_ASM(6B64920);
    // chunk 0x6B64920 _sub_6B64920
    asm("loc_6B64920: mov 8(%esp),%eax;");
    asm("loc_6B64924: push %ebx;");
    asm("loc_6B64925: push %esi;");
    asm("loc_6B64926: mov %ecx,%esi;");
    asm("loc_6B64928: mov 0xC(%esp),%ecx;");
    asm("loc_6B6492C: push %edi;");
    asm("loc_6B6492D: lea 0x10(%esi),%edi;");
    asm("loc_6B64930: mov %eax,4(%edi);");
    asm("loc_6B64933: mov (%ecx),%edx;");
    asm("loc_6B64935: mov %edx,8(%edi);");
    asm("loc_6B64938: movl $0,(%edi);");
    asm("loc_6B6493E: movl $0,0xC(%edi);");
    asm("loc_6B64945: mov 0x14(%esi),%eax;");
    asm("loc_6B64948: push %edi;");
    asm("loc_6B64949: push %eax;");
    asm("loc_6B6494A: lea 0x18(%esi),%ebx;");
    asm("loc_6B6494D: push %ebx;");
    asm("loc_6B6494E: mov %esi,%ecx;");
    asm("loc_6B64950: call _sub_6B4E740;");
    asm("loc_6B64955: test %eax,%eax;");
    asm("loc_6B64957: mov %eax,0x1C(%esi);");
    asm("loc_6B6495A: je loc_6B64967;");
    asm("loc_6B6495C: pop %edi;");
    asm("loc_6B6495D: pop %esi;");
    asm("loc_6B6495E: mov $0x16,%eax;");
    asm("loc_6B64963: pop %ebx;");
    asm("loc_6B64964: ret $0xC;");
    asm("loc_6B64967: mov 0x14(%esi),%ecx;");
    asm("loc_6B6496A: push %edi;");
    asm("loc_6B6496B: push %ecx;");
    asm("loc_6B6496C: push %ebx;");
    asm("loc_6B6496D: mov %esi,%ecx;");
    asm("loc_6B6496F: call _sub_6B4E790;");
    asm("loc_6B64974: test %eax,%eax;");
    asm("loc_6B64976: mov %eax,0x1C(%esi);");
    asm("loc_6B64979: je loc_6B64986;");
    asm("loc_6B6497B: pop %edi;");
    asm("loc_6B6497C: pop %esi;");
    asm("loc_6B6497D: mov $0x16,%eax;");
    asm("loc_6B64982: pop %ebx;");
    asm("loc_6B64983: ret $0xC;");
    asm("loc_6B64986: mov (%edi),%edx;");
    asm("loc_6B64988: mov 0x18(%esp),%eax;");
    asm("loc_6B6498C: mov %edx,(%eax);");
    asm("loc_6B6498E: mov 0xC(%esi),%ecx;");
    asm("loc_6B64991: push %ecx;");
    asm("loc_6B64992: call _sub_6B4ECD0;");
    asm("loc_6B64997: mov %eax,%ecx;");
    asm("loc_6B64999: mov (%ecx),%eax;");
    asm("loc_6B6499B: mov 0x18(%ecx),%ebx;");
    asm("loc_6B6499E: add $4,%esp;");
    asm("loc_6B649A1: inc %eax;");
    asm("loc_6B649A2: mov %eax,(%ecx);");
    asm("loc_6B649A4: mov (%edi),%edx;");
    asm("loc_6B649A6: add %edx,%ebx;");
    asm("loc_6B649A8: mov %eax,%esi;");
    asm("loc_6B649AA: mov 0x10(%ecx),%eax;");
    asm("loc_6B649AD: mov %ebx,0x18(%ecx);");
    asm("loc_6B649B0: mov (%edi),%edi;");
    asm("loc_6B649B2: cmp %eax,%edi;");
    asm("loc_6B649B4: jbe loc_6B649B9;");
    asm("loc_6B649B6: mov %edi,0x10(%ecx);");
    asm("loc_6B649B9: mov 0x18(%ecx),%eax;");
    asm("loc_6B649BC: xor %edx,%edx;");
    asm("loc_6B649BE: div %esi;");
    asm("loc_6B649C0: pop %edi;");
    asm("loc_6B649C1: pop %esi;");
    asm("loc_6B649C2: pop %ebx;");
    asm("loc_6B649C3: mov %eax,8(%ecx);");
    asm("loc_6B649C6: xor %eax,%eax;");
    asm("loc_6B649C8: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B649D0() // _sub_6B649D0
{
    __DEBUG_ASM(6B649D0);
    // chunk 0x6B649D0 _sub_6B649D0
    asm("loc_6B649D0: mov 4(%esp),%eax;");
    asm("loc_6B649D4: push %ebx;");
    asm("loc_6B649D5: mov 0xC(%esp),%ebx;");
    asm("loc_6B649D9: push %ebp;");
    asm("loc_6B649DA: push %esi;");
    asm("loc_6B649DB: push %edi;");
    asm("loc_6B649DC: mov %ecx,%edi;");
    asm("loc_6B649DE: lea 0x10(%edi),%esi;");
    asm("loc_6B649E1: push %esi;");
    asm("loc_6B649E2: push %ebx;");
    asm("loc_6B649E3: lea 0x18(%edi),%ebp;");
    asm("loc_6B649E6: push %ebp;");
    asm("loc_6B649E7: mov %ebx,4(%esi);");
    asm("loc_6B649EA: mov %eax,8(%esi);");
    asm("loc_6B649ED: movl $0,(%esi);");
    asm("loc_6B649F3: movl $0,0xC(%esi);");
    asm("loc_6B649FA: call _sub_6B4E780;");
    asm("loc_6B649FF: test %eax,%eax;");
    asm("loc_6B64A01: mov %eax,0x1C(%edi);");
    asm("loc_6B64A04: je loc_6B64A12;");
    asm("loc_6B64A06: pop %edi;");
    asm("loc_6B64A07: pop %esi;");
    asm("loc_6B64A08: pop %ebp;");
    asm("loc_6B64A09: mov $0x17,%eax;");
    asm("loc_6B64A0E: pop %ebx;");
    asm("loc_6B64A0F: ret $0xC;");
    asm("loc_6B64A12: push %esi;");
    asm("loc_6B64A13: push %ebx;");
    asm("loc_6B64A14: push %ebp;");
    asm("loc_6B64A15: mov %edi,%ecx;");
    asm("loc_6B64A17: call _sub_6B4E7A0;");
    asm("loc_6B64A1C: test %eax,%eax;");
    asm("loc_6B64A1E: mov %eax,0x1C(%edi);");
    asm("loc_6B64A21: je loc_6B64A2F;");
    asm("loc_6B64A23: pop %edi;");
    asm("loc_6B64A24: pop %esi;");
    asm("loc_6B64A25: pop %ebp;");
    asm("loc_6B64A26: mov $0x17,%eax;");
    asm("loc_6B64A2B: pop %ebx;");
    asm("loc_6B64A2C: ret $0xC;");
    asm("loc_6B64A2F: mov (%esi),%ecx;");
    asm("loc_6B64A31: mov 0x1C(%esp),%edx;");
    asm("loc_6B64A35: mov %ecx,(%edx);");
    asm("loc_6B64A37: mov 0xC(%edi),%eax;");
    asm("loc_6B64A3A: push %eax;");
    asm("loc_6B64A3B: call _sub_6B4ECD0;");
    asm("loc_6B64A40: mov %eax,%ecx;");
    asm("loc_6B64A42: mov 4(%ecx),%edx;");
    asm("loc_6B64A45: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B64A48: mov 0x14(%ecx),%eax;");
    asm("loc_6B64A4B: add $4,%esp;");
    asm("loc_6B64A4E: inc %edx;");
    asm("loc_6B64A4F: mov %edx,4(%ecx);");
    asm("loc_6B64A52: mov %edx,%edi;");
    asm("loc_6B64A54: mov (%esi),%edx;");
    asm("loc_6B64A56: add $2,%edx;");
    asm("loc_6B64A59: add %edx,%ebp;");
    asm("loc_6B64A5B: mov %ebp,0x1C(%ecx);");
    asm("loc_6B64A5E: mov (%esi),%esi;");
    asm("loc_6B64A60: add $2,%eax;");
    asm("loc_6B64A63: cmp %eax,%esi;");
    asm("loc_6B64A65: jbe loc_6B64A6D;");
    asm("loc_6B64A67: add $2,%esi;");
    asm("loc_6B64A6A: mov %esi,0x14(%ecx);");
    asm("loc_6B64A6D: mov 0x1C(%ecx),%eax;");
    asm("loc_6B64A70: xor %edx,%edx;");
    asm("loc_6B64A72: div %edi;");
    asm("loc_6B64A74: pop %edi;");
    asm("loc_6B64A75: pop %esi;");
    asm("loc_6B64A76: pop %ebp;");
    asm("loc_6B64A77: pop %ebx;");
    asm("loc_6B64A78: mov %eax,0xC(%ecx);");
    asm("loc_6B64A7B: xor %eax,%eax;");
    asm("loc_6B64A7D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64A80() // _sub_6B64A80
{
    __DEBUG_ASM(6B64A80);
    // chunk 0x6B64A80 _sub_6B64A80
    asm("loc_6B64A80: mov 8(%esp),%eax;");
    asm("loc_6B64A84: push %ebx;");
    asm("loc_6B64A85: push %esi;");
    asm("loc_6B64A86: push %edi;");
    asm("loc_6B64A87: mov %ecx,%edi;");
    asm("loc_6B64A89: mov 0x10(%esp),%ecx;");
    asm("loc_6B64A8D: lea 0x10(%edi),%esi;");
    asm("loc_6B64A90: mov %eax,4(%esi);");
    asm("loc_6B64A93: mov (%ecx),%edx;");
    asm("loc_6B64A95: mov %edx,8(%esi);");
    asm("loc_6B64A98: movl $0,(%esi);");
    asm("loc_6B64A9E: movl $0,0xC(%esi);");
    asm("loc_6B64AA5: mov 0x14(%edi),%eax;");
    asm("loc_6B64AA8: push %esi;");
    asm("loc_6B64AA9: push %eax;");
    asm("loc_6B64AAA: lea 0x18(%edi),%ebx;");
    asm("loc_6B64AAD: push %ebx;");
    asm("loc_6B64AAE: mov %edi,%ecx;");
    asm("loc_6B64AB0: call _sub_6B4E740;");
    asm("loc_6B64AB5: test %eax,%eax;");
    asm("loc_6B64AB7: mov %eax,0x1C(%edi);");
    asm("loc_6B64ABA: je loc_6B64AC7;");
    asm("loc_6B64ABC: pop %edi;");
    asm("loc_6B64ABD: pop %esi;");
    asm("loc_6B64ABE: mov $0x16,%eax;");
    asm("loc_6B64AC3: pop %ebx;");
    asm("loc_6B64AC4: ret $0xC;");
    asm("loc_6B64AC7: mov (%esi),%edx;");
    asm("loc_6B64AC9: mov 4(%esi),%ecx;");
    asm("loc_6B64ACC: add $4,%edx;");
    asm("loc_6B64ACF: mov %edx,%eax;");
    asm("loc_6B64AD1: cmp %ecx,%eax;");
    asm("loc_6B64AD3: mov %edx,(%esi);");
    asm("loc_6B64AD5: jbe loc_6B64ADE;");
    asm("loc_6B64AD7: movl $0x16,0xC(%esi);");
    asm("loc_6B64ADE: mov 0x1C(%edi),%eax;");
    asm("loc_6B64AE1: test %eax,%eax;");
    asm("loc_6B64AE3: je loc_6B64AF0;");
    asm("loc_6B64AE5: pop %edi;");
    asm("loc_6B64AE6: pop %esi;");
    asm("loc_6B64AE7: mov $0x16,%eax;");
    asm("loc_6B64AEC: pop %ebx;");
    asm("loc_6B64AED: ret $0xC;");
    asm("loc_6B64AF0: mov (%ebx),%eax;");
    asm("loc_6B64AF2: mov 0x20(%edi),%ecx;");
    asm("loc_6B64AF5: mov %ecx,(%eax);");
    asm("loc_6B64AF7: mov 0x14(%edi),%edx;");
    asm("loc_6B64AFA: push %esi;");
    asm("loc_6B64AFB: push %edx;");
    asm("loc_6B64AFC: add $4,%eax;");
    asm("loc_6B64AFF: push %ebx;");
    asm("loc_6B64B00: mov %edi,%ecx;");
    asm("loc_6B64B02: mov %eax,(%ebx);");
    asm("loc_6B64B04: call _sub_6B4E790;");
    asm("loc_6B64B09: test %eax,%eax;");
    asm("loc_6B64B0B: mov %eax,0x1C(%edi);");
    asm("loc_6B64B0E: je loc_6B64B1B;");
    asm("loc_6B64B10: pop %edi;");
    asm("loc_6B64B11: pop %esi;");
    asm("loc_6B64B12: mov $0x16,%eax;");
    asm("loc_6B64B17: pop %ebx;");
    asm("loc_6B64B18: ret $0xC;");
    asm("loc_6B64B1B: mov (%esi),%eax;");
    asm("loc_6B64B1D: mov 0x18(%esp),%ecx;");
    asm("loc_6B64B21: mov %eax,(%ecx);");
    asm("loc_6B64B23: mov 0xC(%edi),%edx;");
    asm("loc_6B64B26: push %edx;");
    asm("loc_6B64B27: call _sub_6B4ECD0;");
    asm("loc_6B64B2C: mov %eax,%ecx;");
    asm("loc_6B64B2E: mov (%ecx),%edi;");
    asm("loc_6B64B30: mov 0x18(%ecx),%edx;");
    asm("loc_6B64B33: add $4,%esp;");
    asm("loc_6B64B36: inc %edi;");
    asm("loc_6B64B37: mov %edi,(%ecx);");
    asm("loc_6B64B39: mov (%esi),%eax;");
    asm("loc_6B64B3B: add %eax,%edx;");
    asm("loc_6B64B3D: mov 0x10(%ecx),%eax;");
    asm("loc_6B64B40: mov %edx,0x18(%ecx);");
    asm("loc_6B64B43: mov (%esi),%esi;");
    asm("loc_6B64B45: cmp %eax,%esi;");
    asm("loc_6B64B47: jbe loc_6B64B4C;");
    asm("loc_6B64B49: mov %esi,0x10(%ecx);");
    asm("loc_6B64B4C: mov 0x18(%ecx),%eax;");
    asm("loc_6B64B4F: xor %edx,%edx;");
    asm("loc_6B64B51: div %edi;");
    asm("loc_6B64B53: pop %edi;");
    asm("loc_6B64B54: pop %esi;");
    asm("loc_6B64B55: pop %ebx;");
    asm("loc_6B64B56: mov %eax,8(%ecx);");
    asm("loc_6B64B59: xor %eax,%eax;");
    asm("loc_6B64B5B: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64B60() // _sub_6B64B60
{
    __DEBUG_ASM(6B64B60);
    // chunk 0x6B64B60 _sub_6B64B60
    asm("loc_6B64B60: mov 4(%esp),%eax;");
    asm("loc_6B64B64: push %ebx;");
    asm("loc_6B64B65: push %ebp;");
    asm("loc_6B64B66: mov 0x10(%esp),%ebp;");
    asm("loc_6B64B6A: push %esi;");
    asm("loc_6B64B6B: push %edi;");
    asm("loc_6B64B6C: mov %ecx,%edi;");
    asm("loc_6B64B6E: lea 0x10(%edi),%esi;");
    asm("loc_6B64B71: push %esi;");
    asm("loc_6B64B72: push %ebp;");
    asm("loc_6B64B73: lea 0x18(%edi),%ebx;");
    asm("loc_6B64B76: push %ebx;");
    asm("loc_6B64B77: mov %ebp,4(%esi);");
    asm("loc_6B64B7A: mov %eax,8(%esi);");
    asm("loc_6B64B7D: movl $0,(%esi);");
    asm("loc_6B64B83: movl $0,0xC(%esi);");
    asm("loc_6B64B8A: call _sub_6B4E780;");
    asm("loc_6B64B8F: test %eax,%eax;");
    asm("loc_6B64B91: mov %eax,0x1C(%edi);");
    asm("loc_6B64B94: je loc_6B64BA2;");
    asm("loc_6B64B96: pop %edi;");
    asm("loc_6B64B97: pop %esi;");
    asm("loc_6B64B98: pop %ebp;");
    asm("loc_6B64B99: mov $0x17,%eax;");
    asm("loc_6B64B9E: pop %ebx;");
    asm("loc_6B64B9F: ret $0xC;");
    asm("loc_6B64BA2: mov (%esi),%edx;");
    asm("loc_6B64BA4: mov 4(%esi),%ecx;");
    asm("loc_6B64BA7: add $4,%edx;");
    asm("loc_6B64BAA: mov %edx,%eax;");
    asm("loc_6B64BAC: cmp %ecx,%eax;");
    asm("loc_6B64BAE: mov %edx,(%esi);");
    asm("loc_6B64BB0: jbe loc_6B64BB9;");
    asm("loc_6B64BB2: movl $0x17,0xC(%esi);");
    asm("loc_6B64BB9: mov 0x1C(%edi),%eax;");
    asm("loc_6B64BBC: test %eax,%eax;");
    asm("loc_6B64BBE: jne loc_6B64C33;");
    asm("loc_6B64BC0: mov (%ebx),%eax;");
    asm("loc_6B64BC2: mov (%eax),%ecx;");
    asm("loc_6B64BC4: push %esi;");
    asm("loc_6B64BC5: push %ebp;");
    asm("loc_6B64BC6: mov %ecx,0x20(%edi);");
    asm("loc_6B64BC9: add $4,%eax;");
    asm("loc_6B64BCC: push %ebx;");
    asm("loc_6B64BCD: mov %edi,%ecx;");
    asm("loc_6B64BCF: mov %eax,(%ebx);");
    asm("loc_6B64BD1: call _sub_6B4E7A0;");
    asm("loc_6B64BD6: test %eax,%eax;");
    asm("loc_6B64BD8: mov %eax,0x1C(%edi);");
    asm("loc_6B64BDB: je loc_6B64BE9;");
    asm("loc_6B64BDD: pop %edi;");
    asm("loc_6B64BDE: pop %esi;");
    asm("loc_6B64BDF: pop %ebp;");
    asm("loc_6B64BE0: mov $0x17,%eax;");
    asm("loc_6B64BE5: pop %ebx;");
    asm("loc_6B64BE6: ret $0xC;");
    asm("loc_6B64BE9: mov (%esi),%edx;");
    asm("loc_6B64BEB: mov 0x1C(%esp),%eax;");
    asm("loc_6B64BEF: mov %edx,(%eax);");
    asm("loc_6B64BF1: mov 0xC(%edi),%ecx;");
    asm("loc_6B64BF4: push %ecx;");
    asm("loc_6B64BF5: call _sub_6B4ECD0;");
    asm("loc_6B64BFA: mov %eax,%ecx;");
    asm("loc_6B64BFC: mov 4(%ecx),%edx;");
    asm("loc_6B64BFF: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B64C02: mov 0x14(%ecx),%eax;");
    asm("loc_6B64C05: add $4,%esp;");
    asm("loc_6B64C08: inc %edx;");
    asm("loc_6B64C09: mov %edx,4(%ecx);");
    asm("loc_6B64C0C: mov %edx,%edi;");
    asm("loc_6B64C0E: mov (%esi),%edx;");
    asm("loc_6B64C10: add $2,%edx;");
    asm("loc_6B64C13: add %edx,%ebp;");
    asm("loc_6B64C15: mov %ebp,0x1C(%ecx);");
    asm("loc_6B64C18: mov (%esi),%esi;");
    asm("loc_6B64C1A: add $2,%eax;");
    asm("loc_6B64C1D: cmp %eax,%esi;");
    asm("loc_6B64C1F: jbe loc_6B64C27;");
    asm("loc_6B64C21: add $2,%esi;");
    asm("loc_6B64C24: mov %esi,0x14(%ecx);");
    asm("loc_6B64C27: mov 0x1C(%ecx),%eax;");
    asm("loc_6B64C2A: xor %edx,%edx;");
    asm("loc_6B64C2C: div %edi;");
    asm("loc_6B64C2E: mov %eax,0xC(%ecx);");
    asm("loc_6B64C31: xor %eax,%eax;");
    asm("loc_6B64C33: pop %edi;");
    asm("loc_6B64C34: pop %esi;");
    asm("loc_6B64C35: pop %ebp;");
    asm("loc_6B64C36: pop %ebx;");
    asm("loc_6B64C37: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64C40() // _sub_6B64C40
{
    __DEBUG_ASM(6B64C40);
    // chunk 0x6B64C40 _sub_6B64C40
    asm("loc_6B64C40: mov _data_6B6E9A4,%eax;");
    asm("loc_6B64C45: mov %eax,_data_6B74500;");
    asm("loc_6B64C4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64C50() // _sub_6B64C50
{
    __DEBUG_ASM(6B64C50);
    // chunk 0x6B64C50 _sub_6B64C50
    asm("loc_6B64C50: mov _data_6B6E9A4,%eax;");
    asm("loc_6B64C55: mov %eax,_data_6B74504;");
    asm("loc_6B64C5A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64C60() // _sub_6B64C60
{
    __DEBUG_ASM(6B64C60);
    // chunk 0x6B64C60 _sub_6B64C60
    asm("loc_6B64C60: mov _data_6B6E9A8,%eax;");
    asm("loc_6B64C65: mov %eax,_data_6B744FC;");
    asm("loc_6B64C6A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64C70() // _sub_6B64C70
{
    __DEBUG_ASM(6B64C70);
    // chunk 0x6B64C70 _sub_6B64C70
    asm("loc_6B64C70: mov 8(%esp),%eax;");
    asm("loc_6B64C74: sub $0x10,%esp;");
    asm("loc_6B64C77: push %ebx;");
    asm("loc_6B64C78: push %ebp;");
    asm("loc_6B64C79: push %esi;");
    asm("loc_6B64C7A: push %edi;");
    asm("loc_6B64C7B: mov %ecx,%edi;");
    asm("loc_6B64C7D: mov 0x24(%esp),%ecx;");
    asm("loc_6B64C81: lea 0x10(%edi),%esi;");
    asm("loc_6B64C84: mov %eax,4(%esi);");
    asm("loc_6B64C87: mov (%ecx),%edx;");
    asm("loc_6B64C89: mov %edx,8(%esi);");
    asm("loc_6B64C8C: movl $0,(%esi);");
    asm("loc_6B64C92: movl $0,0xC(%esi);");
    asm("loc_6B64C99: mov 0x14(%edi),%eax;");
    asm("loc_6B64C9C: push %esi;");
    asm("loc_6B64C9D: push %eax;");
    asm("loc_6B64C9E: lea 0x18(%edi),%ebp;");
    asm("loc_6B64CA1: push %ebp;");
    asm("loc_6B64CA2: mov %edi,%ecx;");
    asm("loc_6B64CA4: call _sub_6B4E740;");
    asm("loc_6B64CA9: mov %eax,0x1C(%edi);");
    asm("loc_6B64CAC: test %eax,%eax;");
    asm("loc_6B64CAE: mov $0x16,%eax;");
    asm("loc_6B64CB3: jne loc_6B64F17;");
    asm("loc_6B64CB9: mov (%esi),%ebx;");
    asm("loc_6B64CBB: mov 4(%esi),%edx;");
    asm("loc_6B64CBE: inc %ebx;");
    asm("loc_6B64CBF: mov %ebx,%ecx;");
    asm("loc_6B64CC1: cmp %edx,%ecx;");
    asm("loc_6B64CC3: mov %ebx,(%esi);");
    asm("loc_6B64CC5: jbe loc_6B64CCA;");
    asm("loc_6B64CC7: mov %eax,0xC(%esi);");
    asm("loc_6B64CCA: mov 0x1C(%edi),%ecx;");
    asm("loc_6B64CCD: test %ecx,%ecx;");
    asm("loc_6B64CCF: jne loc_6B64F17;");
    asm("loc_6B64CD5: mov (%ebp),%ecx;");
    asm("loc_6B64CD8: mov 0x20(%edi),%dl;");
    asm("loc_6B64CDB: mov %dl,(%ecx);");
    asm("loc_6B64CDD: inc %ecx;");
    asm("loc_6B64CDE: mov %ecx,(%ebp);");
    asm("loc_6B64CE1: mov (%esi),%ebx;");
    asm("loc_6B64CE3: mov 4(%esi),%edx;");
    asm("loc_6B64CE6: add $4,%ebx;");
    asm("loc_6B64CE9: mov %ebx,%ecx;");
    asm("loc_6B64CEB: cmp %edx,%ecx;");
    asm("loc_6B64CED: mov %ebx,(%esi);");
    asm("loc_6B64CEF: jbe loc_6B64CF4;");
    asm("loc_6B64CF1: mov %eax,0xC(%esi);");
    asm("loc_6B64CF4: mov 0x1C(%edi),%ecx;");
    asm("loc_6B64CF7: test %ecx,%ecx;");
    asm("loc_6B64CF9: jne loc_6B64F17;");
    asm("loc_6B64CFF: mov (%ebp),%ecx;");
    asm("loc_6B64D02: mov 0x24(%edi),%edx;");
    asm("loc_6B64D05: mov %edx,(%ecx);");
    asm("loc_6B64D07: add $4,%ecx;");
    asm("loc_6B64D0A: mov %ecx,(%ebp);");
    asm("loc_6B64D0D: mov (%esi),%ebx;");
    asm("loc_6B64D0F: mov 4(%esi),%edx;");
    asm("loc_6B64D12: add $0xC,%ebx;");
    asm("loc_6B64D15: mov %ebx,%ecx;");
    asm("loc_6B64D17: cmp %edx,%ecx;");
    asm("loc_6B64D19: mov %ebx,(%esi);");
    asm("loc_6B64D1B: jbe loc_6B64D20;");
    asm("loc_6B64D1D: mov %eax,0xC(%esi);");
    asm("loc_6B64D20: mov 0x1C(%edi),%ecx;");
    asm("loc_6B64D23: test %ecx,%ecx;");
    asm("loc_6B64D25: jne loc_6B64F17;");
    asm("loc_6B64D2B: mov 0x28(%edi),%eax;");
    asm("loc_6B64D2E: mov 0x2C(%edi),%ecx;");
    asm("loc_6B64D31: mov (%ebp),%ebx;");
    asm("loc_6B64D34: mov 0x30(%edi),%edx;");
    asm("loc_6B64D37: mov %eax,0x14(%esp);");
    asm("loc_6B64D3B: lea 0x14(%esp),%eax;");
    asm("loc_6B64D3F: mov %ecx,0x18(%esp);");
    asm("loc_6B64D43: push %eax;");
    asm("loc_6B64D44: mov %ebx,%ecx;");
    asm("loc_6B64D46: mov %edx,0x20(%esp);");
    asm("loc_6B64D4A: call _sub_6B3A160;");
    asm("loc_6B64D4F: flds 0x38(%edi);");
    asm("loc_6B64D52: fmull _data_6B6C1E0;");
    asm("loc_6B64D58: add $0xC,%ebx;");
    asm("loc_6B64D5B: mov %ebx,(%ebp);");
    asm("loc_6B64D5E: call _sub_6B6A3F8;");
    asm("loc_6B64D63: flds 0x3C(%edi);");
    asm("loc_6B64D66: fmull _data_6B6C1E0;");
    asm("loc_6B64D6C: mov %al,0x28(%esp);");
    asm("loc_6B64D70: call _sub_6B6A3F8;");
    asm("loc_6B64D75: flds 0x40(%edi);");
    asm("loc_6B64D78: fmull _data_6B6C1E0;");
    asm("loc_6B64D7E: mov %al,0x24(%esp);");
    asm("loc_6B64D82: call _sub_6B6A3F8;");
    asm("loc_6B64D87: flds 0x34(%edi);");
    asm("loc_6B64D8A: fmull _data_6B6C1E0;");
    asm("loc_6B64D90: mov %al,0x13(%esp);");
    asm("loc_6B64D94: call _sub_6B6A3F8;");
    asm("loc_6B64D99: mov (%esi),%ecx;");
    asm("loc_6B64D9B: mov %al,%dl;");
    asm("loc_6B64D9D: mov 4(%esi),%eax;");
    asm("loc_6B64DA0: inc %ecx;");
    asm("loc_6B64DA1: cmp %eax,%ecx;");
    asm("loc_6B64DA3: mov %ecx,(%esi);");
    asm("loc_6B64DA5: mov $0x16,%eax;");
    asm("loc_6B64DAA: jbe loc_6B64DAF;");
    asm("loc_6B64DAC: mov %eax,0xC(%esi);");
    asm("loc_6B64DAF: mov 0x1C(%edi),%ecx;");
    asm("loc_6B64DB2: test %ecx,%ecx;");
    asm("loc_6B64DB4: jne loc_6B64F17;");
    asm("loc_6B64DBA: mov (%ebp),%ecx;");
    asm("loc_6B64DBD: mov 0x28(%esp),%bl;");
    asm("loc_6B64DC1: mov %bl,(%ecx);");
    asm("loc_6B64DC3: inc %ecx;");
    asm("loc_6B64DC4: mov %ecx,(%ebp);");
    asm("loc_6B64DC7: mov (%esi),%ecx;");
    asm("loc_6B64DC9: mov 4(%esi),%ebx;");
    asm("loc_6B64DCC: inc %ecx;");
    asm("loc_6B64DCD: cmp %ebx,%ecx;");
    asm("loc_6B64DCF: mov %ecx,(%esi);");
    asm("loc_6B64DD1: jbe loc_6B64DD6;");
    asm("loc_6B64DD3: mov %eax,0xC(%esi);");
    asm("loc_6B64DD6: mov 0x1C(%edi),%ecx;");
    asm("loc_6B64DD9: test %ecx,%ecx;");
    asm("loc_6B64DDB: jne loc_6B64F17;");
    asm("loc_6B64DE1: mov (%ebp),%ecx;");
    asm("loc_6B64DE4: mov 0x24(%esp),%bl;");
    asm("loc_6B64DE8: mov %bl,(%ecx);");
    asm("loc_6B64DEA: inc %ecx;");
    asm("loc_6B64DEB: mov %ecx,(%ebp);");
    asm("loc_6B64DEE: mov (%esi),%ecx;");
    asm("loc_6B64DF0: mov 4(%esi),%ebx;");
    asm("loc_6B64DF3: inc %ecx;");
    asm("loc_6B64DF4: cmp %ebx,%ecx;");
    asm("loc_6B64DF6: mov %ecx,(%esi);");
    asm("loc_6B64DF8: jbe loc_6B64DFD;");
    asm("loc_6B64DFA: mov %eax,0xC(%esi);");
    asm("loc_6B64DFD: mov 0x1C(%edi),%ecx;");
    asm("loc_6B64E00: test %ecx,%ecx;");
    asm("loc_6B64E02: jne loc_6B64F17;");
    asm("loc_6B64E08: mov (%ebp),%ecx;");
    asm("loc_6B64E0B: mov 0x13(%esp),%bl;");
    asm("loc_6B64E0F: mov %bl,(%ecx);");
    asm("loc_6B64E11: inc %ecx;");
    asm("loc_6B64E12: mov %ecx,(%ebp);");
    asm("loc_6B64E15: mov (%esi),%ecx;");
    asm("loc_6B64E17: mov 4(%esi),%ebx;");
    asm("loc_6B64E1A: inc %ecx;");
    asm("loc_6B64E1B: cmp %ebx,%ecx;");
    asm("loc_6B64E1D: mov %ecx,(%esi);");
    asm("loc_6B64E1F: jbe loc_6B64E24;");
    asm("loc_6B64E21: mov %eax,0xC(%esi);");
    asm("loc_6B64E24: mov 0x1C(%edi),%ecx;");
    asm("loc_6B64E27: test %ecx,%ecx;");
    asm("loc_6B64E29: jne loc_6B64F17;");
    asm("loc_6B64E2F: mov (%ebp),%ecx;");
    asm("loc_6B64E32: mov %dl,(%ecx);");
    asm("loc_6B64E34: flds 0x48(%edi);");
    asm("loc_6B64E37: fmull _data_6B6C1E0;");
    asm("loc_6B64E3D: inc %ecx;");
    asm("loc_6B64E3E: mov %ecx,(%ebp);");
    asm("loc_6B64E41: call _sub_6B6A3F8;");
    asm("loc_6B64E46: mov (%esi),%ebx;");
    asm("loc_6B64E48: mov 4(%esi),%edx;");
    asm("loc_6B64E4B: inc %ebx;");
    asm("loc_6B64E4C: mov %ebx,%ecx;");
    asm("loc_6B64E4E: cmp %edx,%ecx;");
    asm("loc_6B64E50: mov %ebx,(%esi);");
    asm("loc_6B64E52: jbe loc_6B64E5B;");
    asm("loc_6B64E54: movl $0x16,0xC(%esi);");
    asm("loc_6B64E5B: mov 0x1C(%edi),%ecx;");
    asm("loc_6B64E5E: test %ecx,%ecx;");
    asm("loc_6B64E60: je loc_6B64E71;");
    asm("loc_6B64E62: pop %edi;");
    asm("loc_6B64E63: pop %esi;");
    asm("loc_6B64E64: pop %ebp;");
    asm("loc_6B64E65: mov $0x16,%eax;");
    asm("loc_6B64E6A: pop %ebx;");
    asm("loc_6B64E6B: add $0x10,%esp;");
    asm("loc_6B64E6E: ret $0xC;");
    asm("loc_6B64E71: mov (%ebp),%ecx;");
    asm("loc_6B64E74: mov %al,(%ecx);");
    asm("loc_6B64E76: inc %ecx;");
    asm("loc_6B64E77: mov %ecx,(%ebp);");
    asm("loc_6B64E7A: mov (%esi),%edx;");
    asm("loc_6B64E7C: mov 4(%esi),%ecx;");
    asm("loc_6B64E7F: add $4,%edx;");
    asm("loc_6B64E82: mov %edx,%eax;");
    asm("loc_6B64E84: cmp %ecx,%eax;");
    asm("loc_6B64E86: mov %edx,(%esi);");
    asm("loc_6B64E88: jbe loc_6B64E91;");
    asm("loc_6B64E8A: movl $0x16,0xC(%esi);");
    asm("loc_6B64E91: mov 0x1C(%edi),%eax;");
    asm("loc_6B64E94: test %eax,%eax;");
    asm("loc_6B64E96: je loc_6B64EA7;");
    asm("loc_6B64E98: pop %edi;");
    asm("loc_6B64E99: pop %esi;");
    asm("loc_6B64E9A: pop %ebp;");
    asm("loc_6B64E9B: mov $0x16,%eax;");
    asm("loc_6B64EA0: pop %ebx;");
    asm("loc_6B64EA1: add $0x10,%esp;");
    asm("loc_6B64EA4: ret $0xC;");
    asm("loc_6B64EA7: mov (%ebp),%eax;");
    asm("loc_6B64EAA: flds 0x44(%edi);");
    asm("loc_6B64EAD: fstps (%eax);");
    asm("loc_6B64EAF: mov 0x14(%edi),%ecx;");
    asm("loc_6B64EB2: push %esi;");
    asm("loc_6B64EB3: push %ecx;");
    asm("loc_6B64EB4: add $4,%eax;");
    asm("loc_6B64EB7: push %ebp;");
    asm("loc_6B64EB8: mov %edi,%ecx;");
    asm("loc_6B64EBA: mov %eax,(%ebp);");
    asm("loc_6B64EBD: call _sub_6B4E790;");
    asm("loc_6B64EC2: test %eax,%eax;");
    asm("loc_6B64EC4: mov %eax,0x1C(%edi);");
    asm("loc_6B64EC7: je loc_6B64ED8;");
    asm("loc_6B64EC9: pop %edi;");
    asm("loc_6B64ECA: pop %esi;");
    asm("loc_6B64ECB: pop %ebp;");
    asm("loc_6B64ECC: mov $0x16,%eax;");
    asm("loc_6B64ED1: pop %ebx;");
    asm("loc_6B64ED2: add $0x10,%esp;");
    asm("loc_6B64ED5: ret $0xC;");
    asm("loc_6B64ED8: mov (%esi),%edx;");
    asm("loc_6B64EDA: mov 0x2C(%esp),%eax;");
    asm("loc_6B64EDE: mov %edx,(%eax);");
    asm("loc_6B64EE0: mov 0xC(%edi),%ecx;");
    asm("loc_6B64EE3: push %ecx;");
    asm("loc_6B64EE4: call _sub_6B4ECD0;");
    asm("loc_6B64EE9: mov %eax,%ecx;");
    asm("loc_6B64EEB: mov (%ecx),%ebp;");
    asm("loc_6B64EED: mov 0x18(%ecx),%ebx;");
    asm("loc_6B64EF0: mov 0x10(%ecx),%eax;");
    asm("loc_6B64EF3: add $4,%esp;");
    asm("loc_6B64EF6: inc %ebp;");
    asm("loc_6B64EF7: mov %ebp,(%ecx);");
    asm("loc_6B64EF9: mov (%esi),%edx;");
    asm("loc_6B64EFB: add %edx,%ebx;");
    asm("loc_6B64EFD: mov %ebx,0x18(%ecx);");
    asm("loc_6B64F00: mov (%esi),%esi;");
    asm("loc_6B64F02: cmp %eax,%esi;");
    asm("loc_6B64F04: mov %ebp,%edi;");
    asm("loc_6B64F06: jbe loc_6B64F0B;");
    asm("loc_6B64F08: mov %esi,0x10(%ecx);");
    asm("loc_6B64F0B: mov 0x18(%ecx),%eax;");
    asm("loc_6B64F0E: xor %edx,%edx;");
    asm("loc_6B64F10: div %edi;");
    asm("loc_6B64F12: mov %eax,8(%ecx);");
    asm("loc_6B64F15: xor %eax,%eax;");
    asm("loc_6B64F17: pop %edi;");
    asm("loc_6B64F18: pop %esi;");
    asm("loc_6B64F19: pop %ebp;");
    asm("loc_6B64F1A: pop %ebx;");
    asm("loc_6B64F1B: add $0x10,%esp;");
    asm("loc_6B64F1E: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B64F30() // _sub_6B64F30
{
    __DEBUG_ASM(6B64F30);
    // chunk 0x6B64F30 _sub_6B64F30
    asm("loc_6B64F30: push %ecx;");
    asm("loc_6B64F31: mov 0xC(%esp),%eax;");
    asm("loc_6B64F35: push %ebx;");
    asm("loc_6B64F36: push %ebp;");
    asm("loc_6B64F37: push %esi;");
    asm("loc_6B64F38: push %edi;");
    asm("loc_6B64F39: mov %ecx,%edi;");
    asm("loc_6B64F3B: mov 0x18(%esp),%ecx;");
    asm("loc_6B64F3F: lea 0x10(%edi),%esi;");
    asm("loc_6B64F42: push %esi;");
    asm("loc_6B64F43: push %eax;");
    asm("loc_6B64F44: mov %ecx,8(%esi);");
    asm("loc_6B64F47: lea 0x18(%edi),%ebx;");
    asm("loc_6B64F4A: push %ebx;");
    asm("loc_6B64F4B: mov %edi,%ecx;");
    asm("loc_6B64F4D: mov %eax,4(%esi);");
    asm("loc_6B64F50: movl $0,(%esi);");
    asm("loc_6B64F56: movl $0,0xC(%esi);");
    asm("loc_6B64F5D: call _sub_6B4E780;");
    asm("loc_6B64F62: test %eax,%eax;");
    asm("loc_6B64F64: mov %eax,0x1C(%edi);");
    asm("loc_6B64F67: je loc_6B64F76;");
    asm("loc_6B64F69: pop %edi;");
    asm("loc_6B64F6A: pop %esi;");
    asm("loc_6B64F6B: pop %ebp;");
    asm("loc_6B64F6C: mov $0x17,%eax;");
    asm("loc_6B64F71: pop %ebx;");
    asm("loc_6B64F72: pop %ecx;");
    asm("loc_6B64F73: ret $0xC;");
    asm("loc_6B64F76: mov (%esi),%edx;");
    asm("loc_6B64F78: mov 4(%esi),%ecx;");
    asm("loc_6B64F7B: inc %edx;");
    asm("loc_6B64F7C: mov %edx,%eax;");
    asm("loc_6B64F7E: cmp %ecx,%eax;");
    asm("loc_6B64F80: mov %edx,(%esi);");
    asm("loc_6B64F82: mov $0x17,%ebp;");
    asm("loc_6B64F87: jbe loc_6B64F8C;");
    asm("loc_6B64F89: mov %ebp,0xC(%esi);");
    asm("loc_6B64F8C: mov 0x1C(%edi),%eax;");
    asm("loc_6B64F8F: test %eax,%eax;");
    asm("loc_6B64F91: jne loc_6B651AA;");
    asm("loc_6B64F97: mov (%ebx),%eax;");
    asm("loc_6B64F99: mov (%eax),%dl;");
    asm("loc_6B64F9B: inc %eax;");
    asm("loc_6B64F9C: mov %dl,0x20(%edi);");
    asm("loc_6B64F9F: mov %eax,(%ebx);");
    asm("loc_6B64FA1: mov (%esi),%edx;");
    asm("loc_6B64FA3: mov 4(%esi),%ecx;");
    asm("loc_6B64FA6: add $4,%edx;");
    asm("loc_6B64FA9: mov %edx,%eax;");
    asm("loc_6B64FAB: cmp %ecx,%eax;");
    asm("loc_6B64FAD: mov %edx,(%esi);");
    asm("loc_6B64FAF: jbe loc_6B64FB4;");
    asm("loc_6B64FB1: mov %ebp,0xC(%esi);");
    asm("loc_6B64FB4: mov 0x1C(%edi),%eax;");
    asm("loc_6B64FB7: test %eax,%eax;");
    asm("loc_6B64FB9: jne loc_6B651AA;");
    asm("loc_6B64FBF: mov (%ebx),%eax;");
    asm("loc_6B64FC1: mov (%eax),%ecx;");
    asm("loc_6B64FC3: add $4,%eax;");
    asm("loc_6B64FC6: mov %eax,(%ebx);");
    asm("loc_6B64FC8: mov %ecx,0x24(%edi);");
    asm("loc_6B64FCB: mov (%esi),%edx;");
    asm("loc_6B64FCD: mov 4(%esi),%ecx;");
    asm("loc_6B64FD0: add $0xC,%edx;");
    asm("loc_6B64FD3: mov %edx,%eax;");
    asm("loc_6B64FD5: cmp %ecx,%eax;");
    asm("loc_6B64FD7: mov %edx,(%esi);");
    asm("loc_6B64FD9: jbe loc_6B64FDE;");
    asm("loc_6B64FDB: mov %ebp,0xC(%esi);");
    asm("loc_6B64FDE: mov 0x1C(%edi),%eax;");
    asm("loc_6B64FE1: test %eax,%eax;");
    asm("loc_6B64FE3: jne loc_6B651AA;");
    asm("loc_6B64FE9: mov (%ebx),%ebp;");
    asm("loc_6B64FEB: push %ebp;");
    asm("loc_6B64FEC: lea 0x28(%edi),%ecx;");
    asm("loc_6B64FEF: call _sub_6B3A160;");
    asm("loc_6B64FF4: add $0xC,%ebp;");
    asm("loc_6B64FF7: mov %ebp,(%ebx);");
    asm("loc_6B64FF9: mov (%esi),%edx;");
    asm("loc_6B64FFB: mov 4(%esi),%ecx;");
    asm("loc_6B64FFE: inc %edx;");
    asm("loc_6B64FFF: mov %edx,%eax;");
    asm("loc_6B65001: cmp %ecx,%eax;");
    asm("loc_6B65003: mov %edx,(%esi);");
    asm("loc_6B65005: mov $0x17,%ebp;");
    asm("loc_6B6500A: jbe loc_6B6500F;");
    asm("loc_6B6500C: mov %ebp,0xC(%esi);");
    asm("loc_6B6500F: mov 0x1C(%edi),%eax;");
    asm("loc_6B65012: test %eax,%eax;");
    asm("loc_6B65014: jne loc_6B651AA;");
    asm("loc_6B6501A: mov (%ebx),%eax;");
    asm("loc_6B6501C: mov (%eax),%dl;");
    asm("loc_6B6501E: inc %eax;");
    asm("loc_6B6501F: mov %eax,(%ebx);");
    asm("loc_6B65021: mov 4(%esi),%ecx;");
    asm("loc_6B65024: mov %dl,0x18(%esp);");
    asm("loc_6B65028: mov (%esi),%edx;");
    asm("loc_6B6502A: inc %edx;");
    asm("loc_6B6502B: mov %edx,%eax;");
    asm("loc_6B6502D: cmp %ecx,%eax;");
    asm("loc_6B6502F: mov %edx,(%esi);");
    asm("loc_6B65031: jbe loc_6B65036;");
    asm("loc_6B65033: mov %ebp,0xC(%esi);");
    asm("loc_6B65036: mov 0x1C(%edi),%eax;");
    asm("loc_6B65039: test %eax,%eax;");
    asm("loc_6B6503B: jne loc_6B651AA;");
    asm("loc_6B65041: mov (%ebx),%eax;");
    asm("loc_6B65043: mov (%eax),%cl;");
    asm("loc_6B65045: inc %eax;");
    asm("loc_6B65046: mov %eax,(%ebx);");
    asm("loc_6B65048: mov (%esi),%edx;");
    asm("loc_6B6504A: inc %edx;");
    asm("loc_6B6504B: mov %cl,0x13(%esp);");
    asm("loc_6B6504F: mov 4(%esi),%ecx;");
    asm("loc_6B65052: mov %edx,%eax;");
    asm("loc_6B65054: cmp %ecx,%eax;");
    asm("loc_6B65056: mov %edx,(%esi);");
    asm("loc_6B65058: jbe loc_6B6505D;");
    asm("loc_6B6505A: mov %ebp,0xC(%esi);");
    asm("loc_6B6505D: mov 0x1C(%edi),%eax;");
    asm("loc_6B65060: test %eax,%eax;");
    asm("loc_6B65062: jne loc_6B651AA;");
    asm("loc_6B65068: mov (%ebx),%eax;");
    asm("loc_6B6506A: mov (%eax),%dl;");
    asm("loc_6B6506C: inc %eax;");
    asm("loc_6B6506D: mov %eax,(%ebx);");
    asm("loc_6B6506F: mov (%esi),%eax;");
    asm("loc_6B65071: mov 4(%esi),%ecx;");
    asm("loc_6B65074: inc %eax;");
    asm("loc_6B65075: cmp %ecx,%eax;");
    asm("loc_6B65077: mov %eax,(%esi);");
    asm("loc_6B65079: jbe loc_6B6507E;");
    asm("loc_6B6507B: mov %ebp,0xC(%esi);");
    asm("loc_6B6507E: mov 0x1C(%edi),%eax;");
    asm("loc_6B65081: test %eax,%eax;");
    asm("loc_6B65083: jne loc_6B651AA;");
    asm("loc_6B65089: mov (%ebx),%eax;");
    asm("loc_6B6508B: mov (%eax),%cl;");
    asm("loc_6B6508D: inc %eax;");
    asm("loc_6B6508E: mov %eax,(%ebx);");
    asm("loc_6B65090: movsbl 0x18(%esp),%eax;");
    asm("loc_6B65095: mov %eax,0x18(%esp);");
    asm("loc_6B65099: movsbl 0x13(%esp),%eax;");
    asm("loc_6B6509E: fildl 0x18(%esp);");
    asm("loc_6B650A2: mov %eax,0x18(%esp);");
    asm("loc_6B650A6: fmull _data_6B6C1E8;");
    asm("loc_6B650AC: movsbl %dl,%edx;");
    asm("loc_6B650AF: movsbl %cl,%eax;");
    asm("loc_6B650B2: fstps 0x38(%edi);");
    asm("loc_6B650B5: fildl 0x18(%esp);");
    asm("loc_6B650B9: mov %edx,0x18(%esp);");
    asm("loc_6B650BD: fmull _data_6B6C1E8;");
    asm("loc_6B650C3: fstps 0x3C(%edi);");
    asm("loc_6B650C6: fildl 0x18(%esp);");
    asm("loc_6B650CA: mov %eax,0x18(%esp);");
    asm("loc_6B650CE: fmull _data_6B6C1E8;");
    asm("loc_6B650D4: fstps 0x40(%edi);");
    asm("loc_6B650D7: fildl 0x18(%esp);");
    asm("loc_6B650DB: fmull _data_6B6C1E8;");
    asm("loc_6B650E1: fstps 0x34(%edi);");
    asm("loc_6B650E4: mov (%esi),%edx;");
    asm("loc_6B650E6: mov 4(%esi),%ecx;");
    asm("loc_6B650E9: inc %edx;");
    asm("loc_6B650EA: mov %edx,%eax;");
    asm("loc_6B650EC: cmp %ecx,%eax;");
    asm("loc_6B650EE: mov %edx,(%esi);");
    asm("loc_6B650F0: jbe loc_6B650F5;");
    asm("loc_6B650F2: mov %ebp,0xC(%esi);");
    asm("loc_6B650F5: mov 0x1C(%edi),%eax;");
    asm("loc_6B650F8: test %eax,%eax;");
    asm("loc_6B650FA: jne loc_6B651AA;");
    asm("loc_6B65100: mov (%ebx),%eax;");
    asm("loc_6B65102: mov (%eax),%cl;");
    asm("loc_6B65104: movsbl %cl,%ecx;");
    asm("loc_6B65107: mov %ecx,0x18(%esp);");
    asm("loc_6B6510B: inc %eax;");
    asm("loc_6B6510C: mov %eax,(%ebx);");
    asm("loc_6B6510E: fildl 0x18(%esp);");
    asm("loc_6B65112: fmull _data_6B6C1E8;");
    asm("loc_6B65118: fstps 0x48(%edi);");
    asm("loc_6B6511B: mov (%esi),%edx;");
    asm("loc_6B6511D: mov 4(%esi),%ecx;");
    asm("loc_6B65120: add $4,%edx;");
    asm("loc_6B65123: mov %edx,%eax;");
    asm("loc_6B65125: cmp %ecx,%eax;");
    asm("loc_6B65127: mov %edx,(%esi);");
    asm("loc_6B65129: jbe loc_6B6512E;");
    asm("loc_6B6512B: mov %ebp,0xC(%esi);");
    asm("loc_6B6512E: mov 0x1C(%edi),%eax;");
    asm("loc_6B65131: test %eax,%eax;");
    asm("loc_6B65133: jne loc_6B651AA;");
    asm("loc_6B65135: mov (%ebx),%eax;");
    asm("loc_6B65137: mov (%eax),%edx;");
    asm("loc_6B65139: add $4,%eax;");
    asm("loc_6B6513C: mov %eax,(%ebx);");
    asm("loc_6B6513E: mov 0x1C(%esp),%eax;");
    asm("loc_6B65142: push %esi;");
    asm("loc_6B65143: push %eax;");
    asm("loc_6B65144: push %ebx;");
    asm("loc_6B65145: mov %edi,%ecx;");
    asm("loc_6B65147: mov %edx,0x44(%edi);");
    asm("loc_6B6514A: call _sub_6B4E7A0;");
    asm("loc_6B6514F: test %eax,%eax;");
    asm("loc_6B65151: mov %eax,0x1C(%edi);");
    asm("loc_6B65154: je loc_6B65160;");
    asm("loc_6B65156: pop %edi;");
    asm("loc_6B65157: pop %esi;");
    asm("loc_6B65158: mov %ebp,%eax;");
    asm("loc_6B6515A: pop %ebp;");
    asm("loc_6B6515B: pop %ebx;");
    asm("loc_6B6515C: pop %ecx;");
    asm("loc_6B6515D: ret $0xC;");
    asm("loc_6B65160: mov (%esi),%ecx;");
    asm("loc_6B65162: mov 0x20(%esp),%edx;");
    asm("loc_6B65166: mov %ecx,(%edx);");
    asm("loc_6B65168: mov 0xC(%edi),%eax;");
    asm("loc_6B6516B: push %eax;");
    asm("loc_6B6516C: call _sub_6B4ECD0;");
    asm("loc_6B65171: mov %eax,%ecx;");
    asm("loc_6B65173: mov 4(%ecx),%edx;");
    asm("loc_6B65176: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B65179: mov 0x14(%ecx),%eax;");
    asm("loc_6B6517C: add $4,%esp;");
    asm("loc_6B6517F: inc %edx;");
    asm("loc_6B65180: mov %edx,4(%ecx);");
    asm("loc_6B65183: mov %edx,%edi;");
    asm("loc_6B65185: mov (%esi),%edx;");
    asm("loc_6B65187: add $2,%edx;");
    asm("loc_6B6518A: add %edx,%ebp;");
    asm("loc_6B6518C: mov %ebp,0x1C(%ecx);");
    asm("loc_6B6518F: mov (%esi),%esi;");
    asm("loc_6B65191: add $2,%eax;");
    asm("loc_6B65194: cmp %eax,%esi;");
    asm("loc_6B65196: jbe loc_6B6519E;");
    asm("loc_6B65198: add $2,%esi;");
    asm("loc_6B6519B: mov %esi,0x14(%ecx);");
    asm("loc_6B6519E: mov 0x1C(%ecx),%eax;");
    asm("loc_6B651A1: xor %edx,%edx;");
    asm("loc_6B651A3: div %edi;");
    asm("loc_6B651A5: mov %eax,0xC(%ecx);");
    asm("loc_6B651A8: xor %eax,%eax;");
    asm("loc_6B651AA: pop %edi;");
    asm("loc_6B651AB: pop %esi;");
    asm("loc_6B651AC: pop %ebp;");
    asm("loc_6B651AD: pop %ebx;");
    asm("loc_6B651AE: pop %ecx;");
    asm("loc_6B651AF: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B651C0() // _sub_6B651C0
{
    __DEBUG_ASM(6B651C0);
    // chunk 0x6B651C0 _sub_6B651C0
    asm("loc_6B651C0: mov _data_6B6E9B4,%eax;");
    asm("loc_6B651C5: mov %eax,_data_6B74510;");
    asm("loc_6B651CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B651D0() // _sub_6B651D0
{
    __DEBUG_ASM(6B651D0);
    // chunk 0x6B651D0 _sub_6B651D0
    asm("loc_6B651D0: mov _data_6B6E9B4,%eax;");
    asm("loc_6B651D5: mov %eax,_data_6B74514;");
    asm("loc_6B651DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B651E0() // _sub_6B651E0
{
    __DEBUG_ASM(6B651E0);
    // chunk 0x6B651E0 _sub_6B651E0
    asm("loc_6B651E0: mov _data_6B6E9B8,%eax;");
    asm("loc_6B651E5: mov %eax,_data_6B7450C;");
    asm("loc_6B651EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B651F0() // _sub_6B651F0
{
    __DEBUG_ASM(6B651F0);
    // chunk 0x6B651F0 _sub_6B651F0
    asm("loc_6B651F0: mov 8(%esp),%eax;");
    asm("loc_6B651F4: sub $0xC,%esp;");
    asm("loc_6B651F7: push %ebx;");
    asm("loc_6B651F8: push %ebp;");
    asm("loc_6B651F9: push %esi;");
    asm("loc_6B651FA: push %edi;");
    asm("loc_6B651FB: mov %ecx,%edi;");
    asm("loc_6B651FD: mov 0x20(%esp),%ecx;");
    asm("loc_6B65201: lea 0x10(%edi),%esi;");
    asm("loc_6B65204: mov %eax,4(%esi);");
    asm("loc_6B65207: mov (%ecx),%edx;");
    asm("loc_6B65209: mov %edx,8(%esi);");
    asm("loc_6B6520C: movl $0,(%esi);");
    asm("loc_6B65212: movl $0,0xC(%esi);");
    asm("loc_6B65219: mov 0x14(%edi),%eax;");
    asm("loc_6B6521C: push %esi;");
    asm("loc_6B6521D: push %eax;");
    asm("loc_6B6521E: lea 0x18(%edi),%ebp;");
    asm("loc_6B65221: push %ebp;");
    asm("loc_6B65222: mov %edi,%ecx;");
    asm("loc_6B65224: call _sub_6B4E740;");
    asm("loc_6B65229: test %eax,%eax;");
    asm("loc_6B6522B: mov %eax,0x1C(%edi);");
    asm("loc_6B6522E: je loc_6B6523F;");
    asm("loc_6B65230: pop %edi;");
    asm("loc_6B65231: pop %esi;");
    asm("loc_6B65232: pop %ebp;");
    asm("loc_6B65233: mov $0x16,%eax;");
    asm("loc_6B65238: pop %ebx;");
    asm("loc_6B65239: add $0xC,%esp;");
    asm("loc_6B6523C: ret $0xC;");
    asm("loc_6B6523F: mov (%esi),%edx;");
    asm("loc_6B65241: mov 4(%esi),%ecx;");
    asm("loc_6B65244: add $4,%edx;");
    asm("loc_6B65247: mov %edx,%eax;");
    asm("loc_6B65249: cmp %ecx,%eax;");
    asm("loc_6B6524B: mov %edx,(%esi);");
    asm("loc_6B6524D: jbe loc_6B65256;");
    asm("loc_6B6524F: movl $0x16,0xC(%esi);");
    asm("loc_6B65256: mov 0x1C(%edi),%eax;");
    asm("loc_6B65259: test %eax,%eax;");
    asm("loc_6B6525B: je loc_6B6526C;");
    asm("loc_6B6525D: pop %edi;");
    asm("loc_6B6525E: pop %esi;");
    asm("loc_6B6525F: pop %ebp;");
    asm("loc_6B65260: mov $0x16,%eax;");
    asm("loc_6B65265: pop %ebx;");
    asm("loc_6B65266: add $0xC,%esp;");
    asm("loc_6B65269: ret $0xC;");
    asm("loc_6B6526C: mov (%ebp),%eax;");
    asm("loc_6B6526F: mov 0x20(%edi),%ecx;");
    asm("loc_6B65272: mov %ecx,(%eax);");
    asm("loc_6B65274: add $4,%eax;");
    asm("loc_6B65277: mov %eax,(%ebp);");
    asm("loc_6B6527A: calll *_import_6B6B0A4;");
    asm("loc_6B65280: test %al,%al;");
    asm("loc_6B65282: je loc_6B65378;");
    asm("loc_6B65288: mov (%esi),%edx;");
    asm("loc_6B6528A: mov 4(%esi),%ecx;");
    asm("loc_6B6528D: add $0xC,%edx;");
    asm("loc_6B65290: mov %edx,%eax;");
    asm("loc_6B65292: cmp %ecx,%eax;");
    asm("loc_6B65294: mov %edx,(%esi);");
    asm("loc_6B65296: jbe loc_6B6529F;");
    asm("loc_6B65298: movl $0x16,0xC(%esi);");
    asm("loc_6B6529F: mov 0x1C(%edi),%eax;");
    asm("loc_6B652A2: test %eax,%eax;");
    asm("loc_6B652A4: je loc_6B652B5;");
    asm("loc_6B652A6: pop %edi;");
    asm("loc_6B652A7: pop %esi;");
    asm("loc_6B652A8: pop %ebp;");
    asm("loc_6B652A9: mov $0x16,%eax;");
    asm("loc_6B652AE: pop %ebx;");
    asm("loc_6B652AF: add $0xC,%esp;");
    asm("loc_6B652B2: ret $0xC;");
    asm("loc_6B652B5: mov 0x24(%edi),%edx;");
    asm("loc_6B652B8: mov 0x2C(%edi),%ecx;");
    asm("loc_6B652BB: mov (%ebp),%ebx;");
    asm("loc_6B652BE: mov 0x28(%edi),%eax;");
    asm("loc_6B652C1: mov %edx,0x10(%esp);");
    asm("loc_6B652C5: lea 0x10(%esp),%edx;");
    asm("loc_6B652C9: mov %ecx,0x18(%esp);");
    asm("loc_6B652CD: push %edx;");
    asm("loc_6B652CE: mov %ebx,%ecx;");
    asm("loc_6B652D0: mov %eax,0x18(%esp);");
    asm("loc_6B652D4: call _sub_6B3A160;");
    asm("loc_6B652D9: add $0xC,%ebx;");
    asm("loc_6B652DC: mov %ebx,(%ebp);");
    asm("loc_6B652DF: mov 0x34(%edi),%ecx;");
    asm("loc_6B652E2: test %ecx,%ecx;");
    asm("loc_6B652E4: jne loc_6B652EA;");
    asm("loc_6B652E6: xor %al,%al;");
    asm("loc_6B652E8: jmp loc_6B652F1;");
    asm("loc_6B652EA: mov 0x38(%edi),%eax;");
    asm("loc_6B652ED: sub %ecx,%eax;");
    asm("loc_6B652EF: sar $1,%eax;");
    asm("loc_6B652F1: mov (%esi),%ebx;");
    asm("loc_6B652F3: mov 4(%esi),%edx;");
    asm("loc_6B652F6: inc %ebx;");
    asm("loc_6B652F7: mov %ebx,%ecx;");
    asm("loc_6B652F9: cmp %edx,%ecx;");
    asm("loc_6B652FB: mov %ebx,(%esi);");
    asm("loc_6B652FD: jbe loc_6B65306;");
    asm("loc_6B652FF: movl $0x16,0xC(%esi);");
    asm("loc_6B65306: mov 0x1C(%edi),%ecx;");
    asm("loc_6B65309: test %ecx,%ecx;");
    asm("loc_6B6530B: je loc_6B6531C;");
    asm("loc_6B6530D: pop %edi;");
    asm("loc_6B6530E: pop %esi;");
    asm("loc_6B6530F: pop %ebp;");
    asm("loc_6B65310: mov $0x16,%eax;");
    asm("loc_6B65315: pop %ebx;");
    asm("loc_6B65316: add $0xC,%esp;");
    asm("loc_6B65319: ret $0xC;");
    asm("loc_6B6531C: mov (%ebp),%ecx;");
    asm("loc_6B6531F: mov %al,(%ecx);");
    asm("loc_6B65321: mov 0x34(%edi),%eax;");
    asm("loc_6B65324: inc %ecx;");
    asm("loc_6B65325: mov %ecx,(%ebp);");
    asm("loc_6B65328: cmp 0x38(%edi),%eax;");
    asm("loc_6B6532B: je loc_6B6576D;");
    asm("loc_6B65331: mov $0x16,%edx;");
    asm("loc_6B65336: mov (%esi),%ecx;");
    asm("loc_6B65338: mov 4(%esi),%ebx;");
    asm("loc_6B6533B: add $2,%ecx;");
    asm("loc_6B6533E: cmp %ebx,%ecx;");
    asm("loc_6B65340: mov %ecx,(%esi);");
    asm("loc_6B65342: jbe loc_6B65347;");
    asm("loc_6B65344: mov %edx,0xC(%esi);");
    asm("loc_6B65347: mov 0x1C(%edi),%ecx;");
    asm("loc_6B6534A: test %ecx,%ecx;");
    asm("loc_6B6534C: jne loc_6B6536C;");
    asm("loc_6B6534E: mov (%ebp),%ecx;");
    asm("loc_6B65351: mov (%eax),%bx;");
    asm("loc_6B65354: mov %bx,(%ecx);");
    asm("loc_6B65357: add $2,%ecx;");
    asm("loc_6B6535A: mov %ecx,(%ebp);");
    asm("loc_6B6535D: mov 0x38(%edi),%ecx;");
    asm("loc_6B65360: add $2,%eax;");
    asm("loc_6B65363: cmp %ecx,%eax;");
    asm("loc_6B65365: jne loc_6B65336;");
    asm("loc_6B65367: jmp loc_6B6576D;");
    asm("loc_6B6536C: pop %edi;");
    asm("loc_6B6536D: pop %esi;");
    asm("loc_6B6536E: pop %ebp;");
    asm("loc_6B6536F: mov %edx,%eax;");
    asm("loc_6B65371: pop %ebx;");
    asm("loc_6B65372: add $0xC,%esp;");
    asm("loc_6B65375: ret $0xC;");
    asm("loc_6B65378: flds 0x24(%edi);");
    asm("loc_6B6537B: xor %bl,%bl;");
    asm("loc_6B6537D: fabs;");
    asm("loc_6B6537F: mov %bl,0x24(%esp);");
    asm("loc_6B65383: fcoml _data_6B6E9E0;");
    asm("loc_6B65389: fnstsw %ax;");
    asm("loc_6B6538B: test $5,%ah;");
    asm("loc_6B6538E: jp loc_6B65396;");
    asm("loc_6B65390: fstp %st(0);");
    asm("loc_6B65392: mov $1,%bl;");
    asm("loc_6B65394: jmp loc_6B653A5;");
    asm("loc_6B65396: fcompl _data_6B6E9D8;");
    asm("loc_6B6539C: fnstsw %ax;");
    asm("loc_6B6539E: test $5,%ah;");
    asm("loc_6B653A1: jp loc_6B653A9;");
    asm("loc_6B653A3: mov $2,%bl;");
    asm("loc_6B653A5: mov %bl,0x24(%esp);");
    asm("loc_6B653A9: flds 0x28(%edi);");
    asm("loc_6B653AC: fabs;");
    asm("loc_6B653AE: fcoml _data_6B6E9E0;");
    asm("loc_6B653B4: fnstsw %ax;");
    asm("loc_6B653B6: test $5,%ah;");
    asm("loc_6B653B9: jp loc_6B653C2;");
    asm("loc_6B653BB: fstp %st(0);");
    asm("loc_6B653BD: or $4,%bl;");
    asm("loc_6B653C0: jmp loc_6B653D2;");
    asm("loc_6B653C2: fcompl _data_6B6E9D8;");
    asm("loc_6B653C8: fnstsw %ax;");
    asm("loc_6B653CA: test $5,%ah;");
    asm("loc_6B653CD: jp loc_6B653D6;");
    asm("loc_6B653CF: or $8,%bl;");
    asm("loc_6B653D2: mov %bl,0x24(%esp);");
    asm("loc_6B653D6: flds 0x2C(%edi);");
    asm("loc_6B653D9: fabs;");
    asm("loc_6B653DB: fcompl _data_6B6E9E0;");
    asm("loc_6B653E1: fnstsw %ax;");
    asm("loc_6B653E3: test $5,%ah;");
    asm("loc_6B653E6: jp loc_6B653EF;");
    asm("loc_6B653E8: or $0x10,%bl;");
    asm("loc_6B653EB: mov %bl,0x24(%esp);");
    asm("loc_6B653EF: mov 0x34(%edi),%ecx;");
    asm("loc_6B653F2: test %ecx,%ecx;");
    asm("loc_6B653F4: je loc_6B65409;");
    asm("loc_6B653F6: mov 0x38(%edi),%eax;");
    asm("loc_6B653F9: sub %ecx,%eax;");
    asm("loc_6B653FB: sar $1,%eax;");
    asm("loc_6B653FD: cmp $1,%eax;");
    asm("loc_6B65400: jne loc_6B65409;");
    asm("loc_6B65402: or $0x40,%bl;");
    asm("loc_6B65405: mov %bl,0x24(%esp);");
    asm("loc_6B65409: mov (%esi),%edx;");
    asm("loc_6B6540B: mov 4(%esi),%ecx;");
    asm("loc_6B6540E: inc %edx;");
    asm("loc_6B6540F: mov %edx,%eax;");
    asm("loc_6B65411: cmp %ecx,%eax;");
    asm("loc_6B65413: mov %edx,(%esi);");
    asm("loc_6B65415: jbe loc_6B6541E;");
    asm("loc_6B65417: movl $0x16,0xC(%esi);");
    asm("loc_6B6541E: mov 0x1C(%edi),%eax;");
    asm("loc_6B65421: test %eax,%eax;");
    asm("loc_6B65423: je loc_6B65434;");
    asm("loc_6B65425: pop %edi;");
    asm("loc_6B65426: pop %esi;");
    asm("loc_6B65427: pop %ebp;");
    asm("loc_6B65428: mov $0x16,%eax;");
    asm("loc_6B6542D: pop %ebx;");
    asm("loc_6B6542E: add $0xC,%esp;");
    asm("loc_6B65431: ret $0xC;");
    asm("loc_6B65434: mov (%ebp),%eax;");
    asm("loc_6B65437: mov %bl,(%eax);");
    asm("loc_6B65439: inc %eax;");
    asm("loc_6B6543A: test $1,%bl;");
    asm("loc_6B6543D: mov %eax,(%ebp);");
    asm("loc_6B65440: je loc_6B65493;");
    asm("loc_6B65442: flds 0x24(%edi);");
    asm("loc_6B65445: fmuls _data_6B6E9D4;");
    asm("loc_6B6544B: fmull _data_6B6C1E0;");
    asm("loc_6B65451: call _sub_6B6A3F8;");
    asm("loc_6B65456: mov (%esi),%ebx;");
    asm("loc_6B65458: mov 4(%esi),%edx;");
    asm("loc_6B6545B: inc %ebx;");
    asm("loc_6B6545C: mov %ebx,%ecx;");
    asm("loc_6B6545E: cmp %edx,%ecx;");
    asm("loc_6B65460: mov %ebx,(%esi);");
    asm("loc_6B65462: jbe loc_6B6546B;");
    asm("loc_6B65464: movl $0x16,0xC(%esi);");
    asm("loc_6B6546B: mov 0x1C(%edi),%ecx;");
    asm("loc_6B6546E: test %ecx,%ecx;");
    asm("loc_6B65470: je loc_6B65481;");
    asm("loc_6B65472: pop %edi;");
    asm("loc_6B65473: pop %esi;");
    asm("loc_6B65474: pop %ebp;");
    asm("loc_6B65475: mov $0x16,%eax;");
    asm("loc_6B6547A: pop %ebx;");
    asm("loc_6B6547B: add $0xC,%esp;");
    asm("loc_6B6547E: ret $0xC;");
    asm("loc_6B65481: mov (%ebp),%ecx;");
    asm("loc_6B65484: mov 0x24(%esp),%bl;");
    asm("loc_6B65488: mov %al,(%ecx);");
    asm("loc_6B6548A: inc %ecx;");
    asm("loc_6B6548B: mov %ecx,(%ebp);");
    asm("loc_6B6548E: jmp loc_6B65520;");
    asm("loc_6B65493: test $2,%bl;");
    asm("loc_6B65496: je loc_6B654E5;");
    asm("loc_6B65498: flds 0x24(%edi);");
    asm("loc_6B6549B: fmuls _data_6B6E9D0;");
    asm("loc_6B654A1: fmull _data_6B6E9C8;");
    asm("loc_6B654A7: call _sub_6B6A3F8;");
    asm("loc_6B654AC: mov (%esi),%ecx;");
    asm("loc_6B654AE: mov 4(%esi),%edx;");
    asm("loc_6B654B1: add $2,%ecx;");
    asm("loc_6B654B4: cmp %edx,%ecx;");
    asm("loc_6B654B6: mov %ecx,(%esi);");
    asm("loc_6B654B8: jbe loc_6B654C1;");
    asm("loc_6B654BA: movl $0x16,0xC(%esi);");
    asm("loc_6B654C1: mov 0x1C(%edi),%ecx;");
    asm("loc_6B654C4: test %ecx,%ecx;");
    asm("loc_6B654C6: je loc_6B654D7;");
    asm("loc_6B654C8: pop %edi;");
    asm("loc_6B654C9: pop %esi;");
    asm("loc_6B654CA: pop %ebp;");
    asm("loc_6B654CB: mov $0x16,%eax;");
    asm("loc_6B654D0: pop %ebx;");
    asm("loc_6B654D1: add $0xC,%esp;");
    asm("loc_6B654D4: ret $0xC;");
    asm("loc_6B654D7: mov (%ebp),%ecx;");
    asm("loc_6B654DA: mov %ax,(%ecx);");
    asm("loc_6B654DD: add $2,%ecx;");
    asm("loc_6B654E0: mov %ecx,(%ebp);");
    asm("loc_6B654E3: jmp loc_6B65520;");
    asm("loc_6B654E5: mov (%esi),%edx;");
    asm("loc_6B654E7: mov 4(%esi),%ecx;");
    asm("loc_6B654EA: add $4,%edx;");
    asm("loc_6B654ED: mov %edx,%eax;");
    asm("loc_6B654EF: cmp %ecx,%eax;");
    asm("loc_6B654F1: mov %edx,(%esi);");
    asm("loc_6B654F3: jbe loc_6B654FC;");
    asm("loc_6B654F5: movl $0x16,0xC(%esi);");
    asm("loc_6B654FC: mov 0x1C(%edi),%eax;");
    asm("loc_6B654FF: test %eax,%eax;");
    asm("loc_6B65501: je loc_6B65512;");
    asm("loc_6B65503: pop %edi;");
    asm("loc_6B65504: pop %esi;");
    asm("loc_6B65505: pop %ebp;");
    asm("loc_6B65506: mov $0x16,%eax;");
    asm("loc_6B6550B: pop %ebx;");
    asm("loc_6B6550C: add $0xC,%esp;");
    asm("loc_6B6550F: ret $0xC;");
    asm("loc_6B65512: mov (%ebp),%eax;");
    asm("loc_6B65515: flds 0x24(%edi);");
    asm("loc_6B65518: fstps (%eax);");
    asm("loc_6B6551A: add $4,%eax;");
    asm("loc_6B6551D: mov %eax,(%ebp);");
    asm("loc_6B65520: test $4,%bl;");
    asm("loc_6B65523: je loc_6B65576;");
    asm("loc_6B65525: flds 0x28(%edi);");
    asm("loc_6B65528: fmuls _data_6B6E9D4;");
    asm("loc_6B6552E: fmull _data_6B6C1E0;");
    asm("loc_6B65534: call _sub_6B6A3F8;");
    asm("loc_6B65539: mov (%esi),%ebx;");
    asm("loc_6B6553B: mov 4(%esi),%edx;");
    asm("loc_6B6553E: inc %ebx;");
    asm("loc_6B6553F: mov %ebx,%ecx;");
    asm("loc_6B65541: cmp %edx,%ecx;");
    asm("loc_6B65543: mov %ebx,(%esi);");
    asm("loc_6B65545: jbe loc_6B6554E;");
    asm("loc_6B65547: movl $0x16,0xC(%esi);");
    asm("loc_6B6554E: mov 0x1C(%edi),%ecx;");
    asm("loc_6B65551: test %ecx,%ecx;");
    asm("loc_6B65553: je loc_6B65564;");
    asm("loc_6B65555: pop %edi;");
    asm("loc_6B65556: pop %esi;");
    asm("loc_6B65557: pop %ebp;");
    asm("loc_6B65558: mov $0x16,%eax;");
    asm("loc_6B6555D: pop %ebx;");
    asm("loc_6B6555E: add $0xC,%esp;");
    asm("loc_6B65561: ret $0xC;");
    asm("loc_6B65564: mov (%ebp),%ecx;");
    asm("loc_6B65567: mov 0x24(%esp),%bl;");
    asm("loc_6B6556B: mov %al,(%ecx);");
    asm("loc_6B6556D: inc %ecx;");
    asm("loc_6B6556E: mov %ecx,(%ebp);");
    asm("loc_6B65571: jmp loc_6B65603;");
    asm("loc_6B65576: test $8,%bl;");
    asm("loc_6B65579: je loc_6B655C8;");
    asm("loc_6B6557B: flds 0x28(%edi);");
    asm("loc_6B6557E: fmuls _data_6B6E9D0;");
    asm("loc_6B65584: fmull _data_6B6E9C8;");
    asm("loc_6B6558A: call _sub_6B6A3F8;");
    asm("loc_6B6558F: mov (%esi),%ecx;");
    asm("loc_6B65591: mov 4(%esi),%edx;");
    asm("loc_6B65594: add $2,%ecx;");
    asm("loc_6B65597: cmp %edx,%ecx;");
    asm("loc_6B65599: mov %ecx,(%esi);");
    asm("loc_6B6559B: jbe loc_6B655A4;");
    asm("loc_6B6559D: movl $0x16,0xC(%esi);");
    asm("loc_6B655A4: mov 0x1C(%edi),%ecx;");
    asm("loc_6B655A7: test %ecx,%ecx;");
    asm("loc_6B655A9: je loc_6B655BA;");
    asm("loc_6B655AB: pop %edi;");
    asm("loc_6B655AC: pop %esi;");
    asm("loc_6B655AD: pop %ebp;");
    asm("loc_6B655AE: mov $0x16,%eax;");
    asm("loc_6B655B3: pop %ebx;");
    asm("loc_6B655B4: add $0xC,%esp;");
    asm("loc_6B655B7: ret $0xC;");
    asm("loc_6B655BA: mov (%ebp),%ecx;");
    asm("loc_6B655BD: mov %ax,(%ecx);");
    asm("loc_6B655C0: add $2,%ecx;");
    asm("loc_6B655C3: mov %ecx,(%ebp);");
    asm("loc_6B655C6: jmp loc_6B65603;");
    asm("loc_6B655C8: mov (%esi),%edx;");
    asm("loc_6B655CA: mov 4(%esi),%ecx;");
    asm("loc_6B655CD: add $4,%edx;");
    asm("loc_6B655D0: mov %edx,%eax;");
    asm("loc_6B655D2: cmp %ecx,%eax;");
    asm("loc_6B655D4: mov %edx,(%esi);");
    asm("loc_6B655D6: jbe loc_6B655DF;");
    asm("loc_6B655D8: movl $0x16,0xC(%esi);");
    asm("loc_6B655DF: mov 0x1C(%edi),%eax;");
    asm("loc_6B655E2: test %eax,%eax;");
    asm("loc_6B655E4: je loc_6B655F5;");
    asm("loc_6B655E6: pop %edi;");
    asm("loc_6B655E7: pop %esi;");
    asm("loc_6B655E8: pop %ebp;");
    asm("loc_6B655E9: mov $0x16,%eax;");
    asm("loc_6B655EE: pop %ebx;");
    asm("loc_6B655EF: add $0xC,%esp;");
    asm("loc_6B655F2: ret $0xC;");
    asm("loc_6B655F5: mov (%ebp),%eax;");
    asm("loc_6B655F8: flds 0x28(%edi);");
    asm("loc_6B655FB: fstps (%eax);");
    asm("loc_6B655FD: add $4,%eax;");
    asm("loc_6B65600: mov %eax,(%ebp);");
    asm("loc_6B65603: test $0x10,%bl;");
    asm("loc_6B65606: je loc_6B65655;");
    asm("loc_6B65608: flds 0x2C(%edi);");
    asm("loc_6B6560B: fmuls _data_6B6E9D4;");
    asm("loc_6B65611: fmull _data_6B6C1E0;");
    asm("loc_6B65617: call _sub_6B6A3F8;");
    asm("loc_6B6561C: mov (%esi),%ebx;");
    asm("loc_6B6561E: mov 4(%esi),%edx;");
    asm("loc_6B65621: inc %ebx;");
    asm("loc_6B65622: mov %ebx,%ecx;");
    asm("loc_6B65624: cmp %edx,%ecx;");
    asm("loc_6B65626: mov %ebx,(%esi);");
    asm("loc_6B65628: jbe loc_6B65631;");
    asm("loc_6B6562A: movl $0x16,0xC(%esi);");
    asm("loc_6B65631: mov 0x1C(%edi),%ecx;");
    asm("loc_6B65634: test %ecx,%ecx;");
    asm("loc_6B65636: je loc_6B65647;");
    asm("loc_6B65638: pop %edi;");
    asm("loc_6B65639: pop %esi;");
    asm("loc_6B6563A: pop %ebp;");
    asm("loc_6B6563B: mov $0x16,%eax;");
    asm("loc_6B65640: pop %ebx;");
    asm("loc_6B65641: add $0xC,%esp;");
    asm("loc_6B65644: ret $0xC;");
    asm("loc_6B65647: mov (%ebp),%ecx;");
    asm("loc_6B6564A: mov %al,(%ecx);");
    asm("loc_6B6564C: inc %ecx;");
    asm("loc_6B6564D: mov %ecx,(%ebp);");
    asm("loc_6B65650: jmp loc_6B656E4;");
    asm("loc_6B65655: test $0x20,%bl;");
    asm("loc_6B65658: je loc_6B656A9;");
    asm("loc_6B6565A: flds 0x2C(%edi);");
    asm("loc_6B6565D: fmuls _data_6B6E9D0;");
    asm("loc_6B65663: fmull _data_6B6E9C8;");
    asm("loc_6B65669: call _sub_6B6A3F8;");
    asm("loc_6B6566E: mov (%esi),%ebx;");
    asm("loc_6B65670: mov 4(%esi),%edx;");
    asm("loc_6B65673: add $2,%ebx;");
    asm("loc_6B65676: mov %ebx,%ecx;");
    asm("loc_6B65678: cmp %edx,%ecx;");
    asm("loc_6B6567A: mov %ebx,(%esi);");
    asm("loc_6B6567C: jbe loc_6B65685;");
    asm("loc_6B6567E: movl $0x16,0xC(%esi);");
    asm("loc_6B65685: mov 0x1C(%edi),%ecx;");
    asm("loc_6B65688: test %ecx,%ecx;");
    asm("loc_6B6568A: je loc_6B6569B;");
    asm("loc_6B6568C: pop %edi;");
    asm("loc_6B6568D: pop %esi;");
    asm("loc_6B6568E: pop %ebp;");
    asm("loc_6B6568F: mov $0x16,%eax;");
    asm("loc_6B65694: pop %ebx;");
    asm("loc_6B65695: add $0xC,%esp;");
    asm("loc_6B65698: ret $0xC;");
    asm("loc_6B6569B: mov (%ebp),%ecx;");
    asm("loc_6B6569E: mov %ax,(%ecx);");
    asm("loc_6B656A1: add $2,%ecx;");
    asm("loc_6B656A4: mov %ecx,(%ebp);");
    asm("loc_6B656A7: jmp loc_6B656E4;");
    asm("loc_6B656A9: mov (%esi),%edx;");
    asm("loc_6B656AB: mov 4(%esi),%ecx;");
    asm("loc_6B656AE: add $4,%edx;");
    asm("loc_6B656B1: mov %edx,%eax;");
    asm("loc_6B656B3: cmp %ecx,%eax;");
    asm("loc_6B656B5: mov %edx,(%esi);");
    asm("loc_6B656B7: jbe loc_6B656C0;");
    asm("loc_6B656B9: movl $0x16,0xC(%esi);");
    asm("loc_6B656C0: mov 0x1C(%edi),%eax;");
    asm("loc_6B656C3: test %eax,%eax;");
    asm("loc_6B656C5: je loc_6B656D6;");
    asm("loc_6B656C7: pop %edi;");
    asm("loc_6B656C8: pop %esi;");
    asm("loc_6B656C9: pop %ebp;");
    asm("loc_6B656CA: mov $0x16,%eax;");
    asm("loc_6B656CF: pop %ebx;");
    asm("loc_6B656D0: add $0xC,%esp;");
    asm("loc_6B656D3: ret $0xC;");
    asm("loc_6B656D6: mov (%ebp),%eax;");
    asm("loc_6B656D9: flds 0x2C(%edi);");
    asm("loc_6B656DC: fstps (%eax);");
    asm("loc_6B656DE: add $4,%eax;");
    asm("loc_6B656E1: mov %eax,(%ebp);");
    asm("loc_6B656E4: mov 0x34(%edi),%ecx;");
    asm("loc_6B656E7: test %ecx,%ecx;");
    asm("loc_6B656E9: jne loc_6B656EF;");
    asm("loc_6B656EB: xor %al,%al;");
    asm("loc_6B656ED: jmp loc_6B656FA;");
    asm("loc_6B656EF: mov 0x38(%edi),%eax;");
    asm("loc_6B656F2: sub %ecx,%eax;");
    asm("loc_6B656F4: sar $1,%eax;");
    asm("loc_6B656F6: cmp $1,%al;");
    asm("loc_6B656F8: je loc_6B6572E;");
    asm("loc_6B656FA: mov (%esi),%ebx;");
    asm("loc_6B656FC: mov 4(%esi),%edx;");
    asm("loc_6B656FF: inc %ebx;");
    asm("loc_6B65700: mov %ebx,%ecx;");
    asm("loc_6B65702: cmp %edx,%ecx;");
    asm("loc_6B65704: mov %ebx,(%esi);");
    asm("loc_6B65706: jbe loc_6B6570F;");
    asm("loc_6B65708: movl $0x16,0xC(%esi);");
    asm("loc_6B6570F: mov 0x1C(%edi),%ecx;");
    asm("loc_6B65712: test %ecx,%ecx;");
    asm("loc_6B65714: je loc_6B65725;");
    asm("loc_6B65716: pop %edi;");
    asm("loc_6B65717: pop %esi;");
    asm("loc_6B65718: pop %ebp;");
    asm("loc_6B65719: mov $0x16,%eax;");
    asm("loc_6B6571E: pop %ebx;");
    asm("loc_6B6571F: add $0xC,%esp;");
    asm("loc_6B65722: ret $0xC;");
    asm("loc_6B65725: mov (%ebp),%ecx;");
    asm("loc_6B65728: mov %al,(%ecx);");
    asm("loc_6B6572A: inc %ecx;");
    asm("loc_6B6572B: mov %ecx,(%ebp);");
    asm("loc_6B6572E: mov 0x34(%edi),%ecx;");
    asm("loc_6B65731: cmp 0x38(%edi),%ecx;");
    asm("loc_6B65734: je loc_6B6576D;");
    asm("loc_6B65736: mov (%esi),%ebx;");
    asm("loc_6B65738: mov 4(%esi),%edx;");
    asm("loc_6B6573B: add $2,%ebx;");
    asm("loc_6B6573E: mov %ebx,%eax;");
    asm("loc_6B65740: cmp %edx,%eax;");
    asm("loc_6B65742: mov %ebx,(%esi);");
    asm("loc_6B65744: jbe loc_6B6574D;");
    asm("loc_6B65746: movl $0x16,0xC(%esi);");
    asm("loc_6B6574D: mov 0x1C(%edi),%eax;");
    asm("loc_6B65750: test %eax,%eax;");
    asm("loc_6B65752: jne loc_6B65781;");
    asm("loc_6B65754: mov (%ebp),%eax;");
    asm("loc_6B65757: mov (%ecx),%dx;");
    asm("loc_6B6575A: mov %dx,(%eax);");
    asm("loc_6B6575D: add $2,%eax;");
    asm("loc_6B65760: mov %eax,(%ebp);");
    asm("loc_6B65763: mov 0x38(%edi),%eax;");
    asm("loc_6B65766: add $2,%ecx;");
    asm("loc_6B65769: cmp %eax,%ecx;");
    asm("loc_6B6576B: jne loc_6B65736;");
    asm("loc_6B6576D: mov 0x14(%edi),%eax;");
    asm("loc_6B65770: push %esi;");
    asm("loc_6B65771: push %eax;");
    asm("loc_6B65772: push %ebp;");
    asm("loc_6B65773: mov %edi,%ecx;");
    asm("loc_6B65775: call _sub_6B4E790;");
    asm("loc_6B6577A: test %eax,%eax;");
    asm("loc_6B6577C: mov %eax,0x1C(%edi);");
    asm("loc_6B6577F: je loc_6B65790;");
    asm("loc_6B65781: pop %edi;");
    asm("loc_6B65782: pop %esi;");
    asm("loc_6B65783: pop %ebp;");
    asm("loc_6B65784: mov $0x16,%eax;");
    asm("loc_6B65789: pop %ebx;");
    asm("loc_6B6578A: add $0xC,%esp;");
    asm("loc_6B6578D: ret $0xC;");
    asm("loc_6B65790: mov (%esi),%ecx;");
    asm("loc_6B65792: mov 0x28(%esp),%edx;");
    asm("loc_6B65796: mov %ecx,(%edx);");
    asm("loc_6B65798: mov 0xC(%edi),%eax;");
    asm("loc_6B6579B: push %eax;");
    asm("loc_6B6579C: call _sub_6B4ECD0;");
    asm("loc_6B657A1: mov %eax,%ecx;");
    asm("loc_6B657A3: mov (%ecx),%ebp;");
    asm("loc_6B657A5: mov 0x18(%ecx),%ebx;");
    asm("loc_6B657A8: mov 0x10(%ecx),%eax;");
    asm("loc_6B657AB: add $4,%esp;");
    asm("loc_6B657AE: inc %ebp;");
    asm("loc_6B657AF: mov %ebp,(%ecx);");
    asm("loc_6B657B1: mov (%esi),%edx;");
    asm("loc_6B657B3: add %edx,%ebx;");
    asm("loc_6B657B5: mov %ebx,0x18(%ecx);");
    asm("loc_6B657B8: mov (%esi),%esi;");
    asm("loc_6B657BA: cmp %eax,%esi;");
    asm("loc_6B657BC: mov %ebp,%edi;");
    asm("loc_6B657BE: jbe loc_6B657C3;");
    asm("loc_6B657C0: mov %esi,0x10(%ecx);");
    asm("loc_6B657C3: mov 0x18(%ecx),%eax;");
    asm("loc_6B657C6: xor %edx,%edx;");
    asm("loc_6B657C8: div %edi;");
    asm("loc_6B657CA: pop %edi;");
    asm("loc_6B657CB: pop %esi;");
    asm("loc_6B657CC: pop %ebp;");
    asm("loc_6B657CD: pop %ebx;");
    asm("loc_6B657CE: mov %eax,8(%ecx);");
    asm("loc_6B657D1: xor %eax,%eax;");
    asm("loc_6B657D3: add $0xC,%esp;");
    asm("loc_6B657D6: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B657E0() // _sub_6B657E0
{
    __DEBUG_ASM(6B657E0);
    // chunk 0x6B657E0 _sub_6B657E0
    asm("loc_6B657E0: mov 8(%esp),%eax;");
    asm("loc_6B657E4: sub $0x10,%esp;");
    asm("loc_6B657E7: push %ebx;");
    asm("loc_6B657E8: push %ebp;");
    asm("loc_6B657E9: push %esi;");
    asm("loc_6B657EA: mov %ecx,%esi;");
    asm("loc_6B657EC: mov 0x20(%esp),%ecx;");
    asm("loc_6B657F0: push %edi;");
    asm("loc_6B657F1: lea 0x10(%esi),%ebp;");
    asm("loc_6B657F4: push %ebp;");
    asm("loc_6B657F5: push %eax;");
    asm("loc_6B657F6: mov %ecx,8(%ebp);");
    asm("loc_6B657F9: lea 0x18(%esi),%edi;");
    asm("loc_6B657FC: push %edi;");
    asm("loc_6B657FD: mov %esi,%ecx;");
    asm("loc_6B657FF: mov %eax,4(%ebp);");
    asm("loc_6B65802: movl $0,(%ebp);");
    asm("loc_6B65809: movl $0,0xC(%ebp);");
    asm("loc_6B65810: call _sub_6B4E780;");
    asm("loc_6B65815: test %eax,%eax;");
    asm("loc_6B65817: mov %eax,0x1C(%esi);");
    asm("loc_6B6581A: je loc_6B6582B;");
    asm("loc_6B6581C: pop %edi;");
    asm("loc_6B6581D: pop %esi;");
    asm("loc_6B6581E: pop %ebp;");
    asm("loc_6B6581F: mov $0x17,%eax;");
    asm("loc_6B65824: pop %ebx;");
    asm("loc_6B65825: add $0x10,%esp;");
    asm("loc_6B65828: ret $0xC;");
    asm("loc_6B6582B: mov (%ebp),%edx;");
    asm("loc_6B6582E: mov 4(%ebp),%ecx;");
    asm("loc_6B65831: add $4,%edx;");
    asm("loc_6B65834: mov %edx,%eax;");
    asm("loc_6B65836: cmp %ecx,%eax;");
    asm("loc_6B65838: mov %edx,(%ebp);");
    asm("loc_6B6583B: jbe loc_6B65844;");
    asm("loc_6B6583D: movl $0x17,0xC(%ebp);");
    asm("loc_6B65844: mov 0x1C(%esi),%eax;");
    asm("loc_6B65847: test %eax,%eax;");
    asm("loc_6B65849: jne loc_6B65DE3;");
    asm("loc_6B6584F: mov (%edi),%eax;");
    asm("loc_6B65851: mov (%eax),%edx;");
    asm("loc_6B65853: add $4,%eax;");
    asm("loc_6B65856: mov %edx,0x20(%esi);");
    asm("loc_6B65859: mov %eax,(%edi);");
    asm("loc_6B6585B: calll *_import_6B6B0A4;");
    asm("loc_6B65861: test %al,%al;");
    asm("loc_6B65863: mov 4(%ebp),%ecx;");
    asm("loc_6B65866: mov (%ebp),%edx;");
    asm("loc_6B65869: je loc_6B6594D;");
    asm("loc_6B6586F: add $0xC,%edx;");
    asm("loc_6B65872: mov %edx,%eax;");
    asm("loc_6B65874: cmp %ecx,%eax;");
    asm("loc_6B65876: mov %edx,(%ebp);");
    asm("loc_6B65879: jbe loc_6B65882;");
    asm("loc_6B6587B: movl $0x17,0xC(%ebp);");
    asm("loc_6B65882: mov 0x1C(%esi),%eax;");
    asm("loc_6B65885: test %eax,%eax;");
    asm("loc_6B65887: jne loc_6B65DE3;");
    asm("loc_6B6588D: mov (%edi),%ebx;");
    asm("loc_6B6588F: push %ebx;");
    asm("loc_6B65890: lea 0x24(%esi),%ecx;");
    asm("loc_6B65893: call _sub_6B3A160;");
    asm("loc_6B65898: add $0xC,%ebx;");
    asm("loc_6B6589B: mov %ebx,(%edi);");
    asm("loc_6B6589D: mov (%ebp),%edx;");
    asm("loc_6B658A0: mov 4(%ebp),%ecx;");
    asm("loc_6B658A3: inc %edx;");
    asm("loc_6B658A4: mov %edx,%eax;");
    asm("loc_6B658A6: cmp %ecx,%eax;");
    asm("loc_6B658A8: mov %edx,(%ebp);");
    asm("loc_6B658AB: jbe loc_6B658B4;");
    asm("loc_6B658AD: movl $0x17,0xC(%ebp);");
    asm("loc_6B658B4: mov 0x1C(%esi),%eax;");
    asm("loc_6B658B7: test %eax,%eax;");
    asm("loc_6B658B9: jne loc_6B65DE3;");
    asm("loc_6B658BF: mov (%edi),%eax;");
    asm("loc_6B658C1: mov (%eax),%cl;");
    asm("loc_6B658C3: inc %eax;");
    asm("loc_6B658C4: xor %bl,%bl;");
    asm("loc_6B658C6: test %cl,%cl;");
    asm("loc_6B658C8: mov %cl,0x24(%esp);");
    asm("loc_6B658CC: mov %eax,(%edi);");
    asm("loc_6B658CE: jbe loc_6B65922;");
    asm("loc_6B658D0: mov (%ebp),%edx;");
    asm("loc_6B658D3: mov 4(%ebp),%ecx;");
    asm("loc_6B658D6: add $2,%edx;");
    asm("loc_6B658D9: mov %edx,%eax;");
    asm("loc_6B658DB: cmp %ecx,%eax;");
    asm("loc_6B658DD: mov %edx,(%ebp);");
    asm("loc_6B658E0: jbe loc_6B658E9;");
    asm("loc_6B658E2: movl $0x17,0xC(%ebp);");
    asm("loc_6B658E9: mov 0x1C(%esi),%eax;");
    asm("loc_6B658EC: test %eax,%eax;");
    asm("loc_6B658EE: jne loc_6B65D89;");
    asm("loc_6B658F4: mov (%edi),%eax;");
    asm("loc_6B658F6: xor %ecx,%ecx;");
    asm("loc_6B658F8: mov (%eax),%cx;");
    asm("loc_6B658FB: add $2,%eax;");
    asm("loc_6B658FE: lea 0x14(%esp),%edx;");
    asm("loc_6B65902: push %edx;");
    asm("loc_6B65903: mov %eax,(%edi);");
    asm("loc_6B65905: mov 0x38(%esi),%eax;");
    asm("loc_6B65908: push $1;");
    asm("loc_6B6590A: mov %ecx,0x1C(%esp);");
    asm("loc_6B6590E: lea 0x30(%esi),%ecx;");
    asm("loc_6B65911: push %eax;");
    asm("loc_6B65912: calll *_import_6B6B024;");
    asm("loc_6B65918: mov 0x24(%esp),%al;");
    asm("loc_6B6591C: inc %bl;");
    asm("loc_6B6591E: cmp %al,%bl;");
    asm("loc_6B65920: jb loc_6B658D0;");
    asm("loc_6B65922: mov 0x28(%esp),%eax;");
    asm("loc_6B65926: push %ebp;");
    asm("loc_6B65927: push %eax;");
    asm("loc_6B65928: lea 0x18(%esi),%eax;");
    asm("loc_6B6592B: push %eax;");
    asm("loc_6B6592C: mov %esi,%ecx;");
    asm("loc_6B6592E: call _sub_6B4E7A0;");
    asm("loc_6B65933: test %eax,%eax;");
    asm("loc_6B65935: mov %eax,0x1C(%esi);");
    asm("loc_6B65938: je loc_6B65D96;");
    asm("loc_6B6593E: pop %edi;");
    asm("loc_6B6593F: pop %esi;");
    asm("loc_6B65940: pop %ebp;");
    asm("loc_6B65941: mov $0x17,%eax;");
    asm("loc_6B65946: pop %ebx;");
    asm("loc_6B65947: add $0x10,%esp;");
    asm("loc_6B6594A: ret $0xC;");
    asm("loc_6B6594D: inc %edx;");
    asm("loc_6B6594E: mov %edx,%eax;");
    asm("loc_6B65950: cmp %ecx,%eax;");
    asm("loc_6B65952: mov %edx,(%ebp);");
    asm("loc_6B65955: mov $0x17,%ebx;");
    asm("loc_6B6595A: jbe loc_6B6595F;");
    asm("loc_6B6595C: mov %ebx,0xC(%ebp);");
    asm("loc_6B6595F: mov 0x1C(%esi),%eax;");
    asm("loc_6B65962: test %eax,%eax;");
    asm("loc_6B65964: jne loc_6B65DE3;");
    asm("loc_6B6596A: mov (%edi),%eax;");
    asm("loc_6B6596C: mov (%eax),%dl;");
    asm("loc_6B6596E: inc %eax;");
    asm("loc_6B6596F: test $1,%dl;");
    asm("loc_6B65972: mov %eax,(%edi);");
    asm("loc_6B65974: mov 4(%ebp),%ecx;");
    asm("loc_6B65977: mov (%ebp),%eax;");
    asm("loc_6B6597A: je loc_6B659AD;");
    asm("loc_6B6597C: inc %eax;");
    asm("loc_6B6597D: cmp %ecx,%eax;");
    asm("loc_6B6597F: mov %eax,(%ebp);");
    asm("loc_6B65982: jbe loc_6B65987;");
    asm("loc_6B65984: mov %ebx,0xC(%ebp);");
    asm("loc_6B65987: mov 0x1C(%esi),%eax;");
    asm("loc_6B6598A: test %eax,%eax;");
    asm("loc_6B6598C: jne loc_6B65DE3;");
    asm("loc_6B65992: mov (%edi),%eax;");
    asm("loc_6B65994: mov (%eax),%cl;");
    asm("loc_6B65996: movsbl %cl,%ecx;");
    asm("loc_6B65999: mov %ecx,0x24(%esp);");
    asm("loc_6B6599D: inc %eax;");
    asm("loc_6B6599E: fildl 0x24(%esp);");
    asm("loc_6B659A2: fmull _data_6B6E9F0;");
    asm("loc_6B659A8: fstps 0x24(%esi);");
    asm("loc_6B659AB: jmp loc_6B65A0C;");
    asm("loc_6B659AD: test $2,%dl;");
    asm("loc_6B659B0: je loc_6B659EA;");
    asm("loc_6B659B2: add $2,%eax;");
    asm("loc_6B659B5: cmp %ecx,%eax;");
    asm("loc_6B659B7: mov %eax,(%ebp);");
    asm("loc_6B659BA: jbe loc_6B659BF;");
    asm("loc_6B659BC: mov %ebx,0xC(%ebp);");
    asm("loc_6B659BF: mov 0x1C(%esi),%eax;");
    asm("loc_6B659C2: test %eax,%eax;");
    asm("loc_6B659C4: jne loc_6B65DE3;");
    asm("loc_6B659CA: mov (%edi),%eax;");
    asm("loc_6B659CC: mov (%eax),%cx;");
    asm("loc_6B659CF: add $2,%eax;");
    asm("loc_6B659D2: mov %eax,(%edi);");
    asm("loc_6B659D4: movswl %cx,%eax;");
    asm("loc_6B659D7: mov %eax,0x24(%esp);");
    asm("loc_6B659DB: fildl 0x24(%esp);");
    asm("loc_6B659DF: fmull _data_6B6E9E8;");
    asm("loc_6B659E5: fstps 0x24(%esi);");
    asm("loc_6B659E8: jmp loc_6B65A0E;");
    asm("loc_6B659EA: add $4,%eax;");
    asm("loc_6B659ED: cmp %ecx,%eax;");
    asm("loc_6B659EF: mov %eax,(%ebp);");
    asm("loc_6B659F2: jbe loc_6B659F7;");
    asm("loc_6B659F4: mov %ebx,0xC(%ebp);");
    asm("loc_6B659F7: mov 0x1C(%esi),%eax;");
    asm("loc_6B659FA: test %eax,%eax;");
    asm("loc_6B659FC: jne loc_6B65DE3;");
    asm("loc_6B65A02: mov (%edi),%eax;");
    asm("loc_6B65A04: mov (%eax),%ecx;");
    asm("loc_6B65A06: mov %ecx,0x24(%esi);");
    asm("loc_6B65A09: add $4,%eax;");
    asm("loc_6B65A0C: mov %eax,(%edi);");
    asm("loc_6B65A0E: test $4,%dl;");
    asm("loc_6B65A11: mov 4(%ebp),%ecx;");
    asm("loc_6B65A14: mov (%ebp),%eax;");
    asm("loc_6B65A17: je loc_6B65A4C;");
    asm("loc_6B65A19: inc %eax;");
    asm("loc_6B65A1A: cmp %ecx,%eax;");
    asm("loc_6B65A1C: mov %eax,(%ebp);");
    asm("loc_6B65A1F: jbe loc_6B65A24;");
    asm("loc_6B65A21: mov %ebx,0xC(%ebp);");
    asm("loc_6B65A24: mov 0x1C(%esi),%eax;");
    asm("loc_6B65A27: test %eax,%eax;");
    asm("loc_6B65A29: jne loc_6B65DE3;");
    asm("loc_6B65A2F: mov (%edi),%eax;");
    asm("loc_6B65A31: mov (%eax),%cl;");
    asm("loc_6B65A33: inc %eax;");
    asm("loc_6B65A34: mov %eax,(%edi);");
    asm("loc_6B65A36: movsbl %cl,%eax;");
    asm("loc_6B65A39: mov %eax,0x24(%esp);");
    asm("loc_6B65A3D: fildl 0x24(%esp);");
    asm("loc_6B65A41: fmull _data_6B6E9F0;");
    asm("loc_6B65A47: fstps 0x28(%esi);");
    asm("loc_6B65A4A: jmp loc_6B65AAB;");
    asm("loc_6B65A4C: test $8,%dl;");
    asm("loc_6B65A4F: je loc_6B65A87;");
    asm("loc_6B65A51: add $2,%eax;");
    asm("loc_6B65A54: cmp %ecx,%eax;");
    asm("loc_6B65A56: mov %eax,(%ebp);");
    asm("loc_6B65A59: jbe loc_6B65A5E;");
    asm("loc_6B65A5B: mov %ebx,0xC(%ebp);");
    asm("loc_6B65A5E: mov 0x1C(%esi),%eax;");
    asm("loc_6B65A61: test %eax,%eax;");
    asm("loc_6B65A63: jne loc_6B65DE3;");
    asm("loc_6B65A69: mov (%edi),%eax;");
    asm("loc_6B65A6B: mov (%eax),%cx;");
    asm("loc_6B65A6E: movswl %cx,%ecx;");
    asm("loc_6B65A71: mov %ecx,0x24(%esp);");
    asm("loc_6B65A75: add $2,%eax;");
    asm("loc_6B65A78: fildl 0x24(%esp);");
    asm("loc_6B65A7C: fmull _data_6B6E9E8;");
    asm("loc_6B65A82: fstps 0x28(%esi);");
    asm("loc_6B65A85: jmp loc_6B65AA9;");
    asm("loc_6B65A87: add $4,%eax;");
    asm("loc_6B65A8A: cmp %ecx,%eax;");
    asm("loc_6B65A8C: mov %eax,(%ebp);");
    asm("loc_6B65A8F: jbe loc_6B65A94;");
    asm("loc_6B65A91: mov %ebx,0xC(%ebp);");
    asm("loc_6B65A94: mov 0x1C(%esi),%eax;");
    asm("loc_6B65A97: test %eax,%eax;");
    asm("loc_6B65A99: jne loc_6B65DE3;");
    asm("loc_6B65A9F: mov (%edi),%eax;");
    asm("loc_6B65AA1: mov (%eax),%ecx;");
    asm("loc_6B65AA3: mov %ecx,0x28(%esi);");
    asm("loc_6B65AA6: add $4,%eax;");
    asm("loc_6B65AA9: mov %eax,(%edi);");
    asm("loc_6B65AAB: test $0x10,%dl;");
    asm("loc_6B65AAE: mov 4(%ebp),%ecx;");
    asm("loc_6B65AB1: mov (%ebp),%eax;");
    asm("loc_6B65AB4: je loc_6B65AE9;");
    asm("loc_6B65AB6: inc %eax;");
    asm("loc_6B65AB7: cmp %ecx,%eax;");
    asm("loc_6B65AB9: mov %eax,(%ebp);");
    asm("loc_6B65ABC: jbe loc_6B65AC1;");
    asm("loc_6B65ABE: mov %ebx,0xC(%ebp);");
    asm("loc_6B65AC1: mov 0x1C(%esi),%eax;");
    asm("loc_6B65AC4: test %eax,%eax;");
    asm("loc_6B65AC6: jne loc_6B65DE3;");
    asm("loc_6B65ACC: mov (%edi),%eax;");
    asm("loc_6B65ACE: mov (%eax),%cl;");
    asm("loc_6B65AD0: inc %eax;");
    asm("loc_6B65AD1: mov %eax,(%edi);");
    asm("loc_6B65AD3: movsbl %cl,%eax;");
    asm("loc_6B65AD6: mov %eax,0x24(%esp);");
    asm("loc_6B65ADA: fildl 0x24(%esp);");
    asm("loc_6B65ADE: fmull _data_6B6E9F0;");
    asm("loc_6B65AE4: fstps 0x2C(%esi);");
    asm("loc_6B65AE7: jmp loc_6B65B48;");
    asm("loc_6B65AE9: test $0x20,%dl;");
    asm("loc_6B65AEC: je loc_6B65B24;");
    asm("loc_6B65AEE: add $2,%eax;");
    asm("loc_6B65AF1: cmp %ecx,%eax;");
    asm("loc_6B65AF3: mov %eax,(%ebp);");
    asm("loc_6B65AF6: jbe loc_6B65AFB;");
    asm("loc_6B65AF8: mov %ebx,0xC(%ebp);");
    asm("loc_6B65AFB: mov 0x1C(%esi),%eax;");
    asm("loc_6B65AFE: test %eax,%eax;");
    asm("loc_6B65B00: jne loc_6B65DE3;");
    asm("loc_6B65B06: mov (%edi),%eax;");
    asm("loc_6B65B08: mov (%eax),%cx;");
    asm("loc_6B65B0B: movswl %cx,%ecx;");
    asm("loc_6B65B0E: mov %ecx,0x24(%esp);");
    asm("loc_6B65B12: add $2,%eax;");
    asm("loc_6B65B15: fildl 0x24(%esp);");
    asm("loc_6B65B19: fmull _data_6B6E9E8;");
    asm("loc_6B65B1F: fstps 0x2C(%esi);");
    asm("loc_6B65B22: jmp loc_6B65B46;");
    asm("loc_6B65B24: add $4,%eax;");
    asm("loc_6B65B27: cmp %ecx,%eax;");
    asm("loc_6B65B29: mov %eax,(%ebp);");
    asm("loc_6B65B2C: jbe loc_6B65B31;");
    asm("loc_6B65B2E: mov %ebx,0xC(%ebp);");
    asm("loc_6B65B31: mov 0x1C(%esi),%eax;");
    asm("loc_6B65B34: test %eax,%eax;");
    asm("loc_6B65B36: jne loc_6B65DE3;");
    asm("loc_6B65B3C: mov (%edi),%eax;");
    asm("loc_6B65B3E: mov (%eax),%ecx;");
    asm("loc_6B65B40: mov %ecx,0x2C(%esi);");
    asm("loc_6B65B43: add $4,%eax;");
    asm("loc_6B65B46: mov %eax,(%edi);");
    asm("loc_6B65B48: test $0x40,%dl;");
    asm("loc_6B65B4B: je loc_6B65B54;");
    asm("loc_6B65B4D: movb $1,0x24(%esp);");
    asm("loc_6B65B52: jmp loc_6B65B7D;");
    asm("loc_6B65B54: mov (%ebp),%edx;");
    asm("loc_6B65B57: mov 4(%ebp),%ecx;");
    asm("loc_6B65B5A: inc %edx;");
    asm("loc_6B65B5B: mov %edx,%eax;");
    asm("loc_6B65B5D: cmp %ecx,%eax;");
    asm("loc_6B65B5F: mov %edx,(%ebp);");
    asm("loc_6B65B62: jbe loc_6B65B67;");
    asm("loc_6B65B64: mov %ebx,0xC(%ebp);");
    asm("loc_6B65B67: mov 0x1C(%esi),%eax;");
    asm("loc_6B65B6A: test %eax,%eax;");
    asm("loc_6B65B6C: jne loc_6B65DE3;");
    asm("loc_6B65B72: mov (%edi),%eax;");
    asm("loc_6B65B74: mov (%eax),%dl;");
    asm("loc_6B65B76: inc %eax;");
    asm("loc_6B65B77: mov %dl,0x24(%esp);");
    asm("loc_6B65B7B: mov %eax,(%edi);");
    asm("loc_6B65B7D: mov 0x24(%esp),%al;");
    asm("loc_6B65B81: test %al,%al;");
    asm("loc_6B65B83: movb $0,0x13(%esp);");
    asm("loc_6B65B88: jbe loc_6B65922;");
    asm("loc_6B65B8E: mov %edi,%edi;");
    asm("loc_6B65B90: mov (%ebp),%edx;");
    asm("loc_6B65B93: mov 4(%ebp),%ecx;");
    asm("loc_6B65B96: add $2,%edx;");
    asm("loc_6B65B99: mov %edx,%eax;");
    asm("loc_6B65B9B: cmp %ecx,%eax;");
    asm("loc_6B65B9D: mov %edx,(%ebp);");
    asm("loc_6B65BA0: jbe loc_6B65BA9;");
    asm("loc_6B65BA2: movl $0x17,0xC(%ebp);");
    asm("loc_6B65BA9: mov 0x1C(%esi),%eax;");
    asm("loc_6B65BAC: test %eax,%eax;");
    asm("loc_6B65BAE: jne loc_6B65D89;");
    asm("loc_6B65BB4: mov 0x18(%esi),%eax;");
    asm("loc_6B65BB7: xor %ebx,%ebx;");
    asm("loc_6B65BB9: mov (%eax),%bx;");
    asm("loc_6B65BBC: add $2,%eax;");
    asm("loc_6B65BBF: mov %eax,0x18(%esi);");
    asm("loc_6B65BC2: mov 0x38(%esi),%eax;");
    asm("loc_6B65BC5: mov 0x3C(%esi),%ecx;");
    asm("loc_6B65BC8: sub %eax,%ecx;");
    asm("loc_6B65BCA: sar $1,%ecx;");
    asm("loc_6B65BCC: cmp $1,%ecx;");
    asm("loc_6B65BCF: mov %ebx,0x14(%esp);");
    asm("loc_6B65BD3: mov %eax,%edi;");
    asm("loc_6B65BD5: jae loc_6B65CB1;");
    asm("loc_6B65BDB: mov 0x34(%esi),%edx;");
    asm("loc_6B65BDE: test %edx,%edx;");
    asm("loc_6B65BE0: je loc_6B65BED;");
    asm("loc_6B65BE2: mov %eax,%ecx;");
    asm("loc_6B65BE4: sub %edx,%ecx;");
    asm("loc_6B65BE6: sar $1,%ecx;");
    asm("loc_6B65BE8: cmp $1,%ecx;");
    asm("loc_6B65BEB: ja loc_6B65BF2;");
    asm("loc_6B65BED: mov $1,%ecx;");
    asm("loc_6B65BF2: test %edx,%edx;");
    asm("loc_6B65BF4: jne loc_6B65BFA;");
    asm("loc_6B65BF6: xor %eax,%eax;");
    asm("loc_6B65BF8: jmp loc_6B65BFE;");
    asm("loc_6B65BFA: sub %edx,%eax;");
    asm("loc_6B65BFC: sar $1,%eax;");
    asm("loc_6B65BFE: add %ecx,%eax;");
    asm("loc_6B65C00: test %eax,%eax;");
    asm("loc_6B65C02: mov %eax,0x1C(%esp);");
    asm("loc_6B65C06: jge loc_6B65C0A;");
    asm("loc_6B65C08: xor %eax,%eax;");
    asm("loc_6B65C0A: lea (%eax,%eax),%edx;");
    asm("loc_6B65C0D: push %edx;");
    asm("loc_6B65C0E: call _sub_6B6A134;");
    asm("loc_6B65C13: mov 0x34(%esi),%ecx;");
    asm("loc_6B65C16: add $4,%esp;");
    asm("loc_6B65C19: cmp %edi,%ecx;");
    asm("loc_6B65C1B: mov %eax,%ebx;");
    asm("loc_6B65C1D: mov %ebx,0x18(%esp);");
    asm("loc_6B65C21: je loc_6B65C37;");
    asm("loc_6B65C23: test %eax,%eax;");
    asm("loc_6B65C25: je loc_6B65C2D;");
    asm("loc_6B65C27: mov (%ecx),%dx;");
    asm("loc_6B65C2A: mov %dx,(%eax);");
    asm("loc_6B65C2D: add $2,%ecx;");
    asm("loc_6B65C30: add $2,%eax;");
    asm("loc_6B65C33: cmp %edi,%ecx;");
    asm("loc_6B65C35: jne loc_6B65C23;");
    asm("loc_6B65C37: test %eax,%eax;");
    asm("loc_6B65C39: je loc_6B65C43;");
    asm("loc_6B65C3B: mov 0x14(%esp),%cx;");
    asm("loc_6B65C40: mov %cx,(%eax);");
    asm("loc_6B65C43: mov 0x38(%esi),%edx;");
    asm("loc_6B65C46: cmp %edx,%edi;");
    asm("loc_6B65C48: lea 2(%eax),%ecx;");
    asm("loc_6B65C4B: je loc_6B65C6D;");
    asm("loc_6B65C4D: mov %ecx,%ebx;");
    asm("loc_6B65C4F: sub %eax,%ebx;");
    asm("loc_6B65C51: lea -2(%ebx,%edi),%eax;");
    asm("loc_6B65C55: test %ecx,%ecx;");
    asm("loc_6B65C57: je loc_6B65C5F;");
    asm("loc_6B65C59: mov (%eax),%di;");
    asm("loc_6B65C5C: mov %di,(%ecx);");
    asm("loc_6B65C5F: add $2,%eax;");
    asm("loc_6B65C62: add $2,%ecx;");
    asm("loc_6B65C65: cmp %edx,%eax;");
    asm("loc_6B65C67: jne loc_6B65C55;");
    asm("loc_6B65C69: mov 0x18(%esp),%ebx;");
    asm("loc_6B65C6D: mov 0x34(%esi),%edx;");
    asm("loc_6B65C70: push %edx;");
    asm("loc_6B65C71: call _sub_6B6A092;");
    asm("loc_6B65C76: mov 0x20(%esp),%eax;");
    asm("loc_6B65C7A: lea (%ebx,%eax,2),%ecx;");
    asm("loc_6B65C7D: mov %ecx,0x3C(%esi);");
    asm("loc_6B65C80: mov 0x34(%esi),%ecx;");
    asm("loc_6B65C83: add $4,%esp;");
    asm("loc_6B65C86: test %ecx,%ecx;");
    asm("loc_6B65C88: jne loc_6B65C9B;");
    asm("loc_6B65C8A: xor %eax,%eax;");
    asm("loc_6B65C8C: lea 2(%ebx,%eax,2),%edx;");
    asm("loc_6B65C90: mov %edx,0x38(%esi);");
    asm("loc_6B65C93: mov %ebx,0x34(%esi);");
    asm("loc_6B65C96: jmp loc_6B65D6E;");
    asm("loc_6B65C9B: mov 0x38(%esi),%eax;");
    asm("loc_6B65C9E: sub %ecx,%eax;");
    asm("loc_6B65CA0: sar $1,%eax;");
    asm("loc_6B65CA2: lea 2(%ebx,%eax,2),%edx;");
    asm("loc_6B65CA6: mov %edx,0x38(%esi);");
    asm("loc_6B65CA9: mov %ebx,0x34(%esi);");
    asm("loc_6B65CAC: jmp loc_6B65D6E;");
    asm("loc_6B65CB1: mov %eax,%ecx;");
    asm("loc_6B65CB3: sub %edi,%ecx;");
    asm("loc_6B65CB5: sar $1,%ecx;");
    asm("loc_6B65CB7: cmp $1,%ecx;");
    asm("loc_6B65CBA: jae loc_6B65D12;");
    asm("loc_6B65CBC: cmp %eax,%edi;");
    asm("loc_6B65CBE: lea 2(%edi),%ecx;");
    asm("loc_6B65CC1: je loc_6B65CDE;");
    asm("loc_6B65CC3: lea -2(%ecx),%edx;");
    asm("loc_6B65CC6: test %ecx,%ecx;");
    asm("loc_6B65CC8: je loc_6B65CD4;");
    asm("loc_6B65CCA: mov (%edx),%bx;");
    asm("loc_6B65CCD: mov %bx,(%ecx);");
    asm("loc_6B65CD0: mov 0x14(%esp),%ebx;");
    asm("loc_6B65CD4: add $2,%edx;");
    asm("loc_6B65CD7: add $2,%ecx;");
    asm("loc_6B65CDA: cmp %eax,%edx;");
    asm("loc_6B65CDC: jne loc_6B65CC6;");
    asm("loc_6B65CDE: mov 0x38(%esi),%ecx;");
    asm("loc_6B65CE1: mov %ecx,%edx;");
    asm("loc_6B65CE3: sub %edi,%edx;");
    asm("loc_6B65CE5: sar $1,%edx;");
    asm("loc_6B65CE7: mov $1,%eax;");
    asm("loc_6B65CEC: sub %edx,%eax;");
    asm("loc_6B65CEE: je loc_6B65CFD;");
    asm("loc_6B65CF0: test %ecx,%ecx;");
    asm("loc_6B65CF2: je loc_6B65CF7;");
    asm("loc_6B65CF4: mov %bx,(%ecx);");
    asm("loc_6B65CF7: add $2,%ecx;");
    asm("loc_6B65CFA: dec %eax;");
    asm("loc_6B65CFB: jne loc_6B65CF0;");
    asm("loc_6B65CFD: mov 0x38(%esi),%ecx;");
    asm("loc_6B65D00: cmp %ecx,%edi;");
    asm("loc_6B65D02: mov %edi,%eax;");
    asm("loc_6B65D04: je loc_6B65D6A;");
    asm("loc_6B65D06: mov %bx,(%eax);");
    asm("loc_6B65D09: add $2,%eax;");
    asm("loc_6B65D0C: cmp %ecx,%eax;");
    asm("loc_6B65D0E: jne loc_6B65D06;");
    asm("loc_6B65D10: jmp loc_6B65D6A;");
    asm("loc_6B65D12: lea -2(%eax),%ecx;");
    asm("loc_6B65D15: cmp %eax,%ecx;");
    asm("loc_6B65D17: mov %eax,%edx;");
    asm("loc_6B65D19: je loc_6B65D38;");
    asm("loc_6B65D1B: nop;");
    asm("loc_6B65D1C: lea (%esp),%esp;");
    asm("loc_6B65D20: test %edx,%edx;");
    asm("loc_6B65D22: je loc_6B65D2E;");
    asm("loc_6B65D24: mov (%ecx),%bx;");
    asm("loc_6B65D27: mov %bx,(%edx);");
    asm("loc_6B65D2A: mov 0x14(%esp),%ebx;");
    asm("loc_6B65D2E: add $2,%ecx;");
    asm("loc_6B65D31: add $2,%edx;");
    asm("loc_6B65D34: cmp %eax,%ecx;");
    asm("loc_6B65D36: jne loc_6B65D20;");
    asm("loc_6B65D38: mov 0x38(%esi),%ecx;");
    asm("loc_6B65D3B: lea -2(%ecx),%eax;");
    asm("loc_6B65D3E: cmp %eax,%edi;");
    asm("loc_6B65D40: je loc_6B65D53;");
    asm("loc_6B65D42: mov -2(%eax),%dx;");
    asm("loc_6B65D46: sub $2,%eax;");
    asm("loc_6B65D49: sub $2,%ecx;");
    asm("loc_6B65D4C: cmp %edi,%eax;");
    asm("loc_6B65D4E: mov %dx,(%ecx);");
    asm("loc_6B65D51: jne loc_6B65D42;");
    asm("loc_6B65D53: lea 2(%edi),%ecx;");
    asm("loc_6B65D56: cmp %ecx,%edi;");
    asm("loc_6B65D58: mov %edi,%eax;");
    asm("loc_6B65D5A: je loc_6B65D6A;");
    asm("loc_6B65D5C: lea (%esp),%esp;");
    asm("loc_6B65D60: mov %bx,(%eax);");
    asm("loc_6B65D63: add $2,%eax;");
    asm("loc_6B65D66: cmp %ecx,%eax;");
    asm("loc_6B65D68: jne loc_6B65D60;");
    asm("loc_6B65D6A: addl $2,0x38(%esi);");
    asm("loc_6B65D6E: mov 0x13(%esp),%al;");
    asm("loc_6B65D72: mov 0x24(%esp),%cl;");
    asm("loc_6B65D76: inc %al;");
    asm("loc_6B65D78: cmp %cl,%al;");
    asm("loc_6B65D7A: mov %al,0x13(%esp);");
    asm("loc_6B65D7E: jb loc_6B65B90;");
    asm("loc_6B65D84: jmp loc_6B65922;");
    asm("loc_6B65D89: mov 0x1C(%esi),%eax;");
    asm("loc_6B65D8C: pop %edi;");
    asm("loc_6B65D8D: pop %esi;");
    asm("loc_6B65D8E: pop %ebp;");
    asm("loc_6B65D8F: pop %ebx;");
    asm("loc_6B65D90: add $0x10,%esp;");
    asm("loc_6B65D93: ret $0xC;");
    asm("loc_6B65D96: mov (%ebp),%ecx;");
    asm("loc_6B65D99: mov 0x2C(%esp),%edx;");
    asm("loc_6B65D9D: mov %ecx,(%edx);");
    asm("loc_6B65D9F: mov 0xC(%esi),%eax;");
    asm("loc_6B65DA2: push %eax;");
    asm("loc_6B65DA3: call _sub_6B4ECD0;");
    asm("loc_6B65DA8: mov %eax,%ecx;");
    asm("loc_6B65DAA: mov 4(%ecx),%edx;");
    asm("loc_6B65DAD: mov 0x1C(%ecx),%ebx;");
    asm("loc_6B65DB0: mov 0x14(%ecx),%eax;");
    asm("loc_6B65DB3: add $4,%esp;");
    asm("loc_6B65DB6: inc %edx;");
    asm("loc_6B65DB7: mov %edx,4(%ecx);");
    asm("loc_6B65DBA: mov %edx,%esi;");
    asm("loc_6B65DBC: mov (%ebp),%edx;");
    asm("loc_6B65DBF: add $2,%edx;");
    asm("loc_6B65DC2: add %edx,%ebx;");
    asm("loc_6B65DC4: mov %ebx,0x1C(%ecx);");
    asm("loc_6B65DC7: mov (%ebp),%ebp;");
    asm("loc_6B65DCA: add $2,%eax;");
    asm("loc_6B65DCD: cmp %eax,%ebp;");
    asm("loc_6B65DCF: jbe loc_6B65DD7;");
    asm("loc_6B65DD1: add $2,%ebp;");
    asm("loc_6B65DD4: mov %ebp,0x14(%ecx);");
    asm("loc_6B65DD7: mov 0x1C(%ecx),%eax;");
    asm("loc_6B65DDA: xor %edx,%edx;");
    asm("loc_6B65DDC: div %esi;");
    asm("loc_6B65DDE: mov %eax,0xC(%ecx);");
    asm("loc_6B65DE1: xor %eax,%eax;");
    asm("loc_6B65DE3: pop %edi;");
    asm("loc_6B65DE4: pop %esi;");
    asm("loc_6B65DE5: pop %ebp;");
    asm("loc_6B65DE6: pop %ebx;");
    asm("loc_6B65DE7: add $0x10,%esp;");
    asm("loc_6B65DEA: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B65DF0() // _sub_6B65DF0
{
    __DEBUG_ASM(6B65DF0);
    // chunk 0x6B65DF0 _sub_6B65DF0
    asm("loc_6B65DF0: mov _data_6B6E9C0,%eax;");
    asm("loc_6B65DF5: mov %eax,_data_6B74520;");
    asm("loc_6B65DFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B65E00() // _sub_6B65E00
{
    __DEBUG_ASM(6B65E00);
    // chunk 0x6B65E00 _sub_6B65E00
    asm("loc_6B65E00: mov _data_6B6E9C0,%eax;");
    asm("loc_6B65E05: mov %eax,_data_6B74524;");
    asm("loc_6B65E0A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B65E10() // _sub_6B65E10
{
    __DEBUG_ASM(6B65E10);
    // chunk 0x6B65E10 _sub_6B65E10
    asm("loc_6B65E10: mov _data_6B6E9C4,%eax;");
    asm("loc_6B65E15: mov %eax,_data_6B7451C;");
    asm("loc_6B65E1A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B65E20() // _sub_6B65E20
{
    __DEBUG_ASM(6B65E20);
    // chunk 0x6B65E20 _sub_6B65E20
    asm("loc_6B65E20: mov _data_6B6E9FC,%eax;");
    asm("loc_6B65E25: mov %eax,_data_6B74530;");
    asm("loc_6B65E2A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B65E30() // _sub_6B65E30
{
    __DEBUG_ASM(6B65E30);
    // chunk 0x6B65E30 _sub_6B65E30
    asm("loc_6B65E30: mov _data_6B6E9FC,%eax;");
    asm("loc_6B65E35: mov %eax,_data_6B74534;");
    asm("loc_6B65E3A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B65E40() // _sub_6B65E40
{
    __DEBUG_ASM(6B65E40);
    // chunk 0x6B65E40 _sub_6B65E40
    asm("loc_6B65E40: mov _data_6B6EA00,%eax;");
    asm("loc_6B65E45: mov %eax,_data_6B7452C;");
    asm("loc_6B65E4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B65E50() // _sub_6B65E50
{
    __DEBUG_ASM(6B65E50);
    // chunk 0x6B65E50 _sub_6B65E50
    asm("loc_6B65E50: mov 8(%esp),%eax;");
    asm("loc_6B65E54: push %ebx;");
    asm("loc_6B65E55: push %ebp;");
    asm("loc_6B65E56: mov %ecx,%ebp;");
    asm("loc_6B65E58: mov 0xC(%esp),%ecx;");
    asm("loc_6B65E5C: lea 0x10(%ebp),%ebx;");
    asm("loc_6B65E5F: push %esi;");
    asm("loc_6B65E60: mov %eax,4(%ebx);");
    asm("loc_6B65E63: mov (%ecx),%edx;");
    asm("loc_6B65E65: push %edi;");
    asm("loc_6B65E66: mov %edx,8(%ebx);");
    asm("loc_6B65E69: movl $0,(%ebx);");
    asm("loc_6B65E6F: movl $0,0xC(%ebx);");
    asm("loc_6B65E76: mov 0x14(%ebp),%eax;");
    asm("loc_6B65E79: push %ebx;");
    asm("loc_6B65E7A: push %eax;");
    asm("loc_6B65E7B: lea 0x18(%ebp),%esi;");
    asm("loc_6B65E7E: push %esi;");
    asm("loc_6B65E7F: mov %ebp,%ecx;");
    asm("loc_6B65E81: call _sub_6B4E740;");
    asm("loc_6B65E86: test %eax,%eax;");
    asm("loc_6B65E88: mov %eax,0x1C(%ebp);");
    asm("loc_6B65E8B: je loc_6B65E99;");
    asm("loc_6B65E8D: pop %edi;");
    asm("loc_6B65E8E: pop %esi;");
    asm("loc_6B65E8F: pop %ebp;");
    asm("loc_6B65E90: mov $0x16,%eax;");
    asm("loc_6B65E95: pop %ebx;");
    asm("loc_6B65E96: ret $0xC;");
    asm("loc_6B65E99: mov (%ebx),%edx;");
    asm("loc_6B65E9B: mov 4(%ebx),%ecx;");
    asm("loc_6B65E9E: add $4,%edx;");
    asm("loc_6B65EA1: mov %edx,%eax;");
    asm("loc_6B65EA3: cmp %ecx,%eax;");
    asm("loc_6B65EA5: mov %edx,(%ebx);");
    asm("loc_6B65EA7: jbe loc_6B65EB0;");
    asm("loc_6B65EA9: movl $0x16,0xC(%ebx);");
    asm("loc_6B65EB0: mov 0x1C(%ebp),%eax;");
    asm("loc_6B65EB3: test %eax,%eax;");
    asm("loc_6B65EB5: je loc_6B65EC3;");
    asm("loc_6B65EB7: pop %edi;");
    asm("loc_6B65EB8: pop %esi;");
    asm("loc_6B65EB9: pop %ebp;");
    asm("loc_6B65EBA: mov $0x16,%eax;");
    asm("loc_6B65EBF: pop %ebx;");
    asm("loc_6B65EC0: ret $0xC;");
    asm("loc_6B65EC3: mov (%esi),%eax;");
    asm("loc_6B65EC5: mov 0x24(%ebp),%ecx;");
    asm("loc_6B65EC8: mov %ecx,(%eax);");
    asm("loc_6B65ECA: mov 0x24(%ebp),%edx;");
    asm("loc_6B65ECD: add $4,%eax;");
    asm("loc_6B65ED0: mov %eax,(%esi);");
    asm("loc_6B65ED2: mov (%ebx),%edi;");
    asm("loc_6B65ED4: mov 4(%ebx),%ecx;");
    asm("loc_6B65ED7: add %edx,%edi;");
    asm("loc_6B65ED9: mov %edi,%eax;");
    asm("loc_6B65EDB: cmp %ecx,%eax;");
    asm("loc_6B65EDD: mov %edi,(%ebx);");
    asm("loc_6B65EDF: jbe loc_6B65EE8;");
    asm("loc_6B65EE1: movl $0x16,0xC(%ebx);");
    asm("loc_6B65EE8: mov 0x1C(%ebp),%eax;");
    asm("loc_6B65EEB: test %eax,%eax;");
    asm("loc_6B65EED: je loc_6B65EFB;");
    asm("loc_6B65EEF: pop %edi;");
    asm("loc_6B65EF0: pop %esi;");
    asm("loc_6B65EF1: pop %ebp;");
    asm("loc_6B65EF2: mov $0x16,%eax;");
    asm("loc_6B65EF7: pop %ebx;");
    asm("loc_6B65EF8: ret $0xC;");
    asm("loc_6B65EFB: mov 0x24(%ebp),%eax;");
    asm("loc_6B65EFE: mov (%esi),%edi;");
    asm("loc_6B65F00: mov 0x20(%ebp),%esi;");
    asm("loc_6B65F03: mov %eax,%ecx;");
    asm("loc_6B65F05: mov %ecx,%edx;");
    asm("loc_6B65F07: shr $2,%ecx;");
    asm("loc_6B65F0A: mov %edi,0x18(%esp);");
    asm("loc_6B65F0E: rep movsl (%esi),(%edi);");
    asm("loc_6B65F10: mov %edx,%ecx;");
    asm("loc_6B65F12: and $3,%ecx;");
    asm("loc_6B65F15: rep movsb (%esi),(%edi);");
    asm("loc_6B65F17: mov 0x18(%esp),%ecx;");
    asm("loc_6B65F1B: mov 0x14(%ebp),%edx;");
    asm("loc_6B65F1E: add %eax,%ecx;");
    asm("loc_6B65F20: push %ebx;");
    asm("loc_6B65F21: lea 0x18(%ebp),%eax;");
    asm("loc_6B65F24: push %edx;");
    asm("loc_6B65F25: mov %ecx,(%eax);");
    asm("loc_6B65F27: push %eax;");
    asm("loc_6B65F28: mov %ebp,%ecx;");
    asm("loc_6B65F2A: call _sub_6B4E790;");
    asm("loc_6B65F2F: test %eax,%eax;");
    asm("loc_6B65F31: mov %eax,0x1C(%ebp);");
    asm("loc_6B65F34: je loc_6B65F42;");
    asm("loc_6B65F36: pop %edi;");
    asm("loc_6B65F37: pop %esi;");
    asm("loc_6B65F38: pop %ebp;");
    asm("loc_6B65F39: mov $0x16,%eax;");
    asm("loc_6B65F3E: pop %ebx;");
    asm("loc_6B65F3F: ret $0xC;");
    asm("loc_6B65F42: mov (%ebx),%eax;");
    asm("loc_6B65F44: mov 0x1C(%esp),%ecx;");
    asm("loc_6B65F48: mov %eax,(%ecx);");
    asm("loc_6B65F4A: mov 0xC(%ebp),%edx;");
    asm("loc_6B65F4D: push %edx;");
    asm("loc_6B65F4E: call _sub_6B4ECD0;");
    asm("loc_6B65F53: mov %eax,%ecx;");
    asm("loc_6B65F55: mov (%ecx),%esi;");
    asm("loc_6B65F57: mov 0x18(%ecx),%edx;");
    asm("loc_6B65F5A: add $4,%esp;");
    asm("loc_6B65F5D: inc %esi;");
    asm("loc_6B65F5E: mov %esi,(%ecx);");
    asm("loc_6B65F60: mov (%ebx),%eax;");
    asm("loc_6B65F62: add %eax,%edx;");
    asm("loc_6B65F64: mov 0x10(%ecx),%eax;");
    asm("loc_6B65F67: mov %edx,0x18(%ecx);");
    asm("loc_6B65F6A: mov (%ebx),%ebx;");
    asm("loc_6B65F6C: cmp %eax,%ebx;");
    asm("loc_6B65F6E: jbe loc_6B65F73;");
    asm("loc_6B65F70: mov %ebx,0x10(%ecx);");
    asm("loc_6B65F73: mov 0x18(%ecx),%eax;");
    asm("loc_6B65F76: xor %edx,%edx;");
    asm("loc_6B65F78: div %esi;");
    asm("loc_6B65F7A: pop %edi;");
    asm("loc_6B65F7B: pop %esi;");
    asm("loc_6B65F7C: pop %ebp;");
    asm("loc_6B65F7D: pop %ebx;");
    asm("loc_6B65F7E: mov %eax,8(%ecx);");
    asm("loc_6B65F81: xor %eax,%eax;");
    asm("loc_6B65F83: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B65F90() // _sub_6B65F90
{
    __DEBUG_ASM(6B65F90);
    // chunk 0x6B65F90 _sub_6B65F90
    asm("loc_6B65F90: mov 8(%esp),%eax;");
    asm("loc_6B65F94: push %ebx;");
    asm("loc_6B65F95: push %ebp;");
    asm("loc_6B65F96: push %esi;");
    asm("loc_6B65F97: mov %ecx,%ebx;");
    asm("loc_6B65F99: mov 0x10(%esp),%ecx;");
    asm("loc_6B65F9D: lea 0x10(%ebx),%ebp;");
    asm("loc_6B65FA0: push %edi;");
    asm("loc_6B65FA1: push %ebp;");
    asm("loc_6B65FA2: push %eax;");
    asm("loc_6B65FA3: mov %ecx,8(%ebp);");
    asm("loc_6B65FA6: lea 0x18(%ebx),%esi;");
    asm("loc_6B65FA9: push %esi;");
    asm("loc_6B65FAA: mov %ebx,%ecx;");
    asm("loc_6B65FAC: mov %eax,4(%ebp);");
    asm("loc_6B65FAF: movl $0,(%ebp);");
    asm("loc_6B65FB6: movl $0,0xC(%ebp);");
    asm("loc_6B65FBD: call _sub_6B4E780;");
    asm("loc_6B65FC2: test %eax,%eax;");
    asm("loc_6B65FC4: mov %eax,0x1C(%ebx);");
    asm("loc_6B65FC7: je loc_6B65FD5;");
    asm("loc_6B65FC9: pop %edi;");
    asm("loc_6B65FCA: pop %esi;");
    asm("loc_6B65FCB: pop %ebp;");
    asm("loc_6B65FCC: mov $0x17,%eax;");
    asm("loc_6B65FD1: pop %ebx;");
    asm("loc_6B65FD2: ret $0xC;");
    asm("loc_6B65FD5: mov (%ebp),%edx;");
    asm("loc_6B65FD8: mov 4(%ebp),%ecx;");
    asm("loc_6B65FDB: add $4,%edx;");
    asm("loc_6B65FDE: mov %edx,%eax;");
    asm("loc_6B65FE0: cmp %ecx,%eax;");
    asm("loc_6B65FE2: mov %edx,(%ebp);");
    asm("loc_6B65FE5: mov $0x17,%edi;");
    asm("loc_6B65FEA: jbe loc_6B65FEF;");
    asm("loc_6B65FEC: mov %edi,0xC(%ebp);");
    asm("loc_6B65FEF: mov 0x1C(%ebx),%eax;");
    asm("loc_6B65FF2: test %eax,%eax;");
    asm("loc_6B65FF4: jne loc_6B66108;");
    asm("loc_6B65FFA: mov (%esi),%eax;");
    asm("loc_6B65FFC: mov (%eax),%edx;");
    asm("loc_6B65FFE: add $4,%eax;");
    asm("loc_6B66001: mov %eax,(%esi);");
    asm("loc_6B66003: mov %edx,0x24(%ebx);");
    asm("loc_6B66006: mov (%ebp),%eax;");
    asm("loc_6B66009: mov 4(%ebp),%ecx;");
    asm("loc_6B6600C: add %edx,%eax;");
    asm("loc_6B6600E: cmp %ecx,%eax;");
    asm("loc_6B66010: jbe loc_6B66015;");
    asm("loc_6B66012: mov %edi,0xC(%ebp);");
    asm("loc_6B66015: mov 0x1C(%ebx),%eax;");
    asm("loc_6B66018: test %eax,%eax;");
    asm("loc_6B6601A: jne loc_6B66108;");
    asm("loc_6B66020: mov 0x20(%ebx),%eax;");
    asm("loc_6B66023: test %eax,%eax;");
    asm("loc_6B66025: jne loc_6B6604B;");
    asm("loc_6B66027: mov 0x24(%ebx),%ecx;");
    asm("loc_6B6602A: inc %ecx;");
    asm("loc_6B6602B: push %ecx;");
    asm("loc_6B6602C: call _sub_6B6A134;");
    asm("loc_6B66031: add $4,%esp;");
    asm("loc_6B66034: test %eax,%eax;");
    asm("loc_6B66036: mov %eax,0x20(%ebx);");
    asm("loc_6B66039: jne loc_6B66047;");
    asm("loc_6B6603B: pop %edi;");
    asm("loc_6B6603C: pop %esi;");
    asm("loc_6B6603D: pop %ebp;");
    asm("loc_6B6603E: mov $5,%eax;");
    asm("loc_6B66043: pop %ebx;");
    asm("loc_6B66044: ret $0xC;");
    asm("loc_6B66047: movb $1,0x28(%ebx);");
    asm("loc_6B6604B: mov 0x24(%ebx),%edx;");
    asm("loc_6B6604E: mov (%ebp),%eax;");
    asm("loc_6B66051: mov 4(%ebp),%ecx;");
    asm("loc_6B66054: add %edx,%eax;");
    asm("loc_6B66056: cmp %ecx,%eax;");
    asm("loc_6B66058: mov %eax,(%ebp);");
    asm("loc_6B6605B: jbe loc_6B66060;");
    asm("loc_6B6605D: mov %edi,0xC(%ebp);");
    asm("loc_6B66060: mov 0x1C(%ebx),%eax;");
    asm("loc_6B66063: test %eax,%eax;");
    asm("loc_6B66065: jne loc_6B66108;");
    asm("loc_6B6606B: mov 0x24(%ebx),%eax;");
    asm("loc_6B6606E: mov (%esi),%esi;");
    asm("loc_6B66070: mov 0x20(%ebx),%edi;");
    asm("loc_6B66073: mov %eax,%ecx;");
    asm("loc_6B66075: mov %ecx,%edx;");
    asm("loc_6B66077: shr $2,%ecx;");
    asm("loc_6B6607A: mov %esi,0x14(%esp);");
    asm("loc_6B6607E: rep movsl (%esi),(%edi);");
    asm("loc_6B66080: mov %edx,%ecx;");
    asm("loc_6B66082: and $3,%ecx;");
    asm("loc_6B66085: rep movsb (%esi),(%edi);");
    asm("loc_6B66087: mov 0x14(%esp),%ecx;");
    asm("loc_6B6608B: mov 0x20(%ebx),%edx;");
    asm("loc_6B6608E: add %eax,%ecx;");
    asm("loc_6B66090: lea 0x18(%ebx),%eax;");
    asm("loc_6B66093: mov %ecx,(%eax);");
    asm("loc_6B66095: mov 0x24(%ebx),%ecx;");
    asm("loc_6B66098: movb $0,(%edx,%ecx);");
    asm("loc_6B6609C: mov 0x18(%esp),%edx;");
    asm("loc_6B660A0: push %ebp;");
    asm("loc_6B660A1: push %edx;");
    asm("loc_6B660A2: push %eax;");
    asm("loc_6B660A3: mov %ebx,%ecx;");
    asm("loc_6B660A5: call _sub_6B4E7A0;");
    asm("loc_6B660AA: test %eax,%eax;");
    asm("loc_6B660AC: mov %eax,0x1C(%ebx);");
    asm("loc_6B660AF: je loc_6B660BD;");
    asm("loc_6B660B1: pop %edi;");
    asm("loc_6B660B2: pop %esi;");
    asm("loc_6B660B3: pop %ebp;");
    asm("loc_6B660B4: mov $0x17,%eax;");
    asm("loc_6B660B9: pop %ebx;");
    asm("loc_6B660BA: ret $0xC;");
    asm("loc_6B660BD: mov (%ebp),%eax;");
    asm("loc_6B660C0: mov 0x1C(%esp),%ecx;");
    asm("loc_6B660C4: mov %eax,(%ecx);");
    asm("loc_6B660C6: mov 0xC(%ebx),%edx;");
    asm("loc_6B660C9: push %edx;");
    asm("loc_6B660CA: call _sub_6B4ECD0;");
    asm("loc_6B660CF: mov %eax,%ecx;");
    asm("loc_6B660D1: mov 4(%ecx),%esi;");
    asm("loc_6B660D4: mov 0x1C(%ecx),%ebx;");
    asm("loc_6B660D7: mov 0x14(%ecx),%edx;");
    asm("loc_6B660DA: add $4,%esp;");
    asm("loc_6B660DD: inc %esi;");
    asm("loc_6B660DE: mov %esi,4(%ecx);");
    asm("loc_6B660E1: mov (%ebp),%eax;");
    asm("loc_6B660E4: add $2,%eax;");
    asm("loc_6B660E7: add %eax,%ebx;");
    asm("loc_6B660E9: mov %ebx,0x1C(%ecx);");
    asm("loc_6B660EC: mov (%ebp),%ebp;");
    asm("loc_6B660EF: add $2,%edx;");
    asm("loc_6B660F2: cmp %edx,%ebp;");
    asm("loc_6B660F4: jbe loc_6B660FC;");
    asm("loc_6B660F6: add $2,%ebp;");
    asm("loc_6B660F9: mov %ebp,0x14(%ecx);");
    asm("loc_6B660FC: mov 0x1C(%ecx),%eax;");
    asm("loc_6B660FF: xor %edx,%edx;");
    asm("loc_6B66101: div %esi;");
    asm("loc_6B66103: mov %eax,0xC(%ecx);");
    asm("loc_6B66106: xor %eax,%eax;");
    asm("loc_6B66108: pop %edi;");
    asm("loc_6B66109: pop %esi;");
    asm("loc_6B6610A: pop %ebp;");
    asm("loc_6B6610B: pop %ebx;");
    asm("loc_6B6610C: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66110() // _sub_6B66110
{
    __DEBUG_ASM(6B66110);
    // chunk 0x6B66110 _sub_6B66110
    asm("loc_6B66110: mov _data_6B6EA08,%eax;");
    asm("loc_6B66115: mov %eax,_data_6B74540;");
    asm("loc_6B6611A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66120() // _sub_6B66120
{
    __DEBUG_ASM(6B66120);
    // chunk 0x6B66120 _sub_6B66120
    asm("loc_6B66120: mov _data_6B6EA08,%eax;");
    asm("loc_6B66125: mov %eax,_data_6B74544;");
    asm("loc_6B6612A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66130() // _sub_6B66130
{
    __DEBUG_ASM(6B66130);
    // chunk 0x6B66130 _sub_6B66130
    asm("loc_6B66130: mov _data_6B6EA0C,%eax;");
    asm("loc_6B66135: mov %eax,_data_6B7453C;");
    asm("loc_6B6613A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66140() // _sub_6B66140
{
    __DEBUG_ASM(6B66140);
    // chunk 0x6B66140 _sub_6B66140
    asm("loc_6B66140: mov 8(%esp),%eax;");
    asm("loc_6B66144: push %ebx;");
    asm("loc_6B66145: push %ebp;");
    asm("loc_6B66146: mov %ecx,%ebp;");
    asm("loc_6B66148: mov 0xC(%esp),%ecx;");
    asm("loc_6B6614C: lea 0x10(%ebp),%ebx;");
    asm("loc_6B6614F: push %esi;");
    asm("loc_6B66150: mov %eax,4(%ebx);");
    asm("loc_6B66153: mov (%ecx),%edx;");
    asm("loc_6B66155: push %edi;");
    asm("loc_6B66156: mov %edx,8(%ebx);");
    asm("loc_6B66159: movl $0,(%ebx);");
    asm("loc_6B6615F: movl $0,0xC(%ebx);");
    asm("loc_6B66166: mov 0x14(%ebp),%eax;");
    asm("loc_6B66169: push %ebx;");
    asm("loc_6B6616A: push %eax;");
    asm("loc_6B6616B: lea 0x18(%ebp),%esi;");
    asm("loc_6B6616E: push %esi;");
    asm("loc_6B6616F: mov %ebp,%ecx;");
    asm("loc_6B66171: call _sub_6B4E740;");
    asm("loc_6B66176: test %eax,%eax;");
    asm("loc_6B66178: mov %eax,0x1C(%ebp);");
    asm("loc_6B6617B: je loc_6B66189;");
    asm("loc_6B6617D: pop %edi;");
    asm("loc_6B6617E: pop %esi;");
    asm("loc_6B6617F: pop %ebp;");
    asm("loc_6B66180: mov $0x16,%eax;");
    asm("loc_6B66185: pop %ebx;");
    asm("loc_6B66186: ret $0xC;");
    asm("loc_6B66189: mov (%ebx),%edx;");
    asm("loc_6B6618B: mov 4(%ebx),%ecx;");
    asm("loc_6B6618E: add $4,%edx;");
    asm("loc_6B66191: mov %edx,%eax;");
    asm("loc_6B66193: cmp %ecx,%eax;");
    asm("loc_6B66195: mov %edx,(%ebx);");
    asm("loc_6B66197: jbe loc_6B661A0;");
    asm("loc_6B66199: movl $0x16,0xC(%ebx);");
    asm("loc_6B661A0: mov 0x1C(%ebp),%eax;");
    asm("loc_6B661A3: test %eax,%eax;");
    asm("loc_6B661A5: je loc_6B661B3;");
    asm("loc_6B661A7: pop %edi;");
    asm("loc_6B661A8: pop %esi;");
    asm("loc_6B661A9: pop %ebp;");
    asm("loc_6B661AA: mov $0x16,%eax;");
    asm("loc_6B661AF: pop %ebx;");
    asm("loc_6B661B0: ret $0xC;");
    asm("loc_6B661B3: mov (%esi),%eax;");
    asm("loc_6B661B5: mov 0x24(%ebp),%ecx;");
    asm("loc_6B661B8: mov %ecx,(%eax);");
    asm("loc_6B661BA: mov 0x24(%ebp),%edx;");
    asm("loc_6B661BD: add $4,%eax;");
    asm("loc_6B661C0: mov %eax,(%esi);");
    asm("loc_6B661C2: mov (%ebx),%edi;");
    asm("loc_6B661C4: mov 4(%ebx),%ecx;");
    asm("loc_6B661C7: add %edx,%edi;");
    asm("loc_6B661C9: mov %edi,%eax;");
    asm("loc_6B661CB: cmp %ecx,%eax;");
    asm("loc_6B661CD: mov %edi,(%ebx);");
    asm("loc_6B661CF: jbe loc_6B661D8;");
    asm("loc_6B661D1: movl $0x16,0xC(%ebx);");
    asm("loc_6B661D8: mov 0x1C(%ebp),%eax;");
    asm("loc_6B661DB: test %eax,%eax;");
    asm("loc_6B661DD: je loc_6B661EB;");
    asm("loc_6B661DF: pop %edi;");
    asm("loc_6B661E0: pop %esi;");
    asm("loc_6B661E1: pop %ebp;");
    asm("loc_6B661E2: mov $0x16,%eax;");
    asm("loc_6B661E7: pop %ebx;");
    asm("loc_6B661E8: ret $0xC;");
    asm("loc_6B661EB: mov 0x24(%ebp),%eax;");
    asm("loc_6B661EE: mov (%esi),%edi;");
    asm("loc_6B661F0: mov 0x20(%ebp),%esi;");
    asm("loc_6B661F3: mov %eax,%ecx;");
    asm("loc_6B661F5: mov %ecx,%edx;");
    asm("loc_6B661F7: shr $2,%ecx;");
    asm("loc_6B661FA: mov %edi,0x18(%esp);");
    asm("loc_6B661FE: rep movsl (%esi),(%edi);");
    asm("loc_6B66200: mov %edx,%ecx;");
    asm("loc_6B66202: and $3,%ecx;");
    asm("loc_6B66205: rep movsb (%esi),(%edi);");
    asm("loc_6B66207: mov 0x18(%esp),%ecx;");
    asm("loc_6B6620B: mov 0x14(%ebp),%edx;");
    asm("loc_6B6620E: add %eax,%ecx;");
    asm("loc_6B66210: push %ebx;");
    asm("loc_6B66211: lea 0x18(%ebp),%eax;");
    asm("loc_6B66214: push %edx;");
    asm("loc_6B66215: mov %ecx,(%eax);");
    asm("loc_6B66217: push %eax;");
    asm("loc_6B66218: mov %ebp,%ecx;");
    asm("loc_6B6621A: call _sub_6B4E790;");
    asm("loc_6B6621F: test %eax,%eax;");
    asm("loc_6B66221: mov %eax,0x1C(%ebp);");
    asm("loc_6B66224: je loc_6B66232;");
    asm("loc_6B66226: pop %edi;");
    asm("loc_6B66227: pop %esi;");
    asm("loc_6B66228: pop %ebp;");
    asm("loc_6B66229: mov $0x16,%eax;");
    asm("loc_6B6622E: pop %ebx;");
    asm("loc_6B6622F: ret $0xC;");
    asm("loc_6B66232: mov (%ebx),%eax;");
    asm("loc_6B66234: mov 0x1C(%esp),%ecx;");
    asm("loc_6B66238: mov %eax,(%ecx);");
    asm("loc_6B6623A: mov 0xC(%ebp),%edx;");
    asm("loc_6B6623D: push %edx;");
    asm("loc_6B6623E: call _sub_6B4ECD0;");
    asm("loc_6B66243: mov %eax,%ecx;");
    asm("loc_6B66245: mov (%ecx),%esi;");
    asm("loc_6B66247: mov 0x18(%ecx),%edx;");
    asm("loc_6B6624A: add $4,%esp;");
    asm("loc_6B6624D: inc %esi;");
    asm("loc_6B6624E: mov %esi,(%ecx);");
    asm("loc_6B66250: mov (%ebx),%eax;");
    asm("loc_6B66252: add %eax,%edx;");
    asm("loc_6B66254: mov 0x10(%ecx),%eax;");
    asm("loc_6B66257: mov %edx,0x18(%ecx);");
    asm("loc_6B6625A: mov (%ebx),%ebx;");
    asm("loc_6B6625C: cmp %eax,%ebx;");
    asm("loc_6B6625E: jbe loc_6B66263;");
    asm("loc_6B66260: mov %ebx,0x10(%ecx);");
    asm("loc_6B66263: mov 0x18(%ecx),%eax;");
    asm("loc_6B66266: xor %edx,%edx;");
    asm("loc_6B66268: div %esi;");
    asm("loc_6B6626A: pop %edi;");
    asm("loc_6B6626B: pop %esi;");
    asm("loc_6B6626C: pop %ebp;");
    asm("loc_6B6626D: pop %ebx;");
    asm("loc_6B6626E: mov %eax,8(%ecx);");
    asm("loc_6B66271: xor %eax,%eax;");
    asm("loc_6B66273: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66280() // _sub_6B66280
{
    __DEBUG_ASM(6B66280);
    // chunk 0x6B66280 _sub_6B66280
    asm("loc_6B66280: mov 8(%esp),%eax;");
    asm("loc_6B66284: push %ebx;");
    asm("loc_6B66285: push %ebp;");
    asm("loc_6B66286: push %esi;");
    asm("loc_6B66287: mov %ecx,%ebx;");
    asm("loc_6B66289: mov 0x10(%esp),%ecx;");
    asm("loc_6B6628D: lea 0x10(%ebx),%ebp;");
    asm("loc_6B66290: push %edi;");
    asm("loc_6B66291: push %ebp;");
    asm("loc_6B66292: push %eax;");
    asm("loc_6B66293: mov %ecx,8(%ebp);");
    asm("loc_6B66296: lea 0x18(%ebx),%esi;");
    asm("loc_6B66299: push %esi;");
    asm("loc_6B6629A: mov %ebx,%ecx;");
    asm("loc_6B6629C: mov %eax,4(%ebp);");
    asm("loc_6B6629F: movl $0,(%ebp);");
    asm("loc_6B662A6: movl $0,0xC(%ebp);");
    asm("loc_6B662AD: call _sub_6B4E780;");
    asm("loc_6B662B2: test %eax,%eax;");
    asm("loc_6B662B4: mov %eax,0x1C(%ebx);");
    asm("loc_6B662B7: je loc_6B662C5;");
    asm("loc_6B662B9: pop %edi;");
    asm("loc_6B662BA: pop %esi;");
    asm("loc_6B662BB: pop %ebp;");
    asm("loc_6B662BC: mov $0x17,%eax;");
    asm("loc_6B662C1: pop %ebx;");
    asm("loc_6B662C2: ret $0xC;");
    asm("loc_6B662C5: mov (%ebp),%edx;");
    asm("loc_6B662C8: mov 4(%ebp),%ecx;");
    asm("loc_6B662CB: add $4,%edx;");
    asm("loc_6B662CE: mov %edx,%eax;");
    asm("loc_6B662D0: cmp %ecx,%eax;");
    asm("loc_6B662D2: mov %edx,(%ebp);");
    asm("loc_6B662D5: mov $0x17,%edi;");
    asm("loc_6B662DA: jbe loc_6B662DF;");
    asm("loc_6B662DC: mov %edi,0xC(%ebp);");
    asm("loc_6B662DF: mov 0x1C(%ebx),%eax;");
    asm("loc_6B662E2: test %eax,%eax;");
    asm("loc_6B662E4: jne loc_6B663ED;");
    asm("loc_6B662EA: mov (%esi),%eax;");
    asm("loc_6B662EC: mov (%eax),%edx;");
    asm("loc_6B662EE: add $4,%eax;");
    asm("loc_6B662F1: mov %eax,(%esi);");
    asm("loc_6B662F3: mov %edx,0x24(%ebx);");
    asm("loc_6B662F6: mov (%ebp),%eax;");
    asm("loc_6B662F9: mov 4(%ebp),%ecx;");
    asm("loc_6B662FC: add %edx,%eax;");
    asm("loc_6B662FE: cmp %ecx,%eax;");
    asm("loc_6B66300: jbe loc_6B66305;");
    asm("loc_6B66302: mov %edi,0xC(%ebp);");
    asm("loc_6B66305: mov 0x1C(%ebx),%eax;");
    asm("loc_6B66308: test %eax,%eax;");
    asm("loc_6B6630A: jne loc_6B663ED;");
    asm("loc_6B66310: mov 0x20(%ebx),%eax;");
    asm("loc_6B66313: test %eax,%eax;");
    asm("loc_6B66315: jne loc_6B6633A;");
    asm("loc_6B66317: mov 0x24(%ebx),%ecx;");
    asm("loc_6B6631A: push %ecx;");
    asm("loc_6B6631B: call _sub_6B6A134;");
    asm("loc_6B66320: add $4,%esp;");
    asm("loc_6B66323: test %eax,%eax;");
    asm("loc_6B66325: mov %eax,0x20(%ebx);");
    asm("loc_6B66328: jne loc_6B66336;");
    asm("loc_6B6632A: pop %edi;");
    asm("loc_6B6632B: pop %esi;");
    asm("loc_6B6632C: pop %ebp;");
    asm("loc_6B6632D: mov $5,%eax;");
    asm("loc_6B66332: pop %ebx;");
    asm("loc_6B66333: ret $0xC;");
    asm("loc_6B66336: movb $1,0x28(%ebx);");
    asm("loc_6B6633A: mov 0x24(%ebx),%edx;");
    asm("loc_6B6633D: mov (%ebp),%eax;");
    asm("loc_6B66340: mov 4(%ebp),%ecx;");
    asm("loc_6B66343: add %edx,%eax;");
    asm("loc_6B66345: cmp %ecx,%eax;");
    asm("loc_6B66347: mov %eax,(%ebp);");
    asm("loc_6B6634A: jbe loc_6B6634F;");
    asm("loc_6B6634C: mov %edi,0xC(%ebp);");
    asm("loc_6B6634F: mov 0x1C(%ebx),%eax;");
    asm("loc_6B66352: test %eax,%eax;");
    asm("loc_6B66354: jne loc_6B663ED;");
    asm("loc_6B6635A: mov 0x24(%ebx),%eax;");
    asm("loc_6B6635D: mov (%esi),%esi;");
    asm("loc_6B6635F: mov 0x20(%ebx),%edi;");
    asm("loc_6B66362: mov %eax,%ecx;");
    asm("loc_6B66364: mov %ecx,%edx;");
    asm("loc_6B66366: shr $2,%ecx;");
    asm("loc_6B66369: mov %esi,0x14(%esp);");
    asm("loc_6B6636D: rep movsl (%esi),(%edi);");
    asm("loc_6B6636F: mov %edx,%ecx;");
    asm("loc_6B66371: mov 0x18(%esp),%edx;");
    asm("loc_6B66375: and $3,%ecx;");
    asm("loc_6B66378: rep movsb (%esi),(%edi);");
    asm("loc_6B6637A: mov 0x14(%esp),%ecx;");
    asm("loc_6B6637E: add %eax,%ecx;");
    asm("loc_6B66380: push %ebp;");
    asm("loc_6B66381: lea 0x18(%ebx),%eax;");
    asm("loc_6B66384: push %edx;");
    asm("loc_6B66385: mov %ecx,(%eax);");
    asm("loc_6B66387: push %eax;");
    asm("loc_6B66388: mov %ebx,%ecx;");
    asm("loc_6B6638A: call _sub_6B4E7A0;");
    asm("loc_6B6638F: test %eax,%eax;");
    asm("loc_6B66391: mov %eax,0x1C(%ebx);");
    asm("loc_6B66394: je loc_6B663A2;");
    asm("loc_6B66396: pop %edi;");
    asm("loc_6B66397: pop %esi;");
    asm("loc_6B66398: pop %ebp;");
    asm("loc_6B66399: mov $0x17,%eax;");
    asm("loc_6B6639E: pop %ebx;");
    asm("loc_6B6639F: ret $0xC;");
    asm("loc_6B663A2: mov (%ebp),%eax;");
    asm("loc_6B663A5: mov 0x1C(%esp),%ecx;");
    asm("loc_6B663A9: mov %eax,(%ecx);");
    asm("loc_6B663AB: mov 0xC(%ebx),%edx;");
    asm("loc_6B663AE: push %edx;");
    asm("loc_6B663AF: call _sub_6B4ECD0;");
    asm("loc_6B663B4: mov %eax,%ecx;");
    asm("loc_6B663B6: mov 4(%ecx),%esi;");
    asm("loc_6B663B9: mov 0x1C(%ecx),%ebx;");
    asm("loc_6B663BC: mov 0x14(%ecx),%edx;");
    asm("loc_6B663BF: add $4,%esp;");
    asm("loc_6B663C2: inc %esi;");
    asm("loc_6B663C3: mov %esi,4(%ecx);");
    asm("loc_6B663C6: mov (%ebp),%eax;");
    asm("loc_6B663C9: add $2,%eax;");
    asm("loc_6B663CC: add %eax,%ebx;");
    asm("loc_6B663CE: mov %ebx,0x1C(%ecx);");
    asm("loc_6B663D1: mov (%ebp),%ebp;");
    asm("loc_6B663D4: add $2,%edx;");
    asm("loc_6B663D7: cmp %edx,%ebp;");
    asm("loc_6B663D9: jbe loc_6B663E1;");
    asm("loc_6B663DB: add $2,%ebp;");
    asm("loc_6B663DE: mov %ebp,0x14(%ecx);");
    asm("loc_6B663E1: mov 0x1C(%ecx),%eax;");
    asm("loc_6B663E4: xor %edx,%edx;");
    asm("loc_6B663E6: div %esi;");
    asm("loc_6B663E8: mov %eax,0xC(%ecx);");
    asm("loc_6B663EB: xor %eax,%eax;");
    asm("loc_6B663ED: pop %edi;");
    asm("loc_6B663EE: pop %esi;");
    asm("loc_6B663EF: pop %ebp;");
    asm("loc_6B663F0: pop %ebx;");
    asm("loc_6B663F1: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66400() // _sub_6B66400
{
    __DEBUG_ASM(6B66400);
    // chunk 0x6B66400 _sub_6B66400
    asm("loc_6B66400: mov _data_6B6EA14,%eax;");
    asm("loc_6B66405: mov %eax,_data_6B74550;");
    asm("loc_6B6640A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66410() // _sub_6B66410
{
    __DEBUG_ASM(6B66410);
    // chunk 0x6B66410 _sub_6B66410
    asm("loc_6B66410: mov _data_6B6EA14,%eax;");
    asm("loc_6B66415: mov %eax,_data_6B74554;");
    asm("loc_6B6641A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66420() // _sub_6B66420
{
    __DEBUG_ASM(6B66420);
    // chunk 0x6B66420 _sub_6B66420
    asm("loc_6B66420: mov _data_6B6EA18,%eax;");
    asm("loc_6B66425: mov %eax,_data_6B7454C;");
    asm("loc_6B6642A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66430() // _sub_6B66430
{
    __DEBUG_ASM(6B66430);
    // chunk 0x6B66430 _sub_6B66430
    asm("loc_6B66430: mov 8(%esp),%eax;");
    asm("loc_6B66434: push %ebx;");
    asm("loc_6B66435: push %ebp;");
    asm("loc_6B66436: mov %ecx,%ebp;");
    asm("loc_6B66438: mov 0xC(%esp),%ecx;");
    asm("loc_6B6643C: lea 0x10(%ebp),%ebx;");
    asm("loc_6B6643F: push %esi;");
    asm("loc_6B66440: mov %eax,4(%ebx);");
    asm("loc_6B66443: mov (%ecx),%edx;");
    asm("loc_6B66445: push %edi;");
    asm("loc_6B66446: mov %edx,8(%ebx);");
    asm("loc_6B66449: movl $0,(%ebx);");
    asm("loc_6B6644F: movl $0,0xC(%ebx);");
    asm("loc_6B66456: mov 0x14(%ebp),%eax;");
    asm("loc_6B66459: push %ebx;");
    asm("loc_6B6645A: push %eax;");
    asm("loc_6B6645B: lea 0x18(%ebp),%esi;");
    asm("loc_6B6645E: push %esi;");
    asm("loc_6B6645F: mov %ebp,%ecx;");
    asm("loc_6B66461: call _sub_6B4E740;");
    asm("loc_6B66466: test %eax,%eax;");
    asm("loc_6B66468: mov %eax,0x1C(%ebp);");
    asm("loc_6B6646B: je loc_6B66479;");
    asm("loc_6B6646D: pop %edi;");
    asm("loc_6B6646E: pop %esi;");
    asm("loc_6B6646F: pop %ebp;");
    asm("loc_6B66470: mov $0x16,%eax;");
    asm("loc_6B66475: pop %ebx;");
    asm("loc_6B66476: ret $0xC;");
    asm("loc_6B66479: mov (%ebx),%edx;");
    asm("loc_6B6647B: mov 4(%ebx),%ecx;");
    asm("loc_6B6647E: add $4,%edx;");
    asm("loc_6B66481: mov %edx,%eax;");
    asm("loc_6B66483: cmp %ecx,%eax;");
    asm("loc_6B66485: mov %edx,(%ebx);");
    asm("loc_6B66487: jbe loc_6B66490;");
    asm("loc_6B66489: movl $0x16,0xC(%ebx);");
    asm("loc_6B66490: mov 0x1C(%ebp),%eax;");
    asm("loc_6B66493: test %eax,%eax;");
    asm("loc_6B66495: je loc_6B664A3;");
    asm("loc_6B66497: pop %edi;");
    asm("loc_6B66498: pop %esi;");
    asm("loc_6B66499: pop %ebp;");
    asm("loc_6B6649A: mov $0x16,%eax;");
    asm("loc_6B6649F: pop %ebx;");
    asm("loc_6B664A0: ret $0xC;");
    asm("loc_6B664A3: mov (%esi),%eax;");
    asm("loc_6B664A5: mov 0x24(%ebp),%ecx;");
    asm("loc_6B664A8: mov %ecx,(%eax);");
    asm("loc_6B664AA: mov 0x24(%ebp),%edx;");
    asm("loc_6B664AD: add $4,%eax;");
    asm("loc_6B664B0: mov %eax,(%esi);");
    asm("loc_6B664B2: mov (%ebx),%edi;");
    asm("loc_6B664B4: mov 4(%ebx),%ecx;");
    asm("loc_6B664B7: add %edx,%edi;");
    asm("loc_6B664B9: mov %edi,%eax;");
    asm("loc_6B664BB: cmp %ecx,%eax;");
    asm("loc_6B664BD: mov %edi,(%ebx);");
    asm("loc_6B664BF: jbe loc_6B664C8;");
    asm("loc_6B664C1: movl $0x16,0xC(%ebx);");
    asm("loc_6B664C8: mov 0x1C(%ebp),%eax;");
    asm("loc_6B664CB: test %eax,%eax;");
    asm("loc_6B664CD: je loc_6B664DB;");
    asm("loc_6B664CF: pop %edi;");
    asm("loc_6B664D0: pop %esi;");
    asm("loc_6B664D1: pop %ebp;");
    asm("loc_6B664D2: mov $0x16,%eax;");
    asm("loc_6B664D7: pop %ebx;");
    asm("loc_6B664D8: ret $0xC;");
    asm("loc_6B664DB: mov 0x24(%ebp),%eax;");
    asm("loc_6B664DE: mov (%esi),%edi;");
    asm("loc_6B664E0: mov 0x20(%ebp),%esi;");
    asm("loc_6B664E3: mov %eax,%ecx;");
    asm("loc_6B664E5: mov %ecx,%edx;");
    asm("loc_6B664E7: shr $2,%ecx;");
    asm("loc_6B664EA: mov %edi,0x18(%esp);");
    asm("loc_6B664EE: rep movsl (%esi),(%edi);");
    asm("loc_6B664F0: mov %edx,%ecx;");
    asm("loc_6B664F2: and $3,%ecx;");
    asm("loc_6B664F5: rep movsb (%esi),(%edi);");
    asm("loc_6B664F7: mov 0x18(%esp),%ecx;");
    asm("loc_6B664FB: mov 0x14(%ebp),%edx;");
    asm("loc_6B664FE: add %eax,%ecx;");
    asm("loc_6B66500: push %ebx;");
    asm("loc_6B66501: lea 0x18(%ebp),%eax;");
    asm("loc_6B66504: push %edx;");
    asm("loc_6B66505: mov %ecx,(%eax);");
    asm("loc_6B66507: push %eax;");
    asm("loc_6B66508: mov %ebp,%ecx;");
    asm("loc_6B6650A: call _sub_6B4E790;");
    asm("loc_6B6650F: test %eax,%eax;");
    asm("loc_6B66511: mov %eax,0x1C(%ebp);");
    asm("loc_6B66514: je loc_6B66522;");
    asm("loc_6B66516: pop %edi;");
    asm("loc_6B66517: pop %esi;");
    asm("loc_6B66518: pop %ebp;");
    asm("loc_6B66519: mov $0x16,%eax;");
    asm("loc_6B6651E: pop %ebx;");
    asm("loc_6B6651F: ret $0xC;");
    asm("loc_6B66522: mov (%ebx),%eax;");
    asm("loc_6B66524: mov 0x1C(%esp),%ecx;");
    asm("loc_6B66528: mov %eax,(%ecx);");
    asm("loc_6B6652A: mov 0xC(%ebp),%edx;");
    asm("loc_6B6652D: push %edx;");
    asm("loc_6B6652E: call _sub_6B4ECD0;");
    asm("loc_6B66533: mov %eax,%ecx;");
    asm("loc_6B66535: mov (%ecx),%esi;");
    asm("loc_6B66537: mov 0x18(%ecx),%edx;");
    asm("loc_6B6653A: add $4,%esp;");
    asm("loc_6B6653D: inc %esi;");
    asm("loc_6B6653E: mov %esi,(%ecx);");
    asm("loc_6B66540: mov (%ebx),%eax;");
    asm("loc_6B66542: add %eax,%edx;");
    asm("loc_6B66544: mov 0x10(%ecx),%eax;");
    asm("loc_6B66547: mov %edx,0x18(%ecx);");
    asm("loc_6B6654A: mov (%ebx),%ebx;");
    asm("loc_6B6654C: cmp %eax,%ebx;");
    asm("loc_6B6654E: jbe loc_6B66553;");
    asm("loc_6B66550: mov %ebx,0x10(%ecx);");
    asm("loc_6B66553: mov 0x18(%ecx),%eax;");
    asm("loc_6B66556: xor %edx,%edx;");
    asm("loc_6B66558: div %esi;");
    asm("loc_6B6655A: pop %edi;");
    asm("loc_6B6655B: pop %esi;");
    asm("loc_6B6655C: pop %ebp;");
    asm("loc_6B6655D: pop %ebx;");
    asm("loc_6B6655E: mov %eax,8(%ecx);");
    asm("loc_6B66561: xor %eax,%eax;");
    asm("loc_6B66563: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66570() // _sub_6B66570
{
    __DEBUG_ASM(6B66570);
    // chunk 0x6B66570 _sub_6B66570
    asm("loc_6B66570: mov 8(%esp),%eax;");
    asm("loc_6B66574: push %ebx;");
    asm("loc_6B66575: push %ebp;");
    asm("loc_6B66576: push %esi;");
    asm("loc_6B66577: mov %ecx,%ebx;");
    asm("loc_6B66579: mov 0x10(%esp),%ecx;");
    asm("loc_6B6657D: lea 0x10(%ebx),%ebp;");
    asm("loc_6B66580: push %edi;");
    asm("loc_6B66581: push %ebp;");
    asm("loc_6B66582: push %eax;");
    asm("loc_6B66583: mov %ecx,8(%ebp);");
    asm("loc_6B66586: lea 0x18(%ebx),%esi;");
    asm("loc_6B66589: push %esi;");
    asm("loc_6B6658A: mov %ebx,%ecx;");
    asm("loc_6B6658C: mov %eax,4(%ebp);");
    asm("loc_6B6658F: movl $0,(%ebp);");
    asm("loc_6B66596: movl $0,0xC(%ebp);");
    asm("loc_6B6659D: call _sub_6B4E780;");
    asm("loc_6B665A2: test %eax,%eax;");
    asm("loc_6B665A4: mov %eax,0x1C(%ebx);");
    asm("loc_6B665A7: je loc_6B665B5;");
    asm("loc_6B665A9: pop %edi;");
    asm("loc_6B665AA: pop %esi;");
    asm("loc_6B665AB: pop %ebp;");
    asm("loc_6B665AC: mov $0x17,%eax;");
    asm("loc_6B665B1: pop %ebx;");
    asm("loc_6B665B2: ret $0xC;");
    asm("loc_6B665B5: mov (%ebp),%edx;");
    asm("loc_6B665B8: mov 4(%ebp),%ecx;");
    asm("loc_6B665BB: add $4,%edx;");
    asm("loc_6B665BE: mov %edx,%eax;");
    asm("loc_6B665C0: cmp %ecx,%eax;");
    asm("loc_6B665C2: mov %edx,(%ebp);");
    asm("loc_6B665C5: mov $0x17,%edi;");
    asm("loc_6B665CA: jbe loc_6B665CF;");
    asm("loc_6B665CC: mov %edi,0xC(%ebp);");
    asm("loc_6B665CF: mov 0x1C(%ebx),%eax;");
    asm("loc_6B665D2: test %eax,%eax;");
    asm("loc_6B665D4: jne loc_6B666DD;");
    asm("loc_6B665DA: mov (%esi),%eax;");
    asm("loc_6B665DC: mov (%eax),%edx;");
    asm("loc_6B665DE: add $4,%eax;");
    asm("loc_6B665E1: mov %eax,(%esi);");
    asm("loc_6B665E3: mov %edx,0x24(%ebx);");
    asm("loc_6B665E6: mov (%ebp),%eax;");
    asm("loc_6B665E9: mov 4(%ebp),%ecx;");
    asm("loc_6B665EC: add %edx,%eax;");
    asm("loc_6B665EE: cmp %ecx,%eax;");
    asm("loc_6B665F0: jbe loc_6B665F5;");
    asm("loc_6B665F2: mov %edi,0xC(%ebp);");
    asm("loc_6B665F5: mov 0x1C(%ebx),%eax;");
    asm("loc_6B665F8: test %eax,%eax;");
    asm("loc_6B665FA: jne loc_6B666DD;");
    asm("loc_6B66600: mov 0x20(%ebx),%eax;");
    asm("loc_6B66603: test %eax,%eax;");
    asm("loc_6B66605: jne loc_6B6662A;");
    asm("loc_6B66607: mov 0x24(%ebx),%ecx;");
    asm("loc_6B6660A: push %ecx;");
    asm("loc_6B6660B: call _sub_6B6A134;");
    asm("loc_6B66610: add $4,%esp;");
    asm("loc_6B66613: test %eax,%eax;");
    asm("loc_6B66615: mov %eax,0x20(%ebx);");
    asm("loc_6B66618: jne loc_6B66626;");
    asm("loc_6B6661A: pop %edi;");
    asm("loc_6B6661B: pop %esi;");
    asm("loc_6B6661C: pop %ebp;");
    asm("loc_6B6661D: mov $5,%eax;");
    asm("loc_6B66622: pop %ebx;");
    asm("loc_6B66623: ret $0xC;");
    asm("loc_6B66626: movb $1,0x28(%ebx);");
    asm("loc_6B6662A: mov 0x24(%ebx),%edx;");
    asm("loc_6B6662D: mov (%ebp),%eax;");
    asm("loc_6B66630: mov 4(%ebp),%ecx;");
    asm("loc_6B66633: add %edx,%eax;");
    asm("loc_6B66635: cmp %ecx,%eax;");
    asm("loc_6B66637: mov %eax,(%ebp);");
    asm("loc_6B6663A: jbe loc_6B6663F;");
    asm("loc_6B6663C: mov %edi,0xC(%ebp);");
    asm("loc_6B6663F: mov 0x1C(%ebx),%eax;");
    asm("loc_6B66642: test %eax,%eax;");
    asm("loc_6B66644: jne loc_6B666DD;");
    asm("loc_6B6664A: mov 0x24(%ebx),%eax;");
    asm("loc_6B6664D: mov (%esi),%esi;");
    asm("loc_6B6664F: mov 0x20(%ebx),%edi;");
    asm("loc_6B66652: mov %eax,%ecx;");
    asm("loc_6B66654: mov %ecx,%edx;");
    asm("loc_6B66656: shr $2,%ecx;");
    asm("loc_6B66659: mov %esi,0x14(%esp);");
    asm("loc_6B6665D: rep movsl (%esi),(%edi);");
    asm("loc_6B6665F: mov %edx,%ecx;");
    asm("loc_6B66661: mov 0x18(%esp),%edx;");
    asm("loc_6B66665: and $3,%ecx;");
    asm("loc_6B66668: rep movsb (%esi),(%edi);");
    asm("loc_6B6666A: mov 0x14(%esp),%ecx;");
    asm("loc_6B6666E: add %eax,%ecx;");
    asm("loc_6B66670: push %ebp;");
    asm("loc_6B66671: lea 0x18(%ebx),%eax;");
    asm("loc_6B66674: push %edx;");
    asm("loc_6B66675: mov %ecx,(%eax);");
    asm("loc_6B66677: push %eax;");
    asm("loc_6B66678: mov %ebx,%ecx;");
    asm("loc_6B6667A: call _sub_6B4E7A0;");
    asm("loc_6B6667F: test %eax,%eax;");
    asm("loc_6B66681: mov %eax,0x1C(%ebx);");
    asm("loc_6B66684: je loc_6B66692;");
    asm("loc_6B66686: pop %edi;");
    asm("loc_6B66687: pop %esi;");
    asm("loc_6B66688: pop %ebp;");
    asm("loc_6B66689: mov $0x17,%eax;");
    asm("loc_6B6668E: pop %ebx;");
    asm("loc_6B6668F: ret $0xC;");
    asm("loc_6B66692: mov (%ebp),%eax;");
    asm("loc_6B66695: mov 0x1C(%esp),%ecx;");
    asm("loc_6B66699: mov %eax,(%ecx);");
    asm("loc_6B6669B: mov 0xC(%ebx),%edx;");
    asm("loc_6B6669E: push %edx;");
    asm("loc_6B6669F: call _sub_6B4ECD0;");
    asm("loc_6B666A4: mov %eax,%ecx;");
    asm("loc_6B666A6: mov 4(%ecx),%esi;");
    asm("loc_6B666A9: mov 0x1C(%ecx),%ebx;");
    asm("loc_6B666AC: mov 0x14(%ecx),%edx;");
    asm("loc_6B666AF: add $4,%esp;");
    asm("loc_6B666B2: inc %esi;");
    asm("loc_6B666B3: mov %esi,4(%ecx);");
    asm("loc_6B666B6: mov (%ebp),%eax;");
    asm("loc_6B666B9: add $2,%eax;");
    asm("loc_6B666BC: add %eax,%ebx;");
    asm("loc_6B666BE: mov %ebx,0x1C(%ecx);");
    asm("loc_6B666C1: mov (%ebp),%ebp;");
    asm("loc_6B666C4: add $2,%edx;");
    asm("loc_6B666C7: cmp %edx,%ebp;");
    asm("loc_6B666C9: jbe loc_6B666D1;");
    asm("loc_6B666CB: add $2,%ebp;");
    asm("loc_6B666CE: mov %ebp,0x14(%ecx);");
    asm("loc_6B666D1: mov 0x1C(%ecx),%eax;");
    asm("loc_6B666D4: xor %edx,%edx;");
    asm("loc_6B666D6: div %esi;");
    asm("loc_6B666D8: mov %eax,0xC(%ecx);");
    asm("loc_6B666DB: xor %eax,%eax;");
    asm("loc_6B666DD: pop %edi;");
    asm("loc_6B666DE: pop %esi;");
    asm("loc_6B666DF: pop %ebp;");
    asm("loc_6B666E0: pop %ebx;");
    asm("loc_6B666E1: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B666F0() // _sub_6B666F0
{
    __DEBUG_ASM(6B666F0);
    // chunk 0x6B666F0 _sub_6B666F0
    asm("loc_6B666F0: mov _data_6B6EA20,%eax;");
    asm("loc_6B666F5: mov %eax,_data_6B74560;");
    asm("loc_6B666FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66700() // _sub_6B66700
{
    __DEBUG_ASM(6B66700);
    // chunk 0x6B66700 _sub_6B66700
    asm("loc_6B66700: mov _data_6B6EA20,%eax;");
    asm("loc_6B66705: mov %eax,_data_6B74564;");
    asm("loc_6B6670A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66710() // _sub_6B66710
{
    __DEBUG_ASM(6B66710);
    // chunk 0x6B66710 _sub_6B66710
    asm("loc_6B66710: mov _data_6B6EA24,%eax;");
    asm("loc_6B66715: mov %eax,_data_6B7455C;");
    asm("loc_6B6671A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66720() // _sub_6B66720
{
    __DEBUG_ASM(6B66720);
    // chunk 0x6B66720 _sub_6B66720
    asm("loc_6B66720: mov 8(%esp),%eax;");
    asm("loc_6B66724: push %ebx;");
    asm("loc_6B66725: push %ebp;");
    asm("loc_6B66726: mov %ecx,%ebp;");
    asm("loc_6B66728: mov 0xC(%esp),%ecx;");
    asm("loc_6B6672C: lea 0x10(%ebp),%ebx;");
    asm("loc_6B6672F: push %esi;");
    asm("loc_6B66730: mov %eax,4(%ebx);");
    asm("loc_6B66733: mov (%ecx),%edx;");
    asm("loc_6B66735: push %edi;");
    asm("loc_6B66736: mov %edx,8(%ebx);");
    asm("loc_6B66739: movl $0,(%ebx);");
    asm("loc_6B6673F: movl $0,0xC(%ebx);");
    asm("loc_6B66746: mov 0x14(%ebp),%eax;");
    asm("loc_6B66749: push %ebx;");
    asm("loc_6B6674A: push %eax;");
    asm("loc_6B6674B: lea 0x18(%ebp),%esi;");
    asm("loc_6B6674E: push %esi;");
    asm("loc_6B6674F: mov %ebp,%ecx;");
    asm("loc_6B66751: call _sub_6B4E740;");
    asm("loc_6B66756: test %eax,%eax;");
    asm("loc_6B66758: mov %eax,0x1C(%ebp);");
    asm("loc_6B6675B: je loc_6B66769;");
    asm("loc_6B6675D: pop %edi;");
    asm("loc_6B6675E: pop %esi;");
    asm("loc_6B6675F: pop %ebp;");
    asm("loc_6B66760: mov $0x16,%eax;");
    asm("loc_6B66765: pop %ebx;");
    asm("loc_6B66766: ret $0xC;");
    asm("loc_6B66769: mov (%ebx),%edx;");
    asm("loc_6B6676B: mov 4(%ebx),%ecx;");
    asm("loc_6B6676E: add $4,%edx;");
    asm("loc_6B66771: mov %edx,%eax;");
    asm("loc_6B66773: cmp %ecx,%eax;");
    asm("loc_6B66775: mov %edx,(%ebx);");
    asm("loc_6B66777: jbe loc_6B66780;");
    asm("loc_6B66779: movl $0x16,0xC(%ebx);");
    asm("loc_6B66780: mov 0x1C(%ebp),%eax;");
    asm("loc_6B66783: test %eax,%eax;");
    asm("loc_6B66785: je loc_6B66793;");
    asm("loc_6B66787: pop %edi;");
    asm("loc_6B66788: pop %esi;");
    asm("loc_6B66789: pop %ebp;");
    asm("loc_6B6678A: mov $0x16,%eax;");
    asm("loc_6B6678F: pop %ebx;");
    asm("loc_6B66790: ret $0xC;");
    asm("loc_6B66793: mov (%esi),%eax;");
    asm("loc_6B66795: mov 0x24(%ebp),%ecx;");
    asm("loc_6B66798: mov %ecx,(%eax);");
    asm("loc_6B6679A: mov 0x24(%ebp),%edx;");
    asm("loc_6B6679D: add $4,%eax;");
    asm("loc_6B667A0: mov %eax,(%esi);");
    asm("loc_6B667A2: mov (%ebx),%edi;");
    asm("loc_6B667A4: mov 4(%ebx),%ecx;");
    asm("loc_6B667A7: add %edx,%edi;");
    asm("loc_6B667A9: mov %edi,%eax;");
    asm("loc_6B667AB: cmp %ecx,%eax;");
    asm("loc_6B667AD: mov %edi,(%ebx);");
    asm("loc_6B667AF: jbe loc_6B667B8;");
    asm("loc_6B667B1: movl $0x16,0xC(%ebx);");
    asm("loc_6B667B8: mov 0x1C(%ebp),%eax;");
    asm("loc_6B667BB: test %eax,%eax;");
    asm("loc_6B667BD: je loc_6B667CB;");
    asm("loc_6B667BF: pop %edi;");
    asm("loc_6B667C0: pop %esi;");
    asm("loc_6B667C1: pop %ebp;");
    asm("loc_6B667C2: mov $0x16,%eax;");
    asm("loc_6B667C7: pop %ebx;");
    asm("loc_6B667C8: ret $0xC;");
    asm("loc_6B667CB: mov 0x24(%ebp),%eax;");
    asm("loc_6B667CE: mov (%esi),%edi;");
    asm("loc_6B667D0: mov 0x20(%ebp),%esi;");
    asm("loc_6B667D3: mov %eax,%ecx;");
    asm("loc_6B667D5: mov %ecx,%edx;");
    asm("loc_6B667D7: shr $2,%ecx;");
    asm("loc_6B667DA: mov %edi,0x18(%esp);");
    asm("loc_6B667DE: rep movsl (%esi),(%edi);");
    asm("loc_6B667E0: mov %edx,%ecx;");
    asm("loc_6B667E2: and $3,%ecx;");
    asm("loc_6B667E5: rep movsb (%esi),(%edi);");
    asm("loc_6B667E7: mov 0x18(%esp),%ecx;");
    asm("loc_6B667EB: mov 0x14(%ebp),%edx;");
    asm("loc_6B667EE: add %eax,%ecx;");
    asm("loc_6B667F0: push %ebx;");
    asm("loc_6B667F1: lea 0x18(%ebp),%eax;");
    asm("loc_6B667F4: push %edx;");
    asm("loc_6B667F5: mov %ecx,(%eax);");
    asm("loc_6B667F7: push %eax;");
    asm("loc_6B667F8: mov %ebp,%ecx;");
    asm("loc_6B667FA: call _sub_6B4E790;");
    asm("loc_6B667FF: test %eax,%eax;");
    asm("loc_6B66801: mov %eax,0x1C(%ebp);");
    asm("loc_6B66804: je loc_6B66812;");
    asm("loc_6B66806: pop %edi;");
    asm("loc_6B66807: pop %esi;");
    asm("loc_6B66808: pop %ebp;");
    asm("loc_6B66809: mov $0x16,%eax;");
    asm("loc_6B6680E: pop %ebx;");
    asm("loc_6B6680F: ret $0xC;");
    asm("loc_6B66812: mov (%ebx),%eax;");
    asm("loc_6B66814: mov 0x1C(%esp),%ecx;");
    asm("loc_6B66818: mov %eax,(%ecx);");
    asm("loc_6B6681A: mov 0xC(%ebp),%edx;");
    asm("loc_6B6681D: push %edx;");
    asm("loc_6B6681E: call _sub_6B4ECD0;");
    asm("loc_6B66823: mov %eax,%ecx;");
    asm("loc_6B66825: mov (%ecx),%esi;");
    asm("loc_6B66827: mov 0x18(%ecx),%edx;");
    asm("loc_6B6682A: add $4,%esp;");
    asm("loc_6B6682D: inc %esi;");
    asm("loc_6B6682E: mov %esi,(%ecx);");
    asm("loc_6B66830: mov (%ebx),%eax;");
    asm("loc_6B66832: add %eax,%edx;");
    asm("loc_6B66834: mov 0x10(%ecx),%eax;");
    asm("loc_6B66837: mov %edx,0x18(%ecx);");
    asm("loc_6B6683A: mov (%ebx),%ebx;");
    asm("loc_6B6683C: cmp %eax,%ebx;");
    asm("loc_6B6683E: jbe loc_6B66843;");
    asm("loc_6B66840: mov %ebx,0x10(%ecx);");
    asm("loc_6B66843: mov 0x18(%ecx),%eax;");
    asm("loc_6B66846: xor %edx,%edx;");
    asm("loc_6B66848: div %esi;");
    asm("loc_6B6684A: pop %edi;");
    asm("loc_6B6684B: pop %esi;");
    asm("loc_6B6684C: pop %ebp;");
    asm("loc_6B6684D: pop %ebx;");
    asm("loc_6B6684E: mov %eax,8(%ecx);");
    asm("loc_6B66851: xor %eax,%eax;");
    asm("loc_6B66853: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66860() // _sub_6B66860
{
    __DEBUG_ASM(6B66860);
    // chunk 0x6B66860 _sub_6B66860
    asm("loc_6B66860: mov 8(%esp),%eax;");
    asm("loc_6B66864: push %ebx;");
    asm("loc_6B66865: push %ebp;");
    asm("loc_6B66866: push %esi;");
    asm("loc_6B66867: mov %ecx,%ebx;");
    asm("loc_6B66869: mov 0x10(%esp),%ecx;");
    asm("loc_6B6686D: lea 0x10(%ebx),%ebp;");
    asm("loc_6B66870: push %edi;");
    asm("loc_6B66871: push %ebp;");
    asm("loc_6B66872: push %eax;");
    asm("loc_6B66873: mov %ecx,8(%ebp);");
    asm("loc_6B66876: lea 0x18(%ebx),%esi;");
    asm("loc_6B66879: push %esi;");
    asm("loc_6B6687A: mov %ebx,%ecx;");
    asm("loc_6B6687C: mov %eax,4(%ebp);");
    asm("loc_6B6687F: movl $0,(%ebp);");
    asm("loc_6B66886: movl $0,0xC(%ebp);");
    asm("loc_6B6688D: call _sub_6B4E780;");
    asm("loc_6B66892: test %eax,%eax;");
    asm("loc_6B66894: mov %eax,0x1C(%ebx);");
    asm("loc_6B66897: je loc_6B668A5;");
    asm("loc_6B66899: pop %edi;");
    asm("loc_6B6689A: pop %esi;");
    asm("loc_6B6689B: pop %ebp;");
    asm("loc_6B6689C: mov $0x17,%eax;");
    asm("loc_6B668A1: pop %ebx;");
    asm("loc_6B668A2: ret $0xC;");
    asm("loc_6B668A5: mov (%ebp),%edx;");
    asm("loc_6B668A8: mov 4(%ebp),%ecx;");
    asm("loc_6B668AB: add $4,%edx;");
    asm("loc_6B668AE: mov %edx,%eax;");
    asm("loc_6B668B0: cmp %ecx,%eax;");
    asm("loc_6B668B2: mov %edx,(%ebp);");
    asm("loc_6B668B5: mov $0x17,%edi;");
    asm("loc_6B668BA: jbe loc_6B668BF;");
    asm("loc_6B668BC: mov %edi,0xC(%ebp);");
    asm("loc_6B668BF: mov 0x1C(%ebx),%eax;");
    asm("loc_6B668C2: test %eax,%eax;");
    asm("loc_6B668C4: jne loc_6B669CD;");
    asm("loc_6B668CA: mov (%esi),%eax;");
    asm("loc_6B668CC: mov (%eax),%edx;");
    asm("loc_6B668CE: add $4,%eax;");
    asm("loc_6B668D1: mov %eax,(%esi);");
    asm("loc_6B668D3: mov %edx,0x24(%ebx);");
    asm("loc_6B668D6: mov (%ebp),%eax;");
    asm("loc_6B668D9: mov 4(%ebp),%ecx;");
    asm("loc_6B668DC: add %edx,%eax;");
    asm("loc_6B668DE: cmp %ecx,%eax;");
    asm("loc_6B668E0: jbe loc_6B668E5;");
    asm("loc_6B668E2: mov %edi,0xC(%ebp);");
    asm("loc_6B668E5: mov 0x1C(%ebx),%eax;");
    asm("loc_6B668E8: test %eax,%eax;");
    asm("loc_6B668EA: jne loc_6B669CD;");
    asm("loc_6B668F0: mov 0x20(%ebx),%eax;");
    asm("loc_6B668F3: test %eax,%eax;");
    asm("loc_6B668F5: jne loc_6B6691A;");
    asm("loc_6B668F7: mov 0x24(%ebx),%ecx;");
    asm("loc_6B668FA: push %ecx;");
    asm("loc_6B668FB: call _sub_6B6A134;");
    asm("loc_6B66900: add $4,%esp;");
    asm("loc_6B66903: test %eax,%eax;");
    asm("loc_6B66905: mov %eax,0x20(%ebx);");
    asm("loc_6B66908: jne loc_6B66916;");
    asm("loc_6B6690A: pop %edi;");
    asm("loc_6B6690B: pop %esi;");
    asm("loc_6B6690C: pop %ebp;");
    asm("loc_6B6690D: mov $5,%eax;");
    asm("loc_6B66912: pop %ebx;");
    asm("loc_6B66913: ret $0xC;");
    asm("loc_6B66916: movb $1,0x28(%ebx);");
    asm("loc_6B6691A: mov 0x24(%ebx),%edx;");
    asm("loc_6B6691D: mov (%ebp),%eax;");
    asm("loc_6B66920: mov 4(%ebp),%ecx;");
    asm("loc_6B66923: add %edx,%eax;");
    asm("loc_6B66925: cmp %ecx,%eax;");
    asm("loc_6B66927: mov %eax,(%ebp);");
    asm("loc_6B6692A: jbe loc_6B6692F;");
    asm("loc_6B6692C: mov %edi,0xC(%ebp);");
    asm("loc_6B6692F: mov 0x1C(%ebx),%eax;");
    asm("loc_6B66932: test %eax,%eax;");
    asm("loc_6B66934: jne loc_6B669CD;");
    asm("loc_6B6693A: mov 0x24(%ebx),%eax;");
    asm("loc_6B6693D: mov (%esi),%esi;");
    asm("loc_6B6693F: mov 0x20(%ebx),%edi;");
    asm("loc_6B66942: mov %eax,%ecx;");
    asm("loc_6B66944: mov %ecx,%edx;");
    asm("loc_6B66946: shr $2,%ecx;");
    asm("loc_6B66949: mov %esi,0x14(%esp);");
    asm("loc_6B6694D: rep movsl (%esi),(%edi);");
    asm("loc_6B6694F: mov %edx,%ecx;");
    asm("loc_6B66951: mov 0x18(%esp),%edx;");
    asm("loc_6B66955: and $3,%ecx;");
    asm("loc_6B66958: rep movsb (%esi),(%edi);");
    asm("loc_6B6695A: mov 0x14(%esp),%ecx;");
    asm("loc_6B6695E: add %eax,%ecx;");
    asm("loc_6B66960: push %ebp;");
    asm("loc_6B66961: lea 0x18(%ebx),%eax;");
    asm("loc_6B66964: push %edx;");
    asm("loc_6B66965: mov %ecx,(%eax);");
    asm("loc_6B66967: push %eax;");
    asm("loc_6B66968: mov %ebx,%ecx;");
    asm("loc_6B6696A: call _sub_6B4E7A0;");
    asm("loc_6B6696F: test %eax,%eax;");
    asm("loc_6B66971: mov %eax,0x1C(%ebx);");
    asm("loc_6B66974: je loc_6B66982;");
    asm("loc_6B66976: pop %edi;");
    asm("loc_6B66977: pop %esi;");
    asm("loc_6B66978: pop %ebp;");
    asm("loc_6B66979: mov $0x17,%eax;");
    asm("loc_6B6697E: pop %ebx;");
    asm("loc_6B6697F: ret $0xC;");
    asm("loc_6B66982: mov (%ebp),%eax;");
    asm("loc_6B66985: mov 0x1C(%esp),%ecx;");
    asm("loc_6B66989: mov %eax,(%ecx);");
    asm("loc_6B6698B: mov 0xC(%ebx),%edx;");
    asm("loc_6B6698E: push %edx;");
    asm("loc_6B6698F: call _sub_6B4ECD0;");
    asm("loc_6B66994: mov %eax,%ecx;");
    asm("loc_6B66996: mov 4(%ecx),%esi;");
    asm("loc_6B66999: mov 0x1C(%ecx),%ebx;");
    asm("loc_6B6699C: mov 0x14(%ecx),%edx;");
    asm("loc_6B6699F: add $4,%esp;");
    asm("loc_6B669A2: inc %esi;");
    asm("loc_6B669A3: mov %esi,4(%ecx);");
    asm("loc_6B669A6: mov (%ebp),%eax;");
    asm("loc_6B669A9: add $2,%eax;");
    asm("loc_6B669AC: add %eax,%ebx;");
    asm("loc_6B669AE: mov %ebx,0x1C(%ecx);");
    asm("loc_6B669B1: mov (%ebp),%ebp;");
    asm("loc_6B669B4: add $2,%edx;");
    asm("loc_6B669B7: cmp %edx,%ebp;");
    asm("loc_6B669B9: jbe loc_6B669C1;");
    asm("loc_6B669BB: add $2,%ebp;");
    asm("loc_6B669BE: mov %ebp,0x14(%ecx);");
    asm("loc_6B669C1: mov 0x1C(%ecx),%eax;");
    asm("loc_6B669C4: xor %edx,%edx;");
    asm("loc_6B669C6: div %esi;");
    asm("loc_6B669C8: mov %eax,0xC(%ecx);");
    asm("loc_6B669CB: xor %eax,%eax;");
    asm("loc_6B669CD: pop %edi;");
    asm("loc_6B669CE: pop %esi;");
    asm("loc_6B669CF: pop %ebp;");
    asm("loc_6B669D0: pop %ebx;");
    asm("loc_6B669D1: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B669E0() // _sub_6B669E0
{
    __DEBUG_ASM(6B669E0);
    // chunk 0x6B669E0 _sub_6B669E0
    asm("loc_6B669E0: mov _data_6B6EA2C,%eax;");
    asm("loc_6B669E5: mov %eax,_data_6B74570;");
    asm("loc_6B669EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B669F0() // _sub_6B669F0
{
    __DEBUG_ASM(6B669F0);
    // chunk 0x6B669F0 _sub_6B669F0
    asm("loc_6B669F0: mov _data_6B6EA2C,%eax;");
    asm("loc_6B669F5: mov %eax,_data_6B74574;");
    asm("loc_6B669FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66A00() // _sub_6B66A00
{
    __DEBUG_ASM(6B66A00);
    // chunk 0x6B66A00 _sub_6B66A00
    asm("loc_6B66A00: mov _data_6B6EA30,%eax;");
    asm("loc_6B66A05: mov %eax,_data_6B7456C;");
    asm("loc_6B66A0A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66A10() // _sub_6B66A10
{
    __DEBUG_ASM(6B66A10);
    // chunk 0x6B66A10 _sub_6B66A10
    asm("loc_6B66A10: mov 8(%esp),%eax;");
    asm("loc_6B66A14: push %ebx;");
    asm("loc_6B66A15: push %ebp;");
    asm("loc_6B66A16: mov %ecx,%ebp;");
    asm("loc_6B66A18: mov 0xC(%esp),%ecx;");
    asm("loc_6B66A1C: lea 0x10(%ebp),%ebx;");
    asm("loc_6B66A1F: push %esi;");
    asm("loc_6B66A20: mov %eax,4(%ebx);");
    asm("loc_6B66A23: mov (%ecx),%edx;");
    asm("loc_6B66A25: push %edi;");
    asm("loc_6B66A26: mov %edx,8(%ebx);");
    asm("loc_6B66A29: movl $0,(%ebx);");
    asm("loc_6B66A2F: movl $0,0xC(%ebx);");
    asm("loc_6B66A36: mov 0x14(%ebp),%eax;");
    asm("loc_6B66A39: push %ebx;");
    asm("loc_6B66A3A: push %eax;");
    asm("loc_6B66A3B: lea 0x18(%ebp),%esi;");
    asm("loc_6B66A3E: push %esi;");
    asm("loc_6B66A3F: mov %ebp,%ecx;");
    asm("loc_6B66A41: call _sub_6B4E740;");
    asm("loc_6B66A46: test %eax,%eax;");
    asm("loc_6B66A48: mov %eax,0x1C(%ebp);");
    asm("loc_6B66A4B: je loc_6B66A59;");
    asm("loc_6B66A4D: pop %edi;");
    asm("loc_6B66A4E: pop %esi;");
    asm("loc_6B66A4F: pop %ebp;");
    asm("loc_6B66A50: mov $0x16,%eax;");
    asm("loc_6B66A55: pop %ebx;");
    asm("loc_6B66A56: ret $0xC;");
    asm("loc_6B66A59: mov (%ebx),%edx;");
    asm("loc_6B66A5B: mov 4(%ebx),%ecx;");
    asm("loc_6B66A5E: add $4,%edx;");
    asm("loc_6B66A61: mov %edx,%eax;");
    asm("loc_6B66A63: cmp %ecx,%eax;");
    asm("loc_6B66A65: mov %edx,(%ebx);");
    asm("loc_6B66A67: jbe loc_6B66A70;");
    asm("loc_6B66A69: movl $0x16,0xC(%ebx);");
    asm("loc_6B66A70: mov 0x1C(%ebp),%eax;");
    asm("loc_6B66A73: test %eax,%eax;");
    asm("loc_6B66A75: je loc_6B66A83;");
    asm("loc_6B66A77: pop %edi;");
    asm("loc_6B66A78: pop %esi;");
    asm("loc_6B66A79: pop %ebp;");
    asm("loc_6B66A7A: mov $0x16,%eax;");
    asm("loc_6B66A7F: pop %ebx;");
    asm("loc_6B66A80: ret $0xC;");
    asm("loc_6B66A83: mov (%esi),%eax;");
    asm("loc_6B66A85: mov 0x20(%ebp),%ecx;");
    asm("loc_6B66A88: mov %ecx,(%eax);");
    asm("loc_6B66A8A: mov 0x20(%ebp),%edx;");
    asm("loc_6B66A8D: add $4,%eax;");
    asm("loc_6B66A90: mov %eax,(%esi);");
    asm("loc_6B66A92: mov (%ebx),%edi;");
    asm("loc_6B66A94: mov 4(%ebx),%ecx;");
    asm("loc_6B66A97: add %edx,%edi;");
    asm("loc_6B66A99: mov %edi,%eax;");
    asm("loc_6B66A9B: cmp %ecx,%eax;");
    asm("loc_6B66A9D: mov %edi,(%ebx);");
    asm("loc_6B66A9F: jbe loc_6B66AA8;");
    asm("loc_6B66AA1: movl $0x16,0xC(%ebx);");
    asm("loc_6B66AA8: mov 0x1C(%ebp),%eax;");
    asm("loc_6B66AAB: test %eax,%eax;");
    asm("loc_6B66AAD: je loc_6B66ABB;");
    asm("loc_6B66AAF: pop %edi;");
    asm("loc_6B66AB0: pop %esi;");
    asm("loc_6B66AB1: pop %ebp;");
    asm("loc_6B66AB2: mov $0x16,%eax;");
    asm("loc_6B66AB7: pop %ebx;");
    asm("loc_6B66AB8: ret $0xC;");
    asm("loc_6B66ABB: mov 0x20(%ebp),%edx;");
    asm("loc_6B66ABE: mov (%esi),%edi;");
    asm("loc_6B66AC0: mov 0x24(%ebp),%esi;");
    asm("loc_6B66AC3: mov %edx,%ecx;");
    asm("loc_6B66AC5: mov %ecx,%eax;");
    asm("loc_6B66AC7: shr $2,%ecx;");
    asm("loc_6B66ACA: mov %edi,0x18(%esp);");
    asm("loc_6B66ACE: rep movsl (%esi),(%edi);");
    asm("loc_6B66AD0: mov %eax,%ecx;");
    asm("loc_6B66AD2: and $3,%ecx;");
    asm("loc_6B66AD5: rep movsb (%esi),(%edi);");
    asm("loc_6B66AD7: mov 0x18(%esp),%ecx;");
    asm("loc_6B66ADB: add %edx,%ecx;");
    asm("loc_6B66ADD: lea 0x18(%ebp),%edx;");
    asm("loc_6B66AE0: mov %ecx,(%edx);");
    asm("loc_6B66AE2: mov (%ebx),%esi;");
    asm("loc_6B66AE4: mov 4(%ebx),%ecx;");
    asm("loc_6B66AE7: add $4,%esi;");
    asm("loc_6B66AEA: mov %esi,%eax;");
    asm("loc_6B66AEC: cmp %ecx,%eax;");
    asm("loc_6B66AEE: mov %esi,(%ebx);");
    asm("loc_6B66AF0: jbe loc_6B66AF9;");
    asm("loc_6B66AF2: movl $0x16,0xC(%ebx);");
    asm("loc_6B66AF9: mov 0x1C(%ebp),%eax;");
    asm("loc_6B66AFC: test %eax,%eax;");
    asm("loc_6B66AFE: je loc_6B66B0C;");
    asm("loc_6B66B00: pop %edi;");
    asm("loc_6B66B01: pop %esi;");
    asm("loc_6B66B02: pop %ebp;");
    asm("loc_6B66B03: mov $0x16,%eax;");
    asm("loc_6B66B08: pop %ebx;");
    asm("loc_6B66B09: ret $0xC;");
    asm("loc_6B66B0C: mov (%edx),%eax;");
    asm("loc_6B66B0E: mov 0x28(%ebp),%ecx;");
    asm("loc_6B66B11: mov %ecx,(%eax);");
    asm("loc_6B66B13: add $4,%eax;");
    asm("loc_6B66B16: mov %eax,(%edx);");
    asm("loc_6B66B18: mov 0x20(%ebp),%eax;");
    asm("loc_6B66B1B: mov (%ebx),%esi;");
    asm("loc_6B66B1D: mov 4(%ebx),%ecx;");
    asm("loc_6B66B20: add %eax,%esi;");
    asm("loc_6B66B22: mov %esi,%eax;");
    asm("loc_6B66B24: cmp %ecx,%eax;");
    asm("loc_6B66B26: mov %esi,(%ebx);");
    asm("loc_6B66B28: jbe loc_6B66B31;");
    asm("loc_6B66B2A: movl $0x16,0xC(%ebx);");
    asm("loc_6B66B31: mov 0x1C(%ebp),%eax;");
    asm("loc_6B66B34: test %eax,%eax;");
    asm("loc_6B66B36: je loc_6B66B44;");
    asm("loc_6B66B38: pop %edi;");
    asm("loc_6B66B39: pop %esi;");
    asm("loc_6B66B3A: pop %ebp;");
    asm("loc_6B66B3B: mov $0x16,%eax;");
    asm("loc_6B66B40: pop %ebx;");
    asm("loc_6B66B41: ret $0xC;");
    asm("loc_6B66B44: mov 0x20(%ebp),%ecx;");
    asm("loc_6B66B47: mov (%edx),%edi;");
    asm("loc_6B66B49: mov 0x2C(%ebp),%esi;");
    asm("loc_6B66B4C: mov %ecx,0x14(%esp);");
    asm("loc_6B66B50: mov %ecx,%eax;");
    asm("loc_6B66B52: shr $2,%ecx;");
    asm("loc_6B66B55: mov %edi,0x18(%esp);");
    asm("loc_6B66B59: rep movsl (%esi),(%edi);");
    asm("loc_6B66B5B: mov %eax,%ecx;");
    asm("loc_6B66B5D: and $3,%ecx;");
    asm("loc_6B66B60: rep movsb (%esi),(%edi);");
    asm("loc_6B66B62: mov 0x18(%esp),%ecx;");
    asm("loc_6B66B66: add %eax,%ecx;");
    asm("loc_6B66B68: mov %ecx,(%edx);");
    asm("loc_6B66B6A: mov (%ebx),%esi;");
    asm("loc_6B66B6C: mov 4(%ebx),%ecx;");
    asm("loc_6B66B6F: add $4,%esi;");
    asm("loc_6B66B72: mov %esi,%eax;");
    asm("loc_6B66B74: cmp %ecx,%eax;");
    asm("loc_6B66B76: mov %esi,(%ebx);");
    asm("loc_6B66B78: jbe loc_6B66B81;");
    asm("loc_6B66B7A: movl $0x16,0xC(%ebx);");
    asm("loc_6B66B81: mov 0x1C(%ebp),%eax;");
    asm("loc_6B66B84: test %eax,%eax;");
    asm("loc_6B66B86: je loc_6B66B94;");
    asm("loc_6B66B88: pop %edi;");
    asm("loc_6B66B89: pop %esi;");
    asm("loc_6B66B8A: pop %ebp;");
    asm("loc_6B66B8B: mov $0x16,%eax;");
    asm("loc_6B66B90: pop %ebx;");
    asm("loc_6B66B91: ret $0xC;");
    asm("loc_6B66B94: mov (%edx),%eax;");
    asm("loc_6B66B96: mov 0x30(%ebp),%ecx;");
    asm("loc_6B66B99: mov %ecx,(%eax);");
    asm("loc_6B66B9B: add $4,%eax;");
    asm("loc_6B66B9E: mov %eax,(%edx);");
    asm("loc_6B66BA0: mov 0x14(%ebp),%eax;");
    asm("loc_6B66BA3: push %ebx;");
    asm("loc_6B66BA4: push %eax;");
    asm("loc_6B66BA5: push %edx;");
    asm("loc_6B66BA6: mov %ebp,%ecx;");
    asm("loc_6B66BA8: call _sub_6B4E790;");
    asm("loc_6B66BAD: test %eax,%eax;");
    asm("loc_6B66BAF: mov %eax,0x1C(%ebp);");
    asm("loc_6B66BB2: je loc_6B66BC0;");
    asm("loc_6B66BB4: pop %edi;");
    asm("loc_6B66BB5: pop %esi;");
    asm("loc_6B66BB6: pop %ebp;");
    asm("loc_6B66BB7: mov $0x16,%eax;");
    asm("loc_6B66BBC: pop %ebx;");
    asm("loc_6B66BBD: ret $0xC;");
    asm("loc_6B66BC0: mov (%ebx),%ecx;");
    asm("loc_6B66BC2: mov 0x1C(%esp),%edx;");
    asm("loc_6B66BC6: mov %ecx,(%edx);");
    asm("loc_6B66BC8: mov 0xC(%ebp),%eax;");
    asm("loc_6B66BCB: push %eax;");
    asm("loc_6B66BCC: call _sub_6B4ECD0;");
    asm("loc_6B66BD1: mov %eax,%ecx;");
    asm("loc_6B66BD3: mov (%ecx),%ebp;");
    asm("loc_6B66BD5: mov 0x18(%ecx),%edi;");
    asm("loc_6B66BD8: mov 0x10(%ecx),%eax;");
    asm("loc_6B66BDB: add $4,%esp;");
    asm("loc_6B66BDE: inc %ebp;");
    asm("loc_6B66BDF: mov %ebp,(%ecx);");
    asm("loc_6B66BE1: mov (%ebx),%edx;");
    asm("loc_6B66BE3: add %edx,%edi;");
    asm("loc_6B66BE5: mov %edi,0x18(%ecx);");
    asm("loc_6B66BE8: mov (%ebx),%ebx;");
    asm("loc_6B66BEA: cmp %eax,%ebx;");
    asm("loc_6B66BEC: mov %ebp,%esi;");
    asm("loc_6B66BEE: jbe loc_6B66BF3;");
    asm("loc_6B66BF0: mov %ebx,0x10(%ecx);");
    asm("loc_6B66BF3: mov 0x18(%ecx),%eax;");
    asm("loc_6B66BF6: xor %edx,%edx;");
    asm("loc_6B66BF8: div %esi;");
    asm("loc_6B66BFA: pop %edi;");
    asm("loc_6B66BFB: pop %esi;");
    asm("loc_6B66BFC: pop %ebp;");
    asm("loc_6B66BFD: pop %ebx;");
    asm("loc_6B66BFE: mov %eax,8(%ecx);");
    asm("loc_6B66C01: xor %eax,%eax;");
    asm("loc_6B66C03: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66C10() // _sub_6B66C10
{
    __DEBUG_ASM(6B66C10);
    // chunk 0x6B66C10 _sub_6B66C10
    asm("loc_6B66C10: mov 4(%esp),%eax;");
    asm("loc_6B66C14: push %ebx;");
    asm("loc_6B66C15: push %ebp;");
    asm("loc_6B66C16: mov 0x10(%esp),%ebp;");
    asm("loc_6B66C1A: push %esi;");
    asm("loc_6B66C1B: push %edi;");
    asm("loc_6B66C1C: mov %ecx,%edi;");
    asm("loc_6B66C1E: lea 0x10(%edi),%esi;");
    asm("loc_6B66C21: push %esi;");
    asm("loc_6B66C22: push %ebp;");
    asm("loc_6B66C23: lea 0x18(%edi),%ebx;");
    asm("loc_6B66C26: push %ebx;");
    asm("loc_6B66C27: mov %ebp,4(%esi);");
    asm("loc_6B66C2A: mov %eax,8(%esi);");
    asm("loc_6B66C2D: movl $0,(%esi);");
    asm("loc_6B66C33: movl $0,0xC(%esi);");
    asm("loc_6B66C3A: call _sub_6B4E780;");
    asm("loc_6B66C3F: test %eax,%eax;");
    asm("loc_6B66C41: mov %eax,0x1C(%edi);");
    asm("loc_6B66C44: je loc_6B66C52;");
    asm("loc_6B66C46: pop %edi;");
    asm("loc_6B66C47: pop %esi;");
    asm("loc_6B66C48: pop %ebp;");
    asm("loc_6B66C49: mov $0x17,%eax;");
    asm("loc_6B66C4E: pop %ebx;");
    asm("loc_6B66C4F: ret $0xC;");
    asm("loc_6B66C52: lea 0x20(%edi),%ecx;");
    asm("loc_6B66C55: push %ecx;");
    asm("loc_6B66C56: mov %edi,%ecx;");
    asm("loc_6B66C58: call _sub_6B4EB30;");
    asm("loc_6B66C5D: lea 0x28(%edi),%edx;");
    asm("loc_6B66C60: push %edx;");
    asm("loc_6B66C61: mov %edi,%ecx;");
    asm("loc_6B66C63: call _sub_6B4EB30;");
    asm("loc_6B66C68: mov (%esi),%edx;");
    asm("loc_6B66C6A: mov 4(%esi),%ecx;");
    asm("loc_6B66C6D: add $4,%edx;");
    asm("loc_6B66C70: mov %edx,%eax;");
    asm("loc_6B66C72: cmp %ecx,%eax;");
    asm("loc_6B66C74: mov %edx,(%esi);");
    asm("loc_6B66C76: jbe loc_6B66C7F;");
    asm("loc_6B66C78: movl $0x17,0xC(%esi);");
    asm("loc_6B66C7F: mov 0x1C(%edi),%eax;");
    asm("loc_6B66C82: test %eax,%eax;");
    asm("loc_6B66C84: jne loc_6B66CF9;");
    asm("loc_6B66C86: mov (%ebx),%eax;");
    asm("loc_6B66C88: mov (%eax),%ecx;");
    asm("loc_6B66C8A: push %esi;");
    asm("loc_6B66C8B: push %ebp;");
    asm("loc_6B66C8C: mov %ecx,0x30(%edi);");
    asm("loc_6B66C8F: add $4,%eax;");
    asm("loc_6B66C92: push %ebx;");
    asm("loc_6B66C93: mov %edi,%ecx;");
    asm("loc_6B66C95: mov %eax,(%ebx);");
    asm("loc_6B66C97: call _sub_6B4E7A0;");
    asm("loc_6B66C9C: test %eax,%eax;");
    asm("loc_6B66C9E: mov %eax,0x1C(%edi);");
    asm("loc_6B66CA1: je loc_6B66CAF;");
    asm("loc_6B66CA3: pop %edi;");
    asm("loc_6B66CA4: pop %esi;");
    asm("loc_6B66CA5: pop %ebp;");
    asm("loc_6B66CA6: mov $0x17,%eax;");
    asm("loc_6B66CAB: pop %ebx;");
    asm("loc_6B66CAC: ret $0xC;");
    asm("loc_6B66CAF: mov (%esi),%edx;");
    asm("loc_6B66CB1: mov 0x1C(%esp),%eax;");
    asm("loc_6B66CB5: mov %edx,(%eax);");
    asm("loc_6B66CB7: mov 0xC(%edi),%ecx;");
    asm("loc_6B66CBA: push %ecx;");
    asm("loc_6B66CBB: call _sub_6B4ECD0;");
    asm("loc_6B66CC0: mov %eax,%ecx;");
    asm("loc_6B66CC2: mov 4(%ecx),%edx;");
    asm("loc_6B66CC5: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B66CC8: mov 0x14(%ecx),%eax;");
    asm("loc_6B66CCB: add $4,%esp;");
    asm("loc_6B66CCE: inc %edx;");
    asm("loc_6B66CCF: mov %edx,4(%ecx);");
    asm("loc_6B66CD2: mov %edx,%edi;");
    asm("loc_6B66CD4: mov (%esi),%edx;");
    asm("loc_6B66CD6: add $2,%edx;");
    asm("loc_6B66CD9: add %edx,%ebp;");
    asm("loc_6B66CDB: mov %ebp,0x1C(%ecx);");
    asm("loc_6B66CDE: mov (%esi),%esi;");
    asm("loc_6B66CE0: add $2,%eax;");
    asm("loc_6B66CE3: cmp %eax,%esi;");
    asm("loc_6B66CE5: jbe loc_6B66CED;");
    asm("loc_6B66CE7: add $2,%esi;");
    asm("loc_6B66CEA: mov %esi,0x14(%ecx);");
    asm("loc_6B66CED: mov 0x1C(%ecx),%eax;");
    asm("loc_6B66CF0: xor %edx,%edx;");
    asm("loc_6B66CF2: div %edi;");
    asm("loc_6B66CF4: mov %eax,0xC(%ecx);");
    asm("loc_6B66CF7: xor %eax,%eax;");
    asm("loc_6B66CF9: pop %edi;");
    asm("loc_6B66CFA: pop %esi;");
    asm("loc_6B66CFB: pop %ebp;");
    asm("loc_6B66CFC: pop %ebx;");
    asm("loc_6B66CFD: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66D00() // _sub_6B66D00
{
    __DEBUG_ASM(6B66D00);
    // chunk 0x6B66D00 _sub_6B66D00
    asm("loc_6B66D00: mov _data_6B6EA38,%eax;");
    asm("loc_6B66D05: mov %eax,_data_6B74580;");
    asm("loc_6B66D0A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66D10() // _sub_6B66D10
{
    __DEBUG_ASM(6B66D10);
    // chunk 0x6B66D10 _sub_6B66D10
    asm("loc_6B66D10: mov _data_6B6EA38,%eax;");
    asm("loc_6B66D15: mov %eax,_data_6B74584;");
    asm("loc_6B66D1A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66D20() // _sub_6B66D20
{
    __DEBUG_ASM(6B66D20);
    // chunk 0x6B66D20 _sub_6B66D20
    asm("loc_6B66D20: mov _data_6B6EA3C,%eax;");
    asm("loc_6B66D25: mov %eax,_data_6B7457C;");
    asm("loc_6B66D2A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66D30() // _sub_6B66D30
{
    __DEBUG_ASM(6B66D30);
    // chunk 0x6B66D30 _sub_6B66D30
    asm("loc_6B66D30: mov 8(%esp),%eax;");
    asm("loc_6B66D34: push %ebx;");
    asm("loc_6B66D35: push %ebp;");
    asm("loc_6B66D36: mov %ecx,%ebp;");
    asm("loc_6B66D38: mov 0xC(%esp),%ecx;");
    asm("loc_6B66D3C: lea 0x10(%ebp),%ebx;");
    asm("loc_6B66D3F: push %esi;");
    asm("loc_6B66D40: mov %eax,4(%ebx);");
    asm("loc_6B66D43: mov (%ecx),%edx;");
    asm("loc_6B66D45: push %edi;");
    asm("loc_6B66D46: mov %edx,8(%ebx);");
    asm("loc_6B66D49: movl $0,(%ebx);");
    asm("loc_6B66D4F: movl $0,0xC(%ebx);");
    asm("loc_6B66D56: mov 0x14(%ebp),%eax;");
    asm("loc_6B66D59: push %ebx;");
    asm("loc_6B66D5A: push %eax;");
    asm("loc_6B66D5B: lea 0x18(%ebp),%esi;");
    asm("loc_6B66D5E: push %esi;");
    asm("loc_6B66D5F: mov %ebp,%ecx;");
    asm("loc_6B66D61: call _sub_6B4E740;");
    asm("loc_6B66D66: test %eax,%eax;");
    asm("loc_6B66D68: mov %eax,0x1C(%ebp);");
    asm("loc_6B66D6B: je loc_6B66D79;");
    asm("loc_6B66D6D: pop %edi;");
    asm("loc_6B66D6E: pop %esi;");
    asm("loc_6B66D6F: pop %ebp;");
    asm("loc_6B66D70: mov $0x16,%eax;");
    asm("loc_6B66D75: pop %ebx;");
    asm("loc_6B66D76: ret $0xC;");
    asm("loc_6B66D79: mov (%ebx),%edx;");
    asm("loc_6B66D7B: mov 4(%ebx),%ecx;");
    asm("loc_6B66D7E: add $4,%edx;");
    asm("loc_6B66D81: mov %edx,%eax;");
    asm("loc_6B66D83: cmp %ecx,%eax;");
    asm("loc_6B66D85: mov %edx,(%ebx);");
    asm("loc_6B66D87: jbe loc_6B66D90;");
    asm("loc_6B66D89: movl $0x16,0xC(%ebx);");
    asm("loc_6B66D90: mov 0x1C(%ebp),%eax;");
    asm("loc_6B66D93: test %eax,%eax;");
    asm("loc_6B66D95: je loc_6B66DA3;");
    asm("loc_6B66D97: pop %edi;");
    asm("loc_6B66D98: pop %esi;");
    asm("loc_6B66D99: pop %ebp;");
    asm("loc_6B66D9A: mov $0x16,%eax;");
    asm("loc_6B66D9F: pop %ebx;");
    asm("loc_6B66DA0: ret $0xC;");
    asm("loc_6B66DA3: mov (%esi),%eax;");
    asm("loc_6B66DA5: mov 0x24(%ebp),%ecx;");
    asm("loc_6B66DA8: mov %ecx,(%eax);");
    asm("loc_6B66DAA: mov 0x24(%ebp),%edx;");
    asm("loc_6B66DAD: add $4,%eax;");
    asm("loc_6B66DB0: mov %eax,(%esi);");
    asm("loc_6B66DB2: mov (%ebx),%edi;");
    asm("loc_6B66DB4: mov 4(%ebx),%ecx;");
    asm("loc_6B66DB7: add %edx,%edi;");
    asm("loc_6B66DB9: mov %edi,%eax;");
    asm("loc_6B66DBB: cmp %ecx,%eax;");
    asm("loc_6B66DBD: mov %edi,(%ebx);");
    asm("loc_6B66DBF: jbe loc_6B66DC8;");
    asm("loc_6B66DC1: movl $0x16,0xC(%ebx);");
    asm("loc_6B66DC8: mov 0x1C(%ebp),%eax;");
    asm("loc_6B66DCB: test %eax,%eax;");
    asm("loc_6B66DCD: je loc_6B66DDB;");
    asm("loc_6B66DCF: pop %edi;");
    asm("loc_6B66DD0: pop %esi;");
    asm("loc_6B66DD1: pop %ebp;");
    asm("loc_6B66DD2: mov $0x16,%eax;");
    asm("loc_6B66DD7: pop %ebx;");
    asm("loc_6B66DD8: ret $0xC;");
    asm("loc_6B66DDB: mov 0x24(%ebp),%eax;");
    asm("loc_6B66DDE: mov (%esi),%edi;");
    asm("loc_6B66DE0: mov 0x20(%ebp),%esi;");
    asm("loc_6B66DE3: mov %eax,%ecx;");
    asm("loc_6B66DE5: mov %ecx,%edx;");
    asm("loc_6B66DE7: shr $2,%ecx;");
    asm("loc_6B66DEA: mov %edi,0x18(%esp);");
    asm("loc_6B66DEE: rep movsl (%esi),(%edi);");
    asm("loc_6B66DF0: mov %edx,%ecx;");
    asm("loc_6B66DF2: and $3,%ecx;");
    asm("loc_6B66DF5: rep movsb (%esi),(%edi);");
    asm("loc_6B66DF7: mov 0x18(%esp),%ecx;");
    asm("loc_6B66DFB: mov 0x14(%ebp),%edx;");
    asm("loc_6B66DFE: add %eax,%ecx;");
    asm("loc_6B66E00: push %ebx;");
    asm("loc_6B66E01: lea 0x18(%ebp),%eax;");
    asm("loc_6B66E04: push %edx;");
    asm("loc_6B66E05: mov %ecx,(%eax);");
    asm("loc_6B66E07: push %eax;");
    asm("loc_6B66E08: mov %ebp,%ecx;");
    asm("loc_6B66E0A: call _sub_6B4E790;");
    asm("loc_6B66E0F: test %eax,%eax;");
    asm("loc_6B66E11: mov %eax,0x1C(%ebp);");
    asm("loc_6B66E14: je loc_6B66E22;");
    asm("loc_6B66E16: pop %edi;");
    asm("loc_6B66E17: pop %esi;");
    asm("loc_6B66E18: pop %ebp;");
    asm("loc_6B66E19: mov $0x16,%eax;");
    asm("loc_6B66E1E: pop %ebx;");
    asm("loc_6B66E1F: ret $0xC;");
    asm("loc_6B66E22: mov (%ebx),%eax;");
    asm("loc_6B66E24: mov 0x1C(%esp),%ecx;");
    asm("loc_6B66E28: mov %eax,(%ecx);");
    asm("loc_6B66E2A: mov 0xC(%ebp),%edx;");
    asm("loc_6B66E2D: push %edx;");
    asm("loc_6B66E2E: call _sub_6B4ECD0;");
    asm("loc_6B66E33: mov %eax,%ecx;");
    asm("loc_6B66E35: mov (%ecx),%esi;");
    asm("loc_6B66E37: mov 0x18(%ecx),%edx;");
    asm("loc_6B66E3A: add $4,%esp;");
    asm("loc_6B66E3D: inc %esi;");
    asm("loc_6B66E3E: mov %esi,(%ecx);");
    asm("loc_6B66E40: mov (%ebx),%eax;");
    asm("loc_6B66E42: add %eax,%edx;");
    asm("loc_6B66E44: mov 0x10(%ecx),%eax;");
    asm("loc_6B66E47: mov %edx,0x18(%ecx);");
    asm("loc_6B66E4A: mov (%ebx),%ebx;");
    asm("loc_6B66E4C: cmp %eax,%ebx;");
    asm("loc_6B66E4E: jbe loc_6B66E53;");
    asm("loc_6B66E50: mov %ebx,0x10(%ecx);");
    asm("loc_6B66E53: mov 0x18(%ecx),%eax;");
    asm("loc_6B66E56: xor %edx,%edx;");
    asm("loc_6B66E58: div %esi;");
    asm("loc_6B66E5A: pop %edi;");
    asm("loc_6B66E5B: pop %esi;");
    asm("loc_6B66E5C: pop %ebp;");
    asm("loc_6B66E5D: pop %ebx;");
    asm("loc_6B66E5E: mov %eax,8(%ecx);");
    asm("loc_6B66E61: xor %eax,%eax;");
    asm("loc_6B66E63: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66E70() // _sub_6B66E70
{
    __DEBUG_ASM(6B66E70);
    // chunk 0x6B66E70 _sub_6B66E70
    asm("loc_6B66E70: mov 8(%esp),%eax;");
    asm("loc_6B66E74: push %ebx;");
    asm("loc_6B66E75: push %ebp;");
    asm("loc_6B66E76: push %esi;");
    asm("loc_6B66E77: mov %ecx,%ebx;");
    asm("loc_6B66E79: mov 0x10(%esp),%ecx;");
    asm("loc_6B66E7D: lea 0x10(%ebx),%ebp;");
    asm("loc_6B66E80: push %edi;");
    asm("loc_6B66E81: push %ebp;");
    asm("loc_6B66E82: push %eax;");
    asm("loc_6B66E83: mov %ecx,8(%ebp);");
    asm("loc_6B66E86: lea 0x18(%ebx),%esi;");
    asm("loc_6B66E89: push %esi;");
    asm("loc_6B66E8A: mov %ebx,%ecx;");
    asm("loc_6B66E8C: mov %eax,4(%ebp);");
    asm("loc_6B66E8F: movl $0,(%ebp);");
    asm("loc_6B66E96: movl $0,0xC(%ebp);");
    asm("loc_6B66E9D: call _sub_6B4E780;");
    asm("loc_6B66EA2: test %eax,%eax;");
    asm("loc_6B66EA4: mov %eax,0x1C(%ebx);");
    asm("loc_6B66EA7: je loc_6B66EB5;");
    asm("loc_6B66EA9: pop %edi;");
    asm("loc_6B66EAA: pop %esi;");
    asm("loc_6B66EAB: pop %ebp;");
    asm("loc_6B66EAC: mov $0x17,%eax;");
    asm("loc_6B66EB1: pop %ebx;");
    asm("loc_6B66EB2: ret $0xC;");
    asm("loc_6B66EB5: mov (%ebp),%edx;");
    asm("loc_6B66EB8: mov 4(%ebp),%ecx;");
    asm("loc_6B66EBB: add $4,%edx;");
    asm("loc_6B66EBE: mov %edx,%eax;");
    asm("loc_6B66EC0: cmp %ecx,%eax;");
    asm("loc_6B66EC2: mov %edx,(%ebp);");
    asm("loc_6B66EC5: mov $0x17,%edi;");
    asm("loc_6B66ECA: jbe loc_6B66ECF;");
    asm("loc_6B66ECC: mov %edi,0xC(%ebp);");
    asm("loc_6B66ECF: mov 0x1C(%ebx),%eax;");
    asm("loc_6B66ED2: test %eax,%eax;");
    asm("loc_6B66ED4: jne loc_6B66FDD;");
    asm("loc_6B66EDA: mov (%esi),%eax;");
    asm("loc_6B66EDC: mov (%eax),%edx;");
    asm("loc_6B66EDE: add $4,%eax;");
    asm("loc_6B66EE1: mov %eax,(%esi);");
    asm("loc_6B66EE3: mov %edx,0x24(%ebx);");
    asm("loc_6B66EE6: mov (%ebp),%eax;");
    asm("loc_6B66EE9: mov 4(%ebp),%ecx;");
    asm("loc_6B66EEC: add %edx,%eax;");
    asm("loc_6B66EEE: cmp %ecx,%eax;");
    asm("loc_6B66EF0: jbe loc_6B66EF5;");
    asm("loc_6B66EF2: mov %edi,0xC(%ebp);");
    asm("loc_6B66EF5: mov 0x1C(%ebx),%eax;");
    asm("loc_6B66EF8: test %eax,%eax;");
    asm("loc_6B66EFA: jne loc_6B66FDD;");
    asm("loc_6B66F00: mov 0x20(%ebx),%eax;");
    asm("loc_6B66F03: test %eax,%eax;");
    asm("loc_6B66F05: jne loc_6B66F2A;");
    asm("loc_6B66F07: mov 0x24(%ebx),%ecx;");
    asm("loc_6B66F0A: push %ecx;");
    asm("loc_6B66F0B: call _sub_6B6A134;");
    asm("loc_6B66F10: add $4,%esp;");
    asm("loc_6B66F13: test %eax,%eax;");
    asm("loc_6B66F15: mov %eax,0x20(%ebx);");
    asm("loc_6B66F18: jne loc_6B66F26;");
    asm("loc_6B66F1A: pop %edi;");
    asm("loc_6B66F1B: pop %esi;");
    asm("loc_6B66F1C: pop %ebp;");
    asm("loc_6B66F1D: mov $5,%eax;");
    asm("loc_6B66F22: pop %ebx;");
    asm("loc_6B66F23: ret $0xC;");
    asm("loc_6B66F26: movb $1,0x28(%ebx);");
    asm("loc_6B66F2A: mov 0x24(%ebx),%edx;");
    asm("loc_6B66F2D: mov (%ebp),%eax;");
    asm("loc_6B66F30: mov 4(%ebp),%ecx;");
    asm("loc_6B66F33: add %edx,%eax;");
    asm("loc_6B66F35: cmp %ecx,%eax;");
    asm("loc_6B66F37: mov %eax,(%ebp);");
    asm("loc_6B66F3A: jbe loc_6B66F3F;");
    asm("loc_6B66F3C: mov %edi,0xC(%ebp);");
    asm("loc_6B66F3F: mov 0x1C(%ebx),%eax;");
    asm("loc_6B66F42: test %eax,%eax;");
    asm("loc_6B66F44: jne loc_6B66FDD;");
    asm("loc_6B66F4A: mov 0x24(%ebx),%eax;");
    asm("loc_6B66F4D: mov (%esi),%esi;");
    asm("loc_6B66F4F: mov 0x20(%ebx),%edi;");
    asm("loc_6B66F52: mov %eax,%ecx;");
    asm("loc_6B66F54: mov %ecx,%edx;");
    asm("loc_6B66F56: shr $2,%ecx;");
    asm("loc_6B66F59: mov %esi,0x14(%esp);");
    asm("loc_6B66F5D: rep movsl (%esi),(%edi);");
    asm("loc_6B66F5F: mov %edx,%ecx;");
    asm("loc_6B66F61: mov 0x18(%esp),%edx;");
    asm("loc_6B66F65: and $3,%ecx;");
    asm("loc_6B66F68: rep movsb (%esi),(%edi);");
    asm("loc_6B66F6A: mov 0x14(%esp),%ecx;");
    asm("loc_6B66F6E: add %eax,%ecx;");
    asm("loc_6B66F70: push %ebp;");
    asm("loc_6B66F71: lea 0x18(%ebx),%eax;");
    asm("loc_6B66F74: push %edx;");
    asm("loc_6B66F75: mov %ecx,(%eax);");
    asm("loc_6B66F77: push %eax;");
    asm("loc_6B66F78: mov %ebx,%ecx;");
    asm("loc_6B66F7A: call _sub_6B4E7A0;");
    asm("loc_6B66F7F: test %eax,%eax;");
    asm("loc_6B66F81: mov %eax,0x1C(%ebx);");
    asm("loc_6B66F84: je loc_6B66F92;");
    asm("loc_6B66F86: pop %edi;");
    asm("loc_6B66F87: pop %esi;");
    asm("loc_6B66F88: pop %ebp;");
    asm("loc_6B66F89: mov $0x17,%eax;");
    asm("loc_6B66F8E: pop %ebx;");
    asm("loc_6B66F8F: ret $0xC;");
    asm("loc_6B66F92: mov (%ebp),%eax;");
    asm("loc_6B66F95: mov 0x1C(%esp),%ecx;");
    asm("loc_6B66F99: mov %eax,(%ecx);");
    asm("loc_6B66F9B: mov 0xC(%ebx),%edx;");
    asm("loc_6B66F9E: push %edx;");
    asm("loc_6B66F9F: call _sub_6B4ECD0;");
    asm("loc_6B66FA4: mov %eax,%ecx;");
    asm("loc_6B66FA6: mov 4(%ecx),%esi;");
    asm("loc_6B66FA9: mov 0x1C(%ecx),%ebx;");
    asm("loc_6B66FAC: mov 0x14(%ecx),%edx;");
    asm("loc_6B66FAF: add $4,%esp;");
    asm("loc_6B66FB2: inc %esi;");
    asm("loc_6B66FB3: mov %esi,4(%ecx);");
    asm("loc_6B66FB6: mov (%ebp),%eax;");
    asm("loc_6B66FB9: add $2,%eax;");
    asm("loc_6B66FBC: add %eax,%ebx;");
    asm("loc_6B66FBE: mov %ebx,0x1C(%ecx);");
    asm("loc_6B66FC1: mov (%ebp),%ebp;");
    asm("loc_6B66FC4: add $2,%edx;");
    asm("loc_6B66FC7: cmp %edx,%ebp;");
    asm("loc_6B66FC9: jbe loc_6B66FD1;");
    asm("loc_6B66FCB: add $2,%ebp;");
    asm("loc_6B66FCE: mov %ebp,0x14(%ecx);");
    asm("loc_6B66FD1: mov 0x1C(%ecx),%eax;");
    asm("loc_6B66FD4: xor %edx,%edx;");
    asm("loc_6B66FD6: div %esi;");
    asm("loc_6B66FD8: mov %eax,0xC(%ecx);");
    asm("loc_6B66FDB: xor %eax,%eax;");
    asm("loc_6B66FDD: pop %edi;");
    asm("loc_6B66FDE: pop %esi;");
    asm("loc_6B66FDF: pop %ebp;");
    asm("loc_6B66FE0: pop %ebx;");
    asm("loc_6B66FE1: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B66FF0() // _sub_6B66FF0
{
    __DEBUG_ASM(6B66FF0);
    // chunk 0x6B66FF0 _sub_6B66FF0
    asm("loc_6B66FF0: mov _data_6B6EA44,%eax;");
    asm("loc_6B66FF5: mov %eax,_data_6B74590;");
    asm("loc_6B66FFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67000() // _sub_6B67000
{
    __DEBUG_ASM(6B67000);
    // chunk 0x6B67000 _sub_6B67000
    asm("loc_6B67000: mov _data_6B6EA44,%eax;");
    asm("loc_6B67005: mov %eax,_data_6B74594;");
    asm("loc_6B6700A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67010() // _sub_6B67010
{
    __DEBUG_ASM(6B67010);
    // chunk 0x6B67010 _sub_6B67010
    asm("loc_6B67010: mov _data_6B6EA48,%eax;");
    asm("loc_6B67015: mov %eax,_data_6B7458C;");
    asm("loc_6B6701A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67020() // _sub_6B67020
{
    __DEBUG_ASM(6B67020);
    // chunk 0x6B67020 _sub_6B67020
    asm("loc_6B67020: mov 8(%esp),%eax;");
    asm("loc_6B67024: push %ebx;");
    asm("loc_6B67025: push %ebp;");
    asm("loc_6B67026: mov %ecx,%ebp;");
    asm("loc_6B67028: mov 0xC(%esp),%ecx;");
    asm("loc_6B6702C: lea 0x10(%ebp),%ebx;");
    asm("loc_6B6702F: push %esi;");
    asm("loc_6B67030: mov %eax,4(%ebx);");
    asm("loc_6B67033: mov (%ecx),%edx;");
    asm("loc_6B67035: push %edi;");
    asm("loc_6B67036: mov %edx,8(%ebx);");
    asm("loc_6B67039: movl $0,(%ebx);");
    asm("loc_6B6703F: movl $0,0xC(%ebx);");
    asm("loc_6B67046: mov 0x14(%ebp),%eax;");
    asm("loc_6B67049: push %ebx;");
    asm("loc_6B6704A: push %eax;");
    asm("loc_6B6704B: lea 0x18(%ebp),%esi;");
    asm("loc_6B6704E: push %esi;");
    asm("loc_6B6704F: mov %ebp,%ecx;");
    asm("loc_6B67051: call _sub_6B4E740;");
    asm("loc_6B67056: test %eax,%eax;");
    asm("loc_6B67058: mov %eax,0x1C(%ebp);");
    asm("loc_6B6705B: je loc_6B67069;");
    asm("loc_6B6705D: pop %edi;");
    asm("loc_6B6705E: pop %esi;");
    asm("loc_6B6705F: pop %ebp;");
    asm("loc_6B67060: mov $0x16,%eax;");
    asm("loc_6B67065: pop %ebx;");
    asm("loc_6B67066: ret $0xC;");
    asm("loc_6B67069: mov (%ebx),%edx;");
    asm("loc_6B6706B: mov 4(%ebx),%ecx;");
    asm("loc_6B6706E: add $4,%edx;");
    asm("loc_6B67071: mov %edx,%eax;");
    asm("loc_6B67073: cmp %ecx,%eax;");
    asm("loc_6B67075: mov %edx,(%ebx);");
    asm("loc_6B67077: jbe loc_6B67080;");
    asm("loc_6B67079: movl $0x16,0xC(%ebx);");
    asm("loc_6B67080: mov 0x1C(%ebp),%eax;");
    asm("loc_6B67083: test %eax,%eax;");
    asm("loc_6B67085: je loc_6B67093;");
    asm("loc_6B67087: pop %edi;");
    asm("loc_6B67088: pop %esi;");
    asm("loc_6B67089: pop %ebp;");
    asm("loc_6B6708A: mov $0x16,%eax;");
    asm("loc_6B6708F: pop %ebx;");
    asm("loc_6B67090: ret $0xC;");
    asm("loc_6B67093: mov (%esi),%eax;");
    asm("loc_6B67095: mov 0x24(%ebp),%ecx;");
    asm("loc_6B67098: mov %ecx,(%eax);");
    asm("loc_6B6709A: mov 0x24(%ebp),%edx;");
    asm("loc_6B6709D: add $4,%eax;");
    asm("loc_6B670A0: mov %eax,(%esi);");
    asm("loc_6B670A2: mov (%ebx),%edi;");
    asm("loc_6B670A4: mov 4(%ebx),%ecx;");
    asm("loc_6B670A7: add %edx,%edi;");
    asm("loc_6B670A9: mov %edi,%eax;");
    asm("loc_6B670AB: cmp %ecx,%eax;");
    asm("loc_6B670AD: mov %edi,(%ebx);");
    asm("loc_6B670AF: jbe loc_6B670B8;");
    asm("loc_6B670B1: movl $0x16,0xC(%ebx);");
    asm("loc_6B670B8: mov 0x1C(%ebp),%eax;");
    asm("loc_6B670BB: test %eax,%eax;");
    asm("loc_6B670BD: je loc_6B670CB;");
    asm("loc_6B670BF: pop %edi;");
    asm("loc_6B670C0: pop %esi;");
    asm("loc_6B670C1: pop %ebp;");
    asm("loc_6B670C2: mov $0x16,%eax;");
    asm("loc_6B670C7: pop %ebx;");
    asm("loc_6B670C8: ret $0xC;");
    asm("loc_6B670CB: mov 0x24(%ebp),%eax;");
    asm("loc_6B670CE: mov (%esi),%edi;");
    asm("loc_6B670D0: mov 0x20(%ebp),%esi;");
    asm("loc_6B670D3: mov %eax,%ecx;");
    asm("loc_6B670D5: mov %ecx,%edx;");
    asm("loc_6B670D7: shr $2,%ecx;");
    asm("loc_6B670DA: mov %edi,0x18(%esp);");
    asm("loc_6B670DE: rep movsl (%esi),(%edi);");
    asm("loc_6B670E0: mov %edx,%ecx;");
    asm("loc_6B670E2: and $3,%ecx;");
    asm("loc_6B670E5: rep movsb (%esi),(%edi);");
    asm("loc_6B670E7: mov 0x18(%esp),%ecx;");
    asm("loc_6B670EB: mov 0x14(%ebp),%edx;");
    asm("loc_6B670EE: add %eax,%ecx;");
    asm("loc_6B670F0: push %ebx;");
    asm("loc_6B670F1: lea 0x18(%ebp),%eax;");
    asm("loc_6B670F4: push %edx;");
    asm("loc_6B670F5: mov %ecx,(%eax);");
    asm("loc_6B670F7: push %eax;");
    asm("loc_6B670F8: mov %ebp,%ecx;");
    asm("loc_6B670FA: call _sub_6B4E790;");
    asm("loc_6B670FF: test %eax,%eax;");
    asm("loc_6B67101: mov %eax,0x1C(%ebp);");
    asm("loc_6B67104: je loc_6B67112;");
    asm("loc_6B67106: pop %edi;");
    asm("loc_6B67107: pop %esi;");
    asm("loc_6B67108: pop %ebp;");
    asm("loc_6B67109: mov $0x16,%eax;");
    asm("loc_6B6710E: pop %ebx;");
    asm("loc_6B6710F: ret $0xC;");
    asm("loc_6B67112: mov (%ebx),%eax;");
    asm("loc_6B67114: mov 0x1C(%esp),%ecx;");
    asm("loc_6B67118: mov %eax,(%ecx);");
    asm("loc_6B6711A: mov 0xC(%ebp),%edx;");
    asm("loc_6B6711D: push %edx;");
    asm("loc_6B6711E: call _sub_6B4ECD0;");
    asm("loc_6B67123: mov %eax,%ecx;");
    asm("loc_6B67125: mov (%ecx),%esi;");
    asm("loc_6B67127: mov 0x18(%ecx),%edx;");
    asm("loc_6B6712A: add $4,%esp;");
    asm("loc_6B6712D: inc %esi;");
    asm("loc_6B6712E: mov %esi,(%ecx);");
    asm("loc_6B67130: mov (%ebx),%eax;");
    asm("loc_6B67132: add %eax,%edx;");
    asm("loc_6B67134: mov 0x10(%ecx),%eax;");
    asm("loc_6B67137: mov %edx,0x18(%ecx);");
    asm("loc_6B6713A: mov (%ebx),%ebx;");
    asm("loc_6B6713C: cmp %eax,%ebx;");
    asm("loc_6B6713E: jbe loc_6B67143;");
    asm("loc_6B67140: mov %ebx,0x10(%ecx);");
    asm("loc_6B67143: mov 0x18(%ecx),%eax;");
    asm("loc_6B67146: xor %edx,%edx;");
    asm("loc_6B67148: div %esi;");
    asm("loc_6B6714A: pop %edi;");
    asm("loc_6B6714B: pop %esi;");
    asm("loc_6B6714C: pop %ebp;");
    asm("loc_6B6714D: pop %ebx;");
    asm("loc_6B6714E: mov %eax,8(%ecx);");
    asm("loc_6B67151: xor %eax,%eax;");
    asm("loc_6B67153: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67160() // _sub_6B67160
{
    __DEBUG_ASM(6B67160);
    // chunk 0x6B67160 _sub_6B67160
    asm("loc_6B67160: mov 8(%esp),%eax;");
    asm("loc_6B67164: push %ebx;");
    asm("loc_6B67165: push %ebp;");
    asm("loc_6B67166: push %esi;");
    asm("loc_6B67167: mov %ecx,%ebx;");
    asm("loc_6B67169: mov 0x10(%esp),%ecx;");
    asm("loc_6B6716D: lea 0x10(%ebx),%ebp;");
    asm("loc_6B67170: push %edi;");
    asm("loc_6B67171: push %ebp;");
    asm("loc_6B67172: push %eax;");
    asm("loc_6B67173: mov %ecx,8(%ebp);");
    asm("loc_6B67176: lea 0x18(%ebx),%esi;");
    asm("loc_6B67179: push %esi;");
    asm("loc_6B6717A: mov %ebx,%ecx;");
    asm("loc_6B6717C: mov %eax,4(%ebp);");
    asm("loc_6B6717F: movl $0,(%ebp);");
    asm("loc_6B67186: movl $0,0xC(%ebp);");
    asm("loc_6B6718D: call _sub_6B4E780;");
    asm("loc_6B67192: test %eax,%eax;");
    asm("loc_6B67194: mov %eax,0x1C(%ebx);");
    asm("loc_6B67197: je loc_6B671A5;");
    asm("loc_6B67199: pop %edi;");
    asm("loc_6B6719A: pop %esi;");
    asm("loc_6B6719B: pop %ebp;");
    asm("loc_6B6719C: mov $0x17,%eax;");
    asm("loc_6B671A1: pop %ebx;");
    asm("loc_6B671A2: ret $0xC;");
    asm("loc_6B671A5: mov (%ebp),%edx;");
    asm("loc_6B671A8: mov 4(%ebp),%ecx;");
    asm("loc_6B671AB: add $4,%edx;");
    asm("loc_6B671AE: mov %edx,%eax;");
    asm("loc_6B671B0: cmp %ecx,%eax;");
    asm("loc_6B671B2: mov %edx,(%ebp);");
    asm("loc_6B671B5: mov $0x17,%edi;");
    asm("loc_6B671BA: jbe loc_6B671BF;");
    asm("loc_6B671BC: mov %edi,0xC(%ebp);");
    asm("loc_6B671BF: mov 0x1C(%ebx),%eax;");
    asm("loc_6B671C2: test %eax,%eax;");
    asm("loc_6B671C4: jne loc_6B672CD;");
    asm("loc_6B671CA: mov (%esi),%eax;");
    asm("loc_6B671CC: mov (%eax),%edx;");
    asm("loc_6B671CE: add $4,%eax;");
    asm("loc_6B671D1: mov %eax,(%esi);");
    asm("loc_6B671D3: mov %edx,0x24(%ebx);");
    asm("loc_6B671D6: mov (%ebp),%eax;");
    asm("loc_6B671D9: mov 4(%ebp),%ecx;");
    asm("loc_6B671DC: add %edx,%eax;");
    asm("loc_6B671DE: cmp %ecx,%eax;");
    asm("loc_6B671E0: jbe loc_6B671E5;");
    asm("loc_6B671E2: mov %edi,0xC(%ebp);");
    asm("loc_6B671E5: mov 0x1C(%ebx),%eax;");
    asm("loc_6B671E8: test %eax,%eax;");
    asm("loc_6B671EA: jne loc_6B672CD;");
    asm("loc_6B671F0: mov 0x20(%ebx),%eax;");
    asm("loc_6B671F3: test %eax,%eax;");
    asm("loc_6B671F5: jne loc_6B6721A;");
    asm("loc_6B671F7: mov 0x24(%ebx),%ecx;");
    asm("loc_6B671FA: push %ecx;");
    asm("loc_6B671FB: call _sub_6B6A134;");
    asm("loc_6B67200: add $4,%esp;");
    asm("loc_6B67203: test %eax,%eax;");
    asm("loc_6B67205: mov %eax,0x20(%ebx);");
    asm("loc_6B67208: jne loc_6B67216;");
    asm("loc_6B6720A: pop %edi;");
    asm("loc_6B6720B: pop %esi;");
    asm("loc_6B6720C: pop %ebp;");
    asm("loc_6B6720D: mov $5,%eax;");
    asm("loc_6B67212: pop %ebx;");
    asm("loc_6B67213: ret $0xC;");
    asm("loc_6B67216: movb $1,0x28(%ebx);");
    asm("loc_6B6721A: mov 0x24(%ebx),%edx;");
    asm("loc_6B6721D: mov (%ebp),%eax;");
    asm("loc_6B67220: mov 4(%ebp),%ecx;");
    asm("loc_6B67223: add %edx,%eax;");
    asm("loc_6B67225: cmp %ecx,%eax;");
    asm("loc_6B67227: mov %eax,(%ebp);");
    asm("loc_6B6722A: jbe loc_6B6722F;");
    asm("loc_6B6722C: mov %edi,0xC(%ebp);");
    asm("loc_6B6722F: mov 0x1C(%ebx),%eax;");
    asm("loc_6B67232: test %eax,%eax;");
    asm("loc_6B67234: jne loc_6B672CD;");
    asm("loc_6B6723A: mov 0x24(%ebx),%eax;");
    asm("loc_6B6723D: mov (%esi),%esi;");
    asm("loc_6B6723F: mov 0x20(%ebx),%edi;");
    asm("loc_6B67242: mov %eax,%ecx;");
    asm("loc_6B67244: mov %ecx,%edx;");
    asm("loc_6B67246: shr $2,%ecx;");
    asm("loc_6B67249: mov %esi,0x14(%esp);");
    asm("loc_6B6724D: rep movsl (%esi),(%edi);");
    asm("loc_6B6724F: mov %edx,%ecx;");
    asm("loc_6B67251: mov 0x18(%esp),%edx;");
    asm("loc_6B67255: and $3,%ecx;");
    asm("loc_6B67258: rep movsb (%esi),(%edi);");
    asm("loc_6B6725A: mov 0x14(%esp),%ecx;");
    asm("loc_6B6725E: add %eax,%ecx;");
    asm("loc_6B67260: push %ebp;");
    asm("loc_6B67261: lea 0x18(%ebx),%eax;");
    asm("loc_6B67264: push %edx;");
    asm("loc_6B67265: mov %ecx,(%eax);");
    asm("loc_6B67267: push %eax;");
    asm("loc_6B67268: mov %ebx,%ecx;");
    asm("loc_6B6726A: call _sub_6B4E7A0;");
    asm("loc_6B6726F: test %eax,%eax;");
    asm("loc_6B67271: mov %eax,0x1C(%ebx);");
    asm("loc_6B67274: je loc_6B67282;");
    asm("loc_6B67276: pop %edi;");
    asm("loc_6B67277: pop %esi;");
    asm("loc_6B67278: pop %ebp;");
    asm("loc_6B67279: mov $0x17,%eax;");
    asm("loc_6B6727E: pop %ebx;");
    asm("loc_6B6727F: ret $0xC;");
    asm("loc_6B67282: mov (%ebp),%eax;");
    asm("loc_6B67285: mov 0x1C(%esp),%ecx;");
    asm("loc_6B67289: mov %eax,(%ecx);");
    asm("loc_6B6728B: mov 0xC(%ebx),%edx;");
    asm("loc_6B6728E: push %edx;");
    asm("loc_6B6728F: call _sub_6B4ECD0;");
    asm("loc_6B67294: mov %eax,%ecx;");
    asm("loc_6B67296: mov 4(%ecx),%esi;");
    asm("loc_6B67299: mov 0x1C(%ecx),%ebx;");
    asm("loc_6B6729C: mov 0x14(%ecx),%edx;");
    asm("loc_6B6729F: add $4,%esp;");
    asm("loc_6B672A2: inc %esi;");
    asm("loc_6B672A3: mov %esi,4(%ecx);");
    asm("loc_6B672A6: mov (%ebp),%eax;");
    asm("loc_6B672A9: add $2,%eax;");
    asm("loc_6B672AC: add %eax,%ebx;");
    asm("loc_6B672AE: mov %ebx,0x1C(%ecx);");
    asm("loc_6B672B1: mov (%ebp),%ebp;");
    asm("loc_6B672B4: add $2,%edx;");
    asm("loc_6B672B7: cmp %edx,%ebp;");
    asm("loc_6B672B9: jbe loc_6B672C1;");
    asm("loc_6B672BB: add $2,%ebp;");
    asm("loc_6B672BE: mov %ebp,0x14(%ecx);");
    asm("loc_6B672C1: mov 0x1C(%ecx),%eax;");
    asm("loc_6B672C4: xor %edx,%edx;");
    asm("loc_6B672C6: div %esi;");
    asm("loc_6B672C8: mov %eax,0xC(%ecx);");
    asm("loc_6B672CB: xor %eax,%eax;");
    asm("loc_6B672CD: pop %edi;");
    asm("loc_6B672CE: pop %esi;");
    asm("loc_6B672CF: pop %ebp;");
    asm("loc_6B672D0: pop %ebx;");
    asm("loc_6B672D1: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B672E0() // _sub_6B672E0
{
    __DEBUG_ASM(6B672E0);
    // chunk 0x6B672E0 _sub_6B672E0
    asm("loc_6B672E0: mov _data_6B6EA50,%eax;");
    asm("loc_6B672E5: mov %eax,_data_6B745A0;");
    asm("loc_6B672EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B672F0() // _sub_6B672F0
{
    __DEBUG_ASM(6B672F0);
    // chunk 0x6B672F0 _sub_6B672F0
    asm("loc_6B672F0: mov _data_6B6EA50,%eax;");
    asm("loc_6B672F5: mov %eax,_data_6B745A4;");
    asm("loc_6B672FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67300() // _sub_6B67300
{
    __DEBUG_ASM(6B67300);
    // chunk 0x6B67300 _sub_6B67300
    asm("loc_6B67300: mov _data_6B6EA54,%eax;");
    asm("loc_6B67305: mov %eax,_data_6B7459C;");
    asm("loc_6B6730A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67310() // _sub_6B67310
{
    __DEBUG_ASM(6B67310);
    // chunk 0x6B67310 _sub_6B67310
    asm("loc_6B67310: mov 8(%esp),%eax;");
    asm("loc_6B67314: push %ebx;");
    asm("loc_6B67315: push %ebp;");
    asm("loc_6B67316: mov %ecx,%ebp;");
    asm("loc_6B67318: mov 0xC(%esp),%ecx;");
    asm("loc_6B6731C: lea 0x10(%ebp),%ebx;");
    asm("loc_6B6731F: push %esi;");
    asm("loc_6B67320: mov %eax,4(%ebx);");
    asm("loc_6B67323: mov (%ecx),%edx;");
    asm("loc_6B67325: push %edi;");
    asm("loc_6B67326: mov %edx,8(%ebx);");
    asm("loc_6B67329: movl $0,(%ebx);");
    asm("loc_6B6732F: movl $0,0xC(%ebx);");
    asm("loc_6B67336: mov 0x14(%ebp),%eax;");
    asm("loc_6B67339: push %ebx;");
    asm("loc_6B6733A: push %eax;");
    asm("loc_6B6733B: lea 0x18(%ebp),%esi;");
    asm("loc_6B6733E: push %esi;");
    asm("loc_6B6733F: mov %ebp,%ecx;");
    asm("loc_6B67341: call _sub_6B4E740;");
    asm("loc_6B67346: test %eax,%eax;");
    asm("loc_6B67348: mov %eax,0x1C(%ebp);");
    asm("loc_6B6734B: je loc_6B67359;");
    asm("loc_6B6734D: pop %edi;");
    asm("loc_6B6734E: pop %esi;");
    asm("loc_6B6734F: pop %ebp;");
    asm("loc_6B67350: mov $0x16,%eax;");
    asm("loc_6B67355: pop %ebx;");
    asm("loc_6B67356: ret $0xC;");
    asm("loc_6B67359: mov (%ebx),%edx;");
    asm("loc_6B6735B: mov 4(%ebx),%ecx;");
    asm("loc_6B6735E: add $4,%edx;");
    asm("loc_6B67361: mov %edx,%eax;");
    asm("loc_6B67363: cmp %ecx,%eax;");
    asm("loc_6B67365: mov %edx,(%ebx);");
    asm("loc_6B67367: jbe loc_6B67370;");
    asm("loc_6B67369: movl $0x16,0xC(%ebx);");
    asm("loc_6B67370: mov 0x1C(%ebp),%eax;");
    asm("loc_6B67373: test %eax,%eax;");
    asm("loc_6B67375: je loc_6B67383;");
    asm("loc_6B67377: pop %edi;");
    asm("loc_6B67378: pop %esi;");
    asm("loc_6B67379: pop %ebp;");
    asm("loc_6B6737A: mov $0x16,%eax;");
    asm("loc_6B6737F: pop %ebx;");
    asm("loc_6B67380: ret $0xC;");
    asm("loc_6B67383: mov (%esi),%eax;");
    asm("loc_6B67385: mov 0x24(%ebp),%ecx;");
    asm("loc_6B67388: mov %ecx,(%eax);");
    asm("loc_6B6738A: mov 0x24(%ebp),%edx;");
    asm("loc_6B6738D: add $4,%eax;");
    asm("loc_6B67390: mov %eax,(%esi);");
    asm("loc_6B67392: mov (%ebx),%edi;");
    asm("loc_6B67394: mov 4(%ebx),%ecx;");
    asm("loc_6B67397: add %edx,%edi;");
    asm("loc_6B67399: mov %edi,%eax;");
    asm("loc_6B6739B: cmp %ecx,%eax;");
    asm("loc_6B6739D: mov %edi,(%ebx);");
    asm("loc_6B6739F: jbe loc_6B673A8;");
    asm("loc_6B673A1: movl $0x16,0xC(%ebx);");
    asm("loc_6B673A8: mov 0x1C(%ebp),%eax;");
    asm("loc_6B673AB: test %eax,%eax;");
    asm("loc_6B673AD: je loc_6B673BB;");
    asm("loc_6B673AF: pop %edi;");
    asm("loc_6B673B0: pop %esi;");
    asm("loc_6B673B1: pop %ebp;");
    asm("loc_6B673B2: mov $0x16,%eax;");
    asm("loc_6B673B7: pop %ebx;");
    asm("loc_6B673B8: ret $0xC;");
    asm("loc_6B673BB: mov 0x24(%ebp),%eax;");
    asm("loc_6B673BE: mov (%esi),%edi;");
    asm("loc_6B673C0: mov 0x20(%ebp),%esi;");
    asm("loc_6B673C3: mov %eax,%ecx;");
    asm("loc_6B673C5: mov %ecx,%edx;");
    asm("loc_6B673C7: shr $2,%ecx;");
    asm("loc_6B673CA: mov %edi,0x18(%esp);");
    asm("loc_6B673CE: rep movsl (%esi),(%edi);");
    asm("loc_6B673D0: mov %edx,%ecx;");
    asm("loc_6B673D2: and $3,%ecx;");
    asm("loc_6B673D5: rep movsb (%esi),(%edi);");
    asm("loc_6B673D7: mov 0x18(%esp),%ecx;");
    asm("loc_6B673DB: mov 0x14(%ebp),%edx;");
    asm("loc_6B673DE: add %eax,%ecx;");
    asm("loc_6B673E0: push %ebx;");
    asm("loc_6B673E1: lea 0x18(%ebp),%eax;");
    asm("loc_6B673E4: push %edx;");
    asm("loc_6B673E5: mov %ecx,(%eax);");
    asm("loc_6B673E7: push %eax;");
    asm("loc_6B673E8: mov %ebp,%ecx;");
    asm("loc_6B673EA: call _sub_6B4E790;");
    asm("loc_6B673EF: test %eax,%eax;");
    asm("loc_6B673F1: mov %eax,0x1C(%ebp);");
    asm("loc_6B673F4: je loc_6B67402;");
    asm("loc_6B673F6: pop %edi;");
    asm("loc_6B673F7: pop %esi;");
    asm("loc_6B673F8: pop %ebp;");
    asm("loc_6B673F9: mov $0x16,%eax;");
    asm("loc_6B673FE: pop %ebx;");
    asm("loc_6B673FF: ret $0xC;");
    asm("loc_6B67402: mov (%ebx),%eax;");
    asm("loc_6B67404: mov 0x1C(%esp),%ecx;");
    asm("loc_6B67408: mov %eax,(%ecx);");
    asm("loc_6B6740A: mov 0xC(%ebp),%edx;");
    asm("loc_6B6740D: push %edx;");
    asm("loc_6B6740E: call _sub_6B4ECD0;");
    asm("loc_6B67413: mov %eax,%ecx;");
    asm("loc_6B67415: mov (%ecx),%esi;");
    asm("loc_6B67417: mov 0x18(%ecx),%edx;");
    asm("loc_6B6741A: add $4,%esp;");
    asm("loc_6B6741D: inc %esi;");
    asm("loc_6B6741E: mov %esi,(%ecx);");
    asm("loc_6B67420: mov (%ebx),%eax;");
    asm("loc_6B67422: add %eax,%edx;");
    asm("loc_6B67424: mov 0x10(%ecx),%eax;");
    asm("loc_6B67427: mov %edx,0x18(%ecx);");
    asm("loc_6B6742A: mov (%ebx),%ebx;");
    asm("loc_6B6742C: cmp %eax,%ebx;");
    asm("loc_6B6742E: jbe loc_6B67433;");
    asm("loc_6B67430: mov %ebx,0x10(%ecx);");
    asm("loc_6B67433: mov 0x18(%ecx),%eax;");
    asm("loc_6B67436: xor %edx,%edx;");
    asm("loc_6B67438: div %esi;");
    asm("loc_6B6743A: pop %edi;");
    asm("loc_6B6743B: pop %esi;");
    asm("loc_6B6743C: pop %ebp;");
    asm("loc_6B6743D: pop %ebx;");
    asm("loc_6B6743E: mov %eax,8(%ecx);");
    asm("loc_6B67441: xor %eax,%eax;");
    asm("loc_6B67443: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67450() // _sub_6B67450
{
    __DEBUG_ASM(6B67450);
    // chunk 0x6B67450 _sub_6B67450
    asm("loc_6B67450: mov 8(%esp),%eax;");
    asm("loc_6B67454: push %ebx;");
    asm("loc_6B67455: push %ebp;");
    asm("loc_6B67456: push %esi;");
    asm("loc_6B67457: mov %ecx,%ebx;");
    asm("loc_6B67459: mov 0x10(%esp),%ecx;");
    asm("loc_6B6745D: lea 0x10(%ebx),%ebp;");
    asm("loc_6B67460: push %edi;");
    asm("loc_6B67461: push %ebp;");
    asm("loc_6B67462: push %eax;");
    asm("loc_6B67463: mov %ecx,8(%ebp);");
    asm("loc_6B67466: lea 0x18(%ebx),%esi;");
    asm("loc_6B67469: push %esi;");
    asm("loc_6B6746A: mov %ebx,%ecx;");
    asm("loc_6B6746C: mov %eax,4(%ebp);");
    asm("loc_6B6746F: movl $0,(%ebp);");
    asm("loc_6B67476: movl $0,0xC(%ebp);");
    asm("loc_6B6747D: call _sub_6B4E780;");
    asm("loc_6B67482: test %eax,%eax;");
    asm("loc_6B67484: mov %eax,0x1C(%ebx);");
    asm("loc_6B67487: je loc_6B67495;");
    asm("loc_6B67489: pop %edi;");
    asm("loc_6B6748A: pop %esi;");
    asm("loc_6B6748B: pop %ebp;");
    asm("loc_6B6748C: mov $0x17,%eax;");
    asm("loc_6B67491: pop %ebx;");
    asm("loc_6B67492: ret $0xC;");
    asm("loc_6B67495: mov (%ebp),%edx;");
    asm("loc_6B67498: mov 4(%ebp),%ecx;");
    asm("loc_6B6749B: add $4,%edx;");
    asm("loc_6B6749E: mov %edx,%eax;");
    asm("loc_6B674A0: cmp %ecx,%eax;");
    asm("loc_6B674A2: mov %edx,(%ebp);");
    asm("loc_6B674A5: mov $0x17,%edi;");
    asm("loc_6B674AA: jbe loc_6B674AF;");
    asm("loc_6B674AC: mov %edi,0xC(%ebp);");
    asm("loc_6B674AF: mov 0x1C(%ebx),%eax;");
    asm("loc_6B674B2: test %eax,%eax;");
    asm("loc_6B674B4: jne loc_6B675BD;");
    asm("loc_6B674BA: mov (%esi),%eax;");
    asm("loc_6B674BC: mov (%eax),%edx;");
    asm("loc_6B674BE: add $4,%eax;");
    asm("loc_6B674C1: mov %eax,(%esi);");
    asm("loc_6B674C3: mov %edx,0x24(%ebx);");
    asm("loc_6B674C6: mov (%ebp),%eax;");
    asm("loc_6B674C9: mov 4(%ebp),%ecx;");
    asm("loc_6B674CC: add %edx,%eax;");
    asm("loc_6B674CE: cmp %ecx,%eax;");
    asm("loc_6B674D0: jbe loc_6B674D5;");
    asm("loc_6B674D2: mov %edi,0xC(%ebp);");
    asm("loc_6B674D5: mov 0x1C(%ebx),%eax;");
    asm("loc_6B674D8: test %eax,%eax;");
    asm("loc_6B674DA: jne loc_6B675BD;");
    asm("loc_6B674E0: mov 0x20(%ebx),%eax;");
    asm("loc_6B674E3: test %eax,%eax;");
    asm("loc_6B674E5: jne loc_6B6750A;");
    asm("loc_6B674E7: mov 0x24(%ebx),%ecx;");
    asm("loc_6B674EA: push %ecx;");
    asm("loc_6B674EB: call _sub_6B6A134;");
    asm("loc_6B674F0: add $4,%esp;");
    asm("loc_6B674F3: test %eax,%eax;");
    asm("loc_6B674F5: mov %eax,0x20(%ebx);");
    asm("loc_6B674F8: jne loc_6B67506;");
    asm("loc_6B674FA: pop %edi;");
    asm("loc_6B674FB: pop %esi;");
    asm("loc_6B674FC: pop %ebp;");
    asm("loc_6B674FD: mov $5,%eax;");
    asm("loc_6B67502: pop %ebx;");
    asm("loc_6B67503: ret $0xC;");
    asm("loc_6B67506: movb $1,0x28(%ebx);");
    asm("loc_6B6750A: mov 0x24(%ebx),%edx;");
    asm("loc_6B6750D: mov (%ebp),%eax;");
    asm("loc_6B67510: mov 4(%ebp),%ecx;");
    asm("loc_6B67513: add %edx,%eax;");
    asm("loc_6B67515: cmp %ecx,%eax;");
    asm("loc_6B67517: mov %eax,(%ebp);");
    asm("loc_6B6751A: jbe loc_6B6751F;");
    asm("loc_6B6751C: mov %edi,0xC(%ebp);");
    asm("loc_6B6751F: mov 0x1C(%ebx),%eax;");
    asm("loc_6B67522: test %eax,%eax;");
    asm("loc_6B67524: jne loc_6B675BD;");
    asm("loc_6B6752A: mov 0x24(%ebx),%eax;");
    asm("loc_6B6752D: mov (%esi),%esi;");
    asm("loc_6B6752F: mov 0x20(%ebx),%edi;");
    asm("loc_6B67532: mov %eax,%ecx;");
    asm("loc_6B67534: mov %ecx,%edx;");
    asm("loc_6B67536: shr $2,%ecx;");
    asm("loc_6B67539: mov %esi,0x14(%esp);");
    asm("loc_6B6753D: rep movsl (%esi),(%edi);");
    asm("loc_6B6753F: mov %edx,%ecx;");
    asm("loc_6B67541: mov 0x18(%esp),%edx;");
    asm("loc_6B67545: and $3,%ecx;");
    asm("loc_6B67548: rep movsb (%esi),(%edi);");
    asm("loc_6B6754A: mov 0x14(%esp),%ecx;");
    asm("loc_6B6754E: add %eax,%ecx;");
    asm("loc_6B67550: push %ebp;");
    asm("loc_6B67551: lea 0x18(%ebx),%eax;");
    asm("loc_6B67554: push %edx;");
    asm("loc_6B67555: mov %ecx,(%eax);");
    asm("loc_6B67557: push %eax;");
    asm("loc_6B67558: mov %ebx,%ecx;");
    asm("loc_6B6755A: call _sub_6B4E7A0;");
    asm("loc_6B6755F: test %eax,%eax;");
    asm("loc_6B67561: mov %eax,0x1C(%ebx);");
    asm("loc_6B67564: je loc_6B67572;");
    asm("loc_6B67566: pop %edi;");
    asm("loc_6B67567: pop %esi;");
    asm("loc_6B67568: pop %ebp;");
    asm("loc_6B67569: mov $0x17,%eax;");
    asm("loc_6B6756E: pop %ebx;");
    asm("loc_6B6756F: ret $0xC;");
    asm("loc_6B67572: mov (%ebp),%eax;");
    asm("loc_6B67575: mov 0x1C(%esp),%ecx;");
    asm("loc_6B67579: mov %eax,(%ecx);");
    asm("loc_6B6757B: mov 0xC(%ebx),%edx;");
    asm("loc_6B6757E: push %edx;");
    asm("loc_6B6757F: call _sub_6B4ECD0;");
    asm("loc_6B67584: mov %eax,%ecx;");
    asm("loc_6B67586: mov 4(%ecx),%esi;");
    asm("loc_6B67589: mov 0x1C(%ecx),%ebx;");
    asm("loc_6B6758C: mov 0x14(%ecx),%edx;");
    asm("loc_6B6758F: add $4,%esp;");
    asm("loc_6B67592: inc %esi;");
    asm("loc_6B67593: mov %esi,4(%ecx);");
    asm("loc_6B67596: mov (%ebp),%eax;");
    asm("loc_6B67599: add $2,%eax;");
    asm("loc_6B6759C: add %eax,%ebx;");
    asm("loc_6B6759E: mov %ebx,0x1C(%ecx);");
    asm("loc_6B675A1: mov (%ebp),%ebp;");
    asm("loc_6B675A4: add $2,%edx;");
    asm("loc_6B675A7: cmp %edx,%ebp;");
    asm("loc_6B675A9: jbe loc_6B675B1;");
    asm("loc_6B675AB: add $2,%ebp;");
    asm("loc_6B675AE: mov %ebp,0x14(%ecx);");
    asm("loc_6B675B1: mov 0x1C(%ecx),%eax;");
    asm("loc_6B675B4: xor %edx,%edx;");
    asm("loc_6B675B6: div %esi;");
    asm("loc_6B675B8: mov %eax,0xC(%ecx);");
    asm("loc_6B675BB: xor %eax,%eax;");
    asm("loc_6B675BD: pop %edi;");
    asm("loc_6B675BE: pop %esi;");
    asm("loc_6B675BF: pop %ebp;");
    asm("loc_6B675C0: pop %ebx;");
    asm("loc_6B675C1: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B675D0() // _sub_6B675D0
{
    __DEBUG_ASM(6B675D0);
    // chunk 0x6B675D0 _sub_6B675D0
    asm("loc_6B675D0: mov _data_6B6EA5C,%eax;");
    asm("loc_6B675D5: mov %eax,_data_6B745B0;");
    asm("loc_6B675DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B675E0() // _sub_6B675E0
{
    __DEBUG_ASM(6B675E0);
    // chunk 0x6B675E0 _sub_6B675E0
    asm("loc_6B675E0: mov _data_6B6EA5C,%eax;");
    asm("loc_6B675E5: mov %eax,_data_6B745B4;");
    asm("loc_6B675EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B675F0() // _sub_6B675F0
{
    __DEBUG_ASM(6B675F0);
    // chunk 0x6B675F0 _sub_6B675F0
    asm("loc_6B675F0: mov _data_6B6EA60,%eax;");
    asm("loc_6B675F5: mov %eax,_data_6B745AC;");
    asm("loc_6B675FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67600() // _sub_6B67600
{
    __DEBUG_ASM(6B67600);
    // chunk 0x6B67600 _sub_6B67600
    asm("loc_6B67600: mov 8(%esp),%eax;");
    asm("loc_6B67604: push %ebx;");
    asm("loc_6B67605: push %ebp;");
    asm("loc_6B67606: mov %ecx,%ebp;");
    asm("loc_6B67608: mov 0xC(%esp),%ecx;");
    asm("loc_6B6760C: lea 0x10(%ebp),%ebx;");
    asm("loc_6B6760F: push %esi;");
    asm("loc_6B67610: mov %eax,4(%ebx);");
    asm("loc_6B67613: mov (%ecx),%edx;");
    asm("loc_6B67615: push %edi;");
    asm("loc_6B67616: mov %edx,8(%ebx);");
    asm("loc_6B67619: movl $0,(%ebx);");
    asm("loc_6B6761F: movl $0,0xC(%ebx);");
    asm("loc_6B67626: mov 0x14(%ebp),%eax;");
    asm("loc_6B67629: push %ebx;");
    asm("loc_6B6762A: push %eax;");
    asm("loc_6B6762B: lea 0x18(%ebp),%esi;");
    asm("loc_6B6762E: push %esi;");
    asm("loc_6B6762F: mov %ebp,%ecx;");
    asm("loc_6B67631: call _sub_6B4E740;");
    asm("loc_6B67636: test %eax,%eax;");
    asm("loc_6B67638: mov %eax,0x1C(%ebp);");
    asm("loc_6B6763B: je loc_6B67649;");
    asm("loc_6B6763D: pop %edi;");
    asm("loc_6B6763E: pop %esi;");
    asm("loc_6B6763F: pop %ebp;");
    asm("loc_6B67640: mov $0x16,%eax;");
    asm("loc_6B67645: pop %ebx;");
    asm("loc_6B67646: ret $0xC;");
    asm("loc_6B67649: mov (%ebx),%edx;");
    asm("loc_6B6764B: mov 4(%ebx),%ecx;");
    asm("loc_6B6764E: add $4,%edx;");
    asm("loc_6B67651: mov %edx,%eax;");
    asm("loc_6B67653: cmp %ecx,%eax;");
    asm("loc_6B67655: mov %edx,(%ebx);");
    asm("loc_6B67657: jbe loc_6B67660;");
    asm("loc_6B67659: movl $0x16,0xC(%ebx);");
    asm("loc_6B67660: mov 0x1C(%ebp),%eax;");
    asm("loc_6B67663: test %eax,%eax;");
    asm("loc_6B67665: je loc_6B67673;");
    asm("loc_6B67667: pop %edi;");
    asm("loc_6B67668: pop %esi;");
    asm("loc_6B67669: pop %ebp;");
    asm("loc_6B6766A: mov $0x16,%eax;");
    asm("loc_6B6766F: pop %ebx;");
    asm("loc_6B67670: ret $0xC;");
    asm("loc_6B67673: mov (%esi),%eax;");
    asm("loc_6B67675: mov 0x24(%ebp),%ecx;");
    asm("loc_6B67678: mov %ecx,(%eax);");
    asm("loc_6B6767A: mov 0x24(%ebp),%edx;");
    asm("loc_6B6767D: add $4,%eax;");
    asm("loc_6B67680: mov %eax,(%esi);");
    asm("loc_6B67682: mov (%ebx),%edi;");
    asm("loc_6B67684: mov 4(%ebx),%ecx;");
    asm("loc_6B67687: add %edx,%edi;");
    asm("loc_6B67689: mov %edi,%eax;");
    asm("loc_6B6768B: cmp %ecx,%eax;");
    asm("loc_6B6768D: mov %edi,(%ebx);");
    asm("loc_6B6768F: jbe loc_6B67698;");
    asm("loc_6B67691: movl $0x16,0xC(%ebx);");
    asm("loc_6B67698: mov 0x1C(%ebp),%eax;");
    asm("loc_6B6769B: test %eax,%eax;");
    asm("loc_6B6769D: je loc_6B676AB;");
    asm("loc_6B6769F: pop %edi;");
    asm("loc_6B676A0: pop %esi;");
    asm("loc_6B676A1: pop %ebp;");
    asm("loc_6B676A2: mov $0x16,%eax;");
    asm("loc_6B676A7: pop %ebx;");
    asm("loc_6B676A8: ret $0xC;");
    asm("loc_6B676AB: mov 0x24(%ebp),%eax;");
    asm("loc_6B676AE: mov (%esi),%edi;");
    asm("loc_6B676B0: mov 0x20(%ebp),%esi;");
    asm("loc_6B676B3: mov %eax,%ecx;");
    asm("loc_6B676B5: mov %ecx,%edx;");
    asm("loc_6B676B7: shr $2,%ecx;");
    asm("loc_6B676BA: mov %edi,0x18(%esp);");
    asm("loc_6B676BE: rep movsl (%esi),(%edi);");
    asm("loc_6B676C0: mov %edx,%ecx;");
    asm("loc_6B676C2: and $3,%ecx;");
    asm("loc_6B676C5: rep movsb (%esi),(%edi);");
    asm("loc_6B676C7: mov 0x18(%esp),%ecx;");
    asm("loc_6B676CB: mov 0x14(%ebp),%edx;");
    asm("loc_6B676CE: add %eax,%ecx;");
    asm("loc_6B676D0: push %ebx;");
    asm("loc_6B676D1: lea 0x18(%ebp),%eax;");
    asm("loc_6B676D4: push %edx;");
    asm("loc_6B676D5: mov %ecx,(%eax);");
    asm("loc_6B676D7: push %eax;");
    asm("loc_6B676D8: mov %ebp,%ecx;");
    asm("loc_6B676DA: call _sub_6B4E790;");
    asm("loc_6B676DF: test %eax,%eax;");
    asm("loc_6B676E1: mov %eax,0x1C(%ebp);");
    asm("loc_6B676E4: je loc_6B676F2;");
    asm("loc_6B676E6: pop %edi;");
    asm("loc_6B676E7: pop %esi;");
    asm("loc_6B676E8: pop %ebp;");
    asm("loc_6B676E9: mov $0x16,%eax;");
    asm("loc_6B676EE: pop %ebx;");
    asm("loc_6B676EF: ret $0xC;");
    asm("loc_6B676F2: mov (%ebx),%eax;");
    asm("loc_6B676F4: mov 0x1C(%esp),%ecx;");
    asm("loc_6B676F8: mov %eax,(%ecx);");
    asm("loc_6B676FA: mov 0xC(%ebp),%edx;");
    asm("loc_6B676FD: push %edx;");
    asm("loc_6B676FE: call _sub_6B4ECD0;");
    asm("loc_6B67703: mov %eax,%ecx;");
    asm("loc_6B67705: mov (%ecx),%esi;");
    asm("loc_6B67707: mov 0x18(%ecx),%edx;");
    asm("loc_6B6770A: add $4,%esp;");
    asm("loc_6B6770D: inc %esi;");
    asm("loc_6B6770E: mov %esi,(%ecx);");
    asm("loc_6B67710: mov (%ebx),%eax;");
    asm("loc_6B67712: add %eax,%edx;");
    asm("loc_6B67714: mov 0x10(%ecx),%eax;");
    asm("loc_6B67717: mov %edx,0x18(%ecx);");
    asm("loc_6B6771A: mov (%ebx),%ebx;");
    asm("loc_6B6771C: cmp %eax,%ebx;");
    asm("loc_6B6771E: jbe loc_6B67723;");
    asm("loc_6B67720: mov %ebx,0x10(%ecx);");
    asm("loc_6B67723: mov 0x18(%ecx),%eax;");
    asm("loc_6B67726: xor %edx,%edx;");
    asm("loc_6B67728: div %esi;");
    asm("loc_6B6772A: pop %edi;");
    asm("loc_6B6772B: pop %esi;");
    asm("loc_6B6772C: pop %ebp;");
    asm("loc_6B6772D: pop %ebx;");
    asm("loc_6B6772E: mov %eax,8(%ecx);");
    asm("loc_6B67731: xor %eax,%eax;");
    asm("loc_6B67733: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67740() // _sub_6B67740
{
    __DEBUG_ASM(6B67740);
    // chunk 0x6B67740 _sub_6B67740
    asm("loc_6B67740: mov 8(%esp),%eax;");
    asm("loc_6B67744: push %ebx;");
    asm("loc_6B67745: push %ebp;");
    asm("loc_6B67746: push %esi;");
    asm("loc_6B67747: mov %ecx,%ebx;");
    asm("loc_6B67749: mov 0x10(%esp),%ecx;");
    asm("loc_6B6774D: lea 0x10(%ebx),%ebp;");
    asm("loc_6B67750: push %edi;");
    asm("loc_6B67751: push %ebp;");
    asm("loc_6B67752: push %eax;");
    asm("loc_6B67753: mov %ecx,8(%ebp);");
    asm("loc_6B67756: lea 0x18(%ebx),%esi;");
    asm("loc_6B67759: push %esi;");
    asm("loc_6B6775A: mov %ebx,%ecx;");
    asm("loc_6B6775C: mov %eax,4(%ebp);");
    asm("loc_6B6775F: movl $0,(%ebp);");
    asm("loc_6B67766: movl $0,0xC(%ebp);");
    asm("loc_6B6776D: call _sub_6B4E780;");
    asm("loc_6B67772: test %eax,%eax;");
    asm("loc_6B67774: mov %eax,0x1C(%ebx);");
    asm("loc_6B67777: je loc_6B67785;");
    asm("loc_6B67779: pop %edi;");
    asm("loc_6B6777A: pop %esi;");
    asm("loc_6B6777B: pop %ebp;");
    asm("loc_6B6777C: mov $0x17,%eax;");
    asm("loc_6B67781: pop %ebx;");
    asm("loc_6B67782: ret $0xC;");
    asm("loc_6B67785: mov (%ebp),%edx;");
    asm("loc_6B67788: mov 4(%ebp),%ecx;");
    asm("loc_6B6778B: add $4,%edx;");
    asm("loc_6B6778E: mov %edx,%eax;");
    asm("loc_6B67790: cmp %ecx,%eax;");
    asm("loc_6B67792: mov %edx,(%ebp);");
    asm("loc_6B67795: mov $0x17,%edi;");
    asm("loc_6B6779A: jbe loc_6B6779F;");
    asm("loc_6B6779C: mov %edi,0xC(%ebp);");
    asm("loc_6B6779F: mov 0x1C(%ebx),%eax;");
    asm("loc_6B677A2: test %eax,%eax;");
    asm("loc_6B677A4: jne loc_6B678AD;");
    asm("loc_6B677AA: mov (%esi),%eax;");
    asm("loc_6B677AC: mov (%eax),%edx;");
    asm("loc_6B677AE: add $4,%eax;");
    asm("loc_6B677B1: mov %eax,(%esi);");
    asm("loc_6B677B3: mov %edx,0x24(%ebx);");
    asm("loc_6B677B6: mov (%ebp),%eax;");
    asm("loc_6B677B9: mov 4(%ebp),%ecx;");
    asm("loc_6B677BC: add %edx,%eax;");
    asm("loc_6B677BE: cmp %ecx,%eax;");
    asm("loc_6B677C0: jbe loc_6B677C5;");
    asm("loc_6B677C2: mov %edi,0xC(%ebp);");
    asm("loc_6B677C5: mov 0x1C(%ebx),%eax;");
    asm("loc_6B677C8: test %eax,%eax;");
    asm("loc_6B677CA: jne loc_6B678AD;");
    asm("loc_6B677D0: mov 0x20(%ebx),%eax;");
    asm("loc_6B677D3: test %eax,%eax;");
    asm("loc_6B677D5: jne loc_6B677FA;");
    asm("loc_6B677D7: mov 0x24(%ebx),%ecx;");
    asm("loc_6B677DA: push %ecx;");
    asm("loc_6B677DB: call _sub_6B6A134;");
    asm("loc_6B677E0: add $4,%esp;");
    asm("loc_6B677E3: test %eax,%eax;");
    asm("loc_6B677E5: mov %eax,0x20(%ebx);");
    asm("loc_6B677E8: jne loc_6B677F6;");
    asm("loc_6B677EA: pop %edi;");
    asm("loc_6B677EB: pop %esi;");
    asm("loc_6B677EC: pop %ebp;");
    asm("loc_6B677ED: mov $5,%eax;");
    asm("loc_6B677F2: pop %ebx;");
    asm("loc_6B677F3: ret $0xC;");
    asm("loc_6B677F6: movb $1,0x28(%ebx);");
    asm("loc_6B677FA: mov 0x24(%ebx),%edx;");
    asm("loc_6B677FD: mov (%ebp),%eax;");
    asm("loc_6B67800: mov 4(%ebp),%ecx;");
    asm("loc_6B67803: add %edx,%eax;");
    asm("loc_6B67805: cmp %ecx,%eax;");
    asm("loc_6B67807: mov %eax,(%ebp);");
    asm("loc_6B6780A: jbe loc_6B6780F;");
    asm("loc_6B6780C: mov %edi,0xC(%ebp);");
    asm("loc_6B6780F: mov 0x1C(%ebx),%eax;");
    asm("loc_6B67812: test %eax,%eax;");
    asm("loc_6B67814: jne loc_6B678AD;");
    asm("loc_6B6781A: mov 0x24(%ebx),%eax;");
    asm("loc_6B6781D: mov (%esi),%esi;");
    asm("loc_6B6781F: mov 0x20(%ebx),%edi;");
    asm("loc_6B67822: mov %eax,%ecx;");
    asm("loc_6B67824: mov %ecx,%edx;");
    asm("loc_6B67826: shr $2,%ecx;");
    asm("loc_6B67829: mov %esi,0x14(%esp);");
    asm("loc_6B6782D: rep movsl (%esi),(%edi);");
    asm("loc_6B6782F: mov %edx,%ecx;");
    asm("loc_6B67831: mov 0x18(%esp),%edx;");
    asm("loc_6B67835: and $3,%ecx;");
    asm("loc_6B67838: rep movsb (%esi),(%edi);");
    asm("loc_6B6783A: mov 0x14(%esp),%ecx;");
    asm("loc_6B6783E: add %eax,%ecx;");
    asm("loc_6B67840: push %ebp;");
    asm("loc_6B67841: lea 0x18(%ebx),%eax;");
    asm("loc_6B67844: push %edx;");
    asm("loc_6B67845: mov %ecx,(%eax);");
    asm("loc_6B67847: push %eax;");
    asm("loc_6B67848: mov %ebx,%ecx;");
    asm("loc_6B6784A: call _sub_6B4E7A0;");
    asm("loc_6B6784F: test %eax,%eax;");
    asm("loc_6B67851: mov %eax,0x1C(%ebx);");
    asm("loc_6B67854: je loc_6B67862;");
    asm("loc_6B67856: pop %edi;");
    asm("loc_6B67857: pop %esi;");
    asm("loc_6B67858: pop %ebp;");
    asm("loc_6B67859: mov $0x17,%eax;");
    asm("loc_6B6785E: pop %ebx;");
    asm("loc_6B6785F: ret $0xC;");
    asm("loc_6B67862: mov (%ebp),%eax;");
    asm("loc_6B67865: mov 0x1C(%esp),%ecx;");
    asm("loc_6B67869: mov %eax,(%ecx);");
    asm("loc_6B6786B: mov 0xC(%ebx),%edx;");
    asm("loc_6B6786E: push %edx;");
    asm("loc_6B6786F: call _sub_6B4ECD0;");
    asm("loc_6B67874: mov %eax,%ecx;");
    asm("loc_6B67876: mov 4(%ecx),%esi;");
    asm("loc_6B67879: mov 0x1C(%ecx),%ebx;");
    asm("loc_6B6787C: mov 0x14(%ecx),%edx;");
    asm("loc_6B6787F: add $4,%esp;");
    asm("loc_6B67882: inc %esi;");
    asm("loc_6B67883: mov %esi,4(%ecx);");
    asm("loc_6B67886: mov (%ebp),%eax;");
    asm("loc_6B67889: add $2,%eax;");
    asm("loc_6B6788C: add %eax,%ebx;");
    asm("loc_6B6788E: mov %ebx,0x1C(%ecx);");
    asm("loc_6B67891: mov (%ebp),%ebp;");
    asm("loc_6B67894: add $2,%edx;");
    asm("loc_6B67897: cmp %edx,%ebp;");
    asm("loc_6B67899: jbe loc_6B678A1;");
    asm("loc_6B6789B: add $2,%ebp;");
    asm("loc_6B6789E: mov %ebp,0x14(%ecx);");
    asm("loc_6B678A1: mov 0x1C(%ecx),%eax;");
    asm("loc_6B678A4: xor %edx,%edx;");
    asm("loc_6B678A6: div %esi;");
    asm("loc_6B678A8: mov %eax,0xC(%ecx);");
    asm("loc_6B678AB: xor %eax,%eax;");
    asm("loc_6B678AD: pop %edi;");
    asm("loc_6B678AE: pop %esi;");
    asm("loc_6B678AF: pop %ebp;");
    asm("loc_6B678B0: pop %ebx;");
    asm("loc_6B678B1: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B678C0() // _sub_6B678C0
{
    __DEBUG_ASM(6B678C0);
    // chunk 0x6B678C0 _sub_6B678C0
    asm("loc_6B678C0: mov 8(%esp),%eax;");
    asm("loc_6B678C4: push %ebx;");
    asm("loc_6B678C5: push %ebp;");
    asm("loc_6B678C6: mov %ecx,%ebp;");
    asm("loc_6B678C8: mov 0xC(%esp),%ecx;");
    asm("loc_6B678CC: lea 0x10(%ebp),%ebx;");
    asm("loc_6B678CF: push %esi;");
    asm("loc_6B678D0: mov %eax,4(%ebx);");
    asm("loc_6B678D3: mov (%ecx),%edx;");
    asm("loc_6B678D5: push %edi;");
    asm("loc_6B678D6: mov %edx,8(%ebx);");
    asm("loc_6B678D9: movl $0,(%ebx);");
    asm("loc_6B678DF: movl $0,0xC(%ebx);");
    asm("loc_6B678E6: mov 0x14(%ebp),%eax;");
    asm("loc_6B678E9: push %ebx;");
    asm("loc_6B678EA: push %eax;");
    asm("loc_6B678EB: lea 0x18(%ebp),%esi;");
    asm("loc_6B678EE: push %esi;");
    asm("loc_6B678EF: mov %ebp,%ecx;");
    asm("loc_6B678F1: call _sub_6B4E740;");
    asm("loc_6B678F6: test %eax,%eax;");
    asm("loc_6B678F8: mov %eax,0x1C(%ebp);");
    asm("loc_6B678FB: je loc_6B67909;");
    asm("loc_6B678FD: pop %edi;");
    asm("loc_6B678FE: pop %esi;");
    asm("loc_6B678FF: pop %ebp;");
    asm("loc_6B67900: mov $0x16,%eax;");
    asm("loc_6B67905: pop %ebx;");
    asm("loc_6B67906: ret $0xC;");
    asm("loc_6B67909: mov (%ebx),%edx;");
    asm("loc_6B6790B: mov 4(%ebx),%ecx;");
    asm("loc_6B6790E: add $4,%edx;");
    asm("loc_6B67911: mov %edx,%eax;");
    asm("loc_6B67913: cmp %ecx,%eax;");
    asm("loc_6B67915: mov %edx,(%ebx);");
    asm("loc_6B67917: jbe loc_6B67920;");
    asm("loc_6B67919: movl $0x16,0xC(%ebx);");
    asm("loc_6B67920: mov 0x1C(%ebp),%eax;");
    asm("loc_6B67923: test %eax,%eax;");
    asm("loc_6B67925: je loc_6B67933;");
    asm("loc_6B67927: pop %edi;");
    asm("loc_6B67928: pop %esi;");
    asm("loc_6B67929: pop %ebp;");
    asm("loc_6B6792A: mov $0x16,%eax;");
    asm("loc_6B6792F: pop %ebx;");
    asm("loc_6B67930: ret $0xC;");
    asm("loc_6B67933: mov (%esi),%eax;");
    asm("loc_6B67935: mov 0x28(%ebp),%ecx;");
    asm("loc_6B67938: mov %ecx,(%eax);");
    asm("loc_6B6793A: mov 0x28(%ebp),%edx;");
    asm("loc_6B6793D: add $4,%eax;");
    asm("loc_6B67940: mov %eax,(%esi);");
    asm("loc_6B67942: mov (%ebx),%edi;");
    asm("loc_6B67944: mov 4(%ebx),%ecx;");
    asm("loc_6B67947: add %edx,%edi;");
    asm("loc_6B67949: mov %edi,%eax;");
    asm("loc_6B6794B: cmp %ecx,%eax;");
    asm("loc_6B6794D: mov %edi,(%ebx);");
    asm("loc_6B6794F: jbe loc_6B67958;");
    asm("loc_6B67951: movl $0x16,0xC(%ebx);");
    asm("loc_6B67958: mov 0x1C(%ebp),%eax;");
    asm("loc_6B6795B: test %eax,%eax;");
    asm("loc_6B6795D: je loc_6B6796B;");
    asm("loc_6B6795F: pop %edi;");
    asm("loc_6B67960: pop %esi;");
    asm("loc_6B67961: pop %ebp;");
    asm("loc_6B67962: mov $0x16,%eax;");
    asm("loc_6B67967: pop %ebx;");
    asm("loc_6B67968: ret $0xC;");
    asm("loc_6B6796B: mov 0x28(%ebp),%edx;");
    asm("loc_6B6796E: mov (%esi),%edi;");
    asm("loc_6B67970: mov 0x2C(%ebp),%esi;");
    asm("loc_6B67973: mov %edx,%ecx;");
    asm("loc_6B67975: mov %ecx,%eax;");
    asm("loc_6B67977: shr $2,%ecx;");
    asm("loc_6B6797A: mov %edi,0x18(%esp);");
    asm("loc_6B6797E: rep movsl (%esi),(%edi);");
    asm("loc_6B67980: mov %eax,%ecx;");
    asm("loc_6B67982: and $3,%ecx;");
    asm("loc_6B67985: rep movsb (%esi),(%edi);");
    asm("loc_6B67987: mov 0x18(%esp),%ecx;");
    asm("loc_6B6798B: add %ecx,%edx;");
    asm("loc_6B6798D: lea 0x18(%ebp),%ecx;");
    asm("loc_6B67990: mov %edx,(%ecx);");
    asm("loc_6B67992: mov (%ebx),%esi;");
    asm("loc_6B67994: mov 4(%ebx),%edx;");
    asm("loc_6B67997: add $4,%esi;");
    asm("loc_6B6799A: mov %esi,%eax;");
    asm("loc_6B6799C: cmp %edx,%eax;");
    asm("loc_6B6799E: mov %esi,(%ebx);");
    asm("loc_6B679A0: jbe loc_6B679A9;");
    asm("loc_6B679A2: movl $0x16,0xC(%ebx);");
    asm("loc_6B679A9: mov 0x1C(%ebp),%eax;");
    asm("loc_6B679AC: test %eax,%eax;");
    asm("loc_6B679AE: je loc_6B679BC;");
    asm("loc_6B679B0: pop %edi;");
    asm("loc_6B679B1: pop %esi;");
    asm("loc_6B679B2: pop %ebp;");
    asm("loc_6B679B3: mov $0x16,%eax;");
    asm("loc_6B679B8: pop %ebx;");
    asm("loc_6B679B9: ret $0xC;");
    asm("loc_6B679BC: mov (%ecx),%eax;");
    asm("loc_6B679BE: mov 0x20(%ebp),%edx;");
    asm("loc_6B679C1: mov %edx,(%eax);");
    asm("loc_6B679C3: add $4,%eax;");
    asm("loc_6B679C6: mov %eax,(%ecx);");
    asm("loc_6B679C8: mov (%ebx),%esi;");
    asm("loc_6B679CA: mov 4(%ebx),%edx;");
    asm("loc_6B679CD: add $4,%esi;");
    asm("loc_6B679D0: mov %esi,%eax;");
    asm("loc_6B679D2: cmp %edx,%eax;");
    asm("loc_6B679D4: mov %esi,(%ebx);");
    asm("loc_6B679D6: jbe loc_6B679DF;");
    asm("loc_6B679D8: movl $0x16,0xC(%ebx);");
    asm("loc_6B679DF: mov 0x1C(%ebp),%eax;");
    asm("loc_6B679E2: test %eax,%eax;");
    asm("loc_6B679E4: je loc_6B679F2;");
    asm("loc_6B679E6: pop %edi;");
    asm("loc_6B679E7: pop %esi;");
    asm("loc_6B679E8: pop %ebp;");
    asm("loc_6B679E9: mov $0x16,%eax;");
    asm("loc_6B679EE: pop %ebx;");
    asm("loc_6B679EF: ret $0xC;");
    asm("loc_6B679F2: mov (%ecx),%eax;");
    asm("loc_6B679F4: mov 0x24(%ebp),%edx;");
    asm("loc_6B679F7: mov %edx,(%eax);");
    asm("loc_6B679F9: add $4,%eax;");
    asm("loc_6B679FC: mov %eax,(%ecx);");
    asm("loc_6B679FE: mov 0x14(%ebp),%eax;");
    asm("loc_6B67A01: push %ebx;");
    asm("loc_6B67A02: push %eax;");
    asm("loc_6B67A03: push %ecx;");
    asm("loc_6B67A04: mov %ebp,%ecx;");
    asm("loc_6B67A06: call _sub_6B4E790;");
    asm("loc_6B67A0B: test %eax,%eax;");
    asm("loc_6B67A0D: mov %eax,0x1C(%ebp);");
    asm("loc_6B67A10: je loc_6B67A1E;");
    asm("loc_6B67A12: pop %edi;");
    asm("loc_6B67A13: pop %esi;");
    asm("loc_6B67A14: pop %ebp;");
    asm("loc_6B67A15: mov $0x16,%eax;");
    asm("loc_6B67A1A: pop %ebx;");
    asm("loc_6B67A1B: ret $0xC;");
    asm("loc_6B67A1E: mov (%ebx),%ecx;");
    asm("loc_6B67A20: mov 0x1C(%esp),%edx;");
    asm("loc_6B67A24: mov %ecx,(%edx);");
    asm("loc_6B67A26: mov 0xC(%ebp),%eax;");
    asm("loc_6B67A29: push %eax;");
    asm("loc_6B67A2A: call _sub_6B4ECD0;");
    asm("loc_6B67A2F: mov %eax,%ecx;");
    asm("loc_6B67A31: mov (%ecx),%ebp;");
    asm("loc_6B67A33: mov 0x18(%ecx),%edi;");
    asm("loc_6B67A36: mov 0x10(%ecx),%eax;");
    asm("loc_6B67A39: add $4,%esp;");
    asm("loc_6B67A3C: inc %ebp;");
    asm("loc_6B67A3D: mov %ebp,(%ecx);");
    asm("loc_6B67A3F: mov (%ebx),%edx;");
    asm("loc_6B67A41: add %edx,%edi;");
    asm("loc_6B67A43: mov %edi,0x18(%ecx);");
    asm("loc_6B67A46: mov (%ebx),%ebx;");
    asm("loc_6B67A48: cmp %eax,%ebx;");
    asm("loc_6B67A4A: mov %ebp,%esi;");
    asm("loc_6B67A4C: jbe loc_6B67A51;");
    asm("loc_6B67A4E: mov %ebx,0x10(%ecx);");
    asm("loc_6B67A51: mov 0x18(%ecx),%eax;");
    asm("loc_6B67A54: xor %edx,%edx;");
    asm("loc_6B67A56: div %esi;");
    asm("loc_6B67A58: pop %edi;");
    asm("loc_6B67A59: pop %esi;");
    asm("loc_6B67A5A: pop %ebp;");
    asm("loc_6B67A5B: pop %ebx;");
    asm("loc_6B67A5C: mov %eax,8(%ecx);");
    asm("loc_6B67A5F: xor %eax,%eax;");
    asm("loc_6B67A61: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67A70() // _sub_6B67A70
{
    __DEBUG_ASM(6B67A70);
    // chunk 0x6B67A70 _sub_6B67A70
    asm("loc_6B67A70: mov 8(%esp),%eax;");
    asm("loc_6B67A74: push %ebx;");
    asm("loc_6B67A75: push %ebp;");
    asm("loc_6B67A76: push %esi;");
    asm("loc_6B67A77: mov %ecx,%ebp;");
    asm("loc_6B67A79: mov 0x10(%esp),%ecx;");
    asm("loc_6B67A7D: lea 0x10(%ebp),%ebx;");
    asm("loc_6B67A80: push %edi;");
    asm("loc_6B67A81: push %ebx;");
    asm("loc_6B67A82: push %eax;");
    asm("loc_6B67A83: mov %ecx,8(%ebx);");
    asm("loc_6B67A86: lea 0x18(%ebp),%esi;");
    asm("loc_6B67A89: push %esi;");
    asm("loc_6B67A8A: mov %ebp,%ecx;");
    asm("loc_6B67A8C: mov %eax,4(%ebx);");
    asm("loc_6B67A8F: movl $0,(%ebx);");
    asm("loc_6B67A95: movl $0,0xC(%ebx);");
    asm("loc_6B67A9C: call _sub_6B4E780;");
    asm("loc_6B67AA1: test %eax,%eax;");
    asm("loc_6B67AA3: mov %eax,0x1C(%ebp);");
    asm("loc_6B67AA6: je loc_6B67AB4;");
    asm("loc_6B67AA8: pop %edi;");
    asm("loc_6B67AA9: pop %esi;");
    asm("loc_6B67AAA: pop %ebp;");
    asm("loc_6B67AAB: mov $0x17,%eax;");
    asm("loc_6B67AB0: pop %ebx;");
    asm("loc_6B67AB1: ret $0xC;");
    asm("loc_6B67AB4: mov (%ebx),%edx;");
    asm("loc_6B67AB6: mov 4(%ebx),%ecx;");
    asm("loc_6B67AB9: add $4,%edx;");
    asm("loc_6B67ABC: mov %edx,%eax;");
    asm("loc_6B67ABE: cmp %ecx,%eax;");
    asm("loc_6B67AC0: mov %edx,(%ebx);");
    asm("loc_6B67AC2: mov $0x17,%edi;");
    asm("loc_6B67AC7: jbe loc_6B67ACC;");
    asm("loc_6B67AC9: mov %edi,0xC(%ebx);");
    asm("loc_6B67ACC: mov 0x1C(%ebp),%eax;");
    asm("loc_6B67ACF: test %eax,%eax;");
    asm("loc_6B67AD1: jne loc_6B67C24;");
    asm("loc_6B67AD7: mov (%esi),%eax;");
    asm("loc_6B67AD9: mov (%eax),%edx;");
    asm("loc_6B67ADB: add $4,%eax;");
    asm("loc_6B67ADE: mov %eax,(%esi);");
    asm("loc_6B67AE0: mov %edx,0x28(%ebp);");
    asm("loc_6B67AE3: mov (%ebx),%eax;");
    asm("loc_6B67AE5: mov 4(%ebx),%ecx;");
    asm("loc_6B67AE8: add %edx,%eax;");
    asm("loc_6B67AEA: cmp %ecx,%eax;");
    asm("loc_6B67AEC: jbe loc_6B67AF1;");
    asm("loc_6B67AEE: mov %edi,0xC(%ebx);");
    asm("loc_6B67AF1: mov 0x1C(%ebp),%eax;");
    asm("loc_6B67AF4: test %eax,%eax;");
    asm("loc_6B67AF6: jne loc_6B67C24;");
    asm("loc_6B67AFC: mov 0x28(%ebp),%ecx;");
    asm("loc_6B67AFF: push %ecx;");
    asm("loc_6B67B00: call _sub_6B6A134;");
    asm("loc_6B67B05: add $4,%esp;");
    asm("loc_6B67B08: test %eax,%eax;");
    asm("loc_6B67B0A: mov %eax,0x2C(%ebp);");
    asm("loc_6B67B0D: jne loc_6B67B1B;");
    asm("loc_6B67B0F: pop %edi;");
    asm("loc_6B67B10: pop %esi;");
    asm("loc_6B67B11: pop %ebp;");
    asm("loc_6B67B12: mov $5,%eax;");
    asm("loc_6B67B17: pop %ebx;");
    asm("loc_6B67B18: ret $0xC;");
    asm("loc_6B67B1B: mov 0x28(%ebp),%edx;");
    asm("loc_6B67B1E: mov (%ebx),%eax;");
    asm("loc_6B67B20: mov 4(%ebx),%ecx;");
    asm("loc_6B67B23: add %edx,%eax;");
    asm("loc_6B67B25: cmp %ecx,%eax;");
    asm("loc_6B67B27: mov %eax,(%ebx);");
    asm("loc_6B67B29: jbe loc_6B67B2E;");
    asm("loc_6B67B2B: mov %edi,0xC(%ebx);");
    asm("loc_6B67B2E: mov 0x1C(%ebp),%eax;");
    asm("loc_6B67B31: test %eax,%eax;");
    asm("loc_6B67B33: jne loc_6B67C24;");
    asm("loc_6B67B39: mov 0x28(%ebp),%eax;");
    asm("loc_6B67B3C: mov (%esi),%esi;");
    asm("loc_6B67B3E: mov 0x2C(%ebp),%edi;");
    asm("loc_6B67B41: mov %eax,%ecx;");
    asm("loc_6B67B43: mov %ecx,%edx;");
    asm("loc_6B67B45: shr $2,%ecx;");
    asm("loc_6B67B48: mov %esi,0x14(%esp);");
    asm("loc_6B67B4C: rep movsl (%esi),(%edi);");
    asm("loc_6B67B4E: mov %edx,%ecx;");
    asm("loc_6B67B50: and $3,%ecx;");
    asm("loc_6B67B53: rep movsb (%esi),(%edi);");
    asm("loc_6B67B55: mov 0x14(%esp),%ecx;");
    asm("loc_6B67B59: lea (%ecx,%eax),%edx;");
    asm("loc_6B67B5C: lea 0x18(%ebp),%ecx;");
    asm("loc_6B67B5F: mov %edx,(%ecx);");
    asm("loc_6B67B61: mov (%ebx),%esi;");
    asm("loc_6B67B63: mov 4(%ebx),%edx;");
    asm("loc_6B67B66: add $4,%esi;");
    asm("loc_6B67B69: mov %esi,%eax;");
    asm("loc_6B67B6B: cmp %edx,%eax;");
    asm("loc_6B67B6D: mov %esi,(%ebx);");
    asm("loc_6B67B6F: jbe loc_6B67B78;");
    asm("loc_6B67B71: movl $0x17,0xC(%ebx);");
    asm("loc_6B67B78: mov 0x1C(%ebp),%eax;");
    asm("loc_6B67B7B: test %eax,%eax;");
    asm("loc_6B67B7D: jne loc_6B67C24;");
    asm("loc_6B67B83: mov (%ecx),%eax;");
    asm("loc_6B67B85: mov (%eax),%edx;");
    asm("loc_6B67B87: add $4,%eax;");
    asm("loc_6B67B8A: mov %eax,(%ecx);");
    asm("loc_6B67B8C: mov %edx,0x20(%ebp);");
    asm("loc_6B67B8F: mov (%ebx),%esi;");
    asm("loc_6B67B91: mov 4(%ebx),%edx;");
    asm("loc_6B67B94: add $4,%esi;");
    asm("loc_6B67B97: mov %esi,%eax;");
    asm("loc_6B67B99: cmp %edx,%eax;");
    asm("loc_6B67B9B: mov %esi,(%ebx);");
    asm("loc_6B67B9D: jbe loc_6B67BA6;");
    asm("loc_6B67B9F: movl $0x17,0xC(%ebx);");
    asm("loc_6B67BA6: mov 0x1C(%ebp),%eax;");
    asm("loc_6B67BA9: test %eax,%eax;");
    asm("loc_6B67BAB: jne loc_6B67C24;");
    asm("loc_6B67BAD: mov (%ecx),%eax;");
    asm("loc_6B67BAF: mov (%eax),%edx;");
    asm("loc_6B67BB1: add $4,%eax;");
    asm("loc_6B67BB4: mov %eax,(%ecx);");
    asm("loc_6B67BB6: mov 0x18(%esp),%eax;");
    asm("loc_6B67BBA: push %ebx;");
    asm("loc_6B67BBB: push %eax;");
    asm("loc_6B67BBC: push %ecx;");
    asm("loc_6B67BBD: mov %ebp,%ecx;");
    asm("loc_6B67BBF: mov %edx,0x24(%ebp);");
    asm("loc_6B67BC2: call _sub_6B4E7A0;");
    asm("loc_6B67BC7: test %eax,%eax;");
    asm("loc_6B67BC9: mov %eax,0x1C(%ebp);");
    asm("loc_6B67BCC: je loc_6B67BDA;");
    asm("loc_6B67BCE: pop %edi;");
    asm("loc_6B67BCF: pop %esi;");
    asm("loc_6B67BD0: pop %ebp;");
    asm("loc_6B67BD1: mov $0x17,%eax;");
    asm("loc_6B67BD6: pop %ebx;");
    asm("loc_6B67BD7: ret $0xC;");
    asm("loc_6B67BDA: mov (%ebx),%ecx;");
    asm("loc_6B67BDC: mov 0x1C(%esp),%edx;");
    asm("loc_6B67BE0: mov %ecx,(%edx);");
    asm("loc_6B67BE2: mov 0xC(%ebp),%eax;");
    asm("loc_6B67BE5: push %eax;");
    asm("loc_6B67BE6: call _sub_6B4ECD0;");
    asm("loc_6B67BEB: mov %eax,%ecx;");
    asm("loc_6B67BED: mov 4(%ecx),%edx;");
    asm("loc_6B67BF0: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B67BF3: mov 0x14(%ecx),%eax;");
    asm("loc_6B67BF6: add $4,%esp;");
    asm("loc_6B67BF9: inc %edx;");
    asm("loc_6B67BFA: mov %edx,4(%ecx);");
    asm("loc_6B67BFD: mov %edx,%esi;");
    asm("loc_6B67BFF: mov (%ebx),%edx;");
    asm("loc_6B67C01: add $2,%edx;");
    asm("loc_6B67C04: add %edx,%ebp;");
    asm("loc_6B67C06: mov %ebp,0x1C(%ecx);");
    asm("loc_6B67C09: mov (%ebx),%ebx;");
    asm("loc_6B67C0B: add $2,%eax;");
    asm("loc_6B67C0E: cmp %eax,%ebx;");
    asm("loc_6B67C10: jbe loc_6B67C18;");
    asm("loc_6B67C12: add $2,%ebx;");
    asm("loc_6B67C15: mov %ebx,0x14(%ecx);");
    asm("loc_6B67C18: mov 0x1C(%ecx),%eax;");
    asm("loc_6B67C1B: xor %edx,%edx;");
    asm("loc_6B67C1D: div %esi;");
    asm("loc_6B67C1F: mov %eax,0xC(%ecx);");
    asm("loc_6B67C22: xor %eax,%eax;");
    asm("loc_6B67C24: pop %edi;");
    asm("loc_6B67C25: pop %esi;");
    asm("loc_6B67C26: pop %ebp;");
    asm("loc_6B67C27: pop %ebx;");
    asm("loc_6B67C28: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67C30() // _sub_6B67C30
{
    __DEBUG_ASM(6B67C30);
    // chunk 0x6B67C30 _sub_6B67C30
    asm("loc_6B67C30: mov _data_6B6EA68,%eax;");
    asm("loc_6B67C35: mov %eax,_data_6B745C0;");
    asm("loc_6B67C3A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67C40() // _sub_6B67C40
{
    __DEBUG_ASM(6B67C40);
    // chunk 0x6B67C40 _sub_6B67C40
    asm("loc_6B67C40: mov _data_6B6EA68,%eax;");
    asm("loc_6B67C45: mov %eax,_data_6B745C4;");
    asm("loc_6B67C4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67C50() // _sub_6B67C50
{
    __DEBUG_ASM(6B67C50);
    // chunk 0x6B67C50 _sub_6B67C50
    asm("loc_6B67C50: mov _data_6B6EA6C,%eax;");
    asm("loc_6B67C55: mov %eax,_data_6B745BC;");
    asm("loc_6B67C5A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67C60() // _sub_6B67C60
{
    __DEBUG_ASM(6B67C60);
    // chunk 0x6B67C60 _sub_6B67C60
    asm("loc_6B67C60: mov 8(%esp),%eax;");
    asm("loc_6B67C64: push %ebx;");
    asm("loc_6B67C65: push %esi;");
    asm("loc_6B67C66: push %edi;");
    asm("loc_6B67C67: mov %ecx,%edi;");
    asm("loc_6B67C69: mov 0x10(%esp),%ecx;");
    asm("loc_6B67C6D: lea 0x10(%edi),%esi;");
    asm("loc_6B67C70: mov %eax,4(%esi);");
    asm("loc_6B67C73: mov (%ecx),%edx;");
    asm("loc_6B67C75: mov %edx,8(%esi);");
    asm("loc_6B67C78: movl $0,(%esi);");
    asm("loc_6B67C7E: movl $0,0xC(%esi);");
    asm("loc_6B67C85: mov 0x14(%edi),%eax;");
    asm("loc_6B67C88: push %esi;");
    asm("loc_6B67C89: push %eax;");
    asm("loc_6B67C8A: lea 0x18(%edi),%ebx;");
    asm("loc_6B67C8D: push %ebx;");
    asm("loc_6B67C8E: mov %edi,%ecx;");
    asm("loc_6B67C90: call _sub_6B4E740;");
    asm("loc_6B67C95: test %eax,%eax;");
    asm("loc_6B67C97: mov %eax,0x1C(%edi);");
    asm("loc_6B67C9A: je loc_6B67CA7;");
    asm("loc_6B67C9C: pop %edi;");
    asm("loc_6B67C9D: pop %esi;");
    asm("loc_6B67C9E: mov $0x16,%eax;");
    asm("loc_6B67CA3: pop %ebx;");
    asm("loc_6B67CA4: ret $0xC;");
    asm("loc_6B67CA7: mov (%esi),%edx;");
    asm("loc_6B67CA9: mov 4(%esi),%ecx;");
    asm("loc_6B67CAC: add $4,%edx;");
    asm("loc_6B67CAF: mov %edx,%eax;");
    asm("loc_6B67CB1: cmp %ecx,%eax;");
    asm("loc_6B67CB3: mov %edx,(%esi);");
    asm("loc_6B67CB5: jbe loc_6B67CBE;");
    asm("loc_6B67CB7: movl $0x16,0xC(%esi);");
    asm("loc_6B67CBE: mov 0x1C(%edi),%eax;");
    asm("loc_6B67CC1: test %eax,%eax;");
    asm("loc_6B67CC3: je loc_6B67CD0;");
    asm("loc_6B67CC5: pop %edi;");
    asm("loc_6B67CC6: pop %esi;");
    asm("loc_6B67CC7: mov $0x16,%eax;");
    asm("loc_6B67CCC: pop %ebx;");
    asm("loc_6B67CCD: ret $0xC;");
    asm("loc_6B67CD0: mov (%ebx),%eax;");
    asm("loc_6B67CD2: mov 0x20(%edi),%ecx;");
    asm("loc_6B67CD5: mov %ecx,(%eax);");
    asm("loc_6B67CD7: add $4,%eax;");
    asm("loc_6B67CDA: mov %eax,(%ebx);");
    asm("loc_6B67CDC: mov (%esi),%edx;");
    asm("loc_6B67CDE: mov 4(%esi),%ecx;");
    asm("loc_6B67CE1: add $2,%edx;");
    asm("loc_6B67CE4: mov %edx,%eax;");
    asm("loc_6B67CE6: cmp %ecx,%eax;");
    asm("loc_6B67CE8: mov %edx,(%esi);");
    asm("loc_6B67CEA: jbe loc_6B67CF3;");
    asm("loc_6B67CEC: movl $0x16,0xC(%esi);");
    asm("loc_6B67CF3: mov 0x1C(%edi),%eax;");
    asm("loc_6B67CF6: test %eax,%eax;");
    asm("loc_6B67CF8: je loc_6B67D05;");
    asm("loc_6B67CFA: pop %edi;");
    asm("loc_6B67CFB: pop %esi;");
    asm("loc_6B67CFC: mov $0x16,%eax;");
    asm("loc_6B67D01: pop %ebx;");
    asm("loc_6B67D02: ret $0xC;");
    asm("loc_6B67D05: mov (%ebx),%eax;");
    asm("loc_6B67D07: mov 0x26(%edi),%dx;");
    asm("loc_6B67D0B: mov %dx,(%eax);");
    asm("loc_6B67D0E: add $2,%eax;");
    asm("loc_6B67D11: mov %eax,(%ebx);");
    asm("loc_6B67D13: mov (%esi),%edx;");
    asm("loc_6B67D15: mov 4(%esi),%ecx;");
    asm("loc_6B67D18: inc %edx;");
    asm("loc_6B67D19: mov %edx,%eax;");
    asm("loc_6B67D1B: cmp %ecx,%eax;");
    asm("loc_6B67D1D: mov %edx,(%esi);");
    asm("loc_6B67D1F: jbe loc_6B67D28;");
    asm("loc_6B67D21: movl $0x16,0xC(%esi);");
    asm("loc_6B67D28: mov 0x1C(%edi),%eax;");
    asm("loc_6B67D2B: test %eax,%eax;");
    asm("loc_6B67D2D: je loc_6B67D3A;");
    asm("loc_6B67D2F: pop %edi;");
    asm("loc_6B67D30: pop %esi;");
    asm("loc_6B67D31: mov $0x16,%eax;");
    asm("loc_6B67D36: pop %ebx;");
    asm("loc_6B67D37: ret $0xC;");
    asm("loc_6B67D3A: mov (%ebx),%eax;");
    asm("loc_6B67D3C: mov 0x24(%edi),%cl;");
    asm("loc_6B67D3F: mov %cl,(%eax);");
    asm("loc_6B67D41: mov 0x14(%edi),%edx;");
    asm("loc_6B67D44: push %esi;");
    asm("loc_6B67D45: push %edx;");
    asm("loc_6B67D46: inc %eax;");
    asm("loc_6B67D47: push %ebx;");
    asm("loc_6B67D48: mov %edi,%ecx;");
    asm("loc_6B67D4A: mov %eax,(%ebx);");
    asm("loc_6B67D4C: call _sub_6B4E790;");
    asm("loc_6B67D51: test %eax,%eax;");
    asm("loc_6B67D53: mov %eax,0x1C(%edi);");
    asm("loc_6B67D56: je loc_6B67D63;");
    asm("loc_6B67D58: pop %edi;");
    asm("loc_6B67D59: pop %esi;");
    asm("loc_6B67D5A: mov $0x16,%eax;");
    asm("loc_6B67D5F: pop %ebx;");
    asm("loc_6B67D60: ret $0xC;");
    asm("loc_6B67D63: mov (%esi),%eax;");
    asm("loc_6B67D65: mov 0x18(%esp),%ecx;");
    asm("loc_6B67D69: mov %eax,(%ecx);");
    asm("loc_6B67D6B: mov 0xC(%edi),%edx;");
    asm("loc_6B67D6E: push %edx;");
    asm("loc_6B67D6F: call _sub_6B4ECD0;");
    asm("loc_6B67D74: mov %eax,%ecx;");
    asm("loc_6B67D76: mov (%ecx),%edi;");
    asm("loc_6B67D78: mov 0x18(%ecx),%edx;");
    asm("loc_6B67D7B: add $4,%esp;");
    asm("loc_6B67D7E: inc %edi;");
    asm("loc_6B67D7F: mov %edi,(%ecx);");
    asm("loc_6B67D81: mov (%esi),%eax;");
    asm("loc_6B67D83: add %eax,%edx;");
    asm("loc_6B67D85: mov 0x10(%ecx),%eax;");
    asm("loc_6B67D88: mov %edx,0x18(%ecx);");
    asm("loc_6B67D8B: mov (%esi),%esi;");
    asm("loc_6B67D8D: cmp %eax,%esi;");
    asm("loc_6B67D8F: jbe loc_6B67D94;");
    asm("loc_6B67D91: mov %esi,0x10(%ecx);");
    asm("loc_6B67D94: mov 0x18(%ecx),%eax;");
    asm("loc_6B67D97: xor %edx,%edx;");
    asm("loc_6B67D99: div %edi;");
    asm("loc_6B67D9B: pop %edi;");
    asm("loc_6B67D9C: pop %esi;");
    asm("loc_6B67D9D: pop %ebx;");
    asm("loc_6B67D9E: mov %eax,8(%ecx);");
    asm("loc_6B67DA1: xor %eax,%eax;");
    asm("loc_6B67DA3: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67DB0() // _sub_6B67DB0
{
    __DEBUG_ASM(6B67DB0);
    // chunk 0x6B67DB0 _sub_6B67DB0
    asm("loc_6B67DB0: mov 4(%esp),%eax;");
    asm("loc_6B67DB4: push %ebx;");
    asm("loc_6B67DB5: push %ebp;");
    asm("loc_6B67DB6: mov 0x10(%esp),%ebp;");
    asm("loc_6B67DBA: push %esi;");
    asm("loc_6B67DBB: push %edi;");
    asm("loc_6B67DBC: mov %ecx,%edi;");
    asm("loc_6B67DBE: lea 0x10(%edi),%esi;");
    asm("loc_6B67DC1: push %esi;");
    asm("loc_6B67DC2: push %ebp;");
    asm("loc_6B67DC3: lea 0x18(%edi),%ebx;");
    asm("loc_6B67DC6: push %ebx;");
    asm("loc_6B67DC7: mov %ebp,4(%esi);");
    asm("loc_6B67DCA: mov %eax,8(%esi);");
    asm("loc_6B67DCD: movl $0,(%esi);");
    asm("loc_6B67DD3: movl $0,0xC(%esi);");
    asm("loc_6B67DDA: call _sub_6B4E780;");
    asm("loc_6B67DDF: test %eax,%eax;");
    asm("loc_6B67DE1: mov %eax,0x1C(%edi);");
    asm("loc_6B67DE4: je loc_6B67DF2;");
    asm("loc_6B67DE6: pop %edi;");
    asm("loc_6B67DE7: pop %esi;");
    asm("loc_6B67DE8: pop %ebp;");
    asm("loc_6B67DE9: mov $0x17,%eax;");
    asm("loc_6B67DEE: pop %ebx;");
    asm("loc_6B67DEF: ret $0xC;");
    asm("loc_6B67DF2: mov (%esi),%edx;");
    asm("loc_6B67DF4: mov 4(%esi),%ecx;");
    asm("loc_6B67DF7: add $4,%edx;");
    asm("loc_6B67DFA: mov %edx,%eax;");
    asm("loc_6B67DFC: cmp %ecx,%eax;");
    asm("loc_6B67DFE: mov %edx,(%esi);");
    asm("loc_6B67E00: mov $0x17,%ecx;");
    asm("loc_6B67E05: jbe loc_6B67E0A;");
    asm("loc_6B67E07: mov %ecx,0xC(%esi);");
    asm("loc_6B67E0A: mov 0x1C(%edi),%eax;");
    asm("loc_6B67E0D: test %eax,%eax;");
    asm("loc_6B67E0F: jne loc_6B67ED2;");
    asm("loc_6B67E15: mov (%ebx),%eax;");
    asm("loc_6B67E17: mov (%eax),%edx;");
    asm("loc_6B67E19: add $4,%eax;");
    asm("loc_6B67E1C: mov %eax,(%ebx);");
    asm("loc_6B67E1E: mov %edx,0x20(%edi);");
    asm("loc_6B67E21: mov (%esi),%eax;");
    asm("loc_6B67E23: mov 4(%esi),%edx;");
    asm("loc_6B67E26: add $2,%eax;");
    asm("loc_6B67E29: cmp %edx,%eax;");
    asm("loc_6B67E2B: mov %eax,(%esi);");
    asm("loc_6B67E2D: jbe loc_6B67E32;");
    asm("loc_6B67E2F: mov %ecx,0xC(%esi);");
    asm("loc_6B67E32: mov 0x1C(%edi),%eax;");
    asm("loc_6B67E35: test %eax,%eax;");
    asm("loc_6B67E37: jne loc_6B67ED2;");
    asm("loc_6B67E3D: mov (%ebx),%eax;");
    asm("loc_6B67E3F: mov (%eax),%dx;");
    asm("loc_6B67E42: add $2,%eax;");
    asm("loc_6B67E45: mov %eax,(%ebx);");
    asm("loc_6B67E47: mov %dx,0x26(%edi);");
    asm("loc_6B67E4B: mov (%esi),%eax;");
    asm("loc_6B67E4D: mov 4(%esi),%edx;");
    asm("loc_6B67E50: inc %eax;");
    asm("loc_6B67E51: cmp %edx,%eax;");
    asm("loc_6B67E53: mov %eax,(%esi);");
    asm("loc_6B67E55: jbe loc_6B67E5A;");
    asm("loc_6B67E57: mov %ecx,0xC(%esi);");
    asm("loc_6B67E5A: mov 0x1C(%edi),%eax;");
    asm("loc_6B67E5D: test %eax,%eax;");
    asm("loc_6B67E5F: jne loc_6B67ED2;");
    asm("loc_6B67E61: mov (%ebx),%eax;");
    asm("loc_6B67E63: mov (%eax),%cl;");
    asm("loc_6B67E65: push %esi;");
    asm("loc_6B67E66: push %ebp;");
    asm("loc_6B67E67: mov %cl,0x24(%edi);");
    asm("loc_6B67E6A: inc %eax;");
    asm("loc_6B67E6B: push %ebx;");
    asm("loc_6B67E6C: mov %edi,%ecx;");
    asm("loc_6B67E6E: mov %eax,(%ebx);");
    asm("loc_6B67E70: call _sub_6B4E7A0;");
    asm("loc_6B67E75: test %eax,%eax;");
    asm("loc_6B67E77: mov %eax,0x1C(%edi);");
    asm("loc_6B67E7A: je loc_6B67E88;");
    asm("loc_6B67E7C: pop %edi;");
    asm("loc_6B67E7D: pop %esi;");
    asm("loc_6B67E7E: pop %ebp;");
    asm("loc_6B67E7F: mov $0x17,%eax;");
    asm("loc_6B67E84: pop %ebx;");
    asm("loc_6B67E85: ret $0xC;");
    asm("loc_6B67E88: mov (%esi),%edx;");
    asm("loc_6B67E8A: mov 0x1C(%esp),%eax;");
    asm("loc_6B67E8E: mov %edx,(%eax);");
    asm("loc_6B67E90: mov 0xC(%edi),%ecx;");
    asm("loc_6B67E93: push %ecx;");
    asm("loc_6B67E94: call _sub_6B4ECD0;");
    asm("loc_6B67E99: mov %eax,%ecx;");
    asm("loc_6B67E9B: mov 4(%ecx),%edx;");
    asm("loc_6B67E9E: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B67EA1: mov 0x14(%ecx),%eax;");
    asm("loc_6B67EA4: add $4,%esp;");
    asm("loc_6B67EA7: inc %edx;");
    asm("loc_6B67EA8: mov %edx,4(%ecx);");
    asm("loc_6B67EAB: mov %edx,%edi;");
    asm("loc_6B67EAD: mov (%esi),%edx;");
    asm("loc_6B67EAF: add $2,%edx;");
    asm("loc_6B67EB2: add %edx,%ebp;");
    asm("loc_6B67EB4: mov %ebp,0x1C(%ecx);");
    asm("loc_6B67EB7: mov (%esi),%esi;");
    asm("loc_6B67EB9: add $2,%eax;");
    asm("loc_6B67EBC: cmp %eax,%esi;");
    asm("loc_6B67EBE: jbe loc_6B67EC6;");
    asm("loc_6B67EC0: add $2,%esi;");
    asm("loc_6B67EC3: mov %esi,0x14(%ecx);");
    asm("loc_6B67EC6: mov 0x1C(%ecx),%eax;");
    asm("loc_6B67EC9: xor %edx,%edx;");
    asm("loc_6B67ECB: div %edi;");
    asm("loc_6B67ECD: mov %eax,0xC(%ecx);");
    asm("loc_6B67ED0: xor %eax,%eax;");
    asm("loc_6B67ED2: pop %edi;");
    asm("loc_6B67ED3: pop %esi;");
    asm("loc_6B67ED4: pop %ebp;");
    asm("loc_6B67ED5: pop %ebx;");
    asm("loc_6B67ED6: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67EE0() // _sub_6B67EE0
{
    __DEBUG_ASM(6B67EE0);
    // chunk 0x6B67EE0 _sub_6B67EE0
    asm("loc_6B67EE0: mov _data_6B6EA74,%eax;");
    asm("loc_6B67EE5: mov %eax,_data_6B745D0;");
    asm("loc_6B67EEA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67EF0() // _sub_6B67EF0
{
    __DEBUG_ASM(6B67EF0);
    // chunk 0x6B67EF0 _sub_6B67EF0
    asm("loc_6B67EF0: mov _data_6B6EA74,%eax;");
    asm("loc_6B67EF5: mov %eax,_data_6B745D4;");
    asm("loc_6B67EFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67F00() // _sub_6B67F00
{
    __DEBUG_ASM(6B67F00);
    // chunk 0x6B67F00 _sub_6B67F00
    asm("loc_6B67F00: mov _data_6B6EA78,%eax;");
    asm("loc_6B67F05: mov %eax,_data_6B745CC;");
    asm("loc_6B67F0A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B67F10() // _sub_6B67F10
{
    __DEBUG_ASM(6B67F10);
    // chunk 0x6B67F10 _sub_6B67F10
    asm("loc_6B67F10: mov 8(%esp),%eax;");
    asm("loc_6B67F14: push %ebx;");
    asm("loc_6B67F15: push %esi;");
    asm("loc_6B67F16: push %edi;");
    asm("loc_6B67F17: mov %ecx,%edi;");
    asm("loc_6B67F19: mov 0x10(%esp),%ecx;");
    asm("loc_6B67F1D: lea 0x10(%edi),%esi;");
    asm("loc_6B67F20: mov %eax,4(%esi);");
    asm("loc_6B67F23: mov (%ecx),%edx;");
    asm("loc_6B67F25: mov %edx,8(%esi);");
    asm("loc_6B67F28: movl $0,(%esi);");
    asm("loc_6B67F2E: movl $0,0xC(%esi);");
    asm("loc_6B67F35: mov 0x14(%edi),%eax;");
    asm("loc_6B67F38: push %esi;");
    asm("loc_6B67F39: push %eax;");
    asm("loc_6B67F3A: lea 0x18(%edi),%ebx;");
    asm("loc_6B67F3D: push %ebx;");
    asm("loc_6B67F3E: mov %edi,%ecx;");
    asm("loc_6B67F40: call _sub_6B4E740;");
    asm("loc_6B67F45: test %eax,%eax;");
    asm("loc_6B67F47: mov %eax,0x1C(%edi);");
    asm("loc_6B67F4A: je loc_6B67F57;");
    asm("loc_6B67F4C: pop %edi;");
    asm("loc_6B67F4D: pop %esi;");
    asm("loc_6B67F4E: mov $0x16,%eax;");
    asm("loc_6B67F53: pop %ebx;");
    asm("loc_6B67F54: ret $0xC;");
    asm("loc_6B67F57: mov (%esi),%edx;");
    asm("loc_6B67F59: mov 4(%esi),%ecx;");
    asm("loc_6B67F5C: add $4,%edx;");
    asm("loc_6B67F5F: mov %edx,%eax;");
    asm("loc_6B67F61: cmp %ecx,%eax;");
    asm("loc_6B67F63: mov %edx,(%esi);");
    asm("loc_6B67F65: jbe loc_6B67F6E;");
    asm("loc_6B67F67: movl $0x16,0xC(%esi);");
    asm("loc_6B67F6E: mov 0x1C(%edi),%eax;");
    asm("loc_6B67F71: test %eax,%eax;");
    asm("loc_6B67F73: je loc_6B67F80;");
    asm("loc_6B67F75: pop %edi;");
    asm("loc_6B67F76: pop %esi;");
    asm("loc_6B67F77: mov $0x16,%eax;");
    asm("loc_6B67F7C: pop %ebx;");
    asm("loc_6B67F7D: ret $0xC;");
    asm("loc_6B67F80: mov (%ebx),%eax;");
    asm("loc_6B67F82: mov 0x20(%edi),%ecx;");
    asm("loc_6B67F85: mov %ecx,(%eax);");
    asm("loc_6B67F87: add $4,%eax;");
    asm("loc_6B67F8A: mov %eax,(%ebx);");
    asm("loc_6B67F8C: mov (%esi),%edx;");
    asm("loc_6B67F8E: mov 4(%esi),%ecx;");
    asm("loc_6B67F91: inc %edx;");
    asm("loc_6B67F92: mov %edx,%eax;");
    asm("loc_6B67F94: cmp %ecx,%eax;");
    asm("loc_6B67F96: mov %edx,(%esi);");
    asm("loc_6B67F98: jbe loc_6B67FA1;");
    asm("loc_6B67F9A: movl $0x16,0xC(%esi);");
    asm("loc_6B67FA1: mov 0x1C(%edi),%eax;");
    asm("loc_6B67FA4: test %eax,%eax;");
    asm("loc_6B67FA6: je loc_6B67FB3;");
    asm("loc_6B67FA8: pop %edi;");
    asm("loc_6B67FA9: pop %esi;");
    asm("loc_6B67FAA: mov $0x16,%eax;");
    asm("loc_6B67FAF: pop %ebx;");
    asm("loc_6B67FB0: ret $0xC;");
    asm("loc_6B67FB3: mov (%ebx),%eax;");
    asm("loc_6B67FB5: mov 0x24(%edi),%dl;");
    asm("loc_6B67FB8: mov %dl,(%eax);");
    asm("loc_6B67FBA: inc %eax;");
    asm("loc_6B67FBB: mov %eax,(%ebx);");
    asm("loc_6B67FBD: mov (%esi),%edx;");
    asm("loc_6B67FBF: mov 4(%esi),%ecx;");
    asm("loc_6B67FC2: inc %edx;");
    asm("loc_6B67FC3: mov %edx,%eax;");
    asm("loc_6B67FC5: cmp %ecx,%eax;");
    asm("loc_6B67FC7: mov %edx,(%esi);");
    asm("loc_6B67FC9: jbe loc_6B67FD2;");
    asm("loc_6B67FCB: movl $0x16,0xC(%esi);");
    asm("loc_6B67FD2: mov 0x1C(%edi),%eax;");
    asm("loc_6B67FD5: test %eax,%eax;");
    asm("loc_6B67FD7: je loc_6B67FE4;");
    asm("loc_6B67FD9: pop %edi;");
    asm("loc_6B67FDA: pop %esi;");
    asm("loc_6B67FDB: mov $0x16,%eax;");
    asm("loc_6B67FE0: pop %ebx;");
    asm("loc_6B67FE1: ret $0xC;");
    asm("loc_6B67FE4: mov (%ebx),%eax;");
    asm("loc_6B67FE6: mov 0x25(%edi),%cl;");
    asm("loc_6B67FE9: mov %cl,(%eax);");
    asm("loc_6B67FEB: mov 0x14(%edi),%edx;");
    asm("loc_6B67FEE: push %esi;");
    asm("loc_6B67FEF: push %edx;");
    asm("loc_6B67FF0: inc %eax;");
    asm("loc_6B67FF1: push %ebx;");
    asm("loc_6B67FF2: mov %edi,%ecx;");
    asm("loc_6B67FF4: mov %eax,(%ebx);");
    asm("loc_6B67FF6: call _sub_6B4E790;");
    asm("loc_6B67FFB: test %eax,%eax;");
    asm("loc_6B67FFD: mov %eax,0x1C(%edi);");
    asm("loc_6B68000: je loc_6B6800D;");
    asm("loc_6B68002: pop %edi;");
    asm("loc_6B68003: pop %esi;");
    asm("loc_6B68004: mov $0x16,%eax;");
    asm("loc_6B68009: pop %ebx;");
    asm("loc_6B6800A: ret $0xC;");
    asm("loc_6B6800D: mov (%esi),%eax;");
    asm("loc_6B6800F: mov 0x18(%esp),%ecx;");
    asm("loc_6B68013: mov %eax,(%ecx);");
    asm("loc_6B68015: mov 0xC(%edi),%edx;");
    asm("loc_6B68018: push %edx;");
    asm("loc_6B68019: call _sub_6B4ECD0;");
    asm("loc_6B6801E: mov %eax,%ecx;");
    asm("loc_6B68020: mov (%ecx),%edi;");
    asm("loc_6B68022: mov 0x18(%ecx),%edx;");
    asm("loc_6B68025: add $4,%esp;");
    asm("loc_6B68028: inc %edi;");
    asm("loc_6B68029: mov %edi,(%ecx);");
    asm("loc_6B6802B: mov (%esi),%eax;");
    asm("loc_6B6802D: add %eax,%edx;");
    asm("loc_6B6802F: mov 0x10(%ecx),%eax;");
    asm("loc_6B68032: mov %edx,0x18(%ecx);");
    asm("loc_6B68035: mov (%esi),%esi;");
    asm("loc_6B68037: cmp %eax,%esi;");
    asm("loc_6B68039: jbe loc_6B6803E;");
    asm("loc_6B6803B: mov %esi,0x10(%ecx);");
    asm("loc_6B6803E: mov 0x18(%ecx),%eax;");
    asm("loc_6B68041: xor %edx,%edx;");
    asm("loc_6B68043: div %edi;");
    asm("loc_6B68045: pop %edi;");
    asm("loc_6B68046: pop %esi;");
    asm("loc_6B68047: pop %ebx;");
    asm("loc_6B68048: mov %eax,8(%ecx);");
    asm("loc_6B6804B: xor %eax,%eax;");
    asm("loc_6B6804D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68050() // _sub_6B68050
{
    __DEBUG_ASM(6B68050);
    // chunk 0x6B68050 _sub_6B68050
    asm("loc_6B68050: mov 4(%esp),%eax;");
    asm("loc_6B68054: push %ebx;");
    asm("loc_6B68055: push %ebp;");
    asm("loc_6B68056: mov 0x10(%esp),%ebp;");
    asm("loc_6B6805A: push %esi;");
    asm("loc_6B6805B: push %edi;");
    asm("loc_6B6805C: mov %ecx,%edi;");
    asm("loc_6B6805E: lea 0x10(%edi),%esi;");
    asm("loc_6B68061: push %esi;");
    asm("loc_6B68062: push %ebp;");
    asm("loc_6B68063: lea 0x18(%edi),%ebx;");
    asm("loc_6B68066: push %ebx;");
    asm("loc_6B68067: mov %ebp,4(%esi);");
    asm("loc_6B6806A: mov %eax,8(%esi);");
    asm("loc_6B6806D: movl $0,(%esi);");
    asm("loc_6B68073: movl $0,0xC(%esi);");
    asm("loc_6B6807A: call _sub_6B4E780;");
    asm("loc_6B6807F: test %eax,%eax;");
    asm("loc_6B68081: mov %eax,0x1C(%edi);");
    asm("loc_6B68084: je loc_6B68092;");
    asm("loc_6B68086: pop %edi;");
    asm("loc_6B68087: pop %esi;");
    asm("loc_6B68088: pop %ebp;");
    asm("loc_6B68089: mov $0x17,%eax;");
    asm("loc_6B6808E: pop %ebx;");
    asm("loc_6B6808F: ret $0xC;");
    asm("loc_6B68092: mov (%esi),%edx;");
    asm("loc_6B68094: mov 4(%esi),%ecx;");
    asm("loc_6B68097: add $4,%edx;");
    asm("loc_6B6809A: mov %edx,%eax;");
    asm("loc_6B6809C: cmp %ecx,%eax;");
    asm("loc_6B6809E: mov %edx,(%esi);");
    asm("loc_6B680A0: mov $0x17,%ecx;");
    asm("loc_6B680A5: jbe loc_6B680AA;");
    asm("loc_6B680A7: mov %ecx,0xC(%esi);");
    asm("loc_6B680AA: mov 0x1C(%edi),%eax;");
    asm("loc_6B680AD: test %eax,%eax;");
    asm("loc_6B680AF: jne loc_6B6816C;");
    asm("loc_6B680B5: mov (%ebx),%eax;");
    asm("loc_6B680B7: mov (%eax),%edx;");
    asm("loc_6B680B9: add $4,%eax;");
    asm("loc_6B680BC: mov %eax,(%ebx);");
    asm("loc_6B680BE: mov %edx,0x20(%edi);");
    asm("loc_6B680C1: mov (%esi),%eax;");
    asm("loc_6B680C3: mov 4(%esi),%edx;");
    asm("loc_6B680C6: inc %eax;");
    asm("loc_6B680C7: cmp %edx,%eax;");
    asm("loc_6B680C9: mov %eax,(%esi);");
    asm("loc_6B680CB: jbe loc_6B680D0;");
    asm("loc_6B680CD: mov %ecx,0xC(%esi);");
    asm("loc_6B680D0: mov 0x1C(%edi),%eax;");
    asm("loc_6B680D3: test %eax,%eax;");
    asm("loc_6B680D5: jne loc_6B6816C;");
    asm("loc_6B680DB: mov (%ebx),%eax;");
    asm("loc_6B680DD: mov (%eax),%dl;");
    asm("loc_6B680DF: inc %eax;");
    asm("loc_6B680E0: mov %eax,(%ebx);");
    asm("loc_6B680E2: mov %dl,0x24(%edi);");
    asm("loc_6B680E5: mov (%esi),%eax;");
    asm("loc_6B680E7: mov 4(%esi),%edx;");
    asm("loc_6B680EA: inc %eax;");
    asm("loc_6B680EB: cmp %edx,%eax;");
    asm("loc_6B680ED: mov %eax,(%esi);");
    asm("loc_6B680EF: jbe loc_6B680F4;");
    asm("loc_6B680F1: mov %ecx,0xC(%esi);");
    asm("loc_6B680F4: mov 0x1C(%edi),%eax;");
    asm("loc_6B680F7: test %eax,%eax;");
    asm("loc_6B680F9: jne loc_6B6816C;");
    asm("loc_6B680FB: mov (%ebx),%eax;");
    asm("loc_6B680FD: mov (%eax),%cl;");
    asm("loc_6B680FF: push %esi;");
    asm("loc_6B68100: push %ebp;");
    asm("loc_6B68101: mov %cl,0x25(%edi);");
    asm("loc_6B68104: inc %eax;");
    asm("loc_6B68105: push %ebx;");
    asm("loc_6B68106: mov %edi,%ecx;");
    asm("loc_6B68108: mov %eax,(%ebx);");
    asm("loc_6B6810A: call _sub_6B4E7A0;");
    asm("loc_6B6810F: test %eax,%eax;");
    asm("loc_6B68111: mov %eax,0x1C(%edi);");
    asm("loc_6B68114: je loc_6B68122;");
    asm("loc_6B68116: pop %edi;");
    asm("loc_6B68117: pop %esi;");
    asm("loc_6B68118: pop %ebp;");
    asm("loc_6B68119: mov $0x17,%eax;");
    asm("loc_6B6811E: pop %ebx;");
    asm("loc_6B6811F: ret $0xC;");
    asm("loc_6B68122: mov (%esi),%edx;");
    asm("loc_6B68124: mov 0x1C(%esp),%eax;");
    asm("loc_6B68128: mov %edx,(%eax);");
    asm("loc_6B6812A: mov 0xC(%edi),%ecx;");
    asm("loc_6B6812D: push %ecx;");
    asm("loc_6B6812E: call _sub_6B4ECD0;");
    asm("loc_6B68133: mov %eax,%ecx;");
    asm("loc_6B68135: mov 4(%ecx),%edx;");
    asm("loc_6B68138: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B6813B: mov 0x14(%ecx),%eax;");
    asm("loc_6B6813E: add $4,%esp;");
    asm("loc_6B68141: inc %edx;");
    asm("loc_6B68142: mov %edx,4(%ecx);");
    asm("loc_6B68145: mov %edx,%edi;");
    asm("loc_6B68147: mov (%esi),%edx;");
    asm("loc_6B68149: add $2,%edx;");
    asm("loc_6B6814C: add %edx,%ebp;");
    asm("loc_6B6814E: mov %ebp,0x1C(%ecx);");
    asm("loc_6B68151: mov (%esi),%esi;");
    asm("loc_6B68153: add $2,%eax;");
    asm("loc_6B68156: cmp %eax,%esi;");
    asm("loc_6B68158: jbe loc_6B68160;");
    asm("loc_6B6815A: add $2,%esi;");
    asm("loc_6B6815D: mov %esi,0x14(%ecx);");
    asm("loc_6B68160: mov 0x1C(%ecx),%eax;");
    asm("loc_6B68163: xor %edx,%edx;");
    asm("loc_6B68165: div %edi;");
    asm("loc_6B68167: mov %eax,0xC(%ecx);");
    asm("loc_6B6816A: xor %eax,%eax;");
    asm("loc_6B6816C: pop %edi;");
    asm("loc_6B6816D: pop %esi;");
    asm("loc_6B6816E: pop %ebp;");
    asm("loc_6B6816F: pop %ebx;");
    asm("loc_6B68170: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68180() // _sub_6B68180
{
    __DEBUG_ASM(6B68180);
    // chunk 0x6B68180 _sub_6B68180
    asm("loc_6B68180: mov 8(%esp),%eax;");
    asm("loc_6B68184: push %ebx;");
    asm("loc_6B68185: push %ebp;");
    asm("loc_6B68186: push %esi;");
    asm("loc_6B68187: push %edi;");
    asm("loc_6B68188: mov %ecx,%edi;");
    asm("loc_6B6818A: mov 0x14(%esp),%ecx;");
    asm("loc_6B6818E: lea 0x10(%edi),%esi;");
    asm("loc_6B68191: mov %eax,4(%esi);");
    asm("loc_6B68194: mov (%ecx),%edx;");
    asm("loc_6B68196: mov %edx,8(%esi);");
    asm("loc_6B68199: movl $0,(%esi);");
    asm("loc_6B6819F: movl $0,0xC(%esi);");
    asm("loc_6B681A6: mov 0x14(%edi),%eax;");
    asm("loc_6B681A9: push %esi;");
    asm("loc_6B681AA: push %eax;");
    asm("loc_6B681AB: lea 0x18(%edi),%ebx;");
    asm("loc_6B681AE: push %ebx;");
    asm("loc_6B681AF: mov %edi,%ecx;");
    asm("loc_6B681B1: call _sub_6B4E740;");
    asm("loc_6B681B6: test %eax,%eax;");
    asm("loc_6B681B8: mov %eax,0x1C(%edi);");
    asm("loc_6B681BB: je loc_6B681C9;");
    asm("loc_6B681BD: pop %edi;");
    asm("loc_6B681BE: pop %esi;");
    asm("loc_6B681BF: pop %ebp;");
    asm("loc_6B681C0: mov $0x16,%eax;");
    asm("loc_6B681C5: pop %ebx;");
    asm("loc_6B681C6: ret $0xC;");
    asm("loc_6B681C9: mov (%esi),%edx;");
    asm("loc_6B681CB: mov 4(%esi),%ecx;");
    asm("loc_6B681CE: add $4,%edx;");
    asm("loc_6B681D1: mov %edx,%eax;");
    asm("loc_6B681D3: cmp %ecx,%eax;");
    asm("loc_6B681D5: mov %edx,(%esi);");
    asm("loc_6B681D7: mov $0x16,%ebp;");
    asm("loc_6B681DC: jbe loc_6B681E1;");
    asm("loc_6B681DE: mov %ebp,0xC(%esi);");
    asm("loc_6B681E1: mov 0x1C(%edi),%eax;");
    asm("loc_6B681E4: test %eax,%eax;");
    asm("loc_6B681E6: je loc_6B681F1;");
    asm("loc_6B681E8: pop %edi;");
    asm("loc_6B681E9: pop %esi;");
    asm("loc_6B681EA: mov %ebp,%eax;");
    asm("loc_6B681EC: pop %ebp;");
    asm("loc_6B681ED: pop %ebx;");
    asm("loc_6B681EE: ret $0xC;");
    asm("loc_6B681F1: mov (%ebx),%eax;");
    asm("loc_6B681F3: mov 0x20(%edi),%ecx;");
    asm("loc_6B681F6: mov %ecx,(%eax);");
    asm("loc_6B681F8: add $4,%eax;");
    asm("loc_6B681FB: mov %eax,(%ebx);");
    asm("loc_6B681FD: mov (%esi),%edx;");
    asm("loc_6B681FF: mov 4(%esi),%ecx;");
    asm("loc_6B68202: add $4,%edx;");
    asm("loc_6B68205: mov %edx,%eax;");
    asm("loc_6B68207: cmp %ecx,%eax;");
    asm("loc_6B68209: mov %edx,(%esi);");
    asm("loc_6B6820B: jbe loc_6B68210;");
    asm("loc_6B6820D: mov %ebp,0xC(%esi);");
    asm("loc_6B68210: mov 0x1C(%edi),%eax;");
    asm("loc_6B68213: test %eax,%eax;");
    asm("loc_6B68215: je loc_6B68220;");
    asm("loc_6B68217: pop %edi;");
    asm("loc_6B68218: pop %esi;");
    asm("loc_6B68219: mov %ebp,%eax;");
    asm("loc_6B6821B: pop %ebp;");
    asm("loc_6B6821C: pop %ebx;");
    asm("loc_6B6821D: ret $0xC;");
    asm("loc_6B68220: mov (%ebx),%eax;");
    asm("loc_6B68222: mov 0x24(%edi),%edx;");
    asm("loc_6B68225: mov %edx,(%eax);");
    asm("loc_6B68227: add $4,%eax;");
    asm("loc_6B6822A: mov %eax,(%ebx);");
    asm("loc_6B6822C: mov (%esi),%edx;");
    asm("loc_6B6822E: mov 4(%esi),%ecx;");
    asm("loc_6B68231: add $4,%edx;");
    asm("loc_6B68234: mov %edx,%eax;");
    asm("loc_6B68236: cmp %ecx,%eax;");
    asm("loc_6B68238: mov %edx,(%esi);");
    asm("loc_6B6823A: jbe loc_6B6823F;");
    asm("loc_6B6823C: mov %ebp,0xC(%esi);");
    asm("loc_6B6823F: mov 0x1C(%edi),%eax;");
    asm("loc_6B68242: test %eax,%eax;");
    asm("loc_6B68244: je loc_6B6824F;");
    asm("loc_6B68246: pop %edi;");
    asm("loc_6B68247: pop %esi;");
    asm("loc_6B68248: mov %ebp,%eax;");
    asm("loc_6B6824A: pop %ebp;");
    asm("loc_6B6824B: pop %ebx;");
    asm("loc_6B6824C: ret $0xC;");
    asm("loc_6B6824F: mov (%ebx),%eax;");
    asm("loc_6B68251: mov 0x28(%edi),%ecx;");
    asm("loc_6B68254: mov %ecx,(%eax);");
    asm("loc_6B68256: add $4,%eax;");
    asm("loc_6B68259: mov %eax,(%ebx);");
    asm("loc_6B6825B: mov (%esi),%edx;");
    asm("loc_6B6825D: mov 4(%esi),%ecx;");
    asm("loc_6B68260: inc %edx;");
    asm("loc_6B68261: mov %edx,%eax;");
    asm("loc_6B68263: cmp %ecx,%eax;");
    asm("loc_6B68265: mov %edx,(%esi);");
    asm("loc_6B68267: jbe loc_6B6826C;");
    asm("loc_6B68269: mov %ebp,0xC(%esi);");
    asm("loc_6B6826C: mov 0x1C(%edi),%eax;");
    asm("loc_6B6826F: test %eax,%eax;");
    asm("loc_6B68271: je loc_6B6827C;");
    asm("loc_6B68273: pop %edi;");
    asm("loc_6B68274: pop %esi;");
    asm("loc_6B68275: mov %ebp,%eax;");
    asm("loc_6B68277: pop %ebp;");
    asm("loc_6B68278: pop %ebx;");
    asm("loc_6B68279: ret $0xC;");
    asm("loc_6B6827C: mov (%ebx),%eax;");
    asm("loc_6B6827E: mov 0x2C(%edi),%dl;");
    asm("loc_6B68281: mov %dl,(%eax);");
    asm("loc_6B68283: inc %eax;");
    asm("loc_6B68284: mov %eax,(%ebx);");
    asm("loc_6B68286: mov 0x14(%edi),%eax;");
    asm("loc_6B68289: push %esi;");
    asm("loc_6B6828A: push %eax;");
    asm("loc_6B6828B: push %ebx;");
    asm("loc_6B6828C: mov %edi,%ecx;");
    asm("loc_6B6828E: call _sub_6B4E790;");
    asm("loc_6B68293: test %eax,%eax;");
    asm("loc_6B68295: mov %eax,0x1C(%edi);");
    asm("loc_6B68298: je loc_6B682A3;");
    asm("loc_6B6829A: pop %edi;");
    asm("loc_6B6829B: pop %esi;");
    asm("loc_6B6829C: mov %ebp,%eax;");
    asm("loc_6B6829E: pop %ebp;");
    asm("loc_6B6829F: pop %ebx;");
    asm("loc_6B682A0: ret $0xC;");
    asm("loc_6B682A3: mov (%esi),%ecx;");
    asm("loc_6B682A5: mov 0x1C(%esp),%edx;");
    asm("loc_6B682A9: mov %ecx,(%edx);");
    asm("loc_6B682AB: mov 0xC(%edi),%eax;");
    asm("loc_6B682AE: push %eax;");
    asm("loc_6B682AF: call _sub_6B4ECD0;");
    asm("loc_6B682B4: mov %eax,%ecx;");
    asm("loc_6B682B6: mov (%ecx),%ebp;");
    asm("loc_6B682B8: mov 0x18(%ecx),%ebx;");
    asm("loc_6B682BB: mov 0x10(%ecx),%eax;");
    asm("loc_6B682BE: add $4,%esp;");
    asm("loc_6B682C1: inc %ebp;");
    asm("loc_6B682C2: mov %ebp,(%ecx);");
    asm("loc_6B682C4: mov (%esi),%edx;");
    asm("loc_6B682C6: add %edx,%ebx;");
    asm("loc_6B682C8: mov %ebx,0x18(%ecx);");
    asm("loc_6B682CB: mov (%esi),%esi;");
    asm("loc_6B682CD: cmp %eax,%esi;");
    asm("loc_6B682CF: mov %ebp,%edi;");
    asm("loc_6B682D1: jbe loc_6B682D6;");
    asm("loc_6B682D3: mov %esi,0x10(%ecx);");
    asm("loc_6B682D6: mov 0x18(%ecx),%eax;");
    asm("loc_6B682D9: xor %edx,%edx;");
    asm("loc_6B682DB: div %edi;");
    asm("loc_6B682DD: pop %edi;");
    asm("loc_6B682DE: pop %esi;");
    asm("loc_6B682DF: pop %ebp;");
    asm("loc_6B682E0: pop %ebx;");
    asm("loc_6B682E1: mov %eax,8(%ecx);");
    asm("loc_6B682E4: xor %eax,%eax;");
    asm("loc_6B682E6: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B682F0() // _sub_6B682F0
{
    __DEBUG_ASM(6B682F0);
    // chunk 0x6B682F0 _sub_6B682F0
    asm("loc_6B682F0: mov 4(%esp),%eax;");
    asm("loc_6B682F4: push %ebx;");
    asm("loc_6B682F5: push %ebp;");
    asm("loc_6B682F6: mov 0x10(%esp),%ebp;");
    asm("loc_6B682FA: push %esi;");
    asm("loc_6B682FB: push %edi;");
    asm("loc_6B682FC: mov %ecx,%edi;");
    asm("loc_6B682FE: lea 0x10(%edi),%esi;");
    asm("loc_6B68301: push %esi;");
    asm("loc_6B68302: push %ebp;");
    asm("loc_6B68303: lea 0x18(%edi),%ebx;");
    asm("loc_6B68306: push %ebx;");
    asm("loc_6B68307: mov %ebp,4(%esi);");
    asm("loc_6B6830A: mov %eax,8(%esi);");
    asm("loc_6B6830D: movl $0,(%esi);");
    asm("loc_6B68313: movl $0,0xC(%esi);");
    asm("loc_6B6831A: call _sub_6B4E780;");
    asm("loc_6B6831F: test %eax,%eax;");
    asm("loc_6B68321: mov %eax,0x1C(%edi);");
    asm("loc_6B68324: je loc_6B68332;");
    asm("loc_6B68326: pop %edi;");
    asm("loc_6B68327: pop %esi;");
    asm("loc_6B68328: pop %ebp;");
    asm("loc_6B68329: mov $0x17,%eax;");
    asm("loc_6B6832E: pop %ebx;");
    asm("loc_6B6832F: ret $0xC;");
    asm("loc_6B68332: mov (%esi),%edx;");
    asm("loc_6B68334: mov 4(%esi),%ecx;");
    asm("loc_6B68337: add $4,%edx;");
    asm("loc_6B6833A: mov %edx,%eax;");
    asm("loc_6B6833C: cmp %ecx,%eax;");
    asm("loc_6B6833E: mov %edx,(%esi);");
    asm("loc_6B68340: mov $0x17,%ecx;");
    asm("loc_6B68345: jbe loc_6B6834A;");
    asm("loc_6B68347: mov %ecx,0xC(%esi);");
    asm("loc_6B6834A: mov 0x1C(%edi),%eax;");
    asm("loc_6B6834D: test %eax,%eax;");
    asm("loc_6B6834F: jne loc_6B68438;");
    asm("loc_6B68355: mov (%ebx),%eax;");
    asm("loc_6B68357: mov (%eax),%edx;");
    asm("loc_6B68359: add $4,%eax;");
    asm("loc_6B6835C: mov %eax,(%ebx);");
    asm("loc_6B6835E: mov %edx,0x20(%edi);");
    asm("loc_6B68361: mov (%esi),%eax;");
    asm("loc_6B68363: mov 4(%esi),%edx;");
    asm("loc_6B68366: add $4,%eax;");
    asm("loc_6B68369: cmp %edx,%eax;");
    asm("loc_6B6836B: mov %eax,(%esi);");
    asm("loc_6B6836D: jbe loc_6B68372;");
    asm("loc_6B6836F: mov %ecx,0xC(%esi);");
    asm("loc_6B68372: mov 0x1C(%edi),%eax;");
    asm("loc_6B68375: test %eax,%eax;");
    asm("loc_6B68377: jne loc_6B68438;");
    asm("loc_6B6837D: mov (%ebx),%eax;");
    asm("loc_6B6837F: mov (%eax),%edx;");
    asm("loc_6B68381: add $4,%eax;");
    asm("loc_6B68384: mov %eax,(%ebx);");
    asm("loc_6B68386: mov %edx,0x24(%edi);");
    asm("loc_6B68389: mov (%esi),%eax;");
    asm("loc_6B6838B: mov 4(%esi),%edx;");
    asm("loc_6B6838E: add $4,%eax;");
    asm("loc_6B68391: cmp %edx,%eax;");
    asm("loc_6B68393: mov %eax,(%esi);");
    asm("loc_6B68395: jbe loc_6B6839A;");
    asm("loc_6B68397: mov %ecx,0xC(%esi);");
    asm("loc_6B6839A: mov 0x1C(%edi),%eax;");
    asm("loc_6B6839D: test %eax,%eax;");
    asm("loc_6B6839F: jne loc_6B68438;");
    asm("loc_6B683A5: mov (%ebx),%eax;");
    asm("loc_6B683A7: mov (%eax),%edx;");
    asm("loc_6B683A9: add $4,%eax;");
    asm("loc_6B683AC: mov %eax,(%ebx);");
    asm("loc_6B683AE: mov %edx,0x28(%edi);");
    asm("loc_6B683B1: mov (%esi),%eax;");
    asm("loc_6B683B3: mov 4(%esi),%edx;");
    asm("loc_6B683B6: inc %eax;");
    asm("loc_6B683B7: cmp %edx,%eax;");
    asm("loc_6B683B9: mov %eax,(%esi);");
    asm("loc_6B683BB: jbe loc_6B683C0;");
    asm("loc_6B683BD: mov %ecx,0xC(%esi);");
    asm("loc_6B683C0: mov 0x1C(%edi),%eax;");
    asm("loc_6B683C3: test %eax,%eax;");
    asm("loc_6B683C5: jne loc_6B68438;");
    asm("loc_6B683C7: mov (%ebx),%eax;");
    asm("loc_6B683C9: mov (%eax),%cl;");
    asm("loc_6B683CB: push %esi;");
    asm("loc_6B683CC: push %ebp;");
    asm("loc_6B683CD: mov %cl,0x2C(%edi);");
    asm("loc_6B683D0: inc %eax;");
    asm("loc_6B683D1: push %ebx;");
    asm("loc_6B683D2: mov %edi,%ecx;");
    asm("loc_6B683D4: mov %eax,(%ebx);");
    asm("loc_6B683D6: call _sub_6B4E7A0;");
    asm("loc_6B683DB: test %eax,%eax;");
    asm("loc_6B683DD: mov %eax,0x1C(%edi);");
    asm("loc_6B683E0: je loc_6B683EE;");
    asm("loc_6B683E2: pop %edi;");
    asm("loc_6B683E3: pop %esi;");
    asm("loc_6B683E4: pop %ebp;");
    asm("loc_6B683E5: mov $0x17,%eax;");
    asm("loc_6B683EA: pop %ebx;");
    asm("loc_6B683EB: ret $0xC;");
    asm("loc_6B683EE: mov (%esi),%edx;");
    asm("loc_6B683F0: mov 0x1C(%esp),%eax;");
    asm("loc_6B683F4: mov %edx,(%eax);");
    asm("loc_6B683F6: mov 0xC(%edi),%ecx;");
    asm("loc_6B683F9: push %ecx;");
    asm("loc_6B683FA: call _sub_6B4ECD0;");
    asm("loc_6B683FF: mov %eax,%ecx;");
    asm("loc_6B68401: mov 4(%ecx),%edx;");
    asm("loc_6B68404: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B68407: mov 0x14(%ecx),%eax;");
    asm("loc_6B6840A: add $4,%esp;");
    asm("loc_6B6840D: inc %edx;");
    asm("loc_6B6840E: mov %edx,4(%ecx);");
    asm("loc_6B68411: mov %edx,%edi;");
    asm("loc_6B68413: mov (%esi),%edx;");
    asm("loc_6B68415: add $2,%edx;");
    asm("loc_6B68418: add %edx,%ebp;");
    asm("loc_6B6841A: mov %ebp,0x1C(%ecx);");
    asm("loc_6B6841D: mov (%esi),%esi;");
    asm("loc_6B6841F: add $2,%eax;");
    asm("loc_6B68422: cmp %eax,%esi;");
    asm("loc_6B68424: jbe loc_6B6842C;");
    asm("loc_6B68426: add $2,%esi;");
    asm("loc_6B68429: mov %esi,0x14(%ecx);");
    asm("loc_6B6842C: mov 0x1C(%ecx),%eax;");
    asm("loc_6B6842F: xor %edx,%edx;");
    asm("loc_6B68431: div %edi;");
    asm("loc_6B68433: mov %eax,0xC(%ecx);");
    asm("loc_6B68436: xor %eax,%eax;");
    asm("loc_6B68438: pop %edi;");
    asm("loc_6B68439: pop %esi;");
    asm("loc_6B6843A: pop %ebp;");
    asm("loc_6B6843B: pop %ebx;");
    asm("loc_6B6843C: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68440() // _sub_6B68440
{
    __DEBUG_ASM(6B68440);
    // chunk 0x6B68440 _sub_6B68440
    asm("loc_6B68440: mov 8(%esp),%eax;");
    asm("loc_6B68444: push %ebx;");
    asm("loc_6B68445: push %esi;");
    asm("loc_6B68446: push %edi;");
    asm("loc_6B68447: mov %ecx,%edi;");
    asm("loc_6B68449: mov 0x10(%esp),%ecx;");
    asm("loc_6B6844D: lea 0x10(%edi),%esi;");
    asm("loc_6B68450: mov %eax,4(%esi);");
    asm("loc_6B68453: mov (%ecx),%edx;");
    asm("loc_6B68455: mov %edx,8(%esi);");
    asm("loc_6B68458: movl $0,(%esi);");
    asm("loc_6B6845E: movl $0,0xC(%esi);");
    asm("loc_6B68465: mov 0x14(%edi),%eax;");
    asm("loc_6B68468: push %esi;");
    asm("loc_6B68469: push %eax;");
    asm("loc_6B6846A: lea 0x18(%edi),%ebx;");
    asm("loc_6B6846D: push %ebx;");
    asm("loc_6B6846E: mov %edi,%ecx;");
    asm("loc_6B68470: call _sub_6B4E740;");
    asm("loc_6B68475: test %eax,%eax;");
    asm("loc_6B68477: mov %eax,0x1C(%edi);");
    asm("loc_6B6847A: je loc_6B68487;");
    asm("loc_6B6847C: pop %edi;");
    asm("loc_6B6847D: pop %esi;");
    asm("loc_6B6847E: mov $0x16,%eax;");
    asm("loc_6B68483: pop %ebx;");
    asm("loc_6B68484: ret $0xC;");
    asm("loc_6B68487: mov (%esi),%edx;");
    asm("loc_6B68489: mov 4(%esi),%ecx;");
    asm("loc_6B6848C: add $4,%edx;");
    asm("loc_6B6848F: mov %edx,%eax;");
    asm("loc_6B68491: cmp %ecx,%eax;");
    asm("loc_6B68493: mov %edx,(%esi);");
    asm("loc_6B68495: jbe loc_6B6849E;");
    asm("loc_6B68497: movl $0x16,0xC(%esi);");
    asm("loc_6B6849E: mov 0x1C(%edi),%eax;");
    asm("loc_6B684A1: test %eax,%eax;");
    asm("loc_6B684A3: je loc_6B684B0;");
    asm("loc_6B684A5: pop %edi;");
    asm("loc_6B684A6: pop %esi;");
    asm("loc_6B684A7: mov $0x16,%eax;");
    asm("loc_6B684AC: pop %ebx;");
    asm("loc_6B684AD: ret $0xC;");
    asm("loc_6B684B0: mov (%ebx),%eax;");
    asm("loc_6B684B2: mov 0x20(%edi),%ecx;");
    asm("loc_6B684B5: mov %ecx,(%eax);");
    asm("loc_6B684B7: add $4,%eax;");
    asm("loc_6B684BA: mov %eax,(%ebx);");
    asm("loc_6B684BC: mov (%esi),%edx;");
    asm("loc_6B684BE: mov 4(%esi),%ecx;");
    asm("loc_6B684C1: add $4,%edx;");
    asm("loc_6B684C4: mov %edx,%eax;");
    asm("loc_6B684C6: cmp %ecx,%eax;");
    asm("loc_6B684C8: mov %edx,(%esi);");
    asm("loc_6B684CA: jbe loc_6B684D3;");
    asm("loc_6B684CC: movl $0x16,0xC(%esi);");
    asm("loc_6B684D3: mov 0x1C(%edi),%eax;");
    asm("loc_6B684D6: test %eax,%eax;");
    asm("loc_6B684D8: je loc_6B684E5;");
    asm("loc_6B684DA: pop %edi;");
    asm("loc_6B684DB: pop %esi;");
    asm("loc_6B684DC: mov $0x16,%eax;");
    asm("loc_6B684E1: pop %ebx;");
    asm("loc_6B684E2: ret $0xC;");
    asm("loc_6B684E5: mov (%ebx),%eax;");
    asm("loc_6B684E7: mov 0x24(%edi),%edx;");
    asm("loc_6B684EA: mov %edx,(%eax);");
    asm("loc_6B684EC: add $4,%eax;");
    asm("loc_6B684EF: mov %eax,(%ebx);");
    asm("loc_6B684F1: mov (%esi),%edx;");
    asm("loc_6B684F3: mov 4(%esi),%ecx;");
    asm("loc_6B684F6: add $4,%edx;");
    asm("loc_6B684F9: mov %edx,%eax;");
    asm("loc_6B684FB: cmp %ecx,%eax;");
    asm("loc_6B684FD: mov %edx,(%esi);");
    asm("loc_6B684FF: jbe loc_6B68508;");
    asm("loc_6B68501: movl $0x16,0xC(%esi);");
    asm("loc_6B68508: mov 0x1C(%edi),%eax;");
    asm("loc_6B6850B: test %eax,%eax;");
    asm("loc_6B6850D: je loc_6B6851A;");
    asm("loc_6B6850F: pop %edi;");
    asm("loc_6B68510: pop %esi;");
    asm("loc_6B68511: mov $0x16,%eax;");
    asm("loc_6B68516: pop %ebx;");
    asm("loc_6B68517: ret $0xC;");
    asm("loc_6B6851A: mov (%ebx),%eax;");
    asm("loc_6B6851C: mov 0x28(%edi),%ecx;");
    asm("loc_6B6851F: mov %ecx,(%eax);");
    asm("loc_6B68521: mov 0x14(%edi),%edx;");
    asm("loc_6B68524: push %esi;");
    asm("loc_6B68525: push %edx;");
    asm("loc_6B68526: add $4,%eax;");
    asm("loc_6B68529: push %ebx;");
    asm("loc_6B6852A: mov %edi,%ecx;");
    asm("loc_6B6852C: mov %eax,(%ebx);");
    asm("loc_6B6852E: call _sub_6B4E790;");
    asm("loc_6B68533: test %eax,%eax;");
    asm("loc_6B68535: mov %eax,0x1C(%edi);");
    asm("loc_6B68538: je loc_6B68545;");
    asm("loc_6B6853A: pop %edi;");
    asm("loc_6B6853B: pop %esi;");
    asm("loc_6B6853C: mov $0x16,%eax;");
    asm("loc_6B68541: pop %ebx;");
    asm("loc_6B68542: ret $0xC;");
    asm("loc_6B68545: mov (%esi),%eax;");
    asm("loc_6B68547: mov 0x18(%esp),%ecx;");
    asm("loc_6B6854B: mov %eax,(%ecx);");
    asm("loc_6B6854D: mov 0xC(%edi),%edx;");
    asm("loc_6B68550: push %edx;");
    asm("loc_6B68551: call _sub_6B4ECD0;");
    asm("loc_6B68556: mov %eax,%ecx;");
    asm("loc_6B68558: mov (%ecx),%edi;");
    asm("loc_6B6855A: mov 0x18(%ecx),%edx;");
    asm("loc_6B6855D: add $4,%esp;");
    asm("loc_6B68560: inc %edi;");
    asm("loc_6B68561: mov %edi,(%ecx);");
    asm("loc_6B68563: mov (%esi),%eax;");
    asm("loc_6B68565: add %eax,%edx;");
    asm("loc_6B68567: mov 0x10(%ecx),%eax;");
    asm("loc_6B6856A: mov %edx,0x18(%ecx);");
    asm("loc_6B6856D: mov (%esi),%esi;");
    asm("loc_6B6856F: cmp %eax,%esi;");
    asm("loc_6B68571: jbe loc_6B68576;");
    asm("loc_6B68573: mov %esi,0x10(%ecx);");
    asm("loc_6B68576: mov 0x18(%ecx),%eax;");
    asm("loc_6B68579: xor %edx,%edx;");
    asm("loc_6B6857B: div %edi;");
    asm("loc_6B6857D: pop %edi;");
    asm("loc_6B6857E: pop %esi;");
    asm("loc_6B6857F: pop %ebx;");
    asm("loc_6B68580: mov %eax,8(%ecx);");
    asm("loc_6B68583: xor %eax,%eax;");
    asm("loc_6B68585: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68590() // _sub_6B68590
{
    __DEBUG_ASM(6B68590);
    // chunk 0x6B68590 _sub_6B68590
    asm("loc_6B68590: mov 4(%esp),%eax;");
    asm("loc_6B68594: push %ebx;");
    asm("loc_6B68595: push %ebp;");
    asm("loc_6B68596: mov 0x10(%esp),%ebp;");
    asm("loc_6B6859A: push %esi;");
    asm("loc_6B6859B: push %edi;");
    asm("loc_6B6859C: mov %ecx,%edi;");
    asm("loc_6B6859E: lea 0x10(%edi),%esi;");
    asm("loc_6B685A1: push %esi;");
    asm("loc_6B685A2: push %ebp;");
    asm("loc_6B685A3: lea 0x18(%edi),%ebx;");
    asm("loc_6B685A6: push %ebx;");
    asm("loc_6B685A7: mov %ebp,4(%esi);");
    asm("loc_6B685AA: mov %eax,8(%esi);");
    asm("loc_6B685AD: movl $0,(%esi);");
    asm("loc_6B685B3: movl $0,0xC(%esi);");
    asm("loc_6B685BA: call _sub_6B4E780;");
    asm("loc_6B685BF: test %eax,%eax;");
    asm("loc_6B685C1: mov %eax,0x1C(%edi);");
    asm("loc_6B685C4: je loc_6B685D2;");
    asm("loc_6B685C6: pop %edi;");
    asm("loc_6B685C7: pop %esi;");
    asm("loc_6B685C8: pop %ebp;");
    asm("loc_6B685C9: mov $0x17,%eax;");
    asm("loc_6B685CE: pop %ebx;");
    asm("loc_6B685CF: ret $0xC;");
    asm("loc_6B685D2: mov (%esi),%edx;");
    asm("loc_6B685D4: mov 4(%esi),%ecx;");
    asm("loc_6B685D7: add $4,%edx;");
    asm("loc_6B685DA: mov %edx,%eax;");
    asm("loc_6B685DC: cmp %ecx,%eax;");
    asm("loc_6B685DE: mov %edx,(%esi);");
    asm("loc_6B685E0: mov $0x17,%ecx;");
    asm("loc_6B685E5: jbe loc_6B685EA;");
    asm("loc_6B685E7: mov %ecx,0xC(%esi);");
    asm("loc_6B685EA: mov 0x1C(%edi),%eax;");
    asm("loc_6B685ED: test %eax,%eax;");
    asm("loc_6B685EF: jne loc_6B686B4;");
    asm("loc_6B685F5: mov (%ebx),%eax;");
    asm("loc_6B685F7: mov (%eax),%edx;");
    asm("loc_6B685F9: add $4,%eax;");
    asm("loc_6B685FC: mov %eax,(%ebx);");
    asm("loc_6B685FE: mov %edx,0x20(%edi);");
    asm("loc_6B68601: mov (%esi),%eax;");
    asm("loc_6B68603: mov 4(%esi),%edx;");
    asm("loc_6B68606: add $4,%eax;");
    asm("loc_6B68609: cmp %edx,%eax;");
    asm("loc_6B6860B: mov %eax,(%esi);");
    asm("loc_6B6860D: jbe loc_6B68612;");
    asm("loc_6B6860F: mov %ecx,0xC(%esi);");
    asm("loc_6B68612: mov 0x1C(%edi),%eax;");
    asm("loc_6B68615: test %eax,%eax;");
    asm("loc_6B68617: jne loc_6B686B4;");
    asm("loc_6B6861D: mov (%ebx),%eax;");
    asm("loc_6B6861F: mov (%eax),%edx;");
    asm("loc_6B68621: add $4,%eax;");
    asm("loc_6B68624: mov %eax,(%ebx);");
    asm("loc_6B68626: mov %edx,0x24(%edi);");
    asm("loc_6B68629: mov (%esi),%eax;");
    asm("loc_6B6862B: mov 4(%esi),%edx;");
    asm("loc_6B6862E: add $4,%eax;");
    asm("loc_6B68631: cmp %edx,%eax;");
    asm("loc_6B68633: mov %eax,(%esi);");
    asm("loc_6B68635: jbe loc_6B6863A;");
    asm("loc_6B68637: mov %ecx,0xC(%esi);");
    asm("loc_6B6863A: mov 0x1C(%edi),%eax;");
    asm("loc_6B6863D: test %eax,%eax;");
    asm("loc_6B6863F: jne loc_6B686B4;");
    asm("loc_6B68641: mov (%ebx),%eax;");
    asm("loc_6B68643: mov (%eax),%ecx;");
    asm("loc_6B68645: push %esi;");
    asm("loc_6B68646: push %ebp;");
    asm("loc_6B68647: mov %ecx,0x28(%edi);");
    asm("loc_6B6864A: add $4,%eax;");
    asm("loc_6B6864D: push %ebx;");
    asm("loc_6B6864E: mov %edi,%ecx;");
    asm("loc_6B68650: mov %eax,(%ebx);");
    asm("loc_6B68652: call _sub_6B4E7A0;");
    asm("loc_6B68657: test %eax,%eax;");
    asm("loc_6B68659: mov %eax,0x1C(%edi);");
    asm("loc_6B6865C: je loc_6B6866A;");
    asm("loc_6B6865E: pop %edi;");
    asm("loc_6B6865F: pop %esi;");
    asm("loc_6B68660: pop %ebp;");
    asm("loc_6B68661: mov $0x17,%eax;");
    asm("loc_6B68666: pop %ebx;");
    asm("loc_6B68667: ret $0xC;");
    asm("loc_6B6866A: mov (%esi),%edx;");
    asm("loc_6B6866C: mov 0x1C(%esp),%eax;");
    asm("loc_6B68670: mov %edx,(%eax);");
    asm("loc_6B68672: mov 0xC(%edi),%ecx;");
    asm("loc_6B68675: push %ecx;");
    asm("loc_6B68676: call _sub_6B4ECD0;");
    asm("loc_6B6867B: mov %eax,%ecx;");
    asm("loc_6B6867D: mov 4(%ecx),%edx;");
    asm("loc_6B68680: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B68683: mov 0x14(%ecx),%eax;");
    asm("loc_6B68686: add $4,%esp;");
    asm("loc_6B68689: inc %edx;");
    asm("loc_6B6868A: mov %edx,4(%ecx);");
    asm("loc_6B6868D: mov %edx,%edi;");
    asm("loc_6B6868F: mov (%esi),%edx;");
    asm("loc_6B68691: add $2,%edx;");
    asm("loc_6B68694: add %edx,%ebp;");
    asm("loc_6B68696: mov %ebp,0x1C(%ecx);");
    asm("loc_6B68699: mov (%esi),%esi;");
    asm("loc_6B6869B: add $2,%eax;");
    asm("loc_6B6869E: cmp %eax,%esi;");
    asm("loc_6B686A0: jbe loc_6B686A8;");
    asm("loc_6B686A2: add $2,%esi;");
    asm("loc_6B686A5: mov %esi,0x14(%ecx);");
    asm("loc_6B686A8: mov 0x1C(%ecx),%eax;");
    asm("loc_6B686AB: xor %edx,%edx;");
    asm("loc_6B686AD: div %edi;");
    asm("loc_6B686AF: mov %eax,0xC(%ecx);");
    asm("loc_6B686B2: xor %eax,%eax;");
    asm("loc_6B686B4: pop %edi;");
    asm("loc_6B686B5: pop %esi;");
    asm("loc_6B686B6: pop %ebp;");
    asm("loc_6B686B7: pop %ebx;");
    asm("loc_6B686B8: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B686C0() // _sub_6B686C0
{
    __DEBUG_ASM(6B686C0);
    // chunk 0x6B686C0 _sub_6B686C0
    asm("loc_6B686C0: mov _data_6B6EA80,%eax;");
    asm("loc_6B686C5: mov %eax,_data_6B745E0;");
    asm("loc_6B686CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B686D0() // _sub_6B686D0
{
    __DEBUG_ASM(6B686D0);
    // chunk 0x6B686D0 _sub_6B686D0
    asm("loc_6B686D0: mov _data_6B6EA80,%eax;");
    asm("loc_6B686D5: mov %eax,_data_6B745E4;");
    asm("loc_6B686DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B686E0() // _sub_6B686E0
{
    __DEBUG_ASM(6B686E0);
    // chunk 0x6B686E0 _sub_6B686E0
    asm("loc_6B686E0: mov _data_6B6EA84,%eax;");
    asm("loc_6B686E5: mov %eax,_data_6B745DC;");
    asm("loc_6B686EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B686F0() // _sub_6B686F0
{
    __DEBUG_ASM(6B686F0);
    // chunk 0x6B686F0 _sub_6B686F0
    asm("loc_6B686F0: mov 8(%esp),%eax;");
    asm("loc_6B686F4: push %ebx;");
    asm("loc_6B686F5: push %esi;");
    asm("loc_6B686F6: push %edi;");
    asm("loc_6B686F7: mov %ecx,%edi;");
    asm("loc_6B686F9: mov 0x10(%esp),%ecx;");
    asm("loc_6B686FD: lea 0x10(%edi),%esi;");
    asm("loc_6B68700: mov %eax,4(%esi);");
    asm("loc_6B68703: mov (%ecx),%edx;");
    asm("loc_6B68705: mov %edx,8(%esi);");
    asm("loc_6B68708: movl $0,(%esi);");
    asm("loc_6B6870E: movl $0,0xC(%esi);");
    asm("loc_6B68715: mov 0x14(%edi),%eax;");
    asm("loc_6B68718: push %esi;");
    asm("loc_6B68719: push %eax;");
    asm("loc_6B6871A: lea 0x18(%edi),%ebx;");
    asm("loc_6B6871D: push %ebx;");
    asm("loc_6B6871E: mov %edi,%ecx;");
    asm("loc_6B68720: call _sub_6B4E740;");
    asm("loc_6B68725: test %eax,%eax;");
    asm("loc_6B68727: mov %eax,0x1C(%edi);");
    asm("loc_6B6872A: je loc_6B68737;");
    asm("loc_6B6872C: pop %edi;");
    asm("loc_6B6872D: pop %esi;");
    asm("loc_6B6872E: mov $0x16,%eax;");
    asm("loc_6B68733: pop %ebx;");
    asm("loc_6B68734: ret $0xC;");
    asm("loc_6B68737: mov (%esi),%edx;");
    asm("loc_6B68739: mov 4(%esi),%ecx;");
    asm("loc_6B6873C: add $4,%edx;");
    asm("loc_6B6873F: mov %edx,%eax;");
    asm("loc_6B68741: cmp %ecx,%eax;");
    asm("loc_6B68743: mov %edx,(%esi);");
    asm("loc_6B68745: jbe loc_6B6874E;");
    asm("loc_6B68747: movl $0x16,0xC(%esi);");
    asm("loc_6B6874E: mov 0x1C(%edi),%eax;");
    asm("loc_6B68751: test %eax,%eax;");
    asm("loc_6B68753: je loc_6B68760;");
    asm("loc_6B68755: pop %edi;");
    asm("loc_6B68756: pop %esi;");
    asm("loc_6B68757: mov $0x16,%eax;");
    asm("loc_6B6875C: pop %ebx;");
    asm("loc_6B6875D: ret $0xC;");
    asm("loc_6B68760: mov (%ebx),%eax;");
    asm("loc_6B68762: mov 0x20(%edi),%ecx;");
    asm("loc_6B68765: mov %ecx,(%eax);");
    asm("loc_6B68767: add $4,%eax;");
    asm("loc_6B6876A: mov %eax,(%ebx);");
    asm("loc_6B6876C: mov (%esi),%edx;");
    asm("loc_6B6876E: mov 4(%esi),%ecx;");
    asm("loc_6B68771: inc %edx;");
    asm("loc_6B68772: mov %edx,%eax;");
    asm("loc_6B68774: cmp %ecx,%eax;");
    asm("loc_6B68776: mov %edx,(%esi);");
    asm("loc_6B68778: jbe loc_6B68781;");
    asm("loc_6B6877A: movl $0x16,0xC(%esi);");
    asm("loc_6B68781: mov 0x1C(%edi),%eax;");
    asm("loc_6B68784: test %eax,%eax;");
    asm("loc_6B68786: je loc_6B68793;");
    asm("loc_6B68788: pop %edi;");
    asm("loc_6B68789: pop %esi;");
    asm("loc_6B6878A: mov $0x16,%eax;");
    asm("loc_6B6878F: pop %ebx;");
    asm("loc_6B68790: ret $0xC;");
    asm("loc_6B68793: mov (%ebx),%eax;");
    asm("loc_6B68795: mov 0x24(%edi),%dl;");
    asm("loc_6B68798: mov %dl,(%eax);");
    asm("loc_6B6879A: inc %eax;");
    asm("loc_6B6879B: mov %eax,(%ebx);");
    asm("loc_6B6879D: mov 0x14(%edi),%eax;");
    asm("loc_6B687A0: push %esi;");
    asm("loc_6B687A1: push %eax;");
    asm("loc_6B687A2: push %ebx;");
    asm("loc_6B687A3: mov %edi,%ecx;");
    asm("loc_6B687A5: call _sub_6B4E790;");
    asm("loc_6B687AA: test %eax,%eax;");
    asm("loc_6B687AC: mov %eax,0x1C(%edi);");
    asm("loc_6B687AF: je loc_6B687BC;");
    asm("loc_6B687B1: pop %edi;");
    asm("loc_6B687B2: pop %esi;");
    asm("loc_6B687B3: mov $0x16,%eax;");
    asm("loc_6B687B8: pop %ebx;");
    asm("loc_6B687B9: ret $0xC;");
    asm("loc_6B687BC: mov (%esi),%ecx;");
    asm("loc_6B687BE: mov 0x18(%esp),%edx;");
    asm("loc_6B687C2: mov %ecx,(%edx);");
    asm("loc_6B687C4: mov 0xC(%edi),%eax;");
    asm("loc_6B687C7: push %eax;");
    asm("loc_6B687C8: call _sub_6B4ECD0;");
    asm("loc_6B687CD: mov %eax,%ecx;");
    asm("loc_6B687CF: mov (%ecx),%eax;");
    asm("loc_6B687D1: mov 0x18(%ecx),%ebx;");
    asm("loc_6B687D4: add $4,%esp;");
    asm("loc_6B687D7: inc %eax;");
    asm("loc_6B687D8: mov %eax,(%ecx);");
    asm("loc_6B687DA: mov (%esi),%edx;");
    asm("loc_6B687DC: add %edx,%ebx;");
    asm("loc_6B687DE: mov %eax,%edi;");
    asm("loc_6B687E0: mov 0x10(%ecx),%eax;");
    asm("loc_6B687E3: mov %ebx,0x18(%ecx);");
    asm("loc_6B687E6: mov (%esi),%esi;");
    asm("loc_6B687E8: cmp %eax,%esi;");
    asm("loc_6B687EA: jbe loc_6B687EF;");
    asm("loc_6B687EC: mov %esi,0x10(%ecx);");
    asm("loc_6B687EF: mov 0x18(%ecx),%eax;");
    asm("loc_6B687F2: xor %edx,%edx;");
    asm("loc_6B687F4: div %edi;");
    asm("loc_6B687F6: pop %edi;");
    asm("loc_6B687F7: pop %esi;");
    asm("loc_6B687F8: pop %ebx;");
    asm("loc_6B687F9: mov %eax,8(%ecx);");
    asm("loc_6B687FC: xor %eax,%eax;");
    asm("loc_6B687FE: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68810() // _sub_6B68810
{
    __DEBUG_ASM(6B68810);
    // chunk 0x6B68810 _sub_6B68810
    asm("loc_6B68810: mov 4(%esp),%eax;");
    asm("loc_6B68814: push %ebx;");
    asm("loc_6B68815: push %ebp;");
    asm("loc_6B68816: mov 0x10(%esp),%ebp;");
    asm("loc_6B6881A: push %esi;");
    asm("loc_6B6881B: push %edi;");
    asm("loc_6B6881C: mov %ecx,%edi;");
    asm("loc_6B6881E: lea 0x10(%edi),%esi;");
    asm("loc_6B68821: push %esi;");
    asm("loc_6B68822: push %ebp;");
    asm("loc_6B68823: lea 0x18(%edi),%ebx;");
    asm("loc_6B68826: push %ebx;");
    asm("loc_6B68827: mov %ebp,4(%esi);");
    asm("loc_6B6882A: mov %eax,8(%esi);");
    asm("loc_6B6882D: movl $0,(%esi);");
    asm("loc_6B68833: movl $0,0xC(%esi);");
    asm("loc_6B6883A: call _sub_6B4E780;");
    asm("loc_6B6883F: test %eax,%eax;");
    asm("loc_6B68841: mov %eax,0x1C(%edi);");
    asm("loc_6B68844: je loc_6B68852;");
    asm("loc_6B68846: pop %edi;");
    asm("loc_6B68847: pop %esi;");
    asm("loc_6B68848: pop %ebp;");
    asm("loc_6B68849: mov $0x17,%eax;");
    asm("loc_6B6884E: pop %ebx;");
    asm("loc_6B6884F: ret $0xC;");
    asm("loc_6B68852: mov (%esi),%edx;");
    asm("loc_6B68854: mov 4(%esi),%ecx;");
    asm("loc_6B68857: add $4,%edx;");
    asm("loc_6B6885A: mov %edx,%eax;");
    asm("loc_6B6885C: cmp %ecx,%eax;");
    asm("loc_6B6885E: mov %edx,(%esi);");
    asm("loc_6B68860: jbe loc_6B68869;");
    asm("loc_6B68862: movl $0x17,0xC(%esi);");
    asm("loc_6B68869: mov 0x1C(%edi),%eax;");
    asm("loc_6B6886C: test %eax,%eax;");
    asm("loc_6B6886E: jne loc_6B6890B;");
    asm("loc_6B68874: mov (%ebx),%eax;");
    asm("loc_6B68876: mov (%eax),%ecx;");
    asm("loc_6B68878: add $4,%eax;");
    asm("loc_6B6887B: mov %eax,(%ebx);");
    asm("loc_6B6887D: mov %ecx,0x20(%edi);");
    asm("loc_6B68880: mov (%esi),%edx;");
    asm("loc_6B68882: mov 4(%esi),%ecx;");
    asm("loc_6B68885: inc %edx;");
    asm("loc_6B68886: mov %edx,%eax;");
    asm("loc_6B68888: cmp %ecx,%eax;");
    asm("loc_6B6888A: mov %edx,(%esi);");
    asm("loc_6B6888C: jbe loc_6B68895;");
    asm("loc_6B6888E: movl $0x17,0xC(%esi);");
    asm("loc_6B68895: mov 0x1C(%edi),%eax;");
    asm("loc_6B68898: test %eax,%eax;");
    asm("loc_6B6889A: jne loc_6B6890B;");
    asm("loc_6B6889C: mov (%ebx),%eax;");
    asm("loc_6B6889E: mov (%eax),%dl;");
    asm("loc_6B688A0: push %esi;");
    asm("loc_6B688A1: push %ebp;");
    asm("loc_6B688A2: inc %eax;");
    asm("loc_6B688A3: push %ebx;");
    asm("loc_6B688A4: mov %edi,%ecx;");
    asm("loc_6B688A6: mov %dl,0x24(%edi);");
    asm("loc_6B688A9: mov %eax,(%ebx);");
    asm("loc_6B688AB: call _sub_6B4E7A0;");
    asm("loc_6B688B0: test %eax,%eax;");
    asm("loc_6B688B2: mov %eax,0x1C(%edi);");
    asm("loc_6B688B5: je loc_6B688C3;");
    asm("loc_6B688B7: pop %edi;");
    asm("loc_6B688B8: pop %esi;");
    asm("loc_6B688B9: pop %ebp;");
    asm("loc_6B688BA: mov $0x17,%eax;");
    asm("loc_6B688BF: pop %ebx;");
    asm("loc_6B688C0: ret $0xC;");
    asm("loc_6B688C3: mov (%esi),%eax;");
    asm("loc_6B688C5: mov 0x1C(%esp),%ecx;");
    asm("loc_6B688C9: mov %eax,(%ecx);");
    asm("loc_6B688CB: mov 0xC(%edi),%edx;");
    asm("loc_6B688CE: push %edx;");
    asm("loc_6B688CF: call _sub_6B4ECD0;");
    asm("loc_6B688D4: mov %eax,%ecx;");
    asm("loc_6B688D6: mov 4(%ecx),%edi;");
    asm("loc_6B688D9: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B688DC: mov 0x14(%ecx),%edx;");
    asm("loc_6B688DF: add $4,%esp;");
    asm("loc_6B688E2: inc %edi;");
    asm("loc_6B688E3: mov %edi,4(%ecx);");
    asm("loc_6B688E6: mov (%esi),%eax;");
    asm("loc_6B688E8: add $2,%eax;");
    asm("loc_6B688EB: add %eax,%ebp;");
    asm("loc_6B688ED: mov %ebp,0x1C(%ecx);");
    asm("loc_6B688F0: mov (%esi),%esi;");
    asm("loc_6B688F2: add $2,%edx;");
    asm("loc_6B688F5: cmp %edx,%esi;");
    asm("loc_6B688F7: jbe loc_6B688FF;");
    asm("loc_6B688F9: add $2,%esi;");
    asm("loc_6B688FC: mov %esi,0x14(%ecx);");
    asm("loc_6B688FF: mov 0x1C(%ecx),%eax;");
    asm("loc_6B68902: xor %edx,%edx;");
    asm("loc_6B68904: div %edi;");
    asm("loc_6B68906: mov %eax,0xC(%ecx);");
    asm("loc_6B68909: xor %eax,%eax;");
    asm("loc_6B6890B: pop %edi;");
    asm("loc_6B6890C: pop %esi;");
    asm("loc_6B6890D: pop %ebp;");
    asm("loc_6B6890E: pop %ebx;");
    asm("loc_6B6890F: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68920() // _sub_6B68920
{
    __DEBUG_ASM(6B68920);
    // chunk 0x6B68920 _sub_6B68920
    asm("loc_6B68920: mov _data_6B6EA8C,%eax;");
    asm("loc_6B68925: mov %eax,_data_6B745F0;");
    asm("loc_6B6892A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68930() // _sub_6B68930
{
    __DEBUG_ASM(6B68930);
    // chunk 0x6B68930 _sub_6B68930
    asm("loc_6B68930: mov _data_6B6EA8C,%eax;");
    asm("loc_6B68935: mov %eax,_data_6B745F4;");
    asm("loc_6B6893A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68940() // _sub_6B68940
{
    __DEBUG_ASM(6B68940);
    // chunk 0x6B68940 _sub_6B68940
    asm("loc_6B68940: mov _data_6B6EA90,%eax;");
    asm("loc_6B68945: mov %eax,_data_6B745EC;");
    asm("loc_6B6894A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68950() // _sub_6B68950
{
    __DEBUG_ASM(6B68950);
    // chunk 0x6B68950 _sub_6B68950
    asm("loc_6B68950: mov _data_6B6EA98,%eax;");
    asm("loc_6B68955: mov %eax,_data_6B74600;");
    asm("loc_6B6895A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68960() // _sub_6B68960
{
    __DEBUG_ASM(6B68960);
    // chunk 0x6B68960 _sub_6B68960
    asm("loc_6B68960: mov _data_6B6EA98,%eax;");
    asm("loc_6B68965: mov %eax,_data_6B74604;");
    asm("loc_6B6896A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68970() // _sub_6B68970
{
    __DEBUG_ASM(6B68970);
    // chunk 0x6B68970 _sub_6B68970
    asm("loc_6B68970: mov _data_6B6EA9C,%eax;");
    asm("loc_6B68975: mov %eax,_data_6B745FC;");
    asm("loc_6B6897A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68980() // _sub_6B68980
{
    __DEBUG_ASM(6B68980);
    // chunk 0x6B68980 _sub_6B68980
    asm("loc_6B68980: mov 8(%esp),%eax;");
    asm("loc_6B68984: push %ebx;");
    asm("loc_6B68985: push %ebp;");
    asm("loc_6B68986: push %esi;");
    asm("loc_6B68987: push %edi;");
    asm("loc_6B68988: mov %ecx,%edi;");
    asm("loc_6B6898A: mov 0x14(%esp),%ecx;");
    asm("loc_6B6898E: lea 0x10(%edi),%esi;");
    asm("loc_6B68991: mov %eax,4(%esi);");
    asm("loc_6B68994: mov (%ecx),%edx;");
    asm("loc_6B68996: mov %edx,8(%esi);");
    asm("loc_6B68999: movl $0,(%esi);");
    asm("loc_6B6899F: movl $0,0xC(%esi);");
    asm("loc_6B689A6: mov 0x14(%edi),%eax;");
    asm("loc_6B689A9: push %esi;");
    asm("loc_6B689AA: push %eax;");
    asm("loc_6B689AB: lea 0x18(%edi),%ebx;");
    asm("loc_6B689AE: push %ebx;");
    asm("loc_6B689AF: mov %edi,%ecx;");
    asm("loc_6B689B1: call _sub_6B4E740;");
    asm("loc_6B689B6: test %eax,%eax;");
    asm("loc_6B689B8: mov %eax,0x1C(%edi);");
    asm("loc_6B689BB: je loc_6B689C9;");
    asm("loc_6B689BD: pop %edi;");
    asm("loc_6B689BE: pop %esi;");
    asm("loc_6B689BF: pop %ebp;");
    asm("loc_6B689C0: mov $0x16,%eax;");
    asm("loc_6B689C5: pop %ebx;");
    asm("loc_6B689C6: ret $0xC;");
    asm("loc_6B689C9: mov (%esi),%edx;");
    asm("loc_6B689CB: mov 4(%esi),%ecx;");
    asm("loc_6B689CE: add $4,%edx;");
    asm("loc_6B689D1: mov %edx,%eax;");
    asm("loc_6B689D3: cmp %ecx,%eax;");
    asm("loc_6B689D5: mov %edx,(%esi);");
    asm("loc_6B689D7: mov $0x16,%ebp;");
    asm("loc_6B689DC: jbe loc_6B689E1;");
    asm("loc_6B689DE: mov %ebp,0xC(%esi);");
    asm("loc_6B689E1: mov 0x1C(%edi),%eax;");
    asm("loc_6B689E4: test %eax,%eax;");
    asm("loc_6B689E6: je loc_6B689F1;");
    asm("loc_6B689E8: pop %edi;");
    asm("loc_6B689E9: pop %esi;");
    asm("loc_6B689EA: mov %ebp,%eax;");
    asm("loc_6B689EC: pop %ebp;");
    asm("loc_6B689ED: pop %ebx;");
    asm("loc_6B689EE: ret $0xC;");
    asm("loc_6B689F1: mov (%ebx),%eax;");
    asm("loc_6B689F3: mov 0x20(%edi),%ecx;");
    asm("loc_6B689F6: mov %ecx,(%eax);");
    asm("loc_6B689F8: add $4,%eax;");
    asm("loc_6B689FB: mov %eax,(%ebx);");
    asm("loc_6B689FD: mov (%esi),%edx;");
    asm("loc_6B689FF: mov 4(%esi),%ecx;");
    asm("loc_6B68A02: add $4,%edx;");
    asm("loc_6B68A05: mov %edx,%eax;");
    asm("loc_6B68A07: cmp %ecx,%eax;");
    asm("loc_6B68A09: mov %edx,(%esi);");
    asm("loc_6B68A0B: jbe loc_6B68A10;");
    asm("loc_6B68A0D: mov %ebp,0xC(%esi);");
    asm("loc_6B68A10: mov 0x1C(%edi),%eax;");
    asm("loc_6B68A13: test %eax,%eax;");
    asm("loc_6B68A15: je loc_6B68A20;");
    asm("loc_6B68A17: pop %edi;");
    asm("loc_6B68A18: pop %esi;");
    asm("loc_6B68A19: mov %ebp,%eax;");
    asm("loc_6B68A1B: pop %ebp;");
    asm("loc_6B68A1C: pop %ebx;");
    asm("loc_6B68A1D: ret $0xC;");
    asm("loc_6B68A20: mov (%ebx),%eax;");
    asm("loc_6B68A22: mov 0x24(%edi),%edx;");
    asm("loc_6B68A25: mov %edx,(%eax);");
    asm("loc_6B68A27: add $4,%eax;");
    asm("loc_6B68A2A: mov %eax,(%ebx);");
    asm("loc_6B68A2C: mov (%esi),%edx;");
    asm("loc_6B68A2E: mov 4(%esi),%ecx;");
    asm("loc_6B68A31: add $2,%edx;");
    asm("loc_6B68A34: mov %edx,%eax;");
    asm("loc_6B68A36: cmp %ecx,%eax;");
    asm("loc_6B68A38: mov %edx,(%esi);");
    asm("loc_6B68A3A: jbe loc_6B68A3F;");
    asm("loc_6B68A3C: mov %ebp,0xC(%esi);");
    asm("loc_6B68A3F: mov 0x1C(%edi),%eax;");
    asm("loc_6B68A42: test %eax,%eax;");
    asm("loc_6B68A44: je loc_6B68A4F;");
    asm("loc_6B68A46: pop %edi;");
    asm("loc_6B68A47: pop %esi;");
    asm("loc_6B68A48: mov %ebp,%eax;");
    asm("loc_6B68A4A: pop %ebp;");
    asm("loc_6B68A4B: pop %ebx;");
    asm("loc_6B68A4C: ret $0xC;");
    asm("loc_6B68A4F: mov (%ebx),%eax;");
    asm("loc_6B68A51: mov 0x28(%edi),%cx;");
    asm("loc_6B68A55: mov %cx,(%eax);");
    asm("loc_6B68A58: add $2,%eax;");
    asm("loc_6B68A5B: mov %eax,(%ebx);");
    asm("loc_6B68A5D: mov (%esi),%edx;");
    asm("loc_6B68A5F: mov 4(%esi),%ecx;");
    asm("loc_6B68A62: add $2,%edx;");
    asm("loc_6B68A65: mov %edx,%eax;");
    asm("loc_6B68A67: cmp %ecx,%eax;");
    asm("loc_6B68A69: mov %edx,(%esi);");
    asm("loc_6B68A6B: jbe loc_6B68A70;");
    asm("loc_6B68A6D: mov %ebp,0xC(%esi);");
    asm("loc_6B68A70: mov 0x1C(%edi),%eax;");
    asm("loc_6B68A73: test %eax,%eax;");
    asm("loc_6B68A75: je loc_6B68A80;");
    asm("loc_6B68A77: pop %edi;");
    asm("loc_6B68A78: pop %esi;");
    asm("loc_6B68A79: mov %ebp,%eax;");
    asm("loc_6B68A7B: pop %ebp;");
    asm("loc_6B68A7C: pop %ebx;");
    asm("loc_6B68A7D: ret $0xC;");
    asm("loc_6B68A80: mov (%ebx),%eax;");
    asm("loc_6B68A82: mov 0x2A(%edi),%dx;");
    asm("loc_6B68A86: mov %dx,(%eax);");
    asm("loc_6B68A89: add $2,%eax;");
    asm("loc_6B68A8C: mov %eax,(%ebx);");
    asm("loc_6B68A8E: mov 0x14(%edi),%eax;");
    asm("loc_6B68A91: push %esi;");
    asm("loc_6B68A92: push %eax;");
    asm("loc_6B68A93: push %ebx;");
    asm("loc_6B68A94: mov %edi,%ecx;");
    asm("loc_6B68A96: call _sub_6B4E790;");
    asm("loc_6B68A9B: test %eax,%eax;");
    asm("loc_6B68A9D: mov %eax,0x1C(%edi);");
    asm("loc_6B68AA0: je loc_6B68AAB;");
    asm("loc_6B68AA2: pop %edi;");
    asm("loc_6B68AA3: pop %esi;");
    asm("loc_6B68AA4: mov %ebp,%eax;");
    asm("loc_6B68AA6: pop %ebp;");
    asm("loc_6B68AA7: pop %ebx;");
    asm("loc_6B68AA8: ret $0xC;");
    asm("loc_6B68AAB: mov (%esi),%ecx;");
    asm("loc_6B68AAD: mov 0x1C(%esp),%edx;");
    asm("loc_6B68AB1: mov %ecx,(%edx);");
    asm("loc_6B68AB3: mov 0xC(%edi),%eax;");
    asm("loc_6B68AB6: push %eax;");
    asm("loc_6B68AB7: call _sub_6B4ECD0;");
    asm("loc_6B68ABC: mov %eax,%ecx;");
    asm("loc_6B68ABE: mov (%ecx),%ebp;");
    asm("loc_6B68AC0: mov 0x18(%ecx),%ebx;");
    asm("loc_6B68AC3: mov 0x10(%ecx),%eax;");
    asm("loc_6B68AC6: add $4,%esp;");
    asm("loc_6B68AC9: inc %ebp;");
    asm("loc_6B68ACA: mov %ebp,(%ecx);");
    asm("loc_6B68ACC: mov (%esi),%edx;");
    asm("loc_6B68ACE: add %edx,%ebx;");
    asm("loc_6B68AD0: mov %ebx,0x18(%ecx);");
    asm("loc_6B68AD3: mov (%esi),%esi;");
    asm("loc_6B68AD5: cmp %eax,%esi;");
    asm("loc_6B68AD7: mov %ebp,%edi;");
    asm("loc_6B68AD9: jbe loc_6B68ADE;");
    asm("loc_6B68ADB: mov %esi,0x10(%ecx);");
    asm("loc_6B68ADE: mov 0x18(%ecx),%eax;");
    asm("loc_6B68AE1: xor %edx,%edx;");
    asm("loc_6B68AE3: div %edi;");
    asm("loc_6B68AE5: pop %edi;");
    asm("loc_6B68AE6: pop %esi;");
    asm("loc_6B68AE7: pop %ebp;");
    asm("loc_6B68AE8: pop %ebx;");
    asm("loc_6B68AE9: mov %eax,8(%ecx);");
    asm("loc_6B68AEC: xor %eax,%eax;");
    asm("loc_6B68AEE: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68B00() // _sub_6B68B00
{
    __DEBUG_ASM(6B68B00);
    // chunk 0x6B68B00 _sub_6B68B00
    asm("loc_6B68B00: mov 4(%esp),%eax;");
    asm("loc_6B68B04: push %ebx;");
    asm("loc_6B68B05: push %ebp;");
    asm("loc_6B68B06: mov 0x10(%esp),%ebp;");
    asm("loc_6B68B0A: push %esi;");
    asm("loc_6B68B0B: push %edi;");
    asm("loc_6B68B0C: mov %ecx,%edi;");
    asm("loc_6B68B0E: lea 0x10(%edi),%esi;");
    asm("loc_6B68B11: push %esi;");
    asm("loc_6B68B12: push %ebp;");
    asm("loc_6B68B13: lea 0x18(%edi),%ebx;");
    asm("loc_6B68B16: push %ebx;");
    asm("loc_6B68B17: mov %ebp,4(%esi);");
    asm("loc_6B68B1A: mov %eax,8(%esi);");
    asm("loc_6B68B1D: movl $0,(%esi);");
    asm("loc_6B68B23: movl $0,0xC(%esi);");
    asm("loc_6B68B2A: call _sub_6B4E780;");
    asm("loc_6B68B2F: test %eax,%eax;");
    asm("loc_6B68B31: mov %eax,0x1C(%edi);");
    asm("loc_6B68B34: je loc_6B68B42;");
    asm("loc_6B68B36: pop %edi;");
    asm("loc_6B68B37: pop %esi;");
    asm("loc_6B68B38: pop %ebp;");
    asm("loc_6B68B39: mov $0x17,%eax;");
    asm("loc_6B68B3E: pop %ebx;");
    asm("loc_6B68B3F: ret $0xC;");
    asm("loc_6B68B42: mov (%esi),%edx;");
    asm("loc_6B68B44: mov 4(%esi),%ecx;");
    asm("loc_6B68B47: add $4,%edx;");
    asm("loc_6B68B4A: mov %edx,%eax;");
    asm("loc_6B68B4C: cmp %ecx,%eax;");
    asm("loc_6B68B4E: mov %edx,(%esi);");
    asm("loc_6B68B50: mov $0x17,%ecx;");
    asm("loc_6B68B55: jbe loc_6B68B5A;");
    asm("loc_6B68B57: mov %ecx,0xC(%esi);");
    asm("loc_6B68B5A: mov 0x1C(%edi),%eax;");
    asm("loc_6B68B5D: test %eax,%eax;");
    asm("loc_6B68B5F: jne loc_6B68C50;");
    asm("loc_6B68B65: mov (%ebx),%eax;");
    asm("loc_6B68B67: mov (%eax),%edx;");
    asm("loc_6B68B69: add $4,%eax;");
    asm("loc_6B68B6C: mov %eax,(%ebx);");
    asm("loc_6B68B6E: mov %edx,0x20(%edi);");
    asm("loc_6B68B71: mov (%esi),%eax;");
    asm("loc_6B68B73: mov 4(%esi),%edx;");
    asm("loc_6B68B76: add $4,%eax;");
    asm("loc_6B68B79: cmp %edx,%eax;");
    asm("loc_6B68B7B: mov %eax,(%esi);");
    asm("loc_6B68B7D: jbe loc_6B68B82;");
    asm("loc_6B68B7F: mov %ecx,0xC(%esi);");
    asm("loc_6B68B82: mov 0x1C(%edi),%eax;");
    asm("loc_6B68B85: test %eax,%eax;");
    asm("loc_6B68B87: jne loc_6B68C50;");
    asm("loc_6B68B8D: mov (%ebx),%eax;");
    asm("loc_6B68B8F: mov (%eax),%edx;");
    asm("loc_6B68B91: add $4,%eax;");
    asm("loc_6B68B94: mov %eax,(%ebx);");
    asm("loc_6B68B96: mov %edx,0x24(%edi);");
    asm("loc_6B68B99: mov (%esi),%eax;");
    asm("loc_6B68B9B: mov 4(%esi),%edx;");
    asm("loc_6B68B9E: add $2,%eax;");
    asm("loc_6B68BA1: cmp %edx,%eax;");
    asm("loc_6B68BA3: mov %eax,(%esi);");
    asm("loc_6B68BA5: jbe loc_6B68BAA;");
    asm("loc_6B68BA7: mov %ecx,0xC(%esi);");
    asm("loc_6B68BAA: mov 0x1C(%edi),%eax;");
    asm("loc_6B68BAD: test %eax,%eax;");
    asm("loc_6B68BAF: jne loc_6B68C50;");
    asm("loc_6B68BB5: mov (%ebx),%eax;");
    asm("loc_6B68BB7: mov (%eax),%dx;");
    asm("loc_6B68BBA: add $2,%eax;");
    asm("loc_6B68BBD: mov %eax,(%ebx);");
    asm("loc_6B68BBF: mov %dx,0x28(%edi);");
    asm("loc_6B68BC3: mov (%esi),%eax;");
    asm("loc_6B68BC5: mov 4(%esi),%edx;");
    asm("loc_6B68BC8: add $2,%eax;");
    asm("loc_6B68BCB: cmp %edx,%eax;");
    asm("loc_6B68BCD: mov %eax,(%esi);");
    asm("loc_6B68BCF: jbe loc_6B68BD4;");
    asm("loc_6B68BD1: mov %ecx,0xC(%esi);");
    asm("loc_6B68BD4: mov 0x1C(%edi),%eax;");
    asm("loc_6B68BD7: test %eax,%eax;");
    asm("loc_6B68BD9: jne loc_6B68C50;");
    asm("loc_6B68BDB: mov (%ebx),%eax;");
    asm("loc_6B68BDD: mov (%eax),%cx;");
    asm("loc_6B68BE0: push %esi;");
    asm("loc_6B68BE1: push %ebp;");
    asm("loc_6B68BE2: mov %cx,0x2A(%edi);");
    asm("loc_6B68BE6: add $2,%eax;");
    asm("loc_6B68BE9: push %ebx;");
    asm("loc_6B68BEA: mov %edi,%ecx;");
    asm("loc_6B68BEC: mov %eax,(%ebx);");
    asm("loc_6B68BEE: call _sub_6B4E7A0;");
    asm("loc_6B68BF3: test %eax,%eax;");
    asm("loc_6B68BF5: mov %eax,0x1C(%edi);");
    asm("loc_6B68BF8: je loc_6B68C06;");
    asm("loc_6B68BFA: pop %edi;");
    asm("loc_6B68BFB: pop %esi;");
    asm("loc_6B68BFC: pop %ebp;");
    asm("loc_6B68BFD: mov $0x17,%eax;");
    asm("loc_6B68C02: pop %ebx;");
    asm("loc_6B68C03: ret $0xC;");
    asm("loc_6B68C06: mov (%esi),%edx;");
    asm("loc_6B68C08: mov 0x1C(%esp),%eax;");
    asm("loc_6B68C0C: mov %edx,(%eax);");
    asm("loc_6B68C0E: mov 0xC(%edi),%ecx;");
    asm("loc_6B68C11: push %ecx;");
    asm("loc_6B68C12: call _sub_6B4ECD0;");
    asm("loc_6B68C17: mov %eax,%ecx;");
    asm("loc_6B68C19: mov 4(%ecx),%edx;");
    asm("loc_6B68C1C: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B68C1F: mov 0x14(%ecx),%eax;");
    asm("loc_6B68C22: add $4,%esp;");
    asm("loc_6B68C25: inc %edx;");
    asm("loc_6B68C26: mov %edx,4(%ecx);");
    asm("loc_6B68C29: mov %edx,%edi;");
    asm("loc_6B68C2B: mov (%esi),%edx;");
    asm("loc_6B68C2D: add $2,%edx;");
    asm("loc_6B68C30: add %edx,%ebp;");
    asm("loc_6B68C32: mov %ebp,0x1C(%ecx);");
    asm("loc_6B68C35: mov (%esi),%esi;");
    asm("loc_6B68C37: add $2,%eax;");
    asm("loc_6B68C3A: cmp %eax,%esi;");
    asm("loc_6B68C3C: jbe loc_6B68C44;");
    asm("loc_6B68C3E: add $2,%esi;");
    asm("loc_6B68C41: mov %esi,0x14(%ecx);");
    asm("loc_6B68C44: mov 0x1C(%ecx),%eax;");
    asm("loc_6B68C47: xor %edx,%edx;");
    asm("loc_6B68C49: div %edi;");
    asm("loc_6B68C4B: mov %eax,0xC(%ecx);");
    asm("loc_6B68C4E: xor %eax,%eax;");
    asm("loc_6B68C50: pop %edi;");
    asm("loc_6B68C51: pop %esi;");
    asm("loc_6B68C52: pop %ebp;");
    asm("loc_6B68C53: pop %ebx;");
    asm("loc_6B68C54: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68C60() // _sub_6B68C60
{
    __DEBUG_ASM(6B68C60);
    // chunk 0x6B68C60 _sub_6B68C60
    asm("loc_6B68C60: mov _data_6B6EAA4,%eax;");
    asm("loc_6B68C65: mov %eax,_data_6B74610;");
    asm("loc_6B68C6A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68C70() // _sub_6B68C70
{
    __DEBUG_ASM(6B68C70);
    // chunk 0x6B68C70 _sub_6B68C70
    asm("loc_6B68C70: mov _data_6B6EAA4,%eax;");
    asm("loc_6B68C75: mov %eax,_data_6B74614;");
    asm("loc_6B68C7A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68C80() // _sub_6B68C80
{
    __DEBUG_ASM(6B68C80);
    // chunk 0x6B68C80 _sub_6B68C80
    asm("loc_6B68C80: mov _data_6B6EAA8,%eax;");
    asm("loc_6B68C85: mov %eax,_data_6B7460C;");
    asm("loc_6B68C8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B68C90() // _sub_6B68C90
{
    asm("jmp dgb_6B68C90;"); // jumptable skip
    asm(".long _jmp_6B68FF0;"); // jumptable address
    __DEBUG_ASM(6B68C90);
    // chunk 0x6B68C90 _sub_6B68C90
    asm("loc_6B68C90: mov 8(%esp),%eax;");
    asm("loc_6B68C94: push %ebx;");
    asm("loc_6B68C95: push %ebp;");
    asm("loc_6B68C96: push %esi;");
    asm("loc_6B68C97: push %edi;");
    asm("loc_6B68C98: mov %ecx,%edi;");
    asm("loc_6B68C9A: mov 0x14(%esp),%ecx;");
    asm("loc_6B68C9E: lea 0x10(%edi),%esi;");
    asm("loc_6B68CA1: mov %eax,4(%esi);");
    asm("loc_6B68CA4: mov (%ecx),%edx;");
    asm("loc_6B68CA6: xor %ebx,%ebx;");
    asm("loc_6B68CA8: mov %edx,8(%esi);");
    asm("loc_6B68CAB: mov %ebx,(%esi);");
    asm("loc_6B68CAD: mov %ebx,0xC(%esi);");
    asm("loc_6B68CB0: mov 0x14(%edi),%eax;");
    asm("loc_6B68CB3: push %esi;");
    asm("loc_6B68CB4: push %eax;");
    asm("loc_6B68CB5: lea 0x18(%edi),%ebp;");
    asm("loc_6B68CB8: push %ebp;");
    asm("loc_6B68CB9: mov %edi,%ecx;");
    asm("loc_6B68CBB: call _sub_6B4E740;");
    asm("loc_6B68CC0: cmp %ebx,%eax;");
    asm("loc_6B68CC2: mov %eax,0x1C(%edi);");
    asm("loc_6B68CC5: je loc_6B68CD3;");
    asm("loc_6B68CC7: pop %edi;");
    asm("loc_6B68CC8: pop %esi;");
    asm("loc_6B68CC9: pop %ebp;");
    asm("loc_6B68CCA: mov $0x16,%eax;");
    asm("loc_6B68CCF: pop %ebx;");
    asm("loc_6B68CD0: ret $0xC;");
    asm("loc_6B68CD3: mov (%esi),%eax;");
    asm("loc_6B68CD5: mov 4(%esi),%edx;");
    asm("loc_6B68CD8: mov 0x20(%edi),%cl;");
    asm("loc_6B68CDB: inc %eax;");
    asm("loc_6B68CDC: cmp %edx,%eax;");
    asm("loc_6B68CDE: mov %eax,(%esi);");
    asm("loc_6B68CE0: jbe loc_6B68CE9;");
    asm("loc_6B68CE2: movl $0x16,0xC(%esi);");
    asm("loc_6B68CE9: cmp %ebx,0x1C(%edi);");
    asm("loc_6B68CEC: je loc_6B68CFA;");
    asm("loc_6B68CEE: pop %edi;");
    asm("loc_6B68CEF: pop %esi;");
    asm("loc_6B68CF0: pop %ebp;");
    asm("loc_6B68CF1: mov $0x16,%eax;");
    asm("loc_6B68CF6: pop %ebx;");
    asm("loc_6B68CF7: ret $0xC;");
    asm("loc_6B68CFA: mov (%ebp),%eax;");
    asm("loc_6B68CFD: mov %cl,(%eax);");
    asm("loc_6B68CFF: inc %eax;");
    asm("loc_6B68D00: mov %eax,(%ebp);");
    asm("loc_6B68D03: mov %bl,0x18(%esp);");
    asm("loc_6B68D07: calll *_import_6B6B028;");
    asm("loc_6B68D0D: test %al,%al;");
    asm("loc_6B68D0F: mov $1,%dl;");
    asm("loc_6B68D11: jne loc_6B68D15;");
    asm("loc_6B68D13: mov %bl,%dl;");
    asm("loc_6B68D15: mov 0x20(%edi),%eax;");
    asm("loc_6B68D18: dec %eax;");
    asm("loc_6B68D19: cmp $0x7F,%eax;");
    asm("loc_6B68D1C: ja loc_6B68F88;");
    asm("loc_6B68D22: movzbl _data_6B69010(%eax),%ecx;");
    asm("loc_6B68D29: jmpl *_jmp_6B68FF0(,%ecx,4);");
    asm("loc_6B68D30: mov (%esi),%eax;");
    asm("loc_6B68D32: mov 4(%esi),%ebx;");
    asm("loc_6B68D35: mov 0x30(%edi),%cl;");
    asm("loc_6B68D38: inc %eax;");
    asm("loc_6B68D39: cmp %ebx,%eax;");
    asm("loc_6B68D3B: mov %eax,(%esi);");
    asm("loc_6B68D3D: jbe loc_6B68D46;");
    asm("loc_6B68D3F: movl $0x16,0xC(%esi);");
    asm("loc_6B68D46: mov 0x1C(%edi),%eax;");
    asm("loc_6B68D49: test %eax,%eax;");
    asm("loc_6B68D4B: je loc_6B68D59;");
    asm("loc_6B68D4D: pop %edi;");
    asm("loc_6B68D4E: pop %esi;");
    asm("loc_6B68D4F: pop %ebp;");
    asm("loc_6B68D50: mov $0x16,%eax;");
    asm("loc_6B68D55: pop %ebx;");
    asm("loc_6B68D56: ret $0xC;");
    asm("loc_6B68D59: mov (%ebp),%eax;");
    asm("loc_6B68D5C: mov %cl,(%eax);");
    asm("loc_6B68D5E: inc %eax;");
    asm("loc_6B68D5F: test %dl,%dl;");
    asm("loc_6B68D61: mov %eax,(%ebp);");
    asm("loc_6B68D64: je loc_6B68D7D;");
    asm("loc_6B68D66: mov (%esi),%edx;");
    asm("loc_6B68D68: add $4,%edx;");
    asm("loc_6B68D6B: mov %edx,(%esi);");
    asm("loc_6B68D6D: mov 4(%esi),%ecx;");
    asm("loc_6B68D70: mov %edx,%eax;");
    asm("loc_6B68D72: cmp %ecx,%eax;");
    asm("loc_6B68D74: jbe loc_6B68D7D;");
    asm("loc_6B68D76: movl $0x16,0xC(%esi);");
    asm("loc_6B68D7D: mov 0x1C(%edi),%eax;");
    asm("loc_6B68D80: test %eax,%eax;");
    asm("loc_6B68D82: je loc_6B68F70;");
    asm("loc_6B68D88: pop %edi;");
    asm("loc_6B68D89: pop %esi;");
    asm("loc_6B68D8A: pop %ebp;");
    asm("loc_6B68D8B: mov $0x16,%eax;");
    asm("loc_6B68D90: pop %ebx;");
    asm("loc_6B68D91: ret $0xC;");
    asm("loc_6B68D94: mov (%esi),%ebx;");
    asm("loc_6B68D96: mov 4(%esi),%edx;");
    asm("loc_6B68D99: mov 0x24(%edi),%cl;");
    asm("loc_6B68D9C: inc %ebx;");
    asm("loc_6B68D9D: mov %ebx,%eax;");
    asm("loc_6B68D9F: cmp %edx,%eax;");
    asm("loc_6B68DA1: mov %ebx,(%esi);");
    asm("loc_6B68DA3: jbe loc_6B68DAC;");
    asm("loc_6B68DA5: movl $0x16,0xC(%esi);");
    asm("loc_6B68DAC: mov 0x1C(%edi),%eax;");
    asm("loc_6B68DAF: test %eax,%eax;");
    asm("loc_6B68DB1: je loc_6B68DBF;");
    asm("loc_6B68DB3: pop %edi;");
    asm("loc_6B68DB4: pop %esi;");
    asm("loc_6B68DB5: pop %ebp;");
    asm("loc_6B68DB6: mov $0x16,%eax;");
    asm("loc_6B68DBB: pop %ebx;");
    asm("loc_6B68DBC: ret $0xC;");
    asm("loc_6B68DBF: mov (%ebp),%eax;");
    asm("loc_6B68DC2: mov %cl,(%eax);");
    asm("loc_6B68DC4: inc %eax;");
    asm("loc_6B68DC5: jmp loc_6B68F85;");
    asm("loc_6B68DCA: mov (%esi),%ebx;");
    asm("loc_6B68DCC: mov 4(%esi),%ecx;");
    asm("loc_6B68DCF: add $4,%ebx;");
    asm("loc_6B68DD2: mov %ebx,%eax;");
    asm("loc_6B68DD4: cmp %ecx,%eax;");
    asm("loc_6B68DD6: mov %ebx,(%esi);");
    asm("loc_6B68DD8: jbe loc_6B68DE1;");
    asm("loc_6B68DDA: movl $0x16,0xC(%esi);");
    asm("loc_6B68DE1: mov 0x1C(%edi),%eax;");
    asm("loc_6B68DE4: test %eax,%eax;");
    asm("loc_6B68DE6: je loc_6B68DF4;");
    asm("loc_6B68DE8: pop %edi;");
    asm("loc_6B68DE9: pop %esi;");
    asm("loc_6B68DEA: pop %ebp;");
    asm("loc_6B68DEB: mov $0x16,%eax;");
    asm("loc_6B68DF0: pop %ebx;");
    asm("loc_6B68DF1: ret $0xC;");
    asm("loc_6B68DF4: mov (%ebp),%eax;");
    asm("loc_6B68DF7: mov 0x2C(%edi),%ecx;");
    asm("loc_6B68DFA: mov %ecx,(%eax);");
    asm("loc_6B68DFC: add $4,%eax;");
    asm("loc_6B68DFF: test %dl,%dl;");
    asm("loc_6B68E01: mov %eax,(%ebp);");
    asm("loc_6B68E04: je loc_6B68E1D;");
    asm("loc_6B68E06: mov (%esi),%edx;");
    asm("loc_6B68E08: add $4,%edx;");
    asm("loc_6B68E0B: mov %edx,(%esi);");
    asm("loc_6B68E0D: mov 4(%esi),%ecx;");
    asm("loc_6B68E10: mov %edx,%eax;");
    asm("loc_6B68E12: cmp %ecx,%eax;");
    asm("loc_6B68E14: jbe loc_6B68E1D;");
    asm("loc_6B68E16: movl $0x16,0xC(%esi);");
    asm("loc_6B68E1D: mov 0x1C(%edi),%eax;");
    asm("loc_6B68E20: test %eax,%eax;");
    asm("loc_6B68E22: je loc_6B68F7A;");
    asm("loc_6B68E28: pop %edi;");
    asm("loc_6B68E29: pop %esi;");
    asm("loc_6B68E2A: pop %ebp;");
    asm("loc_6B68E2B: mov $0x16,%eax;");
    asm("loc_6B68E30: pop %ebx;");
    asm("loc_6B68E31: ret $0xC;");
    asm("loc_6B68E34: mov (%esi),%ebx;");
    asm("loc_6B68E36: mov 4(%esi),%ecx;");
    asm("loc_6B68E39: add $4,%ebx;");
    asm("loc_6B68E3C: mov %ebx,%eax;");
    asm("loc_6B68E3E: cmp %ecx,%eax;");
    asm("loc_6B68E40: mov %ebx,(%esi);");
    asm("loc_6B68E42: jbe loc_6B68E4B;");
    asm("loc_6B68E44: movl $0x16,0xC(%esi);");
    asm("loc_6B68E4B: mov 0x1C(%edi),%eax;");
    asm("loc_6B68E4E: test %eax,%eax;");
    asm("loc_6B68E50: je loc_6B68E5E;");
    asm("loc_6B68E52: pop %edi;");
    asm("loc_6B68E53: pop %esi;");
    asm("loc_6B68E54: pop %ebp;");
    asm("loc_6B68E55: mov $0x16,%eax;");
    asm("loc_6B68E5A: pop %ebx;");
    asm("loc_6B68E5B: ret $0xC;");
    asm("loc_6B68E5E: mov (%ebp),%eax;");
    asm("loc_6B68E61: mov 0x34(%edi),%ecx;");
    asm("loc_6B68E64: mov %ecx,(%eax);");
    asm("loc_6B68E66: add $4,%eax;");
    asm("loc_6B68E69: mov %eax,(%ebp);");
    asm("loc_6B68E6C: mov (%esi),%ebx;");
    asm("loc_6B68E6E: mov 4(%esi),%ecx;");
    asm("loc_6B68E71: add $4,%ebx;");
    asm("loc_6B68E74: mov %ebx,%eax;");
    asm("loc_6B68E76: cmp %ecx,%eax;");
    asm("loc_6B68E78: mov %ebx,(%esi);");
    asm("loc_6B68E7A: mov $0x16,%ecx;");
    asm("loc_6B68E7F: jbe loc_6B68E84;");
    asm("loc_6B68E81: mov %ecx,0xC(%esi);");
    asm("loc_6B68E84: mov 0x1C(%edi),%eax;");
    asm("loc_6B68E87: test %eax,%eax;");
    asm("loc_6B68E89: jne loc_6B68F03;");
    asm("loc_6B68E8B: mov (%ebp),%eax;");
    asm("loc_6B68E8E: mov 0x38(%edi),%ebx;");
    asm("loc_6B68E91: mov %ebx,(%eax);");
    asm("loc_6B68E93: add $4,%eax;");
    asm("loc_6B68E96: mov %eax,(%ebp);");
    asm("loc_6B68E99: mov (%esi),%eax;");
    asm("loc_6B68E9B: mov 4(%esi),%ebx;");
    asm("loc_6B68E9E: add $4,%eax;");
    asm("loc_6B68EA1: cmp %ebx,%eax;");
    asm("loc_6B68EA3: mov %eax,(%esi);");
    asm("loc_6B68EA5: jbe loc_6B68EAA;");
    asm("loc_6B68EA7: mov %ecx,0xC(%esi);");
    asm("loc_6B68EAA: mov 0x1C(%edi),%eax;");
    asm("loc_6B68EAD: test %eax,%eax;");
    asm("loc_6B68EAF: jne loc_6B68F03;");
    asm("loc_6B68EB1: flds 0x3C(%edi);");
    asm("loc_6B68EB4: mov (%ebp),%eax;");
    asm("loc_6B68EB7: fstps (%eax);");
    asm("loc_6B68EB9: add $4,%eax;");
    asm("loc_6B68EBC: mov %eax,(%ebp);");
    asm("loc_6B68EBF: mov (%esi),%eax;");
    asm("loc_6B68EC1: add $2,%eax;");
    asm("loc_6B68EC4: mov %eax,(%esi);");
    asm("loc_6B68EC6: cmp 4(%esi),%eax;");
    asm("loc_6B68EC9: jbe loc_6B68ECE;");
    asm("loc_6B68ECB: mov %ecx,0xC(%esi);");
    asm("loc_6B68ECE: mov 0x1C(%edi),%eax;");
    asm("loc_6B68ED1: test %eax,%eax;");
    asm("loc_6B68ED3: jne loc_6B68F03;");
    asm("loc_6B68ED5: mov (%ebp),%eax;");
    asm("loc_6B68ED8: mov 0x40(%edi),%bx;");
    asm("loc_6B68EDC: mov %bx,(%eax);");
    asm("loc_6B68EDF: add $2,%eax;");
    asm("loc_6B68EE2: test %dl,%dl;");
    asm("loc_6B68EE4: mov %eax,(%ebp);");
    asm("loc_6B68EE7: je loc_6B68EFC;");
    asm("loc_6B68EE9: mov (%esi),%ebx;");
    asm("loc_6B68EEB: add $4,%ebx;");
    asm("loc_6B68EEE: mov %ebx,(%esi);");
    asm("loc_6B68EF0: mov 4(%esi),%edx;");
    asm("loc_6B68EF3: mov %ebx,%eax;");
    asm("loc_6B68EF5: cmp %edx,%eax;");
    asm("loc_6B68EF7: jbe loc_6B68EFC;");
    asm("loc_6B68EF9: mov %ecx,0xC(%esi);");
    asm("loc_6B68EFC: mov 0x1C(%edi),%eax;");
    asm("loc_6B68EFF: test %eax,%eax;");
    asm("loc_6B68F01: je loc_6B68F7A;");
    asm("loc_6B68F03: pop %edi;");
    asm("loc_6B68F04: pop %esi;");
    asm("loc_6B68F05: pop %ebp;");
    asm("loc_6B68F06: mov %ecx,%eax;");
    asm("loc_6B68F08: pop %ebx;");
    asm("loc_6B68F09: ret $0xC;");
    asm("loc_6B68F0C: mov (%esi),%ebx;");
    asm("loc_6B68F0E: mov 4(%esi),%ecx;");
    asm("loc_6B68F11: add $4,%ebx;");
    asm("loc_6B68F14: mov %ebx,%eax;");
    asm("loc_6B68F16: cmp %ecx,%eax;");
    asm("loc_6B68F18: mov %ebx,(%esi);");
    asm("loc_6B68F1A: jbe loc_6B68F23;");
    asm("loc_6B68F1C: movl $0x16,0xC(%esi);");
    asm("loc_6B68F23: mov 0x1C(%edi),%eax;");
    asm("loc_6B68F26: test %eax,%eax;");
    asm("loc_6B68F28: je loc_6B68F36;");
    asm("loc_6B68F2A: pop %edi;");
    asm("loc_6B68F2B: pop %esi;");
    asm("loc_6B68F2C: pop %ebp;");
    asm("loc_6B68F2D: mov $0x16,%eax;");
    asm("loc_6B68F32: pop %ebx;");
    asm("loc_6B68F33: ret $0xC;");
    asm("loc_6B68F36: mov (%ebp),%eax;");
    asm("loc_6B68F39: mov 0x34(%edi),%ecx;");
    asm("loc_6B68F3C: mov %ecx,(%eax);");
    asm("loc_6B68F3E: add $4,%eax;");
    asm("loc_6B68F41: mov %eax,(%ebp);");
    asm("loc_6B68F44: mov (%esi),%ebx;");
    asm("loc_6B68F46: mov 4(%esi),%ecx;");
    asm("loc_6B68F49: add $4,%ebx;");
    asm("loc_6B68F4C: mov %ebx,%eax;");
    asm("loc_6B68F4E: cmp %ecx,%eax;");
    asm("loc_6B68F50: mov %ebx,(%esi);");
    asm("loc_6B68F52: mov $0x16,%ecx;");
    asm("loc_6B68F57: jbe loc_6B68F5C;");
    asm("loc_6B68F59: mov %ecx,0xC(%esi);");
    asm("loc_6B68F5C: mov 0x1C(%edi),%eax;");
    asm("loc_6B68F5F: test %eax,%eax;");
    asm("loc_6B68F61: jne loc_6B68F03;");
    asm("loc_6B68F63: mov (%ebp),%eax;");
    asm("loc_6B68F66: mov 0x38(%edi),%ebx;");
    asm("loc_6B68F69: mov %ebx,(%eax);");
    asm("loc_6B68F6B: jmp loc_6B68EB9;");
    asm("loc_6B68F70: mov (%ebp),%eax;");
    asm("loc_6B68F73: mov 0x28(%edi),%ecx;");
    asm("loc_6B68F76: mov %ecx,(%eax);");
    asm("loc_6B68F78: jmp loc_6B68F82;");
    asm("loc_6B68F7A: mov 0x28(%edi),%edx;");
    asm("loc_6B68F7D: mov (%ebp),%eax;");
    asm("loc_6B68F80: mov %edx,(%eax);");
    asm("loc_6B68F82: add $4,%eax;");
    asm("loc_6B68F85: mov %eax,(%ebp);");
    asm("loc_6B68F88: mov 0x14(%edi),%eax;");
    asm("loc_6B68F8B: push %esi;");
    asm("loc_6B68F8C: push %eax;");
    asm("loc_6B68F8D: push %ebp;");
    asm("loc_6B68F8E: mov %edi,%ecx;");
    asm("loc_6B68F90: call _sub_6B4E790;");
    asm("loc_6B68F95: test %eax,%eax;");
    asm("loc_6B68F97: mov %eax,0x1C(%edi);");
    asm("loc_6B68F9A: je loc_6B68FA8;");
    asm("loc_6B68F9C: pop %edi;");
    asm("loc_6B68F9D: pop %esi;");
    asm("loc_6B68F9E: pop %ebp;");
    asm("loc_6B68F9F: mov $0x16,%eax;");
    asm("loc_6B68FA4: pop %ebx;");
    asm("loc_6B68FA5: ret $0xC;");
    asm("loc_6B68FA8: mov (%esi),%ecx;");
    asm("loc_6B68FAA: mov 0x1C(%esp),%edx;");
    asm("loc_6B68FAE: mov %ecx,(%edx);");
    asm("loc_6B68FB0: mov 0xC(%edi),%eax;");
    asm("loc_6B68FB3: push %eax;");
    asm("loc_6B68FB4: call _sub_6B4ECD0;");
    asm("loc_6B68FB9: mov %eax,%ecx;");
    asm("loc_6B68FBB: mov (%ecx),%ebp;");
    asm("loc_6B68FBD: mov 0x18(%ecx),%ebx;");
    asm("loc_6B68FC0: mov 0x10(%ecx),%eax;");
    asm("loc_6B68FC3: add $4,%esp;");
    asm("loc_6B68FC6: inc %ebp;");
    asm("loc_6B68FC7: mov %ebp,(%ecx);");
    asm("loc_6B68FC9: mov (%esi),%edx;");
    asm("loc_6B68FCB: add %edx,%ebx;");
    asm("loc_6B68FCD: mov %ebx,0x18(%ecx);");
    asm("loc_6B68FD0: mov (%esi),%esi;");
    asm("loc_6B68FD2: cmp %eax,%esi;");
    asm("loc_6B68FD4: mov %ebp,%edi;");
    asm("loc_6B68FD6: jbe loc_6B68FDB;");
    asm("loc_6B68FD8: mov %esi,0x10(%ecx);");
    asm("loc_6B68FDB: mov 0x18(%ecx),%eax;");
    asm("loc_6B68FDE: xor %edx,%edx;");
    asm("loc_6B68FE0: div %edi;");
    asm("loc_6B68FE2: pop %edi;");
    asm("loc_6B68FE3: pop %esi;");
    asm("loc_6B68FE4: pop %ebp;");
    asm("loc_6B68FE5: pop %ebx;");
    asm("loc_6B68FE6: mov %eax,8(%ecx);");
    asm("loc_6B68FE9: xor %eax,%eax;");
    asm("loc_6B68FEB: ret $0xC;");
    asm("int3;"); // unreachable
    asm("_jmp_6B68FF0: .long loc_6B68E06;");
    asm(".long loc_6B68D94;");
    asm(".long loc_6B68DCA;");
    asm(".long loc_6B68E34;");
    asm(".long loc_6B68F0C;");
    asm(".long loc_6B68D66;");
    asm(".long loc_6B68D30;");
    asm(".long loc_6B68F88;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6B68C90);
_naked _weak void _sub_6B69090() // _sub_6B69090
{
    asm("jmp dgb_6B69090;"); // jumptable skip
    asm(".long _jmp_6B69458;"); // jumptable address
    __DEBUG_ASM(6B69090);
    // chunk 0x6B69090 _sub_6B69090
    asm("loc_6B69090: mov 8(%esp),%eax;");
    asm("loc_6B69094: push %ebx;");
    asm("loc_6B69095: push %ebp;");
    asm("loc_6B69096: push %esi;");
    asm("loc_6B69097: push %edi;");
    asm("loc_6B69098: mov %ecx,%edi;");
    asm("loc_6B6909A: mov 0x14(%esp),%ecx;");
    asm("loc_6B6909E: lea 0x10(%edi),%esi;");
    asm("loc_6B690A1: push %esi;");
    asm("loc_6B690A2: push %eax;");
    asm("loc_6B690A3: mov %ecx,8(%esi);");
    asm("loc_6B690A6: xor %ebx,%ebx;");
    asm("loc_6B690A8: lea 0x18(%edi),%ebp;");
    asm("loc_6B690AB: push %ebp;");
    asm("loc_6B690AC: mov %edi,%ecx;");
    asm("loc_6B690AE: mov %eax,4(%esi);");
    asm("loc_6B690B1: mov %ebx,(%esi);");
    asm("loc_6B690B3: mov %ebx,0xC(%esi);");
    asm("loc_6B690B6: call _sub_6B4E780;");
    asm("loc_6B690BB: cmp %ebx,%eax;");
    asm("loc_6B690BD: mov %eax,0x1C(%edi);");
    asm("loc_6B690C0: je loc_6B690CE;");
    asm("loc_6B690C2: pop %edi;");
    asm("loc_6B690C3: pop %esi;");
    asm("loc_6B690C4: pop %ebp;");
    asm("loc_6B690C5: mov $0x17,%eax;");
    asm("loc_6B690CA: pop %ebx;");
    asm("loc_6B690CB: ret $0xC;");
    asm("loc_6B690CE: mov (%esi),%edx;");
    asm("loc_6B690D0: mov 4(%esi),%ecx;");
    asm("loc_6B690D3: inc %edx;");
    asm("loc_6B690D4: mov %edx,%eax;");
    asm("loc_6B690D6: cmp %ecx,%eax;");
    asm("loc_6B690D8: mov %edx,(%esi);");
    asm("loc_6B690DA: jbe loc_6B690E3;");
    asm("loc_6B690DC: movl $0x17,0xC(%esi);");
    asm("loc_6B690E3: mov 0x1C(%edi),%eax;");
    asm("loc_6B690E6: cmp %ebx,%eax;");
    asm("loc_6B690E8: jne loc_6B6944F;");
    asm("loc_6B690EE: mov (%ebp),%eax;");
    asm("loc_6B690F1: mov (%eax),%cl;");
    asm("loc_6B690F3: xor %edx,%edx;");
    asm("loc_6B690F5: mov %cl,%dl;");
    asm("loc_6B690F7: inc %eax;");
    asm("loc_6B690F8: mov %eax,(%ebp);");
    asm("loc_6B690FB: mov %bl,0x14(%esp);");
    asm("loc_6B690FF: mov %edx,0x20(%edi);");
    asm("loc_6B69102: calll *_import_6B6B028;");
    asm("loc_6B69108: test %al,%al;");
    asm("loc_6B6910A: mov $1,%dl;");
    asm("loc_6B6910C: je loc_6B69110;");
    asm("loc_6B6910E: mov %bl,%dl;");
    asm("loc_6B69110: mov 0x20(%edi),%eax;");
    asm("loc_6B69113: dec %eax;");
    asm("loc_6B69114: cmp $0x7F,%eax;");
    asm("loc_6B69117: ja loc_6B69229;");
    asm("loc_6B6911D: movzbl _data_6B69478(%eax),%eax;");
    asm("loc_6B69124: jmpl *_jmp_6B69458(,%eax,4);");
    asm("loc_6B6912B: mov (%esi),%edx;");
    asm("loc_6B6912D: mov 4(%esi),%ecx;");
    asm("loc_6B69130: inc %edx;");
    asm("loc_6B69131: mov %edx,%eax;");
    asm("loc_6B69133: cmp %ecx,%eax;");
    asm("loc_6B69135: mov %edx,(%esi);");
    asm("loc_6B69137: jbe loc_6B69140;");
    asm("loc_6B69139: movl $0x17,0xC(%esi);");
    asm("loc_6B69140: mov 0x1C(%edi),%eax;");
    asm("loc_6B69143: test %eax,%eax;");
    asm("loc_6B69145: jne loc_6B6944F;");
    asm("loc_6B6914B: mov (%ebp),%eax;");
    asm("loc_6B6914E: mov (%eax),%cl;");
    asm("loc_6B69150: movsbl %cl,%edx;");
    asm("loc_6B69153: inc %eax;");
    asm("loc_6B69154: mov %edx,0x24(%edi);");
    asm("loc_6B69157: jmp loc_6B69226;");
    asm("loc_6B6915C: mov (%esi),%ebx;");
    asm("loc_6B6915E: mov 4(%esi),%ecx;");
    asm("loc_6B69161: inc %ebx;");
    asm("loc_6B69162: mov %ebx,%eax;");
    asm("loc_6B69164: cmp %ecx,%eax;");
    asm("loc_6B69166: mov %ebx,(%esi);");
    asm("loc_6B69168: jbe loc_6B69171;");
    asm("loc_6B6916A: movl $0x17,0xC(%esi);");
    asm("loc_6B69171: mov 0x1C(%edi),%eax;");
    asm("loc_6B69174: test %eax,%eax;");
    asm("loc_6B69176: jne loc_6B6944F;");
    asm("loc_6B6917C: mov (%ebp),%eax;");
    asm("loc_6B6917F: mov (%eax),%cl;");
    asm("loc_6B69181: inc %eax;");
    asm("loc_6B69182: test %cl,%cl;");
    asm("loc_6B69184: mov %eax,(%ebp);");
    asm("loc_6B69187: setne %al;");
    asm("loc_6B6918A: test %dl,%dl;");
    asm("loc_6B6918C: mov %al,0x30(%edi);");
    asm("loc_6B6918F: je loc_6B691A8;");
    asm("loc_6B69191: mov (%esi),%edx;");
    asm("loc_6B69193: mov 4(%esi),%ecx;");
    asm("loc_6B69196: add $4,%edx;");
    asm("loc_6B69199: mov %edx,%eax;");
    asm("loc_6B6919B: cmp %ecx,%eax;");
    asm("loc_6B6919D: mov %edx,(%esi);");
    asm("loc_6B6919F: jbe loc_6B691A8;");
    asm("loc_6B691A1: movl $0x16,0xC(%esi);");
    asm("loc_6B691A8: mov 0x1C(%edi),%eax;");
    asm("loc_6B691AB: test %eax,%eax;");
    asm("loc_6B691AD: je loc_6B691BB;");
    asm("loc_6B691AF: pop %edi;");
    asm("loc_6B691B0: pop %esi;");
    asm("loc_6B691B1: pop %ebp;");
    asm("loc_6B691B2: mov $0x16,%eax;");
    asm("loc_6B691B7: pop %ebx;");
    asm("loc_6B691B8: ret $0xC;");
    asm("loc_6B691BB: mov (%ebp),%eax;");
    asm("loc_6B691BE: mov 0x28(%edi),%ecx;");
    asm("loc_6B691C1: mov %ecx,(%eax);");
    asm("loc_6B691C3: jmp loc_6B69223;");
    asm("loc_6B691C5: mov (%esi),%ebx;");
    asm("loc_6B691C7: mov 4(%esi),%ecx;");
    asm("loc_6B691CA: add $4,%ebx;");
    asm("loc_6B691CD: mov %ebx,%eax;");
    asm("loc_6B691CF: cmp %ecx,%eax;");
    asm("loc_6B691D1: mov %ebx,(%esi);");
    asm("loc_6B691D3: jbe loc_6B691DC;");
    asm("loc_6B691D5: movl $0x17,0xC(%esi);");
    asm("loc_6B691DC: mov 0x1C(%edi),%eax;");
    asm("loc_6B691DF: test %eax,%eax;");
    asm("loc_6B691E1: jne loc_6B6944F;");
    asm("loc_6B691E7: mov (%ebp),%eax;");
    asm("loc_6B691EA: mov (%eax),%ecx;");
    asm("loc_6B691EC: add $4,%eax;");
    asm("loc_6B691EF: test %dl,%dl;");
    asm("loc_6B691F1: mov %ecx,0x2C(%edi);");
    asm("loc_6B691F4: mov %eax,(%ebp);");
    asm("loc_6B691F7: je loc_6B69210;");
    asm("loc_6B691F9: mov (%esi),%edx;");
    asm("loc_6B691FB: add $4,%edx;");
    asm("loc_6B691FE: mov %edx,(%esi);");
    asm("loc_6B69200: mov 4(%esi),%ecx;");
    asm("loc_6B69203: mov %edx,%eax;");
    asm("loc_6B69205: cmp %ecx,%eax;");
    asm("loc_6B69207: jbe loc_6B69210;");
    asm("loc_6B69209: movl $0x17,0xC(%esi);");
    asm("loc_6B69210: mov 0x1C(%edi),%eax;");
    asm("loc_6B69213: test %eax,%eax;");
    asm("loc_6B69215: jne loc_6B6944F;");
    asm("loc_6B6921B: mov (%ebp),%eax;");
    asm("loc_6B6921E: mov (%eax),%edx;");
    asm("loc_6B69220: mov %edx,0x28(%edi);");
    asm("loc_6B69223: add $4,%eax;");
    asm("loc_6B69226: mov %eax,(%ebp);");
    asm("loc_6B69229: mov 0x18(%esp),%eax;");
    asm("loc_6B6922D: push %esi;");
    asm("loc_6B6922E: push %eax;");
    asm("loc_6B6922F: push %ebp;");
    asm("loc_6B69230: mov %edi,%ecx;");
    asm("loc_6B69232: call _sub_6B4E7A0;");
    asm("loc_6B69237: test %eax,%eax;");
    asm("loc_6B69239: mov %eax,0x1C(%edi);");
    asm("loc_6B6923C: je loc_6B69405;");
    asm("loc_6B69242: pop %edi;");
    asm("loc_6B69243: pop %esi;");
    asm("loc_6B69244: pop %ebp;");
    asm("loc_6B69245: mov $0x17,%eax;");
    asm("loc_6B6924A: pop %ebx;");
    asm("loc_6B6924B: ret $0xC;");
    asm("loc_6B6924E: mov (%esi),%ebx;");
    asm("loc_6B69250: mov 4(%esi),%ecx;");
    asm("loc_6B69253: add $4,%ebx;");
    asm("loc_6B69256: mov %ebx,%eax;");
    asm("loc_6B69258: cmp %ecx,%eax;");
    asm("loc_6B6925A: mov %ebx,(%esi);");
    asm("loc_6B6925C: jbe loc_6B69265;");
    asm("loc_6B6925E: movl $0x17,0xC(%esi);");
    asm("loc_6B69265: mov 0x1C(%edi),%eax;");
    asm("loc_6B69268: test %eax,%eax;");
    asm("loc_6B6926A: jne loc_6B6944F;");
    asm("loc_6B69270: mov (%ebp),%eax;");
    asm("loc_6B69273: mov (%eax),%ecx;");
    asm("loc_6B69275: add $4,%eax;");
    asm("loc_6B69278: mov %ecx,0x34(%edi);");
    asm("loc_6B6927B: mov %eax,(%ebp);");
    asm("loc_6B6927E: mov (%esi),%ebx;");
    asm("loc_6B69280: mov 4(%esi),%ecx;");
    asm("loc_6B69283: add $4,%ebx;");
    asm("loc_6B69286: mov %ebx,%eax;");
    asm("loc_6B69288: cmp %ecx,%eax;");
    asm("loc_6B6928A: mov %ebx,(%esi);");
    asm("loc_6B6928C: mov $0x17,%ecx;");
    asm("loc_6B69291: jbe loc_6B69296;");
    asm("loc_6B69293: mov %ecx,0xC(%esi);");
    asm("loc_6B69296: mov 0x1C(%edi),%eax;");
    asm("loc_6B69299: test %eax,%eax;");
    asm("loc_6B6929B: jne loc_6B6944F;");
    asm("loc_6B692A1: mov (%ebp),%eax;");
    asm("loc_6B692A4: mov (%eax),%ebx;");
    asm("loc_6B692A6: add $4,%eax;");
    asm("loc_6B692A9: mov %eax,(%ebp);");
    asm("loc_6B692AC: mov %ebx,0x38(%edi);");
    asm("loc_6B692AF: mov (%esi),%eax;");
    asm("loc_6B692B1: mov 4(%esi),%ebx;");
    asm("loc_6B692B4: add $4,%eax;");
    asm("loc_6B692B7: cmp %ebx,%eax;");
    asm("loc_6B692B9: mov %eax,(%esi);");
    asm("loc_6B692BB: jbe loc_6B692C0;");
    asm("loc_6B692BD: mov %ecx,0xC(%esi);");
    asm("loc_6B692C0: mov 0x1C(%edi),%eax;");
    asm("loc_6B692C3: test %eax,%eax;");
    asm("loc_6B692C5: jne loc_6B6944F;");
    asm("loc_6B692CB: mov (%ebp),%eax;");
    asm("loc_6B692CE: mov (%eax),%ebx;");
    asm("loc_6B692D0: add $4,%eax;");
    asm("loc_6B692D3: mov %eax,(%ebp);");
    asm("loc_6B692D6: mov %ebx,0x3C(%edi);");
    asm("loc_6B692D9: mov (%esi),%eax;");
    asm("loc_6B692DB: mov 4(%esi),%ebx;");
    asm("loc_6B692DE: add $2,%eax;");
    asm("loc_6B692E1: cmp %ebx,%eax;");
    asm("loc_6B692E3: mov %eax,(%esi);");
    asm("loc_6B692E5: jbe loc_6B692EA;");
    asm("loc_6B692E7: mov %ecx,0xC(%esi);");
    asm("loc_6B692EA: mov 0x1C(%edi),%eax;");
    asm("loc_6B692ED: test %eax,%eax;");
    asm("loc_6B692EF: jne loc_6B6944F;");
    asm("loc_6B692F5: mov (%ebp),%eax;");
    asm("loc_6B692F8: mov (%eax),%bx;");
    asm("loc_6B692FB: add $2,%eax;");
    asm("loc_6B692FE: test %dl,%dl;");
    asm("loc_6B69300: mov %bx,0x40(%edi);");
    asm("loc_6B69304: mov %eax,(%ebp);");
    asm("loc_6B69307: je loc_6B69210;");
    asm("loc_6B6930D: mov (%esi),%ebx;");
    asm("loc_6B6930F: mov 4(%esi),%edx;");
    asm("loc_6B69312: add $4,%ebx;");
    asm("loc_6B69315: mov %ebx,%eax;");
    asm("loc_6B69317: cmp %edx,%eax;");
    asm("loc_6B69319: mov %ebx,(%esi);");
    asm("loc_6B6931B: jbe loc_6B69210;");
    asm("loc_6B69321: mov %ecx,0xC(%esi);");
    asm("loc_6B69324: jmp loc_6B69210;");
    asm("loc_6B69329: mov (%esi),%ebx;");
    asm("loc_6B6932B: mov 4(%esi),%ecx;");
    asm("loc_6B6932E: add $4,%ebx;");
    asm("loc_6B69331: mov %ebx,%eax;");
    asm("loc_6B69333: cmp %ecx,%eax;");
    asm("loc_6B69335: mov %ebx,(%esi);");
    asm("loc_6B69337: jbe loc_6B69340;");
    asm("loc_6B69339: movl $0x17,0xC(%esi);");
    asm("loc_6B69340: mov 0x1C(%edi),%eax;");
    asm("loc_6B69343: test %eax,%eax;");
    asm("loc_6B69345: jne loc_6B6944F;");
    asm("loc_6B6934B: mov (%ebp),%eax;");
    asm("loc_6B6934E: mov (%eax),%ecx;");
    asm("loc_6B69350: add $4,%eax;");
    asm("loc_6B69353: mov %ecx,0x34(%edi);");
    asm("loc_6B69356: mov %eax,(%ebp);");
    asm("loc_6B69359: mov (%esi),%ebx;");
    asm("loc_6B6935B: mov 4(%esi),%ecx;");
    asm("loc_6B6935E: add $4,%ebx;");
    asm("loc_6B69361: mov %ebx,%eax;");
    asm("loc_6B69363: cmp %ecx,%eax;");
    asm("loc_6B69365: mov %ebx,(%esi);");
    asm("loc_6B69367: mov $0x17,%ecx;");
    asm("loc_6B6936C: jbe loc_6B69371;");
    asm("loc_6B6936E: mov %ecx,0xC(%esi);");
    asm("loc_6B69371: mov 0x1C(%edi),%eax;");
    asm("loc_6B69374: test %eax,%eax;");
    asm("loc_6B69376: jne loc_6B6944F;");
    asm("loc_6B6937C: mov (%ebp),%eax;");
    asm("loc_6B6937F: mov (%eax),%ebx;");
    asm("loc_6B69381: add $4,%eax;");
    asm("loc_6B69384: mov %eax,(%ebp);");
    asm("loc_6B69387: mov %ebx,0x38(%edi);");
    asm("loc_6B6938A: mov (%esi),%eax;");
    asm("loc_6B6938C: mov 4(%esi),%ebx;");
    asm("loc_6B6938F: add $2,%eax;");
    asm("loc_6B69392: cmp %ebx,%eax;");
    asm("loc_6B69394: mov %eax,(%esi);");
    asm("loc_6B69396: jbe loc_6B6939B;");
    asm("loc_6B69398: mov %ecx,0xC(%esi);");
    asm("loc_6B6939B: mov 0x1C(%edi),%eax;");
    asm("loc_6B6939E: test %eax,%eax;");
    asm("loc_6B693A0: jne loc_6B6944F;");
    asm("loc_6B693A6: mov (%ebp),%eax;");
    asm("loc_6B693A9: mov (%eax),%bx;");
    asm("loc_6B693AC: add $2,%eax;");
    asm("loc_6B693AF: test %dl,%dl;");
    asm("loc_6B693B1: mov %bx,0x40(%edi);");
    asm("loc_6B693B5: mov %eax,(%ebp);");
    asm("loc_6B693B8: je loc_6B69210;");
    asm("loc_6B693BE: mov (%esi),%ebx;");
    asm("loc_6B693C0: mov 4(%esi),%edx;");
    asm("loc_6B693C3: add $4,%ebx;");
    asm("loc_6B693C6: mov %ebx,%eax;");
    asm("loc_6B693C8: cmp %edx,%eax;");
    asm("loc_6B693CA: mov %ebx,(%esi);");
    asm("loc_6B693CC: jbe loc_6B69210;");
    asm("loc_6B693D2: mov %ecx,0xC(%esi);");
    asm("loc_6B693D5: jmp loc_6B69210;");
    asm("loc_6B693DA: mov (%esi),%edx;");
    asm("loc_6B693DC: add $4,%edx;");
    asm("loc_6B693DF: mov %edx,(%esi);");
    asm("loc_6B693E1: mov 4(%esi),%ecx;");
    asm("loc_6B693E4: mov %edx,%eax;");
    asm("loc_6B693E6: cmp %ecx,%eax;");
    asm("loc_6B693E8: jbe loc_6B693F1;");
    asm("loc_6B693EA: movl $0x17,0xC(%esi);");
    asm("loc_6B693F1: mov 0x1C(%edi),%eax;");
    asm("loc_6B693F4: test %eax,%eax;");
    asm("loc_6B693F6: jne loc_6B6944F;");
    asm("loc_6B693F8: mov (%ebp),%eax;");
    asm("loc_6B693FB: mov (%eax),%ecx;");
    asm("loc_6B693FD: mov %ecx,0x28(%edi);");
    asm("loc_6B69400: jmp loc_6B69223;");
    asm("loc_6B69405: mov (%esi),%ecx;");
    asm("loc_6B69407: mov 0x1C(%esp),%edx;");
    asm("loc_6B6940B: mov %ecx,(%edx);");
    asm("loc_6B6940D: mov 0xC(%edi),%eax;");
    asm("loc_6B69410: push %eax;");
    asm("loc_6B69411: call _sub_6B4ECD0;");
    asm("loc_6B69416: mov %eax,%ecx;");
    asm("loc_6B69418: mov 4(%ecx),%edx;");
    asm("loc_6B6941B: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B6941E: mov 0x14(%ecx),%eax;");
    asm("loc_6B69421: add $4,%esp;");
    asm("loc_6B69424: inc %edx;");
    asm("loc_6B69425: mov %edx,4(%ecx);");
    asm("loc_6B69428: mov %edx,%edi;");
    asm("loc_6B6942A: mov (%esi),%edx;");
    asm("loc_6B6942C: add $2,%edx;");
    asm("loc_6B6942F: add %edx,%ebp;");
    asm("loc_6B69431: mov %ebp,0x1C(%ecx);");
    asm("loc_6B69434: mov (%esi),%esi;");
    asm("loc_6B69436: add $2,%eax;");
    asm("loc_6B69439: cmp %eax,%esi;");
    asm("loc_6B6943B: jbe loc_6B69443;");
    asm("loc_6B6943D: add $2,%esi;");
    asm("loc_6B69440: mov %esi,0x14(%ecx);");
    asm("loc_6B69443: mov 0x1C(%ecx),%eax;");
    asm("loc_6B69446: xor %edx,%edx;");
    asm("loc_6B69448: div %edi;");
    asm("loc_6B6944A: mov %eax,0xC(%ecx);");
    asm("loc_6B6944D: xor %eax,%eax;");
    asm("loc_6B6944F: pop %edi;");
    asm("loc_6B69450: pop %esi;");
    asm("loc_6B69451: pop %ebp;");
    asm("loc_6B69452: pop %ebx;");
    asm("loc_6B69453: ret $0xC;");
    asm("int3;"); // unreachable
    asm("_jmp_6B69458: .long loc_6B693DA;");
    asm(".long loc_6B6912B;");
    asm(".long loc_6B691C5;");
    asm(".long loc_6B6924E;");
    asm(".long loc_6B69329;");
    asm(".long loc_6B6915C;");
    asm(".long loc_6B691F9;");
    asm(".long loc_6B69229;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6B69090);
_naked _weak void _sub_6B69500() // _sub_6B69500
{
    __DEBUG_ASM(6B69500);
    // chunk 0x6B69500 _sub_6B69500
    asm("loc_6B69500: mov _data_6B6EAB0,%eax;");
    asm("loc_6B69505: mov %eax,_data_6B74620;");
    asm("loc_6B6950A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69510() // _sub_6B69510
{
    __DEBUG_ASM(6B69510);
    // chunk 0x6B69510 _sub_6B69510
    asm("loc_6B69510: mov _data_6B6EAB0,%eax;");
    asm("loc_6B69515: mov %eax,_data_6B74624;");
    asm("loc_6B6951A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69520() // _sub_6B69520
{
    __DEBUG_ASM(6B69520);
    // chunk 0x6B69520 _sub_6B69520
    asm("loc_6B69520: mov _data_6B6EAB4,%eax;");
    asm("loc_6B69525: mov %eax,_data_6B7461C;");
    asm("loc_6B6952A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69530() // _sub_6B69530
{
    __DEBUG_ASM(6B69530);
    // chunk 0x6B69530 _sub_6B69530
    asm("loc_6B69530: mov 8(%esp),%eax;");
    asm("loc_6B69534: push %ebx;");
    asm("loc_6B69535: push %esi;");
    asm("loc_6B69536: push %edi;");
    asm("loc_6B69537: mov %ecx,%edi;");
    asm("loc_6B69539: mov 0x10(%esp),%ecx;");
    asm("loc_6B6953D: lea 0x10(%edi),%esi;");
    asm("loc_6B69540: mov %eax,4(%esi);");
    asm("loc_6B69543: mov (%ecx),%edx;");
    asm("loc_6B69545: mov %edx,8(%esi);");
    asm("loc_6B69548: movl $0,(%esi);");
    asm("loc_6B6954E: movl $0,0xC(%esi);");
    asm("loc_6B69555: mov 0x14(%edi),%eax;");
    asm("loc_6B69558: push %esi;");
    asm("loc_6B69559: push %eax;");
    asm("loc_6B6955A: lea 0x18(%edi),%ebx;");
    asm("loc_6B6955D: push %ebx;");
    asm("loc_6B6955E: mov %edi,%ecx;");
    asm("loc_6B69560: call _sub_6B4E740;");
    asm("loc_6B69565: test %eax,%eax;");
    asm("loc_6B69567: mov %eax,0x1C(%edi);");
    asm("loc_6B6956A: je loc_6B69577;");
    asm("loc_6B6956C: pop %edi;");
    asm("loc_6B6956D: pop %esi;");
    asm("loc_6B6956E: mov $0x16,%eax;");
    asm("loc_6B69573: pop %ebx;");
    asm("loc_6B69574: ret $0xC;");
    asm("loc_6B69577: mov (%esi),%edx;");
    asm("loc_6B69579: mov 4(%esi),%ecx;");
    asm("loc_6B6957C: add $4,%edx;");
    asm("loc_6B6957F: mov %edx,%eax;");
    asm("loc_6B69581: cmp %ecx,%eax;");
    asm("loc_6B69583: mov %edx,(%esi);");
    asm("loc_6B69585: jbe loc_6B6958E;");
    asm("loc_6B69587: movl $0x16,0xC(%esi);");
    asm("loc_6B6958E: mov 0x1C(%edi),%eax;");
    asm("loc_6B69591: test %eax,%eax;");
    asm("loc_6B69593: je loc_6B695A0;");
    asm("loc_6B69595: pop %edi;");
    asm("loc_6B69596: pop %esi;");
    asm("loc_6B69597: mov $0x16,%eax;");
    asm("loc_6B6959C: pop %ebx;");
    asm("loc_6B6959D: ret $0xC;");
    asm("loc_6B695A0: mov (%ebx),%eax;");
    asm("loc_6B695A2: mov 0x20(%edi),%ecx;");
    asm("loc_6B695A5: mov %ecx,(%eax);");
    asm("loc_6B695A7: add $4,%eax;");
    asm("loc_6B695AA: mov %eax,(%ebx);");
    asm("loc_6B695AC: mov (%esi),%edx;");
    asm("loc_6B695AE: mov 4(%esi),%ecx;");
    asm("loc_6B695B1: add $2,%edx;");
    asm("loc_6B695B4: mov %edx,%eax;");
    asm("loc_6B695B6: cmp %ecx,%eax;");
    asm("loc_6B695B8: mov %edx,(%esi);");
    asm("loc_6B695BA: jbe loc_6B695C3;");
    asm("loc_6B695BC: movl $0x16,0xC(%esi);");
    asm("loc_6B695C3: mov 0x1C(%edi),%eax;");
    asm("loc_6B695C6: test %eax,%eax;");
    asm("loc_6B695C8: je loc_6B695D5;");
    asm("loc_6B695CA: pop %edi;");
    asm("loc_6B695CB: pop %esi;");
    asm("loc_6B695CC: mov $0x16,%eax;");
    asm("loc_6B695D1: pop %ebx;");
    asm("loc_6B695D2: ret $0xC;");
    asm("loc_6B695D5: mov (%ebx),%eax;");
    asm("loc_6B695D7: mov 0x24(%edi),%dx;");
    asm("loc_6B695DB: mov %dx,(%eax);");
    asm("loc_6B695DE: add $2,%eax;");
    asm("loc_6B695E1: mov %eax,(%ebx);");
    asm("loc_6B695E3: mov (%esi),%edx;");
    asm("loc_6B695E5: mov 4(%esi),%ecx;");
    asm("loc_6B695E8: add $4,%edx;");
    asm("loc_6B695EB: mov %edx,%eax;");
    asm("loc_6B695ED: cmp %ecx,%eax;");
    asm("loc_6B695EF: mov %edx,(%esi);");
    asm("loc_6B695F1: jbe loc_6B695FA;");
    asm("loc_6B695F3: movl $0x16,0xC(%esi);");
    asm("loc_6B695FA: mov 0x1C(%edi),%eax;");
    asm("loc_6B695FD: test %eax,%eax;");
    asm("loc_6B695FF: je loc_6B6960C;");
    asm("loc_6B69601: pop %edi;");
    asm("loc_6B69602: pop %esi;");
    asm("loc_6B69603: mov $0x16,%eax;");
    asm("loc_6B69608: pop %ebx;");
    asm("loc_6B69609: ret $0xC;");
    asm("loc_6B6960C: mov (%ebx),%eax;");
    asm("loc_6B6960E: mov 0x28(%edi),%ecx;");
    asm("loc_6B69611: mov %ecx,(%eax);");
    asm("loc_6B69613: mov 0x14(%edi),%edx;");
    asm("loc_6B69616: push %esi;");
    asm("loc_6B69617: push %edx;");
    asm("loc_6B69618: add $4,%eax;");
    asm("loc_6B6961B: push %ebx;");
    asm("loc_6B6961C: mov %edi,%ecx;");
    asm("loc_6B6961E: mov %eax,(%ebx);");
    asm("loc_6B69620: call _sub_6B4E790;");
    asm("loc_6B69625: test %eax,%eax;");
    asm("loc_6B69627: mov %eax,0x1C(%edi);");
    asm("loc_6B6962A: je loc_6B69637;");
    asm("loc_6B6962C: pop %edi;");
    asm("loc_6B6962D: pop %esi;");
    asm("loc_6B6962E: mov $0x16,%eax;");
    asm("loc_6B69633: pop %ebx;");
    asm("loc_6B69634: ret $0xC;");
    asm("loc_6B69637: mov (%esi),%eax;");
    asm("loc_6B69639: mov 0x18(%esp),%ecx;");
    asm("loc_6B6963D: mov %eax,(%ecx);");
    asm("loc_6B6963F: mov 0xC(%edi),%edx;");
    asm("loc_6B69642: push %edx;");
    asm("loc_6B69643: call _sub_6B4ECD0;");
    asm("loc_6B69648: mov %eax,%ecx;");
    asm("loc_6B6964A: mov (%ecx),%edi;");
    asm("loc_6B6964C: mov 0x18(%ecx),%edx;");
    asm("loc_6B6964F: add $4,%esp;");
    asm("loc_6B69652: inc %edi;");
    asm("loc_6B69653: mov %edi,(%ecx);");
    asm("loc_6B69655: mov (%esi),%eax;");
    asm("loc_6B69657: add %eax,%edx;");
    asm("loc_6B69659: mov 0x10(%ecx),%eax;");
    asm("loc_6B6965C: mov %edx,0x18(%ecx);");
    asm("loc_6B6965F: mov (%esi),%esi;");
    asm("loc_6B69661: cmp %eax,%esi;");
    asm("loc_6B69663: jbe loc_6B69668;");
    asm("loc_6B69665: mov %esi,0x10(%ecx);");
    asm("loc_6B69668: mov 0x18(%ecx),%eax;");
    asm("loc_6B6966B: xor %edx,%edx;");
    asm("loc_6B6966D: div %edi;");
    asm("loc_6B6966F: pop %edi;");
    asm("loc_6B69670: pop %esi;");
    asm("loc_6B69671: pop %ebx;");
    asm("loc_6B69672: mov %eax,8(%ecx);");
    asm("loc_6B69675: xor %eax,%eax;");
    asm("loc_6B69677: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69680() // _sub_6B69680
{
    __DEBUG_ASM(6B69680);
    // chunk 0x6B69680 _sub_6B69680
    asm("loc_6B69680: mov 4(%esp),%eax;");
    asm("loc_6B69684: push %ebx;");
    asm("loc_6B69685: push %ebp;");
    asm("loc_6B69686: mov 0x10(%esp),%ebp;");
    asm("loc_6B6968A: push %esi;");
    asm("loc_6B6968B: push %edi;");
    asm("loc_6B6968C: mov %ecx,%edi;");
    asm("loc_6B6968E: lea 0x10(%edi),%esi;");
    asm("loc_6B69691: push %esi;");
    asm("loc_6B69692: push %ebp;");
    asm("loc_6B69693: lea 0x18(%edi),%ebx;");
    asm("loc_6B69696: push %ebx;");
    asm("loc_6B69697: mov %ebp,4(%esi);");
    asm("loc_6B6969A: mov %eax,8(%esi);");
    asm("loc_6B6969D: movl $0,(%esi);");
    asm("loc_6B696A3: movl $0,0xC(%esi);");
    asm("loc_6B696AA: call _sub_6B4E780;");
    asm("loc_6B696AF: test %eax,%eax;");
    asm("loc_6B696B1: mov %eax,0x1C(%edi);");
    asm("loc_6B696B4: je loc_6B696C2;");
    asm("loc_6B696B6: pop %edi;");
    asm("loc_6B696B7: pop %esi;");
    asm("loc_6B696B8: pop %ebp;");
    asm("loc_6B696B9: mov $0x17,%eax;");
    asm("loc_6B696BE: pop %ebx;");
    asm("loc_6B696BF: ret $0xC;");
    asm("loc_6B696C2: mov (%esi),%edx;");
    asm("loc_6B696C4: mov 4(%esi),%ecx;");
    asm("loc_6B696C7: add $4,%edx;");
    asm("loc_6B696CA: mov %edx,%eax;");
    asm("loc_6B696CC: cmp %ecx,%eax;");
    asm("loc_6B696CE: mov %edx,(%esi);");
    asm("loc_6B696D0: mov $0x17,%ecx;");
    asm("loc_6B696D5: jbe loc_6B696DA;");
    asm("loc_6B696D7: mov %ecx,0xC(%esi);");
    asm("loc_6B696DA: mov 0x1C(%edi),%eax;");
    asm("loc_6B696DD: test %eax,%eax;");
    asm("loc_6B696DF: jne loc_6B697A6;");
    asm("loc_6B696E5: mov (%ebx),%eax;");
    asm("loc_6B696E7: mov (%eax),%edx;");
    asm("loc_6B696E9: add $4,%eax;");
    asm("loc_6B696EC: mov %eax,(%ebx);");
    asm("loc_6B696EE: mov %edx,0x20(%edi);");
    asm("loc_6B696F1: mov (%esi),%eax;");
    asm("loc_6B696F3: mov 4(%esi),%edx;");
    asm("loc_6B696F6: add $2,%eax;");
    asm("loc_6B696F9: cmp %edx,%eax;");
    asm("loc_6B696FB: mov %eax,(%esi);");
    asm("loc_6B696FD: jbe loc_6B69702;");
    asm("loc_6B696FF: mov %ecx,0xC(%esi);");
    asm("loc_6B69702: mov 0x1C(%edi),%eax;");
    asm("loc_6B69705: test %eax,%eax;");
    asm("loc_6B69707: jne loc_6B697A6;");
    asm("loc_6B6970D: mov (%ebx),%eax;");
    asm("loc_6B6970F: mov (%eax),%dx;");
    asm("loc_6B69712: add $2,%eax;");
    asm("loc_6B69715: mov %eax,(%ebx);");
    asm("loc_6B69717: mov %dx,0x24(%edi);");
    asm("loc_6B6971B: mov (%esi),%eax;");
    asm("loc_6B6971D: mov 4(%esi),%edx;");
    asm("loc_6B69720: add $4,%eax;");
    asm("loc_6B69723: cmp %edx,%eax;");
    asm("loc_6B69725: mov %eax,(%esi);");
    asm("loc_6B69727: jbe loc_6B6972C;");
    asm("loc_6B69729: mov %ecx,0xC(%esi);");
    asm("loc_6B6972C: mov 0x1C(%edi),%eax;");
    asm("loc_6B6972F: test %eax,%eax;");
    asm("loc_6B69731: jne loc_6B697A6;");
    asm("loc_6B69733: mov (%ebx),%eax;");
    asm("loc_6B69735: mov (%eax),%ecx;");
    asm("loc_6B69737: push %esi;");
    asm("loc_6B69738: push %ebp;");
    asm("loc_6B69739: mov %ecx,0x28(%edi);");
    asm("loc_6B6973C: add $4,%eax;");
    asm("loc_6B6973F: push %ebx;");
    asm("loc_6B69740: mov %edi,%ecx;");
    asm("loc_6B69742: mov %eax,(%ebx);");
    asm("loc_6B69744: call _sub_6B4E7A0;");
    asm("loc_6B69749: test %eax,%eax;");
    asm("loc_6B6974B: mov %eax,0x1C(%edi);");
    asm("loc_6B6974E: je loc_6B6975C;");
    asm("loc_6B69750: pop %edi;");
    asm("loc_6B69751: pop %esi;");
    asm("loc_6B69752: pop %ebp;");
    asm("loc_6B69753: mov $0x17,%eax;");
    asm("loc_6B69758: pop %ebx;");
    asm("loc_6B69759: ret $0xC;");
    asm("loc_6B6975C: mov (%esi),%edx;");
    asm("loc_6B6975E: mov 0x1C(%esp),%eax;");
    asm("loc_6B69762: mov %edx,(%eax);");
    asm("loc_6B69764: mov 0xC(%edi),%ecx;");
    asm("loc_6B69767: push %ecx;");
    asm("loc_6B69768: call _sub_6B4ECD0;");
    asm("loc_6B6976D: mov %eax,%ecx;");
    asm("loc_6B6976F: mov 4(%ecx),%edx;");
    asm("loc_6B69772: mov 0x1C(%ecx),%ebp;");
    asm("loc_6B69775: mov 0x14(%ecx),%eax;");
    asm("loc_6B69778: add $4,%esp;");
    asm("loc_6B6977B: inc %edx;");
    asm("loc_6B6977C: mov %edx,4(%ecx);");
    asm("loc_6B6977F: mov %edx,%edi;");
    asm("loc_6B69781: mov (%esi),%edx;");
    asm("loc_6B69783: add $2,%edx;");
    asm("loc_6B69786: add %edx,%ebp;");
    asm("loc_6B69788: mov %ebp,0x1C(%ecx);");
    asm("loc_6B6978B: mov (%esi),%esi;");
    asm("loc_6B6978D: add $2,%eax;");
    asm("loc_6B69790: cmp %eax,%esi;");
    asm("loc_6B69792: jbe loc_6B6979A;");
    asm("loc_6B69794: add $2,%esi;");
    asm("loc_6B69797: mov %esi,0x14(%ecx);");
    asm("loc_6B6979A: mov 0x1C(%ecx),%eax;");
    asm("loc_6B6979D: xor %edx,%edx;");
    asm("loc_6B6979F: div %edi;");
    asm("loc_6B697A1: mov %eax,0xC(%ecx);");
    asm("loc_6B697A4: xor %eax,%eax;");
    asm("loc_6B697A6: pop %edi;");
    asm("loc_6B697A7: pop %esi;");
    asm("loc_6B697A8: pop %ebp;");
    asm("loc_6B697A9: pop %ebx;");
    asm("loc_6B697AA: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B697B0() // _sub_6B697B0
{
    __DEBUG_ASM(6B697B0);
    // chunk 0x6B697B0 _sub_6B697B0
    asm("loc_6B697B0: mov 8(%esp),%eax;");
    asm("loc_6B697B4: push %ebx;");
    asm("loc_6B697B5: push %ebp;");
    asm("loc_6B697B6: push %esi;");
    asm("loc_6B697B7: push %edi;");
    asm("loc_6B697B8: mov %ecx,%edi;");
    asm("loc_6B697BA: mov 0x14(%esp),%ecx;");
    asm("loc_6B697BE: lea 0x10(%edi),%esi;");
    asm("loc_6B697C1: mov %eax,4(%esi);");
    asm("loc_6B697C4: mov (%ecx),%edx;");
    asm("loc_6B697C6: mov %edx,8(%esi);");
    asm("loc_6B697C9: movl $0,(%esi);");
    asm("loc_6B697CF: movl $0,0xC(%esi);");
    asm("loc_6B697D6: mov 0x14(%edi),%eax;");
    asm("loc_6B697D9: push %esi;");
    asm("loc_6B697DA: push %eax;");
    asm("loc_6B697DB: lea 0x18(%edi),%ebx;");
    asm("loc_6B697DE: push %ebx;");
    asm("loc_6B697DF: mov %edi,%ecx;");
    asm("loc_6B697E1: call _sub_6B4E740;");
    asm("loc_6B697E6: test %eax,%eax;");
    asm("loc_6B697E8: mov %eax,0x1C(%edi);");
    asm("loc_6B697EB: je loc_6B697F9;");
    asm("loc_6B697ED: pop %edi;");
    asm("loc_6B697EE: pop %esi;");
    asm("loc_6B697EF: pop %ebp;");
    asm("loc_6B697F0: mov $0x16,%eax;");
    asm("loc_6B697F5: pop %ebx;");
    asm("loc_6B697F6: ret $0xC;");
    asm("loc_6B697F9: mov (%esi),%edx;");
    asm("loc_6B697FB: mov 4(%esi),%ecx;");
    asm("loc_6B697FE: add $4,%edx;");
    asm("loc_6B69801: mov %edx,%eax;");
    asm("loc_6B69803: cmp %ecx,%eax;");
    asm("loc_6B69805: mov %edx,(%esi);");
    asm("loc_6B69807: mov $0x16,%ebp;");
    asm("loc_6B6980C: jbe loc_6B69811;");
    asm("loc_6B6980E: mov %ebp,0xC(%esi);");
    asm("loc_6B69811: mov 0x1C(%edi),%eax;");
    asm("loc_6B69814: test %eax,%eax;");
    asm("loc_6B69816: je loc_6B69821;");
    asm("loc_6B69818: pop %edi;");
    asm("loc_6B69819: pop %esi;");
    asm("loc_6B6981A: mov %ebp,%eax;");
    asm("loc_6B6981C: pop %ebp;");
    asm("loc_6B6981D: pop %ebx;");
    asm("loc_6B6981E: ret $0xC;");
    asm("loc_6B69821: mov (%ebx),%eax;");
    asm("loc_6B69823: mov 0x20(%edi),%ecx;");
    asm("loc_6B69826: mov %ecx,(%eax);");
    asm("loc_6B69828: add $4,%eax;");
    asm("loc_6B6982B: mov %eax,(%ebx);");
    asm("loc_6B6982D: mov (%esi),%edx;");
    asm("loc_6B6982F: mov 4(%esi),%ecx;");
    asm("loc_6B69832: add $2,%edx;");
    asm("loc_6B69835: mov %edx,%eax;");
    asm("loc_6B69837: cmp %ecx,%eax;");
    asm("loc_6B69839: mov %edx,(%esi);");
    asm("loc_6B6983B: jbe loc_6B69840;");
    asm("loc_6B6983D: mov %ebp,0xC(%esi);");
    asm("loc_6B69840: mov 0x1C(%edi),%eax;");
    asm("loc_6B69843: test %eax,%eax;");
    asm("loc_6B69845: je loc_6B69850;");
    asm("loc_6B69847: pop %edi;");
    asm("loc_6B69848: pop %esi;");
    asm("loc_6B69849: mov %ebp,%eax;");
    asm("loc_6B6984B: pop %ebp;");
    asm("loc_6B6984C: pop %ebx;");
    asm("loc_6B6984D: ret $0xC;");
    asm("loc_6B69850: mov (%ebx),%eax;");
    asm("loc_6B69852: mov 0x24(%edi),%dx;");
    asm("loc_6B69856: mov %dx,(%eax);");
    asm("loc_6B69859: add $2,%eax;");
    asm("loc_6B6985C: mov %eax,(%ebx);");
    asm("loc_6B6985E: mov 0x2C(%edi),%ecx;");
    asm("loc_6B69861: test %ecx,%ecx;");
    asm("loc_6B69863: jne loc_6B69869;");
    asm("loc_6B69865: xor %eax,%eax;");
    asm("loc_6B69867: jmp loc_6B69871;");
    asm("loc_6B69869: mov 0x30(%edi),%eax;");
    asm("loc_6B6986C: sub %ecx,%eax;");
    asm("loc_6B6986E: sar $2,%eax;");
    asm("loc_6B69871: mov (%esi),%ecx;");
    asm("loc_6B69873: mov 4(%esi),%edx;");
    asm("loc_6B69876: add $2,%ecx;");
    asm("loc_6B69879: cmp %edx,%ecx;");
    asm("loc_6B6987B: mov %ecx,(%esi);");
    asm("loc_6B6987D: jbe loc_6B69882;");
    asm("loc_6B6987F: mov %ebp,0xC(%esi);");
    asm("loc_6B69882: mov 0x1C(%edi),%ecx;");
    asm("loc_6B69885: test %ecx,%ecx;");
    asm("loc_6B69887: je loc_6B69892;");
    asm("loc_6B69889: pop %edi;");
    asm("loc_6B6988A: pop %esi;");
    asm("loc_6B6988B: mov %ebp,%eax;");
    asm("loc_6B6988D: pop %ebp;");
    asm("loc_6B6988E: pop %ebx;");
    asm("loc_6B6988F: ret $0xC;");
    asm("loc_6B69892: mov (%ebx),%ecx;");
    asm("loc_6B69894: mov %ax,(%ecx);");
    asm("loc_6B69897: mov 0x2C(%edi),%eax;");
    asm("loc_6B6989A: add $2,%ecx;");
    asm("loc_6B6989D: mov %ecx,(%ebx);");
    asm("loc_6B6989F: cmp 0x30(%edi),%eax;");
    asm("loc_6B698A2: je loc_6B698D1;");
    asm("loc_6B698A4: mov (%esi),%ecx;");
    asm("loc_6B698A6: mov 4(%esi),%edx;");
    asm("loc_6B698A9: add $4,%ecx;");
    asm("loc_6B698AC: cmp %edx,%ecx;");
    asm("loc_6B698AE: mov %ecx,(%esi);");
    asm("loc_6B698B0: jbe loc_6B698B5;");
    asm("loc_6B698B2: mov %ebp,0xC(%esi);");
    asm("loc_6B698B5: mov 0x1C(%edi),%ecx;");
    asm("loc_6B698B8: test %ecx,%ecx;");
    asm("loc_6B698BA: jne loc_6B698E5;");
    asm("loc_6B698BC: mov (%ebx),%ecx;");
    asm("loc_6B698BE: mov (%eax),%edx;");
    asm("loc_6B698C0: mov %edx,(%ecx);");
    asm("loc_6B698C2: add $4,%ecx;");
    asm("loc_6B698C5: mov %ecx,(%ebx);");
    asm("loc_6B698C7: mov 0x30(%edi),%ecx;");
    asm("loc_6B698CA: add $4,%eax;");
    asm("loc_6B698CD: cmp %ecx,%eax;");
    asm("loc_6B698CF: jne loc_6B698A4;");
    asm("loc_6B698D1: mov 0x14(%edi),%eax;");
    asm("loc_6B698D4: push %esi;");
    asm("loc_6B698D5: push %eax;");
    asm("loc_6B698D6: push %ebx;");
    asm("loc_6B698D7: mov %edi,%ecx;");
    asm("loc_6B698D9: call _sub_6B4E790;");
    asm("loc_6B698DE: test %eax,%eax;");
    asm("loc_6B698E0: mov %eax,0x1C(%edi);");
    asm("loc_6B698E3: je loc_6B698EE;");
    asm("loc_6B698E5: pop %edi;");
    asm("loc_6B698E6: pop %esi;");
    asm("loc_6B698E7: mov %ebp,%eax;");
    asm("loc_6B698E9: pop %ebp;");
    asm("loc_6B698EA: pop %ebx;");
    asm("loc_6B698EB: ret $0xC;");
    asm("loc_6B698EE: mov (%esi),%ecx;");
    asm("loc_6B698F0: mov 0x1C(%esp),%edx;");
    asm("loc_6B698F4: mov %ecx,(%edx);");
    asm("loc_6B698F6: mov 0xC(%edi),%eax;");
    asm("loc_6B698F9: push %eax;");
    asm("loc_6B698FA: call _sub_6B4ECD0;");
    asm("loc_6B698FF: mov %eax,%ecx;");
    asm("loc_6B69901: mov (%ecx),%ebp;");
    asm("loc_6B69903: mov 0x18(%ecx),%ebx;");
    asm("loc_6B69906: mov 0x10(%ecx),%eax;");
    asm("loc_6B69909: add $4,%esp;");
    asm("loc_6B6990C: inc %ebp;");
    asm("loc_6B6990D: mov %ebp,(%ecx);");
    asm("loc_6B6990F: mov (%esi),%edx;");
    asm("loc_6B69911: add %edx,%ebx;");
    asm("loc_6B69913: mov %ebx,0x18(%ecx);");
    asm("loc_6B69916: mov (%esi),%esi;");
    asm("loc_6B69918: cmp %eax,%esi;");
    asm("loc_6B6991A: mov %ebp,%edi;");
    asm("loc_6B6991C: jbe loc_6B69921;");
    asm("loc_6B6991E: mov %esi,0x10(%ecx);");
    asm("loc_6B69921: mov 0x18(%ecx),%eax;");
    asm("loc_6B69924: xor %edx,%edx;");
    asm("loc_6B69926: div %edi;");
    asm("loc_6B69928: pop %edi;");
    asm("loc_6B69929: pop %esi;");
    asm("loc_6B6992A: pop %ebp;");
    asm("loc_6B6992B: pop %ebx;");
    asm("loc_6B6992C: mov %eax,8(%ecx);");
    asm("loc_6B6992F: xor %eax,%eax;");
    asm("loc_6B69931: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69940() // _sub_6B69940
{
    __DEBUG_ASM(6B69940);
    // chunk 0x6B69940 _sub_6B69940
    asm("loc_6B69940: sub $0x14,%esp;");
    asm("loc_6B69943: mov 0x18(%esp),%eax;");
    asm("loc_6B69947: push %ebx;");
    asm("loc_6B69948: push %ebp;");
    asm("loc_6B69949: push %esi;");
    asm("loc_6B6994A: mov %ecx,%ebx;");
    asm("loc_6B6994C: push %edi;");
    asm("loc_6B6994D: mov 0x2C(%esp),%edi;");
    asm("loc_6B69951: lea 0x10(%ebx),%ebp;");
    asm("loc_6B69954: push %ebp;");
    asm("loc_6B69955: push %edi;");
    asm("loc_6B69956: lea 0x18(%ebx),%esi;");
    asm("loc_6B69959: push %esi;");
    asm("loc_6B6995A: mov %ebx,0x28(%esp);");
    asm("loc_6B6995E: mov %edi,4(%ebp);");
    asm("loc_6B69961: mov %eax,8(%ebp);");
    asm("loc_6B69964: movl $0,(%ebp);");
    asm("loc_6B6996B: movl $0,0xC(%ebp);");
    asm("loc_6B69972: call _sub_6B4E780;");
    asm("loc_6B69977: test %eax,%eax;");
    asm("loc_6B69979: mov %eax,0x1C(%ebx);");
    asm("loc_6B6997C: je loc_6B6998D;");
    asm("loc_6B6997E: pop %edi;");
    asm("loc_6B6997F: pop %esi;");
    asm("loc_6B69980: pop %ebp;");
    asm("loc_6B69981: mov $0x17,%eax;");
    asm("loc_6B69986: pop %ebx;");
    asm("loc_6B69987: add $0x14,%esp;");
    asm("loc_6B6998A: ret $0xC;");
    asm("loc_6B6998D: mov (%ebp),%edx;");
    asm("loc_6B69990: mov 4(%ebp),%ecx;");
    asm("loc_6B69993: add $4,%edx;");
    asm("loc_6B69996: mov %edx,%eax;");
    asm("loc_6B69998: cmp %ecx,%eax;");
    asm("loc_6B6999A: mov %edx,(%ebp);");
    asm("loc_6B6999D: mov $0x17,%edx;");
    asm("loc_6B699A2: jbe loc_6B699A7;");
    asm("loc_6B699A4: mov %edx,0xC(%ebp);");
    asm("loc_6B699A7: mov 0x1C(%ebx),%eax;");
    asm("loc_6B699AA: test %eax,%eax;");
    asm("loc_6B699AC: jne loc_6B69C7E;");
    asm("loc_6B699B2: mov (%esi),%eax;");
    asm("loc_6B699B4: mov (%eax),%ecx;");
    asm("loc_6B699B6: add $4,%eax;");
    asm("loc_6B699B9: mov %eax,(%esi);");
    asm("loc_6B699BB: mov %ecx,0x20(%ebx);");
    asm("loc_6B699BE: mov (%ebp),%eax;");
    asm("loc_6B699C1: mov 4(%ebp),%ecx;");
    asm("loc_6B699C4: add $2,%eax;");
    asm("loc_6B699C7: cmp %ecx,%eax;");
    asm("loc_6B699C9: mov %eax,(%ebp);");
    asm("loc_6B699CC: jbe loc_6B699D1;");
    asm("loc_6B699CE: mov %edx,0xC(%ebp);");
    asm("loc_6B699D1: mov 0x1C(%ebx),%eax;");
    asm("loc_6B699D4: test %eax,%eax;");
    asm("loc_6B699D6: jne loc_6B69C7E;");
    asm("loc_6B699DC: mov (%esi),%eax;");
    asm("loc_6B699DE: mov (%eax),%cx;");
    asm("loc_6B699E1: add $2,%eax;");
    asm("loc_6B699E4: mov %eax,(%esi);");
    asm("loc_6B699E6: mov %cx,0x24(%ebx);");
    asm("loc_6B699EA: mov (%ebp),%eax;");
    asm("loc_6B699ED: mov 4(%ebp),%ecx;");
    asm("loc_6B699F0: add $2,%eax;");
    asm("loc_6B699F3: cmp %ecx,%eax;");
    asm("loc_6B699F5: mov %eax,(%ebp);");
    asm("loc_6B699F8: jbe loc_6B699FD;");
    asm("loc_6B699FA: mov %edx,0xC(%ebp);");
    asm("loc_6B699FD: mov 0x1C(%ebx),%eax;");
    asm("loc_6B69A00: test %eax,%eax;");
    asm("loc_6B69A02: jne loc_6B69C7E;");
    asm("loc_6B69A08: mov (%esi),%eax;");
    asm("loc_6B69A0A: mov (%eax),%cx;");
    asm("loc_6B69A0D: add $2,%eax;");
    asm("loc_6B69A10: mov %eax,(%esi);");
    asm("loc_6B69A12: xor %eax,%eax;");
    asm("loc_6B69A14: mov %cx,%ax;");
    asm("loc_6B69A17: xor %esi,%esi;");
    asm("loc_6B69A19: mov %esi,0x28(%esp);");
    asm("loc_6B69A1D: mov %esi,0x10(%esp);");
    asm("loc_6B69A21: cmp %esi,%eax;");
    asm("loc_6B69A23: mov %eax,0x20(%esp);");
    asm("loc_6B69A27: jg loc_6B69A55;");
    asm("loc_6B69A29: push %ebp;");
    asm("loc_6B69A2A: push %edi;");
    asm("loc_6B69A2B: lea 0x18(%ebx),%eax;");
    asm("loc_6B69A2E: push %eax;");
    asm("loc_6B69A2F: mov %ebx,%ecx;");
    asm("loc_6B69A31: call _sub_6B4E7A0;");
    asm("loc_6B69A36: test %eax,%eax;");
    asm("loc_6B69A38: mov %eax,0x1C(%ebx);");
    asm("loc_6B69A3B: je loc_6B69C31;");
    asm("loc_6B69A41: pop %edi;");
    asm("loc_6B69A42: pop %esi;");
    asm("loc_6B69A43: pop %ebp;");
    asm("loc_6B69A44: mov $0x17,%eax;");
    asm("loc_6B69A49: pop %ebx;");
    asm("loc_6B69A4A: add $0x14,%esp;");
    asm("loc_6B69A4D: ret $0xC;");
    asm("loc_6B69A50: mov $0x17,%edx;");
    asm("loc_6B69A55: mov (%ebp),%esi;");
    asm("loc_6B69A58: mov 4(%ebp),%ecx;");
    asm("loc_6B69A5B: add $4,%esi;");
    asm("loc_6B69A5E: mov %esi,%eax;");
    asm("loc_6B69A60: cmp %ecx,%eax;");
    asm("loc_6B69A62: mov %esi,(%ebp);");
    asm("loc_6B69A65: jbe loc_6B69A6A;");
    asm("loc_6B69A67: mov %edx,0xC(%ebp);");
    asm("loc_6B69A6A: mov 0x1C(%ebx),%eax;");
    asm("loc_6B69A6D: test %eax,%eax;");
    asm("loc_6B69A6F: jne loc_6B69C24;");
    asm("loc_6B69A75: mov 0x18(%ebx),%eax;");
    asm("loc_6B69A78: mov (%eax),%edx;");
    asm("loc_6B69A7A: add $4,%eax;");
    asm("loc_6B69A7D: lea 0x28(%ebx),%esi;");
    asm("loc_6B69A80: mov %eax,0x18(%ebx);");
    asm("loc_6B69A83: mov 8(%esi),%eax;");
    asm("loc_6B69A86: mov 0xC(%esi),%ecx;");
    asm("loc_6B69A89: sub %eax,%ecx;");
    asm("loc_6B69A8B: sar $2,%ecx;");
    asm("loc_6B69A8E: cmp $1,%ecx;");
    asm("loc_6B69A91: mov %edx,0x28(%esp);");
    asm("loc_6B69A95: mov %eax,%edi;");
    asm("loc_6B69A97: jae loc_6B69B6A;");
    asm("loc_6B69A9D: mov 4(%esi),%edx;");
    asm("loc_6B69AA0: test %edx,%edx;");
    asm("loc_6B69AA2: je loc_6B69AB0;");
    asm("loc_6B69AA4: mov %eax,%ecx;");
    asm("loc_6B69AA6: sub %edx,%ecx;");
    asm("loc_6B69AA8: sar $2,%ecx;");
    asm("loc_6B69AAB: cmp $1,%ecx;");
    asm("loc_6B69AAE: ja loc_6B69AB5;");
    asm("loc_6B69AB0: mov $1,%ecx;");
    asm("loc_6B69AB5: test %edx,%edx;");
    asm("loc_6B69AB7: jne loc_6B69ABD;");
    asm("loc_6B69AB9: xor %eax,%eax;");
    asm("loc_6B69ABB: jmp loc_6B69AC2;");
    asm("loc_6B69ABD: sub %edx,%eax;");
    asm("loc_6B69ABF: sar $2,%eax;");
    asm("loc_6B69AC2: add %ecx,%eax;");
    asm("loc_6B69AC4: test %eax,%eax;");
    asm("loc_6B69AC6: mov %eax,0x18(%esp);");
    asm("loc_6B69ACA: jge loc_6B69ACE;");
    asm("loc_6B69ACC: xor %eax,%eax;");
    asm("loc_6B69ACE: lea (,%eax,4),%edx;");
    asm("loc_6B69AD5: push %edx;");
    asm("loc_6B69AD6: call _sub_6B6A134;");
    asm("loc_6B69ADB: add $4,%esp;");
    asm("loc_6B69ADE: mov %eax,%ebx;");
    asm("loc_6B69AE0: mov 4(%esi),%eax;");
    asm("loc_6B69AE3: push %ebx;");
    asm("loc_6B69AE4: push %edi;");
    asm("loc_6B69AE5: push %eax;");
    asm("loc_6B69AE6: mov %esi,%ecx;");
    asm("loc_6B69AE8: call _sub_6B33C10;");
    asm("loc_6B69AED: lea 0x28(%esp),%ecx;");
    asm("loc_6B69AF1: push %ecx;");
    asm("loc_6B69AF2: push $1;");
    asm("loc_6B69AF4: push %eax;");
    asm("loc_6B69AF5: mov %esi,%ecx;");
    asm("loc_6B69AF7: mov %eax,0x20(%esp);");
    asm("loc_6B69AFB: call _sub_6B69C90;");
    asm("loc_6B69B00: mov 0x14(%esp),%edx;");
    asm("loc_6B69B04: mov 8(%esi),%eax;");
    asm("loc_6B69B07: add $4,%edx;");
    asm("loc_6B69B0A: push %edx;");
    asm("loc_6B69B0B: push %eax;");
    asm("loc_6B69B0C: push %edi;");
    asm("loc_6B69B0D: mov %esi,%ecx;");
    asm("loc_6B69B0F: call _sub_6B33C10;");
    asm("loc_6B69B14: mov 8(%esi),%ecx;");
    asm("loc_6B69B17: mov 4(%esi),%edx;");
    asm("loc_6B69B1A: push %ecx;");
    asm("loc_6B69B1B: push %edx;");
    asm("loc_6B69B1C: mov %esi,%ecx;");
    asm("loc_6B69B1E: call _sub_6B33C00;");
    asm("loc_6B69B23: mov 4(%esi),%eax;");
    asm("loc_6B69B26: push %eax;");
    asm("loc_6B69B27: call _sub_6B6A092;");
    asm("loc_6B69B2C: mov 0x1C(%esp),%ecx;");
    asm("loc_6B69B30: mov 4(%esi),%eax;");
    asm("loc_6B69B33: add $4,%esp;");
    asm("loc_6B69B36: test %eax,%eax;");
    asm("loc_6B69B38: lea (%ebx,%ecx,4),%edx;");
    asm("loc_6B69B3B: mov %edx,0xC(%esi);");
    asm("loc_6B69B3E: jne loc_6B69B52;");
    asm("loc_6B69B40: xor %ecx,%ecx;");
    asm("loc_6B69B42: lea 4(%ebx,%ecx,4),%eax;");
    asm("loc_6B69B46: mov %ebx,4(%esi);");
    asm("loc_6B69B49: mov 0x1C(%esp),%ebx;");
    asm("loc_6B69B4D: jmp loc_6B69C03;");
    asm("loc_6B69B52: mov 8(%esi),%ecx;");
    asm("loc_6B69B55: sub %eax,%ecx;");
    asm("loc_6B69B57: sar $2,%ecx;");
    asm("loc_6B69B5A: lea 4(%ebx,%ecx,4),%eax;");
    asm("loc_6B69B5E: mov %ebx,4(%esi);");
    asm("loc_6B69B61: mov 0x1C(%esp),%ebx;");
    asm("loc_6B69B65: jmp loc_6B69C03;");
    asm("loc_6B69B6A: mov %eax,%ecx;");
    asm("loc_6B69B6C: sub %edi,%ecx;");
    asm("loc_6B69B6E: sar $2,%ecx;");
    asm("loc_6B69B71: cmp $1,%ecx;");
    asm("loc_6B69B74: mov %esi,%ecx;");
    asm("loc_6B69B76: jae loc_6B69BBF;");
    asm("loc_6B69B78: lea 4(%edi),%edx;");
    asm("loc_6B69B7B: push %edx;");
    asm("loc_6B69B7C: push %eax;");
    asm("loc_6B69B7D: push %edi;");
    asm("loc_6B69B7E: call _sub_6B33C10;");
    asm("loc_6B69B83: mov 8(%esi),%eax;");
    asm("loc_6B69B86: mov %eax,%edx;");
    asm("loc_6B69B88: lea 0x28(%esp),%ecx;");
    asm("loc_6B69B8C: push %ecx;");
    asm("loc_6B69B8D: sub %edi,%edx;");
    asm("loc_6B69B8F: sar $2,%edx;");
    asm("loc_6B69B92: mov $1,%ecx;");
    asm("loc_6B69B97: sub %edx,%ecx;");
    asm("loc_6B69B99: push %ecx;");
    asm("loc_6B69B9A: push %eax;");
    asm("loc_6B69B9B: mov %esi,%ecx;");
    asm("loc_6B69B9D: call _sub_6B69C90;");
    asm("loc_6B69BA2: mov 8(%esi),%eax;");
    asm("loc_6B69BA5: cmp %eax,%edi;");
    asm("loc_6B69BA7: je loc_6B69BFD;");
    asm("loc_6B69BA9: lea (%esp),%esp;");
    asm("loc_6B69BB0: mov 0x28(%esp),%edx;");
    asm("loc_6B69BB4: mov %edx,(%edi);");
    asm("loc_6B69BB6: add $4,%edi;");
    asm("loc_6B69BB9: cmp %eax,%edi;");
    asm("loc_6B69BBB: jne loc_6B69BB0;");
    asm("loc_6B69BBD: jmp loc_6B69BFD;");
    asm("loc_6B69BBF: push %eax;");
    asm("loc_6B69BC0: push %eax;");
    asm("loc_6B69BC1: add $0xFFFFFFFC,%eax;");
    asm("loc_6B69BC4: push %eax;");
    asm("loc_6B69BC5: call _sub_6B33C10;");
    asm("loc_6B69BCA: mov 8(%esi),%ecx;");
    asm("loc_6B69BCD: lea -4(%ecx),%eax;");
    asm("loc_6B69BD0: cmp %eax,%edi;");
    asm("loc_6B69BD2: je loc_6B69BE3;");
    asm("loc_6B69BD4: mov -4(%eax),%edx;");
    asm("loc_6B69BD7: sub $4,%eax;");
    asm("loc_6B69BDA: sub $4,%ecx;");
    asm("loc_6B69BDD: cmp %edi,%eax;");
    asm("loc_6B69BDF: mov %edx,(%ecx);");
    asm("loc_6B69BE1: jne loc_6B69BD4;");
    asm("loc_6B69BE3: lea 4(%edi),%eax;");
    asm("loc_6B69BE6: cmp %eax,%edi;");
    asm("loc_6B69BE8: je loc_6B69BFD;");
    asm("loc_6B69BEA: lea (%ebx),%ebx;");
    asm("loc_6B69BF0: mov 0x28(%esp),%ecx;");
    asm("loc_6B69BF4: mov %ecx,(%edi);");
    asm("loc_6B69BF6: add $4,%edi;");
    asm("loc_6B69BF9: cmp %eax,%edi;");
    asm("loc_6B69BFB: jne loc_6B69BF0;");
    asm("loc_6B69BFD: mov 8(%esi),%eax;");
    asm("loc_6B69C00: add $4,%eax;");
    asm("loc_6B69C03: mov 0x20(%esp),%ecx;");
    asm("loc_6B69C07: mov %eax,8(%esi);");
    asm("loc_6B69C0A: mov 0x10(%esp),%eax;");
    asm("loc_6B69C0E: inc %eax;");
    asm("loc_6B69C0F: cmp %ecx,%eax;");
    asm("loc_6B69C11: mov %eax,0x10(%esp);");
    asm("loc_6B69C15: jl loc_6B69A50;");
    asm("loc_6B69C1B: mov 0x2C(%esp),%edi;");
    asm("loc_6B69C1F: jmp loc_6B69A29;");
    asm("loc_6B69C24: mov 0x1C(%ebx),%eax;");
    asm("loc_6B69C27: pop %edi;");
    asm("loc_6B69C28: pop %esi;");
    asm("loc_6B69C29: pop %ebp;");
    asm("loc_6B69C2A: pop %ebx;");
    asm("loc_6B69C2B: add $0x14,%esp;");
    asm("loc_6B69C2E: ret $0xC;");
    asm("loc_6B69C31: mov (%ebp),%edx;");
    asm("loc_6B69C34: mov 0x30(%esp),%eax;");
    asm("loc_6B69C38: mov %edx,(%eax);");
    asm("loc_6B69C3A: mov 0xC(%ebx),%ecx;");
    asm("loc_6B69C3D: push %ecx;");
    asm("loc_6B69C3E: call _sub_6B4ECD0;");
    asm("loc_6B69C43: mov %eax,%ecx;");
    asm("loc_6B69C45: mov 4(%ecx),%edx;");
    asm("loc_6B69C48: mov 0x1C(%ecx),%ebx;");
    asm("loc_6B69C4B: mov 0x14(%ecx),%eax;");
    asm("loc_6B69C4E: add $4,%esp;");
    asm("loc_6B69C51: inc %edx;");
    asm("loc_6B69C52: mov %edx,4(%ecx);");
    asm("loc_6B69C55: mov %edx,%esi;");
    asm("loc_6B69C57: mov (%ebp),%edx;");
    asm("loc_6B69C5A: add $2,%edx;");
    asm("loc_6B69C5D: add %edx,%ebx;");
    asm("loc_6B69C5F: mov %ebx,0x1C(%ecx);");
    asm("loc_6B69C62: mov (%ebp),%ebp;");
    asm("loc_6B69C65: add $2,%eax;");
    asm("loc_6B69C68: cmp %eax,%ebp;");
    asm("loc_6B69C6A: jbe loc_6B69C72;");
    asm("loc_6B69C6C: add $2,%ebp;");
    asm("loc_6B69C6F: mov %ebp,0x14(%ecx);");
    asm("loc_6B69C72: mov 0x1C(%ecx),%eax;");
    asm("loc_6B69C75: xor %edx,%edx;");
    asm("loc_6B69C77: div %esi;");
    asm("loc_6B69C79: mov %eax,0xC(%ecx);");
    asm("loc_6B69C7C: xor %eax,%eax;");
    asm("loc_6B69C7E: pop %edi;");
    asm("loc_6B69C7F: pop %esi;");
    asm("loc_6B69C80: pop %ebp;");
    asm("loc_6B69C81: pop %ebx;");
    asm("loc_6B69C82: add $0x14,%esp;");
    asm("loc_6B69C85: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69C90() // _sub_6B69C90
{
    __DEBUG_ASM(6B69C90);
    // chunk 0x6B69C90 _sub_6B69C90
    asm("loc_6B69C90: mov 8(%esp),%eax;");
    asm("loc_6B69C94: test %eax,%eax;");
    asm("loc_6B69C96: jbe loc_6B69CB2;");
    asm("loc_6B69C98: mov 0xC(%esp),%edx;");
    asm("loc_6B69C9C: mov %eax,%ecx;");
    asm("loc_6B69C9E: mov 4(%esp),%eax;");
    asm("loc_6B69CA2: push %esi;");
    asm("loc_6B69CA3: test %eax,%eax;");
    asm("loc_6B69CA5: je loc_6B69CAB;");
    asm("loc_6B69CA7: mov (%edx),%esi;");
    asm("loc_6B69CA9: mov %esi,(%eax);");
    asm("loc_6B69CAB: add $4,%eax;");
    asm("loc_6B69CAE: dec %ecx;");
    asm("loc_6B69CAF: jne loc_6B69CA3;");
    asm("loc_6B69CB1: pop %esi;");
    asm("loc_6B69CB2: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69CC0() // _sub_6B69CC0
{
    __DEBUG_ASM(6B69CC0);
    // chunk 0x6B69CC0 _sub_6B69CC0
    asm("loc_6B69CC0: mov _data_6B6EABC,%eax;");
    asm("loc_6B69CC5: mov %eax,_data_6B74630;");
    asm("loc_6B69CCA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69CD0() // _sub_6B69CD0
{
    __DEBUG_ASM(6B69CD0);
    // chunk 0x6B69CD0 _sub_6B69CD0
    asm("loc_6B69CD0: mov _data_6B6EABC,%eax;");
    asm("loc_6B69CD5: mov %eax,_data_6B74634;");
    asm("loc_6B69CDA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69CE0() // _sub_6B69CE0
{
    __DEBUG_ASM(6B69CE0);
    // chunk 0x6B69CE0 _sub_6B69CE0
    asm("loc_6B69CE0: mov _data_6B6EAC0,%eax;");
    asm("loc_6B69CE5: mov %eax,_data_6B7462C;");
    asm("loc_6B69CEA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69CF0() // ??1CDPMsgList@@UAE@XZ
{
    __DEBUG_ASM(6B69CF0);
    // chunk 0x6B69CF0 _sub_6B69CF0
    asm("loc_6B69CF0: jmpl *_import_6B6B100;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69CF6() // ??1CDPClientProxy@@UAE@XZ
{
    __DEBUG_ASM(6B69CF6);
    // chunk 0x6B69CF6 _sub_6B69CF6
    asm("loc_6B69CF6: jmpl *_import_6B6B0FC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69CFC() // ?CreateClientProxy@CDPServer@@UAEPAVCDPClientProxy@@XZ
{
    __DEBUG_ASM(6B69CFC);
    // chunk 0x6B69CFC _sub_6B69CFC
    asm("loc_6B69CFC: jmpl *_import_6B6B0F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D02() // ??1CDPServer@@UAE@XZ
{
    __DEBUG_ASM(6B69D02);
    // chunk 0x6B69D02 _sub_6B69D02
    asm("loc_6B69D02: jmpl *_import_6B6B0F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D08() // ??0CDPClientProxy@@QAE@XZ
{
    __DEBUG_ASM(6B69D08);
    // chunk 0x6B69D08 _sub_6B69D08
    asm("loc_6B69D08: jmpl *_import_6B6B0F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D0E() // ?Disconnect@CDPClientProxy@@QAE_NXZ
{
    __DEBUG_ASM(6B69D0E);
    // chunk 0x6B69D0E _sub_6B69D0E
    asm("loc_6B69D0E: jmpl *_import_6B6B0EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D14() // ?Send@CDPClientProxy@@QAE_NPAXK@Z
{
    __DEBUG_ASM(6B69D14);
    // chunk 0x6B69D14 _sub_6B69D14
    asm("loc_6B69D14: jmpl *_import_6B6B0E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D1A() // ?SetMaxPlayers@CDPServer@@QAEXH@Z
{
    __DEBUG_ASM(6B69D1A);
    // chunk 0x6B69D1A _sub_6B69D1A
    asm("loc_6B69D1A: jmpl *_import_6B6B0E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D20() // ?SetPassword@CDPServer@@QAEXPBG@Z
{
    __DEBUG_ASM(6B69D20);
    // chunk 0x6B69D20 _sub_6B69D20
    asm("loc_6B69D20: jmpl *_import_6B6B0E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D26() // ?SetSessionName@CDPServer@@QAEXPBG@Z
{
    __DEBUG_ASM(6B69D26);
    // chunk 0x6B69D26 _sub_6B69D26
    asm("loc_6B69D26: jmpl *_import_6B6B0DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D2C() // ?BeginHosting@CDPServer@@QAE_NI@Z
{
    __DEBUG_ASM(6B69D2C);
    // chunk 0x6B69D2C _sub_6B69D2C
    asm("loc_6B69D2C: jmpl *_import_6B6B0D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D32() // ??0CDPServer@@QAE@XZ
{
    __DEBUG_ASM(6B69D32);
    // chunk 0x6B69D32 _sub_6B69D32
    asm("loc_6B69D32: jmpl *_import_6B6B0D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D38() // ?DispatchMsgs@CDPServer@@QAEXXZ
{
    __DEBUG_ASM(6B69D38);
    // chunk 0x6B69D38 _sub_6B69D38
    asm("loc_6B69D38: jmpl *_import_6B6B0D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D3E() // ?GetConnectionStats@CDPClientProxy@@QAE_NPAU_DPN_CONNECTION_INFO@@@Z
{
    __DEBUG_ASM(6B69D3E);
    // chunk 0x6B69D3E _sub_6B69D3E
    asm("loc_6B69D3E: jmpl *_import_6B6B0CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D44() // ?SetEnumResponse@CDPServer@@QAE_NPAXK@Z
{
    __DEBUG_ASM(6B69D44);
    // chunk 0x6B69D44 _sub_6B69D44
    asm("loc_6B69D44: jmpl *_import_6B6B0C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D4A() // ?GetPort@CDPServer@@QAEXAAV?$vector@KV?$allocator@K@std@@@std@@@Z
{
    __DEBUG_ASM(6B69D4A);
    // chunk 0x6B69D4A _sub_6B69D4A
    asm("loc_6B69D4A: jmpl *_import_6B6B0C4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D50() // ?GetSendQSize@CDPClientProxy@@QAEIXZ
{
    __DEBUG_ASM(6B69D50);
    // chunk 0x6B69D50 _sub_6B69D50
    asm("loc_6B69D50: jmpl *_import_6B6B0C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D56() // ?GetSendQBytes@CDPClientProxy@@QAEIXZ
{
    __DEBUG_ASM(6B69D56);
    // chunk 0x6B69D56 _sub_6B69D56
    asm("loc_6B69D56: jmpl *_import_6B6B0BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D5C() // ?GetLinkSaturation@CDPClientProxy@@QAENXZ
{
    __DEBUG_ASM(6B69D5C);
    // chunk 0x6B69D5C _sub_6B69D5C
    asm("loc_6B69D5C: jmpl *_import_6B6B0B8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D62() // ?PushToServer@IServerImpl@@UAEXPAVCDAPacket@@@Z
{
    __DEBUG_ASM(6B69D62);
    // chunk 0x6B69D62 _sub_6B69D62
    asm("loc_6B69D62: jmpl *_import_6B6B370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D68() // ?Dock@IServerImpl@@UAEXABI0@Z
{
    __DEBUG_ASM(6B69D68);
    // chunk 0x6B69D68 _sub_6B69D68
    asm("loc_6B69D68: jmpl *_import_6B6B36C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D6E() // ?DumpPacketStats@IServerImpl@@UAEXPBD@Z
{
    __DEBUG_ASM(6B69D6E);
    // chunk 0x6B69D6E _sub_6B69D6E
    asm("loc_6B69D6E: jmpl *_import_6B6B368;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D74() // ?GetServerSig@IServerImpl@@UAEPBDXZ
{
    __DEBUG_ASM(6B69D74);
    // chunk 0x6B69D74 _sub_6B69D74
    asm("loc_6B69D74: jmpl *_import_6B6B364;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D7A() // ?GetServerID@IServerImpl@@UAEIXZ
{
    __DEBUG_ASM(6B69D7A);
    // chunk 0x6B69D7A _sub_6B69D7A
    asm("loc_6B69D7A: jmpl *_import_6B6B360;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D80() // ?ReqDifficultyScale@IServerImpl@@UAEXMI@Z
{
    __DEBUG_ASM(6B69D80);
    // chunk 0x6B69D80 _sub_6B69D80
    asm("loc_6B69D80: jmpl *_import_6B6B35C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D86() // ?StopTradeRequest@IServerImpl@@UAEXI@Z
{
    __DEBUG_ASM(6B69D86);
    // chunk 0x6B69D86 _sub_6B69D86
    asm("loc_6B69D86: jmpl *_import_6B6B358;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D8C() // ?RequestTrade@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69D8C);
    // chunk 0x6B69D8C _sub_6B69D8C
    asm("loc_6B69D8C: jmpl *_import_6B6B2FC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D92() // ?DelTradeEquip@IServerImpl@@UAEXIABUEquipDesc@@@Z
{
    __DEBUG_ASM(6B69D92);
    // chunk 0x6B69D92 _sub_6B69D92
    asm("loc_6B69D92: jmpl *_import_6B6B2F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D98() // ?AddTradeEquip@IServerImpl@@UAEXIABUEquipDesc@@@Z
{
    __DEBUG_ASM(6B69D98);
    // chunk 0x6B69D98 _sub_6B69D98
    asm("loc_6B69D98: jmpl *_import_6B6B2F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69D9E() // ?SetTradeMoney@IServerImpl@@UAEXIK@Z
{
    __DEBUG_ASM(6B69D9E);
    // chunk 0x6B69D9E _sub_6B69D9E
    asm("loc_6B69D9E: jmpl *_import_6B6B2F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DA4() // ?AcceptTrade@IServerImpl@@UAEXI_N@Z
{
    __DEBUG_ASM(6B69DA4);
    // chunk 0x6B69DA4 _sub_6B69DA4
    asm("loc_6B69DA4: jmpl *_import_6B6B2EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DAA() // ?TerminateTrade@IServerImpl@@UAEXIH@Z
{
    __DEBUG_ASM(6B69DAA);
    // chunk 0x6B69DAA _sub_6B69DAA
    asm("loc_6B69DAA: jmpl *_import_6B6B2E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DB0() // ?InitiateTrade@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69DB0);
    // chunk 0x6B69DB0 _sub_6B69DB0
    asm("loc_6B69DB0: jmpl *_import_6B6B2E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DB6() // ?RequestRankLevel@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(6B69DB6);
    // chunk 0x6B69DB6 _sub_6B69DB6
    asm("loc_6B69DB6: jmpl *_import_6B6B2E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DBC() // ?SetInterfaceState@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(6B69DBC);
    // chunk 0x6B69DBC _sub_6B69DBC
    asm("loc_6B69DBC: jmpl *_import_6B6B2DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DC2() // ?SetMissionLog@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(6B69DC2);
    // chunk 0x6B69DC2 _sub_6B69DC2
    asm("loc_6B69DC2: jmpl *_import_6B6B2D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DC8() // ?RequestGroupPositions@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(6B69DC8);
    // chunk 0x6B69DC8 _sub_6B69DC8
    asm("loc_6B69DC8: jmpl *_import_6B6B2D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DCE() // ?PopUpDialog@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69DCE);
    // chunk 0x6B69DCE _sub_6B69DCE
    asm("loc_6B69DCE: jmpl *_import_6B6B2D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DD4() // ?RequestPlayerStats@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(6B69DD4);
    // chunk 0x6B69DD4 _sub_6B69DD4
    asm("loc_6B69DD4: jmpl *_import_6B6B2CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DDA() // ?RequestBestPath@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(6B69DDA);
    // chunk 0x6B69DDA _sub_6B69DDA
    asm("loc_6B69DDA: jmpl *_import_6B6B2C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DE0() // ?SetVisitedState@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(6B69DE0);
    // chunk 0x6B69DE0 _sub_6B69DE0
    asm("loc_6B69DE0: jmpl *_import_6B6B2C4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DE6() // ?SetWeaponGroup@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(6B69DE6);
    // chunk 0x6B69DE6 _sub_6B69DE6
    asm("loc_6B69DE6: jmpl *_import_6B6B2C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DEC() // ?RTCDone@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69DEC);
    // chunk 0x6B69DEC _sub_6B69DEC
    asm("loc_6B69DEC: jmpl *_import_6B6B2BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DF2() // ?AbortMission@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69DF2);
    // chunk 0x6B69DF2 _sub_6B69DF2
    asm("loc_6B69DF2: jmpl *_import_6B6B2B8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DF8() // ?InterfaceItemUsed@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69DF8);
    // chunk 0x6B69DF8 _sub_6B69DF8
    asm("loc_6B69DF8: jmpl *_import_6B6B2B4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69DFE() // ?SetManeuver@IServerImpl@@UAEXIABUXSetManeuver@@@Z
{
    __DEBUG_ASM(6B69DFE);
    // chunk 0x6B69DFE _sub_6B69DFE
    asm("loc_6B69DFE: jmpl *_import_6B6B2B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E04() // ?SPScanCargo@IServerImpl@@UAEXABI0I@Z
{
    __DEBUG_ASM(6B69E04);
    // chunk 0x6B69E04 _sub_6B69E04
    asm("loc_6B69E04: jmpl *_import_6B6B2AC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E0A() // ?RequestCreateShip@IServerImpl@@UAEXI@Z
{
    __DEBUG_ASM(6B69E0A);
    // chunk 0x6B69E0A _sub_6B69E0A
    asm("loc_6B69E0A: jmpl *_import_6B6B2A8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E10() // ?CommComplete@IServerImpl@@UAEXIIIW4CommResult@@@Z
{
    __DEBUG_ASM(6B69E10);
    // chunk 0x6B69E10 _sub_6B69E10
    asm("loc_6B69E10: jmpl *_import_6B6B2A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E16() // ?MineAsteroid@IServerImpl@@UAEXIABVVector@@IIII@Z
{
    __DEBUG_ASM(6B69E16);
    // chunk 0x6B69E16 _sub_6B69E16
    asm("loc_6B69E16: jmpl *_import_6B6B2A0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E1C() // ?RequestCancel@IServerImpl@@UAEXHIIKI@Z
{
    __DEBUG_ASM(6B69E1C);
    // chunk 0x6B69E1C _sub_6B69E1C
    asm("loc_6B69E1C: jmpl *_import_6B6B29C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E22() // ?RequestEvent@IServerImpl@@UAEXHIIIKI@Z
{
    __DEBUG_ASM(6B69E22);
    // chunk 0x6B69E22 _sub_6B69E22
    asm("loc_6B69E22: jmpl *_import_6B6B298;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E28() // ?MissionSaveB@IServerImpl@@UAEXIK@Z
{
    __DEBUG_ASM(6B69E28);
    // chunk 0x6B69E28 _sub_6B69E28
    asm("loc_6B69E28: jmpl *_import_6B6B294;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E2E() // ?SaveGame@IServerImpl@@UAEXABUCHARACTER_ID@@PBGI@Z
{
    __DEBUG_ASM(6B69E2E);
    // chunk 0x6B69E2E _sub_6B69E2E
    asm("loc_6B69E2E: jmpl *_import_6B6B290;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E34() // ?SPRequestInvincibility@IServerImpl@@UAEXI_NW4InvincibilityReason@@I@Z
{
    __DEBUG_ASM(6B69E34);
    // chunk 0x6B69E34 _sub_6B69E34
    asm("loc_6B69E34: jmpl *_import_6B6B354;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E3A() // ?SPRequestUseItem@IServerImpl@@UAEXABUSSPUseItem@@I@Z
{
    __DEBUG_ASM(6B69E3A);
    // chunk 0x6B69E3A _sub_6B69E3A
    asm("loc_6B69E3A: jmpl *_import_6B6B288;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E40() // ?SPObjCollision@IServerImpl@@UAEXABUSSPObjCollisionInfo@@I@Z
{
    __DEBUG_ASM(6B69E40);
    // chunk 0x6B69E40 _sub_6B69E40
    asm("loc_6B69E40: jmpl *_import_6B6B284;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E46() // ?SPBadLandsObjCollision@IServerImpl@@UAEXABUSSPBadLandsObjCollisionInfo@@I@Z
{
    __DEBUG_ASM(6B69E46);
    // chunk 0x6B69E46 _sub_6B69E46
    asm("loc_6B69E46: jmpl *_import_6B6B280;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E4C() // ?SPMunitionCollision@IServerImpl@@UAEXABUSSPMunitionCollisionInfo@@I@Z
{
    __DEBUG_ASM(6B69E4C);
    // chunk 0x6B69E4C _sub_6B69E4C
    asm("loc_6B69E4C: jmpl *_import_6B6B350;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E52() // ?SPObjUpdate@IServerImpl@@UAEXABUSSPObjUpdateInfo@@I@Z
{
    __DEBUG_ASM(6B69E52);
    // chunk 0x6B69E52 _sub_6B69E52
    asm("loc_6B69E52: jmpl *_import_6B6B34C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E58() // ?Hail@IServerImpl@@UAEXIII@Z
{
    __DEBUG_ASM(6B69E58);
    // chunk 0x6B69E58 _sub_6B69E58
    asm("loc_6B69E58: jmpl *_import_6B6B274;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E5E() // ?JumpInComplete@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69E5E);
    // chunk 0x6B69E5E _sub_6B69E5E
    asm("loc_6B69E5E: jmpl *_import_6B6B270;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E64() // ?LaunchComplete@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69E64);
    // chunk 0x6B69E64 _sub_6B69E64
    asm("loc_6B69E64: jmpl *_import_6B6B26C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E6A() // ?PlayerLaunch@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69E6A);
    // chunk 0x6B69E6A _sub_6B69E6A
    asm("loc_6B69E6A: jmpl *_import_6B6B268;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E70() // ?SystemSwitchOutComplete@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69E70);
    // chunk 0x6B69E70 _sub_6B69E70
    asm("loc_6B69E70: jmpl *_import_6B6B264;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E76() // ?GFGoodSell@IServerImpl@@UAEXABUSGFGoodSellInfo@@I@Z
{
    __DEBUG_ASM(6B69E76);
    // chunk 0x6B69E76 _sub_6B69E76
    asm("loc_6B69E76: jmpl *_import_6B6B260;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E7C() // ?GFGoodBuy@IServerImpl@@UAEXABUSGFGoodBuyInfo@@I@Z
{
    __DEBUG_ASM(6B69E7C);
    // chunk 0x6B69E7C _sub_6B69E7C
    asm("loc_6B69E7C: jmpl *_import_6B6B25C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E82() // ?TradeResponse@IServerImpl@@UAEXPBEHI@Z
{
    __DEBUG_ASM(6B69E82);
    // chunk 0x6B69E82 _sub_6B69E82
    asm("loc_6B69E82: jmpl *_import_6B6B258;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E88() // ?MissionResponse@IServerImpl@@UAEXIK_NI@Z
{
    __DEBUG_ASM(6B69E88);
    // chunk 0x6B69E88 _sub_6B69E88
    asm("loc_6B69E88: jmpl *_import_6B6B254;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E8E() // ?GFGoodVaporized@IServerImpl@@UAEXABUSGFGoodVaporizedInfo@@I@Z
{
    __DEBUG_ASM(6B69E8E);
    // chunk 0x6B69E8E _sub_6B69E8E
    asm("loc_6B69E8E: jmpl *_import_6B6B250;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E94() // ?GFObjSelect@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69E94);
    // chunk 0x6B69E94 _sub_6B69E94
    asm("loc_6B69E94: jmpl *_import_6B6B24C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69E9A() // ?LocationInfoRequest@IServerImpl@@UAEXII_N@Z
{
    __DEBUG_ASM(6B69E9A);
    // chunk 0x6B69E9A _sub_6B69E9A
    asm("loc_6B69E9A: jmpl *_import_6B6B248;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69EA0() // ?BaseInfoRequest@IServerImpl@@UAEXII_N@Z
{
    __DEBUG_ASM(6B69EA0);
    // chunk 0x6B69EA0 _sub_6B69EA0
    asm("loc_6B69EA0: jmpl *_import_6B6B244;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69EA6() // ?LocationExit@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69EA6);
    // chunk 0x6B69EA6 _sub_6B69EA6
    asm("loc_6B69EA6: jmpl *_import_6B6B240;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69EAC() // ?LocationEnter@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69EAC);
    // chunk 0x6B69EAC _sub_6B69EAC
    asm("loc_6B69EAC: jmpl *_import_6B6B23C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69EB2() // ?BaseExit@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69EB2);
    // chunk 0x6B69EB2 _sub_6B69EB2
    asm("loc_6B69EB2: jmpl *_import_6B6B238;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69EB8() // ?BaseEnter@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69EB8);
    // chunk 0x6B69EB8 _sub_6B69EB8
    asm("loc_6B69EB8: jmpl *_import_6B6B234;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69EBE() // ?ReqChangeCash@IServerImpl@@UAEXHI@Z
{
    __DEBUG_ASM(6B69EBE);
    // chunk 0x6B69EBE _sub_6B69EBE
    asm("loc_6B69EBE: jmpl *_import_6B6B230;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69EC4() // ?ReqSetCash@IServerImpl@@UAEXHI@Z
{
    __DEBUG_ASM(6B69EC4);
    // chunk 0x6B69EC4 _sub_6B69EC4
    asm("loc_6B69EC4: jmpl *_import_6B6B22C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69ECA() // ?ReqModifyItem@IServerImpl@@UAEXGPBDHM_NI@Z
{
    __DEBUG_ASM(6B69ECA);
    // chunk 0x6B69ECA _sub_6B69ECA
    asm("loc_6B69ECA: jmpl *_import_6B6B228;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69ED0() // ?ReqRemoveItem@IServerImpl@@UAEXGHI@Z
{
    __DEBUG_ASM(6B69ED0);
    // chunk 0x6B69ED0 _sub_6B69ED0
    asm("loc_6B69ED0: jmpl *_import_6B6B224;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69ED6() // ?ReqAddItem@IServerImpl@@UAEXIPBDHM_NI@Z
{
    __DEBUG_ASM(6B69ED6);
    // chunk 0x6B69ED6 _sub_6B69ED6
    asm("loc_6B69ED6: jmpl *_import_6B6B220;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69EDC() // ?ReqCargo@IServerImpl@@UAEXABVEquipDescList@@I@Z
{
    __DEBUG_ASM(6B69EDC);
    // chunk 0x6B69EDC _sub_6B69EDC
    asm("loc_6B69EDC: jmpl *_import_6B6B21C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69EE2() // ?ReqEquipment@IServerImpl@@UAEXABVEquipDescList@@I@Z
{
    __DEBUG_ASM(6B69EE2);
    // chunk 0x6B69EE2 _sub_6B69EE2
    asm("loc_6B69EE2: jmpl *_import_6B6B218;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69EE8() // ?ReqCollisionGroups@IServerImpl@@UAEXABV?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@I@Z
{
    __DEBUG_ASM(6B69EE8);
    // chunk 0x6B69EE8 _sub_6B69EE8
    asm("loc_6B69EE8: jmpl *_import_6B6B210;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69EEE() // ?ReqHullStatus@IServerImpl@@UAEXMI@Z
{
    __DEBUG_ASM(6B69EEE);
    // chunk 0x6B69EEE _sub_6B69EEE
    asm("loc_6B69EEE: jmpl *_import_6B6B20C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69EF4() // ?ReqShipArch@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(6B69EF4);
    // chunk 0x6B69EF4 _sub_6B69EF4
    asm("loc_6B69EF4: jmpl *_import_6B6B208;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69EFA() // ?CharacterSkipAutosave@IServerImpl@@UAEXI@Z
{
    __DEBUG_ASM(6B69EFA);
    // chunk 0x6B69EFA _sub_6B69EFA
    asm("loc_6B69EFA: jmpl *_import_6B6B204;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F00() // ?DestroyCharacter@IServerImpl@@UAEXABUCHARACTER_ID@@I@Z
{
    __DEBUG_ASM(6B69F00);
    // chunk 0x6B69F00 _sub_6B69F00
    asm("loc_6B69F00: jmpl *_import_6B6B200;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F06() // ?CreateNewCharacter@IServerImpl@@UAEXABUSCreateCharacterInfo@@I@Z
{
    __DEBUG_ASM(6B69F06);
    // chunk 0x6B69F06 _sub_6B69F06
    asm("loc_6B69F06: jmpl *_import_6B6B214;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F0C() // ?NewCharacterInfoReq@IServerImpl@@UAEXI@Z
{
    __DEBUG_ASM(6B69F0C);
    // chunk 0x6B69F0C _sub_6B69F0C
    asm("loc_6B69F0C: jmpl *_import_6B6B27C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F12() // ?CharacterSelect@IServerImpl@@UAEXABUCHARACTER_ID@@I@Z
{
    __DEBUG_ASM(6B69F12);
    // chunk 0x6B69F12 _sub_6B69F12
    asm("loc_6B69F12: jmpl *_import_6B6B278;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F18() // ?CharacterInfoReq@IServerImpl@@UAEXI_N@Z
{
    __DEBUG_ASM(6B69F18);
    // chunk 0x6B69F18 _sub_6B69F18
    asm("loc_6B69F18: jmpl *_import_6B6B300;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F1E() // ?Login@IServerImpl@@UAEXABUSLoginInfo@@I@Z
{
    __DEBUG_ASM(6B69F1E);
    // chunk 0x6B69F1E _sub_6B69F1E
    asm("loc_6B69F1E: jmpl *_import_6B6B304;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F24() // ?OnConnect@IServerImpl@@UAEXI@Z
{
    __DEBUG_ASM(6B69F24);
    // chunk 0x6B69F24 _sub_6B69F24
    asm("loc_6B69F24: jmpl *_import_6B6B308;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F2A() // ?DisConnect@IServerImpl@@UAEXIW4EFLConnection@@@Z
{
    __DEBUG_ASM(6B69F2A);
    // chunk 0x6B69F2A _sub_6B69F2A
    asm("loc_6B69F2A: jmpl *_import_6B6B30C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F30() // ?Connect@IServerImpl@@UAEXPBDPAG@Z
{
    __DEBUG_ASM(6B69F30);
    // chunk 0x6B69F30 _sub_6B69F30
    asm("loc_6B69F30: jmpl *_import_6B6B310;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F36() // ?SwapConnections@IServerImpl@@UAE_NW4EFLConnection@@0@Z
{
    __DEBUG_ASM(6B69F36);
    // chunk 0x6B69F36 _sub_6B69F36
    asm("loc_6B69F36: jmpl *_import_6B6B314;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F3C() // ?SetActiveConnection@IServerImpl@@UAEXW4EFLConnection@@@Z
{
    __DEBUG_ASM(6B69F3C);
    // chunk 0x6B69F3C _sub_6B69F3C
    asm("loc_6B69F3C: jmpl *_import_6B6B318;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F42() // ?ElapseTime@IServerImpl@@UAEXM@Z
{
    __DEBUG_ASM(6B69F42);
    // chunk 0x6B69F42 _sub_6B69F42
    asm("loc_6B69F42: jmpl *_import_6B6B31C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F48() // ?Update@IServerImpl@@UAEHXZ
{
    __DEBUG_ASM(6B69F48);
    // chunk 0x6B69F48 _sub_6B69F48
    asm("loc_6B69F48: jmpl *_import_6B6B320;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F4E() // ?Shutdown@IServerImpl@@UAEXXZ
{
    __DEBUG_ASM(6B69F4E);
    // chunk 0x6B69F4E _sub_6B69F4E
    asm("loc_6B69F4E: jmpl *_import_6B6B324;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F54() // ?Startup@IServerImpl@@UAE_NABUSStartupInfo@@@Z
{
    __DEBUG_ASM(6B69F54);
    // chunk 0x6B69F54 _sub_6B69F54
    asm("loc_6B69F54: jmpl *_import_6B6B330;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F5A() // ?JettisonCargo@IServerImpl@@UAEXIABUXJettisonCargo@@@Z
{
    __DEBUG_ASM(6B69F5A);
    // chunk 0x6B69F5A _sub_6B69F5A
    asm("loc_6B69F5A: jmpl *_import_6B6B28C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F60() // ?StopTradelane@IServerImpl@@UAEXIIII@Z
{
    __DEBUG_ASM(6B69F60);
    // chunk 0x6B69F60 _sub_6B69F60
    asm("loc_6B69F60: jmpl *_import_6B6B340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F66() // ?GoTradelane@IServerImpl@@UAEXIABUXGoTradelane@@@Z
{
    __DEBUG_ASM(6B69F66);
    // chunk 0x6B69F66 _sub_6B69F66
    asm("loc_6B69F66: jmpl *_import_6B6B348;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F6C() // ?TractorObjects@IServerImpl@@UAEXIABUXTractorObjects@@@Z
{
    __DEBUG_ASM(6B69F6C);
    // chunk 0x6B69F6C _sub_6B69F6C
    asm("loc_6B69F6C: jmpl *_import_6B6B344;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F72() // ?SetTarget@IServerImpl@@UAEXIABUXSetTarget@@@Z
{
    __DEBUG_ASM(6B69F72);
    // chunk 0x6B69F72 _sub_6B69F72
    asm("loc_6B69F72: jmpl *_import_6B6B334;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F78() // ?ActivateThrusters@IServerImpl@@UAEXIABUXActivateThrusters@@@Z
{
    __DEBUG_ASM(6B69F78);
    // chunk 0x6B69F78 _sub_6B69F78
    asm("loc_6B69F78: jmpl *_import_6B6B33C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F7E() // ?ActivateCruise@IServerImpl@@UAEXIABUXActivateCruise@@@Z
{
    __DEBUG_ASM(6B69F7E);
    // chunk 0x6B69F7E _sub_6B69F7E
    asm("loc_6B69F7E: jmpl *_import_6B6B338;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F84() // ?ActivateEquip@IServerImpl@@UAEXIABUXActivateEquip@@@Z
{
    __DEBUG_ASM(6B69F84);
    // chunk 0x6B69F84 _sub_6B69F84
    asm("loc_6B69F84: jmpl *_import_6B6B374;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F8A() // ?FireWeapon@IServerImpl@@UAEXIABUXFireWeaponInfo@@@Z
{
    __DEBUG_ASM(6B69F8A);
    // chunk 0x6B69F8A _sub_6B69F8A
    asm("loc_6B69F8A: jmpl *_import_6B6B378;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F90() // ?SubmitChat@IServerImpl@@UAEXUCHAT_ID@@KPBX0H@Z
{
    __DEBUG_ASM(6B69F90);
    // chunk 0x6B69F90 _sub_6B69F90
    asm("loc_6B69F90: jmpl *_import_6B6B32C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F96() // ?set_id@EquipDesc@@QAEXG@Z
{
    __DEBUG_ASM(6B69F96);
    // chunk 0x6B69F96 _sub_6B69F96
    asm("loc_6B69F96: jmpl *_import_6B6B050;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69F9C() // ?set_status@EquipDesc@@QAEXM@Z
{
    __DEBUG_ASM(6B69F9C);
    // chunk 0x6B69F9C _sub_6B69F9C
    asm("loc_6B69F9C: jmpl *_import_6B6B054;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FA2() // ?set_count@EquipDesc@@QAEXH@Z
{
    __DEBUG_ASM(6B69FA2);
    // chunk 0x6B69FA2 _sub_6B69FA2
    asm("loc_6B69FA2: jmpl *_import_6B6B058;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FA8() // ?set_arch_id@EquipDesc@@QAEXI@Z
{
    __DEBUG_ASM(6B69FA8);
    // chunk 0x6B69FA8 _sub_6B69FA8
    asm("loc_6B69FA8: jmpl *_import_6B6B05C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FAE() // ??0EquipDesc@@QAE@XZ
{
    __DEBUG_ASM(6B69FAE);
    // chunk 0x6B69FAE _sub_6B69FAE
    asm("loc_6B69FAE: jmpl *_import_6B6B060;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FB4() // ?_Ucopy@?$vector@GV?$allocator@G@std@@@std@@IAEPAGPBG0PAG@Z
{
    __DEBUG_ASM(6B69FB4);
    // chunk 0x6B69FB4 _sub_6B69FB4
    asm("loc_6B69FB4: jmpl *_import_6B6B064;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FBA() // ?capacity@?$vector@GV?$allocator@G@std@@@std@@QBEIXZ
{
    __DEBUG_ASM(6B69FBA);
    // chunk 0x6B69FBA _sub_6B69FBA
    asm("loc_6B69FBA: jmpl *_import_6B6B068;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FC0() // ?size@?$vector@GV?$allocator@G@std@@@std@@QBEIXZ
{
    __DEBUG_ASM(6B69FC0);
    // chunk 0x6B69FC0 _sub_6B69FC0
    asm("loc_6B69FC0: jmpl *_import_6B6B06C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FC6() // ?_Destroy@?$vector@GV?$allocator@G@std@@@std@@IAEXPAG0@Z
{
    __DEBUG_ASM(6B69FC6);
    // chunk 0x6B69FC6 _sub_6B69FC6
    asm("loc_6B69FC6: jmpl *_import_6B6B070;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FCC() // ??1EquipDescList@@QAE@XZ
{
    __DEBUG_ASM(6B69FCC);
    // chunk 0x6B69FCC _sub_6B69FCC
    asm("loc_6B69FCC: jmpl *_import_6B6B03C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FD2() // ?make_internal@EquipDesc@@QAEXXZ
{
    __DEBUG_ASM(6B69FD2);
    // chunk 0x6B69FD2 _sub_6B69FD2
    asm("loc_6B69FD2: jmpl *_import_6B6B078;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FD8() // ?set_hardpoint@EquipDesc@@QAEXABUCacheString@@@Z
{
    __DEBUG_ASM(6B69FD8);
    // chunk 0x6B69FD8 _sub_6B69FD8
    asm("loc_6B69FD8: jmpl *_import_6B6B000;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FDE() // ?StringAlloc@@YAPADPBD_N@Z
{
    __DEBUG_ASM(6B69FDE);
    // chunk 0x6B69FDE _sub_6B69FDE
    asm("loc_6B69FDE: jmpl *_import_6B6B004;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FE4() // ?set_equipped@EquipDesc@@QAEX_N@Z
{
    __DEBUG_ASM(6B69FE4);
    // chunk 0x6B69FE4 _sub_6B69FE4
    asm("loc_6B69FE4: jmpl *_import_6B6B084;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FEA() // ?_Buynode@?$list@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@IAEPAU_Node@12@PAU312@0@Z
{
    __DEBUG_ASM(6B69FEA);
    // chunk 0x6B69FEA _sub_6B69FEA
    asm("loc_6B69FEA: jmpl *_import_6B6B088;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FF0() // ?is_internal@EquipDesc@@QBE_NXZ
{
    __DEBUG_ASM(6B69FF0);
    // chunk 0x6B69FF0 _sub_6B69FF0
    asm("loc_6B69FF0: jmpl *_import_6B6B08C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FF6() // ?flatten@FmtStr@@QBEHPAXI@Z
{
    __DEBUG_ASM(6B69FF6);
    // chunk 0x6B69FF6 _sub_6B69FF6
    asm("loc_6B69FF6: jmpl *_import_6B6B090;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B69FFC() // ?get_flattened_size@Val@FmtStr@@QBEIXZ
{
    __DEBUG_ASM(6B69FFC);
    // chunk 0x6B69FFC _sub_6B69FFC
    asm("loc_6B69FFC: jmpl *_import_6B6B07C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A002() // ??1FmtStr@@QAE@XZ
{
    __DEBUG_ASM(6B6A002);
    // chunk 0x6B6A002 _sub_6B6A002
    asm("loc_6B6A002: jmpl *_import_6B6B094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A008() // ?GetName@Vibe@Reputation@@YAHABHAAUFmtStr@@1AAPBG@Z
{
    __DEBUG_ASM(6B6A008);
    // chunk 0x6B6A008 _sub_6B6A008
    asm("loc_6B6A008: jmpl *_import_6B6B098;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A00E() // ?AttitudeTowards@Vibe@Reputation@@YAHABH0AAM@Z
{
    __DEBUG_ASM(6B6A00E);
    // chunk 0x6B6A00E _sub_6B6A00E
    asm("loc_6B6A00E: jmpl *_import_6B6B09C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A014() // ?GetAffiliation@Vibe@Reputation@@YAHABHAAI_N@Z
{
    __DEBUG_ASM(6B6A014);
    // chunk 0x6B6A014 _sub_6B6A014
    asm("loc_6B6A014: jmpl *_import_6B6B0A0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A01A() // ?SinglePlayer@@YA_NXZ
{
    __DEBUG_ASM(6B6A01A);
    // chunk 0x6B6A01A _sub_6B6A01A
    asm("loc_6B6A01A: jmpl *_import_6B6B0A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A020() // ?erase@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE?AViterator@12@V312@0@Z
{
    __DEBUG_ASM(6B6A020);
    // chunk 0x6B6A020 _sub_6B6A020
    asm("loc_6B6A020: jmpl *_import_6B6B0A8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A026() // ?insert@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAEXViterator@12@Vconst_iterator@12@1@Z
{
    __DEBUG_ASM(6B6A026);
    // chunk 0x6B6A026 _sub_6B6A026
    asm("loc_6B6A026: jmpl *_import_6B6B074;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A02C() // ?erase@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE?AViterator@12@V312@@Z
{
    __DEBUG_ASM(6B6A02C);
    // chunk 0x6B6A02C _sub_6B6A02C
    asm("loc_6B6A02C: jmpl *_import_6B6B048;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A032() // ??4CHARACTER_ID@@QAEABU0@ABU0@@Z
{
    __DEBUG_ASM(6B6A032);
    // chunk 0x6B6A032 _sub_6B6A032
    asm("loc_6B6A032: jmpl *_import_6B6B044;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A038() // ??0?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE@ABV?$allocator@UCollisionGroupDesc@@@1@@Z
{
    __DEBUG_ASM(6B6A038);
    // chunk 0x6B6A038 _sub_6B6A038
    asm("loc_6B6A038: jmpl *_import_6B6B040;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A03E() // ?insert@?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAEXViterator@12@Vconst_iterator@12@1@Z
{
    __DEBUG_ASM(6B6A03E);
    // chunk 0x6B6A03E _sub_6B6A03E
    asm("loc_6B6A03E: jmpl *_import_6B6B04C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A044() // ?erase@?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAE?AViterator@12@V312@0@Z
{
    __DEBUG_ASM(6B6A044);
    // chunk 0x6B6A044 _sub_6B6A044
    asm("loc_6B6A044: jmpl *_import_6B6B080;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A04A() // ?begin@?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QBE?AVconst_iterator@12@XZ
{
    __DEBUG_ASM(6B6A04A);
    // chunk 0x6B6A04A _sub_6B6A04A
    asm("loc_6B6A04A: jmpl *_import_6B6B038;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A050() // ?insert@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE?AViterator@12@V312@ABUCollisionGroupDesc@@@Z
{
    __DEBUG_ASM(6B6A050);
    // chunk 0x6B6A050 _sub_6B6A050
    asm("loc_6B6A050: jmpl *_import_6B6B034;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A056() // ?_Buynode@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@IAEPAU_Node@12@PAU312@0@Z
{
    __DEBUG_ASM(6B6A056);
    // chunk 0x6B6A056 _sub_6B6A056
    asm("loc_6B6A056: jmpl *_import_6B6B030;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A05C() // ?IsMPServer@@YA_NXZ
{
    __DEBUG_ASM(6B6A05C);
    // chunk 0x6B6A05C _sub_6B6A05C
    asm("loc_6B6A05C: jmpl *_import_6B6B028;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A062() // ??1?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE@XZ
{
    __DEBUG_ASM(6B6A062);
    // chunk 0x6B6A062 _sub_6B6A062
    asm("loc_6B6A062: jmpl *_import_6B6B008;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A068() // ?erase@?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAE?AViterator@12@V312@@Z
{
    __DEBUG_ASM(6B6A068);
    // chunk 0x6B6A068 _sub_6B6A068
    asm("loc_6B6A068: jmpl *_import_6B6B00C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A06E() // ?begin@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE?AViterator@12@XZ
{
    __DEBUG_ASM(6B6A06E);
    // chunk 0x6B6A06E _sub_6B6A06E
    asm("loc_6B6A06E: jmpl *_import_6B6B010;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A074() // ?LargeIDToSmallID@Archetype@@YAGI@Z
{
    __DEBUG_ASM(6B6A074);
    // chunk 0x6B6A074 _sub_6B6A074
    asm("loc_6B6A074: jmpl *_import_6B6B014;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A07A() // ?SmallIDToLargeID@Archetype@@YAIG@Z
{
    __DEBUG_ASM(6B6A07A);
    // chunk 0x6B6A07A _sub_6B6A07A
    asm("loc_6B6A07A: jmpl *_import_6B6B018;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A080() // ??0DamageList@@QAE@XZ
{
    __DEBUG_ASM(6B6A080);
    // chunk 0x6B6A080 _sub_6B6A080
    asm("loc_6B6A080: jmpl *_import_6B6B01C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A086() // ?GetArchMaxHitPts@Archetype@@YAHI@Z
{
    __DEBUG_ASM(6B6A086);
    // chunk 0x6B6A086 _sub_6B6A086
    asm("loc_6B6A086: jmpl *_import_6B6B020;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A08C() // ?insert@?$vector@GV?$allocator@G@std@@@std@@QAEXPAGIABG@Z
{
    __DEBUG_ASM(6B6A08C);
    // chunk 0x6B6A08C _sub_6B6A08C
    asm("loc_6B6A08C: jmpl *_import_6B6B024;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A092() // _sub_6B6A092
{
    __DEBUG_ASM(6B6A092);
    // chunk 0x6B6A092 _sub_6B6A092
    asm("loc_6B6A092: pushl 4(%esp);");
    asm("loc_6B6A096: call _sub_6B6A286;");
    asm("loc_6B6A09B: pop %ecx;");
    asm("loc_6B6A09C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A09E() // ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAE@XZ
{
    __DEBUG_ASM(6B6A09E);
    // chunk 0x6B6A09E _sub_6B6A09E
    asm("loc_6B6A09E: jmpl *_import_6B6B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0A4() // ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAEAAV12@ABV12@II@Z
{
    __DEBUG_ASM(6B6A0A4);
    // chunk 0x6B6A0A4 _sub_6B6A0A4
    asm("loc_6B6A0A4: jmpl *_import_6B6B184;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0AA() // ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAE@ABV?$allocator@G@1@@Z
{
    __DEBUG_ASM(6B6A0AA);
    // chunk 0x6B6A0AA _sub_6B6A0AA
    asm("loc_6B6A0AA: jmpl *_import_6B6B17C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0B0() // ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEX_N@Z
{
    __DEBUG_ASM(6B6A0B0);
    // chunk 0x6B6A0B0 _sub_6B6A0B0
    asm("loc_6B6A0B0: jmpl *_import_6B6B178;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0B6() // ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAE_NI_N@Z
{
    __DEBUG_ASM(6B6A0B6);
    // chunk 0x6B6A0B6 _sub_6B6A0B6
    asm("loc_6B6A0B6: jmpl *_import_6B6B194;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0BC() // ?_Eos@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEXI@Z
{
    __DEBUG_ASM(6B6A0BC);
    // chunk 0x6B6A0BC _sub_6B6A0BC
    asm("loc_6B6A0BC: jmpl *_import_6B6B150;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0C2() // ?_Split@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEXXZ
{
    __DEBUG_ASM(6B6A0C2);
    // chunk 0x6B6A0C2 _sub_6B6A0C2
    asm("loc_6B6A0C2: jmpl *_import_6B6B130;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0C8() // ?_Xran@std@@YAXXZ
{
    __DEBUG_ASM(6B6A0C8);
    // chunk 0x6B6A0C8 _sub_6B6A0C8
    asm("loc_6B6A0C8: jmpl *_import_6B6B124;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0CE() // ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@I@Z
{
    __DEBUG_ASM(6B6A0CE);
    // chunk 0x6B6A0CE _sub_6B6A0CE
    asm("loc_6B6A0CE: jmpl *_import_6B6B12C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0D4() // ??6std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z
{
    __DEBUG_ASM(6B6A0D4);
    // chunk 0x6B6A0D4 _sub_6B6A0D4
    asm("loc_6B6A0D4: jmpl *_import_6B6B134;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0DA() // ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAE_NI_N@Z
{
    __DEBUG_ASM(6B6A0DA);
    // chunk 0x6B6A0DA _sub_6B6A0DA
    asm("loc_6B6A0DA: jmpl *_import_6B6B13C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0E0() // ?_Xlen@std@@YAXXZ
{
    __DEBUG_ASM(6B6A0E0);
    // chunk 0x6B6A0E0 _sub_6B6A0E0
    asm("loc_6B6A0E0: jmpl *_import_6B6B140;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0E6() // ?_Eos@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEXI@Z
{
    __DEBUG_ASM(6B6A0E6);
    // chunk 0x6B6A0E6 _sub_6B6A0E6
    asm("loc_6B6A0E6: jmpl *_import_6B6B144;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0EC() // ?_Split@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEXXZ
{
    __DEBUG_ASM(6B6A0EC);
    // chunk 0x6B6A0EC _sub_6B6A0EC
    asm("loc_6B6A0EC: jmpl *_import_6B6B148;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0F2() // ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ
{
    __DEBUG_ASM(6B6A0F2);
    // chunk 0x6B6A0F2 _sub_6B6A0F2
    asm("loc_6B6A0F2: jmpl *_import_6B6B18C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0F8() // ??6std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z
{
    __DEBUG_ASM(6B6A0F8);
    // chunk 0x6B6A0F8 _sub_6B6A0F8
    asm("loc_6B6A0F8: jmpl *_import_6B6B190;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A0FE() // ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEX_N@Z
{
    __DEBUG_ASM(6B6A0FE);
    // chunk 0x6B6A0FE _sub_6B6A0FE
    asm("loc_6B6A0FE: jmpl *_import_6B6B154;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A104() // ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z
{
    __DEBUG_ASM(6B6A104);
    // chunk 0x6B6A104 _sub_6B6A104
    asm("loc_6B6A104: jmpl *_import_6B6B158;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A10A() // ??Mstd@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z
{
    __DEBUG_ASM(6B6A10A);
    // chunk 0x6B6A10A _sub_6B6A10A
    asm("loc_6B6A10A: jmpl *_import_6B6B15C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A110() // ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV12@PBDI@Z
{
    __DEBUG_ASM(6B6A110);
    // chunk 0x6B6A110 _sub_6B6A110
    asm("loc_6B6A110: jmpl *_import_6B6B160;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A116() // ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@PBX@Z
{
    __DEBUG_ASM(6B6A116);
    // chunk 0x6B6A116 _sub_6B6A116
    asm("loc_6B6A116: jmpl *_import_6B6B164;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A11C() // ??6std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@E@Z
{
    __DEBUG_ASM(6B6A11C);
    // chunk 0x6B6A11C _sub_6B6A11C
    asm("loc_6B6A11C: jmpl *_import_6B6B168;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A122() // ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@M@Z
{
    __DEBUG_ASM(6B6A122);
    // chunk 0x6B6A122 _sub_6B6A122
    asm("loc_6B6A122: jmpl *_import_6B6B16C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A128() // ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@N@Z
{
    __DEBUG_ASM(6B6A128);
    // chunk 0x6B6A128 _sub_6B6A128
    asm("loc_6B6A128: jmpl *_import_6B6B170;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A12E() // ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@H@Z
{
    __DEBUG_ASM(6B6A12E);
    // chunk 0x6B6A12E _sub_6B6A12E
    asm("loc_6B6A12E: jmpl *_import_6B6B174;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A134() // ??2@YAPAXI@Z
{
    __DEBUG_ASM(6B6A134);
    // chunk 0x6B6A134 _sub_6B6A134
    asm("loc_6B6A134: jmpl *_import_6B6B1F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A13A() // __CxxFrameHandler
{
    __DEBUG_ASM(6B6A13A);
    // chunk 0x6B6A13A _sub_6B6A13A
    asm("loc_6B6A13A: jmpl *_import_6B6B1F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A140() // _purecall
{
    __DEBUG_ASM(6B6A140);
    // chunk 0x6B6A140 _sub_6B6A140
    asm("loc_6B6A140: jmpl *_import_6B6B1F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A146() // _wcscpy
{
    __DEBUG_ASM(6B6A146);
    // chunk 0x6B6A146 _sub_6B6A146
    asm("loc_6B6A146: jmpl *_import_6B6B1EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A14C() // _wcsncpy
{
    __DEBUG_ASM(6B6A14C);
    // chunk 0x6B6A14C _sub_6B6A14C
    asm("loc_6B6A14C: jmpl *_import_6B6B1E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A152() // _wcslen
{
    __DEBUG_ASM(6B6A152);
    // chunk 0x6B6A152 _sub_6B6A152
    asm("loc_6B6A152: jmpl *_import_6B6B1E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A158() // ??_M@YGXPAXIHP6EX0@Z@Z
{
    __DEBUG_ASM(6B6A158);
    // chunk 0x6B6A158 _sub_6B6A158
    asm("loc_6B6A158: push %ebp;");
    asm("loc_6B6A159: mov %esp,%ebp;");
    asm("loc_6B6A15B: push $0xFFFFFFFF;");
    asm("loc_6B6A15D: push $_data_6B6EAC8;");
    asm("loc_6B6A162: push $_sub_6B6A442;");
    asm("loc_6B6A167: mov %fs:0,%eax;");
    asm("loc_6B6A16D: push %eax;");
    asm("loc_6B6A16E: mov %esp,%fs:0;");
    asm("loc_6B6A175: sub $0xC,%esp;");
    asm("loc_6B6A178: push %ebx;");
    asm("loc_6B6A179: push %esi;");
    asm("loc_6B6A17A: push %edi;");
    asm("loc_6B6A17B: andl $0,-0x1C(%ebp);");
    asm("loc_6B6A17F: mov 0xC(%ebp),%esi;");
    asm("loc_6B6A182: mov %esi,%eax;");
    asm("loc_6B6A184: imul 0x10(%ebp),%eax;");
    asm("loc_6B6A188: add %eax,8(%ebp);");
    asm("loc_6B6A18B: andl $0,-4(%ebp);");
    asm("loc_6B6A18F: decl 0x10(%ebp);");
    asm("loc_6B6A192: js loc_6B6A19F;");
    asm("loc_6B6A194: sub %esi,8(%ebp);");
    asm("loc_6B6A197: mov 8(%ebp),%ecx;");
    asm("loc_6B6A19A: calll *0x14(%ebp);");
    asm("loc_6B6A19D: jmp loc_6B6A18F;");
    asm("loc_6B6A19F: movl $1,-0x1C(%ebp);");
    asm("loc_6B6A1A6: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_6B6A1AA: call loc_6B6A1C0;");
    asm("loc_6B6A1AF: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6A1B2: mov %ecx,%fs:0;");
    asm("loc_6B6A1B9: pop %edi;");
    asm("loc_6B6A1BA: pop %esi;");
    asm("loc_6B6A1BB: pop %ebx;");
    asm("loc_6B6A1BC: leave;");
    asm("loc_6B6A1BD: ret $0x10;");
    asm("loc_6B6A1C0: cmpl $0,-0x1C(%ebp);");
    asm("loc_6B6A1C4: jne loc_6B6A1D7;");
    asm("loc_6B6A1C6: pushl 0x14(%ebp);");
    asm("loc_6B6A1C9: pushl 0x10(%ebp);");
    asm("loc_6B6A1CC: pushl 0xC(%ebp);");
    asm("loc_6B6A1CF: pushl 8(%ebp);");
    asm("loc_6B6A1D2: call _sub_6B6A1D8;");
    asm("loc_6B6A1D7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A1D8() // ?__ArrayUnwind@@YGXPAXIHP6EX0@Z@Z
{
    __DEBUG_ASM(6B6A1D8);
    // chunk 0x6B6A1D8 _sub_6B6A1D8
    asm("loc_6B6A1D8: push %ebp;");
    asm("loc_6B6A1D9: mov %esp,%ebp;");
    asm("loc_6B6A1DB: push $0xFFFFFFFF;");
    asm("loc_6B6A1DD: push $_data_6B6EAD8;");
    asm("loc_6B6A1E2: push $_sub_6B6A442;");
    asm("loc_6B6A1E7: mov %fs:0,%eax;");
    asm("loc_6B6A1ED: push %eax;");
    asm("loc_6B6A1EE: mov %esp,%fs:0;");
    asm("loc_6B6A1F5: push %ecx;");
    asm("loc_6B6A1F6: push %ecx;");
    asm("loc_6B6A1F7: push %ebx;");
    asm("loc_6B6A1F8: push %esi;");
    asm("loc_6B6A1F9: push %edi;");
    asm("loc_6B6A1FA: mov %esp,-0x18(%ebp);");
    asm("loc_6B6A1FD: andl $0,-4(%ebp);");
    asm("loc_6B6A201: decl 0x10(%ebp);");
    asm("loc_6B6A204: js loc_6B6A221;");
    asm("loc_6B6A206: mov 8(%ebp),%ecx;");
    asm("loc_6B6A209: sub 0xC(%ebp),%ecx;");
    asm("loc_6B6A20C: mov %ecx,8(%ebp);");
    asm("loc_6B6A20F: calll *0x14(%ebp);");
    asm("loc_6B6A212: jmp loc_6B6A201;");
    asm("loc_6B6A214: pushl -0x14(%ebp);");
    asm("loc_6B6A217: call _sub_6B6A236;");
    asm("loc_6B6A21C: pop %ecx;");
    asm("loc_6B6A21D: ret;");
    asm("loc_6B6A21E: mov -0x18(%ebp),%esp;");
    asm("loc_6B6A221: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_6B6A225: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6A228: mov %ecx,%fs:0;");
    asm("loc_6B6A22F: pop %edi;");
    asm("loc_6B6A230: pop %esi;");
    asm("loc_6B6A231: pop %ebx;");
    asm("loc_6B6A232: leave;");
    asm("loc_6B6A233: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A236() // _unknown_libname_1
{
    __DEBUG_ASM(6B6A236);
    // chunk 0x6B6A236 _sub_6B6A236
    asm("loc_6B6A236: mov 4(%esp),%eax;");
    asm("loc_6B6A23A: mov (%eax),%eax;");
    asm("loc_6B6A23C: cmpl $0xE06D7363,(%eax);");
    asm("loc_6B6A242: je loc_6B6A247;");
    asm("loc_6B6A244: xor %eax,%eax;");
    asm("loc_6B6A246: ret;");
    asm("loc_6B6A247: jmp _sub_6B6A448;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A250() // __alloca_probe
{
    __DEBUG_ASM(6B6A250);
    // chunk 0x6B6A250 _sub_6B6A250
    asm("loc_6B6A250: push %ecx;");
    asm("loc_6B6A251: cmp $0x1000,%eax;");
    asm("loc_6B6A256: lea 8(%esp),%ecx;");
    asm("loc_6B6A25A: jb loc_6B6A270;");
    asm("loc_6B6A25C: sub $0x1000,%ecx;");
    asm("loc_6B6A262: sub $0x1000,%eax;");
    asm("loc_6B6A267: test %eax,(%ecx);");
    asm("loc_6B6A269: cmp $0x1000,%eax;");
    asm("loc_6B6A26E: jae loc_6B6A25C;");
    asm("loc_6B6A270: sub %eax,%ecx;");
    asm("loc_6B6A272: mov %esp,%eax;");
    asm("loc_6B6A274: test %eax,(%ecx);");
    asm("loc_6B6A276: mov %ecx,%esp;");
    asm("loc_6B6A278: mov (%eax),%ecx;");
    asm("loc_6B6A27A: mov 4(%eax),%eax;");
    asm("loc_6B6A27D: push %eax;");
    asm("loc_6B6A27E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A280() // _vsnprintf
{
    __DEBUG_ASM(6B6A280);
    // chunk 0x6B6A280 _sub_6B6A280
    asm("loc_6B6A280: jmpl *_import_6B6B1E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A286() // _free
{
    __DEBUG_ASM(6B6A286);
    // chunk 0x6B6A286 _sub_6B6A286
    asm("loc_6B6A286: jmpl *_import_6B6B1DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A28C() // _malloc
{
    __DEBUG_ASM(6B6A28C);
    // chunk 0x6B6A28C _sub_6B6A28C
    asm("loc_6B6A28C: jmpl *_import_6B6B1D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A292() // _sprintf
{
    __DEBUG_ASM(6B6A292);
    // chunk 0x6B6A292 _sub_6B6A292
    asm("loc_6B6A292: jmpl *_import_6B6B1D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A298() // __CRT_INIT@12
{
    __DEBUG_ASM(6B6A298);
    // chunk 0x6B6A298 _sub_6B6A298
    asm("loc_6B6A298: mov 8(%esp),%eax;");
    asm("loc_6B6A29C: test %eax,%eax;");
    asm("loc_6B6A29E: jne loc_6B6A2AE;");
    asm("loc_6B6A2A0: cmp %eax,_data_6B7463C;");
    asm("loc_6B6A2A6: jle loc_6B6A2D6;");
    asm("loc_6B6A2A8: decl _data_6B7463C;");
    asm("loc_6B6A2AE: mov _import_6B6B1B0,%ecx;");
    asm("loc_6B6A2B4: cmp $1,%eax;");
    asm("loc_6B6A2B7: mov (%ecx),%ecx;");
    asm("loc_6B6A2B9: mov %ecx,_data_6B74640;");
    asm("loc_6B6A2BF: jne loc_6B6A300;");
    asm("loc_6B6A2C1: push $0x80;");
    asm("loc_6B6A2C6: calll *_import_6B6B1D8;");
    asm("loc_6B6A2CC: test %eax,%eax;");
    asm("loc_6B6A2CE: pop %ecx;");
    asm("loc_6B6A2CF: mov %eax,_data_6B74648;");
    asm("loc_6B6A2D4: jne loc_6B6A2DA;");
    asm("loc_6B6A2D6: xor %eax,%eax;");
    asm("loc_6B6A2D8: jmp loc_6B6A340;");
    asm("loc_6B6A2DA: andl $0,(%eax);");
    asm("loc_6B6A2DD: mov _data_6B74648,%eax;");
    asm("loc_6B6A2E2: push $_data_6B736F4;");
    asm("loc_6B6A2E7: push $_data_6B73000;");
    asm("loc_6B6A2EC: mov %eax,_data_6B74644;");
    asm("loc_6B6A2F1: call _sub_6B6A44E;");
    asm("loc_6B6A2F6: incl _data_6B7463C;");
    asm("loc_6B6A2FC: pop %ecx;");
    asm("loc_6B6A2FD: pop %ecx;");
    asm("loc_6B6A2FE: jmp loc_6B6A33D;");
    asm("loc_6B6A300: test %eax,%eax;");
    asm("loc_6B6A302: jne loc_6B6A33D;");
    asm("loc_6B6A304: mov _data_6B74648,%eax;");
    asm("loc_6B6A309: test %eax,%eax;");
    asm("loc_6B6A30B: je loc_6B6A33D;");
    asm("loc_6B6A30D: mov _data_6B74644,%ecx;");
    asm("loc_6B6A313: push %esi;");
    asm("loc_6B6A314: lea -4(%ecx),%esi;");
    asm("loc_6B6A317: cmp %eax,%esi;");
    asm("loc_6B6A319: jb loc_6B6A32D;");
    asm("loc_6B6A31B: mov (%esi),%ecx;");
    asm("loc_6B6A31D: test %ecx,%ecx;");
    asm("loc_6B6A31F: je loc_6B6A328;");
    asm("loc_6B6A321: call *%ecx;");
    asm("loc_6B6A323: mov _data_6B74648,%eax;");
    asm("loc_6B6A328: sub $4,%esi;");
    asm("loc_6B6A32B: jmp loc_6B6A317;");
    asm("loc_6B6A32D: push %eax;");
    asm("loc_6B6A32E: calll *_import_6B6B1DC;");
    asm("loc_6B6A334: andl $0,_data_6B74648;");
    asm("loc_6B6A33B: pop %ecx;");
    asm("loc_6B6A33C: pop %esi;");
    asm("loc_6B6A33D: push $1;");
    asm("loc_6B6A33F: pop %eax;");
    asm("loc_6B6A340: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A343() // _DllEntryPoint
{
    __DEBUG_ASM(6B6A343);
    // chunk 0x6B6A343 _sub_6B6A343
    asm("loc_6B6A343: push %ebp;");
    asm("loc_6B6A344: mov %esp,%ebp;");
    asm("loc_6B6A346: push %ebx;");
    asm("loc_6B6A347: mov 8(%ebp),%ebx;");
    asm("loc_6B6A34A: push %esi;");
    asm("loc_6B6A34B: mov 0xC(%ebp),%esi;");
    asm("loc_6B6A34E: push %edi;");
    asm("loc_6B6A34F: mov 0x10(%ebp),%edi;");
    asm("loc_6B6A352: test %esi,%esi;");
    asm("loc_6B6A354: jne loc_6B6A35F;");
    asm("loc_6B6A356: cmpl $0,_data_6B7463C;");
    asm("loc_6B6A35D: jmp loc_6B6A385;");
    asm("loc_6B6A35F: cmp $1,%esi;");
    asm("loc_6B6A362: je loc_6B6A369;");
    asm("loc_6B6A364: cmp $2,%esi;");
    asm("loc_6B6A367: jne loc_6B6A38B;");
    asm("loc_6B6A369: mov _data_6B7464C,%eax;");
    asm("loc_6B6A36E: test %eax,%eax;");
    asm("loc_6B6A370: je loc_6B6A37B;");
    asm("loc_6B6A372: push %edi;");
    asm("loc_6B6A373: push %esi;");
    asm("loc_6B6A374: push %ebx;");
    asm("loc_6B6A375: call *%eax;");
    asm("loc_6B6A377: test %eax,%eax;");
    asm("loc_6B6A379: je loc_6B6A387;");
    asm("loc_6B6A37B: push %edi;");
    asm("loc_6B6A37C: push %esi;");
    asm("loc_6B6A37D: push %ebx;");
    asm("loc_6B6A37E: call _sub_6B6A298;");
    asm("loc_6B6A383: test %eax,%eax;");
    asm("loc_6B6A385: jne loc_6B6A38B;");
    asm("loc_6B6A387: xor %eax,%eax;");
    asm("loc_6B6A389: jmp loc_6B6A3D9;");
    asm("loc_6B6A38B: push %edi;");
    asm("loc_6B6A38C: push %esi;");
    asm("loc_6B6A38D: push %ebx;");
    asm("loc_6B6A38E: call _sub_6B39210;");
    asm("loc_6B6A393: cmp $1,%esi;");
    asm("loc_6B6A396: mov %eax,0xC(%ebp);");
    asm("loc_6B6A399: jne loc_6B6A3A7;");
    asm("loc_6B6A39B: test %eax,%eax;");
    asm("loc_6B6A39D: jne loc_6B6A3D6;");
    asm("loc_6B6A39F: push %edi;");
    asm("loc_6B6A3A0: push %eax;");
    asm("loc_6B6A3A1: push %ebx;");
    asm("loc_6B6A3A2: call _sub_6B6A298;");
    asm("loc_6B6A3A7: test %esi,%esi;");
    asm("loc_6B6A3A9: je loc_6B6A3B0;");
    asm("loc_6B6A3AB: cmp $3,%esi;");
    asm("loc_6B6A3AE: jne loc_6B6A3D6;");
    asm("loc_6B6A3B0: push %edi;");
    asm("loc_6B6A3B1: push %esi;");
    asm("loc_6B6A3B2: push %ebx;");
    asm("loc_6B6A3B3: call _sub_6B6A298;");
    asm("loc_6B6A3B8: test %eax,%eax;");
    asm("loc_6B6A3BA: jne loc_6B6A3BF;");
    asm("loc_6B6A3BC: and %eax,0xC(%ebp);");
    asm("loc_6B6A3BF: cmpl $0,0xC(%ebp);");
    asm("loc_6B6A3C3: je loc_6B6A3D6;");
    asm("loc_6B6A3C5: mov _data_6B7464C,%eax;");
    asm("loc_6B6A3CA: test %eax,%eax;");
    asm("loc_6B6A3CC: je loc_6B6A3D6;");
    asm("loc_6B6A3CE: push %edi;");
    asm("loc_6B6A3CF: push %esi;");
    asm("loc_6B6A3D0: push %ebx;");
    asm("loc_6B6A3D1: call *%eax;");
    asm("loc_6B6A3D3: mov %eax,0xC(%ebp);");
    asm("loc_6B6A3D6: mov 0xC(%ebp),%eax;");
    asm("loc_6B6A3D9: pop %edi;");
    asm("loc_6B6A3DA: pop %esi;");
    asm("loc_6B6A3DB: pop %ebx;");
    asm("loc_6B6A3DC: pop %ebp;");
    asm("loc_6B6A3DD: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A3E0() // _fclose
{
    __DEBUG_ASM(6B6A3E0);
    // chunk 0x6B6A3E0 _sub_6B6A3E0
    asm("loc_6B6A3E0: jmpl *_import_6B6B1D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A3E6() // _fprintf
{
    __DEBUG_ASM(6B6A3E6);
    // chunk 0x6B6A3E6 _sub_6B6A3E6
    asm("loc_6B6A3E6: jmpl *_import_6B6B1CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A3EC() // _fopen
{
    __DEBUG_ASM(6B6A3EC);
    // chunk 0x6B6A3EC _sub_6B6A3EC
    asm("loc_6B6A3EC: jmpl *_import_6B6B1C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A3F2() // _memmove
{
    __DEBUG_ASM(6B6A3F2);
    // chunk 0x6B6A3F2 _sub_6B6A3F2
    asm("loc_6B6A3F2: jmpl *_import_6B6B1C4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A3F8() // _ftol
{
    __DEBUG_ASM(6B6A3F8);
    // chunk 0x6B6A3F8 _sub_6B6A3F8
    asm("loc_6B6A3F8: jmpl *_import_6B6B1C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A3FE() // _strncpy
{
    __DEBUG_ASM(6B6A3FE);
    // chunk 0x6B6A3FE _sub_6B6A3FE
    asm("loc_6B6A3FE: jmpl *_import_6B6B1B4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A404() // __onexit
{
    __DEBUG_ASM(6B6A404);
    // chunk 0x6B6A404 _sub_6B6A404
    asm("loc_6B6A404: cmpl $0xFFFFFFFF,_data_6B74648;");
    asm("loc_6B6A40B: jne loc_6B6A419;");
    asm("loc_6B6A40D: pushl 4(%esp);");
    asm("loc_6B6A411: calll *_import_6B6B1A0;");
    asm("loc_6B6A417: pop %ecx;");
    asm("loc_6B6A418: ret;");
    asm("loc_6B6A419: push $_data_6B74644;");
    asm("loc_6B6A41E: push $_data_6B74648;");
    asm("loc_6B6A423: pushl 0xC(%esp);");
    asm("loc_6B6A427: call _sub_6B6A454;");
    asm("loc_6B6A42C: add $0xC,%esp;");
    asm("loc_6B6A42F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A430() // _atexit
{
    __DEBUG_ASM(6B6A430);
    // chunk 0x6B6A430 _sub_6B6A430
    asm("loc_6B6A430: pushl 4(%esp);");
    asm("loc_6B6A434: call _sub_6B6A404;");
    asm("loc_6B6A439: neg %eax;");
    asm("loc_6B6A43B: sbb %eax,%eax;");
    asm("loc_6B6A43D: pop %ecx;");
    asm("loc_6B6A43E: neg %eax;");
    asm("loc_6B6A440: dec %eax;");
    asm("loc_6B6A441: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A442() // _except_handler3
{
    __DEBUG_ASM(6B6A442);
    // chunk 0x6B6A442 _sub_6B6A442
    asm("loc_6B6A442: jmpl *_import_6B6B1BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A448() // ?terminate@@YAXXZ
{
    __DEBUG_ASM(6B6A448);
    // chunk 0x6B6A448 _sub_6B6A448
    asm("loc_6B6A448: jmpl *_import_6B6B1AC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A44E() // _initterm
{
    __DEBUG_ASM(6B6A44E);
    // chunk 0x6B6A44E _sub_6B6A44E
    asm("loc_6B6A44E: jmpl *_import_6B6B1A8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A454() // __dllonexit
{
    __DEBUG_ASM(6B6A454);
    // chunk 0x6B6A454 _sub_6B6A454
    asm("loc_6B6A454: jmpl *_import_6B6B1A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A460() // _DeleteCriticalSection
{
    __DEBUG_ASM(6B6A460);
    // chunk 0x6B6A460 _sub_6B6A460
    asm("loc_6B6A460: jmpl *_import_6B6B11C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A466() // _InitializeCriticalSection
{
    __DEBUG_ASM(6B6A466);
    // chunk 0x6B6A466 _sub_6B6A466
    asm("loc_6B6A466: jmpl *_import_6B6B118;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A46C() // _LeaveCriticalSection
{
    __DEBUG_ASM(6B6A46C);
    // chunk 0x6B6A46C _sub_6B6A46C
    asm("loc_6B6A46C: jmpl *_import_6B6B114;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A472() // _EnterCriticalSection
{
    __DEBUG_ASM(6B6A472);
    // chunk 0x6B6A472 _sub_6B6A472
    asm("loc_6B6A472: jmpl *_import_6B6B110;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A478() // _DisableThreadLibraryCalls
{
    __DEBUG_ASM(6B6A478);
    // chunk 0x6B6A478 _sub_6B6A478
    asm("loc_6B6A478: jmpl *_import_6B6B10C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A47E() // _OutputDebugStringA
{
    __DEBUG_ASM(6B6A47E);
    // chunk 0x6B6A47E _sub_6B6A47E
    asm("loc_6B6A47E: jmpl *_import_6B6B108;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A484() // _wcsdup
{
    __DEBUG_ASM(6B6A484);
    // chunk 0x6B6A484 _sub_6B6A484
    asm("loc_6B6A484: jmpl *_import_6B6B1B8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A48A() // _wcslwr
{
    __DEBUG_ASM(6B6A48A);
    // chunk 0x6B6A48A _sub_6B6A48A
    asm("loc_6B6A48A: jmpl *_import_6B6B19C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A490() // _unknown_libname_2
{
    __DEBUG_ASM(6B6A490);
    // chunk 0x6B6A490 _sub_6B6A490
    asm("loc_6B6A490: mov -0x10(%ebp),%eax;");
    asm("loc_6B6A493: push %eax;");
    asm("loc_6B6A494: call _sub_6B6A092;");
    asm("loc_6B6A499: pop %ecx;");
    asm("loc_6B6A49A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A49B() // _sub_6B6A49B
{
    __DEBUG_ASM(6B6A49B);
    // chunk 0x6B6A49B _sub_6B6A49B
    asm("loc_6B6A49B: mov -0x10(%ebp),%eax;");
    asm("loc_6B6A49E: push %eax;");
    asm("loc_6B6A49F: call _sub_6B6A092;");
    asm("loc_6B6A4A4: pop %ecx;");
    asm("loc_6B6A4A5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A4A6() // _sub_6B6A4A6
{
    __DEBUG_ASM(6B6A4A6);
    // chunk 0x6B6A4A6 _sub_6B6A4A6
    asm("loc_6B6A4A6: mov -0x10(%ebp),%eax;");
    asm("loc_6B6A4A9: push %eax;");
    asm("loc_6B6A4AA: call _sub_6B6A092;");
    asm("loc_6B6A4AF: pop %ecx;");
    asm("loc_6B6A4B0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A4B1() // _sub_6B6A4B1
{
    __DEBUG_ASM(6B6A4B1);
    // chunk 0x6B6A4B1 _sub_6B6A4B1
    asm("loc_6B6A4B1: mov -0x10(%ebp),%eax;");
    asm("loc_6B6A4B4: push %eax;");
    asm("loc_6B6A4B5: call _sub_6B6A092;");
    asm("loc_6B6A4BA: pop %ecx;");
    asm("loc_6B6A4BB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A4BC() // _sub_6B6A4BC
{
    __DEBUG_ASM(6B6A4BC);
    // chunk 0x6B6A4BC _sub_6B6A4BC
    asm("loc_6B6A4BC: mov -0x10(%ebp),%eax;");
    asm("loc_6B6A4BF: push %eax;");
    asm("loc_6B6A4C0: call _sub_6B6A092;");
    asm("loc_6B6A4C5: pop %ecx;");
    asm("loc_6B6A4C6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A4C7() // _unknown_libname_3
{
    __DEBUG_ASM(6B6A4C7);
    // chunk 0x6B6A4C7 _sub_6B6A4C7
    asm("loc_6B6A4C7: mov -0x10(%ebp),%eax;");
    asm("loc_6B6A4CA: push %eax;");
    asm("loc_6B6A4CB: call _sub_6B6A092;");
    asm("loc_6B6A4D0: pop %ecx;");
    asm("loc_6B6A4D1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A4D2() // _SEH_6B313D0
{
    __DEBUG_ASM(6B6A4D2);
    // chunk 0x6B6A4D2 _sub_6B6A4D2
    asm("loc_6B6A4D2: mov $_data_6B6EB48,%eax;");
    asm("loc_6B6A4D7: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A4E0() // _sub_6B6A4E0
{
    __DEBUG_ASM(6B6A4E0);
    // chunk 0x6B6A4E0 _sub_6B6A4E0
    asm("loc_6B6A4E0: lea -0x478(%ebp),%ecx;");
    asm("loc_6B6A4E6: jmp _sub_6B337C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A4EB() // _sub_6B6A4EB
{
    __DEBUG_ASM(6B6A4EB);
    // chunk 0x6B6A4EB _sub_6B6A4EB
    asm("loc_6B6A4EB: lea -0x478(%ebp),%ecx;");
    asm("loc_6B6A4F1: jmp _sub_6B337E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A4F6() // _SEH_6B32370
{
    __DEBUG_ASM(6B6A4F6);
    // chunk 0x6B6A4F6 _sub_6B6A4F6
    asm("loc_6B6A4F6: mov $_data_6B6EB74,%eax;");
    asm("loc_6B6A4FB: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A500() // _sub_6B6A500
{
    __DEBUG_ASM(6B6A500);
    // chunk 0x6B6A500 _sub_6B6A500
    asm("loc_6B6A500: lea -0x38(%ebp),%ecx;");
    asm("loc_6B6A503: jmpl *_import_6B6B03C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A509() // _sub_6B6A509
{
    __DEBUG_ASM(6B6A509);
    // chunk 0x6B6A509 _sub_6B6A509
    asm("loc_6B6A509: lea -0x40(%ebp),%ecx;");
    asm("loc_6B6A50C: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A511() // _SEH_6B33800
{
    __DEBUG_ASM(6B6A511);
    // chunk 0x6B6A511 _sub_6B6A511
    asm("loc_6B6A511: mov $_data_6B6EBA0,%eax;");
    asm("loc_6B6A516: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A520() // _sub_6B6A520
{
    __DEBUG_ASM(6B6A520);
    // chunk 0x6B6A520 _sub_6B6A520
    asm("loc_6B6A520: lea -0x38(%ebp),%ecx;");
    asm("loc_6B6A523: jmpl *_import_6B6B03C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A529() // _sub_6B6A529
{
    __DEBUG_ASM(6B6A529);
    // chunk 0x6B6A529 _sub_6B6A529
    asm("loc_6B6A529: lea -0x40(%ebp),%ecx;");
    asm("loc_6B6A52C: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A531() // _SEH_6B339E0
{
    __DEBUG_ASM(6B6A531);
    // chunk 0x6B6A531 _sub_6B6A531
    asm("loc_6B6A531: mov $_data_6B6EBCC,%eax;");
    asm("loc_6B6A536: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A540() // _sub_6B6A540
{
    __DEBUG_ASM(6B6A540);
    // chunk 0x6B6A540 _sub_6B6A540
    asm("loc_6B6A540: lea -0x14(%ebp),%ecx;");
    asm("loc_6B6A543: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A548() // _SEH_6B33EF0
{
    __DEBUG_ASM(6B6A548);
    // chunk 0x6B6A548 _sub_6B6A548
    asm("loc_6B6A548: mov $_data_6B6EBF0,%eax;");
    asm("loc_6B6A54D: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A560() // _sub_6B6A560
{
    __DEBUG_ASM(6B6A560);
    // chunk 0x6B6A560 _sub_6B6A560
    asm("loc_6B6A560: lea -0x14(%ebp),%ecx;");
    asm("loc_6B6A563: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A568() // _SEH_6B33F80
{
    __DEBUG_ASM(6B6A568);
    // chunk 0x6B6A568 _sub_6B6A568
    asm("loc_6B6A568: mov $_data_6B6EC14,%eax;");
    asm("loc_6B6A56D: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A580() // _sub_6B6A580
{
    __DEBUG_ASM(6B6A580);
    // chunk 0x6B6A580 _sub_6B6A580
    asm("loc_6B6A580: lea -0x18(%ebp),%ecx;");
    asm("loc_6B6A583: jmp _sub_6B38590;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A588() // _SEH_6B34830
{
    __DEBUG_ASM(6B6A588);
    // chunk 0x6B6A588 _sub_6B6A588
    asm("loc_6B6A588: mov $_data_6B6EC38,%eax;");
    asm("loc_6B6A58D: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A5A0() // _sub_6B6A5A0
{
    __DEBUG_ASM(6B6A5A0);
    // chunk 0x6B6A5A0 _sub_6B6A5A0
    asm("loc_6B6A5A0: lea -0x24(%ebp),%ecx;");
    asm("loc_6B6A5A3: jmpl *_import_6B6B094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A5A9() // _sub_6B6A5A9
{
    __DEBUG_ASM(6B6A5A9);
    // chunk 0x6B6A5A9 _sub_6B6A5A9
    asm("loc_6B6A5A9: lea -0x3C(%ebp),%ecx;");
    asm("loc_6B6A5AC: jmpl *_import_6B6B094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A5B2() // _SEH_6B34C50
{
    __DEBUG_ASM(6B6A5B2);
    // chunk 0x6B6A5B2 _sub_6B6A5B2
    asm("loc_6B6A5B2: mov $_data_6B6EC64,%eax;");
    asm("loc_6B6A5B7: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A5C0() // _sub_6B6A5C0
{
    __DEBUG_ASM(6B6A5C0);
    // chunk 0x6B6A5C0 _sub_6B6A5C0
    asm("loc_6B6A5C0: lea -0x24(%ebp),%ecx;");
    asm("loc_6B6A5C3: jmpl *_import_6B6B094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A5C9() // _sub_6B6A5C9
{
    __DEBUG_ASM(6B6A5C9);
    // chunk 0x6B6A5C9 _sub_6B6A5C9
    asm("loc_6B6A5C9: lea -0x3C(%ebp),%ecx;");
    asm("loc_6B6A5CC: jmpl *_import_6B6B094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A5D2() // _SEH_6B34ED0
{
    __DEBUG_ASM(6B6A5D2);
    // chunk 0x6B6A5D2 _sub_6B6A5D2
    asm("loc_6B6A5D2: mov $_data_6B6EC90,%eax;");
    asm("loc_6B6A5D7: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A5E0() // _sub_6B6A5E0
{
    __DEBUG_ASM(6B6A5E0);
    // chunk 0x6B6A5E0 _sub_6B6A5E0
    asm("loc_6B6A5E0: lea -0x18(%ebp),%ecx;");
    asm("loc_6B6A5E3: jmp _sub_6B385E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A5E8() // _sub_6B6A5E8
{
    __DEBUG_ASM(6B6A5E8);
    // chunk 0x6B6A5E8 _sub_6B6A5E8
    asm("loc_6B6A5E8: mov -0x28(%ebp),%eax;");
    asm("loc_6B6A5EB: push %eax;");
    asm("loc_6B6A5EC: call _sub_6B6A092;");
    asm("loc_6B6A5F1: pop %ecx;");
    asm("loc_6B6A5F2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A5F3() // _sub_6B6A5F3
{
    __DEBUG_ASM(6B6A5F3);
    // chunk 0x6B6A5F3 _sub_6B6A5F3
    asm("loc_6B6A5F3: mov -0x28(%ebp),%ecx;");
    asm("loc_6B6A5F6: add $0x204,%ecx;");
    asm("loc_6B6A5FC: jmpl *_import_6B6B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A602() // _sub_6B6A602
{
    __DEBUG_ASM(6B6A602);
    // chunk 0x6B6A602 _sub_6B6A602
    asm("loc_6B6A602: mov -0x28(%ebp),%ecx;");
    asm("loc_6B6A605: add $0x214,%ecx;");
    asm("loc_6B6A60B: jmpl *_import_6B6B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A611() // _sub_6B6A611
{
    __DEBUG_ASM(6B6A611);
    // chunk 0x6B6A611 _sub_6B6A611
    asm("loc_6B6A611: mov -0x28(%ebp),%ecx;");
    asm("loc_6B6A614: add $0x264,%ecx;");
    asm("loc_6B6A61A: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A61F() // _sub_6B6A61F
{
    __DEBUG_ASM(6B6A61F);
    // chunk 0x6B6A61F _sub_6B6A61F
    asm("loc_6B6A61F: mov 8(%ebp),%ecx;");
    asm("loc_6B6A622: add $0x204,%ecx;");
    asm("loc_6B6A628: jmpl *_import_6B6B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A62E() // _sub_6B6A62E
{
    __DEBUG_ASM(6B6A62E);
    // chunk 0x6B6A62E _sub_6B6A62E
    asm("loc_6B6A62E: mov 8(%ebp),%ecx;");
    asm("loc_6B6A631: add $0x214,%ecx;");
    asm("loc_6B6A637: jmpl *_import_6B6B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A63D() // _sub_6B6A63D
{
    __DEBUG_ASM(6B6A63D);
    // chunk 0x6B6A63D _sub_6B6A63D
    asm("loc_6B6A63D: mov 8(%ebp),%ecx;");
    asm("loc_6B6A640: add $0x264,%ecx;");
    asm("loc_6B6A646: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A64B() // _SEH_6B35350
{
    __DEBUG_ASM(6B6A64B);
    // chunk 0x6B6A64B _sub_6B6A64B
    asm("loc_6B6A64B: mov $_data_6B6ECEC,%eax;");
    asm("loc_6B6A650: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A660() // _sub_6B6A660
{
    __DEBUG_ASM(6B6A660);
    // chunk 0x6B6A660 _sub_6B6A660
    asm("loc_6B6A660: lea -0x18(%ebp),%ecx;");
    asm("loc_6B6A663: jmp _sub_6B38590;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A668() // _SEH_6B36080
{
    __DEBUG_ASM(6B6A668);
    // chunk 0x6B6A668 _sub_6B6A668
    asm("loc_6B6A668: mov $_data_6B6ED10,%eax;");
    asm("loc_6B6A66D: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A680() // _sub_6B6A680
{
    __DEBUG_ASM(6B6A680);
    // chunk 0x6B6A680 _sub_6B6A680
    asm("loc_6B6A680: lea 0x10(%ebp),%ecx;");
    asm("loc_6B6A683: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A688() // _SEH_6B37B00
{
    __DEBUG_ASM(6B6A688);
    // chunk 0x6B6A688 _sub_6B6A688
    asm("loc_6B6A688: mov $_data_6B6ED34,%eax;");
    asm("loc_6B6A68D: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A6A0() // _unknown_libname_4
{
    __DEBUG_ASM(6B6A6A0);
    // chunk 0x6B6A6A0 _sub_6B6A6A0
    asm("loc_6B6A6A0: mov -0x10(%ebp),%eax;");
    asm("loc_6B6A6A3: push %eax;");
    asm("loc_6B6A6A4: call _sub_6B6A092;");
    asm("loc_6B6A6A9: pop %ecx;");
    asm("loc_6B6A6AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A6AB() // _SEH_6B39750
{
    __DEBUG_ASM(6B6A6AB);
    // chunk 0x6B6A6AB _sub_6B6A6AB
    asm("loc_6B6A6AB: mov $_data_6B6ED58,%eax;");
    asm("loc_6B6A6B0: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A6C0() // _unknown_libname_5
{
    __DEBUG_ASM(6B6A6C0);
    // chunk 0x6B6A6C0 _sub_6B6A6C0
    asm("loc_6B6A6C0: mov -0x10(%ebp),%eax;");
    asm("loc_6B6A6C3: push %eax;");
    asm("loc_6B6A6C4: call _sub_6B6A092;");
    asm("loc_6B6A6C9: pop %ecx;");
    asm("loc_6B6A6CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A6CB() // _SEH_6B39880
{
    __DEBUG_ASM(6B6A6CB);
    // chunk 0x6B6A6CB _sub_6B6A6CB
    asm("loc_6B6A6CB: mov $_data_6B6ED7C,%eax;");
    asm("loc_6B6A6D0: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A6E0() // _unknown_libname_6
{
    __DEBUG_ASM(6B6A6E0);
    // chunk 0x6B6A6E0 _sub_6B6A6E0
    asm("loc_6B6A6E0: mov -0x14(%ebp),%eax;");
    asm("loc_6B6A6E3: push %eax;");
    asm("loc_6B6A6E4: call _sub_6B6A092;");
    asm("loc_6B6A6E9: pop %ecx;");
    asm("loc_6B6A6EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A6EB() // _SEH_6B3A510
{
    __DEBUG_ASM(6B6A6EB);
    // chunk 0x6B6A6EB _sub_6B6A6EB
    asm("loc_6B6A6EB: mov $_data_6B6EDA0,%eax;");
    asm("loc_6B6A6F0: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A700() // _unknown_libname_7
{
    __DEBUG_ASM(6B6A700);
    // chunk 0x6B6A700 _sub_6B6A700
    asm("loc_6B6A700: mov -0x14(%ebp),%eax;");
    asm("loc_6B6A703: push %eax;");
    asm("loc_6B6A704: call _sub_6B6A092;");
    asm("loc_6B6A709: pop %ecx;");
    asm("loc_6B6A70A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A70B() // _SEH_6B3A6A0
{
    __DEBUG_ASM(6B6A70B);
    // chunk 0x6B6A70B _sub_6B6A70B
    asm("loc_6B6A70B: mov $_data_6B6EDC4,%eax;");
    asm("loc_6B6A710: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A720() // _unknown_libname_8
{
    __DEBUG_ASM(6B6A720);
    // chunk 0x6B6A720 _sub_6B6A720
    asm("loc_6B6A720: mov -0x10(%ebp),%eax;");
    asm("loc_6B6A723: push %eax;");
    asm("loc_6B6A724: call _sub_6B6A092;");
    asm("loc_6B6A729: pop %ecx;");
    asm("loc_6B6A72A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A72B() // _SEH_6B3A820
{
    __DEBUG_ASM(6B6A72B);
    // chunk 0x6B6A72B _sub_6B6A72B
    asm("loc_6B6A72B: mov $_data_6B6EDE8,%eax;");
    asm("loc_6B6A730: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A740() // _sub_6B6A740
{
    __DEBUG_ASM(6B6A740);
    // chunk 0x6B6A740 _sub_6B6A740
    asm("loc_6B6A740: mov -0x10(%ebp),%eax;");
    asm("loc_6B6A743: push %eax;");
    asm("loc_6B6A744: call _sub_6B6A092;");
    asm("loc_6B6A749: pop %ecx;");
    asm("loc_6B6A74A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A74B() // _unknown_libname_9
{
    __DEBUG_ASM(6B6A74B);
    // chunk 0x6B6A74B _sub_6B6A74B
    asm("loc_6B6A74B: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6A74E: jmp _sub_6B39E50;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A753() // _sub_6B6A753
{
    __DEBUG_ASM(6B6A753);
    // chunk 0x6B6A753 _sub_6B6A753
    asm("loc_6B6A753: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6A756: add $8,%ecx;");
    asm("loc_6B6A759: jmp _sub_6B3B810;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A75E() // _SEH_6B3AFD0
{
    __DEBUG_ASM(6B6A75E);
    // chunk 0x6B6A75E _sub_6B6A75E
    asm("loc_6B6A75E: mov $_data_6B6EE1C,%eax;");
    asm("loc_6B6A763: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A770() // _sub_6B6A770
{
    __DEBUG_ASM(6B6A770);
    // chunk 0x6B6A770 _sub_6B6A770
    asm("loc_6B6A770: mov -0x1C(%ebp),%ecx;");
    asm("loc_6B6A773: jmp _sub_6B39E50;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A778() // _sub_6B6A778
{
    __DEBUG_ASM(6B6A778);
    // chunk 0x6B6A778 _sub_6B6A778
    asm("loc_6B6A778: mov -0x1C(%ebp),%ecx;");
    asm("loc_6B6A77B: add $8,%ecx;");
    asm("loc_6B6A77E: jmp _sub_6B3B810;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A783() // _SEH_6B3B0B0
{
    __DEBUG_ASM(6B6A783);
    // chunk 0x6B6A783 _sub_6B6A783
    asm("loc_6B6A783: mov $_data_6B6EE48,%eax;");
    asm("loc_6B6A788: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A790() // _sub_6B6A790
{
    __DEBUG_ASM(6B6A790);
    // chunk 0x6B6A790 _sub_6B6A790
    asm("loc_6B6A790: mov -0x14(%ebp),%ecx;");
    asm("loc_6B6A793: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A798() // _sub_6B6A798
{
    __DEBUG_ASM(6B6A798);
    // chunk 0x6B6A798 _sub_6B6A798
    asm("loc_6B6A798: mov -0x14(%ebp),%ecx;");
    asm("loc_6B6A79B: add $0x20,%ecx;");
    asm("loc_6B6A79E: jmp _sub_6B3EDE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A7A3() // _sub_6B6A7A3
{
    __DEBUG_ASM(6B6A7A3);
    // chunk 0x6B6A7A3 _sub_6B6A7A3
    asm("loc_6B6A7A3: mov -0x14(%ebp),%ecx;");
    asm("loc_6B6A7A6: add $0x28,%ecx;");
    asm("loc_6B6A7A9: jmp _sub_6B3EDE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A7AE() // _SEH_6B3ED00
{
    __DEBUG_ASM(6B6A7AE);
    // chunk 0x6B6A7AE _sub_6B6A7AE
    asm("loc_6B6A7AE: mov $_data_6B6EE7C,%eax;");
    asm("loc_6B6A7B3: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A7C0() // _sub_6B6A7C0
{
    __DEBUG_ASM(6B6A7C0);
    // chunk 0x6B6A7C0 _sub_6B6A7C0
    asm("loc_6B6A7C0: mov -0x18(%ebp),%ecx;");
    asm("loc_6B6A7C3: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A7C8() // _sub_6B6A7C8
{
    __DEBUG_ASM(6B6A7C8);
    // chunk 0x6B6A7C8 _sub_6B6A7C8
    asm("loc_6B6A7C8: mov -0x18(%ebp),%ecx;");
    asm("loc_6B6A7CB: add $0x30,%ecx;");
    asm("loc_6B6A7CE: jmp _sub_6B40300;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A7D3() // _sub_6B6A7D3
{
    __DEBUG_ASM(6B6A7D3);
    // chunk 0x6B6A7D3 _sub_6B6A7D3
    asm("loc_6B6A7D3: mov -0x18(%ebp),%ecx;");
    asm("loc_6B6A7D6: add $0x70,%ecx;");
    asm("loc_6B6A7D9: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A7DE() // _sub_6B6A7DE
{
    __DEBUG_ASM(6B6A7DE);
    // chunk 0x6B6A7DE _sub_6B6A7DE
    asm("loc_6B6A7DE: mov -0x18(%ebp),%ecx;");
    asm("loc_6B6A7E1: add $0x74,%ecx;");
    asm("loc_6B6A7E4: jmpl *_import_6B6B008;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A7EA() // _SEH_6B3F820
{
    __DEBUG_ASM(6B6A7EA);
    // chunk 0x6B6A7EA _sub_6B6A7EA
    asm("loc_6B6A7EA: mov $_data_6B6EEB8,%eax;");
    asm("loc_6B6A7EF: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A800() // _sub_6B6A800
{
    __DEBUG_ASM(6B6A800);
    // chunk 0x6B6A800 _sub_6B6A800
    asm("loc_6B6A800: mov -0x1C(%ebp),%ecx;");
    asm("loc_6B6A803: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A808() // _sub_6B6A808
{
    __DEBUG_ASM(6B6A808);
    // chunk 0x6B6A808 _sub_6B6A808
    asm("loc_6B6A808: mov -0x1C(%ebp),%ecx;");
    asm("loc_6B6A80B: add $0x24,%ecx;");
    asm("loc_6B6A80E: jmp _sub_6B385E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A813() // _sub_6B6A813
{
    __DEBUG_ASM(6B6A813);
    // chunk 0x6B6A813 _sub_6B6A813
    asm("loc_6B6A813: mov -0x18(%ebp),%ecx;");
    asm("loc_6B6A816: add $0x204,%ecx;");
    asm("loc_6B6A81C: jmpl *_import_6B6B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A822() // _sub_6B6A822
{
    __DEBUG_ASM(6B6A822);
    // chunk 0x6B6A822 _sub_6B6A822
    asm("loc_6B6A822: mov -0x18(%ebp),%ecx;");
    asm("loc_6B6A825: add $0x214,%ecx;");
    asm("loc_6B6A82B: jmpl *_import_6B6B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A831() // _sub_6B6A831
{
    __DEBUG_ASM(6B6A831);
    // chunk 0x6B6A831 _sub_6B6A831
    asm("loc_6B6A831: mov -0x18(%ebp),%ecx;");
    asm("loc_6B6A834: add $0x264,%ecx;");
    asm("loc_6B6A83A: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A83F() // _sub_6B6A83F
{
    __DEBUG_ASM(6B6A83F);
    // chunk 0x6B6A83F _sub_6B6A83F
    asm("loc_6B6A83F: mov -0x18(%ebp),%ecx;");
    asm("loc_6B6A842: add $0x268,%ecx;");
    asm("loc_6B6A848: jmpl *_import_6B6B008;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A84E() // _SEH_6B40380
{
    __DEBUG_ASM(6B6A84E);
    // chunk 0x6B6A84E _sub_6B6A84E
    asm("loc_6B6A84E: mov $_data_6B6EF04,%eax;");
    asm("loc_6B6A853: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A860() // _sub_6B6A860
{
    __DEBUG_ASM(6B6A860);
    // chunk 0x6B6A860 _sub_6B6A860
    asm("loc_6B6A860: mov -0x14(%ebp),%eax;");
    asm("loc_6B6A863: push %eax;");
    asm("loc_6B6A864: call _sub_6B6A092;");
    asm("loc_6B6A869: pop %ecx;");
    asm("loc_6B6A86A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A86B() // _sub_6B6A86B
{
    __DEBUG_ASM(6B6A86B);
    // chunk 0x6B6A86B _sub_6B6A86B
    asm("loc_6B6A86B: mov -0x14(%ebp),%ecx;");
    asm("loc_6B6A86E: add $0x204,%ecx;");
    asm("loc_6B6A874: jmpl *_import_6B6B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A87A() // _sub_6B6A87A
{
    __DEBUG_ASM(6B6A87A);
    // chunk 0x6B6A87A _sub_6B6A87A
    asm("loc_6B6A87A: mov -0x14(%ebp),%ecx;");
    asm("loc_6B6A87D: add $0x214,%ecx;");
    asm("loc_6B6A883: jmpl *_import_6B6B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A889() // _sub_6B6A889
{
    __DEBUG_ASM(6B6A889);
    // chunk 0x6B6A889 _sub_6B6A889
    asm("loc_6B6A889: mov -0x14(%ebp),%ecx;");
    asm("loc_6B6A88C: add $0x264,%ecx;");
    asm("loc_6B6A892: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A897() // _SEH_6B40500
{
    __DEBUG_ASM(6B6A897);
    // chunk 0x6B6A897 _sub_6B6A897
    asm("loc_6B6A897: mov $_data_6B6EF40,%eax;");
    asm("loc_6B6A89C: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A8B0() // _sub_6B6A8B0
{
    __DEBUG_ASM(6B6A8B0);
    // chunk 0x6B6A8B0 _sub_6B6A8B0
    asm("loc_6B6A8B0: mov -0x1C(%ebp),%eax;");
    asm("loc_6B6A8B3: push %eax;");
    asm("loc_6B6A8B4: call _sub_6B6A092;");
    asm("loc_6B6A8B9: pop %ecx;");
    asm("loc_6B6A8BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A8BB() // _sub_6B6A8BB
{
    __DEBUG_ASM(6B6A8BB);
    // chunk 0x6B6A8BB _sub_6B6A8BB
    asm("loc_6B6A8BB: mov -0x1C(%ebp),%ecx;");
    asm("loc_6B6A8BE: add $0x204,%ecx;");
    asm("loc_6B6A8C4: jmpl *_import_6B6B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A8CA() // _sub_6B6A8CA
{
    __DEBUG_ASM(6B6A8CA);
    // chunk 0x6B6A8CA _sub_6B6A8CA
    asm("loc_6B6A8CA: mov -0x1C(%ebp),%ecx;");
    asm("loc_6B6A8CD: add $0x214,%ecx;");
    asm("loc_6B6A8D3: jmpl *_import_6B6B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A8D9() // _sub_6B6A8D9
{
    __DEBUG_ASM(6B6A8D9);
    // chunk 0x6B6A8D9 _sub_6B6A8D9
    asm("loc_6B6A8D9: mov -0x1C(%ebp),%ecx;");
    asm("loc_6B6A8DC: add $0x264,%ecx;");
    asm("loc_6B6A8E2: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A8E7() // _SEH_6B41530
{
    __DEBUG_ASM(6B6A8E7);
    // chunk 0x6B6A8E7 _sub_6B6A8E7
    asm("loc_6B6A8E7: mov $_data_6B6EF7C,%eax;");
    asm("loc_6B6A8EC: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A900() // _sub_6B6A900
{
    __DEBUG_ASM(6B6A900);
    // chunk 0x6B6A900 _sub_6B6A900
    asm("loc_6B6A900: mov -0x1C(%ebp),%eax;");
    asm("loc_6B6A903: push %eax;");
    asm("loc_6B6A904: call _sub_6B6A092;");
    asm("loc_6B6A909: pop %ecx;");
    asm("loc_6B6A90A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A90B() // _sub_6B6A90B
{
    __DEBUG_ASM(6B6A90B);
    // chunk 0x6B6A90B _sub_6B6A90B
    asm("loc_6B6A90B: mov -0x1C(%ebp),%ecx;");
    asm("loc_6B6A90E: add $0x204,%ecx;");
    asm("loc_6B6A914: jmpl *_import_6B6B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A91A() // _sub_6B6A91A
{
    __DEBUG_ASM(6B6A91A);
    // chunk 0x6B6A91A _sub_6B6A91A
    asm("loc_6B6A91A: mov -0x1C(%ebp),%ecx;");
    asm("loc_6B6A91D: add $0x214,%ecx;");
    asm("loc_6B6A923: jmpl *_import_6B6B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A929() // _sub_6B6A929
{
    __DEBUG_ASM(6B6A929);
    // chunk 0x6B6A929 _sub_6B6A929
    asm("loc_6B6A929: mov -0x1C(%ebp),%ecx;");
    asm("loc_6B6A92C: add $0x264,%ecx;");
    asm("loc_6B6A932: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A937() // _SEH_6B42690
{
    __DEBUG_ASM(6B6A937);
    // chunk 0x6B6A937 _sub_6B6A937
    asm("loc_6B6A937: mov $_data_6B6EFB8,%eax;");
    asm("loc_6B6A93C: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A950() // _sub_6B6A950
{
    __DEBUG_ASM(6B6A950);
    // chunk 0x6B6A950 _sub_6B6A950
    asm("loc_6B6A950: mov -0x14(%ebp),%ecx;");
    asm("loc_6B6A953: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A958() // _sub_6B6A958
{
    __DEBUG_ASM(6B6A958);
    // chunk 0x6B6A958 _sub_6B6A958
    asm("loc_6B6A958: mov -0x14(%ebp),%ecx;");
    asm("loc_6B6A95B: add $0x28,%ecx;");
    asm("loc_6B6A95E: jmp _sub_6B3EDE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A963() // _sub_6B6A963
{
    __DEBUG_ASM(6B6A963);
    // chunk 0x6B6A963 _sub_6B6A963
    asm("loc_6B6A963: mov -0x14(%ebp),%ecx;");
    asm("loc_6B6A966: add $0x30,%ecx;");
    asm("loc_6B6A969: jmp _sub_6B3EDE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A96E() // _SEH_6B44D20
{
    __DEBUG_ASM(6B6A96E);
    // chunk 0x6B6A96E _sub_6B6A96E
    asm("loc_6B6A96E: mov $_data_6B6EFEC,%eax;");
    asm("loc_6B6A973: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A980() // _sub_6B6A980
{
    __DEBUG_ASM(6B6A980);
    // chunk 0x6B6A980 _sub_6B6A980
    asm("loc_6B6A980: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6A983: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A988() // _SEH_6B49360
{
    __DEBUG_ASM(6B6A988);
    // chunk 0x6B6A988 _sub_6B6A988
    asm("loc_6B6A988: mov $_data_6B6F010,%eax;");
    asm("loc_6B6A98D: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A9A0() // _sub_6B6A9A0
{
    __DEBUG_ASM(6B6A9A0);
    // chunk 0x6B6A9A0 _sub_6B6A9A0
    asm("loc_6B6A9A0: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6A9A3: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A9A8() // _SEH_6B49F60
{
    __DEBUG_ASM(6B6A9A8);
    // chunk 0x6B6A9A8 _sub_6B6A9A8
    asm("loc_6B6A9A8: mov $_data_6B6F034,%eax;");
    asm("loc_6B6A9AD: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A9C0() // _sub_6B6A9C0
{
    __DEBUG_ASM(6B6A9C0);
    // chunk 0x6B6A9C0 _sub_6B6A9C0
    asm("loc_6B6A9C0: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6A9C3: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A9C8() // _SEH_6B4A390
{
    __DEBUG_ASM(6B6A9C8);
    // chunk 0x6B6A9C8 _sub_6B6A9C8
    asm("loc_6B6A9C8: mov $_data_6B6F058,%eax;");
    asm("loc_6B6A9CD: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A9E0() // _sub_6B6A9E0
{
    __DEBUG_ASM(6B6A9E0);
    // chunk 0x6B6A9E0 _sub_6B6A9E0
    asm("loc_6B6A9E0: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6A9E3: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A9E8() // _sub_6B6A9E8
{
    __DEBUG_ASM(6B6A9E8);
    // chunk 0x6B6A9E8 _sub_6B6A9E8
    asm("loc_6B6A9E8: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6A9EB: add $0x30,%ecx;");
    asm("loc_6B6A9EE: jmp _sub_6B40300;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A9F3() // _sub_6B6A9F3
{
    __DEBUG_ASM(6B6A9F3);
    // chunk 0x6B6A9F3 _sub_6B6A9F3
    asm("loc_6B6A9F3: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6A9F6: add $0x70,%ecx;");
    asm("loc_6B6A9F9: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6A9FE() // _sub_6B6A9FE
{
    __DEBUG_ASM(6B6A9FE);
    // chunk 0x6B6A9FE _sub_6B6A9FE
    asm("loc_6B6A9FE: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AA01: add $0x74,%ecx;");
    asm("loc_6B6AA04: jmpl *_import_6B6B008;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AA0A() // _SEH_6B4A840
{
    __DEBUG_ASM(6B6AA0A);
    // chunk 0x6B6AA0A _sub_6B6AA0A
    asm("loc_6B6AA0A: mov $_data_6B6F094,%eax;");
    asm("loc_6B6AA0F: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AA20() // _sub_6B6AA20
{
    __DEBUG_ASM(6B6AA20);
    // chunk 0x6B6AA20 _sub_6B6AA20
    asm("loc_6B6AA20: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AA23: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AA28() // _SEH_6B4ADE0
{
    __DEBUG_ASM(6B6AA28);
    // chunk 0x6B6AA28 _sub_6B6AA28
    asm("loc_6B6AA28: mov $_data_6B6F0B8,%eax;");
    asm("loc_6B6AA2D: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AA40() // _sub_6B6AA40
{
    __DEBUG_ASM(6B6AA40);
    // chunk 0x6B6AA40 _sub_6B6AA40
    asm("loc_6B6AA40: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AA43: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AA48() // _sub_6B6AA48
{
    __DEBUG_ASM(6B6AA48);
    // chunk 0x6B6AA48 _sub_6B6AA48
    asm("loc_6B6AA48: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AA4B: add $0x20,%ecx;");
    asm("loc_6B6AA4E: jmp _sub_6B3EDE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AA53() // _sub_6B6AA53
{
    __DEBUG_ASM(6B6AA53);
    // chunk 0x6B6AA53 _sub_6B6AA53
    asm("loc_6B6AA53: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AA56: add $0x28,%ecx;");
    asm("loc_6B6AA59: jmp _sub_6B3EDE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AA5E() // _SEH_6B4AF30
{
    __DEBUG_ASM(6B6AA5E);
    // chunk 0x6B6AA5E _sub_6B6AA5E
    asm("loc_6B6AA5E: mov $_data_6B6F0EC,%eax;");
    asm("loc_6B6AA63: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AA70() // _sub_6B6AA70
{
    __DEBUG_ASM(6B6AA70);
    // chunk 0x6B6AA70 _sub_6B6AA70
    asm("loc_6B6AA70: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AA73: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AA78() // _SEH_6B4B220
{
    __DEBUG_ASM(6B6AA78);
    // chunk 0x6B6AA78 _sub_6B6AA78
    asm("loc_6B6AA78: mov $_data_6B6F110,%eax;");
    asm("loc_6B6AA7D: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AA90() // _sub_6B6AA90
{
    __DEBUG_ASM(6B6AA90);
    // chunk 0x6B6AA90 _sub_6B6AA90
    asm("loc_6B6AA90: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AA93: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AA98() // _sub_6B6AA98
{
    __DEBUG_ASM(6B6AA98);
    // chunk 0x6B6AA98 _sub_6B6AA98
    asm("loc_6B6AA98: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AA9B: add $0x28,%ecx;");
    asm("loc_6B6AA9E: jmp _sub_6B3EDE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AAA3() // _sub_6B6AAA3
{
    __DEBUG_ASM(6B6AAA3);
    // chunk 0x6B6AAA3 _sub_6B6AAA3
    asm("loc_6B6AAA3: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AAA6: add $0x30,%ecx;");
    asm("loc_6B6AAA9: jmp _sub_6B3EDE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AAAE() // _SEH_6B4B8C0
{
    __DEBUG_ASM(6B6AAAE);
    // chunk 0x6B6AAAE _sub_6B6AAAE
    asm("loc_6B6AAAE: mov $_data_6B6F144,%eax;");
    asm("loc_6B6AAB3: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AAC0() // _sub_6B6AAC0
{
    __DEBUG_ASM(6B6AAC0);
    // chunk 0x6B6AAC0 _sub_6B6AAC0
    asm("loc_6B6AAC0: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AAC3: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AAC8() // _sub_6B6AAC8
{
    __DEBUG_ASM(6B6AAC8);
    // chunk 0x6B6AAC8 _sub_6B6AAC8
    asm("loc_6B6AAC8: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AACB: add $0x30,%ecx;");
    asm("loc_6B6AACE: jmp _sub_6B40300;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AAD3() // _sub_6B6AAD3
{
    __DEBUG_ASM(6B6AAD3);
    // chunk 0x6B6AAD3 _sub_6B6AAD3
    asm("loc_6B6AAD3: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AAD6: add $0x70,%ecx;");
    asm("loc_6B6AAD9: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AADE() // _sub_6B6AADE
{
    __DEBUG_ASM(6B6AADE);
    // chunk 0x6B6AADE _sub_6B6AADE
    asm("loc_6B6AADE: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AAE1: add $0x74,%ecx;");
    asm("loc_6B6AAE4: jmpl *_import_6B6B008;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AAEA() // _SEH_6B4C810
{
    __DEBUG_ASM(6B6AAEA);
    // chunk 0x6B6AAEA _sub_6B6AAEA
    asm("loc_6B6AAEA: mov $_data_6B6F180,%eax;");
    asm("loc_6B6AAEF: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AB00() // _sub_6B6AB00
{
    __DEBUG_ASM(6B6AB00);
    // chunk 0x6B6AB00 _sub_6B6AB00
    asm("loc_6B6AB00: mov -0x18(%ebp),%ecx;");
    asm("loc_6B6AB03: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AB08() // _sub_6B6AB08
{
    __DEBUG_ASM(6B6AB08);
    // chunk 0x6B6AB08 _sub_6B6AB08
    asm("loc_6B6AB08: mov -0x18(%ebp),%ecx;");
    asm("loc_6B6AB0B: add $0x30,%ecx;");
    asm("loc_6B6AB0E: jmp _sub_6B40300;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AB13() // _sub_6B6AB13
{
    __DEBUG_ASM(6B6AB13);
    // chunk 0x6B6AB13 _sub_6B6AB13
    asm("loc_6B6AB13: mov -0x18(%ebp),%ecx;");
    asm("loc_6B6AB16: add $0x70,%ecx;");
    asm("loc_6B6AB19: jmp _sub_6B3A450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AB1E() // _sub_6B6AB1E
{
    __DEBUG_ASM(6B6AB1E);
    // chunk 0x6B6AB1E _sub_6B6AB1E
    asm("loc_6B6AB1E: mov -0x18(%ebp),%ecx;");
    asm("loc_6B6AB21: add $0x74,%ecx;");
    asm("loc_6B6AB24: jmpl *_import_6B6B008;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AB2A() // _SEH_6B4C920
{
    __DEBUG_ASM(6B6AB2A);
    // chunk 0x6B6AB2A _sub_6B6AB2A
    asm("loc_6B6AB2A: mov $_data_6B6F1BC,%eax;");
    asm("loc_6B6AB2F: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AB40() // _sub_6B6AB40
{
    __DEBUG_ASM(6B6AB40);
    // chunk 0x6B6AB40 _sub_6B6AB40
    asm("loc_6B6AB40: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AB43: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AB48() // _SEH_6B4CA90
{
    __DEBUG_ASM(6B6AB48);
    // chunk 0x6B6AB48 _sub_6B6AB48
    asm("loc_6B6AB48: mov $_data_6B6F1E0,%eax;");
    asm("loc_6B6AB4D: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AB60() // _sub_6B6AB60
{
    __DEBUG_ASM(6B6AB60);
    // chunk 0x6B6AB60 _sub_6B6AB60
    asm("loc_6B6AB60: lea -0x1C(%ebp),%ecx;");
    asm("loc_6B6AB63: jmpl *_import_6B6B18C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AB69() // _SEH_6B4EBF0
{
    __DEBUG_ASM(6B6AB69);
    // chunk 0x6B6AB69 _sub_6B6AB69
    asm("loc_6B6AB69: mov $_data_6B6F204,%eax;");
    asm("loc_6B6AB6E: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AB80() // _sub_6B6AB80
{
    __DEBUG_ASM(6B6AB80);
    // chunk 0x6B6AB80 _sub_6B6AB80
    asm("loc_6B6AB80: lea -0x74(%ebp),%ecx;");
    asm("loc_6B6AB83: jmp _sub_6B4EE00;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AB88() // _sub_6B6AB88
{
    __DEBUG_ASM(6B6AB88);
    // chunk 0x6B6AB88 _sub_6B6AB88
    asm("loc_6B6AB88: lea -0x44(%ebp),%ecx;");
    asm("loc_6B6AB8B: jmp _sub_6B4EE10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AB90() // _SEH_6B4ED50
{
    __DEBUG_ASM(6B6AB90);
    // chunk 0x6B6AB90 _sub_6B6AB90
    asm("loc_6B6AB90: mov $_data_6B6F230,%eax;");
    asm("loc_6B6AB95: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6ABA0() // _sub_6B6ABA0
{
    __DEBUG_ASM(6B6ABA0);
    // chunk 0x6B6ABA0 _sub_6B6ABA0
    asm("loc_6B6ABA0: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6ABA3: jmp _sub_6B4E730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6ABA8() // ??1_Locimp@locale@std@@UAE@XZ_SEH
{
    __DEBUG_ASM(6B6ABA8);
    // chunk 0x6B6ABA8 _sub_6B6ABA8
    asm("loc_6B6ABA8: mov $_data_6B6F254,%eax;");
    asm("loc_6B6ABAD: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6ABC0() // _sub_6B6ABC0
{
    __DEBUG_ASM(6B6ABC0);
    // chunk 0x6B6ABC0 _sub_6B6ABC0
    asm("loc_6B6ABC0: lea -0x30(%ebp),%ecx;");
    asm("loc_6B6ABC3: jmpl *_import_6B6B18C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6ABC9() // _sub_6B6ABC9
{
    __DEBUG_ASM(6B6ABC9);
    // chunk 0x6B6ABC9 _sub_6B6ABC9
    asm("loc_6B6ABC9: lea -0x20(%ebp),%ecx;");
    asm("loc_6B6ABCC: jmp _sub_6B501D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6ABD1() // _SEH_6B4FEE0
{
    __DEBUG_ASM(6B6ABD1);
    // chunk 0x6B6ABD1 _sub_6B6ABD1
    asm("loc_6B6ABD1: mov $_data_6B6F280,%eax;");
    asm("loc_6B6ABD6: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6ABE0() // _sub_6B6ABE0
{
    __DEBUG_ASM(6B6ABE0);
    // chunk 0x6B6ABE0 _sub_6B6ABE0
    asm("loc_6B6ABE0: lea -0x1C(%ebp),%ecx;");
    asm("loc_6B6ABE3: jmpl *_import_6B6B18C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6ABE9() // _SEH_6B50040
{
    __DEBUG_ASM(6B6ABE9);
    // chunk 0x6B6ABE9 _sub_6B6ABE9
    asm("loc_6B6ABE9: mov $_data_6B6F2A4,%eax;");
    asm("loc_6B6ABEE: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AC00() // _sub_6B6AC00
{
    __DEBUG_ASM(6B6AC00);
    // chunk 0x6B6AC00 _sub_6B6AC00
    asm("loc_6B6AC00: mov 4(%ebp),%eax;");
    asm("loc_6B6AC03: push %eax;");
    asm("loc_6B6AC04: mov -0x10(%ebp),%ecx;");
    asm("loc_6B6AC07: push %ecx;");
    asm("loc_6B6AC08: call _sub_6B50E20;");
    asm("loc_6B6AC0D: add $8,%esp;");
    asm("loc_6B6AC10: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6B6AC11() // _SEH_6B50CC0
{
    __DEBUG_ASM(6B6AC11);
    // chunk 0x6B6AC11 _sub_6B6AC11
    asm("loc_6B6AC11: mov $_data_6B6F2C8,%eax;");
    asm("loc_6B6AC16: jmp _sub_6B6A13A;");
    asm("int3;"); // unreachable
}
#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __INTELLISENSE__
