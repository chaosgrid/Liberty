#ifndef __INTELLISENSE__
// clang-format off
#include "..\..\PCH.h"
#pragma init_seg(lib)
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

_naked _weak void _sub_6801000() // _sub_6801000
{
    __DEBUG_ASM(6801000);
    // chunk 0x6801000 _sub_6801000
    asm("loc_6801000: push %esi;");
    asm("loc_6801001: mov %ecx,%esi;");
    asm("loc_6801003: movl $0,0x10(%esi);");
    asm("loc_680100A: movl $0xFFFFFFFF,0x14(%esi);");
    asm("loc_6801011: push %edi;");
    asm("loc_6801012: push $0;");
    asm("loc_6801014: movl $_off_680C0F0,(%esi);");
    asm("loc_680101A: movl $_off_680C0CC,4(%esi);");
    asm("loc_6801021: movl $_off_680C0BC,8(%esi);");
    asm("loc_6801028: call _sub_68026D0;");
    asm("loc_680102D: mov %eax,%edi;");
    asm("loc_680102F: call _sub_6803340;");
    asm("loc_6801034: mov _off_680D010,%eax;");
    asm("loc_6801039: push %eax;");
    asm("loc_680103A: call _sub_68032D0;");
    asm("loc_680103F: mov _off_680D014,%ecx;");
    asm("loc_6801045: push %ecx;");
    asm("loc_6801046: call _sub_68032D0;");
    asm("loc_680104B: push $0;");
    asm("loc_680104D: push $_sub_6801120;");
    asm("loc_6801052: call _sub_68022E0;");
    asm("loc_6801057: call _sub_6801E80;");
    asm("loc_680105C: push %edi;");
    asm("loc_680105D: call _sub_68026D0;");
    asm("loc_6801062: add $0x18,%esp;");
    asm("loc_6801065: mov %eax,0xC(%esi);");
    asm("loc_6801068: pop %edi;");
    asm("loc_6801069: mov %esi,%eax;");
    asm("loc_680106B: pop %esi;");
    asm("loc_680106C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801070() // _sub_6801070
{
    __DEBUG_ASM(6801070);
    // chunk 0x6801070 _sub_6801070
    asm("loc_6801070: xor %eax,%eax;");
    asm("loc_6801072: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801080() // _sub_6801080
{
    __DEBUG_ASM(6801080);
    // chunk 0x6801080 _sub_6801080
    asm("loc_6801080: push %ecx;");
    asm("loc_6801081: push %ebx;");
    asm("loc_6801082: push %esi;");
    asm("loc_6801083: push %edi;");
    asm("loc_6801084: mov %ecx,%edi;");
    asm("loc_6801086: mov 0xC(%edi),%eax;");
    asm("loc_6801089: push %eax;");
    asm("loc_680108A: movl $_off_680C0F0,(%edi);");
    asm("loc_6801090: movl $_off_680C0CC,4(%edi);");
    asm("loc_6801097: movl $_off_680C0BC,8(%edi);");
    asm("loc_680109E: call _sub_68026D0;");
    asm("loc_68010A3: mov 0x10(%edi),%esi;");
    asm("loc_68010A6: add $4,%esp;");
    asm("loc_68010A9: test %esi,%esi;");
    asm("loc_68010AB: mov %eax,%ebx;");
    asm("loc_68010AD: mov %ebx,0xC(%esp);");
    asm("loc_68010B1: je loc_68010EB;");
    asm("loc_68010B3: push %ebp;");
    asm("loc_68010B4: mov _import_680C018,%ebp;");
    asm("loc_68010BA: lea (%ebx),%ebx;");
    asm("loc_68010C0: mov 4(%esi),%eax;");
    asm("loc_68010C3: cmp $0xFFFFFFFF,%eax;");
    asm("loc_68010C6: mov (%esi),%ebx;");
    asm("loc_68010C8: je loc_68010D3;");
    asm("loc_68010CA: push %eax;");
    asm("loc_68010CB: call _sub_68035F0;");
    asm("loc_68010D0: add $4,%esp;");
    asm("loc_68010D3: push %esi;");
    asm("loc_68010D4: movl $0xFFFFFFFF,4(%esi);");
    asm("loc_68010DB: call *%ebp;");
    asm("loc_68010DD: add $4,%esp;");
    asm("loc_68010E0: test %ebx,%ebx;");
    asm("loc_68010E2: mov %ebx,%esi;");
    asm("loc_68010E4: jne loc_68010C0;");
    asm("loc_68010E6: mov 0x10(%esp),%ebx;");
    asm("loc_68010EA: pop %ebp;");
    asm("loc_68010EB: call _sub_6803460;");
    asm("loc_68010F0: cmp 0xC(%edi),%ebx;");
    asm("loc_68010F3: je loc_68010FE;");
    asm("loc_68010F5: push %ebx;");
    asm("loc_68010F6: call _sub_68026D0;");
    asm("loc_68010FB: add $4,%esp;");
    asm("loc_68010FE: mov 0x14(%edi),%eax;");
    asm("loc_6801101: or $0xFFFFFFFF,%esi;");
    asm("loc_6801104: cmp %esi,%eax;");
    asm("loc_6801106: je loc_6801111;");
    asm("loc_6801108: push %eax;");
    asm("loc_6801109: call _sub_68035F0;");
    asm("loc_680110E: add $4,%esp;");
    asm("loc_6801111: mov %esi,0x14(%edi);");
    asm("loc_6801114: pop %edi;");
    asm("loc_6801115: pop %esi;");
    asm("loc_6801116: pop %ebx;");
    asm("loc_6801117: pop %ecx;");
    asm("loc_6801118: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801120() // _sub_6801120
{
    __DEBUG_ASM(6801120);
    // chunk 0x6801120 _sub_6801120
    asm("loc_6801120: push %edi;");
    asm("loc_6801121: push $1;");
    asm("loc_6801123: call _sub_6801CF0;");
    asm("loc_6801128: mov %eax,%edi;");
    asm("loc_680112A: push %edi;");
    asm("loc_680112B: call _sub_68020B0;");
    asm("loc_6801130: add $8,%esp;");
    asm("loc_6801133: test %eax,%eax;");
    asm("loc_6801135: je loc_680115F;");
    asm("loc_6801137: push %esi;");
    asm("loc_6801138: push %edi;");
    asm("loc_6801139: mov $0x100001,%esi;");
    asm("loc_680113E: call _sub_6802140;");
    asm("loc_6801143: push %eax;");
    asm("loc_6801144: mov _import_680C004,%eax;");
    asm("loc_6801149: push $0x167;");
    asm("loc_680114E: push $_data_680D220;");
    asm("loc_6801153: push $_data_680D204;");
    asm("loc_6801158: push %esi;");
    asm("loc_6801159: calll *(%eax);");
    asm("loc_680115B: add $0x18,%esp;");
    asm("loc_680115E: pop %esi;");
    asm("loc_680115F: pop %edi;");
    asm("loc_6801160: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801170() // _sub_6801170
{
    __DEBUG_ASM(6801170);
    // chunk 0x6801170 _sub_6801170
    asm("loc_6801170: mov 0xC(%esp),%eax;");
    asm("loc_6801174: test %eax,%eax;");
    asm("loc_6801176: je loc_680117E;");
    asm("loc_6801178: or $0xFFFFFFFF,%eax;");
    asm("loc_680117B: ret $0xC;");
    asm("loc_680117E: mov 4(%esp),%eax;");
    asm("loc_6801182: mov 8(%eax),%ecx;");
    asm("loc_6801185: push %esi;");
    asm("loc_6801186: push %ecx;");
    asm("loc_6801187: call _sub_68026D0;");
    asm("loc_680118C: mov 0x10(%esp),%edx;");
    asm("loc_6801190: push %edx;");
    asm("loc_6801191: mov %eax,%esi;");
    asm("loc_6801193: call _sub_6803020;");
    asm("loc_6801198: push %esi;");
    asm("loc_6801199: call _sub_68026D0;");
    asm("loc_680119E: add $0xC,%esp;");
    asm("loc_68011A1: xor %eax,%eax;");
    asm("loc_68011A3: pop %esi;");
    asm("loc_68011A4: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68011B0() // _sub_68011B0
{
    __DEBUG_ASM(68011B0);
    // chunk 0x68011B0 _sub_68011B0
    asm("loc_68011B0: push %ebx;");
    asm("loc_68011B1: push %ebp;");
    asm("loc_68011B2: mov 0x10(%esp),%ebp;");
    asm("loc_68011B6: test %ebp,%ebp;");
    asm("loc_68011B8: push %esi;");
    asm("loc_68011B9: push %edi;");
    asm("loc_68011BA: jne loc_68011C5;");
    asm("loc_68011BC: pop %edi;");
    asm("loc_68011BD: pop %esi;");
    asm("loc_68011BE: pop %ebp;");
    asm("loc_68011BF: xor %eax,%eax;");
    asm("loc_68011C1: pop %ebx;");
    asm("loc_68011C2: ret $0xC;");
    asm("loc_68011C5: mov 0x14(%esp),%edi;");
    asm("loc_68011C9: mov 8(%edi),%eax;");
    asm("loc_68011CC: push %eax;");
    asm("loc_68011CD: call _sub_68026D0;");
    asm("loc_68011D2: push $0;");
    asm("loc_68011D4: mov %eax,0x20(%esp);");
    asm("loc_68011D8: call _sub_6802610;");
    asm("loc_68011DD: mov %eax,%esi;");
    asm("loc_68011DF: add $8,%esp;");
    asm("loc_68011E2: test %esi,%esi;");
    asm("loc_68011E4: je loc_680122B;");
    asm("loc_68011E6: mov 0x1C(%esp),%ebx;");
    asm("loc_68011EA: lea (%ebx),%ebx;");
    asm("loc_68011F0: push $1;");
    asm("loc_68011F2: call _sub_6801CF0;");
    asm("loc_68011F7: push %esi;");
    asm("loc_68011F8: call _sub_6801F70;");
    asm("loc_68011FD: push %eax;");
    asm("loc_68011FE: call _sub_6802040;");
    asm("loc_6801203: add $0xC,%esp;");
    asm("loc_6801206: test %eax,%eax;");
    asm("loc_6801208: je loc_680121C;");
    asm("loc_680120A: lea -4(%edi),%eax;");
    asm("loc_680120D: neg %eax;");
    asm("loc_680120F: push %ebx;");
    asm("loc_6801210: sbb %eax,%eax;");
    asm("loc_6801212: and %edi,%eax;");
    asm("loc_6801214: push %esi;");
    asm("loc_6801215: push %eax;");
    asm("loc_6801216: call *%ebp;");
    asm("loc_6801218: test %eax,%eax;");
    asm("loc_680121A: je loc_68011BC;");
    asm("loc_680121C: push %esi;");
    asm("loc_680121D: call _sub_6802610;");
    asm("loc_6801222: mov %eax,%esi;");
    asm("loc_6801224: add $4,%esp;");
    asm("loc_6801227: test %esi,%esi;");
    asm("loc_6801229: jne loc_68011F0;");
    asm("loc_680122B: mov 0x18(%esp),%ecx;");
    asm("loc_680122F: push %ecx;");
    asm("loc_6801230: call _sub_68026D0;");
    asm("loc_6801235: add $4,%esp;");
    asm("loc_6801238: pop %edi;");
    asm("loc_6801239: pop %esi;");
    asm("loc_680123A: pop %ebp;");
    asm("loc_680123B: mov $1,%eax;");
    asm("loc_6801240: pop %ebx;");
    asm("loc_6801241: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801250() // _sub_6801250
{
    __DEBUG_ASM(6801250);
    // chunk 0x6801250 _sub_6801250
    asm("loc_6801250: mov 0xC(%esp),%eax;");
    asm("loc_6801254: push %ebp;");
    asm("loc_6801255: xor %ebp,%ebp;");
    asm("loc_6801257: cmp $3,%eax;");
    asm("loc_680125A: jne loc_680132E;");
    asm("loc_6801260: push %ebx;");
    asm("loc_6801261: mov 0xC(%esp),%ebx;");
    asm("loc_6801265: mov 8(%ebx),%eax;");
    asm("loc_6801268: push %esi;");
    asm("loc_6801269: push %eax;");
    asm("loc_680126A: call _sub_68026D0;");
    asm("loc_680126F: mov %eax,0x1C(%esp);");
    asm("loc_6801273: mov 0x18(%esp),%eax;");
    asm("loc_6801277: mov (%eax),%cl;");
    asm("loc_6801279: add $4,%esp;");
    asm("loc_680127C: cmp $0x24,%cl;");
    asm("loc_680127F: jne loc_68012AC;");
    asm("loc_6801281: mov 1(%eax),%cl;");
    asm("loc_6801284: test %cl,%cl;");
    asm("loc_6801286: jne loc_68012AC;");
    asm("loc_6801288: push $1;");
    asm("loc_680128A: push $8;");
    asm("loc_680128C: calll *_import_680C01C;");
    asm("loc_6801292: add $8,%esp;");
    asm("loc_6801295: test %eax,%eax;");
    asm("loc_6801297: je loc_68012A6;");
    asm("loc_6801299: mov %ebp,(%eax);");
    asm("loc_680129B: movl $0xFFFFFFFF,4(%eax);");
    asm("loc_68012A2: mov %eax,%esi;");
    asm("loc_68012A4: jmp loc_6801311;");
    asm("loc_68012A6: xor %eax,%eax;");
    asm("loc_68012A8: mov %eax,%esi;");
    asm("loc_68012AA: jmp loc_6801311;");
    asm("loc_68012AC: push %eax;");
    asm("loc_68012AD: call _sub_6801F70;");
    asm("loc_68012B2: mov %eax,%esi;");
    asm("loc_68012B4: add $4,%esp;");
    asm("loc_68012B7: test %esi,%esi;");
    asm("loc_68012B9: je loc_680131F;");
    asm("loc_68012BB: push %esi;");
    asm("loc_68012BC: call _sub_6802040;");
    asm("loc_68012C1: add $4,%esp;");
    asm("loc_68012C4: test %eax,%eax;");
    asm("loc_68012C6: je loc_680131F;");
    asm("loc_68012C8: push %edi;");
    asm("loc_68012C9: push %esi;");
    asm("loc_68012CA: call _sub_6802420;");
    asm("loc_68012CF: push $0;");
    asm("loc_68012D1: call _sub_68027E0;");
    asm("loc_68012D6: push $1;");
    asm("loc_68012D8: push $8;");
    asm("loc_68012DA: mov %eax,%edi;");
    asm("loc_68012DC: calll *_import_680C01C;");
    asm("loc_68012E2: add $0x10,%esp;");
    asm("loc_68012E5: test %eax,%eax;");
    asm("loc_68012E7: je loc_68012FA;");
    asm("loc_68012E9: movl $0,(%eax);");
    asm("loc_68012EF: movl $0xFFFFFFFF,4(%eax);");
    asm("loc_68012F6: mov %eax,%esi;");
    asm("loc_68012F8: jmp loc_68012FC;");
    asm("loc_68012FA: xor %esi,%esi;");
    asm("loc_68012FC: mov 4(%esi),%eax;");
    asm("loc_68012FF: cmp $0xFFFFFFFF,%eax;");
    asm("loc_6801302: je loc_680130D;");
    asm("loc_6801304: push %eax;");
    asm("loc_6801305: call _sub_68035F0;");
    asm("loc_680130A: add $4,%esp;");
    asm("loc_680130D: mov %edi,4(%esi);");
    asm("loc_6801310: pop %edi;");
    asm("loc_6801311: test %esi,%esi;");
    asm("loc_6801313: je loc_680131F;");
    asm("loc_6801315: mov 0xC(%ebx),%ecx;");
    asm("loc_6801318: mov %ecx,(%esi);");
    asm("loc_680131A: mov %esi,0xC(%ebx);");
    asm("loc_680131D: mov %esi,%ebp;");
    asm("loc_680131F: mov 0x18(%esp),%edx;");
    asm("loc_6801323: push %edx;");
    asm("loc_6801324: call _sub_68026D0;");
    asm("loc_6801329: add $4,%esp;");
    asm("loc_680132C: pop %esi;");
    asm("loc_680132D: pop %ebx;");
    asm("loc_680132E: mov %ebp,%eax;");
    asm("loc_6801330: pop %ebp;");
    asm("loc_6801331: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801340() // _sub_6801340
{
    __DEBUG_ASM(6801340);
    // chunk 0x6801340 _sub_6801340
    asm("loc_6801340: mov 8(%esp),%edx;");
    asm("loc_6801344: test %edx,%edx;");
    asm("loc_6801346: push %esi;");
    asm("loc_6801347: je loc_6801363;");
    asm("loc_6801349: mov 8(%esp),%ecx;");
    asm("loc_680134D: mov 0xC(%ecx),%esi;");
    asm("loc_6801350: test %esi,%esi;");
    asm("loc_6801352: lea 0xC(%ecx),%eax;");
    asm("loc_6801355: je loc_6801363;");
    asm("loc_6801357: cmp %edx,%esi;");
    asm("loc_6801359: je loc_6801369;");
    asm("loc_680135B: mov %esi,%eax;");
    asm("loc_680135D: mov (%esi),%esi;");
    asm("loc_680135F: test %esi,%esi;");
    asm("loc_6801361: jne loc_6801357;");
    asm("loc_6801363: xor %eax,%eax;");
    asm("loc_6801365: pop %esi;");
    asm("loc_6801366: ret $8;");
    asm("loc_6801369: mov (%esi),%edx;");
    asm("loc_680136B: mov %edx,(%eax);");
    asm("loc_680136D: mov 8(%ecx),%eax;");
    asm("loc_6801370: push %edi;");
    asm("loc_6801371: push %eax;");
    asm("loc_6801372: call _sub_68026D0;");
    asm("loc_6801377: mov %eax,%edi;");
    asm("loc_6801379: mov 4(%esi),%eax;");
    asm("loc_680137C: add $4,%esp;");
    asm("loc_680137F: cmp $0xFFFFFFFF,%eax;");
    asm("loc_6801382: je loc_680138D;");
    asm("loc_6801384: push %eax;");
    asm("loc_6801385: call _sub_68035F0;");
    asm("loc_680138A: add $4,%esp;");
    asm("loc_680138D: push %esi;");
    asm("loc_680138E: movl $0xFFFFFFFF,4(%esi);");
    asm("loc_6801395: calll *_import_680C018;");
    asm("loc_680139B: push %edi;");
    asm("loc_680139C: call _sub_68026D0;");
    asm("loc_68013A1: add $8,%esp;");
    asm("loc_68013A4: pop %edi;");
    asm("loc_68013A5: mov $1,%eax;");
    asm("loc_68013AA: pop %esi;");
    asm("loc_68013AB: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68013B0() // _sub_68013B0
{
    __DEBUG_ASM(68013B0);
    // chunk 0x68013B0 _sub_68013B0
    asm("loc_68013B0: sub $8,%esp;");
    asm("loc_68013B3: push %ebp;");
    asm("loc_68013B4: push %edi;");
    asm("loc_68013B5: mov 0x18(%esp),%edi;");
    asm("loc_68013B9: xor %ebp,%ebp;");
    asm("loc_68013BB: xor %eax,%eax;");
    asm("loc_68013BD: cmp %ebp,%edi;");
    asm("loc_68013BF: je loc_680159F;");
    asm("loc_68013C5: mov 0x14(%esp),%eax;");
    asm("loc_68013C9: mov 8(%eax),%ecx;");
    asm("loc_68013CC: push %ebx;");
    asm("loc_68013CD: push %esi;");
    asm("loc_68013CE: push %ecx;");
    asm("loc_68013CF: call _sub_68026D0;");
    asm("loc_68013D4: mov %eax,0x24(%esp);");
    asm("loc_68013D8: mov 4(%edi),%eax;");
    asm("loc_68013DB: add $4,%esp;");
    asm("loc_68013DE: cmp $0xFFFFFFFF,%eax;");
    asm("loc_68013E1: jne loc_680143B;");
    asm("loc_68013E3: push $_data_680D27C;");
    asm("loc_68013E8: call _sub_6801F70;");
    asm("loc_68013ED: add $4,%esp;");
    asm("loc_68013F0: test %eax,%eax;");
    asm("loc_68013F2: je loc_680158C;");
    asm("loc_68013F8: mov 0x24(%esp),%edx;");
    asm("loc_68013FC: mov %edx,0x10(%esp);");
    asm("loc_6801400: mov %ebp,0x14(%esp);");
    asm("loc_6801404: fildll 0x10(%esp);");
    asm("loc_6801408: sub $8,%esp;");
    asm("loc_680140B: fstpl (%esp);");
    asm("loc_680140E: call _sub_6802210;");
    asm("loc_6801413: mov $_sub_6801D10,%eax;");
    asm("loc_6801418: add $8,%esp;");
    asm("loc_680141B: test %eax,%eax;");
    asm("loc_680141D: jne loc_680158C;");
    asm("loc_6801423: push $1;");
    asm("loc_6801425: call _sub_6801CF0;");
    asm("loc_680142A: push $2;");
    asm("loc_680142C: mov %eax,%edi;");
    asm("loc_680142E: call _sub_6801CF0;");
    asm("loc_6801433: mov %eax,%esi;");
    asm("loc_6801435: mov %esi,0x2C(%esp);");
    asm("loc_6801439: jmp loc_68014AB;");
    asm("loc_680143B: push %eax;");
    asm("loc_680143C: call _sub_6802810;");
    asm("loc_6801441: mov %eax,%edi;");
    asm("loc_6801443: add $4,%esp;");
    asm("loc_6801446: cmp %ebp,%edi;");
    asm("loc_6801448: je loc_680158C;");
    asm("loc_680144E: push $_data_680D268;");
    asm("loc_6801453: call _sub_6801F70;");
    asm("loc_6801458: mov %eax,%ebx;");
    asm("loc_680145A: add $4,%esp;");
    asm("loc_680145D: cmp %ebp,%ebx;");
    asm("loc_680145F: je loc_680158C;");
    asm("loc_6801465: push %edi;");
    asm("loc_6801466: call _sub_6802420;");
    asm("loc_680146B: mov 0x28(%esp),%ecx;");
    asm("loc_680146F: mov %ecx,0x14(%esp);");
    asm("loc_6801473: mov %ebp,0x18(%esp);");
    asm("loc_6801477: fildll 0x14(%esp);");
    asm("loc_680147B: push %ecx;");
    asm("loc_680147C: fstpl (%esp);");
    asm("loc_680147F: call _sub_6802210;");
    asm("loc_6801484: push %ebx;");
    asm("loc_6801485: call _sub_6801D10;");
    asm("loc_680148A: add $0xC,%esp;");
    asm("loc_680148D: test %eax,%eax;");
    asm("loc_680148F: jne loc_680158C;");
    asm("loc_6801495: push $1;");
    asm("loc_6801497: call _sub_6801CF0;");
    asm("loc_680149C: push $2;");
    asm("loc_680149E: mov %eax,%edi;");
    asm("loc_68014A0: call _sub_6801CF0;");
    asm("loc_68014A5: mov %eax,0x2C(%esp);");
    asm("loc_68014A9: mov %eax,%esi;");
    asm("loc_68014AB: add $8,%esp;");
    asm("loc_68014AE: cmp %ebp,%edi;");
    asm("loc_68014B0: je loc_680158C;");
    asm("loc_68014B6: cmp %ebp,%esi;");
    asm("loc_68014B8: je loc_680158C;");
    asm("loc_68014BE: push %edi;");
    asm("loc_68014BF: call _sub_6802010;");
    asm("loc_68014C4: add $4,%esp;");
    asm("loc_68014C7: test %eax,%eax;");
    asm("loc_68014C9: jne loc_680158C;");
    asm("loc_68014CF: push %edi;");
    asm("loc_68014D0: call _sub_6802140;");
    asm("loc_68014D5: mov %eax,%edx;");
    asm("loc_68014D7: add $4,%esp;");
    asm("loc_68014DA: cmp %ebp,%edx;");
    asm("loc_68014DC: je loc_680158C;");
    asm("loc_68014E2: mov 0x28(%esp),%ebp;");
    asm("loc_68014E6: test %ebp,%ebp;");
    asm("loc_68014E8: je loc_680155E;");
    asm("loc_68014EA: mov 0x2C(%esp),%ebx;");
    asm("loc_68014EE: test %ebx,%ebx;");
    asm("loc_68014F0: je loc_680155E;");
    asm("loc_68014F2: or $0xFFFFFFFF,%ecx;");
    asm("loc_68014F5: xor %eax,%eax;");
    asm("loc_68014F7: mov %edx,%edi;");
    asm("loc_68014F9: repne scas (%edi),%al;");
    asm("loc_68014FB: not %ecx;");
    asm("loc_68014FD: dec %ecx;");
    asm("loc_68014FE: mov %ecx,%esi;");
    asm("loc_6801500: cmp %ebx,%esi;");
    asm("loc_6801502: jae loc_680153D;");
    asm("loc_6801504: mov _import_680C020,%edi;");
    asm("loc_680150A: push %esi;");
    asm("loc_680150B: push %edx;");
    asm("loc_680150C: push %ebp;");
    asm("loc_680150D: call *%edi;");
    asm("loc_680150F: lea 1(%esi),%eax;");
    asm("loc_6801512: add $0xC,%esp;");
    asm("loc_6801515: cmp %ebx,%eax;");
    asm("loc_6801517: jae loc_680151F;");
    asm("loc_6801519: movb $0x3D,(%esi,%ebp);");
    asm("loc_680151D: mov %eax,%esi;");
    asm("loc_680151F: mov 0x24(%esp),%edx;");
    asm("loc_6801523: push %edx;");
    asm("loc_6801524: call _sub_6802140;");
    asm("loc_6801529: add $4,%esp;");
    asm("loc_680152C: test %eax,%eax;");
    asm("loc_680152E: je loc_6801549;");
    asm("loc_6801530: mov %ebx,%ecx;");
    asm("loc_6801532: sub %esi,%ecx;");
    asm("loc_6801534: push %ecx;");
    asm("loc_6801535: push %eax;");
    asm("loc_6801536: add %ebp,%esi;");
    asm("loc_6801538: push %esi;");
    asm("loc_6801539: call *%edi;");
    asm("loc_680153B: jmp loc_6801546;");
    asm("loc_680153D: push %ebx;");
    asm("loc_680153E: push %edx;");
    asm("loc_680153F: push %ebp;");
    asm("loc_6801540: calll *_import_680C020;");
    asm("loc_6801546: add $0xC,%esp;");
    asm("loc_6801549: or $0xFFFFFFFF,%ecx;");
    asm("loc_680154C: xor %eax,%eax;");
    asm("loc_680154E: mov %ebp,%edi;");
    asm("loc_6801550: movb $0,-1(%ebx,%ebp);");
    asm("loc_6801555: repne scas (%edi),%al;");
    asm("loc_6801557: not %ecx;");
    asm("loc_6801559: dec %ecx;");
    asm("loc_680155A: mov %ecx,%esi;");
    asm("loc_680155C: jmp loc_680158E;");
    asm("loc_680155E: or $0xFFFFFFFF,%ecx;");
    asm("loc_6801561: xor %eax,%eax;");
    asm("loc_6801563: mov %edx,%edi;");
    asm("loc_6801565: repne scas (%edi),%al;");
    asm("loc_6801567: not %ecx;");
    asm("loc_6801569: dec %ecx;");
    asm("loc_680156A: push %esi;");
    asm("loc_680156B: mov %ecx,%ebx;");
    asm("loc_680156D: call _sub_6802140;");
    asm("loc_6801572: add $4,%esp;");
    asm("loc_6801575: test %eax,%eax;");
    asm("loc_6801577: je loc_6801587;");
    asm("loc_6801579: or $0xFFFFFFFF,%ecx;");
    asm("loc_680157C: mov %eax,%edi;");
    asm("loc_680157E: xor %eax,%eax;");
    asm("loc_6801580: repne scas (%edi),%al;");
    asm("loc_6801582: not %ecx;");
    asm("loc_6801584: dec %ecx;");
    asm("loc_6801585: add %ecx,%ebx;");
    asm("loc_6801587: lea 1(%ebx),%esi;");
    asm("loc_680158A: jmp loc_680158E;");
    asm("loc_680158C: xor %esi,%esi;");
    asm("loc_680158E: mov 0x20(%esp),%edx;");
    asm("loc_6801592: push %edx;");
    asm("loc_6801593: call _sub_68026D0;");
    asm("loc_6801598: add $4,%esp;");
    asm("loc_680159B: mov %esi,%eax;");
    asm("loc_680159D: pop %esi;");
    asm("loc_680159E: pop %ebx;");
    asm("loc_680159F: pop %edi;");
    asm("loc_68015A0: pop %ebp;");
    asm("loc_68015A1: add $8,%esp;");
    asm("loc_68015A4: ret $0x14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68015B0() // _sub_68015B0
{
    __DEBUG_ASM(68015B0);
    // chunk 0x68015B0 _sub_68015B0
    asm("loc_68015B0: push %esi;");
    asm("loc_68015B1: mov 0xC(%esp),%esi;");
    asm("loc_68015B5: xor %eax,%eax;");
    asm("loc_68015B7: test %esi,%esi;");
    asm("loc_68015B9: je loc_6801686;");
    asm("loc_68015BF: mov 8(%esp),%eax;");
    asm("loc_68015C3: mov 8(%eax),%ecx;");
    asm("loc_68015C6: push %ebx;");
    asm("loc_68015C7: push %ebp;");
    asm("loc_68015C8: push %edi;");
    asm("loc_68015C9: push %ecx;");
    asm("loc_68015CA: call _sub_68026D0;");
    asm("loc_68015CF: mov %eax,%ebp;");
    asm("loc_68015D1: mov 4(%esi),%eax;");
    asm("loc_68015D4: add $4,%esp;");
    asm("loc_68015D7: cmp $0xFFFFFFFF,%eax;");
    asm("loc_68015DA: jne loc_68015EB;");
    asm("loc_68015DC: mov 0x1C(%esp),%edx;");
    asm("loc_68015E0: push %edx;");
    asm("loc_68015E1: call _sub_6801F70;");
    asm("loc_68015E6: add $4,%esp;");
    asm("loc_68015E9: jmp loc_6801624;");
    asm("loc_68015EB: push %eax;");
    asm("loc_68015EC: call _sub_6802810;");
    asm("loc_68015F1: add $4,%esp;");
    asm("loc_68015F4: test %eax,%eax;");
    asm("loc_68015F6: jne loc_680160C;");
    asm("loc_68015F8: push %ebp;");
    asm("loc_68015F9: xor %esi,%esi;");
    asm("loc_68015FB: call _sub_68026D0;");
    asm("loc_6801600: add $4,%esp;");
    asm("loc_6801603: pop %edi;");
    asm("loc_6801604: pop %ebp;");
    asm("loc_6801605: pop %ebx;");
    asm("loc_6801606: mov %esi,%eax;");
    asm("loc_6801608: pop %esi;");
    asm("loc_6801609: ret $0x14;");
    asm("loc_680160C: push %eax;");
    asm("loc_680160D: call _sub_6802420;");
    asm("loc_6801612: mov 0x20(%esp),%eax;");
    asm("loc_6801616: push %eax;");
    asm("loc_6801617: call _sub_68022B0;");
    asm("loc_680161C: add $8,%esp;");
    asm("loc_680161F: call _sub_6801EB0;");
    asm("loc_6801624: push %eax;");
    asm("loc_6801625: call _sub_6802140;");
    asm("loc_680162A: add $4,%esp;");
    asm("loc_680162D: test %eax,%eax;");
    asm("loc_680162F: jne loc_6801645;");
    asm("loc_6801631: push %ebp;");
    asm("loc_6801632: xor %esi,%esi;");
    asm("loc_6801634: call _sub_68026D0;");
    asm("loc_6801639: add $4,%esp;");
    asm("loc_680163C: pop %edi;");
    asm("loc_680163D: pop %ebp;");
    asm("loc_680163E: pop %ebx;");
    asm("loc_680163F: mov %esi,%eax;");
    asm("loc_6801641: pop %esi;");
    asm("loc_6801642: ret $0x14;");
    asm("loc_6801645: mov 0x20(%esp),%esi;");
    asm("loc_6801649: test %esi,%esi;");
    asm("loc_680164B: je loc_680166A;");
    asm("loc_680164D: mov 0x24(%esp),%ebx;");
    asm("loc_6801651: test %ebx,%ebx;");
    asm("loc_6801653: je loc_680166A;");
    asm("loc_6801655: push %ebx;");
    asm("loc_6801656: push %eax;");
    asm("loc_6801657: push %esi;");
    asm("loc_6801658: calll *_import_680C020;");
    asm("loc_680165E: add $0xC,%esp;");
    asm("loc_6801661: movb $0,-1(%esi,%ebx);");
    asm("loc_6801666: mov %esi,%edi;");
    asm("loc_6801668: jmp loc_680166C;");
    asm("loc_680166A: mov %eax,%edi;");
    asm("loc_680166C: or $0xFFFFFFFF,%ecx;");
    asm("loc_680166F: xor %eax,%eax;");
    asm("loc_6801671: repne scas (%edi),%al;");
    asm("loc_6801673: not %ecx;");
    asm("loc_6801675: dec %ecx;");
    asm("loc_6801676: push %ebp;");
    asm("loc_6801677: mov %ecx,%esi;");
    asm("loc_6801679: call _sub_68026D0;");
    asm("loc_680167E: add $4,%esp;");
    asm("loc_6801681: pop %edi;");
    asm("loc_6801682: pop %ebp;");
    asm("loc_6801683: mov %esi,%eax;");
    asm("loc_6801685: pop %ebx;");
    asm("loc_6801686: pop %esi;");
    asm("loc_6801687: ret $0x14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801690() // _sub_6801690
{
    __DEBUG_ASM(6801690);
    // chunk 0x6801690 _sub_6801690
    asm("loc_6801690: push %ebp;");
    asm("loc_6801691: mov %esp,%ebp;");
    asm("loc_6801693: and $0xFFFFFFF8,%esp;");
    asm("loc_6801696: sub $0x20,%esp;");
    asm("loc_6801699: mov 8(%ebp),%eax;");
    asm("loc_680169C: mov 0xC(%eax),%ecx;");
    asm("loc_680169F: push %esi;");
    asm("loc_68016A0: push %edi;");
    asm("loc_68016A1: push %ecx;");
    asm("loc_68016A2: call _sub_68026D0;");
    asm("loc_68016A7: mov 0xC(%ebp),%edx;");
    asm("loc_68016AA: push %edx;");
    asm("loc_68016AB: mov %eax,0x14(%esp);");
    asm("loc_68016AF: call _sub_6801F70;");
    asm("loc_68016B4: mov %eax,%edi;");
    asm("loc_68016B6: add $8,%esp;");
    asm("loc_68016B9: test %edi,%edi;");
    asm("loc_68016BB: mov %edi,8(%esp);");
    asm("loc_68016BF: je loc_6801862;");
    asm("loc_68016C5: push %edi;");
    asm("loc_68016C6: call _sub_68020D0;");
    asm("loc_68016CB: add $4,%esp;");
    asm("loc_68016CE: test %eax,%eax;");
    asm("loc_68016D0: je loc_6801862;");
    asm("loc_68016D6: mov 0x14(%ebp),%eax;");
    asm("loc_68016D9: xor %esi,%esi;");
    asm("loc_68016DB: test %eax,%eax;");
    asm("loc_68016DD: jle loc_68017B1;");
    asm("loc_68016E3: mov 0x18(%ebp),%edi;");
    asm("loc_68016E6: mov (%edi,%esi,4),%ecx;");
    asm("loc_68016E9: mov (%ecx),%eax;");
    asm("loc_68016EB: cmp $9,%eax;");
    asm("loc_68016EE: jne loc_6801716;");
    asm("loc_68016F0: cmp $9,%eax;");
    asm("loc_68016F3: jne loc_6801706;");
    asm("loc_68016F5: mov 8(%ecx),%ecx;");
    asm("loc_68016F8: push %ecx;");
    asm("loc_68016F9: call _sub_68022B0;");
    asm("loc_68016FE: add $4,%esp;");
    asm("loc_6801701: jmp loc_68017A1;");
    asm("loc_6801706: xor %ecx,%ecx;");
    asm("loc_6801708: push %ecx;");
    asm("loc_6801709: call _sub_68022B0;");
    asm("loc_680170E: add $4,%esp;");
    asm("loc_6801711: jmp loc_68017A1;");
    asm("loc_6801716: test $0x40,%ah;");
    asm("loc_6801719: jne loc_680175C;");
    asm("loc_680171B: test $0x10,%ah;");
    asm("loc_680171E: je loc_680175C;");
    asm("loc_6801720: mov %eax,%edx;");
    asm("loc_6801722: and $0xFFF,%edx;");
    asm("loc_6801728: cmp $4,%edx;");
    asm("loc_680172B: jne loc_6801736;");
    asm("loc_680172D: fildll 8(%ecx);");
    asm("loc_6801730: fstpl 0x10(%esp);");
    asm("loc_6801734: jmp loc_680178F;");
    asm("loc_6801736: test %ah,%ah;");
    asm("loc_6801738: jns loc_6801743;");
    asm("loc_680173A: fildl 8(%ecx);");
    asm("loc_680173D: fstpl 0x10(%esp);");
    asm("loc_6801741: jmp loc_680178F;");
    asm("loc_6801743: mov 8(%ecx),%eax;");
    asm("loc_6801746: mov %eax,0x18(%esp);");
    asm("loc_680174A: movl $0,0x1C(%esp);");
    asm("loc_6801752: fildll 0x18(%esp);");
    asm("loc_6801756: fstpl 0x10(%esp);");
    asm("loc_680175A: jmp loc_680178F;");
    asm("loc_680175C: cmp $5,%eax;");
    asm("loc_680175F: jne loc_680176A;");
    asm("loc_6801761: flds 8(%ecx);");
    asm("loc_6801764: fstpl 0x10(%esp);");
    asm("loc_6801768: jmp loc_680178F;");
    asm("loc_680176A: cmp $6,%eax;");
    asm("loc_680176D: jne loc_680177F;");
    asm("loc_680176F: mov 8(%ecx),%edx;");
    asm("loc_6801772: mov 0xC(%ecx),%eax;");
    asm("loc_6801775: mov %edx,0x10(%esp);");
    asm("loc_6801779: mov %eax,0x14(%esp);");
    asm("loc_680177D: jmp loc_680178F;");
    asm("loc_680177F: movl $0,0x10(%esp);");
    asm("loc_6801787: movl $0,0x14(%esp);");
    asm("loc_680178F: mov 0x14(%esp),%ecx;");
    asm("loc_6801793: mov 0x10(%esp),%edx;");
    asm("loc_6801797: push %ecx;");
    asm("loc_6801798: push %edx;");
    asm("loc_6801799: call _sub_6802210;");
    asm("loc_680179E: add $8,%esp;");
    asm("loc_68017A1: mov 0x14(%ebp),%eax;");
    asm("loc_68017A4: inc %esi;");
    asm("loc_68017A5: cmp %eax,%esi;");
    asm("loc_68017A7: jl loc_68016E6;");
    asm("loc_68017AD: mov 8(%esp),%edi;");
    asm("loc_68017B1: push %edi;");
    asm("loc_68017B2: call _sub_6801D10;");
    asm("loc_68017B7: mov 0x10(%ebp),%esi;");
    asm("loc_68017BA: add $4,%esp;");
    asm("loc_68017BD: test %esi,%esi;");
    asm("loc_68017BF: je loc_680184B;");
    asm("loc_68017C5: push $1;");
    asm("loc_68017C7: call _sub_6801CF0;");
    asm("loc_68017CC: mov %eax,%edi;");
    asm("loc_68017CE: push %edi;");
    asm("loc_68017CF: call _sub_6802010;");
    asm("loc_68017D4: add $8,%esp;");
    asm("loc_68017D7: test %eax,%eax;");
    asm("loc_68017D9: jne loc_680184B;");
    asm("loc_68017DB: push %edi;");
    asm("loc_68017DC: call _sub_68020B0;");
    asm("loc_68017E1: add $4,%esp;");
    asm("loc_68017E4: test %eax,%eax;");
    asm("loc_68017E6: push %edi;");
    asm("loc_68017E7: je loc_6801825;");
    asm("loc_68017E9: call _sub_6802140;");
    asm("loc_68017EE: push %eax;");
    asm("loc_68017EF: calll *_import_680C094;");
    asm("loc_68017F5: mov $9,%edx;");
    asm("loc_68017FA: mov %edx,(%esi);");
    asm("loc_68017FC: xor %ecx,%ecx;");
    asm("loc_68017FE: mov %ecx,4(%esi);");
    asm("loc_6801801: mov %eax,8(%esi);");
    asm("loc_6801804: mov 0x2C(%esp),%eax;");
    asm("loc_6801808: mov %eax,0xC(%esi);");
    asm("loc_680180B: mov 0x14(%esp),%eax;");
    asm("loc_680180F: add $8,%esp;");
    asm("loc_6801812: push %eax;");
    asm("loc_6801813: call _sub_68026D0;");
    asm("loc_6801818: add $4,%esp;");
    asm("loc_680181B: xor %eax,%eax;");
    asm("loc_680181D: pop %edi;");
    asm("loc_680181E: pop %esi;");
    asm("loc_680181F: mov %ebp,%esp;");
    asm("loc_6801821: pop %ebp;");
    asm("loc_6801822: ret $0x14;");
    asm("loc_6801825: call _sub_68020F0;");
    asm("loc_680182A: mov $6,%ecx;");
    asm("loc_680182F: mov %ecx,(%esi);");
    asm("loc_6801831: add $4,%esp;");
    asm("loc_6801834: fstpl 0x20(%esp);");
    asm("loc_6801838: mov 0x20(%esp),%ecx;");
    asm("loc_680183C: mov 0x24(%esp),%edx;");
    asm("loc_6801840: xor %eax,%eax;");
    asm("loc_6801842: mov %eax,4(%esi);");
    asm("loc_6801845: mov %ecx,8(%esi);");
    asm("loc_6801848: mov %edx,0xC(%esi);");
    asm("loc_680184B: mov 0xC(%esp),%eax;");
    asm("loc_680184F: push %eax;");
    asm("loc_6801850: call _sub_68026D0;");
    asm("loc_6801855: add $4,%esp;");
    asm("loc_6801858: xor %eax,%eax;");
    asm("loc_680185A: pop %edi;");
    asm("loc_680185B: pop %esi;");
    asm("loc_680185C: mov %ebp,%esp;");
    asm("loc_680185E: pop %ebp;");
    asm("loc_680185F: ret $0x14;");
    asm("loc_6801862: pop %edi;");
    asm("loc_6801863: mov $0xFFFFFFFE,%eax;");
    asm("loc_6801868: pop %esi;");
    asm("loc_6801869: mov %ebp,%esp;");
    asm("loc_680186B: pop %ebp;");
    asm("loc_680186C: ret $0x14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801870() // _DllMain@12
{
    __DEBUG_ASM(6801870);
    // chunk 0x6801870 _sub_6801870
    asm("loc_6801870: mov 8(%esp),%eax;");
    asm("loc_6801874: dec %eax;");
    asm("loc_6801875: jne loc_68018C9;");
    asm("loc_6801877: mov 4(%esp),%eax;");
    asm("loc_680187B: push %esi;");
    asm("loc_680187C: push %eax;");
    asm("loc_680187D: calll *_import_680C00C;");
    asm("loc_6801883: push $0xC;");
    asm("loc_6801885: call _sub_680BC50;");
    asm("loc_680188A: add $4,%esp;");
    asm("loc_680188D: test %eax,%eax;");
    asm("loc_680188F: je loc_68018A9;");
    asm("loc_6801891: movl $1,4(%eax);");
    asm("loc_6801898: movl $_data_680D018,8(%eax);");
    asm("loc_680189F: movl $_off_680C100,(%eax);");
    asm("loc_68018A5: mov %eax,%esi;");
    asm("loc_68018A7: jmp loc_68018AB;");
    asm("loc_68018A9: xor %esi,%esi;");
    asm("loc_68018AB: calll *_import_680C000;");
    asm("loc_68018B1: mov (%eax),%ecx;");
    asm("loc_68018B3: push $0x40000000;");
    asm("loc_68018B8: push $_data_680D018;");
    asm("loc_68018BD: push %esi;");
    asm("loc_68018BE: push %eax;");
    asm("loc_68018BF: calll *0x10(%ecx);");
    asm("loc_68018C2: mov (%esi),%edx;");
    asm("loc_68018C4: push %esi;");
    asm("loc_68018C5: calll *8(%edx);");
    asm("loc_68018C8: pop %esi;");
    asm("loc_68018C9: mov $1,%eax;");
    asm("loc_68018CE: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68018E0() // _sub_68018E0
{
    __DEBUG_ASM(68018E0);
    // chunk 0x68018E0 _sub_68018E0
    asm("loc_68018E0: mov 0xC(%esp),%edx;");
    asm("loc_68018E4: push %esi;");
    asm("loc_68018E5: mov 0xC(%esp),%esi;");
    asm("loc_68018E9: push %edi;");
    asm("loc_68018EA: mov $_data_680D290,%edi;");
    asm("loc_68018EF: mov $0x17,%ecx;");
    asm("loc_68018F4: xor %eax,%eax;");
    asm("loc_68018F6: movl $0,(%edx);");
    asm("loc_68018FC: repe cmpsb (%edi),(%esi);");
    asm("loc_68018FE: pop %edi;");
    asm("loc_68018FF: pop %esi;");
    asm("loc_6801900: je loc_680190A;");
    asm("loc_6801902: mov $0xFFFFFFFD,%eax;");
    asm("loc_6801907: ret $0xC;");
    asm("loc_680190A: mov 4(%esp),%eax;");
    asm("loc_680190E: mov %eax,(%edx);");
    asm("loc_6801910: mov (%eax),%ecx;");
    asm("loc_6801912: push %eax;");
    asm("loc_6801913: calll *4(%ecx);");
    asm("loc_6801916: xor %eax,%eax;");
    asm("loc_6801918: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801920() // _sub_6801920
{
    __DEBUG_ASM(6801920);
    // chunk 0x6801920 _sub_6801920
    asm("loc_6801920: mov 4(%esp),%ecx;");
    asm("loc_6801924: mov 4(%ecx),%eax;");
    asm("loc_6801927: test %eax,%eax;");
    asm("loc_6801929: jbe loc_680192F;");
    asm("loc_680192B: dec %eax;");
    asm("loc_680192C: mov %eax,4(%ecx);");
    asm("loc_680192F: mov 4(%ecx),%eax;");
    asm("loc_6801932: test %eax,%eax;");
    asm("loc_6801934: jne loc_6801948;");
    asm("loc_6801936: push %ecx;");
    asm("loc_6801937: movl $1,4(%ecx);");
    asm("loc_680193E: call _sub_680BC56;");
    asm("loc_6801943: add $4,%esp;");
    asm("loc_6801946: xor %eax,%eax;");
    asm("loc_6801948: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801950() // _sub_6801950
{
    __DEBUG_ASM(6801950);
    // chunk 0x6801950 _sub_6801950
    asm("loc_6801950: push %ebp;");
    asm("loc_6801951: push %esi;");
    asm("loc_6801952: push %edi;");
    asm("loc_6801953: mov 0x14(%esp),%edi;");
    asm("loc_6801957: mov (%edi),%eax;");
    asm("loc_6801959: xor %ebp,%ebp;");
    asm("loc_680195B: cmp $0x14,%eax;");
    asm("loc_680195E: jne loc_6801A12;");
    asm("loc_6801964: mov 0x10(%esp),%eax;");
    asm("loc_6801968: mov 8(%eax),%esi;");
    asm("loc_680196B: mov 4(%edi),%eax;");
    asm("loc_680196E: push %ebx;");
    asm("loc_680196F: nop;");
    asm("loc_6801970: mov (%eax),%dl;");
    asm("loc_6801972: mov (%esi),%bl;");
    asm("loc_6801974: mov %dl,%cl;");
    asm("loc_6801976: cmp %bl,%dl;");
    asm("loc_6801978: jne loc_6801998;");
    asm("loc_680197A: test %cl,%cl;");
    asm("loc_680197C: je loc_6801994;");
    asm("loc_680197E: mov 1(%eax),%dl;");
    asm("loc_6801981: mov 1(%esi),%bl;");
    asm("loc_6801984: mov %dl,%cl;");
    asm("loc_6801986: cmp %bl,%dl;");
    asm("loc_6801988: jne loc_6801998;");
    asm("loc_680198A: add $2,%eax;");
    asm("loc_680198D: add $2,%esi;");
    asm("loc_6801990: test %cl,%cl;");
    asm("loc_6801992: jne loc_6801970;");
    asm("loc_6801994: xor %eax,%eax;");
    asm("loc_6801996: jmp loc_680199D;");
    asm("loc_6801998: sbb %eax,%eax;");
    asm("loc_680199A: sbb $0xFFFFFFFF,%eax;");
    asm("loc_680199D: test %eax,%eax;");
    asm("loc_680199F: pop %ebx;");
    asm("loc_68019A0: jne loc_6801A12;");
    asm("loc_68019A2: push $1;");
    asm("loc_68019A4: push $0x28;");
    asm("loc_68019A6: calll *_import_680C01C;");
    asm("loc_68019AC: mov %eax,%esi;");
    asm("loc_68019AE: add $8,%esp;");
    asm("loc_68019B1: test %esi,%esi;");
    asm("loc_68019B3: je loc_68019F9;");
    asm("loc_68019B5: mov %esi,%ecx;");
    asm("loc_68019B7: call _sub_6801000;");
    asm("loc_68019BC: lea 0x1C(%esi),%eax;");
    asm("loc_68019BF: movl $_off_680C154,(%eax);");
    asm("loc_68019C5: movl $1,4(%eax);");
    asm("loc_68019CC: mov %esi,8(%eax);");
    asm("loc_68019CF: movl $_off_680C144,(%esi);");
    asm("loc_68019D5: movl $_off_680C120,4(%esi);");
    asm("loc_68019DC: movl $_off_680C110,8(%esi);");
    asm("loc_68019E3: mov 8(%edi),%ecx;");
    asm("loc_68019E6: test %ecx,%ecx;");
    asm("loc_68019E8: mov %ecx,0x18(%esi);");
    asm("loc_68019EB: jne loc_68019F2;");
    asm("loc_68019ED: mov %eax,0x18(%esi);");
    asm("loc_68019F0: jmp loc_68019FB;");
    asm("loc_68019F2: mov 0xC(%edi),%ecx;");
    asm("loc_68019F5: mov %eax,(%ecx);");
    asm("loc_68019F7: jmp loc_68019FB;");
    asm("loc_68019F9: xor %esi,%esi;");
    asm("loc_68019FB: mov 0x18(%esp),%edx;");
    asm("loc_68019FF: xor %eax,%eax;");
    asm("loc_6801A01: test %esi,%esi;");
    asm("loc_6801A03: setne %al;");
    asm("loc_6801A06: pop %edi;");
    asm("loc_6801A07: mov %esi,(%edx);");
    asm("loc_6801A09: pop %esi;");
    asm("loc_6801A0A: pop %ebp;");
    asm("loc_6801A0B: dec %eax;");
    asm("loc_6801A0C: and $0xFFFFFFFC,%eax;");
    asm("loc_6801A0F: ret $0xC;");
    asm("loc_6801A12: mov 0x18(%esp),%ecx;");
    asm("loc_6801A16: pop %edi;");
    asm("loc_6801A17: pop %esi;");
    asm("loc_6801A18: mov %ebp,(%ecx);");
    asm("loc_6801A1A: mov $0xFFFFFFFD,%eax;");
    asm("loc_6801A1F: pop %ebp;");
    asm("loc_6801A20: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801A30() // _sub_6801A30
{
    __DEBUG_ASM(6801A30);
    // chunk 0x6801A30 _sub_6801A30
    asm("loc_6801A30: mov _off_680C160,%eax;");
    asm("loc_6801A35: push %ebx;");
    asm("loc_6801A36: push %ebp;");
    asm("loc_6801A37: push %esi;");
    asm("loc_6801A38: push %edi;");
    asm("loc_6801A39: xor %edi,%edi;");
    asm("loc_6801A3B: test %eax,%eax;");
    asm("loc_6801A3D: je loc_6801A82;");
    asm("loc_6801A3F: mov 0x18(%esp),%ebp;");
    asm("loc_6801A43: mov %ebp,%esi;");
    asm("loc_6801A45: mov (%eax),%dl;");
    asm("loc_6801A47: mov (%esi),%bl;");
    asm("loc_6801A49: mov %dl,%cl;");
    asm("loc_6801A4B: cmp %bl,%dl;");
    asm("loc_6801A4D: jne loc_6801A6D;");
    asm("loc_6801A4F: test %cl,%cl;");
    asm("loc_6801A51: je loc_6801A69;");
    asm("loc_6801A53: mov 1(%eax),%dl;");
    asm("loc_6801A56: mov 1(%esi),%bl;");
    asm("loc_6801A59: mov %dl,%cl;");
    asm("loc_6801A5B: cmp %bl,%dl;");
    asm("loc_6801A5D: jne loc_6801A6D;");
    asm("loc_6801A5F: add $2,%eax;");
    asm("loc_6801A62: add $2,%esi;");
    asm("loc_6801A65: test %cl,%cl;");
    asm("loc_6801A67: jne loc_6801A45;");
    asm("loc_6801A69: xor %eax,%eax;");
    asm("loc_6801A6B: jmp loc_6801A72;");
    asm("loc_6801A6D: sbb %eax,%eax;");
    asm("loc_6801A6F: sbb $0xFFFFFFFF,%eax;");
    asm("loc_6801A72: test %eax,%eax;");
    asm("loc_6801A74: je loc_6801A98;");
    asm("loc_6801A76: mov _off_680C168(,%edi,8),%eax;");
    asm("loc_6801A7D: inc %edi;");
    asm("loc_6801A7E: test %eax,%eax;");
    asm("loc_6801A80: jne loc_6801A43;");
    asm("loc_6801A82: mov 0x1C(%esp),%ecx;");
    asm("loc_6801A86: pop %edi;");
    asm("loc_6801A87: pop %esi;");
    asm("loc_6801A88: pop %ebp;");
    asm("loc_6801A89: movl $0,(%ecx);");
    asm("loc_6801A8F: mov $0xFFFFFFFD,%eax;");
    asm("loc_6801A94: pop %ebx;");
    asm("loc_6801A95: ret $0xC;");
    asm("loc_6801A98: mov _data_680C164(,%edi,8),%eax;");
    asm("loc_6801A9F: test %eax,%eax;");
    asm("loc_6801AA1: mov 0x14(%esp),%ecx;");
    asm("loc_6801AA5: jns loc_6801AC7;");
    asm("loc_6801AA7: mov 8(%ecx),%edx;");
    asm("loc_6801AAA: and $0x7FFFFFFF,%eax;");
    asm("loc_6801AAF: mov (%eax,%edx),%esi;");
    asm("loc_6801AB2: mov (%esi),%edx;");
    asm("loc_6801AB4: push %esi;");
    asm("loc_6801AB5: calll *4(%edx);");
    asm("loc_6801AB8: mov 0x1C(%esp),%eax;");
    asm("loc_6801ABC: pop %edi;");
    asm("loc_6801ABD: mov %esi,(%eax);");
    asm("loc_6801ABF: pop %esi;");
    asm("loc_6801AC0: pop %ebp;");
    asm("loc_6801AC1: xor %eax,%eax;");
    asm("loc_6801AC3: pop %ebx;");
    asm("loc_6801AC4: ret $0xC;");
    asm("loc_6801AC7: mov 8(%ecx),%esi;");
    asm("loc_6801ACA: mov (%esi,%eax),%edx;");
    asm("loc_6801ACD: add %eax,%esi;");
    asm("loc_6801ACF: push %esi;");
    asm("loc_6801AD0: calll *4(%edx);");
    asm("loc_6801AD3: mov 0x1C(%esp),%eax;");
    asm("loc_6801AD7: pop %edi;");
    asm("loc_6801AD8: mov %esi,(%eax);");
    asm("loc_6801ADA: pop %esi;");
    asm("loc_6801ADB: pop %ebp;");
    asm("loc_6801ADC: xor %eax,%eax;");
    asm("loc_6801ADE: pop %ebx;");
    asm("loc_6801ADF: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801AF0() // _sub_6801AF0
{
    __DEBUG_ASM(6801AF0);
    // chunk 0x6801AF0 _sub_6801AF0
    asm("loc_6801AF0: mov 4(%esp),%eax;");
    asm("loc_6801AF4: mov 4(%eax),%ecx;");
    asm("loc_6801AF7: inc %ecx;");
    asm("loc_6801AF8: mov %ecx,4(%eax);");
    asm("loc_6801AFB: mov %ecx,%eax;");
    asm("loc_6801AFD: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801B00() // _sub_6801B00
{
    __DEBUG_ASM(6801B00);
    // chunk 0x6801B00 _sub_6801B00
    asm("loc_6801B00: mov 4(%esp),%ecx;");
    asm("loc_6801B04: mov 4(%ecx),%eax;");
    asm("loc_6801B07: test %eax,%eax;");
    asm("loc_6801B09: jbe loc_6801B0F;");
    asm("loc_6801B0B: dec %eax;");
    asm("loc_6801B0C: mov %eax,4(%ecx);");
    asm("loc_6801B0F: mov 4(%ecx),%eax;");
    asm("loc_6801B12: test %eax,%eax;");
    asm("loc_6801B14: jne loc_6801B39;");
    asm("loc_6801B16: push %esi;");
    asm("loc_6801B17: mov 8(%ecx),%esi;");
    asm("loc_6801B1A: test %esi,%esi;");
    asm("loc_6801B1C: movl $1,4(%ecx);");
    asm("loc_6801B23: je loc_6801B36;");
    asm("loc_6801B25: mov %esi,%ecx;");
    asm("loc_6801B27: call _sub_6801080;");
    asm("loc_6801B2C: push %esi;");
    asm("loc_6801B2D: calll *_import_680C018;");
    asm("loc_6801B33: add $4,%esp;");
    asm("loc_6801B36: xor %eax,%eax;");
    asm("loc_6801B38: pop %esi;");
    asm("loc_6801B39: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801B40() // _sub_6801B40
{
    __DEBUG_ASM(6801B40);
    // chunk 0x6801B40 _sub_6801B40
    asm("loc_6801B40: mov 4(%esp),%eax;");
    asm("loc_6801B44: mov 0x18(%eax),%eax;");
    asm("loc_6801B47: mov (%eax),%ecx;");
    asm("loc_6801B49: mov %eax,4(%esp);");
    asm("loc_6801B4D: jmpl *(%ecx);");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801B50() // _sub_6801B50
{
    __DEBUG_ASM(6801B50);
    // chunk 0x6801B50 _sub_6801B50
    asm("loc_6801B50: mov 4(%esp),%eax;");
    asm("loc_6801B54: mov 0x18(%eax),%eax;");
    asm("loc_6801B57: mov (%eax),%ecx;");
    asm("loc_6801B59: mov %eax,4(%esp);");
    asm("loc_6801B5D: jmpl *4(%ecx);");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801B60() // _sub_6801B60
{
    __DEBUG_ASM(6801B60);
    // chunk 0x6801B60 _sub_6801B60
    asm("loc_6801B60: mov 4(%esp),%eax;");
    asm("loc_6801B64: mov 0x18(%eax),%eax;");
    asm("loc_6801B67: mov (%eax),%ecx;");
    asm("loc_6801B69: mov %eax,4(%esp);");
    asm("loc_6801B6D: jmpl *8(%ecx);");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801B70() // _sub_6801B70
{
    __DEBUG_ASM(6801B70);
    // chunk 0x6801B70 _sub_6801B70
    asm("loc_6801B70: subl $4,4(%esp);");
    asm("loc_6801B75: jmp _sub_6801B40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801B80() // _sub_6801B80
{
    __DEBUG_ASM(6801B80);
    // chunk 0x6801B80 _sub_6801B80
    asm("loc_6801B80: subl $4,4(%esp);");
    asm("loc_6801B85: jmp _sub_6801B50;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801B90() // _sub_6801B90
{
    __DEBUG_ASM(6801B90);
    // chunk 0x6801B90 _sub_6801B90
    asm("loc_6801B90: subl $4,4(%esp);");
    asm("loc_6801B95: jmp _sub_6801B60;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801BA0() // _sub_6801BA0
{
    __DEBUG_ASM(6801BA0);
    // chunk 0x6801BA0 _sub_6801BA0
    asm("loc_6801BA0: subl $8,4(%esp);");
    asm("loc_6801BA5: jmp _sub_6801B40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801BB0() // _sub_6801BB0
{
    __DEBUG_ASM(6801BB0);
    // chunk 0x6801BB0 _sub_6801BB0
    asm("loc_6801BB0: subl $8,4(%esp);");
    asm("loc_6801BB5: jmp _sub_6801B50;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801BC0() // _sub_6801BC0
{
    __DEBUG_ASM(6801BC0);
    // chunk 0x6801BC0 _sub_6801BC0
    asm("loc_6801BC0: subl $8,4(%esp);");
    asm("loc_6801BC5: jmp _sub_6801B60;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801BD0() // _sub_6801BD0
{
    __DEBUG_ASM(6801BD0);
    // chunk 0x6801BD0 _sub_6801BD0
    asm("loc_6801BD0: mov 4(%esp),%eax;");
    asm("loc_6801BD4: test %eax,%eax;");
    asm("loc_6801BD6: je loc_6801BE9;");
    asm("loc_6801BD8: mov _data_680E604,%ecx;");
    asm("loc_6801BDE: mov 4(%ecx),%edx;");
    asm("loc_6801BE1: shl $4,%eax;");
    asm("loc_6801BE4: lea -0x10(%edx,%eax),%eax;");
    asm("loc_6801BE8: ret;");
    asm("loc_6801BE9: xor %eax,%eax;");
    asm("loc_6801BEB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801BF0() // _sub_6801BF0
{
    __DEBUG_ASM(6801BF0);
    // chunk 0x6801BF0 _sub_6801BF0
    asm("loc_6801BF0: mov _data_680E604,%eax;");
    asm("loc_6801BF5: mov (%eax),%ecx;");
    asm("loc_6801BF7: mov 0x14(%eax),%edx;");
    asm("loc_6801BFA: mov 0x10(%eax),%eax;");
    asm("loc_6801BFD: push %ecx;");
    asm("loc_6801BFE: push %edx;");
    asm("loc_6801BFF: push %eax;");
    asm("loc_6801C00: call _sub_6804270;");
    asm("loc_6801C05: mov _data_680E604,%eax;");
    asm("loc_6801C0A: mov (%eax),%ecx;");
    asm("loc_6801C0C: mov 8(%eax),%edx;");
    asm("loc_6801C0F: add $0xC,%esp;");
    asm("loc_6801C12: cmp %edx,%ecx;");
    asm("loc_6801C14: jb loc_6801C25;");
    asm("loc_6801C16: push $1;");
    asm("loc_6801C18: call _sub_6802870;");
    asm("loc_6801C1D: mov _data_680E604,%eax;");
    asm("loc_6801C22: add $4,%esp;");
    asm("loc_6801C25: addl $0x10,(%eax);");
    asm("loc_6801C28: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801C30() // _sub_6801C30
{
    __DEBUG_ASM(6801C30);
    // chunk 0x6801C30 _sub_6801C30
    asm("loc_6801C30: mov _data_680E604,%eax;");
    asm("loc_6801C35: mov 0x10(%eax),%ecx;");
    asm("loc_6801C38: mov %ecx,0xC(%eax);");
    asm("loc_6801C3B: mov _data_680E604,%edx;");
    asm("loc_6801C41: mov 0x14(%edx),%eax;");
    asm("loc_6801C44: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801C50() // _sub_6801C50
{
    __DEBUG_ASM(6801C50);
    // chunk 0x6801C50 _sub_6801C50
    asm("loc_6801C50: mov _data_680E604,%eax;");
    asm("loc_6801C55: mov 4(%eax),%edx;");
    asm("loc_6801C58: mov (%eax),%ecx;");
    asm("loc_6801C5A: sub %edx,%ecx;");
    asm("loc_6801C5C: mov 0xC(%eax),%edx;");
    asm("loc_6801C5F: mov 4(%esp),%eax;");
    asm("loc_6801C63: sar $4,%ecx;");
    asm("loc_6801C66: add %eax,%edx;");
    asm("loc_6801C68: cmp %edx,%ecx;");
    asm("loc_6801C6A: jge loc_6801C77;");
    asm("loc_6801C6C: push $_data_680D34C;");
    asm("loc_6801C71: call _sub_6802E00;");
    asm("loc_6801C76: pop %ecx;");
    asm("loc_6801C77: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801C80() // _sub_6801C80
{
    __DEBUG_ASM(6801C80);
    // chunk 0x6801C80 _sub_6801C80
    asm("loc_6801C80: mov _data_680E604,%eax;");
    asm("loc_6801C85: mov 4(%eax),%edx;");
    asm("loc_6801C88: mov (%eax),%ecx;");
    asm("loc_6801C8A: sub %edx,%ecx;");
    asm("loc_6801C8C: mov 0xC(%eax),%edx;");
    asm("loc_6801C8F: sar $4,%ecx;");
    asm("loc_6801C92: sub %edx,%ecx;");
    asm("loc_6801C94: push %ecx;");
    asm("loc_6801C95: call _sub_6802950;");
    asm("loc_6801C9A: mov _data_680E604,%eax;");
    asm("loc_6801C9F: addl $0xFFFFFFF0,(%eax);");
    asm("loc_6801CA2: mov _data_680E604,%eax;");
    asm("loc_6801CA7: mov 0xC(%eax),%edx;");
    asm("loc_6801CAA: mov 4(%eax),%ecx;");
    asm("loc_6801CAD: mov (%eax),%eax;");
    asm("loc_6801CAF: shl $4,%edx;");
    asm("loc_6801CB2: add %ecx,%edx;");
    asm("loc_6801CB4: mov (%eax),%ecx;");
    asm("loc_6801CB6: mov %ecx,(%edx);");
    asm("loc_6801CB8: mov 4(%eax),%ecx;");
    asm("loc_6801CBB: mov %ecx,4(%edx);");
    asm("loc_6801CBE: mov 8(%eax),%ecx;");
    asm("loc_6801CC1: mov %ecx,8(%edx);");
    asm("loc_6801CC4: mov 0xC(%eax),%eax;");
    asm("loc_6801CC7: mov %eax,0xC(%edx);");
    asm("loc_6801CCA: mov _data_680E604,%eax;");
    asm("loc_6801CCF: mov 0xC(%eax),%ecx;");
    asm("loc_6801CD2: add $4,%esp;");
    asm("loc_6801CD5: inc %ecx;");
    asm("loc_6801CD6: mov %ecx,0xC(%eax);");
    asm("loc_6801CD9: mov _data_680E604,%ecx;");
    asm("loc_6801CDF: mov 0xC(%ecx),%eax;");
    asm("loc_6801CE2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801CF0() // _sub_6801CF0
{
    __DEBUG_ASM(6801CF0);
    // chunk 0x6801CF0 _sub_6801CF0
    asm("loc_6801CF0: mov 4(%esp),%ecx;");
    asm("loc_6801CF4: test %ecx,%ecx;");
    asm("loc_6801CF6: jle loc_6801D08;");
    asm("loc_6801CF8: mov _data_680E604,%eax;");
    asm("loc_6801CFD: cmp 0x14(%eax),%ecx;");
    asm("loc_6801D00: jg loc_6801D08;");
    asm("loc_6801D02: mov 0x10(%eax),%eax;");
    asm("loc_6801D05: add %ecx,%eax;");
    asm("loc_6801D07: ret;");
    asm("loc_6801D08: xor %eax,%eax;");
    asm("loc_6801D0A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801D10() // _sub_6801D10
{
    __DEBUG_ASM(6801D10);
    // chunk 0x6801D10 _sub_6801D10
    asm("loc_6801D10: push %esi;");
    asm("loc_6801D11: mov 8(%esp),%esi;");
    asm("loc_6801D15: test %esi,%esi;");
    asm("loc_6801D17: jne loc_6801D20;");
    asm("loc_6801D19: mov $1,%eax;");
    asm("loc_6801D1E: pop %esi;");
    asm("loc_6801D1F: ret;");
    asm("loc_6801D20: mov _data_680E604,%eax;");
    asm("loc_6801D25: mov 4(%eax),%edx;");
    asm("loc_6801D28: mov (%eax),%ecx;");
    asm("loc_6801D2A: sub %edx,%ecx;");
    asm("loc_6801D2C: mov 0xC(%eax),%edx;");
    asm("loc_6801D2F: sar $4,%ecx;");
    asm("loc_6801D32: sub %edx,%ecx;");
    asm("loc_6801D34: push %ecx;");
    asm("loc_6801D35: call _sub_6802950;");
    asm("loc_6801D3A: mov _data_680E604,%ecx;");
    asm("loc_6801D40: mov 4(%ecx),%eax;");
    asm("loc_6801D43: mov 0xC(%ecx),%ecx;");
    asm("loc_6801D46: shl $4,%esi;");
    asm("loc_6801D49: lea -0x10(%esi,%eax),%edx;");
    asm("loc_6801D4D: shl $4,%ecx;");
    asm("loc_6801D50: push %edx;");
    asm("loc_6801D51: add %eax,%ecx;");
    asm("loc_6801D53: push %ecx;");
    asm("loc_6801D54: call _sub_6801D70;");
    asm("loc_6801D59: add $0xC,%esp;");
    asm("loc_6801D5C: call _sub_6802EC0;");
    asm("loc_6801D61: pop %esi;");
    asm("loc_6801D62: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801D70() // _sub_6801D70
{
    __DEBUG_ASM(6801D70);
    // chunk 0x6801D70 _sub_6801D70
    asm("loc_6801D70: mov 8(%esp),%eax;");
    asm("loc_6801D74: mov 8(%eax),%ecx;");
    asm("loc_6801D77: push %esi;");
    asm("loc_6801D78: mov 8(%esp),%esi;");
    asm("loc_6801D7C: mov %ecx,8(%esi);");
    asm("loc_6801D7F: mov 0xC(%eax),%edx;");
    asm("loc_6801D82: push %eax;");
    asm("loc_6801D83: mov %edx,0xC(%esi);");
    asm("loc_6801D86: call _sub_6801DA0;");
    asm("loc_6801D8B: add $4,%esp;");
    asm("loc_6801D8E: mov %eax,(%esi);");
    asm("loc_6801D90: pop %esi;");
    asm("loc_6801D91: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801DA0() // _sub_6801DA0
{
    __DEBUG_ASM(6801DA0);
    // chunk 0x6801DA0 _sub_6801DA0
    asm("loc_6801DA0: mov 4(%esp),%eax;");
    asm("loc_6801DA4: mov (%eax),%eax;");
    asm("loc_6801DA6: cmp $0xFFFFFFF6,%eax;");
    asm("loc_6801DA9: je loc_6801DC1;");
    asm("loc_6801DAB: cmp $0xFFFFFFF7,%eax;");
    asm("loc_6801DAE: je loc_6801DBB;");
    asm("loc_6801DB0: cmp $0xFFFFFFF8,%eax;");
    asm("loc_6801DB3: jne loc_6801DC6;");
    asm("loc_6801DB5: mov $0xFFFFFFF9,%eax;");
    asm("loc_6801DBA: ret;");
    asm("loc_6801DBB: mov $0xFFFFFFFC,%eax;");
    asm("loc_6801DC0: ret;");
    asm("loc_6801DC1: mov $0xFFFFFFFB,%eax;");
    asm("loc_6801DC6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801DD0() // _sub_6801DD0
{
    __DEBUG_ASM(6801DD0);
    // chunk 0x6801DD0 _sub_6801DD0
    asm("loc_6801DD0: mov 8(%esp),%eax;");
    asm("loc_6801DD4: mov 4(%esp),%ecx;");
    asm("loc_6801DD8: push %eax;");
    asm("loc_6801DD9: push %ecx;");
    asm("loc_6801DDA: call _sub_6805020;");
    asm("loc_6801DDF: push %eax;");
    asm("loc_6801DE0: call _sub_6801DF0;");
    asm("loc_6801DE5: add $0xC,%esp;");
    asm("loc_6801DE8: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801DF0() // _sub_6801DF0
{
    __DEBUG_ASM(6801DF0);
    // chunk 0x6801DF0 _sub_6801DF0
    asm("loc_6801DF0: mov _data_680E604,%eax;");
    asm("loc_6801DF5: mov 4(%eax),%edx;");
    asm("loc_6801DF8: mov (%eax),%ecx;");
    asm("loc_6801DFA: sub %edx,%ecx;");
    asm("loc_6801DFC: mov 0xC(%eax),%edx;");
    asm("loc_6801DFF: sar $4,%ecx;");
    asm("loc_6801E02: sub %edx,%ecx;");
    asm("loc_6801E04: push %ecx;");
    asm("loc_6801E05: call _sub_6802950;");
    asm("loc_6801E0A: mov _data_680E604,%eax;");
    asm("loc_6801E0F: mov 0xC(%eax),%edx;");
    asm("loc_6801E12: mov 4(%eax),%ecx;");
    asm("loc_6801E15: mov 8(%esp),%eax;");
    asm("loc_6801E19: shl $4,%edx;");
    asm("loc_6801E1C: add %ecx,%edx;");
    asm("loc_6801E1E: mov (%eax),%ecx;");
    asm("loc_6801E20: mov %ecx,(%edx);");
    asm("loc_6801E22: mov 4(%eax),%ecx;");
    asm("loc_6801E25: mov %ecx,4(%edx);");
    asm("loc_6801E28: mov 8(%eax),%ecx;");
    asm("loc_6801E2B: mov %ecx,8(%edx);");
    asm("loc_6801E2E: mov 0xC(%eax),%eax;");
    asm("loc_6801E31: mov %eax,0xC(%edx);");
    asm("loc_6801E34: mov _data_680E604,%eax;");
    asm("loc_6801E39: mov 0xC(%eax),%ecx;");
    asm("loc_6801E3C: add $4,%esp;");
    asm("loc_6801E3F: inc %ecx;");
    asm("loc_6801E40: mov %ecx,0xC(%eax);");
    asm("loc_6801E43: mov _data_680E604,%ecx;");
    asm("loc_6801E49: mov 0xC(%ecx),%eax;");
    asm("loc_6801E4C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801E50() // _sub_6801E50
{
    __DEBUG_ASM(6801E50);
    // chunk 0x6801E50 _sub_6801E50
    asm("loc_6801E50: push $1;");
    asm("loc_6801E52: call _sub_6801C50;");
    asm("loc_6801E57: mov _data_680E604,%eax;");
    asm("loc_6801E5C: mov (%eax),%ecx;");
    asm("loc_6801E5E: mov 0xC(%esp),%edx;");
    asm("loc_6801E62: mov 8(%esp),%eax;");
    asm("loc_6801E66: sub $0x10,%ecx;");
    asm("loc_6801E69: push %ecx;");
    asm("loc_6801E6A: push %edx;");
    asm("loc_6801E6B: push %eax;");
    asm("loc_6801E6C: call _sub_68050A0;");
    asm("loc_6801E71: add $0x10,%esp;");
    asm("loc_6801E74: jmp _sub_6801C80;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801E80() // _sub_6801E80
{
    __DEBUG_ASM(6801E80);
    // chunk 0x6801E80 _sub_6801E80
    asm("loc_6801E80: push %esi;");
    asm("loc_6801E81: push $1;");
    asm("loc_6801E83: call _sub_6801C50;");
    asm("loc_6801E88: push $_data_680D384;");
    asm("loc_6801E8D: call _sub_6801F70;");
    asm("loc_6801E92: push $_data_680D384;");
    asm("loc_6801E97: mov %eax,%esi;");
    asm("loc_6801E99: call _sub_6801FB0;");
    asm("loc_6801E9E: add $0xC,%esp;");
    asm("loc_6801EA1: mov %esi,%eax;");
    asm("loc_6801EA3: pop %esi;");
    asm("loc_6801EA4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801EB0() // _sub_6801EB0
{
    __DEBUG_ASM(6801EB0);
    // chunk 0x6801EB0 _sub_6801EB0
    asm("loc_6801EB0: push $2;");
    asm("loc_6801EB2: call _sub_6801C50;");
    asm("loc_6801EB7: add $4,%esp;");
    asm("loc_6801EBA: call _sub_6803D10;");
    asm("loc_6801EBF: jmp _sub_6801C80;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801ED0() // _sub_6801ED0
{
    __DEBUG_ASM(6801ED0);
    // chunk 0x6801ED0 _sub_6801ED0
    asm("loc_6801ED0: push $2;");
    asm("loc_6801ED2: call _sub_6801C50;");
    asm("loc_6801ED7: mov _data_680E604,%eax;");
    asm("loc_6801EDC: mov (%eax),%ecx;");
    asm("loc_6801EDE: mov -0x20(%ecx),%eax;");
    asm("loc_6801EE1: add $4,%esp;");
    asm("loc_6801EE4: cmp $0xFFFFFFFD,%eax;");
    asm("loc_6801EE7: je loc_6801EF6;");
    asm("loc_6801EE9: push $_data_680D394;");
    asm("loc_6801EEE: call _sub_6802E00;");
    asm("loc_6801EF3: add $4,%esp;");
    asm("loc_6801EF6: mov _data_680E604,%edx;");
    asm("loc_6801EFC: mov (%edx),%eax;");
    asm("loc_6801EFE: mov -0x18(%eax),%edx;");
    asm("loc_6801F01: lea -0x10(%eax),%ecx;");
    asm("loc_6801F04: push %ecx;");
    asm("loc_6801F05: push %edx;");
    asm("loc_6801F06: call _sub_68051D0;");
    asm("loc_6801F0B: mov _data_680E604,%ecx;");
    asm("loc_6801F11: mov (%ecx),%edx;");
    asm("loc_6801F13: add $0x10,%eax;");
    asm("loc_6801F16: mov (%eax),%ecx;");
    asm("loc_6801F18: sub $0x20,%edx;");
    asm("loc_6801F1B: mov %ecx,(%edx);");
    asm("loc_6801F1D: mov 4(%eax),%ecx;");
    asm("loc_6801F20: mov %ecx,4(%edx);");
    asm("loc_6801F23: mov 8(%eax),%ecx;");
    asm("loc_6801F26: mov %ecx,8(%edx);");
    asm("loc_6801F29: mov 0xC(%eax),%eax;");
    asm("loc_6801F2C: mov %eax,0xC(%edx);");
    asm("loc_6801F2F: mov _data_680E604,%eax;");
    asm("loc_6801F34: mov (%eax),%ecx;");
    asm("loc_6801F36: add $8,%esp;");
    asm("loc_6801F39: add $0xFFFFFFF0,%ecx;");
    asm("loc_6801F3C: mov %ecx,(%eax);");
    asm("loc_6801F3E: jmp _sub_6801C80;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801F50() // _sub_6801F50
{
    __DEBUG_ASM(6801F50);
    // chunk 0x6801F50 _sub_6801F50
    asm("loc_6801F50: push $3;");
    asm("loc_6801F52: call _sub_6801C50;");
    asm("loc_6801F57: mov _data_680E604,%eax;");
    asm("loc_6801F5C: mov (%eax),%ecx;");
    asm("loc_6801F5E: sub $0x30,%ecx;");
    asm("loc_6801F61: push %ecx;");
    asm("loc_6801F62: call _sub_6803EE0;");
    asm("loc_6801F67: add $8,%esp;");
    asm("loc_6801F6A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801F70() // _sub_6801F70
{
    __DEBUG_ASM(6801F70);
    // chunk 0x6801F70 _sub_6801F70
    asm("loc_6801F70: push $2;");
    asm("loc_6801F72: call _sub_6802870;");
    asm("loc_6801F77: mov 8(%esp),%eax;");
    asm("loc_6801F7B: push %eax;");
    asm("loc_6801F7C: call _sub_6805A80;");
    asm("loc_6801F81: push %eax;");
    asm("loc_6801F82: call _sub_6803F20;");
    asm("loc_6801F87: add $0xC,%esp;");
    asm("loc_6801F8A: jmp _sub_6801C80;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801F90() // _sub_6801F90
{
    __DEBUG_ASM(6801F90);
    // chunk 0x6801F90 _sub_6801F90
    asm("loc_6801F90: mov 4(%esp),%eax;");
    asm("loc_6801F94: push %eax;");
    asm("loc_6801F95: call _sub_6805A80;");
    asm("loc_6801F9A: add $0x10,%eax;");
    asm("loc_6801F9D: push %eax;");
    asm("loc_6801F9E: call _sub_6801DF0;");
    asm("loc_6801FA3: add $8,%esp;");
    asm("loc_6801FA6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801FB0() // _sub_6801FB0
{
    __DEBUG_ASM(6801FB0);
    // chunk 0x6801FB0 _sub_6801FB0
    asm("loc_6801FB0: push $1;");
    asm("loc_6801FB2: call _sub_6801C50;");
    asm("loc_6801FB7: push $2;");
    asm("loc_6801FB9: call _sub_6802870;");
    asm("loc_6801FBE: mov 0xC(%esp),%eax;");
    asm("loc_6801FC2: push %eax;");
    asm("loc_6801FC3: call _sub_6805A80;");
    asm("loc_6801FC8: push %eax;");
    asm("loc_6801FC9: call _sub_6803FD0;");
    asm("loc_6801FCE: add $0x10,%esp;");
    asm("loc_6801FD1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6801FE0() // _sub_6801FE0
{
    __DEBUG_ASM(6801FE0);
    // chunk 0x6801FE0 _sub_6801FE0
    asm("loc_6801FE0: mov 4(%esp),%eax;");
    asm("loc_6801FE4: push %esi;");
    asm("loc_6801FE5: push %eax;");
    asm("loc_6801FE6: call _sub_6805A80;");
    asm("loc_6801FEB: push $1;");
    asm("loc_6801FED: mov %eax,%esi;");
    asm("loc_6801FEF: call _sub_6801C50;");
    asm("loc_6801FF4: mov _data_680E604,%eax;");
    asm("loc_6801FF9: addl $0xFFFFFFF0,(%eax);");
    asm("loc_6801FFC: mov _data_680E604,%ecx;");
    asm("loc_6802002: mov (%ecx),%edx;");
    asm("loc_6802004: push %edx;");
    asm("loc_6802005: push %esi;");
    asm("loc_6802006: call _sub_6805C90;");
    asm("loc_680200B: add $0x10,%esp;");
    asm("loc_680200E: pop %esi;");
    asm("loc_680200F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802010() // _sub_6802010
{
    __DEBUG_ASM(6802010);
    // chunk 0x6802010 _sub_6802010
    asm("loc_6802010: mov 4(%esp),%eax;");
    asm("loc_6802014: test %eax,%eax;");
    asm("loc_6802016: je loc_6802031;");
    asm("loc_6802018: mov _data_680E604,%ecx;");
    asm("loc_680201E: mov 4(%ecx),%edx;");
    asm("loc_6802021: shl $4,%eax;");
    asm("loc_6802024: cmpl $0xFFFFFFFA,-0x10(%edx,%eax);");
    asm("loc_6802029: jne loc_6802031;");
    asm("loc_680202B: mov $1,%eax;");
    asm("loc_6802030: ret;");
    asm("loc_6802031: xor %eax,%eax;");
    asm("loc_6802033: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802040() // _sub_6802040
{
    __DEBUG_ASM(6802040);
    // chunk 0x6802040 _sub_6802040
    asm("loc_6802040: mov 4(%esp),%eax;");
    asm("loc_6802044: test %eax,%eax;");
    asm("loc_6802046: je loc_6802061;");
    asm("loc_6802048: mov _data_680E604,%ecx;");
    asm("loc_680204E: mov 4(%ecx),%edx;");
    asm("loc_6802051: shl $4,%eax;");
    asm("loc_6802054: cmpl $0xFFFFFFFD,-0x10(%edx,%eax);");
    asm("loc_6802059: jne loc_6802061;");
    asm("loc_680205B: mov $1,%eax;");
    asm("loc_6802060: ret;");
    asm("loc_6802061: xor %eax,%eax;");
    asm("loc_6802063: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802070() // _sub_6802070
{
    __DEBUG_ASM(6802070);
    // chunk 0x6802070 _sub_6802070
    asm("loc_6802070: mov 4(%esp),%eax;");
    asm("loc_6802074: test %eax,%eax;");
    asm("loc_6802076: je loc_68020A4;");
    asm("loc_6802078: mov _data_680E604,%ecx;");
    asm("loc_680207E: mov 4(%ecx),%edx;");
    asm("loc_6802081: shl $4,%eax;");
    asm("loc_6802084: mov -0x10(%edx,%eax),%ecx;");
    asm("loc_6802088: cmp $0xFFFFFFFF,%ecx;");
    asm("loc_680208B: lea -0x10(%edx,%eax),%eax;");
    asm("loc_680208F: je loc_680209E;");
    asm("loc_6802091: push %eax;");
    asm("loc_6802092: call _sub_6803AD0;");
    asm("loc_6802097: add $4,%esp;");
    asm("loc_680209A: test %eax,%eax;");
    asm("loc_680209C: jne loc_68020A4;");
    asm("loc_680209E: mov $1,%eax;");
    asm("loc_68020A3: ret;");
    asm("loc_68020A4: xor %eax,%eax;");
    asm("loc_68020A6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68020B0() // _sub_68020B0
{
    __DEBUG_ASM(68020B0);
    // chunk 0x68020B0 _sub_68020B0
    asm("loc_68020B0: mov 4(%esp),%eax;");
    asm("loc_68020B4: push %eax;");
    asm("loc_68020B5: call _sub_6802480;");
    asm("loc_68020BA: add $4,%esp;");
    asm("loc_68020BD: cmp $0xFFFFFFFE,%eax;");
    asm("loc_68020C0: je loc_68020CA;");
    asm("loc_68020C2: cmp $0xFFFFFFFF,%eax;");
    asm("loc_68020C5: je loc_68020CA;");
    asm("loc_68020C7: xor %eax,%eax;");
    asm("loc_68020C9: ret;");
    asm("loc_68020CA: mov $1,%eax;");
    asm("loc_68020CF: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68020D0() // _sub_68020D0
{
    __DEBUG_ASM(68020D0);
    // chunk 0x68020D0 _sub_68020D0
    asm("loc_68020D0: mov 4(%esp),%eax;");
    asm("loc_68020D4: push %eax;");
    asm("loc_68020D5: call _sub_6802480;");
    asm("loc_68020DA: add $4,%esp;");
    asm("loc_68020DD: cmp $0xFFFFFFFC,%eax;");
    asm("loc_68020E0: je loc_68020EA;");
    asm("loc_68020E2: cmp $0xFFFFFFFB,%eax;");
    asm("loc_68020E5: je loc_68020EA;");
    asm("loc_68020E7: xor %eax,%eax;");
    asm("loc_68020E9: ret;");
    asm("loc_68020EA: mov $1,%eax;");
    asm("loc_68020EF: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68020F0() // _sub_68020F0
{
    __DEBUG_ASM(68020F0);
    // chunk 0x68020F0 _sub_68020F0
    asm("loc_68020F0: mov 4(%esp),%eax;");
    asm("loc_68020F4: test %eax,%eax;");
    asm("loc_68020F6: push %esi;");
    asm("loc_68020F7: jne loc_6802101;");
    asm("loc_68020F9: fldl _data_680C180;");
    asm("loc_68020FF: pop %esi;");
    asm("loc_6802100: ret;");
    asm("loc_6802101: shl $4,%eax;");
    asm("loc_6802104: mov %eax,%esi;");
    asm("loc_6802106: mov _data_680E604,%eax;");
    asm("loc_680210B: mov 4(%eax),%ecx;");
    asm("loc_680210E: lea -0x10(%ecx,%esi),%eax;");
    asm("loc_6802112: cmpl $0xFFFFFFFF,(%eax);");
    asm("loc_6802115: je loc_680212C;");
    asm("loc_6802117: push %eax;");
    asm("loc_6802118: call _sub_6803AD0;");
    asm("loc_680211D: add $4,%esp;");
    asm("loc_6802120: test %eax,%eax;");
    asm("loc_6802122: je loc_680212C;");
    asm("loc_6802124: fldl _data_680C180;");
    asm("loc_680212A: pop %esi;");
    asm("loc_680212B: ret;");
    asm("loc_680212C: mov _data_680E604,%edx;");
    asm("loc_6802132: mov 4(%edx),%eax;");
    asm("loc_6802135: fldl -8(%eax,%esi);");
    asm("loc_6802139: pop %esi;");
    asm("loc_680213A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802140() // _sub_6802140
{
    __DEBUG_ASM(6802140);
    // chunk 0x6802140 _sub_6802140
    asm("loc_6802140: push %esi;");
    asm("loc_6802141: call _sub_6803AB0;");
    asm("loc_6802146: mov 8(%esp),%eax;");
    asm("loc_680214A: test %eax,%eax;");
    asm("loc_680214C: je loc_6802183;");
    asm("loc_680214E: shl $4,%eax;");
    asm("loc_6802151: mov %eax,%esi;");
    asm("loc_6802153: mov _data_680E604,%eax;");
    asm("loc_6802158: mov 4(%eax),%ecx;");
    asm("loc_680215B: lea -0x10(%ecx,%esi),%eax;");
    asm("loc_680215F: cmpl $0xFFFFFFFE,(%eax);");
    asm("loc_6802162: je loc_6802171;");
    asm("loc_6802164: push %eax;");
    asm("loc_6802165: call _sub_6803BF0;");
    asm("loc_680216A: add $4,%esp;");
    asm("loc_680216D: test %eax,%eax;");
    asm("loc_680216F: jne loc_6802183;");
    asm("loc_6802171: mov _data_680E604,%edx;");
    asm("loc_6802177: mov 4(%edx),%eax;");
    asm("loc_680217A: mov -8(%eax,%esi),%eax;");
    asm("loc_680217E: add $0x28,%eax;");
    asm("loc_6802181: pop %esi;");
    asm("loc_6802182: ret;");
    asm("loc_6802183: xor %eax,%eax;");
    asm("loc_6802185: pop %esi;");
    asm("loc_6802186: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802190() // _sub_6802190
{
    __DEBUG_ASM(6802190);
    // chunk 0x6802190 _sub_6802190
    asm("loc_6802190: push %esi;");
    asm("loc_6802191: call _sub_6803AB0;");
    asm("loc_6802196: mov 8(%esp),%eax;");
    asm("loc_680219A: test %eax,%eax;");
    asm("loc_680219C: je loc_68021D3;");
    asm("loc_680219E: shl $4,%eax;");
    asm("loc_68021A1: mov %eax,%esi;");
    asm("loc_68021A3: mov _data_680E604,%eax;");
    asm("loc_68021A8: mov 4(%eax),%ecx;");
    asm("loc_68021AB: lea -0x10(%ecx,%esi),%eax;");
    asm("loc_68021AF: cmpl $0xFFFFFFFE,(%eax);");
    asm("loc_68021B2: je loc_68021C1;");
    asm("loc_68021B4: push %eax;");
    asm("loc_68021B5: call _sub_6803BF0;");
    asm("loc_68021BA: add $4,%esp;");
    asm("loc_68021BD: test %eax,%eax;");
    asm("loc_68021BF: jne loc_68021D3;");
    asm("loc_68021C1: mov _data_680E604,%edx;");
    asm("loc_68021C7: mov 4(%edx),%eax;");
    asm("loc_68021CA: mov -8(%eax,%esi),%ecx;");
    asm("loc_68021CE: mov 0x20(%ecx),%eax;");
    asm("loc_68021D1: pop %esi;");
    asm("loc_68021D2: ret;");
    asm("loc_68021D3: xor %eax,%eax;");
    asm("loc_68021D5: pop %esi;");
    asm("loc_68021D6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68021E0() // _sub_68021E0
{
    __DEBUG_ASM(68021E0);
    // chunk 0x68021E0 _sub_68021E0
    asm("loc_68021E0: mov _data_680E604,%eax;");
    asm("loc_68021E5: mov (%eax),%ecx;");
    asm("loc_68021E7: movl $0xFFFFFFFA,(%ecx);");
    asm("loc_68021ED: mov _data_680E604,%eax;");
    asm("loc_68021F2: mov (%eax),%edx;");
    asm("loc_68021F4: cmp 8(%eax),%edx;");
    asm("loc_68021F7: jb loc_6802208;");
    asm("loc_68021F9: push $1;");
    asm("loc_68021FB: call _sub_6802870;");
    asm("loc_6802200: mov _data_680E604,%eax;");
    asm("loc_6802205: add $4,%esp;");
    asm("loc_6802208: addl $0x10,(%eax);");
    asm("loc_680220B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802210() // _sub_6802210
{
    __DEBUG_ASM(6802210);
    // chunk 0x6802210 _sub_6802210
    asm("loc_6802210: mov _data_680E604,%eax;");
    asm("loc_6802215: mov (%eax),%ecx;");
    asm("loc_6802217: movl $0xFFFFFFFF,(%ecx);");
    asm("loc_680221D: mov _data_680E604,%edx;");
    asm("loc_6802223: mov (%edx),%eax;");
    asm("loc_6802225: mov 4(%esp),%ecx;");
    asm("loc_6802229: mov 8(%esp),%edx;");
    asm("loc_680222D: mov %ecx,8(%eax);");
    asm("loc_6802230: mov %edx,0xC(%eax);");
    asm("loc_6802233: mov _data_680E604,%eax;");
    asm("loc_6802238: mov (%eax),%ecx;");
    asm("loc_680223A: cmp 8(%eax),%ecx;");
    asm("loc_680223D: jb loc_680224E;");
    asm("loc_680223F: push $1;");
    asm("loc_6802241: call _sub_6802870;");
    asm("loc_6802246: mov _data_680E604,%eax;");
    asm("loc_680224B: add $4,%esp;");
    asm("loc_680224E: addl $0x10,(%eax);");
    asm("loc_6802251: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802260() // _sub_6802260
{
    __DEBUG_ASM(6802260);
    // chunk 0x6802260 _sub_6802260
    asm("loc_6802260: mov 8(%esp),%eax;");
    asm("loc_6802264: mov 4(%esp),%ecx;");
    asm("loc_6802268: push %eax;");
    asm("loc_6802269: push %ecx;");
    asm("loc_680226A: call _sub_68058A0;");
    asm("loc_680226F: mov _data_680E604,%edx;");
    asm("loc_6802275: mov (%edx),%ecx;");
    asm("loc_6802277: mov %eax,8(%ecx);");
    asm("loc_680227A: mov _data_680E604,%edx;");
    asm("loc_6802280: mov (%edx),%eax;");
    asm("loc_6802282: movl $0xFFFFFFFE,(%eax);");
    asm("loc_6802288: mov _data_680E604,%eax;");
    asm("loc_680228D: mov (%eax),%ecx;");
    asm("loc_680228F: mov 8(%eax),%edx;");
    asm("loc_6802292: add $8,%esp;");
    asm("loc_6802295: cmp %edx,%ecx;");
    asm("loc_6802297: jb loc_68022A8;");
    asm("loc_6802299: push $1;");
    asm("loc_680229B: call _sub_6802870;");
    asm("loc_68022A0: mov _data_680E604,%eax;");
    asm("loc_68022A5: add $4,%esp;");
    asm("loc_68022A8: addl $0x10,(%eax);");
    asm("loc_68022AB: jmp _sub_6803AB0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68022B0() // _sub_68022B0
{
    __DEBUG_ASM(68022B0);
    // chunk 0x68022B0 _sub_68022B0
    asm("loc_68022B0: mov 4(%esp),%edx;");
    asm("loc_68022B4: test %edx,%edx;");
    asm("loc_68022B6: jne loc_68022BD;");
    asm("loc_68022B8: jmp _sub_68021E0;");
    asm("loc_68022BD: push %edi;");
    asm("loc_68022BE: or $0xFFFFFFFF,%ecx;");
    asm("loc_68022C1: xor %eax,%eax;");
    asm("loc_68022C3: mov %edx,%edi;");
    asm("loc_68022C5: repne scas (%edi),%al;");
    asm("loc_68022C7: not %ecx;");
    asm("loc_68022C9: dec %ecx;");
    asm("loc_68022CA: push %ecx;");
    asm("loc_68022CB: push %edx;");
    asm("loc_68022CC: call _sub_6802260;");
    asm("loc_68022D1: add $8,%esp;");
    asm("loc_68022D4: pop %edi;");
    asm("loc_68022D5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68022E0() // _sub_68022E0
{
    __DEBUG_ASM(68022E0);
    // chunk 0x68022E0 _sub_68022E0
    asm("loc_68022E0: push %esi;");
    asm("loc_68022E1: push %edi;");
    asm("loc_68022E2: mov 0xC(%esp),%edi;");
    asm("loc_68022E6: test %edi,%edi;");
    asm("loc_68022E8: jne loc_68022F7;");
    asm("loc_68022EA: push $_data_680D3C4;");
    asm("loc_68022EF: call _sub_6802E00;");
    asm("loc_68022F4: add $4,%esp;");
    asm("loc_68022F7: mov 0x10(%esp),%esi;");
    asm("loc_68022FB: push %esi;");
    asm("loc_68022FC: call _sub_6801C50;");
    asm("loc_6802301: mov _data_680E604,%eax;");
    asm("loc_6802306: mov (%eax),%ecx;");
    asm("loc_6802308: movl $0xFFFFFFFB,(%ecx);");
    asm("loc_680230E: mov _data_680E604,%edx;");
    asm("loc_6802314: mov (%edx),%eax;");
    asm("loc_6802316: mov %edi,8(%eax);");
    asm("loc_6802319: mov _data_680E604,%eax;");
    asm("loc_680231E: mov (%eax),%ecx;");
    asm("loc_6802320: mov 8(%eax),%edx;");
    asm("loc_6802323: add $4,%esp;");
    asm("loc_6802326: cmp %edx,%ecx;");
    asm("loc_6802328: jb loc_6802339;");
    asm("loc_680232A: push $1;");
    asm("loc_680232C: call _sub_6802870;");
    asm("loc_6802331: mov _data_680E604,%eax;");
    asm("loc_6802336: add $4,%esp;");
    asm("loc_6802339: mov (%eax),%edx;");
    asm("loc_680233B: add $0x10,%edx;");
    asm("loc_680233E: push %esi;");
    asm("loc_680233F: mov %edx,(%eax);");
    asm("loc_6802341: call _sub_6803C90;");
    asm("loc_6802346: add $4,%esp;");
    asm("loc_6802349: call _sub_6803AB0;");
    asm("loc_680234E: pop %edi;");
    asm("loc_680234F: pop %esi;");
    asm("loc_6802350: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802360() // _sub_6802360
{
    __DEBUG_ASM(6802360);
    // chunk 0x6802360 _sub_6802360
    asm("loc_6802360: push %esi;");
    asm("loc_6802361: mov 0xC(%esp),%esi;");
    asm("loc_6802365: test %esi,%esi;");
    asm("loc_6802367: jge loc_6802377;");
    asm("loc_6802369: cmp $0xFFFFFFFF,%esi;");
    asm("loc_680236C: je loc_6802377;");
    asm("loc_680236E: push %esi;");
    asm("loc_680236F: call _sub_6804ED0;");
    asm("loc_6802374: add $4,%esp;");
    asm("loc_6802377: mov 8(%esp),%eax;");
    asm("loc_680237B: push %esi;");
    asm("loc_680237C: push %eax;");
    asm("loc_680237D: call _sub_6805640;");
    asm("loc_6802382: mov _data_680E604,%ecx;");
    asm("loc_6802388: mov (%ecx),%edx;");
    asm("loc_680238A: mov %eax,8(%edx);");
    asm("loc_680238D: mov _data_680E604,%eax;");
    asm("loc_6802392: mov (%eax),%ecx;");
    asm("loc_6802394: movl $0,(%ecx);");
    asm("loc_680239A: mov _data_680E604,%eax;");
    asm("loc_680239F: mov (%eax),%edx;");
    asm("loc_68023A1: mov 8(%eax),%ecx;");
    asm("loc_68023A4: add $8,%esp;");
    asm("loc_68023A7: cmp %ecx,%edx;");
    asm("loc_68023A9: pop %esi;");
    asm("loc_68023AA: jb loc_68023BB;");
    asm("loc_68023AC: push $1;");
    asm("loc_68023AE: call _sub_6802870;");
    asm("loc_68023B3: mov _data_680E604,%eax;");
    asm("loc_68023B8: add $4,%esp;");
    asm("loc_68023BB: addl $0x10,(%eax);");
    asm("loc_68023BE: jmp _sub_6803AB0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68023D0() // _sub_68023D0
{
    __DEBUG_ASM(68023D0);
    // chunk 0x68023D0 _sub_68023D0
    asm("loc_68023D0: mov _data_680E604,%ecx;");
    asm("loc_68023D6: mov (%ecx),%edx;");
    asm("loc_68023D8: mov 4(%esp),%eax;");
    asm("loc_68023DC: mov (%eax),%ecx;");
    asm("loc_68023DE: mov %ecx,(%edx);");
    asm("loc_68023E0: mov 4(%eax),%ecx;");
    asm("loc_68023E3: mov %ecx,4(%edx);");
    asm("loc_68023E6: mov 8(%eax),%ecx;");
    asm("loc_68023E9: mov %ecx,8(%edx);");
    asm("loc_68023EC: mov 0xC(%eax),%eax;");
    asm("loc_68023EF: mov %eax,0xC(%edx);");
    asm("loc_68023F2: mov _data_680E604,%eax;");
    asm("loc_68023F7: mov (%eax),%ecx;");
    asm("loc_68023F9: cmp 8(%eax),%ecx;");
    asm("loc_68023FC: jb loc_680240D;");
    asm("loc_68023FE: push $1;");
    asm("loc_6802400: call _sub_6802870;");
    asm("loc_6802405: mov _data_680E604,%eax;");
    asm("loc_680240A: add $4,%esp;");
    asm("loc_680240D: addl $0x10,(%eax);");
    asm("loc_6802410: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802420() // _sub_6802420
{
    __DEBUG_ASM(6802420);
    // chunk 0x6802420 _sub_6802420
    asm("loc_6802420: push %esi;");
    asm("loc_6802421: mov 8(%esp),%esi;");
    asm("loc_6802425: test %esi,%esi;");
    asm("loc_6802427: jne loc_6802436;");
    asm("loc_6802429: push $_data_680D3F4;");
    asm("loc_680242E: call _sub_6802E00;");
    asm("loc_6802433: add $4,%esp;");
    asm("loc_6802436: mov _data_680E604,%eax;");
    asm("loc_680243B: mov 4(%eax),%ecx;");
    asm("loc_680243E: mov (%eax),%eax;");
    asm("loc_6802440: shl $4,%esi;");
    asm("loc_6802443: lea -0x10(%ecx,%esi),%edx;");
    asm("loc_6802447: push %edx;");
    asm("loc_6802448: push %eax;");
    asm("loc_6802449: call _sub_6801D70;");
    asm("loc_680244E: mov _data_680E604,%eax;");
    asm("loc_6802453: mov (%eax),%ecx;");
    asm("loc_6802455: mov 8(%eax),%edx;");
    asm("loc_6802458: add $8,%esp;");
    asm("loc_680245B: cmp %edx,%ecx;");
    asm("loc_680245D: pop %esi;");
    asm("loc_680245E: jb loc_680246F;");
    asm("loc_6802460: push $1;");
    asm("loc_6802462: call _sub_6802870;");
    asm("loc_6802467: mov _data_680E604,%eax;");
    asm("loc_680246C: add $4,%esp;");
    asm("loc_680246F: addl $0x10,(%eax);");
    asm("loc_6802472: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802480() // _sub_6802480
{
    asm("jmp dgb_6802480;"); // jumptable skip
    asm(".long _jmp_68024E8;"); // jumptable address
    __DEBUG_ASM(6802480);
    // chunk 0x6802480 _sub_6802480
    asm("loc_6802480: mov 4(%esp),%eax;");
    asm("loc_6802484: test %eax,%eax;");
    asm("loc_6802486: push %esi;");
    asm("loc_6802487: jne loc_6802490;");
    asm("loc_6802489: mov $0xFFFFFFFA,%eax;");
    asm("loc_680248E: pop %esi;");
    asm("loc_680248F: ret;");
    asm("loc_6802490: mov _data_680E604,%ecx;");
    asm("loc_6802496: mov 4(%ecx),%edx;");
    asm("loc_6802499: shl $4,%eax;");
    asm("loc_680249C: mov -0x10(%edx,%eax),%esi;");
    asm("loc_68024A0: lea -0x10(%edx,%eax),%ecx;");
    asm("loc_68024A4: lea 0xA(%esi),%edx;");
    asm("loc_68024A7: cmp $0xA,%edx;");
    asm("loc_68024AA: ja loc_68024E1;");
    asm("loc_68024AC: xor %eax,%eax;");
    asm("loc_68024AE: mov _data_6802500(%edx),%al;");
    asm("loc_68024B4: jmpl *_jmp_68024E8(,%eax,4);");
    asm("loc_68024BB: mov 8(%ecx),%ecx;");
    asm("loc_68024BE: mov 0x10(%ecx),%eax;");
    asm("loc_68024C1: pop %esi;");
    asm("loc_68024C2: ret;");
    asm("loc_68024C3: mov 8(%ecx),%edx;");
    asm("loc_68024C6: mov 0x14(%edx),%eax;");
    asm("loc_68024C9: pop %esi;");
    asm("loc_68024CA: ret;");
    asm("loc_68024CB: mov $0xFFFFFFFC,%eax;");
    asm("loc_68024D0: pop %esi;");
    asm("loc_68024D1: ret;");
    asm("loc_68024D2: mov $0xFFFFFFFB,%eax;");
    asm("loc_68024D7: pop %esi;");
    asm("loc_68024D8: ret;");
    asm("loc_68024D9: mov 8(%ecx),%eax;");
    asm("loc_68024DC: mov 0x10(%eax),%eax;");
    asm("loc_68024DF: pop %esi;");
    asm("loc_68024E0: ret;");
    asm("loc_68024E1: mov %esi,%eax;");
    asm("loc_68024E3: pop %esi;");
    asm("loc_68024E4: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_68024E8: .long loc_68024D2;");
    asm(".long loc_68024CB;");
    asm(".long loc_68024D9;");
    asm(".long loc_68024C3;");
    asm(".long loc_68024BB;");
    asm(".long loc_68024E1;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6802480);
_naked _weak void _sub_6802510() // _sub_6802510
{
    __DEBUG_ASM(6802510);
    // chunk 0x6802510 _sub_6802510
    asm("loc_6802510: push %esi;");
    asm("loc_6802511: push $1;");
    asm("loc_6802513: call _sub_6801C50;");
    asm("loc_6802518: mov 0xC(%esp),%esi;");
    asm("loc_680251C: push %esi;");
    asm("loc_680251D: call _sub_6804ED0;");
    asm("loc_6802522: mov _data_680E604,%eax;");
    asm("loc_6802527: mov (%eax),%eax;");
    asm("loc_6802529: mov -0x10(%eax),%ecx;");
    asm("loc_680252C: add $8,%esp;");
    asm("loc_680252F: cmp $0xFFFFFFFD,%ecx;");
    asm("loc_6802532: je loc_6802570;");
    asm("loc_6802534: test %ecx,%ecx;");
    asm("loc_6802536: je loc_6802560;");
    asm("loc_6802538: shl $2,%ecx;");
    asm("loc_680253B: mov $_off_680D930,%edx;");
    asm("loc_6802540: sub %ecx,%edx;");
    asm("loc_6802542: mov (%edx),%eax;");
    asm("loc_6802544: push %eax;");
    asm("loc_6802545: push $_data_680D41C;");
    asm("loc_680254A: call _sub_6805FB0;");
    asm("loc_680254F: mov _data_680E604,%eax;");
    asm("loc_6802554: mov (%eax),%ecx;");
    asm("loc_6802556: add $8,%esp;");
    asm("loc_6802559: add $0xFFFFFFF0,%ecx;");
    asm("loc_680255C: mov %ecx,(%eax);");
    asm("loc_680255E: pop %esi;");
    asm("loc_680255F: ret;");
    asm("loc_6802560: mov -8(%eax),%ecx;");
    asm("loc_6802563: mov %esi,0x10(%ecx);");
    asm("loc_6802566: mov _data_680E604,%eax;");
    asm("loc_680256B: addl $0xFFFFFFF0,(%eax);");
    asm("loc_680256E: pop %esi;");
    asm("loc_680256F: ret;");
    asm("loc_6802570: mov -8(%eax),%edx;");
    asm("loc_6802573: mov %esi,0x14(%edx);");
    asm("loc_6802576: mov _data_680E604,%eax;");
    asm("loc_680257B: addl $0xFFFFFFF0,(%eax);");
    asm("loc_680257E: pop %esi;");
    asm("loc_680257F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802580() // _sub_6802580
{
    __DEBUG_ASM(6802580);
    // chunk 0x6802580 _sub_6802580
    asm("loc_6802580: push %esi;");
    asm("loc_6802581: mov 8(%esp),%esi;");
    asm("loc_6802585: test %esi,%esi;");
    asm("loc_6802587: jne loc_6802593;");
    asm("loc_6802589: mov _data_680E604,%eax;");
    asm("loc_680258E: mov 0x58(%eax),%esi;");
    asm("loc_6802591: jmp loc_68025A8;");
    asm("loc_6802593: cmp (%esi),%esi;");
    asm("loc_6802595: jne loc_68025A6;");
    asm("loc_6802597: push $_data_680D440;");
    asm("loc_680259C: push $1;");
    asm("loc_680259E: call _sub_6805D80;");
    asm("loc_68025A3: add $8,%esp;");
    asm("loc_68025A6: mov (%esi),%esi;");
    asm("loc_68025A8: test %esi,%esi;");
    asm("loc_68025AA: je loc_6802606;");
    asm("loc_68025AC: mov $0xFFFFFFFA,%eax;");
    asm("loc_68025B1: cmp %eax,0x10(%esi);");
    asm("loc_68025B4: jne loc_68025C0;");
    asm("loc_68025B6: mov (%esi),%esi;");
    asm("loc_68025B8: test %esi,%esi;");
    asm("loc_68025BA: jne loc_68025B1;");
    asm("loc_68025BC: mov %esi,%eax;");
    asm("loc_68025BE: pop %esi;");
    asm("loc_68025BF: ret;");
    asm("loc_68025C0: test %esi,%esi;");
    asm("loc_68025C2: je loc_6802606;");
    asm("loc_68025C4: mov _data_680E604,%ecx;");
    asm("loc_68025CA: mov (%ecx),%edx;");
    asm("loc_68025CC: movl $0xFFFFFFFE,(%edx);");
    asm("loc_68025D2: mov _data_680E604,%eax;");
    asm("loc_68025D7: mov (%eax),%ecx;");
    asm("loc_68025D9: mov %esi,8(%ecx);");
    asm("loc_68025DC: mov _data_680E604,%eax;");
    asm("loc_68025E1: mov (%eax),%edx;");
    asm("loc_68025E3: cmp 8(%eax),%edx;");
    asm("loc_68025E6: jb loc_68025F7;");
    asm("loc_68025E8: push $1;");
    asm("loc_68025EA: call _sub_6802870;");
    asm("loc_68025EF: mov _data_680E604,%eax;");
    asm("loc_68025F4: add $4,%esp;");
    asm("loc_68025F7: addl $0x10,(%eax);");
    asm("loc_68025FA: lea 0x10(%esi),%eax;");
    asm("loc_68025FD: push %eax;");
    asm("loc_68025FE: call _sub_68023D0;");
    asm("loc_6802603: add $4,%esp;");
    asm("loc_6802606: mov %esi,%eax;");
    asm("loc_6802608: pop %esi;");
    asm("loc_6802609: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802610() // _sub_6802610
{
    __DEBUG_ASM(6802610);
    // chunk 0x6802610 _sub_6802610
    asm("loc_6802610: mov 4(%esp),%eax;");
    asm("loc_6802614: test %eax,%eax;");
    asm("loc_6802616: je loc_6802621;");
    asm("loc_6802618: push %eax;");
    asm("loc_6802619: call _sub_6805A80;");
    asm("loc_680261E: add $4,%esp;");
    asm("loc_6802621: push %esi;");
    asm("loc_6802622: push %eax;");
    asm("loc_6802623: call _sub_6802580;");
    asm("loc_6802628: mov %eax,%esi;");
    asm("loc_680262A: add $4,%esp;");
    asm("loc_680262D: test %esi,%esi;");
    asm("loc_680262F: je loc_6802640;");
    asm("loc_6802631: push $2;");
    asm("loc_6802633: call _sub_6802650;");
    asm("loc_6802638: add $4,%esp;");
    asm("loc_680263B: lea 0x28(%esi),%eax;");
    asm("loc_680263E: pop %esi;");
    asm("loc_680263F: ret;");
    asm("loc_6802640: push $0;");
    asm("loc_6802642: call _sub_6802650;");
    asm("loc_6802647: add $4,%esp;");
    asm("loc_680264A: xor %eax,%eax;");
    asm("loc_680264C: pop %esi;");
    asm("loc_680264D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802650() // _sub_6802650
{
    __DEBUG_ASM(6802650);
    // chunk 0x6802650 _sub_6802650
    asm("loc_6802650: mov _data_680E604,%eax;");
    asm("loc_6802655: mov 4(%eax),%edx;");
    asm("loc_6802658: mov (%eax),%ecx;");
    asm("loc_680265A: sub %edx,%ecx;");
    asm("loc_680265C: sar $4,%ecx;");
    asm("loc_680265F: mov %ecx,0xC(%eax);");
    asm("loc_6802662: mov _data_680E604,%eax;");
    asm("loc_6802667: mov 0xC(%eax),%edx;");
    asm("loc_680266A: mov 4(%esp),%ecx;");
    asm("loc_680266E: sub %ecx,%edx;");
    asm("loc_6802670: mov %edx,0x10(%eax);");
    asm("loc_6802673: mov _data_680E604,%eax;");
    asm("loc_6802678: mov %ecx,0x14(%eax);");
    asm("loc_680267B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802680() // _sub_6802680
{
    __DEBUG_ASM(6802680);
    // chunk 0x6802680 _sub_6802680
    asm("loc_6802680: mov 4(%esp),%ecx;");
    asm("loc_6802684: mov 0xC(%ecx),%eax;");
    asm("loc_6802687: push %esi;");
    asm("loc_6802688: push %edi;");
    asm("loc_6802689: mov 0x10(%esp),%edi;");
    asm("loc_680268D: cmp %eax,%edi;");
    asm("loc_680268F: jge loc_68026AD;");
    asm("loc_6802691: mov 8(%ecx),%edx;");
    asm("loc_6802694: mov %edi,%esi;");
    asm("loc_6802696: shl $5,%esi;");
    asm("loc_6802699: add %edx,%esi;");
    asm("loc_680269B: mov $0xFFFFFFFA,%ecx;");
    asm("loc_68026A0: cmp %ecx,0x10(%esi);");
    asm("loc_68026A3: jne loc_68026B2;");
    asm("loc_68026A5: inc %edi;");
    asm("loc_68026A6: add $0x20,%esi;");
    asm("loc_68026A9: cmp %eax,%edi;");
    asm("loc_68026AB: jl loc_68026A0;");
    asm("loc_68026AD: pop %edi;");
    asm("loc_68026AE: xor %eax,%eax;");
    asm("loc_68026B0: pop %esi;");
    asm("loc_68026B1: ret;");
    asm("loc_68026B2: push %esi;");
    asm("loc_68026B3: call _sub_68023D0;");
    asm("loc_68026B8: add $0x10,%esi;");
    asm("loc_68026BB: push %esi;");
    asm("loc_68026BC: call _sub_68023D0;");
    asm("loc_68026C1: add $8,%esp;");
    asm("loc_68026C4: lea 1(%edi),%eax;");
    asm("loc_68026C7: pop %edi;");
    asm("loc_68026C8: pop %esi;");
    asm("loc_68026C9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68026D0() // _sub_68026D0
{
    __DEBUG_ASM(68026D0);
    // chunk 0x68026D0 _sub_68026D0
    asm("loc_68026D0: mov 4(%esp),%ecx;");
    asm("loc_68026D4: mov _data_680E604,%eax;");
    asm("loc_68026D9: mov %ecx,_data_680E604;");
    asm("loc_68026DF: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68026E0() // _sub_68026E0
{
    __DEBUG_ASM(68026E0);
    // chunk 0x68026E0 _sub_68026E0
    asm("loc_68026E0: mov _data_680E604,%eax;");
    asm("loc_68026E5: mov 4(%eax),%ecx;");
    asm("loc_68026E8: mov (%eax),%eax;");
    asm("loc_68026EA: sub %ecx,%eax;");
    asm("loc_68026EC: sub $0x10,%eax;");
    asm("loc_68026EF: sar $4,%eax;");
    asm("loc_68026F2: push %esi;");
    asm("loc_68026F3: js loc_6802720;");
    asm("loc_68026F5: mov 8(%esp),%esi;");
    asm("loc_68026F9: mov %eax,%edx;");
    asm("loc_68026FB: shl $4,%edx;");
    asm("loc_68026FE: add %ecx,%edx;");
    asm("loc_6802700: mov (%edx),%ecx;");
    asm("loc_6802702: cmp $0xFFFFFFF8,%ecx;");
    asm("loc_6802705: je loc_6802711;");
    asm("loc_6802707: cmp $0xFFFFFFF7,%ecx;");
    asm("loc_680270A: je loc_6802711;");
    asm("loc_680270C: cmp $0xFFFFFFF6,%ecx;");
    asm("loc_680270F: jne loc_6802718;");
    asm("loc_6802711: mov %esi,%ecx;");
    asm("loc_6802713: dec %esi;");
    asm("loc_6802714: test %ecx,%ecx;");
    asm("loc_6802716: je loc_6802724;");
    asm("loc_6802718: dec %eax;");
    asm("loc_6802719: sub $0x10,%edx;");
    asm("loc_680271C: test %eax,%eax;");
    asm("loc_680271E: jge loc_6802700;");
    asm("loc_6802720: xor %eax,%eax;");
    asm("loc_6802722: pop %esi;");
    asm("loc_6802723: ret;");
    asm("loc_6802724: shl $4,%eax;");
    asm("loc_6802727: sar $4,%eax;");
    asm("loc_680272A: inc %eax;");
    asm("loc_680272B: pop %esi;");
    asm("loc_680272C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802730() // _sub_6802730
{
    __DEBUG_ASM(6802730);
    // chunk 0x6802730 _sub_6802730
    asm("loc_6802730: mov 4(%esp),%eax;");
    asm("loc_6802734: push %esi;");
    asm("loc_6802735: push %eax;");
    asm("loc_6802736: call _sub_6801BD0;");
    asm("loc_680273B: mov %eax,%esi;");
    asm("loc_680273D: add $4,%esp;");
    asm("loc_6802740: test %esi,%esi;");
    asm("loc_6802742: je loc_680275A;");
    asm("loc_6802744: push %esi;");
    asm("loc_6802745: call _sub_6801DA0;");
    asm("loc_680274A: add $4,%esp;");
    asm("loc_680274D: cmp $0xFFFFFFF9,%eax;");
    asm("loc_6802750: jne loc_680275A;");
    asm("loc_6802752: mov 8(%esi),%ecx;");
    asm("loc_6802755: mov 8(%ecx),%eax;");
    asm("loc_6802758: pop %esi;");
    asm("loc_6802759: ret;");
    asm("loc_680275A: xor %eax,%eax;");
    asm("loc_680275C: pop %esi;");
    asm("loc_680275D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802760() // _sub_6802760
{
    __DEBUG_ASM(6802760);
    // chunk 0x6802760 _sub_6802760
    asm("loc_6802760: mov _data_680E604,%eax;");
    asm("loc_6802765: mov 4(%esp),%ecx;");
    asm("loc_6802769: mov 4(%eax),%edx;");
    asm("loc_680276C: shl $4,%ecx;");
    asm("loc_680276F: lea -0x10(%edx,%ecx),%ecx;");
    asm("loc_6802773: mov (%eax),%edx;");
    asm("loc_6802775: push %esi;");
    asm("loc_6802776: push %ecx;");
    asm("loc_6802777: push %edx;");
    asm("loc_6802778: call _sub_6801D70;");
    asm("loc_680277D: push $_sub_68027C0;");
    asm("loc_6802782: call _sub_6805CD0;");
    asm("loc_6802787: mov 0x18(%esp),%esi;");
    asm("loc_680278B: add $0xC,%esp;");
    asm("loc_680278E: test %eax,%eax;");
    asm("loc_6802790: mov %eax,(%esi);");
    asm("loc_6802792: je loc_680279B;");
    asm("loc_6802794: mov $_data_680D468,%eax;");
    asm("loc_6802799: pop %esi;");
    asm("loc_680279A: ret;");
    asm("loc_680279B: push $_sub_68027C0;");
    asm("loc_68027A0: call _sub_6805170;");
    asm("loc_68027A5: add $4,%esp;");
    asm("loc_68027A8: mov %eax,(%esi);");
    asm("loc_68027AA: test %eax,%eax;");
    asm("loc_68027AC: mov $_data_680D45C,%eax;");
    asm("loc_68027B1: jne loc_68027B8;");
    asm("loc_68027B3: mov $_data_680E600,%eax;");
    asm("loc_68027B8: pop %esi;");
    asm("loc_68027B9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68027C0() // _sub_68027C0
{
    __DEBUG_ASM(68027C0);
    // chunk 0x68027C0 _sub_68027C0
    asm("loc_68027C0: mov _data_680E604,%eax;");
    asm("loc_68027C5: mov (%eax),%eax;");
    asm("loc_68027C7: mov 4(%esp),%ecx;");
    asm("loc_68027CB: mov (%ecx),%edx;");
    asm("loc_68027CD: cmp (%eax),%edx;");
    asm("loc_68027CF: je loc_68027D4;");
    asm("loc_68027D1: xor %eax,%eax;");
    asm("loc_68027D3: ret;");
    asm("loc_68027D4: push %eax;");
    asm("loc_68027D5: push %ecx;");
    asm("loc_68027D6: call _sub_6806100;");
    asm("loc_68027DB: add $8,%esp;");
    asm("loc_68027DE: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68027E0() // _sub_68027E0
{
    __DEBUG_ASM(68027E0);
    // chunk 0x68027E0 _sub_68027E0
    asm("loc_68027E0: push $1;");
    asm("loc_68027E2: call _sub_6801C50;");
    asm("loc_68027E7: mov _data_680E604,%ecx;");
    asm("loc_68027ED: mov 8(%esp),%eax;");
    asm("loc_68027F1: mov (%ecx),%edx;");
    asm("loc_68027F3: push %eax;");
    asm("loc_68027F4: sub $0x10,%edx;");
    asm("loc_68027F7: push %edx;");
    asm("loc_68027F8: call _sub_6803540;");
    asm("loc_68027FD: mov _data_680E604,%ecx;");
    asm("loc_6802803: mov (%ecx),%edx;");
    asm("loc_6802805: add $0xFFFFFFF0,%edx;");
    asm("loc_6802808: add $0xC,%esp;");
    asm("loc_680280B: mov %edx,(%ecx);");
    asm("loc_680280D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802810() // _sub_6802810
{
    __DEBUG_ASM(6802810);
    // chunk 0x6802810 _sub_6802810
    asm("loc_6802810: mov 4(%esp),%eax;");
    asm("loc_6802814: push %eax;");
    asm("loc_6802815: call _sub_6803620;");
    asm("loc_680281A: add $4,%esp;");
    asm("loc_680281D: test %eax,%eax;");
    asm("loc_680281F: je loc_680282B;");
    asm("loc_6802821: push %eax;");
    asm("loc_6802822: call _sub_6801DF0;");
    asm("loc_6802827: add $4,%esp;");
    asm("loc_680282A: ret;");
    asm("loc_680282B: xor %eax,%eax;");
    asm("loc_680282D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802830() // _sub_6802830
{
    __DEBUG_ASM(6802830);
    // chunk 0x6802830 _sub_6802830
    asm("loc_6802830: push $0x800;");
    asm("loc_6802835: push $0;");
    asm("loc_6802837: call _sub_68065D0;");
    asm("loc_680283C: mov _data_680E604,%ecx;");
    asm("loc_6802842: mov %eax,4(%ecx);");
    asm("loc_6802845: mov _data_680E604,%eax;");
    asm("loc_680284A: mov 4(%eax),%edx;");
    asm("loc_680284D: mov %edx,(%eax);");
    asm("loc_680284F: mov _data_680E604,%eax;");
    asm("loc_6802854: mov 4(%eax),%ecx;");
    asm("loc_6802857: add $0x7F0,%ecx;");
    asm("loc_680285D: add $8,%esp;");
    asm("loc_6802860: mov %ecx,8(%eax);");
    asm("loc_6802863: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802870() // _sub_6802870
{
    __DEBUG_ASM(6802870);
    // chunk 0x6802870 _sub_6802870
    asm("loc_6802870: mov 4(%esp),%edx;");
    asm("loc_6802874: push %esi;");
    asm("loc_6802875: mov _data_680E604,%esi;");
    asm("loc_680287B: mov 8(%esi),%eax;");
    asm("loc_680287E: push %edi;");
    asm("loc_680287F: mov (%esi),%edi;");
    asm("loc_6802881: mov %eax,%ecx;");
    asm("loc_6802883: sub %edi,%ecx;");
    asm("loc_6802885: sar $4,%ecx;");
    asm("loc_6802888: cmp %edx,%ecx;");
    asm("loc_680288A: jg loc_68028F7;");
    asm("loc_680288C: mov 4(%esi),%ecx;");
    asm("loc_680288F: push %ebx;");
    asm("loc_6802890: sub %ecx,%eax;");
    asm("loc_6802892: push %ebp;");
    asm("loc_6802893: sar $4,%eax;");
    asm("loc_6802896: lea 0x80(%eax,%edx),%ebp;");
    asm("loc_680289D: mov %ebp,%ebx;");
    asm("loc_680289F: shl $4,%ebx;");
    asm("loc_68028A2: sub %ecx,%edi;");
    asm("loc_68028A4: push %ebx;");
    asm("loc_68028A5: push %ecx;");
    asm("loc_68028A6: sar $4,%edi;");
    asm("loc_68028A9: call _sub_68065D0;");
    asm("loc_68028AE: shl $4,%edi;");
    asm("loc_68028B1: add $8,%esp;");
    asm("loc_68028B4: add %eax,%edi;");
    asm("loc_68028B6: lea -0x10(%ebx,%eax),%edx;");
    asm("loc_68028BA: cmp $0x1770,%ebp;");
    asm("loc_68028C0: pop %ebp;");
    asm("loc_68028C1: mov %eax,4(%esi);");
    asm("loc_68028C4: mov %edx,8(%esi);");
    asm("loc_68028C7: mov %edi,(%esi);");
    asm("loc_68028C9: pop %ebx;");
    asm("loc_68028CA: jl loc_68028F7;");
    asm("loc_68028CC: push $0x64;");
    asm("loc_68028CE: call _sub_68026E0;");
    asm("loc_68028D3: add $4,%esp;");
    asm("loc_68028D6: test %eax,%eax;");
    asm("loc_68028D8: jne loc_68028EA;");
    asm("loc_68028DA: push $_data_680D484;");
    asm("loc_68028DF: call _sub_6802E00;");
    asm("loc_68028E4: add $4,%esp;");
    asm("loc_68028E7: pop %edi;");
    asm("loc_68028E8: pop %esi;");
    asm("loc_68028E9: ret;");
    asm("loc_68028EA: push $_data_680D470;");
    asm("loc_68028EF: call _sub_6802E00;");
    asm("loc_68028F4: add $4,%esp;");
    asm("loc_68028F7: pop %edi;");
    asm("loc_68028F8: pop %esi;");
    asm("loc_68028F9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802900() // _sub_6802900
{
    __DEBUG_ASM(6802900);
    // chunk 0x6802900 _sub_6802900
    asm("loc_6802900: mov _data_680E604,%eax;");
    asm("loc_6802905: mov (%eax),%ecx;");
    asm("loc_6802907: push %esi;");
    asm("loc_6802908: mov 4(%eax),%esi;");
    asm("loc_680290B: mov %ecx,%edx;");
    asm("loc_680290D: sub %esi,%edx;");
    asm("loc_680290F: mov 8(%esp),%esi;");
    asm("loc_6802913: sar $4,%edx;");
    asm("loc_6802916: sub %edx,%esi;");
    asm("loc_6802918: test %esi,%esi;");
    asm("loc_680291A: jg loc_6802925;");
    asm("loc_680291C: shl $4,%esi;");
    asm("loc_680291F: add %ecx,%esi;");
    asm("loc_6802921: mov %esi,(%eax);");
    asm("loc_6802923: pop %esi;");
    asm("loc_6802924: ret;");
    asm("loc_6802925: push %esi;");
    asm("loc_6802926: call _sub_6802870;");
    asm("loc_680292B: add $4,%esp;");
    asm("loc_680292E: lea (%esi),%ecx;");
    asm("loc_6802930: mov _data_680E604,%eax;");
    asm("loc_6802935: mov (%eax),%edx;");
    asm("loc_6802937: movl $0xFFFFFFFA,(%edx);");
    asm("loc_680293D: mov _data_680E604,%eax;");
    asm("loc_6802942: mov (%eax),%edx;");
    asm("loc_6802944: add $0x10,%edx;");
    asm("loc_6802947: dec %ecx;");
    asm("loc_6802948: mov %edx,(%eax);");
    asm("loc_680294A: jne loc_6802930;");
    asm("loc_680294C: pop %esi;");
    asm("loc_680294D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802950() // _sub_6802950
{
    __DEBUG_ASM(6802950);
    // chunk 0x6802950 _sub_6802950
    asm("loc_6802950: mov _data_680E604,%ecx;");
    asm("loc_6802956: mov 4(%esp),%eax;");
    asm("loc_680295A: mov (%ecx),%ecx;");
    asm("loc_680295C: shl $4,%eax;");
    asm("loc_680295F: sub %eax,%ecx;");
    asm("loc_6802961: push %eax;");
    asm("loc_6802962: push %ecx;");
    asm("loc_6802963: add $0x10,%ecx;");
    asm("loc_6802966: push %ecx;");
    asm("loc_6802967: calll *_import_680C02C;");
    asm("loc_680296D: mov _data_680E604,%eax;");
    asm("loc_6802972: mov (%eax),%edx;");
    asm("loc_6802974: mov 8(%eax),%ecx;");
    asm("loc_6802977: add $0xC,%esp;");
    asm("loc_680297A: cmp %ecx,%edx;");
    asm("loc_680297C: jb loc_680298D;");
    asm("loc_680297E: push $1;");
    asm("loc_6802980: call _sub_6802870;");
    asm("loc_6802985: mov _data_680E604,%eax;");
    asm("loc_680298A: add $4,%esp;");
    asm("loc_680298D: addl $0x10,(%eax);");
    asm("loc_6802990: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68029A0() // _sub_68029A0
{
    __DEBUG_ASM(68029A0);
    // chunk 0x68029A0 _sub_68029A0
    asm("loc_68029A0: mov _data_680E604,%eax;");
    asm("loc_68029A5: push %ebx;");
    asm("loc_68029A6: lea 0xC(%eax),%ecx;");
    asm("loc_68029A9: push %ebp;");
    asm("loc_68029AA: push %esi;");
    asm("loc_68029AB: mov 4(%eax),%esi;");
    asm("loc_68029AE: mov %ecx,%edx;");
    asm("loc_68029B0: push %edi;");
    asm("loc_68029B1: mov (%edx),%edi;");
    asm("loc_68029B3: mov 4(%edx),%ebx;");
    asm("loc_68029B6: mov 8(%edx),%ebp;");
    asm("loc_68029B9: mov (%eax),%edx;");
    asm("loc_68029BB: sub %esi,%edx;");
    asm("loc_68029BD: sar $4,%edx;");
    asm("loc_68029C0: mov %edx,(%ecx);");
    asm("loc_68029C2: mov _data_680E604,%eax;");
    asm("loc_68029C7: mov 0xC(%eax),%ecx;");
    asm("loc_68029CA: mov 0x14(%esp),%edx;");
    asm("loc_68029CE: mov %ecx,0x10(%eax);");
    asm("loc_68029D1: mov _data_680E604,%eax;");
    asm("loc_68029D6: mov 0x10(%eax),%esi;");
    asm("loc_68029D9: movl $0,0x14(%eax);");
    asm("loc_68029E0: mov _data_680E604,%eax;");
    asm("loc_68029E5: push %edx;");
    asm("loc_68029E6: calll *0x3C(%eax);");
    asm("loc_68029E9: mov _data_680E604,%eax;");
    asm("loc_68029EE: mov 4(%eax),%ecx;");
    asm("loc_68029F1: shl $4,%esi;");
    asm("loc_68029F4: add %esi,%ecx;");
    asm("loc_68029F6: mov %ecx,(%eax);");
    asm("loc_68029F8: mov _data_680E604,%edx;");
    asm("loc_68029FE: add $4,%esp;");
    asm("loc_6802A01: add $0xC,%edx;");
    asm("loc_6802A04: mov %edi,(%edx);");
    asm("loc_6802A06: pop %edi;");
    asm("loc_6802A07: mov %ebx,4(%edx);");
    asm("loc_6802A0A: pop %esi;");
    asm("loc_6802A0B: mov %ebp,8(%edx);");
    asm("loc_6802A0E: pop %ebp;");
    asm("loc_6802A0F: pop %ebx;");
    asm("loc_6802A10: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802A20() // _sub_6802A20
{
    __DEBUG_ASM(6802A20);
    // chunk 0x6802A20 _sub_6802A20
    asm("loc_6802A20: sub $0xC,%esp;");
    asm("loc_6802A23: mov _data_680E604,%eax;");
    asm("loc_6802A28: lea 0xC(%eax),%ecx;");
    asm("loc_6802A2B: push %ebx;");
    asm("loc_6802A2C: mov %ecx,%edx;");
    asm("loc_6802A2E: mov (%edx),%ebx;");
    asm("loc_6802A30: push %esi;");
    asm("loc_6802A31: mov 4(%edx),%esi;");
    asm("loc_6802A34: mov 8(%edx),%edx;");
    asm("loc_6802A37: mov %edx,0x10(%esp);");
    asm("loc_6802A3B: mov (%eax),%edx;");
    asm("loc_6802A3D: push %edi;");
    asm("loc_6802A3E: sub 4(%eax),%edx;");
    asm("loc_6802A41: sar $4,%edx;");
    asm("loc_6802A44: mov %edx,(%ecx);");
    asm("loc_6802A46: mov _data_680E604,%eax;");
    asm("loc_6802A4B: mov 0xC(%eax),%ecx;");
    asm("loc_6802A4E: mov %ecx,0x10(%eax);");
    asm("loc_6802A51: mov _data_680E604,%eax;");
    asm("loc_6802A56: mov %esi,0x10(%esp);");
    asm("loc_6802A5A: mov 0x10(%eax),%esi;");
    asm("loc_6802A5D: movl $0,0x14(%eax);");
    asm("loc_6802A64: mov 0x24(%esp),%eax;");
    asm("loc_6802A68: test %eax,%eax;");
    asm("loc_6802A6A: je loc_6802A80;");
    asm("loc_6802A6C: mov _data_680E604,%edx;");
    asm("loc_6802A72: push $0;");
    asm("loc_6802A74: push $_data_680D49C;");
    asm("loc_6802A79: push $0;");
    asm("loc_6802A7B: calll *0x38(%edx);");
    asm("loc_6802A7E: jmp loc_6802AC9;");
    asm("loc_6802A80: mov _data_680E604,%edi;");
    asm("loc_6802A86: mov 0x1C(%esp),%eax;");
    asm("loc_6802A8A: mov 0x20(%esp),%edx;");
    asm("loc_6802A8E: mov 4(%edi),%ecx;");
    asm("loc_6802A91: shl $4,%eax;");
    asm("loc_6802A94: test %edx,%edx;");
    asm("loc_6802A96: lea -0x10(%eax,%ecx),%eax;");
    asm("loc_6802A9A: je loc_6802AB8;");
    asm("loc_6802A9C: push %ebp;");
    asm("loc_6802A9D: mov 0x14(%edx),%ebp;");
    asm("loc_6802AA0: mov 0x18(%edx),%edx;");
    asm("loc_6802AA3: sub %ecx,%eax;");
    asm("loc_6802AA5: add $0x28,%edx;");
    asm("loc_6802AA8: push %ebp;");
    asm("loc_6802AA9: sar $4,%eax;");
    asm("loc_6802AAC: push %edx;");
    asm("loc_6802AAD: inc %eax;");
    asm("loc_6802AAE: push %eax;");
    asm("loc_6802AAF: calll *0x38(%edi);");
    asm("loc_6802AB2: add $0xC,%esp;");
    asm("loc_6802AB5: pop %ebp;");
    asm("loc_6802AB6: jmp loc_6802ACC;");
    asm("loc_6802AB8: sub %ecx,%eax;");
    asm("loc_6802ABA: push $0xFFFFFFFF;");
    asm("loc_6802ABC: sar $4,%eax;");
    asm("loc_6802ABF: inc %eax;");
    asm("loc_6802AC0: push $_data_680D458;");
    asm("loc_6802AC5: push %eax;");
    asm("loc_6802AC6: calll *0x38(%edi);");
    asm("loc_6802AC9: add $0xC,%esp;");
    asm("loc_6802ACC: mov _data_680E604,%eax;");
    asm("loc_6802AD1: mov 4(%eax),%ecx;");
    asm("loc_6802AD4: shl $4,%esi;");
    asm("loc_6802AD7: add %esi,%ecx;");
    asm("loc_6802AD9: mov %ecx,(%eax);");
    asm("loc_6802ADB: mov _data_680E604,%edx;");
    asm("loc_6802AE1: mov 0x10(%esp),%eax;");
    asm("loc_6802AE5: mov 0x14(%esp),%ecx;");
    asm("loc_6802AE9: add $0xC,%edx;");
    asm("loc_6802AEC: mov %ebx,(%edx);");
    asm("loc_6802AEE: pop %edi;");
    asm("loc_6802AEF: mov %eax,4(%edx);");
    asm("loc_6802AF2: pop %esi;");
    asm("loc_6802AF3: mov %ecx,8(%edx);");
    asm("loc_6802AF6: pop %ebx;");
    asm("loc_6802AF7: add $0xC,%esp;");
    asm("loc_6802AFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802B00() // _sub_6802B00
{
    __DEBUG_ASM(6802B00);
    // chunk 0x6802B00 _sub_6802B00
    asm("loc_6802B00: push %esi;");
    asm("loc_6802B01: mov 0xC(%esp),%esi;");
    asm("loc_6802B05: push %esi;");
    asm("loc_6802B06: call _sub_6802950;");
    asm("loc_6802B0B: mov _data_680E604,%ecx;");
    asm("loc_6802B11: mov (%ecx),%edx;");
    asm("loc_6802B13: lea 1(%esi),%eax;");
    asm("loc_6802B16: shl $4,%eax;");
    asm("loc_6802B19: sub %eax,%edx;");
    asm("loc_6802B1B: mov 0xC(%esp),%eax;");
    asm("loc_6802B1F: mov (%eax),%ecx;");
    asm("loc_6802B21: mov %ecx,(%edx);");
    asm("loc_6802B23: mov 4(%eax),%ecx;");
    asm("loc_6802B26: mov %ecx,4(%edx);");
    asm("loc_6802B29: mov 8(%eax),%ecx;");
    asm("loc_6802B2C: mov %ecx,8(%edx);");
    asm("loc_6802B2F: mov 0x14(%esp),%ecx;");
    asm("loc_6802B33: mov 0xC(%eax),%eax;");
    asm("loc_6802B36: push %ecx;");
    asm("loc_6802B37: push %esi;");
    asm("loc_6802B38: mov %eax,0xC(%edx);");
    asm("loc_6802B3B: call _sub_6802B50;");
    asm("loc_6802B40: add $0xC,%esp;");
    asm("loc_6802B43: pop %esi;");
    asm("loc_6802B44: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802B50() // _sub_6802B50
{
    __DEBUG_ASM(6802B50);
    // chunk 0x6802B50 _sub_6802B50
    asm("loc_6802B50: push %ebx;");
    asm("loc_6802B51: push %ebp;");
    asm("loc_6802B52: mov 0xC(%esp),%ebp;");
    asm("loc_6802B56: push %esi;");
    asm("loc_6802B57: push %edi;");
    asm("loc_6802B58: mov _data_680E604,%edi;");
    asm("loc_6802B5E: mov 4(%edi),%eax;");
    asm("loc_6802B61: mov (%edi),%esi;");
    asm("loc_6802B63: sub %eax,%esi;");
    asm("loc_6802B65: sar $4,%esi;");
    asm("loc_6802B68: sub %ebp,%esi;");
    asm("loc_6802B6A: mov %esi,%ecx;");
    asm("loc_6802B6C: shl $4,%ecx;");
    asm("loc_6802B6F: lea -0x10(%ecx,%eax),%eax;");
    asm("loc_6802B73: mov (%eax),%ecx;");
    asm("loc_6802B75: cmp $0xFFFFFFF9,%ecx;");
    asm("loc_6802B78: je loc_6802C02;");
    asm("loc_6802B7E: cmp $0xFFFFFFFB,%ecx;");
    asm("loc_6802B81: je loc_6802BED;");
    asm("loc_6802B83: cmp $0xFFFFFFFC,%ecx;");
    asm("loc_6802B86: je loc_6802BDE;");
    asm("loc_6802B88: push %eax;");
    asm("loc_6802B89: call _sub_6804FE0;");
    asm("loc_6802B8E: lea (%eax,%eax,8),%edx;");
    asm("loc_6802B91: mov _data_680E604,%eax;");
    asm("loc_6802B96: mov 0x64(%eax),%ebx;");
    asm("loc_6802B99: shl $5,%edx;");
    asm("loc_6802B9C: sub %edx,%ebx;");
    asm("loc_6802B9E: mov 0x110(%ebx),%eax;");
    asm("loc_6802BA4: add $0x110,%ebx;");
    asm("loc_6802BAA: add $4,%esp;");
    asm("loc_6802BAD: cmp $0xFFFFFFFA,%eax;");
    asm("loc_6802BB0: jne loc_6802BBF;");
    asm("loc_6802BB2: push $_data_680D4A8;");
    asm("loc_6802BB7: call _sub_6802E00;");
    asm("loc_6802BBC: add $4,%esp;");
    asm("loc_6802BBF: mov 0x18(%esp),%ecx;");
    asm("loc_6802BC3: mov (%edi),%edx;");
    asm("loc_6802BC5: push %ecx;");
    asm("loc_6802BC6: sub 4(%edi),%edx;");
    asm("loc_6802BC9: sar $4,%edx;");
    asm("loc_6802BCC: sub %esi,%edx;");
    asm("loc_6802BCE: inc %edx;");
    asm("loc_6802BCF: push %edx;");
    asm("loc_6802BD0: push %ebx;");
    asm("loc_6802BD1: call _sub_6802B00;");
    asm("loc_6802BD6: add $0xC,%esp;");
    asm("loc_6802BD9: pop %edi;");
    asm("loc_6802BDA: pop %esi;");
    asm("loc_6802BDB: pop %ebp;");
    asm("loc_6802BDC: pop %ebx;");
    asm("loc_6802BDD: ret;");
    asm("loc_6802BDE: movl $0xFFFFFFF7,(%eax);");
    asm("loc_6802BE4: mov 8(%eax),%eax;");
    asm("loc_6802BE7: push %esi;");
    asm("loc_6802BE8: push %eax;");
    asm("loc_6802BE9: push $0;");
    asm("loc_6802BEB: jmp loc_6802C23;");
    asm("loc_6802BED: mov 8(%eax),%ecx;");
    asm("loc_6802BF0: push %esi;");
    asm("loc_6802BF1: push %ecx;");
    asm("loc_6802BF2: movl $0xFFFFFFF6,(%eax);");
    asm("loc_6802BF8: call _sub_6802CB0;");
    asm("loc_6802BFD: add $8,%esp;");
    asm("loc_6802C00: jmp loc_6802C2B;");
    asm("loc_6802C02: mov 8(%eax),%ecx;");
    asm("loc_6802C05: movl $0xFFFFFFF8,(%eax);");
    asm("loc_6802C0B: cmpl $0xFFFFFFFB,0x10(%ecx);");
    asm("loc_6802C0F: push %esi;");
    asm("loc_6802C10: jne loc_6802C1E;");
    asm("loc_6802C12: mov 0x18(%ecx),%edx;");
    asm("loc_6802C15: push %edx;");
    asm("loc_6802C16: push %ecx;");
    asm("loc_6802C17: call _sub_6802D40;");
    asm("loc_6802C1C: jmp loc_6802C28;");
    asm("loc_6802C1E: mov 0x18(%ecx),%eax;");
    asm("loc_6802C21: push %eax;");
    asm("loc_6802C22: push %ecx;");
    asm("loc_6802C23: call _sub_68042E0;");
    asm("loc_6802C28: add $0xC,%esp;");
    asm("loc_6802C2B: mov 0x18(%esp),%ebx;");
    asm("loc_6802C2F: cmp $0xFF,%ebx;");
    asm("loc_6802C35: mov %eax,%ebp;");
    asm("loc_6802C37: mov %ebp,0x14(%esp);");
    asm("loc_6802C3B: jne loc_6802C49;");
    asm("loc_6802C3D: mov (%edi),%ebx;");
    asm("loc_6802C3F: sub 4(%edi),%ebx;");
    asm("loc_6802C42: sar $4,%ebx;");
    asm("loc_6802C45: sub %ebp,%ebx;");
    asm("loc_6802C47: jmp loc_6802C55;");
    asm("loc_6802C49: lea (%ebx,%ebp),%ecx;");
    asm("loc_6802C4C: push %ecx;");
    asm("loc_6802C4D: call _sub_6802900;");
    asm("loc_6802C52: add $4,%esp;");
    asm("loc_6802C55: dec %esi;");
    asm("loc_6802C56: test %ebx,%ebx;");
    asm("loc_6802C58: jle loc_6802C9B;");
    asm("loc_6802C5A: mov %esi,%ecx;");
    asm("loc_6802C5C: mov %ebp,%eax;");
    asm("loc_6802C5E: shl $4,%ecx;");
    asm("loc_6802C61: shl $4,%eax;");
    asm("loc_6802C64: mov %ebx,0x18(%esp);");
    asm("loc_6802C68: mov 4(%edi),%edx;");
    asm("loc_6802C6B: lea (%eax,%edx),%ebx;");
    asm("loc_6802C6E: mov (%ebx),%ebp;");
    asm("loc_6802C70: add %ecx,%edx;");
    asm("loc_6802C72: mov %ebp,(%edx);");
    asm("loc_6802C74: mov 4(%ebx),%ebp;");
    asm("loc_6802C77: mov %ebp,4(%edx);");
    asm("loc_6802C7A: mov 8(%ebx),%ebp;");
    asm("loc_6802C7D: mov %ebp,8(%edx);");
    asm("loc_6802C80: mov 0xC(%ebx),%ebx;");
    asm("loc_6802C83: mov %ebx,0xC(%edx);");
    asm("loc_6802C86: mov 0x18(%esp),%edx;");
    asm("loc_6802C8A: add $0x10,%eax;");
    asm("loc_6802C8D: add $0x10,%ecx;");
    asm("loc_6802C90: dec %edx;");
    asm("loc_6802C91: mov %edx,0x18(%esp);");
    asm("loc_6802C95: jne loc_6802C68;");
    asm("loc_6802C97: mov 0x14(%esp),%ebp;");
    asm("loc_6802C9B: mov (%edi),%eax;");
    asm("loc_6802C9D: sub %ebp,%esi;");
    asm("loc_6802C9F: shl $4,%esi;");
    asm("loc_6802CA2: add %esi,%eax;");
    asm("loc_6802CA4: mov %eax,(%edi);");
    asm("loc_6802CA6: pop %edi;");
    asm("loc_6802CA7: pop %esi;");
    asm("loc_6802CA8: pop %ebp;");
    asm("loc_6802CA9: pop %ebx;");
    asm("loc_6802CAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802CB0() // _sub_6802CB0
{
    __DEBUG_ASM(6802CB0);
    // chunk 0x6802CB0 _sub_6802CB0
    asm("loc_6802CB0: sub $0xC,%esp;");
    asm("loc_6802CB3: mov _data_680E604,%ecx;");
    asm("loc_6802CB9: push %ebx;");
    asm("loc_6802CBA: push %ebp;");
    asm("loc_6802CBB: push %esi;");
    asm("loc_6802CBC: lea 0xC(%ecx),%esi;");
    asm("loc_6802CBF: mov %esi,%eax;");
    asm("loc_6802CC1: mov (%eax),%ebx;");
    asm("loc_6802CC3: mov 4(%eax),%ebp;");
    asm("loc_6802CC6: mov 8(%eax),%edx;");
    asm("loc_6802CC9: mov (%ecx),%eax;");
    asm("loc_6802CCB: mov %edx,0x14(%esp);");
    asm("loc_6802CCF: sub 4(%ecx),%eax;");
    asm("loc_6802CD2: sar $4,%eax;");
    asm("loc_6802CD5: push %edi;");
    asm("loc_6802CD6: mov 0x24(%esp),%edi;");
    asm("loc_6802CDA: sub %edi,%eax;");
    asm("loc_6802CDC: mov %eax,8(%esi);");
    asm("loc_6802CDF: add %edi,%eax;");
    asm("loc_6802CE1: mov %edi,4(%esi);");
    asm("loc_6802CE4: mov %eax,(%esi);");
    asm("loc_6802CE6: mov _data_680E604,%eax;");
    asm("loc_6802CEB: mov 0x38(%eax),%ecx;");
    asm("loc_6802CEE: test %ecx,%ecx;");
    asm("loc_6802CF0: je loc_6802CFF;");
    asm("loc_6802CF2: push $0;");
    asm("loc_6802CF4: push $0;");
    asm("loc_6802CF6: push %edi;");
    asm("loc_6802CF7: call _sub_6802A20;");
    asm("loc_6802CFC: add $0xC,%esp;");
    asm("loc_6802CFF: calll *0x20(%esp);");
    asm("loc_6802D03: mov _data_680E604,%ecx;");
    asm("loc_6802D09: mov 0x38(%ecx),%eax;");
    asm("loc_6802D0C: test %eax,%eax;");
    asm("loc_6802D0E: je loc_6802D1D;");
    asm("loc_6802D10: push $1;");
    asm("loc_6802D12: push $0;");
    asm("loc_6802D14: push %edi;");
    asm("loc_6802D15: call _sub_6802A20;");
    asm("loc_6802D1A: add $0xC,%esp;");
    asm("loc_6802D1D: mov (%esi),%eax;");
    asm("loc_6802D1F: mov 0x18(%esp),%edx;");
    asm("loc_6802D23: mov %ebx,(%esi);");
    asm("loc_6802D25: mov %ebp,4(%esi);");
    asm("loc_6802D28: pop %edi;");
    asm("loc_6802D29: mov %edx,8(%esi);");
    asm("loc_6802D2C: pop %esi;");
    asm("loc_6802D2D: pop %ebp;");
    asm("loc_6802D2E: pop %ebx;");
    asm("loc_6802D2F: add $0xC,%esp;");
    asm("loc_6802D32: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802D40() // _sub_6802D40
{
    __DEBUG_ASM(6802D40);
    // chunk 0x6802D40 _sub_6802D40
    asm("loc_6802D40: push %ebx;");
    asm("loc_6802D41: push %ebp;");
    asm("loc_6802D42: mov 0xC(%esp),%ebp;");
    asm("loc_6802D46: push %esi;");
    asm("loc_6802D47: mov 8(%ebp),%esi;");
    asm("loc_6802D4A: push %edi;");
    asm("loc_6802D4B: push %esi;");
    asm("loc_6802D4C: call _sub_6802870;");
    asm("loc_6802D51: mov _data_680E604,%eax;");
    asm("loc_6802D56: mov 0x20(%esp),%ecx;");
    asm("loc_6802D5A: mov 4(%eax),%edi;");
    asm("loc_6802D5D: mov (%eax),%edx;");
    asm("loc_6802D5F: shl $4,%ecx;");
    asm("loc_6802D62: add %ecx,%edi;");
    asm("loc_6802D64: sub %edi,%edx;");
    asm("loc_6802D66: sar $4,%edx;");
    asm("loc_6802D69: shl $4,%edx;");
    asm("loc_6802D6C: shl $4,%esi;");
    asm("loc_6802D6F: push %edx;");
    asm("loc_6802D70: mov %esi,%ebx;");
    asm("loc_6802D72: lea (%ebx,%edi),%eax;");
    asm("loc_6802D75: push %edi;");
    asm("loc_6802D76: push %eax;");
    asm("loc_6802D77: calll *_import_680C02C;");
    asm("loc_6802D7D: mov %ebx,%ecx;");
    asm("loc_6802D7F: mov %ecx,%edx;");
    asm("loc_6802D81: shr $2,%ecx;");
    asm("loc_6802D84: lea 0x20(%ebp),%esi;");
    asm("loc_6802D87: rep movsl (%esi),(%edi);");
    asm("loc_6802D89: mov %edx,%ecx;");
    asm("loc_6802D8B: and $3,%ecx;");
    asm("loc_6802D8E: rep movsb (%esi),(%edi);");
    asm("loc_6802D90: mov _data_680E604,%eax;");
    asm("loc_6802D95: mov (%eax),%edi;");
    asm("loc_6802D97: mov 0x28(%esp),%ecx;");
    asm("loc_6802D9B: add %ebx,%edi;");
    asm("loc_6802D9D: mov %edi,(%eax);");
    asm("loc_6802D9F: mov 0x2C(%esp),%eax;");
    asm("loc_6802DA3: push %eax;");
    asm("loc_6802DA4: push %ecx;");
    asm("loc_6802DA5: call _sub_6802CB0;");
    asm("loc_6802DAA: add $0x18,%esp;");
    asm("loc_6802DAD: pop %edi;");
    asm("loc_6802DAE: pop %esi;");
    asm("loc_6802DAF: pop %ebp;");
    asm("loc_6802DB0: pop %ebx;");
    asm("loc_6802DB1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802DC0() // _sub_6802DC0
{
    __DEBUG_ASM(6802DC0);
    // chunk 0x6802DC0 _sub_6802DC0
    asm("loc_6802DC0: mov _data_680E604,%ecx;");
    asm("loc_6802DC6: mov (%ecx),%eax;");
    asm("loc_6802DC8: push %edi;");
    asm("loc_6802DC9: sub 4(%ecx),%eax;");
    asm("loc_6802DCC: sub $0x10,%eax;");
    asm("loc_6802DCF: sar $4,%eax;");
    asm("loc_6802DD2: js loc_6802DFD;");
    asm("loc_6802DD4: push %ebx;");
    asm("loc_6802DD5: mov 0xC(%esp),%ebx;");
    asm("loc_6802DD9: push %esi;");
    asm("loc_6802DDA: mov %eax,%esi;");
    asm("loc_6802DDC: shl $4,%esi;");
    asm("loc_6802DDF: lea 1(%eax),%edi;");
    asm("loc_6802DE2: jmp loc_6802DEA;");
    asm("loc_6802DE4: mov _data_680E604,%ecx;");
    asm("loc_6802DEA: mov 4(%ecx),%eax;");
    asm("loc_6802DED: add %esi,%eax;");
    asm("loc_6802DEF: push %eax;");
    asm("loc_6802DF0: call *%ebx;");
    asm("loc_6802DF2: add $4,%esp;");
    asm("loc_6802DF5: sub $0x10,%esi;");
    asm("loc_6802DF8: dec %edi;");
    asm("loc_6802DF9: jne loc_6802DE4;");
    asm("loc_6802DFB: pop %esi;");
    asm("loc_6802DFC: pop %ebx;");
    asm("loc_6802DFD: pop %edi;");
    asm("loc_6802DFE: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802E00() // _sub_6802E00
{
    __DEBUG_ASM(6802E00);
    // chunk 0x6802E00 _sub_6802E00
    asm("loc_6802E00: mov 4(%esp),%eax;");
    asm("loc_6802E04: test %eax,%eax;");
    asm("loc_6802E06: je loc_6802E11;");
    asm("loc_6802E08: push %eax;");
    asm("loc_6802E09: call _sub_6802E40;");
    asm("loc_6802E0E: add $4,%esp;");
    asm("loc_6802E11: mov _data_680E604,%eax;");
    asm("loc_6802E16: mov 0x18(%eax),%eax;");
    asm("loc_6802E19: test %eax,%eax;");
    asm("loc_6802E1B: je loc_6802E26;");
    asm("loc_6802E1D: push $1;");
    asm("loc_6802E1F: push %eax;");
    asm("loc_6802E20: calll *_import_680C034;");
    asm("loc_6802E26: push $_data_680D4C8;");
    asm("loc_6802E2B: call _sub_6802E40;");
    asm("loc_6802E30: add $4,%esp;");
    asm("loc_6802E33: push $1;");
    asm("loc_6802E35: calll *_import_680C030;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802E40() // _sub_6802E40
{
    __DEBUG_ASM(6802E40);
    // chunk 0x6802E40 _sub_6802E40
    asm("loc_6802E40: push $_data_680D384;");
    asm("loc_6802E45: call _sub_6805A80;");
    asm("loc_6802E4A: mov 0x10(%eax),%ecx;");
    asm("loc_6802E4D: add $0x10,%eax;");
    asm("loc_6802E50: add $4,%esp;");
    asm("loc_6802E53: cmp $0xFFFFFFFC,%ecx;");
    asm("loc_6802E56: je loc_6802E62;");
    asm("loc_6802E58: cmp $0xFFFFFFFB,%ecx;");
    asm("loc_6802E5B: je loc_6802E62;");
    asm("loc_6802E5D: cmp $0xFFFFFFF9,%ecx;");
    asm("loc_6802E60: jne loc_6802EB4;");
    asm("loc_6802E62: mov _data_680E604,%ecx;");
    asm("loc_6802E68: mov (%ecx),%edx;");
    asm("loc_6802E6A: mov (%eax),%ecx;");
    asm("loc_6802E6C: mov %ecx,(%edx);");
    asm("loc_6802E6E: mov 4(%eax),%ecx;");
    asm("loc_6802E71: mov %ecx,4(%edx);");
    asm("loc_6802E74: mov 8(%eax),%ecx;");
    asm("loc_6802E77: mov %ecx,8(%edx);");
    asm("loc_6802E7A: mov 0xC(%eax),%eax;");
    asm("loc_6802E7D: mov %eax,0xC(%edx);");
    asm("loc_6802E80: mov _data_680E604,%eax;");
    asm("loc_6802E85: mov (%eax),%ecx;");
    asm("loc_6802E87: cmp 8(%eax),%ecx;");
    asm("loc_6802E8A: jb loc_6802E9B;");
    asm("loc_6802E8C: push $1;");
    asm("loc_6802E8E: call _sub_6802870;");
    asm("loc_6802E93: mov _data_680E604,%eax;");
    asm("loc_6802E98: add $4,%esp;");
    asm("loc_6802E9B: addl $0x10,(%eax);");
    asm("loc_6802E9E: mov 4(%esp),%edx;");
    asm("loc_6802EA2: push %edx;");
    asm("loc_6802EA3: call _sub_68022B0;");
    asm("loc_6802EA8: push $0;");
    asm("loc_6802EAA: push $1;");
    asm("loc_6802EAC: call _sub_6802B50;");
    asm("loc_6802EB1: add $0xC,%esp;");
    asm("loc_6802EB4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802EC0() // _sub_6802EC0
{
    __DEBUG_ASM(6802EC0);
    // chunk 0x6802EC0 _sub_6802EC0
    asm("loc_6802EC0: push %ebp;");
    asm("loc_6802EC1: mov %esp,%ebp;");
    asm("loc_6802EC3: sub $0x54,%esp;");
    asm("loc_6802EC6: mov _data_680E604,%eax;");
    asm("loc_6802ECB: lea 0xC(%eax),%ecx;");
    asm("loc_6802ECE: mov (%ecx),%edx;");
    asm("loc_6802ED0: mov %edx,-0x14(%ebp);");
    asm("loc_6802ED3: mov 4(%ecx),%edx;");
    asm("loc_6802ED6: mov 8(%ecx),%ecx;");
    asm("loc_6802ED9: mov %edx,-0x10(%ebp);");
    asm("loc_6802EDC: mov 0x18(%eax),%edx;");
    asm("loc_6802EDF: push %esi;");
    asm("loc_6802EE0: mov %ecx,-0xC(%ebp);");
    asm("loc_6802EE3: mov %edx,-8(%ebp);");
    asm("loc_6802EE6: lea -0x54(%ebp),%edx;");
    asm("loc_6802EE9: lea -0x54(%ebp),%ecx;");
    asm("loc_6802EEC: push $0;");
    asm("loc_6802EEE: push %edx;");
    asm("loc_6802EEF: mov %ecx,0x18(%eax);");
    asm("loc_6802EF2: call _sub_680BDA4;");
    asm("loc_6802EF7: add $8,%esp;");
    asm("loc_6802EFA: test %eax,%eax;");
    asm("loc_6802EFC: mov _data_680E604,%eax;");
    asm("loc_6802F01: jne loc_6802F54;");
    asm("loc_6802F03: mov (%eax),%ecx;");
    asm("loc_6802F05: mov 4(%eax),%edx;");
    asm("loc_6802F08: mov 0xC(%eax),%esi;");
    asm("loc_6802F0B: sub %edx,%ecx;");
    asm("loc_6802F0D: sar $4,%ecx;");
    asm("loc_6802F10: sub %esi,%ecx;");
    asm("loc_6802F12: dec %ecx;");
    asm("loc_6802F13: push $0xFF;");
    asm("loc_6802F18: push %ecx;");
    asm("loc_6802F19: call _sub_6802B50;");
    asm("loc_6802F1E: mov _data_680E604,%edx;");
    asm("loc_6802F24: mov %esi,0x10(%edx);");
    asm("loc_6802F27: mov _data_680E604,%eax;");
    asm("loc_6802F2C: mov 4(%eax),%edx;");
    asm("loc_6802F2F: mov (%eax),%ecx;");
    asm("loc_6802F31: sub %edx,%ecx;");
    asm("loc_6802F33: sar $4,%ecx;");
    asm("loc_6802F36: sub %esi,%ecx;");
    asm("loc_6802F38: mov %ecx,0x14(%eax);");
    asm("loc_6802F3B: mov _data_680E604,%eax;");
    asm("loc_6802F40: mov 0x14(%eax),%edx;");
    asm("loc_6802F43: add $8,%esp;");
    asm("loc_6802F46: add %esi,%edx;");
    asm("loc_6802F48: mov %edx,0xC(%eax);");
    asm("loc_6802F4B: movl $0,-4(%ebp);");
    asm("loc_6802F52: jmp loc_6802F81;");
    asm("loc_6802F54: mov -0x14(%ebp),%ecx;");
    asm("loc_6802F57: mov -0x10(%ebp),%edx;");
    asm("loc_6802F5A: add $0xC,%eax;");
    asm("loc_6802F5D: mov %ecx,(%eax);");
    asm("loc_6802F5F: mov -0xC(%ebp),%ecx;");
    asm("loc_6802F62: mov %edx,4(%eax);");
    asm("loc_6802F65: mov %ecx,8(%eax);");
    asm("loc_6802F68: mov _data_680E604,%eax;");
    asm("loc_6802F6D: mov 0xC(%eax),%edx;");
    asm("loc_6802F70: mov 4(%eax),%ecx;");
    asm("loc_6802F73: shl $4,%edx;");
    asm("loc_6802F76: add %ecx,%edx;");
    asm("loc_6802F78: mov %edx,(%eax);");
    asm("loc_6802F7A: movl $1,-4(%ebp);");
    asm("loc_6802F81: mov -8(%ebp),%eax;");
    asm("loc_6802F84: mov _data_680E604,%ecx;");
    asm("loc_6802F8A: mov %eax,0x18(%ecx);");
    asm("loc_6802F8D: mov -4(%ebp),%eax;");
    asm("loc_6802F90: pop %esi;");
    asm("loc_6802F91: mov %ebp,%esp;");
    asm("loc_6802F93: pop %ebp;");
    asm("loc_6802F94: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6802FA0() // _sub_6802FA0
{
    __DEBUG_ASM(6802FA0);
    // chunk 0x6802FA0 _sub_6802FA0
    asm("loc_6802FA0: push %esi;");
    asm("loc_6802FA1: mov 8(%esp),%esi;");
    asm("loc_6802FA5: push %edi;");
    asm("loc_6802FA6: push %esi;");
    asm("loc_6802FA7: call _sub_6804FE0;");
    asm("loc_6802FAC: lea (%eax,%eax,8),%eax;");
    asm("loc_6802FAF: shl $5,%eax;");
    asm("loc_6802FB2: mov %eax,%ecx;");
    asm("loc_6802FB4: mov _data_680E604,%eax;");
    asm("loc_6802FB9: mov 0x64(%eax),%edi;");
    asm("loc_6802FBC: sub %ecx,%edi;");
    asm("loc_6802FBE: mov 0x100(%edi),%ecx;");
    asm("loc_6802FC4: add $0x100,%edi;");
    asm("loc_6802FCA: add $4,%esp;");
    asm("loc_6802FCD: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_6802FD0: je loc_6803019;");
    asm("loc_6802FD2: mov (%eax),%edx;");
    asm("loc_6802FD4: mov (%esi),%eax;");
    asm("loc_6802FD6: mov %eax,(%edx);");
    asm("loc_6802FD8: mov 4(%esi),%ecx;");
    asm("loc_6802FDB: mov %ecx,4(%edx);");
    asm("loc_6802FDE: mov 8(%esi),%eax;");
    asm("loc_6802FE1: mov %eax,8(%edx);");
    asm("loc_6802FE4: mov 0xC(%esi),%ecx;");
    asm("loc_6802FE7: mov %ecx,0xC(%edx);");
    asm("loc_6802FEA: mov _data_680E604,%eax;");
    asm("loc_6802FEF: mov (%eax),%edx;");
    asm("loc_6802FF1: cmp 8(%eax),%edx;");
    asm("loc_6802FF4: jb loc_6803005;");
    asm("loc_6802FF6: push $1;");
    asm("loc_6802FF8: call _sub_6802870;");
    asm("loc_6802FFD: mov _data_680E604,%eax;");
    asm("loc_6803002: add $4,%esp;");
    asm("loc_6803005: mov (%eax),%ecx;");
    asm("loc_6803007: push $0;");
    asm("loc_6803009: add $0x10,%ecx;");
    asm("loc_680300C: push $1;");
    asm("loc_680300E: push %edi;");
    asm("loc_680300F: mov %ecx,(%eax);");
    asm("loc_6803011: call _sub_6802B00;");
    asm("loc_6803016: add $0xC,%esp;");
    asm("loc_6803019: pop %edi;");
    asm("loc_680301A: pop %esi;");
    asm("loc_680301B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803020() // _sub_6803020
{
    __DEBUG_ASM(6803020);
    // chunk 0x6803020 _sub_6803020
    asm("loc_6803020: sub $0x218,%esp;");
    asm("loc_6803026: push %ebx;");
    asm("loc_6803027: mov 0x220(%esp),%ebx;");
    asm("loc_680302E: test %ebx,%ebx;");
    asm("loc_6803030: push %esi;");
    asm("loc_6803031: jne loc_680303B;");
    asm("loc_6803033: mov _import_680C050,%esi;");
    asm("loc_6803039: jmp loc_680304C;");
    asm("loc_680303B: push $_data_680D4EC;");
    asm("loc_6803040: push %ebx;");
    asm("loc_6803041: calll *_import_680C04C;");
    asm("loc_6803047: add $8,%esp;");
    asm("loc_680304A: mov %eax,%esi;");
    asm("loc_680304C: test %esi,%esi;");
    asm("loc_680304E: jne loc_680305E;");
    asm("loc_6803050: pop %esi;");
    asm("loc_6803051: mov $2,%eax;");
    asm("loc_6803056: pop %ebx;");
    asm("loc_6803057: add $0x218,%esp;");
    asm("loc_680305D: ret;");
    asm("loc_680305E: push %edi;");
    asm("loc_680305F: push %esi;");
    asm("loc_6803060: calll *_import_680C048;");
    asm("loc_6803066: mov %eax,%edi;");
    asm("loc_6803068: push %esi;");
    asm("loc_6803069: push %edi;");
    asm("loc_680306A: calll *_import_680C044;");
    asm("loc_6803070: xor %eax,%eax;");
    asm("loc_6803072: add $0xC,%esp;");
    asm("loc_6803075: cmp $0x1B,%edi;");
    asm("loc_6803078: sete %al;");
    asm("loc_680307B: mov %eax,%edi;");
    asm("loc_680307D: test %edi,%edi;");
    asm("loc_680307F: je loc_6803093;");
    asm("loc_6803081: push %esi;");
    asm("loc_6803082: push $_data_680D4E8;");
    asm("loc_6803087: push %ebx;");
    asm("loc_6803088: calll *_import_680C040;");
    asm("loc_680308E: add $0xC,%esp;");
    asm("loc_6803091: mov %eax,%esi;");
    asm("loc_6803093: push $0x104;");
    asm("loc_6803098: lea 0x10(%esp),%ecx;");
    asm("loc_680309C: push %ebx;");
    asm("loc_680309D: push %ecx;");
    asm("loc_680309E: call _sub_6806080;");
    asm("loc_68030A3: lea 0x18(%esp),%edx;");
    asm("loc_68030A7: push %edx;");
    asm("loc_68030A8: lea 0x120(%esp),%eax;");
    asm("loc_68030AF: push %esi;");
    asm("loc_68030B0: push %eax;");
    asm("loc_68030B1: call _sub_6806650;");
    asm("loc_68030B6: lea 0x128(%esp),%ecx;");
    asm("loc_68030BD: push %edi;");
    asm("loc_68030BE: push %ecx;");
    asm("loc_68030BF: call _sub_68030F0;");
    asm("loc_68030C4: mov %eax,%edi;");
    asm("loc_68030C6: mov _import_680C050,%eax;");
    asm("loc_68030CB: add $0x20,%esp;");
    asm("loc_68030CE: cmp %eax,%esi;");
    asm("loc_68030D0: je loc_68030DC;");
    asm("loc_68030D2: push %esi;");
    asm("loc_68030D3: calll *_import_680C03C;");
    asm("loc_68030D9: add $4,%esp;");
    asm("loc_68030DC: mov %edi,%eax;");
    asm("loc_68030DE: pop %edi;");
    asm("loc_68030DF: pop %esi;");
    asm("loc_68030E0: pop %ebx;");
    asm("loc_68030E1: add $0x218,%esp;");
    asm("loc_68030E7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68030F0() // _sub_68030F0
{
    __DEBUG_ASM(68030F0);
    // chunk 0x68030F0 _sub_68030F0
    asm("loc_68030F0: mov _data_680E604,%eax;");
    asm("loc_68030F5: push %ebx;");
    asm("loc_68030F6: push %ebp;");
    asm("loc_68030F7: mov 0x34(%eax),%ebp;");
    asm("loc_68030FA: push %esi;");
    asm("loc_68030FB: push %edi;");
    asm("loc_68030FC: call _sub_6803AB0;");
    asm("loc_6803101: mov 0x18(%esp),%edi;");
    asm("loc_6803105: mov _data_680E604,%ecx;");
    asm("loc_680310B: mov 0x14(%esp),%ebx;");
    asm("loc_680310F: mov 0x78(%ecx),%esi;");
    asm("loc_6803112: push %edi;");
    asm("loc_6803113: push %ebx;");
    asm("loc_6803114: call _sub_68031A0;");
    asm("loc_6803119: add $8,%esp;");
    asm("loc_680311C: cmp $1,%eax;");
    asm("loc_680311F: je loc_680317A;");
    asm("loc_6803121: cmp $2,%eax;");
    asm("loc_6803124: je loc_6803184;");
    asm("loc_6803126: mov _data_680E604,%eax;");
    asm("loc_680312B: mov 0x74(%eax),%ecx;");
    asm("loc_680312E: mov %esi,%edx;");
    asm("loc_6803130: neg %edx;");
    asm("loc_6803132: shl $0x1F,%edx;");
    asm("loc_6803135: sub %esi,%edx;");
    asm("loc_6803137: mov 0x78(%eax),%esi;");
    asm("loc_680313A: add %edx,%esi;");
    asm("loc_680313C: shl $1,%esi;");
    asm("loc_680313E: add %esi,%ecx;");
    asm("loc_6803140: mov %ecx,0x74(%eax);");
    asm("loc_6803143: call _sub_6802EC0;");
    asm("loc_6803148: mov _data_680E604,%ecx;");
    asm("loc_680314E: mov 0x74(%ecx),%edx;");
    asm("loc_6803151: sub %esi,%edx;");
    asm("loc_6803153: test %edi,%edi;");
    asm("loc_6803155: mov %edx,0x74(%ecx);");
    asm("loc_6803158: je loc_680318B;");
    asm("loc_680315A: test %eax,%eax;");
    asm("loc_680315C: jne loc_680318B;");
    asm("loc_680315E: call _sub_6803AB0;");
    asm("loc_6803163: mov _data_680E604,%eax;");
    asm("loc_6803168: mov 0x78(%eax),%esi;");
    asm("loc_680316B: push %edi;");
    asm("loc_680316C: push %ebx;");
    asm("loc_680316D: call _sub_68031A0;");
    asm("loc_6803172: add $8,%esp;");
    asm("loc_6803175: cmp $1,%eax;");
    asm("loc_6803178: jne loc_6803121;");
    asm("loc_680317A: pop %edi;");
    asm("loc_680317B: pop %esi;");
    asm("loc_680317C: pop %ebp;");
    asm("loc_680317D: mov $1,%eax;");
    asm("loc_6803182: pop %ebx;");
    asm("loc_6803183: ret;");
    asm("loc_6803184: pop %edi;");
    asm("loc_6803185: pop %esi;");
    asm("loc_6803186: pop %ebp;");
    asm("loc_6803187: xor %eax,%eax;");
    asm("loc_6803189: pop %ebx;");
    asm("loc_680318A: ret;");
    asm("loc_680318B: mov _data_680E604,%ecx;");
    asm("loc_6803191: pop %edi;");
    asm("loc_6803192: pop %esi;");
    asm("loc_6803193: mov %ebp,0x34(%ecx);");
    asm("loc_6803196: pop %ebp;");
    asm("loc_6803197: pop %ebx;");
    asm("loc_6803198: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68031A0() // _sub_68031A0
{
    __DEBUG_ASM(68031A0);
    // chunk 0x68031A0 _sub_68031A0
    asm("loc_68031A0: push %ebp;");
    asm("loc_68031A1: mov %esp,%ebp;");
    asm("loc_68031A3: sub $0x58,%esp;");
    asm("loc_68031A6: mov _data_680E604,%eax;");
    asm("loc_68031AB: lea 0xC(%eax),%ecx;");
    asm("loc_68031AE: mov (%ecx),%edx;");
    asm("loc_68031B0: mov %edx,-0x18(%ebp);");
    asm("loc_68031B3: mov 4(%ecx),%edx;");
    asm("loc_68031B6: mov 8(%ecx),%ecx;");
    asm("loc_68031B9: mov %edx,-0x14(%ebp);");
    asm("loc_68031BC: mov 0x18(%eax),%edx;");
    asm("loc_68031BF: mov %ecx,-0x10(%ebp);");
    asm("loc_68031C2: mov %edx,-0xC(%ebp);");
    asm("loc_68031C5: lea -0x58(%ebp),%edx;");
    asm("loc_68031C8: lea -0x58(%ebp),%ecx;");
    asm("loc_68031CB: push $0;");
    asm("loc_68031CD: push %edx;");
    asm("loc_68031CE: mov %ecx,0x18(%eax);");
    asm("loc_68031D1: call _sub_680BDA4;");
    asm("loc_68031D6: add $8,%esp;");
    asm("loc_68031D9: test %eax,%eax;");
    asm("loc_68031DB: jne loc_6803214;");
    asm("loc_68031DD: mov 0xC(%ebp),%eax;");
    asm("loc_68031E0: test %eax,%eax;");
    asm("loc_68031E2: je loc_68031FC;");
    asm("loc_68031E4: mov 8(%ebp),%eax;");
    asm("loc_68031E7: push %eax;");
    asm("loc_68031E8: call _sub_6808F30;");
    asm("loc_68031ED: add $4,%esp;");
    asm("loc_68031F0: mov %eax,-4(%ebp);");
    asm("loc_68031F3: movl $0,-8(%ebp);");
    asm("loc_68031FA: jmp loc_680324E;");
    asm("loc_68031FC: mov 8(%ebp),%ecx;");
    asm("loc_68031FF: push %ecx;");
    asm("loc_6803200: call _sub_6806750;");
    asm("loc_6803205: add $4,%esp;");
    asm("loc_6803208: mov %eax,-4(%ebp);");
    asm("loc_680320B: movl $0,-8(%ebp);");
    asm("loc_6803212: jmp loc_680324E;");
    asm("loc_6803214: mov _data_680E604,%edx;");
    asm("loc_680321A: mov -0x18(%ebp),%eax;");
    asm("loc_680321D: mov -0x14(%ebp),%ecx;");
    asm("loc_6803220: add $0xC,%edx;");
    asm("loc_6803223: mov %eax,(%edx);");
    asm("loc_6803225: mov -0x10(%ebp),%eax;");
    asm("loc_6803228: mov %ecx,4(%edx);");
    asm("loc_680322B: mov %eax,8(%edx);");
    asm("loc_680322E: mov _data_680E604,%eax;");
    asm("loc_6803233: mov 0xC(%eax),%ecx;");
    asm("loc_6803236: mov 4(%eax),%edx;");
    asm("loc_6803239: shl $4,%ecx;");
    asm("loc_680323C: add %edx,%ecx;");
    asm("loc_680323E: mov %ecx,(%eax);");
    asm("loc_6803240: movl $0,-4(%ebp);");
    asm("loc_6803247: movl $1,-8(%ebp);");
    asm("loc_680324E: mov -0xC(%ebp),%edx;");
    asm("loc_6803251: mov _data_680E604,%eax;");
    asm("loc_6803256: mov %edx,0x18(%eax);");
    asm("loc_6803259: mov -8(%ebp),%eax;");
    asm("loc_680325C: test %eax,%eax;");
    asm("loc_680325E: je loc_6803269;");
    asm("loc_6803260: mov $1,%eax;");
    asm("loc_6803265: mov %ebp,%esp;");
    asm("loc_6803267: pop %ebp;");
    asm("loc_6803268: ret;");
    asm("loc_6803269: mov -4(%ebp),%eax;");
    asm("loc_680326C: test %eax,%eax;");
    asm("loc_680326E: jne loc_6803279;");
    asm("loc_6803270: mov $2,%eax;");
    asm("loc_6803275: mov %ebp,%esp;");
    asm("loc_6803277: pop %ebp;");
    asm("loc_6803278: ret;");
    asm("loc_6803279: mov _data_680E604,%ecx;");
    asm("loc_680327F: mov 0xC(%ecx),%edx;");
    asm("loc_6803282: inc %edx;");
    asm("loc_6803283: push %edx;");
    asm("loc_6803284: call _sub_6802900;");
    asm("loc_6803289: mov _data_680E604,%eax;");
    asm("loc_680328E: mov 0xC(%eax),%ecx;");
    asm("loc_6803291: mov 4(%eax),%edx;");
    asm("loc_6803294: shl $4,%ecx;");
    asm("loc_6803297: movl $0xFFFFFFFC,(%ecx,%edx);");
    asm("loc_680329E: mov -4(%ebp),%ecx;");
    asm("loc_68032A1: mov _data_680E604,%eax;");
    asm("loc_68032A6: mov 0xC(%eax),%edx;");
    asm("loc_68032A9: mov 4(%eax),%eax;");
    asm("loc_68032AC: shl $4,%edx;");
    asm("loc_68032AF: push $0;");
    asm("loc_68032B1: mov %ecx,8(%edx,%eax);");
    asm("loc_68032B5: call _sub_6803C90;");
    asm("loc_68032BA: add $8,%esp;");
    asm("loc_68032BD: xor %eax,%eax;");
    asm("loc_68032BF: mov %ebp,%esp;");
    asm("loc_68032C1: pop %ebp;");
    asm("loc_68032C2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68032D0() // _sub_68032D0
{
    __DEBUG_ASM(68032D0);
    // chunk 0x68032D0 _sub_68032D0
    asm("loc_68032D0: mov 4(%esp),%edx;");
    asm("loc_68032D4: push %edi;");
    asm("loc_68032D5: or $0xFFFFFFFF,%ecx;");
    asm("loc_68032D8: xor %eax,%eax;");
    asm("loc_68032DA: mov %edx,%edi;");
    asm("loc_68032DC: repne scas (%edi),%al;");
    asm("loc_68032DE: not %ecx;");
    asm("loc_68032E0: push %edx;");
    asm("loc_68032E1: dec %ecx;");
    asm("loc_68032E2: push %ecx;");
    asm("loc_68032E3: push %edx;");
    asm("loc_68032E4: call _sub_68032F0;");
    asm("loc_68032E9: add $0xC,%esp;");
    asm("loc_68032EC: pop %edi;");
    asm("loc_68032ED: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68032F0() // _sub_68032F0
{
    __DEBUG_ASM(68032F0);
    // chunk 0x68032F0 _sub_68032F0
    asm("loc_68032F0: mov 0xC(%esp),%eax;");
    asm("loc_68032F4: sub $0x114,%esp;");
    asm("loc_68032FA: test %eax,%eax;");
    asm("loc_68032FC: jne loc_6803303;");
    asm("loc_68032FE: mov $_data_680D4F0,%eax;");
    asm("loc_6803303: push %esi;");
    asm("loc_6803304: mov 0x11C(%esp),%esi;");
    asm("loc_680330B: push %eax;");
    asm("loc_680330C: mov 0x124(%esp),%eax;");
    asm("loc_6803313: push %eax;");
    asm("loc_6803314: lea 0xC(%esp),%ecx;");
    asm("loc_6803318: push %esi;");
    asm("loc_6803319: push %ecx;");
    asm("loc_680331A: call _sub_6806610;");
    asm("loc_680331F: mov (%esi),%al;");
    asm("loc_6803321: xor %edx,%edx;");
    asm("loc_6803323: cmp $0x1B,%al;");
    asm("loc_6803325: sete %dl;");
    asm("loc_6803328: lea 0x14(%esp),%eax;");
    asm("loc_680332C: push %edx;");
    asm("loc_680332D: push %eax;");
    asm("loc_680332E: call _sub_68030F0;");
    asm("loc_6803333: add $0x18,%esp;");
    asm("loc_6803336: pop %esi;");
    asm("loc_6803337: add $0x114,%esp;");
    asm("loc_680333D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803340() // _sub_6803340
{
    __DEBUG_ASM(6803340);
    // chunk 0x6803340 _sub_6803340
    asm("loc_6803340: mov _data_680E604,%eax;");
    asm("loc_6803345: push %esi;");
    asm("loc_6803346: xor %esi,%esi;");
    asm("loc_6803348: cmp %esi,%eax;");
    asm("loc_680334A: jne loc_6803458;");
    asm("loc_6803350: push $0x7C;");
    asm("loc_6803352: push %esi;");
    asm("loc_6803353: call _sub_68065D0;");
    asm("loc_6803358: mov %eax,_data_680E604;");
    asm("loc_680335D: mov %esi,0xC(%eax);");
    asm("loc_6803360: mov _data_680E604,%eax;");
    asm("loc_6803365: mov %esi,0x10(%eax);");
    asm("loc_6803368: mov _data_680E604,%ecx;");
    asm("loc_680336E: mov %esi,0x14(%ecx);");
    asm("loc_6803371: mov _data_680E604,%edx;");
    asm("loc_6803377: mov %esi,0x18(%edx);");
    asm("loc_680337A: mov _data_680E604,%eax;");
    asm("loc_680337F: mov %esi,0x1C(%eax);");
    asm("loc_6803382: mov _data_680E604,%ecx;");
    asm("loc_6803388: mov %esi,0x20(%ecx);");
    asm("loc_680338B: mov _data_680E604,%edx;");
    asm("loc_6803391: mov %esi,0x24(%edx);");
    asm("loc_6803394: mov _data_680E604,%eax;");
    asm("loc_6803399: mov %esi,0x28(%eax);");
    asm("loc_680339C: mov _data_680E604,%ecx;");
    asm("loc_68033A2: mov %esi,0x2C(%ecx);");
    asm("loc_68033A5: mov _data_680E604,%edx;");
    asm("loc_68033AB: mov %esi,0x30(%edx);");
    asm("loc_68033AE: mov _data_680E604,%eax;");
    asm("loc_68033B3: mov %esi,0x34(%eax);");
    asm("loc_68033B6: mov _data_680E604,%ecx;");
    asm("loc_68033BC: mov %esi,0x38(%ecx);");
    asm("loc_68033BF: mov _data_680E604,%edx;");
    asm("loc_68033C5: mov %esi,0x3C(%edx);");
    asm("loc_68033C8: mov _data_680E604,%eax;");
    asm("loc_68033CD: mov %esi,0x40(%eax);");
    asm("loc_68033D0: mov _data_680E604,%ecx;");
    asm("loc_68033D6: mov %esi,0x44(%ecx);");
    asm("loc_68033D9: mov _data_680E604,%edx;");
    asm("loc_68033DF: mov %esi,0x48(%edx);");
    asm("loc_68033E2: mov _data_680E604,%eax;");
    asm("loc_68033E7: mov %esi,0x4C(%eax);");
    asm("loc_68033EA: mov _data_680E604,%ecx;");
    asm("loc_68033F0: mov %esi,0x58(%ecx);");
    asm("loc_68033F3: mov _data_680E604,%edx;");
    asm("loc_68033F9: mov %esi,0x5C(%edx);");
    asm("loc_68033FC: mov _data_680E604,%eax;");
    asm("loc_6803401: mov %esi,0x50(%eax);");
    asm("loc_6803404: mov _data_680E604,%ecx;");
    asm("loc_680340A: mov %esi,0x54(%ecx);");
    asm("loc_680340D: mov _data_680E604,%edx;");
    asm("loc_6803413: mov %esi,0x64(%edx);");
    asm("loc_6803416: mov _data_680E604,%eax;");
    asm("loc_680341B: mov %esi,0x6C(%eax);");
    asm("loc_680341E: mov _data_680E604,%ecx;");
    asm("loc_6803424: mov %esi,0x70(%ecx);");
    asm("loc_6803427: mov _data_680E604,%edx;");
    asm("loc_680342D: movl $0x96,0x74(%edx);");
    asm("loc_6803434: mov _data_680E604,%eax;");
    asm("loc_6803439: add $8,%esp;");
    asm("loc_680343C: mov %esi,0x78(%eax);");
    asm("loc_680343F: call _sub_6802830;");
    asm("loc_6803444: call _sub_68055F0;");
    asm("loc_6803449: call _sub_680A7D0;");
    asm("loc_680344E: call _sub_6804DE0;");
    asm("loc_6803453: call _sub_680A790;");
    asm("loc_6803458: pop %esi;");
    asm("loc_6803459: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803460() // _sub_6803460
{
    __DEBUG_ASM(6803460);
    // chunk 0x6803460 _sub_6803460
    asm("loc_6803460: push %esi;");
    asm("loc_6803461: call _sub_6805BC0;");
    asm("loc_6803466: mov %eax,%esi;");
    asm("loc_6803468: mov _data_680E604,%eax;");
    asm("loc_680346D: movl $0x7FFFFFFD,0x74(%eax);");
    asm("loc_6803474: mov _data_680E604,%ecx;");
    asm("loc_680347A: mov 0x50(%ecx),%edx;");
    asm("loc_680347D: push %edx;");
    asm("loc_680347E: call _sub_6803660;");
    asm("loc_6803483: push %esi;");
    asm("loc_6803484: call _sub_6803690;");
    asm("loc_6803489: push $_data_680D968;");
    asm("loc_680348E: call _sub_6802FA0;");
    asm("loc_6803493: mov _data_680E604,%eax;");
    asm("loc_6803498: mov 0x50(%eax),%ecx;");
    asm("loc_680349B: push %ecx;");
    asm("loc_680349C: call _sub_68052B0;");
    asm("loc_68034A1: mov _data_680E604,%edx;");
    asm("loc_68034A7: mov 0x40(%edx),%eax;");
    asm("loc_68034AA: push %eax;");
    asm("loc_68034AB: call _sub_68064B0;");
    asm("loc_68034B0: mov _data_680E604,%ecx;");
    asm("loc_68034B6: mov 0x48(%ecx),%edx;");
    asm("loc_68034B9: push %edx;");
    asm("loc_68034BA: call _sub_6806520;");
    asm("loc_68034BF: push %esi;");
    asm("loc_68034C0: call _sub_6805AC0;");
    asm("loc_68034C5: call _sub_6805C20;");
    asm("loc_68034CA: mov _data_680E604,%eax;");
    asm("loc_68034CF: mov 4(%eax),%ecx;");
    asm("loc_68034D2: push $0;");
    asm("loc_68034D4: push %ecx;");
    asm("loc_68034D5: call _sub_68065D0;");
    asm("loc_68034DA: mov _data_680E604,%edx;");
    asm("loc_68034E0: mov 0x64(%edx),%eax;");
    asm("loc_68034E3: push $0;");
    asm("loc_68034E5: push %eax;");
    asm("loc_68034E6: call _sub_68065D0;");
    asm("loc_68034EB: mov _data_680E604,%ecx;");
    asm("loc_68034F1: mov 0x6C(%ecx),%edx;");
    asm("loc_68034F4: push $0;");
    asm("loc_68034F6: push %edx;");
    asm("loc_68034F7: call _sub_68065D0;");
    asm("loc_68034FC: mov _data_680E604,%eax;");
    asm("loc_6803501: mov 0x1C(%eax),%ecx;");
    asm("loc_6803504: push $0;");
    asm("loc_6803506: push %ecx;");
    asm("loc_6803507: call _sub_68065D0;");
    asm("loc_680350C: mov _data_680E604,%edx;");
    asm("loc_6803512: mov 0x2C(%edx),%eax;");
    asm("loc_6803515: push $0;");
    asm("loc_6803517: push %eax;");
    asm("loc_6803518: call _sub_68065D0;");
    asm("loc_680351D: mov _data_680E604,%ecx;");
    asm("loc_6803523: add $0x44,%esp;");
    asm("loc_6803526: push $0;");
    asm("loc_6803528: push %ecx;");
    asm("loc_6803529: call _sub_68065D0;");
    asm("loc_680352E: add $8,%esp;");
    asm("loc_6803531: movl $0,_data_680E604;");
    asm("loc_680353B: pop %esi;");
    asm("loc_680353C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803540() // _sub_6803540
{
    __DEBUG_ASM(6803540);
    // chunk 0x6803540 _sub_6803540
    asm("loc_6803540: push %edi;");
    asm("loc_6803541: mov 8(%esp),%edi;");
    asm("loc_6803545: cmpl $0xFFFFFFFA,(%edi);");
    asm("loc_6803548: jne loc_680354F;");
    asm("loc_680354A: or $0xFFFFFFFF,%eax;");
    asm("loc_680354D: pop %edi;");
    asm("loc_680354E: ret;");
    asm("loc_680354F: mov _data_680E604,%edx;");
    asm("loc_6803555: mov 0x70(%edx),%eax;");
    asm("loc_6803558: push %esi;");
    asm("loc_6803559: xor %esi,%esi;");
    asm("loc_680355B: test %eax,%eax;");
    asm("loc_680355D: jle loc_6803572;");
    asm("loc_680355F: mov 0x6C(%edx),%ecx;");
    asm("loc_6803562: add $0x10,%ecx;");
    asm("loc_6803565: cmpl $2,(%ecx);");
    asm("loc_6803568: je loc_6803572;");
    asm("loc_680356A: inc %esi;");
    asm("loc_680356B: add $0x18,%ecx;");
    asm("loc_680356E: cmp %eax,%esi;");
    asm("loc_6803570: jl loc_6803565;");
    asm("loc_6803572: cmp %eax,%esi;");
    asm("loc_6803574: jne loc_68035AC;");
    asm("loc_6803576: push $0x7FFFFFFD;");
    asm("loc_680357B: push $_data_680D4F4;");
    asm("loc_6803580: push $0x18;");
    asm("loc_6803582: push $1;");
    asm("loc_6803584: push %eax;");
    asm("loc_6803585: mov 0x6C(%edx),%eax;");
    asm("loc_6803588: push %eax;");
    asm("loc_6803589: call _sub_6806550;");
    asm("loc_680358E: mov _data_680E604,%ecx;");
    asm("loc_6803594: mov %eax,0x6C(%ecx);");
    asm("loc_6803597: mov _data_680E604,%eax;");
    asm("loc_680359C: mov 0x70(%eax),%ecx;");
    asm("loc_680359F: add $0x18,%esp;");
    asm("loc_68035A2: inc %ecx;");
    asm("loc_68035A3: mov %ecx,0x70(%eax);");
    asm("loc_68035A6: mov _data_680E604,%edx;");
    asm("loc_68035AC: mov 0x6C(%edx),%edx;");
    asm("loc_68035AF: mov (%edi),%ecx;");
    asm("loc_68035B1: lea (%esi,%esi,2),%eax;");
    asm("loc_68035B4: shl $3,%eax;");
    asm("loc_68035B7: add %eax,%edx;");
    asm("loc_68035B9: mov %ecx,(%edx);");
    asm("loc_68035BB: mov 4(%edi),%ecx;");
    asm("loc_68035BE: mov %ecx,4(%edx);");
    asm("loc_68035C1: mov 8(%edi),%ecx;");
    asm("loc_68035C4: mov %ecx,8(%edx);");
    asm("loc_68035C7: mov 0xC(%edi),%ecx;");
    asm("loc_68035CA: mov %ecx,0xC(%edx);");
    asm("loc_68035CD: mov 0x10(%esp),%ecx;");
    asm("loc_68035D1: xor %edx,%edx;");
    asm("loc_68035D3: test %ecx,%ecx;");
    asm("loc_68035D5: mov _data_680E604,%ecx;");
    asm("loc_68035DB: mov 0x6C(%ecx),%ecx;");
    asm("loc_68035DE: sete %dl;");
    asm("loc_68035E1: mov %edx,0x10(%ecx,%eax);");
    asm("loc_68035E5: mov %esi,%eax;");
    asm("loc_68035E7: pop %esi;");
    asm("loc_68035E8: pop %edi;");
    asm("loc_68035E9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68035F0() // _sub_68035F0
{
    __DEBUG_ASM(68035F0);
    // chunk 0x68035F0 _sub_68035F0
    asm("loc_68035F0: mov 4(%esp),%eax;");
    asm("loc_68035F4: test %eax,%eax;");
    asm("loc_68035F6: jl loc_6803611;");
    asm("loc_68035F8: mov _data_680E604,%ecx;");
    asm("loc_68035FE: cmp 0x70(%ecx),%eax;");
    asm("loc_6803601: jge loc_6803611;");
    asm("loc_6803603: mov 0x6C(%ecx),%ecx;");
    asm("loc_6803606: lea (%eax,%eax,2),%eax;");
    asm("loc_6803609: movl $2,0x10(%ecx,%eax,8);");
    asm("loc_6803611: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803620() // _sub_6803620
{
    __DEBUG_ASM(6803620);
    // chunk 0x6803620 _sub_6803620
    asm("loc_6803620: mov 4(%esp),%eax;");
    asm("loc_6803624: cmp $0xFFFFFFFF,%eax;");
    asm("loc_6803627: jne loc_680362F;");
    asm("loc_6803629: mov $_data_680D968,%eax;");
    asm("loc_680362E: ret;");
    asm("loc_680362F: test %eax,%eax;");
    asm("loc_6803631: jl loc_6803653;");
    asm("loc_6803633: mov _data_680E604,%ecx;");
    asm("loc_6803639: cmp 0x70(%ecx),%eax;");
    asm("loc_680363C: jge loc_6803653;");
    asm("loc_680363E: mov 0x6C(%ecx),%ecx;");
    asm("loc_6803641: lea (%eax,%eax,2),%eax;");
    asm("loc_6803644: lea (%ecx,%eax,8),%eax;");
    asm("loc_6803647: mov 0x10(%eax),%ecx;");
    asm("loc_680364A: test %ecx,%ecx;");
    asm("loc_680364C: je loc_6803655;");
    asm("loc_680364E: cmp $1,%ecx;");
    asm("loc_6803651: je loc_6803655;");
    asm("loc_6803653: xor %eax,%eax;");
    asm("loc_6803655: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803660() // _sub_6803660
{
    __DEBUG_ASM(6803660);
    // chunk 0x6803660 _sub_6803660
    asm("loc_6803660: sub $0x10,%esp;");
    asm("loc_6803663: push %esi;");
    asm("loc_6803664: mov 0x18(%esp),%esi;");
    asm("loc_6803668: test %esi,%esi;");
    asm("loc_680366A: movl $0xFFFFFFFD,4(%esp);");
    asm("loc_6803672: je loc_680368B;");
    asm("loc_6803674: lea 4(%esp),%eax;");
    asm("loc_6803678: push %eax;");
    asm("loc_6803679: mov %esi,0x10(%esp);");
    asm("loc_680367D: call _sub_6802FA0;");
    asm("loc_6803682: mov (%esi),%esi;");
    asm("loc_6803684: add $4,%esp;");
    asm("loc_6803687: test %esi,%esi;");
    asm("loc_6803689: jne loc_6803674;");
    asm("loc_680368B: pop %esi;");
    asm("loc_680368C: add $0x10,%esp;");
    asm("loc_680368F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803690() // _sub_6803690
{
    __DEBUG_ASM(6803690);
    // chunk 0x6803690 _sub_6803690
    asm("loc_6803690: sub $0x10,%esp;");
    asm("loc_6803693: push %esi;");
    asm("loc_6803694: mov 0x18(%esp),%esi;");
    asm("loc_6803698: test %esi,%esi;");
    asm("loc_680369A: movl $0,4(%esp);");
    asm("loc_68036A2: je loc_68036C1;");
    asm("loc_68036A4: cmpl $0xFFFFFFFF,0xC(%esi);");
    asm("loc_68036A8: jne loc_68036BB;");
    asm("loc_68036AA: lea 4(%esp),%eax;");
    asm("loc_68036AE: push %eax;");
    asm("loc_68036AF: mov %esi,0x10(%esp);");
    asm("loc_68036B3: call _sub_6802FA0;");
    asm("loc_68036B8: add $4,%esp;");
    asm("loc_68036BB: mov (%esi),%esi;");
    asm("loc_68036BD: test %esi,%esi;");
    asm("loc_68036BF: jne loc_68036A4;");
    asm("loc_68036C1: pop %esi;");
    asm("loc_68036C2: add $0x10,%esp;");
    asm("loc_68036C5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68036D0() // _sub_68036D0
{
    __DEBUG_ASM(68036D0);
    // chunk 0x68036D0 _sub_68036D0
    asm("loc_68036D0: push %ecx;");
    asm("loc_68036D1: mov _data_680E604,%eax;");
    asm("loc_68036D6: push %ebx;");
    asm("loc_68036D7: mov 0x78(%eax),%ebx;");
    asm("loc_68036DA: push %ebp;");
    asm("loc_68036DB: push %esi;");
    asm("loc_68036DC: push %edi;");
    asm("loc_68036DD: call _sub_6803890;");
    asm("loc_68036E2: call _sub_68037A0;");
    asm("loc_68036E7: call _sub_6805B10;");
    asm("loc_68036EC: mov _data_680E604,%ecx;");
    asm("loc_68036F2: add $0x50,%ecx;");
    asm("loc_68036F5: push %ecx;");
    asm("loc_68036F6: mov %eax,%esi;");
    asm("loc_68036F8: call _sub_6803850;");
    asm("loc_68036FD: mov _data_680E604,%edx;");
    asm("loc_6803703: add $0x40,%edx;");
    asm("loc_6803706: push %edx;");
    asm("loc_6803707: mov %eax,%edi;");
    asm("loc_6803709: call _sub_6803850;");
    asm("loc_680370E: mov %eax,%ebp;");
    asm("loc_6803710: mov _data_680E604,%eax;");
    asm("loc_6803715: add $0x48,%eax;");
    asm("loc_6803718: push %eax;");
    asm("loc_6803719: call _sub_6803850;");
    asm("loc_680371E: mov %eax,0x1C(%esp);");
    asm("loc_6803722: mov _data_680E604,%eax;");
    asm("loc_6803727: mov 0x74(%eax),%ecx;");
    asm("loc_680372A: shl $2,%ecx;");
    asm("loc_680372D: push %edi;");
    asm("loc_680372E: mov %ecx,0x74(%eax);");
    asm("loc_6803731: call _sub_6803660;");
    asm("loc_6803736: push %esi;");
    asm("loc_6803737: call _sub_6803690;");
    asm("loc_680373C: push $_data_680D968;");
    asm("loc_6803741: call _sub_6802FA0;");
    asm("loc_6803746: push %edi;");
    asm("loc_6803747: call _sub_68052B0;");
    asm("loc_680374C: push %esi;");
    asm("loc_680374D: call _sub_6805AC0;");
    asm("loc_6803752: push %ebp;");
    asm("loc_6803753: call _sub_68064B0;");
    asm("loc_6803758: mov 0x34(%esp),%edx;");
    asm("loc_680375C: push %edx;");
    asm("loc_680375D: call _sub_6806520;");
    asm("loc_6803762: mov _data_680E604,%ecx;");
    asm("loc_6803768: mov 0x78(%ecx),%eax;");
    asm("loc_680376B: mov 0x40(%esp),%edx;");
    asm("loc_680376F: add $0x28,%esp;");
    asm("loc_6803772: sub %eax,%ebx;");
    asm("loc_6803774: test %edx,%edx;");
    asm("loc_6803776: jne loc_6803785;");
    asm("loc_6803778: pop %edi;");
    asm("loc_6803779: add %eax,%eax;");
    asm("loc_680377B: pop %esi;");
    asm("loc_680377C: mov %eax,0x74(%ecx);");
    asm("loc_680377F: pop %ebp;");
    asm("loc_6803780: mov %ebx,%eax;");
    asm("loc_6803782: pop %ebx;");
    asm("loc_6803783: pop %ecx;");
    asm("loc_6803784: ret;");
    asm("loc_6803785: pop %edi;");
    asm("loc_6803786: add %edx,%eax;");
    asm("loc_6803788: pop %esi;");
    asm("loc_6803789: mov %eax,0x74(%ecx);");
    asm("loc_680378C: pop %ebp;");
    asm("loc_680378D: mov %ebx,%eax;");
    asm("loc_680378F: pop %ebx;");
    asm("loc_6803790: pop %ecx;");
    asm("loc_6803791: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68037A0() // _sub_68037A0
{
    __DEBUG_ASM(68037A0);
    // chunk 0x68037A0 _sub_68037A0
    asm("loc_68037A0: mov _data_680E604,%eax;");
    asm("loc_68037A5: mov 0x70(%eax),%ecx;");
    asm("loc_68037A8: push %edi;");
    asm("loc_68037A9: xor %edi,%edi;");
    asm("loc_68037AB: test %ecx,%ecx;");
    asm("loc_68037AD: jle loc_68037EF;");
    asm("loc_68037AF: push %esi;");
    asm("loc_68037B0: xor %esi,%esi;");
    asm("loc_68037B2: mov 0x6C(%eax),%eax;");
    asm("loc_68037B5: mov 0x10(%eax,%esi),%ecx;");
    asm("loc_68037B9: add %esi,%eax;");
    asm("loc_68037BB: cmp $1,%ecx;");
    asm("loc_68037BE: jne loc_68037DE;");
    asm("loc_68037C0: push %eax;");
    asm("loc_68037C1: call _sub_6803800;");
    asm("loc_68037C6: add $4,%esp;");
    asm("loc_68037C9: test %eax,%eax;");
    asm("loc_68037CB: jne loc_68037DE;");
    asm("loc_68037CD: mov _data_680E604,%ecx;");
    asm("loc_68037D3: mov 0x6C(%ecx),%edx;");
    asm("loc_68037D6: movl $3,0x10(%edx,%esi);");
    asm("loc_68037DE: mov _data_680E604,%eax;");
    asm("loc_68037E3: mov 0x70(%eax),%ecx;");
    asm("loc_68037E6: inc %edi;");
    asm("loc_68037E7: add $0x18,%esi;");
    asm("loc_68037EA: cmp %ecx,%edi;");
    asm("loc_68037EC: jl loc_68037B2;");
    asm("loc_68037EE: pop %esi;");
    asm("loc_68037EF: pop %edi;");
    asm("loc_68037F0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803800() // _sub_6803800
{
    asm("jmp dgb_6803800;"); // jumptable skip
    asm(".long _jmp_6803830;"); // jumptable address
    __DEBUG_ASM(6803800);
    // chunk 0x6803800 _sub_6803800
    asm("loc_6803800: mov 4(%esp),%ecx;");
    asm("loc_6803804: mov (%ecx),%eax;");
    asm("loc_6803806: add $7,%eax;");
    asm("loc_6803809: cmp $7,%eax;");
    asm("loc_680380C: ja loc_680382A;");
    asm("loc_680380E: jmpl *_jmp_6803830(,%eax,4);");
    asm("loc_6803815: mov 8(%ecx),%eax;");
    asm("loc_6803818: mov 4(%eax),%eax;");
    asm("loc_680381B: ret;");
    asm("loc_680381C: mov 8(%ecx),%ecx;");
    asm("loc_680381F: mov 4(%ecx),%eax;");
    asm("loc_6803822: ret;");
    asm("loc_6803823: mov 8(%ecx),%edx;");
    asm("loc_6803826: mov 4(%edx),%eax;");
    asm("loc_6803829: ret;");
    asm("loc_680382A: mov $1,%eax;");
    asm("loc_680382F: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_6803830: .long loc_6803823;");
    asm(".long loc_680382A;");
    asm(".long loc_680382A;");
    asm(".long loc_6803815;");
    asm(".long loc_680381C;");
    asm(".long loc_6803815;");
    asm(".long loc_680382A;");
    asm(".long loc_6803815;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6803800);
_naked _weak void _sub_6803850() // _sub_6803850
{
    __DEBUG_ASM(6803850);
    // chunk 0x6803850 _sub_6803850
    asm("loc_6803850: mov 4(%esp),%edx;");
    asm("loc_6803854: xor %eax,%eax;");
    asm("loc_6803856: test %edx,%edx;");
    asm("loc_6803858: je loc_6803884;");
    asm("loc_680385A: push %edi;");
    asm("loc_680385B: mov (%edx),%ecx;");
    asm("loc_680385D: test %ecx,%ecx;");
    asm("loc_680385F: movl $0,4(%edx);");
    asm("loc_6803866: je loc_680387D;");
    asm("loc_6803868: mov 4(%ecx),%edi;");
    asm("loc_680386B: test %edi,%edi;");
    asm("loc_680386D: jne loc_680387D;");
    asm("loc_680386F: mov (%ecx),%edi;");
    asm("loc_6803871: mov %edi,(%edx);");
    asm("loc_6803873: mov %eax,(%ecx);");
    asm("loc_6803875: mov %ecx,%eax;");
    asm("loc_6803877: mov (%edx),%ecx;");
    asm("loc_6803879: test %ecx,%ecx;");
    asm("loc_680387B: jne loc_6803868;");
    asm("loc_680387D: test %ecx,%ecx;");
    asm("loc_680387F: mov %ecx,%edx;");
    asm("loc_6803881: jne loc_680385B;");
    asm("loc_6803883: pop %edi;");
    asm("loc_6803884: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803890() // _sub_6803890
{
    __DEBUG_ASM(6803890);
    // chunk 0x6803890 _sub_6803890
    asm("loc_6803890: push $_sub_6803950;");
    asm("loc_6803895: call _sub_6802DC0;");
    asm("loc_680389A: call _sub_6803900;");
    asm("loc_680389F: call _sub_68038C0;");
    asm("loc_68038A4: push $_sub_6803950;");
    asm("loc_68038A9: call _sub_6805170;");
    asm("loc_68038AE: add $8,%esp;");
    asm("loc_68038B1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68038C0() // _sub_68038C0
{
    __DEBUG_ASM(68038C0);
    // chunk 0x68038C0 _sub_68038C0
    asm("loc_68038C0: mov _data_680E604,%ecx;");
    asm("loc_68038C6: mov 0x70(%ecx),%eax;");
    asm("loc_68038C9: push %edi;");
    asm("loc_68038CA: xor %edi,%edi;");
    asm("loc_68038CC: test %eax,%eax;");
    asm("loc_68038CE: jle loc_68038FB;");
    asm("loc_68038D0: push %esi;");
    asm("loc_68038D1: xor %esi,%esi;");
    asm("loc_68038D3: mov 0x6C(%ecx),%eax;");
    asm("loc_68038D6: mov 0x10(%eax,%esi),%edx;");
    asm("loc_68038DA: add %esi,%eax;");
    asm("loc_68038DC: test %edx,%edx;");
    asm("loc_68038DE: jne loc_68038EF;");
    asm("loc_68038E0: push %eax;");
    asm("loc_68038E1: call _sub_6803950;");
    asm("loc_68038E6: mov _data_680E604,%ecx;");
    asm("loc_68038EC: add $4,%esp;");
    asm("loc_68038EF: mov 0x70(%ecx),%eax;");
    asm("loc_68038F2: inc %edi;");
    asm("loc_68038F3: add $0x18,%esi;");
    asm("loc_68038F6: cmp %eax,%edi;");
    asm("loc_68038F8: jl loc_68038D3;");
    asm("loc_68038FA: pop %esi;");
    asm("loc_68038FB: pop %edi;");
    asm("loc_68038FC: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803900() // _sub_6803900
{
    __DEBUG_ASM(6803900);
    // chunk 0x6803900 _sub_6803900
    asm("loc_6803900: mov _data_680E604,%eax;");
    asm("loc_6803905: push %esi;");
    asm("loc_6803906: mov 0x58(%eax),%esi;");
    asm("loc_6803909: test %esi,%esi;");
    asm("loc_680390B: je loc_680392D;");
    asm("loc_680390D: mov 0x10(%esi),%ecx;");
    asm("loc_6803910: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_6803913: lea 0x10(%esi),%eax;");
    asm("loc_6803916: je loc_6803927;");
    asm("loc_6803918: push %eax;");
    asm("loc_6803919: call _sub_6803950;");
    asm("loc_680391E: push %esi;");
    asm("loc_680391F: call _sub_6803930;");
    asm("loc_6803924: add $8,%esp;");
    asm("loc_6803927: mov (%esi),%esi;");
    asm("loc_6803929: test %esi,%esi;");
    asm("loc_680392B: jne loc_680390D;");
    asm("loc_680392D: pop %esi;");
    asm("loc_680392E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803930() // _sub_6803930
{
    __DEBUG_ASM(6803930);
    // chunk 0x6803930 _sub_6803930
    asm("loc_6803930: mov 4(%esp),%eax;");
    asm("loc_6803934: mov 4(%eax),%ecx;");
    asm("loc_6803937: test %ecx,%ecx;");
    asm("loc_6803939: jne loc_6803942;");
    asm("loc_680393B: movl $1,4(%eax);");
    asm("loc_6803942: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803950() // _sub_6803950
{
    asm("jmp dgb_6803950;"); // jumptable skip
    asm(".long _jmp_68039A4;"); // jumptable address
    __DEBUG_ASM(6803950);
    // chunk 0x6803950 _sub_6803950
    asm("loc_6803950: mov 4(%esp),%ecx;");
    asm("loc_6803954: mov (%ecx),%eax;");
    asm("loc_6803956: add $9,%eax;");
    asm("loc_6803959: cmp $9,%eax;");
    asm("loc_680395C: ja loc_680399E;");
    asm("loc_680395E: jmpl *_jmp_68039A4(,%eax,4);");
    asm("loc_6803965: mov 8(%ecx),%eax;");
    asm("loc_6803968: push %eax;");
    asm("loc_6803969: call _sub_6803930;");
    asm("loc_680396E: add $4,%esp;");
    asm("loc_6803971: xor %eax,%eax;");
    asm("loc_6803973: ret;");
    asm("loc_6803974: mov 8(%ecx),%ecx;");
    asm("loc_6803977: push %ecx;");
    asm("loc_6803978: call _sub_6803A60;");
    asm("loc_680397D: add $4,%esp;");
    asm("loc_6803980: xor %eax,%eax;");
    asm("loc_6803982: ret;");
    asm("loc_6803983: mov 8(%ecx),%edx;");
    asm("loc_6803986: push %edx;");
    asm("loc_6803987: call _sub_6803A20;");
    asm("loc_680398C: add $4,%esp;");
    asm("loc_680398F: xor %eax,%eax;");
    asm("loc_6803991: ret;");
    asm("loc_6803992: mov 8(%ecx),%eax;");
    asm("loc_6803995: push %eax;");
    asm("loc_6803996: call _sub_68039D0;");
    asm("loc_680399B: add $4,%esp;");
    asm("loc_680399E: xor %eax,%eax;");
    asm("loc_68039A0: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_68039A4: .long loc_6803992;");
    asm(".long loc_6803983;");
    asm(".long loc_6803983;");
    asm(".long loc_680399E;");
    asm(".long loc_680399E;");
    asm(".long loc_6803992;");
    asm(".long loc_6803974;");
    asm(".long loc_6803965;");
    asm(".long loc_680399E;");
    asm(".long loc_6803965;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6803950);
_naked _weak void _sub_68039D0() // _sub_68039D0
{
    __DEBUG_ASM(68039D0);
    // chunk 0x68039D0 _sub_68039D0
    asm("loc_68039D0: push %esi;");
    asm("loc_68039D1: mov 8(%esp),%esi;");
    asm("loc_68039D5: mov 4(%esi),%eax;");
    asm("loc_68039D8: test %eax,%eax;");
    asm("loc_68039DA: push %edi;");
    asm("loc_68039DB: jne loc_6803A18;");
    asm("loc_68039DD: mov 0x18(%esi),%eax;");
    asm("loc_68039E0: push %eax;");
    asm("loc_68039E1: movl $1,4(%esi);");
    asm("loc_68039E8: call _sub_6803930;");
    asm("loc_68039ED: mov 0xC(%esi),%eax;");
    asm("loc_68039F0: add $4,%esp;");
    asm("loc_68039F3: xor %edi,%edi;");
    asm("loc_68039F5: test %eax,%eax;");
    asm("loc_68039F7: jle loc_6803A18;");
    asm("loc_68039F9: push %ebx;");
    asm("loc_68039FA: xor %ebx,%ebx;");
    asm("loc_68039FC: mov 8(%esi),%eax;");
    asm("loc_68039FF: mov %ebx,%ecx;");
    asm("loc_6803A01: add %eax,%ecx;");
    asm("loc_6803A03: push %ecx;");
    asm("loc_6803A04: call _sub_6803950;");
    asm("loc_6803A09: mov 0xC(%esi),%eax;");
    asm("loc_6803A0C: add $4,%esp;");
    asm("loc_6803A0F: inc %edi;");
    asm("loc_6803A10: add $0x10,%ebx;");
    asm("loc_6803A13: cmp %eax,%edi;");
    asm("loc_6803A15: jl loc_68039FC;");
    asm("loc_6803A17: pop %ebx;");
    asm("loc_6803A18: pop %edi;");
    asm("loc_6803A19: pop %esi;");
    asm("loc_6803A1A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803A20() // _sub_6803A20
{
    __DEBUG_ASM(6803A20);
    // chunk 0x6803A20 _sub_6803A20
    asm("loc_6803A20: mov 4(%esp),%ecx;");
    asm("loc_6803A24: mov 4(%ecx),%eax;");
    asm("loc_6803A27: test %eax,%eax;");
    asm("loc_6803A29: jne loc_6803A56;");
    asm("loc_6803A2B: mov 8(%ecx),%eax;");
    asm("loc_6803A2E: test %eax,%eax;");
    asm("loc_6803A30: movl $1,4(%ecx);");
    asm("loc_6803A37: jl loc_6803A56;");
    asm("loc_6803A39: push %esi;");
    asm("loc_6803A3A: inc %eax;");
    asm("loc_6803A3B: mov %eax,%esi;");
    asm("loc_6803A3D: shl $4,%esi;");
    asm("loc_6803A40: push %edi;");
    asm("loc_6803A41: add %ecx,%esi;");
    asm("loc_6803A43: mov %eax,%edi;");
    asm("loc_6803A45: push %esi;");
    asm("loc_6803A46: call _sub_6803950;");
    asm("loc_6803A4B: add $4,%esp;");
    asm("loc_6803A4E: sub $0x10,%esi;");
    asm("loc_6803A51: dec %edi;");
    asm("loc_6803A52: jne loc_6803A45;");
    asm("loc_6803A54: pop %edi;");
    asm("loc_6803A55: pop %esi;");
    asm("loc_6803A56: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803A60() // _sub_6803A60
{
    __DEBUG_ASM(6803A60);
    // chunk 0x6803A60 _sub_6803A60
    asm("loc_6803A60: push %ebp;");
    asm("loc_6803A61: push %edi;");
    asm("loc_6803A62: mov 0xC(%esp),%edi;");
    asm("loc_6803A66: mov 4(%edi),%eax;");
    asm("loc_6803A69: test %eax,%eax;");
    asm("loc_6803A6B: jne loc_6803AAD;");
    asm("loc_6803A6D: mov 0xC(%edi),%eax;");
    asm("loc_6803A70: xor %ebp,%ebp;");
    asm("loc_6803A72: test %eax,%eax;");
    asm("loc_6803A74: movl $1,4(%edi);");
    asm("loc_6803A7B: jle loc_6803AAD;");
    asm("loc_6803A7D: push %ebx;");
    asm("loc_6803A7E: push %esi;");
    asm("loc_6803A7F: xor %ebx,%ebx;");
    asm("loc_6803A81: mov 8(%edi),%esi;");
    asm("loc_6803A84: mov (%esi,%ebx),%eax;");
    asm("loc_6803A87: add %ebx,%esi;");
    asm("loc_6803A89: cmp $0xFFFFFFFA,%eax;");
    asm("loc_6803A8C: je loc_6803AA0;");
    asm("loc_6803A8E: push %esi;");
    asm("loc_6803A8F: call _sub_6803950;");
    asm("loc_6803A94: add $0x10,%esi;");
    asm("loc_6803A97: push %esi;");
    asm("loc_6803A98: call _sub_6803950;");
    asm("loc_6803A9D: add $8,%esp;");
    asm("loc_6803AA0: mov 0xC(%edi),%eax;");
    asm("loc_6803AA3: inc %ebp;");
    asm("loc_6803AA4: add $0x20,%ebx;");
    asm("loc_6803AA7: cmp %eax,%ebp;");
    asm("loc_6803AA9: jl loc_6803A81;");
    asm("loc_6803AAB: pop %esi;");
    asm("loc_6803AAC: pop %ebx;");
    asm("loc_6803AAD: pop %edi;");
    asm("loc_6803AAE: pop %ebp;");
    asm("loc_6803AAF: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803AB0() // _sub_6803AB0
{
    __DEBUG_ASM(6803AB0);
    // chunk 0x6803AB0 _sub_6803AB0
    asm("loc_6803AB0: mov _data_680E604,%eax;");
    asm("loc_6803AB5: mov 0x78(%eax),%ecx;");
    asm("loc_6803AB8: cmp 0x74(%eax),%ecx;");
    asm("loc_6803ABB: jb loc_6803AC5;");
    asm("loc_6803ABD: push $0;");
    asm("loc_6803ABF: call _sub_68036D0;");
    asm("loc_6803AC4: pop %ecx;");
    asm("loc_6803AC5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803AD0() // _sub_6803AD0
{
    __DEBUG_ASM(6803AD0);
    // chunk 0x6803AD0 _sub_6803AD0
    asm("loc_6803AD0: push %ebx;");
    asm("loc_6803AD1: mov 8(%esp),%ebx;");
    asm("loc_6803AD5: cmpl $0xFFFFFFFE,(%ebx);");
    asm("loc_6803AD8: push %esi;");
    asm("loc_6803AD9: push %edi;");
    asm("loc_6803ADA: je loc_6803AE5;");
    asm("loc_6803ADC: pop %edi;");
    asm("loc_6803ADD: pop %esi;");
    asm("loc_6803ADE: mov $1,%eax;");
    asm("loc_6803AE3: pop %ebx;");
    asm("loc_6803AE4: ret;");
    asm("loc_6803AE5: mov 8(%ebx),%esi;");
    asm("loc_6803AE8: mov _import_680C05C,%edi;");
    asm("loc_6803AEE: add $0x28,%esi;");
    asm("loc_6803AF1: movl $1,0x10(%esp);");
    asm("loc_6803AF9: mov _import_680C058,%eax;");
    asm("loc_6803AFE: cmpl $1,(%eax);");
    asm("loc_6803B01: jle loc_6803B11;");
    asm("loc_6803B03: xor %ecx,%ecx;");
    asm("loc_6803B05: mov (%esi),%cl;");
    asm("loc_6803B07: push $8;");
    asm("loc_6803B09: push %ecx;");
    asm("loc_6803B0A: call *%edi;");
    asm("loc_6803B0C: add $8,%esp;");
    asm("loc_6803B0F: jmp loc_6803B24;");
    asm("loc_6803B11: mov _import_680C054,%eax;");
    asm("loc_6803B16: mov (%eax),%ecx;");
    asm("loc_6803B18: xor %edx,%edx;");
    asm("loc_6803B1A: mov (%esi),%dl;");
    asm("loc_6803B1C: xor %eax,%eax;");
    asm("loc_6803B1E: mov (%ecx,%edx,2),%al;");
    asm("loc_6803B21: and $8,%eax;");
    asm("loc_6803B24: test %eax,%eax;");
    asm("loc_6803B26: je loc_6803B2B;");
    asm("loc_6803B28: inc %esi;");
    asm("loc_6803B29: jmp loc_6803AF9;");
    asm("loc_6803B2B: mov (%esi),%al;");
    asm("loc_6803B2D: cmp $0x2D,%al;");
    asm("loc_6803B2F: jne loc_6803B3C;");
    asm("loc_6803B31: inc %esi;");
    asm("loc_6803B32: movl $0xFFFFFFFF,0x10(%esp);");
    asm("loc_6803B3A: jmp loc_6803B41;");
    asm("loc_6803B3C: cmp $0x2B,%al;");
    asm("loc_6803B3E: jne loc_6803B41;");
    asm("loc_6803B40: inc %esi;");
    asm("loc_6803B41: mov _import_680C058,%edx;");
    asm("loc_6803B47: cmpl $1,(%edx);");
    asm("loc_6803B4A: jle loc_6803B5A;");
    asm("loc_6803B4C: xor %eax,%eax;");
    asm("loc_6803B4E: mov (%esi),%al;");
    asm("loc_6803B50: push $4;");
    asm("loc_6803B52: push %eax;");
    asm("loc_6803B53: call *%edi;");
    asm("loc_6803B55: add $8,%esp;");
    asm("loc_6803B58: jmp loc_6803B6E;");
    asm("loc_6803B5A: mov _import_680C054,%edx;");
    asm("loc_6803B60: xor %ecx,%ecx;");
    asm("loc_6803B62: mov (%esi),%cl;");
    asm("loc_6803B64: xor %eax,%eax;");
    asm("loc_6803B66: mov (%edx),%eax;");
    asm("loc_6803B68: mov (%eax,%ecx,2),%al;");
    asm("loc_6803B6B: and $4,%eax;");
    asm("loc_6803B6E: test %eax,%eax;");
    asm("loc_6803B70: jne loc_6803BAC;");
    asm("loc_6803B72: mov _import_680C058,%ecx;");
    asm("loc_6803B78: cmpl $1,(%ecx);");
    asm("loc_6803B7B: jle loc_6803B8C;");
    asm("loc_6803B7D: xor %edx,%edx;");
    asm("loc_6803B7F: mov 1(%esi),%dl;");
    asm("loc_6803B82: push $4;");
    asm("loc_6803B84: push %edx;");
    asm("loc_6803B85: call *%edi;");
    asm("loc_6803B87: add $8,%esp;");
    asm("loc_6803B8A: jmp loc_6803B9F;");
    asm("loc_6803B8C: mov _import_680C054,%ecx;");
    asm("loc_6803B92: mov (%ecx),%edx;");
    asm("loc_6803B94: xor %eax,%eax;");
    asm("loc_6803B96: mov 1(%esi),%al;");
    asm("loc_6803B99: mov (%edx,%eax,2),%al;");
    asm("loc_6803B9C: and $4,%eax;");
    asm("loc_6803B9F: test %eax,%eax;");
    asm("loc_6803BA1: jne loc_6803BAC;");
    asm("loc_6803BA3: pop %edi;");
    asm("loc_6803BA4: pop %esi;");
    asm("loc_6803BA5: mov $2,%eax;");
    asm("loc_6803BAA: pop %ebx;");
    asm("loc_6803BAB: ret;");
    asm("loc_6803BAC: push %esi;");
    asm("loc_6803BAD: call _sub_68061C0;");
    asm("loc_6803BB2: fcoml _data_680C180;");
    asm("loc_6803BB8: add $4,%esp;");
    asm("loc_6803BBB: fnstsw %ax;");
    asm("loc_6803BBD: test $1,%ah;");
    asm("loc_6803BC0: je loc_6803BCD;");
    asm("loc_6803BC2: pop %edi;");
    asm("loc_6803BC3: fstp %st(0);");
    asm("loc_6803BC5: pop %esi;");
    asm("loc_6803BC6: mov $2,%eax;");
    asm("loc_6803BCB: pop %ebx;");
    asm("loc_6803BCC: ret;");
    asm("loc_6803BCD: fildl 0x10(%esp);");
    asm("loc_6803BD1: pop %edi;");
    asm("loc_6803BD2: pop %esi;");
    asm("loc_6803BD3: movl $0xFFFFFFFF,(%ebx);");
    asm("loc_6803BD9: fmul %st(1),%st;");
    asm("loc_6803BDB: xor %eax,%eax;");
    asm("loc_6803BDD: fstpl 8(%ebx);");
    asm("loc_6803BE0: pop %ebx;");
    asm("loc_6803BE1: fstp %st(0);");
    asm("loc_6803BE3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803BF0() // _sub_6803BF0
{
    __DEBUG_ASM(6803BF0);
    // chunk 0x6803BF0 _sub_6803BF0
    asm("loc_6803BF0: sub $0x20,%esp;");
    asm("loc_6803BF3: push %esi;");
    asm("loc_6803BF4: mov 0x28(%esp),%esi;");
    asm("loc_6803BF8: cmpl $0xFFFFFFFF,(%esi);");
    asm("loc_6803BFB: je loc_6803C07;");
    asm("loc_6803BFD: mov $1,%eax;");
    asm("loc_6803C02: pop %esi;");
    asm("loc_6803C03: add $0x20,%esp;");
    asm("loc_6803C06: ret;");
    asm("loc_6803C07: fldl 8(%esi);");
    asm("loc_6803C0A: sub $8,%esp;");
    asm("loc_6803C0D: fstpl (%esp);");
    asm("loc_6803C10: lea 0xC(%esp),%eax;");
    asm("loc_6803C14: push $_data_680D518;");
    asm("loc_6803C19: push %eax;");
    asm("loc_6803C1A: calll *_import_680C060;");
    asm("loc_6803C20: lea 0x14(%esp),%ecx;");
    asm("loc_6803C24: push %ecx;");
    asm("loc_6803C25: call _sub_6805A80;");
    asm("loc_6803C2A: add $0x14,%esp;");
    asm("loc_6803C2D: mov %eax,8(%esi);");
    asm("loc_6803C30: movl $0xFFFFFFFE,(%esi);");
    asm("loc_6803C36: xor %eax,%eax;");
    asm("loc_6803C38: pop %esi;");
    asm("loc_6803C39: add $0x20,%esp;");
    asm("loc_6803C3C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803C40() // _sub_6803C40
{
    __DEBUG_ASM(6803C40);
    // chunk 0x6803C40 _sub_6803C40
    asm("loc_6803C40: sub $0x20,%esp;");
    asm("loc_6803C43: push $_data_680D520;");
    asm("loc_6803C48: movl $0xFFFFFFFE,0x14(%esp);");
    asm("loc_6803C50: call _sub_6805A80;");
    asm("loc_6803C55: fildl 0x2C(%esp);");
    asm("loc_6803C59: mov 0x28(%esp),%edx;");
    asm("loc_6803C5D: mov %eax,0x1C(%esp);");
    asm("loc_6803C61: lea 4(%esp),%eax;");
    asm("loc_6803C65: fstpl 0xC(%esp);");
    asm("loc_6803C69: push %eax;");
    asm("loc_6803C6A: lea 0x18(%esp),%ecx;");
    asm("loc_6803C6E: push %ecx;");
    asm("loc_6803C6F: push %edx;");
    asm("loc_6803C70: movl $0xFFFFFFFF,0x10(%esp);");
    asm("loc_6803C78: call _sub_68053A0;");
    asm("loc_6803C7D: add $0x30,%esp;");
    asm("loc_6803C80: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803C90() // _sub_6803C90
{
    __DEBUG_ASM(6803C90);
    // chunk 0x6803C90 _sub_6803C90
    asm("loc_6803C90: push %esi;");
    asm("loc_6803C91: mov 8(%esp),%esi;");
    asm("loc_6803C95: test %esi,%esi;");
    asm("loc_6803C97: jle loc_6803D00;");
    asm("loc_6803C99: push %ebx;");
    asm("loc_6803C9A: mov _data_680E604,%ebx;");
    asm("loc_6803CA0: push %ebp;");
    asm("loc_6803CA1: push %edi;");
    asm("loc_6803CA2: push %esi;");
    asm("loc_6803CA3: call _sub_6806420;");
    asm("loc_6803CA8: mov (%ebx),%ecx;");
    asm("loc_6803CAA: sub $0x10,%ecx;");
    asm("loc_6803CAD: mov (%ecx),%edi;");
    asm("loc_6803CAF: lea 0x10(%eax),%edx;");
    asm("loc_6803CB2: mov %edi,(%edx);");
    asm("loc_6803CB4: mov 4(%ecx),%edi;");
    asm("loc_6803CB7: mov %edi,4(%edx);");
    asm("loc_6803CBA: mov 8(%ecx),%edi;");
    asm("loc_6803CBD: mov %edi,8(%edx);");
    asm("loc_6803CC0: mov 0xC(%ecx),%ecx;");
    asm("loc_6803CC3: mov %ecx,0xC(%edx);");
    asm("loc_6803CC6: mov %esi,%edx;");
    asm("loc_6803CC8: add $4,%esp;");
    asm("loc_6803CCB: shl $4,%edx;");
    asm("loc_6803CCE: inc %esi;");
    asm("loc_6803CCF: shl $4,%esi;");
    asm("loc_6803CD2: mov %esi,%edi;");
    asm("loc_6803CD4: mov (%ebx),%esi;");
    asm("loc_6803CD6: mov %edx,%ecx;");
    asm("loc_6803CD8: mov %ecx,%ebp;");
    asm("loc_6803CDA: sub %edi,%esi;");
    asm("loc_6803CDC: shr $2,%ecx;");
    asm("loc_6803CDF: lea 0x20(%eax),%edi;");
    asm("loc_6803CE2: rep movsl (%esi),(%edi);");
    asm("loc_6803CE4: mov %ebp,%ecx;");
    asm("loc_6803CE6: and $3,%ecx;");
    asm("loc_6803CE9: rep movsb (%esi),(%edi);");
    asm("loc_6803CEB: mov (%ebx),%ecx;");
    asm("loc_6803CED: sub %edx,%ecx;");
    asm("loc_6803CEF: mov %ecx,(%ebx);");
    asm("loc_6803CF1: pop %edi;");
    asm("loc_6803CF2: movl $0xFFFFFFF9,-0x10(%ecx);");
    asm("loc_6803CF9: mov (%ebx),%edx;");
    asm("loc_6803CFB: pop %ebp;");
    asm("loc_6803CFC: mov %eax,-8(%edx);");
    asm("loc_6803CFF: pop %ebx;");
    asm("loc_6803D00: pop %esi;");
    asm("loc_6803D01: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803D10() // _sub_6803D10
{
    __DEBUG_ASM(6803D10);
    // chunk 0x6803D10 _sub_6803D10
    asm("loc_6803D10: mov _data_680E604,%edx;");
    asm("loc_6803D16: push %ebx;");
    asm("loc_6803D17: push %esi;");
    asm("loc_6803D18: push %edi;");
    asm("loc_6803D19: mov (%edx),%edi;");
    asm("loc_6803D1B: mov -0x20(%edi),%eax;");
    asm("loc_6803D1E: sub $0x20,%edi;");
    asm("loc_6803D21: cmp $0xFFFFFFFD,%eax;");
    asm("loc_6803D24: je loc_6803D65;");
    asm("loc_6803D26: push %edi;");
    asm("loc_6803D27: call _sub_6804FE0;");
    asm("loc_6803D2C: mov _data_680E604,%ecx;");
    asm("loc_6803D32: mov 0x64(%ecx),%esi;");
    asm("loc_6803D35: lea (%eax,%eax,8),%eax;");
    asm("loc_6803D38: shl $5,%eax;");
    asm("loc_6803D3B: sub %eax,%esi;");
    asm("loc_6803D3D: mov (%esi),%eax;");
    asm("loc_6803D3F: add $4,%esp;");
    asm("loc_6803D42: cmp $0xFFFFFFFA,%eax;");
    asm("loc_6803D45: jne loc_6803D54;");
    asm("loc_6803D47: push $_data_680D524;");
    asm("loc_6803D4C: call _sub_6802E00;");
    asm("loc_6803D51: add $4,%esp;");
    asm("loc_6803D54: push $1;");
    asm("loc_6803D56: push $2;");
    asm("loc_6803D58: push %esi;");
    asm("loc_6803D59: call _sub_6802B00;");
    asm("loc_6803D5E: add $0xC,%esp;");
    asm("loc_6803D61: pop %edi;");
    asm("loc_6803D62: pop %esi;");
    asm("loc_6803D63: pop %ebx;");
    asm("loc_6803D64: ret;");
    asm("loc_6803D65: mov 8(%edi),%ecx;");
    asm("loc_6803D68: mov 0x14(%ecx),%eax;");
    asm("loc_6803D6B: mov 0x64(%edx),%esi;");
    asm("loc_6803D6E: lea (%eax,%eax,8),%ebx;");
    asm("loc_6803D71: shl $5,%ebx;");
    asm("loc_6803D74: sub %ebx,%esi;");
    asm("loc_6803D76: cmpl $0xFFFFFFFA,(%esi);");
    asm("loc_6803D79: jne loc_6803D54;");
    asm("loc_6803D7B: lea 0x10(%edi),%edx;");
    asm("loc_6803D7E: push %edx;");
    asm("loc_6803D7F: push %ecx;");
    asm("loc_6803D80: call _sub_68051D0;");
    asm("loc_6803D85: mov 0x10(%eax),%ecx;");
    asm("loc_6803D88: mov _data_680E604,%edx;");
    asm("loc_6803D8E: add $0x10,%eax;");
    asm("loc_6803D91: add $8,%esp;");
    asm("loc_6803D94: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_6803D97: jne loc_6803DBA;");
    asm("loc_6803D99: mov 0x64(%edx),%ecx;");
    asm("loc_6803D9C: sub %ebx,%ecx;");
    asm("loc_6803D9E: mov 0x20(%ecx),%esi;");
    asm("loc_6803DA1: add $0x20,%ecx;");
    asm("loc_6803DA4: cmp $0xFFFFFFFA,%esi;");
    asm("loc_6803DA7: je loc_6803DBA;");
    asm("loc_6803DA9: push $1;");
    asm("loc_6803DAB: push $2;");
    asm("loc_6803DAD: push %ecx;");
    asm("loc_6803DAE: call _sub_6802B00;");
    asm("loc_6803DB3: add $0xC,%esp;");
    asm("loc_6803DB6: pop %edi;");
    asm("loc_6803DB7: pop %esi;");
    asm("loc_6803DB8: pop %ebx;");
    asm("loc_6803DB9: ret;");
    asm("loc_6803DBA: addl $0xFFFFFFF0,(%edx);");
    asm("loc_6803DBD: mov (%eax),%ecx;");
    asm("loc_6803DBF: mov %ecx,(%edi);");
    asm("loc_6803DC1: mov 4(%eax),%edx;");
    asm("loc_6803DC4: mov %edx,4(%edi);");
    asm("loc_6803DC7: mov 8(%eax),%ecx;");
    asm("loc_6803DCA: mov %ecx,8(%edi);");
    asm("loc_6803DCD: mov 0xC(%eax),%edx;");
    asm("loc_6803DD0: mov %edx,0xC(%edi);");
    asm("loc_6803DD3: pop %edi;");
    asm("loc_6803DD4: pop %esi;");
    asm("loc_6803DD5: pop %ebx;");
    asm("loc_6803DD6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803DE0() // _sub_6803DE0
{
    __DEBUG_ASM(6803DE0);
    // chunk 0x6803DE0 _sub_6803DE0
    asm("loc_6803DE0: mov _data_680E604,%eax;");
    asm("loc_6803DE5: push %ebx;");
    asm("loc_6803DE6: push %esi;");
    asm("loc_6803DE7: push %edi;");
    asm("loc_6803DE8: mov 0x10(%esp),%edi;");
    asm("loc_6803DEC: cmpl $0xFFFFFFFD,(%edi);");
    asm("loc_6803DEF: mov %eax,%ebx;");
    asm("loc_6803DF1: je loc_6803E9D;");
    asm("loc_6803DF7: push %edi;");
    asm("loc_6803DF8: call _sub_6804FE0;");
    asm("loc_6803DFD: lea (%eax,%eax,8),%eax;");
    asm("loc_6803E00: shl $5,%eax;");
    asm("loc_6803E03: mov %eax,%ecx;");
    asm("loc_6803E05: mov _data_680E604,%eax;");
    asm("loc_6803E0A: mov 0x64(%eax),%esi;");
    asm("loc_6803E0D: sub %ecx,%esi;");
    asm("loc_6803E0F: mov 0x10(%esi),%ecx;");
    asm("loc_6803E12: add $0x10,%esi;");
    asm("loc_6803E15: add $4,%esp;");
    asm("loc_6803E18: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_6803E1B: jne loc_6803E2F;");
    asm("loc_6803E1D: push $_data_680D524;");
    asm("loc_6803E22: call _sub_6802E00;");
    asm("loc_6803E27: mov _data_680E604,%eax;");
    asm("loc_6803E2C: add $4,%esp;");
    asm("loc_6803E2F: mov (%eax),%ecx;");
    asm("loc_6803E31: mov (%ebx),%edx;");
    asm("loc_6803E33: sub $0x10,%ecx;");
    asm("loc_6803E36: mov (%ecx),%eax;");
    asm("loc_6803E38: add $0x10,%edx;");
    asm("loc_6803E3B: mov %eax,(%edx);");
    asm("loc_6803E3D: mov 4(%ecx),%eax;");
    asm("loc_6803E40: mov %eax,4(%edx);");
    asm("loc_6803E43: mov 8(%ecx),%eax;");
    asm("loc_6803E46: mov %eax,8(%edx);");
    asm("loc_6803E49: mov 0xC(%ecx),%ecx;");
    asm("loc_6803E4C: mov %ecx,0xC(%edx);");
    asm("loc_6803E4F: mov (%ebx),%eax;");
    asm("loc_6803E51: lea 0x10(%edi),%edx;");
    asm("loc_6803E54: mov (%edx),%ecx;");
    asm("loc_6803E56: mov %ecx,(%eax);");
    asm("loc_6803E58: mov 4(%edx),%ecx;");
    asm("loc_6803E5B: mov %ecx,4(%eax);");
    asm("loc_6803E5E: mov 8(%edx),%ecx;");
    asm("loc_6803E61: mov %ecx,8(%eax);");
    asm("loc_6803E64: mov 0xC(%edx),%edx;");
    asm("loc_6803E67: mov %edx,0xC(%eax);");
    asm("loc_6803E6A: mov (%ebx),%eax;");
    asm("loc_6803E6C: mov (%edi),%ecx;");
    asm("loc_6803E6E: sub $0x10,%eax;");
    asm("loc_6803E71: mov %ecx,(%eax);");
    asm("loc_6803E73: mov 4(%edi),%edx;");
    asm("loc_6803E76: mov %edx,4(%eax);");
    asm("loc_6803E79: mov 8(%edi),%ecx;");
    asm("loc_6803E7C: mov %ecx,8(%eax);");
    asm("loc_6803E7F: mov 0xC(%edi),%edx;");
    asm("loc_6803E82: mov %edx,0xC(%eax);");
    asm("loc_6803E85: mov (%ebx),%eax;");
    asm("loc_6803E87: push $0;");
    asm("loc_6803E89: add $0x20,%eax;");
    asm("loc_6803E8C: push $3;");
    asm("loc_6803E8E: push %esi;");
    asm("loc_6803E8F: mov %eax,(%ebx);");
    asm("loc_6803E91: call _sub_6802B00;");
    asm("loc_6803E96: add $0xC,%esp;");
    asm("loc_6803E99: pop %edi;");
    asm("loc_6803E9A: pop %esi;");
    asm("loc_6803E9B: pop %ebx;");
    asm("loc_6803E9C: ret;");
    asm("loc_6803E9D: mov 8(%edi),%edx;");
    asm("loc_6803EA0: mov 0x14(%edx),%ecx;");
    asm("loc_6803EA3: mov 0x64(%eax),%esi;");
    asm("loc_6803EA6: lea (%ecx,%ecx,8),%ecx;");
    asm("loc_6803EA9: shl $5,%ecx;");
    asm("loc_6803EAC: sub %ecx,%esi;");
    asm("loc_6803EAE: mov 0x10(%esi),%ecx;");
    asm("loc_6803EB1: add $0x10,%esi;");
    asm("loc_6803EB4: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_6803EB7: jne loc_6803E2F;");
    asm("loc_6803EBD: mov (%ebx),%eax;");
    asm("loc_6803EBF: sub $0x10,%eax;");
    asm("loc_6803EC2: push %eax;");
    asm("loc_6803EC3: add $0x10,%edi;");
    asm("loc_6803EC6: push %edi;");
    asm("loc_6803EC7: push %edx;");
    asm("loc_6803EC8: call _sub_68053A0;");
    asm("loc_6803ECD: mov (%ebx),%eax;");
    asm("loc_6803ECF: add $0xC,%esp;");
    asm("loc_6803ED2: pop %edi;");
    asm("loc_6803ED3: add $0xFFFFFFF0,%eax;");
    asm("loc_6803ED6: pop %esi;");
    asm("loc_6803ED7: mov %eax,(%ebx);");
    asm("loc_6803ED9: pop %ebx;");
    asm("loc_6803EDA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803EE0() // _sub_6803EE0
{
    __DEBUG_ASM(6803EE0);
    // chunk 0x6803EE0 _sub_6803EE0
    asm("loc_6803EE0: mov 4(%esp),%eax;");
    asm("loc_6803EE4: cmpl $0xFFFFFFFD,(%eax);");
    asm("loc_6803EE7: je loc_6803EF7;");
    asm("loc_6803EE9: push $_data_680D524;");
    asm("loc_6803EEE: call _sub_6802E00;");
    asm("loc_6803EF3: add $4,%esp;");
    asm("loc_6803EF6: ret;");
    asm("loc_6803EF7: push %esi;");
    asm("loc_6803EF8: mov _data_680E604,%esi;");
    asm("loc_6803EFE: mov (%esi),%ecx;");
    asm("loc_6803F00: sub $0x10,%ecx;");
    asm("loc_6803F03: push %ecx;");
    asm("loc_6803F04: lea 0x10(%eax),%edx;");
    asm("loc_6803F07: mov 8(%eax),%eax;");
    asm("loc_6803F0A: push %edx;");
    asm("loc_6803F0B: push %eax;");
    asm("loc_6803F0C: call _sub_68053A0;");
    asm("loc_6803F11: mov (%esi),%eax;");
    asm("loc_6803F13: add $0xFFFFFFD0,%eax;");
    asm("loc_6803F16: add $0xC,%esp;");
    asm("loc_6803F19: mov %eax,(%esi);");
    asm("loc_6803F1B: pop %esi;");
    asm("loc_6803F1C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803F20() // _sub_6803F20
{
    __DEBUG_ASM(6803F20);
    // chunk 0x6803F20 _sub_6803F20
    asm("loc_6803F20: push %esi;");
    asm("loc_6803F21: push %edi;");
    asm("loc_6803F22: mov 0xC(%esp),%edi;");
    asm("loc_6803F26: mov 0x10(%edi),%edx;");
    asm("loc_6803F29: lea 0x10(%edi),%esi;");
    asm("loc_6803F2C: mov $_data_680D510,%eax;");
    asm("loc_6803F31: sub %edx,%eax;");
    asm("loc_6803F33: cmpb $0,(%eax);");
    asm("loc_6803F36: je loc_6803F9F;");
    asm("loc_6803F38: push %esi;");
    asm("loc_6803F39: call _sub_6804FE0;");
    asm("loc_6803F3E: lea (%eax,%eax,8),%ecx;");
    asm("loc_6803F41: mov _data_680E604,%eax;");
    asm("loc_6803F46: mov 0x64(%eax),%edx;");
    asm("loc_6803F49: shl $5,%ecx;");
    asm("loc_6803F4C: sub %ecx,%edx;");
    asm("loc_6803F4E: mov 0x30(%edx),%ecx;");
    asm("loc_6803F51: add $0x30,%edx;");
    asm("loc_6803F54: add $4,%esp;");
    asm("loc_6803F57: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_6803F5A: je loc_6803FA4;");
    asm("loc_6803F5C: mov (%eax),%ecx;");
    asm("loc_6803F5E: movl $0xFFFFFFFE,(%ecx);");
    asm("loc_6803F64: mov (%eax),%ecx;");
    asm("loc_6803F66: mov %edi,8(%ecx);");
    asm("loc_6803F69: mov (%eax),%edi;");
    asm("loc_6803F6B: add $0x10,%edi;");
    asm("loc_6803F6E: mov %edi,(%eax);");
    asm("loc_6803F70: mov %edi,%ecx;");
    asm("loc_6803F72: mov (%esi),%edi;");
    asm("loc_6803F74: mov %edi,(%ecx);");
    asm("loc_6803F76: mov 4(%esi),%edi;");
    asm("loc_6803F79: mov %edi,4(%ecx);");
    asm("loc_6803F7C: mov 8(%esi),%edi;");
    asm("loc_6803F7F: mov %edi,8(%ecx);");
    asm("loc_6803F82: mov 0xC(%esi),%esi;");
    asm("loc_6803F85: mov %esi,0xC(%ecx);");
    asm("loc_6803F88: mov (%eax),%ecx;");
    asm("loc_6803F8A: push $1;");
    asm("loc_6803F8C: add $0x10,%ecx;");
    asm("loc_6803F8F: push $2;");
    asm("loc_6803F91: push %edx;");
    asm("loc_6803F92: mov %ecx,(%eax);");
    asm("loc_6803F94: call _sub_6802B00;");
    asm("loc_6803F99: add $0xC,%esp;");
    asm("loc_6803F9C: pop %edi;");
    asm("loc_6803F9D: pop %esi;");
    asm("loc_6803F9E: ret;");
    asm("loc_6803F9F: mov _data_680E604,%eax;");
    asm("loc_6803FA4: mov (%eax),%edx;");
    asm("loc_6803FA6: mov (%esi),%eax;");
    asm("loc_6803FA8: mov %eax,(%edx);");
    asm("loc_6803FAA: mov 4(%esi),%ecx;");
    asm("loc_6803FAD: mov %ecx,4(%edx);");
    asm("loc_6803FB0: mov 8(%esi),%eax;");
    asm("loc_6803FB3: mov %eax,8(%edx);");
    asm("loc_6803FB6: mov 0xC(%esi),%ecx;");
    asm("loc_6803FB9: mov %ecx,0xC(%edx);");
    asm("loc_6803FBC: mov _data_680E604,%eax;");
    asm("loc_6803FC1: mov (%eax),%ecx;");
    asm("loc_6803FC3: add $0x10,%ecx;");
    asm("loc_6803FC6: pop %edi;");
    asm("loc_6803FC7: mov %ecx,(%eax);");
    asm("loc_6803FC9: pop %esi;");
    asm("loc_6803FCA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6803FD0() // _sub_6803FD0
{
    __DEBUG_ASM(6803FD0);
    // chunk 0x6803FD0 _sub_6803FD0
    asm("loc_6803FD0: sub $0x10,%esp;");
    asm("loc_6803FD3: push %esi;");
    asm("loc_6803FD4: push %edi;");
    asm("loc_6803FD5: mov 0x1C(%esp),%edi;");
    asm("loc_6803FD9: lea 0x10(%edi),%esi;");
    asm("loc_6803FDC: push %esi;");
    asm("loc_6803FDD: call _sub_6804FE0;");
    asm("loc_6803FE2: lea (%eax,%eax,8),%eax;");
    asm("loc_6803FE5: shl $5,%eax;");
    asm("loc_6803FE8: mov %eax,%ecx;");
    asm("loc_6803FEA: mov _data_680E604,%eax;");
    asm("loc_6803FEF: mov 0x64(%eax),%edx;");
    asm("loc_6803FF2: sub %ecx,%edx;");
    asm("loc_6803FF4: mov 0x40(%edx),%ecx;");
    asm("loc_6803FF7: add $0x40,%edx;");
    asm("loc_6803FFA: add $4,%esp;");
    asm("loc_6803FFD: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_6804000: jne loc_680401D;");
    asm("loc_6804002: addl $0xFFFFFFF0,(%eax);");
    asm("loc_6804005: mov _data_680E604,%edx;");
    asm("loc_680400B: mov (%edx),%eax;");
    asm("loc_680400D: push %eax;");
    asm("loc_680400E: push %edi;");
    asm("loc_680400F: call _sub_6805C90;");
    asm("loc_6804014: add $8,%esp;");
    asm("loc_6804017: pop %edi;");
    asm("loc_6804018: pop %esi;");
    asm("loc_6804019: add $0x10,%esp;");
    asm("loc_680401C: ret;");
    asm("loc_680401D: mov (%eax),%ecx;");
    asm("loc_680401F: push %ebx;");
    asm("loc_6804020: push %ebp;");
    asm("loc_6804021: add $0xFFFFFFF0,%ecx;");
    asm("loc_6804024: mov %ecx,%ebp;");
    asm("loc_6804026: mov (%ebp),%edi;");
    asm("loc_6804029: mov 4(%ebp),%ebx;");
    asm("loc_680402C: mov %ebx,0x14(%esp);");
    asm("loc_6804030: mov 8(%ebp),%ebx;");
    asm("loc_6804033: mov 0xC(%ebp),%ebp;");
    asm("loc_6804036: movl $0xFFFFFFFE,(%ecx);");
    asm("loc_680403C: mov (%eax),%ecx;");
    asm("loc_680403E: mov %ebp,0x1C(%esp);");
    asm("loc_6804042: mov 0x24(%esp),%ebp;");
    asm("loc_6804046: mov %ebp,-8(%ecx);");
    asm("loc_6804049: mov (%esi),%ebp;");
    asm("loc_680404B: mov (%eax),%ecx;");
    asm("loc_680404D: mov %ebp,(%ecx);");
    asm("loc_680404F: mov 4(%esi),%ebp;");
    asm("loc_6804052: mov %ebp,4(%ecx);");
    asm("loc_6804055: mov 8(%esi),%ebp;");
    asm("loc_6804058: mov %ebp,8(%ecx);");
    asm("loc_680405B: mov 0xC(%esi),%esi;");
    asm("loc_680405E: mov %esi,0xC(%ecx);");
    asm("loc_6804061: mov (%eax),%ebp;");
    asm("loc_6804063: mov 0x14(%esp),%esi;");
    asm("loc_6804067: add $0x10,%ebp;");
    asm("loc_680406A: mov %ebp,(%eax);");
    asm("loc_680406C: mov %ebp,%ecx;");
    asm("loc_680406E: mov %edi,(%ecx);");
    asm("loc_6804070: mov %esi,4(%ecx);");
    asm("loc_6804073: mov 0x1C(%esp),%esi;");
    asm("loc_6804077: mov %ebx,8(%ecx);");
    asm("loc_680407A: mov %esi,0xC(%ecx);");
    asm("loc_680407D: mov (%eax),%ebx;");
    asm("loc_680407F: push $0;");
    asm("loc_6804081: push $3;");
    asm("loc_6804083: add $0x10,%ebx;");
    asm("loc_6804086: push %edx;");
    asm("loc_6804087: mov %ebx,(%eax);");
    asm("loc_6804089: call _sub_6802B00;");
    asm("loc_680408E: add $0xC,%esp;");
    asm("loc_6804091: pop %ebp;");
    asm("loc_6804092: pop %ebx;");
    asm("loc_6804093: pop %edi;");
    asm("loc_6804094: pop %esi;");
    asm("loc_6804095: add $0x10,%esp;");
    asm("loc_6804098: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68040A0() // _sub_68040A0
{
    __DEBUG_ASM(68040A0);
    // chunk 0x68040A0 _sub_68040A0
    asm("loc_68040A0: push %esi;");
    asm("loc_68040A1: mov _data_680E604,%esi;");
    asm("loc_68040A7: mov (%esi),%eax;");
    asm("loc_68040A9: mov -0x20(%eax),%ecx;");
    asm("loc_68040AC: cmp $0xFFFFFFFF,%ecx;");
    asm("loc_68040AF: jne loc_68040BE;");
    asm("loc_68040B1: cmp %ecx,-0x10(%eax);");
    asm("loc_68040B4: jne loc_68040BE;");
    asm("loc_68040B6: fldl -0x18(%eax);");
    asm("loc_68040B9: fsubl -8(%eax);");
    asm("loc_68040BC: jmp loc_68040EF;");
    asm("loc_68040BE: cmp $0xFFFFFFFE,%ecx;");
    asm("loc_68040C1: jne loc_680413A;");
    asm("loc_68040C3: cmpl $0xFFFFFFFE,-0x10(%eax);");
    asm("loc_68040C7: jne loc_680413A;");
    asm("loc_68040C9: mov -8(%eax),%ecx;");
    asm("loc_68040CC: mov 0x20(%ecx),%edx;");
    asm("loc_68040CF: mov -0x18(%eax),%eax;");
    asm("loc_68040D2: push %edx;");
    asm("loc_68040D3: add $0x28,%ecx;");
    asm("loc_68040D6: push %ecx;");
    asm("loc_68040D7: mov 0x20(%eax),%ecx;");
    asm("loc_68040DA: push %ecx;");
    asm("loc_68040DB: add $0x28,%eax;");
    asm("loc_68040DE: push %eax;");
    asm("loc_68040DF: call _sub_68041F0;");
    asm("loc_68040E4: mov %eax,0x24(%esp);");
    asm("loc_68040E8: fildl 0x24(%esp);");
    asm("loc_68040EC: add $0x10,%esp;");
    asm("loc_68040EF: mov (%esi),%eax;");
    asm("loc_68040F1: fcoml _data_680C180;");
    asm("loc_68040F7: add $0xFFFFFFF0,%eax;");
    asm("loc_68040FA: mov %eax,(%esi);");
    asm("loc_68040FC: movl $0,-8(%eax);");
    asm("loc_6804103: movl $0x3FF00000,-4(%eax);");
    asm("loc_680410A: fnstsw %ax;");
    asm("loc_680410C: test $1,%ah;");
    asm("loc_680410F: je loc_680411E;");
    asm("loc_6804111: mov (%esi),%edx;");
    asm("loc_6804113: fstp %st(0);");
    asm("loc_6804115: mov 8(%esp),%eax;");
    asm("loc_6804119: mov %eax,-0x10(%edx);");
    asm("loc_680411C: pop %esi;");
    asm("loc_680411D: ret;");
    asm("loc_680411E: fcompl _data_680C180;");
    asm("loc_6804124: fnstsw %ax;");
    asm("loc_6804126: test $0x40,%ah;");
    asm("loc_6804129: mov 0xC(%esp),%eax;");
    asm("loc_680412D: jne loc_6804133;");
    asm("loc_680412F: mov 0x10(%esp),%eax;");
    asm("loc_6804133: mov (%esi),%edx;");
    asm("loc_6804135: mov %eax,-0x10(%edx);");
    asm("loc_6804138: pop %esi;");
    asm("loc_6804139: ret;");
    asm("loc_680413A: mov 0x14(%esp),%eax;");
    asm("loc_680413E: push $_data_680D544;");
    asm("loc_6804143: push %eax;");
    asm("loc_6804144: call _sub_6804150;");
    asm("loc_6804149: add $8,%esp;");
    asm("loc_680414C: pop %esi;");
    asm("loc_680414D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6804150() // _sub_6804150
{
    __DEBUG_ASM(6804150);
    // chunk 0x6804150 _sub_6804150
    asm("loc_6804150: mov _data_680E604,%eax;");
    asm("loc_6804155: mov (%eax),%ecx;");
    asm("loc_6804157: push %ebx;");
    asm("loc_6804158: push %esi;");
    asm("loc_6804159: sub $0x20,%ecx;");
    asm("loc_680415C: push %edi;");
    asm("loc_680415D: push %ecx;");
    asm("loc_680415E: call _sub_6804FE0;");
    asm("loc_6804163: mov 0x14(%esp),%edi;");
    asm("loc_6804167: lea (%eax,%eax,8),%edx;");
    asm("loc_680416A: mov _data_680E604,%eax;");
    asm("loc_680416F: shl $1,%edx;");
    asm("loc_6804171: mov %edi,%esi;");
    asm("loc_6804173: sub %edx,%esi;");
    asm("loc_6804175: mov 0x64(%eax),%edx;");
    asm("loc_6804178: shl $4,%esi;");
    asm("loc_680417B: mov (%esi,%edx),%ecx;");
    asm("loc_680417E: add %edx,%esi;");
    asm("loc_6804180: add $4,%esp;");
    asm("loc_6804183: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_6804186: jne loc_68041CA;");
    asm("loc_6804188: mov (%eax),%eax;");
    asm("loc_680418A: sub $0x10,%eax;");
    asm("loc_680418D: push %eax;");
    asm("loc_680418E: mov %edx,%ebx;");
    asm("loc_6804190: call _sub_6804FE0;");
    asm("loc_6804195: lea (%eax,%eax,8),%ecx;");
    asm("loc_6804198: shl $1,%ecx;");
    asm("loc_680419A: mov %edi,%esi;");
    asm("loc_680419C: sub %ecx,%esi;");
    asm("loc_680419E: shl $4,%esi;");
    asm("loc_68041A1: mov (%esi,%ebx),%eax;");
    asm("loc_68041A4: add %ebx,%esi;");
    asm("loc_68041A6: add $4,%esp;");
    asm("loc_68041A9: cmp $0xFFFFFFFA,%eax;");
    asm("loc_68041AC: jne loc_68041CA;");
    asm("loc_68041AE: mov %edi,%esi;");
    asm("loc_68041B0: shl $4,%esi;");
    asm("loc_68041B3: mov (%esi,%ebx),%eax;");
    asm("loc_68041B6: add %ebx,%esi;");
    asm("loc_68041B8: cmp $0xFFFFFFFA,%eax;");
    asm("loc_68041BB: jne loc_68041CA;");
    asm("loc_68041BD: mov 0x14(%esp),%edx;");
    asm("loc_68041C1: push %edx;");
    asm("loc_68041C2: call _sub_6802E00;");
    asm("loc_68041C7: add $4,%esp;");
    asm("loc_68041CA: mov _off_680D5C4(,%edi,4),%eax;");
    asm("loc_68041D1: push %eax;");
    asm("loc_68041D2: call _sub_68022B0;");
    asm("loc_68041D7: push $1;");
    asm("loc_68041D9: push $3;");
    asm("loc_68041DB: push %esi;");
    asm("loc_68041DC: call _sub_6802B00;");
    asm("loc_68041E1: add $0x10,%esp;");
    asm("loc_68041E4: pop %edi;");
    asm("loc_68041E5: pop %esi;");
    asm("loc_68041E6: pop %ebx;");
    asm("loc_68041E7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68041F0() // _sub_68041F0
{
    __DEBUG_ASM(68041F0);
    // chunk 0x68041F0 _sub_68041F0
    asm("loc_68041F0: push %ebx;");
    asm("loc_68041F1: mov 0x10(%esp),%ebx;");
    asm("loc_68041F5: push %ebp;");
    asm("loc_68041F6: push %esi;");
    asm("loc_68041F7: mov 0x10(%esp),%esi;");
    asm("loc_68041FB: push %edi;");
    asm("loc_68041FC: push %ebx;");
    asm("loc_68041FD: push %esi;");
    asm("loc_68041FE: calll *_import_680C064;");
    asm("loc_6804204: add $8,%esp;");
    asm("loc_6804207: test %eax,%eax;");
    asm("loc_6804209: jne loc_6804260;");
    asm("loc_680420B: mov 0x18(%esp),%ebp;");
    asm("loc_680420F: or $0xFFFFFFFF,%ecx;");
    asm("loc_6804212: xor %eax,%eax;");
    asm("loc_6804214: mov %esi,%edi;");
    asm("loc_6804216: repne scas (%edi),%al;");
    asm("loc_6804218: not %ecx;");
    asm("loc_680421A: dec %ecx;");
    asm("loc_680421B: cmp %ebp,%ecx;");
    asm("loc_680421D: je loc_680424A;");
    asm("loc_680421F: mov 0x20(%esp),%eax;");
    asm("loc_6804223: cmp %eax,%ecx;");
    asm("loc_6804225: je loc_680425B;");
    asm("loc_6804227: inc %ecx;");
    asm("loc_6804228: add %ecx,%ebx;");
    asm("loc_680422A: mov %eax,%edx;");
    asm("loc_680422C: add %ecx,%esi;");
    asm("loc_680422E: sub %ecx,%edx;");
    asm("loc_6804230: push %ebx;");
    asm("loc_6804231: push %esi;");
    asm("loc_6804232: sub %ecx,%ebp;");
    asm("loc_6804234: mov %edx,0x28(%esp);");
    asm("loc_6804238: calll *_import_680C064;");
    asm("loc_680423E: add $8,%esp;");
    asm("loc_6804241: test %eax,%eax;");
    asm("loc_6804243: je loc_680420F;");
    asm("loc_6804245: pop %edi;");
    asm("loc_6804246: pop %esi;");
    asm("loc_6804247: pop %ebp;");
    asm("loc_6804248: pop %ebx;");
    asm("loc_6804249: ret;");
    asm("loc_680424A: mov 0x20(%esp),%edx;");
    asm("loc_680424E: xor %eax,%eax;");
    asm("loc_6804250: cmp %edx,%ecx;");
    asm("loc_6804252: sete %al;");
    asm("loc_6804255: pop %edi;");
    asm("loc_6804256: pop %esi;");
    asm("loc_6804257: pop %ebp;");
    asm("loc_6804258: pop %ebx;");
    asm("loc_6804259: dec %eax;");
    asm("loc_680425A: ret;");
    asm("loc_680425B: mov $1,%eax;");
    asm("loc_6804260: pop %edi;");
    asm("loc_6804261: pop %esi;");
    asm("loc_6804262: pop %ebp;");
    asm("loc_6804263: pop %ebx;");
    asm("loc_6804264: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6804270() // _sub_6804270
{
    __DEBUG_ASM(6804270);
    // chunk 0x6804270 _sub_6804270
    asm("loc_6804270: mov 4(%esp),%eax;");
    asm("loc_6804274: mov _data_680E604,%ecx;");
    asm("loc_680427A: push %ebx;");
    asm("loc_680427B: mov 4(%ecx),%ebx;");
    asm("loc_680427E: push %ebp;");
    asm("loc_680427F: shl $4,%eax;");
    asm("loc_6804282: push %edi;");
    asm("loc_6804283: mov 0x14(%esp),%edi;");
    asm("loc_6804287: add %eax,%ebx;");
    asm("loc_6804289: test %edi,%edi;");
    asm("loc_680428B: jge loc_680428F;");
    asm("loc_680428D: xor %edi,%edi;");
    asm("loc_680428F: lea 1(%edi),%edx;");
    asm("loc_6804292: push %edx;");
    asm("loc_6804293: call _sub_6805300;");
    asm("loc_6804298: mov %eax,%ebp;");
    asm("loc_680429A: mov 0x1C(%esp),%eax;");
    asm("loc_680429E: mov %ebp,8(%eax);");
    asm("loc_68042A1: movl $0xFFFFFFFD,(%eax);");
    asm("loc_68042A7: add $4,%esp;");
    asm("loc_68042AA: xor %eax,%eax;");
    asm("loc_68042AC: test %edi,%edi;");
    asm("loc_68042AE: jle loc_68042C9;");
    asm("loc_68042B0: push %esi;");
    asm("loc_68042B1: lea 1(%eax),%esi;");
    asm("loc_68042B4: push %ebx;");
    asm("loc_68042B5: push %esi;");
    asm("loc_68042B6: push %ebp;");
    asm("loc_68042B7: call _sub_6805590;");
    asm("loc_68042BC: mov %esi,%eax;");
    asm("loc_68042BE: add $0xC,%esp;");
    asm("loc_68042C1: add $0x10,%ebx;");
    asm("loc_68042C4: cmp %edi,%eax;");
    asm("loc_68042C6: jl loc_68042B1;");
    asm("loc_68042C8: pop %esi;");
    asm("loc_68042C9: push %edi;");
    asm("loc_68042CA: push %ebp;");
    asm("loc_68042CB: call _sub_6803C40;");
    asm("loc_68042D0: add $8,%esp;");
    asm("loc_68042D3: pop %edi;");
    asm("loc_68042D4: pop %ebp;");
    asm("loc_68042D5: pop %ebx;");
    asm("loc_68042D6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68042E0() // _sub_68042E0
{
    asm("jmp dgb_68042E0;"); // jumptable skip
    asm(".long _jmp_6804BEC;"); // jumptable address
    __DEBUG_ASM(68042E0);
    // chunk 0x68042E0 _sub_68042E0
    asm("loc_68042E0: sub $0x14,%esp;");
    asm("loc_68042E3: mov 0x1C(%esp),%eax;");
    asm("loc_68042E7: mov 8(%eax),%ecx;");
    asm("loc_68042EA: push %ebx;");
    asm("loc_68042EB: mov 0x10(%eax),%ebx;");
    asm("loc_68042EE: push %ebp;");
    asm("loc_68042EF: push %esi;");
    asm("loc_68042F0: mov _data_680E604,%esi;");
    asm("loc_68042F6: mov %ecx,0x28(%esp);");
    asm("loc_68042FA: mov 0x38(%esi),%ecx;");
    asm("loc_68042FD: test %ecx,%ecx;");
    asm("loc_68042FF: push %edi;");
    asm("loc_6804300: mov 0x30(%esp),%edi;");
    asm("loc_6804304: je loc_6804312;");
    asm("loc_6804306: push $0;");
    asm("loc_6804308: push %eax;");
    asm("loc_6804309: push %edi;");
    asm("loc_680430A: call _sub_6802A20;");
    asm("loc_680430F: add $0xC,%esp;");
    asm("loc_6804312: xor %eax,%eax;");
    asm("loc_6804314: mov (%ebx),%al;");
    asm("loc_6804316: add $5,%eax;");
    asm("loc_6804319: push %eax;");
    asm("loc_680431A: inc %ebx;");
    asm("loc_680431B: call _sub_6802870;");
    asm("loc_6804320: xor %eax,%eax;");
    asm("loc_6804322: mov (%ebx),%al;");
    asm("loc_6804324: add $4,%esp;");
    asm("loc_6804327: cmp $0x80,%al;");
    asm("loc_6804329: jae loc_680433B;");
    asm("loc_680432B: and $0xFF,%eax;");
    asm("loc_6804330: add %edi,%eax;");
    asm("loc_6804332: push %eax;");
    asm("loc_6804333: inc %ebx;");
    asm("loc_6804334: call _sub_6802900;");
    asm("loc_6804339: jmp loc_680434F;");
    asm("loc_680433B: call _sub_6803AB0;");
    asm("loc_6804340: xor %edx,%edx;");
    asm("loc_6804342: mov (%ebx),%dl;");
    asm("loc_6804344: inc %ebx;");
    asm("loc_6804345: lea -0x80(%edx,%edi),%eax;");
    asm("loc_6804349: push %eax;");
    asm("loc_680434A: call _sub_6804D80;");
    asm("loc_680434F: add $4,%esp;");
    asm("loc_6804352: xor %eax,%eax;");
    asm("loc_6804354: mov (%ebx),%al;");
    asm("loc_6804356: xor %edi,%edi;");
    asm("loc_6804358: inc %ebx;");
    asm("loc_6804359: cmp $0x3F,%eax;");
    asm("loc_680435C: ja loc_6804352;");
    asm("loc_680435E: jmpl *_jmp_6804BEC(,%eax,4);");
    asm("loc_6804365: xor %eax,%eax;");
    asm("loc_6804367: mov (%ebx),%al;");
    asm("loc_6804369: shl $8,%eax;");
    asm("loc_680436C: add %eax,%edi;");
    asm("loc_680436E: inc %ebx;");
    asm("loc_680436F: xor %ecx,%ecx;");
    asm("loc_6804371: mov (%ebx),%cl;");
    asm("loc_6804373: xor %eax,%eax;");
    asm("loc_6804375: mov 1(%ebx),%al;");
    asm("loc_6804378: add %ecx,%edi;");
    asm("loc_680437A: inc %ebx;");
    asm("loc_680437B: shl $0x10,%edi;");
    asm("loc_680437E: inc %ebx;");
    asm("loc_680437F: cmp $0x3F,%eax;");
    asm("loc_6804382: jbe loc_680435E;");
    asm("loc_6804384: jmp loc_6804352;");
    asm("loc_6804386: xor %eax,%eax;");
    asm("loc_6804388: mov (%ebx),%al;");
    asm("loc_680438A: xor %ecx,%ecx;");
    asm("loc_680438C: mov 1(%ebx),%cl;");
    asm("loc_680438F: inc %ebx;");
    asm("loc_6804390: inc %ebx;");
    asm("loc_6804391: push %eax;");
    asm("loc_6804392: push %ecx;");
    asm("loc_6804393: call _sub_6802B50;");
    asm("loc_6804398: add $8,%esp;");
    asm("loc_680439B: jmp loc_6804352;");
    asm("loc_680439D: xor %eax,%eax;");
    asm("loc_680439F: mov (%ebx),%al;");
    asm("loc_68043A1: inc %ebx;");
    asm("loc_68043A2: mov (%esi),%edx;");
    asm("loc_68043A4: movl $0xFFFFFFFA,(%edx);");
    asm("loc_68043AA: mov (%esi),%ebp;");
    asm("loc_68043AC: add $0x10,%ebp;");
    asm("loc_68043AF: mov %eax,%ecx;");
    asm("loc_68043B1: dec %eax;");
    asm("loc_68043B2: test %ecx,%ecx;");
    asm("loc_68043B4: mov %ebp,(%esi);");
    asm("loc_68043B6: jne loc_68043A2;");
    asm("loc_68043B8: jmp loc_6804352;");
    asm("loc_68043BA: mov (%esi),%ecx;");
    asm("loc_68043BC: xor %eax,%eax;");
    asm("loc_68043BE: mov (%ebx),%al;");
    asm("loc_68043C0: inc %ebx;");
    asm("loc_68043C1: neg %eax;");
    asm("loc_68043C3: shl $4,%eax;");
    asm("loc_68043C6: add %eax,%ecx;");
    asm("loc_68043C8: mov %ecx,(%esi);");
    asm("loc_68043CA: jmp loc_6804352;");
    asm("loc_68043CC: xor %edx,%edx;");
    asm("loc_68043CE: mov (%ebx),%dl;");
    asm("loc_68043D0: shl $8,%edx;");
    asm("loc_68043D3: add %edx,%edi;");
    asm("loc_68043D5: inc %ebx;");
    asm("loc_68043D6: mov (%esi),%ecx;");
    asm("loc_68043D8: xor %eax,%eax;");
    asm("loc_68043DA: mov (%ebx),%al;");
    asm("loc_68043DC: movl $0xFFFFFFFF,(%ecx);");
    asm("loc_68043E2: mov (%esi),%edx;");
    asm("loc_68043E4: add %eax,%edi;");
    asm("loc_68043E6: mov %edi,0x10(%esp);");
    asm("loc_68043EA: fildl 0x10(%esp);");
    asm("loc_68043EE: inc %ebx;");
    asm("loc_68043EF: fstpl 8(%edx);");
    asm("loc_68043F2: mov (%esi),%eax;");
    asm("loc_68043F4: add $0x10,%eax;");
    asm("loc_68043F7: mov %eax,(%esi);");
    asm("loc_68043F9: jmp loc_6804352;");
    asm("loc_68043FE: xor %eax,%eax;");
    asm("loc_6804400: mov (%ebx),%al;");
    asm("loc_6804402: shl $8,%eax;");
    asm("loc_6804405: add %eax,%edi;");
    asm("loc_6804407: inc %ebx;");
    asm("loc_6804408: mov (%esi),%edx;");
    asm("loc_680440A: xor %ecx,%ecx;");
    asm("loc_680440C: mov (%ebx),%cl;");
    asm("loc_680440E: movl $0xFFFFFFFF,(%edx);");
    asm("loc_6804414: mov (%esi),%eax;");
    asm("loc_6804416: add %ecx,%edi;");
    asm("loc_6804418: neg %edi;");
    asm("loc_680441A: mov %edi,0x10(%esp);");
    asm("loc_680441E: fildl 0x10(%esp);");
    asm("loc_6804422: inc %ebx;");
    asm("loc_6804423: fstpl 8(%eax);");
    asm("loc_6804426: mov (%esi),%eax;");
    asm("loc_6804428: add $0x10,%eax;");
    asm("loc_680442B: mov %eax,(%esi);");
    asm("loc_680442D: jmp loc_6804352;");
    asm("loc_6804432: xor %ecx,%ecx;");
    asm("loc_6804434: mov (%ebx),%cl;");
    asm("loc_6804436: shl $8,%ecx;");
    asm("loc_6804439: add %ecx,%edi;");
    asm("loc_680443B: inc %ebx;");
    asm("loc_680443C: mov 0x2C(%esp),%ecx;");
    asm("loc_6804440: mov (%esi),%eax;");
    asm("loc_6804442: xor %edx,%edx;");
    asm("loc_6804444: mov (%ebx),%dl;");
    asm("loc_6804446: add %edx,%edi;");
    asm("loc_6804448: shl $4,%edi;");
    asm("loc_680444B: add %ecx,%edi;");
    asm("loc_680444D: mov (%edi),%ecx;");
    asm("loc_680444F: mov %ecx,(%eax);");
    asm("loc_6804451: mov 4(%edi),%edx;");
    asm("loc_6804454: mov %edx,4(%eax);");
    asm("loc_6804457: mov 8(%edi),%ecx;");
    asm("loc_680445A: mov %ecx,8(%eax);");
    asm("loc_680445D: mov 0xC(%edi),%edx;");
    asm("loc_6804460: mov %edx,0xC(%eax);");
    asm("loc_6804463: mov (%esi),%eax;");
    asm("loc_6804465: inc %ebx;");
    asm("loc_6804466: add $0x10,%eax;");
    asm("loc_6804469: mov %eax,(%esi);");
    asm("loc_680446B: jmp loc_6804352;");
    asm("loc_6804470: mov 0x28(%esp),%ecx;");
    asm("loc_6804474: xor %eax,%eax;");
    asm("loc_6804476: mov (%ebx),%al;");
    asm("loc_6804478: inc %ebx;");
    asm("loc_6804479: add $2,%eax;");
    asm("loc_680447C: shl $4,%eax;");
    asm("loc_680447F: add %ecx,%eax;");
    asm("loc_6804481: mov (%eax),%edx;");
    asm("loc_6804483: mov (%esi),%ecx;");
    asm("loc_6804485: mov %edx,(%ecx);");
    asm("loc_6804487: mov 4(%eax),%edx;");
    asm("loc_680448A: mov %edx,4(%ecx);");
    asm("loc_680448D: mov 8(%eax),%edx;");
    asm("loc_6804490: mov %edx,8(%ecx);");
    asm("loc_6804493: mov 0xC(%eax),%eax;");
    asm("loc_6804496: mov %eax,0xC(%ecx);");
    asm("loc_6804499: addl $0x10,(%esi);");
    asm("loc_680449C: jmp loc_6804352;");
    asm("loc_68044A1: mov 0x30(%esp),%ecx;");
    asm("loc_68044A5: mov (%esi),%edx;");
    asm("loc_68044A7: xor %eax,%eax;");
    asm("loc_68044A9: mov (%ebx),%al;");
    asm("loc_68044AB: inc %ebx;");
    asm("loc_68044AC: add %ecx,%eax;");
    asm("loc_68044AE: mov 4(%esi),%ecx;");
    asm("loc_68044B1: shl $4,%eax;");
    asm("loc_68044B4: add %ecx,%eax;");
    asm("loc_68044B6: mov (%eax),%ecx;");
    asm("loc_68044B8: mov %ecx,(%edx);");
    asm("loc_68044BA: mov 4(%eax),%ecx;");
    asm("loc_68044BD: mov %ecx,4(%edx);");
    asm("loc_68044C0: mov 8(%eax),%ecx;");
    asm("loc_68044C3: mov %ecx,8(%edx);");
    asm("loc_68044C6: mov 0xC(%eax),%eax;");
    asm("loc_68044C9: mov %eax,0xC(%edx);");
    asm("loc_68044CC: addl $0x10,(%esi);");
    asm("loc_68044CF: jmp loc_6804352;");
    asm("loc_68044D4: xor %ecx,%ecx;");
    asm("loc_68044D6: mov (%ebx),%cl;");
    asm("loc_68044D8: shl $8,%ecx;");
    asm("loc_68044DB: add %ecx,%edi;");
    asm("loc_68044DD: inc %ebx;");
    asm("loc_68044DE: mov 0x2C(%esp),%eax;");
    asm("loc_68044E2: xor %edx,%edx;");
    asm("loc_68044E4: mov (%ebx),%dl;");
    asm("loc_68044E6: add %edx,%edi;");
    asm("loc_68044E8: shl $4,%edi;");
    asm("loc_68044EB: mov 8(%edi,%eax),%ecx;");
    asm("loc_68044EF: push %ecx;");
    asm("loc_68044F0: inc %ebx;");
    asm("loc_68044F1: call _sub_6803F20;");
    asm("loc_68044F6: jmp loc_680434F;");
    asm("loc_68044FB: xor %edx,%edx;");
    asm("loc_68044FD: mov (%ebx),%dl;");
    asm("loc_68044FF: shl $8,%edx;");
    asm("loc_6804502: add %edx,%edi;");
    asm("loc_6804504: inc %ebx;");
    asm("loc_6804505: mov 0x2C(%esp),%ecx;");
    asm("loc_6804509: xor %eax,%eax;");
    asm("loc_680450B: mov (%ebx),%al;");
    asm("loc_680450D: add %eax,%edi;");
    asm("loc_680450F: shl $4,%edi;");
    asm("loc_6804512: add %ecx,%edi;");
    asm("loc_6804514: mov (%edi),%edx;");
    asm("loc_6804516: mov (%esi),%ecx;");
    asm("loc_6804518: mov %edx,(%ecx);");
    asm("loc_680451A: mov 4(%edi),%eax;");
    asm("loc_680451D: mov %eax,4(%ecx);");
    asm("loc_6804520: mov 8(%edi),%edx;");
    asm("loc_6804523: mov %edx,8(%ecx);");
    asm("loc_6804526: mov 0xC(%edi),%eax;");
    asm("loc_6804529: mov %eax,0xC(%ecx);");
    asm("loc_680452C: mov (%esi),%eax;");
    asm("loc_680452E: inc %ebx;");
    asm("loc_680452F: add $0x10,%eax;");
    asm("loc_6804532: mov %eax,(%esi);");
    asm("loc_6804534: call _sub_6803D10;");
    asm("loc_6804539: jmp loc_6804352;");
    asm("loc_680453E: xor %ecx,%ecx;");
    asm("loc_6804540: mov (%ebx),%cl;");
    asm("loc_6804542: shl $8,%ecx;");
    asm("loc_6804545: add %ecx,%edi;");
    asm("loc_6804547: inc %ebx;");
    asm("loc_6804548: mov (%esi),%eax;");
    asm("loc_680454A: xor %edx,%edx;");
    asm("loc_680454C: mov (%ebx),%dl;");
    asm("loc_680454E: lea -0x10(%eax),%ecx;");
    asm("loc_6804551: mov (%ecx),%ebp;");
    asm("loc_6804553: add %edx,%edi;");
    asm("loc_6804555: mov 4(%ecx),%edx;");
    asm("loc_6804558: mov %edx,0x18(%esp);");
    asm("loc_680455C: mov 8(%ecx),%edx;");
    asm("loc_680455F: mov 0xC(%ecx),%ecx;");
    asm("loc_6804562: mov %edx,0x1C(%esp);");
    asm("loc_6804566: mov 0x2C(%esp),%edx;");
    asm("loc_680456A: shl $4,%edi;");
    asm("loc_680456D: add %edx,%edi;");
    asm("loc_680456F: mov (%edi),%edx;");
    asm("loc_6804571: mov %edx,(%eax);");
    asm("loc_6804573: mov %ecx,0x20(%esp);");
    asm("loc_6804577: mov 4(%edi),%ecx;");
    asm("loc_680457A: mov %ecx,4(%eax);");
    asm("loc_680457D: mov 8(%edi),%edx;");
    asm("loc_6804580: mov %edx,8(%eax);");
    asm("loc_6804583: mov 0xC(%edi),%ecx;");
    asm("loc_6804586: mov %ecx,0xC(%eax);");
    asm("loc_6804589: mov (%esi),%ecx;");
    asm("loc_680458B: add $0x10,%ecx;");
    asm("loc_680458E: inc %ebx;");
    asm("loc_680458F: mov %ecx,(%esi);");
    asm("loc_6804591: call _sub_6803D10;");
    asm("loc_6804596: mov (%esi),%edx;");
    asm("loc_6804598: mov 0x18(%esp),%eax;");
    asm("loc_680459C: mov 0x1C(%esp),%ecx;");
    asm("loc_68045A0: mov %ebp,(%edx);");
    asm("loc_68045A2: mov %eax,4(%edx);");
    asm("loc_68045A5: mov 0x20(%esp),%eax;");
    asm("loc_68045A9: mov %ecx,8(%edx);");
    asm("loc_68045AC: mov %eax,0xC(%edx);");
    asm("loc_68045AF: addl $0x10,(%esi);");
    asm("loc_68045B2: jmp loc_6804352;");
    asm("loc_68045B7: xor %ecx,%ecx;");
    asm("loc_68045B9: mov (%ebx),%cl;");
    asm("loc_68045BB: shl $8,%ecx;");
    asm("loc_68045BE: add %ecx,%edi;");
    asm("loc_68045C0: inc %ebx;");
    asm("loc_68045C1: xor %edx,%edx;");
    asm("loc_68045C3: mov (%ebx),%dl;");
    asm("loc_68045C5: add %edx,%edi;");
    asm("loc_68045C7: inc %ebx;");
    asm("loc_68045C8: call _sub_6803AB0;");
    asm("loc_68045CD: push %edi;");
    asm("loc_68045CE: call _sub_6805300;");
    asm("loc_68045D3: mov (%esi),%ecx;");
    asm("loc_68045D5: mov %eax,8(%ecx);");
    asm("loc_68045D8: mov (%esi),%edx;");
    asm("loc_68045DA: movl $0xFFFFFFFD,(%edx);");
    asm("loc_68045E0: mov (%esi),%eax;");
    asm("loc_68045E2: add $4,%esp;");
    asm("loc_68045E5: add $0x10,%eax;");
    asm("loc_68045E8: mov %eax,(%esi);");
    asm("loc_68045EA: jmp loc_6804352;");
    asm("loc_68045EF: mov (%esi),%ebp;");
    asm("loc_68045F1: mov 0x30(%esp),%edx;");
    asm("loc_68045F5: xor %ecx,%ecx;");
    asm("loc_68045F7: mov (%ebx),%cl;");
    asm("loc_68045F9: add $0xFFFFFFF0,%ebp;");
    asm("loc_68045FC: mov %ebp,(%esi);");
    asm("loc_68045FE: mov %ebp,%eax;");
    asm("loc_6804600: inc %ebx;");
    asm("loc_6804601: add %edx,%ecx;");
    asm("loc_6804603: mov 4(%esi),%edx;");
    asm("loc_6804606: shl $4,%ecx;");
    asm("loc_6804609: add %edx,%ecx;");
    asm("loc_680460B: mov (%eax),%edx;");
    asm("loc_680460D: mov %edx,(%ecx);");
    asm("loc_680460F: mov 4(%eax),%edx;");
    asm("loc_6804612: mov %edx,4(%ecx);");
    asm("loc_6804615: mov 8(%eax),%edx;");
    asm("loc_6804618: mov %edx,8(%ecx);");
    asm("loc_680461B: mov 0xC(%eax),%eax;");
    asm("loc_680461E: mov %eax,0xC(%ecx);");
    asm("loc_6804621: jmp loc_6804352;");
    asm("loc_6804626: xor %ecx,%ecx;");
    asm("loc_6804628: mov (%ebx),%cl;");
    asm("loc_680462A: shl $8,%ecx;");
    asm("loc_680462D: add %ecx,%edi;");
    asm("loc_680462F: inc %ebx;");
    asm("loc_6804630: mov 0x2C(%esp),%eax;");
    asm("loc_6804634: xor %edx,%edx;");
    asm("loc_6804636: mov (%ebx),%dl;");
    asm("loc_6804638: add %edx,%edi;");
    asm("loc_680463A: shl $4,%edi;");
    asm("loc_680463D: mov 8(%edi,%eax),%ecx;");
    asm("loc_6804641: push %ecx;");
    asm("loc_6804642: inc %ebx;");
    asm("loc_6804643: call _sub_6803FD0;");
    asm("loc_6804648: jmp loc_680434F;");
    asm("loc_680464D: mov (%esi),%edx;");
    asm("loc_680464F: sub $0x30,%edx;");
    asm("loc_6804652: push %edx;");
    asm("loc_6804653: call _sub_6803DE0;");
    asm("loc_6804658: mov (%esi),%eax;");
    asm("loc_680465A: add $4,%esp;");
    asm("loc_680465D: add $0xFFFFFFE0,%eax;");
    asm("loc_6804660: mov %eax,(%esi);");
    asm("loc_6804662: jmp loc_6804352;");
    asm("loc_6804667: xor %eax,%eax;");
    asm("loc_6804669: mov (%ebx),%al;");
    asm("loc_680466B: add $3,%eax;");
    asm("loc_680466E: shl $4,%eax;");
    asm("loc_6804671: mov %eax,%ecx;");
    asm("loc_6804673: mov (%esi),%eax;");
    asm("loc_6804675: sub %ecx,%eax;");
    asm("loc_6804677: push %eax;");
    asm("loc_6804678: inc %ebx;");
    asm("loc_6804679: call _sub_6803DE0;");
    asm("loc_680467E: jmp loc_680434F;");
    asm("loc_6804683: xor %edx,%edx;");
    asm("loc_6804685: mov (%ebx),%dl;");
    asm("loc_6804687: shl $8,%edx;");
    asm("loc_680468A: add %edx,%edi;");
    asm("loc_680468C: inc %ebx;");
    asm("loc_680468D: mov (%esi),%edx;");
    asm("loc_680468F: xor %eax,%eax;");
    asm("loc_6804691: mov (%ebx),%al;");
    asm("loc_6804693: add %eax,%edi;");
    asm("loc_6804695: xor %eax,%eax;");
    asm("loc_6804697: mov 1(%ebx),%al;");
    asm("loc_680469A: inc %ebx;");
    asm("loc_680469B: inc %ebx;");
    asm("loc_680469C: shl $6,%edi;");
    asm("loc_680469F: mov %eax,%ecx;");
    asm("loc_68046A1: shl $4,%ecx;");
    asm("loc_68046A4: sub %ecx,%edx;");
    asm("loc_68046A6: test %eax,%eax;");
    asm("loc_68046A8: mov -8(%edx),%ebp;");
    asm("loc_68046AB: je loc_6804352;");
    asm("loc_68046B1: add %eax,%edi;");
    asm("loc_68046B3: mov %eax,0x10(%esp);");
    asm("loc_68046B7: mov (%esi),%eax;");
    asm("loc_68046B9: add $0xFFFFFFF0,%eax;");
    asm("loc_68046BC: push %eax;");
    asm("loc_68046BD: push %edi;");
    asm("loc_68046BE: push %ebp;");
    asm("loc_68046BF: mov %eax,(%esi);");
    asm("loc_68046C1: call _sub_6805590;");
    asm("loc_68046C6: mov 0x1C(%esp),%eax;");
    asm("loc_68046CA: add $0xC,%esp;");
    asm("loc_68046CD: dec %edi;");
    asm("loc_68046CE: dec %eax;");
    asm("loc_68046CF: mov %eax,0x10(%esp);");
    asm("loc_68046D3: jne loc_68046B7;");
    asm("loc_68046D5: jmp loc_6804352;");
    asm("loc_68046DA: mov (%esi),%edx;");
    asm("loc_68046DC: xor %eax,%eax;");
    asm("loc_68046DE: mov (%ebx),%al;");
    asm("loc_68046E0: inc %ebx;");
    asm("loc_68046E1: mov %eax,%edi;");
    asm("loc_68046E3: mov %edi,%ecx;");
    asm("loc_68046E5: shl $5,%ecx;");
    asm("loc_68046E8: sub %ecx,%edx;");
    asm("loc_68046EA: mov -0x28(%edx),%ebp;");
    asm("loc_68046ED: mov (%esi),%eax;");
    asm("loc_68046EF: lea -0x10(%eax),%ecx;");
    asm("loc_68046F2: push %ecx;");
    asm("loc_68046F3: add $0xFFFFFFE0,%eax;");
    asm("loc_68046F6: push %eax;");
    asm("loc_68046F7: push %ebp;");
    asm("loc_68046F8: call _sub_68053A0;");
    asm("loc_68046FD: mov (%esi),%edx;");
    asm("loc_68046FF: add $0xFFFFFFE0,%edx;");
    asm("loc_6804702: add $0xC,%esp;");
    asm("loc_6804705: mov %edx,(%esi);");
    asm("loc_6804707: mov %edi,%edx;");
    asm("loc_6804709: dec %edi;");
    asm("loc_680470A: test %edx,%edx;");
    asm("loc_680470C: jne loc_68046ED;");
    asm("loc_680470E: jmp loc_6804352;");
    asm("loc_6804713: mov $1,%edi;");
    asm("loc_6804718: mov (%esi),%eax;");
    asm("loc_680471A: mov -0x20(%eax),%edx;");
    asm("loc_680471D: mov -0x10(%eax),%ebp;");
    asm("loc_6804720: lea -0x20(%eax),%ecx;");
    asm("loc_6804723: add $0xFFFFFFF0,%eax;");
    asm("loc_6804726: cmp %ebp,%edx;");
    asm("loc_6804728: je loc_680472E;");
    asm("loc_680472A: xor %eax,%eax;");
    asm("loc_680472C: jmp loc_6804738;");
    asm("loc_680472E: push %eax;");
    asm("loc_680472F: push %ecx;");
    asm("loc_6804730: call _sub_6806100;");
    asm("loc_6804735: add $8,%esp;");
    asm("loc_6804738: test %edi,%edi;");
    asm("loc_680473A: je loc_6804745;");
    asm("loc_680473C: xor %ecx,%ecx;");
    asm("loc_680473E: test %eax,%eax;");
    asm("loc_6804740: sete %cl;");
    asm("loc_6804743: mov %ecx,%eax;");
    asm("loc_6804745: mov (%esi),%ecx;");
    asm("loc_6804747: add $0xFFFFFFF0,%ecx;");
    asm("loc_680474A: neg %eax;");
    asm("loc_680474C: sbb %eax,%eax;");
    asm("loc_680474E: and $5,%eax;");
    asm("loc_6804751: add $0xFFFFFFFA,%eax;");
    asm("loc_6804754: mov %ecx,(%esi);");
    asm("loc_6804756: mov %eax,-0x10(%ecx);");
    asm("loc_6804759: mov (%esi),%edx;");
    asm("loc_680475B: sub $8,%edx;");
    asm("loc_680475E: movl $0,(%edx);");
    asm("loc_6804764: movl $0x3FF00000,4(%edx);");
    asm("loc_680476B: jmp loc_6804352;");
    asm("loc_6804770: push $0xB;");
    asm("loc_6804772: push $0xFFFFFFFA;");
    asm("loc_6804774: push $0xFFFFFFFA;");
    asm("loc_6804776: push $0xFFFFFFFF;");
    asm("loc_6804778: call _sub_68040A0;");
    asm("loc_680477D: add $0x10,%esp;");
    asm("loc_6804780: jmp loc_6804352;");
    asm("loc_6804785: push $0xC;");
    asm("loc_6804787: push $0xFFFFFFFA;");
    asm("loc_6804789: push $0xFFFFFFFF;");
    asm("loc_680478B: push $0xFFFFFFFF;");
    asm("loc_680478D: call _sub_68040A0;");
    asm("loc_6804792: add $0x10,%esp;");
    asm("loc_6804795: jmp loc_6804352;");
    asm("loc_680479A: push $0xD;");
    asm("loc_680479C: push $0xFFFFFFFF;");
    asm("loc_680479E: push $0xFFFFFFFA;");
    asm("loc_68047A0: push $0xFFFFFFFA;");
    asm("loc_68047A2: call _sub_68040A0;");
    asm("loc_68047A7: add $0x10,%esp;");
    asm("loc_68047AA: jmp loc_6804352;");
    asm("loc_68047AF: push $0xE;");
    asm("loc_68047B1: push $0xFFFFFFFF;");
    asm("loc_68047B3: push $0xFFFFFFFF;");
    asm("loc_68047B5: push $0xFFFFFFFA;");
    asm("loc_68047B7: call _sub_68040A0;");
    asm("loc_68047BC: add $0x10,%esp;");
    asm("loc_68047BF: jmp loc_6804352;");
    asm("loc_68047C4: mov (%esi),%eax;");
    asm("loc_68047C6: lea -0x10(%eax),%ebp;");
    asm("loc_68047C9: lea -0x20(%eax),%edi;");
    asm("loc_68047CC: cmpl $0xFFFFFFFF,(%ebp);");
    asm("loc_68047D0: je loc_68047DF;");
    asm("loc_68047D2: push %ebp;");
    asm("loc_68047D3: call _sub_6803AD0;");
    asm("loc_68047D8: add $4,%esp;");
    asm("loc_68047DB: test %eax,%eax;");
    asm("loc_68047DD: jne loc_68047F1;");
    asm("loc_68047DF: cmpl $0xFFFFFFFF,(%edi);");
    asm("loc_68047E2: je loc_68047FD;");
    asm("loc_68047E4: push %edi;");
    asm("loc_68047E5: call _sub_6803AD0;");
    asm("loc_68047EA: add $4,%esp;");
    asm("loc_68047ED: test %eax,%eax;");
    asm("loc_68047EF: je loc_68047FD;");
    asm("loc_68047F1: push $5;");
    asm("loc_68047F3: call _sub_6804D60;");
    asm("loc_68047F8: jmp loc_680434F;");
    asm("loc_68047FD: fldl 8(%ebp);");
    asm("loc_6804800: faddl 8(%edi);");
    asm("loc_6804803: fstpl 8(%edi);");
    asm("loc_6804806: mov (%esi),%eax;");
    asm("loc_6804808: add $0xFFFFFFF0,%eax;");
    asm("loc_680480B: mov %eax,(%esi);");
    asm("loc_680480D: jmp loc_6804352;");
    asm("loc_6804812: mov (%esi),%eax;");
    asm("loc_6804814: lea -0x10(%eax),%ebp;");
    asm("loc_6804817: lea -0x20(%eax),%edi;");
    asm("loc_680481A: cmpl $0xFFFFFFFF,(%ebp);");
    asm("loc_680481E: je loc_680482D;");
    asm("loc_6804820: push %ebp;");
    asm("loc_6804821: call _sub_6803AD0;");
    asm("loc_6804826: add $4,%esp;");
    asm("loc_6804829: test %eax,%eax;");
    asm("loc_680482B: jne loc_680483F;");
    asm("loc_680482D: cmpl $0xFFFFFFFF,(%edi);");
    asm("loc_6804830: je loc_680484B;");
    asm("loc_6804832: push %edi;");
    asm("loc_6804833: call _sub_6803AD0;");
    asm("loc_6804838: add $4,%esp;");
    asm("loc_680483B: test %eax,%eax;");
    asm("loc_680483D: je loc_680484B;");
    asm("loc_680483F: push $6;");
    asm("loc_6804841: call _sub_6804D60;");
    asm("loc_6804846: jmp loc_680434F;");
    asm("loc_680484B: fldl 8(%ebp);");
    asm("loc_680484E: fsubrl 8(%edi);");
    asm("loc_6804851: fstpl 8(%edi);");
    asm("loc_6804854: mov (%esi),%eax;");
    asm("loc_6804856: add $0xFFFFFFF0,%eax;");
    asm("loc_6804859: mov %eax,(%esi);");
    asm("loc_680485B: jmp loc_6804352;");
    asm("loc_6804860: mov (%esi),%eax;");
    asm("loc_6804862: lea -0x10(%eax),%ebp;");
    asm("loc_6804865: lea -0x20(%eax),%edi;");
    asm("loc_6804868: cmpl $0xFFFFFFFF,(%ebp);");
    asm("loc_680486C: je loc_680487B;");
    asm("loc_680486E: push %ebp;");
    asm("loc_680486F: call _sub_6803AD0;");
    asm("loc_6804874: add $4,%esp;");
    asm("loc_6804877: test %eax,%eax;");
    asm("loc_6804879: jne loc_680488D;");
    asm("loc_680487B: cmpl $0xFFFFFFFF,(%edi);");
    asm("loc_680487E: je loc_6804899;");
    asm("loc_6804880: push %edi;");
    asm("loc_6804881: call _sub_6803AD0;");
    asm("loc_6804886: add $4,%esp;");
    asm("loc_6804889: test %eax,%eax;");
    asm("loc_680488B: je loc_6804899;");
    asm("loc_680488D: push $7;");
    asm("loc_680488F: call _sub_6804D60;");
    asm("loc_6804894: jmp loc_680434F;");
    asm("loc_6804899: fldl 8(%ebp);");
    asm("loc_680489C: fmull 8(%edi);");
    asm("loc_680489F: fstpl 8(%edi);");
    asm("loc_68048A2: mov (%esi),%eax;");
    asm("loc_68048A4: add $0xFFFFFFF0,%eax;");
    asm("loc_68048A7: mov %eax,(%esi);");
    asm("loc_68048A9: jmp loc_6804352;");
    asm("loc_68048AE: mov (%esi),%eax;");
    asm("loc_68048B0: lea -0x10(%eax),%ebp;");
    asm("loc_68048B3: lea -0x20(%eax),%edi;");
    asm("loc_68048B6: cmpl $0xFFFFFFFF,(%ebp);");
    asm("loc_68048BA: je loc_68048C9;");
    asm("loc_68048BC: push %ebp;");
    asm("loc_68048BD: call _sub_6803AD0;");
    asm("loc_68048C2: add $4,%esp;");
    asm("loc_68048C5: test %eax,%eax;");
    asm("loc_68048C7: jne loc_68048DB;");
    asm("loc_68048C9: cmpl $0xFFFFFFFF,(%edi);");
    asm("loc_68048CC: je loc_68048E7;");
    asm("loc_68048CE: push %edi;");
    asm("loc_68048CF: call _sub_6803AD0;");
    asm("loc_68048D4: add $4,%esp;");
    asm("loc_68048D7: test %eax,%eax;");
    asm("loc_68048D9: je loc_68048E7;");
    asm("loc_68048DB: push $8;");
    asm("loc_68048DD: call _sub_6804D60;");
    asm("loc_68048E2: jmp loc_680434F;");
    asm("loc_68048E7: fldl 8(%ebp);");
    asm("loc_68048EA: fdivrl 8(%edi);");
    asm("loc_68048ED: fstpl 8(%edi);");
    asm("loc_68048F0: addl $0xFFFFFFF0,(%esi);");
    asm("loc_68048F3: jmp loc_6804352;");
    asm("loc_68048F8: push $_data_680D588;");
    asm("loc_68048FD: push $9;");
    asm("loc_68048FF: call _sub_6804150;");
    asm("loc_6804904: add $8,%esp;");
    asm("loc_6804907: jmp loc_6804352;");
    asm("loc_680490C: mov (%esi),%eax;");
    asm("loc_680490E: lea -0x20(%eax),%edi;");
    asm("loc_6804911: lea -0x10(%eax),%ebp;");
    asm("loc_6804914: cmpl $0xFFFFFFFE,(%edi);");
    asm("loc_6804917: je loc_6804926;");
    asm("loc_6804919: push %edi;");
    asm("loc_680491A: call _sub_6803BF0;");
    asm("loc_680491F: add $4,%esp;");
    asm("loc_6804922: test %eax,%eax;");
    asm("loc_6804924: jne loc_6804939;");
    asm("loc_6804926: cmpl $0xFFFFFFFE,(%ebp);");
    asm("loc_680492A: je loc_6804952;");
    asm("loc_680492C: push %ebp;");
    asm("loc_680492D: call _sub_6803BF0;");
    asm("loc_6804932: add $4,%esp;");
    asm("loc_6804935: test %eax,%eax;");
    asm("loc_6804937: je loc_6804952;");
    asm("loc_6804939: push $_data_680D564;");
    asm("loc_680493E: push $0xF;");
    asm("loc_6804940: call _sub_6804150;");
    asm("loc_6804945: add $8,%esp;");
    asm("loc_6804948: call _sub_6803AB0;");
    asm("loc_680494D: jmp loc_6804352;");
    asm("loc_6804952: mov 8(%ebp),%eax;");
    asm("loc_6804955: mov 8(%edi),%ecx;");
    asm("loc_6804958: push %eax;");
    asm("loc_6804959: push %ecx;");
    asm("loc_680495A: call _sub_6804CF0;");
    asm("loc_680495F: mov %eax,8(%edi);");
    asm("loc_6804962: mov (%esi),%eax;");
    asm("loc_6804964: add $0xFFFFFFF0,%eax;");
    asm("loc_6804967: add $8,%esp;");
    asm("loc_680496A: mov %eax,(%esi);");
    asm("loc_680496C: call _sub_6803AB0;");
    asm("loc_6804971: jmp loc_6804352;");
    asm("loc_6804976: mov (%esi),%eax;");
    asm("loc_6804978: mov -0x10(%eax),%ecx;");
    asm("loc_680497B: add $0xFFFFFFF0,%eax;");
    asm("loc_680497E: cmp $0xFFFFFFFF,%ecx;");
    asm("loc_6804981: je loc_68049AB;");
    asm("loc_6804983: push %eax;");
    asm("loc_6804984: call _sub_6803AD0;");
    asm("loc_6804989: add $4,%esp;");
    asm("loc_680498C: test %eax,%eax;");
    asm("loc_680498E: je loc_68049AB;");
    asm("loc_6804990: mov (%esi),%edx;");
    asm("loc_6804992: movl $0xFFFFFFFA,(%edx);");
    asm("loc_6804998: mov (%esi),%edx;");
    asm("loc_680499A: add $0x10,%edx;");
    asm("loc_680499D: push $0xA;");
    asm("loc_680499F: mov %edx,(%esi);");
    asm("loc_68049A1: call _sub_6804D60;");
    asm("loc_68049A6: jmp loc_680434F;");
    asm("loc_68049AB: mov (%esi),%eax;");
    asm("loc_68049AD: fldl -8(%eax);");
    asm("loc_68049B0: fchs;");
    asm("loc_68049B2: fstpl -8(%eax);");
    asm("loc_68049B5: jmp loc_6804352;");
    asm("loc_68049BA: mov (%esi),%eax;");
    asm("loc_68049BC: mov -0x10(%eax),%edx;");
    asm("loc_68049BF: xor %ecx,%ecx;");
    asm("loc_68049C1: cmp $0xFFFFFFFA,%edx;");
    asm("loc_68049C4: setne %cl;");
    asm("loc_68049C7: dec %ecx;");
    asm("loc_68049C8: and $5,%ecx;");
    asm("loc_68049CB: add $0xFFFFFFFA,%ecx;");
    asm("loc_68049CE: mov %ecx,-0x10(%eax);");
    asm("loc_68049D1: jmp loc_6804759;");
    asm("loc_68049D6: xor %eax,%eax;");
    asm("loc_68049D8: mov (%ebx),%al;");
    asm("loc_68049DA: shl $8,%eax;");
    asm("loc_68049DD: add %eax,%edi;");
    asm("loc_68049DF: inc %ebx;");
    asm("loc_68049E0: mov (%esi),%eax;");
    asm("loc_68049E2: xor %ecx,%ecx;");
    asm("loc_68049E4: mov (%ebx),%cl;");
    asm("loc_68049E6: add $0xFFFFFFF0,%eax;");
    asm("loc_68049E9: add %ecx,%edi;");
    asm("loc_68049EB: mov (%eax),%ecx;");
    asm("loc_68049ED: inc %ebx;");
    asm("loc_68049EE: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_68049F1: je loc_68043F7;");
    asm("loc_68049F7: add %edi,%ebx;");
    asm("loc_68049F9: jmp loc_6804352;");
    asm("loc_68049FE: xor %edx,%edx;");
    asm("loc_6804A00: mov (%ebx),%dl;");
    asm("loc_6804A02: shl $8,%edx;");
    asm("loc_6804A05: add %edx,%edi;");
    asm("loc_6804A07: inc %ebx;");
    asm("loc_6804A08: xor %eax,%eax;");
    asm("loc_6804A0A: mov (%ebx),%al;");
    asm("loc_6804A0C: add %eax,%edi;");
    asm("loc_6804A0E: mov (%esi),%eax;");
    asm("loc_6804A10: mov -0x10(%eax),%ecx;");
    asm("loc_6804A13: add $0xFFFFFFF0,%eax;");
    asm("loc_6804A16: inc %ebx;");
    asm("loc_6804A17: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_6804A1A: jne loc_68043F7;");
    asm("loc_6804A20: add %edi,%ebx;");
    asm("loc_6804A22: jmp loc_6804352;");
    asm("loc_6804A27: xor %ecx,%ecx;");
    asm("loc_6804A29: mov (%ebx),%cl;");
    asm("loc_6804A2B: shl $8,%ecx;");
    asm("loc_6804A2E: add %ecx,%edi;");
    asm("loc_6804A30: inc %ebx;");
    asm("loc_6804A31: xor %edx,%edx;");
    asm("loc_6804A33: mov (%ebx),%dl;");
    asm("loc_6804A35: add %edi,%edx;");
    asm("loc_6804A37: lea 1(%ebx,%edx),%ebx;");
    asm("loc_6804A3B: jmp loc_6804352;");
    asm("loc_6804A40: xor %eax,%eax;");
    asm("loc_6804A42: mov (%ebx),%al;");
    asm("loc_6804A44: shl $8,%eax;");
    asm("loc_6804A47: add %eax,%edi;");
    asm("loc_6804A49: inc %ebx;");
    asm("loc_6804A4A: mov (%esi),%edx;");
    asm("loc_6804A4C: xor %ecx,%ecx;");
    asm("loc_6804A4E: mov (%ebx),%cl;");
    asm("loc_6804A50: add $0xFFFFFFF0,%edx;");
    asm("loc_6804A53: mov %edx,%eax;");
    asm("loc_6804A55: mov %edx,(%esi);");
    asm("loc_6804A57: add %ecx,%edi;");
    asm("loc_6804A59: mov (%eax),%ecx;");
    asm("loc_6804A5B: inc %ebx;");
    asm("loc_6804A5C: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_6804A5F: jne loc_6804352;");
    asm("loc_6804A65: add %edi,%ebx;");
    asm("loc_6804A67: jmp loc_6804352;");
    asm("loc_6804A6C: xor %edx,%edx;");
    asm("loc_6804A6E: mov (%ebx),%dl;");
    asm("loc_6804A70: shl $8,%edx;");
    asm("loc_6804A73: add %edx,%edi;");
    asm("loc_6804A75: inc %ebx;");
    asm("loc_6804A76: mov (%esi),%edx;");
    asm("loc_6804A78: xor %eax,%eax;");
    asm("loc_6804A7A: mov (%ebx),%al;");
    asm("loc_6804A7C: add $0xFFFFFFF0,%edx;");
    asm("loc_6804A7F: mov %edx,(%esi);");
    asm("loc_6804A81: add %eax,%edi;");
    asm("loc_6804A83: mov %edx,%eax;");
    asm("loc_6804A85: mov (%eax),%ecx;");
    asm("loc_6804A87: inc %ebx;");
    asm("loc_6804A88: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_6804A8B: je loc_6804352;");
    asm("loc_6804A91: sub %edi,%ebx;");
    asm("loc_6804A93: jmp loc_6804352;");
    asm("loc_6804A98: xor %ecx,%ecx;");
    asm("loc_6804A9A: mov (%ebx),%cl;");
    asm("loc_6804A9C: shl $8,%ecx;");
    asm("loc_6804A9F: add %ecx,%edi;");
    asm("loc_6804AA1: inc %ebx;");
    asm("loc_6804AA2: xor %edx,%edx;");
    asm("loc_6804AA4: mov (%ebx),%dl;");
    asm("loc_6804AA6: add %edx,%edi;");
    asm("loc_6804AA8: mov (%esi),%edx;");
    asm("loc_6804AAA: add $0xFFFFFFF0,%edx;");
    asm("loc_6804AAD: mov %edx,%eax;");
    asm("loc_6804AAF: mov %edx,(%esi);");
    asm("loc_6804AB1: mov (%eax),%ecx;");
    asm("loc_6804AB3: inc %ebx;");
    asm("loc_6804AB4: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_6804AB7: jne loc_6804352;");
    asm("loc_6804ABD: sub %edi,%ebx;");
    asm("loc_6804ABF: jmp loc_6804352;");
    asm("loc_6804AC4: xor %eax,%eax;");
    asm("loc_6804AC6: mov (%ebx),%al;");
    asm("loc_6804AC8: shl $8,%eax;");
    asm("loc_6804ACB: add %eax,%edi;");
    asm("loc_6804ACD: inc %ebx;");
    asm("loc_6804ACE: mov (%esi),%edx;");
    asm("loc_6804AD0: mov 0x2C(%esp),%ebp;");
    asm("loc_6804AD4: xor %ecx,%ecx;");
    asm("loc_6804AD6: mov (%ebx),%cl;");
    asm("loc_6804AD8: add %ecx,%edi;");
    asm("loc_6804ADA: shl $4,%edi;");
    asm("loc_6804ADD: add %ebp,%edi;");
    asm("loc_6804ADF: mov (%edi),%eax;");
    asm("loc_6804AE1: mov %eax,(%edx);");
    asm("loc_6804AE3: mov 4(%edi),%ecx;");
    asm("loc_6804AE6: mov %ecx,4(%edx);");
    asm("loc_6804AE9: mov 8(%edi),%eax;");
    asm("loc_6804AEC: mov %eax,8(%edx);");
    asm("loc_6804AEF: mov 0xC(%edi),%ecx;");
    asm("loc_6804AF2: mov %ecx,0xC(%edx);");
    asm("loc_6804AF5: mov (%esi),%edi;");
    asm("loc_6804AF7: xor %eax,%eax;");
    asm("loc_6804AF9: add $0x10,%edi;");
    asm("loc_6804AFC: inc %ebx;");
    asm("loc_6804AFD: mov %edi,(%esi);");
    asm("loc_6804AFF: mov (%ebx),%al;");
    asm("loc_6804B01: inc %ebx;");
    asm("loc_6804B02: push %eax;");
    asm("loc_6804B03: call _sub_6803C90;");
    asm("loc_6804B08: add $4,%esp;");
    asm("loc_6804B0B: call _sub_6803AB0;");
    asm("loc_6804B10: jmp loc_6804352;");
    asm("loc_6804B15: xor %edx,%edx;");
    asm("loc_6804B17: mov (%ebx),%dl;");
    asm("loc_6804B19: shl $8,%edx;");
    asm("loc_6804B1C: add %edx,%edi;");
    asm("loc_6804B1E: inc %ebx;");
    asm("loc_6804B1F: mov 0x30(%esp),%ebp;");
    asm("loc_6804B23: mov 4(%esi),%ecx;");
    asm("loc_6804B26: xor %eax,%eax;");
    asm("loc_6804B28: mov (%ebx),%al;");
    asm("loc_6804B2A: add %eax,%edi;");
    asm("loc_6804B2C: mov %ebp,%eax;");
    asm("loc_6804B2E: shl $4,%eax;");
    asm("loc_6804B31: mov -0x10(%eax,%ecx),%edx;");
    asm("loc_6804B35: inc %ebx;");
    asm("loc_6804B36: cmp $0xFFFFFFF5,%edx;");
    asm("loc_6804B39: je loc_6804B62;");
    asm("loc_6804B3B: mov (%esi),%edx;");
    asm("loc_6804B3D: sub %ecx,%edx;");
    asm("loc_6804B3F: sar $4,%edx;");
    asm("loc_6804B42: sub %ebp,%edx;");
    asm("loc_6804B44: push %edx;");
    asm("loc_6804B45: call _sub_6802950;");
    asm("loc_6804B4A: mov 4(%esi),%ecx;");
    asm("loc_6804B4D: add $4,%esp;");
    asm("loc_6804B50: inc %ebp;");
    asm("loc_6804B51: mov %ebp,%eax;");
    asm("loc_6804B53: shl $4,%eax;");
    asm("loc_6804B56: mov %ebp,0x30(%esp);");
    asm("loc_6804B5A: movl $0xFFFFFFF5,-0x10(%eax,%ecx);");
    asm("loc_6804B62: mov 4(%esi),%edx;");
    asm("loc_6804B65: mov %edi,-8(%eax,%edx);");
    asm("loc_6804B69: mov _data_680E604,%eax;");
    asm("loc_6804B6E: mov 0x3C(%eax),%ecx;");
    asm("loc_6804B71: test %ecx,%ecx;");
    asm("loc_6804B73: je loc_6804352;");
    asm("loc_6804B79: push %edi;");
    asm("loc_6804B7A: call _sub_68029A0;");
    asm("loc_6804B7F: jmp loc_680434F;");
    asm("loc_6804B84: inc %ebx;");
    asm("loc_6804B85: jmp loc_6804352;");
    asm("loc_6804B8A: mov 0x30(%esp),%edi;");
    asm("loc_6804B8E: mov 4(%esi),%edx;");
    asm("loc_6804B91: mov %edi,%ecx;");
    asm("loc_6804B93: shl $4,%ecx;");
    asm("loc_6804B96: add %ecx,%edx;");
    asm("loc_6804B98: mov %edx,(%esi);");
    asm("loc_6804B9A: jmp loc_6804BC7;");
    asm("loc_6804B9C: mov 0x30(%esp),%edi;");
    asm("loc_6804BA0: xor %eax,%eax;");
    asm("loc_6804BA2: mov (%ebx),%al;");
    asm("loc_6804BA4: add %eax,%edi;");
    asm("loc_6804BA6: jmp loc_6804BC7;");
    asm("loc_6804BA8: xor %eax,%eax;");
    asm("loc_6804BAA: mov 1(%ebx),%al;");
    asm("loc_6804BAD: xor %ecx,%ecx;");
    asm("loc_6804BAF: mov (%ebx),%cl;");
    asm("loc_6804BB1: push $0xFF;");
    asm("loc_6804BB6: push %eax;");
    asm("loc_6804BB7: mov %ecx,%esi;");
    asm("loc_6804BB9: call _sub_6802B50;");
    asm("loc_6804BBE: mov 0x38(%esp),%edi;");
    asm("loc_6804BC2: add $8,%esp;");
    asm("loc_6804BC5: add %esi,%edi;");
    asm("loc_6804BC7: mov _data_680E604,%edx;");
    asm("loc_6804BCD: mov 0x38(%edx),%eax;");
    asm("loc_6804BD0: test %eax,%eax;");
    asm("loc_6804BD2: je loc_6804BE2;");
    asm("loc_6804BD4: push $1;");
    asm("loc_6804BD6: push $0;");
    asm("loc_6804BD8: push $0;");
    asm("loc_6804BDA: call _sub_6802A20;");
    asm("loc_6804BDF: add $0xC,%esp;");
    asm("loc_6804BE2: mov %edi,%eax;");
    asm("loc_6804BE4: pop %edi;");
    asm("loc_6804BE5: pop %esi;");
    asm("loc_6804BE6: pop %ebp;");
    asm("loc_6804BE7: pop %ebx;");
    asm("loc_6804BE8: add $0x14,%esp;");
    asm("loc_6804BEB: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_6804BEC: .long loc_6804B8A;");
    asm(".long loc_6804B9C;");
    asm(".long loc_6804386;");
    asm(".long loc_6804BA8;");
    asm(".long loc_680439D;");
    asm(".long loc_68043BA;");
    asm(".long loc_68043CC;");
    asm(".long loc_68043D6;");
    asm(".long loc_68043FE;");
    asm(".long loc_6804408;");
    asm(".long loc_6804432;");
    asm(".long loc_680443C;");
    asm(".long loc_6804470;");
    asm(".long loc_68044A1;");
    asm(".long loc_68044D4;");
    asm(".long loc_68044DE;");
    asm(".long loc_6804534;");
    asm(".long loc_68044FB;");
    asm(".long loc_6804505;");
    asm(".long loc_680453E;");
    asm(".long loc_6804548;");
    asm(".long loc_68045B7;");
    asm(".long loc_68045C1;");
    asm(".long loc_68045EF;");
    asm(".long loc_6804626;");
    asm(".long loc_6804630;");
    asm(".long loc_680464D;");
    asm(".long loc_6804667;");
    asm(".long loc_6804683;");
    asm(".long loc_680468D;");
    asm(".long loc_68046DA;");
    asm(".long loc_6804713;");
    asm(".long loc_6804718;");
    asm(".long loc_6804770;");
    asm(".long loc_6804785;");
    asm(".long loc_680479A;");
    asm(".long loc_68047AF;");
    asm(".long loc_68047C4;");
    asm(".long loc_6804812;");
    asm(".long loc_6804860;");
    asm(".long loc_68048AE;");
    asm(".long loc_68048F8;");
    asm(".long loc_680490C;");
    asm(".long loc_6804976;");
    asm(".long loc_68049BA;");
    asm(".long loc_68049D6;");
    asm(".long loc_68049E0;");
    asm(".long loc_68049FE;");
    asm(".long loc_6804A08;");
    asm(".long loc_6804A27;");
    asm(".long loc_6804A31;");
    asm(".long loc_6804A40;");
    asm(".long loc_6804A4A;");
    asm(".long loc_6804A6C;");
    asm(".long loc_6804A76;");
    asm(".long loc_6804A98;");
    asm(".long loc_6804AA2;");
    asm(".long loc_6804AC4;");
    asm(".long loc_6804ACE;");
    asm(".long loc_6804B15;");
    asm(".long loc_6804B1F;");
    asm(".long loc_6804365;");
    asm(".long loc_680436F;");
    asm(".long loc_6804B84;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_68042E0);
_naked _weak void _sub_6804CF0() // _sub_6804CF0
{
    __DEBUG_ASM(6804CF0);
    // chunk 0x6804CF0 _sub_6804CF0
    asm("loc_6804CF0: mov 8(%esp),%eax;");
    asm("loc_6804CF4: push %ebx;");
    asm("loc_6804CF5: push %ebp;");
    asm("loc_6804CF6: mov 0x20(%eax),%ebp;");
    asm("loc_6804CF9: push %esi;");
    asm("loc_6804CFA: mov 0x10(%esp),%esi;");
    asm("loc_6804CFE: mov 0x20(%esi),%ebx;");
    asm("loc_6804D01: lea (%ebx,%ebp),%eax;");
    asm("loc_6804D04: push %edi;");
    asm("loc_6804D05: push %eax;");
    asm("loc_6804D06: mov %eax,0x18(%esp);");
    asm("loc_6804D0A: call _sub_680BB70;");
    asm("loc_6804D0F: mov %ebx,%ecx;");
    asm("loc_6804D11: mov %ecx,%edx;");
    asm("loc_6804D13: shr $2,%ecx;");
    asm("loc_6804D16: add $0x28,%esi;");
    asm("loc_6804D19: mov %eax,%edi;");
    asm("loc_6804D1B: rep movsl (%esi),(%edi);");
    asm("loc_6804D1D: mov %edx,%ecx;");
    asm("loc_6804D1F: mov 0x1C(%esp),%edx;");
    asm("loc_6804D23: and $3,%ecx;");
    asm("loc_6804D26: rep movsb (%esi),(%edi);");
    asm("loc_6804D28: lea 0x28(%edx),%esi;");
    asm("loc_6804D2B: mov %ebp,%ecx;");
    asm("loc_6804D2D: mov %ecx,%edx;");
    asm("loc_6804D2F: shr $2,%ecx;");
    asm("loc_6804D32: lea (%eax,%ebx),%edi;");
    asm("loc_6804D35: rep movsl (%esi),(%edi);");
    asm("loc_6804D37: mov %edx,%ecx;");
    asm("loc_6804D39: and $3,%ecx;");
    asm("loc_6804D3C: rep movsb (%esi),(%edi);");
    asm("loc_6804D3E: mov 0x18(%esp),%ecx;");
    asm("loc_6804D42: push %ecx;");
    asm("loc_6804D43: push %eax;");
    asm("loc_6804D44: call _sub_68058A0;");
    asm("loc_6804D49: add $0xC,%esp;");
    asm("loc_6804D4C: pop %edi;");
    asm("loc_6804D4D: pop %esi;");
    asm("loc_6804D4E: pop %ebp;");
    asm("loc_6804D4F: pop %ebx;");
    asm("loc_6804D50: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6804D60() // _sub_6804D60
{
    __DEBUG_ASM(6804D60);
    // chunk 0x6804D60 _sub_6804D60
    asm("loc_6804D60: mov 4(%esp),%eax;");
    asm("loc_6804D64: push $_data_680D59C;");
    asm("loc_6804D69: push %eax;");
    asm("loc_6804D6A: call _sub_6804150;");
    asm("loc_6804D6F: add $8,%esp;");
    asm("loc_6804D72: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6804D80() // _sub_6804D80
{
    __DEBUG_ASM(6804D80);
    // chunk 0x6804D80 _sub_6804D80
    asm("loc_6804D80: sub $0x10,%esp;");
    asm("loc_6804D83: push %esi;");
    asm("loc_6804D84: mov 0x18(%esp),%esi;");
    asm("loc_6804D88: lea 4(%esp),%eax;");
    asm("loc_6804D8C: push %eax;");
    asm("loc_6804D8D: mov _data_680E604,%eax;");
    asm("loc_6804D92: mov (%eax),%ecx;");
    asm("loc_6804D94: sub 4(%eax),%ecx;");
    asm("loc_6804D97: sar $4,%ecx;");
    asm("loc_6804D9A: sub %esi,%ecx;");
    asm("loc_6804D9C: push %ecx;");
    asm("loc_6804D9D: push %esi;");
    asm("loc_6804D9E: call _sub_6804270;");
    asm("loc_6804DA3: push %esi;");
    asm("loc_6804DA4: call _sub_6802900;");
    asm("loc_6804DA9: mov _data_680E604,%edx;");
    asm("loc_6804DAF: mov (%edx),%eax;");
    asm("loc_6804DB1: mov 0x14(%esp),%ecx;");
    asm("loc_6804DB5: mov %ecx,(%eax);");
    asm("loc_6804DB7: mov 0x18(%esp),%edx;");
    asm("loc_6804DBB: mov %edx,4(%eax);");
    asm("loc_6804DBE: mov 0x1C(%esp),%ecx;");
    asm("loc_6804DC2: mov %ecx,8(%eax);");
    asm("loc_6804DC5: mov 0x20(%esp),%edx;");
    asm("loc_6804DC9: mov %edx,0xC(%eax);");
    asm("loc_6804DCC: mov _data_680E604,%eax;");
    asm("loc_6804DD1: mov (%eax),%ecx;");
    asm("loc_6804DD3: add $0x10,%esp;");
    asm("loc_6804DD6: add $0x10,%ecx;");
    asm("loc_6804DD9: mov %ecx,(%eax);");
    asm("loc_6804DDB: pop %esi;");
    asm("loc_6804DDC: add $0x10,%esp;");
    asm("loc_6804DDF: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6804DE0() // _sub_6804DE0
{
    __DEBUG_ASM(6804DE0);
    // chunk 0x6804DE0 _sub_6804DE0
    asm("loc_6804DE0: mov _data_680E604,%eax;");
    asm("loc_6804DE5: push %esi;");
    asm("loc_6804DE6: push $0x7FFFFFFD;");
    asm("loc_6804DEB: push $_data_680D708;");
    asm("loc_6804DF0: push $0x120;");
    asm("loc_6804DF5: movl $0xFFFFFFFA,0x68(%eax);");
    asm("loc_6804DFC: mov _data_680E604,%ecx;");
    asm("loc_6804E02: mov 0x64(%ecx),%edx;");
    asm("loc_6804E05: push $7;");
    asm("loc_6804E07: push $0;");
    asm("loc_6804E09: push %edx;");
    asm("loc_6804E0A: call _sub_6806550;");
    asm("loc_6804E0F: mov _data_680E604,%ecx;");
    asm("loc_6804E15: mov %eax,0x64(%ecx);");
    asm("loc_6804E18: mov _data_680E604,%edx;");
    asm("loc_6804E1E: mov 0x68(%edx),%esi;");
    asm("loc_6804E21: add $0x18,%esp;");
    asm("loc_6804E24: test %esi,%esi;");
    asm("loc_6804E26: jg loc_6804E36;");
    asm("loc_6804E28: push %esi;");
    asm("loc_6804E29: call _sub_6804E40;");
    asm("loc_6804E2E: add $4,%esp;");
    asm("loc_6804E31: inc %esi;");
    asm("loc_6804E32: test %esi,%esi;");
    asm("loc_6804E34: jle loc_6804E28;");
    asm("loc_6804E36: pop %esi;");
    asm("loc_6804E37: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6804E40() // _sub_6804E40
{
    __DEBUG_ASM(6804E40);
    // chunk 0x6804E40 _sub_6804E40
    asm("loc_6804E40: mov 4(%esp),%eax;");
    asm("loc_6804E44: lea (%eax,%eax,8),%edx;");
    asm("loc_6804E47: xor %ecx,%ecx;");
    asm("loc_6804E49: push %esi;");
    asm("loc_6804E4A: shl $5,%edx;");
    asm("loc_6804E4D: mov _data_680E604,%esi;");
    asm("loc_6804E53: mov 0x64(%esi),%esi;");
    asm("loc_6804E56: mov %ecx,%eax;");
    asm("loc_6804E58: sub %edx,%eax;");
    asm("loc_6804E5A: add $0x10,%ecx;");
    asm("loc_6804E5D: cmp $0x120,%ecx;");
    asm("loc_6804E63: movl $0xFFFFFFFA,(%esi,%eax);");
    asm("loc_6804E6A: jl loc_6804E4D;");
    asm("loc_6804E6C: pop %esi;");
    asm("loc_6804E6D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6804E70() // _sub_6804E70
{
    __DEBUG_ASM(6804E70);
    // chunk 0x6804E70 _sub_6804E70
    asm("loc_6804E70: mov _data_680E604,%eax;");
    asm("loc_6804E75: mov 0x68(%eax),%ecx;");
    asm("loc_6804E78: dec %ecx;");
    asm("loc_6804E79: push $0x7FFFFFFD;");
    asm("loc_6804E7E: mov %ecx,0x68(%eax);");
    asm("loc_6804E81: mov _data_680E604,%eax;");
    asm("loc_6804E86: mov 0x68(%eax),%ecx;");
    asm("loc_6804E89: mov 0x64(%eax),%edx;");
    asm("loc_6804E8C: push $_data_680D708;");
    asm("loc_6804E91: push $0x120;");
    asm("loc_6804E96: push $1;");
    asm("loc_6804E98: neg %ecx;");
    asm("loc_6804E9A: push %ecx;");
    asm("loc_6804E9B: push %edx;");
    asm("loc_6804E9C: call _sub_6806550;");
    asm("loc_6804EA1: mov _data_680E604,%ecx;");
    asm("loc_6804EA7: mov %eax,0x64(%ecx);");
    asm("loc_6804EAA: mov _data_680E604,%edx;");
    asm("loc_6804EB0: mov 0x68(%edx),%eax;");
    asm("loc_6804EB3: push %eax;");
    asm("loc_6804EB4: call _sub_6804E40;");
    asm("loc_6804EB9: mov _data_680E604,%ecx;");
    asm("loc_6804EBF: mov 0x68(%ecx),%eax;");
    asm("loc_6804EC2: add $0x1C,%esp;");
    asm("loc_6804EC5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6804ED0() // _sub_6804ED0
{
    __DEBUG_ASM(6804ED0);
    // chunk 0x6804ED0 _sub_6804ED0
    asm("loc_6804ED0: mov _data_680E604,%ecx;");
    asm("loc_6804ED6: mov 4(%esp),%eax;");
    asm("loc_6804EDA: cmp %eax,0x68(%ecx);");
    asm("loc_6804EDD: jg loc_6804EE4;");
    asm("loc_6804EDF: cmp $0xFFFFFFFA,%eax;");
    asm("loc_6804EE2: jl loc_6804EF2;");
    asm("loc_6804EE4: push %eax;");
    asm("loc_6804EE5: push $_data_680D730;");
    asm("loc_6804EEA: call _sub_6805FB0;");
    asm("loc_6804EEF: add $8,%esp;");
    asm("loc_6804EF2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6804F00() // _sub_6804F00
{
    __DEBUG_ASM(6804F00);
    // chunk 0x6804F00 _sub_6804F00
    asm("loc_6804F00: push %ebx;");
    asm("loc_6804F01: push %ebp;");
    asm("loc_6804F02: push %esi;");
    asm("loc_6804F03: push %edi;");
    asm("loc_6804F04: mov 0x14(%esp),%edi;");
    asm("loc_6804F08: push %edi;");
    asm("loc_6804F09: call _sub_6804FB0;");
    asm("loc_6804F0E: mov 0x1C(%esp),%ebx;");
    asm("loc_6804F12: push %ebx;");
    asm("loc_6804F13: call _sub_6804FB0;");
    asm("loc_6804F18: add $8,%esp;");
    asm("loc_6804F1B: xor %esi,%esi;");
    asm("loc_6804F1D: push %esi;");
    asm("loc_6804F1E: push %edi;");
    asm("loc_6804F1F: call _sub_6804F80;");
    asm("loc_6804F24: add $8,%esp;");
    asm("loc_6804F27: test %eax,%eax;");
    asm("loc_6804F29: je loc_6804F66;");
    asm("loc_6804F2B: mov _data_680E604,%eax;");
    asm("loc_6804F30: mov 0x64(%eax),%eax;");
    asm("loc_6804F33: lea (%ebx,%ebx,8),%ecx;");
    asm("loc_6804F36: shl $1,%ecx;");
    asm("loc_6804F38: mov %esi,%edx;");
    asm("loc_6804F3A: sub %ecx,%edx;");
    asm("loc_6804F3C: lea (%edi,%edi,8),%ecx;");
    asm("loc_6804F3F: shl $1,%ecx;");
    asm("loc_6804F41: shl $4,%edx;");
    asm("loc_6804F44: mov %esi,%ebp;");
    asm("loc_6804F46: sub %ecx,%ebp;");
    asm("loc_6804F48: shl $4,%ebp;");
    asm("loc_6804F4B: add %eax,%edx;");
    asm("loc_6804F4D: add %eax,%ebp;");
    asm("loc_6804F4F: mov (%edx),%eax;");
    asm("loc_6804F51: mov %eax,(%ebp);");
    asm("loc_6804F54: mov 4(%edx),%ecx;");
    asm("loc_6804F57: mov %ecx,4(%ebp);");
    asm("loc_6804F5A: mov 8(%edx),%eax;");
    asm("loc_6804F5D: mov %eax,8(%ebp);");
    asm("loc_6804F60: mov 0xC(%edx),%ecx;");
    asm("loc_6804F63: mov %ecx,0xC(%ebp);");
    asm("loc_6804F66: inc %esi;");
    asm("loc_6804F67: cmp $0x12,%esi;");
    asm("loc_6804F6A: jl loc_6804F1D;");
    asm("loc_6804F6C: mov %edi,%eax;");
    asm("loc_6804F6E: pop %edi;");
    asm("loc_6804F6F: pop %esi;");
    asm("loc_6804F70: pop %ebp;");
    asm("loc_6804F71: pop %ebx;");
    asm("loc_6804F72: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6804F80() // _sub_6804F80
{
    __DEBUG_ASM(6804F80);
    // chunk 0x6804F80 _sub_6804F80
    asm("loc_6804F80: mov 4(%esp),%eax;");
    asm("loc_6804F84: cmp $0xFFFFFFFA,%eax;");
    asm("loc_6804F87: jge loc_6804F8F;");
    asm("loc_6804F89: mov $1,%eax;");
    asm("loc_6804F8E: ret;");
    asm("loc_6804F8F: mov 8(%esp),%edx;");
    asm("loc_6804F93: lea (%eax,%eax,8),%eax;");
    asm("loc_6804F96: shl $1,%eax;");
    asm("loc_6804F98: mov $_data_680D610,%ecx;");
    asm("loc_6804F9D: sub %eax,%ecx;");
    asm("loc_6804F9F: movsbl (%ecx,%edx),%eax;");
    asm("loc_6804FA3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6804FB0() // _sub_6804FB0
{
    __DEBUG_ASM(6804FB0);
    // chunk 0x6804FB0 _sub_6804FB0
    asm("loc_6804FB0: mov _data_680E604,%ecx;");
    asm("loc_6804FB6: mov 4(%esp),%eax;");
    asm("loc_6804FBA: cmp %eax,0x68(%ecx);");
    asm("loc_6804FBD: jg loc_6804FC3;");
    asm("loc_6804FBF: test %eax,%eax;");
    asm("loc_6804FC1: jle loc_6804FD1;");
    asm("loc_6804FC3: push %eax;");
    asm("loc_6804FC4: push $_data_680D754;");
    asm("loc_6804FC9: call _sub_6805FB0;");
    asm("loc_6804FCE: add $8,%esp;");
    asm("loc_6804FD1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6804FE0() // _sub_6804FE0
{
    __DEBUG_ASM(6804FE0);
    // chunk 0x6804FE0 _sub_6804FE0
    asm("loc_6804FE0: mov 4(%esp),%ecx;");
    asm("loc_6804FE4: mov (%ecx),%eax;");
    asm("loc_6804FE6: cmp $0xFFFFFFF9,%eax;");
    asm("loc_6804FE9: je loc_680500C;");
    asm("loc_6804FEB: cmp $0xFFFFFFFD,%eax;");
    asm("loc_6804FEE: je loc_6805005;");
    asm("loc_6804FF0: test %eax,%eax;");
    asm("loc_6804FF2: jne loc_6805012;");
    asm("loc_6804FF4: mov 8(%ecx),%eax;");
    asm("loc_6804FF7: mov 0x10(%eax),%eax;");
    asm("loc_6804FFA: xor %ecx,%ecx;");
    asm("loc_6804FFC: test %eax,%eax;");
    asm("loc_6804FFE: setge %cl;");
    asm("loc_6805001: dec %ecx;");
    asm("loc_6805002: and %ecx,%eax;");
    asm("loc_6805004: ret;");
    asm("loc_6805005: mov 8(%ecx),%edx;");
    asm("loc_6805008: mov 0x14(%edx),%eax;");
    asm("loc_680500B: ret;");
    asm("loc_680500C: mov 8(%ecx),%eax;");
    asm("loc_680500F: mov 0x10(%eax),%eax;");
    asm("loc_6805012: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805020() // _sub_6805020
{
    __DEBUG_ASM(6805020);
    // chunk 0x6805020 _sub_6805020
    asm("loc_6805020: mov 8(%esp),%eax;");
    asm("loc_6805024: push %esi;");
    asm("loc_6805025: push %edi;");
    asm("loc_6805026: push $_off_680D5C4;");
    asm("loc_680502B: push %eax;");
    asm("loc_680502C: call _sub_6805070;");
    asm("loc_6805031: mov 0x14(%esp),%esi;");
    asm("loc_6805035: push %esi;");
    asm("loc_6805036: mov %eax,%edi;");
    asm("loc_6805038: call _sub_6804FB0;");
    asm("loc_680503D: push %edi;");
    asm("loc_680503E: push %esi;");
    asm("loc_680503F: call _sub_6804F80;");
    asm("loc_6805044: add $0x14,%esp;");
    asm("loc_6805047: test %eax,%eax;");
    asm("loc_6805049: je loc_6805065;");
    asm("loc_680504B: mov _data_680E604,%edx;");
    asm("loc_6805051: lea (%esi,%esi,8),%ecx;");
    asm("loc_6805054: shl $1,%ecx;");
    asm("loc_6805056: mov %edi,%eax;");
    asm("loc_6805058: sub %ecx,%eax;");
    asm("loc_680505A: mov 0x64(%edx),%ecx;");
    asm("loc_680505D: shl $4,%eax;");
    asm("loc_6805060: pop %edi;");
    asm("loc_6805061: add %ecx,%eax;");
    asm("loc_6805063: pop %esi;");
    asm("loc_6805064: ret;");
    asm("loc_6805065: pop %edi;");
    asm("loc_6805066: mov $_data_680D968,%eax;");
    asm("loc_680506B: pop %esi;");
    asm("loc_680506C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805070() // _sub_6805070
{
    __DEBUG_ASM(6805070);
    // chunk 0x6805070 _sub_6805070
    asm("loc_6805070: mov 8(%esp),%eax;");
    asm("loc_6805074: push %esi;");
    asm("loc_6805075: push %edi;");
    asm("loc_6805076: mov 0xC(%esp),%edi;");
    asm("loc_680507A: push %eax;");
    asm("loc_680507B: push %edi;");
    asm("loc_680507C: call _sub_6805D20;");
    asm("loc_6805081: mov %eax,%esi;");
    asm("loc_6805083: add $8,%esp;");
    asm("loc_6805086: test %esi,%esi;");
    asm("loc_6805088: jge loc_6805098;");
    asm("loc_680508A: push %edi;");
    asm("loc_680508B: push $_data_680D76C;");
    asm("loc_6805090: call _sub_6805FB0;");
    asm("loc_6805095: add $8,%esp;");
    asm("loc_6805098: pop %edi;");
    asm("loc_6805099: mov %esi,%eax;");
    asm("loc_680509B: pop %esi;");
    asm("loc_680509C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68050A0() // _sub_68050A0
{
    __DEBUG_ASM(68050A0);
    // chunk 0x68050A0 _sub_68050A0
    asm("loc_68050A0: mov 8(%esp),%eax;");
    asm("loc_68050A4: sub $0x10,%esp;");
    asm("loc_68050A7: push %ebx;");
    asm("loc_68050A8: push %ebp;");
    asm("loc_68050A9: push %esi;");
    asm("loc_68050AA: push %edi;");
    asm("loc_68050AB: push $_off_680D5C4;");
    asm("loc_68050B0: push %eax;");
    asm("loc_68050B1: call _sub_6805070;");
    asm("loc_68050B6: mov 0x2C(%esp),%edi;");
    asm("loc_68050BA: push %edi;");
    asm("loc_68050BB: mov %eax,%esi;");
    asm("loc_68050BD: call _sub_6804FB0;");
    asm("loc_68050C2: push %esi;");
    asm("loc_68050C3: push %edi;");
    asm("loc_68050C4: call _sub_6804F80;");
    asm("loc_68050C9: add $0x14,%esp;");
    asm("loc_68050CC: test %eax,%eax;");
    asm("loc_68050CE: jne loc_680510A;");
    asm("loc_68050D0: cmp $0xFFFFFFFD,%edi;");
    asm("loc_68050D3: je loc_68050DE;");
    asm("loc_68050D5: test %edi,%edi;");
    asm("loc_68050D7: mov $_data_680E600,%eax;");
    asm("loc_68050DC: jne loc_68050E3;");
    asm("loc_68050DE: mov $_data_680D7C8,%eax;");
    asm("loc_68050E3: push %eax;");
    asm("loc_68050E4: lea (,%edi,4),%ecx;");
    asm("loc_68050EB: mov $_off_680D930,%edx;");
    asm("loc_68050F0: sub %ecx,%edx;");
    asm("loc_68050F2: mov (%edx),%eax;");
    asm("loc_68050F4: mov _off_680D5C4(,%esi,4),%ecx;");
    asm("loc_68050FB: push %eax;");
    asm("loc_68050FC: push %ecx;");
    asm("loc_68050FD: push $_data_680D790;");
    asm("loc_6805102: call _sub_6805FB0;");
    asm("loc_6805107: add $0x10,%esp;");
    asm("loc_680510A: mov 0x2C(%esp),%eax;");
    asm("loc_680510E: lea (%edi,%edi,8),%edi;");
    asm("loc_6805111: shl $1,%edi;");
    asm("loc_6805113: mov %eax,%ebp;");
    asm("loc_6805115: mov (%ebp),%ecx;");
    asm("loc_6805118: mov 4(%ebp),%edx;");
    asm("loc_680511B: mov 8(%ebp),%ebx;");
    asm("loc_680511E: mov 0xC(%ebp),%ebp;");
    asm("loc_6805121: sub %edi,%esi;");
    asm("loc_6805123: mov _data_680E604,%edi;");
    asm("loc_6805129: mov 0x64(%edi),%edi;");
    asm("loc_680512C: shl $4,%esi;");
    asm("loc_680512F: add %esi,%edi;");
    asm("loc_6805131: mov %ebp,0x1C(%esp);");
    asm("loc_6805135: mov (%edi),%ebp;");
    asm("loc_6805137: mov %ebp,(%eax);");
    asm("loc_6805139: mov 4(%edi),%ebp;");
    asm("loc_680513C: mov %ebp,4(%eax);");
    asm("loc_680513F: mov 8(%edi),%ebp;");
    asm("loc_6805142: mov %ebp,8(%eax);");
    asm("loc_6805145: mov 0xC(%edi),%edi;");
    asm("loc_6805148: mov %edi,0xC(%eax);");
    asm("loc_680514B: mov _data_680E604,%eax;");
    asm("loc_6805150: mov 0x64(%eax),%eax;");
    asm("loc_6805153: add %esi,%eax;");
    asm("loc_6805155: mov %ecx,(%eax);");
    asm("loc_6805157: mov 0x1C(%esp),%ecx;");
    asm("loc_680515B: pop %edi;");
    asm("loc_680515C: mov %edx,4(%eax);");
    asm("loc_680515F: pop %esi;");
    asm("loc_6805160: mov %ebx,8(%eax);");
    asm("loc_6805163: pop %ebp;");
    asm("loc_6805164: mov %ecx,0xC(%eax);");
    asm("loc_6805167: pop %ebx;");
    asm("loc_6805168: add $0x10,%esp;");
    asm("loc_680516B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805170() // _sub_6805170
{
    __DEBUG_ASM(6805170);
    // chunk 0x6805170 _sub_6805170
    asm("loc_6805170: mov _data_680E604,%eax;");
    asm("loc_6805175: push %ebx;");
    asm("loc_6805176: mov 8(%esp),%ebx;");
    asm("loc_680517A: push %ebp;");
    asm("loc_680517B: push %esi;");
    asm("loc_680517C: push %edi;");
    asm("loc_680517D: xor %ebp,%ebp;");
    asm("loc_680517F: mov 0x68(%eax),%ecx;");
    asm("loc_6805182: xor %edi,%edi;");
    asm("loc_6805184: test %ecx,%ecx;");
    asm("loc_6805186: jg loc_68051AF;");
    asm("loc_6805188: mov %ebp,%esi;");
    asm("loc_680518A: shl $4,%esi;");
    asm("loc_680518D: mov 0x64(%eax),%eax;");
    asm("loc_6805190: add %esi,%eax;");
    asm("loc_6805192: push %eax;");
    asm("loc_6805193: call *%ebx;");
    asm("loc_6805195: add $4,%esp;");
    asm("loc_6805198: test %eax,%eax;");
    asm("loc_680519A: jne loc_68051BC;");
    asm("loc_680519C: mov _data_680E604,%eax;");
    asm("loc_68051A1: mov 0x68(%eax),%ecx;");
    asm("loc_68051A4: dec %edi;");
    asm("loc_68051A5: add $0x120,%esi;");
    asm("loc_68051AB: cmp %ecx,%edi;");
    asm("loc_68051AD: jge loc_680518D;");
    asm("loc_68051AF: inc %ebp;");
    asm("loc_68051B0: cmp $0x11,%ebp;");
    asm("loc_68051B3: jle loc_680517F;");
    asm("loc_68051B5: pop %edi;");
    asm("loc_68051B6: pop %esi;");
    asm("loc_68051B7: pop %ebp;");
    asm("loc_68051B8: xor %eax,%eax;");
    asm("loc_68051BA: pop %ebx;");
    asm("loc_68051BB: ret;");
    asm("loc_68051BC: mov _off_680D5C4(,%ebp,4),%eax;");
    asm("loc_68051C3: pop %edi;");
    asm("loc_68051C4: pop %esi;");
    asm("loc_68051C5: pop %ebp;");
    asm("loc_68051C6: pop %ebx;");
    asm("loc_68051C7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68051D0() // _sub_68051D0
{
    __DEBUG_ASM(68051D0);
    // chunk 0x68051D0 _sub_68051D0
    asm("loc_68051D0: mov 4(%esp),%eax;");
    asm("loc_68051D4: push %ebx;");
    asm("loc_68051D5: mov 0xC(%eax),%ebx;");
    asm("loc_68051D8: push %ebp;");
    asm("loc_68051D9: mov 0x10(%esp),%ebp;");
    asm("loc_68051DD: push %esi;");
    asm("loc_68051DE: push %edi;");
    asm("loc_68051DF: push %ebp;");
    asm("loc_68051E0: call _sub_6805250;");
    asm("loc_68051E5: mov %eax,%ecx;");
    asm("loc_68051E7: cltd;");
    asm("loc_68051E8: add $4,%esp;");
    asm("loc_68051EB: idiv %ebx;");
    asm("loc_68051ED: mov %ecx,0x18(%esp);");
    asm("loc_68051F1: mov %edx,%edi;");
    asm("loc_68051F3: mov 0x14(%esp),%edx;");
    asm("loc_68051F7: mov 8(%edx),%eax;");
    asm("loc_68051FA: mov (%ebp),%edx;");
    asm("loc_68051FD: mov %edi,%esi;");
    asm("loc_68051FF: shl $5,%esi;");
    asm("loc_6805202: add %eax,%esi;");
    asm("loc_6805204: mov (%esi),%eax;");
    asm("loc_6805206: cmp %edx,%eax;");
    asm("loc_6805208: jne loc_680521F;");
    asm("loc_680520A: push %esi;");
    asm("loc_680520B: push %ebp;");
    asm("loc_680520C: call _sub_6806100;");
    asm("loc_6805211: mov 0x20(%esp),%ecx;");
    asm("loc_6805215: add $8,%esp;");
    asm("loc_6805218: neg %eax;");
    asm("loc_680521A: sbb %eax,%eax;");
    asm("loc_680521C: inc %eax;");
    asm("loc_680521D: jmp loc_6805229;");
    asm("loc_680521F: xor %edx,%edx;");
    asm("loc_6805221: cmp $0xFFFFFFFA,%eax;");
    asm("loc_6805224: setne %dl;");
    asm("loc_6805227: mov %edx,%eax;");
    asm("loc_6805229: test %eax,%eax;");
    asm("loc_680522B: je loc_680523E;");
    asm("loc_680522D: lea -2(%ebx),%eax;");
    asm("loc_6805230: and %ecx,%eax;");
    asm("loc_6805232: lea 1(%edi,%eax),%edi;");
    asm("loc_6805236: cmp %ebx,%edi;");
    asm("loc_6805238: jl loc_68051F3;");
    asm("loc_680523A: sub %ebx,%edi;");
    asm("loc_680523C: jmp loc_68051F3;");
    asm("loc_680523E: pop %edi;");
    asm("loc_680523F: mov %esi,%eax;");
    asm("loc_6805241: pop %esi;");
    asm("loc_6805242: pop %ebp;");
    asm("loc_6805243: pop %ebx;");
    asm("loc_6805244: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805250() // _sub_6805250
{
    asm("jmp dgb_6805250;"); // jumptable skip
    asm(".long _jmp_6805290;"); // jumptable address
    __DEBUG_ASM(6805250);
    // chunk 0x6805250 _sub_6805250
    asm("loc_6805250: mov 4(%esp),%eax;");
    asm("loc_6805254: mov (%eax),%ecx;");
    asm("loc_6805256: add $7,%ecx;");
    asm("loc_6805259: cmp $7,%ecx;");
    asm("loc_680525C: ja loc_680527E;");
    asm("loc_680525E: jmpl *_jmp_6805290(,%ecx,4);");
    asm("loc_6805265: fldl 8(%eax);");
    asm("loc_6805268: call _sub_680BDAA;");
    asm("loc_680526D: test %eax,%eax;");
    asm("loc_680526F: jge loc_6805278;");
    asm("loc_6805271: or $0xFFFFFFFF,%ecx;");
    asm("loc_6805274: sub %eax,%ecx;");
    asm("loc_6805276: mov %ecx,%eax;");
    asm("loc_6805278: ret;");
    asm("loc_6805279: mov 8(%eax),%eax;");
    asm("loc_680527C: jmp loc_680526D;");
    asm("loc_680527E: push $_data_680D7DC;");
    asm("loc_6805283: call _sub_6802E00;");
    asm("loc_6805288: add $4,%esp;");
    asm("loc_680528B: xor %eax,%eax;");
    asm("loc_680528D: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_6805290: .long loc_6805279;");
    asm(".long loc_680527E;");
    asm(".long loc_6805279;");
    asm(".long loc_6805279;");
    asm(".long loc_6805279;");
    asm(".long loc_6805279;");
    asm(".long loc_6805265;");
    asm(".long loc_6805279;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6805250);
_naked _weak void _sub_68052B0() // _sub_68052B0
{
    __DEBUG_ASM(68052B0);
    // chunk 0x68052B0 _sub_68052B0
    asm("loc_68052B0: push %esi;");
    asm("loc_68052B1: mov 8(%esp),%esi;");
    asm("loc_68052B5: test %esi,%esi;");
    asm("loc_68052B7: je loc_68052F3;");
    asm("loc_68052B9: push %edi;");
    asm("loc_68052BA: mov 0xC(%esi),%eax;");
    asm("loc_68052BD: mov _data_680E604,%ecx;");
    asm("loc_68052C3: mov (%esi),%edi;");
    asm("loc_68052C5: cltd;");
    asm("loc_68052C6: and $0xF,%edx;");
    asm("loc_68052C9: add %edx,%eax;");
    asm("loc_68052CB: sar $4,%eax;");
    asm("loc_68052CE: or $0xFFFFFFFF,%edx;");
    asm("loc_68052D1: sub %eax,%edx;");
    asm("loc_68052D3: add %edx,0x78(%ecx);");
    asm("loc_68052D6: mov 8(%esi),%eax;");
    asm("loc_68052D9: push $0;");
    asm("loc_68052DB: push %eax;");
    asm("loc_68052DC: call _sub_68065D0;");
    asm("loc_68052E1: push $0;");
    asm("loc_68052E3: push %esi;");
    asm("loc_68052E4: call _sub_68065D0;");
    asm("loc_68052E9: add $0x10,%esp;");
    asm("loc_68052EC: test %edi,%edi;");
    asm("loc_68052EE: mov %edi,%esi;");
    asm("loc_68052F0: jne loc_68052BA;");
    asm("loc_68052F2: pop %edi;");
    asm("loc_68052F3: pop %esi;");
    asm("loc_68052F4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805300() // _sub_6805300
{
    __DEBUG_ASM(6805300);
    // chunk 0x6805300 _sub_6805300
    asm("loc_6805300: push %esi;");
    asm("loc_6805301: push %edi;");
    asm("loc_6805302: push $0x18;");
    asm("loc_6805304: push $0;");
    asm("loc_6805306: call _sub_68065D0;");
    asm("loc_680530B: mov %eax,%esi;");
    asm("loc_680530D: mov 0x14(%esp),%eax;");
    asm("loc_6805311: lea (%eax,%eax,2),%eax;");
    asm("loc_6805314: cltd;");
    asm("loc_6805315: sub %edx,%eax;");
    asm("loc_6805317: sar $1,%eax;");
    asm("loc_6805319: push %eax;");
    asm("loc_680531A: call _sub_68060B0;");
    asm("loc_680531F: mov %eax,%edi;");
    asm("loc_6805321: push %edi;");
    asm("loc_6805322: call _sub_6805370;");
    asm("loc_6805327: mov %eax,8(%esi);");
    asm("loc_680532A: mov %edi,0xC(%esi);");
    asm("loc_680532D: movl $0,0x10(%esi);");
    asm("loc_6805334: movl $0xFFFFFFFD,0x14(%esi);");
    asm("loc_680533B: mov _data_680E604,%eax;");
    asm("loc_6805340: add $0x50,%eax;");
    asm("loc_6805343: push %esi;");
    asm("loc_6805344: push %eax;");
    asm("loc_6805345: call _sub_68061A0;");
    asm("loc_680534A: mov _data_680E604,%ecx;");
    asm("loc_6805350: mov %edi,%eax;");
    asm("loc_6805352: cltd;");
    asm("loc_6805353: and $0xF,%edx;");
    asm("loc_6805356: add %edx,%eax;");
    asm("loc_6805358: mov 0x78(%ecx),%edx;");
    asm("loc_680535B: add $0x18,%esp;");
    asm("loc_680535E: sar $4,%eax;");
    asm("loc_6805361: inc %eax;");
    asm("loc_6805362: add %eax,%edx;");
    asm("loc_6805364: pop %edi;");
    asm("loc_6805365: mov %esi,%eax;");
    asm("loc_6805367: mov %edx,0x78(%ecx);");
    asm("loc_680536A: pop %esi;");
    asm("loc_680536B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805370() // _sub_6805370
{
    __DEBUG_ASM(6805370);
    // chunk 0x6805370 _sub_6805370
    asm("loc_6805370: push %esi;");
    asm("loc_6805371: mov 8(%esp),%esi;");
    asm("loc_6805375: mov %esi,%eax;");
    asm("loc_6805377: shl $5,%eax;");
    asm("loc_680537A: push %eax;");
    asm("loc_680537B: push $0;");
    asm("loc_680537D: call _sub_68065D0;");
    asm("loc_6805382: add $8,%esp;");
    asm("loc_6805385: test %esi,%esi;");
    asm("loc_6805387: jle loc_680539D;");
    asm("loc_6805389: mov %esi,%edx;");
    asm("loc_680538B: mov %eax,%ecx;");
    asm("loc_680538D: mov $0xFFFFFFFA,%esi;");
    asm("loc_6805392: mov %esi,0x10(%ecx);");
    asm("loc_6805395: mov %esi,(%ecx);");
    asm("loc_6805397: add $0x20,%ecx;");
    asm("loc_680539A: dec %edx;");
    asm("loc_680539B: jne loc_6805392;");
    asm("loc_680539D: pop %esi;");
    asm("loc_680539E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68053A0() // _sub_68053A0
{
    __DEBUG_ASM(68053A0);
    // chunk 0x68053A0 _sub_68053A0
    asm("loc_68053A0: sub $0x10,%esp;");
    asm("loc_68053A3: push %esi;");
    asm("loc_68053A4: mov 0x18(%esp),%esi;");
    asm("loc_68053A8: push %edi;");
    asm("loc_68053A9: mov 0x20(%esp),%edi;");
    asm("loc_68053AD: push %edi;");
    asm("loc_68053AE: push %esi;");
    asm("loc_68053AF: call _sub_68051D0;");
    asm("loc_68053B4: mov (%eax),%ecx;");
    asm("loc_68053B6: add $8,%esp;");
    asm("loc_68053B9: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_68053BC: je loc_68053E1;");
    asm("loc_68053BE: mov 0x24(%esp),%ecx;");
    asm("loc_68053C2: mov (%ecx),%edx;");
    asm("loc_68053C4: add $0x10,%eax;");
    asm("loc_68053C7: mov %edx,(%eax);");
    asm("loc_68053C9: mov 4(%ecx),%edx;");
    asm("loc_68053CC: mov %edx,4(%eax);");
    asm("loc_68053CF: mov 8(%ecx),%edx;");
    asm("loc_68053D2: mov %edx,8(%eax);");
    asm("loc_68053D5: mov 0xC(%ecx),%ecx;");
    asm("loc_68053D8: pop %edi;");
    asm("loc_68053D9: mov %ecx,0xC(%eax);");
    asm("loc_68053DC: pop %esi;");
    asm("loc_68053DD: add $0x10,%esp;");
    asm("loc_68053E0: ret;");
    asm("loc_68053E1: mov 0x24(%esp),%edx;");
    asm("loc_68053E5: push %ebx;");
    asm("loc_68053E6: mov (%edx),%ebx;");
    asm("loc_68053E8: push %ebp;");
    asm("loc_68053E9: mov 4(%edx),%ebp;");
    asm("loc_68053EC: mov 8(%edx),%ecx;");
    asm("loc_68053EF: mov 0xC(%edx),%edx;");
    asm("loc_68053F2: mov %ecx,0x18(%esp);");
    asm("loc_68053F6: mov 0x10(%esi),%ecx;");
    asm("loc_68053F9: mov %edx,0x1C(%esp);");
    asm("loc_68053FD: mov 0xC(%esi),%edx;");
    asm("loc_6805400: shl $1,%edx;");
    asm("loc_6805402: lea (%ecx,%ecx,2),%ecx;");
    asm("loc_6805405: cmp %edx,%ecx;");
    asm("loc_6805407: jle loc_6805419;");
    asm("loc_6805409: push %esi;");
    asm("loc_680540A: call _sub_6805460;");
    asm("loc_680540F: push %edi;");
    asm("loc_6805410: push %esi;");
    asm("loc_6805411: call _sub_68051D0;");
    asm("loc_6805416: add $0xC,%esp;");
    asm("loc_6805419: incl 0x10(%esi);");
    asm("loc_680541C: mov (%edi),%ecx;");
    asm("loc_680541E: mov %eax,%edx;");
    asm("loc_6805420: mov %ecx,(%edx);");
    asm("loc_6805422: mov 4(%edi),%ecx;");
    asm("loc_6805425: mov %ecx,4(%edx);");
    asm("loc_6805428: mov 8(%edi),%ecx;");
    asm("loc_680542B: mov %ecx,8(%edx);");
    asm("loc_680542E: mov 0xC(%edi),%ecx;");
    asm("loc_6805431: add $0x10,%eax;");
    asm("loc_6805434: mov %ebx,(%eax);");
    asm("loc_6805436: mov %ebp,4(%eax);");
    asm("loc_6805439: pop %ebp;");
    asm("loc_680543A: mov %ecx,0xC(%edx);");
    asm("loc_680543D: mov 0x14(%esp),%edx;");
    asm("loc_6805441: mov 0x18(%esp),%ecx;");
    asm("loc_6805445: pop %ebx;");
    asm("loc_6805446: mov %edx,8(%eax);");
    asm("loc_6805449: pop %edi;");
    asm("loc_680544A: mov %ecx,0xC(%eax);");
    asm("loc_680544D: pop %esi;");
    asm("loc_680544E: add $0x10,%esp;");
    asm("loc_6805451: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805460() // _sub_6805460
{
    __DEBUG_ASM(6805460);
    // chunk 0x6805460 _sub_6805460
    asm("loc_6805460: sub $0xC,%esp;");
    asm("loc_6805463: push %ebx;");
    asm("loc_6805464: mov 0x14(%esp),%ebx;");
    asm("loc_6805468: push %ebp;");
    asm("loc_6805469: mov 8(%ebx),%ebp;");
    asm("loc_680546C: push %esi;");
    asm("loc_680546D: mov 0xC(%ebx),%esi;");
    asm("loc_6805470: push %edi;");
    asm("loc_6805471: push %ebx;");
    asm("loc_6805472: mov %esi,0x14(%esp);");
    asm("loc_6805476: mov %ebp,0x1C(%esp);");
    asm("loc_680547A: call _sub_6805520;");
    asm("loc_680547F: mov %eax,%edi;");
    asm("loc_6805481: push %edi;");
    asm("loc_6805482: mov %edi,0x1C(%esp);");
    asm("loc_6805486: call _sub_6805370;");
    asm("loc_680548B: add $8,%esp;");
    asm("loc_680548E: test %esi,%esi;");
    asm("loc_6805490: mov %eax,8(%ebx);");
    asm("loc_6805493: mov %edi,0xC(%ebx);");
    asm("loc_6805496: movl $0,0x10(%ebx);");
    asm("loc_680549D: jle loc_68054DF;");
    asm("loc_680549F: mov %esi,0x20(%esp);");
    asm("loc_68054A3: cmpl $0xFFFFFFFA,0x10(%ebp);");
    asm("loc_68054A7: je loc_68054CD;");
    asm("loc_68054A9: push %ebp;");
    asm("loc_68054AA: push %ebx;");
    asm("loc_68054AB: call _sub_68051D0;");
    asm("loc_68054B0: mov %eax,%edi;");
    asm("loc_68054B2: mov $8,%ecx;");
    asm("loc_68054B7: mov %ebp,%esi;");
    asm("loc_68054B9: rep movsl (%esi),(%edi);");
    asm("loc_68054BB: mov 0x10(%ebx),%eax;");
    asm("loc_68054BE: mov 0x18(%esp),%esi;");
    asm("loc_68054C2: mov 0x1C(%esp),%edi;");
    asm("loc_68054C6: add $8,%esp;");
    asm("loc_68054C9: inc %eax;");
    asm("loc_68054CA: mov %eax,0x10(%ebx);");
    asm("loc_68054CD: mov 0x20(%esp),%eax;");
    asm("loc_68054D1: add $0x20,%ebp;");
    asm("loc_68054D4: dec %eax;");
    asm("loc_68054D5: mov %eax,0x20(%esp);");
    asm("loc_68054D9: jne loc_68054A3;");
    asm("loc_68054DB: mov 0x18(%esp),%ebp;");
    asm("loc_68054DF: mov _data_680E604,%ecx;");
    asm("loc_68054E5: mov %edi,%eax;");
    asm("loc_68054E7: cltd;");
    asm("loc_68054E8: and $0xF,%edx;");
    asm("loc_68054EB: add %edx,%eax;");
    asm("loc_68054ED: mov %eax,%edi;");
    asm("loc_68054EF: mov %esi,%eax;");
    asm("loc_68054F1: mov 0x78(%ecx),%esi;");
    asm("loc_68054F4: cltd;");
    asm("loc_68054F5: and $0xF,%edx;");
    asm("loc_68054F8: add %edx,%eax;");
    asm("loc_68054FA: sar $4,%eax;");
    asm("loc_68054FD: sar $4,%edi;");
    asm("loc_6805500: sub %eax,%edi;");
    asm("loc_6805502: push $0;");
    asm("loc_6805504: add %edi,%esi;");
    asm("loc_6805506: push %ebp;");
    asm("loc_6805507: mov %esi,0x78(%ecx);");
    asm("loc_680550A: call _sub_68065D0;");
    asm("loc_680550F: add $8,%esp;");
    asm("loc_6805512: pop %edi;");
    asm("loc_6805513: pop %esi;");
    asm("loc_6805514: pop %ebp;");
    asm("loc_6805515: pop %ebx;");
    asm("loc_6805516: add $0xC,%esp;");
    asm("loc_6805519: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805520() // _sub_6805520
{
    __DEBUG_ASM(6805520);
    // chunk 0x6805520 _sub_6805520
    asm("loc_6805520: mov 4(%esp),%eax;");
    asm("loc_6805524: mov 8(%eax),%ecx;");
    asm("loc_6805527: mov 0xC(%eax),%eax;");
    asm("loc_680552A: xor %edx,%edx;");
    asm("loc_680552C: test %eax,%eax;");
    asm("loc_680552E: jle loc_680553F;");
    asm("loc_6805530: add $0x10,%ecx;");
    asm("loc_6805533: cmpl $0xFFFFFFFA,(%ecx);");
    asm("loc_6805536: je loc_6805539;");
    asm("loc_6805538: inc %edx;");
    asm("loc_6805539: add $0x20,%ecx;");
    asm("loc_680553C: dec %eax;");
    asm("loc_680553D: jne loc_6805533;");
    asm("loc_680553F: lea 2(%edx,%edx),%eax;");
    asm("loc_6805543: push %eax;");
    asm("loc_6805544: call _sub_68060B0;");
    asm("loc_6805549: add $4,%esp;");
    asm("loc_680554C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805550() // _sub_6805550
{
    __DEBUG_ASM(6805550);
    // chunk 0x6805550 _sub_6805550
    asm("loc_6805550: mov 8(%esp),%eax;");
    asm("loc_6805554: push %esi;");
    asm("loc_6805555: push %edi;");
    asm("loc_6805556: mov 0xC(%esp),%edi;");
    asm("loc_680555A: push %eax;");
    asm("loc_680555B: push %edi;");
    asm("loc_680555C: call _sub_68051D0;");
    asm("loc_6805561: mov %eax,%esi;");
    asm("loc_6805563: mov 0x10(%esi),%eax;");
    asm("loc_6805566: add $8,%esp;");
    asm("loc_6805569: cmp $0xFFFFFFFA,%eax;");
    asm("loc_680556C: jne loc_680557D;");
    asm("loc_680556E: push $_data_680D7FC;");
    asm("loc_6805573: push $2;");
    asm("loc_6805575: call _sub_6805D80;");
    asm("loc_680557A: add $8,%esp;");
    asm("loc_680557D: mov 8(%edi),%edx;");
    asm("loc_6805580: mov %esi,%eax;");
    asm("loc_6805582: sub %edx,%eax;");
    asm("loc_6805584: pop %edi;");
    asm("loc_6805585: sar $5,%eax;");
    asm("loc_6805588: pop %esi;");
    asm("loc_6805589: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805590() // _sub_6805590
{
    __DEBUG_ASM(6805590);
    // chunk 0x6805590 _sub_6805590
    asm("loc_6805590: sub $0x10,%esp;");
    asm("loc_6805593: mov 0x1C(%esp),%eax;");
    asm("loc_6805597: fildl 0x18(%esp);");
    asm("loc_680559B: mov 0x14(%esp),%edx;");
    asm("loc_680559F: push %eax;");
    asm("loc_68055A0: lea 4(%esp),%ecx;");
    asm("loc_68055A4: fstpl 0xC(%esp);");
    asm("loc_68055A8: push %ecx;");
    asm("loc_68055A9: push %edx;");
    asm("loc_68055AA: movl $0xFFFFFFFF,0xC(%esp);");
    asm("loc_68055B2: call _sub_68053A0;");
    asm("loc_68055B7: add $0x1C,%esp;");
    asm("loc_68055BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68055C0() // _sub_68055C0
{
    __DEBUG_ASM(68055C0);
    // chunk 0x68055C0 _sub_68055C0
    asm("loc_68055C0: sub $0x10,%esp;");
    asm("loc_68055C3: fildl 0x18(%esp);");
    asm("loc_68055C7: mov 0x14(%esp),%ecx;");
    asm("loc_68055CB: lea (%esp),%eax;");
    asm("loc_68055CF: push %eax;");
    asm("loc_68055D0: push %ecx;");
    asm("loc_68055D1: fstpl 0x10(%esp);");
    asm("loc_68055D5: movl $0xFFFFFFFF,8(%esp);");
    asm("loc_68055DD: call _sub_68051D0;");
    asm("loc_68055E2: add $0x10,%eax;");
    asm("loc_68055E5: add $0x18,%esp;");
    asm("loc_68055E8: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68055F0() // _sub_68055F0
{
    __DEBUG_ASM(68055F0);
    // chunk 0x68055F0 _sub_68055F0
    asm("loc_68055F0: push %esi;");
    asm("loc_68055F1: push $0x2E8;");
    asm("loc_68055F6: xor %esi,%esi;");
    asm("loc_68055F8: push %esi;");
    asm("loc_68055F9: call _sub_68065D0;");
    asm("loc_68055FE: mov _data_680E604,%ecx;");
    asm("loc_6805604: add $8,%esp;");
    asm("loc_6805607: mov %eax,0x60(%ecx);");
    asm("loc_680560A: xor %eax,%eax;");
    asm("loc_680560C: mov _data_680E604,%edx;");
    asm("loc_6805612: mov 0x60(%edx),%ecx;");
    asm("loc_6805615: mov %esi,(%ecx,%eax);");
    asm("loc_6805618: mov _data_680E604,%edx;");
    asm("loc_680561E: mov 0x60(%edx),%ecx;");
    asm("loc_6805621: mov %esi,4(%ecx,%eax);");
    asm("loc_6805625: mov _data_680E604,%edx;");
    asm("loc_680562B: mov 0x60(%edx),%ecx;");
    asm("loc_680562E: mov %esi,8(%ecx,%eax);");
    asm("loc_6805632: add $0xC,%eax;");
    asm("loc_6805635: cmp $0x2E8,%eax;");
    asm("loc_680563A: jl loc_680560C;");
    asm("loc_680563C: pop %esi;");
    asm("loc_680563D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805640() // _sub_6805640
{
    __DEBUG_ASM(6805640);
    // chunk 0x6805640 _sub_6805640
    asm("loc_6805640: mov 4(%esp),%ecx;");
    asm("loc_6805644: xor %edx,%edx;");
    asm("loc_6805646: push %esi;");
    asm("loc_6805647: mov %ecx,%eax;");
    asm("loc_6805649: mov $0x1F,%esi;");
    asm("loc_680564E: div %esi;");
    asm("loc_6805650: add %esi,%edx;");
    asm("loc_6805652: lea (%edx,%edx,2),%eax;");
    asm("loc_6805655: mov _data_680E604,%edx;");
    asm("loc_680565B: mov 0x60(%edx),%edx;");
    asm("loc_680565E: lea (%edx,%eax,4),%eax;");
    asm("loc_6805661: mov 0xC(%esp),%edx;");
    asm("loc_6805665: push %eax;");
    asm("loc_6805666: push %edx;");
    asm("loc_6805667: push %ecx;");
    asm("loc_6805668: call _sub_6805680;");
    asm("loc_680566D: add $0xC,%esp;");
    asm("loc_6805670: pop %esi;");
    asm("loc_6805671: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805680() // _sub_6805680
{
    __DEBUG_ASM(6805680);
    // chunk 0x6805680 _sub_6805680
    asm("loc_6805680: push %ebx;");
    asm("loc_6805681: push %ebp;");
    asm("loc_6805682: push %esi;");
    asm("loc_6805683: push %edi;");
    asm("loc_6805684: mov 0x1C(%esp),%edi;");
    asm("loc_6805688: mov (%edi),%ecx;");
    asm("loc_680568A: mov 4(%edi),%eax;");
    asm("loc_680568D: lea (%eax,%eax,2),%eax;");
    asm("loc_6805690: lea (%ecx,%ecx),%edx;");
    asm("loc_6805693: cmp %edx,%eax;");
    asm("loc_6805695: movl $0xFFFFFFFF,0x1C(%esp);");
    asm("loc_680569D: jl loc_68056AA;");
    asm("loc_680569F: push %edi;");
    asm("loc_68056A0: call _sub_6805730;");
    asm("loc_68056A5: mov (%edi),%ecx;");
    asm("loc_68056A7: add $4,%esp;");
    asm("loc_68056AA: mov 0x14(%esp),%ebx;");
    asm("loc_68056AE: xor %edx,%edx;");
    asm("loc_68056B0: mov %ebx,%eax;");
    asm("loc_68056B2: div %ecx;");
    asm("loc_68056B4: mov 0x18(%esp),%ebp;");
    asm("loc_68056B8: mov %edx,%esi;");
    asm("loc_68056BA: mov 8(%edi),%edx;");
    asm("loc_68056BD: mov (%edx,%esi,4),%eax;");
    asm("loc_68056C0: test %eax,%eax;");
    asm("loc_68056C2: je loc_6805703;");
    asm("loc_68056C4: cmp $_data_680D810,%eax;");
    asm("loc_68056C9: jne loc_68056D1;");
    asm("loc_68056CB: mov %esi,0x1C(%esp);");
    asm("loc_68056CF: jmp loc_68056E0;");
    asm("loc_68056D1: cmp 0x10(%eax),%ebp;");
    asm("loc_68056D4: je loc_68056DB;");
    asm("loc_68056D6: cmp $0xFFFFFFFF,%ebp;");
    asm("loc_68056D9: jne loc_68056E0;");
    asm("loc_68056DB: cmp 0x14(%eax),%ebx;");
    asm("loc_68056DE: je loc_680571D;");
    asm("loc_68056E0: lea -2(%ecx),%eax;");
    asm("loc_68056E3: and %ebx,%eax;");
    asm("loc_68056E5: lea 1(%esi,%eax),%esi;");
    asm("loc_68056E9: cmp %ecx,%esi;");
    asm("loc_68056EB: jl loc_68056EF;");
    asm("loc_68056ED: sub %ecx,%esi;");
    asm("loc_68056EF: mov (%edx,%esi,4),%eax;");
    asm("loc_68056F2: test %eax,%eax;");
    asm("loc_68056F4: jne loc_68056C4;");
    asm("loc_68056F6: mov 0x1C(%esp),%eax;");
    asm("loc_68056FA: cmp $0xFFFFFFFF,%eax;");
    asm("loc_68056FD: je loc_6805703;");
    asm("loc_68056FF: mov %eax,%esi;");
    asm("loc_6805701: jmp loc_6805706;");
    asm("loc_6805703: incl 4(%edi);");
    asm("loc_6805706: push %ebx;");
    asm("loc_6805707: push %ebp;");
    asm("loc_6805708: push %ebx;");
    asm("loc_6805709: call _sub_6805850;");
    asm("loc_680570E: mov 8(%edi),%ecx;");
    asm("loc_6805711: mov %eax,(%ecx,%esi,4);");
    asm("loc_6805714: mov 8(%edi),%edx;");
    asm("loc_6805717: mov (%edx,%esi,4),%eax;");
    asm("loc_680571A: add $0xC,%esp;");
    asm("loc_680571D: pop %edi;");
    asm("loc_680571E: pop %esi;");
    asm("loc_680571F: pop %ebp;");
    asm("loc_6805720: pop %ebx;");
    asm("loc_6805721: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805730() // _sub_6805730
{
    __DEBUG_ASM(6805730);
    // chunk 0x6805730 _sub_6805730
    asm("loc_6805730: sub $8,%esp;");
    asm("loc_6805733: push %ebx;");
    asm("loc_6805734: push %ebp;");
    asm("loc_6805735: mov 0x14(%esp),%ebp;");
    asm("loc_6805739: push %esi;");
    asm("loc_680573A: push %edi;");
    asm("loc_680573B: push %ebp;");
    asm("loc_680573C: call _sub_6805810;");
    asm("loc_6805741: mov %eax,%esi;");
    asm("loc_6805743: lea (,%esi,4),%eax;");
    asm("loc_680574A: push %eax;");
    asm("loc_680574B: push $0;");
    asm("loc_680574D: call _sub_68065D0;");
    asm("loc_6805752: add $0xC,%esp;");
    asm("loc_6805755: test %esi,%esi;");
    asm("loc_6805757: mov %eax,%ebx;");
    asm("loc_6805759: mov %ebx,0x10(%esp);");
    asm("loc_680575D: jle loc_6805767;");
    asm("loc_680575F: mov %esi,%ecx;");
    asm("loc_6805761: xor %eax,%eax;");
    asm("loc_6805763: mov %ebx,%edi;");
    asm("loc_6805765: rep stos %eax,(%edi);");
    asm("loc_6805767: mov (%ebp),%eax;");
    asm("loc_680576A: xor %edi,%edi;");
    asm("loc_680576C: cmp %edi,%eax;");
    asm("loc_680576E: mov %edi,4(%ebp);");
    asm("loc_6805771: mov %edi,0x14(%esp);");
    asm("loc_6805775: jle loc_68057E8;");
    asm("loc_6805777: mov 8(%ebp),%eax;");
    asm("loc_680577A: mov (%eax,%edi,4),%ebx;");
    asm("loc_680577D: test %ebx,%ebx;");
    asm("loc_680577F: je loc_68057D8;");
    asm("loc_6805781: cmp $_data_680D810,%ebx;");
    asm("loc_6805787: je loc_68057D8;");
    asm("loc_6805789: mov 8(%ebx),%ecx;");
    asm("loc_680578C: xor %edx,%edx;");
    asm("loc_680578E: mov %ecx,%eax;");
    asm("loc_6805790: div %esi;");
    asm("loc_6805792: mov 0x10(%esp),%eax;");
    asm("loc_6805796: cmpl $0,(%eax,%edx,4);");
    asm("loc_680579A: lea (%eax,%edx,4),%eax;");
    asm("loc_680579D: je loc_68057CE;");
    asm("loc_680579F: lea -2(%esi),%edi;");
    asm("loc_68057A2: and %ecx,%edi;");
    asm("loc_68057A4: lea 1(%edi),%ecx;");
    asm("loc_68057A7: lea (,%ecx,4),%edi;");
    asm("loc_68057AE: add %ecx,%edx;");
    asm("loc_68057B0: add %edi,%eax;");
    asm("loc_68057B2: cmp %esi,%edx;");
    asm("loc_68057B4: jl loc_68057C5;");
    asm("loc_68057B6: lea (,%esi,4),%ebp;");
    asm("loc_68057BD: sub %esi,%edx;");
    asm("loc_68057BF: sub %ebp,%eax;");
    asm("loc_68057C1: mov 0x1C(%esp),%ebp;");
    asm("loc_68057C5: cmpl $0,(%eax);");
    asm("loc_68057C8: jne loc_68057AE;");
    asm("loc_68057CA: mov 0x14(%esp),%edi;");
    asm("loc_68057CE: mov 0x10(%esp),%ecx;");
    asm("loc_68057D2: mov %ebx,(%ecx,%edx,4);");
    asm("loc_68057D5: incl 4(%ebp);");
    asm("loc_68057D8: mov (%ebp),%eax;");
    asm("loc_68057DB: inc %edi;");
    asm("loc_68057DC: cmp %eax,%edi;");
    asm("loc_68057DE: mov %edi,0x14(%esp);");
    asm("loc_68057E2: jl loc_6805777;");
    asm("loc_68057E4: mov 0x10(%esp),%ebx;");
    asm("loc_68057E8: mov 8(%ebp),%edx;");
    asm("loc_68057EB: push $0;");
    asm("loc_68057ED: push %edx;");
    asm("loc_68057EE: call _sub_68065D0;");
    asm("loc_68057F3: add $8,%esp;");
    asm("loc_68057F6: pop %edi;");
    asm("loc_68057F7: mov %esi,(%ebp);");
    asm("loc_68057FA: pop %esi;");
    asm("loc_68057FB: mov %ebx,8(%ebp);");
    asm("loc_68057FE: pop %ebp;");
    asm("loc_68057FF: pop %ebx;");
    asm("loc_6805800: add $8,%esp;");
    asm("loc_6805803: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805810() // _sub_6805810
{
    __DEBUG_ASM(6805810);
    // chunk 0x6805810 _sub_6805810
    asm("loc_6805810: mov 4(%esp),%ecx;");
    asm("loc_6805814: mov (%ecx),%eax;");
    asm("loc_6805816: push %esi;");
    asm("loc_6805817: xor %esi,%esi;");
    asm("loc_6805819: test %eax,%eax;");
    asm("loc_680581B: jle loc_6805836;");
    asm("loc_680581D: mov 8(%ecx),%ecx;");
    asm("loc_6805820: mov %eax,%edx;");
    asm("loc_6805822: mov (%ecx),%eax;");
    asm("loc_6805824: test %eax,%eax;");
    asm("loc_6805826: je loc_6805830;");
    asm("loc_6805828: cmp $_data_680D810,%eax;");
    asm("loc_680582D: je loc_6805830;");
    asm("loc_680582F: inc %esi;");
    asm("loc_6805830: add $4,%ecx;");
    asm("loc_6805833: dec %edx;");
    asm("loc_6805834: jne loc_6805822;");
    asm("loc_6805836: lea 2(%esi,%esi),%eax;");
    asm("loc_680583A: push %eax;");
    asm("loc_680583B: call _sub_68060B0;");
    asm("loc_6805840: add $4,%esp;");
    asm("loc_6805843: pop %esi;");
    asm("loc_6805844: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805850() // _sub_6805850
{
    __DEBUG_ASM(6805850);
    // chunk 0x6805850 _sub_6805850
    asm("loc_6805850: push $0x30;");
    asm("loc_6805852: push $0;");
    asm("loc_6805854: call _sub_68065D0;");
    asm("loc_6805859: mov 0xC(%esp),%ecx;");
    asm("loc_680585D: mov %ecx,0x14(%eax);");
    asm("loc_6805860: mov 0x10(%esp),%ecx;");
    asm("loc_6805864: xor %edx,%edx;");
    asm("loc_6805866: add $8,%esp;");
    asm("loc_6805869: cmp $0xFFFFFFFF,%ecx;");
    asm("loc_680586C: sete %dl;");
    asm("loc_680586F: movl $0xFFFFFFFF,0xC(%eax);");
    asm("loc_6805876: dec %edx;");
    asm("loc_6805877: and %ecx,%edx;");
    asm("loc_6805879: mov %edx,0x10(%eax);");
    asm("loc_680587C: mov _data_680E604,%ecx;");
    asm("loc_6805882: incl 0x78(%ecx);");
    asm("loc_6805885: mov 0xC(%esp),%ecx;");
    asm("loc_6805889: movl $0,4(%eax);");
    asm("loc_6805890: mov %eax,(%eax);");
    asm("loc_6805892: mov %ecx,8(%eax);");
    asm("loc_6805895: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68058A0() // _sub_68058A0
{
    __DEBUG_ASM(68058A0);
    // chunk 0x68058A0 _sub_68058A0
    asm("loc_68058A0: mov 8(%esp),%ecx;");
    asm("loc_68058A4: test %ecx,%ecx;");
    asm("loc_68058A6: push %esi;");
    asm("loc_68058A7: mov 8(%esp),%esi;");
    asm("loc_68058AB: jne loc_68058B1;");
    asm("loc_68058AD: xor %edx,%edx;");
    asm("loc_68058AF: jmp loc_68058C2;");
    asm("loc_68058B1: xor %eax,%eax;");
    asm("loc_68058B3: mov (%esi),%al;");
    asm("loc_68058B5: push %edi;");
    asm("loc_68058B6: mov $0x1F,%edi;");
    asm("loc_68058BB: imul %ecx,%eax;");
    asm("loc_68058BE: cltd;");
    asm("loc_68058BF: idiv %edi;");
    asm("loc_68058C1: pop %edi;");
    asm("loc_68058C2: lea (%edx,%edx,2),%eax;");
    asm("loc_68058C5: mov _data_680E604,%edx;");
    asm("loc_68058CB: mov 0x60(%edx),%edx;");
    asm("loc_68058CE: lea (%edx,%eax,4),%eax;");
    asm("loc_68058D1: push %eax;");
    asm("loc_68058D2: push %ecx;");
    asm("loc_68058D3: push %esi;");
    asm("loc_68058D4: call _sub_68058E0;");
    asm("loc_68058D9: add $0xC,%esp;");
    asm("loc_68058DC: pop %esi;");
    asm("loc_68058DD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68058E0() // _sub_68058E0
{
    __DEBUG_ASM(68058E0);
    // chunk 0x68058E0 _sub_68058E0
    asm("loc_68058E0: sub $0xC,%esp;");
    asm("loc_68058E3: mov 0x14(%esp),%eax;");
    asm("loc_68058E7: mov 0x10(%esp),%ecx;");
    asm("loc_68058EB: push %ebx;");
    asm("loc_68058EC: push %ebp;");
    asm("loc_68058ED: push %esi;");
    asm("loc_68058EE: push %edi;");
    asm("loc_68058EF: push %eax;");
    asm("loc_68058F0: push %ecx;");
    asm("loc_68058F1: call _sub_68059C0;");
    asm("loc_68058F6: mov 0x30(%esp),%edi;");
    asm("loc_68058FA: mov (%edi),%ebp;");
    asm("loc_68058FC: mov %eax,%esi;");
    asm("loc_68058FE: mov 4(%edi),%eax;");
    asm("loc_6805901: lea (%eax,%eax,2),%edx;");
    asm("loc_6805904: lea (%ebp,%ebp),%eax;");
    asm("loc_6805908: add $8,%esp;");
    asm("loc_680590B: cmp %eax,%edx;");
    asm("loc_680590D: mov %esi,0x14(%esp);");
    asm("loc_6805911: movl $0xFFFFFFFF,0x10(%esp);");
    asm("loc_6805919: jl loc_6805926;");
    asm("loc_680591B: push %edi;");
    asm("loc_680591C: call _sub_6805730;");
    asm("loc_6805921: mov (%edi),%ebp;");
    asm("loc_6805923: add $4,%esp;");
    asm("loc_6805926: xor %edx,%edx;");
    asm("loc_6805928: mov %esi,%eax;");
    asm("loc_680592A: div %ebp;");
    asm("loc_680592C: mov 8(%edi),%ecx;");
    asm("loc_680592F: mov %ecx,0x18(%esp);");
    asm("loc_6805933: mov %edx,%ebx;");
    asm("loc_6805935: mov (%ecx,%ebx,4),%eax;");
    asm("loc_6805938: test %eax,%eax;");
    asm("loc_680593A: je loc_6805990;");
    asm("loc_680593C: cmp $_data_680D810,%eax;");
    asm("loc_6805941: jne loc_6805949;");
    asm("loc_6805943: mov %ebx,0x10(%esp);");
    asm("loc_6805947: jmp loc_680596D;");
    asm("loc_6805949: mov 0x24(%esp),%edx;");
    asm("loc_680594D: cmp %edx,0x20(%eax);");
    asm("loc_6805950: jne loc_680596D;");
    asm("loc_6805952: mov 0x20(%esp),%esi;");
    asm("loc_6805956: mov %edx,%ecx;");
    asm("loc_6805958: lea 0x28(%eax),%edi;");
    asm("loc_680595B: xor %edx,%edx;");
    asm("loc_680595D: repe cmpsb (%edi),(%esi);");
    asm("loc_680595F: je loc_68059B2;");
    asm("loc_6805961: mov 0x28(%esp),%edi;");
    asm("loc_6805965: mov 0x14(%esp),%esi;");
    asm("loc_6805969: mov 0x18(%esp),%ecx;");
    asm("loc_680596D: lea -2(%ebp),%eax;");
    asm("loc_6805970: and %esi,%eax;");
    asm("loc_6805972: lea 1(%ebx,%eax),%ebx;");
    asm("loc_6805976: cmp %ebp,%ebx;");
    asm("loc_6805978: jl loc_680597C;");
    asm("loc_680597A: sub %ebp,%ebx;");
    asm("loc_680597C: mov (%ecx,%ebx,4),%eax;");
    asm("loc_680597F: test %eax,%eax;");
    asm("loc_6805981: jne loc_680593C;");
    asm("loc_6805983: mov 0x10(%esp),%eax;");
    asm("loc_6805987: cmp $0xFFFFFFFF,%eax;");
    asm("loc_680598A: je loc_6805990;");
    asm("loc_680598C: mov %eax,%ebx;");
    asm("loc_680598E: jmp loc_6805993;");
    asm("loc_6805990: incl 4(%edi);");
    asm("loc_6805993: mov 0x24(%esp),%ecx;");
    asm("loc_6805997: mov 0x20(%esp),%edx;");
    asm("loc_680599B: push %esi;");
    asm("loc_680599C: push %ecx;");
    asm("loc_680599D: push %edx;");
    asm("loc_680599E: call _sub_6805A00;");
    asm("loc_68059A3: mov 8(%edi),%ecx;");
    asm("loc_68059A6: mov %eax,(%ecx,%ebx,4);");
    asm("loc_68059A9: mov 8(%edi),%edx;");
    asm("loc_68059AC: mov (%edx,%ebx,4),%eax;");
    asm("loc_68059AF: add $0xC,%esp;");
    asm("loc_68059B2: pop %edi;");
    asm("loc_68059B3: pop %esi;");
    asm("loc_68059B4: pop %ebp;");
    asm("loc_68059B5: pop %ebx;");
    asm("loc_68059B6: add $0xC,%esp;");
    asm("loc_68059B9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68059C0() // _sub_68059C0
{
    __DEBUG_ASM(68059C0);
    // chunk 0x68059C0 _sub_68059C0
    asm("loc_68059C0: mov 8(%esp),%ecx;");
    asm("loc_68059C4: xor %eax,%eax;");
    asm("loc_68059C6: mov %ecx,%edx;");
    asm("loc_68059C8: dec %ecx;");
    asm("loc_68059C9: test %edx,%edx;");
    asm("loc_68059CB: je loc_68059F2;");
    asm("loc_68059CD: push %ebx;");
    asm("loc_68059CE: push %esi;");
    asm("loc_68059CF: lea 1(%ecx),%esi;");
    asm("loc_68059D2: mov 0xC(%esp),%ecx;");
    asm("loc_68059D6: push %edi;");
    asm("loc_68059D7: xor %ebx,%ebx;");
    asm("loc_68059D9: mov (%ecx),%bl;");
    asm("loc_68059DB: mov %eax,%edx;");
    asm("loc_68059DD: shl $5,%edx;");
    asm("loc_68059E0: mov %eax,%edi;");
    asm("loc_68059E2: shr $2,%edi;");
    asm("loc_68059E5: add %edi,%edx;");
    asm("loc_68059E7: add %ebx,%edx;");
    asm("loc_68059E9: xor %edx,%eax;");
    asm("loc_68059EB: inc %ecx;");
    asm("loc_68059EC: dec %esi;");
    asm("loc_68059ED: jne loc_68059D7;");
    asm("loc_68059EF: pop %edi;");
    asm("loc_68059F0: pop %esi;");
    asm("loc_68059F1: pop %ebx;");
    asm("loc_68059F2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805A00() // _sub_6805A00
{
    __DEBUG_ASM(6805A00);
    // chunk 0x6805A00 _sub_6805A00
    asm("loc_6805A00: push %ebx;");
    asm("loc_6805A01: mov 0xC(%esp),%ebx;");
    asm("loc_6805A05: push %ebp;");
    asm("loc_6805A06: push %esi;");
    asm("loc_6805A07: push %edi;");
    asm("loc_6805A08: lea 0x30(%ebx),%eax;");
    asm("loc_6805A0B: push %eax;");
    asm("loc_6805A0C: push $0;");
    asm("loc_6805A0E: call _sub_68065D0;");
    asm("loc_6805A13: mov 0x1C(%esp),%esi;");
    asm("loc_6805A17: mov %eax,%ebp;");
    asm("loc_6805A19: mov %ebx,%ecx;");
    asm("loc_6805A1B: mov %ecx,%edx;");
    asm("loc_6805A1D: shr $2,%ecx;");
    asm("loc_6805A20: lea 0x28(%ebp),%edi;");
    asm("loc_6805A23: rep movsl (%esi),(%edi);");
    asm("loc_6805A25: mov %edx,%ecx;");
    asm("loc_6805A27: mov %ebx,%eax;");
    asm("loc_6805A29: cltd;");
    asm("loc_6805A2A: and $3,%ecx;");
    asm("loc_6805A2D: rep movsb (%esi),(%edi);");
    asm("loc_6805A2F: movb $0,0x28(%ebx,%ebp);");
    asm("loc_6805A34: and $0x3F,%edx;");
    asm("loc_6805A37: add %edx,%eax;");
    asm("loc_6805A39: xor %esi,%esi;");
    asm("loc_6805A3B: mov %ebx,0x20(%ebp);");
    asm("loc_6805A3E: mov %esi,0xC(%ebp);");
    asm("loc_6805A41: movl $0xFFFFFFFA,0x10(%ebp);");
    asm("loc_6805A48: mov _data_680E604,%ecx;");
    asm("loc_6805A4E: mov 0x78(%ecx),%edx;");
    asm("loc_6805A51: add $8,%esp;");
    asm("loc_6805A54: sar $6,%eax;");
    asm("loc_6805A57: inc %eax;");
    asm("loc_6805A58: add %eax,%edx;");
    asm("loc_6805A5A: mov 0x1C(%esp),%eax;");
    asm("loc_6805A5E: mov %edx,0x78(%ecx);");
    asm("loc_6805A61: pop %edi;");
    asm("loc_6805A62: mov %esi,4(%ebp);");
    asm("loc_6805A65: mov %eax,8(%ebp);");
    asm("loc_6805A68: pop %esi;");
    asm("loc_6805A69: mov %ebp,(%ebp);");
    asm("loc_6805A6C: mov %ebp,%eax;");
    asm("loc_6805A6E: pop %ebp;");
    asm("loc_6805A6F: pop %ebx;");
    asm("loc_6805A70: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805A80() // _sub_6805A80
{
    __DEBUG_ASM(6805A80);
    // chunk 0x6805A80 _sub_6805A80
    asm("loc_6805A80: mov 4(%esp),%edx;");
    asm("loc_6805A84: push %edi;");
    asm("loc_6805A85: or $0xFFFFFFFF,%ecx;");
    asm("loc_6805A88: xor %eax,%eax;");
    asm("loc_6805A8A: mov %edx,%edi;");
    asm("loc_6805A8C: repne scas (%edi),%al;");
    asm("loc_6805A8E: not %ecx;");
    asm("loc_6805A90: dec %ecx;");
    asm("loc_6805A91: push %ecx;");
    asm("loc_6805A92: push %edx;");
    asm("loc_6805A93: call _sub_68058A0;");
    asm("loc_6805A98: add $8,%esp;");
    asm("loc_6805A9B: pop %edi;");
    asm("loc_6805A9C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805AA0() // _sub_6805AA0
{
    __DEBUG_ASM(6805AA0);
    // chunk 0x6805AA0 _sub_6805AA0
    asm("loc_6805AA0: mov 4(%esp),%eax;");
    asm("loc_6805AA4: push %eax;");
    asm("loc_6805AA5: call _sub_6805A80;");
    asm("loc_6805AAA: mov 4(%eax),%ecx;");
    asm("loc_6805AAD: add $4,%esp;");
    asm("loc_6805AB0: test %ecx,%ecx;");
    asm("loc_6805AB2: jne loc_6805ABB;");
    asm("loc_6805AB4: movl $2,4(%eax);");
    asm("loc_6805ABB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805AC0() // _sub_6805AC0
{
    __DEBUG_ASM(6805AC0);
    // chunk 0x6805AC0 _sub_6805AC0
    asm("loc_6805AC0: mov 4(%esp),%ecx;");
    asm("loc_6805AC4: test %ecx,%ecx;");
    asm("loc_6805AC6: je loc_6805B07;");
    asm("loc_6805AC8: push %ebx;");
    asm("loc_6805AC9: push %esi;");
    asm("loc_6805ACA: cmpl $0xFFFFFFFF,0xC(%ecx);");
    asm("loc_6805ACE: mov (%ecx),%esi;");
    asm("loc_6805AD0: jne loc_6805AD9;");
    asm("loc_6805AD2: mov $1,%eax;");
    asm("loc_6805AD7: jmp loc_6805AE6;");
    asm("loc_6805AD9: mov 0x20(%ecx),%eax;");
    asm("loc_6805ADC: cltd;");
    asm("loc_6805ADD: and $0x3F,%edx;");
    asm("loc_6805AE0: add %edx,%eax;");
    asm("loc_6805AE2: sar $6,%eax;");
    asm("loc_6805AE5: inc %eax;");
    asm("loc_6805AE6: mov _data_680E604,%edx;");
    asm("loc_6805AEC: mov 0x78(%edx),%ebx;");
    asm("loc_6805AEF: sub %eax,%ebx;");
    asm("loc_6805AF1: push $0;");
    asm("loc_6805AF3: push %ecx;");
    asm("loc_6805AF4: mov %ebx,0x78(%edx);");
    asm("loc_6805AF7: call _sub_68065D0;");
    asm("loc_6805AFC: add $8,%esp;");
    asm("loc_6805AFF: test %esi,%esi;");
    asm("loc_6805B01: mov %esi,%ecx;");
    asm("loc_6805B03: jne loc_6805ACA;");
    asm("loc_6805B05: pop %esi;");
    asm("loc_6805B06: pop %ebx;");
    asm("loc_6805B07: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805B10() // _sub_6805B10
{
    __DEBUG_ASM(6805B10);
    // chunk 0x6805B10 _sub_6805B10
    asm("loc_6805B10: mov _data_680E604,%eax;");
    asm("loc_6805B15: push %ebx;");
    asm("loc_6805B16: push %ebp;");
    asm("loc_6805B17: push %esi;");
    asm("loc_6805B18: push %edi;");
    asm("loc_6805B19: add $0x58,%eax;");
    asm("loc_6805B1C: push %eax;");
    asm("loc_6805B1D: xor %ebp,%ebp;");
    asm("loc_6805B1F: xor %edi,%edi;");
    asm("loc_6805B21: call _sub_6805B90;");
    asm("loc_6805B26: add $4,%esp;");
    asm("loc_6805B29: xor %ebx,%ebx;");
    asm("loc_6805B2B: mov _data_680E604,%ecx;");
    asm("loc_6805B31: mov 0x60(%ecx),%ecx;");
    asm("loc_6805B34: mov (%ecx,%ebx),%eax;");
    asm("loc_6805B37: add %ebx,%ecx;");
    asm("loc_6805B39: xor %edx,%edx;");
    asm("loc_6805B3B: cmp %ebp,%eax;");
    asm("loc_6805B3D: jle loc_6805B6F;");
    asm("loc_6805B3F: mov 8(%ecx),%eax;");
    asm("loc_6805B42: mov (%eax,%edx,4),%eax;");
    asm("loc_6805B45: cmp %ebp,%eax;");
    asm("loc_6805B47: je loc_6805B68;");
    asm("loc_6805B49: mov 4(%eax),%esi;");
    asm("loc_6805B4C: cmp $1,%esi;");
    asm("loc_6805B4F: jne loc_6805B56;");
    asm("loc_6805B51: mov %ebp,4(%eax);");
    asm("loc_6805B54: jmp loc_6805B68;");
    asm("loc_6805B56: cmp %ebp,%esi;");
    asm("loc_6805B58: jne loc_6805B68;");
    asm("loc_6805B5A: mov %edi,(%eax);");
    asm("loc_6805B5C: mov %eax,%edi;");
    asm("loc_6805B5E: mov 8(%ecx),%eax;");
    asm("loc_6805B61: movl $_data_680D810,(%eax,%edx,4);");
    asm("loc_6805B68: mov (%ecx),%eax;");
    asm("loc_6805B6A: inc %edx;");
    asm("loc_6805B6B: cmp %eax,%edx;");
    asm("loc_6805B6D: jl loc_6805B3F;");
    asm("loc_6805B6F: add $0xC,%ebx;");
    asm("loc_6805B72: cmp $0x2E8,%ebx;");
    asm("loc_6805B78: jl loc_6805B2B;");
    asm("loc_6805B7A: mov %edi,%eax;");
    asm("loc_6805B7C: pop %edi;");
    asm("loc_6805B7D: pop %esi;");
    asm("loc_6805B7E: pop %ebp;");
    asm("loc_6805B7F: pop %ebx;");
    asm("loc_6805B80: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805B90() // _sub_6805B90
{
    __DEBUG_ASM(6805B90);
    // chunk 0x6805B90 _sub_6805B90
    asm("loc_6805B90: mov 4(%esp),%ecx;");
    asm("loc_6805B94: test %ecx,%ecx;");
    asm("loc_6805B96: je loc_6805BB3;");
    asm("loc_6805B98: mov (%ecx),%eax;");
    asm("loc_6805B9A: test %eax,%eax;");
    asm("loc_6805B9C: je loc_6805BAD;");
    asm("loc_6805B9E: mov 4(%eax),%edx;");
    asm("loc_6805BA1: test %edx,%edx;");
    asm("loc_6805BA3: jne loc_6805BAD;");
    asm("loc_6805BA5: mov (%eax),%eax;");
    asm("loc_6805BA7: test %eax,%eax;");
    asm("loc_6805BA9: mov %eax,(%ecx);");
    asm("loc_6805BAB: jne loc_6805B9E;");
    asm("loc_6805BAD: test %eax,%eax;");
    asm("loc_6805BAF: mov %eax,%ecx;");
    asm("loc_6805BB1: jne loc_6805B98;");
    asm("loc_6805BB3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805BC0() // _sub_6805BC0
{
    __DEBUG_ASM(6805BC0);
    // chunk 0x6805BC0 _sub_6805BC0
    asm("loc_6805BC0: mov _data_680E604,%ecx;");
    asm("loc_6805BC6: push %esi;");
    asm("loc_6805BC7: xor %eax,%eax;");
    asm("loc_6805BC9: push %edi;");
    asm("loc_6805BCA: mov %eax,0x58(%ecx);");
    asm("loc_6805BCD: mov $0x174,%edi;");
    asm("loc_6805BD2: mov _data_680E604,%edx;");
    asm("loc_6805BD8: mov 0x60(%edx),%edx;");
    asm("loc_6805BDB: mov (%edx,%edi),%ecx;");
    asm("loc_6805BDE: add %edi,%edx;");
    asm("loc_6805BE0: xor %esi,%esi;");
    asm("loc_6805BE2: test %ecx,%ecx;");
    asm("loc_6805BE4: jle loc_6805C0D;");
    asm("loc_6805BE6: mov 8(%edx),%ecx;");
    asm("loc_6805BE9: mov (%ecx,%esi,4),%ecx;");
    asm("loc_6805BEC: test %ecx,%ecx;");
    asm("loc_6805BEE: je loc_6805C06;");
    asm("loc_6805BF0: cmp $_data_680D810,%ecx;");
    asm("loc_6805BF6: je loc_6805C06;");
    asm("loc_6805BF8: mov %eax,(%ecx);");
    asm("loc_6805BFA: mov %ecx,%eax;");
    asm("loc_6805BFC: mov 8(%edx),%ecx;");
    asm("loc_6805BFF: movl $_data_680D810,(%ecx,%esi,4);");
    asm("loc_6805C06: mov (%edx),%ecx;");
    asm("loc_6805C08: inc %esi;");
    asm("loc_6805C09: cmp %ecx,%esi;");
    asm("loc_6805C0B: jl loc_6805BE6;");
    asm("loc_6805C0D: add $0xC,%edi;");
    asm("loc_6805C10: cmp $0x2E8,%edi;");
    asm("loc_6805C16: jl loc_6805BD2;");
    asm("loc_6805C18: pop %edi;");
    asm("loc_6805C19: pop %esi;");
    asm("loc_6805C1A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805C20() // _sub_6805C20
{
    __DEBUG_ASM(6805C20);
    // chunk 0x6805C20 _sub_6805C20
    asm("loc_6805C20: push %ebx;");
    asm("loc_6805C21: push %esi;");
    asm("loc_6805C22: push %edi;");
    asm("loc_6805C23: xor %ebx,%ebx;");
    asm("loc_6805C25: mov _data_680E604,%eax;");
    asm("loc_6805C2A: mov 0x60(%eax),%esi;");
    asm("loc_6805C2D: mov (%esi,%ebx),%eax;");
    asm("loc_6805C30: add %ebx,%esi;");
    asm("loc_6805C32: xor %edi,%edi;");
    asm("loc_6805C34: test %eax,%eax;");
    asm("loc_6805C36: jle loc_6805C57;");
    asm("loc_6805C38: mov 8(%esi),%ecx;");
    asm("loc_6805C3B: mov (%ecx,%edi,4),%eax;");
    asm("loc_6805C3E: cmp $_data_680D810,%eax;");
    asm("loc_6805C43: je loc_6805C50;");
    asm("loc_6805C45: push $0;");
    asm("loc_6805C47: push %eax;");
    asm("loc_6805C48: call _sub_68065D0;");
    asm("loc_6805C4D: add $8,%esp;");
    asm("loc_6805C50: mov (%esi),%eax;");
    asm("loc_6805C52: inc %edi;");
    asm("loc_6805C53: cmp %eax,%edi;");
    asm("loc_6805C55: jl loc_6805C38;");
    asm("loc_6805C57: mov 8(%esi),%edx;");
    asm("loc_6805C5A: push $0;");
    asm("loc_6805C5C: push %edx;");
    asm("loc_6805C5D: call _sub_68065D0;");
    asm("loc_6805C62: add $0xC,%ebx;");
    asm("loc_6805C65: add $8,%esp;");
    asm("loc_6805C68: cmp $0x2E8,%ebx;");
    asm("loc_6805C6E: jl loc_6805C25;");
    asm("loc_6805C70: mov _data_680E604,%eax;");
    asm("loc_6805C75: mov 0x60(%eax),%ecx;");
    asm("loc_6805C78: push $0;");
    asm("loc_6805C7A: push %ecx;");
    asm("loc_6805C7B: call _sub_68065D0;");
    asm("loc_6805C80: add $8,%esp;");
    asm("loc_6805C83: pop %edi;");
    asm("loc_6805C84: pop %esi;");
    asm("loc_6805C85: pop %ebx;");
    asm("loc_6805C86: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805C90() // _sub_6805C90
{
    __DEBUG_ASM(6805C90);
    // chunk 0x6805C90 _sub_6805C90
    asm("loc_6805C90: mov 4(%esp),%eax;");
    asm("loc_6805C94: mov 8(%esp),%edx;");
    asm("loc_6805C98: push %esi;");
    asm("loc_6805C99: mov (%edx),%esi;");
    asm("loc_6805C9B: lea 0x10(%eax),%ecx;");
    asm("loc_6805C9E: mov %esi,(%ecx);");
    asm("loc_6805CA0: mov 4(%edx),%esi;");
    asm("loc_6805CA3: mov %esi,4(%ecx);");
    asm("loc_6805CA6: mov 8(%edx),%esi;");
    asm("loc_6805CA9: mov %esi,8(%ecx);");
    asm("loc_6805CAC: mov 0xC(%edx),%edx;");
    asm("loc_6805CAF: mov %edx,0xC(%ecx);");
    asm("loc_6805CB2: cmp %eax,(%eax);");
    asm("loc_6805CB4: pop %esi;");
    asm("loc_6805CB5: jne loc_6805CCB;");
    asm("loc_6805CB7: mov _data_680E604,%ecx;");
    asm("loc_6805CBD: mov 0x58(%ecx),%edx;");
    asm("loc_6805CC0: mov %edx,(%eax);");
    asm("loc_6805CC2: mov _data_680E604,%ecx;");
    asm("loc_6805CC8: mov %eax,0x58(%ecx);");
    asm("loc_6805CCB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805CD0() // _sub_6805CD0
{
    __DEBUG_ASM(6805CD0);
    // chunk 0x6805CD0 _sub_6805CD0
    asm("loc_6805CD0: mov _data_680E604,%eax;");
    asm("loc_6805CD5: push %esi;");
    asm("loc_6805CD6: mov 0x58(%eax),%esi;");
    asm("loc_6805CD9: test %esi,%esi;");
    asm("loc_6805CDB: push %edi;");
    asm("loc_6805CDC: je loc_6805CF5;");
    asm("loc_6805CDE: mov 0xC(%esp),%edi;");
    asm("loc_6805CE2: lea 0x10(%esi),%ecx;");
    asm("loc_6805CE5: push %ecx;");
    asm("loc_6805CE6: call *%edi;");
    asm("loc_6805CE8: add $4,%esp;");
    asm("loc_6805CEB: test %eax,%eax;");
    asm("loc_6805CED: jne loc_6805CFA;");
    asm("loc_6805CEF: mov (%esi),%esi;");
    asm("loc_6805CF1: test %esi,%esi;");
    asm("loc_6805CF3: jne loc_6805CE2;");
    asm("loc_6805CF5: pop %edi;");
    asm("loc_6805CF6: xor %eax,%eax;");
    asm("loc_6805CF8: pop %esi;");
    asm("loc_6805CF9: ret;");
    asm("loc_6805CFA: pop %edi;");
    asm("loc_6805CFB: lea 0x28(%esi),%eax;");
    asm("loc_6805CFE: pop %esi;");
    asm("loc_6805CFF: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805D00() // _sub_6805D00
{
    __DEBUG_ASM(6805D00);
    // chunk 0x6805D00 _sub_6805D00
    asm("loc_6805D00: mov 4(%esp),%eax;");
    asm("loc_6805D04: push %eax;");
    asm("loc_6805D05: call _sub_6805A80;");
    asm("loc_6805D0A: mov 0x10(%eax),%edx;");
    asm("loc_6805D0D: xor %ecx,%ecx;");
    asm("loc_6805D0F: add $4,%esp;");
    asm("loc_6805D12: cmp $0xFFFFFFFA,%edx;");
    asm("loc_6805D15: setne %cl;");
    asm("loc_6805D18: mov %ecx,%eax;");
    asm("loc_6805D1A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805D20() // _sub_6805D20
{
    __DEBUG_ASM(6805D20);
    // chunk 0x6805D20 _sub_6805D20
    asm("loc_6805D20: mov 8(%esp),%edx;");
    asm("loc_6805D24: mov (%edx),%ecx;");
    asm("loc_6805D26: push %ebx;");
    asm("loc_6805D27: push %ebp;");
    asm("loc_6805D28: push %esi;");
    asm("loc_6805D29: xor %ebp,%ebp;");
    asm("loc_6805D2B: test %ecx,%ecx;");
    asm("loc_6805D2D: push %edi;");
    asm("loc_6805D2E: je loc_6805D70;");
    asm("loc_6805D30: mov 0x14(%esp),%eax;");
    asm("loc_6805D34: mov %edx,%edi;");
    asm("loc_6805D36: mov %eax,%esi;");
    asm("loc_6805D38: mov (%ecx),%bl;");
    asm("loc_6805D3A: mov %bl,%dl;");
    asm("loc_6805D3C: cmp (%esi),%bl;");
    asm("loc_6805D3E: jne loc_6805D5C;");
    asm("loc_6805D40: test %dl,%dl;");
    asm("loc_6805D42: je loc_6805D58;");
    asm("loc_6805D44: mov 1(%ecx),%bl;");
    asm("loc_6805D47: mov %bl,%dl;");
    asm("loc_6805D49: cmp 1(%esi),%bl;");
    asm("loc_6805D4C: jne loc_6805D5C;");
    asm("loc_6805D4E: add $2,%ecx;");
    asm("loc_6805D51: add $2,%esi;");
    asm("loc_6805D54: test %dl,%dl;");
    asm("loc_6805D56: jne loc_6805D38;");
    asm("loc_6805D58: xor %ecx,%ecx;");
    asm("loc_6805D5A: jmp loc_6805D61;");
    asm("loc_6805D5C: sbb %ecx,%ecx;");
    asm("loc_6805D5E: sbb $0xFFFFFFFF,%ecx;");
    asm("loc_6805D61: test %ecx,%ecx;");
    asm("loc_6805D63: je loc_6805D78;");
    asm("loc_6805D65: mov 4(%edi),%ecx;");
    asm("loc_6805D68: add $4,%edi;");
    asm("loc_6805D6B: inc %ebp;");
    asm("loc_6805D6C: test %ecx,%ecx;");
    asm("loc_6805D6E: jne loc_6805D36;");
    asm("loc_6805D70: pop %edi;");
    asm("loc_6805D71: pop %esi;");
    asm("loc_6805D72: pop %ebp;");
    asm("loc_6805D73: or $0xFFFFFFFF,%eax;");
    asm("loc_6805D76: pop %ebx;");
    asm("loc_6805D77: ret;");
    asm("loc_6805D78: pop %edi;");
    asm("loc_6805D79: pop %esi;");
    asm("loc_6805D7A: mov %ebp,%eax;");
    asm("loc_6805D7C: pop %ebp;");
    asm("loc_6805D7D: pop %ebx;");
    asm("loc_6805D7E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805D80() // _sub_6805D80
{
    __DEBUG_ASM(6805D80);
    // chunk 0x6805D80 _sub_6805D80
    asm("loc_6805D80: push %ecx;");
    asm("loc_6805D81: push %esi;");
    asm("loc_6805D82: push $0;");
    asm("loc_6805D84: call _sub_68026E0;");
    asm("loc_6805D89: mov %eax,%esi;");
    asm("loc_6805D8B: lea 8(%esp),%eax;");
    asm("loc_6805D8F: push %eax;");
    asm("loc_6805D90: push %esi;");
    asm("loc_6805D91: call _sub_6802760;");
    asm("loc_6805D96: push %esi;");
    asm("loc_6805D97: call _sub_6802730;");
    asm("loc_6805D9C: mov 0x1C(%esp),%ecx;");
    asm("loc_6805DA0: sub %eax,%ecx;");
    asm("loc_6805DA2: mov 0x14(%esp),%eax;");
    asm("loc_6805DA6: add $0x10,%esp;");
    asm("loc_6805DA9: test %eax,%eax;");
    asm("loc_6805DAB: pop %esi;");
    asm("loc_6805DAC: jne loc_6805DB7;");
    asm("loc_6805DAE: mov $_data_680D4F0,%eax;");
    asm("loc_6805DB3: mov %eax,(%esp);");
    asm("loc_6805DB7: mov 0xC(%esp),%edx;");
    asm("loc_6805DBB: test %edx,%edx;");
    asm("loc_6805DBD: jne loc_6805DD0;");
    asm("loc_6805DBF: push %eax;");
    asm("loc_6805DC0: push %ecx;");
    asm("loc_6805DC1: push $_data_680D870;");
    asm("loc_6805DC6: call _sub_6805FB0;");
    asm("loc_6805DCB: add $0xC,%esp;");
    asm("loc_6805DCE: pop %ecx;");
    asm("loc_6805DCF: ret;");
    asm("loc_6805DD0: push %edx;");
    asm("loc_6805DD1: push %eax;");
    asm("loc_6805DD2: push %ecx;");
    asm("loc_6805DD3: push $_data_680D840;");
    asm("loc_6805DD8: call _sub_6805FB0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805DF0() // _sub_6805DF0
{
    __DEBUG_ASM(6805DF0);
    // chunk 0x6805DF0 _sub_6805DF0
    asm("loc_6805DF0: push %esi;");
    asm("loc_6805DF1: push %edi;");
    asm("loc_6805DF2: mov 0xC(%esp),%edi;");
    asm("loc_6805DF6: push %edi;");
    asm("loc_6805DF7: call _sub_6801CF0;");
    asm("loc_6805DFC: mov %eax,%esi;");
    asm("loc_6805DFE: push %esi;");
    asm("loc_6805DFF: call _sub_68020B0;");
    asm("loc_6805E04: add $8,%esp;");
    asm("loc_6805E07: test %eax,%eax;");
    asm("loc_6805E09: jne loc_6805E19;");
    asm("loc_6805E0B: push $_data_680D898;");
    asm("loc_6805E10: push %edi;");
    asm("loc_6805E11: call _sub_6805D80;");
    asm("loc_6805E16: add $8,%esp;");
    asm("loc_6805E19: mov 0x10(%esp),%edi;");
    asm("loc_6805E1D: test %edi,%edi;");
    asm("loc_6805E1F: je loc_6805E2C;");
    asm("loc_6805E21: push %esi;");
    asm("loc_6805E22: call _sub_6802190;");
    asm("loc_6805E27: add $4,%esp;");
    asm("loc_6805E2A: mov %eax,(%edi);");
    asm("loc_6805E2C: push %esi;");
    asm("loc_6805E2D: call _sub_6802140;");
    asm("loc_6805E32: add $4,%esp;");
    asm("loc_6805E35: pop %edi;");
    asm("loc_6805E36: pop %esi;");
    asm("loc_6805E37: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805E40() // _sub_6805E40
{
    __DEBUG_ASM(6805E40);
    // chunk 0x6805E40 _sub_6805E40
    asm("loc_6805E40: push %esi;");
    asm("loc_6805E41: mov 8(%esp),%esi;");
    asm("loc_6805E45: push %esi;");
    asm("loc_6805E46: call _sub_6801CF0;");
    asm("loc_6805E4B: add $4,%esp;");
    asm("loc_6805E4E: test %eax,%eax;");
    asm("loc_6805E50: jne loc_6805E58;");
    asm("loc_6805E52: mov 0xC(%esp),%eax;");
    asm("loc_6805E56: pop %esi;");
    asm("loc_6805E57: ret;");
    asm("loc_6805E58: mov 0x10(%esp),%eax;");
    asm("loc_6805E5C: push %eax;");
    asm("loc_6805E5D: push %esi;");
    asm("loc_6805E5E: call _sub_6805DF0;");
    asm("loc_6805E63: add $8,%esp;");
    asm("loc_6805E66: pop %esi;");
    asm("loc_6805E67: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805E70() // _sub_6805E70
{
    __DEBUG_ASM(6805E70);
    // chunk 0x6805E70 _sub_6805E70
    asm("loc_6805E70: push %esi;");
    asm("loc_6805E71: push %edi;");
    asm("loc_6805E72: mov 0xC(%esp),%edi;");
    asm("loc_6805E76: push %edi;");
    asm("loc_6805E77: call _sub_6801CF0;");
    asm("loc_6805E7C: mov %eax,%esi;");
    asm("loc_6805E7E: push %esi;");
    asm("loc_6805E7F: call _sub_6802070;");
    asm("loc_6805E84: add $8,%esp;");
    asm("loc_6805E87: test %eax,%eax;");
    asm("loc_6805E89: jne loc_6805E99;");
    asm("loc_6805E8B: push $_data_680D8A8;");
    asm("loc_6805E90: push %edi;");
    asm("loc_6805E91: call _sub_6805D80;");
    asm("loc_6805E96: add $8,%esp;");
    asm("loc_6805E99: push %esi;");
    asm("loc_6805E9A: call _sub_68020F0;");
    asm("loc_6805E9F: add $4,%esp;");
    asm("loc_6805EA2: pop %edi;");
    asm("loc_6805EA3: pop %esi;");
    asm("loc_6805EA4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805EB0() // _sub_6805EB0
{
    __DEBUG_ASM(6805EB0);
    // chunk 0x6805EB0 _sub_6805EB0
    asm("loc_6805EB0: push %esi;");
    asm("loc_6805EB1: mov 8(%esp),%esi;");
    asm("loc_6805EB5: push %esi;");
    asm("loc_6805EB6: call _sub_6801CF0;");
    asm("loc_6805EBB: add $4,%esp;");
    asm("loc_6805EBE: test %eax,%eax;");
    asm("loc_6805EC0: jne loc_6805EC8;");
    asm("loc_6805EC2: fldl 0xC(%esp);");
    asm("loc_6805EC6: pop %esi;");
    asm("loc_6805EC7: ret;");
    asm("loc_6805EC8: push %esi;");
    asm("loc_6805EC9: call _sub_6805E70;");
    asm("loc_6805ECE: add $4,%esp;");
    asm("loc_6805ED1: pop %esi;");
    asm("loc_6805ED2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805EE0() // _sub_6805EE0
{
    __DEBUG_ASM(6805EE0);
    // chunk 0x6805EE0 _sub_6805EE0
    asm("loc_6805EE0: push %esi;");
    asm("loc_6805EE1: push %edi;");
    asm("loc_6805EE2: mov 0xC(%esp),%edi;");
    asm("loc_6805EE6: push %edi;");
    asm("loc_6805EE7: call _sub_6801CF0;");
    asm("loc_6805EEC: mov %eax,%esi;");
    asm("loc_6805EEE: push %esi;");
    asm("loc_6805EEF: call _sub_6802040;");
    asm("loc_6805EF4: add $8,%esp;");
    asm("loc_6805EF7: test %eax,%eax;");
    asm("loc_6805EF9: jne loc_6805F09;");
    asm("loc_6805EFB: push $_data_680D8B8;");
    asm("loc_6805F00: push %edi;");
    asm("loc_6805F01: call _sub_6805D80;");
    asm("loc_6805F06: add $8,%esp;");
    asm("loc_6805F09: pop %edi;");
    asm("loc_6805F0A: mov %esi,%eax;");
    asm("loc_6805F0C: pop %esi;");
    asm("loc_6805F0D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805F10() // _sub_6805F10
{
    __DEBUG_ASM(6805F10);
    // chunk 0x6805F10 _sub_6805F10
    asm("loc_6805F10: push %esi;");
    asm("loc_6805F11: push %edi;");
    asm("loc_6805F12: mov 0xC(%esp),%edi;");
    asm("loc_6805F16: push %edi;");
    asm("loc_6805F17: call _sub_6801CF0;");
    asm("loc_6805F1C: mov %eax,%esi;");
    asm("loc_6805F1E: push %esi;");
    asm("loc_6805F1F: call _sub_68020D0;");
    asm("loc_6805F24: add $8,%esp;");
    asm("loc_6805F27: test %eax,%eax;");
    asm("loc_6805F29: jne loc_6805F39;");
    asm("loc_6805F2B: push $_data_680D8C8;");
    asm("loc_6805F30: push %edi;");
    asm("loc_6805F31: call _sub_6805D80;");
    asm("loc_6805F36: add $8,%esp;");
    asm("loc_6805F39: pop %edi;");
    asm("loc_6805F3A: mov %esi,%eax;");
    asm("loc_6805F3C: pop %esi;");
    asm("loc_6805F3D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805F40() // _sub_6805F40
{
    __DEBUG_ASM(6805F40);
    // chunk 0x6805F40 _sub_6805F40
    asm("loc_6805F40: push %esi;");
    asm("loc_6805F41: push %edi;");
    asm("loc_6805F42: mov 0xC(%esp),%edi;");
    asm("loc_6805F46: push %edi;");
    asm("loc_6805F47: call _sub_6801CF0;");
    asm("loc_6805F4C: mov %eax,%esi;");
    asm("loc_6805F4E: add $4,%esp;");
    asm("loc_6805F51: test %esi,%esi;");
    asm("loc_6805F53: jne loc_6805F63;");
    asm("loc_6805F55: push $_data_680D8DC;");
    asm("loc_6805F5A: push %edi;");
    asm("loc_6805F5B: call _sub_6805D80;");
    asm("loc_6805F60: add $8,%esp;");
    asm("loc_6805F63: pop %edi;");
    asm("loc_6805F64: mov %esi,%eax;");
    asm("loc_6805F66: pop %esi;");
    asm("loc_6805F67: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805F70() // _sub_6805F70
{
    __DEBUG_ASM(6805F70);
    // chunk 0x6805F70 _sub_6805F70
    asm("loc_6805F70: push %edi;");
    asm("loc_6805F71: call _sub_6803340;");
    asm("loc_6805F76: mov 0xC(%esp),%edi;");
    asm("loc_6805F7A: test %edi,%edi;");
    asm("loc_6805F7C: jle loc_6805FA0;");
    asm("loc_6805F7E: push %esi;");
    asm("loc_6805F7F: mov 0xC(%esp),%esi;");
    asm("loc_6805F83: mov 4(%esi),%eax;");
    asm("loc_6805F86: push $0;");
    asm("loc_6805F88: push %eax;");
    asm("loc_6805F89: call _sub_68022E0;");
    asm("loc_6805F8E: mov (%esi),%ecx;");
    asm("loc_6805F90: push %ecx;");
    asm("loc_6805F91: call _sub_6801FB0;");
    asm("loc_6805F96: add $0xC,%esp;");
    asm("loc_6805F99: add $8,%esi;");
    asm("loc_6805F9C: dec %edi;");
    asm("loc_6805F9D: jne loc_6805F83;");
    asm("loc_6805F9F: pop %esi;");
    asm("loc_6805FA0: pop %edi;");
    asm("loc_6805FA1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805FB0() // _sub_6805FB0
{
    __DEBUG_ASM(6805FB0);
    // chunk 0x6805FB0 _sub_6805FB0
    asm("loc_6805FB0: mov 4(%esp),%ecx;");
    asm("loc_6805FB4: sub $0x1F4,%esp;");
    asm("loc_6805FBA: lea 0x1FC(%esp),%eax;");
    asm("loc_6805FC1: push %eax;");
    asm("loc_6805FC2: push %ecx;");
    asm("loc_6805FC3: lea 8(%esp),%edx;");
    asm("loc_6805FC7: push %edx;");
    asm("loc_6805FC8: calll *_import_680C06C;");
    asm("loc_6805FCE: lea 0xC(%esp),%eax;");
    asm("loc_6805FD2: push %eax;");
    asm("loc_6805FD3: call _sub_6802E00;");
    asm("loc_6805FD8: add $0x204,%esp;");
    asm("loc_6805FDE: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6805FE0() // _sub_6805FE0
{
    __DEBUG_ASM(6805FE0);
    // chunk 0x6805FE0 _sub_6805FE0
    asm("loc_6805FE0: push %esi;");
    asm("loc_6805FE1: mov 0xC(%esp),%esi;");
    asm("loc_6805FE5: mov (%esi),%al;");
    asm("loc_6805FE7: push %edi;");
    asm("loc_6805FE8: mov 0x14(%esp),%edi;");
    asm("loc_6805FEC: sub $0xD,%edi;");
    asm("loc_6805FEF: cmp $0x40,%al;");
    asm("loc_6805FF1: jne loc_680600C;");
    asm("loc_6805FF3: mov 0xC(%esp),%eax;");
    asm("loc_6805FF7: inc %esi;");
    asm("loc_6805FF8: push %esi;");
    asm("loc_6805FF9: push %edi;");
    asm("loc_6805FFA: push $_data_680D910;");
    asm("loc_6805FFF: push %eax;");
    asm("loc_6806000: calll *_import_680C060;");
    asm("loc_6806006: add $0x10,%esp;");
    asm("loc_6806009: pop %edi;");
    asm("loc_680600A: pop %esi;");
    asm("loc_680600B: ret;");
    asm("loc_680600C: cmp $0x28,%al;");
    asm("loc_680600E: jne loc_6806030;");
    asm("loc_6806010: mov _data_680D904,%edx;");
    asm("loc_6806016: mov 0xC(%esp),%ecx;");
    asm("loc_680601A: mov %edx,(%ecx);");
    asm("loc_680601C: mov _data_680D908,%eax;");
    asm("loc_6806021: mov %eax,4(%ecx);");
    asm("loc_6806024: mov _data_680D90C,%dl;");
    asm("loc_680602A: pop %edi;");
    asm("loc_680602B: mov %dl,8(%ecx);");
    asm("loc_680602E: pop %esi;");
    asm("loc_680602F: ret;");
    asm("loc_6806030: push $0xA;");
    asm("loc_6806032: push %esi;");
    asm("loc_6806033: calll *_import_680C070;");
    asm("loc_6806039: add $8,%esp;");
    asm("loc_680603C: test %eax,%eax;");
    asm("loc_680603E: je loc_6806048;");
    asm("loc_6806040: sub %esi,%eax;");
    asm("loc_6806042: cmp %edi,%eax;");
    asm("loc_6806044: jge loc_6806048;");
    asm("loc_6806046: mov %eax,%edi;");
    asm("loc_6806048: push %esi;");
    asm("loc_6806049: mov 0x10(%esp),%esi;");
    asm("loc_680604D: push %edi;");
    asm("loc_680604E: push $_data_680D8F4;");
    asm("loc_6806053: push %esi;");
    asm("loc_6806054: calll *_import_680C060;");
    asm("loc_680605A: mov _data_680D8EC,%ecx;");
    asm("loc_6806060: lea 8(%edi,%esi),%eax;");
    asm("loc_6806064: add $0x10,%esp;");
    asm("loc_6806067: mov %ecx,(%eax);");
    asm("loc_6806069: mov _data_680D8F0,%dl;");
    asm("loc_680606F: pop %edi;");
    asm("loc_6806070: mov %dl,4(%eax);");
    asm("loc_6806073: pop %esi;");
    asm("loc_6806074: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806080() // _sub_6806080
{
    __DEBUG_ASM(6806080);
    // chunk 0x6806080 _sub_6806080
    asm("loc_6806080: mov 8(%esp),%eax;");
    asm("loc_6806084: test %eax,%eax;");
    asm("loc_6806086: jne loc_680608D;");
    asm("loc_6806088: mov $_data_680D924,%eax;");
    asm("loc_680608D: mov 4(%esp),%ecx;");
    asm("loc_6806091: push %eax;");
    asm("loc_6806092: mov 0x10(%esp),%eax;");
    asm("loc_6806096: add $0xFFFFFFFE,%eax;");
    asm("loc_6806099: push %eax;");
    asm("loc_680609A: push $_data_680D91C;");
    asm("loc_680609F: push %ecx;");
    asm("loc_68060A0: calll *_import_680C060;");
    asm("loc_68060A6: add $0x10,%esp;");
    asm("loc_68060A9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68060B0() // _sub_68060B0
{
    __DEBUG_ASM(68060B0);
    // chunk 0x68060B0 _sub_68060B0
    asm("loc_68060B0: mov _data_680D978,%eax;");
    asm("loc_68060B5: xor %edx,%edx;");
    asm("loc_68060B7: cmp $0x7FFFFFFD,%eax;");
    asm("loc_68060BC: push %esi;");
    asm("loc_68060BD: jge loc_68060DA;");
    asm("loc_68060BF: mov 8(%esp),%esi;");
    asm("loc_68060C3: mov $_data_680D978,%ecx;");
    asm("loc_68060C8: cmp %esi,%eax;");
    asm("loc_68060CA: jg loc_68060EB;");
    asm("loc_68060CC: mov 4(%ecx),%eax;");
    asm("loc_68060CF: add $4,%ecx;");
    asm("loc_68060D2: inc %edx;");
    asm("loc_68060D3: cmp $0x7FFFFFFD,%eax;");
    asm("loc_68060D8: jl loc_68060C8;");
    asm("loc_68060DA: push $_data_680DA0C;");
    asm("loc_68060DF: call _sub_6802E00;");
    asm("loc_68060E4: add $4,%esp;");
    asm("loc_68060E7: xor %eax,%eax;");
    asm("loc_68060E9: pop %esi;");
    asm("loc_68060EA: ret;");
    asm("loc_68060EB: mov _data_680D978(,%edx,4),%eax;");
    asm("loc_68060F2: pop %esi;");
    asm("loc_68060F3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806100() // _sub_6806100
{
    asm("jmp dgb_6806100;"); // jumptable skip
    asm(".long _jmp_680617C;"); // jumptable address
    __DEBUG_ASM(6806100);
    // chunk 0x6806100 _sub_6806100
    asm("loc_6806100: mov 4(%esp),%eax;");
    asm("loc_6806104: mov (%eax),%ecx;");
    asm("loc_6806106: add $7,%ecx;");
    asm("loc_6806109: cmp $7,%ecx;");
    asm("loc_680610C: ja loc_6806176;");
    asm("loc_680610E: jmpl *_jmp_680617C(,%ecx,4);");
    asm("loc_6806115: fldl 8(%eax);");
    asm("loc_6806118: mov 8(%esp),%eax;");
    asm("loc_680611C: fldl 8(%eax);");
    asm("loc_680611F: fcompp;");
    asm("loc_6806121: fnstsw %ax;");
    asm("loc_6806123: test $0x40,%ah;");
    asm("loc_6806126: je loc_6806176;");
    asm("loc_6806128: mov $1,%eax;");
    asm("loc_680612D: ret;");
    asm("loc_680612E: mov 8(%eax),%eax;");
    asm("loc_6806131: mov 8(%esp),%ecx;");
    asm("loc_6806135: mov 8(%ecx),%edx;");
    asm("loc_6806138: add $0x28,%eax;");
    asm("loc_680613B: add $0x28,%edx;");
    asm("loc_680613E: sub %edx,%eax;");
    asm("loc_6806140: neg %eax;");
    asm("loc_6806142: sbb %eax,%eax;");
    asm("loc_6806144: inc %eax;");
    asm("loc_6806145: ret;");
    asm("loc_6806146: mov 8(%eax),%eax;");
    asm("loc_6806149: mov 8(%esp),%ecx;");
    asm("loc_680614D: sub 8(%ecx),%eax;");
    asm("loc_6806150: neg %eax;");
    asm("loc_6806152: sbb %eax,%eax;");
    asm("loc_6806154: inc %eax;");
    asm("loc_6806155: ret;");
    asm("loc_6806156: mov 8(%eax),%eax;");
    asm("loc_6806159: mov 8(%esp),%edx;");
    asm("loc_680615D: sub 8(%edx),%eax;");
    asm("loc_6806160: neg %eax;");
    asm("loc_6806162: sbb %eax,%eax;");
    asm("loc_6806164: inc %eax;");
    asm("loc_6806165: ret;");
    asm("loc_6806166: mov 8(%eax),%eax;");
    asm("loc_6806169: mov 8(%esp),%edx;");
    asm("loc_680616D: sub 8(%edx),%eax;");
    asm("loc_6806170: neg %eax;");
    asm("loc_6806172: sbb %eax,%eax;");
    asm("loc_6806174: inc %eax;");
    asm("loc_6806175: ret;");
    asm("loc_6806176: xor %eax,%eax;");
    asm("loc_6806178: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_680617C: .long loc_6806166;");
    asm(".long loc_6806128;");
    asm(".long loc_6806146;");
    asm(".long loc_6806156;");
    asm(".long loc_6806146;");
    asm(".long loc_680612E;");
    asm(".long loc_6806115;");
    asm(".long loc_680612E;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6806100);
_naked _weak void _sub_68061A0() // _sub_68061A0
{
    __DEBUG_ASM(68061A0);
    // chunk 0x68061A0 _sub_68061A0
    asm("loc_68061A0: mov 4(%esp),%ecx;");
    asm("loc_68061A4: mov (%ecx),%edx;");
    asm("loc_68061A6: mov 8(%esp),%eax;");
    asm("loc_68061AA: mov %edx,(%eax);");
    asm("loc_68061AC: mov %eax,(%ecx);");
    asm("loc_68061AE: movl $0,4(%eax);");
    asm("loc_68061B5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68061C0() // _sub_68061C0
{
    __DEBUG_ASM(68061C0);
    // chunk 0x68061C0 _sub_68061C0
    asm("loc_68061C0: push %ebp;");
    asm("loc_68061C1: mov %esp,%ebp;");
    asm("loc_68061C3: and $0xFFFFFFF8,%esp;");
    asm("loc_68061C6: sub $0x14,%esp;");
    asm("loc_68061C9: push %ebx;");
    asm("loc_68061CA: mov _import_680C05C,%ebx;");
    asm("loc_68061D0: push %esi;");
    asm("loc_68061D1: mov 8(%ebp),%esi;");
    asm("loc_68061D4: push %edi;");
    asm("loc_68061D5: xor %edi,%edi;");
    asm("loc_68061D7: movl $0,0x18(%esp);");
    asm("loc_68061DF: movl $0,0x1C(%esp);");
    asm("loc_68061E7: mov %edi,0x10(%esp);");
    asm("loc_68061EB: mov _import_680C058,%eax;");
    asm("loc_68061F0: cmpl $1,(%eax);");
    asm("loc_68061F3: jle loc_6806203;");
    asm("loc_68061F5: xor %ecx,%ecx;");
    asm("loc_68061F7: mov (%esi),%cl;");
    asm("loc_68061F9: push $4;");
    asm("loc_68061FB: push %ecx;");
    asm("loc_68061FC: call *%ebx;");
    asm("loc_68061FE: add $8,%esp;");
    asm("loc_6806201: jmp loc_6806216;");
    asm("loc_6806203: mov _import_680C054,%eax;");
    asm("loc_6806208: mov (%eax),%ecx;");
    asm("loc_680620A: xor %edx,%edx;");
    asm("loc_680620C: mov (%esi),%dl;");
    asm("loc_680620E: xor %eax,%eax;");
    asm("loc_6806210: mov (%ecx,%edx,2),%al;");
    asm("loc_6806213: and $4,%eax;");
    asm("loc_6806216: test %eax,%eax;");
    asm("loc_6806218: je loc_680623B;");
    asm("loc_680621A: movsbl (%esi),%edx;");
    asm("loc_680621D: sub $0x30,%edx;");
    asm("loc_6806220: mov %edx,0x14(%esp);");
    asm("loc_6806224: inc %esi;");
    asm("loc_6806225: fildl 0x14(%esp);");
    asm("loc_6806229: fldl 0x18(%esp);");
    asm("loc_680622D: fmull _data_680C190;");
    asm("loc_6806233: faddp;");
    asm("loc_6806235: fstpl 0x18(%esp);");
    asm("loc_6806239: jmp loc_68061EB;");
    asm("loc_680623B: cmpb $0x2E,(%esi);");
    asm("loc_680623E: jne loc_6806296;");
    asm("loc_6806240: inc %esi;");
    asm("loc_6806241: mov _import_680C058,%eax;");
    asm("loc_6806246: cmpl $1,(%eax);");
    asm("loc_6806249: jle loc_6806259;");
    asm("loc_680624B: xor %ecx,%ecx;");
    asm("loc_680624D: mov (%esi),%cl;");
    asm("loc_680624F: push $4;");
    asm("loc_6806251: push %ecx;");
    asm("loc_6806252: call *%ebx;");
    asm("loc_6806254: add $8,%esp;");
    asm("loc_6806257: jmp loc_680626C;");
    asm("loc_6806259: mov _import_680C054,%eax;");
    asm("loc_680625E: mov (%eax),%ecx;");
    asm("loc_6806260: xor %edx,%edx;");
    asm("loc_6806262: mov (%esi),%dl;");
    asm("loc_6806264: xor %eax,%eax;");
    asm("loc_6806266: mov (%ecx,%edx,2),%al;");
    asm("loc_6806269: and $4,%eax;");
    asm("loc_680626C: test %eax,%eax;");
    asm("loc_680626E: je loc_6806292;");
    asm("loc_6806270: movsbl (%esi),%edx;");
    asm("loc_6806273: sub $0x30,%edx;");
    asm("loc_6806276: mov %edx,0x14(%esp);");
    asm("loc_680627A: inc %esi;");
    asm("loc_680627B: inc %edi;");
    asm("loc_680627C: fildl 0x14(%esp);");
    asm("loc_6806280: fldl 0x18(%esp);");
    asm("loc_6806284: fmull _data_680C190;");
    asm("loc_680628A: faddp;");
    asm("loc_680628C: fstpl 0x18(%esp);");
    asm("loc_6806290: jmp loc_6806241;");
    asm("loc_6806292: mov %edi,0x10(%esp);");
    asm("loc_6806296: xor %eax,%eax;");
    asm("loc_6806298: mov (%esi),%al;");
    asm("loc_680629A: push %eax;");
    asm("loc_680629B: calll *_import_680C074;");
    asm("loc_68062A1: add $4,%esp;");
    asm("loc_68062A4: cmp $0x45,%eax;");
    asm("loc_68062A7: jne loc_680635C;");
    asm("loc_68062AD: mov 1(%esi),%al;");
    asm("loc_68062B0: xor %edi,%edi;");
    asm("loc_68062B2: inc %esi;");
    asm("loc_68062B3: cmp $0x2D,%al;");
    asm("loc_68062B5: movl $1,0x14(%esp);");
    asm("loc_68062BD: jne loc_68062CA;");
    asm("loc_68062BF: inc %esi;");
    asm("loc_68062C0: movl $0xFFFFFFFF,0x14(%esp);");
    asm("loc_68062C8: jmp loc_68062CF;");
    asm("loc_68062CA: cmp $0x2B,%al;");
    asm("loc_68062CC: jne loc_68062CF;");
    asm("loc_68062CE: inc %esi;");
    asm("loc_68062CF: mov _import_680C058,%ecx;");
    asm("loc_68062D5: cmpl $1,(%ecx);");
    asm("loc_68062D8: jle loc_68062E8;");
    asm("loc_68062DA: xor %edx,%edx;");
    asm("loc_68062DC: mov (%esi),%dl;");
    asm("loc_68062DE: push $4;");
    asm("loc_68062E0: push %edx;");
    asm("loc_68062E1: call *%ebx;");
    asm("loc_68062E3: add $8,%esp;");
    asm("loc_68062E6: jmp loc_68062FA;");
    asm("loc_68062E8: mov _import_680C054,%ecx;");
    asm("loc_68062EE: mov (%ecx),%edx;");
    asm("loc_68062F0: xor %eax,%eax;");
    asm("loc_68062F2: mov (%esi),%al;");
    asm("loc_68062F4: mov (%edx,%eax,2),%al;");
    asm("loc_68062F7: and $4,%eax;");
    asm("loc_68062FA: test %eax,%eax;");
    asm("loc_68062FC: jne loc_680630B;");
    asm("loc_68062FE: fldl _data_680C188;");
    asm("loc_6806304: pop %edi;");
    asm("loc_6806305: pop %esi;");
    asm("loc_6806306: pop %ebx;");
    asm("loc_6806307: mov %ebp,%esp;");
    asm("loc_6806309: pop %ebp;");
    asm("loc_680630A: ret;");
    asm("loc_680630B: movsbl (%esi),%ecx;");
    asm("loc_680630E: mov _import_680C058,%edx;");
    asm("loc_6806314: lea (%edi,%edi,4),%eax;");
    asm("loc_6806317: lea -0x30(%ecx,%eax,2),%edi;");
    asm("loc_680631B: mov (%edx),%eax;");
    asm("loc_680631D: inc %esi;");
    asm("loc_680631E: cmp $1,%eax;");
    asm("loc_6806321: jle loc_6806331;");
    asm("loc_6806323: xor %eax,%eax;");
    asm("loc_6806325: mov (%esi),%al;");
    asm("loc_6806327: push $4;");
    asm("loc_6806329: push %eax;");
    asm("loc_680632A: call *%ebx;");
    asm("loc_680632C: add $8,%esp;");
    asm("loc_680632F: jmp loc_6806345;");
    asm("loc_6806331: mov _import_680C054,%edx;");
    asm("loc_6806337: xor %ecx,%ecx;");
    asm("loc_6806339: mov (%esi),%cl;");
    asm("loc_680633B: xor %eax,%eax;");
    asm("loc_680633D: mov (%edx),%eax;");
    asm("loc_680633F: mov (%eax,%ecx,2),%al;");
    asm("loc_6806342: and $4,%eax;");
    asm("loc_6806345: test %eax,%eax;");
    asm("loc_6806347: jne loc_680630B;");
    asm("loc_6806349: mov 0x14(%esp),%eax;");
    asm("loc_680634D: mov 0x10(%esp),%ecx;");
    asm("loc_6806351: imul %edi,%eax;");
    asm("loc_6806354: sub %eax,%ecx;");
    asm("loc_6806356: mov %ecx,0x10(%esp);");
    asm("loc_680635A: mov %ecx,%edi;");
    asm("loc_680635C: mov _import_680C058,%ecx;");
    asm("loc_6806362: cmpl $1,(%ecx);");
    asm("loc_6806365: jle loc_6806375;");
    asm("loc_6806367: xor %edx,%edx;");
    asm("loc_6806369: mov (%esi),%dl;");
    asm("loc_680636B: push $8;");
    asm("loc_680636D: push %edx;");
    asm("loc_680636E: call *%ebx;");
    asm("loc_6806370: add $8,%esp;");
    asm("loc_6806373: jmp loc_6806387;");
    asm("loc_6806375: mov _import_680C054,%ecx;");
    asm("loc_680637B: mov (%ecx),%edx;");
    asm("loc_680637D: xor %eax,%eax;");
    asm("loc_680637F: mov (%esi),%al;");
    asm("loc_6806381: mov (%edx,%eax,2),%al;");
    asm("loc_6806384: and $8,%eax;");
    asm("loc_6806387: test %eax,%eax;");
    asm("loc_6806389: je loc_680638E;");
    asm("loc_680638B: inc %esi;");
    asm("loc_680638C: jmp loc_680635C;");
    asm("loc_680638E: cmpb $0,(%esi);");
    asm("loc_6806391: je loc_68063A0;");
    asm("loc_6806393: fldl _data_680C188;");
    asm("loc_6806399: pop %edi;");
    asm("loc_680639A: pop %esi;");
    asm("loc_680639B: pop %ebx;");
    asm("loc_680639C: mov %ebp,%esp;");
    asm("loc_680639E: pop %ebp;");
    asm("loc_680639F: ret;");
    asm("loc_68063A0: test %edi,%edi;");
    asm("loc_68063A2: jle loc_68063B8;");
    asm("loc_68063A4: push %edi;");
    asm("loc_68063A5: call _sub_68063E0;");
    asm("loc_68063AA: fdivrl 0x1C(%esp);");
    asm("loc_68063AE: add $4,%esp;");
    asm("loc_68063B1: pop %edi;");
    asm("loc_68063B2: pop %esi;");
    asm("loc_68063B3: pop %ebx;");
    asm("loc_68063B4: mov %ebp,%esp;");
    asm("loc_68063B6: pop %ebp;");
    asm("loc_68063B7: ret;");
    asm("loc_68063B8: jge loc_68063D0;");
    asm("loc_68063BA: neg %edi;");
    asm("loc_68063BC: push %edi;");
    asm("loc_68063BD: call _sub_68063E0;");
    asm("loc_68063C2: fmull 0x1C(%esp);");
    asm("loc_68063C6: add $4,%esp;");
    asm("loc_68063C9: pop %edi;");
    asm("loc_68063CA: pop %esi;");
    asm("loc_68063CB: pop %ebx;");
    asm("loc_68063CC: mov %ebp,%esp;");
    asm("loc_68063CE: pop %ebp;");
    asm("loc_68063CF: ret;");
    asm("loc_68063D0: fldl 0x18(%esp);");
    asm("loc_68063D4: pop %edi;");
    asm("loc_68063D5: pop %esi;");
    asm("loc_68063D6: pop %ebx;");
    asm("loc_68063D7: mov %ebp,%esp;");
    asm("loc_68063D9: pop %ebp;");
    asm("loc_68063DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68063E0() // _sub_68063E0
{
    __DEBUG_ASM(68063E0);
    // chunk 0x68063E0 _sub_68063E0
    asm("loc_68063E0: sub $8,%esp;");
    asm("loc_68063E3: mov 0xC(%esp),%eax;");
    asm("loc_68063E7: fldl _data_680C198;");
    asm("loc_68063ED: test %eax,%eax;");
    asm("loc_68063EF: movl $0,(%esp);");
    asm("loc_68063F7: movl $0x40240000,4(%esp);");
    asm("loc_68063FF: je loc_6806419;");
    asm("loc_6806401: fldl (%esp);");
    asm("loc_6806405: test $1,%al;");
    asm("loc_6806407: je loc_680640F;");
    asm("loc_6806409: fxch;");
    asm("loc_680640B: fmul %st(1),%st;");
    asm("loc_680640D: fxch;");
    asm("loc_680640F: shr $1,%eax;");
    asm("loc_6806411: fld %st(0);");
    asm("loc_6806413: fmulp;");
    asm("loc_6806415: jne loc_6806405;");
    asm("loc_6806417: fstp %st(0);");
    asm("loc_6806419: add $8,%esp;");
    asm("loc_680641C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806420() // _sub_6806420
{
    __DEBUG_ASM(6806420);
    // chunk 0x6806420 _sub_6806420
    asm("loc_6806420: push %esi;");
    asm("loc_6806421: push %edi;");
    asm("loc_6806422: mov 0xC(%esp),%edi;");
    asm("loc_6806426: lea 2(%edi),%eax;");
    asm("loc_6806429: shl $4,%eax;");
    asm("loc_680642C: push %eax;");
    asm("loc_680642D: push $0;");
    asm("loc_680642F: call _sub_68065D0;");
    asm("loc_6806434: mov _data_680E604,%ecx;");
    asm("loc_680643A: mov %eax,%esi;");
    asm("loc_680643C: add $0x48,%ecx;");
    asm("loc_680643F: push %esi;");
    asm("loc_6806440: push %ecx;");
    asm("loc_6806441: call _sub_68061A0;");
    asm("loc_6806446: mov _data_680E604,%eax;");
    asm("loc_680644B: mov 0x78(%eax),%ecx;");
    asm("loc_680644E: add $0x10,%esp;");
    asm("loc_6806451: inc %ecx;");
    asm("loc_6806452: mov %ecx,0x78(%eax);");
    asm("loc_6806455: mov %edi,8(%esi);");
    asm("loc_6806458: pop %edi;");
    asm("loc_6806459: mov %esi,%eax;");
    asm("loc_680645B: pop %esi;");
    asm("loc_680645C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806460() // _sub_6806460
{
    __DEBUG_ASM(6806460);
    // chunk 0x6806460 _sub_6806460
    asm("loc_6806460: push %esi;");
    asm("loc_6806461: push %edi;");
    asm("loc_6806462: push $0x20;");
    asm("loc_6806464: xor %edi,%edi;");
    asm("loc_6806466: push %edi;");
    asm("loc_6806467: call _sub_68065D0;");
    asm("loc_680646C: mov %eax,%esi;");
    asm("loc_680646E: mov %edi,0x10(%esi);");
    asm("loc_6806471: mov %edi,0x14(%esi);");
    asm("loc_6806474: mov %edi,0x18(%esi);");
    asm("loc_6806477: mov %edi,8(%esi);");
    asm("loc_680647A: mov %edi,0xC(%esi);");
    asm("loc_680647D: mov %edi,0x1C(%esi);");
    asm("loc_6806480: mov _data_680E604,%eax;");
    asm("loc_6806485: add $0x40,%eax;");
    asm("loc_6806488: push %esi;");
    asm("loc_6806489: push %eax;");
    asm("loc_680648A: call _sub_68061A0;");
    asm("loc_680648F: mov _data_680E604,%eax;");
    asm("loc_6806494: mov 0x78(%eax),%ecx;");
    asm("loc_6806497: add $0x10,%esp;");
    asm("loc_680649A: add $5,%ecx;");
    asm("loc_680649D: mov %ecx,0x78(%eax);");
    asm("loc_68064A0: pop %edi;");
    asm("loc_68064A1: mov %esi,%eax;");
    asm("loc_68064A3: pop %esi;");
    asm("loc_68064A4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68064B0() // _sub_68064B0
{
    __DEBUG_ASM(68064B0);
    // chunk 0x68064B0 _sub_68064B0
    asm("loc_68064B0: mov 4(%esp),%eax;");
    asm("loc_68064B4: test %eax,%eax;");
    asm("loc_68064B6: je loc_68064DA;");
    asm("loc_68064B8: push %esi;");
    asm("loc_68064B9: mov _data_680E604,%ecx;");
    asm("loc_68064BF: mov 0x78(%ecx),%edx;");
    asm("loc_68064C2: mov (%eax),%esi;");
    asm("loc_68064C4: add $0xFFFFFFFB,%edx;");
    asm("loc_68064C7: push %eax;");
    asm("loc_68064C8: mov %edx,0x78(%ecx);");
    asm("loc_68064CB: call _sub_68064E0;");
    asm("loc_68064D0: add $4,%esp;");
    asm("loc_68064D3: test %esi,%esi;");
    asm("loc_68064D5: mov %esi,%eax;");
    asm("loc_68064D7: jne loc_68064B9;");
    asm("loc_68064D9: pop %esi;");
    asm("loc_68064DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68064E0() // _sub_68064E0
{
    __DEBUG_ASM(68064E0);
    // chunk 0x68064E0 _sub_68064E0
    asm("loc_68064E0: push %esi;");
    asm("loc_68064E1: mov 8(%esp),%esi;");
    asm("loc_68064E5: mov 0x10(%esi),%eax;");
    asm("loc_68064E8: push $0;");
    asm("loc_68064EA: push %eax;");
    asm("loc_68064EB: call _sub_68065D0;");
    asm("loc_68064F0: mov 0x1C(%esi),%ecx;");
    asm("loc_68064F3: push $0;");
    asm("loc_68064F5: push %ecx;");
    asm("loc_68064F6: call _sub_68065D0;");
    asm("loc_68064FB: mov 8(%esi),%edx;");
    asm("loc_68064FE: push $0;");
    asm("loc_6806500: push %edx;");
    asm("loc_6806501: call _sub_68065D0;");
    asm("loc_6806506: push $0;");
    asm("loc_6806508: push %esi;");
    asm("loc_6806509: call _sub_68065D0;");
    asm("loc_680650E: add $0x20,%esp;");
    asm("loc_6806511: pop %esi;");
    asm("loc_6806512: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806520() // _sub_6806520
{
    __DEBUG_ASM(6806520);
    // chunk 0x6806520 _sub_6806520
    asm("loc_6806520: mov 4(%esp),%eax;");
    asm("loc_6806524: test %eax,%eax;");
    asm("loc_6806526: je loc_680654A;");
    asm("loc_6806528: push %esi;");
    asm("loc_6806529: mov _data_680E604,%ecx;");
    asm("loc_680652F: mov 0x78(%ecx),%edx;");
    asm("loc_6806532: mov (%eax),%esi;");
    asm("loc_6806534: dec %edx;");
    asm("loc_6806535: push $0;");
    asm("loc_6806537: push %eax;");
    asm("loc_6806538: mov %edx,0x78(%ecx);");
    asm("loc_680653B: call _sub_68065D0;");
    asm("loc_6806540: add $8,%esp;");
    asm("loc_6806543: test %esi,%esi;");
    asm("loc_6806545: mov %esi,%eax;");
    asm("loc_6806547: jne loc_6806529;");
    asm("loc_6806549: pop %esi;");
    asm("loc_680654A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806550() // _sub_6806550
{
    __DEBUG_ASM(6806550);
    // chunk 0x6806550 _sub_6806550
    asm("loc_6806550: mov 0xC(%esp),%eax;");
    asm("loc_6806554: push %esi;");
    asm("loc_6806555: push %edi;");
    asm("loc_6806556: mov 0x10(%esp),%edi;");
    asm("loc_680655A: lea (%edi,%eax),%esi;");
    asm("loc_680655D: cmp 0x20(%esp),%esi;");
    asm("loc_6806561: jb loc_6806570;");
    asm("loc_6806563: mov 0x1C(%esp),%ecx;");
    asm("loc_6806567: push %ecx;");
    asm("loc_6806568: call _sub_6802E00;");
    asm("loc_680656D: add $4,%esp;");
    asm("loc_6806570: mov %esi,%edx;");
    asm("loc_6806572: xor %edi,%edx;");
    asm("loc_6806574: cmp %edi,%edx;");
    asm("loc_6806576: jbe loc_680659D;");
    asm("loc_6806578: test %edi,%edi;");
    asm("loc_680657A: jbe loc_6806581;");
    asm("loc_680657C: cmp $8,%esi;");
    asm("loc_680657F: jb loc_680659D;");
    asm("loc_6806581: push %esi;");
    asm("loc_6806582: call _sub_68065B0;");
    asm("loc_6806587: imul 0x1C(%esp),%eax;");
    asm("loc_680658C: push %eax;");
    asm("loc_680658D: mov 0x14(%esp),%eax;");
    asm("loc_6806591: push %eax;");
    asm("loc_6806592: call _sub_68065D0;");
    asm("loc_6806597: add $0xC,%esp;");
    asm("loc_680659A: pop %edi;");
    asm("loc_680659B: pop %esi;");
    asm("loc_680659C: ret;");
    asm("loc_680659D: mov 0xC(%esp),%eax;");
    asm("loc_68065A1: pop %edi;");
    asm("loc_68065A2: pop %esi;");
    asm("loc_68065A3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68065B0() // _sub_68065B0
{
    __DEBUG_ASM(68065B0);
    // chunk 0x68065B0 _sub_68065B0
    asm("loc_68065B0: mov 4(%esp),%ecx;");
    asm("loc_68065B4: mov $8,%eax;");
    asm("loc_68065B9: cmp %eax,%ecx;");
    asm("loc_68065BB: jb loc_68065C3;");
    asm("loc_68065BD: shl $1,%eax;");
    asm("loc_68065BF: cmp %ecx,%eax;");
    asm("loc_68065C1: jbe loc_68065BD;");
    asm("loc_68065C3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68065D0() // _sub_68065D0
{
    __DEBUG_ASM(68065D0);
    // chunk 0x68065D0 _sub_68065D0
    asm("loc_68065D0: mov 8(%esp),%eax;");
    asm("loc_68065D4: test %eax,%eax;");
    asm("loc_68065D6: jne loc_68065E9;");
    asm("loc_68065D8: mov 4(%esp),%eax;");
    asm("loc_68065DC: push %eax;");
    asm("loc_68065DD: calll *_import_680C018;");
    asm("loc_68065E3: add $4,%esp;");
    asm("loc_68065E6: xor %eax,%eax;");
    asm("loc_68065E8: ret;");
    asm("loc_68065E9: mov 4(%esp),%ecx;");
    asm("loc_68065ED: push %esi;");
    asm("loc_68065EE: push %eax;");
    asm("loc_68065EF: push %ecx;");
    asm("loc_68065F0: calll *_import_680C078;");
    asm("loc_68065F6: mov %eax,%esi;");
    asm("loc_68065F8: add $8,%esp;");
    asm("loc_68065FB: test %esi,%esi;");
    asm("loc_68065FD: jne loc_680660C;");
    asm("loc_68065FF: push $_data_680DA14;");
    asm("loc_6806604: call _sub_6802E00;");
    asm("loc_6806609: add $4,%esp;");
    asm("loc_680660C: mov %esi,%eax;");
    asm("loc_680660E: pop %esi;");
    asm("loc_680660F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806610() // _sub_6806610
{
    __DEBUG_ASM(6806610);
    // chunk 0x6806610 _sub_6806610
    asm("loc_6806610: mov 8(%esp),%ecx;");
    asm("loc_6806614: test %ecx,%ecx;");
    asm("loc_6806616: jne loc_680661B;");
    asm("loc_6806618: xor %eax,%eax;");
    asm("loc_680661A: ret;");
    asm("loc_680661B: mov 4(%esp),%eax;");
    asm("loc_680661F: mov 0xC(%esp),%edx;");
    asm("loc_6806623: mov %ecx,4(%eax);");
    asm("loc_6806626: mov 0x10(%esp),%ecx;");
    asm("loc_680662A: mov %edx,(%eax);");
    asm("loc_680662C: movl $_sub_6806640,8(%eax);");
    asm("loc_6806633: movl $0,0xC(%eax);");
    asm("loc_680663A: mov %ecx,0x10(%eax);");
    asm("loc_680663D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806640() // ?underflow@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAEHXZ
{
    __DEBUG_ASM(6806640);
    // chunk 0x6806640 _sub_6806640
    asm("loc_6806640: or $0xFFFFFFFF,%eax;");
    asm("loc_6806643: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806650() // _sub_6806650
{
    __DEBUG_ASM(6806650);
    // chunk 0x6806650 _sub_6806650
    asm("loc_6806650: mov 8(%esp),%ecx;");
    asm("loc_6806654: test %ecx,%ecx;");
    asm("loc_6806656: jne loc_680665B;");
    asm("loc_6806658: xor %eax,%eax;");
    asm("loc_680665A: ret;");
    asm("loc_680665B: mov 4(%esp),%eax;");
    asm("loc_680665F: mov %ecx,0xC(%eax);");
    asm("loc_6806662: mov 0xC(%esp),%ecx;");
    asm("loc_6806666: lea 0x14(%eax),%edx;");
    asm("loc_6806669: movl $0,(%eax);");
    asm("loc_680666F: mov %edx,4(%eax);");
    asm("loc_6806672: movl $_sub_6806680,8(%eax);");
    asm("loc_6806679: mov %ecx,0x10(%eax);");
    asm("loc_680667C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806680() // _sub_6806680
{
    __DEBUG_ASM(6806680);
    // chunk 0x6806680 _sub_6806680
    asm("loc_6806680: push %esi;");
    asm("loc_6806681: push %edi;");
    asm("loc_6806682: mov 0xC(%esp),%edi;");
    asm("loc_6806686: mov 0xC(%edi),%eax;");
    asm("loc_6806689: testb $0x10,0xC(%eax);");
    asm("loc_680668D: je loc_6806695;");
    asm("loc_680668F: pop %edi;");
    asm("loc_6806690: or $0xFFFFFFFF,%eax;");
    asm("loc_6806693: pop %esi;");
    asm("loc_6806694: ret;");
    asm("loc_6806695: push %eax;");
    asm("loc_6806696: push $0x100;");
    asm("loc_680669B: lea 0x14(%edi),%esi;");
    asm("loc_680669E: push $1;");
    asm("loc_68066A0: push %esi;");
    asm("loc_68066A1: calll *_import_680C07C;");
    asm("loc_68066A7: add $0x10,%esp;");
    asm("loc_68066AA: test %eax,%eax;");
    asm("loc_68066AC: jne loc_68066B4;");
    asm("loc_68066AE: pop %edi;");
    asm("loc_68066AF: or $0xFFFFFFFF,%eax;");
    asm("loc_68066B2: pop %esi;");
    asm("loc_68066B3: ret;");
    asm("loc_68066B4: dec %eax;");
    asm("loc_68066B5: mov %eax,(%edi);");
    asm("loc_68066B7: mov %esi,4(%edi);");
    asm("loc_68066BA: xor %eax,%eax;");
    asm("loc_68066BC: mov (%esi),%al;");
    asm("loc_68066BE: inc %esi;");
    asm("loc_68066BF: mov %esi,4(%edi);");
    asm("loc_68066C2: pop %edi;");
    asm("loc_68066C3: pop %esi;");
    asm("loc_68066C4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68066D0() // _sub_68066D0
{
    __DEBUG_ASM(68066D0);
    // chunk 0x68066D0 _sub_68066D0
    asm("loc_68066D0: push %ebx;");
    asm("loc_68066D1: push %ebp;");
    asm("loc_68066D2: mov 0x14(%esp),%ebp;");
    asm("loc_68066D6: test %ebp,%ebp;");
    asm("loc_68066D8: push %esi;");
    asm("loc_68066D9: push %edi;");
    asm("loc_68066DA: je loc_6806738;");
    asm("loc_68066DC: mov 0x14(%esp),%ebx;");
    asm("loc_68066E0: cmpl $0,(%ebx);");
    asm("loc_68066E3: jne loc_68066FD;");
    asm("loc_68066E5: push %ebx;");
    asm("loc_68066E6: calll *8(%ebx);");
    asm("loc_68066E9: add $4,%esp;");
    asm("loc_68066EC: cmp $0xFFFFFFFF,%eax;");
    asm("loc_68066EF: je loc_680673F;");
    asm("loc_68066F1: mov (%ebx),%ecx;");
    asm("loc_68066F3: mov 4(%ebx),%eax;");
    asm("loc_68066F6: inc %ecx;");
    asm("loc_68066F7: dec %eax;");
    asm("loc_68066F8: mov %ecx,(%ebx);");
    asm("loc_68066FA: mov %eax,4(%ebx);");
    asm("loc_68066FD: mov (%ebx),%eax;");
    asm("loc_68066FF: cmp %eax,%ebp;");
    asm("loc_6806701: jg loc_6806705;");
    asm("loc_6806703: mov %ebp,%eax;");
    asm("loc_6806705: mov 4(%ebx),%esi;");
    asm("loc_6806708: mov 0x18(%esp),%edi;");
    asm("loc_680670C: mov %eax,%ecx;");
    asm("loc_680670E: mov %ecx,%edx;");
    asm("loc_6806710: shr $2,%ecx;");
    asm("loc_6806713: rep movsl (%esi),(%edi);");
    asm("loc_6806715: mov %edx,%ecx;");
    asm("loc_6806717: mov 0x18(%esp),%edx;");
    asm("loc_680671B: and $3,%ecx;");
    asm("loc_680671E: rep movsb (%esi),(%edi);");
    asm("loc_6806720: mov (%ebx),%edi;");
    asm("loc_6806722: mov 4(%ebx),%esi;");
    asm("loc_6806725: sub %eax,%edi;");
    asm("loc_6806727: add %eax,%esi;");
    asm("loc_6806729: add %eax,%edx;");
    asm("loc_680672B: sub %eax,%ebp;");
    asm("loc_680672D: mov %edi,(%ebx);");
    asm("loc_680672F: mov %esi,4(%ebx);");
    asm("loc_6806732: mov %edx,0x18(%esp);");
    asm("loc_6806736: jne loc_68066E0;");
    asm("loc_6806738: pop %edi;");
    asm("loc_6806739: pop %esi;");
    asm("loc_680673A: pop %ebp;");
    asm("loc_680673B: xor %eax,%eax;");
    asm("loc_680673D: pop %ebx;");
    asm("loc_680673E: ret;");
    asm("loc_680673F: pop %edi;");
    asm("loc_6806740: pop %esi;");
    asm("loc_6806741: mov %ebp,%eax;");
    asm("loc_6806743: pop %ebp;");
    asm("loc_6806744: pop %ebx;");
    asm("loc_6806745: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806750() // _sub_6806750
{
    __DEBUG_ASM(6806750);
    // chunk 0x6806750 _sub_6806750
    asm("loc_6806750: sub $0x4A4,%esp;");
    asm("loc_6806756: push %esi;");
    asm("loc_6806757: mov 0x4AC(%esp),%esi;");
    asm("loc_680675E: lea 4(%esp),%eax;");
    asm("loc_6806762: push %esi;");
    asm("loc_6806763: push %eax;");
    asm("loc_6806764: call _sub_680A8C0;");
    asm("loc_6806769: mov 0x10(%esi),%ecx;");
    asm("loc_680676C: push %ecx;");
    asm("loc_680676D: call _sub_6805A80;");
    asm("loc_6806772: push %eax;");
    asm("loc_6806773: lea 0x74(%esp),%edx;");
    asm("loc_6806777: push %edx;");
    asm("loc_6806778: lea 0x18(%esp),%eax;");
    asm("loc_680677C: push %eax;");
    asm("loc_680677D: call _sub_68067D0;");
    asm("loc_6806782: lea 0x1C(%esp),%ecx;");
    asm("loc_6806786: push %ecx;");
    asm("loc_6806787: call _sub_6806A20;");
    asm("loc_680678C: lea 0x20(%esp),%edx;");
    asm("loc_6806790: push %edx;");
    asm("loc_6806791: call _sub_6806A40;");
    asm("loc_6806796: mov 0x28(%esp),%eax;");
    asm("loc_680679A: add $0x20,%esp;");
    asm("loc_680679D: cmp $0x11D,%eax;");
    asm("loc_68067A2: pop %esi;");
    asm("loc_68067A3: je loc_68067B7;");
    asm("loc_68067A5: lea (%esp),%eax;");
    asm("loc_68067A9: push $_data_680DB1C;");
    asm("loc_68067AE: push %eax;");
    asm("loc_68067AF: call _sub_680A850;");
    asm("loc_68067B4: add $8,%esp;");
    asm("loc_68067B7: lea (%esp),%ecx;");
    asm("loc_68067BB: push %ecx;");
    asm("loc_68067BC: call _sub_68068D0;");
    asm("loc_68067C1: mov 0x64(%esp),%eax;");
    asm("loc_68067C5: add $0x4A8,%esp;");
    asm("loc_68067CB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68067D0() // _sub_68067D0
{
    __DEBUG_ASM(68067D0);
    // chunk 0x68067D0 _sub_68067D0
    asm("loc_68067D0: push %ebx;");
    asm("loc_68067D1: push %esi;");
    asm("loc_68067D2: push %edi;");
    asm("loc_68067D3: call _sub_6806460;");
    asm("loc_68067D8: mov 0x14(%esp),%esi;");
    asm("loc_68067DC: mov 0x18(%esp),%edx;");
    asm("loc_68067E0: mov %eax,%edi;");
    asm("loc_68067E2: mov 0x10(%esp),%eax;");
    asm("loc_68067E6: mov 8(%eax),%ecx;");
    asm("loc_68067E9: xor %ebx,%ebx;");
    asm("loc_68067EB: mov %ecx,4(%esi);");
    asm("loc_68067EE: mov %esi,8(%eax);");
    asm("loc_68067F1: mov %ebx,0xC(%esi);");
    asm("loc_68067F4: mov %ebx,0x10(%esi);");
    asm("loc_68067F7: mov %ebx,0x14(%esi);");
    asm("loc_68067FA: mov %ebx,0x18(%esi);");
    asm("loc_68067FD: mov %ebx,0x20(%esi);");
    asm("loc_6806800: mov %edi,(%esi);");
    asm("loc_6806802: mov %edx,0x18(%edi);");
    asm("loc_6806805: mov %ebx,8(%esi);");
    asm("loc_6806808: mov %ebx,0x10(%edi);");
    asm("loc_680680B: mov _data_680E604,%ecx;");
    asm("loc_6806811: mov 0x34(%ecx),%edx;");
    asm("loc_6806814: xor %eax,%eax;");
    asm("loc_6806816: cmp %ebx,%edx;");
    asm("loc_6806818: setne %al;");
    asm("loc_680681B: push %ebx;");
    asm("loc_680681C: push %esi;");
    asm("loc_680681D: dec %eax;");
    asm("loc_680681E: mov %eax,0x1C(%esi);");
    asm("loc_6806821: call _sub_6806870;");
    asm("loc_6806826: push %ebx;");
    asm("loc_6806827: push %esi;");
    asm("loc_6806828: call _sub_6806870;");
    asm("loc_680682D: mov _data_680E604,%edx;");
    asm("loc_6806833: mov (%edx),%eax;");
    asm("loc_6806835: mov %edi,8(%eax);");
    asm("loc_6806838: mov _data_680E604,%ecx;");
    asm("loc_680683E: mov (%ecx),%edx;");
    asm("loc_6806840: add $0x10,%esp;");
    asm("loc_6806843: movl $0xFFFFFFFC,(%edx);");
    asm("loc_6806849: mov _data_680E604,%eax;");
    asm("loc_680684E: mov (%eax),%ecx;");
    asm("loc_6806850: cmp 8(%eax),%ecx;");
    asm("loc_6806853: pop %edi;");
    asm("loc_6806854: pop %esi;");
    asm("loc_6806855: pop %ebx;");
    asm("loc_6806856: jb loc_6806867;");
    asm("loc_6806858: push $1;");
    asm("loc_680685A: call _sub_6802870;");
    asm("loc_680685F: mov _data_680E604,%eax;");
    asm("loc_6806864: add $4,%esp;");
    asm("loc_6806867: addl $0x10,(%eax);");
    asm("loc_680686A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806870() // _sub_6806870
{
    __DEBUG_ASM(6806870);
    // chunk 0x6806870 _sub_6806870
    asm("loc_6806870: push %esi;");
    asm("loc_6806871: mov 8(%esp),%esi;");
    asm("loc_6806875: push $1;");
    asm("loc_6806877: push %esi;");
    asm("loc_6806878: call _sub_68068A0;");
    asm("loc_680687D: mov (%esi),%eax;");
    asm("loc_680687F: mov 0x10(%eax),%ecx;");
    asm("loc_6806882: mov 8(%esi),%edx;");
    asm("loc_6806885: mov 0x14(%esp),%al;");
    asm("loc_6806889: mov %al,(%ecx,%edx);");
    asm("loc_680688C: mov 8(%esi),%eax;");
    asm("loc_680688F: add $8,%esp;");
    asm("loc_6806892: inc %eax;");
    asm("loc_6806893: mov %eax,8(%esi);");
    asm("loc_6806896: pop %esi;");
    asm("loc_6806897: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68068A0() // _sub_68068A0
{
    __DEBUG_ASM(68068A0);
    // chunk 0x68068A0 _sub_68068A0
    asm("loc_68068A0: mov 8(%esp),%eax;");
    asm("loc_68068A4: push %esi;");
    asm("loc_68068A5: mov 8(%esp),%esi;");
    asm("loc_68068A9: mov 8(%esi),%ecx;");
    asm("loc_68068AC: mov (%esi),%edx;");
    asm("loc_68068AE: push $0x7FFFFFFD;");
    asm("loc_68068B3: push $_data_680DB2C;");
    asm("loc_68068B8: push $1;");
    asm("loc_68068BA: push %eax;");
    asm("loc_68068BB: mov 0x10(%edx),%eax;");
    asm("loc_68068BE: push %ecx;");
    asm("loc_68068BF: push %eax;");
    asm("loc_68068C0: call _sub_6806550;");
    asm("loc_68068C5: mov (%esi),%ecx;");
    asm("loc_68068C7: add $0x18,%esp;");
    asm("loc_68068CA: mov %eax,0x10(%ecx);");
    asm("loc_68068CD: pop %esi;");
    asm("loc_68068CE: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68068D0() // _sub_68068D0
{
    __DEBUG_ASM(68068D0);
    // chunk 0x68068D0 _sub_68068D0
    asm("loc_68068D0: push %ebx;");
    asm("loc_68068D1: mov 8(%esp),%ebx;");
    asm("loc_68068D5: push %esi;");
    asm("loc_68068D6: push %edi;");
    asm("loc_68068D7: mov 8(%ebx),%edi;");
    asm("loc_68068DA: mov (%edi),%esi;");
    asm("loc_68068DC: push $0;");
    asm("loc_68068DE: push $0;");
    asm("loc_68068E0: push %ebx;");
    asm("loc_68068E1: call _sub_6806960;");
    asm("loc_68068E6: mov 0x10(%esi),%eax;");
    asm("loc_68068E9: mov 0x10(%edi),%cl;");
    asm("loc_68068EC: mov %cl,(%eax);");
    asm("loc_68068EE: mov 8(%edi),%edx;");
    asm("loc_68068F1: mov 0x10(%esi),%eax;");
    asm("loc_68068F4: push %edx;");
    asm("loc_68068F5: push %eax;");
    asm("loc_68068F6: call _sub_68065D0;");
    asm("loc_68068FB: mov 0xC(%esi),%ecx;");
    asm("loc_68068FE: mov 8(%esi),%edx;");
    asm("loc_6806901: shl $4,%ecx;");
    asm("loc_6806904: push %ecx;");
    asm("loc_6806905: push %edx;");
    asm("loc_6806906: mov %eax,0x10(%esi);");
    asm("loc_6806909: call _sub_68065D0;");
    asm("loc_680690E: mov %eax,8(%esi);");
    asm("loc_6806911: mov 0x1C(%edi),%eax;");
    asm("loc_6806914: add $0x1C,%esp;");
    asm("loc_6806917: cmp $0xFFFFFFFF,%eax;");
    asm("loc_680691A: je loc_680693C;");
    asm("loc_680691C: push $0xFFFFFFFF;");
    asm("loc_680691E: push $0;");
    asm("loc_6806920: push %edi;");
    asm("loc_6806921: call _sub_68069D0;");
    asm("loc_6806926: mov 0x1C(%edi),%eax;");
    asm("loc_6806929: mov 0x1C(%esi),%ecx;");
    asm("loc_680692C: shl $3,%eax;");
    asm("loc_680692F: push %eax;");
    asm("loc_6806930: push %ecx;");
    asm("loc_6806931: call _sub_68065D0;");
    asm("loc_6806936: add $0x14,%esp;");
    asm("loc_6806939: mov %eax,0x1C(%esi);");
    asm("loc_680693C: mov 4(%edi),%edx;");
    asm("loc_680693F: mov %edx,8(%ebx);");
    asm("loc_6806942: mov _data_680E604,%eax;");
    asm("loc_6806947: mov (%eax),%ecx;");
    asm("loc_6806949: pop %edi;");
    asm("loc_680694A: add $0xFFFFFFF0,%ecx;");
    asm("loc_680694D: pop %esi;");
    asm("loc_680694E: mov %ecx,(%eax);");
    asm("loc_6806950: pop %ebx;");
    asm("loc_6806951: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806960() // _sub_6806960
{
    __DEBUG_ASM(6806960);
    // chunk 0x6806960 _sub_6806960
    asm("loc_6806960: mov 0xC(%esp),%eax;");
    asm("loc_6806964: push %esi;");
    asm("loc_6806965: mov 8(%esp),%esi;");
    asm("loc_6806969: push %eax;");
    asm("loc_680696A: push %esi;");
    asm("loc_680696B: call _sub_6806990;");
    asm("loc_6806970: mov 0x14(%esp),%ecx;");
    asm("loc_6806974: mov 8(%esi),%edx;");
    asm("loc_6806977: push %ecx;");
    asm("loc_6806978: push %edx;");
    asm("loc_6806979: call _sub_6806870;");
    asm("loc_680697E: add $0x10,%esp;");
    asm("loc_6806981: pop %esi;");
    asm("loc_6806982: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806990() // _sub_6806990
{
    __DEBUG_ASM(6806990);
    // chunk 0x6806990 _sub_6806990
    asm("loc_6806990: mov 4(%esp),%ecx;");
    asm("loc_6806994: mov 8(%esp),%eax;");
    asm("loc_6806998: push %esi;");
    asm("loc_6806999: mov 8(%ecx),%esi;");
    asm("loc_680699C: mov 0xC(%esi),%edx;");
    asm("loc_680699F: add %eax,%edx;");
    asm("loc_68069A1: mov %edx,%eax;");
    asm("loc_68069A3: mov %edx,0xC(%esi);");
    asm("loc_68069A6: cmp 0x10(%esi),%eax;");
    asm("loc_68069A9: jle loc_68069C6;");
    asm("loc_68069AB: cmp $0xFF,%eax;");
    asm("loc_68069B0: jle loc_68069C0;");
    asm("loc_68069B2: push $_data_680DB40;");
    asm("loc_68069B7: push %ecx;");
    asm("loc_68069B8: call _sub_680A850;");
    asm("loc_68069BD: add $8,%esp;");
    asm("loc_68069C0: mov 0xC(%esi),%ecx;");
    asm("loc_68069C3: mov %ecx,0x10(%esi);");
    asm("loc_68069C6: pop %esi;");
    asm("loc_68069C7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68069D0() // _sub_68069D0
{
    __DEBUG_ASM(68069D0);
    // chunk 0x68069D0 _sub_68069D0
    asm("loc_68069D0: push %esi;");
    asm("loc_68069D1: mov 8(%esp),%esi;");
    asm("loc_68069D5: mov 0x1C(%esi),%eax;");
    asm("loc_68069D8: cmp $0xFFFFFFFF,%eax;");
    asm("loc_68069DB: je loc_6806A1E;");
    asm("loc_68069DD: push %edi;");
    asm("loc_68069DE: mov (%esi),%edi;");
    asm("loc_68069E0: push $0x7FFFFFFD;");
    asm("loc_68069E5: push $_data_680E600;");
    asm("loc_68069EA: push $8;");
    asm("loc_68069EC: push $1;");
    asm("loc_68069EE: push %eax;");
    asm("loc_68069EF: mov 0x1C(%edi),%eax;");
    asm("loc_68069F2: push %eax;");
    asm("loc_68069F3: call _sub_6806550;");
    asm("loc_68069F8: mov 0x28(%esp),%edx;");
    asm("loc_68069FC: mov %eax,0x1C(%edi);");
    asm("loc_68069FF: mov 0x1C(%esi),%ecx;");
    asm("loc_6806A02: mov %edx,(%eax,%ecx,8);");
    asm("loc_6806A05: mov 0x1C(%esi),%eax;");
    asm("loc_6806A08: mov 0x1C(%edi),%ecx;");
    asm("loc_6806A0B: mov 0x2C(%esp),%edx;");
    asm("loc_6806A0F: mov %edx,4(%ecx,%eax,8);");
    asm("loc_6806A13: mov 0x1C(%esi),%eax;");
    asm("loc_6806A16: add $0x18,%esp;");
    asm("loc_6806A19: inc %eax;");
    asm("loc_6806A1A: mov %eax,0x1C(%esi);");
    asm("loc_6806A1D: pop %edi;");
    asm("loc_6806A1E: pop %esi;");
    asm("loc_6806A1F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806A20() // _sub_6806A20
{
    __DEBUG_ASM(6806A20);
    // chunk 0x6806A20 _sub_6806A20
    asm("loc_6806A20: push %esi;");
    asm("loc_6806A21: mov 8(%esp),%esi;");
    asm("loc_6806A25: push %esi;");
    asm("loc_6806A26: call _sub_680A970;");
    asm("loc_6806A2B: add $4,%esp;");
    asm("loc_6806A2E: mov %eax,4(%esi);");
    asm("loc_6806A31: pop %esi;");
    asm("loc_6806A32: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806A40() // _sub_6806A40
{
    __DEBUG_ASM(6806A40);
    // chunk 0x6806A40 _sub_6806A40
    asm("loc_6806A40: push %esi;");
    asm("loc_6806A41: mov 8(%esp),%esi;");
    asm("loc_6806A45: push %esi;");
    asm("loc_6806A46: call _sub_6806A60;");
    asm("loc_6806A4B: push %esi;");
    asm("loc_6806A4C: call _sub_6807A80;");
    asm("loc_6806A51: add $8,%esp;");
    asm("loc_6806A54: pop %esi;");
    asm("loc_6806A55: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806A60() // _sub_6806A60
{
    __DEBUG_ASM(6806A60);
    // chunk 0x6806A60 _sub_6806A60
    asm("loc_6806A60: push %esi;");
    asm("loc_6806A61: mov 8(%esp),%esi;");
    asm("loc_6806A65: push %esi;");
    asm("loc_6806A66: call _sub_6806AB0;");
    asm("loc_6806A6B: add $4,%esp;");
    asm("loc_6806A6E: test %eax,%eax;");
    asm("loc_6806A70: je loc_6806A87;");
    asm("loc_6806A72: push $0x3B;");
    asm("loc_6806A74: push %esi;");
    asm("loc_6806A75: call _sub_6806A90;");
    asm("loc_6806A7A: push %esi;");
    asm("loc_6806A7B: call _sub_6806AB0;");
    asm("loc_6806A80: add $0xC,%esp;");
    asm("loc_6806A83: test %eax,%eax;");
    asm("loc_6806A85: jne loc_6806A72;");
    asm("loc_6806A87: pop %esi;");
    asm("loc_6806A88: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806A90() // _sub_6806A90
{
    __DEBUG_ASM(6806A90);
    // chunk 0x6806A90 _sub_6806A90
    asm("loc_6806A90: mov 4(%esp),%eax;");
    asm("loc_6806A94: mov 4(%eax),%ecx;");
    asm("loc_6806A97: cmp 8(%esp),%ecx;");
    asm("loc_6806A9B: jne loc_6806AAC;");
    asm("loc_6806A9D: push %eax;");
    asm("loc_6806A9E: call _sub_6806A20;");
    asm("loc_6806AA3: add $4,%esp;");
    asm("loc_6806AA6: mov $1,%eax;");
    asm("loc_6806AAB: ret;");
    asm("loc_6806AAC: xor %eax,%eax;");
    asm("loc_6806AAE: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806AB0() // _sub_6806AB0
{
    asm("jmp dgb_6806AB0;"); // jumptable skip
    asm(".long _jmp_6806D40;"); // jumptable address
    __DEBUG_ASM(6806AB0);
    // chunk 0x6806AB0 _sub_6806AB0
    asm("loc_6806AB0: sub $0x10,%esp;");
    asm("loc_6806AB3: push %ebx;");
    asm("loc_6806AB4: mov 0x18(%esp),%ebx;");
    asm("loc_6806AB8: mov 4(%ebx),%eax;");
    asm("loc_6806ABB: push %ebp;");
    asm("loc_6806ABC: mov 8(%ebx),%ebp;");
    asm("loc_6806ABF: add $0xFFFFFFDB,%eax;");
    asm("loc_6806AC2: cmp $0xF8,%eax;");
    asm("loc_6806AC7: push %esi;");
    asm("loc_6806AC8: mov 0x1C(%ebx),%esi;");
    asm("loc_6806ACB: ja loc_6806D2D;");
    asm("loc_6806AD1: xor %ecx,%ecx;");
    asm("loc_6806AD3: mov _data_6806D64(%eax),%cl;");
    asm("loc_6806AD9: jmpl *_jmp_6806D40(,%ecx,4);");
    asm("loc_6806AE0: push %esi;");
    asm("loc_6806AE1: push %ebx;");
    asm("loc_6806AE2: call _sub_6807980;");
    asm("loc_6806AE7: add $8,%esp;");
    asm("loc_6806AEA: pop %esi;");
    asm("loc_6806AEB: pop %ebp;");
    asm("loc_6806AEC: mov $1,%eax;");
    asm("loc_6806AF1: pop %ebx;");
    asm("loc_6806AF2: add $0x10,%esp;");
    asm("loc_6806AF5: ret;");
    asm("loc_6806AF6: mov (%ebp),%edx;");
    asm("loc_6806AF9: push %edi;");
    asm("loc_6806AFA: mov 8(%ebp),%edi;");
    asm("loc_6806AFD: push %ebx;");
    asm("loc_6806AFE: mov %edx,0x28(%esp);");
    asm("loc_6806B02: mov %edi,0x18(%esp);");
    asm("loc_6806B06: call _sub_6806A20;");
    asm("loc_6806B0B: push %ebx;");
    asm("loc_6806B0C: call _sub_6807370;");
    asm("loc_6806B11: push $0x105;");
    asm("loc_6806B16: push %ebx;");
    asm("loc_6806B17: mov %eax,0x20(%esp);");
    asm("loc_6806B1B: call _sub_6807230;");
    asm("loc_6806B20: push %ebx;");
    asm("loc_6806B21: call _sub_68073E0;");
    asm("loc_6806B26: push %esi;");
    asm("loc_6806B27: push $0x113;");
    asm("loc_6806B2C: push $0x108;");
    asm("loc_6806B31: push %ebx;");
    asm("loc_6806B32: call _sub_68072A0;");
    asm("loc_6806B37: mov 0x34(%esp),%esi;");
    asm("loc_6806B3B: sub %edi,%esi;");
    asm("loc_6806B3D: push %esi;");
    asm("loc_6806B3E: push %ebp;");
    asm("loc_6806B3F: mov %esi,0x44(%esp);");
    asm("loc_6806B43: call _sub_68068A0;");
    asm("loc_6806B48: mov 0x50(%esp),%eax;");
    asm("loc_6806B4C: mov 0x10(%eax),%eax;");
    asm("loc_6806B4F: mov 8(%ebp),%edx;");
    asm("loc_6806B52: mov %esi,%ecx;");
    asm("loc_6806B54: lea (%eax,%edi),%esi;");
    asm("loc_6806B57: mov %eax,%edi;");
    asm("loc_6806B59: mov 0x50(%esp),%eax;");
    asm("loc_6806B5D: add %edx,%edi;");
    asm("loc_6806B5F: mov %ecx,%edx;");
    asm("loc_6806B61: shr $2,%ecx;");
    asm("loc_6806B64: rep movsl (%esi),(%edi);");
    asm("loc_6806B66: mov %edx,%ecx;");
    asm("loc_6806B68: mov 0x3C(%esp),%edx;");
    asm("loc_6806B6C: and $3,%ecx;");
    asm("loc_6806B6F: rep movsb (%esi),(%edi);");
    asm("loc_6806B71: mov 8(%ebp),%ecx;");
    asm("loc_6806B74: mov 0x40(%esp),%esi;");
    asm("loc_6806B78: mov 0x10(%eax),%eax;");
    asm("loc_6806B7B: sub %esi,%ecx;");
    asm("loc_6806B7D: push %ecx;");
    asm("loc_6806B7E: lea (%eax,%edx),%ecx;");
    asm("loc_6806B81: push %ecx;");
    asm("loc_6806B82: add %esi,%eax;");
    asm("loc_6806B84: push %eax;");
    asm("loc_6806B85: calll *_import_680C02C;");
    asm("loc_6806B8B: mov 8(%ebp),%edx;");
    asm("loc_6806B8E: sub 0x50(%esp),%edx;");
    asm("loc_6806B92: push %edx;");
    asm("loc_6806B93: push $0x32;");
    asm("loc_6806B95: push %esi;");
    asm("loc_6806B96: push %ebx;");
    asm("loc_6806B97: call _sub_6807120;");
    asm("loc_6806B9C: add $0x48,%esp;");
    asm("loc_6806B9F: lea 2(%esi,%eax),%esi;");
    asm("loc_6806BA3: push %esi;");
    asm("loc_6806BA4: push $0x36;");
    asm("loc_6806BA6: push %ebx;");
    asm("loc_6806BA7: call _sub_68071D0;");
    asm("loc_6806BAC: add $0xC,%esp;");
    asm("loc_6806BAF: pop %edi;");
    asm("loc_6806BB0: pop %esi;");
    asm("loc_6806BB1: pop %ebp;");
    asm("loc_6806BB2: mov $1,%eax;");
    asm("loc_6806BB7: pop %ebx;");
    asm("loc_6806BB8: add $0x10,%esp;");
    asm("loc_6806BBB: ret;");
    asm("loc_6806BBC: push %ebx;");
    asm("loc_6806BBD: call _sub_6806A20;");
    asm("loc_6806BC2: push %ebx;");
    asm("loc_6806BC3: call _sub_68073E0;");
    asm("loc_6806BC8: push %esi;");
    asm("loc_6806BC9: push $0x105;");
    asm("loc_6806BCE: push $0x108;");
    asm("loc_6806BD3: push %ebx;");
    asm("loc_6806BD4: call _sub_68072A0;");
    asm("loc_6806BD9: add $0x18,%esp;");
    asm("loc_6806BDC: pop %esi;");
    asm("loc_6806BDD: pop %ebp;");
    asm("loc_6806BDE: mov $1,%eax;");
    asm("loc_6806BE3: pop %ebx;");
    asm("loc_6806BE4: add $0x10,%esp;");
    asm("loc_6806BE7: ret;");
    asm("loc_6806BE8: mov 8(%ebp),%ebp;");
    asm("loc_6806BEB: push %ebx;");
    asm("loc_6806BEC: call _sub_6806A20;");
    asm("loc_6806BF1: push %ebx;");
    asm("loc_6806BF2: call _sub_68073E0;");
    asm("loc_6806BF7: push %esi;");
    asm("loc_6806BF8: push $0x10F;");
    asm("loc_6806BFD: push $0x112;");
    asm("loc_6806C02: push %ebx;");
    asm("loc_6806C03: call _sub_68072A0;");
    asm("loc_6806C08: push %ebx;");
    asm("loc_6806C09: call _sub_6807B00;");
    asm("loc_6806C0E: push %ebp;");
    asm("loc_6806C0F: push $0x38;");
    asm("loc_6806C11: push %ebx;");
    asm("loc_6806C12: call _sub_68071D0;");
    asm("loc_6806C17: push $0xFFFFFFFF;");
    asm("loc_6806C19: push %ebx;");
    asm("loc_6806C1A: call _sub_6806990;");
    asm("loc_6806C1F: add $0x30,%esp;");
    asm("loc_6806C22: pop %esi;");
    asm("loc_6806C23: pop %ebp;");
    asm("loc_6806C24: mov $1,%eax;");
    asm("loc_6806C29: pop %ebx;");
    asm("loc_6806C2A: add $0x10,%esp;");
    asm("loc_6806C2D: ret;");
    asm("loc_6806C2E: mov 4(%ebp),%eax;");
    asm("loc_6806C31: test %eax,%eax;");
    asm("loc_6806C33: jne loc_6806D36;");
    asm("loc_6806C39: push %ebx;");
    asm("loc_6806C3A: call _sub_6806E90;");
    asm("loc_6806C3F: push %ebx;");
    asm("loc_6806C40: call _sub_6806A20;");
    asm("loc_6806C45: lea 0x1C(%esp),%eax;");
    asm("loc_6806C49: push %eax;");
    asm("loc_6806C4A: push %ebx;");
    asm("loc_6806C4B: call _sub_6807450;");
    asm("loc_6806C50: push %esi;");
    asm("loc_6806C51: push %eax;");
    asm("loc_6806C52: push %ebx;");
    asm("loc_6806C53: call _sub_6807770;");
    asm("loc_6806C58: lea 0x30(%esp),%ecx;");
    asm("loc_6806C5C: push %ecx;");
    asm("loc_6806C5D: push %ebx;");
    asm("loc_6806C5E: call _sub_68070C0;");
    asm("loc_6806C63: add $0x24,%esp;");
    asm("loc_6806C66: pop %esi;");
    asm("loc_6806C67: pop %ebp;");
    asm("loc_6806C68: mov $1,%eax;");
    asm("loc_6806C6D: pop %ebx;");
    asm("loc_6806C6E: add $0x10,%esp;");
    asm("loc_6806C71: ret;");
    asm("loc_6806C72: push %ebx;");
    asm("loc_6806C73: call _sub_6806E90;");
    asm("loc_6806C78: push %ebx;");
    asm("loc_6806C79: call _sub_6806A20;");
    asm("loc_6806C7E: push %ebx;");
    asm("loc_6806C7F: call _sub_6808880;");
    asm("loc_6806C84: lea 0x20(%esp),%edx;");
    asm("loc_6806C88: push %edx;");
    asm("loc_6806C89: push %ebx;");
    asm("loc_6806C8A: mov %eax,%esi;");
    asm("loc_6806C8C: call _sub_68088E0;");
    asm("loc_6806C91: mov 0x14(%ebp),%edx;");
    asm("loc_6806C94: add %esi,%edx;");
    asm("loc_6806C96: push %esi;");
    asm("loc_6806C97: push %ebx;");
    asm("loc_6806C98: mov %edx,0x14(%ebp);");
    asm("loc_6806C9B: call _sub_6806E60;");
    asm("loc_6806CA0: lea 0x30(%esp),%eax;");
    asm("loc_6806CA4: push %eax;");
    asm("loc_6806CA5: push %esi;");
    asm("loc_6806CA6: push %ebx;");
    asm("loc_6806CA7: call _sub_6807060;");
    asm("loc_6806CAC: add $0x28,%esp;");
    asm("loc_6806CAF: pop %esi;");
    asm("loc_6806CB0: pop %ebp;");
    asm("loc_6806CB1: mov $1,%eax;");
    asm("loc_6806CB6: pop %ebx;");
    asm("loc_6806CB7: add $0x10,%esp;");
    asm("loc_6806CBA: ret;");
    asm("loc_6806CBB: push %ebx;");
    asm("loc_6806CBC: call _sub_6806E90;");
    asm("loc_6806CC1: lea 0x18(%esp),%ecx;");
    asm("loc_6806CC5: push %ecx;");
    asm("loc_6806CC6: push %ebx;");
    asm("loc_6806CC7: call _sub_6808140;");
    asm("loc_6806CCC: mov 0x20(%esp),%eax;");
    asm("loc_6806CD0: add $0xC,%esp;");
    asm("loc_6806CD3: cmp $4,%eax;");
    asm("loc_6806CD6: jne loc_6806D0A;");
    asm("loc_6806CD8: mov 0x18(%esp),%eax;");
    asm("loc_6806CDC: test %eax,%eax;");
    asm("loc_6806CDE: jne loc_6806CEE;");
    asm("loc_6806CE0: push $_data_680DB60;");
    asm("loc_6806CE5: push %ebx;");
    asm("loc_6806CE6: call _sub_680A850;");
    asm("loc_6806CEB: add $8,%esp;");
    asm("loc_6806CEE: mov 0x18(%esp),%edx;");
    asm("loc_6806CF2: push $0;");
    asm("loc_6806CF4: push %edx;");
    asm("loc_6806CF5: push %ebx;");
    asm("loc_6806CF6: call _sub_6807020;");
    asm("loc_6806CFB: add $0xC,%esp;");
    asm("loc_6806CFE: pop %esi;");
    asm("loc_6806CFF: pop %ebp;");
    asm("loc_6806D00: mov $1,%eax;");
    asm("loc_6806D05: pop %ebx;");
    asm("loc_6806D06: add $0x10,%esp;");
    asm("loc_6806D09: ret;");
    asm("loc_6806D0A: push $1;");
    asm("loc_6806D0C: lea 0x18(%esp),%eax;");
    asm("loc_6806D10: push %eax;");
    asm("loc_6806D11: push %ebx;");
    asm("loc_6806D12: call _sub_6808920;");
    asm("loc_6806D17: push %eax;");
    asm("loc_6806D18: push %ebx;");
    asm("loc_6806D19: call _sub_6806FE0;");
    asm("loc_6806D1E: add $0x14,%esp;");
    asm("loc_6806D21: pop %esi;");
    asm("loc_6806D22: pop %ebp;");
    asm("loc_6806D23: mov $1,%eax;");
    asm("loc_6806D28: pop %ebx;");
    asm("loc_6806D29: add $0x10,%esp;");
    asm("loc_6806D2C: ret;");
    asm("loc_6806D2D: push %ebx;");
    asm("loc_6806D2E: call _sub_6807210;");
    asm("loc_6806D33: add $4,%esp;");
    asm("loc_6806D36: pop %esi;");
    asm("loc_6806D37: pop %ebp;");
    asm("loc_6806D38: xor %eax,%eax;");
    asm("loc_6806D3A: pop %ebx;");
    asm("loc_6806D3B: add $0x10,%esp;");
    asm("loc_6806D3E: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_6806D40: .long loc_6806CBB;");
    asm(".long loc_6806D36;");
    asm(".long loc_6806BBC;");
    asm(".long loc_6806C2E;");
    asm(".long loc_6806AE0;");
    asm(".long loc_6806C72;");
    asm(".long loc_6806BE8;");
    asm(".long loc_6806AF6;");
    asm(".long loc_6806D2D;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6806AB0);
_naked _weak void _sub_6806E60() // _sub_6806E60
{
    __DEBUG_ASM(6806E60);
    // chunk 0x6806E60 _sub_6806E60
    asm("loc_6806E60: mov 4(%esp),%eax;");
    asm("loc_6806E64: mov 8(%eax),%eax;");
    asm("loc_6806E67: cmpl $0xFFFFFFFF,0x1C(%eax);");
    asm("loc_6806E6B: je loc_6806E8D;");
    asm("loc_6806E6D: mov 8(%esp),%ecx;");
    asm("loc_6806E71: test %ecx,%ecx;");
    asm("loc_6806E73: je loc_6806E8D;");
    asm("loc_6806E75: push %esi;");
    asm("loc_6806E76: push %edi;");
    asm("loc_6806E77: mov 0x1C(%eax),%edx;");
    asm("loc_6806E7A: mov (%eax),%esi;");
    asm("loc_6806E7C: mov 0x1C(%esi),%esi;");
    asm("loc_6806E7F: mov 0x20(%eax),%edi;");
    asm("loc_6806E82: sub %ecx,%edx;");
    asm("loc_6806E84: dec %ecx;");
    asm("loc_6806E85: mov %edi,4(%esi,%edx,8);");
    asm("loc_6806E89: jne loc_6806E77;");
    asm("loc_6806E8B: pop %edi;");
    asm("loc_6806E8C: pop %esi;");
    asm("loc_6806E8D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806E90() // _sub_6806E90
{
    __DEBUG_ASM(6806E90);
    // chunk 0x6806E90 _sub_6806E90
    asm("loc_6806E90: mov _data_680E604,%eax;");
    asm("loc_6806E95: mov 0x34(%eax),%ecx;");
    asm("loc_6806E98: test %ecx,%ecx;");
    asm("loc_6806E9A: push %esi;");
    asm("loc_6806E9B: je loc_6806EC3;");
    asm("loc_6806E9D: mov 8(%esp),%esi;");
    asm("loc_6806EA1: mov 8(%esi),%ecx;");
    asm("loc_6806EA4: mov 0x1C(%esi),%eax;");
    asm("loc_6806EA7: cmp 0x20(%ecx),%eax;");
    asm("loc_6806EAA: je loc_6806EC3;");
    asm("loc_6806EAC: push $0;");
    asm("loc_6806EAE: push %eax;");
    asm("loc_6806EAF: push $0x3C;");
    asm("loc_6806EB1: push %esi;");
    asm("loc_6806EB2: call _sub_6806ED0;");
    asm("loc_6806EB7: mov 8(%esi),%edx;");
    asm("loc_6806EBA: mov 0x1C(%esi),%eax;");
    asm("loc_6806EBD: add $0x10,%esp;");
    asm("loc_6806EC0: mov %eax,0x20(%edx);");
    asm("loc_6806EC3: pop %esi;");
    asm("loc_6806EC4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806ED0() // _sub_6806ED0
{
    __DEBUG_ASM(6806ED0);
    // chunk 0x6806ED0 _sub_6806ED0
    asm("loc_6806ED0: push %ebx;");
    asm("loc_6806ED1: mov 0x10(%esp),%ebx;");
    asm("loc_6806ED5: push %esi;");
    asm("loc_6806ED6: push %edi;");
    asm("loc_6806ED7: push %ebx;");
    asm("loc_6806ED8: call _sub_6806FB0;");
    asm("loc_6806EDD: mov 0x14(%esp),%esi;");
    asm("loc_6806EE1: mov %eax,%edi;");
    asm("loc_6806EE3: mov 8(%esi),%eax;");
    asm("loc_6806EE6: push %edi;");
    asm("loc_6806EE7: push %eax;");
    asm("loc_6806EE8: call _sub_68068A0;");
    asm("loc_6806EED: mov 0x28(%esp),%ecx;");
    asm("loc_6806EF1: mov 0x20(%esp),%edx;");
    asm("loc_6806EF5: mov 8(%esi),%eax;");
    asm("loc_6806EF8: push %ecx;");
    asm("loc_6806EF9: mov 8(%eax),%ecx;");
    asm("loc_6806EFC: push %ebx;");
    asm("loc_6806EFD: push %edx;");
    asm("loc_6806EFE: push %ecx;");
    asm("loc_6806EFF: push %esi;");
    asm("loc_6806F00: call _sub_6806F20;");
    asm("loc_6806F05: mov 8(%esi),%esi;");
    asm("loc_6806F08: mov 8(%esi),%eax;");
    asm("loc_6806F0B: add $0x20,%esp;");
    asm("loc_6806F0E: add %edi,%eax;");
    asm("loc_6806F10: pop %edi;");
    asm("loc_6806F11: mov %eax,8(%esi);");
    asm("loc_6806F14: pop %esi;");
    asm("loc_6806F15: pop %ebx;");
    asm("loc_6806F16: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806F20() // _sub_6806F20
{
    __DEBUG_ASM(6806F20);
    // chunk 0x6806F20 _sub_6806F20
    asm("loc_6806F20: mov 0x14(%esp),%edx;");
    asm("loc_6806F24: push %esi;");
    asm("loc_6806F25: push %edi;");
    asm("loc_6806F26: mov 0xC(%esp),%edi;");
    asm("loc_6806F2A: mov 8(%edi),%eax;");
    asm("loc_6806F2D: mov (%eax),%ecx;");
    asm("loc_6806F2F: mov 0x10(%ecx),%esi;");
    asm("loc_6806F32: push %edx;");
    asm("loc_6806F33: push %edi;");
    asm("loc_6806F34: call _sub_6806990;");
    asm("loc_6806F39: mov 0x20(%esp),%ecx;");
    asm("loc_6806F3D: add $8,%esp;");
    asm("loc_6806F40: cmp $0xFF,%ecx;");
    asm("loc_6806F46: jg loc_6806F5A;");
    asm("loc_6806F48: mov 0x10(%esp),%eax;");
    asm("loc_6806F4C: mov 0x14(%esp),%dl;");
    asm("loc_6806F50: mov %dl,(%esi,%eax);");
    asm("loc_6806F53: pop %edi;");
    asm("loc_6806F54: mov %cl,1(%esi,%eax);");
    asm("loc_6806F58: pop %esi;");
    asm("loc_6806F59: ret;");
    asm("loc_6806F5A: cmp $0xFFFFFF,%ecx;");
    asm("loc_6806F60: jle loc_6806F73;");
    asm("loc_6806F62: push $_data_680DB70;");
    asm("loc_6806F67: push %edi;");
    asm("loc_6806F68: call _sub_680A850;");
    asm("loc_6806F6D: add $8,%esp;");
    asm("loc_6806F70: pop %edi;");
    asm("loc_6806F71: pop %esi;");
    asm("loc_6806F72: ret;");
    asm("loc_6806F73: cmp $0xFFFF,%ecx;");
    asm("loc_6806F79: mov 0x10(%esp),%eax;");
    asm("loc_6806F7D: jle loc_6806F8F;");
    asm("loc_6806F7F: mov %ecx,%edx;");
    asm("loc_6806F81: sar $0x10,%edx;");
    asm("loc_6806F84: movb $0x3E,(%esi,%eax);");
    asm("loc_6806F88: mov %dl,1(%esi,%eax);");
    asm("loc_6806F8C: add $2,%eax;");
    asm("loc_6806F8F: mov 0x14(%esp),%dl;");
    asm("loc_6806F93: dec %dl;");
    asm("loc_6806F95: mov %dl,(%esi,%eax);");
    asm("loc_6806F98: mov %ecx,%edx;");
    asm("loc_6806F9A: sar $8,%edx;");
    asm("loc_6806F9D: mov %dl,1(%esi,%eax);");
    asm("loc_6806FA1: pop %edi;");
    asm("loc_6806FA2: mov %cl,2(%esi,%eax);");
    asm("loc_6806FA6: pop %esi;");
    asm("loc_6806FA7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806FB0() // _sub_6806FB0
{
    __DEBUG_ASM(6806FB0);
    // chunk 0x6806FB0 _sub_6806FB0
    asm("loc_6806FB0: mov 4(%esp),%eax;");
    asm("loc_6806FB4: cmp $0xFF,%eax;");
    asm("loc_6806FB9: jg loc_6806FC1;");
    asm("loc_6806FBB: mov $2,%eax;");
    asm("loc_6806FC0: ret;");
    asm("loc_6806FC1: xor %ecx,%ecx;");
    asm("loc_6806FC3: cmp $0xFFFF,%eax;");
    asm("loc_6806FC8: setg %cl;");
    asm("loc_6806FCB: dec %ecx;");
    asm("loc_6806FCC: and $0xFFFFFFFE,%ecx;");
    asm("loc_6806FCF: add $5,%ecx;");
    asm("loc_6806FD2: mov %ecx,%eax;");
    asm("loc_6806FD4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6806FE0() // _sub_6806FE0
{
    __DEBUG_ASM(6806FE0);
    // chunk 0x6806FE0 _sub_6806FE0
    asm("loc_6806FE0: mov 8(%esp),%eax;");
    asm("loc_6806FE4: test %eax,%eax;");
    asm("loc_6806FE6: jle loc_6806FFE;");
    asm("loc_6806FE8: mov 4(%esp),%edx;");
    asm("loc_6806FEC: mov %eax,%ecx;");
    asm("loc_6806FEE: neg %ecx;");
    asm("loc_6806FF0: push %ecx;");
    asm("loc_6806FF1: push %eax;");
    asm("loc_6806FF2: push $5;");
    asm("loc_6806FF4: push %edx;");
    asm("loc_6806FF5: call _sub_6806ED0;");
    asm("loc_6806FFA: add $0x10,%esp;");
    asm("loc_6806FFD: ret;");
    asm("loc_6806FFE: jge loc_680701A;");
    asm("loc_6807000: mov %eax,%ecx;");
    asm("loc_6807002: neg %ecx;");
    asm("loc_6807004: push %ecx;");
    asm("loc_6807005: or $0xFFFFFFFF,%edx;");
    asm("loc_6807008: sub %eax,%edx;");
    asm("loc_680700A: mov 8(%esp),%eax;");
    asm("loc_680700E: push %edx;");
    asm("loc_680700F: push $4;");
    asm("loc_6807011: push %eax;");
    asm("loc_6807012: call _sub_6806ED0;");
    asm("loc_6807017: add $0x10,%esp;");
    asm("loc_680701A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807020() // _sub_6807020
{
    __DEBUG_ASM(6807020);
    // chunk 0x6807020 _sub_6807020
    asm("loc_6807020: push %esi;");
    asm("loc_6807021: mov 0xC(%esp),%esi;");
    asm("loc_6807025: test %esi,%esi;");
    asm("loc_6807027: jle loc_6807051;");
    asm("loc_6807029: push %edi;");
    asm("loc_680702A: mov 0xC(%esp),%edi;");
    asm("loc_680702E: mov 8(%edi),%eax;");
    asm("loc_6807031: mov (%eax),%ecx;");
    asm("loc_6807033: mov 0x10(%ecx),%ecx;");
    asm("loc_6807036: mov 0x14(%esp),%eax;");
    asm("loc_680703A: xor %edx,%edx;");
    asm("loc_680703C: mov %al,-1(%ecx,%esi);");
    asm("loc_6807040: mov (%ecx,%esi),%dl;");
    asm("loc_6807043: sub %edx,%eax;");
    asm("loc_6807045: dec %eax;");
    asm("loc_6807046: push %eax;");
    asm("loc_6807047: push %edi;");
    asm("loc_6807048: call _sub_6806990;");
    asm("loc_680704D: add $8,%esp;");
    asm("loc_6807050: pop %edi;");
    asm("loc_6807051: pop %esi;");
    asm("loc_6807052: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807060() // _sub_6807060
{
    __DEBUG_ASM(6807060);
    // chunk 0x6807060 _sub_6807060
    asm("loc_6807060: mov 0xC(%esp),%eax;");
    asm("loc_6807064: mov 8(%esp),%edx;");
    asm("loc_6807068: push %esi;");
    asm("loc_6807069: mov (%eax),%esi;");
    asm("loc_680706B: mov 4(%eax),%eax;");
    asm("loc_680706E: sub %edx,%esi;");
    asm("loc_6807070: test %eax,%eax;");
    asm("loc_6807072: jne loc_6807084;");
    asm("loc_6807074: mov 8(%esp),%eax;");
    asm("loc_6807078: push %esi;");
    asm("loc_6807079: push %eax;");
    asm("loc_680707A: call _sub_6806FE0;");
    asm("loc_680707F: add $8,%esp;");
    asm("loc_6807082: pop %esi;");
    asm("loc_6807083: ret;");
    asm("loc_6807084: dec %esi;");
    asm("loc_6807085: test %esi,%esi;");
    asm("loc_6807087: jg loc_680709C;");
    asm("loc_6807089: mov 8(%esp),%ecx;");
    asm("loc_680708D: neg %esi;");
    asm("loc_680708F: push %esi;");
    asm("loc_6807090: push %eax;");
    asm("loc_6807091: push %ecx;");
    asm("loc_6807092: call _sub_6807020;");
    asm("loc_6807097: add $0xC,%esp;");
    asm("loc_680709A: pop %esi;");
    asm("loc_680709B: ret;");
    asm("loc_680709C: push %edi;");
    asm("loc_680709D: mov 0xC(%esp),%edi;");
    asm("loc_68070A1: push $0;");
    asm("loc_68070A3: push %eax;");
    asm("loc_68070A4: push %edi;");
    asm("loc_68070A5: call _sub_6807020;");
    asm("loc_68070AA: push %esi;");
    asm("loc_68070AB: push %edi;");
    asm("loc_68070AC: call _sub_6806FE0;");
    asm("loc_68070B1: add $0x14,%esp;");
    asm("loc_68070B4: pop %edi;");
    asm("loc_68070B5: pop %esi;");
    asm("loc_68070B6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68070C0() // _sub_68070C0
{
    __DEBUG_ASM(68070C0);
    // chunk 0x68070C0 _sub_68070C0
    asm("loc_68070C0: mov 8(%esp),%ecx;");
    asm("loc_68070C4: mov (%ecx),%eax;");
    asm("loc_68070C6: sub $0,%eax;");
    asm("loc_68070C9: je loc_68070FB;");
    asm("loc_68070CB: dec %eax;");
    asm("loc_68070CC: je loc_68070E5;");
    asm("loc_68070CE: sub $2,%eax;");
    asm("loc_68070D1: jne loc_6807110;");
    asm("loc_68070D3: mov 4(%esp),%eax;");
    asm("loc_68070D7: push $0xFFFFFFFD;");
    asm("loc_68070D9: push $0x1A;");
    asm("loc_68070DB: push %eax;");
    asm("loc_68070DC: call _sub_6806960;");
    asm("loc_68070E1: add $0xC,%esp;");
    asm("loc_68070E4: ret;");
    asm("loc_68070E5: mov 4(%ecx),%ecx;");
    asm("loc_68070E8: mov 4(%esp),%edx;");
    asm("loc_68070EC: push $0xFFFFFFFF;");
    asm("loc_68070EE: push %ecx;");
    asm("loc_68070EF: push $0x17;");
    asm("loc_68070F1: push %edx;");
    asm("loc_68070F2: call _sub_6806ED0;");
    asm("loc_68070F7: add $0x10,%esp;");
    asm("loc_68070FA: ret;");
    asm("loc_68070FB: mov 4(%ecx),%eax;");
    asm("loc_68070FE: mov 4(%esp),%ecx;");
    asm("loc_6807102: push $0xFFFFFFFF;");
    asm("loc_6807104: push %eax;");
    asm("loc_6807105: push $0x19;");
    asm("loc_6807107: push %ecx;");
    asm("loc_6807108: call _sub_6806ED0;");
    asm("loc_680710D: add $0x10,%esp;");
    asm("loc_6807110: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807120() // _sub_6807120
{
    __DEBUG_ASM(6807120);
    // chunk 0x6807120 _sub_6807120
    asm("loc_6807120: mov 8(%esp),%eax;");
    asm("loc_6807124: mov 0x10(%esp),%ecx;");
    asm("loc_6807128: mov 0xC(%esp),%edx;");
    asm("loc_680712C: sub %eax,%ecx;");
    asm("loc_680712E: sub $2,%ecx;");
    asm("loc_6807131: push %ecx;");
    asm("loc_6807132: push %edx;");
    asm("loc_6807133: push %eax;");
    asm("loc_6807134: mov 0x10(%esp),%eax;");
    asm("loc_6807138: push %eax;");
    asm("loc_6807139: call _sub_6807150;");
    asm("loc_680713E: add $0x10,%esp;");
    asm("loc_6807141: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807150() // _sub_6807150
{
    __DEBUG_ASM(6807150);
    // chunk 0x6807150 _sub_6807150
    asm("loc_6807150: mov 0x10(%esp),%eax;");
    asm("loc_6807154: push %ebx;");
    asm("loc_6807155: push %esi;");
    asm("loc_6807156: push %eax;");
    asm("loc_6807157: call _sub_6806FB0;");
    asm("loc_680715C: mov 0x14(%esp),%ebx;");
    asm("loc_6807160: mov %eax,%esi;");
    asm("loc_6807162: sub $2,%esi;");
    asm("loc_6807165: add $4,%esp;");
    asm("loc_6807168: test %esi,%esi;");
    asm("loc_680716A: jle loc_68071A3;");
    asm("loc_680716C: mov 0xC(%esp),%ecx;");
    asm("loc_6807170: push %ebp;");
    asm("loc_6807171: push %edi;");
    asm("loc_6807172: mov 8(%ecx),%edi;");
    asm("loc_6807175: mov (%edi),%ebp;");
    asm("loc_6807177: push %esi;");
    asm("loc_6807178: push %edi;");
    asm("loc_6807179: call _sub_68068A0;");
    asm("loc_680717E: mov 0x10(%ebp),%eax;");
    asm("loc_6807181: mov 8(%edi),%edx;");
    asm("loc_6807184: lea (%eax,%ebx),%ecx;");
    asm("loc_6807187: sub %ebx,%edx;");
    asm("loc_6807189: push %edx;");
    asm("loc_680718A: add %esi,%eax;");
    asm("loc_680718C: push %ecx;");
    asm("loc_680718D: add %ebx,%eax;");
    asm("loc_680718F: push %eax;");
    asm("loc_6807190: calll *_import_680C02C;");
    asm("loc_6807196: mov 8(%edi),%eax;");
    asm("loc_6807199: add $0x14,%esp;");
    asm("loc_680719C: add %esi,%eax;");
    asm("loc_680719E: mov %eax,8(%edi);");
    asm("loc_68071A1: pop %edi;");
    asm("loc_68071A2: pop %ebp;");
    asm("loc_68071A3: mov 0x18(%esp),%edx;");
    asm("loc_68071A7: mov 0x14(%esp),%eax;");
    asm("loc_68071AB: mov 0xC(%esp),%ecx;");
    asm("loc_68071AF: push $0;");
    asm("loc_68071B1: push %edx;");
    asm("loc_68071B2: push %eax;");
    asm("loc_68071B3: push %ebx;");
    asm("loc_68071B4: push %ecx;");
    asm("loc_68071B5: call _sub_6806F20;");
    asm("loc_68071BA: add $0x14,%esp;");
    asm("loc_68071BD: mov %esi,%eax;");
    asm("loc_68071BF: pop %esi;");
    asm("loc_68071C0: pop %ebx;");
    asm("loc_68071C1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68071D0() // _sub_68071D0
{
    __DEBUG_ASM(68071D0);
    // chunk 0x68071D0 _sub_68071D0
    asm("loc_68071D0: mov 0xC(%esp),%edx;");
    asm("loc_68071D4: push %esi;");
    asm("loc_68071D5: push %edi;");
    asm("loc_68071D6: mov 0xC(%esp),%edi;");
    asm("loc_68071DA: mov 8(%edi),%eax;");
    asm("loc_68071DD: mov 8(%eax),%esi;");
    asm("loc_68071E0: sub %edx,%esi;");
    asm("loc_68071E2: add $2,%esi;");
    asm("loc_68071E5: push $0;");
    asm("loc_68071E7: push %esi;");
    asm("loc_68071E8: call _sub_6806FB0;");
    asm("loc_68071ED: mov 0x18(%esp),%edx;");
    asm("loc_68071F1: add $4,%esp;");
    asm("loc_68071F4: lea -2(%eax,%esi),%ecx;");
    asm("loc_68071F8: push %ecx;");
    asm("loc_68071F9: push %edx;");
    asm("loc_68071FA: push %edi;");
    asm("loc_68071FB: call _sub_6806ED0;");
    asm("loc_6807200: add $0x10,%esp;");
    asm("loc_6807203: pop %edi;");
    asm("loc_6807204: pop %esi;");
    asm("loc_6807205: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807210() // _sub_6807210
{
    __DEBUG_ASM(6807210);
    // chunk 0x6807210 _sub_6807210
    asm("loc_6807210: mov 4(%esp),%eax;");
    asm("loc_6807214: push $_data_680DB80;");
    asm("loc_6807219: push %eax;");
    asm("loc_680721A: call _sub_680A850;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807230() // _sub_6807230
{
    __DEBUG_ASM(6807230);
    // chunk 0x6807230 _sub_6807230
    asm("loc_6807230: mov 8(%esp),%eax;");
    asm("loc_6807234: push %esi;");
    asm("loc_6807235: mov 8(%esp),%esi;");
    asm("loc_6807239: cmp %eax,4(%esi);");
    asm("loc_680723C: je loc_6807248;");
    asm("loc_680723E: push %eax;");
    asm("loc_680723F: push %esi;");
    asm("loc_6807240: call _sub_6807260;");
    asm("loc_6807245: add $8,%esp;");
    asm("loc_6807248: push %esi;");
    asm("loc_6807249: call _sub_6806A20;");
    asm("loc_680724E: add $4,%esp;");
    asm("loc_6807251: pop %esi;");
    asm("loc_6807252: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807260() // _sub_6807260
{
    __DEBUG_ASM(6807260);
    // chunk 0x6807260 _sub_6807260
    asm("loc_6807260: mov 8(%esp),%ecx;");
    asm("loc_6807264: sub $0x74,%esp;");
    asm("loc_6807267: lea (%esp),%eax;");
    asm("loc_680726B: push %eax;");
    asm("loc_680726C: push %ecx;");
    asm("loc_680726D: call _sub_680A870;");
    asm("loc_6807272: lea 8(%esp),%edx;");
    asm("loc_6807276: push %edx;");
    asm("loc_6807277: lea 0x1C(%esp),%eax;");
    asm("loc_680727B: push $_data_680DB94;");
    asm("loc_6807280: push %eax;");
    asm("loc_6807281: calll *_import_680C060;");
    asm("loc_6807287: mov 0x8C(%esp),%edx;");
    asm("loc_680728E: lea 0x24(%esp),%ecx;");
    asm("loc_6807292: push %ecx;");
    asm("loc_6807293: push %edx;");
    asm("loc_6807294: call _sub_680A850;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68072A0() // _sub_68072A0
{
    __DEBUG_ASM(68072A0);
    // chunk 0x68072A0 _sub_68072A0
    asm("loc_68072A0: mov 8(%esp),%eax;");
    asm("loc_68072A4: push %esi;");
    asm("loc_68072A5: mov 8(%esp),%esi;");
    asm("loc_68072A9: cmp %eax,4(%esi);");
    asm("loc_68072AC: je loc_68072C2;");
    asm("loc_68072AE: mov 0x14(%esp),%ecx;");
    asm("loc_68072B2: mov 0x10(%esp),%edx;");
    asm("loc_68072B6: push %ecx;");
    asm("loc_68072B7: push %edx;");
    asm("loc_68072B8: push %eax;");
    asm("loc_68072B9: push %esi;");
    asm("loc_68072BA: call _sub_68072E0;");
    asm("loc_68072BF: add $0x10,%esp;");
    asm("loc_68072C2: push %esi;");
    asm("loc_68072C3: call _sub_6806E90;");
    asm("loc_68072C8: push %esi;");
    asm("loc_68072C9: call _sub_6806A20;");
    asm("loc_68072CE: add $8,%esp;");
    asm("loc_68072D1: pop %esi;");
    asm("loc_68072D2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68072E0() // _sub_68072E0
{
    __DEBUG_ASM(68072E0);
    // chunk 0x68072E0 _sub_68072E0
    asm("loc_68072E0: sub $0x84,%esp;");
    asm("loc_68072E6: push %esi;");
    asm("loc_68072E7: mov 0x8C(%esp),%esi;");
    asm("loc_68072EE: mov 0x1C(%esi),%eax;");
    asm("loc_68072F1: push %edi;");
    asm("loc_68072F2: mov 0x9C(%esp),%edi;");
    asm("loc_68072F9: cmp %eax,%edi;");
    asm("loc_68072FB: jne loc_6807317;");
    asm("loc_68072FD: mov 0x94(%esp),%eax;");
    asm("loc_6807304: push %eax;");
    asm("loc_6807305: push %esi;");
    asm("loc_6807306: call _sub_6807260;");
    asm("loc_680730B: add $8,%esp;");
    asm("loc_680730E: pop %edi;");
    asm("loc_680730F: pop %esi;");
    asm("loc_6807310: add $0x84,%esp;");
    asm("loc_6807316: ret;");
    asm("loc_6807317: mov 0x94(%esp),%edx;");
    asm("loc_680731E: lea 8(%esp),%ecx;");
    asm("loc_6807322: push %ecx;");
    asm("loc_6807323: push %edx;");
    asm("loc_6807324: call _sub_680A870;");
    asm("loc_6807329: mov 0xA0(%esp),%ecx;");
    asm("loc_6807330: lea 0x20(%esp),%eax;");
    asm("loc_6807334: push %eax;");
    asm("loc_6807335: push %ecx;");
    asm("loc_6807336: call _sub_680A870;");
    asm("loc_680733B: push %edi;");
    asm("loc_680733C: lea 0x2C(%esp),%edx;");
    asm("loc_6807340: push %edx;");
    asm("loc_6807341: lea 0x20(%esp),%eax;");
    asm("loc_6807345: push %eax;");
    asm("loc_6807346: lea 0x44(%esp),%ecx;");
    asm("loc_680734A: push $_data_680DBA4;");
    asm("loc_680734F: push %ecx;");
    asm("loc_6807350: calll *_import_680C060;");
    asm("loc_6807356: lea 0x4C(%esp),%edx;");
    asm("loc_680735A: push %edx;");
    asm("loc_680735B: push %esi;");
    asm("loc_680735C: call _sub_680A850;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807370() // _sub_6807370
{
    __DEBUG_ASM(6807370);
    // chunk 0x6807370 _sub_6807370
    asm("loc_6807370: push %esi;");
    asm("loc_6807371: mov 8(%esp),%esi;");
    asm("loc_6807375: push %esi;");
    asm("loc_6807376: call _sub_6807B00;");
    asm("loc_680737B: push %esi;");
    asm("loc_680737C: call _sub_6807390;");
    asm("loc_6807381: add $8,%esp;");
    asm("loc_6807384: pop %esi;");
    asm("loc_6807385: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807390() // _sub_6807390
{
    __DEBUG_ASM(6807390);
    // chunk 0x6807390 _sub_6807390
    asm("loc_6807390: push %esi;");
    asm("loc_6807391: mov 8(%esp),%esi;");
    asm("loc_6807395: push $0xFFFFFFFF;");
    asm("loc_6807397: push %esi;");
    asm("loc_6807398: call _sub_6806990;");
    asm("loc_680739D: push %esi;");
    asm("loc_680739E: call _sub_68073B0;");
    asm("loc_68073A3: add $0xC,%esp;");
    asm("loc_68073A6: pop %esi;");
    asm("loc_68073A7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68073B0() // _sub_68073B0
{
    __DEBUG_ASM(68073B0);
    // chunk 0x68073B0 _sub_68073B0
    asm("loc_68073B0: push %esi;");
    asm("loc_68073B1: mov 8(%esp),%esi;");
    asm("loc_68073B5: mov 8(%esi),%eax;");
    asm("loc_68073B8: push %edi;");
    asm("loc_68073B9: mov 8(%eax),%edi;");
    asm("loc_68073BC: push $2;");
    asm("loc_68073BE: push %eax;");
    asm("loc_68073BF: call _sub_68068A0;");
    asm("loc_68073C4: mov 8(%esi),%eax;");
    asm("loc_68073C7: mov 8(%eax),%ecx;");
    asm("loc_68073CA: add $2,%ecx;");
    asm("loc_68073CD: add $8,%esp;");
    asm("loc_68073D0: mov %ecx,8(%eax);");
    asm("loc_68073D3: mov %edi,%eax;");
    asm("loc_68073D5: pop %edi;");
    asm("loc_68073D6: pop %esi;");
    asm("loc_68073D7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68073E0() // _sub_68073E0
{
    __DEBUG_ASM(68073E0);
    // chunk 0x68073E0 _sub_68073E0
    asm("loc_68073E0: push %ebx;");
    asm("loc_68073E1: mov 8(%esp),%ebx;");
    asm("loc_68073E5: push %esi;");
    asm("loc_68073E6: mov 8(%ebx),%esi;");
    asm("loc_68073E9: push %edi;");
    asm("loc_68073EA: mov 0x14(%esi),%edi;");
    asm("loc_68073ED: push %ebx;");
    asm("loc_68073EE: call _sub_6806A40;");
    asm("loc_68073F3: mov 0x14(%esi),%eax;");
    asm("loc_68073F6: sub %edi,%eax;");
    asm("loc_68073F8: push %eax;");
    asm("loc_68073F9: push %ebx;");
    asm("loc_68073FA: call _sub_6806FE0;");
    asm("loc_68073FF: mov 0x14(%esi),%eax;");
    asm("loc_6807402: add $0xC,%esp;");
    asm("loc_6807405: cmp %edi,%eax;");
    asm("loc_6807407: jle loc_6807423;");
    asm("loc_6807409: mov 0x20(%esi),%ecx;");
    asm("loc_680740C: push %ecx;");
    asm("loc_680740D: push %esi;");
    asm("loc_680740E: call _sub_6807430;");
    asm("loc_6807413: mov 0x14(%esi),%ecx;");
    asm("loc_6807416: add $8,%esp;");
    asm("loc_6807419: dec %ecx;");
    asm("loc_680741A: mov %ecx,%eax;");
    asm("loc_680741C: cmp %edi,%eax;");
    asm("loc_680741E: mov %ecx,0x14(%esi);");
    asm("loc_6807421: jg loc_6807409;");
    asm("loc_6807423: pop %edi;");
    asm("loc_6807424: pop %esi;");
    asm("loc_6807425: pop %ebx;");
    asm("loc_6807426: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807430() // _sub_6807430
{
    __DEBUG_ASM(6807430);
    // chunk 0x6807430 _sub_6807430
    asm("loc_6807430: mov 8(%esp),%eax;");
    asm("loc_6807434: mov 4(%esp),%ecx;");
    asm("loc_6807438: push %eax;");
    asm("loc_6807439: push $0;");
    asm("loc_680743B: push %ecx;");
    asm("loc_680743C: call _sub_68069D0;");
    asm("loc_6807441: add $0xC,%esp;");
    asm("loc_6807444: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807450() // _sub_6807450
{
    __DEBUG_ASM(6807450);
    // chunk 0x6807450 _sub_6807450
    asm("loc_6807450: push %ebx;");
    asm("loc_6807451: push %esi;");
    asm("loc_6807452: mov 0xC(%esp),%esi;");
    asm("loc_6807456: push %edi;");
    asm("loc_6807457: mov 0x14(%esp),%edi;");
    asm("loc_680745B: xor %ebx,%ebx;");
    asm("loc_680745D: push %ebx;");
    asm("loc_680745E: push %edi;");
    asm("loc_680745F: push %esi;");
    asm("loc_6807460: call _sub_6807750;");
    asm("loc_6807465: add $4,%esp;");
    asm("loc_6807468: push %eax;");
    asm("loc_6807469: push %esi;");
    asm("loc_680746A: call _sub_68074D0;");
    asm("loc_680746F: mov 4(%esi),%eax;");
    asm("loc_6807472: add $0x10,%esp;");
    asm("loc_6807475: cmp $0x3A,%eax;");
    asm("loc_6807478: je loc_680747F;");
    asm("loc_680747A: cmp $0x2E,%eax;");
    asm("loc_680747D: jne loc_68074AA;");
    asm("loc_680747F: xor %ebx,%ebx;");
    asm("loc_6807481: cmp $0x3A,%eax;");
    asm("loc_6807484: push %esi;");
    asm("loc_6807485: sete %bl;");
    asm("loc_6807488: call _sub_6806A20;");
    asm("loc_680748D: push %edi;");
    asm("loc_680748E: push %esi;");
    asm("loc_680748F: call _sub_6807630;");
    asm("loc_6807494: push %esi;");
    asm("loc_6807495: call _sub_6807710;");
    asm("loc_680749A: push %eax;");
    asm("loc_680749B: push %esi;");
    asm("loc_680749C: call _sub_68074B0;");
    asm("loc_68074A1: add $0x18,%esp;");
    asm("loc_68074A4: movl $3,(%edi);");
    asm("loc_68074AA: pop %edi;");
    asm("loc_68074AB: pop %esi;");
    asm("loc_68074AC: mov %ebx,%eax;");
    asm("loc_68074AE: pop %ebx;");
    asm("loc_68074AF: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68074B0() // _sub_68074B0
{
    __DEBUG_ASM(68074B0);
    // chunk 0x68074B0 _sub_68074B0
    asm("loc_68074B0: mov 8(%esp),%eax;");
    asm("loc_68074B4: mov 4(%esp),%ecx;");
    asm("loc_68074B8: push $1;");
    asm("loc_68074BA: push %eax;");
    asm("loc_68074BB: push $0xB;");
    asm("loc_68074BD: push %ecx;");
    asm("loc_68074BE: call _sub_6806ED0;");
    asm("loc_68074C3: add $0x10,%esp;");
    asm("loc_68074C6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68074D0() // _sub_68074D0
{
    __DEBUG_ASM(68074D0);
    // chunk 0x68074D0 _sub_68074D0
    asm("loc_68074D0: mov 0x10(%esp),%eax;");
    asm("loc_68074D4: test %eax,%eax;");
    asm("loc_68074D6: push %ebx;");
    asm("loc_68074D7: push %ebp;");
    asm("loc_68074D8: mov 0xC(%esp),%ebp;");
    asm("loc_68074DC: push %edi;");
    asm("loc_68074DD: je loc_68074E7;");
    asm("loc_68074DF: mov 8(%ebp),%eax;");
    asm("loc_68074E2: mov 4(%eax),%ebx;");
    asm("loc_68074E5: jmp loc_68074EA;");
    asm("loc_68074E7: mov 8(%ebp),%ebx;");
    asm("loc_68074EA: mov 0x14(%esp),%edi;");
    asm("loc_68074EE: push %edi;");
    asm("loc_68074EF: push %ebx;");
    asm("loc_68074F0: call _sub_6807600;");
    asm("loc_68074F5: add $8,%esp;");
    asm("loc_68074F8: test %eax,%eax;");
    asm("loc_68074FA: jl loc_680750D;");
    asm("loc_68074FC: mov 0x18(%esp),%ecx;");
    asm("loc_6807500: pop %edi;");
    asm("loc_6807501: pop %ebp;");
    asm("loc_6807502: movl $1,(%ecx);");
    asm("loc_6807508: mov %eax,4(%ecx);");
    asm("loc_680750B: pop %ebx;");
    asm("loc_680750C: ret;");
    asm("loc_680750D: push %esi;");
    asm("loc_680750E: mov 4(%ebx),%esi;");
    asm("loc_6807511: test %esi,%esi;");
    asm("loc_6807513: je loc_680753C;");
    asm("loc_6807515: push %edi;");
    asm("loc_6807516: push %esi;");
    asm("loc_6807517: call _sub_6807600;");
    asm("loc_680751C: add $8,%esp;");
    asm("loc_680751F: test %eax,%eax;");
    asm("loc_6807521: jl loc_6807535;");
    asm("loc_6807523: lea 0x28(%edi),%ecx;");
    asm("loc_6807526: push %ecx;");
    asm("loc_6807527: push $_data_680DBD0;");
    asm("loc_680752C: push %ebp;");
    asm("loc_680752D: call _sub_680A800;");
    asm("loc_6807532: add $0xC,%esp;");
    asm("loc_6807535: mov 4(%esi),%esi;");
    asm("loc_6807538: test %esi,%esi;");
    asm("loc_680753A: jne loc_6807515;");
    asm("loc_680753C: mov 0x1C(%esp),%esi;");
    asm("loc_6807540: push %edi;");
    asm("loc_6807541: push %ebx;");
    asm("loc_6807542: movl $0,(%esi);");
    asm("loc_6807548: call _sub_6807560;");
    asm("loc_680754D: add $8,%esp;");
    asm("loc_6807550: mov %eax,4(%esi);");
    asm("loc_6807553: pop %esi;");
    asm("loc_6807554: pop %edi;");
    asm("loc_6807555: pop %ebp;");
    asm("loc_6807556: pop %ebx;");
    asm("loc_6807557: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807560() // _sub_6807560
{
    __DEBUG_ASM(6807560);
    // chunk 0x6807560 _sub_6807560
    asm("loc_6807560: mov 4(%esp),%edx;");
    asm("loc_6807564: push %ebx;");
    asm("loc_6807565: push %esi;");
    asm("loc_6807566: mov (%edx),%esi;");
    asm("loc_6807568: mov 0xC(%esi),%ecx;");
    asm("loc_680756B: push %edi;");
    asm("loc_680756C: mov 0x14(%esp),%edi;");
    asm("loc_6807570: mov 0xC(%edi),%eax;");
    asm("loc_6807573: cmp %ecx,%eax;");
    asm("loc_6807575: jge loc_680758B;");
    asm("loc_6807577: mov 8(%esi),%ebx;");
    asm("loc_680757A: mov %eax,%ecx;");
    asm("loc_680757C: shl $4,%ecx;");
    asm("loc_680757F: add %ebx,%ecx;");
    asm("loc_6807581: cmpl $0xFFFFFFFE,(%ecx);");
    asm("loc_6807584: jne loc_680758B;");
    asm("loc_6807586: cmp %edi,8(%ecx);");
    asm("loc_6807589: je loc_68075AD;");
    asm("loc_680758B: push %edx;");
    asm("loc_680758C: call _sub_68075C0;");
    asm("loc_6807591: mov 8(%esi),%edx;");
    asm("loc_6807594: mov %eax,%ecx;");
    asm("loc_6807596: add $4,%esp;");
    asm("loc_6807599: shl $4,%ecx;");
    asm("loc_680759C: movl $0xFFFFFFFE,(%edx,%ecx);");
    asm("loc_68075A3: mov 8(%esi),%edx;");
    asm("loc_68075A6: mov %edi,8(%edx,%ecx);");
    asm("loc_68075AA: mov %eax,0xC(%edi);");
    asm("loc_68075AD: pop %edi;");
    asm("loc_68075AE: pop %esi;");
    asm("loc_68075AF: pop %ebx;");
    asm("loc_68075B0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68075C0() // _sub_68075C0
{
    __DEBUG_ASM(68075C0);
    // chunk 0x68075C0 _sub_68075C0
    asm("loc_68075C0: mov 4(%esp),%eax;");
    asm("loc_68075C4: push %esi;");
    asm("loc_68075C5: mov (%eax),%esi;");
    asm("loc_68075C7: mov 0xC(%esi),%ecx;");
    asm("loc_68075CA: mov 8(%esi),%edx;");
    asm("loc_68075CD: push $0xFFFFFF;");
    asm("loc_68075D2: push $_data_680DBF8;");
    asm("loc_68075D7: push $0x10;");
    asm("loc_68075D9: push $1;");
    asm("loc_68075DB: push %ecx;");
    asm("loc_68075DC: push %edx;");
    asm("loc_68075DD: call _sub_6806550;");
    asm("loc_68075E2: mov %eax,8(%esi);");
    asm("loc_68075E5: mov 0xC(%esi),%eax;");
    asm("loc_68075E8: lea 1(%eax),%ecx;");
    asm("loc_68075EB: add $0x18,%esp;");
    asm("loc_68075EE: mov %ecx,0xC(%esi);");
    asm("loc_68075F1: pop %esi;");
    asm("loc_68075F2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807600() // _sub_6807600
{
    __DEBUG_ASM(6807600);
    // chunk 0x6807600 _sub_6807600
    asm("loc_6807600: mov 4(%esp),%ecx;");
    asm("loc_6807604: mov 0x14(%ecx),%eax;");
    asm("loc_6807607: dec %eax;");
    asm("loc_6807608: js loc_6807621;");
    asm("loc_680760A: mov 8(%esp),%edx;");
    asm("loc_680760E: lea 0x124(%ecx,%eax,4),%ecx;");
    asm("loc_6807615: cmp (%ecx),%edx;");
    asm("loc_6807617: je loc_6807624;");
    asm("loc_6807619: dec %eax;");
    asm("loc_680761A: sub $4,%ecx;");
    asm("loc_680761D: test %eax,%eax;");
    asm("loc_680761F: jge loc_6807615;");
    asm("loc_6807621: or $0xFFFFFFFF,%eax;");
    asm("loc_6807624: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807630() // _sub_6807630
{
    asm("jmp dgb_6807630;"); // jumptable skip
    asm(".long _jmp_68076F8;"); // jumptable address
    __DEBUG_ASM(6807630);
    // chunk 0x6807630 _sub_6807630
    asm("loc_6807630: push %esi;");
    asm("loc_6807631: mov 0xC(%esp),%esi;");
    asm("loc_6807635: mov (%esi),%eax;");
    asm("loc_6807637: cmp $4,%eax;");
    asm("loc_680763A: ja loc_68076E6;");
    asm("loc_6807640: jmpl *_jmp_68076F8(,%eax,4);");
    asm("loc_6807647: mov 4(%esi),%eax;");
    asm("loc_680764A: mov 8(%esp),%ecx;");
    asm("loc_680764E: push $1;");
    asm("loc_6807650: push %eax;");
    asm("loc_6807651: push $0xD;");
    asm("loc_6807653: push %ecx;");
    asm("loc_6807654: call _sub_6806ED0;");
    asm("loc_6807659: add $0x10,%esp;");
    asm("loc_680765C: movl $4,(%esi);");
    asm("loc_6807662: movl $0,4(%esi);");
    asm("loc_6807669: pop %esi;");
    asm("loc_680766A: ret;");
    asm("loc_680766B: mov 4(%esi),%edx;");
    asm("loc_680766E: mov 8(%esp),%eax;");
    asm("loc_6807672: push $1;");
    asm("loc_6807674: push %edx;");
    asm("loc_6807675: push $0xF;");
    asm("loc_6807677: push %eax;");
    asm("loc_6807678: call _sub_6806ED0;");
    asm("loc_680767D: add $0x10,%esp;");
    asm("loc_6807680: movl $4,(%esi);");
    asm("loc_6807686: movl $0,4(%esi);");
    asm("loc_680768D: pop %esi;");
    asm("loc_680768E: ret;");
    asm("loc_680768F: mov 4(%esi),%ecx;");
    asm("loc_6807692: mov 8(%esp),%edx;");
    asm("loc_6807696: push $0;");
    asm("loc_6807698: push %ecx;");
    asm("loc_6807699: push $0x12;");
    asm("loc_680769B: push %edx;");
    asm("loc_680769C: call _sub_6806ED0;");
    asm("loc_68076A1: add $0x10,%esp;");
    asm("loc_68076A4: movl $4,(%esi);");
    asm("loc_68076AA: movl $0,4(%esi);");
    asm("loc_68076B1: pop %esi;");
    asm("loc_68076B2: ret;");
    asm("loc_68076B3: mov 8(%esp),%eax;");
    asm("loc_68076B7: push $0xFFFFFFFF;");
    asm("loc_68076B9: push $0x10;");
    asm("loc_68076BB: push %eax;");
    asm("loc_68076BC: call _sub_6806960;");
    asm("loc_68076C1: add $0xC,%esp;");
    asm("loc_68076C4: movl $4,(%esi);");
    asm("loc_68076CA: movl $0,4(%esi);");
    asm("loc_68076D1: pop %esi;");
    asm("loc_68076D2: ret;");
    asm("loc_68076D3: mov 4(%esi),%ecx;");
    asm("loc_68076D6: mov 8(%esp),%edx;");
    asm("loc_68076DA: push $1;");
    asm("loc_68076DC: push %ecx;");
    asm("loc_68076DD: push %edx;");
    asm("loc_68076DE: call _sub_6807020;");
    asm("loc_68076E3: add $0xC,%esp;");
    asm("loc_68076E6: movl $4,(%esi);");
    asm("loc_68076EC: movl $0,4(%esi);");
    asm("loc_68076F3: pop %esi;");
    asm("loc_68076F4: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_68076F8: .long loc_680766B;");
    asm(".long loc_6807647;");
    asm(".long loc_680768F;");
    asm(".long loc_68076B3;");
    asm(".long loc_68076D3;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6807630);
_naked _weak void _sub_6807710() // _sub_6807710
{
    __DEBUG_ASM(6807710);
    // chunk 0x6807710 _sub_6807710
    asm("loc_6807710: push %esi;");
    asm("loc_6807711: mov 8(%esp),%esi;");
    asm("loc_6807715: cmpl $0x114,4(%esi);");
    asm("loc_680771C: push %edi;");
    asm("loc_680771D: je loc_680772D;");
    asm("loc_680771F: push $_data_680DC10;");
    asm("loc_6807724: push %esi;");
    asm("loc_6807725: call _sub_680A850;");
    asm("loc_680772A: add $8,%esp;");
    asm("loc_680772D: mov 0x10(%esi),%eax;");
    asm("loc_6807730: mov 8(%esi),%ecx;");
    asm("loc_6807733: push %eax;");
    asm("loc_6807734: push %ecx;");
    asm("loc_6807735: call _sub_6807560;");
    asm("loc_680773A: push %esi;");
    asm("loc_680773B: mov %eax,%edi;");
    asm("loc_680773D: call _sub_6806A20;");
    asm("loc_6807742: add $0xC,%esp;");
    asm("loc_6807745: mov %edi,%eax;");
    asm("loc_6807747: pop %edi;");
    asm("loc_6807748: pop %esi;");
    asm("loc_6807749: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807750() // _sub_6807750
{
    __DEBUG_ASM(6807750);
    // chunk 0x6807750 _sub_6807750
    asm("loc_6807750: push %esi;");
    asm("loc_6807751: mov 8(%esp),%esi;");
    asm("loc_6807755: push %esi;");
    asm("loc_6807756: call _sub_6807710;");
    asm("loc_680775B: mov 8(%esi),%ecx;");
    asm("loc_680775E: mov (%ecx),%edx;");
    asm("loc_6807760: mov 8(%edx),%ecx;");
    asm("loc_6807763: add $4,%esp;");
    asm("loc_6807766: shl $4,%eax;");
    asm("loc_6807769: mov 8(%eax,%ecx),%eax;");
    asm("loc_680776D: pop %esi;");
    asm("loc_680776E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807770() // _sub_6807770
{
    __DEBUG_ASM(6807770);
    // chunk 0x6807770 _sub_6807770
    asm("loc_6807770: sub $0x444,%esp;");
    asm("loc_6807776: push %esi;");
    asm("loc_6807777: mov 0x44C(%esp),%esi;");
    asm("loc_680777E: mov 8(%esi),%eax;");
    asm("loc_6807781: mov (%eax),%ecx;");
    asm("loc_6807783: mov 0x18(%ecx),%edx;");
    asm("loc_6807786: push %edi;");
    asm("loc_6807787: push %edx;");
    asm("loc_6807788: lea 0xC(%esp),%eax;");
    asm("loc_680778C: push %eax;");
    asm("loc_680778D: push %esi;");
    asm("loc_680778E: call _sub_68067D0;");
    asm("loc_6807793: mov 0x14(%esp),%ecx;");
    asm("loc_6807797: mov 0x464(%esp),%edi;");
    asm("loc_680779E: push $0x28;");
    asm("loc_68077A0: push %esi;");
    asm("loc_68077A1: mov %edi,0x14(%ecx);");
    asm("loc_68077A4: call _sub_6807230;");
    asm("loc_68077A9: mov 0x468(%esp),%eax;");
    asm("loc_68077B0: add $0x14,%esp;");
    asm("loc_68077B3: test %eax,%eax;");
    asm("loc_68077B5: je loc_68077CB;");
    asm("loc_68077B7: push $_data_680DC20;");
    asm("loc_68077BC: call _sub_6805A80;");
    asm("loc_68077C1: push %eax;");
    asm("loc_68077C2: push %esi;");
    asm("loc_68077C3: call _sub_6807810;");
    asm("loc_68077C8: add $0xC,%esp;");
    asm("loc_68077CB: push %esi;");
    asm("loc_68077CC: call _sub_6808720;");
    asm("loc_68077D1: push $0x29;");
    asm("loc_68077D3: push %esi;");
    asm("loc_68077D4: call _sub_6807230;");
    asm("loc_68077D9: push %esi;");
    asm("loc_68077DA: call _sub_6806A40;");
    asm("loc_68077DF: push %edi;");
    asm("loc_68077E0: push $0x109;");
    asm("loc_68077E5: push $0x108;");
    asm("loc_68077EA: push %esi;");
    asm("loc_68077EB: call _sub_68072A0;");
    asm("loc_68077F0: push %esi;");
    asm("loc_68077F1: call _sub_68068D0;");
    asm("loc_68077F6: lea 0x2C(%esp),%edx;");
    asm("loc_68077FA: push %edx;");
    asm("loc_68077FB: push %esi;");
    asm("loc_68077FC: call _sub_68078D0;");
    asm("loc_6807801: add $0x2C,%esp;");
    asm("loc_6807804: pop %edi;");
    asm("loc_6807805: pop %esi;");
    asm("loc_6807806: add $0x444,%esp;");
    asm("loc_680780C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807810() // _sub_6807810
{
    __DEBUG_ASM(6807810);
    // chunk 0x6807810 _sub_6807810
    asm("loc_6807810: mov 8(%esp),%eax;");
    asm("loc_6807814: push %esi;");
    asm("loc_6807815: mov 8(%esp),%esi;");
    asm("loc_6807819: push $0;");
    asm("loc_680781B: push %eax;");
    asm("loc_680781C: push %esi;");
    asm("loc_680781D: call _sub_6807840;");
    asm("loc_6807822: mov 8(%esi),%eax;");
    asm("loc_6807825: mov 0x14(%eax),%ecx;");
    asm("loc_6807828: add $0xC,%esp;");
    asm("loc_680782B: inc %ecx;");
    asm("loc_680782C: mov %ecx,0x14(%eax);");
    asm("loc_680782F: pop %esi;");
    asm("loc_6807830: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807840() // _sub_6807840
{
    __DEBUG_ASM(6807840);
    // chunk 0x6807840 _sub_6807840
    asm("loc_6807840: push %ebx;");
    asm("loc_6807841: mov 0x10(%esp),%ebx;");
    asm("loc_6807845: push %esi;");
    asm("loc_6807846: push %edi;");
    asm("loc_6807847: mov 0x10(%esp),%edi;");
    asm("loc_680784B: mov 8(%edi),%esi;");
    asm("loc_680784E: mov 0x14(%esi),%eax;");
    asm("loc_6807851: push $_data_680DC28;");
    asm("loc_6807856: push $0xC8;");
    asm("loc_680785B: lea 1(%eax,%ebx),%ecx;");
    asm("loc_680785F: push %ecx;");
    asm("loc_6807860: push %edi;");
    asm("loc_6807861: call _sub_6807890;");
    asm("loc_6807866: mov 0x14(%esi),%edx;");
    asm("loc_6807869: mov 0x24(%esp),%eax;");
    asm("loc_680786D: add %ebx,%edx;");
    asm("loc_680786F: mov %eax,0x124(%esi,%edx,4);");
    asm("loc_6807876: mov 0x1C(%edi),%ecx;");
    asm("loc_6807879: push %ecx;");
    asm("loc_680787A: push %eax;");
    asm("loc_680787B: push %esi;");
    asm("loc_680787C: call _sub_68069D0;");
    asm("loc_6807881: add $0x1C,%esp;");
    asm("loc_6807884: pop %edi;");
    asm("loc_6807885: pop %esi;");
    asm("loc_6807886: pop %ebx;");
    asm("loc_6807887: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807890() // _sub_6807890
{
    __DEBUG_ASM(6807890);
    // chunk 0x6807890 _sub_6807890
    asm("loc_6807890: mov 0xC(%esp),%eax;");
    asm("loc_6807894: mov 8(%esp),%ecx;");
    asm("loc_6807898: sub $0x64,%esp;");
    asm("loc_680789B: cmp %eax,%ecx;");
    asm("loc_680789D: jle loc_68078C7;");
    asm("loc_680789F: push %eax;");
    asm("loc_68078A0: mov 0x78(%esp),%eax;");
    asm("loc_68078A4: push %eax;");
    asm("loc_68078A5: lea 8(%esp),%ecx;");
    asm("loc_68078A9: push $_data_680DC38;");
    asm("loc_68078AE: push %ecx;");
    asm("loc_68078AF: calll *_import_680C060;");
    asm("loc_68078B5: mov 0x78(%esp),%eax;");
    asm("loc_68078B9: lea 0x10(%esp),%edx;");
    asm("loc_68078BD: push %edx;");
    asm("loc_68078BE: push %eax;");
    asm("loc_68078BF: call _sub_680A850;");
    asm("loc_68078C4: add $0x18,%esp;");
    asm("loc_68078C7: add $0x64,%esp;");
    asm("loc_68078CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68078D0() // _sub_68078D0
{
    __DEBUG_ASM(68078D0);
    // chunk 0x68078D0 _sub_68078D0
    asm("loc_68078D0: push %ecx;");
    asm("loc_68078D1: push %ebx;");
    asm("loc_68078D2: push %ebp;");
    asm("loc_68078D3: push %esi;");
    asm("loc_68078D4: push %edi;");
    asm("loc_68078D5: mov 0x18(%esp),%edi;");
    asm("loc_68078D9: mov 8(%edi),%ebx;");
    asm("loc_68078DC: push %ebx;");
    asm("loc_68078DD: call _sub_68075C0;");
    asm("loc_68078E2: mov (%ebx),%edx;");
    asm("loc_68078E4: mov 8(%edx),%edx;");
    asm("loc_68078E7: mov 0x20(%esp),%esi;");
    asm("loc_68078EB: mov %eax,%ecx;");
    asm("loc_68078ED: shl $4,%eax;");
    asm("loc_68078F0: movl $0xFFFFFFFC,(%edx,%eax);");
    asm("loc_68078F7: mov (%ebx),%edx;");
    asm("loc_68078F9: mov 8(%edx),%edx;");
    asm("loc_68078FC: mov (%esi),%ebp;");
    asm("loc_68078FE: mov %ebp,8(%edx,%eax);");
    asm("loc_6807902: mov 0x18(%esi),%eax;");
    asm("loc_6807905: add $4,%esp;");
    asm("loc_6807908: test %eax,%eax;");
    asm("loc_680790A: mov %ecx,0x10(%esp);");
    asm("loc_680790E: jne loc_6807920;");
    asm("loc_6807910: push %ecx;");
    asm("loc_6807911: push %edi;");
    asm("loc_6807912: call _sub_68074B0;");
    asm("loc_6807917: add $8,%esp;");
    asm("loc_680791A: pop %edi;");
    asm("loc_680791B: pop %esi;");
    asm("loc_680791C: pop %ebp;");
    asm("loc_680791D: pop %ebx;");
    asm("loc_680791E: pop %ecx;");
    asm("loc_680791F: ret;");
    asm("loc_6807920: xor %ebp,%ebp;");
    asm("loc_6807922: test %eax,%eax;");
    asm("loc_6807924: jle loc_680794E;");
    asm("loc_6807926: lea 0x24(%esi),%eax;");
    asm("loc_6807929: mov %eax,0x18(%esp);");
    asm("loc_680792D: mov 0x18(%esp),%ecx;");
    asm("loc_6807931: push %ecx;");
    asm("loc_6807932: push %edi;");
    asm("loc_6807933: call _sub_6807630;");
    asm("loc_6807938: mov 0x20(%esp),%ecx;");
    asm("loc_680793C: mov 0x18(%esi),%eax;");
    asm("loc_680793F: add $8,%esp;");
    asm("loc_6807942: inc %ebp;");
    asm("loc_6807943: add $8,%ecx;");
    asm("loc_6807946: cmp %eax,%ebp;");
    asm("loc_6807948: mov %ecx,0x18(%esp);");
    asm("loc_680794C: jl loc_680792D;");
    asm("loc_680794E: push $1;");
    asm("loc_6807950: push %edi;");
    asm("loc_6807951: call _sub_6806990;");
    asm("loc_6807956: mov 0x18(%esi),%edx;");
    asm("loc_6807959: mov 0x18(%esp),%eax;");
    asm("loc_680795D: neg %edx;");
    asm("loc_680795F: push %edx;");
    asm("loc_6807960: push %eax;");
    asm("loc_6807961: push $0x3A;");
    asm("loc_6807963: push %edi;");
    asm("loc_6807964: call _sub_6806ED0;");
    asm("loc_6807969: xor %ecx,%ecx;");
    asm("loc_680796B: mov 0x18(%esi),%cl;");
    asm("loc_680796E: push %ecx;");
    asm("loc_680796F: push %ebx;");
    asm("loc_6807970: call _sub_6806870;");
    asm("loc_6807975: add $0x20,%esp;");
    asm("loc_6807978: pop %edi;");
    asm("loc_6807979: pop %esi;");
    asm("loc_680797A: pop %ebp;");
    asm("loc_680797B: pop %ebx;");
    asm("loc_680797C: pop %ecx;");
    asm("loc_680797D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807980() // _sub_6807980
{
    __DEBUG_ASM(6807980);
    // chunk 0x6807980 _sub_6807980
    asm("loc_6807980: push %ebx;");
    asm("loc_6807981: push %esi;");
    asm("loc_6807982: mov 0xC(%esp),%esi;");
    asm("loc_6807986: push %edi;");
    asm("loc_6807987: push %esi;");
    asm("loc_6807988: call _sub_6806A20;");
    asm("loc_680798D: push %esi;");
    asm("loc_680798E: call _sub_6807370;");
    asm("loc_6807993: push $0x111;");
    asm("loc_6807998: push %esi;");
    asm("loc_6807999: mov %eax,%edi;");
    asm("loc_680799B: call _sub_6807230;");
    asm("loc_68079A0: push %esi;");
    asm("loc_68079A1: call _sub_68073E0;");
    asm("loc_68079A6: push %esi;");
    asm("loc_68079A7: call _sub_68073B0;");
    asm("loc_68079AC: mov %eax,%ebx;");
    asm("loc_68079AE: mov 4(%esi),%eax;");
    asm("loc_68079B1: add $0x18,%esp;");
    asm("loc_68079B4: cmp $0x107,%eax;");
    asm("loc_68079B9: jne loc_68079D8;");
    asm("loc_68079BB: mov 0x14(%esp),%eax;");
    asm("loc_68079BF: push %eax;");
    asm("loc_68079C0: push %esi;");
    asm("loc_68079C1: call _sub_6807980;");
    asm("loc_68079C6: add $8,%esp;");
    asm("loc_68079C9: push %ebx;");
    asm("loc_68079CA: push %edi;");
    asm("loc_68079CB: push %esi;");
    asm("loc_68079CC: call _sub_6807A20;");
    asm("loc_68079D1: add $0xC,%esp;");
    asm("loc_68079D4: pop %edi;");
    asm("loc_68079D5: pop %esi;");
    asm("loc_68079D6: pop %ebx;");
    asm("loc_68079D7: ret;");
    asm("loc_68079D8: push $0x106;");
    asm("loc_68079DD: push %esi;");
    asm("loc_68079DE: call _sub_6806A90;");
    asm("loc_68079E3: add $8,%esp;");
    asm("loc_68079E6: test %eax,%eax;");
    asm("loc_68079E8: je loc_68079F3;");
    asm("loc_68079EA: push %esi;");
    asm("loc_68079EB: call _sub_68073E0;");
    asm("loc_68079F0: add $4,%esp;");
    asm("loc_68079F3: mov 0x14(%esp),%ecx;");
    asm("loc_68079F7: push %ecx;");
    asm("loc_68079F8: push $0x10A;");
    asm("loc_68079FD: push $0x108;");
    asm("loc_6807A02: push %esi;");
    asm("loc_6807A03: call _sub_68072A0;");
    asm("loc_6807A08: add $0x10,%esp;");
    asm("loc_6807A0B: push %ebx;");
    asm("loc_6807A0C: push %edi;");
    asm("loc_6807A0D: push %esi;");
    asm("loc_6807A0E: call _sub_6807A20;");
    asm("loc_6807A13: add $0xC,%esp;");
    asm("loc_6807A16: pop %edi;");
    asm("loc_6807A17: pop %esi;");
    asm("loc_6807A18: pop %ebx;");
    asm("loc_6807A19: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807A20() // _sub_6807A20
{
    __DEBUG_ASM(6807A20);
    // chunk 0x6807A20 _sub_6807A20
    asm("loc_6807A20: mov 0xC(%esp),%edx;");
    asm("loc_6807A24: push %esi;");
    asm("loc_6807A25: push %edi;");
    asm("loc_6807A26: mov 0xC(%esp),%edi;");
    asm("loc_6807A2A: mov 8(%edi),%ecx;");
    asm("loc_6807A2D: mov 8(%ecx),%eax;");
    asm("loc_6807A30: lea 2(%edx),%esi;");
    asm("loc_6807A33: cmp %esi,%eax;");
    asm("loc_6807A35: jne loc_6807A51;");
    asm("loc_6807A37: lea -2(%eax),%esi;");
    asm("loc_6807A3A: mov 0x10(%esp),%eax;");
    asm("loc_6807A3E: push %esi;");
    asm("loc_6807A3F: push $0x34;");
    asm("loc_6807A41: push %eax;");
    asm("loc_6807A42: push %edi;");
    asm("loc_6807A43: mov %esi,8(%ecx);");
    asm("loc_6807A46: call _sub_6807120;");
    asm("loc_6807A4B: add $0x10,%esp;");
    asm("loc_6807A4E: pop %edi;");
    asm("loc_6807A4F: pop %esi;");
    asm("loc_6807A50: ret;");
    asm("loc_6807A51: push %eax;");
    asm("loc_6807A52: push $0x32;");
    asm("loc_6807A54: push %edx;");
    asm("loc_6807A55: push %edi;");
    asm("loc_6807A56: call _sub_6807120;");
    asm("loc_6807A5B: add $0x10,%esp;");
    asm("loc_6807A5E: add %eax,%esi;");
    asm("loc_6807A60: mov 0x10(%esp),%eax;");
    asm("loc_6807A64: push %esi;");
    asm("loc_6807A65: push $0x34;");
    asm("loc_6807A67: push %eax;");
    asm("loc_6807A68: push %edi;");
    asm("loc_6807A69: call _sub_6807120;");
    asm("loc_6807A6E: add $0x10,%esp;");
    asm("loc_6807A71: pop %edi;");
    asm("loc_6807A72: pop %esi;");
    asm("loc_6807A73: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807A80() // _sub_6807A80
{
    __DEBUG_ASM(6807A80);
    // chunk 0x6807A80 _sub_6807A80
    asm("loc_6807A80: sub $8,%esp;");
    asm("loc_6807A83: push %esi;");
    asm("loc_6807A84: mov 0x10(%esp),%esi;");
    asm("loc_6807A88: push $0x110;");
    asm("loc_6807A8D: push %esi;");
    asm("loc_6807A8E: call _sub_6806A90;");
    asm("loc_6807A93: add $8,%esp;");
    asm("loc_6807A96: test %eax,%eax;");
    asm("loc_6807A98: je loc_6807AFB;");
    asm("loc_6807A9A: push %esi;");
    asm("loc_6807A9B: call _sub_6806E90;");
    asm("loc_6807AA0: lea 8(%esp),%eax;");
    asm("loc_6807AA4: push %eax;");
    asm("loc_6807AA5: push %esi;");
    asm("loc_6807AA6: call _sub_6808540;");
    asm("loc_6807AAB: mov 0x14(%esp),%ecx;");
    asm("loc_6807AAF: add $0xC,%esp;");
    asm("loc_6807AB2: test %ecx,%ecx;");
    asm("loc_6807AB4: jle loc_6807AD3;");
    asm("loc_6807AB6: mov 8(%esi),%edx;");
    asm("loc_6807AB9: mov (%edx),%eax;");
    asm("loc_6807ABB: mov 0x10(%eax),%eax;");
    asm("loc_6807ABE: movb $3,-2(%eax,%ecx);");
    asm("loc_6807AC3: mov 8(%esi),%ecx;");
    asm("loc_6807AC6: mov 0x14(%ecx),%dl;");
    asm("loc_6807AC9: mov 8(%esp),%ecx;");
    asm("loc_6807ACD: mov %dl,-1(%eax,%ecx);");
    asm("loc_6807AD1: jmp loc_6807AE7;");
    asm("loc_6807AD3: mov 8(%esi),%edx;");
    asm("loc_6807AD6: mov 0x14(%edx),%eax;");
    asm("loc_6807AD9: push $0;");
    asm("loc_6807ADB: push %eax;");
    asm("loc_6807ADC: push $1;");
    asm("loc_6807ADE: push %esi;");
    asm("loc_6807ADF: call _sub_6806ED0;");
    asm("loc_6807AE4: add $0x10,%esp;");
    asm("loc_6807AE7: mov 8(%esi),%eax;");
    asm("loc_6807AEA: mov 0x14(%eax),%ecx;");
    asm("loc_6807AED: push $0x3B;");
    asm("loc_6807AEF: push %esi;");
    asm("loc_6807AF0: mov %ecx,0xC(%eax);");
    asm("loc_6807AF3: call _sub_6806A90;");
    asm("loc_6807AF8: add $8,%esp;");
    asm("loc_6807AFB: pop %esi;");
    asm("loc_6807AFC: add $8,%esp;");
    asm("loc_6807AFF: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807B00() // _sub_6807B00
{
    __DEBUG_ASM(6807B00);
    // chunk 0x6807B00 _sub_6807B00
    asm("loc_6807B00: sub $8,%esp;");
    asm("loc_6807B03: push %esi;");
    asm("loc_6807B04: mov 0x10(%esp),%esi;");
    asm("loc_6807B08: lea 4(%esp),%eax;");
    asm("loc_6807B0C: push %eax;");
    asm("loc_6807B0D: push %esi;");
    asm("loc_6807B0E: call _sub_6807B80;");
    asm("loc_6807B13: lea 0xC(%esp),%ecx;");
    asm("loc_6807B17: push %ecx;");
    asm("loc_6807B18: push %esi;");
    asm("loc_6807B19: call _sub_6807630;");
    asm("loc_6807B1E: mov 4(%esi),%edx;");
    asm("loc_6807B21: push $_data_680DA28;");
    asm("loc_6807B26: push %edx;");
    asm("loc_6807B27: call _sub_6807B50;");
    asm("loc_6807B2C: add $0x18,%esp;");
    asm("loc_6807B2F: test %eax,%eax;");
    asm("loc_6807B31: jge loc_6807B41;");
    asm("loc_6807B33: push $_data_680DC50;");
    asm("loc_6807B38: push %esi;");
    asm("loc_6807B39: call _sub_680A850;");
    asm("loc_6807B3E: add $8,%esp;");
    asm("loc_6807B41: pop %esi;");
    asm("loc_6807B42: add $8,%esp;");
    asm("loc_6807B45: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807B50() // _sub_6807B50
{
    __DEBUG_ASM(6807B50);
    // chunk 0x6807B50 _sub_6807B50
    asm("loc_6807B50: mov 8(%esp),%edx;");
    asm("loc_6807B54: mov (%edx),%ecx;");
    asm("loc_6807B56: test %ecx,%ecx;");
    asm("loc_6807B58: push %esi;");
    asm("loc_6807B59: mov %edx,%eax;");
    asm("loc_6807B5B: je loc_6807B6F;");
    asm("loc_6807B5D: mov 8(%esp),%esi;");
    asm("loc_6807B61: cmp %esi,%ecx;");
    asm("loc_6807B63: je loc_6807B74;");
    asm("loc_6807B65: mov 4(%eax),%ecx;");
    asm("loc_6807B68: add $4,%eax;");
    asm("loc_6807B6B: test %ecx,%ecx;");
    asm("loc_6807B6D: jne loc_6807B61;");
    asm("loc_6807B6F: or $0xFFFFFFFF,%eax;");
    asm("loc_6807B72: pop %esi;");
    asm("loc_6807B73: ret;");
    asm("loc_6807B74: sub %edx,%eax;");
    asm("loc_6807B76: sar $2,%eax;");
    asm("loc_6807B79: pop %esi;");
    asm("loc_6807B7A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807B80() // _sub_6807B80
{
    __DEBUG_ASM(6807B80);
    // chunk 0x6807B80 _sub_6807B80
    asm("loc_6807B80: push %ebx;");
    asm("loc_6807B81: push %ebp;");
    asm("loc_6807B82: push %esi;");
    asm("loc_6807B83: mov 0x10(%esp),%esi;");
    asm("loc_6807B87: push %edi;");
    asm("loc_6807B88: mov 0x18(%esp),%edi;");
    asm("loc_6807B8C: push %edi;");
    asm("loc_6807B8D: push %esi;");
    asm("loc_6807B8E: call _sub_6807C00;");
    asm("loc_6807B93: add $8,%esp;");
    asm("loc_6807B96: mov 4(%esi),%eax;");
    asm("loc_6807B99: cmp $0x104,%eax;");
    asm("loc_6807B9E: je loc_6807BA7;");
    asm("loc_6807BA0: cmp $0x10E,%eax;");
    asm("loc_6807BA5: jne loc_6807BEF;");
    asm("loc_6807BA7: xor %ebx,%ebx;");
    asm("loc_6807BA9: cmp $0x104,%eax;");
    asm("loc_6807BAE: setne %bl;");
    asm("loc_6807BB1: push %edi;");
    asm("loc_6807BB2: push %esi;");
    asm("loc_6807BB3: dec %ebx;");
    asm("loc_6807BB4: and $2,%ebx;");
    asm("loc_6807BB7: add $0x2E,%ebx;");
    asm("loc_6807BBA: call _sub_6807630;");
    asm("loc_6807BBF: push %esi;");
    asm("loc_6807BC0: call _sub_6806A20;");
    asm("loc_6807BC5: push %esi;");
    asm("loc_6807BC6: call _sub_6807390;");
    asm("loc_6807BCB: push %edi;");
    asm("loc_6807BCC: push %esi;");
    asm("loc_6807BCD: mov %eax,%ebp;");
    asm("loc_6807BCF: call _sub_6807C00;");
    asm("loc_6807BD4: push %edi;");
    asm("loc_6807BD5: push %esi;");
    asm("loc_6807BD6: call _sub_6807630;");
    asm("loc_6807BDB: mov 8(%esi),%eax;");
    asm("loc_6807BDE: mov 8(%eax),%ecx;");
    asm("loc_6807BE1: push %ecx;");
    asm("loc_6807BE2: push %ebx;");
    asm("loc_6807BE3: push %ebp;");
    asm("loc_6807BE4: push %esi;");
    asm("loc_6807BE5: call _sub_6807120;");
    asm("loc_6807BEA: add $0x30,%esp;");
    asm("loc_6807BED: jmp loc_6807B96;");
    asm("loc_6807BEF: pop %edi;");
    asm("loc_6807BF0: pop %esi;");
    asm("loc_6807BF1: pop %ebp;");
    asm("loc_6807BF2: pop %ebx;");
    asm("loc_6807BF3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807C00() // _sub_6807C00
{
    __DEBUG_ASM(6807C00);
    // chunk 0x6807C00 _sub_6807C00
    asm("loc_6807C00: sub $0x54,%esp;");
    asm("loc_6807C03: push %ebx;");
    asm("loc_6807C04: mov 0x60(%esp),%ebx;");
    asm("loc_6807C08: push %esi;");
    asm("loc_6807C09: mov 0x60(%esp),%esi;");
    asm("loc_6807C0D: push %edi;");
    asm("loc_6807C0E: lea 0xC(%esp),%eax;");
    asm("loc_6807C12: push %eax;");
    asm("loc_6807C13: push %ebx;");
    asm("loc_6807C14: push %esi;");
    asm("loc_6807C15: movl $0,0x68(%esp);");
    asm("loc_6807C1D: call _sub_6807D60;");
    asm("loc_6807C22: mov 4(%esi),%ecx;");
    asm("loc_6807C25: push $_data_680DA78;");
    asm("loc_6807C2A: push %ecx;");
    asm("loc_6807C2B: call _sub_6807B50;");
    asm("loc_6807C30: mov %eax,%edi;");
    asm("loc_6807C32: add $0x14,%esp;");
    asm("loc_6807C35: test %edi,%edi;");
    asm("loc_6807C37: jl loc_6807CA5;");
    asm("loc_6807C39: push %ebx;");
    asm("loc_6807C3A: push %esi;");
    asm("loc_6807C3B: add $2,%edi;");
    asm("loc_6807C3E: call _sub_6807630;");
    asm("loc_6807C43: add $8,%esp;");
    asm("loc_6807C46: cmp $0xD,%edi;");
    asm("loc_6807C49: jne loc_6807C56;");
    asm("loc_6807C4B: mov _data_680DAE0,%edx;");
    asm("loc_6807C51: lea 1(%edx),%eax;");
    asm("loc_6807C54: jmp loc_6807C5D;");
    asm("loc_6807C56: mov _data_680DAAC(,%edi,4),%eax;");
    asm("loc_6807C5D: push %eax;");
    asm("loc_6807C5E: lea 0x10(%esp),%eax;");
    asm("loc_6807C62: push %eax;");
    asm("loc_6807C63: push %esi;");
    asm("loc_6807C64: call _sub_6807D00;");
    asm("loc_6807C69: push %edi;");
    asm("loc_6807C6A: lea 0x1C(%esp),%ecx;");
    asm("loc_6807C6E: push %ecx;");
    asm("loc_6807C6F: push %esi;");
    asm("loc_6807C70: call _sub_6807CD0;");
    asm("loc_6807C75: push %esi;");
    asm("loc_6807C76: call _sub_6806A20;");
    asm("loc_6807C7B: lea 0x28(%esp),%edx;");
    asm("loc_6807C7F: push %edx;");
    asm("loc_6807C80: push %ebx;");
    asm("loc_6807C81: push %esi;");
    asm("loc_6807C82: call _sub_6807D60;");
    asm("loc_6807C87: push %ebx;");
    asm("loc_6807C88: push %esi;");
    asm("loc_6807C89: call _sub_6807630;");
    asm("loc_6807C8E: mov 4(%esi),%eax;");
    asm("loc_6807C91: push $_data_680DA78;");
    asm("loc_6807C96: push %eax;");
    asm("loc_6807C97: call _sub_6807B50;");
    asm("loc_6807C9C: mov %eax,%edi;");
    asm("loc_6807C9E: add $0x38,%esp;");
    asm("loc_6807CA1: test %edi,%edi;");
    asm("loc_6807CA3: jge loc_6807C39;");
    asm("loc_6807CA5: mov 0x5C(%esp),%eax;");
    asm("loc_6807CA9: test %eax,%eax;");
    asm("loc_6807CAB: jle loc_6807CC4;");
    asm("loc_6807CAD: push %ebx;");
    asm("loc_6807CAE: push %esi;");
    asm("loc_6807CAF: call _sub_6807630;");
    asm("loc_6807CB4: push $0;");
    asm("loc_6807CB6: lea 0x18(%esp),%ecx;");
    asm("loc_6807CBA: push %ecx;");
    asm("loc_6807CBB: push %esi;");
    asm("loc_6807CBC: call _sub_6807D00;");
    asm("loc_6807CC1: add $0x14,%esp;");
    asm("loc_6807CC4: pop %edi;");
    asm("loc_6807CC5: pop %esi;");
    asm("loc_6807CC6: pop %ebx;");
    asm("loc_6807CC7: add $0x54,%esp;");
    asm("loc_6807CCA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807CD0() // _sub_6807CD0
{
    __DEBUG_ASM(6807CD0);
    // chunk 0x6807CD0 _sub_6807CD0
    asm("loc_6807CD0: push %esi;");
    asm("loc_6807CD1: mov 0xC(%esp),%esi;");
    asm("loc_6807CD5: cmpl $0x14,0x50(%esi);");
    asm("loc_6807CD9: jl loc_6807CED;");
    asm("loc_6807CDB: mov 8(%esp),%eax;");
    asm("loc_6807CDF: push $_data_680DC68;");
    asm("loc_6807CE4: push %eax;");
    asm("loc_6807CE5: call _sub_680A850;");
    asm("loc_6807CEA: add $8,%esp;");
    asm("loc_6807CED: mov 0x50(%esi),%ecx;");
    asm("loc_6807CF0: mov 0x10(%esp),%edx;");
    asm("loc_6807CF4: mov %edx,(%esi,%ecx,4);");
    asm("loc_6807CF7: incl 0x50(%esi);");
    asm("loc_6807CFA: pop %esi;");
    asm("loc_6807CFB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807D00() // _sub_6807D00
{
    __DEBUG_ASM(6807D00);
    // chunk 0x6807D00 _sub_6807D00
    asm("loc_6807D00: push %ebx;");
    asm("loc_6807D01: push %esi;");
    asm("loc_6807D02: mov 0x10(%esp),%esi;");
    asm("loc_6807D06: mov 0x50(%esi),%eax;");
    asm("loc_6807D09: test %eax,%eax;");
    asm("loc_6807D0B: push %edi;");
    asm("loc_6807D0C: jle loc_6807D4E;");
    asm("loc_6807D0E: mov 0x18(%esp),%ebx;");
    asm("loc_6807D12: mov 0x10(%esp),%edi;");
    asm("loc_6807D16: mov 0x50(%esi),%eax;");
    asm("loc_6807D19: mov -4(%esi,%eax,4),%eax;");
    asm("loc_6807D1D: cmp %ebx,_data_680DAAC(,%eax,4);");
    asm("loc_6807D24: jl loc_6807D4E;");
    asm("loc_6807D26: mov _data_680DAE4(,%eax,4),%edx;");
    asm("loc_6807D2D: xor %ecx,%ecx;");
    asm("loc_6807D2F: cmp $2,%eax;");
    asm("loc_6807D32: setl %cl;");
    asm("loc_6807D35: dec %ecx;");
    asm("loc_6807D36: push %ecx;");
    asm("loc_6807D37: push %edx;");
    asm("loc_6807D38: push %edi;");
    asm("loc_6807D39: call _sub_6806960;");
    asm("loc_6807D3E: mov 0x50(%esi),%ecx;");
    asm("loc_6807D41: add $0xC,%esp;");
    asm("loc_6807D44: dec %ecx;");
    asm("loc_6807D45: mov %ecx,%eax;");
    asm("loc_6807D47: test %eax,%eax;");
    asm("loc_6807D49: mov %ecx,0x50(%esi);");
    asm("loc_6807D4C: jg loc_6807D16;");
    asm("loc_6807D4E: pop %edi;");
    asm("loc_6807D4F: pop %esi;");
    asm("loc_6807D50: pop %ebx;");
    asm("loc_6807D51: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807D60() // _sub_6807D60
{
    __DEBUG_ASM(6807D60);
    // chunk 0x6807D60 _sub_6807D60
    asm("loc_6807D60: push %esi;");
    asm("loc_6807D61: mov 8(%esp),%esi;");
    asm("loc_6807D65: push %edi;");
    asm("loc_6807D66: mov 0x14(%esp),%edi;");
    asm("loc_6807D6A: mov 4(%esi),%eax;");
    asm("loc_6807D6D: cmp $0x10D,%eax;");
    asm("loc_6807D72: je loc_6807D79;");
    asm("loc_6807D74: cmp $0x2D,%eax;");
    asm("loc_6807D77: jne loc_6807D96;");
    asm("loc_6807D79: xor %ecx,%ecx;");
    asm("loc_6807D7B: cmp $0x10D,%eax;");
    asm("loc_6807D80: setne %cl;");
    asm("loc_6807D83: push %ecx;");
    asm("loc_6807D84: push %edi;");
    asm("loc_6807D85: push %esi;");
    asm("loc_6807D86: call _sub_6807CD0;");
    asm("loc_6807D8B: push %esi;");
    asm("loc_6807D8C: call _sub_6806A20;");
    asm("loc_6807D91: add $0x10,%esp;");
    asm("loc_6807D94: jmp loc_6807D6A;");
    asm("loc_6807D96: mov 0x10(%esp),%edx;");
    asm("loc_6807D9A: push %edi;");
    asm("loc_6807D9B: push %edx;");
    asm("loc_6807D9C: push %esi;");
    asm("loc_6807D9D: call _sub_6807DB0;");
    asm("loc_6807DA2: add $0xC,%esp;");
    asm("loc_6807DA5: pop %edi;");
    asm("loc_6807DA6: pop %esi;");
    asm("loc_6807DA7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6807DB0() // _sub_6807DB0
{
    asm("jmp dgb_6807DB0;"); // jumptable skip
    asm(".long _jmp_6807ED8;"); // jumptable address
    __DEBUG_ASM(6807DB0);
    // chunk 0x6807DB0 _sub_6807DB0
    asm("loc_6807DB0: sub $8,%esp;");
    asm("loc_6807DB3: push %esi;");
    asm("loc_6807DB4: mov 0x10(%esp),%esi;");
    asm("loc_6807DB8: push %esi;");
    asm("loc_6807DB9: call _sub_6806E90;");
    asm("loc_6807DBE: mov 4(%esi),%eax;");
    asm("loc_6807DC1: add $0xFFFFFFDB,%eax;");
    asm("loc_6807DC4: add $4,%esp;");
    asm("loc_6807DC7: cmp $0xF7,%eax;");
    asm("loc_6807DCC: ja loc_6807EC5;");
    asm("loc_6807DD2: xor %ecx,%ecx;");
    asm("loc_6807DD4: mov _data_6807EF8(%eax),%cl;");
    asm("loc_6807DDA: jmpl *_jmp_6807ED8(,%ecx,4);");
    asm("loc_6807DE1: mov 0x10(%esi),%edx;");
    asm("loc_6807DE4: mov 0x14(%esi),%eax;");
    asm("loc_6807DE7: push %esi;");
    asm("loc_6807DE8: mov %edx,8(%esp);");
    asm("loc_6807DEC: mov %eax,0xC(%esp);");
    asm("loc_6807DF0: call _sub_6806A20;");
    asm("loc_6807DF5: mov 0x1C(%esp),%ecx;");
    asm("loc_6807DF9: mov 0x50(%ecx),%eax;");
    asm("loc_6807DFC: add $4,%esp;");
    asm("loc_6807DFF: test %eax,%eax;");
    asm("loc_6807E01: jle loc_6807E1E;");
    asm("loc_6807E03: cmpl $1,-4(%ecx,%eax,4);");
    asm("loc_6807E08: jne loc_6807E1E;");
    asm("loc_6807E0A: cmpl $0x5E,4(%esi);");
    asm("loc_6807E0E: je loc_6807E1E;");
    asm("loc_6807E10: fldl 4(%esp);");
    asm("loc_6807E14: dec %eax;");
    asm("loc_6807E15: fchs;");
    asm("loc_6807E17: mov %eax,0x50(%ecx);");
    asm("loc_6807E1A: fstpl 4(%esp);");
    asm("loc_6807E1E: mov 8(%esp),%ecx;");
    asm("loc_6807E22: mov 4(%esp),%edx;");
    asm("loc_6807E26: push %ecx;");
    asm("loc_6807E27: push %edx;");
    asm("loc_6807E28: push %esi;");
    asm("loc_6807E29: call _sub_6808010;");
    asm("loc_6807E2E: add $0xC,%esp;");
    asm("loc_6807E31: jmp loc_6807E7B;");
    asm("loc_6807E33: mov 0x10(%esi),%eax;");
    asm("loc_6807E36: push %eax;");
    asm("loc_6807E37: push %esi;");
    asm("loc_6807E38: call _sub_6807FF0;");
    asm("loc_6807E3D: push %esi;");
    asm("loc_6807E3E: call _sub_6806A20;");
    asm("loc_6807E43: add $0xC,%esp;");
    asm("loc_6807E46: jmp loc_6807E7B;");
    asm("loc_6807E48: push $0xFFFFFFFF;");
    asm("loc_6807E4A: push %esi;");
    asm("loc_6807E4B: call _sub_6806FE0;");
    asm("loc_6807E50: push %esi;");
    asm("loc_6807E51: call _sub_6806A20;");
    asm("loc_6807E56: add $0xC,%esp;");
    asm("loc_6807E59: jmp loc_6807E7B;");
    asm("loc_6807E5B: push %esi;");
    asm("loc_6807E5C: call _sub_6808A30;");
    asm("loc_6807E61: add $4,%esp;");
    asm("loc_6807E64: jmp loc_6807E7B;");
    asm("loc_6807E66: push %esi;");
    asm("loc_6807E67: call _sub_6806A20;");
    asm("loc_6807E6C: mov 0x1C(%esi),%ecx;");
    asm("loc_6807E6F: push %ecx;");
    asm("loc_6807E70: push $0;");
    asm("loc_6807E72: push %esi;");
    asm("loc_6807E73: call _sub_6807770;");
    asm("loc_6807E78: add $0x10,%esp;");
    asm("loc_6807E7B: mov 0x14(%esp),%eax;");
    asm("loc_6807E7F: movl $4,(%eax);");
    asm("loc_6807E85: movl $0,4(%eax);");
    asm("loc_6807E8C: pop %esi;");
    asm("loc_6807E8D: add $8,%esp;");
    asm("loc_6807E90: ret;");
    asm("loc_6807E91: push %esi;");
    asm("loc_6807E92: call _sub_6806A20;");
    asm("loc_6807E97: mov 0x18(%esp),%edx;");
    asm("loc_6807E9B: push %edx;");
    asm("loc_6807E9C: push %esi;");
    asm("loc_6807E9D: call _sub_6807B80;");
    asm("loc_6807EA2: push $0x29;");
    asm("loc_6807EA4: push %esi;");
    asm("loc_6807EA5: call _sub_6807230;");
    asm("loc_6807EAA: add $0x14,%esp;");
    asm("loc_6807EAD: pop %esi;");
    asm("loc_6807EAE: add $8,%esp;");
    asm("loc_6807EB1: ret;");
    asm("loc_6807EB2: mov 0x14(%esp),%eax;");
    asm("loc_6807EB6: push %eax;");
    asm("loc_6807EB7: push %esi;");
    asm("loc_6807EB8: call _sub_6808140;");
    asm("loc_6807EBD: add $8,%esp;");
    asm("loc_6807EC0: pop %esi;");
    asm("loc_6807EC1: add $8,%esp;");
    asm("loc_6807EC4: ret;");
    asm("loc_6807EC5: push $_data_680DC80;");
    asm("loc_6807ECA: push %esi;");
    asm("loc_6807ECB: call _sub_680A850;");
    asm("int3;"); // unreachable
    asm("_jmp_6807ED8: .long loc_6807EB2;");
    asm(".long loc_6807E91;");
    asm(".long loc_6807E5B;");
    asm(".long loc_6807E66;");
    asm(".long loc_6807E48;");
    asm(".long loc_6807DE1;");
    asm(".long loc_6807E33;");
    asm(".long loc_6807EC5;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6807DB0);
_naked _weak void _sub_6807FF0() // _sub_6807FF0
{
    __DEBUG_ASM(6807FF0);
    // chunk 0x6807FF0 _sub_6807FF0
    asm("loc_6807FF0: mov 8(%esp),%eax;");
    asm("loc_6807FF4: push %esi;");
    asm("loc_6807FF5: mov 8(%esp),%esi;");
    asm("loc_6807FF9: mov 8(%esi),%ecx;");
    asm("loc_6807FFC: push %eax;");
    asm("loc_6807FFD: push %ecx;");
    asm("loc_6807FFE: call _sub_6807560;");
    asm("loc_6808003: push %eax;");
    asm("loc_6808004: push %esi;");
    asm("loc_6808005: call _sub_68074B0;");
    asm("loc_680800A: add $0x10,%esp;");
    asm("loc_680800D: pop %esi;");
    asm("loc_680800E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808010() // _sub_6808010
{
    __DEBUG_ASM(6808010);
    // chunk 0x6808010 _sub_6808010
    asm("loc_6808010: push %ecx;");
    asm("loc_6808011: fldl 0xC(%esp);");
    asm("loc_6808015: fcompl _data_680C180;");
    asm("loc_680801B: fldl 0xC(%esp);");
    asm("loc_680801F: fnstsw %ax;");
    asm("loc_6808021: test $1,%ah;");
    asm("loc_6808024: je loc_6808028;");
    asm("loc_6808026: fchs;");
    asm("loc_6808028: fldl _data_680C180;");
    asm("loc_680802E: fcomp;");
    asm("loc_6808030: fnstsw %ax;");
    asm("loc_6808032: test $0x41,%ah;");
    asm("loc_6808035: je loc_680808E;");
    asm("loc_6808037: fcoml _data_680C1A0;");
    asm("loc_680803D: fnstsw %ax;");
    asm("loc_680803F: test $0x41,%ah;");
    asm("loc_6808042: je loc_680808E;");
    asm("loc_6808044: fld %st(0);");
    asm("loc_6808046: call _sub_680BDAA;");
    asm("loc_680804B: mov %eax,%ecx;");
    asm("loc_680804D: mov %ecx,(%esp);");
    asm("loc_6808051: fildl (%esp);");
    asm("loc_6808055: fcomp;");
    asm("loc_6808057: fnstsw %ax;");
    asm("loc_6808059: fstp %st(0);");
    asm("loc_680805B: test $0x40,%ah;");
    asm("loc_680805E: je loc_6808090;");
    asm("loc_6808060: fldl 0xC(%esp);");
    asm("loc_6808064: fcompl _data_680C180;");
    asm("loc_680806A: fnstsw %ax;");
    asm("loc_680806C: test $1,%ah;");
    asm("loc_680806F: mov $9,%eax;");
    asm("loc_6808074: jne loc_680807B;");
    asm("loc_6808076: mov $7,%eax;");
    asm("loc_680807B: push $1;");
    asm("loc_680807D: push %ecx;");
    asm("loc_680807E: push %eax;");
    asm("loc_680807F: mov 0x14(%esp),%eax;");
    asm("loc_6808083: push %eax;");
    asm("loc_6808084: call _sub_6806ED0;");
    asm("loc_6808089: add $0x10,%esp;");
    asm("loc_680808C: pop %ecx;");
    asm("loc_680808D: ret;");
    asm("loc_680808E: fstp %st(0);");
    asm("loc_6808090: mov 0x10(%esp),%ecx;");
    asm("loc_6808094: mov 0xC(%esp),%edx;");
    asm("loc_6808098: push %esi;");
    asm("loc_6808099: mov 0xC(%esp),%esi;");
    asm("loc_680809D: mov 8(%esi),%eax;");
    asm("loc_68080A0: push %ecx;");
    asm("loc_68080A1: push %edx;");
    asm("loc_68080A2: push %eax;");
    asm("loc_68080A3: call _sub_68080C0;");
    asm("loc_68080A8: push %eax;");
    asm("loc_68080A9: push %esi;");
    asm("loc_68080AA: call _sub_68074B0;");
    asm("loc_68080AF: add $0x14,%esp;");
    asm("loc_68080B2: pop %esi;");
    asm("loc_68080B3: pop %ecx;");
    asm("loc_68080B4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68080C0() // _sub_68080C0
{
    __DEBUG_ASM(68080C0);
    // chunk 0x68080C0 _sub_68080C0
    asm("loc_68080C0: push %ebx;");
    asm("loc_68080C1: mov 8(%esp),%ebx;");
    asm("loc_68080C5: mov (%ebx),%eax;");
    asm("loc_68080C7: mov 0xC(%eax),%ecx;");
    asm("loc_68080CA: cmp $0x14,%ecx;");
    asm("loc_68080CD: push %esi;");
    asm("loc_68080CE: push %edi;");
    asm("loc_68080CF: mov 8(%eax),%edi;");
    asm("loc_68080D2: jge loc_68080D8;");
    asm("loc_68080D4: xor %esi,%esi;");
    asm("loc_68080D6: jmp loc_68080DB;");
    asm("loc_68080D8: lea -0x14(%ecx),%esi;");
    asm("loc_68080DB: dec %ecx;");
    asm("loc_68080DC: cmp %esi,%ecx;");
    asm("loc_68080DE: jl loc_6808102;");
    asm("loc_68080E0: mov %ecx,%edx;");
    asm("loc_68080E2: shl $4,%edx;");
    asm("loc_68080E5: add %edi,%edx;");
    asm("loc_68080E7: cmpl $0xFFFFFFFF,(%edx);");
    asm("loc_68080EA: jne loc_68080FA;");
    asm("loc_68080EC: fldl 8(%edx);");
    asm("loc_68080EF: fcompl 0x14(%esp);");
    asm("loc_68080F3: fnstsw %ax;");
    asm("loc_68080F5: test $0x40,%ah;");
    asm("loc_68080F8: jne loc_680812F;");
    asm("loc_68080FA: dec %ecx;");
    asm("loc_68080FB: sub $0x10,%edx;");
    asm("loc_68080FE: cmp %esi,%ecx;");
    asm("loc_6808100: jge loc_68080E7;");
    asm("loc_6808102: push %ebx;");
    asm("loc_6808103: call _sub_68075C0;");
    asm("loc_6808108: mov (%ebx),%ecx;");
    asm("loc_680810A: mov 8(%ecx),%ecx;");
    asm("loc_680810D: mov 0x1C(%esp),%esi;");
    asm("loc_6808111: add $4,%esp;");
    asm("loc_6808114: mov %eax,%edx;");
    asm("loc_6808116: shl $4,%edx;");
    asm("loc_6808119: add %edx,%ecx;");
    asm("loc_680811B: mov 0x14(%esp),%edx;");
    asm("loc_680811F: movl $0xFFFFFFFF,(%ecx);");
    asm("loc_6808125: pop %edi;");
    asm("loc_6808126: mov %edx,8(%ecx);");
    asm("loc_6808129: mov %esi,0xC(%ecx);");
    asm("loc_680812C: pop %esi;");
    asm("loc_680812D: pop %ebx;");
    asm("loc_680812E: ret;");
    asm("loc_680812F: pop %edi;");
    asm("loc_6808130: pop %esi;");
    asm("loc_6808131: mov %ecx,%eax;");
    asm("loc_6808133: pop %ebx;");
    asm("loc_6808134: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808140() // _sub_6808140
{
    __DEBUG_ASM(6808140);
    // chunk 0x6808140 _sub_6808140
    asm("loc_6808140: push %esi;");
    asm("loc_6808141: mov 8(%esp),%esi;");
    asm("loc_6808145: push %edi;");
    asm("loc_6808146: push $0x25;");
    asm("loc_6808148: push %esi;");
    asm("loc_6808149: call _sub_6806A90;");
    asm("loc_680814E: add $8,%esp;");
    asm("loc_6808151: test %eax,%eax;");
    asm("loc_6808153: je loc_6808183;");
    asm("loc_6808155: push %esi;");
    asm("loc_6808156: call _sub_6807750;");
    asm("loc_680815B: push %eax;");
    asm("loc_680815C: push %esi;");
    asm("loc_680815D: call _sub_68081B0;");
    asm("loc_6808162: mov 0x1C(%esp),%edi;");
    asm("loc_6808166: add $0xC,%esp;");
    asm("loc_6808169: push %edi;");
    asm("loc_680816A: push %esi;");
    asm("loc_680816B: movl $4,(%edi);");
    asm("loc_6808171: movl $0,4(%edi);");
    asm("loc_6808178: call _sub_68082A0;");
    asm("loc_680817D: add $8,%esp;");
    asm("loc_6808180: pop %edi;");
    asm("loc_6808181: pop %esi;");
    asm("loc_6808182: ret;");
    asm("loc_6808183: mov 0x10(%esp),%edi;");
    asm("loc_6808187: push $0;");
    asm("loc_6808189: push %edi;");
    asm("loc_680818A: push %esi;");
    asm("loc_680818B: call _sub_6807750;");
    asm("loc_6808190: add $4,%esp;");
    asm("loc_6808193: push %eax;");
    asm("loc_6808194: push %esi;");
    asm("loc_6808195: call _sub_68074D0;");
    asm("loc_680819A: add $0x10,%esp;");
    asm("loc_680819D: push %edi;");
    asm("loc_680819E: push %esi;");
    asm("loc_680819F: call _sub_68082A0;");
    asm("loc_68081A4: add $8,%esp;");
    asm("loc_68081A7: pop %edi;");
    asm("loc_68081A8: pop %esi;");
    asm("loc_68081A9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68081B0() // _sub_68081B0
{
    __DEBUG_ASM(68081B0);
    // chunk 0x68081B0 _sub_68081B0
    asm("loc_68081B0: push %esi;");
    asm("loc_68081B1: mov 8(%esp),%esi;");
    asm("loc_68081B5: mov 8(%esi),%eax;");
    asm("loc_68081B8: mov 4(%eax),%ecx;");
    asm("loc_68081BB: test %ecx,%ecx;");
    asm("loc_68081BD: push %edi;");
    asm("loc_68081BE: mov 0x10(%esp),%edi;");
    asm("loc_68081C2: jne loc_68081D6;");
    asm("loc_68081C4: lea 0x28(%edi),%ecx;");
    asm("loc_68081C7: push %ecx;");
    asm("loc_68081C8: push $_data_680DCC4;");
    asm("loc_68081CD: push %esi;");
    asm("loc_68081CE: call _sub_680A800;");
    asm("loc_68081D3: add $0xC,%esp;");
    asm("loc_68081D6: mov 8(%esi),%edx;");
    asm("loc_68081D9: push %edi;");
    asm("loc_68081DA: push %edx;");
    asm("loc_68081DB: call _sub_6807600;");
    asm("loc_68081E0: add $8,%esp;");
    asm("loc_68081E3: test %eax,%eax;");
    asm("loc_68081E5: jl loc_68081F9;");
    asm("loc_68081E7: lea 0x28(%edi),%eax;");
    asm("loc_68081EA: push %eax;");
    asm("loc_68081EB: push $_data_680DC98;");
    asm("loc_68081F0: push %esi;");
    asm("loc_68081F1: call _sub_680A800;");
    asm("loc_68081F6: add $0xC,%esp;");
    asm("loc_68081F9: push $1;");
    asm("loc_68081FB: push %edi;");
    asm("loc_68081FC: push %esi;");
    asm("loc_68081FD: call _sub_6808220;");
    asm("loc_6808202: add $8,%esp;");
    asm("loc_6808205: push %eax;");
    asm("loc_6808206: push $0xC;");
    asm("loc_6808208: push %esi;");
    asm("loc_6808209: call _sub_6806ED0;");
    asm("loc_680820E: add $0x10,%esp;");
    asm("loc_6808211: pop %edi;");
    asm("loc_6808212: pop %esi;");
    asm("loc_6808213: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808220() // _sub_6808220
{
    __DEBUG_ASM(6808220);
    // chunk 0x6808220 _sub_6808220
    asm("loc_6808220: mov 8(%esp),%ecx;");
    asm("loc_6808224: sub $8,%esp;");
    asm("loc_6808227: push %ebx;");
    asm("loc_6808228: mov 0x10(%esp),%ebx;");
    asm("loc_680822C: push %ebp;");
    asm("loc_680822D: push %esi;");
    asm("loc_680822E: push %edi;");
    asm("loc_680822F: mov 8(%ebx),%edi;");
    asm("loc_6808232: push $1;");
    asm("loc_6808234: lea 0x14(%esp),%eax;");
    asm("loc_6808238: push %eax;");
    asm("loc_6808239: push %ecx;");
    asm("loc_680823A: push %ebx;");
    asm("loc_680823B: call _sub_68074D0;");
    asm("loc_6808240: mov 0x18(%edi),%ecx;");
    asm("loc_6808243: add $0x10,%esp;");
    asm("loc_6808246: xor %esi,%esi;");
    asm("loc_6808248: test %ecx,%ecx;");
    asm("loc_680824A: jle loc_6808268;");
    asm("loc_680824C: mov 0x14(%esp),%edx;");
    asm("loc_6808250: mov 0x10(%esp),%ebp;");
    asm("loc_6808254: lea 0x28(%edi),%eax;");
    asm("loc_6808257: cmp %ebp,-4(%eax);");
    asm("loc_680825A: jne loc_6808260;");
    asm("loc_680825C: cmp %edx,(%eax);");
    asm("loc_680825E: je loc_680828F;");
    asm("loc_6808260: inc %esi;");
    asm("loc_6808261: add $8,%eax;");
    asm("loc_6808264: cmp %ecx,%esi;");
    asm("loc_6808266: jl loc_6808257;");
    asm("loc_6808268: push $_data_680DCE4;");
    asm("loc_680826D: lea 1(%ecx),%eax;");
    asm("loc_6808270: push $0x20;");
    asm("loc_6808272: push %eax;");
    asm("loc_6808273: push %ebx;");
    asm("loc_6808274: mov %eax,0x18(%edi);");
    asm("loc_6808277: call _sub_6807890;");
    asm("loc_680827C: mov 0x20(%esp),%edx;");
    asm("loc_6808280: mov %edx,0x24(%edi,%esi,8);");
    asm("loc_6808284: mov 0x24(%esp),%eax;");
    asm("loc_6808288: add $0x10,%esp;");
    asm("loc_680828B: mov %eax,0x28(%edi,%esi,8);");
    asm("loc_680828F: pop %edi;");
    asm("loc_6808290: mov %esi,%eax;");
    asm("loc_6808292: pop %esi;");
    asm("loc_6808293: pop %ebp;");
    asm("loc_6808294: pop %ebx;");
    asm("loc_6808295: add $8,%esp;");
    asm("loc_6808298: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68082A0() // _sub_68082A0
{
    asm("jmp dgb_68082A0;"); // jumptable skip
    asm(".long _jmp_6808374;"); // jumptable address
    __DEBUG_ASM(68082A0);
    // chunk 0x68082A0 _sub_68082A0
    asm("loc_68082A0: push %esi;");
    asm("loc_68082A1: mov 8(%esp),%esi;");
    asm("loc_68082A5: mov 4(%esi),%eax;");
    asm("loc_68082A8: add $0xFFFFFFD8,%eax;");
    asm("loc_68082AB: cmp $0xF4,%eax;");
    asm("loc_68082B0: push %edi;");
    asm("loc_68082B1: ja loc_680836E;");
    asm("loc_68082B7: mov 0x10(%esp),%edi;");
    asm("loc_68082BB: xor %ecx,%ecx;");
    asm("loc_68082BD: mov _data_6808388(%eax),%cl;");
    asm("loc_68082C3: jmpl *_jmp_6808374(,%ecx,4);");
    asm("loc_68082CA: push %esi;");
    asm("loc_68082CB: call _sub_6806A20;");
    asm("loc_68082D0: push %edi;");
    asm("loc_68082D1: push %esi;");
    asm("loc_68082D2: call _sub_6807630;");
    asm("loc_68082D7: push %esi;");
    asm("loc_68082D8: movl $2,(%edi);");
    asm("loc_68082DE: call _sub_6807710;");
    asm("loc_68082E3: jmp loc_6808357;");
    asm("loc_68082E5: push %esi;");
    asm("loc_68082E6: call _sub_6806A20;");
    asm("loc_68082EB: push %edi;");
    asm("loc_68082EC: push %esi;");
    asm("loc_68082ED: call _sub_6807630;");
    asm("loc_68082F2: push %esi;");
    asm("loc_68082F3: call _sub_6807B00;");
    asm("loc_68082F8: push $0x5D;");
    asm("loc_68082FA: push %esi;");
    asm("loc_68082FB: call _sub_6807230;");
    asm("loc_6808300: add $0x18,%esp;");
    asm("loc_6808303: movl $3,(%edi);");
    asm("loc_6808309: jmp loc_680835D;");
    asm("loc_680830B: push %esi;");
    asm("loc_680830C: call _sub_6806A20;");
    asm("loc_6808311: push %edi;");
    asm("loc_6808312: push %esi;");
    asm("loc_6808313: call _sub_6807630;");
    asm("loc_6808318: add $0xC,%esp;");
    asm("loc_680831B: push $1;");
    asm("loc_680831D: push %esi;");
    asm("loc_680831E: call _sub_6807710;");
    asm("loc_6808323: add $4,%esp;");
    asm("loc_6808326: push %eax;");
    asm("loc_6808327: push $0x14;");
    asm("loc_6808329: push %esi;");
    asm("loc_680832A: call _sub_6806ED0;");
    asm("loc_680832F: push $1;");
    asm("loc_6808331: push %esi;");
    asm("loc_6808332: movl $4,(%edi);");
    asm("loc_6808338: call _sub_6808480;");
    asm("loc_680833D: add $0x18,%esp;");
    asm("loc_6808340: jmp loc_680835A;");
    asm("loc_6808342: push %edi;");
    asm("loc_6808343: push %esi;");
    asm("loc_6808344: call _sub_6807630;");
    asm("loc_6808349: push $0;");
    asm("loc_680834B: push %esi;");
    asm("loc_680834C: movl $4,(%edi);");
    asm("loc_6808352: call _sub_6808480;");
    asm("loc_6808357: add $0x10,%esp;");
    asm("loc_680835A: mov %eax,4(%edi);");
    asm("loc_680835D: mov 4(%esi),%eax;");
    asm("loc_6808360: add $0xFFFFFFD8,%eax;");
    asm("loc_6808363: cmp $0xF4,%eax;");
    asm("loc_6808368: jbe loc_68082BB;");
    asm("loc_680836E: pop %edi;");
    asm("loc_680836F: pop %esi;");
    asm("loc_6808370: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_6808374: .long loc_6808342;");
    asm(".long loc_68082CA;");
    asm(".long loc_680830B;");
    asm(".long loc_68082E5;");
    asm(".long loc_680836E;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_68082A0);
_naked _weak void _sub_6808480() // _sub_6808480
{
    __DEBUG_ASM(6808480);
    // chunk 0x6808480 _sub_6808480
    asm("loc_6808480: sub $8,%esp;");
    asm("loc_6808483: push %ebx;");
    asm("loc_6808484: push %ebp;");
    asm("loc_6808485: push %esi;");
    asm("loc_6808486: mov 0x18(%esp),%esi;");
    asm("loc_680848A: mov 4(%esi),%eax;");
    asm("loc_680848D: cmp $0x28,%eax;");
    asm("loc_6808490: mov 8(%esi),%ebp;");
    asm("loc_6808493: mov $1,%ebx;");
    asm("loc_6808498: je loc_68084D6;");
    asm("loc_680849A: cmp $0x7B,%eax;");
    asm("loc_680849D: je loc_68084CB;");
    asm("loc_680849F: cmp $0x11C,%eax;");
    asm("loc_68084A4: je loc_68084B6;");
    asm("loc_68084A6: push $_data_680DCF0;");
    asm("loc_68084AB: push %esi;");
    asm("loc_68084AC: call _sub_680A850;");
    asm("loc_68084B1: add $8,%esp;");
    asm("loc_68084B4: jmp loc_680850B;");
    asm("loc_68084B6: mov 0x10(%esi),%eax;");
    asm("loc_68084B9: push %eax;");
    asm("loc_68084BA: push %esi;");
    asm("loc_68084BB: call _sub_6807FF0;");
    asm("loc_68084C0: push %esi;");
    asm("loc_68084C1: call _sub_6806A20;");
    asm("loc_68084C6: add $0xC,%esp;");
    asm("loc_68084C9: jmp loc_680850B;");
    asm("loc_68084CB: push %esi;");
    asm("loc_68084CC: call _sub_6808A30;");
    asm("loc_68084D1: add $4,%esp;");
    asm("loc_68084D4: jmp loc_680850B;");
    asm("loc_68084D6: push %edi;");
    asm("loc_68084D7: mov 0x1C(%esi),%edi;");
    asm("loc_68084DA: push %esi;");
    asm("loc_68084DB: call _sub_6806A20;");
    asm("loc_68084E0: lea 0x14(%esp),%ecx;");
    asm("loc_68084E4: push %ecx;");
    asm("loc_68084E5: push %esi;");
    asm("loc_68084E6: call _sub_6808540;");
    asm("loc_68084EB: push %edi;");
    asm("loc_68084EC: push $0x28;");
    asm("loc_68084EE: push $0x29;");
    asm("loc_68084F0: push %esi;");
    asm("loc_68084F1: call _sub_68072A0;");
    asm("loc_68084F6: mov 0x30(%esp),%edx;");
    asm("loc_68084FA: push $1;");
    asm("loc_68084FC: push %edx;");
    asm("loc_68084FD: push %esi;");
    asm("loc_68084FE: call _sub_6807020;");
    asm("loc_6808503: mov 0x38(%esp),%ebx;");
    asm("loc_6808507: add $0x28,%esp;");
    asm("loc_680850A: pop %edi;");
    asm("loc_680850B: push $2;");
    asm("loc_680850D: push %ebp;");
    asm("loc_680850E: call _sub_6806870;");
    asm("loc_6808513: push $0;");
    asm("loc_6808515: push %ebp;");
    asm("loc_6808516: call _sub_6806870;");
    asm("loc_680851B: xor %eax,%eax;");
    asm("loc_680851D: mov 0x2C(%esp),%al;");
    asm("loc_6808521: add %bl,%al;");
    asm("loc_6808523: push %eax;");
    asm("loc_6808524: push %ebp;");
    asm("loc_6808525: call _sub_6806870;");
    asm("loc_680852A: mov 8(%ebp),%eax;");
    asm("loc_680852D: add $0x18,%esp;");
    asm("loc_6808530: pop %esi;");
    asm("loc_6808531: pop %ebp;");
    asm("loc_6808532: dec %eax;");
    asm("loc_6808533: pop %ebx;");
    asm("loc_6808534: add $8,%esp;");
    asm("loc_6808537: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808540() // _sub_6808540
{
    asm("jmp dgb_6808540;"); // jumptable skip
    asm(".long _jmp_6808584;"); // jumptable address
    __DEBUG_ASM(6808540);
    // chunk 0x6808540 _sub_6808540
    asm("loc_6808540: mov 4(%esp),%ecx;");
    asm("loc_6808544: mov 4(%ecx),%eax;");
    asm("loc_6808547: add $0xFFFFFFD7,%eax;");
    asm("loc_680854A: cmp $0xF4,%eax;");
    asm("loc_680854F: ja loc_6808572;");
    asm("loc_6808551: xor %edx,%edx;");
    asm("loc_6808553: mov _data_680858C(%eax),%dl;");
    asm("loc_6808559: jmpl *_jmp_6808584(,%edx,4);");
    asm("loc_6808560: mov 8(%esp),%eax;");
    asm("loc_6808564: movl $0,4(%eax);");
    asm("loc_680856B: movl $0,(%eax);");
    asm("loc_6808571: ret;");
    asm("loc_6808572: mov 8(%esp),%eax;");
    asm("loc_6808576: push %eax;");
    asm("loc_6808577: push %ecx;");
    asm("loc_6808578: call _sub_6808690;");
    asm("loc_680857D: add $8,%esp;");
    asm("loc_6808580: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_6808584: .long loc_6808560;");
    asm(".long loc_6808572;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6808540);
_naked _weak void _sub_6808690() // _sub_6808690
{
    __DEBUG_ASM(6808690);
    // chunk 0x6808690 _sub_6808690
    asm("loc_6808690: sub $8,%esp;");
    asm("loc_6808693: push %esi;");
    asm("loc_6808694: mov 0x10(%esp),%esi;");
    asm("loc_6808698: push %edi;");
    asm("loc_6808699: lea 8(%esp),%eax;");
    asm("loc_680869D: push %eax;");
    asm("loc_680869E: push %esi;");
    asm("loc_680869F: call _sub_6807B80;");
    asm("loc_68086A4: mov 0x20(%esp),%edi;");
    asm("loc_68086A8: movl $1,(%edi);");
    asm("loc_68086AE: mov 4(%esi),%eax;");
    asm("loc_68086B1: add $8,%esp;");
    asm("loc_68086B4: cmp $0x2C,%eax;");
    asm("loc_68086B7: jne loc_68086E5;");
    asm("loc_68086B9: mov (%edi),%eax;");
    asm("loc_68086BB: lea 8(%esp),%ecx;");
    asm("loc_68086BF: push %ecx;");
    asm("loc_68086C0: inc %eax;");
    asm("loc_68086C1: push %esi;");
    asm("loc_68086C2: mov %eax,(%edi);");
    asm("loc_68086C4: call _sub_6807630;");
    asm("loc_68086C9: push %esi;");
    asm("loc_68086CA: call _sub_6806A20;");
    asm("loc_68086CF: lea 0x14(%esp),%edx;");
    asm("loc_68086D3: push %edx;");
    asm("loc_68086D4: push %esi;");
    asm("loc_68086D5: call _sub_6807B80;");
    asm("loc_68086DA: mov 4(%esi),%eax;");
    asm("loc_68086DD: add $0x14,%esp;");
    asm("loc_68086E0: cmp $0x2C,%eax;");
    asm("loc_68086E3: je loc_68086B9;");
    asm("loc_68086E5: cmpl $4,8(%esp);");
    asm("loc_68086EA: jne loc_68086F9;");
    asm("loc_68086EC: mov 0xC(%esp),%eax;");
    asm("loc_68086F0: mov %eax,4(%edi);");
    asm("loc_68086F3: pop %edi;");
    asm("loc_68086F4: pop %esi;");
    asm("loc_68086F5: add $8,%esp;");
    asm("loc_68086F8: ret;");
    asm("loc_68086F9: lea 8(%esp),%ecx;");
    asm("loc_68086FD: push %ecx;");
    asm("loc_68086FE: push %esi;");
    asm("loc_68086FF: call _sub_6807630;");
    asm("loc_6808704: add $8,%esp;");
    asm("loc_6808707: movl $0,4(%edi);");
    asm("loc_680870E: pop %edi;");
    asm("loc_680870F: pop %esi;");
    asm("loc_6808710: add $8,%esp;");
    asm("loc_6808713: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808720() // _sub_6808720
{
    __DEBUG_ASM(6808720);
    // chunk 0x6808720 _sub_6808720
    asm("loc_6808720: push %ebp;");
    asm("loc_6808721: push %esi;");
    asm("loc_6808722: mov 0xC(%esp),%esi;");
    asm("loc_6808726: mov 4(%esi),%eax;");
    asm("loc_6808729: push %edi;");
    asm("loc_680872A: xor %edi,%edi;");
    asm("loc_680872C: xor %ebp,%ebp;");
    asm("loc_680872E: sub $0x29,%eax;");
    asm("loc_6808731: je loc_68087EA;");
    asm("loc_6808737: sub $0xEB,%eax;");
    asm("loc_680873C: je loc_6808764;");
    asm("loc_680873E: sub $2,%eax;");
    asm("loc_6808741: je loc_68087DC;");
    asm("loc_6808747: push $_data_680DD0C;");
    asm("loc_680874C: push %esi;");
    asm("loc_680874D: call _sub_680A850;");
    asm("loc_6808752: add $8,%esp;");
    asm("loc_6808755: push %ebp;");
    asm("loc_6808756: push %edi;");
    asm("loc_6808757: push %esi;");
    asm("loc_6808758: call _sub_6808800;");
    asm("loc_680875D: add $0xC,%esp;");
    asm("loc_6808760: pop %edi;");
    asm("loc_6808761: pop %esi;");
    asm("loc_6808762: pop %ebp;");
    asm("loc_6808763: ret;");
    asm("loc_6808764: push $0;");
    asm("loc_6808766: push %esi;");
    asm("loc_6808767: mov $1,%edi;");
    asm("loc_680876C: call _sub_6807750;");
    asm("loc_6808771: add $4,%esp;");
    asm("loc_6808774: push %eax;");
    asm("loc_6808775: push %esi;");
    asm("loc_6808776: call _sub_6807840;");
    asm("loc_680877B: mov 4(%esi),%eax;");
    asm("loc_680877E: add $0xC,%esp;");
    asm("loc_6808781: cmp $0x2C,%eax;");
    asm("loc_6808784: jne loc_68087EA;");
    asm("loc_6808786: push %esi;");
    asm("loc_6808787: call _sub_6806A20;");
    asm("loc_680878C: mov 4(%esi),%eax;");
    asm("loc_680878F: add $4,%esp;");
    asm("loc_6808792: sub $0x114,%eax;");
    asm("loc_6808797: jne loc_68087BA;");
    asm("loc_6808799: mov %edi,%eax;");
    asm("loc_680879B: push %eax;");
    asm("loc_680879C: push %esi;");
    asm("loc_680879D: inc %edi;");
    asm("loc_680879E: call _sub_6807750;");
    asm("loc_68087A3: add $4,%esp;");
    asm("loc_68087A6: push %eax;");
    asm("loc_68087A7: push %esi;");
    asm("loc_68087A8: call _sub_6807840;");
    asm("loc_68087AD: mov 4(%esi),%eax;");
    asm("loc_68087B0: add $0xC,%esp;");
    asm("loc_68087B3: cmp $0x2C,%eax;");
    asm("loc_68087B6: jne loc_68087EA;");
    asm("loc_68087B8: jmp loc_6808786;");
    asm("loc_68087BA: sub $2,%eax;");
    asm("loc_68087BD: je loc_68087DC;");
    asm("loc_68087BF: push $_data_680DD0C;");
    asm("loc_68087C4: push %esi;");
    asm("loc_68087C5: call _sub_680A850;");
    asm("loc_68087CA: add $8,%esp;");
    asm("loc_68087CD: push %ebp;");
    asm("loc_68087CE: push %edi;");
    asm("loc_68087CF: push %esi;");
    asm("loc_68087D0: call _sub_6808800;");
    asm("loc_68087D5: add $0xC,%esp;");
    asm("loc_68087D8: pop %edi;");
    asm("loc_68087D9: pop %esi;");
    asm("loc_68087DA: pop %ebp;");
    asm("loc_68087DB: ret;");
    asm("loc_68087DC: push %esi;");
    asm("loc_68087DD: call _sub_6806A20;");
    asm("loc_68087E2: add $4,%esp;");
    asm("loc_68087E5: mov $1,%ebp;");
    asm("loc_68087EA: push %ebp;");
    asm("loc_68087EB: push %edi;");
    asm("loc_68087EC: push %esi;");
    asm("loc_68087ED: call _sub_6808800;");
    asm("loc_68087F2: add $0xC,%esp;");
    asm("loc_68087F5: pop %edi;");
    asm("loc_68087F6: pop %esi;");
    asm("loc_68087F7: pop %ebp;");
    asm("loc_68087F8: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808800() // _sub_6808800
{
    __DEBUG_ASM(6808800);
    // chunk 0x6808800 _sub_6808800
    asm("loc_6808800: mov 8(%esp),%eax;");
    asm("loc_6808804: push %esi;");
    asm("loc_6808805: push %edi;");
    asm("loc_6808806: mov 0xC(%esp),%edi;");
    asm("loc_680880A: mov 8(%edi),%esi;");
    asm("loc_680880D: mov 0x14(%esi),%edx;");
    asm("loc_6808810: add %eax,%edx;");
    asm("loc_6808812: push $_data_680DD28;");
    asm("loc_6808817: mov %edx,%eax;");
    asm("loc_6808819: push $0x64;");
    asm("loc_680881B: push %eax;");
    asm("loc_680881C: push %edi;");
    asm("loc_680881D: mov %edx,0x14(%esi);");
    asm("loc_6808820: call _sub_6807890;");
    asm("loc_6808825: mov 0x24(%esp),%ecx;");
    asm("loc_6808829: mov 0x14(%esi),%eax;");
    asm("loc_680882C: add $0x10,%esp;");
    asm("loc_680882F: test %ecx,%ecx;");
    asm("loc_6808831: jne loc_6808848;");
    asm("loc_6808833: mov (%esi),%ecx;");
    asm("loc_6808835: mov 0x10(%ecx),%edx;");
    asm("loc_6808838: push %eax;");
    asm("loc_6808839: push %edi;");
    asm("loc_680883A: mov %al,1(%edx);");
    asm("loc_680883D: call _sub_6806990;");
    asm("loc_6808842: add $8,%esp;");
    asm("loc_6808845: pop %edi;");
    asm("loc_6808846: pop %esi;");
    asm("loc_6808847: ret;");
    asm("loc_6808848: mov (%esi),%edx;");
    asm("loc_680884A: mov 0x10(%edx),%edx;");
    asm("loc_680884D: mov %al,%cl;");
    asm("loc_680884F: add $0x80,%cl;");
    asm("loc_6808852: inc %eax;");
    asm("loc_6808853: push %eax;");
    asm("loc_6808854: push %edi;");
    asm("loc_6808855: mov %cl,1(%edx);");
    asm("loc_6808858: call _sub_6806990;");
    asm("loc_680885D: push $_data_680DD24;");
    asm("loc_6808862: call _sub_6805A80;");
    asm("loc_6808867: push %eax;");
    asm("loc_6808868: push %edi;");
    asm("loc_6808869: call _sub_6807810;");
    asm("loc_680886E: add $0x14,%esp;");
    asm("loc_6808871: pop %edi;");
    asm("loc_6808872: pop %esi;");
    asm("loc_6808873: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808880() // _sub_6808880
{
    __DEBUG_ASM(6808880);
    // chunk 0x6808880 _sub_6808880
    asm("loc_6808880: push %esi;");
    asm("loc_6808881: mov 8(%esp),%esi;");
    asm("loc_6808885: push %edi;");
    asm("loc_6808886: push $0;");
    asm("loc_6808888: push %esi;");
    asm("loc_6808889: mov $1,%edi;");
    asm("loc_680888E: call _sub_6807750;");
    asm("loc_6808893: add $4,%esp;");
    asm("loc_6808896: push %eax;");
    asm("loc_6808897: push %esi;");
    asm("loc_6808898: call _sub_6807840;");
    asm("loc_680889D: mov 4(%esi),%eax;");
    asm("loc_68088A0: add $0xC,%esp;");
    asm("loc_68088A3: cmp $0x2C,%eax;");
    asm("loc_68088A6: jne loc_68088D0;");
    asm("loc_68088A8: push %esi;");
    asm("loc_68088A9: call _sub_6806A20;");
    asm("loc_68088AE: add $4,%esp;");
    asm("loc_68088B1: mov %edi,%eax;");
    asm("loc_68088B3: push %eax;");
    asm("loc_68088B4: push %esi;");
    asm("loc_68088B5: inc %edi;");
    asm("loc_68088B6: call _sub_6807750;");
    asm("loc_68088BB: add $4,%esp;");
    asm("loc_68088BE: push %eax;");
    asm("loc_68088BF: push %esi;");
    asm("loc_68088C0: call _sub_6807840;");
    asm("loc_68088C5: mov 4(%esi),%eax;");
    asm("loc_68088C8: add $0xC,%esp;");
    asm("loc_68088CB: cmp $0x2C,%eax;");
    asm("loc_68088CE: je loc_68088A8;");
    asm("loc_68088D0: mov %edi,%eax;");
    asm("loc_68088D2: pop %edi;");
    asm("loc_68088D3: pop %esi;");
    asm("loc_68088D4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68088E0() // _sub_68088E0
{
    __DEBUG_ASM(68088E0);
    // chunk 0x68088E0 _sub_68088E0
    asm("loc_68088E0: push %esi;");
    asm("loc_68088E1: mov 8(%esp),%esi;");
    asm("loc_68088E5: cmpl $0x3D,4(%esi);");
    asm("loc_68088E9: jne loc_6808901;");
    asm("loc_68088EB: push %esi;");
    asm("loc_68088EC: call _sub_6806A20;");
    asm("loc_68088F1: mov 0x10(%esp),%eax;");
    asm("loc_68088F5: push %eax;");
    asm("loc_68088F6: push %esi;");
    asm("loc_68088F7: call _sub_6808690;");
    asm("loc_68088FC: add $0xC,%esp;");
    asm("loc_68088FF: pop %esi;");
    asm("loc_6808900: ret;");
    asm("loc_6808901: mov 0xC(%esp),%eax;");
    asm("loc_6808905: movl $0,(%eax);");
    asm("loc_680890B: movl $0,4(%eax);");
    asm("loc_6808912: pop %esi;");
    asm("loc_6808913: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808920() // _sub_6808920
{
    __DEBUG_ASM(6808920);
    // chunk 0x6808920 _sub_6808920
    asm("loc_6808920: sub $8,%esp;");
    asm("loc_6808923: push %ebx;");
    asm("loc_6808924: mov 0x18(%esp),%ebx;");
    asm("loc_6808928: push %ebp;");
    asm("loc_6808929: push %esi;");
    asm("loc_680892A: mov 0x18(%esp),%esi;");
    asm("loc_680892E: push %edi;");
    asm("loc_680892F: push $_data_680DD34;");
    asm("loc_6808934: push $0x64;");
    asm("loc_6808936: push %ebx;");
    asm("loc_6808937: push %esi;");
    asm("loc_6808938: xor %edi,%edi;");
    asm("loc_680893A: call _sub_6807890;");
    asm("loc_680893F: mov 0x30(%esp),%ebp;");
    asm("loc_6808943: push %ebp;");
    asm("loc_6808944: push %esi;");
    asm("loc_6808945: call _sub_6808A00;");
    asm("loc_680894A: mov 4(%esi),%eax;");
    asm("loc_680894D: add $0x18,%esp;");
    asm("loc_6808950: cmp $0x2C,%eax;");
    asm("loc_6808953: jne loc_6808996;");
    asm("loc_6808955: push %esi;");
    asm("loc_6808956: call _sub_6806A20;");
    asm("loc_680895B: lea 0x14(%esp),%eax;");
    asm("loc_680895F: push %eax;");
    asm("loc_6808960: push %esi;");
    asm("loc_6808961: call _sub_6808140;");
    asm("loc_6808966: mov 0x1C(%esp),%eax;");
    asm("loc_680896A: add $0xC,%esp;");
    asm("loc_680896D: cmp $4,%eax;");
    asm("loc_6808970: jne loc_6808980;");
    asm("loc_6808972: push $_data_680DB60;");
    asm("loc_6808977: push %esi;");
    asm("loc_6808978: call _sub_680A850;");
    asm("loc_680897D: add $8,%esp;");
    asm("loc_6808980: lea 1(%ebx),%ecx;");
    asm("loc_6808983: push %ecx;");
    asm("loc_6808984: lea 0x14(%esp),%edx;");
    asm("loc_6808988: push %edx;");
    asm("loc_6808989: push %esi;");
    asm("loc_680898A: call _sub_6808920;");
    asm("loc_680898F: add $0xC,%esp;");
    asm("loc_6808992: mov %eax,%edi;");
    asm("loc_6808994: jmp loc_68089B8;");
    asm("loc_6808996: push $0x3D;");
    asm("loc_6808998: push %esi;");
    asm("loc_6808999: call _sub_6807230;");
    asm("loc_680899E: lea 0x18(%esp),%eax;");
    asm("loc_68089A2: push %eax;");
    asm("loc_68089A3: push %esi;");
    asm("loc_68089A4: call _sub_6808690;");
    asm("loc_68089A9: lea 0x20(%esp),%ecx;");
    asm("loc_68089AD: push %ecx;");
    asm("loc_68089AE: push %ebx;");
    asm("loc_68089AF: push %esi;");
    asm("loc_68089B0: call _sub_6807060;");
    asm("loc_68089B5: add $0x1C,%esp;");
    asm("loc_68089B8: cmpl $3,(%ebp);");
    asm("loc_68089BC: jne loc_68089E1;");
    asm("loc_68089BE: lea -1(%edi,%ebx),%eax;");
    asm("loc_68089C2: test %eax,%eax;");
    asm("loc_68089C4: je loc_68089E1;");
    asm("loc_68089C6: push $0xFFFFFFFF;");
    asm("loc_68089C8: push %eax;");
    asm("loc_68089C9: push $0x1B;");
    asm("loc_68089CB: push %esi;");
    asm("loc_68089CC: call _sub_6806ED0;");
    asm("loc_68089D1: add $0x10,%esp;");
    asm("loc_68089D4: add $2,%edi;");
    asm("loc_68089D7: mov %edi,%eax;");
    asm("loc_68089D9: pop %edi;");
    asm("loc_68089DA: pop %esi;");
    asm("loc_68089DB: pop %ebp;");
    asm("loc_68089DC: pop %ebx;");
    asm("loc_68089DD: add $8,%esp;");
    asm("loc_68089E0: ret;");
    asm("loc_68089E1: push %ebp;");
    asm("loc_68089E2: push %esi;");
    asm("loc_68089E3: call _sub_68070C0;");
    asm("loc_68089E8: add $8,%esp;");
    asm("loc_68089EB: mov %edi,%eax;");
    asm("loc_68089ED: pop %edi;");
    asm("loc_68089EE: pop %esi;");
    asm("loc_68089EF: pop %ebp;");
    asm("loc_68089F0: pop %ebx;");
    asm("loc_68089F1: add $8,%esp;");
    asm("loc_68089F4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808A00() // _sub_6808A00
{
    __DEBUG_ASM(6808A00);
    // chunk 0x6808A00 _sub_6808A00
    asm("loc_6808A00: push %esi;");
    asm("loc_6808A01: mov 0xC(%esp),%esi;");
    asm("loc_6808A05: cmpl $2,(%esi);");
    asm("loc_6808A08: jne loc_6808A21;");
    asm("loc_6808A0A: mov 4(%esi),%eax;");
    asm("loc_6808A0D: mov 8(%esp),%ecx;");
    asm("loc_6808A11: push %eax;");
    asm("loc_6808A12: push %ecx;");
    asm("loc_6808A13: call _sub_68074B0;");
    asm("loc_6808A18: add $8,%esp;");
    asm("loc_6808A1B: movl $3,(%esi);");
    asm("loc_6808A21: pop %esi;");
    asm("loc_6808A22: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808A30() // _sub_6808A30
{
    __DEBUG_ASM(6808A30);
    // chunk 0x6808A30 _sub_6808A30
    asm("loc_6808A30: sub $0x10,%esp;");
    asm("loc_6808A33: push %ebx;");
    asm("loc_6808A34: push %ebp;");
    asm("loc_6808A35: push %esi;");
    asm("loc_6808A36: mov 0x20(%esp),%esi;");
    asm("loc_6808A3A: mov 0x1C(%esi),%ebx;");
    asm("loc_6808A3D: push %edi;");
    asm("loc_6808A3E: push %esi;");
    asm("loc_6808A3F: call _sub_68073B0;");
    asm("loc_6808A44: push $1;");
    asm("loc_6808A46: push %esi;");
    asm("loc_6808A47: mov %eax,%ebp;");
    asm("loc_6808A49: call _sub_6806990;");
    asm("loc_6808A4E: push $0x7B;");
    asm("loc_6808A50: push %esi;");
    asm("loc_6808A51: call _sub_6807230;");
    asm("loc_6808A56: lea 0x24(%esp),%eax;");
    asm("loc_6808A5A: push %eax;");
    asm("loc_6808A5B: push %esi;");
    asm("loc_6808A5C: call _sub_6808AD0;");
    asm("loc_6808A61: mov 4(%esi),%eax;");
    asm("loc_6808A64: mov 0x2C(%esp),%edi;");
    asm("loc_6808A68: add $0x1C,%esp;");
    asm("loc_6808A6B: cmp $0x3B,%eax;");
    asm("loc_6808A6E: jne loc_6808AA2;");
    asm("loc_6808A70: push %esi;");
    asm("loc_6808A71: call _sub_6806A20;");
    asm("loc_6808A76: lea 0x1C(%esp),%ecx;");
    asm("loc_6808A7A: push %ecx;");
    asm("loc_6808A7B: push %esi;");
    asm("loc_6808A7C: call _sub_6808AD0;");
    asm("loc_6808A81: mov 0x20(%esp),%edx;");
    asm("loc_6808A85: mov 0x28(%esp),%eax;");
    asm("loc_6808A89: add $0xC,%esp;");
    asm("loc_6808A8C: cmp %eax,%edx;");
    asm("loc_6808A8E: jne loc_6808A9E;");
    asm("loc_6808A90: push $_data_680DD58;");
    asm("loc_6808A95: push %esi;");
    asm("loc_6808A96: call _sub_680A850;");
    asm("loc_6808A9B: add $8,%esp;");
    asm("loc_6808A9E: add 0x18(%esp),%edi;");
    asm("loc_6808AA2: push %ebx;");
    asm("loc_6808AA3: push $0x7B;");
    asm("loc_6808AA5: push $0x7D;");
    asm("loc_6808AA7: push %esi;");
    asm("loc_6808AA8: call _sub_68072A0;");
    asm("loc_6808AAD: push %edi;");
    asm("loc_6808AAE: push $0x16;");
    asm("loc_6808AB0: push %ebp;");
    asm("loc_6808AB1: push %esi;");
    asm("loc_6808AB2: call _sub_6807150;");
    asm("loc_6808AB7: add $0x20,%esp;");
    asm("loc_6808ABA: pop %edi;");
    asm("loc_6808ABB: pop %esi;");
    asm("loc_6808ABC: pop %ebp;");
    asm("loc_6808ABD: pop %ebx;");
    asm("loc_6808ABE: add $0x10,%esp;");
    asm("loc_6808AC1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808AD0() // _sub_6808AD0
{
    asm("jmp dgb_6808AD0;"); // jumptable skip
    asm(".long _jmp_6808BF0;"); // jumptable address
    __DEBUG_ASM(6808AD0);
    // chunk 0x6808AD0 _sub_6808AD0
    asm("loc_6808AD0: sub $8,%esp;");
    asm("loc_6808AD3: push %esi;");
    asm("loc_6808AD4: mov 0x10(%esp),%esi;");
    asm("loc_6808AD8: mov 4(%esi),%eax;");
    asm("loc_6808ADB: add $0xFFFFFFC5,%eax;");
    asm("loc_6808ADE: cmp $0xD9,%eax;");
    asm("loc_6808AE3: ja loc_6808BCD;");
    asm("loc_6808AE9: xor %ecx,%ecx;");
    asm("loc_6808AEB: mov _data_6808C00(%eax),%cl;");
    asm("loc_6808AF1: jmpl *_jmp_6808BF0(,%ecx,4);");
    asm("loc_6808AF8: mov 0x14(%esp),%eax;");
    asm("loc_6808AFC: movl $0,(%eax);");
    asm("loc_6808B02: mov 4(%esi),%edx;");
    asm("loc_6808B05: mov %edx,4(%eax);");
    asm("loc_6808B08: pop %esi;");
    asm("loc_6808B09: add $8,%esp;");
    asm("loc_6808B0C: ret;");
    asm("loc_6808B0D: lea 4(%esp),%eax;");
    asm("loc_6808B11: push %eax;");
    asm("loc_6808B12: push %esi;");
    asm("loc_6808B13: call _sub_6807B80;");
    asm("loc_6808B18: mov 4(%esi),%eax;");
    asm("loc_6808B1B: add $8,%esp;");
    asm("loc_6808B1E: cmp $0x3D,%eax;");
    asm("loc_6808B21: jne loc_6808B86;");
    asm("loc_6808B23: mov 4(%esp),%eax;");
    asm("loc_6808B27: sub $0,%eax;");
    asm("loc_6808B2A: je loc_6808B51;");
    asm("loc_6808B2C: dec %eax;");
    asm("loc_6808B2D: je loc_6808B3A;");
    asm("loc_6808B2F: push %esi;");
    asm("loc_6808B30: call _sub_6807210;");
    asm("loc_6808B35: add $4,%esp;");
    asm("loc_6808B38: jmp loc_6808B5F;");
    asm("loc_6808B3A: mov 8(%esi),%ecx;");
    asm("loc_6808B3D: mov 8(%esp),%edx;");
    asm("loc_6808B41: mov 0x124(%ecx,%edx,4),%eax;");
    asm("loc_6808B48: push %eax;");
    asm("loc_6808B49: push %esi;");
    asm("loc_6808B4A: call _sub_6807FF0;");
    asm("loc_6808B4F: jmp loc_6808B5C;");
    asm("loc_6808B51: mov 8(%esp),%ecx;");
    asm("loc_6808B55: push %ecx;");
    asm("loc_6808B56: push %esi;");
    asm("loc_6808B57: call _sub_68074B0;");
    asm("loc_6808B5C: add $8,%esp;");
    asm("loc_6808B5F: push %esi;");
    asm("loc_6808B60: call _sub_6806A20;");
    asm("loc_6808B65: push %esi;");
    asm("loc_6808B66: call _sub_6807B00;");
    asm("loc_6808B6B: push %esi;");
    asm("loc_6808B6C: call _sub_6808CE0;");
    asm("loc_6808B71: mov 0x20(%esp),%ecx;");
    asm("loc_6808B75: add $0xC,%esp;");
    asm("loc_6808B78: mov %eax,(%ecx);");
    asm("loc_6808B7A: movl $1,4(%ecx);");
    asm("loc_6808B81: pop %esi;");
    asm("loc_6808B82: add $8,%esp;");
    asm("loc_6808B85: ret;");
    asm("loc_6808B86: lea 4(%esp),%edx;");
    asm("loc_6808B8A: push %edx;");
    asm("loc_6808B8B: push %esi;");
    asm("loc_6808B8C: call _sub_6807630;");
    asm("loc_6808B91: push %esi;");
    asm("loc_6808B92: call _sub_6808D80;");
    asm("loc_6808B97: mov 0x20(%esp),%ecx;");
    asm("loc_6808B9B: add $0xC,%esp;");
    asm("loc_6808B9E: mov %eax,(%ecx);");
    asm("loc_6808BA0: movl $0,4(%ecx);");
    asm("loc_6808BA7: pop %esi;");
    asm("loc_6808BA8: add $8,%esp;");
    asm("loc_6808BAB: ret;");
    asm("loc_6808BAC: push %esi;");
    asm("loc_6808BAD: call _sub_6808E40;");
    asm("loc_6808BB2: push %esi;");
    asm("loc_6808BB3: call _sub_6808CE0;");
    asm("loc_6808BB8: mov 0x1C(%esp),%ecx;");
    asm("loc_6808BBC: add $8,%esp;");
    asm("loc_6808BBF: mov %eax,(%ecx);");
    asm("loc_6808BC1: movl $1,4(%ecx);");
    asm("loc_6808BC8: pop %esi;");
    asm("loc_6808BC9: add $8,%esp;");
    asm("loc_6808BCC: ret;");
    asm("loc_6808BCD: push %esi;");
    asm("loc_6808BCE: call _sub_6807B00;");
    asm("loc_6808BD3: push %esi;");
    asm("loc_6808BD4: call _sub_6808D80;");
    asm("loc_6808BD9: mov 0x1C(%esp),%ecx;");
    asm("loc_6808BDD: add $8,%esp;");
    asm("loc_6808BE0: mov %eax,(%ecx);");
    asm("loc_6808BE2: movl $0,4(%ecx);");
    asm("loc_6808BE9: pop %esi;");
    asm("loc_6808BEA: add $8,%esp;");
    asm("loc_6808BED: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_6808BF0: .long loc_6808AF8;");
    asm(".long loc_6808BAC;");
    asm(".long loc_6808B0D;");
    asm(".long loc_6808BCD;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6808AD0);
_naked _weak void _sub_6808CE0() // _sub_6808CE0
{
    __DEBUG_ASM(6808CE0);
    // chunk 0x6808CE0 _sub_6808CE0
    asm("loc_6808CE0: push %esi;");
    asm("loc_6808CE1: mov 8(%esp),%esi;");
    asm("loc_6808CE5: cmpl $0x2C,4(%esi);");
    asm("loc_6808CE9: push %edi;");
    asm("loc_6808CEA: mov $1,%edi;");
    asm("loc_6808CEF: jne loc_6808D32;");
    asm("loc_6808CF1: push %esi;");
    asm("loc_6808CF2: call _sub_6806A20;");
    asm("loc_6808CF7: mov 4(%esi),%eax;");
    asm("loc_6808CFA: add $4,%esp;");
    asm("loc_6808CFD: cmp $0x3B,%eax;");
    asm("loc_6808D00: je loc_6808D32;");
    asm("loc_6808D02: cmp $0x7D,%eax;");
    asm("loc_6808D05: je loc_6808D32;");
    asm("loc_6808D07: push %esi;");
    asm("loc_6808D08: call _sub_6808E40;");
    asm("loc_6808D0D: add $4,%esp;");
    asm("loc_6808D10: inc %edi;");
    asm("loc_6808D11: mov %edi,%eax;");
    asm("loc_6808D13: and $0x8000001F,%eax;");
    asm("loc_6808D18: jns loc_6808D1F;");
    asm("loc_6808D1A: dec %eax;");
    asm("loc_6808D1B: or $0xFFFFFFE0,%eax;");
    asm("loc_6808D1E: inc %eax;");
    asm("loc_6808D1F: jne loc_6808D2C;");
    asm("loc_6808D21: push $0x20;");
    asm("loc_6808D23: push %esi;");
    asm("loc_6808D24: call _sub_6808D50;");
    asm("loc_6808D29: add $8,%esp;");
    asm("loc_6808D2C: cmpl $0x2C,4(%esi);");
    asm("loc_6808D30: je loc_6808CF1;");
    asm("loc_6808D32: mov %edi,%ecx;");
    asm("loc_6808D34: and $0x8000001F,%ecx;");
    asm("loc_6808D3A: jns loc_6808D41;");
    asm("loc_6808D3C: dec %ecx;");
    asm("loc_6808D3D: or $0xFFFFFFE0,%ecx;");
    asm("loc_6808D40: inc %ecx;");
    asm("loc_6808D41: push %ecx;");
    asm("loc_6808D42: push %esi;");
    asm("loc_6808D43: call _sub_6808D50;");
    asm("loc_6808D48: add $8,%esp;");
    asm("loc_6808D4B: mov %edi,%eax;");
    asm("loc_6808D4D: pop %edi;");
    asm("loc_6808D4E: pop %esi;");
    asm("loc_6808D4F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808D50() // _sub_6808D50
{
    __DEBUG_ASM(6808D50);
    // chunk 0x6808D50 _sub_6808D50
    asm("loc_6808D50: mov 8(%esp),%eax;");
    asm("loc_6808D54: test %eax,%eax;");
    asm("loc_6808D56: jle loc_6808D70;");
    asm("loc_6808D58: mov 4(%esp),%edx;");
    asm("loc_6808D5C: mov %eax,%ecx;");
    asm("loc_6808D5E: neg %ecx;");
    asm("loc_6808D60: shl $1,%ecx;");
    asm("loc_6808D62: push %ecx;");
    asm("loc_6808D63: dec %eax;");
    asm("loc_6808D64: push %eax;");
    asm("loc_6808D65: push $0x1E;");
    asm("loc_6808D67: push %edx;");
    asm("loc_6808D68: call _sub_6806ED0;");
    asm("loc_6808D6D: add $0x10,%esp;");
    asm("loc_6808D70: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808D80() // _sub_6808D80
{
    __DEBUG_ASM(6808D80);
    // chunk 0x6808D80 _sub_6808D80
    asm("loc_6808D80: push %esi;");
    asm("loc_6808D81: mov 8(%esp),%esi;");
    asm("loc_6808D85: cmpl $0x2C,4(%esi);");
    asm("loc_6808D89: push %edi;");
    asm("loc_6808D8A: mov $1,%edi;");
    asm("loc_6808D8F: jne loc_6808DDF;");
    asm("loc_6808D91: push %esi;");
    asm("loc_6808D92: call _sub_6806A20;");
    asm("loc_6808D97: mov 4(%esi),%eax;");
    asm("loc_6808D9A: add $4,%esp;");
    asm("loc_6808D9D: cmp $0x3B,%eax;");
    asm("loc_6808DA0: je loc_6808DDF;");
    asm("loc_6808DA2: cmp $0x7D,%eax;");
    asm("loc_6808DA5: je loc_6808DDF;");
    asm("loc_6808DA7: push %esi;");
    asm("loc_6808DA8: call _sub_6807B00;");
    asm("loc_6808DAD: add $4,%esp;");
    asm("loc_6808DB0: inc %edi;");
    asm("loc_6808DB1: mov %edi,%eax;");
    asm("loc_6808DB3: and $0x8000003F,%eax;");
    asm("loc_6808DB8: jns loc_6808DBF;");
    asm("loc_6808DBA: dec %eax;");
    asm("loc_6808DBB: or $0xFFFFFFC0,%eax;");
    asm("loc_6808DBE: inc %eax;");
    asm("loc_6808DBF: jne loc_6808DD9;");
    asm("loc_6808DC1: mov %edi,%eax;");
    asm("loc_6808DC3: cltd;");
    asm("loc_6808DC4: and $0x3F,%edx;");
    asm("loc_6808DC7: add %edx,%eax;");
    asm("loc_6808DC9: sar $6,%eax;");
    asm("loc_6808DCC: push $0x40;");
    asm("loc_6808DCE: dec %eax;");
    asm("loc_6808DCF: push %eax;");
    asm("loc_6808DD0: push %esi;");
    asm("loc_6808DD1: call _sub_6808E10;");
    asm("loc_6808DD6: add $0xC,%esp;");
    asm("loc_6808DD9: cmpl $0x2C,4(%esi);");
    asm("loc_6808DDD: je loc_6808D91;");
    asm("loc_6808DDF: mov %edi,%ecx;");
    asm("loc_6808DE1: and $0x8000003F,%ecx;");
    asm("loc_6808DE7: jns loc_6808DEE;");
    asm("loc_6808DE9: dec %ecx;");
    asm("loc_6808DEA: or $0xFFFFFFC0,%ecx;");
    asm("loc_6808DED: inc %ecx;");
    asm("loc_6808DEE: mov %edi,%eax;");
    asm("loc_6808DF0: cltd;");
    asm("loc_6808DF1: and $0x3F,%edx;");
    asm("loc_6808DF4: add %edx,%eax;");
    asm("loc_6808DF6: push %ecx;");
    asm("loc_6808DF7: sar $6,%eax;");
    asm("loc_6808DFA: push %eax;");
    asm("loc_6808DFB: push %esi;");
    asm("loc_6808DFC: call _sub_6808E10;");
    asm("loc_6808E01: add $0xC,%esp;");
    asm("loc_6808E04: mov %edi,%eax;");
    asm("loc_6808E06: pop %edi;");
    asm("loc_6808E07: pop %esi;");
    asm("loc_6808E08: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808E10() // _sub_6808E10
{
    __DEBUG_ASM(6808E10);
    // chunk 0x6808E10 _sub_6808E10
    asm("loc_6808E10: push %esi;");
    asm("loc_6808E11: mov 0x10(%esp),%esi;");
    asm("loc_6808E15: test %esi,%esi;");
    asm("loc_6808E17: jle loc_6808E3E;");
    asm("loc_6808E19: mov 0xC(%esp),%ecx;");
    asm("loc_6808E1D: push %edi;");
    asm("loc_6808E1E: mov 0xC(%esp),%edi;");
    asm("loc_6808E22: mov %esi,%eax;");
    asm("loc_6808E24: neg %eax;");
    asm("loc_6808E26: push %eax;");
    asm("loc_6808E27: push %ecx;");
    asm("loc_6808E28: push $0x1D;");
    asm("loc_6808E2A: push %edi;");
    asm("loc_6808E2B: call _sub_6806ED0;");
    asm("loc_6808E30: mov 8(%edi),%edx;");
    asm("loc_6808E33: push %esi;");
    asm("loc_6808E34: push %edx;");
    asm("loc_6808E35: call _sub_6806870;");
    asm("loc_6808E3A: add $0x18,%esp;");
    asm("loc_6808E3D: pop %edi;");
    asm("loc_6808E3E: pop %esi;");
    asm("loc_6808E3F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808E40() // _sub_6808E40
{
    __DEBUG_ASM(6808E40);
    // chunk 0x6808E40 _sub_6808E40
    asm("loc_6808E40: push %esi;");
    asm("loc_6808E41: mov 8(%esp),%esi;");
    asm("loc_6808E45: mov 4(%esi),%eax;");
    asm("loc_6808E48: cmp $0x5B,%eax;");
    asm("loc_6808E4B: je loc_6808E98;");
    asm("loc_6808E4D: cmp $0x114,%eax;");
    asm("loc_6808E52: je loc_6808E75;");
    asm("loc_6808E54: push $_data_680DD74;");
    asm("loc_6808E59: push %esi;");
    asm("loc_6808E5A: call _sub_680A850;");
    asm("loc_6808E5F: add $8,%esp;");
    asm("loc_6808E62: push $0x3D;");
    asm("loc_6808E64: push %esi;");
    asm("loc_6808E65: call _sub_6807230;");
    asm("loc_6808E6A: push %esi;");
    asm("loc_6808E6B: call _sub_6807B00;");
    asm("loc_6808E70: add $0xC,%esp;");
    asm("loc_6808E73: pop %esi;");
    asm("loc_6808E74: ret;");
    asm("loc_6808E75: push %esi;");
    asm("loc_6808E76: call _sub_6807710;");
    asm("loc_6808E7B: push %eax;");
    asm("loc_6808E7C: push %esi;");
    asm("loc_6808E7D: call _sub_68074B0;");
    asm("loc_6808E82: add $0xC,%esp;");
    asm("loc_6808E85: push $0x3D;");
    asm("loc_6808E87: push %esi;");
    asm("loc_6808E88: call _sub_6807230;");
    asm("loc_6808E8D: push %esi;");
    asm("loc_6808E8E: call _sub_6807B00;");
    asm("loc_6808E93: add $0xC,%esp;");
    asm("loc_6808E96: pop %esi;");
    asm("loc_6808E97: ret;");
    asm("loc_6808E98: push %esi;");
    asm("loc_6808E99: call _sub_6806A20;");
    asm("loc_6808E9E: push %esi;");
    asm("loc_6808E9F: call _sub_6807B00;");
    asm("loc_6808EA4: push $0x5D;");
    asm("loc_6808EA6: push %esi;");
    asm("loc_6808EA7: call _sub_6807230;");
    asm("loc_6808EAC: add $0x10,%esp;");
    asm("loc_6808EAF: push $0x3D;");
    asm("loc_6808EB1: push %esi;");
    asm("loc_6808EB2: call _sub_6807230;");
    asm("loc_6808EB7: push %esi;");
    asm("loc_6808EB8: call _sub_6807B00;");
    asm("loc_6808EBD: add $0xC,%esp;");
    asm("loc_6808EC0: pop %esi;");
    asm("loc_6808EC1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808ED0() // _sub_6808ED0
{
    __DEBUG_ASM(6808ED0);
    // chunk 0x6808ED0 _sub_6808ED0
    asm("loc_6808ED0: sub $8,%esp;");
    asm("loc_6808ED3: push %esi;");
    asm("loc_6808ED4: mov 0x10(%esp),%esi;");
    asm("loc_6808ED8: mov (%esi),%cl;");
    asm("loc_6808EDA: xor %eax,%eax;");
    asm("loc_6808EDC: cmp $0x2D,%cl;");
    asm("loc_6808EDF: sete %al;");
    asm("loc_6808EE2: push %edi;");
    asm("loc_6808EE3: mov %eax,%edi;");
    asm("loc_6808EE5: lea (%edi,%esi),%ecx;");
    asm("loc_6808EE8: push %ecx;");
    asm("loc_6808EE9: call _sub_68061C0;");
    asm("loc_6808EEE: fstl 0xC(%esp);");
    asm("loc_6808EF2: fcompl _data_680C180;");
    asm("loc_6808EF8: add $4,%esp;");
    asm("loc_6808EFB: fnstsw %ax;");
    asm("loc_6808EFD: test $1,%ah;");
    asm("loc_6808F00: je loc_6808F15;");
    asm("loc_6808F02: mov 0x18(%esp),%edx;");
    asm("loc_6808F06: push %edx;");
    asm("loc_6808F07: push %esi;");
    asm("loc_6808F08: push $_data_680DD8C;");
    asm("loc_6808F0D: call _sub_6805FB0;");
    asm("loc_6808F12: add $0xC,%esp;");
    asm("loc_6808F15: fldl 8(%esp);");
    asm("loc_6808F19: test %edi,%edi;");
    asm("loc_6808F1B: pop %edi;");
    asm("loc_6808F1C: pop %esi;");
    asm("loc_6808F1D: je loc_6808F21;");
    asm("loc_6808F1F: fchs;");
    asm("loc_6808F21: add $8,%esp;");
    asm("loc_6808F24: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808F30() // _sub_6808F30
{
    __DEBUG_ASM(6808F30);
    // chunk 0x6808F30 _sub_6808F30
    asm("loc_6808F30: push %esi;");
    asm("loc_6808F31: mov 8(%esp),%esi;");
    asm("loc_6808F35: decl (%esi);");
    asm("loc_6808F37: js loc_6808F46;");
    asm("loc_6808F39: mov 4(%esi),%ecx;");
    asm("loc_6808F3C: xor %eax,%eax;");
    asm("loc_6808F3E: mov (%ecx),%al;");
    asm("loc_6808F40: inc %ecx;");
    asm("loc_6808F41: mov %ecx,4(%esi);");
    asm("loc_6808F44: jmp loc_6808F4D;");
    asm("loc_6808F46: push %esi;");
    asm("loc_6808F47: calll *8(%esi);");
    asm("loc_6808F4A: add $4,%esp;");
    asm("loc_6808F4D: cmp $0x1B,%eax;");
    asm("loc_6808F50: jne loc_6808F5D;");
    asm("loc_6808F52: push %esi;");
    asm("loc_6808F53: call _sub_6808F80;");
    asm("loc_6808F58: add $4,%esp;");
    asm("loc_6808F5B: pop %esi;");
    asm("loc_6808F5C: ret;");
    asm("loc_6808F5D: cmp $0xFFFFFFFF,%eax;");
    asm("loc_6808F60: je loc_6808F73;");
    asm("loc_6808F62: mov 0x10(%esi),%eax;");
    asm("loc_6808F65: push %eax;");
    asm("loc_6808F66: push $_data_680DDB0;");
    asm("loc_6808F6B: call _sub_6805FB0;");
    asm("loc_6808F70: add $8,%esp;");
    asm("loc_6808F73: xor %eax,%eax;");
    asm("loc_6808F75: pop %esi;");
    asm("loc_6808F76: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808F80() // _sub_6808F80
{
    __DEBUG_ASM(6808F80);
    // chunk 0x6808F80 _sub_6808F80
    asm("loc_6808F80: push %esi;");
    asm("loc_6808F81: mov 8(%esp),%esi;");
    asm("loc_6808F85: push %esi;");
    asm("loc_6808F86: call _sub_6809360;");
    asm("loc_6808F8B: push %eax;");
    asm("loc_6808F8C: push %esi;");
    asm("loc_6808F8D: call _sub_6808FA0;");
    asm("loc_6808F92: add $0xC,%esp;");
    asm("loc_6808F95: pop %esi;");
    asm("loc_6808F96: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6808FA0() // _sub_6808FA0
{
    __DEBUG_ASM(6808FA0);
    // chunk 0x6808FA0 _sub_6808FA0
    asm("loc_6808FA0: push %esi;");
    asm("loc_6808FA1: push %edi;");
    asm("loc_6808FA2: call _sub_6806460;");
    asm("loc_6808FA7: mov 0xC(%esp),%edi;");
    asm("loc_6808FAB: push $_data_680DDCC;");
    asm("loc_6808FB0: push %edi;");
    asm("loc_6808FB1: mov %eax,%esi;");
    asm("loc_6808FB3: call _sub_6809000;");
    asm("loc_6808FB8: push %edi;");
    asm("loc_6808FB9: mov %eax,0x14(%esi);");
    asm("loc_6808FBC: call _sub_6809140;");
    asm("loc_6808FC1: add $0xC,%esp;");
    asm("loc_6808FC4: test %eax,%eax;");
    asm("loc_6808FC6: mov %eax,0x18(%esi);");
    asm("loc_6808FC9: jne loc_6808FDA;");
    asm("loc_6808FCB: mov 0x10(%edi),%eax;");
    asm("loc_6808FCE: push %eax;");
    asm("loc_6808FCF: call _sub_6805A80;");
    asm("loc_6808FD4: add $4,%esp;");
    asm("loc_6808FD7: mov %eax,0x18(%esi);");
    asm("loc_6808FDA: push %edi;");
    asm("loc_6808FDB: call _sub_68090B0;");
    asm("loc_6808FE0: push %edi;");
    asm("loc_6808FE1: push %esi;");
    asm("loc_6808FE2: mov %eax,0x10(%esi);");
    asm("loc_6808FE5: call _sub_6809180;");
    asm("loc_6808FEA: mov 0x1C(%esp),%ecx;");
    asm("loc_6808FEE: push %ecx;");
    asm("loc_6808FEF: push %edi;");
    asm("loc_6808FF0: push %esi;");
    asm("loc_6808FF1: call _sub_6809200;");
    asm("loc_6808FF6: add $0x18,%esp;");
    asm("loc_6808FF9: pop %edi;");
    asm("loc_6808FFA: mov %esi,%eax;");
    asm("loc_6808FFC: pop %esi;");
    asm("loc_6808FFD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809000() // _sub_6809000
{
    __DEBUG_ASM(6809000);
    // chunk 0x6809000 _sub_6809000
    asm("loc_6809000: mov 4(%esp),%eax;");
    asm("loc_6809004: push %eax;");
    asm("loc_6809005: call _sub_6809010;");
    asm("loc_680900A: add $4,%esp;");
    asm("loc_680900D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809010() // _sub_6809010
{
    __DEBUG_ASM(6809010);
    // chunk 0x6809010 _sub_6809010
    asm("loc_6809010: push %esi;");
    asm("loc_6809011: push %edi;");
    asm("loc_6809012: mov 0xC(%esp),%edi;");
    asm("loc_6809016: push %edi;");
    asm("loc_6809017: call _sub_6809030;");
    asm("loc_680901C: push %edi;");
    asm("loc_680901D: mov %eax,%esi;");
    asm("loc_680901F: call _sub_6809030;");
    asm("loc_6809024: add $8,%esp;");
    asm("loc_6809027: shl $0x10,%esi;");
    asm("loc_680902A: pop %edi;");
    asm("loc_680902B: or %esi,%eax;");
    asm("loc_680902D: pop %esi;");
    asm("loc_680902E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809030() // _sub_6809030
{
    __DEBUG_ASM(6809030);
    // chunk 0x6809030 _sub_6809030
    asm("loc_6809030: push %esi;");
    asm("loc_6809031: push %edi;");
    asm("loc_6809032: mov 0xC(%esp),%edi;");
    asm("loc_6809036: push %edi;");
    asm("loc_6809037: call _sub_6809050;");
    asm("loc_680903C: push %edi;");
    asm("loc_680903D: mov %eax,%esi;");
    asm("loc_680903F: call _sub_6809050;");
    asm("loc_6809044: add $8,%esp;");
    asm("loc_6809047: shl $8,%esi;");
    asm("loc_680904A: pop %edi;");
    asm("loc_680904B: or %esi,%eax;");
    asm("loc_680904D: pop %esi;");
    asm("loc_680904E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809050() // _sub_6809050
{
    __DEBUG_ASM(6809050);
    // chunk 0x6809050 _sub_6809050
    asm("loc_6809050: push %esi;");
    asm("loc_6809051: mov 8(%esp),%esi;");
    asm("loc_6809055: mov (%esi),%eax;");
    asm("loc_6809057: dec %eax;");
    asm("loc_6809058: push %edi;");
    asm("loc_6809059: mov %eax,(%esi);");
    asm("loc_680905B: js loc_680906C;");
    asm("loc_680905D: mov 4(%esi),%eax;");
    asm("loc_6809060: xor %ecx,%ecx;");
    asm("loc_6809062: mov (%eax),%cl;");
    asm("loc_6809064: inc %eax;");
    asm("loc_6809065: mov %eax,4(%esi);");
    asm("loc_6809068: mov %ecx,%edi;");
    asm("loc_680906A: jmp loc_6809075;");
    asm("loc_680906C: push %esi;");
    asm("loc_680906D: calll *8(%esi);");
    asm("loc_6809070: add $4,%esp;");
    asm("loc_6809073: mov %eax,%edi;");
    asm("loc_6809075: cmp $0xFFFFFFFF,%edi;");
    asm("loc_6809078: jne loc_6809083;");
    asm("loc_680907A: push %esi;");
    asm("loc_680907B: call _sub_6809090;");
    asm("loc_6809080: add $4,%esp;");
    asm("loc_6809083: mov %edi,%eax;");
    asm("loc_6809085: pop %edi;");
    asm("loc_6809086: pop %esi;");
    asm("loc_6809087: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809090() // _sub_6809090
{
    __DEBUG_ASM(6809090);
    // chunk 0x6809090 _sub_6809090
    asm("loc_6809090: mov 4(%esp),%eax;");
    asm("loc_6809094: mov 0x10(%eax),%ecx;");
    asm("loc_6809097: push %ecx;");
    asm("loc_6809098: push $_data_680DDF0;");
    asm("loc_680909D: call _sub_6805FB0;");
    asm("loc_68090A2: add $8,%esp;");
    asm("loc_68090A5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68090B0() // _sub_68090B0
{
    __DEBUG_ASM(68090B0);
    // chunk 0x68090B0 _sub_68090B0
    asm("loc_68090B0: push %ebx;");
    asm("loc_68090B1: mov 8(%esp),%ebx;");
    asm("loc_68090B5: push %esi;");
    asm("loc_68090B6: push %edi;");
    asm("loc_68090B7: push $_data_680DE20;");
    asm("loc_68090BC: push %ebx;");
    asm("loc_68090BD: call _sub_6809000;");
    asm("loc_68090C2: mov %eax,%esi;");
    asm("loc_68090C4: lea 5(%esi),%eax;");
    asm("loc_68090C7: push %eax;");
    asm("loc_68090C8: push $0;");
    asm("loc_68090CA: call _sub_68065D0;");
    asm("loc_68090CF: mov %eax,%edi;");
    asm("loc_68090D1: push %esi;");
    asm("loc_68090D2: push %edi;");
    asm("loc_68090D3: push %ebx;");
    asm("loc_68090D4: call _sub_6809110;");
    asm("loc_68090D9: mov -1(%esi,%edi),%al;");
    asm("loc_68090DD: add %edi,%esi;");
    asm("loc_68090DF: add $0x1C,%esp;");
    asm("loc_68090E2: test %al,%al;");
    asm("loc_68090E4: je loc_68090F7;");
    asm("loc_68090E6: mov 0x10(%ebx),%ecx;");
    asm("loc_68090E9: push %ecx;");
    asm("loc_68090EA: push $_data_680DE10;");
    asm("loc_68090EF: call _sub_6805FB0;");
    asm("loc_68090F4: add $8,%esp;");
    asm("loc_68090F7: xor %edx,%edx;");
    asm("loc_68090F9: mov %edx,(%esi);");
    asm("loc_68090FB: mov %edi,%eax;");
    asm("loc_68090FD: pop %edi;");
    asm("loc_68090FE: mov %dl,4(%esi);");
    asm("loc_6809101: pop %esi;");
    asm("loc_6809102: pop %ebx;");
    asm("loc_6809103: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809110() // _sub_6809110
{
    __DEBUG_ASM(6809110);
    // chunk 0x6809110 _sub_6809110
    asm("loc_6809110: mov 0xC(%esp),%eax;");
    asm("loc_6809114: mov 8(%esp),%ecx;");
    asm("loc_6809118: push %esi;");
    asm("loc_6809119: mov 8(%esp),%esi;");
    asm("loc_680911D: push %eax;");
    asm("loc_680911E: push %ecx;");
    asm("loc_680911F: push %esi;");
    asm("loc_6809120: call _sub_68066D0;");
    asm("loc_6809125: add $0xC,%esp;");
    asm("loc_6809128: test %eax,%eax;");
    asm("loc_680912A: je loc_6809135;");
    asm("loc_680912C: push %esi;");
    asm("loc_680912D: call _sub_6809090;");
    asm("loc_6809132: add $4,%esp;");
    asm("loc_6809135: pop %esi;");
    asm("loc_6809136: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809140() // _sub_6809140
{
    __DEBUG_ASM(6809140);
    // chunk 0x6809140 _sub_6809140
    asm("loc_6809140: push %ebx;");
    asm("loc_6809141: mov 8(%esp),%ebx;");
    asm("loc_6809145: push %esi;");
    asm("loc_6809146: push %ebx;");
    asm("loc_6809147: call _sub_6809010;");
    asm("loc_680914C: mov %eax,%esi;");
    asm("loc_680914E: add $4,%esp;");
    asm("loc_6809151: test %esi,%esi;");
    asm("loc_6809153: jne loc_6809158;");
    asm("loc_6809155: pop %esi;");
    asm("loc_6809156: pop %ebx;");
    asm("loc_6809157: ret;");
    asm("loc_6809158: push %edi;");
    asm("loc_6809159: push %esi;");
    asm("loc_680915A: call _sub_680BB70;");
    asm("loc_680915F: mov %eax,%edi;");
    asm("loc_6809161: push %esi;");
    asm("loc_6809162: push %edi;");
    asm("loc_6809163: push %ebx;");
    asm("loc_6809164: call _sub_6809110;");
    asm("loc_6809169: dec %esi;");
    asm("loc_680916A: push %esi;");
    asm("loc_680916B: push %edi;");
    asm("loc_680916C: call _sub_68058A0;");
    asm("loc_6809171: add $0x18,%esp;");
    asm("loc_6809174: pop %edi;");
    asm("loc_6809175: pop %esi;");
    asm("loc_6809176: pop %ebx;");
    asm("loc_6809177: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809180() // _sub_6809180
{
    __DEBUG_ASM(6809180);
    // chunk 0x6809180 _sub_6809180
    asm("loc_6809180: push %ebx;");
    asm("loc_6809181: push %ebp;");
    asm("loc_6809182: mov 0x10(%esp),%ebp;");
    asm("loc_6809186: push $_data_680DE5C;");
    asm("loc_680918B: push %ebp;");
    asm("loc_680918C: call _sub_6809000;");
    asm("loc_6809191: mov %eax,%ebx;");
    asm("loc_6809193: add $8,%esp;");
    asm("loc_6809196: test %ebx,%ebx;");
    asm("loc_6809198: je loc_68091F8;");
    asm("loc_680919A: push %esi;");
    asm("loc_680919B: push %edi;");
    asm("loc_680919C: mov 0x14(%esp),%edi;");
    asm("loc_68091A0: lea 8(,%ebx,8),%eax;");
    asm("loc_68091A7: push %eax;");
    asm("loc_68091A8: push $0;");
    asm("loc_68091AA: call _sub_68065D0;");
    asm("loc_68091AF: add $8,%esp;");
    asm("loc_68091B2: xor %esi,%esi;");
    asm("loc_68091B4: test %ebx,%ebx;");
    asm("loc_68091B6: mov %eax,0x1C(%edi);");
    asm("loc_68091B9: jle loc_68091E1;");
    asm("loc_68091BB: push $_data_680DE40;");
    asm("loc_68091C0: push %ebp;");
    asm("loc_68091C1: call _sub_6809000;");
    asm("loc_68091C6: mov 0x1C(%edi),%ecx;");
    asm("loc_68091C9: push %ebp;");
    asm("loc_68091CA: mov %eax,4(%ecx,%esi,8);");
    asm("loc_68091CE: call _sub_6809140;");
    asm("loc_68091D3: mov 0x1C(%edi),%edx;");
    asm("loc_68091D6: add $0xC,%esp;");
    asm("loc_68091D9: mov %eax,(%edx,%esi,8);");
    asm("loc_68091DC: inc %esi;");
    asm("loc_68091DD: cmp %ebx,%esi;");
    asm("loc_68091DF: jl loc_68091BB;");
    asm("loc_68091E1: mov 0x1C(%edi),%eax;");
    asm("loc_68091E4: movl $0xFFFFFFFF,4(%eax,%esi,8);");
    asm("loc_68091EC: mov 0x1C(%edi),%ecx;");
    asm("loc_68091EF: pop %edi;");
    asm("loc_68091F0: movl $0,(%ecx,%esi,8);");
    asm("loc_68091F7: pop %esi;");
    asm("loc_68091F8: pop %ebp;");
    asm("loc_68091F9: pop %ebx;");
    asm("loc_68091FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809200() // _sub_6809200
{
    asm("jmp dgb_6809200;"); // jumptable skip
    asm(".long _jmp_68092D0;"); // jumptable address
    __DEBUG_ASM(6809200);
    // chunk 0x6809200 _sub_6809200
    asm("loc_6809200: push %ecx;");
    asm("loc_6809201: push %ebx;");
    asm("loc_6809202: push %ebp;");
    asm("loc_6809203: push %esi;");
    asm("loc_6809204: push %edi;");
    asm("loc_6809205: mov 0x1C(%esp),%edi;");
    asm("loc_6809209: push $_data_680DE80;");
    asm("loc_680920E: push %edi;");
    asm("loc_680920F: call _sub_6809000;");
    asm("loc_6809214: mov 0x20(%esp),%ebx;");
    asm("loc_6809218: mov %eax,%esi;");
    asm("loc_680921A: xor %ebp,%ebp;");
    asm("loc_680921C: add $8,%esp;");
    asm("loc_680921F: cmp %ebp,%esi;");
    asm("loc_6809221: mov %esi,0x10(%esp);");
    asm("loc_6809225: mov %esi,0xC(%ebx);");
    asm("loc_6809228: je loc_68092C7;");
    asm("loc_680922E: shl $4,%eax;");
    asm("loc_6809231: push %eax;");
    asm("loc_6809232: push %ebp;");
    asm("loc_6809233: call _sub_68065D0;");
    asm("loc_6809238: add $8,%esp;");
    asm("loc_680923B: cmp %ebp,%esi;");
    asm("loc_680923D: mov %eax,8(%ebx);");
    asm("loc_6809240: jle loc_68092C7;");
    asm("loc_6809246: mov %ebp,0x1C(%esp);");
    asm("loc_680924A: mov 8(%ebx),%eax;");
    asm("loc_680924D: mov 0x1C(%esp),%esi;");
    asm("loc_6809251: push %edi;");
    asm("loc_6809252: add %eax,%esi;");
    asm("loc_6809254: call _sub_6809050;");
    asm("loc_6809259: neg %eax;");
    asm("loc_680925B: mov %eax,(%esi);");
    asm("loc_680925D: add $6,%eax;");
    asm("loc_6809260: add $4,%esp;");
    asm("loc_6809263: cmp $5,%eax;");
    asm("loc_6809266: ja loc_68092A3;");
    asm("loc_6809268: jmpl *_jmp_68092D0(,%eax,4);");
    asm("loc_680926F: mov 0x20(%esp),%ecx;");
    asm("loc_6809273: push %ecx;");
    asm("loc_6809274: push %edi;");
    asm("loc_6809275: call _sub_68092F0;");
    asm("loc_680927A: fstpl 8(%esi);");
    asm("loc_680927D: add $8,%esp;");
    asm("loc_6809280: jmp loc_68092B3;");
    asm("loc_6809282: push %edi;");
    asm("loc_6809283: call _sub_6809140;");
    asm("loc_6809288: add $4,%esp;");
    asm("loc_680928B: mov %eax,8(%esi);");
    asm("loc_680928E: jmp loc_68092B3;");
    asm("loc_6809290: mov 0x20(%esp),%edx;");
    asm("loc_6809294: push %edx;");
    asm("loc_6809295: push %edi;");
    asm("loc_6809296: call _sub_6808FA0;");
    asm("loc_680929B: add $8,%esp;");
    asm("loc_680929E: mov %eax,8(%esi);");
    asm("loc_68092A1: jmp loc_68092B3;");
    asm("loc_68092A3: push %ebx;");
    asm("loc_68092A4: push %esi;");
    asm("loc_68092A5: push %ebp;");
    asm("loc_68092A6: push $_data_680DE78;");
    asm("loc_68092AB: call _sub_6809480;");
    asm("loc_68092B0: add $0x10,%esp;");
    asm("loc_68092B3: mov 0x1C(%esp),%ecx;");
    asm("loc_68092B7: mov 0x10(%esp),%eax;");
    asm("loc_68092BB: inc %ebp;");
    asm("loc_68092BC: add $0x10,%ecx;");
    asm("loc_68092BF: cmp %eax,%ebp;");
    asm("loc_68092C1: mov %ecx,0x1C(%esp);");
    asm("loc_68092C5: jl loc_680924A;");
    asm("loc_68092C7: pop %edi;");
    asm("loc_68092C8: pop %esi;");
    asm("loc_68092C9: pop %ebp;");
    asm("loc_68092CA: pop %ebx;");
    asm("loc_68092CB: pop %ecx;");
    asm("loc_68092CC: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_68092D0: .long loc_68092B3;");
    asm(".long loc_68092A3;");
    asm(".long loc_6809290;");
    asm(".long loc_68092A3;");
    asm(".long loc_6809282;");
    asm(".long loc_680926F;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6809200);
_naked _weak void _sub_68092F0() // _sub_68092F0
{
    __DEBUG_ASM(68092F0);
    // chunk 0x68092F0 _sub_68092F0
    asm("loc_68092F0: mov 8(%esp),%eax;");
    asm("loc_68092F4: sub $0x108,%esp;");
    asm("loc_68092FA: test %eax,%eax;");
    asm("loc_68092FC: je loc_6809320;");
    asm("loc_68092FE: mov 0x10C(%esp),%ecx;");
    asm("loc_6809305: push $8;");
    asm("loc_6809307: lea 4(%esp),%eax;");
    asm("loc_680930B: push %eax;");
    asm("loc_680930C: push %ecx;");
    asm("loc_680930D: call _sub_6809110;");
    asm("loc_6809312: fldl 0xC(%esp);");
    asm("loc_6809316: add $0xC,%esp;");
    asm("loc_6809319: add $0x108,%esp;");
    asm("loc_680931F: ret;");
    asm("loc_6809320: push %esi;");
    asm("loc_6809321: mov 0x110(%esp),%esi;");
    asm("loc_6809328: push %edi;");
    asm("loc_6809329: push %esi;");
    asm("loc_680932A: call _sub_6809050;");
    asm("loc_680932F: mov %eax,%edi;");
    asm("loc_6809331: push %edi;");
    asm("loc_6809332: lea 0x18(%esp),%edx;");
    asm("loc_6809336: push %edx;");
    asm("loc_6809337: push %esi;");
    asm("loc_6809338: call _sub_6809110;");
    asm("loc_680933D: mov 0x10(%esi),%eax;");
    asm("loc_6809340: push %eax;");
    asm("loc_6809341: lea 0x24(%esp),%ecx;");
    asm("loc_6809345: push %ecx;");
    asm("loc_6809346: movb $0,0x28(%esp,%edi);");
    asm("loc_680934B: call _sub_6808ED0;");
    asm("loc_6809350: add $0x18,%esp;");
    asm("loc_6809353: pop %edi;");
    asm("loc_6809354: pop %esi;");
    asm("loc_6809355: add $0x108,%esp;");
    asm("loc_680935B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809360() // _sub_6809360
{
    __DEBUG_ASM(6809360);
    // chunk 0x6809360 _sub_6809360
    asm("loc_6809360: sub $8,%esp;");
    asm("loc_6809363: push %esi;");
    asm("loc_6809364: mov 0x10(%esp),%esi;");
    asm("loc_6809368: push %edi;");
    asm("loc_6809369: push %esi;");
    asm("loc_680936A: call _sub_6809430;");
    asm("loc_680936F: push %esi;");
    asm("loc_6809370: call _sub_6809050;");
    asm("loc_6809375: mov %eax,%edi;");
    asm("loc_6809377: add $8,%esp;");
    asm("loc_680937A: cmp $0x32,%edi;");
    asm("loc_680937D: jle loc_6809396;");
    asm("loc_680937F: mov 0x10(%esi),%eax;");
    asm("loc_6809382: push $0x32;");
    asm("loc_6809384: push %edi;");
    asm("loc_6809385: push %eax;");
    asm("loc_6809386: push $_data_680DF40;");
    asm("loc_680938B: call _sub_6805FB0;");
    asm("loc_6809390: add $0x10,%esp;");
    asm("loc_6809393: cmp $0x32,%edi;");
    asm("loc_6809396: jge loc_68093AC;");
    asm("loc_6809398: mov 0x10(%esi),%ecx;");
    asm("loc_680939B: push $0x32;");
    asm("loc_680939D: push %edi;");
    asm("loc_680939E: push %ecx;");
    asm("loc_680939F: push $_data_680DF08;");
    asm("loc_68093A4: call _sub_6805FB0;");
    asm("loc_68093A9: add $0x10,%esp;");
    asm("loc_68093AC: push %esi;");
    asm("loc_68093AD: call _sub_6809050;");
    asm("loc_68093B2: xor %edx,%edx;");
    asm("loc_68093B4: add $4,%esp;");
    asm("loc_68093B7: test %eax,%eax;");
    asm("loc_68093B9: setne %dl;");
    asm("loc_68093BC: mov %edx,%edi;");
    asm("loc_68093BE: test %edi,%edi;");
    asm("loc_68093C0: je loc_6809422;");
    asm("loc_68093C2: cmp $8,%eax;");
    asm("loc_68093C5: je loc_68093E3;");
    asm("loc_68093C7: push $8;");
    asm("loc_68093C9: push %eax;");
    asm("loc_68093CA: mov 0x10(%esi),%eax;");
    asm("loc_68093CD: push %eax;");
    asm("loc_68093CE: push $_data_680DED8;");
    asm("loc_68093D3: call _sub_6805FB0;");
    asm("loc_68093D8: add $0x10,%esp;");
    asm("loc_68093DB: mov %edi,%eax;");
    asm("loc_68093DD: pop %edi;");
    asm("loc_68093DE: pop %esi;");
    asm("loc_68093DF: add $8,%esp;");
    asm("loc_68093E2: ret;");
    asm("loc_68093E3: push %edi;");
    asm("loc_68093E4: push %esi;");
    asm("loc_68093E5: call _sub_68092F0;");
    asm("loc_68093EA: fstl 0x10(%esp);");
    asm("loc_68093EE: add $8,%esp;");
    asm("loc_68093F1: call _sub_680BDAA;");
    asm("loc_68093F6: cmp $0x12B9B0A1,%eax;");
    asm("loc_68093FB: je loc_6809422;");
    asm("loc_68093FD: mov 0xC(%esp),%ecx;");
    asm("loc_6809401: mov 8(%esp),%edx;");
    asm("loc_6809405: mov 0x10(%esi),%eax;");
    asm("loc_6809408: push $0x41B2B9B0;");
    asm("loc_680940D: push $0xA15BE612;");
    asm("loc_6809412: push %ecx;");
    asm("loc_6809413: push %edx;");
    asm("loc_6809414: push %eax;");
    asm("loc_6809415: push $_data_680DEA0;");
    asm("loc_680941A: call _sub_6805FB0;");
    asm("loc_680941F: add $0x18,%esp;");
    asm("loc_6809422: mov %edi,%eax;");
    asm("loc_6809424: pop %edi;");
    asm("loc_6809425: pop %esi;");
    asm("loc_6809426: add $8,%esp;");
    asm("loc_6809429: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809430() // _sub_6809430
{
    __DEBUG_ASM(6809430);
    // chunk 0x6809430 _sub_6809430
    asm("loc_6809430: mov _data_680DF88,%al;");
    asm("loc_6809435: test %al,%al;");
    asm("loc_6809437: push %esi;");
    asm("loc_6809438: push %edi;");
    asm("loc_6809439: mov 0xC(%esp),%edi;");
    asm("loc_680943D: mov $_data_680DF88,%esi;");
    asm("loc_6809442: je loc_680945C;");
    asm("loc_6809444: push %edi;");
    asm("loc_6809445: call _sub_6809050;");
    asm("loc_680944A: movsbl (%esi),%ecx;");
    asm("loc_680944D: add $4,%esp;");
    asm("loc_6809450: cmp %ecx,%eax;");
    asm("loc_6809452: jne loc_680945C;");
    asm("loc_6809454: mov 1(%esi),%al;");
    asm("loc_6809457: inc %esi;");
    asm("loc_6809458: test %al,%al;");
    asm("loc_680945A: jne loc_6809444;");
    asm("loc_680945C: cmpb $0,(%esi);");
    asm("loc_680945F: je loc_6809472;");
    asm("loc_6809461: mov 0x10(%edi),%edx;");
    asm("loc_6809464: push %edx;");
    asm("loc_6809465: push $_data_680DF74;");
    asm("loc_680946A: call _sub_6805FB0;");
    asm("loc_680946F: add $8,%esp;");
    asm("loc_6809472: pop %edi;");
    asm("loc_6809473: pop %esi;");
    asm("loc_6809474: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809480() // _sub_6809480
{
    __DEBUG_ASM(6809480);
    // chunk 0x6809480 _sub_6809480
    asm("loc_6809480: mov 0xC(%esp),%eax;");
    asm("loc_6809484: mov (%eax),%ecx;");
    asm("loc_6809486: test %ecx,%ecx;");
    asm("loc_6809488: jg loc_68094A1;");
    asm("loc_680948A: cmp $0xFFFFFFF5,%ecx;");
    asm("loc_680948D: jl loc_68094A1;");
    asm("loc_680948F: lea (,%ecx,4),%edx;");
    asm("loc_6809496: mov $_off_680D930,%eax;");
    asm("loc_680949B: sub %edx,%eax;");
    asm("loc_680949D: mov (%eax),%edx;");
    asm("loc_680949F: jmp loc_68094A6;");
    asm("loc_68094A1: mov $_data_680D4F0,%edx;");
    asm("loc_68094A6: mov 0x10(%esp),%eax;");
    asm("loc_68094AA: push %esi;");
    asm("loc_68094AB: mov 0x14(%eax),%esi;");
    asm("loc_68094AE: push %esi;");
    asm("loc_68094AF: mov 0x18(%eax),%esi;");
    asm("loc_68094B2: add $0x28,%esi;");
    asm("loc_68094B5: push %esi;");
    asm("loc_68094B6: push %eax;");
    asm("loc_68094B7: push %edx;");
    asm("loc_68094B8: mov 0x18(%esp),%edx;");
    asm("loc_68094BC: push %ecx;");
    asm("loc_68094BD: mov 0x20(%esp),%ecx;");
    asm("loc_68094C1: push %ecx;");
    asm("loc_68094C2: push %edx;");
    asm("loc_68094C3: push $_data_680DF8C;");
    asm("loc_68094C8: call _sub_6805FB0;");
    asm("loc_68094CD: add $0x20,%esp;");
    asm("loc_68094D0: pop %esi;");
    asm("loc_68094D1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68094E0() // _sub_68094E0
{
    __DEBUG_ASM(68094E0);
    // chunk 0x68094E0 _sub_68094E0
    asm("loc_68094E0: mov _import_680C050,%eax;");
    asm("loc_68094E5: add $0x40,%eax;");
    asm("loc_68094E8: push %eax;");
    asm("loc_68094E9: push $0;");
    asm("loc_68094EB: push $1;");
    asm("loc_68094ED: call _sub_6805DF0;");
    asm("loc_68094F2: add $8,%esp;");
    asm("loc_68094F5: push %eax;");
    asm("loc_68094F6: calll *_import_680C080;");
    asm("loc_68094FC: add $8,%esp;");
    asm("loc_68094FF: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809500() // _sub_6809500
{
    __DEBUG_ASM(6809500);
    // chunk 0x6809500 _sub_6809500
    asm("loc_6809500: sub $0x258,%esp;");
    asm("loc_6809506: push %esi;");
    asm("loc_6809507: push $_data_680E210;");
    asm("loc_680950C: call _sub_6801F90;");
    asm("loc_6809511: mov %eax,%esi;");
    asm("loc_6809513: push %esi;");
    asm("loc_6809514: call _sub_68020D0;");
    asm("loc_6809519: add $8,%esp;");
    asm("loc_680951C: test %eax,%eax;");
    asm("loc_680951E: je loc_680954D;");
    asm("loc_6809520: push $0;");
    asm("loc_6809522: push $1;");
    asm("loc_6809524: call _sub_6805DF0;");
    asm("loc_6809529: push %eax;");
    asm("loc_680952A: lea 0x10(%esp),%eax;");
    asm("loc_680952E: push $_data_680E218;");
    asm("loc_6809533: push %eax;");
    asm("loc_6809534: calll *_import_680C060;");
    asm("loc_680953A: lea 0x18(%esp),%ecx;");
    asm("loc_680953E: push %ecx;");
    asm("loc_680953F: call _sub_68022B0;");
    asm("loc_6809544: push %esi;");
    asm("loc_6809545: call _sub_6801D10;");
    asm("loc_680954A: add $0x1C,%esp;");
    asm("loc_680954D: pop %esi;");
    asm("loc_680954E: add $0x258,%esp;");
    asm("loc_6809554: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809560() // _sub_6809560
{
    __DEBUG_ASM(6809560);
    // chunk 0x6809560 _sub_6809560
    asm("loc_6809560: sub $0xA4,%esp;");
    asm("loc_6809566: push %ebx;");
    asm("loc_6809567: push %ebp;");
    asm("loc_6809568: push %esi;");
    asm("loc_6809569: push %edi;");
    asm("loc_680956A: push $1;");
    asm("loc_680956C: xor %ebp,%ebp;");
    asm("loc_680956E: call _sub_6801CF0;");
    asm("loc_6809573: mov %eax,%esi;");
    asm("loc_6809575: add $4,%esp;");
    asm("loc_6809578: test %esi,%esi;");
    asm("loc_680957A: je loc_68095AE;");
    asm("loc_680957C: mov $1,%edi;");
    asm("loc_6809581: lea 0x14(%esp),%ebx;");
    asm("loc_6809585: cmp $0x29,%edi;");
    asm("loc_6809588: jl loc_6809598;");
    asm("loc_680958A: push $_data_680E288;");
    asm("loc_680958F: push %edi;");
    asm("loc_6809590: call _sub_6805D80;");
    asm("loc_6809595: add $8,%esp;");
    asm("loc_6809598: mov %esi,(%ebx);");
    asm("loc_680959A: inc %ebp;");
    asm("loc_680959B: add $4,%ebx;");
    asm("loc_680959E: inc %edi;");
    asm("loc_680959F: push %edi;");
    asm("loc_68095A0: call _sub_6801CF0;");
    asm("loc_68095A5: mov %eax,%esi;");
    asm("loc_68095A7: add $4,%esp;");
    asm("loc_68095AA: test %esi,%esi;");
    asm("loc_68095AC: jne loc_6809585;");
    asm("loc_68095AE: mov _import_680C080,%ebx;");
    asm("loc_68095B4: xor %esi,%esi;");
    asm("loc_68095B6: test %ebp,%ebp;");
    asm("loc_68095B8: jle loc_680965D;");
    asm("loc_68095BE: lea 0x14(%esp),%eax;");
    asm("loc_68095C2: mov %eax,0x10(%esp);");
    asm("loc_68095C6: mov 0x10(%esp),%ecx;");
    asm("loc_68095CA: mov (%ecx),%edx;");
    asm("loc_68095CC: push %edx;");
    asm("loc_68095CD: call _sub_6802420;");
    asm("loc_68095D2: push $_data_680E120;");
    asm("loc_68095D7: call _sub_6801F70;");
    asm("loc_68095DC: push %eax;");
    asm("loc_68095DD: call _sub_6801D10;");
    asm("loc_68095E2: add $0xC,%esp;");
    asm("loc_68095E5: test %eax,%eax;");
    asm("loc_68095E7: je loc_68095F6;");
    asm("loc_68095E9: push $_data_680E260;");
    asm("loc_68095EE: call _sub_6802E00;");
    asm("loc_68095F3: add $4,%esp;");
    asm("loc_68095F6: push $1;");
    asm("loc_68095F8: call _sub_6801CF0;");
    asm("loc_68095FD: mov %eax,%edi;");
    asm("loc_68095FF: push %edi;");
    asm("loc_6809600: call _sub_68020B0;");
    asm("loc_6809605: add $8,%esp;");
    asm("loc_6809608: test %eax,%eax;");
    asm("loc_680960A: jne loc_6809619;");
    asm("loc_680960C: push $_data_680E234;");
    asm("loc_6809611: call _sub_6802E00;");
    asm("loc_6809616: add $4,%esp;");
    asm("loc_6809619: test %esi,%esi;");
    asm("loc_680961B: jle loc_6809630;");
    asm("loc_680961D: mov _import_680C050,%eax;");
    asm("loc_6809622: add $0x20,%eax;");
    asm("loc_6809625: push %eax;");
    asm("loc_6809626: push $_data_680E230;");
    asm("loc_680962B: call *%ebx;");
    asm("loc_680962D: add $8,%esp;");
    asm("loc_6809630: mov _import_680C050,%ecx;");
    asm("loc_6809636: add $0x20,%ecx;");
    asm("loc_6809639: push %ecx;");
    asm("loc_680963A: push %edi;");
    asm("loc_680963B: call _sub_6802140;");
    asm("loc_6809640: add $4,%esp;");
    asm("loc_6809643: push %eax;");
    asm("loc_6809644: call *%ebx;");
    asm("loc_6809646: mov 0x18(%esp),%ecx;");
    asm("loc_680964A: add $8,%esp;");
    asm("loc_680964D: inc %esi;");
    asm("loc_680964E: add $4,%ecx;");
    asm("loc_6809651: cmp %ebp,%esi;");
    asm("loc_6809653: mov %ecx,0x10(%esp);");
    asm("loc_6809657: jl loc_68095C6;");
    asm("loc_680965D: mov _import_680C050,%edx;");
    asm("loc_6809663: add $0x20,%edx;");
    asm("loc_6809666: push %edx;");
    asm("loc_6809667: push $_data_680E22C;");
    asm("loc_680966C: call *%ebx;");
    asm("loc_680966E: add $8,%esp;");
    asm("loc_6809671: pop %edi;");
    asm("loc_6809672: pop %esi;");
    asm("loc_6809673: pop %ebp;");
    asm("loc_6809674: pop %ebx;");
    asm("loc_6809675: add $0xA4,%esp;");
    asm("loc_680967B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809680() // _sub_6809680
{
    __DEBUG_ASM(6809680);
    // chunk 0x6809680 _sub_6809680
    asm("loc_6809680: sub $8,%esp;");
    asm("loc_6809683: push %esi;");
    asm("loc_6809684: push $0x40240000;");
    asm("loc_6809689: push $0;");
    asm("loc_680968B: push $2;");
    asm("loc_680968D: call _sub_6805EB0;");
    asm("loc_6809692: add $0xC,%esp;");
    asm("loc_6809695: call _sub_680BDAA;");
    asm("loc_680969A: mov %eax,%esi;");
    asm("loc_680969C: cmp $0xA,%esi;");
    asm("loc_680969F: jne loc_68096D2;");
    asm("loc_68096A1: push $1;");
    asm("loc_68096A3: call _sub_6801CF0;");
    asm("loc_68096A8: mov %eax,%esi;");
    asm("loc_68096AA: push %esi;");
    asm("loc_68096AB: call _sub_6802070;");
    asm("loc_68096B0: add $8,%esp;");
    asm("loc_68096B3: test %eax,%eax;");
    asm("loc_68096B5: je loc_680975C;");
    asm("loc_68096BB: push %esi;");
    asm("loc_68096BC: call _sub_68020F0;");
    asm("loc_68096C1: push %ecx;");
    asm("loc_68096C2: fstpl (%esp);");
    asm("loc_68096C5: call _sub_6802210;");
    asm("loc_68096CA: add $8,%esp;");
    asm("loc_68096CD: pop %esi;");
    asm("loc_68096CE: add $8,%esp;");
    asm("loc_68096D1: ret;");
    asm("loc_68096D2: push $0;");
    asm("loc_68096D4: push $1;");
    asm("loc_68096D6: call _sub_6805DF0;");
    asm("loc_68096DB: add $8,%esp;");
    asm("loc_68096DE: test %esi,%esi;");
    asm("loc_68096E0: mov %eax,4(%esp);");
    asm("loc_68096E4: jl loc_68096EB;");
    asm("loc_68096E6: cmp $0x24,%esi;");
    asm("loc_68096E9: jle loc_68096FA;");
    asm("loc_68096EB: push $_data_680E29C;");
    asm("loc_68096F0: push $2;");
    asm("loc_68096F2: call _sub_6805D80;");
    asm("loc_68096F7: add $8,%esp;");
    asm("loc_68096FA: mov 4(%esp),%ecx;");
    asm("loc_68096FE: push %esi;");
    asm("loc_68096FF: lea 8(%esp),%eax;");
    asm("loc_6809703: push %eax;");
    asm("loc_6809704: push %ecx;");
    asm("loc_6809705: calll *_import_680C084;");
    asm("loc_680970B: mov _import_680C05C,%esi;");
    asm("loc_6809711: mov 0x10(%esp),%ecx;");
    asm("loc_6809715: add $0xC,%esp;");
    asm("loc_6809718: mov %eax,8(%esp);");
    asm("loc_680971C: mov _import_680C058,%edx;");
    asm("loc_6809722: cmpl $1,(%edx);");
    asm("loc_6809725: jle loc_6809739;");
    asm("loc_6809727: xor %eax,%eax;");
    asm("loc_6809729: mov (%ecx),%al;");
    asm("loc_680972B: push $8;");
    asm("loc_680972D: push %eax;");
    asm("loc_680972E: call *%esi;");
    asm("loc_6809730: mov 0xC(%esp),%ecx;");
    asm("loc_6809734: add $8,%esp;");
    asm("loc_6809737: jmp loc_680974C;");
    asm("loc_6809739: xor %edx,%edx;");
    asm("loc_680973B: mov (%ecx),%dl;");
    asm("loc_680973D: xor %eax,%eax;");
    asm("loc_680973F: mov _import_680C054,%eax;");
    asm("loc_6809744: mov (%eax),%eax;");
    asm("loc_6809746: mov (%eax,%edx,2),%al;");
    asm("loc_6809749: and $8,%eax;");
    asm("loc_680974C: test %eax,%eax;");
    asm("loc_680974E: je loc_6809757;");
    asm("loc_6809750: inc %ecx;");
    asm("loc_6809751: mov %ecx,4(%esp);");
    asm("loc_6809755: jmp loc_680971C;");
    asm("loc_6809757: cmpb $0,(%ecx);");
    asm("loc_680975A: je loc_6809766;");
    asm("loc_680975C: call _sub_68021E0;");
    asm("loc_6809761: pop %esi;");
    asm("loc_6809762: add $8,%esp;");
    asm("loc_6809765: ret;");
    asm("loc_6809766: fildl 8(%esp);");
    asm("loc_680976A: sub $8,%esp;");
    asm("loc_680976D: fstpl (%esp);");
    asm("loc_6809770: call _sub_6802210;");
    asm("loc_6809775: add $8,%esp;");
    asm("loc_6809778: pop %esi;");
    asm("loc_6809779: add $8,%esp;");
    asm("loc_680977C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809780() // _sub_6809780
{
    __DEBUG_ASM(6809780);
    // chunk 0x6809780 _sub_6809780
    asm("loc_6809780: push $1;");
    asm("loc_6809782: call _sub_6801CF0;");
    asm("loc_6809787: push %eax;");
    asm("loc_6809788: call _sub_6802140;");
    asm("loc_680978D: push %eax;");
    asm("loc_680978E: call _sub_6802E00;");
    asm("loc_6809793: add $0xC,%esp;");
    asm("loc_6809796: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68097A0() // _sub_68097A0
{
    __DEBUG_ASM(68097A0);
    // chunk 0x68097A0 _sub_68097A0
    asm("loc_68097A0: push %esi;");
    asm("loc_68097A1: push %edi;");
    asm("loc_68097A2: push $0;");
    asm("loc_68097A4: push $1;");
    asm("loc_68097A6: call _sub_6805DF0;");
    asm("loc_68097AB: push $2;");
    asm("loc_68097AD: mov %eax,%edi;");
    asm("loc_68097AF: call _sub_6805F40;");
    asm("loc_68097B4: mov %eax,%esi;");
    asm("loc_68097B6: push %esi;");
    asm("loc_68097B7: call _sub_6802420;");
    asm("loc_68097BC: push %edi;");
    asm("loc_68097BD: call _sub_6801FB0;");
    asm("loc_68097C2: push %esi;");
    asm("loc_68097C3: call _sub_6802420;");
    asm("loc_68097C8: add $0x18,%esp;");
    asm("loc_68097CB: pop %edi;");
    asm("loc_68097CC: pop %esi;");
    asm("loc_68097CD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68097D0() // _sub_68097D0
{
    __DEBUG_ASM(68097D0);
    // chunk 0x68097D0 _sub_68097D0
    asm("loc_68097D0: push %esi;");
    asm("loc_68097D1: push %edi;");
    asm("loc_68097D2: push $0;");
    asm("loc_68097D4: push $1;");
    asm("loc_68097D6: call _sub_6805DF0;");
    asm("loc_68097DB: push $2;");
    asm("loc_68097DD: mov %eax,%edi;");
    asm("loc_68097DF: call _sub_6805F40;");
    asm("loc_68097E4: mov %eax,%esi;");
    asm("loc_68097E6: push %esi;");
    asm("loc_68097E7: call _sub_6802420;");
    asm("loc_68097EC: push %edi;");
    asm("loc_68097ED: call _sub_6801FE0;");
    asm("loc_68097F2: push %esi;");
    asm("loc_68097F3: call _sub_6802420;");
    asm("loc_68097F8: add $0x18,%esp;");
    asm("loc_68097FB: pop %edi;");
    asm("loc_68097FC: pop %esi;");
    asm("loc_68097FD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809800() // _sub_6809800
{
    __DEBUG_ASM(6809800);
    // chunk 0x6809800 _sub_6809800
    asm("loc_6809800: push $0;");
    asm("loc_6809802: push $1;");
    asm("loc_6809804: call _sub_6805DF0;");
    asm("loc_6809809: push %eax;");
    asm("loc_680980A: call _sub_6801F70;");
    asm("loc_680980F: push %eax;");
    asm("loc_6809810: call _sub_6802420;");
    asm("loc_6809815: add $0x10,%esp;");
    asm("loc_6809818: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809820() // _sub_6809820
{
    __DEBUG_ASM(6809820);
    // chunk 0x6809820 _sub_6809820
    asm("loc_6809820: push $0;");
    asm("loc_6809822: push $1;");
    asm("loc_6809824: call _sub_6805DF0;");
    asm("loc_6809829: push %eax;");
    asm("loc_680982A: call _sub_6801F90;");
    asm("loc_680982F: push %eax;");
    asm("loc_6809830: call _sub_6802420;");
    asm("loc_6809835: add $0x10,%esp;");
    asm("loc_6809838: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809840() // _sub_6809840
{
    __DEBUG_ASM(6809840);
    // chunk 0x6809840 _sub_6809840
    asm("loc_6809840: push %ecx;");
    asm("loc_6809841: push $1;");
    asm("loc_6809843: call _sub_6801CF0;");
    asm("loc_6809848: push %eax;");
    asm("loc_6809849: call _sub_6802480;");
    asm("loc_680984E: mov %eax,8(%esp);");
    asm("loc_6809852: fildl 8(%esp);");
    asm("loc_6809856: fstpl (%esp);");
    asm("loc_6809859: call _sub_6802210;");
    asm("loc_680985E: add $0xC,%esp;");
    asm("loc_6809861: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809870() // _sub_6809870
{
    __DEBUG_ASM(6809870);
    // chunk 0x6809870 _sub_6809870
    asm("loc_6809870: push %esi;");
    asm("loc_6809871: push $1;");
    asm("loc_6809873: call _sub_6805EE0;");
    asm("loc_6809878: mov %eax,%esi;");
    asm("loc_680987A: push %esi;");
    asm("loc_680987B: call _sub_6802420;");
    asm("loc_6809880: push $2;");
    asm("loc_6809882: call _sub_6805E70;");
    asm("loc_6809887: call _sub_680BDAA;");
    asm("loc_680988C: push %eax;");
    asm("loc_680988D: call _sub_6802510;");
    asm("loc_6809892: push %esi;");
    asm("loc_6809893: call _sub_6802420;");
    asm("loc_6809898: add $0x14,%esp;");
    asm("loc_680989B: pop %esi;");
    asm("loc_680989C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68098A0() // _sub_68098A0
{
    __DEBUG_ASM(68098A0);
    // chunk 0x68098A0 _sub_68098A0
    asm("loc_68098A0: push %ecx;");
    asm("loc_68098A1: call _sub_6804E70;");
    asm("loc_68098A6: mov %eax,(%esp);");
    asm("loc_68098AA: fildl (%esp);");
    asm("loc_68098AE: sub $8,%esp;");
    asm("loc_68098B1: fstpl (%esp);");
    asm("loc_68098B4: call _sub_6802210;");
    asm("loc_68098B9: add $0xC,%esp;");
    asm("loc_68098BC: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68098C0() // _sub_68098C0
{
    __DEBUG_ASM(68098C0);
    // chunk 0x68098C0 _sub_68098C0
    asm("loc_68098C0: push %ecx;");
    asm("loc_68098C1: push $2;");
    asm("loc_68098C3: call _sub_6805E70;");
    asm("loc_68098C8: add $4,%esp;");
    asm("loc_68098CB: call _sub_680BDAA;");
    asm("loc_68098D0: push %eax;");
    asm("loc_68098D1: push $1;");
    asm("loc_68098D3: call _sub_6805E70;");
    asm("loc_68098D8: add $4,%esp;");
    asm("loc_68098DB: call _sub_680BDAA;");
    asm("loc_68098E0: push %eax;");
    asm("loc_68098E1: call _sub_6804F00;");
    asm("loc_68098E6: mov %eax,8(%esp);");
    asm("loc_68098EA: fildl 8(%esp);");
    asm("loc_68098EE: fstpl (%esp);");
    asm("loc_68098F1: call _sub_6802210;");
    asm("loc_68098F6: add $0xC,%esp;");
    asm("loc_68098F9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809900() // _sub_6809900
{
    __DEBUG_ASM(6809900);
    // chunk 0x6809900 _sub_6809900
    asm("loc_6809900: push $1;");
    asm("loc_6809902: call _sub_6805F40;");
    asm("loc_6809907: push %eax;");
    asm("loc_6809908: call _sub_6802420;");
    asm("loc_680990D: push $2;");
    asm("loc_680990F: call _sub_6805F40;");
    asm("loc_6809914: push %eax;");
    asm("loc_6809915: call _sub_6802420;");
    asm("loc_680991A: call _sub_6801ED0;");
    asm("loc_680991F: push %eax;");
    asm("loc_6809920: call _sub_6802420;");
    asm("loc_6809925: add $0x14,%esp;");
    asm("loc_6809928: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809930() // _sub_6809930
{
    __DEBUG_ASM(6809930);
    // chunk 0x6809930 _sub_6809930
    asm("loc_6809930: push $1;");
    asm("loc_6809932: call _sub_6805F40;");
    asm("loc_6809937: push %eax;");
    asm("loc_6809938: call _sub_6802420;");
    asm("loc_680993D: push $2;");
    asm("loc_680993F: call _sub_6805F40;");
    asm("loc_6809944: push %eax;");
    asm("loc_6809945: call _sub_6802420;");
    asm("loc_680994A: push $3;");
    asm("loc_680994C: call _sub_6805F40;");
    asm("loc_6809951: push %eax;");
    asm("loc_6809952: call _sub_6802420;");
    asm("loc_6809957: add $0x18,%esp;");
    asm("loc_680995A: jmp _sub_6801F50;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809960() // _sub_6809960
{
    __DEBUG_ASM(6809960);
    // chunk 0x6809960 _sub_6809960
    asm("loc_6809960: push $3;");
    asm("loc_6809962: call _sub_6805F40;");
    asm("loc_6809967: push %eax;");
    asm("loc_6809968: call _sub_6802420;");
    asm("loc_680996D: push $0;");
    asm("loc_680996F: push $2;");
    asm("loc_6809971: call _sub_6805DF0;");
    asm("loc_6809976: add $0x10,%esp;");
    asm("loc_6809979: push %eax;");
    asm("loc_680997A: push $1;");
    asm("loc_680997C: call _sub_6805E70;");
    asm("loc_6809981: add $4,%esp;");
    asm("loc_6809984: call _sub_680BDAA;");
    asm("loc_6809989: push %eax;");
    asm("loc_680998A: call _sub_6801E50;");
    asm("loc_680998F: push %eax;");
    asm("loc_6809990: call _sub_6802420;");
    asm("loc_6809995: add $0xC,%esp;");
    asm("loc_6809998: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68099A0() // _sub_68099A0
{
    __DEBUG_ASM(68099A0);
    // chunk 0x68099A0 _sub_68099A0
    asm("loc_68099A0: push $0;");
    asm("loc_68099A2: push $2;");
    asm("loc_68099A4: call _sub_6805DF0;");
    asm("loc_68099A9: add $8,%esp;");
    asm("loc_68099AC: push %eax;");
    asm("loc_68099AD: push $1;");
    asm("loc_68099AF: call _sub_6805E70;");
    asm("loc_68099B4: add $4,%esp;");
    asm("loc_68099B7: call _sub_680BDAA;");
    asm("loc_68099BC: push %eax;");
    asm("loc_68099BD: call _sub_6801DD0;");
    asm("loc_68099C2: push %eax;");
    asm("loc_68099C3: call _sub_6802420;");
    asm("loc_68099C8: add $0xC,%esp;");
    asm("loc_68099CB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68099D0() // _sub_68099D0
{
    __DEBUG_ASM(68099D0);
    // chunk 0x68099D0 _sub_68099D0
    asm("loc_68099D0: push $1;");
    asm("loc_68099D2: call _sub_6805F10;");
    asm("loc_68099D7: push %eax;");
    asm("loc_68099D8: call _sub_6802420;");
    asm("loc_68099DD: call _sub_6801E80;");
    asm("loc_68099E2: push %eax;");
    asm("loc_68099E3: call _sub_6802420;");
    asm("loc_68099E8: add $0xC,%esp;");
    asm("loc_68099EB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_68099F0() // _sub_68099F0
{
    __DEBUG_ASM(68099F0);
    // chunk 0x68099F0 _sub_68099F0
    asm("loc_68099F0: push %ecx;");
    asm("loc_68099F1: push $0;");
    asm("loc_68099F3: push $0;");
    asm("loc_68099F5: push $1;");
    asm("loc_68099F7: call _sub_6805EB0;");
    asm("loc_68099FC: call _sub_680BDAA;");
    asm("loc_6809A01: push %eax;");
    asm("loc_6809A02: call _sub_68036D0;");
    asm("loc_6809A07: mov %eax,0x10(%esp);");
    asm("loc_6809A0B: fildl 0x10(%esp);");
    asm("loc_6809A0F: add $8,%esp;");
    asm("loc_6809A12: fstpl (%esp);");
    asm("loc_6809A15: call _sub_6802210;");
    asm("loc_6809A1A: add $0xC,%esp;");
    asm("loc_6809A1D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809A20() // _sub_6809A20
{
    __DEBUG_ASM(6809A20);
    // chunk 0x6809A20 _sub_6809A20
    asm("loc_6809A20: push %ecx;");
    asm("loc_6809A21: push %esi;");
    asm("loc_6809A22: lea 4(%esp),%eax;");
    asm("loc_6809A26: push %eax;");
    asm("loc_6809A27: push $1;");
    asm("loc_6809A29: call _sub_6805DF0;");
    asm("loc_6809A2E: mov %eax,%esi;");
    asm("loc_6809A30: mov (%esi),%al;");
    asm("loc_6809A32: add $8,%esp;");
    asm("loc_6809A35: cmp $0x1B,%al;");
    asm("loc_6809A37: jne loc_6809A46;");
    asm("loc_6809A39: push $_data_680E2B0;");
    asm("loc_6809A3E: call _sub_6802E00;");
    asm("loc_6809A43: add $4,%esp;");
    asm("loc_6809A46: push $0;");
    asm("loc_6809A48: push %esi;");
    asm("loc_6809A49: push $2;");
    asm("loc_6809A4B: call _sub_6805E40;");
    asm("loc_6809A50: mov 0x10(%esp),%ecx;");
    asm("loc_6809A54: push %eax;");
    asm("loc_6809A55: push %ecx;");
    asm("loc_6809A56: push %esi;");
    asm("loc_6809A57: call _sub_68032F0;");
    asm("loc_6809A5C: add $0x18,%esp;");
    asm("loc_6809A5F: test %eax,%eax;");
    asm("loc_6809A61: pop %esi;");
    asm("loc_6809A62: jne loc_6809A77;");
    asm("loc_6809A64: call _sub_6801C30;");
    asm("loc_6809A69: test %eax,%eax;");
    asm("loc_6809A6B: jne loc_6809A77;");
    asm("loc_6809A6D: push %eax;");
    asm("loc_6809A6E: push %eax;");
    asm("loc_6809A6F: call _sub_6802360;");
    asm("loc_6809A74: add $8,%esp;");
    asm("loc_6809A77: pop %ecx;");
    asm("loc_6809A78: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809A80() // _sub_6809A80
{
    __DEBUG_ASM(6809A80);
    // chunk 0x6809A80 _sub_6809A80
    asm("loc_6809A80: push $0;");
    asm("loc_6809A82: push $0;");
    asm("loc_6809A84: push $1;");
    asm("loc_6809A86: call _sub_6805E40;");
    asm("loc_6809A8B: push %eax;");
    asm("loc_6809A8C: call _sub_6803020;");
    asm("loc_6809A91: add $0x10,%esp;");
    asm("loc_6809A94: test %eax,%eax;");
    asm("loc_6809A96: jne loc_6809AAB;");
    asm("loc_6809A98: call _sub_6801C30;");
    asm("loc_6809A9D: test %eax,%eax;");
    asm("loc_6809A9F: jne loc_6809AAB;");
    asm("loc_6809AA1: push %eax;");
    asm("loc_6809AA2: push %eax;");
    asm("loc_6809AA3: call _sub_6802360;");
    asm("loc_6809AA8: add $8,%esp;");
    asm("loc_6809AAB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809AB0() // _sub_6809AB0
{
    __DEBUG_ASM(6809AB0);
    // chunk 0x6809AB0 _sub_6809AB0
    asm("loc_6809AB0: sub $8,%esp;");
    asm("loc_6809AB3: push %ebx;");
    asm("loc_6809AB4: push %ebp;");
    asm("loc_6809AB5: push %esi;");
    asm("loc_6809AB6: push %edi;");
    asm("loc_6809AB7: push $1;");
    asm("loc_6809AB9: call _sub_6805F40;");
    asm("loc_6809ABE: push $2;");
    asm("loc_6809AC0: mov %eax,0x1C(%esp);");
    asm("loc_6809AC4: call _sub_6809C70;");
    asm("loc_6809AC9: push $0;");
    asm("loc_6809ACB: push $_data_680E600;");
    asm("loc_6809AD0: push $3;");
    asm("loc_6809AD2: mov %eax,%ebx;");
    asm("loc_6809AD4: call _sub_6805E40;");
    asm("loc_6809AD9: mov %eax,%esi;");
    asm("loc_6809ADB: push $4;");
    asm("loc_6809ADD: mov %esi,0x28(%esp);");
    asm("loc_6809AE1: call _sub_6801CF0;");
    asm("loc_6809AE6: push %ebx;");
    asm("loc_6809AE7: mov %eax,%ebp;");
    asm("loc_6809AE9: call _sub_6809BE0;");
    asm("loc_6809AEE: add $0x1C,%esp;");
    asm("loc_6809AF1: call _sub_680BDAA;");
    asm("loc_6809AF6: test %ebp,%ebp;");
    asm("loc_6809AF8: mov %eax,%edi;");
    asm("loc_6809AFA: je loc_6809B0C;");
    asm("loc_6809AFC: push %ebp;");
    asm("loc_6809AFD: call _sub_6802420;");
    asm("loc_6809B02: add $4,%esp;");
    asm("loc_6809B05: call _sub_6801E80;");
    asm("loc_6809B0A: mov %eax,%ebp;");
    asm("loc_6809B0C: push %edi;");
    asm("loc_6809B0D: call _sub_6802870;");
    asm("loc_6809B12: add $4,%esp;");
    asm("loc_6809B15: xor %eax,%eax;");
    asm("loc_6809B17: test %edi,%edi;");
    asm("loc_6809B19: jle loc_6809B58;");
    asm("loc_6809B1B: lea 1(%eax),%esi;");
    asm("loc_6809B1E: push %esi;");
    asm("loc_6809B1F: push %ebx;");
    asm("loc_6809B20: call _sub_68055C0;");
    asm("loc_6809B25: mov _data_680E604,%ecx;");
    asm("loc_6809B2B: mov (%ecx),%edx;");
    asm("loc_6809B2D: mov (%eax),%ecx;");
    asm("loc_6809B2F: mov %ecx,(%edx);");
    asm("loc_6809B31: mov 4(%eax),%ecx;");
    asm("loc_6809B34: mov %ecx,4(%edx);");
    asm("loc_6809B37: mov 8(%eax),%ecx;");
    asm("loc_6809B3A: mov %ecx,8(%edx);");
    asm("loc_6809B3D: mov 0xC(%eax),%eax;");
    asm("loc_6809B40: mov %eax,0xC(%edx);");
    asm("loc_6809B43: mov _data_680E604,%eax;");
    asm("loc_6809B48: addl $0x10,(%eax);");
    asm("loc_6809B4B: mov %esi,%eax;");
    asm("loc_6809B4D: add $8,%esp;");
    asm("loc_6809B50: cmp %edi,%eax;");
    asm("loc_6809B52: jl loc_6809B1B;");
    asm("loc_6809B54: mov 0x10(%esp),%esi;");
    asm("loc_6809B58: mov 0x14(%esp),%ecx;");
    asm("loc_6809B5C: push %ecx;");
    asm("loc_6809B5D: call _sub_6801D10;");
    asm("loc_6809B62: add $4,%esp;");
    asm("loc_6809B65: test %ebp,%ebp;");
    asm("loc_6809B67: mov %eax,%edi;");
    asm("loc_6809B69: je loc_6809B79;");
    asm("loc_6809B6B: push %ebp;");
    asm("loc_6809B6C: call _sub_6802420;");
    asm("loc_6809B71: add $4,%esp;");
    asm("loc_6809B74: call _sub_6801E80;");
    asm("loc_6809B79: test %edi,%edi;");
    asm("loc_6809B7B: je loc_6809BAC;");
    asm("loc_6809B7D: push $0x78;");
    asm("loc_6809B7F: push %esi;");
    asm("loc_6809B80: calll *_import_680C070;");
    asm("loc_6809B86: add $8,%esp;");
    asm("loc_6809B89: test %eax,%eax;");
    asm("loc_6809B8B: je loc_6809B9A;");
    asm("loc_6809B8D: call _sub_68021E0;");
    asm("loc_6809B92: pop %edi;");
    asm("loc_6809B93: pop %esi;");
    asm("loc_6809B94: pop %ebp;");
    asm("loc_6809B95: pop %ebx;");
    asm("loc_6809B96: add $8,%esp;");
    asm("loc_6809B99: ret;");
    asm("loc_6809B9A: push $0;");
    asm("loc_6809B9C: call _sub_6802E00;");
    asm("loc_6809BA1: add $4,%esp;");
    asm("loc_6809BA4: pop %edi;");
    asm("loc_6809BA5: pop %esi;");
    asm("loc_6809BA6: pop %ebp;");
    asm("loc_6809BA7: pop %ebx;");
    asm("loc_6809BA8: add $8,%esp;");
    asm("loc_6809BAB: ret;");
    asm("loc_6809BAC: push $0x70;");
    asm("loc_6809BAE: push %esi;");
    asm("loc_6809BAF: calll *_import_680C070;");
    asm("loc_6809BB5: add $8,%esp;");
    asm("loc_6809BB8: test %eax,%eax;");
    asm("loc_6809BBA: je loc_6809BC9;");
    asm("loc_6809BBC: call _sub_6801BF0;");
    asm("loc_6809BC1: pop %edi;");
    asm("loc_6809BC2: pop %esi;");
    asm("loc_6809BC3: pop %ebp;");
    asm("loc_6809BC4: pop %ebx;");
    asm("loc_6809BC5: add $8,%esp;");
    asm("loc_6809BC8: ret;");
    asm("loc_6809BC9: call _sub_6801C30;");
    asm("loc_6809BCE: pop %edi;");
    asm("loc_6809BCF: pop %esi;");
    asm("loc_6809BD0: pop %ebp;");
    asm("loc_6809BD1: pop %ebx;");
    asm("loc_6809BD2: add $8,%esp;");
    asm("loc_6809BD5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809BE0() // _sub_6809BE0
{
    __DEBUG_ASM(6809BE0);
    // chunk 0x6809BE0 _sub_6809BE0
    asm("loc_6809BE0: sub $0x10,%esp;");
    asm("loc_6809BE3: push %esi;");
    asm("loc_6809BE4: push $_data_680D520;");
    asm("loc_6809BE9: movl $0xFFFFFFFE,8(%esp);");
    asm("loc_6809BF1: call _sub_6805A80;");
    asm("loc_6809BF6: mov 0x1C(%esp),%esi;");
    asm("loc_6809BFA: mov %eax,0x10(%esp);");
    asm("loc_6809BFE: lea 8(%esp),%eax;");
    asm("loc_6809C02: push %eax;");
    asm("loc_6809C03: push %esi;");
    asm("loc_6809C04: call _sub_68051D0;");
    asm("loc_6809C09: mov 0x10(%eax),%ecx;");
    asm("loc_6809C0C: add $0x10,%eax;");
    asm("loc_6809C0F: add $0xC,%esp;");
    asm("loc_6809C12: cmp $0xFFFFFFFF,%ecx;");
    asm("loc_6809C15: jne loc_6809C1F;");
    asm("loc_6809C17: fldl 8(%eax);");
    asm("loc_6809C1A: pop %esi;");
    asm("loc_6809C1B: add $0x10,%esp;");
    asm("loc_6809C1E: ret;");
    asm("loc_6809C1F: push %esi;");
    asm("loc_6809C20: call _sub_6809C30;");
    asm("loc_6809C25: add $4,%esp;");
    asm("loc_6809C28: pop %esi;");
    asm("loc_6809C29: add $0x10,%esp;");
    asm("loc_6809C2C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809C30() // _sub_6809C30
{
    __DEBUG_ASM(6809C30);
    // chunk 0x6809C30 _sub_6809C30
    asm("loc_6809C30: mov 4(%esp),%ecx;");
    asm("loc_6809C34: fldl _data_680C180;");
    asm("loc_6809C3A: mov 0xC(%ecx),%eax;");
    asm("loc_6809C3D: test %eax,%eax;");
    asm("loc_6809C3F: jle loc_6809C68;");
    asm("loc_6809C41: mov 8(%ecx),%ecx;");
    asm("loc_6809C44: mov %eax,%edx;");
    asm("loc_6809C46: cmpl $0xFFFFFFFF,(%ecx);");
    asm("loc_6809C49: jne loc_6809C62;");
    asm("loc_6809C4B: cmpl $0xFFFFFFFA,0x10(%ecx);");
    asm("loc_6809C4F: je loc_6809C62;");
    asm("loc_6809C51: fldl 8(%ecx);");
    asm("loc_6809C54: fcomp;");
    asm("loc_6809C56: fnstsw %ax;");
    asm("loc_6809C58: test $0x41,%ah;");
    asm("loc_6809C5B: jne loc_6809C62;");
    asm("loc_6809C5D: fstp %st(0);");
    asm("loc_6809C5F: fldl 8(%ecx);");
    asm("loc_6809C62: add $0x20,%ecx;");
    asm("loc_6809C65: dec %edx;");
    asm("loc_6809C66: jne loc_6809C46;");
    asm("loc_6809C68: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809C70() // _sub_6809C70
{
    __DEBUG_ASM(6809C70);
    // chunk 0x6809C70 _sub_6809C70
    asm("loc_6809C70: mov 4(%esp),%eax;");
    asm("loc_6809C74: push %eax;");
    asm("loc_6809C75: call _sub_6805EE0;");
    asm("loc_6809C7A: push %eax;");
    asm("loc_6809C7B: call _sub_6801BD0;");
    asm("loc_6809C80: mov 8(%eax),%eax;");
    asm("loc_6809C83: add $8,%esp;");
    asm("loc_6809C86: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809C90() // _sub_6809C90
{
    __DEBUG_ASM(6809C90);
    // chunk 0x6809C90 _sub_6809C90
    asm("loc_6809C90: push %esi;");
    asm("loc_6809C91: push $1;");
    asm("loc_6809C93: call _sub_6805F40;");
    asm("loc_6809C98: push %eax;");
    asm("loc_6809C99: call _sub_6801BD0;");
    asm("loc_6809C9E: mov %eax,%esi;");
    asm("loc_6809CA0: mov (%esi),%eax;");
    asm("loc_6809CA2: add $8,%esp;");
    asm("loc_6809CA5: cmp $0xFFFFFFFA,%eax;");
    asm("loc_6809CA8: jne loc_6809CAE;");
    asm("loc_6809CAA: xor %esi,%esi;");
    asm("loc_6809CAC: jmp loc_6809CC5;");
    asm("loc_6809CAE: cmp $0xFFFFFFFE,%eax;");
    asm("loc_6809CB1: je loc_6809CC2;");
    asm("loc_6809CB3: push $_data_680D440;");
    asm("loc_6809CB8: push $1;");
    asm("loc_6809CBA: call _sub_6805D80;");
    asm("loc_6809CBF: add $8,%esp;");
    asm("loc_6809CC2: mov 8(%esi),%esi;");
    asm("loc_6809CC5: push %esi;");
    asm("loc_6809CC6: call _sub_6802580;");
    asm("loc_6809CCB: add $4,%esp;");
    asm("loc_6809CCE: test %eax,%eax;");
    asm("loc_6809CD0: pop %esi;");
    asm("loc_6809CD1: jne loc_6809CD8;");
    asm("loc_6809CD3: jmp _sub_68021E0;");
    asm("loc_6809CD8: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809CE0() // _sub_6809CE0
{
    __DEBUG_ASM(6809CE0);
    // chunk 0x6809CE0 _sub_6809CE0
    asm("loc_6809CE0: push %esi;");
    asm("loc_6809CE1: push $1;");
    asm("loc_6809CE3: call _sub_6809C70;");
    asm("loc_6809CE8: push $2;");
    asm("loc_6809CEA: mov %eax,%esi;");
    asm("loc_6809CEC: call _sub_6805F40;");
    asm("loc_6809CF1: push %eax;");
    asm("loc_6809CF2: call _sub_6801BD0;");
    asm("loc_6809CF7: mov (%eax),%ecx;");
    asm("loc_6809CF9: add $0xC,%esp;");
    asm("loc_6809CFC: cmp $0xFFFFFFFA,%ecx;");
    asm("loc_6809CFF: jne loc_6809D05;");
    asm("loc_6809D01: xor %eax,%eax;");
    asm("loc_6809D03: jmp loc_6809D10;");
    asm("loc_6809D05: push %eax;");
    asm("loc_6809D06: push %esi;");
    asm("loc_6809D07: call _sub_6805550;");
    asm("loc_6809D0C: add $8,%esp;");
    asm("loc_6809D0F: inc %eax;");
    asm("loc_6809D10: push %eax;");
    asm("loc_6809D11: push %esi;");
    asm("loc_6809D12: call _sub_6802680;");
    asm("loc_6809D17: add $8,%esp;");
    asm("loc_6809D1A: test %eax,%eax;");
    asm("loc_6809D1C: pop %esi;");
    asm("loc_6809D1D: jne loc_6809D24;");
    asm("loc_6809D1F: jmp _sub_68021E0;");
    asm("loc_6809D24: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809D30() // _sub_6809D30
{
    asm("jmp dgb_6809D30;"); // jumptable skip
    asm(".long _jmp_6809DF0;"); // jumptable address
    __DEBUG_ASM(6809D30);
    // chunk 0x6809D30 _sub_6809D30
    asm("loc_6809D30: sub $0x40,%esp;");
    asm("loc_6809D33: push %esi;");
    asm("loc_6809D34: push $1;");
    asm("loc_6809D36: call _sub_6801CF0;");
    asm("loc_6809D3B: mov %eax,%esi;");
    asm("loc_6809D3D: push %esi;");
    asm("loc_6809D3E: call _sub_6801BD0;");
    asm("loc_6809D43: mov (%eax),%ecx;");
    asm("loc_6809D45: add $7,%ecx;");
    asm("loc_6809D48: add $8,%esp;");
    asm("loc_6809D4B: cmp $7,%ecx;");
    asm("loc_6809D4E: ja loc_6809DC9;");
    asm("loc_6809D50: jmpl *_jmp_6809DF0(,%ecx,4);");
    asm("loc_6809D57: push %esi;");
    asm("loc_6809D58: call _sub_6802140;");
    asm("loc_6809D5D: push %eax;");
    asm("loc_6809D5E: call _sub_68022B0;");
    asm("loc_6809D63: add $8,%esp;");
    asm("loc_6809D66: pop %esi;");
    asm("loc_6809D67: add $0x40,%esp;");
    asm("loc_6809D6A: ret;");
    asm("loc_6809D6B: push %esi;");
    asm("loc_6809D6C: call _sub_6802420;");
    asm("loc_6809D71: add $4,%esp;");
    asm("loc_6809D74: pop %esi;");
    asm("loc_6809D75: add $0x40,%esp;");
    asm("loc_6809D78: ret;");
    asm("loc_6809D79: mov 8(%eax),%eax;");
    asm("loc_6809D7C: push %eax;");
    asm("loc_6809D7D: push $_data_680E2F8;");
    asm("loc_6809D82: jmp loc_6809DBB;");
    asm("loc_6809D84: mov 8(%eax),%edx;");
    asm("loc_6809D87: push %edx;");
    asm("loc_6809D88: push $_data_680E2E8;");
    asm("loc_6809D8D: lea 0xC(%esp),%eax;");
    asm("loc_6809D91: push %eax;");
    asm("loc_6809D92: jmp loc_6809DC0;");
    asm("loc_6809D94: mov 8(%eax),%ecx;");
    asm("loc_6809D97: push %ecx;");
    asm("loc_6809D98: push $_data_680E2E8;");
    asm("loc_6809D9D: lea 0xC(%esp),%edx;");
    asm("loc_6809DA1: push %edx;");
    asm("loc_6809DA2: jmp loc_6809DC0;");
    asm("loc_6809DA4: mov 8(%eax),%eax;");
    asm("loc_6809DA7: push %eax;");
    asm("loc_6809DA8: push $_data_680E2E8;");
    asm("loc_6809DAD: jmp loc_6809DBB;");
    asm("loc_6809DAF: mov 8(%eax),%edx;");
    asm("loc_6809DB2: mov 0x14(%edx),%eax;");
    asm("loc_6809DB5: push %eax;");
    asm("loc_6809DB6: push $_data_680E2D8;");
    asm("loc_6809DBB: lea 0xC(%esp),%ecx;");
    asm("loc_6809DBF: push %ecx;");
    asm("loc_6809DC0: calll *_import_680C060;");
    asm("loc_6809DC6: add $0xC,%esp;");
    asm("loc_6809DC9: lea 4(%esp),%edx;");
    asm("loc_6809DCD: push %edx;");
    asm("loc_6809DCE: call _sub_68022B0;");
    asm("loc_6809DD3: add $4,%esp;");
    asm("loc_6809DD6: pop %esi;");
    asm("loc_6809DD7: add $0x40,%esp;");
    asm("loc_6809DDA: ret;");
    asm("loc_6809DDB: push $_data_680D9E4;");
    asm("loc_6809DE0: call _sub_68022B0;");
    asm("loc_6809DE5: add $4,%esp;");
    asm("loc_6809DE8: pop %esi;");
    asm("loc_6809DE9: add $0x40,%esp;");
    asm("loc_6809DEC: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_6809DF0: .long loc_6809D84;");
    asm(".long loc_6809DDB;");
    asm(".long loc_6809DA4;");
    asm(".long loc_6809D94;");
    asm(".long loc_6809D79;");
    asm(".long loc_6809D6B;");
    asm(".long loc_6809D57;");
    asm(".long loc_6809DAF;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6809D30);
_naked _weak void _sub_6809E10() // _sub_6809E10
{
    __DEBUG_ASM(6809E10);
    // chunk 0x6809E10 _sub_6809E10
    asm("loc_6809E10: push %ecx;");
    asm("loc_6809E11: push %esi;");
    asm("loc_6809E12: push $1;");
    asm("loc_6809E14: call _sub_6805F40;");
    asm("loc_6809E19: mov %eax,%esi;");
    asm("loc_6809E1B: push %esi;");
    asm("loc_6809E1C: call _sub_6801BD0;");
    asm("loc_6809E21: mov (%eax),%eax;");
    asm("loc_6809E23: shl $2,%eax;");
    asm("loc_6809E26: mov $_off_680D930,%ecx;");
    asm("loc_6809E2B: sub %eax,%ecx;");
    asm("loc_6809E2D: mov (%ecx),%edx;");
    asm("loc_6809E2F: push %edx;");
    asm("loc_6809E30: call _sub_68022B0;");
    asm("loc_6809E35: push %esi;");
    asm("loc_6809E36: call _sub_6802480;");
    asm("loc_6809E3B: mov %eax,0x14(%esp);");
    asm("loc_6809E3F: fildl 0x14(%esp);");
    asm("loc_6809E43: add $8,%esp;");
    asm("loc_6809E46: fstpl (%esp);");
    asm("loc_6809E49: call _sub_6802210;");
    asm("loc_6809E4E: add $8,%esp;");
    asm("loc_6809E51: pop %esi;");
    asm("loc_6809E52: pop %ecx;");
    asm("loc_6809E53: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809E60() // _sub_6809E60
{
    __DEBUG_ASM(6809E60);
    // chunk 0x6809E60 _sub_6809E60
    asm("loc_6809E60: push $1;");
    asm("loc_6809E62: call _sub_6801CF0;");
    asm("loc_6809E67: add $4,%esp;");
    asm("loc_6809E6A: test %eax,%eax;");
    asm("loc_6809E6C: je loc_6809E7B;");
    asm("loc_6809E6E: push %eax;");
    asm("loc_6809E6F: call _sub_6802010;");
    asm("loc_6809E74: add $4,%esp;");
    asm("loc_6809E77: test %eax,%eax;");
    asm("loc_6809E79: je loc_6809E97;");
    asm("loc_6809E7B: push $0;");
    asm("loc_6809E7D: push $_data_680E600;");
    asm("loc_6809E82: push $2;");
    asm("loc_6809E84: call _sub_6805E40;");
    asm("loc_6809E89: push %eax;");
    asm("loc_6809E8A: push $_data_680E304;");
    asm("loc_6809E8F: call _sub_6805FB0;");
    asm("loc_6809E94: add $0x14,%esp;");
    asm("loc_6809E97: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809EA0() // _sub_6809EA0
{
    __DEBUG_ASM(6809EA0);
    // chunk 0x6809EA0 _sub_6809EA0
    asm("loc_6809EA0: sub $0x18,%esp;");
    asm("loc_6809EA3: push %ebx;");
    asm("loc_6809EA4: push %ebp;");
    asm("loc_6809EA5: push %esi;");
    asm("loc_6809EA6: push %edi;");
    asm("loc_6809EA7: push $1;");
    asm("loc_6809EA9: call _sub_6809C70;");
    asm("loc_6809EAE: mov %eax,%edi;");
    asm("loc_6809EB0: push %edi;");
    asm("loc_6809EB1: call _sub_6809BE0;");
    asm("loc_6809EB6: call _sub_680BDAA;");
    asm("loc_6809EBB: push $2;");
    asm("loc_6809EBD: mov %eax,0x20(%esp);");
    asm("loc_6809EC1: call _sub_6805F10;");
    asm("loc_6809EC6: push %eax;");
    asm("loc_6809EC7: call _sub_6801BD0;");
    asm("loc_6809ECC: mov (%eax),%ebx;");
    asm("loc_6809ECE: mov 4(%eax),%ebp;");
    asm("loc_6809ED1: mov 8(%eax),%ecx;");
    asm("loc_6809ED4: mov 0xC(%eax),%edx;");
    asm("loc_6809ED7: push $3;");
    asm("loc_6809ED9: mov %ecx,0x34(%esp);");
    asm("loc_6809EDD: mov %edx,0x38(%esp);");
    asm("loc_6809EE1: call _sub_6802870;");
    asm("loc_6809EE6: mov 0x28(%esp),%eax;");
    asm("loc_6809EEA: mov $1,%esi;");
    asm("loc_6809EEF: add $0x14,%esp;");
    asm("loc_6809EF2: cmp %esi,%eax;");
    asm("loc_6809EF4: mov %esi,0x10(%esp);");
    asm("loc_6809EF8: jl loc_6809FAB;");
    asm("loc_6809EFE: mov _data_680E604,%eax;");
    asm("loc_6809F03: fildl 0x10(%esp);");
    asm("loc_6809F07: mov (%eax),%ecx;");
    asm("loc_6809F09: mov 0x20(%esp),%edx;");
    asm("loc_6809F0D: mov 0x24(%esp),%eax;");
    asm("loc_6809F11: mov %ebx,(%ecx);");
    asm("loc_6809F13: mov %ebp,4(%ecx);");
    asm("loc_6809F16: mov %edx,8(%ecx);");
    asm("loc_6809F19: mov %eax,0xC(%ecx);");
    asm("loc_6809F1C: mov _data_680E604,%eax;");
    asm("loc_6809F21: addl $0x10,(%eax);");
    asm("loc_6809F24: mov _data_680E604,%ecx;");
    asm("loc_6809F2A: mov (%ecx),%edx;");
    asm("loc_6809F2C: movl $0xFFFFFFFF,(%edx);");
    asm("loc_6809F32: mov _data_680E604,%eax;");
    asm("loc_6809F37: mov (%eax),%ecx;");
    asm("loc_6809F39: fstpl 8(%ecx);");
    asm("loc_6809F3C: mov _data_680E604,%eax;");
    asm("loc_6809F41: mov (%eax),%edx;");
    asm("loc_6809F43: add $0x10,%edx;");
    asm("loc_6809F46: push %esi;");
    asm("loc_6809F47: push %edi;");
    asm("loc_6809F48: mov %edx,(%eax);");
    asm("loc_6809F4A: call _sub_68055C0;");
    asm("loc_6809F4F: mov _data_680E604,%edx;");
    asm("loc_6809F55: mov (%edx),%ecx;");
    asm("loc_6809F57: mov (%eax),%edx;");
    asm("loc_6809F59: mov %edx,(%ecx);");
    asm("loc_6809F5B: mov 4(%eax),%edx;");
    asm("loc_6809F5E: mov %edx,4(%ecx);");
    asm("loc_6809F61: mov 8(%eax),%edx;");
    asm("loc_6809F64: mov %edx,8(%ecx);");
    asm("loc_6809F67: mov 0xC(%eax),%eax;");
    asm("loc_6809F6A: mov %eax,0xC(%ecx);");
    asm("loc_6809F6D: mov _data_680E604,%eax;");
    asm("loc_6809F72: mov (%eax),%ecx;");
    asm("loc_6809F74: add $0x10,%ecx;");
    asm("loc_6809F77: push $1;");
    asm("loc_6809F79: push $2;");
    asm("loc_6809F7B: mov %ecx,(%eax);");
    asm("loc_6809F7D: call _sub_6802B50;");
    asm("loc_6809F82: mov _data_680E604,%ecx;");
    asm("loc_6809F88: mov (%ecx),%eax;");
    asm("loc_6809F8A: mov -0x10(%eax),%edx;");
    asm("loc_6809F8D: add $0xFFFFFFF0,%eax;");
    asm("loc_6809F90: add $0x10,%esp;");
    asm("loc_6809F93: cmp $0xFFFFFFFA,%edx;");
    asm("loc_6809F96: jne loc_6809FAB;");
    asm("loc_6809F98: mov %eax,(%ecx);");
    asm("loc_6809F9A: mov 0x14(%esp),%eax;");
    asm("loc_6809F9E: inc %esi;");
    asm("loc_6809F9F: cmp %eax,%esi;");
    asm("loc_6809FA1: mov %esi,0x10(%esp);");
    asm("loc_6809FA5: jle loc_6809EFE;");
    asm("loc_6809FAB: pop %edi;");
    asm("loc_6809FAC: pop %esi;");
    asm("loc_6809FAD: pop %ebp;");
    asm("loc_6809FAE: pop %ebx;");
    asm("loc_6809FAF: add $0x18,%esp;");
    asm("loc_6809FB2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6809FC0() // _sub_6809FC0
{
    __DEBUG_ASM(6809FC0);
    // chunk 0x6809FC0 _sub_6809FC0
    asm("loc_6809FC0: sub $0x1C,%esp;");
    asm("loc_6809FC3: push %ebx;");
    asm("loc_6809FC4: push %ebp;");
    asm("loc_6809FC5: push %esi;");
    asm("loc_6809FC6: push %edi;");
    asm("loc_6809FC7: push $1;");
    asm("loc_6809FC9: call _sub_6809C70;");
    asm("loc_6809FCE: mov %eax,%ebp;");
    asm("loc_6809FD0: push $2;");
    asm("loc_6809FD2: mov %ebp,0x20(%esp);");
    asm("loc_6809FD6: call _sub_6805F10;");
    asm("loc_6809FDB: push %eax;");
    asm("loc_6809FDC: call _sub_6801BD0;");
    asm("loc_6809FE1: mov (%eax),%esi;");
    asm("loc_6809FE3: mov 4(%eax),%edi;");
    asm("loc_6809FE6: mov 8(%eax),%ebx;");
    asm("loc_6809FE9: mov 0xC(%eax),%eax;");
    asm("loc_6809FEC: push $3;");
    asm("loc_6809FEE: mov %eax,0x38(%esp);");
    asm("loc_6809FF2: call _sub_6802870;");
    asm("loc_6809FF7: mov 0xC(%ebp),%ecx;");
    asm("loc_6809FFA: xor %eax,%eax;");
    asm("loc_6809FFC: add $0x10,%esp;");
    asm("loc_6809FFF: cmp %eax,%ecx;");
    asm("loc_680A001: mov %eax,0x14(%esp);");
    asm("loc_680A005: jle loc_680A0DB;");
    asm("loc_680A00B: mov %eax,0x10(%esp);");
    asm("loc_680A00F: mov 0x10(%esp),%ecx;");
    asm("loc_680A013: mov 8(%ebp),%eax;");
    asm("loc_680A016: add %ecx,%eax;");
    asm("loc_680A018: mov 0x10(%eax),%edx;");
    asm("loc_680A01B: cmp $0xFFFFFFFA,%edx;");
    asm("loc_680A01E: lea 0x10(%eax),%ecx;");
    asm("loc_680A021: je loc_680A0BC;");
    asm("loc_680A027: mov _data_680E604,%edx;");
    asm("loc_680A02D: mov (%edx),%edx;");
    asm("loc_680A02F: mov %esi,(%edx);");
    asm("loc_680A031: mov %edi,4(%edx);");
    asm("loc_680A034: mov 0x28(%esp),%ebp;");
    asm("loc_680A038: mov %ebx,8(%edx);");
    asm("loc_680A03B: mov %ebp,0xC(%edx);");
    asm("loc_680A03E: mov _data_680E604,%edx;");
    asm("loc_680A044: addl $0x10,(%edx);");
    asm("loc_680A047: mov (%eax),%ebp;");
    asm("loc_680A049: mov _data_680E604,%edx;");
    asm("loc_680A04F: mov (%edx),%edx;");
    asm("loc_680A051: mov %ebp,(%edx);");
    asm("loc_680A053: mov 4(%eax),%ebp;");
    asm("loc_680A056: mov %ebp,4(%edx);");
    asm("loc_680A059: mov 8(%eax),%ebp;");
    asm("loc_680A05C: mov %ebp,8(%edx);");
    asm("loc_680A05F: mov 0xC(%eax),%eax;");
    asm("loc_680A062: mov %eax,0xC(%edx);");
    asm("loc_680A065: mov _data_680E604,%eax;");
    asm("loc_680A06A: addl $0x10,(%eax);");
    asm("loc_680A06D: mov _data_680E604,%edx;");
    asm("loc_680A073: mov (%edx),%eax;");
    asm("loc_680A075: mov (%ecx),%edx;");
    asm("loc_680A077: mov %edx,(%eax);");
    asm("loc_680A079: mov 4(%ecx),%edx;");
    asm("loc_680A07C: mov %edx,4(%eax);");
    asm("loc_680A07F: mov 8(%ecx),%edx;");
    asm("loc_680A082: mov %edx,8(%eax);");
    asm("loc_680A085: mov 0xC(%ecx),%ecx;");
    asm("loc_680A088: mov %ecx,0xC(%eax);");
    asm("loc_680A08B: mov _data_680E604,%eax;");
    asm("loc_680A090: mov (%eax),%edx;");
    asm("loc_680A092: add $0x10,%edx;");
    asm("loc_680A095: push $1;");
    asm("loc_680A097: push $2;");
    asm("loc_680A099: mov %edx,(%eax);");
    asm("loc_680A09B: call _sub_6802B50;");
    asm("loc_680A0A0: mov _data_680E604,%ecx;");
    asm("loc_680A0A6: mov (%ecx),%eax;");
    asm("loc_680A0A8: mov -0x10(%eax),%edx;");
    asm("loc_680A0AB: add $0xFFFFFFF0,%eax;");
    asm("loc_680A0AE: add $8,%esp;");
    asm("loc_680A0B1: cmp $0xFFFFFFFA,%edx;");
    asm("loc_680A0B4: jne loc_680A0DB;");
    asm("loc_680A0B6: mov 0x18(%esp),%ebp;");
    asm("loc_680A0BA: mov %eax,(%ecx);");
    asm("loc_680A0BC: mov 0x14(%esp),%eax;");
    asm("loc_680A0C0: mov 0x10(%esp),%edx;");
    asm("loc_680A0C4: mov 0xC(%ebp),%ecx;");
    asm("loc_680A0C7: inc %eax;");
    asm("loc_680A0C8: add $0x20,%edx;");
    asm("loc_680A0CB: cmp %ecx,%eax;");
    asm("loc_680A0CD: mov %eax,0x14(%esp);");
    asm("loc_680A0D1: mov %edx,0x10(%esp);");
    asm("loc_680A0D5: jl loc_680A00F;");
    asm("loc_680A0DB: pop %edi;");
    asm("loc_680A0DC: pop %esi;");
    asm("loc_680A0DD: pop %ebp;");
    asm("loc_680A0DE: pop %ebx;");
    asm("loc_680A0DF: add $0x1C,%esp;");
    asm("loc_680A0E2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A0F0() // _sub_680A0F0
{
    __DEBUG_ASM(680A0F0);
    // chunk 0x680A0F0 _sub_680A0F0
    asm("loc_680A0F0: sub $0x10,%esp;");
    asm("loc_680A0F3: push %ebx;");
    asm("loc_680A0F4: push %ebp;");
    asm("loc_680A0F5: push %esi;");
    asm("loc_680A0F6: push %edi;");
    asm("loc_680A0F7: push $1;");
    asm("loc_680A0F9: call _sub_6805F10;");
    asm("loc_680A0FE: push %eax;");
    asm("loc_680A0FF: call _sub_6801BD0;");
    asm("loc_680A104: mov (%eax),%edi;");
    asm("loc_680A106: mov 4(%eax),%ebx;");
    asm("loc_680A109: mov 8(%eax),%ebp;");
    asm("loc_680A10C: mov 0xC(%eax),%eax;");
    asm("loc_680A10F: push $4;");
    asm("loc_680A111: mov %eax,0x28(%esp);");
    asm("loc_680A115: call _sub_6802870;");
    asm("loc_680A11A: mov _data_680E604,%ecx;");
    asm("loc_680A120: mov 0x58(%ecx),%esi;");
    asm("loc_680A123: add $0xC,%esp;");
    asm("loc_680A126: test %esi,%esi;");
    asm("loc_680A128: je loc_680A1E4;");
    asm("loc_680A12E: cmpl $0xFFFFFFFA,0x10(%esi);");
    asm("loc_680A132: je loc_680A1AF;");
    asm("loc_680A134: push %esi;");
    asm("loc_680A135: call _sub_680A1F0;");
    asm("loc_680A13A: mov _data_680E604,%edx;");
    asm("loc_680A140: mov (%edx),%eax;");
    asm("loc_680A142: mov 0x20(%esp),%ecx;");
    asm("loc_680A146: mov %edi,(%eax);");
    asm("loc_680A148: mov %ebx,4(%eax);");
    asm("loc_680A14B: mov %ebp,8(%eax);");
    asm("loc_680A14E: mov %ecx,0xC(%eax);");
    asm("loc_680A151: mov _data_680E604,%eax;");
    asm("loc_680A156: mov (%eax),%ecx;");
    asm("loc_680A158: add $0x10,%ecx;");
    asm("loc_680A15B: push %esi;");
    asm("loc_680A15C: mov %ecx,(%eax);");
    asm("loc_680A15E: call _sub_680A1F0;");
    asm("loc_680A163: mov _data_680E604,%edx;");
    asm("loc_680A169: mov (%edx),%eax;");
    asm("loc_680A16B: mov 0x10(%esi),%ecx;");
    asm("loc_680A16E: mov %ecx,(%eax);");
    asm("loc_680A170: mov 0x14(%esi),%edx;");
    asm("loc_680A173: mov %edx,4(%eax);");
    asm("loc_680A176: mov 0x18(%esi),%ecx;");
    asm("loc_680A179: mov %ecx,8(%eax);");
    asm("loc_680A17C: mov 0x1C(%esi),%edx;");
    asm("loc_680A17F: mov %edx,0xC(%eax);");
    asm("loc_680A182: mov _data_680E604,%eax;");
    asm("loc_680A187: mov (%eax),%ecx;");
    asm("loc_680A189: add $0x10,%ecx;");
    asm("loc_680A18C: push $1;");
    asm("loc_680A18E: push $2;");
    asm("loc_680A190: mov %ecx,(%eax);");
    asm("loc_680A192: call _sub_6802B50;");
    asm("loc_680A197: mov _data_680E604,%ecx;");
    asm("loc_680A19D: mov (%ecx),%eax;");
    asm("loc_680A19F: mov -0x10(%eax),%edx;");
    asm("loc_680A1A2: add $0x10,%esp;");
    asm("loc_680A1A5: cmp $0xFFFFFFFA,%edx;");
    asm("loc_680A1A8: jne loc_680A1C1;");
    asm("loc_680A1AA: add $0xFFFFFFE0,%eax;");
    asm("loc_680A1AD: mov %eax,(%ecx);");
    asm("loc_680A1AF: mov (%esi),%esi;");
    asm("loc_680A1B1: test %esi,%esi;");
    asm("loc_680A1B3: jne loc_680A12E;");
    asm("loc_680A1B9: pop %edi;");
    asm("loc_680A1BA: pop %esi;");
    asm("loc_680A1BB: pop %ebp;");
    asm("loc_680A1BC: pop %ebx;");
    asm("loc_680A1BD: add $0x10,%esp;");
    asm("loc_680A1C0: ret;");
    asm("loc_680A1C1: addl $0xFFFFFFF0,(%ecx);");
    asm("loc_680A1C4: mov _data_680E604,%eax;");
    asm("loc_680A1C9: mov (%eax),%eax;");
    asm("loc_680A1CB: mov (%eax),%edx;");
    asm("loc_680A1CD: lea -0x10(%eax),%ecx;");
    asm("loc_680A1D0: mov %edx,(%ecx);");
    asm("loc_680A1D2: mov 4(%eax),%edx;");
    asm("loc_680A1D5: mov %edx,4(%ecx);");
    asm("loc_680A1D8: mov 8(%eax),%edx;");
    asm("loc_680A1DB: mov %edx,8(%ecx);");
    asm("loc_680A1DE: mov 0xC(%eax),%eax;");
    asm("loc_680A1E1: mov %eax,0xC(%ecx);");
    asm("loc_680A1E4: pop %edi;");
    asm("loc_680A1E5: pop %esi;");
    asm("loc_680A1E6: pop %ebp;");
    asm("loc_680A1E7: pop %ebx;");
    asm("loc_680A1E8: add $0x10,%esp;");
    asm("loc_680A1EB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A1F0() // _sub_680A1F0
{
    __DEBUG_ASM(680A1F0);
    // chunk 0x680A1F0 _sub_680A1F0
    asm("loc_680A1F0: sub $0x10,%esp;");
    asm("loc_680A1F3: mov 0x14(%esp),%eax;");
    asm("loc_680A1F7: lea (%esp),%ecx;");
    asm("loc_680A1FB: push %ecx;");
    asm("loc_680A1FC: movl $0xFFFFFFFE,4(%esp);");
    asm("loc_680A204: mov %eax,0xC(%esp);");
    asm("loc_680A208: call _sub_68023D0;");
    asm("loc_680A20D: add $0x14,%esp;");
    asm("loc_680A210: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A220() // _sub_680A220
{
    __DEBUG_ASM(680A220);
    // chunk 0x680A220 _sub_680A220
    asm("loc_680A220: push $1;");
    asm("loc_680A222: call _sub_6809C70;");
    asm("loc_680A227: push %eax;");
    asm("loc_680A228: call _sub_6809BE0;");
    asm("loc_680A22D: fstpl (%esp);");
    asm("loc_680A230: call _sub_6802210;");
    asm("loc_680A235: add $8,%esp;");
    asm("loc_680A238: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A240() // _sub_680A240
{
    __DEBUG_ASM(680A240);
    // chunk 0x680A240 _sub_680A240
    asm("loc_680A240: push %ecx;");
    asm("loc_680A241: push %ebx;");
    asm("loc_680A242: push %ebp;");
    asm("loc_680A243: push %esi;");
    asm("loc_680A244: push %edi;");
    asm("loc_680A245: push $1;");
    asm("loc_680A247: call _sub_6809C70;");
    asm("loc_680A24C: push $3;");
    asm("loc_680A24E: mov %eax,%edi;");
    asm("loc_680A250: call _sub_6801CF0;");
    asm("loc_680A255: mov %eax,%ebx;");
    asm("loc_680A257: push %edi;");
    asm("loc_680A258: mov %ebx,0x1C(%esp);");
    asm("loc_680A25C: call _sub_6809BE0;");
    asm("loc_680A261: add $0xC,%esp;");
    asm("loc_680A264: call _sub_680BDAA;");
    asm("loc_680A269: test %ebx,%ebx;");
    asm("loc_680A26B: mov %eax,%esi;");
    asm("loc_680A26D: push $2;");
    asm("loc_680A26F: je loc_680A282;");
    asm("loc_680A271: call _sub_6805E70;");
    asm("loc_680A276: add $4,%esp;");
    asm("loc_680A279: call _sub_680BDAA;");
    asm("loc_680A27E: mov %eax,%ebp;");
    asm("loc_680A280: jmp loc_680A291;");
    asm("loc_680A282: call _sub_6805F40;");
    asm("loc_680A287: add $4,%esp;");
    asm("loc_680A28A: mov %eax,0x10(%esp);");
    asm("loc_680A28E: lea 1(%esi),%ebp;");
    asm("loc_680A291: lea 1(%esi),%ebx;");
    asm("loc_680A294: push %ebx;");
    asm("loc_680A295: push %edi;");
    asm("loc_680A296: call _sub_6803C40;");
    asm("loc_680A29B: add $8,%esp;");
    asm("loc_680A29E: cmp %ebp,%esi;");
    asm("loc_680A2A0: jl loc_680A2BA;");
    asm("loc_680A2A2: push %esi;");
    asm("loc_680A2A3: push %edi;");
    asm("loc_680A2A4: call _sub_68055C0;");
    asm("loc_680A2A9: push %eax;");
    asm("loc_680A2AA: push %ebx;");
    asm("loc_680A2AB: push %edi;");
    asm("loc_680A2AC: call _sub_6805590;");
    asm("loc_680A2B1: add $0x14,%esp;");
    asm("loc_680A2B4: dec %esi;");
    asm("loc_680A2B5: dec %ebx;");
    asm("loc_680A2B6: cmp %ebp,%esi;");
    asm("loc_680A2B8: jge loc_680A2A2;");
    asm("loc_680A2BA: mov 0x10(%esp),%eax;");
    asm("loc_680A2BE: push %eax;");
    asm("loc_680A2BF: call _sub_6801BD0;");
    asm("loc_680A2C4: push %eax;");
    asm("loc_680A2C5: push %ebp;");
    asm("loc_680A2C6: push %edi;");
    asm("loc_680A2C7: call _sub_6805590;");
    asm("loc_680A2CC: add $0x10,%esp;");
    asm("loc_680A2CF: pop %edi;");
    asm("loc_680A2D0: pop %esi;");
    asm("loc_680A2D1: pop %ebp;");
    asm("loc_680A2D2: pop %ebx;");
    asm("loc_680A2D3: pop %ecx;");
    asm("loc_680A2D4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A2E0() // _sub_680A2E0
{
    __DEBUG_ASM(680A2E0);
    // chunk 0x680A2E0 _sub_680A2E0
    asm("loc_680A2E0: push %ecx;");
    asm("loc_680A2E1: push %ebx;");
    asm("loc_680A2E2: push %esi;");
    asm("loc_680A2E3: push %edi;");
    asm("loc_680A2E4: push $1;");
    asm("loc_680A2E6: call _sub_6809C70;");
    asm("loc_680A2EB: mov %eax,%edi;");
    asm("loc_680A2ED: push %edi;");
    asm("loc_680A2EE: call _sub_6809BE0;");
    asm("loc_680A2F3: call _sub_680BDAA;");
    asm("loc_680A2F8: mov %eax,%ebx;");
    asm("loc_680A2FA: mov %ebx,0x14(%esp);");
    asm("loc_680A2FE: fildl 0x14(%esp);");
    asm("loc_680A302: fstpl (%esp);");
    asm("loc_680A305: push $2;");
    asm("loc_680A307: call _sub_6805EB0;");
    asm("loc_680A30C: add $0xC,%esp;");
    asm("loc_680A30F: call _sub_680BDAA;");
    asm("loc_680A314: test %ebx,%ebx;");
    asm("loc_680A316: mov %eax,%esi;");
    asm("loc_680A318: jle loc_680A364;");
    asm("loc_680A31A: push %esi;");
    asm("loc_680A31B: push %edi;");
    asm("loc_680A31C: call _sub_68055C0;");
    asm("loc_680A321: push %eax;");
    asm("loc_680A322: call _sub_68023D0;");
    asm("loc_680A327: add $0xC,%esp;");
    asm("loc_680A32A: cmp %ebx,%esi;");
    asm("loc_680A32C: jge loc_680A34B;");
    asm("loc_680A32E: push %ebp;");
    asm("loc_680A32F: lea 1(%esi),%ebp;");
    asm("loc_680A332: push %ebp;");
    asm("loc_680A333: push %edi;");
    asm("loc_680A334: call _sub_68055C0;");
    asm("loc_680A339: push %eax;");
    asm("loc_680A33A: push %esi;");
    asm("loc_680A33B: push %edi;");
    asm("loc_680A33C: call _sub_6805590;");
    asm("loc_680A341: add $0x14,%esp;");
    asm("loc_680A344: inc %esi;");
    asm("loc_680A345: inc %ebp;");
    asm("loc_680A346: cmp %ebx,%esi;");
    asm("loc_680A348: jl loc_680A332;");
    asm("loc_680A34A: pop %ebp;");
    asm("loc_680A34B: lea -1(%ebx),%eax;");
    asm("loc_680A34E: push %eax;");
    asm("loc_680A34F: push %edi;");
    asm("loc_680A350: call _sub_6803C40;");
    asm("loc_680A355: push $_data_680D968;");
    asm("loc_680A35A: push %ebx;");
    asm("loc_680A35B: push %edi;");
    asm("loc_680A35C: call _sub_6805590;");
    asm("loc_680A361: add $0x14,%esp;");
    asm("loc_680A364: pop %edi;");
    asm("loc_680A365: pop %esi;");
    asm("loc_680A366: pop %ebx;");
    asm("loc_680A367: pop %ecx;");
    asm("loc_680A368: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A370() // _sub_680A370
{
    __DEBUG_ASM(680A370);
    // chunk 0x680A370 _sub_680A370
    asm("loc_680A370: push %ebx;");
    asm("loc_680A371: push %ebp;");
    asm("loc_680A372: push %esi;");
    asm("loc_680A373: push %edi;");
    asm("loc_680A374: push $1;");
    asm("loc_680A376: call _sub_6801CF0;");
    asm("loc_680A37B: push $1;");
    asm("loc_680A37D: mov %eax,%ebx;");
    asm("loc_680A37F: call _sub_6809C70;");
    asm("loc_680A384: mov %eax,%edi;");
    asm("loc_680A386: push %edi;");
    asm("loc_680A387: call _sub_6809BE0;");
    asm("loc_680A38C: call _sub_680BDAA;");
    asm("loc_680A391: push $2;");
    asm("loc_680A393: mov %eax,%ebp;");
    asm("loc_680A395: call _sub_6801CF0;");
    asm("loc_680A39A: mov %eax,%esi;");
    asm("loc_680A39C: add $0x10,%esp;");
    asm("loc_680A39F: test %esi,%esi;");
    asm("loc_680A3A1: je loc_680A3BF;");
    asm("loc_680A3A3: push %esi;");
    asm("loc_680A3A4: call _sub_68020D0;");
    asm("loc_680A3A9: add $4,%esp;");
    asm("loc_680A3AC: test %eax,%eax;");
    asm("loc_680A3AE: jne loc_680A3BF;");
    asm("loc_680A3B0: push $_data_680D8C8;");
    asm("loc_680A3B5: push $2;");
    asm("loc_680A3B7: call _sub_6805D80;");
    asm("loc_680A3BC: add $8,%esp;");
    asm("loc_680A3BF: push $4;");
    asm("loc_680A3C1: call _sub_6802870;");
    asm("loc_680A3C6: push %esi;");
    asm("loc_680A3C7: push %ebp;");
    asm("loc_680A3C8: push $1;");
    asm("loc_680A3CA: push %edi;");
    asm("loc_680A3CB: call _sub_680A3E0;");
    asm("loc_680A3D0: push %ebx;");
    asm("loc_680A3D1: call _sub_6802420;");
    asm("loc_680A3D6: add $0x18,%esp;");
    asm("loc_680A3D9: pop %edi;");
    asm("loc_680A3DA: pop %esi;");
    asm("loc_680A3DB: pop %ebp;");
    asm("loc_680A3DC: pop %ebx;");
    asm("loc_680A3DD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A3E0() // _sub_680A3E0
{
    __DEBUG_ASM(680A3E0);
    // chunk 0x680A3E0 _sub_680A3E0
    asm("loc_680A3E0: push %ecx;");
    asm("loc_680A3E1: push %ebx;");
    asm("loc_680A3E2: mov 0x10(%esp),%ebx;");
    asm("loc_680A3E6: push %ebp;");
    asm("loc_680A3E7: mov 0x18(%esp),%ebp;");
    asm("loc_680A3EB: cmp %ebp,%ebx;");
    asm("loc_680A3ED: push %esi;");
    asm("loc_680A3EE: push %edi;");
    asm("loc_680A3EF: jge loc_680A601;");
    asm("loc_680A3F5: mov 0x18(%esp),%esi;");
    asm("loc_680A3F9: jmp loc_680A403;");
    asm("loc_680A3FB: mov 0x20(%esp),%ebp;");
    asm("loc_680A3FF: mov 0x1C(%esp),%ebx;");
    asm("loc_680A403: push %ebx;");
    asm("loc_680A404: push %esi;");
    asm("loc_680A405: call _sub_68055C0;");
    asm("loc_680A40A: add $8,%esp;");
    asm("loc_680A40D: push %eax;");
    asm("loc_680A40E: push %ebp;");
    asm("loc_680A40F: push %esi;");
    asm("loc_680A410: call _sub_68055C0;");
    asm("loc_680A415: add $8,%esp;");
    asm("loc_680A418: push %eax;");
    asm("loc_680A419: mov 0x2C(%esp),%eax;");
    asm("loc_680A41D: push %eax;");
    asm("loc_680A41E: call _sub_680A670;");
    asm("loc_680A423: add $0xC,%esp;");
    asm("loc_680A426: test %eax,%eax;");
    asm("loc_680A428: je loc_680A435;");
    asm("loc_680A42A: push %ebp;");
    asm("loc_680A42B: push %ebx;");
    asm("loc_680A42C: push %esi;");
    asm("loc_680A42D: call _sub_680A610;");
    asm("loc_680A432: add $0xC,%esp;");
    asm("loc_680A435: mov %ebp,%eax;");
    asm("loc_680A437: sub %ebx,%eax;");
    asm("loc_680A439: cmp $1,%eax;");
    asm("loc_680A43C: mov %eax,0x10(%esp);");
    asm("loc_680A440: je loc_680A601;");
    asm("loc_680A446: lea (%ebx,%ebp),%eax;");
    asm("loc_680A449: cltd;");
    asm("loc_680A44A: sub %edx,%eax;");
    asm("loc_680A44C: mov %eax,%edi;");
    asm("loc_680A44E: sar $1,%edi;");
    asm("loc_680A450: push %edi;");
    asm("loc_680A451: push %esi;");
    asm("loc_680A452: call _sub_68055C0;");
    asm("loc_680A457: push %ebx;");
    asm("loc_680A458: push %esi;");
    asm("loc_680A459: mov %eax,0x28(%esp);");
    asm("loc_680A45D: call _sub_68055C0;");
    asm("loc_680A462: mov 0x28(%esp),%ecx;");
    asm("loc_680A466: mov 0x34(%esp),%edx;");
    asm("loc_680A46A: push %eax;");
    asm("loc_680A46B: push %ecx;");
    asm("loc_680A46C: push %edx;");
    asm("loc_680A46D: call _sub_680A670;");
    asm("loc_680A472: add $0x1C,%esp;");
    asm("loc_680A475: test %eax,%eax;");
    asm("loc_680A477: je loc_680A47D;");
    asm("loc_680A479: push %edi;");
    asm("loc_680A47A: push %ebx;");
    asm("loc_680A47B: jmp loc_680A4A0;");
    asm("loc_680A47D: mov 0x18(%esp),%eax;");
    asm("loc_680A481: push %eax;");
    asm("loc_680A482: push %ebp;");
    asm("loc_680A483: push %esi;");
    asm("loc_680A484: call _sub_68055C0;");
    asm("loc_680A489: mov 0x30(%esp),%ecx;");
    asm("loc_680A48D: add $8,%esp;");
    asm("loc_680A490: push %eax;");
    asm("loc_680A491: push %ecx;");
    asm("loc_680A492: call _sub_680A670;");
    asm("loc_680A497: add $0xC,%esp;");
    asm("loc_680A49A: test %eax,%eax;");
    asm("loc_680A49C: je loc_680A4A9;");
    asm("loc_680A49E: push %ebp;");
    asm("loc_680A49F: push %edi;");
    asm("loc_680A4A0: push %esi;");
    asm("loc_680A4A1: call _sub_680A610;");
    asm("loc_680A4A6: add $0xC,%esp;");
    asm("loc_680A4A9: cmpl $2,0x10(%esp);");
    asm("loc_680A4AE: je loc_680A601;");
    asm("loc_680A4B4: mov _data_680E604,%eax;");
    asm("loc_680A4B9: mov (%eax),%ebx;");
    asm("loc_680A4BB: lea 0x10(%ebx),%edx;");
    asm("loc_680A4BE: push %edi;");
    asm("loc_680A4BF: push %esi;");
    asm("loc_680A4C0: mov %edx,(%eax);");
    asm("loc_680A4C2: call _sub_68055C0;");
    asm("loc_680A4C7: mov (%eax),%edx;");
    asm("loc_680A4C9: mov %ebx,%ecx;");
    asm("loc_680A4CB: mov %edx,(%ecx);");
    asm("loc_680A4CD: mov 4(%eax),%edx;");
    asm("loc_680A4D0: mov %edx,4(%ecx);");
    asm("loc_680A4D3: mov 8(%eax),%edx;");
    asm("loc_680A4D6: dec %ebp;");
    asm("loc_680A4D7: push %ebp;");
    asm("loc_680A4D8: mov %edx,8(%ecx);");
    asm("loc_680A4DB: mov 0xC(%eax),%eax;");
    asm("loc_680A4DE: push %edi;");
    asm("loc_680A4DF: push %esi;");
    asm("loc_680A4E0: mov %eax,0xC(%ecx);");
    asm("loc_680A4E3: call _sub_680A610;");
    asm("loc_680A4E8: mov 0x30(%esp),%edi;");
    asm("loc_680A4EC: add $0x14,%esp;");
    asm("loc_680A4EF: push %ebx;");
    asm("loc_680A4F0: inc %edi;");
    asm("loc_680A4F1: push %edi;");
    asm("loc_680A4F2: push %esi;");
    asm("loc_680A4F3: call _sub_68055C0;");
    asm("loc_680A4F8: mov 0x30(%esp),%ecx;");
    asm("loc_680A4FC: add $8,%esp;");
    asm("loc_680A4FF: push %eax;");
    asm("loc_680A500: push %ecx;");
    asm("loc_680A501: call _sub_680A670;");
    asm("loc_680A506: add $0xC,%esp;");
    asm("loc_680A509: test %eax,%eax;");
    asm("loc_680A50B: je loc_680A53E;");
    asm("loc_680A50D: cmp 0x20(%esp),%edi;");
    asm("loc_680A511: jle loc_680A520;");
    asm("loc_680A513: push $_data_680E320;");
    asm("loc_680A518: call _sub_6802E00;");
    asm("loc_680A51D: add $4,%esp;");
    asm("loc_680A520: push %ebx;");
    asm("loc_680A521: inc %edi;");
    asm("loc_680A522: push %edi;");
    asm("loc_680A523: push %esi;");
    asm("loc_680A524: call _sub_68055C0;");
    asm("loc_680A529: mov 0x30(%esp),%edx;");
    asm("loc_680A52D: add $8,%esp;");
    asm("loc_680A530: push %eax;");
    asm("loc_680A531: push %edx;");
    asm("loc_680A532: call _sub_680A670;");
    asm("loc_680A537: add $0xC,%esp;");
    asm("loc_680A53A: test %eax,%eax;");
    asm("loc_680A53C: jne loc_680A50D;");
    asm("loc_680A53E: dec %ebp;");
    asm("loc_680A53F: push %ebp;");
    asm("loc_680A540: push %esi;");
    asm("loc_680A541: call _sub_68055C0;");
    asm("loc_680A546: push %eax;");
    asm("loc_680A547: mov 0x30(%esp),%eax;");
    asm("loc_680A54B: push %ebx;");
    asm("loc_680A54C: push %eax;");
    asm("loc_680A54D: call _sub_680A670;");
    asm("loc_680A552: add $0x14,%esp;");
    asm("loc_680A555: test %eax,%eax;");
    asm("loc_680A557: je loc_680A587;");
    asm("loc_680A559: cmp 0x1C(%esp),%ebp;");
    asm("loc_680A55D: jge loc_680A56C;");
    asm("loc_680A55F: push $_data_680E320;");
    asm("loc_680A564: call _sub_6802E00;");
    asm("loc_680A569: add $4,%esp;");
    asm("loc_680A56C: dec %ebp;");
    asm("loc_680A56D: push %ebp;");
    asm("loc_680A56E: push %esi;");
    asm("loc_680A56F: call _sub_68055C0;");
    asm("loc_680A574: mov 0x2C(%esp),%ecx;");
    asm("loc_680A578: push %eax;");
    asm("loc_680A579: push %ebx;");
    asm("loc_680A57A: push %ecx;");
    asm("loc_680A57B: call _sub_680A670;");
    asm("loc_680A580: add $0x14,%esp;");
    asm("loc_680A583: test %eax,%eax;");
    asm("loc_680A585: jne loc_680A559;");
    asm("loc_680A587: cmp %edi,%ebp;");
    asm("loc_680A589: jl loc_680A59B;");
    asm("loc_680A58B: push %ebp;");
    asm("loc_680A58C: push %edi;");
    asm("loc_680A58D: push %esi;");
    asm("loc_680A58E: call _sub_680A610;");
    asm("loc_680A593: add $0xC,%esp;");
    asm("loc_680A596: jmp loc_680A4EF;");
    asm("loc_680A59B: mov 0x20(%esp),%edx;");
    asm("loc_680A59F: push %edi;");
    asm("loc_680A5A0: lea -1(%edx),%eax;");
    asm("loc_680A5A3: push %eax;");
    asm("loc_680A5A4: push %esi;");
    asm("loc_680A5A5: call _sub_680A610;");
    asm("loc_680A5AA: mov _data_680E604,%eax;");
    asm("loc_680A5AF: mov (%eax),%ecx;");
    asm("loc_680A5B1: mov 0x2C(%esp),%ebx;");
    asm("loc_680A5B5: mov 0x28(%esp),%ebp;");
    asm("loc_680A5B9: add $0xFFFFFFF0,%ecx;");
    asm("loc_680A5BC: mov %ecx,(%eax);");
    asm("loc_680A5BE: mov %ebx,%eax;");
    asm("loc_680A5C0: mov %edi,%ecx;");
    asm("loc_680A5C2: sub %edi,%eax;");
    asm("loc_680A5C4: sub %ebp,%ecx;");
    asm("loc_680A5C6: add $0xC,%esp;");
    asm("loc_680A5C9: cmp %eax,%ecx;");
    asm("loc_680A5CB: jge loc_680A5DB;");
    asm("loc_680A5CD: dec %edi;");
    asm("loc_680A5CE: lea 2(%edi),%edx;");
    asm("loc_680A5D1: mov %ebp,%eax;");
    asm("loc_680A5D3: mov %edx,0x1C(%esp);");
    asm("loc_680A5D7: mov %edx,%ebp;");
    asm("loc_680A5D9: jmp loc_680A5E9;");
    asm("loc_680A5DB: lea 1(%edi),%eax;");
    asm("loc_680A5DE: lea -2(%eax),%ecx;");
    asm("loc_680A5E1: mov %ebx,%edi;");
    asm("loc_680A5E3: mov %ecx,0x20(%esp);");
    asm("loc_680A5E7: mov %ecx,%ebx;");
    asm("loc_680A5E9: mov 0x24(%esp),%edx;");
    asm("loc_680A5ED: push %edx;");
    asm("loc_680A5EE: push %edi;");
    asm("loc_680A5EF: push %eax;");
    asm("loc_680A5F0: push %esi;");
    asm("loc_680A5F1: call _sub_680A3E0;");
    asm("loc_680A5F6: add $0x10,%esp;");
    asm("loc_680A5F9: cmp %ebx,%ebp;");
    asm("loc_680A5FB: jl loc_680A3FB;");
    asm("loc_680A601: pop %edi;");
    asm("loc_680A602: pop %esi;");
    asm("loc_680A603: pop %ebp;");
    asm("loc_680A604: pop %ebx;");
    asm("loc_680A605: pop %ecx;");
    asm("loc_680A606: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A610() // _sub_680A610
{
    __DEBUG_ASM(680A610);
    // chunk 0x680A610 _sub_680A610
    asm("loc_680A610: sub $0x10,%esp;");
    asm("loc_680A613: push %ebx;");
    asm("loc_680A614: push %esi;");
    asm("loc_680A615: mov 0x1C(%esp),%esi;");
    asm("loc_680A619: push %edi;");
    asm("loc_680A61A: mov 0x24(%esp),%edi;");
    asm("loc_680A61E: push %edi;");
    asm("loc_680A61F: push %esi;");
    asm("loc_680A620: call _sub_68055C0;");
    asm("loc_680A625: mov (%eax),%ecx;");
    asm("loc_680A627: mov 0x30(%esp),%ebx;");
    asm("loc_680A62B: mov %ecx,0x14(%esp);");
    asm("loc_680A62F: mov 4(%eax),%edx;");
    asm("loc_680A632: mov %edx,0x18(%esp);");
    asm("loc_680A636: mov 8(%eax),%ecx;");
    asm("loc_680A639: mov %ecx,0x1C(%esp);");
    asm("loc_680A63D: mov 0xC(%eax),%edx;");
    asm("loc_680A640: push %ebx;");
    asm("loc_680A641: push %esi;");
    asm("loc_680A642: mov %edx,0x28(%esp);");
    asm("loc_680A646: call _sub_68055C0;");
    asm("loc_680A64B: push %eax;");
    asm("loc_680A64C: push %edi;");
    asm("loc_680A64D: push %esi;");
    asm("loc_680A64E: call _sub_6805590;");
    asm("loc_680A653: lea 0x28(%esp),%eax;");
    asm("loc_680A657: push %eax;");
    asm("loc_680A658: push %ebx;");
    asm("loc_680A659: push %esi;");
    asm("loc_680A65A: call _sub_6805590;");
    asm("loc_680A65F: add $0x28,%esp;");
    asm("loc_680A662: pop %edi;");
    asm("loc_680A663: pop %esi;");
    asm("loc_680A664: pop %ebx;");
    asm("loc_680A665: add $0x10,%esp;");
    asm("loc_680A668: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A670() // _sub_680A670
{
    __DEBUG_ASM(680A670);
    // chunk 0x680A670 _sub_680A670
    asm("loc_680A670: mov 4(%esp),%eax;");
    asm("loc_680A674: test %eax,%eax;");
    asm("loc_680A676: je loc_680A704;");
    asm("loc_680A67C: push %eax;");
    asm("loc_680A67D: call _sub_6801BD0;");
    asm("loc_680A682: mov _data_680E604,%ecx;");
    asm("loc_680A688: mov (%ecx),%edx;");
    asm("loc_680A68A: mov (%eax),%ecx;");
    asm("loc_680A68C: mov %ecx,(%edx);");
    asm("loc_680A68E: mov 4(%eax),%ecx;");
    asm("loc_680A691: mov %ecx,4(%edx);");
    asm("loc_680A694: mov 8(%eax),%ecx;");
    asm("loc_680A697: mov %ecx,8(%edx);");
    asm("loc_680A69A: mov 0xC(%eax),%eax;");
    asm("loc_680A69D: mov %eax,0xC(%edx);");
    asm("loc_680A6A0: mov _data_680E604,%ecx;");
    asm("loc_680A6A6: mov (%ecx),%edx;");
    asm("loc_680A6A8: mov 0xC(%esp),%eax;");
    asm("loc_680A6AC: mov (%eax),%ecx;");
    asm("loc_680A6AE: add $0x10,%edx;");
    asm("loc_680A6B1: mov %ecx,(%edx);");
    asm("loc_680A6B3: mov 4(%eax),%ecx;");
    asm("loc_680A6B6: mov %ecx,4(%edx);");
    asm("loc_680A6B9: mov 8(%eax),%ecx;");
    asm("loc_680A6BC: mov %ecx,8(%edx);");
    asm("loc_680A6BF: mov 0xC(%eax),%eax;");
    asm("loc_680A6C2: mov %eax,0xC(%edx);");
    asm("loc_680A6C5: mov _data_680E604,%ecx;");
    asm("loc_680A6CB: mov (%ecx),%edx;");
    asm("loc_680A6CD: mov 0x10(%esp),%eax;");
    asm("loc_680A6D1: mov (%eax),%ecx;");
    asm("loc_680A6D3: add $0x20,%edx;");
    asm("loc_680A6D6: mov %ecx,(%edx);");
    asm("loc_680A6D8: mov 4(%eax),%ecx;");
    asm("loc_680A6DB: mov %ecx,4(%edx);");
    asm("loc_680A6DE: mov 8(%eax),%ecx;");
    asm("loc_680A6E1: mov %ecx,8(%edx);");
    asm("loc_680A6E4: mov 0xC(%eax),%eax;");
    asm("loc_680A6E7: mov %eax,0xC(%edx);");
    asm("loc_680A6EA: mov _data_680E604,%eax;");
    asm("loc_680A6EF: mov (%eax),%ecx;");
    asm("loc_680A6F1: add $0x30,%ecx;");
    asm("loc_680A6F4: push $1;");
    asm("loc_680A6F6: push $2;");
    asm("loc_680A6F8: mov %ecx,(%eax);");
    asm("loc_680A6FA: call _sub_6802B50;");
    asm("loc_680A6FF: add $0xC,%esp;");
    asm("loc_680A702: jmp loc_680A767;");
    asm("loc_680A704: mov _data_680E604,%edx;");
    asm("loc_680A70A: mov (%edx),%eax;");
    asm("loc_680A70C: mov 8(%esp),%ecx;");
    asm("loc_680A710: mov (%ecx),%edx;");
    asm("loc_680A712: mov %edx,(%eax);");
    asm("loc_680A714: mov 4(%ecx),%edx;");
    asm("loc_680A717: mov %edx,4(%eax);");
    asm("loc_680A71A: mov 8(%ecx),%edx;");
    asm("loc_680A71D: mov %edx,8(%eax);");
    asm("loc_680A720: mov 0xC(%ecx),%ecx;");
    asm("loc_680A723: mov %ecx,0xC(%eax);");
    asm("loc_680A726: mov _data_680E604,%edx;");
    asm("loc_680A72C: mov (%edx),%eax;");
    asm("loc_680A72E: mov 0xC(%esp),%ecx;");
    asm("loc_680A732: mov (%ecx),%edx;");
    asm("loc_680A734: add $0x10,%eax;");
    asm("loc_680A737: mov %edx,(%eax);");
    asm("loc_680A739: mov 4(%ecx),%edx;");
    asm("loc_680A73C: mov %edx,4(%eax);");
    asm("loc_680A73F: mov 8(%ecx),%edx;");
    asm("loc_680A742: mov %edx,8(%eax);");
    asm("loc_680A745: mov 0xC(%ecx),%ecx;");
    asm("loc_680A748: mov %ecx,0xC(%eax);");
    asm("loc_680A74B: mov _data_680E604,%eax;");
    asm("loc_680A750: mov (%eax),%edx;");
    asm("loc_680A752: push $0xB;");
    asm("loc_680A754: push $0xFFFFFFFA;");
    asm("loc_680A756: add $0x20,%edx;");
    asm("loc_680A759: push $0xFFFFFFFA;");
    asm("loc_680A75B: push $0xFFFFFFFF;");
    asm("loc_680A75D: mov %edx,(%eax);");
    asm("loc_680A75F: call _sub_68040A0;");
    asm("loc_680A764: add $0x10,%esp;");
    asm("loc_680A767: mov _data_680E604,%eax;");
    asm("loc_680A76C: addl $0xFFFFFFF0,(%eax);");
    asm("loc_680A76F: mov _data_680E604,%edx;");
    asm("loc_680A775: mov (%edx),%eax;");
    asm("loc_680A777: mov (%eax),%edx;");
    asm("loc_680A779: xor %ecx,%ecx;");
    asm("loc_680A77B: cmp $0xFFFFFFFA,%edx;");
    asm("loc_680A77E: setne %cl;");
    asm("loc_680A781: mov %ecx,%eax;");
    asm("loc_680A783: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A790() // _sub_680A790
{
    __DEBUG_ASM(680A790);
    // chunk 0x680A790 _sub_680A790
    asm("loc_680A790: push $_data_680E358;");
    asm("loc_680A795: call _sub_6805AA0;");
    asm("loc_680A79A: push $_data_680DA14;");
    asm("loc_680A79F: call _sub_6805AA0;");
    asm("loc_680A7A4: push $0x22;");
    asm("loc_680A7A6: push $_off_680DFC0;");
    asm("loc_680A7AB: call _sub_6805F70;");
    asm("loc_680A7B0: push $_data_680E350;");
    asm("loc_680A7B5: call _sub_68022B0;");
    asm("loc_680A7BA: push $_data_680E344;");
    asm("loc_680A7BF: call _sub_6801FB0;");
    asm("loc_680A7C4: add $0x18,%esp;");
    asm("loc_680A7C7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A7D0() // _sub_680A7D0
{
    __DEBUG_ASM(680A7D0);
    // chunk 0x680A7D0 _sub_680A7D0
    asm("loc_680A7D0: push %ebx;");
    asm("loc_680A7D1: push %esi;");
    asm("loc_680A7D2: push %edi;");
    asm("loc_680A7D3: xor %edi,%edi;");
    asm("loc_680A7D5: mov $_off_680E368,%esi;");
    asm("loc_680A7DA: mov (%esi),%eax;");
    asm("loc_680A7DC: push %eax;");
    asm("loc_680A7DD: lea 0x104(%edi),%ebx;");
    asm("loc_680A7E3: call _sub_6805A80;");
    asm("loc_680A7E8: add $4,%esp;");
    asm("loc_680A7EB: add $4,%esi;");
    asm("loc_680A7EE: inc %edi;");
    asm("loc_680A7EF: cmp $_off_680E3A8,%esi;");
    asm("loc_680A7F5: mov %ebx,4(%eax);");
    asm("loc_680A7F8: jb loc_680A7DA;");
    asm("loc_680A7FA: pop %edi;");
    asm("loc_680A7FB: pop %esi;");
    asm("loc_680A7FC: pop %ebx;");
    asm("loc_680A7FD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A800() // _sub_680A800
{
    __DEBUG_ASM(680A800);
    // chunk 0x680A800 _sub_680A800
    asm("loc_680A800: sub $0x50,%esp;");
    asm("loc_680A803: push %esi;");
    asm("loc_680A804: mov 0x58(%esp),%esi;");
    asm("loc_680A808: mov 0x18(%esi),%eax;");
    asm("loc_680A80B: mov 0x10(%eax),%ecx;");
    asm("loc_680A80E: push $0x50;");
    asm("loc_680A810: push %ecx;");
    asm("loc_680A811: lea 0xC(%esp),%edx;");
    asm("loc_680A815: push %edx;");
    asm("loc_680A816: call _sub_6805FE0;");
    asm("loc_680A81B: mov 0x6C(%esp),%eax;");
    asm("loc_680A81F: mov (%eax),%cl;");
    asm("loc_680A821: add $0xC,%esp;");
    asm("loc_680A824: test %cl,%cl;");
    asm("loc_680A826: jne loc_680A82D;");
    asm("loc_680A828: mov $_data_680E48C,%eax;");
    asm("loc_680A82D: mov 0x1C(%esi),%edx;");
    asm("loc_680A830: lea 4(%esp),%ecx;");
    asm("loc_680A834: push %ecx;");
    asm("loc_680A835: push %edx;");
    asm("loc_680A836: push %eax;");
    asm("loc_680A837: mov 0x68(%esp),%eax;");
    asm("loc_680A83B: push %eax;");
    asm("loc_680A83C: push $_data_680E454;");
    asm("loc_680A841: call _sub_6805FB0;");
    asm("loc_680A846: add $0x14,%esp;");
    asm("loc_680A849: pop %esi;");
    asm("loc_680A84A: add $0x50,%esp;");
    asm("loc_680A84D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A850() // _sub_680A850
{
    __DEBUG_ASM(680A850);
    // chunk 0x680A850 _sub_680A850
    asm("loc_680A850: push $0;");
    asm("loc_680A852: call _sub_680BBE0;");
    asm("loc_680A857: call _sub_680BC30;");
    asm("loc_680A85C: mov 8(%esp),%ecx;");
    asm("loc_680A860: push %eax;");
    asm("loc_680A861: mov 0x10(%esp),%eax;");
    asm("loc_680A865: push %eax;");
    asm("loc_680A866: push %ecx;");
    asm("loc_680A867: call _sub_680A800;");
    asm("loc_680A86C: add $0x10,%esp;");
    asm("loc_680A86F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A870() // _sub_680A870
{
    __DEBUG_ASM(680A870);
    // chunk 0x680A870 _sub_680A870
    asm("loc_680A870: mov 4(%esp),%ecx;");
    asm("loc_680A874: cmp $0xFF,%ecx;");
    asm("loc_680A87A: jge loc_680A887;");
    asm("loc_680A87C: mov 8(%esp),%eax;");
    asm("loc_680A880: mov %cl,(%eax);");
    asm("loc_680A882: movb $0,1(%eax);");
    asm("loc_680A886: ret;");
    asm("loc_680A887: push %esi;");
    asm("loc_680A888: push %edi;");
    asm("loc_680A889: mov _data_680DF40+0x18(,%ecx,4),%edi;");
    asm("loc_680A890: or $0xFFFFFFFF,%ecx;");
    asm("loc_680A893: xor %eax,%eax;");
    asm("loc_680A895: repne scas (%edi),%al;");
    asm("loc_680A897: not %ecx;");
    asm("loc_680A899: sub %ecx,%edi;");
    asm("loc_680A89B: mov %ecx,%eax;");
    asm("loc_680A89D: mov %edi,%esi;");
    asm("loc_680A89F: mov 0x10(%esp),%edi;");
    asm("loc_680A8A3: shr $2,%ecx;");
    asm("loc_680A8A6: rep movsl (%esi),(%edi);");
    asm("loc_680A8A8: mov %eax,%ecx;");
    asm("loc_680A8AA: and $3,%ecx;");
    asm("loc_680A8AD: rep movsb (%esi),(%edi);");
    asm("loc_680A8AF: pop %edi;");
    asm("loc_680A8B0: pop %esi;");
    asm("loc_680A8B1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A8C0() // _sub_680A8C0
{
    __DEBUG_ASM(680A8C0);
    // chunk 0x680A8C0 _sub_680A8C0
    asm("loc_680A8C0: mov 4(%esp),%eax;");
    asm("loc_680A8C4: mov 8(%esp),%edx;");
    asm("loc_680A8C8: xor %ecx,%ecx;");
    asm("loc_680A8CA: push %eax;");
    asm("loc_680A8CB: movl $0xA,(%eax);");
    asm("loc_680A8D1: mov %ecx,0x1C(%eax);");
    asm("loc_680A8D4: mov %ecx,0x20(%eax);");
    asm("loc_680A8D7: mov %ecx,0x2C(%eax);");
    asm("loc_680A8DA: movl $1,0x24(%eax);");
    asm("loc_680A8E1: mov %edx,0x18(%eax);");
    asm("loc_680A8E4: mov %ecx,8(%eax);");
    asm("loc_680A8E7: call _sub_680A900;");
    asm("loc_680A8EC: add $4,%esp;");
    asm("loc_680A8EF: jmp _sub_680BC20;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A900() // _sub_680A900
{
    __DEBUG_ASM(680A900);
    // chunk 0x680A900 _sub_680A900
    asm("loc_680A900: push %esi;");
    asm("loc_680A901: mov 8(%esp),%esi;");
    asm("loc_680A905: mov 0x18(%esi),%eax;");
    asm("loc_680A908: decl (%eax);");
    asm("loc_680A90A: mov 0x18(%esi),%ecx;");
    asm("loc_680A90D: cmpl $0,(%ecx);");
    asm("loc_680A910: jl loc_680A91F;");
    asm("loc_680A912: mov 4(%ecx),%edx;");
    asm("loc_680A915: xor %eax,%eax;");
    asm("loc_680A917: mov (%edx),%al;");
    asm("loc_680A919: inc %edx;");
    asm("loc_680A91A: mov %edx,4(%ecx);");
    asm("loc_680A91D: jmp loc_680A926;");
    asm("loc_680A91F: push %ecx;");
    asm("loc_680A920: calll *8(%ecx);");
    asm("loc_680A923: add $4,%esp;");
    asm("loc_680A926: cmp $0x23,%eax;");
    asm("loc_680A929: jne loc_680A956;");
    asm("loc_680A92B: mov 0x18(%esi),%eax;");
    asm("loc_680A92E: decl (%eax);");
    asm("loc_680A930: mov 0x18(%esi),%ecx;");
    asm("loc_680A933: cmpl $0,(%ecx);");
    asm("loc_680A936: jl loc_680A945;");
    asm("loc_680A938: mov 4(%ecx),%edx;");
    asm("loc_680A93B: xor %eax,%eax;");
    asm("loc_680A93D: mov (%edx),%al;");
    asm("loc_680A93F: inc %edx;");
    asm("loc_680A940: mov %edx,4(%ecx);");
    asm("loc_680A943: jmp loc_680A94C;");
    asm("loc_680A945: push %ecx;");
    asm("loc_680A946: calll *8(%ecx);");
    asm("loc_680A949: add $4,%esp;");
    asm("loc_680A94C: cmp $0xA,%eax;");
    asm("loc_680A94F: je loc_680A956;");
    asm("loc_680A951: cmp $0xFFFFFFFF,%eax;");
    asm("loc_680A954: jne loc_680A92B;");
    asm("loc_680A956: mov 0x18(%esi),%eax;");
    asm("loc_680A959: incl (%eax);");
    asm("loc_680A95B: mov 0x18(%esi),%esi;");
    asm("loc_680A95E: decl 4(%esi);");
    asm("loc_680A961: pop %esi;");
    asm("loc_680A962: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680A970() // _sub_680A970
{
    asm("jmp dgb_680A970;"); // jumptable skip
    asm(".long _jmp_680B3A4;"); // jumptable address
    __DEBUG_ASM(680A970);
    // chunk 0x680A970 _sub_680A970
    asm("loc_680A970: push %ebx;");
    asm("loc_680A971: push %ebp;");
    asm("loc_680A972: push %esi;");
    asm("loc_680A973: push %edi;");
    asm("loc_680A974: call _sub_680BC20;");
    asm("loc_680A979: mov 0x14(%esp),%esi;");
    asm("loc_680A97D: mov (%esi),%eax;");
    asm("loc_680A97F: lea 1(%eax),%ecx;");
    asm("loc_680A982: cmp $0x7F,%ecx;");
    asm("loc_680A985: ja loc_680AA40;");
    asm("loc_680A98B: xor %edx,%edx;");
    asm("loc_680A98D: mov _data_680B3D8(%ecx),%dl;");
    asm("loc_680A993: jmpl *_jmp_680B3A4(,%edx,4);");
    asm("loc_680A99A: mov 0x18(%esi),%eax;");
    asm("loc_680A99D: decl (%eax);");
    asm("loc_680A99F: mov 0x18(%esi),%ecx;");
    asm("loc_680A9A2: cmpl $0,(%ecx);");
    asm("loc_680A9A5: jl loc_680A9B6;");
    asm("loc_680A9A7: mov 4(%ecx),%edx;");
    asm("loc_680A9AA: xor %eax,%eax;");
    asm("loc_680A9AC: mov (%edx),%al;");
    asm("loc_680A9AE: inc %edx;");
    asm("loc_680A9AF: mov %edx,4(%ecx);");
    asm("loc_680A9B2: mov %eax,(%esi);");
    asm("loc_680A9B4: jmp loc_680AA32;");
    asm("loc_680A9B6: push %ecx;");
    asm("loc_680A9B7: calll *8(%ecx);");
    asm("loc_680A9BA: add $4,%esp;");
    asm("loc_680A9BD: mov %eax,(%esi);");
    asm("loc_680A9BF: jmp loc_680AA32;");
    asm("loc_680A9C1: push %esi;");
    asm("loc_680A9C2: call _sub_680B520;");
    asm("loc_680A9C7: add $4,%esp;");
    asm("loc_680A9CA: jmp loc_680AA32;");
    asm("loc_680A9CC: push %eax;");
    asm("loc_680A9CD: call _sub_680BBE0;");
    asm("loc_680A9D2: mov 0x18(%esi),%eax;");
    asm("loc_680A9D5: mov (%eax),%ecx;");
    asm("loc_680A9D7: add $4,%esp;");
    asm("loc_680A9DA: dec %ecx;");
    asm("loc_680A9DB: mov %ecx,(%eax);");
    asm("loc_680A9DD: mov 0x18(%esi),%ecx;");
    asm("loc_680A9E0: cmpl $0,(%ecx);");
    asm("loc_680A9E3: jl loc_680A9F2;");
    asm("loc_680A9E5: mov 4(%ecx),%edx;");
    asm("loc_680A9E8: xor %eax,%eax;");
    asm("loc_680A9EA: mov (%edx),%al;");
    asm("loc_680A9EC: inc %edx;");
    asm("loc_680A9ED: mov %edx,4(%ecx);");
    asm("loc_680A9F0: jmp loc_680A9F9;");
    asm("loc_680A9F2: push %ecx;");
    asm("loc_680A9F3: calll *8(%ecx);");
    asm("loc_680A9F6: add $4,%esp;");
    asm("loc_680A9F9: cmp $0x2D,%eax;");
    asm("loc_680A9FC: mov %eax,(%esi);");
    asm("loc_680A9FE: jne loc_680AA70;");
    asm("loc_680AA00: mov 0x18(%esi),%eax;");
    asm("loc_680AA03: decl (%eax);");
    asm("loc_680AA05: mov 0x18(%esi),%ecx;");
    asm("loc_680AA08: cmpl $0,(%ecx);");
    asm("loc_680AA0B: jl loc_680AA1A;");
    asm("loc_680AA0D: mov 4(%ecx),%edx;");
    asm("loc_680AA10: xor %eax,%eax;");
    asm("loc_680AA12: mov (%edx),%al;");
    asm("loc_680AA14: inc %edx;");
    asm("loc_680AA15: mov %edx,4(%ecx);");
    asm("loc_680AA18: jmp loc_680AA21;");
    asm("loc_680AA1A: push %ecx;");
    asm("loc_680AA1B: calll *8(%ecx);");
    asm("loc_680AA1E: add $4,%esp;");
    asm("loc_680AA21: cmp $0xA,%eax;");
    asm("loc_680AA24: mov %eax,(%esi);");
    asm("loc_680AA26: je loc_680AA2D;");
    asm("loc_680AA28: cmp $0xFFFFFFFF,%eax;");
    asm("loc_680AA2B: jne loc_680AA00;");
    asm("loc_680AA2D: call _sub_680BC20;");
    asm("loc_680AA32: mov (%esi),%eax;");
    asm("loc_680AA34: lea 1(%eax),%ecx;");
    asm("loc_680AA37: cmp $0x7F,%ecx;");
    asm("loc_680AA3A: jbe loc_680A98B;");
    asm("loc_680AA40: mov (%esi),%eax;");
    asm("loc_680AA42: cmp $0x5F,%eax;");
    asm("loc_680AA45: mov _import_680C05C,%ebp;");
    asm("loc_680AA4B: je loc_680B305;");
    asm("loc_680AA51: mov _import_680C058,%edx;");
    asm("loc_680AA57: cmpl $1,(%edx);");
    asm("loc_680AA5A: jle loc_680B27D;");
    asm("loc_680AA60: push $0x103;");
    asm("loc_680AA65: push %eax;");
    asm("loc_680AA66: call *%ebp;");
    asm("loc_680AA68: add $8,%esp;");
    asm("loc_680AA6B: jmp loc_680B28E;");
    asm("loc_680AA70: pop %edi;");
    asm("loc_680AA71: pop %esi;");
    asm("loc_680AA72: pop %ebp;");
    asm("loc_680AA73: mov $0x2D,%eax;");
    asm("loc_680AA78: pop %ebx;");
    asm("loc_680AA79: ret;");
    asm("loc_680AA7A: mov (%esi),%eax;");
    asm("loc_680AA7C: push %eax;");
    asm("loc_680AA7D: call _sub_680BBE0;");
    asm("loc_680AA82: mov 0x18(%esi),%eax;");
    asm("loc_680AA85: mov (%eax),%ecx;");
    asm("loc_680AA87: add $4,%esp;");
    asm("loc_680AA8A: dec %ecx;");
    asm("loc_680AA8B: mov %ecx,(%eax);");
    asm("loc_680AA8D: mov 0x18(%esi),%ecx;");
    asm("loc_680AA90: cmpl $0,(%ecx);");
    asm("loc_680AA93: jl loc_680AAA2;");
    asm("loc_680AA95: mov 4(%ecx),%edx;");
    asm("loc_680AA98: xor %eax,%eax;");
    asm("loc_680AA9A: mov (%edx),%al;");
    asm("loc_680AA9C: inc %edx;");
    asm("loc_680AA9D: mov %edx,4(%ecx);");
    asm("loc_680AAA0: jmp loc_680AAA9;");
    asm("loc_680AAA2: push %ecx;");
    asm("loc_680AAA3: calll *8(%ecx);");
    asm("loc_680AAA6: add $4,%esp;");
    asm("loc_680AAA9: cmp $0x5B,%eax;");
    asm("loc_680AAAC: mov %eax,(%esi);");
    asm("loc_680AAAE: je loc_680AABA;");
    asm("loc_680AAB0: pop %edi;");
    asm("loc_680AAB1: pop %esi;");
    asm("loc_680AAB2: pop %ebp;");
    asm("loc_680AAB3: mov $0x5B,%eax;");
    asm("loc_680AAB8: pop %ebx;");
    asm("loc_680AAB9: ret;");
    asm("loc_680AABA: push $0x5B;");
    asm("loc_680AABC: call _sub_680BBE0;");
    asm("loc_680AAC1: mov 0x18(%esi),%eax;");
    asm("loc_680AAC4: mov (%eax),%ecx;");
    asm("loc_680AAC6: add $4,%esp;");
    asm("loc_680AAC9: dec %ecx;");
    asm("loc_680AACA: mov %ecx,(%eax);");
    asm("loc_680AACC: mov 0x18(%esi),%ecx;");
    asm("loc_680AACF: cmpl $0,(%ecx);");
    asm("loc_680AAD2: jl loc_680AAEF;");
    asm("loc_680AAD4: mov 4(%ecx),%edx;");
    asm("loc_680AAD7: xor %eax,%eax;");
    asm("loc_680AAD9: mov (%edx),%al;");
    asm("loc_680AADB: inc %edx;");
    asm("loc_680AADC: mov %edx,4(%ecx);");
    asm("loc_680AADF: push %esi;");
    asm("loc_680AAE0: mov %eax,(%esi);");
    asm("loc_680AAE2: call _sub_680B970;");
    asm("loc_680AAE7: add $4,%esp;");
    asm("loc_680AAEA: pop %edi;");
    asm("loc_680AAEB: pop %esi;");
    asm("loc_680AAEC: pop %ebp;");
    asm("loc_680AAED: pop %ebx;");
    asm("loc_680AAEE: ret;");
    asm("loc_680AAEF: push %ecx;");
    asm("loc_680AAF0: calll *8(%ecx);");
    asm("loc_680AAF3: add $4,%esp;");
    asm("loc_680AAF6: push %esi;");
    asm("loc_680AAF7: mov %eax,(%esi);");
    asm("loc_680AAF9: call _sub_680B970;");
    asm("loc_680AAFE: add $4,%esp;");
    asm("loc_680AB01: pop %edi;");
    asm("loc_680AB02: pop %esi;");
    asm("loc_680AB03: pop %ebp;");
    asm("loc_680AB04: pop %ebx;");
    asm("loc_680AB05: ret;");
    asm("loc_680AB06: mov (%esi),%ecx;");
    asm("loc_680AB08: push %ecx;");
    asm("loc_680AB09: call _sub_680BBE0;");
    asm("loc_680AB0E: mov 0x18(%esi),%eax;");
    asm("loc_680AB11: mov (%eax),%ecx;");
    asm("loc_680AB13: add $4,%esp;");
    asm("loc_680AB16: dec %ecx;");
    asm("loc_680AB17: mov %ecx,(%eax);");
    asm("loc_680AB19: mov 0x18(%esi),%ecx;");
    asm("loc_680AB1C: cmpl $0,(%ecx);");
    asm("loc_680AB1F: jl loc_680AB2E;");
    asm("loc_680AB21: mov 4(%ecx),%edx;");
    asm("loc_680AB24: xor %eax,%eax;");
    asm("loc_680AB26: mov (%edx),%al;");
    asm("loc_680AB28: inc %edx;");
    asm("loc_680AB29: mov %edx,4(%ecx);");
    asm("loc_680AB2C: jmp loc_680AB35;");
    asm("loc_680AB2E: push %ecx;");
    asm("loc_680AB2F: calll *8(%ecx);");
    asm("loc_680AB32: add $4,%esp;");
    asm("loc_680AB35: cmp $0x3D,%eax;");
    asm("loc_680AB38: mov %eax,(%esi);");
    asm("loc_680AB3A: je loc_680AB46;");
    asm("loc_680AB3C: pop %edi;");
    asm("loc_680AB3D: pop %esi;");
    asm("loc_680AB3E: pop %ebp;");
    asm("loc_680AB3F: mov $0x3D,%eax;");
    asm("loc_680AB44: pop %ebx;");
    asm("loc_680AB45: ret;");
    asm("loc_680AB46: push $0x3D;");
    asm("loc_680AB48: call _sub_680BBE0;");
    asm("loc_680AB4D: mov 0x18(%esi),%eax;");
    asm("loc_680AB50: mov (%eax),%ecx;");
    asm("loc_680AB52: add $4,%esp;");
    asm("loc_680AB55: dec %ecx;");
    asm("loc_680AB56: mov %ecx,(%eax);");
    asm("loc_680AB58: mov 0x18(%esi),%ecx;");
    asm("loc_680AB5B: cmpl $0,(%ecx);");
    asm("loc_680AB5E: jl loc_680AB77;");
    asm("loc_680AB60: mov 4(%ecx),%edx;");
    asm("loc_680AB63: xor %eax,%eax;");
    asm("loc_680AB65: mov (%edx),%al;");
    asm("loc_680AB67: inc %edx;");
    asm("loc_680AB68: pop %edi;");
    asm("loc_680AB69: mov %edx,4(%ecx);");
    asm("loc_680AB6C: mov %eax,(%esi);");
    asm("loc_680AB6E: pop %esi;");
    asm("loc_680AB6F: pop %ebp;");
    asm("loc_680AB70: mov $0x117,%eax;");
    asm("loc_680AB75: pop %ebx;");
    asm("loc_680AB76: ret;");
    asm("loc_680AB77: push %ecx;");
    asm("loc_680AB78: calll *8(%ecx);");
    asm("loc_680AB7B: add $4,%esp;");
    asm("loc_680AB7E: pop %edi;");
    asm("loc_680AB7F: mov %eax,(%esi);");
    asm("loc_680AB81: pop %esi;");
    asm("loc_680AB82: pop %ebp;");
    asm("loc_680AB83: mov $0x117,%eax;");
    asm("loc_680AB88: pop %ebx;");
    asm("loc_680AB89: ret;");
    asm("loc_680AB8A: mov (%esi),%edx;");
    asm("loc_680AB8C: push %edx;");
    asm("loc_680AB8D: call _sub_680BBE0;");
    asm("loc_680AB92: mov 0x18(%esi),%eax;");
    asm("loc_680AB95: mov (%eax),%ecx;");
    asm("loc_680AB97: add $4,%esp;");
    asm("loc_680AB9A: dec %ecx;");
    asm("loc_680AB9B: mov %ecx,(%eax);");
    asm("loc_680AB9D: mov 0x18(%esi),%ecx;");
    asm("loc_680ABA0: cmpl $0,(%ecx);");
    asm("loc_680ABA3: jl loc_680ABB2;");
    asm("loc_680ABA5: mov 4(%ecx),%edx;");
    asm("loc_680ABA8: xor %eax,%eax;");
    asm("loc_680ABAA: mov (%edx),%al;");
    asm("loc_680ABAC: inc %edx;");
    asm("loc_680ABAD: mov %edx,4(%ecx);");
    asm("loc_680ABB0: jmp loc_680ABB9;");
    asm("loc_680ABB2: push %ecx;");
    asm("loc_680ABB3: calll *8(%ecx);");
    asm("loc_680ABB6: add $4,%esp;");
    asm("loc_680ABB9: cmp $0x3D,%eax;");
    asm("loc_680ABBC: mov %eax,(%esi);");
    asm("loc_680ABBE: je loc_680ABCA;");
    asm("loc_680ABC0: pop %edi;");
    asm("loc_680ABC1: pop %esi;");
    asm("loc_680ABC2: pop %ebp;");
    asm("loc_680ABC3: mov $0x3C,%eax;");
    asm("loc_680ABC8: pop %ebx;");
    asm("loc_680ABC9: ret;");
    asm("loc_680ABCA: push $0x3D;");
    asm("loc_680ABCC: call _sub_680BBE0;");
    asm("loc_680ABD1: mov 0x18(%esi),%eax;");
    asm("loc_680ABD4: mov (%eax),%ecx;");
    asm("loc_680ABD6: add $4,%esp;");
    asm("loc_680ABD9: dec %ecx;");
    asm("loc_680ABDA: mov %ecx,(%eax);");
    asm("loc_680ABDC: mov 0x18(%esi),%ecx;");
    asm("loc_680ABDF: cmpl $0,(%ecx);");
    asm("loc_680ABE2: jl loc_680ABFB;");
    asm("loc_680ABE4: mov 4(%ecx),%edx;");
    asm("loc_680ABE7: xor %eax,%eax;");
    asm("loc_680ABE9: mov (%edx),%al;");
    asm("loc_680ABEB: inc %edx;");
    asm("loc_680ABEC: pop %edi;");
    asm("loc_680ABED: mov %edx,4(%ecx);");
    asm("loc_680ABF0: mov %eax,(%esi);");
    asm("loc_680ABF2: pop %esi;");
    asm("loc_680ABF3: pop %ebp;");
    asm("loc_680ABF4: mov $0x119,%eax;");
    asm("loc_680ABF9: pop %ebx;");
    asm("loc_680ABFA: ret;");
    asm("loc_680ABFB: push %ecx;");
    asm("loc_680ABFC: calll *8(%ecx);");
    asm("loc_680ABFF: add $4,%esp;");
    asm("loc_680AC02: pop %edi;");
    asm("loc_680AC03: mov %eax,(%esi);");
    asm("loc_680AC05: pop %esi;");
    asm("loc_680AC06: pop %ebp;");
    asm("loc_680AC07: mov $0x119,%eax;");
    asm("loc_680AC0C: pop %ebx;");
    asm("loc_680AC0D: ret;");
    asm("loc_680AC0E: mov (%esi),%eax;");
    asm("loc_680AC10: push %eax;");
    asm("loc_680AC11: call _sub_680BBE0;");
    asm("loc_680AC16: mov 0x18(%esi),%eax;");
    asm("loc_680AC19: mov (%eax),%ecx;");
    asm("loc_680AC1B: add $4,%esp;");
    asm("loc_680AC1E: dec %ecx;");
    asm("loc_680AC1F: mov %ecx,(%eax);");
    asm("loc_680AC21: mov 0x18(%esi),%ecx;");
    asm("loc_680AC24: cmpl $0,(%ecx);");
    asm("loc_680AC27: jl loc_680AC36;");
    asm("loc_680AC29: mov 4(%ecx),%edx;");
    asm("loc_680AC2C: xor %eax,%eax;");
    asm("loc_680AC2E: mov (%edx),%al;");
    asm("loc_680AC30: inc %edx;");
    asm("loc_680AC31: mov %edx,4(%ecx);");
    asm("loc_680AC34: jmp loc_680AC3D;");
    asm("loc_680AC36: push %ecx;");
    asm("loc_680AC37: calll *8(%ecx);");
    asm("loc_680AC3A: add $4,%esp;");
    asm("loc_680AC3D: cmp $0x3D,%eax;");
    asm("loc_680AC40: mov %eax,(%esi);");
    asm("loc_680AC42: je loc_680AC4E;");
    asm("loc_680AC44: pop %edi;");
    asm("loc_680AC45: pop %esi;");
    asm("loc_680AC46: pop %ebp;");
    asm("loc_680AC47: mov $0x3E,%eax;");
    asm("loc_680AC4C: pop %ebx;");
    asm("loc_680AC4D: ret;");
    asm("loc_680AC4E: push $0x3D;");
    asm("loc_680AC50: call _sub_680BBE0;");
    asm("loc_680AC55: mov 0x18(%esi),%eax;");
    asm("loc_680AC58: mov (%eax),%ecx;");
    asm("loc_680AC5A: add $4,%esp;");
    asm("loc_680AC5D: dec %ecx;");
    asm("loc_680AC5E: mov %ecx,(%eax);");
    asm("loc_680AC60: mov 0x18(%esi),%ecx;");
    asm("loc_680AC63: cmpl $0,(%ecx);");
    asm("loc_680AC66: jl loc_680AC7F;");
    asm("loc_680AC68: mov 4(%ecx),%edx;");
    asm("loc_680AC6B: xor %eax,%eax;");
    asm("loc_680AC6D: mov (%edx),%al;");
    asm("loc_680AC6F: inc %edx;");
    asm("loc_680AC70: pop %edi;");
    asm("loc_680AC71: mov %edx,4(%ecx);");
    asm("loc_680AC74: mov %eax,(%esi);");
    asm("loc_680AC76: pop %esi;");
    asm("loc_680AC77: pop %ebp;");
    asm("loc_680AC78: mov $0x118,%eax;");
    asm("loc_680AC7D: pop %ebx;");
    asm("loc_680AC7E: ret;");
    asm("loc_680AC7F: push %ecx;");
    asm("loc_680AC80: calll *8(%ecx);");
    asm("loc_680AC83: add $4,%esp;");
    asm("loc_680AC86: pop %edi;");
    asm("loc_680AC87: mov %eax,(%esi);");
    asm("loc_680AC89: pop %esi;");
    asm("loc_680AC8A: pop %ebp;");
    asm("loc_680AC8B: mov $0x118,%eax;");
    asm("loc_680AC90: pop %ebx;");
    asm("loc_680AC91: ret;");
    asm("loc_680AC92: mov (%esi),%ecx;");
    asm("loc_680AC94: push %ecx;");
    asm("loc_680AC95: call _sub_680BBE0;");
    asm("loc_680AC9A: mov 0x18(%esi),%eax;");
    asm("loc_680AC9D: mov (%eax),%ecx;");
    asm("loc_680AC9F: add $4,%esp;");
    asm("loc_680ACA2: dec %ecx;");
    asm("loc_680ACA3: mov %ecx,(%eax);");
    asm("loc_680ACA5: mov 0x18(%esi),%ecx;");
    asm("loc_680ACA8: cmpl $0,(%ecx);");
    asm("loc_680ACAB: jl loc_680ACBA;");
    asm("loc_680ACAD: mov 4(%ecx),%edx;");
    asm("loc_680ACB0: xor %eax,%eax;");
    asm("loc_680ACB2: mov (%edx),%al;");
    asm("loc_680ACB4: inc %edx;");
    asm("loc_680ACB5: mov %edx,4(%ecx);");
    asm("loc_680ACB8: jmp loc_680ACC1;");
    asm("loc_680ACBA: push %ecx;");
    asm("loc_680ACBB: calll *8(%ecx);");
    asm("loc_680ACBE: add $4,%esp;");
    asm("loc_680ACC1: cmp $0x3D,%eax;");
    asm("loc_680ACC4: mov %eax,(%esi);");
    asm("loc_680ACC6: je loc_680ACD2;");
    asm("loc_680ACC8: pop %edi;");
    asm("loc_680ACC9: pop %esi;");
    asm("loc_680ACCA: pop %ebp;");
    asm("loc_680ACCB: mov $0x7E,%eax;");
    asm("loc_680ACD0: pop %ebx;");
    asm("loc_680ACD1: ret;");
    asm("loc_680ACD2: push $0x3D;");
    asm("loc_680ACD4: call _sub_680BBE0;");
    asm("loc_680ACD9: mov 0x18(%esi),%eax;");
    asm("loc_680ACDC: mov (%eax),%ecx;");
    asm("loc_680ACDE: add $4,%esp;");
    asm("loc_680ACE1: dec %ecx;");
    asm("loc_680ACE2: mov %ecx,(%eax);");
    asm("loc_680ACE4: mov 0x18(%esi),%ecx;");
    asm("loc_680ACE7: cmpl $0,(%ecx);");
    asm("loc_680ACEA: jl loc_680AD03;");
    asm("loc_680ACEC: mov 4(%ecx),%edx;");
    asm("loc_680ACEF: xor %eax,%eax;");
    asm("loc_680ACF1: mov (%edx),%al;");
    asm("loc_680ACF3: inc %edx;");
    asm("loc_680ACF4: pop %edi;");
    asm("loc_680ACF5: mov %edx,4(%ecx);");
    asm("loc_680ACF8: mov %eax,(%esi);");
    asm("loc_680ACFA: pop %esi;");
    asm("loc_680ACFB: pop %ebp;");
    asm("loc_680ACFC: mov $0x11A,%eax;");
    asm("loc_680AD01: pop %ebx;");
    asm("loc_680AD02: ret;");
    asm("loc_680AD03: push %ecx;");
    asm("loc_680AD04: calll *8(%ecx);");
    asm("loc_680AD07: add $4,%esp;");
    asm("loc_680AD0A: pop %edi;");
    asm("loc_680AD0B: mov %eax,(%esi);");
    asm("loc_680AD0D: pop %esi;");
    asm("loc_680AD0E: pop %ebp;");
    asm("loc_680AD0F: mov $0x11A,%eax;");
    asm("loc_680AD14: pop %ebx;");
    asm("loc_680AD15: ret;");
    asm("loc_680AD16: mov (%esi),%eax;");
    asm("loc_680AD18: mov %eax,%edi;");
    asm("loc_680AD1A: push %eax;");
    asm("loc_680AD1B: mov %edi,0x18(%esp);");
    asm("loc_680AD1F: call _sub_680BBE0;");
    asm("loc_680AD24: mov 0x18(%esi),%eax;");
    asm("loc_680AD27: mov (%eax),%ecx;");
    asm("loc_680AD29: add $4,%esp;");
    asm("loc_680AD2C: dec %ecx;");
    asm("loc_680AD2D: mov %ecx,(%eax);");
    asm("loc_680AD2F: mov 0x18(%esi),%ecx;");
    asm("loc_680AD32: cmpl $0,(%ecx);");
    asm("loc_680AD35: jl loc_680AD44;");
    asm("loc_680AD37: mov 4(%ecx),%edx;");
    asm("loc_680AD3A: xor %eax,%eax;");
    asm("loc_680AD3C: mov (%edx),%al;");
    asm("loc_680AD3E: inc %edx;");
    asm("loc_680AD3F: mov %edx,4(%ecx);");
    asm("loc_680AD42: jmp loc_680AD4B;");
    asm("loc_680AD44: push %ecx;");
    asm("loc_680AD45: calll *8(%ecx);");
    asm("loc_680AD48: add $4,%esp;");
    asm("loc_680AD4B: cmp %edi,%eax;");
    asm("loc_680AD4D: mov %eax,(%esi);");
    asm("loc_680AD4F: je loc_680AED6;");
    asm("loc_680AD55: mov _import_680C05C,%ebx;");
    asm("loc_680AD5B: mov (%esi),%eax;");
    asm("loc_680AD5D: cmp $0xFFFFFFFF,%eax;");
    asm("loc_680AD60: je loc_680AEFE;");
    asm("loc_680AD66: cmp $0xA,%eax;");
    asm("loc_680AD69: je loc_680AEFE;");
    asm("loc_680AD6F: cmp $0x5C,%eax;");
    asm("loc_680AD72: je loc_680AD77;");
    asm("loc_680AD74: push %eax;");
    asm("loc_680AD75: jmp loc_680ADCB;");
    asm("loc_680AD77: mov 0x18(%esi),%eax;");
    asm("loc_680AD7A: decl (%eax);");
    asm("loc_680AD7C: mov 0x18(%esi),%ecx;");
    asm("loc_680AD7F: cmpl $0,(%ecx);");
    asm("loc_680AD82: jl loc_680AD91;");
    asm("loc_680AD84: mov 4(%ecx),%edx;");
    asm("loc_680AD87: xor %eax,%eax;");
    asm("loc_680AD89: mov (%edx),%al;");
    asm("loc_680AD8B: inc %edx;");
    asm("loc_680AD8C: mov %edx,4(%ecx);");
    asm("loc_680AD8F: jmp loc_680AD98;");
    asm("loc_680AD91: push %ecx;");
    asm("loc_680AD92: calll *8(%ecx);");
    asm("loc_680AD95: add $4,%esp;");
    asm("loc_680AD98: lea -0xA(%eax),%ecx;");
    asm("loc_680AD9B: cmp $0x6C,%ecx;");
    asm("loc_680AD9E: mov %eax,(%esi);");
    asm("loc_680ADA0: ja loc_680AE0C;");
    asm("loc_680ADA2: xor %edx,%edx;");
    asm("loc_680ADA4: mov _data_680B47C(%ecx),%dl;");
    asm("loc_680ADAA: jmpl *_jmp_680B458(,%edx,4);");
    asm("loc_680ADB1: push $7;");
    asm("loc_680ADB3: jmp loc_680ADCB;");
    asm("loc_680ADB5: push $8;");
    asm("loc_680ADB7: jmp loc_680ADCB;");
    asm("loc_680ADB9: push $0xC;");
    asm("loc_680ADBB: jmp loc_680ADCB;");
    asm("loc_680ADBD: push $0xA;");
    asm("loc_680ADBF: jmp loc_680ADCB;");
    asm("loc_680ADC1: push $0xD;");
    asm("loc_680ADC3: jmp loc_680ADCB;");
    asm("loc_680ADC5: push $9;");
    asm("loc_680ADC7: jmp loc_680ADCB;");
    asm("loc_680ADC9: push $0xB;");
    asm("loc_680ADCB: call _sub_680BBE0;");
    asm("loc_680ADD0: mov 0x18(%esi),%eax;");
    asm("loc_680ADD3: mov (%eax),%ecx;");
    asm("loc_680ADD5: add $4,%esp;");
    asm("loc_680ADD8: dec %ecx;");
    asm("loc_680ADD9: mov %ecx,(%eax);");
    asm("loc_680ADDB: mov 0x18(%esi),%ecx;");
    asm("loc_680ADDE: cmpl $0,(%ecx);");
    asm("loc_680ADE1: jl loc_680AEC1;");
    asm("loc_680ADE7: mov 4(%ecx),%edx;");
    asm("loc_680ADEA: xor %eax,%eax;");
    asm("loc_680ADEC: mov (%edx),%al;");
    asm("loc_680ADEE: inc %edx;");
    asm("loc_680ADEF: mov %edx,4(%ecx);");
    asm("loc_680ADF2: jmp loc_680AEC8;");
    asm("loc_680ADF7: push $0xA;");
    asm("loc_680ADF9: call _sub_680BBE0;");
    asm("loc_680ADFE: push %esi;");
    asm("loc_680ADFF: call _sub_680B520;");
    asm("loc_680AE04: add $8,%esp;");
    asm("loc_680AE07: jmp loc_680AECA;");
    asm("loc_680AE0C: mov _import_680C058,%ecx;");
    asm("loc_680AE12: cmpl $1,(%ecx);");
    asm("loc_680AE15: jle loc_680AE21;");
    asm("loc_680AE17: push $4;");
    asm("loc_680AE19: push %eax;");
    asm("loc_680AE1A: call *%ebx;");
    asm("loc_680AE1C: add $8,%esp;");
    asm("loc_680AE1F: jmp loc_680AE2F;");
    asm("loc_680AE21: mov _import_680C054,%edx;");
    asm("loc_680AE27: mov (%edx),%ecx;");
    asm("loc_680AE29: mov (%ecx,%eax,2),%al;");
    asm("loc_680AE2C: and $4,%eax;");
    asm("loc_680AE2F: test %eax,%eax;");
    asm("loc_680AE31: je loc_680AEB9;");
    asm("loc_680AE37: xor %edi,%edi;");
    asm("loc_680AE39: xor %ebp,%ebp;");
    asm("loc_680AE3B: mov (%esi),%eax;");
    asm("loc_680AE3D: lea (%edi,%edi,4),%edx;");
    asm("loc_680AE40: lea -0x30(%eax,%edx,2),%edi;");
    asm("loc_680AE44: mov 0x18(%esi),%eax;");
    asm("loc_680AE47: decl (%eax);");
    asm("loc_680AE49: mov 0x18(%esi),%ecx;");
    asm("loc_680AE4C: cmpl $0,(%ecx);");
    asm("loc_680AE4F: jl loc_680AE5E;");
    asm("loc_680AE51: mov 4(%ecx),%edx;");
    asm("loc_680AE54: xor %eax,%eax;");
    asm("loc_680AE56: mov (%edx),%al;");
    asm("loc_680AE58: inc %edx;");
    asm("loc_680AE59: mov %edx,4(%ecx);");
    asm("loc_680AE5C: jmp loc_680AE65;");
    asm("loc_680AE5E: push %ecx;");
    asm("loc_680AE5F: calll *8(%ecx);");
    asm("loc_680AE62: add $4,%esp;");
    asm("loc_680AE65: inc %ebp;");
    asm("loc_680AE66: cmp $3,%ebp;");
    asm("loc_680AE69: mov %eax,(%esi);");
    asm("loc_680AE6B: jge loc_680AE94;");
    asm("loc_680AE6D: mov _import_680C058,%ecx;");
    asm("loc_680AE73: cmpl $1,(%ecx);");
    asm("loc_680AE76: jle loc_680AE82;");
    asm("loc_680AE78: push $4;");
    asm("loc_680AE7A: push %eax;");
    asm("loc_680AE7B: call *%ebx;");
    asm("loc_680AE7D: add $8,%esp;");
    asm("loc_680AE80: jmp loc_680AE90;");
    asm("loc_680AE82: mov _import_680C054,%edx;");
    asm("loc_680AE88: mov (%edx),%ecx;");
    asm("loc_680AE8A: mov (%ecx,%eax,2),%al;");
    asm("loc_680AE8D: and $4,%eax;");
    asm("loc_680AE90: test %eax,%eax;");
    asm("loc_680AE92: jne loc_680AE3B;");
    asm("loc_680AE94: mov %edi,%edx;");
    asm("loc_680AE96: and $0xFF,%edx;");
    asm("loc_680AE9C: cmp %edx,%edi;");
    asm("loc_680AE9E: je loc_680AEAE;");
    asm("loc_680AEA0: push $_data_680E510;");
    asm("loc_680AEA5: push %esi;");
    asm("loc_680AEA6: call _sub_680A850;");
    asm("loc_680AEAB: add $8,%esp;");
    asm("loc_680AEAE: push %edi;");
    asm("loc_680AEAF: call _sub_680BBE0;");
    asm("loc_680AEB4: add $4,%esp;");
    asm("loc_680AEB7: jmp loc_680AECA;");
    asm("loc_680AEB9: mov (%esi),%eax;");
    asm("loc_680AEBB: push %eax;");
    asm("loc_680AEBC: jmp loc_680ADCB;");
    asm("loc_680AEC1: push %ecx;");
    asm("loc_680AEC2: calll *8(%ecx);");
    asm("loc_680AEC5: add $4,%esp;");
    asm("loc_680AEC8: mov %eax,(%esi);");
    asm("loc_680AECA: mov 0x14(%esp),%ecx;");
    asm("loc_680AECE: cmp %ecx,(%esi);");
    asm("loc_680AED0: jne loc_680AD5B;");
    asm("loc_680AED6: mov (%esi),%edx;");
    asm("loc_680AED8: push %edx;");
    asm("loc_680AED9: call _sub_680BBE0;");
    asm("loc_680AEDE: mov 0x18(%esi),%eax;");
    asm("loc_680AEE1: mov (%eax),%ecx;");
    asm("loc_680AEE3: add $4,%esp;");
    asm("loc_680AEE6: dec %ecx;");
    asm("loc_680AEE7: mov %ecx,(%eax);");
    asm("loc_680AEE9: mov 0x18(%esi),%ecx;");
    asm("loc_680AEEC: cmpl $0,(%ecx);");
    asm("loc_680AEEF: jl loc_680AF16;");
    asm("loc_680AEF1: mov 4(%ecx),%edx;");
    asm("loc_680AEF4: xor %eax,%eax;");
    asm("loc_680AEF6: mov (%edx),%al;");
    asm("loc_680AEF8: inc %edx;");
    asm("loc_680AEF9: mov %edx,4(%ecx);");
    asm("loc_680AEFC: jmp loc_680AF1D;");
    asm("loc_680AEFE: push $_data_680E4FC;");
    asm("loc_680AF03: push %esi;");
    asm("loc_680AF04: call _sub_680A850;");
    asm("loc_680AF09: add $8,%esp;");
    asm("loc_680AF0C: pop %edi;");
    asm("loc_680AF0D: pop %esi;");
    asm("loc_680AF0E: pop %ebp;");
    asm("loc_680AF0F: mov $0x11D,%eax;");
    asm("loc_680AF14: pop %ebx;");
    asm("loc_680AF15: ret;");
    asm("loc_680AF16: push %ecx;");
    asm("loc_680AF17: calll *8(%ecx);");
    asm("loc_680AF1A: add $4,%esp;");
    asm("loc_680AF1D: mov %eax,(%esi);");
    asm("loc_680AF1F: mov _data_680E604,%eax;");
    asm("loc_680AF24: mov 0x20(%eax),%ecx;");
    asm("loc_680AF27: mov 0x28(%eax),%edx;");
    asm("loc_680AF2A: mov 0x1C(%eax),%eax;");
    asm("loc_680AF2D: sub %ecx,%edx;");
    asm("loc_680AF2F: sub $2,%edx;");
    asm("loc_680AF32: push %edx;");
    asm("loc_680AF33: lea 1(%eax,%ecx),%ecx;");
    asm("loc_680AF37: push %ecx;");
    asm("loc_680AF38: call _sub_68058A0;");
    asm("loc_680AF3D: add $8,%esp;");
    asm("loc_680AF40: pop %edi;");
    asm("loc_680AF41: mov %eax,0x10(%esi);");
    asm("loc_680AF44: pop %esi;");
    asm("loc_680AF45: pop %ebp;");
    asm("loc_680AF46: mov $0x11C,%eax;");
    asm("loc_680AF4B: pop %ebx;");
    asm("loc_680AF4C: ret;");
    asm("loc_680AF4D: mov (%esi),%edx;");
    asm("loc_680AF4F: push %edx;");
    asm("loc_680AF50: call _sub_680BBE0;");
    asm("loc_680AF55: mov 0x18(%esi),%eax;");
    asm("loc_680AF58: mov (%eax),%ecx;");
    asm("loc_680AF5A: add $4,%esp;");
    asm("loc_680AF5D: dec %ecx;");
    asm("loc_680AF5E: mov %ecx,(%eax);");
    asm("loc_680AF60: mov 0x18(%esi),%ecx;");
    asm("loc_680AF63: cmpl $0,(%ecx);");
    asm("loc_680AF66: jl loc_680AF75;");
    asm("loc_680AF68: mov 4(%ecx),%edx;");
    asm("loc_680AF6B: xor %eax,%eax;");
    asm("loc_680AF6D: mov (%edx),%al;");
    asm("loc_680AF6F: inc %edx;");
    asm("loc_680AF70: mov %edx,4(%ecx);");
    asm("loc_680AF73: jmp loc_680AF7C;");
    asm("loc_680AF75: push %ecx;");
    asm("loc_680AF76: calll *8(%ecx);");
    asm("loc_680AF79: add $4,%esp;");
    asm("loc_680AF7C: cmp $0x2E,%eax;");
    asm("loc_680AF7F: mov %eax,(%esi);");
    asm("loc_680AF81: jne loc_680B008;");
    asm("loc_680AF87: push %eax;");
    asm("loc_680AF88: call _sub_680BBE0;");
    asm("loc_680AF8D: mov 0x18(%esi),%eax;");
    asm("loc_680AF90: mov (%eax),%ecx;");
    asm("loc_680AF92: add $4,%esp;");
    asm("loc_680AF95: dec %ecx;");
    asm("loc_680AF96: mov %ecx,(%eax);");
    asm("loc_680AF98: mov 0x18(%esi),%ecx;");
    asm("loc_680AF9B: cmpl $0,(%ecx);");
    asm("loc_680AF9E: jl loc_680AFAD;");
    asm("loc_680AFA0: mov 4(%ecx),%edx;");
    asm("loc_680AFA3: xor %eax,%eax;");
    asm("loc_680AFA5: mov (%edx),%al;");
    asm("loc_680AFA7: inc %edx;");
    asm("loc_680AFA8: mov %edx,4(%ecx);");
    asm("loc_680AFAB: jmp loc_680AFB4;");
    asm("loc_680AFAD: push %ecx;");
    asm("loc_680AFAE: calll *8(%ecx);");
    asm("loc_680AFB1: add $4,%esp;");
    asm("loc_680AFB4: cmp $0x2E,%eax;");
    asm("loc_680AFB7: mov %eax,(%esi);");
    asm("loc_680AFB9: jne loc_680AFFE;");
    asm("loc_680AFBB: push %eax;");
    asm("loc_680AFBC: call _sub_680BBE0;");
    asm("loc_680AFC1: mov 0x18(%esi),%eax;");
    asm("loc_680AFC4: mov (%eax),%ecx;");
    asm("loc_680AFC6: add $4,%esp;");
    asm("loc_680AFC9: dec %ecx;");
    asm("loc_680AFCA: mov %ecx,(%eax);");
    asm("loc_680AFCC: mov 0x18(%esi),%ecx;");
    asm("loc_680AFCF: cmpl $0,(%ecx);");
    asm("loc_680AFD2: jl loc_680AFEB;");
    asm("loc_680AFD4: mov 4(%ecx),%edx;");
    asm("loc_680AFD7: xor %eax,%eax;");
    asm("loc_680AFD9: mov (%edx),%al;");
    asm("loc_680AFDB: inc %edx;");
    asm("loc_680AFDC: pop %edi;");
    asm("loc_680AFDD: mov %edx,4(%ecx);");
    asm("loc_680AFE0: mov %eax,(%esi);");
    asm("loc_680AFE2: pop %esi;");
    asm("loc_680AFE3: pop %ebp;");
    asm("loc_680AFE4: mov $0x116,%eax;");
    asm("loc_680AFE9: pop %ebx;");
    asm("loc_680AFEA: ret;");
    asm("loc_680AFEB: push %ecx;");
    asm("loc_680AFEC: calll *8(%ecx);");
    asm("loc_680AFEF: add $4,%esp;");
    asm("loc_680AFF2: pop %edi;");
    asm("loc_680AFF3: mov %eax,(%esi);");
    asm("loc_680AFF5: pop %esi;");
    asm("loc_680AFF6: pop %ebp;");
    asm("loc_680AFF7: mov $0x116,%eax;");
    asm("loc_680AFFC: pop %ebx;");
    asm("loc_680AFFD: ret;");
    asm("loc_680AFFE: pop %edi;");
    asm("loc_680AFFF: pop %esi;");
    asm("loc_680B000: pop %ebp;");
    asm("loc_680B001: mov $0x115,%eax;");
    asm("loc_680B006: pop %ebx;");
    asm("loc_680B007: ret;");
    asm("loc_680B008: mov _import_680C058,%ecx;");
    asm("loc_680B00E: cmpl $1,(%ecx);");
    asm("loc_680B011: mov _import_680C05C,%edi;");
    asm("loc_680B017: jle loc_680B023;");
    asm("loc_680B019: push $4;");
    asm("loc_680B01B: push %eax;");
    asm("loc_680B01C: call *%edi;");
    asm("loc_680B01E: add $8,%esp;");
    asm("loc_680B021: jmp loc_680B031;");
    asm("loc_680B023: mov _import_680C054,%edx;");
    asm("loc_680B029: mov (%edx),%ecx;");
    asm("loc_680B02B: mov (%ecx,%eax,2),%al;");
    asm("loc_680B02E: and $4,%eax;");
    asm("loc_680B031: test %eax,%eax;");
    asm("loc_680B033: jne loc_680B0EF;");
    asm("loc_680B039: pop %edi;");
    asm("loc_680B03A: pop %esi;");
    asm("loc_680B03B: pop %ebp;");
    asm("loc_680B03C: mov $0x2E,%eax;");
    asm("loc_680B041: pop %ebx;");
    asm("loc_680B042: ret;");
    asm("loc_680B043: mov _import_680C05C,%edi;");
    asm("loc_680B049: mov (%esi),%edx;");
    asm("loc_680B04B: push %edx;");
    asm("loc_680B04C: call _sub_680BBE0;");
    asm("loc_680B051: mov 0x18(%esi),%eax;");
    asm("loc_680B054: mov (%eax),%ecx;");
    asm("loc_680B056: add $4,%esp;");
    asm("loc_680B059: dec %ecx;");
    asm("loc_680B05A: mov %ecx,(%eax);");
    asm("loc_680B05C: mov 0x18(%esi),%ecx;");
    asm("loc_680B05F: cmpl $0,(%ecx);");
    asm("loc_680B062: jl loc_680B071;");
    asm("loc_680B064: mov 4(%ecx),%edx;");
    asm("loc_680B067: xor %eax,%eax;");
    asm("loc_680B069: mov (%edx),%al;");
    asm("loc_680B06B: inc %edx;");
    asm("loc_680B06C: mov %edx,4(%ecx);");
    asm("loc_680B06F: jmp loc_680B078;");
    asm("loc_680B071: push %ecx;");
    asm("loc_680B072: calll *8(%ecx);");
    asm("loc_680B075: add $4,%esp;");
    asm("loc_680B078: mov %eax,(%esi);");
    asm("loc_680B07A: mov _import_680C058,%ecx;");
    asm("loc_680B080: cmpl $1,(%ecx);");
    asm("loc_680B083: jle loc_680B08F;");
    asm("loc_680B085: push $4;");
    asm("loc_680B087: push %eax;");
    asm("loc_680B088: call *%edi;");
    asm("loc_680B08A: add $8,%esp;");
    asm("loc_680B08D: jmp loc_680B09D;");
    asm("loc_680B08F: mov _import_680C054,%edx;");
    asm("loc_680B095: mov (%edx),%ecx;");
    asm("loc_680B097: mov (%ecx,%eax,2),%al;");
    asm("loc_680B09A: and $4,%eax;");
    asm("loc_680B09D: test %eax,%eax;");
    asm("loc_680B09F: jne loc_680B049;");
    asm("loc_680B0A1: cmpl $0x2E,(%esi);");
    asm("loc_680B0A4: jne loc_680B0EF;");
    asm("loc_680B0A6: push $0x2E;");
    asm("loc_680B0A8: call _sub_680BBE0;");
    asm("loc_680B0AD: mov 0x18(%esi),%eax;");
    asm("loc_680B0B0: mov (%eax),%ecx;");
    asm("loc_680B0B2: add $4,%esp;");
    asm("loc_680B0B5: dec %ecx;");
    asm("loc_680B0B6: mov %ecx,(%eax);");
    asm("loc_680B0B8: mov 0x18(%esi),%ecx;");
    asm("loc_680B0BB: cmpl $0,(%ecx);");
    asm("loc_680B0BE: jl loc_680B0CD;");
    asm("loc_680B0C0: mov 4(%ecx),%edx;");
    asm("loc_680B0C3: xor %eax,%eax;");
    asm("loc_680B0C5: mov (%edx),%al;");
    asm("loc_680B0C7: inc %edx;");
    asm("loc_680B0C8: mov %edx,4(%ecx);");
    asm("loc_680B0CB: jmp loc_680B0D4;");
    asm("loc_680B0CD: push %ecx;");
    asm("loc_680B0CE: calll *8(%ecx);");
    asm("loc_680B0D1: add $4,%esp;");
    asm("loc_680B0D4: cmp $0x2E,%eax;");
    asm("loc_680B0D7: mov %eax,(%esi);");
    asm("loc_680B0D9: jne loc_680B0EF;");
    asm("loc_680B0DB: push %eax;");
    asm("loc_680B0DC: call _sub_680BBE0;");
    asm("loc_680B0E1: push $_data_680E4C4;");
    asm("loc_680B0E6: push %esi;");
    asm("loc_680B0E7: call _sub_680A850;");
    asm("loc_680B0EC: add $0xC,%esp;");
    asm("loc_680B0EF: mov _import_680C058,%edx;");
    asm("loc_680B0F5: cmpl $1,(%edx);");
    asm("loc_680B0F8: jle loc_680B106;");
    asm("loc_680B0FA: mov (%esi),%eax;");
    asm("loc_680B0FC: push $4;");
    asm("loc_680B0FE: push %eax;");
    asm("loc_680B0FF: call *%edi;");
    asm("loc_680B101: add $8,%esp;");
    asm("loc_680B104: jmp loc_680B118;");
    asm("loc_680B106: mov _import_680C054,%edx;");
    asm("loc_680B10C: mov (%esi),%ecx;");
    asm("loc_680B10E: xor %eax,%eax;");
    asm("loc_680B110: mov (%edx),%eax;");
    asm("loc_680B112: mov (%eax,%ecx,2),%al;");
    asm("loc_680B115: and $4,%eax;");
    asm("loc_680B118: test %eax,%eax;");
    asm("loc_680B11A: je loc_680B151;");
    asm("loc_680B11C: mov (%esi),%ecx;");
    asm("loc_680B11E: push %ecx;");
    asm("loc_680B11F: call _sub_680BBE0;");
    asm("loc_680B124: mov 0x18(%esi),%eax;");
    asm("loc_680B127: mov (%eax),%ecx;");
    asm("loc_680B129: add $4,%esp;");
    asm("loc_680B12C: dec %ecx;");
    asm("loc_680B12D: mov %ecx,(%eax);");
    asm("loc_680B12F: mov 0x18(%esi),%ecx;");
    asm("loc_680B132: cmpl $0,(%ecx);");
    asm("loc_680B135: jl loc_680B146;");
    asm("loc_680B137: mov 4(%ecx),%edx;");
    asm("loc_680B13A: xor %eax,%eax;");
    asm("loc_680B13C: mov (%edx),%al;");
    asm("loc_680B13E: inc %edx;");
    asm("loc_680B13F: mov %edx,4(%ecx);");
    asm("loc_680B142: mov %eax,(%esi);");
    asm("loc_680B144: jmp loc_680B0EF;");
    asm("loc_680B146: push %ecx;");
    asm("loc_680B147: calll *8(%ecx);");
    asm("loc_680B14A: add $4,%esp;");
    asm("loc_680B14D: mov %eax,(%esi);");
    asm("loc_680B14F: jmp loc_680B0EF;");
    asm("loc_680B151: mov (%esi),%edx;");
    asm("loc_680B153: push %edx;");
    asm("loc_680B154: calll *_import_680C074;");
    asm("loc_680B15A: add $4,%esp;");
    asm("loc_680B15D: cmp $0x45,%eax;");
    asm("loc_680B160: jne loc_680B21B;");
    asm("loc_680B166: mov (%esi),%eax;");
    asm("loc_680B168: push %eax;");
    asm("loc_680B169: call _sub_680BBE0;");
    asm("loc_680B16E: mov 0x18(%esi),%eax;");
    asm("loc_680B171: mov (%eax),%ecx;");
    asm("loc_680B173: add $4,%esp;");
    asm("loc_680B176: dec %ecx;");
    asm("loc_680B177: mov %ecx,(%eax);");
    asm("loc_680B179: mov 0x18(%esi),%ecx;");
    asm("loc_680B17C: cmpl $0,(%ecx);");
    asm("loc_680B17F: jl loc_680B18E;");
    asm("loc_680B181: mov 4(%ecx),%edx;");
    asm("loc_680B184: xor %eax,%eax;");
    asm("loc_680B186: mov (%edx),%al;");
    asm("loc_680B188: inc %edx;");
    asm("loc_680B189: mov %edx,4(%ecx);");
    asm("loc_680B18C: jmp loc_680B195;");
    asm("loc_680B18E: push %ecx;");
    asm("loc_680B18F: calll *8(%ecx);");
    asm("loc_680B192: add $4,%esp;");
    asm("loc_680B195: push %eax;");
    asm("loc_680B196: mov %eax,(%esi);");
    asm("loc_680B198: call _sub_680BBE0;");
    asm("loc_680B19D: mov 0x18(%esi),%eax;");
    asm("loc_680B1A0: mov (%eax),%ecx;");
    asm("loc_680B1A2: add $4,%esp;");
    asm("loc_680B1A5: dec %ecx;");
    asm("loc_680B1A6: mov %ecx,(%eax);");
    asm("loc_680B1A8: mov 0x18(%esi),%ecx;");
    asm("loc_680B1AB: cmpl $0,(%ecx);");
    asm("loc_680B1AE: jl loc_680B1BD;");
    asm("loc_680B1B0: mov 4(%ecx),%edx;");
    asm("loc_680B1B3: xor %eax,%eax;");
    asm("loc_680B1B5: mov (%edx),%al;");
    asm("loc_680B1B7: inc %edx;");
    asm("loc_680B1B8: mov %edx,4(%ecx);");
    asm("loc_680B1BB: jmp loc_680B1C4;");
    asm("loc_680B1BD: push %ecx;");
    asm("loc_680B1BE: calll *8(%ecx);");
    asm("loc_680B1C1: add $4,%esp;");
    asm("loc_680B1C4: mov %eax,(%esi);");
    asm("loc_680B1C6: mov _import_680C058,%ecx;");
    asm("loc_680B1CC: cmpl $1,(%ecx);");
    asm("loc_680B1CF: jle loc_680B1DD;");
    asm("loc_680B1D1: mov (%esi),%edx;");
    asm("loc_680B1D3: push $4;");
    asm("loc_680B1D5: push %edx;");
    asm("loc_680B1D6: call *%edi;");
    asm("loc_680B1D8: add $8,%esp;");
    asm("loc_680B1DB: jmp loc_680B1EF;");
    asm("loc_680B1DD: mov _import_680C054,%ecx;");
    asm("loc_680B1E3: mov (%ecx),%edx;");
    asm("loc_680B1E5: xor %eax,%eax;");
    asm("loc_680B1E7: mov (%esi),%eax;");
    asm("loc_680B1E9: mov (%edx,%eax,2),%al;");
    asm("loc_680B1EC: and $4,%eax;");
    asm("loc_680B1EF: test %eax,%eax;");
    asm("loc_680B1F1: je loc_680B21B;");
    asm("loc_680B1F3: mov (%esi),%eax;");
    asm("loc_680B1F5: push %eax;");
    asm("loc_680B1F6: call _sub_680BBE0;");
    asm("loc_680B1FB: mov 0x18(%esi),%eax;");
    asm("loc_680B1FE: mov (%eax),%ecx;");
    asm("loc_680B200: add $4,%esp;");
    asm("loc_680B203: dec %ecx;");
    asm("loc_680B204: mov %ecx,(%eax);");
    asm("loc_680B206: mov 0x18(%esi),%ecx;");
    asm("loc_680B209: cmpl $0,(%ecx);");
    asm("loc_680B20C: jl loc_680B1BD;");
    asm("loc_680B20E: mov 4(%ecx),%edx;");
    asm("loc_680B211: xor %eax,%eax;");
    asm("loc_680B213: mov (%edx),%al;");
    asm("loc_680B215: inc %edx;");
    asm("loc_680B216: mov %edx,4(%ecx);");
    asm("loc_680B219: jmp loc_680B1C4;");
    asm("loc_680B21B: push $0;");
    asm("loc_680B21D: call _sub_680BBE0;");
    asm("loc_680B222: mov _data_680E604,%eax;");
    asm("loc_680B227: mov 0x20(%eax),%ecx;");
    asm("loc_680B22A: add 0x1C(%eax),%ecx;");
    asm("loc_680B22D: push %ecx;");
    asm("loc_680B22E: call _sub_68061C0;");
    asm("loc_680B233: fstl 0x10(%esi);");
    asm("loc_680B236: fcompl _data_680C180;");
    asm("loc_680B23C: add $8,%esp;");
    asm("loc_680B23F: fnstsw %ax;");
    asm("loc_680B241: test $1,%ah;");
    asm("loc_680B244: je loc_680B254;");
    asm("loc_680B246: push $_data_680E4AC;");
    asm("loc_680B24B: push %esi;");
    asm("loc_680B24C: call _sub_680A850;");
    asm("loc_680B251: add $8,%esp;");
    asm("loc_680B254: pop %edi;");
    asm("loc_680B255: pop %esi;");
    asm("loc_680B256: pop %ebp;");
    asm("loc_680B257: mov $0x11B,%eax;");
    asm("loc_680B25C: pop %ebx;");
    asm("loc_680B25D: ret;");
    asm("loc_680B25E: mov 0x20(%esi),%eax;");
    asm("loc_680B261: test %eax,%eax;");
    asm("loc_680B263: jle loc_680B273;");
    asm("loc_680B265: push $_data_680E494;");
    asm("loc_680B26A: push %esi;");
    asm("loc_680B26B: call _sub_680A850;");
    asm("loc_680B270: add $8,%esp;");
    asm("loc_680B273: pop %edi;");
    asm("loc_680B274: pop %esi;");
    asm("loc_680B275: pop %ebp;");
    asm("loc_680B276: mov $0x11D,%eax;");
    asm("loc_680B27B: pop %ebx;");
    asm("loc_680B27C: ret;");
    asm("loc_680B27D: mov _import_680C054,%ecx;");
    asm("loc_680B283: mov (%ecx),%edx;");
    asm("loc_680B285: mov (%edx,%eax,2),%ax;");
    asm("loc_680B289: and $0x103,%eax;");
    asm("loc_680B28E: test %eax,%eax;");
    asm("loc_680B290: jne loc_680B305;");
    asm("loc_680B292: mov _import_680C058,%eax;");
    asm("loc_680B297: cmpl $1,(%eax);");
    asm("loc_680B29A: mov (%esi),%edi;");
    asm("loc_680B29C: jle loc_680B2A8;");
    asm("loc_680B29E: push $0x20;");
    asm("loc_680B2A0: push %edi;");
    asm("loc_680B2A1: call *%ebp;");
    asm("loc_680B2A3: add $8,%esp;");
    asm("loc_680B2A6: jmp loc_680B2B8;");
    asm("loc_680B2A8: mov _import_680C054,%ecx;");
    asm("loc_680B2AE: mov (%ecx),%edx;");
    asm("loc_680B2B0: xor %eax,%eax;");
    asm("loc_680B2B2: mov (%edx,%edi,2),%al;");
    asm("loc_680B2B5: and $0x20,%eax;");
    asm("loc_680B2B8: test %eax,%eax;");
    asm("loc_680B2BA: je loc_680B2C6;");
    asm("loc_680B2BC: push %edi;");
    asm("loc_680B2BD: push %esi;");
    asm("loc_680B2BE: call _sub_680B4F0;");
    asm("loc_680B2C3: add $8,%esp;");
    asm("loc_680B2C6: mov (%esi),%eax;");
    asm("loc_680B2C8: push %eax;");
    asm("loc_680B2C9: call _sub_680BBE0;");
    asm("loc_680B2CE: mov 0x18(%esi),%eax;");
    asm("loc_680B2D1: mov (%eax),%ecx;");
    asm("loc_680B2D3: add $4,%esp;");
    asm("loc_680B2D6: dec %ecx;");
    asm("loc_680B2D7: mov %ecx,(%eax);");
    asm("loc_680B2D9: mov 0x18(%esi),%ecx;");
    asm("loc_680B2DC: cmpl $0,(%ecx);");
    asm("loc_680B2DF: jl loc_680B2F5;");
    asm("loc_680B2E1: mov 4(%ecx),%edx;");
    asm("loc_680B2E4: xor %eax,%eax;");
    asm("loc_680B2E6: mov (%edx),%al;");
    asm("loc_680B2E8: inc %edx;");
    asm("loc_680B2E9: mov %edx,4(%ecx);");
    asm("loc_680B2EC: mov %eax,(%esi);");
    asm("loc_680B2EE: mov %edi,%eax;");
    asm("loc_680B2F0: pop %edi;");
    asm("loc_680B2F1: pop %esi;");
    asm("loc_680B2F2: pop %ebp;");
    asm("loc_680B2F3: pop %ebx;");
    asm("loc_680B2F4: ret;");
    asm("loc_680B2F5: push %ecx;");
    asm("loc_680B2F6: calll *8(%ecx);");
    asm("loc_680B2F9: add $4,%esp;");
    asm("loc_680B2FC: mov %eax,(%esi);");
    asm("loc_680B2FE: mov %edi,%eax;");
    asm("loc_680B300: pop %edi;");
    asm("loc_680B301: pop %esi;");
    asm("loc_680B302: pop %ebp;");
    asm("loc_680B303: pop %ebx;");
    asm("loc_680B304: ret;");
    asm("loc_680B305: mov (%esi),%ecx;");
    asm("loc_680B307: push %ecx;");
    asm("loc_680B308: call _sub_680BBE0;");
    asm("loc_680B30D: mov 0x18(%esi),%eax;");
    asm("loc_680B310: mov (%eax),%ecx;");
    asm("loc_680B312: add $4,%esp;");
    asm("loc_680B315: dec %ecx;");
    asm("loc_680B316: mov %ecx,(%eax);");
    asm("loc_680B318: mov 0x18(%esi),%ecx;");
    asm("loc_680B31B: cmpl $0,(%ecx);");
    asm("loc_680B31E: jl loc_680B32D;");
    asm("loc_680B320: mov 4(%ecx),%edx;");
    asm("loc_680B323: xor %eax,%eax;");
    asm("loc_680B325: mov (%edx),%al;");
    asm("loc_680B327: inc %edx;");
    asm("loc_680B328: mov %edx,4(%ecx);");
    asm("loc_680B32B: jmp loc_680B334;");
    asm("loc_680B32D: push %ecx;");
    asm("loc_680B32E: calll *8(%ecx);");
    asm("loc_680B331: add $4,%esp;");
    asm("loc_680B334: mov %eax,(%esi);");
    asm("loc_680B336: mov _import_680C058,%edx;");
    asm("loc_680B33C: cmpl $1,(%edx);");
    asm("loc_680B33F: jle loc_680B34E;");
    asm("loc_680B341: push $0x107;");
    asm("loc_680B346: push %eax;");
    asm("loc_680B347: call *%ebp;");
    asm("loc_680B349: add $8,%esp;");
    asm("loc_680B34C: jmp loc_680B35F;");
    asm("loc_680B34E: mov _import_680C054,%ecx;");
    asm("loc_680B354: mov (%ecx),%edx;");
    asm("loc_680B356: mov (%edx,%eax,2),%ax;");
    asm("loc_680B35A: and $0x107,%eax;");
    asm("loc_680B35F: test %eax,%eax;");
    asm("loc_680B361: jne loc_680B305;");
    asm("loc_680B363: cmpl $0x5F,(%esi);");
    asm("loc_680B366: je loc_680B305;");
    asm("loc_680B368: push $0;");
    asm("loc_680B36A: call _sub_680BBE0;");
    asm("loc_680B36F: mov _data_680E604,%eax;");
    asm("loc_680B374: mov 0x20(%eax),%ecx;");
    asm("loc_680B377: add 0x1C(%eax),%ecx;");
    asm("loc_680B37A: push %ecx;");
    asm("loc_680B37B: call _sub_6805A80;");
    asm("loc_680B380: mov 4(%eax),%ecx;");
    asm("loc_680B383: add $8,%esp;");
    asm("loc_680B386: cmp $0x104,%ecx;");
    asm("loc_680B38C: jl loc_680B395;");
    asm("loc_680B38E: pop %edi;");
    asm("loc_680B38F: pop %esi;");
    asm("loc_680B390: pop %ebp;");
    asm("loc_680B391: mov %ecx,%eax;");
    asm("loc_680B393: pop %ebx;");
    asm("loc_680B394: ret;");
    asm("loc_680B395: pop %edi;");
    asm("loc_680B396: mov %eax,0x10(%esi);");
    asm("loc_680B399: pop %esi;");
    asm("loc_680B39A: pop %ebp;");
    asm("loc_680B39B: mov $0x114,%eax;");
    asm("loc_680B3A0: pop %ebx;");
    asm("loc_680B3A1: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_680B3A4: .long loc_680B25E;");
    asm(".long loc_680A99A;");
    asm(".long loc_680A9C1;");
    asm(".long loc_680AD16;");
    asm(".long loc_680A9CC;");
    asm(".long loc_680AF4D;");
    asm(".long loc_680B043;");
    asm(".long loc_680AB8A;");
    asm(".long loc_680AB06;");
    asm(".long loc_680AC0E;");
    asm(".long loc_680AA7A;");
    asm(".long loc_680AC92;");
    asm(".long loc_680AA40;");
    asm("_jmp_680B458: .long loc_680ADF7;");
    asm(".long loc_680ADB1;");
    asm(".long loc_680ADB5;");
    asm(".long loc_680ADB9;");
    asm(".long loc_680ADBD;");
    asm(".long loc_680ADC1;");
    asm(".long loc_680ADC5;");
    asm(".long loc_680ADC9;");
    asm(".long loc_680AE0C;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_680A970);
_naked _weak void _sub_680B4F0() // _sub_680B4F0
{
    __DEBUG_ASM(680B4F0);
    // chunk 0x680B4F0 _sub_680B4F0
    asm("loc_680B4F0: mov 8(%esp),%eax;");
    asm("loc_680B4F4: sub $8,%esp;");
    asm("loc_680B4F7: push %eax;");
    asm("loc_680B4F8: lea 4(%esp),%ecx;");
    asm("loc_680B4FC: push $_data_680E544;");
    asm("loc_680B501: push %ecx;");
    asm("loc_680B502: calll *_import_680C060;");
    asm("loc_680B508: mov 0x18(%esp),%eax;");
    asm("loc_680B50C: lea 0xC(%esp),%edx;");
    asm("loc_680B510: push %edx;");
    asm("loc_680B511: push $_data_680E52C;");
    asm("loc_680B516: push %eax;");
    asm("loc_680B517: call _sub_680A800;");
    asm("loc_680B51C: add $0x20,%esp;");
    asm("loc_680B51F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680B520() // _sub_680B520
{
    asm("jmp dgb_680B520;"); // jumptable skip
    asm(".long _jmp_680B774;"); // jumptable address
    __DEBUG_ASM(680B520);
    // chunk 0x680B520 _sub_680B520
    asm("loc_680B520: sub $0x54,%esp;");
    asm("loc_680B523: push %esi;");
    asm("loc_680B524: mov 0x5C(%esp),%esi;");
    asm("loc_680B528: mov 0x18(%esi),%eax;");
    asm("loc_680B52B: decl (%eax);");
    asm("loc_680B52D: mov 0x18(%esi),%ecx;");
    asm("loc_680B530: cmpl $0,(%ecx);");
    asm("loc_680B533: jl loc_680B542;");
    asm("loc_680B535: mov 4(%ecx),%edx;");
    asm("loc_680B538: xor %eax,%eax;");
    asm("loc_680B53A: mov (%edx),%al;");
    asm("loc_680B53C: inc %edx;");
    asm("loc_680B53D: mov %edx,4(%ecx);");
    asm("loc_680B540: jmp loc_680B549;");
    asm("loc_680B542: push %ecx;");
    asm("loc_680B543: calll *8(%ecx);");
    asm("loc_680B546: add $4,%esp;");
    asm("loc_680B549: mov 0x1C(%esi),%edx;");
    asm("loc_680B54C: inc %edx;");
    asm("loc_680B54D: cmp $0x24,%eax;");
    asm("loc_680B550: mov %eax,(%esi);");
    asm("loc_680B552: mov %edx,0x1C(%esi);");
    asm("loc_680B555: jne loc_680B76E;");
    asm("loc_680B55B: mov 0x20(%esi),%eax;");
    asm("loc_680B55E: push %ebp;");
    asm("loc_680B55F: lea (%eax,%eax,2),%eax;");
    asm("loc_680B562: push %edi;");
    asm("loc_680B563: mov 0x2C(%esi,%eax,4),%edi;");
    asm("loc_680B567: mov 0x18(%esi),%eax;");
    asm("loc_680B56A: mov (%eax),%ecx;");
    asm("loc_680B56C: xor %ebp,%ebp;");
    asm("loc_680B56E: dec %ecx;");
    asm("loc_680B56F: mov %ecx,(%eax);");
    asm("loc_680B571: mov 0x18(%esi),%ecx;");
    asm("loc_680B574: cmpl $0,(%ecx);");
    asm("loc_680B577: jl loc_680B586;");
    asm("loc_680B579: mov 4(%ecx),%edx;");
    asm("loc_680B57C: xor %eax,%eax;");
    asm("loc_680B57E: mov (%edx),%al;");
    asm("loc_680B580: inc %edx;");
    asm("loc_680B581: mov %edx,4(%ecx);");
    asm("loc_680B584: jmp loc_680B58D;");
    asm("loc_680B586: push %ecx;");
    asm("loc_680B587: calll *8(%ecx);");
    asm("loc_680B58A: add $4,%esp;");
    asm("loc_680B58D: lea 0xC(%esp),%ecx;");
    asm("loc_680B591: push %ecx;");
    asm("loc_680B592: push %esi;");
    asm("loc_680B593: mov %eax,(%esi);");
    asm("loc_680B595: call _sub_680B850;");
    asm("loc_680B59A: lea 0x14(%esp),%edx;");
    asm("loc_680B59E: push $_off_680E3B4;");
    asm("loc_680B5A3: push %edx;");
    asm("loc_680B5A4: call _sub_6805D20;");
    asm("loc_680B5A9: add $0x10,%esp;");
    asm("loc_680B5AC: cmp $6,%eax;");
    asm("loc_680B5AF: ja loc_680B711;");
    asm("loc_680B5B5: jmpl *_jmp_680B774(,%eax,4);");
    asm("loc_680B5BC: test %edi,%edi;");
    asm("loc_680B5BE: jne loc_680B724;");
    asm("loc_680B5C4: mov _data_680E604,%eax;");
    asm("loc_680B5C9: movl $1,0x34(%eax);");
    asm("loc_680B5D0: jmp loc_680B724;");
    asm("loc_680B5D5: test %edi,%edi;");
    asm("loc_680B5D7: jne loc_680B724;");
    asm("loc_680B5DD: mov _data_680E604,%ecx;");
    asm("loc_680B5E3: mov %edi,0x34(%ecx);");
    asm("loc_680B5E6: jmp loc_680B724;");
    asm("loc_680B5EB: test %edi,%edi;");
    asm("loc_680B5ED: jne loc_680B724;");
    asm("loc_680B5F3: movl $0xFFFFFFFF,(%esi);");
    asm("loc_680B5F9: mov %edi,0x20(%esi);");
    asm("loc_680B5FC: jmp loc_680B724;");
    asm("loc_680B601: mov 0x20(%esi),%eax;");
    asm("loc_680B604: test %eax,%eax;");
    asm("loc_680B606: lea -1(%eax),%edx;");
    asm("loc_680B609: mov %edx,0x20(%esi);");
    asm("loc_680B60C: jne loc_680B724;");
    asm("loc_680B612: push $_data_680E5B8;");
    asm("loc_680B617: push $_data_680E5A8;");
    asm("loc_680B61C: jmp loc_680B71B;");
    asm("loc_680B621: mov $1,%ebp;");
    asm("loc_680B626: cmpl $4,0x20(%esi);");
    asm("loc_680B62A: jne loc_680B63F;");
    asm("loc_680B62C: push $_data_680E5A4;");
    asm("loc_680B631: push $_data_680E58C;");
    asm("loc_680B636: push %esi;");
    asm("loc_680B637: call _sub_680A800;");
    asm("loc_680B63C: add $0xC,%esp;");
    asm("loc_680B63F: lea 0xC(%esp),%eax;");
    asm("loc_680B643: push %eax;");
    asm("loc_680B644: push %esi;");
    asm("loc_680B645: call _sub_680B850;");
    asm("loc_680B64A: mov 0x20(%esi),%edx;");
    asm("loc_680B64D: inc %edx;");
    asm("loc_680B64E: mov %edx,0x20(%esi);");
    asm("loc_680B651: mov %edx,%eax;");
    asm("loc_680B653: lea 0x14(%esp),%edx;");
    asm("loc_680B657: push %edx;");
    asm("loc_680B658: lea 9(%eax,%eax,2),%ecx;");
    asm("loc_680B65C: push %esi;");
    asm("loc_680B65D: movl $0,(%esi,%ecx,4);");
    asm("loc_680B664: call _sub_680B7D0;");
    asm("loc_680B669: add $0x10,%esp;");
    asm("loc_680B66C: test %eax,%eax;");
    asm("loc_680B66E: je loc_680B679;");
    asm("loc_680B670: xor %ecx,%ecx;");
    asm("loc_680B672: test %ebp,%ebp;");
    asm("loc_680B674: sete %cl;");
    asm("loc_680B677: jmp loc_680B67B;");
    asm("loc_680B679: mov %ebp,%ecx;");
    asm("loc_680B67B: test %edi,%edi;");
    asm("loc_680B67D: mov 0x20(%esi),%eax;");
    asm("loc_680B680: lea (%eax,%eax,2),%eax;");
    asm("loc_680B683: mov %ecx,0x28(%esi,%eax,4);");
    asm("loc_680B687: jne loc_680B6A5;");
    asm("loc_680B689: mov 0x20(%esi),%eax;");
    asm("loc_680B68C: lea (%eax,%eax,2),%ecx;");
    asm("loc_680B68F: mov 0x28(%esi,%ecx,4),%eax;");
    asm("loc_680B693: test %eax,%eax;");
    asm("loc_680B695: je loc_680B6A5;");
    asm("loc_680B697: mov 0x20(%esi),%eax;");
    asm("loc_680B69A: xor %ecx,%ecx;");
    asm("loc_680B69C: lea (%eax,%eax,2),%edx;");
    asm("loc_680B69F: mov %ecx,0x2C(%esi,%edx,4);");
    asm("loc_680B6A3: jmp loc_680B724;");
    asm("loc_680B6A5: mov 0x20(%esi),%eax;");
    asm("loc_680B6A8: mov $1,%ecx;");
    asm("loc_680B6AD: lea (%eax,%eax,2),%edx;");
    asm("loc_680B6B0: mov %ecx,0x2C(%esi,%edx,4);");
    asm("loc_680B6B4: jmp loc_680B724;");
    asm("loc_680B6B6: mov 0x20(%esi),%eax;");
    asm("loc_680B6B9: add $3,%eax;");
    asm("loc_680B6BC: lea (%eax,%eax,2),%eax;");
    asm("loc_680B6BF: cmpl $0,(%esi,%eax,4);");
    asm("loc_680B6C3: je loc_680B6D8;");
    asm("loc_680B6C5: push $_data_680E584;");
    asm("loc_680B6CA: push $_data_680E574;");
    asm("loc_680B6CF: push %esi;");
    asm("loc_680B6D0: call _sub_680A800;");
    asm("loc_680B6D5: add $0xC,%esp;");
    asm("loc_680B6D8: mov 0x20(%esi),%eax;");
    asm("loc_680B6DB: add $3,%eax;");
    asm("loc_680B6DE: lea (%eax,%eax,2),%ecx;");
    asm("loc_680B6E1: movl $1,(%esi,%ecx,4);");
    asm("loc_680B6E8: mov 0x20(%esi),%eax;");
    asm("loc_680B6EB: lea (%eax,%eax,2),%edx;");
    asm("loc_680B6EE: mov 0x20(%esi,%edx,4),%ecx;");
    asm("loc_680B6F2: test %ecx,%ecx;");
    asm("loc_680B6F4: lea (%esi,%edx,4),%eax;");
    asm("loc_680B6F7: jne loc_680B707;");
    asm("loc_680B6F9: mov 0x28(%eax),%ecx;");
    asm("loc_680B6FC: test %ecx,%ecx;");
    asm("loc_680B6FE: jne loc_680B707;");
    asm("loc_680B700: xor %ecx,%ecx;");
    asm("loc_680B702: mov %ecx,0x2C(%eax);");
    asm("loc_680B705: jmp loc_680B724;");
    asm("loc_680B707: mov $1,%ecx;");
    asm("loc_680B70C: mov %ecx,0x2C(%eax);");
    asm("loc_680B70F: jmp loc_680B724;");
    asm("loc_680B711: lea 0xC(%esp),%eax;");
    asm("loc_680B715: push %eax;");
    asm("loc_680B716: push $_data_680E564;");
    asm("loc_680B71B: push %esi;");
    asm("loc_680B71C: call _sub_680A800;");
    asm("loc_680B721: add $0xC,%esp;");
    asm("loc_680B724: push %esi;");
    asm("loc_680B725: call _sub_680B790;");
    asm("loc_680B72A: mov (%esi),%eax;");
    asm("loc_680B72C: add $4,%esp;");
    asm("loc_680B72F: cmp $0xA,%eax;");
    asm("loc_680B732: pop %edi;");
    asm("loc_680B733: pop %ebp;");
    asm("loc_680B734: jne loc_680B74D;");
    asm("loc_680B736: push %esi;");
    asm("loc_680B737: call _sub_680B520;");
    asm("loc_680B73C: add $4,%esp;");
    asm("loc_680B73F: push %esi;");
    asm("loc_680B740: call _sub_680B900;");
    asm("loc_680B745: add $4,%esp;");
    asm("loc_680B748: pop %esi;");
    asm("loc_680B749: add $0x54,%esp;");
    asm("loc_680B74C: ret;");
    asm("loc_680B74D: cmp $0xFFFFFFFF,%eax;");
    asm("loc_680B750: je loc_680B765;");
    asm("loc_680B752: lea 4(%esp),%ecx;");
    asm("loc_680B756: push %ecx;");
    asm("loc_680B757: push $_data_680E54C;");
    asm("loc_680B75C: push %esi;");
    asm("loc_680B75D: call _sub_680A800;");
    asm("loc_680B762: add $0xC,%esp;");
    asm("loc_680B765: push %esi;");
    asm("loc_680B766: call _sub_680B900;");
    asm("loc_680B76B: add $4,%esp;");
    asm("loc_680B76E: pop %esi;");
    asm("loc_680B76F: add $0x54,%esp;");
    asm("loc_680B772: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_680B774: .long loc_680B5BC;");
    asm(".long loc_680B5D5;");
    asm(".long loc_680B5EB;");
    asm(".long loc_680B601;");
    asm(".long loc_680B621;");
    asm(".long loc_680B626;");
    asm(".long loc_680B6B6;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_680B520);
_naked _weak void _sub_680B790() // _sub_680B790
{
    __DEBUG_ASM(680B790);
    // chunk 0x680B790 _sub_680B790
    asm("loc_680B790: push %esi;");
    asm("loc_680B791: mov 8(%esp),%esi;");
    asm("loc_680B795: mov (%esi),%eax;");
    asm("loc_680B797: cmp $0x20,%eax;");
    asm("loc_680B79A: je loc_680B7A6;");
    asm("loc_680B79C: cmp $9,%eax;");
    asm("loc_680B79F: je loc_680B7A6;");
    asm("loc_680B7A1: cmp $0xD,%eax;");
    asm("loc_680B7A4: jne loc_680B7CD;");
    asm("loc_680B7A6: mov 0x18(%esi),%eax;");
    asm("loc_680B7A9: decl (%eax);");
    asm("loc_680B7AB: mov 0x18(%esi),%ecx;");
    asm("loc_680B7AE: cmpl $0,(%ecx);");
    asm("loc_680B7B1: jl loc_680B7C2;");
    asm("loc_680B7B3: mov 4(%ecx),%edx;");
    asm("loc_680B7B6: xor %eax,%eax;");
    asm("loc_680B7B8: mov (%edx),%al;");
    asm("loc_680B7BA: inc %edx;");
    asm("loc_680B7BB: mov %edx,4(%ecx);");
    asm("loc_680B7BE: mov %eax,(%esi);");
    asm("loc_680B7C0: jmp loc_680B795;");
    asm("loc_680B7C2: push %ecx;");
    asm("loc_680B7C3: calll *8(%ecx);");
    asm("loc_680B7C6: add $4,%esp;");
    asm("loc_680B7C9: mov %eax,(%esi);");
    asm("loc_680B7CB: jmp loc_680B795;");
    asm("loc_680B7CD: pop %esi;");
    asm("loc_680B7CE: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680B7D0() // _sub_680B7D0
{
    __DEBUG_ASM(680B7D0);
    // chunk 0x680B7D0 _sub_680B7D0
    asm("loc_680B7D0: push %esi;");
    asm("loc_680B7D1: mov 0xC(%esp),%esi;");
    asm("loc_680B7D5: push $_off_680E3A8;");
    asm("loc_680B7DA: push %esi;");
    asm("loc_680B7DB: call _sub_6805D20;");
    asm("loc_680B7E0: add $8,%esp;");
    asm("loc_680B7E3: test %eax,%eax;");
    asm("loc_680B7E5: jge loc_680B845;");
    asm("loc_680B7E7: mov _import_680C058,%eax;");
    asm("loc_680B7EC: cmpl $1,(%eax);");
    asm("loc_680B7EF: jle loc_680B806;");
    asm("loc_680B7F1: xor %ecx,%ecx;");
    asm("loc_680B7F3: mov (%esi),%cl;");
    asm("loc_680B7F5: push $0x103;");
    asm("loc_680B7FA: push %ecx;");
    asm("loc_680B7FB: calll *_import_680C05C;");
    asm("loc_680B801: add $8,%esp;");
    asm("loc_680B804: jmp loc_680B81C;");
    asm("loc_680B806: mov _import_680C054,%eax;");
    asm("loc_680B80B: mov (%eax),%ecx;");
    asm("loc_680B80D: xor %edx,%edx;");
    asm("loc_680B80F: mov (%esi),%dl;");
    asm("loc_680B811: xor %eax,%eax;");
    asm("loc_680B813: mov (%ecx,%edx,2),%ax;");
    asm("loc_680B817: and $0x103,%eax;");
    asm("loc_680B81C: test %eax,%eax;");
    asm("loc_680B81E: jne loc_680B83C;");
    asm("loc_680B820: cmpb $0x5F,(%esi);");
    asm("loc_680B823: je loc_680B83C;");
    asm("loc_680B825: mov 8(%esp),%edx;");
    asm("loc_680B829: push %esi;");
    asm("loc_680B82A: push $_data_680E5C0;");
    asm("loc_680B82F: push %edx;");
    asm("loc_680B830: call _sub_680A800;");
    asm("loc_680B835: add $0xC,%esp;");
    asm("loc_680B838: xor %eax,%eax;");
    asm("loc_680B83A: pop %esi;");
    asm("loc_680B83B: ret;");
    asm("loc_680B83C: push %esi;");
    asm("loc_680B83D: call _sub_6805D00;");
    asm("loc_680B842: add $4,%esp;");
    asm("loc_680B845: pop %esi;");
    asm("loc_680B846: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680B850() // _sub_680B850
{
    __DEBUG_ASM(680B850);
    // chunk 0x680B850 _sub_680B850
    asm("loc_680B850: push %ebp;");
    asm("loc_680B851: push %esi;");
    asm("loc_680B852: mov 0xC(%esp),%esi;");
    asm("loc_680B856: push %edi;");
    asm("loc_680B857: push %esi;");
    asm("loc_680B858: xor %ebp,%ebp;");
    asm("loc_680B85A: call _sub_680B790;");
    asm("loc_680B85F: mov 0x18(%esp),%edi;");
    asm("loc_680B863: add $4,%esp;");
    asm("loc_680B866: mov _import_680C058,%eax;");
    asm("loc_680B86B: cmpl $1,(%eax);");
    asm("loc_680B86E: jle loc_680B883;");
    asm("loc_680B870: mov (%esi),%ecx;");
    asm("loc_680B872: push $0x107;");
    asm("loc_680B877: push %ecx;");
    asm("loc_680B878: calll *_import_680C05C;");
    asm("loc_680B87E: add $8,%esp;");
    asm("loc_680B881: jmp loc_680B897;");
    asm("loc_680B883: mov _import_680C054,%eax;");
    asm("loc_680B888: mov (%eax),%ecx;");
    asm("loc_680B88A: mov (%esi),%edx;");
    asm("loc_680B88C: xor %eax,%eax;");
    asm("loc_680B88E: mov (%ecx,%edx,2),%ax;");
    asm("loc_680B892: and $0x107,%eax;");
    asm("loc_680B897: test %eax,%eax;");
    asm("loc_680B899: jne loc_680B8A0;");
    asm("loc_680B89B: cmpl $0x5F,(%esi);");
    asm("loc_680B89E: jne loc_680B8EB;");
    asm("loc_680B8A0: cmp $0x50,%ebp;");
    asm("loc_680B8A3: jl loc_680B8B8;");
    asm("loc_680B8A5: push %edi;");
    asm("loc_680B8A6: push $_data_680E5D8;");
    asm("loc_680B8AB: push %esi;");
    asm("loc_680B8AC: movb $0,0x50(%edi);");
    asm("loc_680B8B0: call _sub_680A800;");
    asm("loc_680B8B5: add $0xC,%esp;");
    asm("loc_680B8B8: mov (%esi),%dl;");
    asm("loc_680B8BA: mov %dl,(%edi,%ebp);");
    asm("loc_680B8BD: mov 0x18(%esi),%eax;");
    asm("loc_680B8C0: mov (%eax),%ecx;");
    asm("loc_680B8C2: inc %ebp;");
    asm("loc_680B8C3: dec %ecx;");
    asm("loc_680B8C4: mov %ecx,(%eax);");
    asm("loc_680B8C6: mov 0x18(%esi),%ecx;");
    asm("loc_680B8C9: cmpl $0,(%ecx);");
    asm("loc_680B8CC: jl loc_680B8DD;");
    asm("loc_680B8CE: mov 4(%ecx),%edx;");
    asm("loc_680B8D1: xor %eax,%eax;");
    asm("loc_680B8D3: mov (%edx),%al;");
    asm("loc_680B8D5: inc %edx;");
    asm("loc_680B8D6: mov %edx,4(%ecx);");
    asm("loc_680B8D9: mov %eax,(%esi);");
    asm("loc_680B8DB: jmp loc_680B866;");
    asm("loc_680B8DD: push %ecx;");
    asm("loc_680B8DE: calll *8(%ecx);");
    asm("loc_680B8E1: add $4,%esp;");
    asm("loc_680B8E4: mov %eax,(%esi);");
    asm("loc_680B8E6: jmp loc_680B866;");
    asm("loc_680B8EB: movb $0,(%edi,%ebp);");
    asm("loc_680B8EF: pop %edi;");
    asm("loc_680B8F0: pop %esi;");
    asm("loc_680B8F1: pop %ebp;");
    asm("loc_680B8F2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680B900() // _sub_680B900
{
    __DEBUG_ASM(680B900);
    // chunk 0x680B900 _sub_680B900
    asm("loc_680B900: push %esi;");
    asm("loc_680B901: mov 8(%esp),%esi;");
    asm("loc_680B905: mov 0x20(%esi),%eax;");
    asm("loc_680B908: lea (%eax,%eax,2),%eax;");
    asm("loc_680B90B: mov 0x2C(%esi,%eax,4),%ecx;");
    asm("loc_680B90F: test %ecx,%ecx;");
    asm("loc_680B911: je loc_680B96B;");
    asm("loc_680B913: mov (%esi),%eax;");
    asm("loc_680B915: cmp $0xA,%eax;");
    asm("loc_680B918: jne loc_680B925;");
    asm("loc_680B91A: push %esi;");
    asm("loc_680B91B: call _sub_680B520;");
    asm("loc_680B920: add $4,%esp;");
    asm("loc_680B923: jmp loc_680B95D;");
    asm("loc_680B925: cmp $0xFFFFFFFF,%eax;");
    asm("loc_680B928: jne loc_680B93A;");
    asm("loc_680B92A: push $_data_680E494;");
    asm("loc_680B92F: push %esi;");
    asm("loc_680B930: call _sub_680A850;");
    asm("loc_680B935: add $8,%esp;");
    asm("loc_680B938: jmp loc_680B95D;");
    asm("loc_680B93A: mov 0x18(%esi),%eax;");
    asm("loc_680B93D: decl (%eax);");
    asm("loc_680B93F: mov 0x18(%esi),%ecx;");
    asm("loc_680B942: cmpl $0,(%ecx);");
    asm("loc_680B945: jl loc_680B954;");
    asm("loc_680B947: mov 4(%ecx),%edx;");
    asm("loc_680B94A: xor %eax,%eax;");
    asm("loc_680B94C: mov (%edx),%al;");
    asm("loc_680B94E: inc %edx;");
    asm("loc_680B94F: mov %edx,4(%ecx);");
    asm("loc_680B952: jmp loc_680B95B;");
    asm("loc_680B954: push %ecx;");
    asm("loc_680B955: calll *8(%ecx);");
    asm("loc_680B958: add $4,%esp;");
    asm("loc_680B95B: mov %eax,(%esi);");
    asm("loc_680B95D: mov 0x20(%esi),%eax;");
    asm("loc_680B960: lea (%eax,%eax,2),%ecx;");
    asm("loc_680B963: mov 0x2C(%esi,%ecx,4),%eax;");
    asm("loc_680B967: test %eax,%eax;");
    asm("loc_680B969: jne loc_680B913;");
    asm("loc_680B96B: pop %esi;");
    asm("loc_680B96C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680B970() // _sub_680B970
{
    asm("jmp dgb_680B970;"); // jumptable skip
    asm(".long _jmp_680BAF8;"); // jumptable address
    __DEBUG_ASM(680B970);
    // chunk 0x680B970 _sub_680B970
    asm("loc_680B970: push %esi;");
    asm("loc_680B971: mov 8(%esp),%esi;");
    asm("loc_680B975: push %edi;");
    asm("loc_680B976: xor %edi,%edi;");
    asm("loc_680B978: mov (%esi),%eax;");
    asm("loc_680B97A: lea 1(%eax),%ecx;");
    asm("loc_680B97D: cmp $0x5E,%ecx;");
    asm("loc_680B980: ja loc_680BA73;");
    asm("loc_680B986: xor %edx,%edx;");
    asm("loc_680B988: mov _data_680BB0C(%ecx),%dl;");
    asm("loc_680B98E: jmpl *_jmp_680BAF8(,%edx,4);");
    asm("loc_680B995: push %eax;");
    asm("loc_680B996: call _sub_680BBE0;");
    asm("loc_680B99B: mov 0x18(%esi),%eax;");
    asm("loc_680B99E: mov (%eax),%ecx;");
    asm("loc_680B9A0: add $4,%esp;");
    asm("loc_680B9A3: dec %ecx;");
    asm("loc_680B9A4: mov %ecx,(%eax);");
    asm("loc_680B9A6: mov 0x18(%esi),%ecx;");
    asm("loc_680B9A9: cmpl $0,(%ecx);");
    asm("loc_680B9AC: jl loc_680B9BB;");
    asm("loc_680B9AE: mov 4(%ecx),%edx;");
    asm("loc_680B9B1: xor %eax,%eax;");
    asm("loc_680B9B3: mov (%edx),%al;");
    asm("loc_680B9B5: inc %edx;");
    asm("loc_680B9B6: mov %edx,4(%ecx);");
    asm("loc_680B9B9: jmp loc_680B9C2;");
    asm("loc_680B9BB: push %ecx;");
    asm("loc_680B9BC: calll *8(%ecx);");
    asm("loc_680B9BF: add $4,%esp;");
    asm("loc_680B9C2: cmp $0x5B,%eax;");
    asm("loc_680B9C5: mov %eax,(%esi);");
    asm("loc_680B9C7: jne loc_680B978;");
    asm("loc_680B9C9: push %eax;");
    asm("loc_680B9CA: inc %edi;");
    asm("loc_680B9CB: call _sub_680BBE0;");
    asm("loc_680B9D0: mov 0x18(%esi),%eax;");
    asm("loc_680B9D3: mov (%eax),%ecx;");
    asm("loc_680B9D5: add $4,%esp;");
    asm("loc_680B9D8: dec %ecx;");
    asm("loc_680B9D9: mov %ecx,(%eax);");
    asm("loc_680B9DB: mov 0x18(%esi),%ecx;");
    asm("loc_680B9DE: cmpl $0,(%ecx);");
    asm("loc_680B9E1: jl loc_680BA76;");
    asm("loc_680B9E7: mov 4(%ecx),%edx;");
    asm("loc_680B9EA: xor %eax,%eax;");
    asm("loc_680B9EC: mov (%edx),%al;");
    asm("loc_680B9EE: inc %edx;");
    asm("loc_680B9EF: mov %edx,4(%ecx);");
    asm("loc_680B9F2: mov %eax,(%esi);");
    asm("loc_680B9F4: jmp loc_680B978;");
    asm("loc_680B9F6: push %eax;");
    asm("loc_680B9F7: call _sub_680BBE0;");
    asm("loc_680B9FC: mov 0x18(%esi),%eax;");
    asm("loc_680B9FF: mov (%eax),%ecx;");
    asm("loc_680BA01: add $4,%esp;");
    asm("loc_680BA04: dec %ecx;");
    asm("loc_680BA05: mov %ecx,(%eax);");
    asm("loc_680BA07: mov 0x18(%esi),%ecx;");
    asm("loc_680BA0A: cmpl $0,(%ecx);");
    asm("loc_680BA0D: jl loc_680BA1C;");
    asm("loc_680BA0F: mov 4(%ecx),%edx;");
    asm("loc_680BA12: xor %eax,%eax;");
    asm("loc_680BA14: mov (%edx),%al;");
    asm("loc_680BA16: inc %edx;");
    asm("loc_680BA17: mov %edx,4(%ecx);");
    asm("loc_680BA1A: jmp loc_680BA23;");
    asm("loc_680BA1C: push %ecx;");
    asm("loc_680BA1D: calll *8(%ecx);");
    asm("loc_680BA20: add $4,%esp;");
    asm("loc_680BA23: cmp $0x5D,%eax;");
    asm("loc_680BA26: mov %eax,(%esi);");
    asm("loc_680BA28: jne loc_680B978;");
    asm("loc_680BA2E: test %edi,%edi;");
    asm("loc_680BA30: je loc_680BA9A;");
    asm("loc_680BA32: dec %edi;");
    asm("loc_680BA33: push %eax;");
    asm("loc_680BA34: call _sub_680BBE0;");
    asm("loc_680BA39: mov 0x18(%esi),%eax;");
    asm("loc_680BA3C: mov (%eax),%ecx;");
    asm("loc_680BA3E: add $4,%esp;");
    asm("loc_680BA41: dec %ecx;");
    asm("loc_680BA42: mov %ecx,(%eax);");
    asm("loc_680BA44: mov 0x18(%esi),%ecx;");
    asm("loc_680BA47: cmpl $0,(%ecx);");
    asm("loc_680BA4A: jl loc_680BA76;");
    asm("loc_680BA4C: mov 4(%ecx),%edx;");
    asm("loc_680BA4F: xor %eax,%eax;");
    asm("loc_680BA51: mov (%edx),%al;");
    asm("loc_680BA53: inc %edx;");
    asm("loc_680BA54: mov %edx,4(%ecx);");
    asm("loc_680BA57: mov %eax,(%esi);");
    asm("loc_680BA59: jmp loc_680B978;");
    asm("loc_680BA5E: push $0xA;");
    asm("loc_680BA60: call _sub_680BBE0;");
    asm("loc_680BA65: push %esi;");
    asm("loc_680BA66: call _sub_680B520;");
    asm("loc_680BA6B: add $8,%esp;");
    asm("loc_680BA6E: jmp loc_680B978;");
    asm("loc_680BA73: push %eax;");
    asm("loc_680BA74: jmp loc_680BA34;");
    asm("loc_680BA76: push %ecx;");
    asm("loc_680BA77: calll *8(%ecx);");
    asm("loc_680BA7A: add $4,%esp;");
    asm("loc_680BA7D: mov %eax,(%esi);");
    asm("loc_680BA7F: jmp loc_680B978;");
    asm("loc_680BA84: push $_data_680E5E8;");
    asm("loc_680BA89: push %esi;");
    asm("loc_680BA8A: call _sub_680A850;");
    asm("loc_680BA8F: add $8,%esp;");
    asm("loc_680BA92: pop %edi;");
    asm("loc_680BA93: mov $0x11D,%eax;");
    asm("loc_680BA98: pop %esi;");
    asm("loc_680BA99: ret;");
    asm("loc_680BA9A: push %eax;");
    asm("loc_680BA9B: call _sub_680BBE0;");
    asm("loc_680BAA0: mov 0x18(%esi),%eax;");
    asm("loc_680BAA3: mov (%eax),%ecx;");
    asm("loc_680BAA5: add $4,%esp;");
    asm("loc_680BAA8: dec %ecx;");
    asm("loc_680BAA9: mov %ecx,(%eax);");
    asm("loc_680BAAB: mov 0x18(%esi),%ecx;");
    asm("loc_680BAAE: cmpl $0,(%ecx);");
    asm("loc_680BAB1: jl loc_680BAC0;");
    asm("loc_680BAB3: mov 4(%ecx),%edx;");
    asm("loc_680BAB6: xor %eax,%eax;");
    asm("loc_680BAB8: mov (%edx),%al;");
    asm("loc_680BABA: inc %edx;");
    asm("loc_680BABB: mov %edx,4(%ecx);");
    asm("loc_680BABE: jmp loc_680BAC7;");
    asm("loc_680BAC0: push %ecx;");
    asm("loc_680BAC1: calll *8(%ecx);");
    asm("loc_680BAC4: add $4,%esp;");
    asm("loc_680BAC7: mov %eax,(%esi);");
    asm("loc_680BAC9: mov _data_680E604,%eax;");
    asm("loc_680BACE: mov 0x20(%eax),%ecx;");
    asm("loc_680BAD1: mov 0x28(%eax),%edx;");
    asm("loc_680BAD4: mov 0x1C(%eax),%eax;");
    asm("loc_680BAD7: sub %ecx,%edx;");
    asm("loc_680BAD9: sub $4,%edx;");
    asm("loc_680BADC: push %edx;");
    asm("loc_680BADD: lea 2(%eax,%ecx),%ecx;");
    asm("loc_680BAE1: push %ecx;");
    asm("loc_680BAE2: call _sub_68058A0;");
    asm("loc_680BAE7: add $8,%esp;");
    asm("loc_680BAEA: mov %eax,0x10(%esi);");
    asm("loc_680BAED: pop %edi;");
    asm("loc_680BAEE: mov $0x11C,%eax;");
    asm("loc_680BAF3: pop %esi;");
    asm("loc_680BAF4: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_680BAF8: .long loc_680BA84;");
    asm(".long loc_680BA5E;");
    asm(".long loc_680B995;");
    asm(".long loc_680B9F6;");
    asm(".long loc_680BA73;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_680B970);
_naked _weak void _sub_680BB70() // _sub_680BB70
{
    __DEBUG_ASM(680BB70);
    // chunk 0x680BB70 _sub_680BB70
    asm("loc_680BB70: mov _data_680E604,%ecx;");
    asm("loc_680BB76: mov 0x28(%ecx),%edx;");
    asm("loc_680BB79: mov 4(%esp),%eax;");
    asm("loc_680BB7D: push %esi;");
    asm("loc_680BB7E: mov 0x24(%ecx),%esi;");
    asm("loc_680BB81: add %eax,%edx;");
    asm("loc_680BB83: cmp %esi,%edx;");
    asm("loc_680BB85: pop %esi;");
    asm("loc_680BB86: jle loc_680BB97;");
    asm("loc_680BB88: push %eax;");
    asm("loc_680BB89: call _sub_680BBA0;");
    asm("loc_680BB8E: mov _data_680E604,%ecx;");
    asm("loc_680BB94: add $4,%esp;");
    asm("loc_680BB97: mov 0x28(%ecx),%eax;");
    asm("loc_680BB9A: add 0x1C(%ecx),%eax;");
    asm("loc_680BB9D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680BBA0() // _sub_680BBA0
{
    __DEBUG_ASM(680BBA0);
    // chunk 0x680BBA0 _sub_680BBA0
    asm("loc_680BBA0: mov 4(%esp),%eax;");
    asm("loc_680BBA4: push %esi;");
    asm("loc_680BBA5: mov _data_680E604,%esi;");
    asm("loc_680BBAB: mov 0x28(%esi),%ecx;");
    asm("loc_680BBAE: push $0x7FFFFFFD;");
    asm("loc_680BBB3: push $_data_680D708;");
    asm("loc_680BBB8: add $0x20,%eax;");
    asm("loc_680BBBB: push $1;");
    asm("loc_680BBBD: push %eax;");
    asm("loc_680BBBE: lea (%ecx,%eax),%edx;");
    asm("loc_680BBC1: mov 0x1C(%esi),%eax;");
    asm("loc_680BBC4: push %ecx;");
    asm("loc_680BBC5: push %eax;");
    asm("loc_680BBC6: mov %edx,0x24(%esi);");
    asm("loc_680BBC9: call _sub_6806550;");
    asm("loc_680BBCE: add $0x18,%esp;");
    asm("loc_680BBD1: mov %eax,0x1C(%esi);");
    asm("loc_680BBD4: pop %esi;");
    asm("loc_680BBD5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680BBE0() // _sub_680BBE0
{
    __DEBUG_ASM(680BBE0);
    // chunk 0x680BBE0 _sub_680BBE0
    asm("loc_680BBE0: mov _data_680E604,%eax;");
    asm("loc_680BBE5: mov 0x28(%eax),%ecx;");
    asm("loc_680BBE8: mov 0x24(%eax),%edx;");
    asm("loc_680BBEB: inc %ecx;");
    asm("loc_680BBEC: cmp %edx,%ecx;");
    asm("loc_680BBEE: jle loc_680BBFF;");
    asm("loc_680BBF0: push $1;");
    asm("loc_680BBF2: call _sub_680BBA0;");
    asm("loc_680BBF7: mov _data_680E604,%eax;");
    asm("loc_680BBFC: add $4,%esp;");
    asm("loc_680BBFF: mov 0x28(%eax),%edx;");
    asm("loc_680BC02: mov 0x1C(%eax),%eax;");
    asm("loc_680BC05: mov 4(%esp),%cl;");
    asm("loc_680BC09: mov %cl,(%edx,%eax);");
    asm("loc_680BC0C: mov _data_680E604,%eax;");
    asm("loc_680BC11: incl 0x28(%eax);");
    asm("loc_680BC14: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680BC20() // _sub_680BC20
{
    __DEBUG_ASM(680BC20);
    // chunk 0x680BC20 _sub_680BC20
    asm("loc_680BC20: mov _data_680E604,%eax;");
    asm("loc_680BC25: mov 0x20(%eax),%ecx;");
    asm("loc_680BC28: mov %ecx,0x28(%eax);");
    asm("loc_680BC2B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680BC30() // _sub_680BC30
{
    __DEBUG_ASM(680BC30);
    // chunk 0x680BC30 _sub_680BC30
    asm("loc_680BC30: mov _data_680E604,%ecx;");
    asm("loc_680BC36: mov 0x20(%ecx),%eax;");
    asm("loc_680BC39: add 0x1C(%ecx),%eax;");
    asm("loc_680BC3C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680BC40() // _purecall
{
    __DEBUG_ASM(680BC40);
    // chunk 0x680BC40 _sub_680BC40
    asm("loc_680BC40: jmpl *_import_680C014;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680BC50() // ??2@YAPAXI@Z
{
    __DEBUG_ASM(680BC50);
    // chunk 0x680BC50 _sub_680BC50
    asm("loc_680BC50: jmpl *_import_680C024;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680BC56() // ??3@YAXPAX@Z
{
    __DEBUG_ASM(680BC56);
    // chunk 0x680BC56 _sub_680BC56
    asm("loc_680BC56: jmpl *_import_680C028;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680BC5C() // __CRT_INIT@12
{
    __DEBUG_ASM(680BC5C);
    // chunk 0x680BC5C _sub_680BC5C
    asm("loc_680BC5C: mov 8(%esp),%eax;");
    asm("loc_680BC60: test %eax,%eax;");
    asm("loc_680BC62: jne loc_680BC72;");
    asm("loc_680BC64: cmp %eax,_data_680E608;");
    asm("loc_680BC6A: jle loc_680BC9A;");
    asm("loc_680BC6C: decl _data_680E608;");
    asm("loc_680BC72: mov _import_680C090,%ecx;");
    asm("loc_680BC78: cmp $1,%eax;");
    asm("loc_680BC7B: mov (%ecx),%ecx;");
    asm("loc_680BC7D: mov %ecx,_data_680E60C;");
    asm("loc_680BC83: jne loc_680BCC4;");
    asm("loc_680BC85: push $0x80;");
    asm("loc_680BC8A: calll *_import_680C08C;");
    asm("loc_680BC90: test %eax,%eax;");
    asm("loc_680BC92: pop %ecx;");
    asm("loc_680BC93: mov %eax,_data_680E614;");
    asm("loc_680BC98: jne loc_680BC9E;");
    asm("loc_680BC9A: xor %eax,%eax;");
    asm("loc_680BC9C: jmp loc_680BD04;");
    asm("loc_680BC9E: andl $0,(%eax);");
    asm("loc_680BCA1: mov _data_680E614,%eax;");
    asm("loc_680BCA6: push $_data_680D004;");
    asm("loc_680BCAB: push $_data_680D000;");
    asm("loc_680BCB0: mov %eax,_data_680E610;");
    asm("loc_680BCB5: call _sub_680BDB0;");
    asm("loc_680BCBA: incl _data_680E608;");
    asm("loc_680BCC0: pop %ecx;");
    asm("loc_680BCC1: pop %ecx;");
    asm("loc_680BCC2: jmp loc_680BD01;");
    asm("loc_680BCC4: test %eax,%eax;");
    asm("loc_680BCC6: jne loc_680BD01;");
    asm("loc_680BCC8: mov _data_680E614,%eax;");
    asm("loc_680BCCD: test %eax,%eax;");
    asm("loc_680BCCF: je loc_680BD01;");
    asm("loc_680BCD1: mov _data_680E610,%ecx;");
    asm("loc_680BCD7: push %esi;");
    asm("loc_680BCD8: lea -4(%ecx),%esi;");
    asm("loc_680BCDB: cmp %eax,%esi;");
    asm("loc_680BCDD: jb loc_680BCF1;");
    asm("loc_680BCDF: mov (%esi),%ecx;");
    asm("loc_680BCE1: test %ecx,%ecx;");
    asm("loc_680BCE3: je loc_680BCEC;");
    asm("loc_680BCE5: call *%ecx;");
    asm("loc_680BCE7: mov _data_680E614,%eax;");
    asm("loc_680BCEC: sub $4,%esi;");
    asm("loc_680BCEF: jmp loc_680BCDB;");
    asm("loc_680BCF1: push %eax;");
    asm("loc_680BCF2: calll *_import_680C018;");
    asm("loc_680BCF8: andl $0,_data_680E614;");
    asm("loc_680BCFF: pop %ecx;");
    asm("loc_680BD00: pop %esi;");
    asm("loc_680BD01: push $1;");
    asm("loc_680BD03: pop %eax;");
    asm("loc_680BD04: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680BD07() // _DllEntryPoint
{
    __DEBUG_ASM(680BD07);
    // chunk 0x680BD07 _sub_680BD07
    asm("loc_680BD07: push %ebp;");
    asm("loc_680BD08: mov %esp,%ebp;");
    asm("loc_680BD0A: push %ebx;");
    asm("loc_680BD0B: mov 8(%ebp),%ebx;");
    asm("loc_680BD0E: push %esi;");
    asm("loc_680BD0F: mov 0xC(%ebp),%esi;");
    asm("loc_680BD12: push %edi;");
    asm("loc_680BD13: mov 0x10(%ebp),%edi;");
    asm("loc_680BD16: test %esi,%esi;");
    asm("loc_680BD18: jne loc_680BD23;");
    asm("loc_680BD1A: cmpl $0,_data_680E608;");
    asm("loc_680BD21: jmp loc_680BD49;");
    asm("loc_680BD23: cmp $1,%esi;");
    asm("loc_680BD26: je loc_680BD2D;");
    asm("loc_680BD28: cmp $2,%esi;");
    asm("loc_680BD2B: jne loc_680BD4F;");
    asm("loc_680BD2D: mov _data_680E618,%eax;");
    asm("loc_680BD32: test %eax,%eax;");
    asm("loc_680BD34: je loc_680BD3F;");
    asm("loc_680BD36: push %edi;");
    asm("loc_680BD37: push %esi;");
    asm("loc_680BD38: push %ebx;");
    asm("loc_680BD39: call *%eax;");
    asm("loc_680BD3B: test %eax,%eax;");
    asm("loc_680BD3D: je loc_680BD4B;");
    asm("loc_680BD3F: push %edi;");
    asm("loc_680BD40: push %esi;");
    asm("loc_680BD41: push %ebx;");
    asm("loc_680BD42: call _sub_680BC5C;");
    asm("loc_680BD47: test %eax,%eax;");
    asm("loc_680BD49: jne loc_680BD4F;");
    asm("loc_680BD4B: xor %eax,%eax;");
    asm("loc_680BD4D: jmp loc_680BD9D;");
    asm("loc_680BD4F: push %edi;");
    asm("loc_680BD50: push %esi;");
    asm("loc_680BD51: push %ebx;");
    asm("loc_680BD52: call _sub_6801870;");
    asm("loc_680BD57: cmp $1,%esi;");
    asm("loc_680BD5A: mov %eax,0xC(%ebp);");
    asm("loc_680BD5D: jne loc_680BD6B;");
    asm("loc_680BD5F: test %eax,%eax;");
    asm("loc_680BD61: jne loc_680BD9A;");
    asm("loc_680BD63: push %edi;");
    asm("loc_680BD64: push %eax;");
    asm("loc_680BD65: push %ebx;");
    asm("loc_680BD66: call _sub_680BC5C;");
    asm("loc_680BD6B: test %esi,%esi;");
    asm("loc_680BD6D: je loc_680BD74;");
    asm("loc_680BD6F: cmp $3,%esi;");
    asm("loc_680BD72: jne loc_680BD9A;");
    asm("loc_680BD74: push %edi;");
    asm("loc_680BD75: push %esi;");
    asm("loc_680BD76: push %ebx;");
    asm("loc_680BD77: call _sub_680BC5C;");
    asm("loc_680BD7C: test %eax,%eax;");
    asm("loc_680BD7E: jne loc_680BD83;");
    asm("loc_680BD80: and %eax,0xC(%ebp);");
    asm("loc_680BD83: cmpl $0,0xC(%ebp);");
    asm("loc_680BD87: je loc_680BD9A;");
    asm("loc_680BD89: mov _data_680E618,%eax;");
    asm("loc_680BD8E: test %eax,%eax;");
    asm("loc_680BD90: je loc_680BD9A;");
    asm("loc_680BD92: push %edi;");
    asm("loc_680BD93: push %esi;");
    asm("loc_680BD94: push %ebx;");
    asm("loc_680BD95: call *%eax;");
    asm("loc_680BD97: mov %eax,0xC(%ebp);");
    asm("loc_680BD9A: mov 0xC(%ebp),%eax;");
    asm("loc_680BD9D: pop %edi;");
    asm("loc_680BD9E: pop %esi;");
    asm("loc_680BD9F: pop %ebx;");
    asm("loc_680BDA0: pop %ebp;");
    asm("loc_680BDA1: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680BDA4() // _setjmp3
{
    __DEBUG_ASM(680BDA4);
    // chunk 0x680BDA4 _sub_680BDA4
    asm("loc_680BDA4: jmpl *_import_680C038;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680BDAA() // _ftol
{
    __DEBUG_ASM(680BDAA);
    // chunk 0x680BDAA _sub_680BDAA
    asm("loc_680BDAA: jmpl *_import_680C068;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_680BDB0() // _initterm
{
    __DEBUG_ASM(680BDB0);
    // chunk 0x680BDB0 _sub_680BDB0
    asm("loc_680BDB0: jmpl *_import_680C088;");
    asm("int3;"); // unreachable
}
#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __INTELLISENSE__
