#ifndef __INTELLISENSE__
// clang-format off
#include "..\..\PCH.h"
#pragma init_seg(lib)
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

_naked _weak void _sub_6DA49B0() // _sub_6DA49B0
{
    __DEBUG_ASM(6DA49B0);
    // chunk 0x6DA49B0 _sub_6DA49B0
    asm("loc_6DA49B0: mov _data_6DB60E4,%eax;");
    asm("loc_6DA49B5: mov %eax,_data_6DBBF80;");
    asm("loc_6DA49BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA49C0() // _sub_6DA49C0
{
    __DEBUG_ASM(6DA49C0);
    // chunk 0x6DA49C0 _sub_6DA49C0
    asm("loc_6DA49C0: mov _data_6DB60E4,%eax;");
    asm("loc_6DA49C5: mov %eax,_data_6DBBF84;");
    asm("loc_6DA49CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA49D0() // _sub_6DA49D0
{
    __DEBUG_ASM(6DA49D0);
    // chunk 0x6DA49D0 _sub_6DA49D0
    asm("loc_6DA49D0: mov _data_6DB60E8,%eax;");
    asm("loc_6DA49D5: mov %eax,_data_6DBBF7C;");
    asm("loc_6DA49DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA49E0() // _sub_6DA49E0
{
    __DEBUG_ASM(6DA49E0);
    // chunk 0x6DA49E0 _sub_6DA49E0
    asm("loc_6DA49E0: mov 8(%esp),%eax;");
    asm("loc_6DA49E4: sub $0x10,%esp;");
    asm("loc_6DA49E7: push %ebx;");
    asm("loc_6DA49E8: push %ebp;");
    asm("loc_6DA49E9: push %esi;");
    asm("loc_6DA49EA: push %edi;");
    asm("loc_6DA49EB: mov %ecx,%edi;");
    asm("loc_6DA49ED: mov 0x24(%esp),%ecx;");
    asm("loc_6DA49F1: lea 0x10(%edi),%esi;");
    asm("loc_6DA49F4: mov %eax,4(%esi);");
    asm("loc_6DA49F7: mov (%ecx),%edx;");
    asm("loc_6DA49F9: mov %edx,8(%esi);");
    asm("loc_6DA49FC: movl $0,(%esi);");
    asm("loc_6DA4A02: movl $0,0xC(%esi);");
    asm("loc_6DA4A09: mov 0x14(%edi),%eax;");
    asm("loc_6DA4A0C: push %esi;");
    asm("loc_6DA4A0D: push %eax;");
    asm("loc_6DA4A0E: lea 0x18(%edi),%ebp;");
    asm("loc_6DA4A11: push %ebp;");
    asm("loc_6DA4A12: mov %edi,%ecx;");
    asm("loc_6DA4A14: call _sub_6DA1380;");
    asm("loc_6DA4A19: mov %eax,0x1C(%edi);");
    asm("loc_6DA4A1C: test %eax,%eax;");
    asm("loc_6DA4A1E: mov $0x16,%eax;");
    asm("loc_6DA4A23: jne loc_6DA4C87;");
    asm("loc_6DA4A29: mov (%esi),%ebx;");
    asm("loc_6DA4A2B: mov 4(%esi),%edx;");
    asm("loc_6DA4A2E: inc %ebx;");
    asm("loc_6DA4A2F: mov %ebx,%ecx;");
    asm("loc_6DA4A31: cmp %edx,%ecx;");
    asm("loc_6DA4A33: mov %ebx,(%esi);");
    asm("loc_6DA4A35: jbe loc_6DA4A3A;");
    asm("loc_6DA4A37: mov %eax,0xC(%esi);");
    asm("loc_6DA4A3A: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA4A3D: test %ecx,%ecx;");
    asm("loc_6DA4A3F: jne loc_6DA4C87;");
    asm("loc_6DA4A45: mov (%ebp),%ecx;");
    asm("loc_6DA4A48: mov 0x20(%edi),%dl;");
    asm("loc_6DA4A4B: mov %dl,(%ecx);");
    asm("loc_6DA4A4D: inc %ecx;");
    asm("loc_6DA4A4E: mov %ecx,(%ebp);");
    asm("loc_6DA4A51: mov (%esi),%ebx;");
    asm("loc_6DA4A53: mov 4(%esi),%edx;");
    asm("loc_6DA4A56: add $4,%ebx;");
    asm("loc_6DA4A59: mov %ebx,%ecx;");
    asm("loc_6DA4A5B: cmp %edx,%ecx;");
    asm("loc_6DA4A5D: mov %ebx,(%esi);");
    asm("loc_6DA4A5F: jbe loc_6DA4A64;");
    asm("loc_6DA4A61: mov %eax,0xC(%esi);");
    asm("loc_6DA4A64: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA4A67: test %ecx,%ecx;");
    asm("loc_6DA4A69: jne loc_6DA4C87;");
    asm("loc_6DA4A6F: mov (%ebp),%ecx;");
    asm("loc_6DA4A72: mov 0x24(%edi),%edx;");
    asm("loc_6DA4A75: mov %edx,(%ecx);");
    asm("loc_6DA4A77: add $4,%ecx;");
    asm("loc_6DA4A7A: mov %ecx,(%ebp);");
    asm("loc_6DA4A7D: mov (%esi),%ebx;");
    asm("loc_6DA4A7F: mov 4(%esi),%edx;");
    asm("loc_6DA4A82: add $0xC,%ebx;");
    asm("loc_6DA4A85: mov %ebx,%ecx;");
    asm("loc_6DA4A87: cmp %edx,%ecx;");
    asm("loc_6DA4A89: mov %ebx,(%esi);");
    asm("loc_6DA4A8B: jbe loc_6DA4A90;");
    asm("loc_6DA4A8D: mov %eax,0xC(%esi);");
    asm("loc_6DA4A90: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA4A93: test %ecx,%ecx;");
    asm("loc_6DA4A95: jne loc_6DA4C87;");
    asm("loc_6DA4A9B: mov 0x28(%edi),%eax;");
    asm("loc_6DA4A9E: mov 0x2C(%edi),%ecx;");
    asm("loc_6DA4AA1: mov (%ebp),%ebx;");
    asm("loc_6DA4AA4: mov 0x30(%edi),%edx;");
    asm("loc_6DA4AA7: mov %eax,0x14(%esp);");
    asm("loc_6DA4AAB: lea 0x14(%esp),%eax;");
    asm("loc_6DA4AAF: mov %ecx,0x18(%esp);");
    asm("loc_6DA4AB3: push %eax;");
    asm("loc_6DA4AB4: mov %ebx,%ecx;");
    asm("loc_6DA4AB6: mov %edx,0x20(%esp);");
    asm("loc_6DA4ABA: call _sub_6D8F510;");
    asm("loc_6DA4ABF: flds 0x38(%edi);");
    asm("loc_6DA4AC2: fmull _data_6DB3FD8;");
    asm("loc_6DA4AC8: add $0xC,%ebx;");
    asm("loc_6DA4ACB: mov %ebx,(%ebp);");
    asm("loc_6DA4ACE: call _sub_6DB20DE;");
    asm("loc_6DA4AD3: flds 0x3C(%edi);");
    asm("loc_6DA4AD6: fmull _data_6DB3FD8;");
    asm("loc_6DA4ADC: mov %al,0x28(%esp);");
    asm("loc_6DA4AE0: call _sub_6DB20DE;");
    asm("loc_6DA4AE5: flds 0x40(%edi);");
    asm("loc_6DA4AE8: fmull _data_6DB3FD8;");
    asm("loc_6DA4AEE: mov %al,0x24(%esp);");
    asm("loc_6DA4AF2: call _sub_6DB20DE;");
    asm("loc_6DA4AF7: flds 0x34(%edi);");
    asm("loc_6DA4AFA: fmull _data_6DB3FD8;");
    asm("loc_6DA4B00: mov %al,0x13(%esp);");
    asm("loc_6DA4B04: call _sub_6DB20DE;");
    asm("loc_6DA4B09: mov (%esi),%ecx;");
    asm("loc_6DA4B0B: mov %al,%dl;");
    asm("loc_6DA4B0D: mov 4(%esi),%eax;");
    asm("loc_6DA4B10: inc %ecx;");
    asm("loc_6DA4B11: cmp %eax,%ecx;");
    asm("loc_6DA4B13: mov %ecx,(%esi);");
    asm("loc_6DA4B15: mov $0x16,%eax;");
    asm("loc_6DA4B1A: jbe loc_6DA4B1F;");
    asm("loc_6DA4B1C: mov %eax,0xC(%esi);");
    asm("loc_6DA4B1F: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA4B22: test %ecx,%ecx;");
    asm("loc_6DA4B24: jne loc_6DA4C87;");
    asm("loc_6DA4B2A: mov (%ebp),%ecx;");
    asm("loc_6DA4B2D: mov 0x28(%esp),%bl;");
    asm("loc_6DA4B31: mov %bl,(%ecx);");
    asm("loc_6DA4B33: inc %ecx;");
    asm("loc_6DA4B34: mov %ecx,(%ebp);");
    asm("loc_6DA4B37: mov (%esi),%ecx;");
    asm("loc_6DA4B39: mov 4(%esi),%ebx;");
    asm("loc_6DA4B3C: inc %ecx;");
    asm("loc_6DA4B3D: cmp %ebx,%ecx;");
    asm("loc_6DA4B3F: mov %ecx,(%esi);");
    asm("loc_6DA4B41: jbe loc_6DA4B46;");
    asm("loc_6DA4B43: mov %eax,0xC(%esi);");
    asm("loc_6DA4B46: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA4B49: test %ecx,%ecx;");
    asm("loc_6DA4B4B: jne loc_6DA4C87;");
    asm("loc_6DA4B51: mov (%ebp),%ecx;");
    asm("loc_6DA4B54: mov 0x24(%esp),%bl;");
    asm("loc_6DA4B58: mov %bl,(%ecx);");
    asm("loc_6DA4B5A: inc %ecx;");
    asm("loc_6DA4B5B: mov %ecx,(%ebp);");
    asm("loc_6DA4B5E: mov (%esi),%ecx;");
    asm("loc_6DA4B60: mov 4(%esi),%ebx;");
    asm("loc_6DA4B63: inc %ecx;");
    asm("loc_6DA4B64: cmp %ebx,%ecx;");
    asm("loc_6DA4B66: mov %ecx,(%esi);");
    asm("loc_6DA4B68: jbe loc_6DA4B6D;");
    asm("loc_6DA4B6A: mov %eax,0xC(%esi);");
    asm("loc_6DA4B6D: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA4B70: test %ecx,%ecx;");
    asm("loc_6DA4B72: jne loc_6DA4C87;");
    asm("loc_6DA4B78: mov (%ebp),%ecx;");
    asm("loc_6DA4B7B: mov 0x13(%esp),%bl;");
    asm("loc_6DA4B7F: mov %bl,(%ecx);");
    asm("loc_6DA4B81: inc %ecx;");
    asm("loc_6DA4B82: mov %ecx,(%ebp);");
    asm("loc_6DA4B85: mov (%esi),%ecx;");
    asm("loc_6DA4B87: mov 4(%esi),%ebx;");
    asm("loc_6DA4B8A: inc %ecx;");
    asm("loc_6DA4B8B: cmp %ebx,%ecx;");
    asm("loc_6DA4B8D: mov %ecx,(%esi);");
    asm("loc_6DA4B8F: jbe loc_6DA4B94;");
    asm("loc_6DA4B91: mov %eax,0xC(%esi);");
    asm("loc_6DA4B94: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA4B97: test %ecx,%ecx;");
    asm("loc_6DA4B99: jne loc_6DA4C87;");
    asm("loc_6DA4B9F: mov (%ebp),%ecx;");
    asm("loc_6DA4BA2: mov %dl,(%ecx);");
    asm("loc_6DA4BA4: flds 0x48(%edi);");
    asm("loc_6DA4BA7: fmull _data_6DB3FD8;");
    asm("loc_6DA4BAD: inc %ecx;");
    asm("loc_6DA4BAE: mov %ecx,(%ebp);");
    asm("loc_6DA4BB1: call _sub_6DB20DE;");
    asm("loc_6DA4BB6: mov (%esi),%ebx;");
    asm("loc_6DA4BB8: mov 4(%esi),%edx;");
    asm("loc_6DA4BBB: inc %ebx;");
    asm("loc_6DA4BBC: mov %ebx,%ecx;");
    asm("loc_6DA4BBE: cmp %edx,%ecx;");
    asm("loc_6DA4BC0: mov %ebx,(%esi);");
    asm("loc_6DA4BC2: jbe loc_6DA4BCB;");
    asm("loc_6DA4BC4: movl $0x16,0xC(%esi);");
    asm("loc_6DA4BCB: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA4BCE: test %ecx,%ecx;");
    asm("loc_6DA4BD0: je loc_6DA4BE1;");
    asm("loc_6DA4BD2: pop %edi;");
    asm("loc_6DA4BD3: pop %esi;");
    asm("loc_6DA4BD4: pop %ebp;");
    asm("loc_6DA4BD5: mov $0x16,%eax;");
    asm("loc_6DA4BDA: pop %ebx;");
    asm("loc_6DA4BDB: add $0x10,%esp;");
    asm("loc_6DA4BDE: ret $0xC;");
    asm("loc_6DA4BE1: mov (%ebp),%ecx;");
    asm("loc_6DA4BE4: mov %al,(%ecx);");
    asm("loc_6DA4BE6: inc %ecx;");
    asm("loc_6DA4BE7: mov %ecx,(%ebp);");
    asm("loc_6DA4BEA: mov (%esi),%edx;");
    asm("loc_6DA4BEC: mov 4(%esi),%ecx;");
    asm("loc_6DA4BEF: add $4,%edx;");
    asm("loc_6DA4BF2: mov %edx,%eax;");
    asm("loc_6DA4BF4: cmp %ecx,%eax;");
    asm("loc_6DA4BF6: mov %edx,(%esi);");
    asm("loc_6DA4BF8: jbe loc_6DA4C01;");
    asm("loc_6DA4BFA: movl $0x16,0xC(%esi);");
    asm("loc_6DA4C01: mov 0x1C(%edi),%eax;");
    asm("loc_6DA4C04: test %eax,%eax;");
    asm("loc_6DA4C06: je loc_6DA4C17;");
    asm("loc_6DA4C08: pop %edi;");
    asm("loc_6DA4C09: pop %esi;");
    asm("loc_6DA4C0A: pop %ebp;");
    asm("loc_6DA4C0B: mov $0x16,%eax;");
    asm("loc_6DA4C10: pop %ebx;");
    asm("loc_6DA4C11: add $0x10,%esp;");
    asm("loc_6DA4C14: ret $0xC;");
    asm("loc_6DA4C17: mov (%ebp),%eax;");
    asm("loc_6DA4C1A: flds 0x44(%edi);");
    asm("loc_6DA4C1D: fstps (%eax);");
    asm("loc_6DA4C1F: mov 0x14(%edi),%ecx;");
    asm("loc_6DA4C22: push %esi;");
    asm("loc_6DA4C23: push %ecx;");
    asm("loc_6DA4C24: add $4,%eax;");
    asm("loc_6DA4C27: push %ebp;");
    asm("loc_6DA4C28: mov %edi,%ecx;");
    asm("loc_6DA4C2A: mov %eax,(%ebp);");
    asm("loc_6DA4C2D: call _sub_6DA13C0;");
    asm("loc_6DA4C32: test %eax,%eax;");
    asm("loc_6DA4C34: mov %eax,0x1C(%edi);");
    asm("loc_6DA4C37: je loc_6DA4C48;");
    asm("loc_6DA4C39: pop %edi;");
    asm("loc_6DA4C3A: pop %esi;");
    asm("loc_6DA4C3B: pop %ebp;");
    asm("loc_6DA4C3C: mov $0x16,%eax;");
    asm("loc_6DA4C41: pop %ebx;");
    asm("loc_6DA4C42: add $0x10,%esp;");
    asm("loc_6DA4C45: ret $0xC;");
    asm("loc_6DA4C48: mov (%esi),%edx;");
    asm("loc_6DA4C4A: mov 0x2C(%esp),%eax;");
    asm("loc_6DA4C4E: mov %edx,(%eax);");
    asm("loc_6DA4C50: mov 0xC(%edi),%ecx;");
    asm("loc_6DA4C53: push %ecx;");
    asm("loc_6DA4C54: call _sub_6DA16B0;");
    asm("loc_6DA4C59: mov %eax,%ecx;");
    asm("loc_6DA4C5B: mov (%ecx),%ebp;");
    asm("loc_6DA4C5D: mov 0x18(%ecx),%ebx;");
    asm("loc_6DA4C60: mov 0x10(%ecx),%eax;");
    asm("loc_6DA4C63: add $4,%esp;");
    asm("loc_6DA4C66: inc %ebp;");
    asm("loc_6DA4C67: mov %ebp,(%ecx);");
    asm("loc_6DA4C69: mov (%esi),%edx;");
    asm("loc_6DA4C6B: add %edx,%ebx;");
    asm("loc_6DA4C6D: mov %ebx,0x18(%ecx);");
    asm("loc_6DA4C70: mov (%esi),%esi;");
    asm("loc_6DA4C72: cmp %eax,%esi;");
    asm("loc_6DA4C74: mov %ebp,%edi;");
    asm("loc_6DA4C76: jbe loc_6DA4C7B;");
    asm("loc_6DA4C78: mov %esi,0x10(%ecx);");
    asm("loc_6DA4C7B: mov 0x18(%ecx),%eax;");
    asm("loc_6DA4C7E: xor %edx,%edx;");
    asm("loc_6DA4C80: div %edi;");
    asm("loc_6DA4C82: mov %eax,8(%ecx);");
    asm("loc_6DA4C85: xor %eax,%eax;");
    asm("loc_6DA4C87: pop %edi;");
    asm("loc_6DA4C88: pop %esi;");
    asm("loc_6DA4C89: pop %ebp;");
    asm("loc_6DA4C8A: pop %ebx;");
    asm("loc_6DA4C8B: add $0x10,%esp;");
    asm("loc_6DA4C8E: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA4CA0() // _sub_6DA4CA0
{
    __DEBUG_ASM(6DA4CA0);
    // chunk 0x6DA4CA0 _sub_6DA4CA0
    asm("loc_6DA4CA0: push %ecx;");
    asm("loc_6DA4CA1: mov 0xC(%esp),%eax;");
    asm("loc_6DA4CA5: push %ebx;");
    asm("loc_6DA4CA6: push %ebp;");
    asm("loc_6DA4CA7: push %esi;");
    asm("loc_6DA4CA8: push %edi;");
    asm("loc_6DA4CA9: mov %ecx,%edi;");
    asm("loc_6DA4CAB: mov 0x18(%esp),%ecx;");
    asm("loc_6DA4CAF: lea 0x10(%edi),%esi;");
    asm("loc_6DA4CB2: push %esi;");
    asm("loc_6DA4CB3: push %eax;");
    asm("loc_6DA4CB4: mov %ecx,8(%esi);");
    asm("loc_6DA4CB7: lea 0x18(%edi),%ebx;");
    asm("loc_6DA4CBA: push %ebx;");
    asm("loc_6DA4CBB: mov %edi,%ecx;");
    asm("loc_6DA4CBD: mov %eax,4(%esi);");
    asm("loc_6DA4CC0: movl $0,(%esi);");
    asm("loc_6DA4CC6: movl $0,0xC(%esi);");
    asm("loc_6DA4CCD: call _sub_6DA13C0;");
    asm("loc_6DA4CD2: test %eax,%eax;");
    asm("loc_6DA4CD4: mov %eax,0x1C(%edi);");
    asm("loc_6DA4CD7: je loc_6DA4CE6;");
    asm("loc_6DA4CD9: pop %edi;");
    asm("loc_6DA4CDA: pop %esi;");
    asm("loc_6DA4CDB: pop %ebp;");
    asm("loc_6DA4CDC: mov $0x17,%eax;");
    asm("loc_6DA4CE1: pop %ebx;");
    asm("loc_6DA4CE2: pop %ecx;");
    asm("loc_6DA4CE3: ret $0xC;");
    asm("loc_6DA4CE6: mov (%esi),%edx;");
    asm("loc_6DA4CE8: mov 4(%esi),%ecx;");
    asm("loc_6DA4CEB: inc %edx;");
    asm("loc_6DA4CEC: mov %edx,%eax;");
    asm("loc_6DA4CEE: cmp %ecx,%eax;");
    asm("loc_6DA4CF0: mov %edx,(%esi);");
    asm("loc_6DA4CF2: mov $0x17,%ebp;");
    asm("loc_6DA4CF7: jbe loc_6DA4CFC;");
    asm("loc_6DA4CF9: mov %ebp,0xC(%esi);");
    asm("loc_6DA4CFC: mov 0x1C(%edi),%eax;");
    asm("loc_6DA4CFF: test %eax,%eax;");
    asm("loc_6DA4D01: jne loc_6DA4F1A;");
    asm("loc_6DA4D07: mov (%ebx),%eax;");
    asm("loc_6DA4D09: mov (%eax),%dl;");
    asm("loc_6DA4D0B: inc %eax;");
    asm("loc_6DA4D0C: mov %dl,0x20(%edi);");
    asm("loc_6DA4D0F: mov %eax,(%ebx);");
    asm("loc_6DA4D11: mov (%esi),%edx;");
    asm("loc_6DA4D13: mov 4(%esi),%ecx;");
    asm("loc_6DA4D16: add $4,%edx;");
    asm("loc_6DA4D19: mov %edx,%eax;");
    asm("loc_6DA4D1B: cmp %ecx,%eax;");
    asm("loc_6DA4D1D: mov %edx,(%esi);");
    asm("loc_6DA4D1F: jbe loc_6DA4D24;");
    asm("loc_6DA4D21: mov %ebp,0xC(%esi);");
    asm("loc_6DA4D24: mov 0x1C(%edi),%eax;");
    asm("loc_6DA4D27: test %eax,%eax;");
    asm("loc_6DA4D29: jne loc_6DA4F1A;");
    asm("loc_6DA4D2F: mov (%ebx),%eax;");
    asm("loc_6DA4D31: mov (%eax),%ecx;");
    asm("loc_6DA4D33: add $4,%eax;");
    asm("loc_6DA4D36: mov %eax,(%ebx);");
    asm("loc_6DA4D38: mov %ecx,0x24(%edi);");
    asm("loc_6DA4D3B: mov (%esi),%edx;");
    asm("loc_6DA4D3D: mov 4(%esi),%ecx;");
    asm("loc_6DA4D40: add $0xC,%edx;");
    asm("loc_6DA4D43: mov %edx,%eax;");
    asm("loc_6DA4D45: cmp %ecx,%eax;");
    asm("loc_6DA4D47: mov %edx,(%esi);");
    asm("loc_6DA4D49: jbe loc_6DA4D4E;");
    asm("loc_6DA4D4B: mov %ebp,0xC(%esi);");
    asm("loc_6DA4D4E: mov 0x1C(%edi),%eax;");
    asm("loc_6DA4D51: test %eax,%eax;");
    asm("loc_6DA4D53: jne loc_6DA4F1A;");
    asm("loc_6DA4D59: mov (%ebx),%ebp;");
    asm("loc_6DA4D5B: push %ebp;");
    asm("loc_6DA4D5C: lea 0x28(%edi),%ecx;");
    asm("loc_6DA4D5F: call _sub_6D8F510;");
    asm("loc_6DA4D64: add $0xC,%ebp;");
    asm("loc_6DA4D67: mov %ebp,(%ebx);");
    asm("loc_6DA4D69: mov (%esi),%edx;");
    asm("loc_6DA4D6B: mov 4(%esi),%ecx;");
    asm("loc_6DA4D6E: inc %edx;");
    asm("loc_6DA4D6F: mov %edx,%eax;");
    asm("loc_6DA4D71: cmp %ecx,%eax;");
    asm("loc_6DA4D73: mov %edx,(%esi);");
    asm("loc_6DA4D75: mov $0x17,%ebp;");
    asm("loc_6DA4D7A: jbe loc_6DA4D7F;");
    asm("loc_6DA4D7C: mov %ebp,0xC(%esi);");
    asm("loc_6DA4D7F: mov 0x1C(%edi),%eax;");
    asm("loc_6DA4D82: test %eax,%eax;");
    asm("loc_6DA4D84: jne loc_6DA4F1A;");
    asm("loc_6DA4D8A: mov (%ebx),%eax;");
    asm("loc_6DA4D8C: mov (%eax),%dl;");
    asm("loc_6DA4D8E: inc %eax;");
    asm("loc_6DA4D8F: mov %eax,(%ebx);");
    asm("loc_6DA4D91: mov 4(%esi),%ecx;");
    asm("loc_6DA4D94: mov %dl,0x18(%esp);");
    asm("loc_6DA4D98: mov (%esi),%edx;");
    asm("loc_6DA4D9A: inc %edx;");
    asm("loc_6DA4D9B: mov %edx,%eax;");
    asm("loc_6DA4D9D: cmp %ecx,%eax;");
    asm("loc_6DA4D9F: mov %edx,(%esi);");
    asm("loc_6DA4DA1: jbe loc_6DA4DA6;");
    asm("loc_6DA4DA3: mov %ebp,0xC(%esi);");
    asm("loc_6DA4DA6: mov 0x1C(%edi),%eax;");
    asm("loc_6DA4DA9: test %eax,%eax;");
    asm("loc_6DA4DAB: jne loc_6DA4F1A;");
    asm("loc_6DA4DB1: mov (%ebx),%eax;");
    asm("loc_6DA4DB3: mov (%eax),%cl;");
    asm("loc_6DA4DB5: inc %eax;");
    asm("loc_6DA4DB6: mov %eax,(%ebx);");
    asm("loc_6DA4DB8: mov (%esi),%edx;");
    asm("loc_6DA4DBA: inc %edx;");
    asm("loc_6DA4DBB: mov %cl,0x13(%esp);");
    asm("loc_6DA4DBF: mov 4(%esi),%ecx;");
    asm("loc_6DA4DC2: mov %edx,%eax;");
    asm("loc_6DA4DC4: cmp %ecx,%eax;");
    asm("loc_6DA4DC6: mov %edx,(%esi);");
    asm("loc_6DA4DC8: jbe loc_6DA4DCD;");
    asm("loc_6DA4DCA: mov %ebp,0xC(%esi);");
    asm("loc_6DA4DCD: mov 0x1C(%edi),%eax;");
    asm("loc_6DA4DD0: test %eax,%eax;");
    asm("loc_6DA4DD2: jne loc_6DA4F1A;");
    asm("loc_6DA4DD8: mov (%ebx),%eax;");
    asm("loc_6DA4DDA: mov (%eax),%dl;");
    asm("loc_6DA4DDC: inc %eax;");
    asm("loc_6DA4DDD: mov %eax,(%ebx);");
    asm("loc_6DA4DDF: mov (%esi),%eax;");
    asm("loc_6DA4DE1: mov 4(%esi),%ecx;");
    asm("loc_6DA4DE4: inc %eax;");
    asm("loc_6DA4DE5: cmp %ecx,%eax;");
    asm("loc_6DA4DE7: mov %eax,(%esi);");
    asm("loc_6DA4DE9: jbe loc_6DA4DEE;");
    asm("loc_6DA4DEB: mov %ebp,0xC(%esi);");
    asm("loc_6DA4DEE: mov 0x1C(%edi),%eax;");
    asm("loc_6DA4DF1: test %eax,%eax;");
    asm("loc_6DA4DF3: jne loc_6DA4F1A;");
    asm("loc_6DA4DF9: mov (%ebx),%eax;");
    asm("loc_6DA4DFB: mov (%eax),%cl;");
    asm("loc_6DA4DFD: inc %eax;");
    asm("loc_6DA4DFE: mov %eax,(%ebx);");
    asm("loc_6DA4E00: movsbl 0x18(%esp),%eax;");
    asm("loc_6DA4E05: mov %eax,0x18(%esp);");
    asm("loc_6DA4E09: movsbl 0x13(%esp),%eax;");
    asm("loc_6DA4E0E: fildl 0x18(%esp);");
    asm("loc_6DA4E12: mov %eax,0x18(%esp);");
    asm("loc_6DA4E16: fmull _data_6DB3FE0;");
    asm("loc_6DA4E1C: movsbl %dl,%edx;");
    asm("loc_6DA4E1F: movsbl %cl,%eax;");
    asm("loc_6DA4E22: fstps 0x38(%edi);");
    asm("loc_6DA4E25: fildl 0x18(%esp);");
    asm("loc_6DA4E29: mov %edx,0x18(%esp);");
    asm("loc_6DA4E2D: fmull _data_6DB3FE0;");
    asm("loc_6DA4E33: fstps 0x3C(%edi);");
    asm("loc_6DA4E36: fildl 0x18(%esp);");
    asm("loc_6DA4E3A: mov %eax,0x18(%esp);");
    asm("loc_6DA4E3E: fmull _data_6DB3FE0;");
    asm("loc_6DA4E44: fstps 0x40(%edi);");
    asm("loc_6DA4E47: fildl 0x18(%esp);");
    asm("loc_6DA4E4B: fmull _data_6DB3FE0;");
    asm("loc_6DA4E51: fstps 0x34(%edi);");
    asm("loc_6DA4E54: mov (%esi),%edx;");
    asm("loc_6DA4E56: mov 4(%esi),%ecx;");
    asm("loc_6DA4E59: inc %edx;");
    asm("loc_6DA4E5A: mov %edx,%eax;");
    asm("loc_6DA4E5C: cmp %ecx,%eax;");
    asm("loc_6DA4E5E: mov %edx,(%esi);");
    asm("loc_6DA4E60: jbe loc_6DA4E65;");
    asm("loc_6DA4E62: mov %ebp,0xC(%esi);");
    asm("loc_6DA4E65: mov 0x1C(%edi),%eax;");
    asm("loc_6DA4E68: test %eax,%eax;");
    asm("loc_6DA4E6A: jne loc_6DA4F1A;");
    asm("loc_6DA4E70: mov (%ebx),%eax;");
    asm("loc_6DA4E72: mov (%eax),%cl;");
    asm("loc_6DA4E74: movsbl %cl,%ecx;");
    asm("loc_6DA4E77: mov %ecx,0x18(%esp);");
    asm("loc_6DA4E7B: inc %eax;");
    asm("loc_6DA4E7C: mov %eax,(%ebx);");
    asm("loc_6DA4E7E: fildl 0x18(%esp);");
    asm("loc_6DA4E82: fmull _data_6DB3FE0;");
    asm("loc_6DA4E88: fstps 0x48(%edi);");
    asm("loc_6DA4E8B: mov (%esi),%edx;");
    asm("loc_6DA4E8D: mov 4(%esi),%ecx;");
    asm("loc_6DA4E90: add $4,%edx;");
    asm("loc_6DA4E93: mov %edx,%eax;");
    asm("loc_6DA4E95: cmp %ecx,%eax;");
    asm("loc_6DA4E97: mov %edx,(%esi);");
    asm("loc_6DA4E99: jbe loc_6DA4E9E;");
    asm("loc_6DA4E9B: mov %ebp,0xC(%esi);");
    asm("loc_6DA4E9E: mov 0x1C(%edi),%eax;");
    asm("loc_6DA4EA1: test %eax,%eax;");
    asm("loc_6DA4EA3: jne loc_6DA4F1A;");
    asm("loc_6DA4EA5: mov (%ebx),%eax;");
    asm("loc_6DA4EA7: mov (%eax),%edx;");
    asm("loc_6DA4EA9: add $4,%eax;");
    asm("loc_6DA4EAC: mov %eax,(%ebx);");
    asm("loc_6DA4EAE: mov 0x1C(%esp),%eax;");
    asm("loc_6DA4EB2: push %esi;");
    asm("loc_6DA4EB3: push %eax;");
    asm("loc_6DA4EB4: push %ebx;");
    asm("loc_6DA4EB5: mov %edi,%ecx;");
    asm("loc_6DA4EB7: mov %edx,0x44(%edi);");
    asm("loc_6DA4EBA: call _sub_6DA13C0;");
    asm("loc_6DA4EBF: test %eax,%eax;");
    asm("loc_6DA4EC1: mov %eax,0x1C(%edi);");
    asm("loc_6DA4EC4: je loc_6DA4ED0;");
    asm("loc_6DA4EC6: pop %edi;");
    asm("loc_6DA4EC7: pop %esi;");
    asm("loc_6DA4EC8: mov %ebp,%eax;");
    asm("loc_6DA4ECA: pop %ebp;");
    asm("loc_6DA4ECB: pop %ebx;");
    asm("loc_6DA4ECC: pop %ecx;");
    asm("loc_6DA4ECD: ret $0xC;");
    asm("loc_6DA4ED0: mov (%esi),%ecx;");
    asm("loc_6DA4ED2: mov 0x20(%esp),%edx;");
    asm("loc_6DA4ED6: mov %ecx,(%edx);");
    asm("loc_6DA4ED8: mov 0xC(%edi),%eax;");
    asm("loc_6DA4EDB: push %eax;");
    asm("loc_6DA4EDC: call _sub_6DA16B0;");
    asm("loc_6DA4EE1: mov %eax,%ecx;");
    asm("loc_6DA4EE3: mov 4(%ecx),%edx;");
    asm("loc_6DA4EE6: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA4EE9: mov 0x14(%ecx),%eax;");
    asm("loc_6DA4EEC: add $4,%esp;");
    asm("loc_6DA4EEF: inc %edx;");
    asm("loc_6DA4EF0: mov %edx,4(%ecx);");
    asm("loc_6DA4EF3: mov %edx,%edi;");
    asm("loc_6DA4EF5: mov (%esi),%edx;");
    asm("loc_6DA4EF7: add $2,%edx;");
    asm("loc_6DA4EFA: add %edx,%ebp;");
    asm("loc_6DA4EFC: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA4EFF: mov (%esi),%esi;");
    asm("loc_6DA4F01: add $2,%eax;");
    asm("loc_6DA4F04: cmp %eax,%esi;");
    asm("loc_6DA4F06: jbe loc_6DA4F0E;");
    asm("loc_6DA4F08: add $2,%esi;");
    asm("loc_6DA4F0B: mov %esi,0x14(%ecx);");
    asm("loc_6DA4F0E: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA4F11: xor %edx,%edx;");
    asm("loc_6DA4F13: div %edi;");
    asm("loc_6DA4F15: mov %eax,0xC(%ecx);");
    asm("loc_6DA4F18: xor %eax,%eax;");
    asm("loc_6DA4F1A: pop %edi;");
    asm("loc_6DA4F1B: pop %esi;");
    asm("loc_6DA4F1C: pop %ebp;");
    asm("loc_6DA4F1D: pop %ebx;");
    asm("loc_6DA4F1E: pop %ecx;");
    asm("loc_6DA4F1F: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA4F30() // _sub_6DA4F30
{
    __DEBUG_ASM(6DA4F30);
    // chunk 0x6DA4F30 _sub_6DA4F30
    asm("loc_6DA4F30: mov _data_6DB6104,%eax;");
    asm("loc_6DA4F35: mov %eax,_data_6DBBF90;");
    asm("loc_6DA4F3A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA4F40() // _sub_6DA4F40
{
    __DEBUG_ASM(6DA4F40);
    // chunk 0x6DA4F40 _sub_6DA4F40
    asm("loc_6DA4F40: mov _data_6DB6104,%eax;");
    asm("loc_6DA4F45: mov %eax,_data_6DBBF94;");
    asm("loc_6DA4F4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA4F50() // _sub_6DA4F50
{
    __DEBUG_ASM(6DA4F50);
    // chunk 0x6DA4F50 _sub_6DA4F50
    asm("loc_6DA4F50: mov _data_6DB6108,%eax;");
    asm("loc_6DA4F55: mov %eax,_data_6DBBF8C;");
    asm("loc_6DA4F5A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA4F60() // _sub_6DA4F60
{
    __DEBUG_ASM(6DA4F60);
    // chunk 0x6DA4F60 _sub_6DA4F60
    asm("loc_6DA4F60: mov 8(%esp),%eax;");
    asm("loc_6DA4F64: sub $0xC,%esp;");
    asm("loc_6DA4F67: push %ebx;");
    asm("loc_6DA4F68: push %ebp;");
    asm("loc_6DA4F69: push %esi;");
    asm("loc_6DA4F6A: push %edi;");
    asm("loc_6DA4F6B: mov %ecx,%edi;");
    asm("loc_6DA4F6D: mov 0x20(%esp),%ecx;");
    asm("loc_6DA4F71: lea 0x10(%edi),%esi;");
    asm("loc_6DA4F74: mov %eax,4(%esi);");
    asm("loc_6DA4F77: mov (%ecx),%edx;");
    asm("loc_6DA4F79: mov %edx,8(%esi);");
    asm("loc_6DA4F7C: movl $0,(%esi);");
    asm("loc_6DA4F82: movl $0,0xC(%esi);");
    asm("loc_6DA4F89: mov 0x14(%edi),%eax;");
    asm("loc_6DA4F8C: push %esi;");
    asm("loc_6DA4F8D: push %eax;");
    asm("loc_6DA4F8E: lea 0x18(%edi),%ebp;");
    asm("loc_6DA4F91: push %ebp;");
    asm("loc_6DA4F92: mov %edi,%ecx;");
    asm("loc_6DA4F94: call _sub_6DA1380;");
    asm("loc_6DA4F99: test %eax,%eax;");
    asm("loc_6DA4F9B: mov %eax,0x1C(%edi);");
    asm("loc_6DA4F9E: je loc_6DA4FAF;");
    asm("loc_6DA4FA0: pop %edi;");
    asm("loc_6DA4FA1: pop %esi;");
    asm("loc_6DA4FA2: pop %ebp;");
    asm("loc_6DA4FA3: mov $0x16,%eax;");
    asm("loc_6DA4FA8: pop %ebx;");
    asm("loc_6DA4FA9: add $0xC,%esp;");
    asm("loc_6DA4FAC: ret $0xC;");
    asm("loc_6DA4FAF: mov (%esi),%edx;");
    asm("loc_6DA4FB1: mov 4(%esi),%ecx;");
    asm("loc_6DA4FB4: add $4,%edx;");
    asm("loc_6DA4FB7: mov %edx,%eax;");
    asm("loc_6DA4FB9: cmp %ecx,%eax;");
    asm("loc_6DA4FBB: mov %edx,(%esi);");
    asm("loc_6DA4FBD: jbe loc_6DA4FC6;");
    asm("loc_6DA4FBF: movl $0x16,0xC(%esi);");
    asm("loc_6DA4FC6: mov 0x1C(%edi),%eax;");
    asm("loc_6DA4FC9: test %eax,%eax;");
    asm("loc_6DA4FCB: je loc_6DA4FDC;");
    asm("loc_6DA4FCD: pop %edi;");
    asm("loc_6DA4FCE: pop %esi;");
    asm("loc_6DA4FCF: pop %ebp;");
    asm("loc_6DA4FD0: mov $0x16,%eax;");
    asm("loc_6DA4FD5: pop %ebx;");
    asm("loc_6DA4FD6: add $0xC,%esp;");
    asm("loc_6DA4FD9: ret $0xC;");
    asm("loc_6DA4FDC: mov (%ebp),%eax;");
    asm("loc_6DA4FDF: mov 0x20(%edi),%ecx;");
    asm("loc_6DA4FE2: mov %ecx,(%eax);");
    asm("loc_6DA4FE4: add $4,%eax;");
    asm("loc_6DA4FE7: mov %eax,(%ebp);");
    asm("loc_6DA4FEA: calll *_import_6DB305C;");
    asm("loc_6DA4FF0: test %al,%al;");
    asm("loc_6DA4FF2: je loc_6DA50E8;");
    asm("loc_6DA4FF8: mov (%esi),%edx;");
    asm("loc_6DA4FFA: mov 4(%esi),%ecx;");
    asm("loc_6DA4FFD: add $0xC,%edx;");
    asm("loc_6DA5000: mov %edx,%eax;");
    asm("loc_6DA5002: cmp %ecx,%eax;");
    asm("loc_6DA5004: mov %edx,(%esi);");
    asm("loc_6DA5006: jbe loc_6DA500F;");
    asm("loc_6DA5008: movl $0x16,0xC(%esi);");
    asm("loc_6DA500F: mov 0x1C(%edi),%eax;");
    asm("loc_6DA5012: test %eax,%eax;");
    asm("loc_6DA5014: je loc_6DA5025;");
    asm("loc_6DA5016: pop %edi;");
    asm("loc_6DA5017: pop %esi;");
    asm("loc_6DA5018: pop %ebp;");
    asm("loc_6DA5019: mov $0x16,%eax;");
    asm("loc_6DA501E: pop %ebx;");
    asm("loc_6DA501F: add $0xC,%esp;");
    asm("loc_6DA5022: ret $0xC;");
    asm("loc_6DA5025: mov 0x24(%edi),%edx;");
    asm("loc_6DA5028: mov 0x2C(%edi),%ecx;");
    asm("loc_6DA502B: mov (%ebp),%ebx;");
    asm("loc_6DA502E: mov 0x28(%edi),%eax;");
    asm("loc_6DA5031: mov %edx,0x10(%esp);");
    asm("loc_6DA5035: lea 0x10(%esp),%edx;");
    asm("loc_6DA5039: mov %ecx,0x18(%esp);");
    asm("loc_6DA503D: push %edx;");
    asm("loc_6DA503E: mov %ebx,%ecx;");
    asm("loc_6DA5040: mov %eax,0x18(%esp);");
    asm("loc_6DA5044: call _sub_6D8F510;");
    asm("loc_6DA5049: add $0xC,%ebx;");
    asm("loc_6DA504C: mov %ebx,(%ebp);");
    asm("loc_6DA504F: mov 0x34(%edi),%ecx;");
    asm("loc_6DA5052: test %ecx,%ecx;");
    asm("loc_6DA5054: jne loc_6DA505A;");
    asm("loc_6DA5056: xor %al,%al;");
    asm("loc_6DA5058: jmp loc_6DA5061;");
    asm("loc_6DA505A: mov 0x38(%edi),%eax;");
    asm("loc_6DA505D: sub %ecx,%eax;");
    asm("loc_6DA505F: sar $1,%eax;");
    asm("loc_6DA5061: mov (%esi),%ebx;");
    asm("loc_6DA5063: mov 4(%esi),%edx;");
    asm("loc_6DA5066: inc %ebx;");
    asm("loc_6DA5067: mov %ebx,%ecx;");
    asm("loc_6DA5069: cmp %edx,%ecx;");
    asm("loc_6DA506B: mov %ebx,(%esi);");
    asm("loc_6DA506D: jbe loc_6DA5076;");
    asm("loc_6DA506F: movl $0x16,0xC(%esi);");
    asm("loc_6DA5076: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA5079: test %ecx,%ecx;");
    asm("loc_6DA507B: je loc_6DA508C;");
    asm("loc_6DA507D: pop %edi;");
    asm("loc_6DA507E: pop %esi;");
    asm("loc_6DA507F: pop %ebp;");
    asm("loc_6DA5080: mov $0x16,%eax;");
    asm("loc_6DA5085: pop %ebx;");
    asm("loc_6DA5086: add $0xC,%esp;");
    asm("loc_6DA5089: ret $0xC;");
    asm("loc_6DA508C: mov (%ebp),%ecx;");
    asm("loc_6DA508F: mov %al,(%ecx);");
    asm("loc_6DA5091: mov 0x34(%edi),%eax;");
    asm("loc_6DA5094: inc %ecx;");
    asm("loc_6DA5095: mov %ecx,(%ebp);");
    asm("loc_6DA5098: cmp 0x38(%edi),%eax;");
    asm("loc_6DA509B: je loc_6DA54DD;");
    asm("loc_6DA50A1: mov $0x16,%edx;");
    asm("loc_6DA50A6: mov (%esi),%ecx;");
    asm("loc_6DA50A8: mov 4(%esi),%ebx;");
    asm("loc_6DA50AB: add $2,%ecx;");
    asm("loc_6DA50AE: cmp %ebx,%ecx;");
    asm("loc_6DA50B0: mov %ecx,(%esi);");
    asm("loc_6DA50B2: jbe loc_6DA50B7;");
    asm("loc_6DA50B4: mov %edx,0xC(%esi);");
    asm("loc_6DA50B7: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA50BA: test %ecx,%ecx;");
    asm("loc_6DA50BC: jne loc_6DA50DC;");
    asm("loc_6DA50BE: mov (%ebp),%ecx;");
    asm("loc_6DA50C1: mov (%eax),%bx;");
    asm("loc_6DA50C4: mov %bx,(%ecx);");
    asm("loc_6DA50C7: add $2,%ecx;");
    asm("loc_6DA50CA: mov %ecx,(%ebp);");
    asm("loc_6DA50CD: mov 0x38(%edi),%ecx;");
    asm("loc_6DA50D0: add $2,%eax;");
    asm("loc_6DA50D3: cmp %ecx,%eax;");
    asm("loc_6DA50D5: jne loc_6DA50A6;");
    asm("loc_6DA50D7: jmp loc_6DA54DD;");
    asm("loc_6DA50DC: pop %edi;");
    asm("loc_6DA50DD: pop %esi;");
    asm("loc_6DA50DE: pop %ebp;");
    asm("loc_6DA50DF: mov %edx,%eax;");
    asm("loc_6DA50E1: pop %ebx;");
    asm("loc_6DA50E2: add $0xC,%esp;");
    asm("loc_6DA50E5: ret $0xC;");
    asm("loc_6DA50E8: flds 0x24(%edi);");
    asm("loc_6DA50EB: xor %bl,%bl;");
    asm("loc_6DA50ED: fabs;");
    asm("loc_6DA50EF: mov %bl,0x24(%esp);");
    asm("loc_6DA50F3: fcoml _data_6DB6130;");
    asm("loc_6DA50F9: fnstsw %ax;");
    asm("loc_6DA50FB: test $5,%ah;");
    asm("loc_6DA50FE: jp loc_6DA5106;");
    asm("loc_6DA5100: fstp %st(0);");
    asm("loc_6DA5102: mov $1,%bl;");
    asm("loc_6DA5104: jmp loc_6DA5115;");
    asm("loc_6DA5106: fcompl _data_6DB6128;");
    asm("loc_6DA510C: fnstsw %ax;");
    asm("loc_6DA510E: test $5,%ah;");
    asm("loc_6DA5111: jp loc_6DA5119;");
    asm("loc_6DA5113: mov $2,%bl;");
    asm("loc_6DA5115: mov %bl,0x24(%esp);");
    asm("loc_6DA5119: flds 0x28(%edi);");
    asm("loc_6DA511C: fabs;");
    asm("loc_6DA511E: fcoml _data_6DB6130;");
    asm("loc_6DA5124: fnstsw %ax;");
    asm("loc_6DA5126: test $5,%ah;");
    asm("loc_6DA5129: jp loc_6DA5132;");
    asm("loc_6DA512B: fstp %st(0);");
    asm("loc_6DA512D: or $4,%bl;");
    asm("loc_6DA5130: jmp loc_6DA5142;");
    asm("loc_6DA5132: fcompl _data_6DB6128;");
    asm("loc_6DA5138: fnstsw %ax;");
    asm("loc_6DA513A: test $5,%ah;");
    asm("loc_6DA513D: jp loc_6DA5146;");
    asm("loc_6DA513F: or $8,%bl;");
    asm("loc_6DA5142: mov %bl,0x24(%esp);");
    asm("loc_6DA5146: flds 0x2C(%edi);");
    asm("loc_6DA5149: fabs;");
    asm("loc_6DA514B: fcompl _data_6DB6130;");
    asm("loc_6DA5151: fnstsw %ax;");
    asm("loc_6DA5153: test $5,%ah;");
    asm("loc_6DA5156: jp loc_6DA515F;");
    asm("loc_6DA5158: or $0x10,%bl;");
    asm("loc_6DA515B: mov %bl,0x24(%esp);");
    asm("loc_6DA515F: mov 0x34(%edi),%ecx;");
    asm("loc_6DA5162: test %ecx,%ecx;");
    asm("loc_6DA5164: je loc_6DA5179;");
    asm("loc_6DA5166: mov 0x38(%edi),%eax;");
    asm("loc_6DA5169: sub %ecx,%eax;");
    asm("loc_6DA516B: sar $1,%eax;");
    asm("loc_6DA516D: cmp $1,%eax;");
    asm("loc_6DA5170: jne loc_6DA5179;");
    asm("loc_6DA5172: or $0x40,%bl;");
    asm("loc_6DA5175: mov %bl,0x24(%esp);");
    asm("loc_6DA5179: mov (%esi),%edx;");
    asm("loc_6DA517B: mov 4(%esi),%ecx;");
    asm("loc_6DA517E: inc %edx;");
    asm("loc_6DA517F: mov %edx,%eax;");
    asm("loc_6DA5181: cmp %ecx,%eax;");
    asm("loc_6DA5183: mov %edx,(%esi);");
    asm("loc_6DA5185: jbe loc_6DA518E;");
    asm("loc_6DA5187: movl $0x16,0xC(%esi);");
    asm("loc_6DA518E: mov 0x1C(%edi),%eax;");
    asm("loc_6DA5191: test %eax,%eax;");
    asm("loc_6DA5193: je loc_6DA51A4;");
    asm("loc_6DA5195: pop %edi;");
    asm("loc_6DA5196: pop %esi;");
    asm("loc_6DA5197: pop %ebp;");
    asm("loc_6DA5198: mov $0x16,%eax;");
    asm("loc_6DA519D: pop %ebx;");
    asm("loc_6DA519E: add $0xC,%esp;");
    asm("loc_6DA51A1: ret $0xC;");
    asm("loc_6DA51A4: mov (%ebp),%eax;");
    asm("loc_6DA51A7: mov %bl,(%eax);");
    asm("loc_6DA51A9: inc %eax;");
    asm("loc_6DA51AA: test $1,%bl;");
    asm("loc_6DA51AD: mov %eax,(%ebp);");
    asm("loc_6DA51B0: je loc_6DA5203;");
    asm("loc_6DA51B2: flds 0x24(%edi);");
    asm("loc_6DA51B5: fmuls _data_6DB6124;");
    asm("loc_6DA51BB: fmull _data_6DB3FD8;");
    asm("loc_6DA51C1: call _sub_6DB20DE;");
    asm("loc_6DA51C6: mov (%esi),%ebx;");
    asm("loc_6DA51C8: mov 4(%esi),%edx;");
    asm("loc_6DA51CB: inc %ebx;");
    asm("loc_6DA51CC: mov %ebx,%ecx;");
    asm("loc_6DA51CE: cmp %edx,%ecx;");
    asm("loc_6DA51D0: mov %ebx,(%esi);");
    asm("loc_6DA51D2: jbe loc_6DA51DB;");
    asm("loc_6DA51D4: movl $0x16,0xC(%esi);");
    asm("loc_6DA51DB: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA51DE: test %ecx,%ecx;");
    asm("loc_6DA51E0: je loc_6DA51F1;");
    asm("loc_6DA51E2: pop %edi;");
    asm("loc_6DA51E3: pop %esi;");
    asm("loc_6DA51E4: pop %ebp;");
    asm("loc_6DA51E5: mov $0x16,%eax;");
    asm("loc_6DA51EA: pop %ebx;");
    asm("loc_6DA51EB: add $0xC,%esp;");
    asm("loc_6DA51EE: ret $0xC;");
    asm("loc_6DA51F1: mov (%ebp),%ecx;");
    asm("loc_6DA51F4: mov 0x24(%esp),%bl;");
    asm("loc_6DA51F8: mov %al,(%ecx);");
    asm("loc_6DA51FA: inc %ecx;");
    asm("loc_6DA51FB: mov %ecx,(%ebp);");
    asm("loc_6DA51FE: jmp loc_6DA5290;");
    asm("loc_6DA5203: test $2,%bl;");
    asm("loc_6DA5206: je loc_6DA5255;");
    asm("loc_6DA5208: flds 0x24(%edi);");
    asm("loc_6DA520B: fmuls _data_6DB6120;");
    asm("loc_6DA5211: fmull _data_6DB6118;");
    asm("loc_6DA5217: call _sub_6DB20DE;");
    asm("loc_6DA521C: mov (%esi),%ecx;");
    asm("loc_6DA521E: mov 4(%esi),%edx;");
    asm("loc_6DA5221: add $2,%ecx;");
    asm("loc_6DA5224: cmp %edx,%ecx;");
    asm("loc_6DA5226: mov %ecx,(%esi);");
    asm("loc_6DA5228: jbe loc_6DA5231;");
    asm("loc_6DA522A: movl $0x16,0xC(%esi);");
    asm("loc_6DA5231: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA5234: test %ecx,%ecx;");
    asm("loc_6DA5236: je loc_6DA5247;");
    asm("loc_6DA5238: pop %edi;");
    asm("loc_6DA5239: pop %esi;");
    asm("loc_6DA523A: pop %ebp;");
    asm("loc_6DA523B: mov $0x16,%eax;");
    asm("loc_6DA5240: pop %ebx;");
    asm("loc_6DA5241: add $0xC,%esp;");
    asm("loc_6DA5244: ret $0xC;");
    asm("loc_6DA5247: mov (%ebp),%ecx;");
    asm("loc_6DA524A: mov %ax,(%ecx);");
    asm("loc_6DA524D: add $2,%ecx;");
    asm("loc_6DA5250: mov %ecx,(%ebp);");
    asm("loc_6DA5253: jmp loc_6DA5290;");
    asm("loc_6DA5255: mov (%esi),%edx;");
    asm("loc_6DA5257: mov 4(%esi),%ecx;");
    asm("loc_6DA525A: add $4,%edx;");
    asm("loc_6DA525D: mov %edx,%eax;");
    asm("loc_6DA525F: cmp %ecx,%eax;");
    asm("loc_6DA5261: mov %edx,(%esi);");
    asm("loc_6DA5263: jbe loc_6DA526C;");
    asm("loc_6DA5265: movl $0x16,0xC(%esi);");
    asm("loc_6DA526C: mov 0x1C(%edi),%eax;");
    asm("loc_6DA526F: test %eax,%eax;");
    asm("loc_6DA5271: je loc_6DA5282;");
    asm("loc_6DA5273: pop %edi;");
    asm("loc_6DA5274: pop %esi;");
    asm("loc_6DA5275: pop %ebp;");
    asm("loc_6DA5276: mov $0x16,%eax;");
    asm("loc_6DA527B: pop %ebx;");
    asm("loc_6DA527C: add $0xC,%esp;");
    asm("loc_6DA527F: ret $0xC;");
    asm("loc_6DA5282: mov (%ebp),%eax;");
    asm("loc_6DA5285: flds 0x24(%edi);");
    asm("loc_6DA5288: fstps (%eax);");
    asm("loc_6DA528A: add $4,%eax;");
    asm("loc_6DA528D: mov %eax,(%ebp);");
    asm("loc_6DA5290: test $4,%bl;");
    asm("loc_6DA5293: je loc_6DA52E6;");
    asm("loc_6DA5295: flds 0x28(%edi);");
    asm("loc_6DA5298: fmuls _data_6DB6124;");
    asm("loc_6DA529E: fmull _data_6DB3FD8;");
    asm("loc_6DA52A4: call _sub_6DB20DE;");
    asm("loc_6DA52A9: mov (%esi),%ebx;");
    asm("loc_6DA52AB: mov 4(%esi),%edx;");
    asm("loc_6DA52AE: inc %ebx;");
    asm("loc_6DA52AF: mov %ebx,%ecx;");
    asm("loc_6DA52B1: cmp %edx,%ecx;");
    asm("loc_6DA52B3: mov %ebx,(%esi);");
    asm("loc_6DA52B5: jbe loc_6DA52BE;");
    asm("loc_6DA52B7: movl $0x16,0xC(%esi);");
    asm("loc_6DA52BE: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA52C1: test %ecx,%ecx;");
    asm("loc_6DA52C3: je loc_6DA52D4;");
    asm("loc_6DA52C5: pop %edi;");
    asm("loc_6DA52C6: pop %esi;");
    asm("loc_6DA52C7: pop %ebp;");
    asm("loc_6DA52C8: mov $0x16,%eax;");
    asm("loc_6DA52CD: pop %ebx;");
    asm("loc_6DA52CE: add $0xC,%esp;");
    asm("loc_6DA52D1: ret $0xC;");
    asm("loc_6DA52D4: mov (%ebp),%ecx;");
    asm("loc_6DA52D7: mov 0x24(%esp),%bl;");
    asm("loc_6DA52DB: mov %al,(%ecx);");
    asm("loc_6DA52DD: inc %ecx;");
    asm("loc_6DA52DE: mov %ecx,(%ebp);");
    asm("loc_6DA52E1: jmp loc_6DA5373;");
    asm("loc_6DA52E6: test $8,%bl;");
    asm("loc_6DA52E9: je loc_6DA5338;");
    asm("loc_6DA52EB: flds 0x28(%edi);");
    asm("loc_6DA52EE: fmuls _data_6DB6120;");
    asm("loc_6DA52F4: fmull _data_6DB6118;");
    asm("loc_6DA52FA: call _sub_6DB20DE;");
    asm("loc_6DA52FF: mov (%esi),%ecx;");
    asm("loc_6DA5301: mov 4(%esi),%edx;");
    asm("loc_6DA5304: add $2,%ecx;");
    asm("loc_6DA5307: cmp %edx,%ecx;");
    asm("loc_6DA5309: mov %ecx,(%esi);");
    asm("loc_6DA530B: jbe loc_6DA5314;");
    asm("loc_6DA530D: movl $0x16,0xC(%esi);");
    asm("loc_6DA5314: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA5317: test %ecx,%ecx;");
    asm("loc_6DA5319: je loc_6DA532A;");
    asm("loc_6DA531B: pop %edi;");
    asm("loc_6DA531C: pop %esi;");
    asm("loc_6DA531D: pop %ebp;");
    asm("loc_6DA531E: mov $0x16,%eax;");
    asm("loc_6DA5323: pop %ebx;");
    asm("loc_6DA5324: add $0xC,%esp;");
    asm("loc_6DA5327: ret $0xC;");
    asm("loc_6DA532A: mov (%ebp),%ecx;");
    asm("loc_6DA532D: mov %ax,(%ecx);");
    asm("loc_6DA5330: add $2,%ecx;");
    asm("loc_6DA5333: mov %ecx,(%ebp);");
    asm("loc_6DA5336: jmp loc_6DA5373;");
    asm("loc_6DA5338: mov (%esi),%edx;");
    asm("loc_6DA533A: mov 4(%esi),%ecx;");
    asm("loc_6DA533D: add $4,%edx;");
    asm("loc_6DA5340: mov %edx,%eax;");
    asm("loc_6DA5342: cmp %ecx,%eax;");
    asm("loc_6DA5344: mov %edx,(%esi);");
    asm("loc_6DA5346: jbe loc_6DA534F;");
    asm("loc_6DA5348: movl $0x16,0xC(%esi);");
    asm("loc_6DA534F: mov 0x1C(%edi),%eax;");
    asm("loc_6DA5352: test %eax,%eax;");
    asm("loc_6DA5354: je loc_6DA5365;");
    asm("loc_6DA5356: pop %edi;");
    asm("loc_6DA5357: pop %esi;");
    asm("loc_6DA5358: pop %ebp;");
    asm("loc_6DA5359: mov $0x16,%eax;");
    asm("loc_6DA535E: pop %ebx;");
    asm("loc_6DA535F: add $0xC,%esp;");
    asm("loc_6DA5362: ret $0xC;");
    asm("loc_6DA5365: mov (%ebp),%eax;");
    asm("loc_6DA5368: flds 0x28(%edi);");
    asm("loc_6DA536B: fstps (%eax);");
    asm("loc_6DA536D: add $4,%eax;");
    asm("loc_6DA5370: mov %eax,(%ebp);");
    asm("loc_6DA5373: test $0x10,%bl;");
    asm("loc_6DA5376: je loc_6DA53C5;");
    asm("loc_6DA5378: flds 0x2C(%edi);");
    asm("loc_6DA537B: fmuls _data_6DB6124;");
    asm("loc_6DA5381: fmull _data_6DB3FD8;");
    asm("loc_6DA5387: call _sub_6DB20DE;");
    asm("loc_6DA538C: mov (%esi),%ebx;");
    asm("loc_6DA538E: mov 4(%esi),%edx;");
    asm("loc_6DA5391: inc %ebx;");
    asm("loc_6DA5392: mov %ebx,%ecx;");
    asm("loc_6DA5394: cmp %edx,%ecx;");
    asm("loc_6DA5396: mov %ebx,(%esi);");
    asm("loc_6DA5398: jbe loc_6DA53A1;");
    asm("loc_6DA539A: movl $0x16,0xC(%esi);");
    asm("loc_6DA53A1: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA53A4: test %ecx,%ecx;");
    asm("loc_6DA53A6: je loc_6DA53B7;");
    asm("loc_6DA53A8: pop %edi;");
    asm("loc_6DA53A9: pop %esi;");
    asm("loc_6DA53AA: pop %ebp;");
    asm("loc_6DA53AB: mov $0x16,%eax;");
    asm("loc_6DA53B0: pop %ebx;");
    asm("loc_6DA53B1: add $0xC,%esp;");
    asm("loc_6DA53B4: ret $0xC;");
    asm("loc_6DA53B7: mov (%ebp),%ecx;");
    asm("loc_6DA53BA: mov %al,(%ecx);");
    asm("loc_6DA53BC: inc %ecx;");
    asm("loc_6DA53BD: mov %ecx,(%ebp);");
    asm("loc_6DA53C0: jmp loc_6DA5454;");
    asm("loc_6DA53C5: test $0x20,%bl;");
    asm("loc_6DA53C8: je loc_6DA5419;");
    asm("loc_6DA53CA: flds 0x2C(%edi);");
    asm("loc_6DA53CD: fmuls _data_6DB6120;");
    asm("loc_6DA53D3: fmull _data_6DB6118;");
    asm("loc_6DA53D9: call _sub_6DB20DE;");
    asm("loc_6DA53DE: mov (%esi),%ebx;");
    asm("loc_6DA53E0: mov 4(%esi),%edx;");
    asm("loc_6DA53E3: add $2,%ebx;");
    asm("loc_6DA53E6: mov %ebx,%ecx;");
    asm("loc_6DA53E8: cmp %edx,%ecx;");
    asm("loc_6DA53EA: mov %ebx,(%esi);");
    asm("loc_6DA53EC: jbe loc_6DA53F5;");
    asm("loc_6DA53EE: movl $0x16,0xC(%esi);");
    asm("loc_6DA53F5: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA53F8: test %ecx,%ecx;");
    asm("loc_6DA53FA: je loc_6DA540B;");
    asm("loc_6DA53FC: pop %edi;");
    asm("loc_6DA53FD: pop %esi;");
    asm("loc_6DA53FE: pop %ebp;");
    asm("loc_6DA53FF: mov $0x16,%eax;");
    asm("loc_6DA5404: pop %ebx;");
    asm("loc_6DA5405: add $0xC,%esp;");
    asm("loc_6DA5408: ret $0xC;");
    asm("loc_6DA540B: mov (%ebp),%ecx;");
    asm("loc_6DA540E: mov %ax,(%ecx);");
    asm("loc_6DA5411: add $2,%ecx;");
    asm("loc_6DA5414: mov %ecx,(%ebp);");
    asm("loc_6DA5417: jmp loc_6DA5454;");
    asm("loc_6DA5419: mov (%esi),%edx;");
    asm("loc_6DA541B: mov 4(%esi),%ecx;");
    asm("loc_6DA541E: add $4,%edx;");
    asm("loc_6DA5421: mov %edx,%eax;");
    asm("loc_6DA5423: cmp %ecx,%eax;");
    asm("loc_6DA5425: mov %edx,(%esi);");
    asm("loc_6DA5427: jbe loc_6DA5430;");
    asm("loc_6DA5429: movl $0x16,0xC(%esi);");
    asm("loc_6DA5430: mov 0x1C(%edi),%eax;");
    asm("loc_6DA5433: test %eax,%eax;");
    asm("loc_6DA5435: je loc_6DA5446;");
    asm("loc_6DA5437: pop %edi;");
    asm("loc_6DA5438: pop %esi;");
    asm("loc_6DA5439: pop %ebp;");
    asm("loc_6DA543A: mov $0x16,%eax;");
    asm("loc_6DA543F: pop %ebx;");
    asm("loc_6DA5440: add $0xC,%esp;");
    asm("loc_6DA5443: ret $0xC;");
    asm("loc_6DA5446: mov (%ebp),%eax;");
    asm("loc_6DA5449: flds 0x2C(%edi);");
    asm("loc_6DA544C: fstps (%eax);");
    asm("loc_6DA544E: add $4,%eax;");
    asm("loc_6DA5451: mov %eax,(%ebp);");
    asm("loc_6DA5454: mov 0x34(%edi),%ecx;");
    asm("loc_6DA5457: test %ecx,%ecx;");
    asm("loc_6DA5459: jne loc_6DA545F;");
    asm("loc_6DA545B: xor %al,%al;");
    asm("loc_6DA545D: jmp loc_6DA546A;");
    asm("loc_6DA545F: mov 0x38(%edi),%eax;");
    asm("loc_6DA5462: sub %ecx,%eax;");
    asm("loc_6DA5464: sar $1,%eax;");
    asm("loc_6DA5466: cmp $1,%al;");
    asm("loc_6DA5468: je loc_6DA549E;");
    asm("loc_6DA546A: mov (%esi),%ebx;");
    asm("loc_6DA546C: mov 4(%esi),%edx;");
    asm("loc_6DA546F: inc %ebx;");
    asm("loc_6DA5470: mov %ebx,%ecx;");
    asm("loc_6DA5472: cmp %edx,%ecx;");
    asm("loc_6DA5474: mov %ebx,(%esi);");
    asm("loc_6DA5476: jbe loc_6DA547F;");
    asm("loc_6DA5478: movl $0x16,0xC(%esi);");
    asm("loc_6DA547F: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA5482: test %ecx,%ecx;");
    asm("loc_6DA5484: je loc_6DA5495;");
    asm("loc_6DA5486: pop %edi;");
    asm("loc_6DA5487: pop %esi;");
    asm("loc_6DA5488: pop %ebp;");
    asm("loc_6DA5489: mov $0x16,%eax;");
    asm("loc_6DA548E: pop %ebx;");
    asm("loc_6DA548F: add $0xC,%esp;");
    asm("loc_6DA5492: ret $0xC;");
    asm("loc_6DA5495: mov (%ebp),%ecx;");
    asm("loc_6DA5498: mov %al,(%ecx);");
    asm("loc_6DA549A: inc %ecx;");
    asm("loc_6DA549B: mov %ecx,(%ebp);");
    asm("loc_6DA549E: mov 0x34(%edi),%ecx;");
    asm("loc_6DA54A1: cmp 0x38(%edi),%ecx;");
    asm("loc_6DA54A4: je loc_6DA54DD;");
    asm("loc_6DA54A6: mov (%esi),%ebx;");
    asm("loc_6DA54A8: mov 4(%esi),%edx;");
    asm("loc_6DA54AB: add $2,%ebx;");
    asm("loc_6DA54AE: mov %ebx,%eax;");
    asm("loc_6DA54B0: cmp %edx,%eax;");
    asm("loc_6DA54B2: mov %ebx,(%esi);");
    asm("loc_6DA54B4: jbe loc_6DA54BD;");
    asm("loc_6DA54B6: movl $0x16,0xC(%esi);");
    asm("loc_6DA54BD: mov 0x1C(%edi),%eax;");
    asm("loc_6DA54C0: test %eax,%eax;");
    asm("loc_6DA54C2: jne loc_6DA54F1;");
    asm("loc_6DA54C4: mov (%ebp),%eax;");
    asm("loc_6DA54C7: mov (%ecx),%dx;");
    asm("loc_6DA54CA: mov %dx,(%eax);");
    asm("loc_6DA54CD: add $2,%eax;");
    asm("loc_6DA54D0: mov %eax,(%ebp);");
    asm("loc_6DA54D3: mov 0x38(%edi),%eax;");
    asm("loc_6DA54D6: add $2,%ecx;");
    asm("loc_6DA54D9: cmp %eax,%ecx;");
    asm("loc_6DA54DB: jne loc_6DA54A6;");
    asm("loc_6DA54DD: mov 0x14(%edi),%eax;");
    asm("loc_6DA54E0: push %esi;");
    asm("loc_6DA54E1: push %eax;");
    asm("loc_6DA54E2: push %ebp;");
    asm("loc_6DA54E3: mov %edi,%ecx;");
    asm("loc_6DA54E5: call _sub_6DA13C0;");
    asm("loc_6DA54EA: test %eax,%eax;");
    asm("loc_6DA54EC: mov %eax,0x1C(%edi);");
    asm("loc_6DA54EF: je loc_6DA5500;");
    asm("loc_6DA54F1: pop %edi;");
    asm("loc_6DA54F2: pop %esi;");
    asm("loc_6DA54F3: pop %ebp;");
    asm("loc_6DA54F4: mov $0x16,%eax;");
    asm("loc_6DA54F9: pop %ebx;");
    asm("loc_6DA54FA: add $0xC,%esp;");
    asm("loc_6DA54FD: ret $0xC;");
    asm("loc_6DA5500: mov (%esi),%ecx;");
    asm("loc_6DA5502: mov 0x28(%esp),%edx;");
    asm("loc_6DA5506: mov %ecx,(%edx);");
    asm("loc_6DA5508: mov 0xC(%edi),%eax;");
    asm("loc_6DA550B: push %eax;");
    asm("loc_6DA550C: call _sub_6DA16B0;");
    asm("loc_6DA5511: mov %eax,%ecx;");
    asm("loc_6DA5513: mov (%ecx),%ebp;");
    asm("loc_6DA5515: mov 0x18(%ecx),%ebx;");
    asm("loc_6DA5518: mov 0x10(%ecx),%eax;");
    asm("loc_6DA551B: add $4,%esp;");
    asm("loc_6DA551E: inc %ebp;");
    asm("loc_6DA551F: mov %ebp,(%ecx);");
    asm("loc_6DA5521: mov (%esi),%edx;");
    asm("loc_6DA5523: add %edx,%ebx;");
    asm("loc_6DA5525: mov %ebx,0x18(%ecx);");
    asm("loc_6DA5528: mov (%esi),%esi;");
    asm("loc_6DA552A: cmp %eax,%esi;");
    asm("loc_6DA552C: mov %ebp,%edi;");
    asm("loc_6DA552E: jbe loc_6DA5533;");
    asm("loc_6DA5530: mov %esi,0x10(%ecx);");
    asm("loc_6DA5533: mov 0x18(%ecx),%eax;");
    asm("loc_6DA5536: xor %edx,%edx;");
    asm("loc_6DA5538: div %edi;");
    asm("loc_6DA553A: pop %edi;");
    asm("loc_6DA553B: pop %esi;");
    asm("loc_6DA553C: pop %ebp;");
    asm("loc_6DA553D: pop %ebx;");
    asm("loc_6DA553E: mov %eax,8(%ecx);");
    asm("loc_6DA5541: xor %eax,%eax;");
    asm("loc_6DA5543: add $0xC,%esp;");
    asm("loc_6DA5546: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5550() // _sub_6DA5550
{
    __DEBUG_ASM(6DA5550);
    // chunk 0x6DA5550 _sub_6DA5550
    asm("loc_6DA5550: mov 8(%esp),%eax;");
    asm("loc_6DA5554: sub $0x10,%esp;");
    asm("loc_6DA5557: push %ebx;");
    asm("loc_6DA5558: push %ebp;");
    asm("loc_6DA5559: push %esi;");
    asm("loc_6DA555A: mov %ecx,%esi;");
    asm("loc_6DA555C: mov 0x20(%esp),%ecx;");
    asm("loc_6DA5560: push %edi;");
    asm("loc_6DA5561: lea 0x10(%esi),%ebp;");
    asm("loc_6DA5564: push %ebp;");
    asm("loc_6DA5565: push %eax;");
    asm("loc_6DA5566: mov %ecx,8(%ebp);");
    asm("loc_6DA5569: lea 0x18(%esi),%edi;");
    asm("loc_6DA556C: push %edi;");
    asm("loc_6DA556D: mov %esi,%ecx;");
    asm("loc_6DA556F: mov %eax,4(%ebp);");
    asm("loc_6DA5572: movl $0,(%ebp);");
    asm("loc_6DA5579: movl $0,0xC(%ebp);");
    asm("loc_6DA5580: call _sub_6DA13C0;");
    asm("loc_6DA5585: test %eax,%eax;");
    asm("loc_6DA5587: mov %eax,0x1C(%esi);");
    asm("loc_6DA558A: je loc_6DA559B;");
    asm("loc_6DA558C: pop %edi;");
    asm("loc_6DA558D: pop %esi;");
    asm("loc_6DA558E: pop %ebp;");
    asm("loc_6DA558F: mov $0x17,%eax;");
    asm("loc_6DA5594: pop %ebx;");
    asm("loc_6DA5595: add $0x10,%esp;");
    asm("loc_6DA5598: ret $0xC;");
    asm("loc_6DA559B: mov (%ebp),%edx;");
    asm("loc_6DA559E: mov 4(%ebp),%ecx;");
    asm("loc_6DA55A1: add $4,%edx;");
    asm("loc_6DA55A4: mov %edx,%eax;");
    asm("loc_6DA55A6: cmp %ecx,%eax;");
    asm("loc_6DA55A8: mov %edx,(%ebp);");
    asm("loc_6DA55AB: jbe loc_6DA55B4;");
    asm("loc_6DA55AD: movl $0x17,0xC(%ebp);");
    asm("loc_6DA55B4: mov 0x1C(%esi),%eax;");
    asm("loc_6DA55B7: test %eax,%eax;");
    asm("loc_6DA55B9: jne loc_6DA5B53;");
    asm("loc_6DA55BF: mov (%edi),%eax;");
    asm("loc_6DA55C1: mov (%eax),%edx;");
    asm("loc_6DA55C3: add $4,%eax;");
    asm("loc_6DA55C6: mov %edx,0x20(%esi);");
    asm("loc_6DA55C9: mov %eax,(%edi);");
    asm("loc_6DA55CB: calll *_import_6DB305C;");
    asm("loc_6DA55D1: test %al,%al;");
    asm("loc_6DA55D3: mov 4(%ebp),%ecx;");
    asm("loc_6DA55D6: mov (%ebp),%edx;");
    asm("loc_6DA55D9: je loc_6DA56BD;");
    asm("loc_6DA55DF: add $0xC,%edx;");
    asm("loc_6DA55E2: mov %edx,%eax;");
    asm("loc_6DA55E4: cmp %ecx,%eax;");
    asm("loc_6DA55E6: mov %edx,(%ebp);");
    asm("loc_6DA55E9: jbe loc_6DA55F2;");
    asm("loc_6DA55EB: movl $0x17,0xC(%ebp);");
    asm("loc_6DA55F2: mov 0x1C(%esi),%eax;");
    asm("loc_6DA55F5: test %eax,%eax;");
    asm("loc_6DA55F7: jne loc_6DA5B53;");
    asm("loc_6DA55FD: mov (%edi),%ebx;");
    asm("loc_6DA55FF: push %ebx;");
    asm("loc_6DA5600: lea 0x24(%esi),%ecx;");
    asm("loc_6DA5603: call _sub_6D8F510;");
    asm("loc_6DA5608: add $0xC,%ebx;");
    asm("loc_6DA560B: mov %ebx,(%edi);");
    asm("loc_6DA560D: mov (%ebp),%edx;");
    asm("loc_6DA5610: mov 4(%ebp),%ecx;");
    asm("loc_6DA5613: inc %edx;");
    asm("loc_6DA5614: mov %edx,%eax;");
    asm("loc_6DA5616: cmp %ecx,%eax;");
    asm("loc_6DA5618: mov %edx,(%ebp);");
    asm("loc_6DA561B: jbe loc_6DA5624;");
    asm("loc_6DA561D: movl $0x17,0xC(%ebp);");
    asm("loc_6DA5624: mov 0x1C(%esi),%eax;");
    asm("loc_6DA5627: test %eax,%eax;");
    asm("loc_6DA5629: jne loc_6DA5B53;");
    asm("loc_6DA562F: mov (%edi),%eax;");
    asm("loc_6DA5631: mov (%eax),%cl;");
    asm("loc_6DA5633: inc %eax;");
    asm("loc_6DA5634: xor %bl,%bl;");
    asm("loc_6DA5636: test %cl,%cl;");
    asm("loc_6DA5638: mov %cl,0x24(%esp);");
    asm("loc_6DA563C: mov %eax,(%edi);");
    asm("loc_6DA563E: jbe loc_6DA5692;");
    asm("loc_6DA5640: mov (%ebp),%edx;");
    asm("loc_6DA5643: mov 4(%ebp),%ecx;");
    asm("loc_6DA5646: add $2,%edx;");
    asm("loc_6DA5649: mov %edx,%eax;");
    asm("loc_6DA564B: cmp %ecx,%eax;");
    asm("loc_6DA564D: mov %edx,(%ebp);");
    asm("loc_6DA5650: jbe loc_6DA5659;");
    asm("loc_6DA5652: movl $0x17,0xC(%ebp);");
    asm("loc_6DA5659: mov 0x1C(%esi),%eax;");
    asm("loc_6DA565C: test %eax,%eax;");
    asm("loc_6DA565E: jne loc_6DA5AF9;");
    asm("loc_6DA5664: mov (%edi),%eax;");
    asm("loc_6DA5666: xor %ecx,%ecx;");
    asm("loc_6DA5668: mov (%eax),%cx;");
    asm("loc_6DA566B: add $2,%eax;");
    asm("loc_6DA566E: lea 0x14(%esp),%edx;");
    asm("loc_6DA5672: push %edx;");
    asm("loc_6DA5673: mov %eax,(%edi);");
    asm("loc_6DA5675: mov 0x38(%esi),%eax;");
    asm("loc_6DA5678: push $1;");
    asm("loc_6DA567A: mov %ecx,0x1C(%esp);");
    asm("loc_6DA567E: lea 0x30(%esi),%ecx;");
    asm("loc_6DA5681: push %eax;");
    asm("loc_6DA5682: calll *_import_6DB3114;");
    asm("loc_6DA5688: mov 0x24(%esp),%al;");
    asm("loc_6DA568C: inc %bl;");
    asm("loc_6DA568E: cmp %al,%bl;");
    asm("loc_6DA5690: jb loc_6DA5640;");
    asm("loc_6DA5692: mov 0x28(%esp),%eax;");
    asm("loc_6DA5696: push %ebp;");
    asm("loc_6DA5697: push %eax;");
    asm("loc_6DA5698: lea 0x18(%esi),%eax;");
    asm("loc_6DA569B: push %eax;");
    asm("loc_6DA569C: mov %esi,%ecx;");
    asm("loc_6DA569E: call _sub_6DA13C0;");
    asm("loc_6DA56A3: test %eax,%eax;");
    asm("loc_6DA56A5: mov %eax,0x1C(%esi);");
    asm("loc_6DA56A8: je loc_6DA5B06;");
    asm("loc_6DA56AE: pop %edi;");
    asm("loc_6DA56AF: pop %esi;");
    asm("loc_6DA56B0: pop %ebp;");
    asm("loc_6DA56B1: mov $0x17,%eax;");
    asm("loc_6DA56B6: pop %ebx;");
    asm("loc_6DA56B7: add $0x10,%esp;");
    asm("loc_6DA56BA: ret $0xC;");
    asm("loc_6DA56BD: inc %edx;");
    asm("loc_6DA56BE: mov %edx,%eax;");
    asm("loc_6DA56C0: cmp %ecx,%eax;");
    asm("loc_6DA56C2: mov %edx,(%ebp);");
    asm("loc_6DA56C5: mov $0x17,%ebx;");
    asm("loc_6DA56CA: jbe loc_6DA56CF;");
    asm("loc_6DA56CC: mov %ebx,0xC(%ebp);");
    asm("loc_6DA56CF: mov 0x1C(%esi),%eax;");
    asm("loc_6DA56D2: test %eax,%eax;");
    asm("loc_6DA56D4: jne loc_6DA5B53;");
    asm("loc_6DA56DA: mov (%edi),%eax;");
    asm("loc_6DA56DC: mov (%eax),%dl;");
    asm("loc_6DA56DE: inc %eax;");
    asm("loc_6DA56DF: test $1,%dl;");
    asm("loc_6DA56E2: mov %eax,(%edi);");
    asm("loc_6DA56E4: mov 4(%ebp),%ecx;");
    asm("loc_6DA56E7: mov (%ebp),%eax;");
    asm("loc_6DA56EA: je loc_6DA571D;");
    asm("loc_6DA56EC: inc %eax;");
    asm("loc_6DA56ED: cmp %ecx,%eax;");
    asm("loc_6DA56EF: mov %eax,(%ebp);");
    asm("loc_6DA56F2: jbe loc_6DA56F7;");
    asm("loc_6DA56F4: mov %ebx,0xC(%ebp);");
    asm("loc_6DA56F7: mov 0x1C(%esi),%eax;");
    asm("loc_6DA56FA: test %eax,%eax;");
    asm("loc_6DA56FC: jne loc_6DA5B53;");
    asm("loc_6DA5702: mov (%edi),%eax;");
    asm("loc_6DA5704: mov (%eax),%cl;");
    asm("loc_6DA5706: movsbl %cl,%ecx;");
    asm("loc_6DA5709: mov %ecx,0x24(%esp);");
    asm("loc_6DA570D: inc %eax;");
    asm("loc_6DA570E: fildl 0x24(%esp);");
    asm("loc_6DA5712: fmull _data_6DB6140;");
    asm("loc_6DA5718: fstps 0x24(%esi);");
    asm("loc_6DA571B: jmp loc_6DA577C;");
    asm("loc_6DA571D: test $2,%dl;");
    asm("loc_6DA5720: je loc_6DA575A;");
    asm("loc_6DA5722: add $2,%eax;");
    asm("loc_6DA5725: cmp %ecx,%eax;");
    asm("loc_6DA5727: mov %eax,(%ebp);");
    asm("loc_6DA572A: jbe loc_6DA572F;");
    asm("loc_6DA572C: mov %ebx,0xC(%ebp);");
    asm("loc_6DA572F: mov 0x1C(%esi),%eax;");
    asm("loc_6DA5732: test %eax,%eax;");
    asm("loc_6DA5734: jne loc_6DA5B53;");
    asm("loc_6DA573A: mov (%edi),%eax;");
    asm("loc_6DA573C: mov (%eax),%cx;");
    asm("loc_6DA573F: add $2,%eax;");
    asm("loc_6DA5742: mov %eax,(%edi);");
    asm("loc_6DA5744: movswl %cx,%eax;");
    asm("loc_6DA5747: mov %eax,0x24(%esp);");
    asm("loc_6DA574B: fildl 0x24(%esp);");
    asm("loc_6DA574F: fmull _data_6DB6138;");
    asm("loc_6DA5755: fstps 0x24(%esi);");
    asm("loc_6DA5758: jmp loc_6DA577E;");
    asm("loc_6DA575A: add $4,%eax;");
    asm("loc_6DA575D: cmp %ecx,%eax;");
    asm("loc_6DA575F: mov %eax,(%ebp);");
    asm("loc_6DA5762: jbe loc_6DA5767;");
    asm("loc_6DA5764: mov %ebx,0xC(%ebp);");
    asm("loc_6DA5767: mov 0x1C(%esi),%eax;");
    asm("loc_6DA576A: test %eax,%eax;");
    asm("loc_6DA576C: jne loc_6DA5B53;");
    asm("loc_6DA5772: mov (%edi),%eax;");
    asm("loc_6DA5774: mov (%eax),%ecx;");
    asm("loc_6DA5776: mov %ecx,0x24(%esi);");
    asm("loc_6DA5779: add $4,%eax;");
    asm("loc_6DA577C: mov %eax,(%edi);");
    asm("loc_6DA577E: test $4,%dl;");
    asm("loc_6DA5781: mov 4(%ebp),%ecx;");
    asm("loc_6DA5784: mov (%ebp),%eax;");
    asm("loc_6DA5787: je loc_6DA57BC;");
    asm("loc_6DA5789: inc %eax;");
    asm("loc_6DA578A: cmp %ecx,%eax;");
    asm("loc_6DA578C: mov %eax,(%ebp);");
    asm("loc_6DA578F: jbe loc_6DA5794;");
    asm("loc_6DA5791: mov %ebx,0xC(%ebp);");
    asm("loc_6DA5794: mov 0x1C(%esi),%eax;");
    asm("loc_6DA5797: test %eax,%eax;");
    asm("loc_6DA5799: jne loc_6DA5B53;");
    asm("loc_6DA579F: mov (%edi),%eax;");
    asm("loc_6DA57A1: mov (%eax),%cl;");
    asm("loc_6DA57A3: inc %eax;");
    asm("loc_6DA57A4: mov %eax,(%edi);");
    asm("loc_6DA57A6: movsbl %cl,%eax;");
    asm("loc_6DA57A9: mov %eax,0x24(%esp);");
    asm("loc_6DA57AD: fildl 0x24(%esp);");
    asm("loc_6DA57B1: fmull _data_6DB6140;");
    asm("loc_6DA57B7: fstps 0x28(%esi);");
    asm("loc_6DA57BA: jmp loc_6DA581B;");
    asm("loc_6DA57BC: test $8,%dl;");
    asm("loc_6DA57BF: je loc_6DA57F7;");
    asm("loc_6DA57C1: add $2,%eax;");
    asm("loc_6DA57C4: cmp %ecx,%eax;");
    asm("loc_6DA57C6: mov %eax,(%ebp);");
    asm("loc_6DA57C9: jbe loc_6DA57CE;");
    asm("loc_6DA57CB: mov %ebx,0xC(%ebp);");
    asm("loc_6DA57CE: mov 0x1C(%esi),%eax;");
    asm("loc_6DA57D1: test %eax,%eax;");
    asm("loc_6DA57D3: jne loc_6DA5B53;");
    asm("loc_6DA57D9: mov (%edi),%eax;");
    asm("loc_6DA57DB: mov (%eax),%cx;");
    asm("loc_6DA57DE: movswl %cx,%ecx;");
    asm("loc_6DA57E1: mov %ecx,0x24(%esp);");
    asm("loc_6DA57E5: add $2,%eax;");
    asm("loc_6DA57E8: fildl 0x24(%esp);");
    asm("loc_6DA57EC: fmull _data_6DB6138;");
    asm("loc_6DA57F2: fstps 0x28(%esi);");
    asm("loc_6DA57F5: jmp loc_6DA5819;");
    asm("loc_6DA57F7: add $4,%eax;");
    asm("loc_6DA57FA: cmp %ecx,%eax;");
    asm("loc_6DA57FC: mov %eax,(%ebp);");
    asm("loc_6DA57FF: jbe loc_6DA5804;");
    asm("loc_6DA5801: mov %ebx,0xC(%ebp);");
    asm("loc_6DA5804: mov 0x1C(%esi),%eax;");
    asm("loc_6DA5807: test %eax,%eax;");
    asm("loc_6DA5809: jne loc_6DA5B53;");
    asm("loc_6DA580F: mov (%edi),%eax;");
    asm("loc_6DA5811: mov (%eax),%ecx;");
    asm("loc_6DA5813: mov %ecx,0x28(%esi);");
    asm("loc_6DA5816: add $4,%eax;");
    asm("loc_6DA5819: mov %eax,(%edi);");
    asm("loc_6DA581B: test $0x10,%dl;");
    asm("loc_6DA581E: mov 4(%ebp),%ecx;");
    asm("loc_6DA5821: mov (%ebp),%eax;");
    asm("loc_6DA5824: je loc_6DA5859;");
    asm("loc_6DA5826: inc %eax;");
    asm("loc_6DA5827: cmp %ecx,%eax;");
    asm("loc_6DA5829: mov %eax,(%ebp);");
    asm("loc_6DA582C: jbe loc_6DA5831;");
    asm("loc_6DA582E: mov %ebx,0xC(%ebp);");
    asm("loc_6DA5831: mov 0x1C(%esi),%eax;");
    asm("loc_6DA5834: test %eax,%eax;");
    asm("loc_6DA5836: jne loc_6DA5B53;");
    asm("loc_6DA583C: mov (%edi),%eax;");
    asm("loc_6DA583E: mov (%eax),%cl;");
    asm("loc_6DA5840: inc %eax;");
    asm("loc_6DA5841: mov %eax,(%edi);");
    asm("loc_6DA5843: movsbl %cl,%eax;");
    asm("loc_6DA5846: mov %eax,0x24(%esp);");
    asm("loc_6DA584A: fildl 0x24(%esp);");
    asm("loc_6DA584E: fmull _data_6DB6140;");
    asm("loc_6DA5854: fstps 0x2C(%esi);");
    asm("loc_6DA5857: jmp loc_6DA58B8;");
    asm("loc_6DA5859: test $0x20,%dl;");
    asm("loc_6DA585C: je loc_6DA5894;");
    asm("loc_6DA585E: add $2,%eax;");
    asm("loc_6DA5861: cmp %ecx,%eax;");
    asm("loc_6DA5863: mov %eax,(%ebp);");
    asm("loc_6DA5866: jbe loc_6DA586B;");
    asm("loc_6DA5868: mov %ebx,0xC(%ebp);");
    asm("loc_6DA586B: mov 0x1C(%esi),%eax;");
    asm("loc_6DA586E: test %eax,%eax;");
    asm("loc_6DA5870: jne loc_6DA5B53;");
    asm("loc_6DA5876: mov (%edi),%eax;");
    asm("loc_6DA5878: mov (%eax),%cx;");
    asm("loc_6DA587B: movswl %cx,%ecx;");
    asm("loc_6DA587E: mov %ecx,0x24(%esp);");
    asm("loc_6DA5882: add $2,%eax;");
    asm("loc_6DA5885: fildl 0x24(%esp);");
    asm("loc_6DA5889: fmull _data_6DB6138;");
    asm("loc_6DA588F: fstps 0x2C(%esi);");
    asm("loc_6DA5892: jmp loc_6DA58B6;");
    asm("loc_6DA5894: add $4,%eax;");
    asm("loc_6DA5897: cmp %ecx,%eax;");
    asm("loc_6DA5899: mov %eax,(%ebp);");
    asm("loc_6DA589C: jbe loc_6DA58A1;");
    asm("loc_6DA589E: mov %ebx,0xC(%ebp);");
    asm("loc_6DA58A1: mov 0x1C(%esi),%eax;");
    asm("loc_6DA58A4: test %eax,%eax;");
    asm("loc_6DA58A6: jne loc_6DA5B53;");
    asm("loc_6DA58AC: mov (%edi),%eax;");
    asm("loc_6DA58AE: mov (%eax),%ecx;");
    asm("loc_6DA58B0: mov %ecx,0x2C(%esi);");
    asm("loc_6DA58B3: add $4,%eax;");
    asm("loc_6DA58B6: mov %eax,(%edi);");
    asm("loc_6DA58B8: test $0x40,%dl;");
    asm("loc_6DA58BB: je loc_6DA58C4;");
    asm("loc_6DA58BD: movb $1,0x24(%esp);");
    asm("loc_6DA58C2: jmp loc_6DA58ED;");
    asm("loc_6DA58C4: mov (%ebp),%edx;");
    asm("loc_6DA58C7: mov 4(%ebp),%ecx;");
    asm("loc_6DA58CA: inc %edx;");
    asm("loc_6DA58CB: mov %edx,%eax;");
    asm("loc_6DA58CD: cmp %ecx,%eax;");
    asm("loc_6DA58CF: mov %edx,(%ebp);");
    asm("loc_6DA58D2: jbe loc_6DA58D7;");
    asm("loc_6DA58D4: mov %ebx,0xC(%ebp);");
    asm("loc_6DA58D7: mov 0x1C(%esi),%eax;");
    asm("loc_6DA58DA: test %eax,%eax;");
    asm("loc_6DA58DC: jne loc_6DA5B53;");
    asm("loc_6DA58E2: mov (%edi),%eax;");
    asm("loc_6DA58E4: mov (%eax),%dl;");
    asm("loc_6DA58E6: inc %eax;");
    asm("loc_6DA58E7: mov %dl,0x24(%esp);");
    asm("loc_6DA58EB: mov %eax,(%edi);");
    asm("loc_6DA58ED: mov 0x24(%esp),%al;");
    asm("loc_6DA58F1: test %al,%al;");
    asm("loc_6DA58F3: movb $0,0x13(%esp);");
    asm("loc_6DA58F8: jbe loc_6DA5692;");
    asm("loc_6DA58FE: mov %edi,%edi;");
    asm("loc_6DA5900: mov (%ebp),%edx;");
    asm("loc_6DA5903: mov 4(%ebp),%ecx;");
    asm("loc_6DA5906: add $2,%edx;");
    asm("loc_6DA5909: mov %edx,%eax;");
    asm("loc_6DA590B: cmp %ecx,%eax;");
    asm("loc_6DA590D: mov %edx,(%ebp);");
    asm("loc_6DA5910: jbe loc_6DA5919;");
    asm("loc_6DA5912: movl $0x17,0xC(%ebp);");
    asm("loc_6DA5919: mov 0x1C(%esi),%eax;");
    asm("loc_6DA591C: test %eax,%eax;");
    asm("loc_6DA591E: jne loc_6DA5AF9;");
    asm("loc_6DA5924: mov 0x18(%esi),%eax;");
    asm("loc_6DA5927: xor %ebx,%ebx;");
    asm("loc_6DA5929: mov (%eax),%bx;");
    asm("loc_6DA592C: add $2,%eax;");
    asm("loc_6DA592F: mov %eax,0x18(%esi);");
    asm("loc_6DA5932: mov 0x38(%esi),%eax;");
    asm("loc_6DA5935: mov 0x3C(%esi),%ecx;");
    asm("loc_6DA5938: sub %eax,%ecx;");
    asm("loc_6DA593A: sar $1,%ecx;");
    asm("loc_6DA593C: cmp $1,%ecx;");
    asm("loc_6DA593F: mov %ebx,0x14(%esp);");
    asm("loc_6DA5943: mov %eax,%edi;");
    asm("loc_6DA5945: jae loc_6DA5A21;");
    asm("loc_6DA594B: mov 0x34(%esi),%edx;");
    asm("loc_6DA594E: test %edx,%edx;");
    asm("loc_6DA5950: je loc_6DA595D;");
    asm("loc_6DA5952: mov %eax,%ecx;");
    asm("loc_6DA5954: sub %edx,%ecx;");
    asm("loc_6DA5956: sar $1,%ecx;");
    asm("loc_6DA5958: cmp $1,%ecx;");
    asm("loc_6DA595B: ja loc_6DA5962;");
    asm("loc_6DA595D: mov $1,%ecx;");
    asm("loc_6DA5962: test %edx,%edx;");
    asm("loc_6DA5964: jne loc_6DA596A;");
    asm("loc_6DA5966: xor %eax,%eax;");
    asm("loc_6DA5968: jmp loc_6DA596E;");
    asm("loc_6DA596A: sub %edx,%eax;");
    asm("loc_6DA596C: sar $1,%eax;");
    asm("loc_6DA596E: add %ecx,%eax;");
    asm("loc_6DA5970: test %eax,%eax;");
    asm("loc_6DA5972: mov %eax,0x1C(%esp);");
    asm("loc_6DA5976: jge loc_6DA597A;");
    asm("loc_6DA5978: xor %eax,%eax;");
    asm("loc_6DA597A: lea (%eax,%eax),%edx;");
    asm("loc_6DA597D: push %edx;");
    asm("loc_6DA597E: call _sub_6DB1F8A;");
    asm("loc_6DA5983: mov 0x34(%esi),%ecx;");
    asm("loc_6DA5986: add $4,%esp;");
    asm("loc_6DA5989: cmp %edi,%ecx;");
    asm("loc_6DA598B: mov %eax,%ebx;");
    asm("loc_6DA598D: mov %ebx,0x18(%esp);");
    asm("loc_6DA5991: je loc_6DA59A7;");
    asm("loc_6DA5993: test %eax,%eax;");
    asm("loc_6DA5995: je loc_6DA599D;");
    asm("loc_6DA5997: mov (%ecx),%dx;");
    asm("loc_6DA599A: mov %dx,(%eax);");
    asm("loc_6DA599D: add $2,%ecx;");
    asm("loc_6DA59A0: add $2,%eax;");
    asm("loc_6DA59A3: cmp %edi,%ecx;");
    asm("loc_6DA59A5: jne loc_6DA5993;");
    asm("loc_6DA59A7: test %eax,%eax;");
    asm("loc_6DA59A9: je loc_6DA59B3;");
    asm("loc_6DA59AB: mov 0x14(%esp),%cx;");
    asm("loc_6DA59B0: mov %cx,(%eax);");
    asm("loc_6DA59B3: mov 0x38(%esi),%edx;");
    asm("loc_6DA59B6: cmp %edx,%edi;");
    asm("loc_6DA59B8: lea 2(%eax),%ecx;");
    asm("loc_6DA59BB: je loc_6DA59DD;");
    asm("loc_6DA59BD: mov %ecx,%ebx;");
    asm("loc_6DA59BF: sub %eax,%ebx;");
    asm("loc_6DA59C1: lea -2(%ebx,%edi),%eax;");
    asm("loc_6DA59C5: test %ecx,%ecx;");
    asm("loc_6DA59C7: je loc_6DA59CF;");
    asm("loc_6DA59C9: mov (%eax),%di;");
    asm("loc_6DA59CC: mov %di,(%ecx);");
    asm("loc_6DA59CF: add $2,%eax;");
    asm("loc_6DA59D2: add $2,%ecx;");
    asm("loc_6DA59D5: cmp %edx,%eax;");
    asm("loc_6DA59D7: jne loc_6DA59C5;");
    asm("loc_6DA59D9: mov 0x18(%esp),%ebx;");
    asm("loc_6DA59DD: mov 0x34(%esi),%edx;");
    asm("loc_6DA59E0: push %edx;");
    asm("loc_6DA59E1: call _sub_6DB1DC2;");
    asm("loc_6DA59E6: mov 0x20(%esp),%eax;");
    asm("loc_6DA59EA: lea (%ebx,%eax,2),%ecx;");
    asm("loc_6DA59ED: mov %ecx,0x3C(%esi);");
    asm("loc_6DA59F0: mov 0x34(%esi),%ecx;");
    asm("loc_6DA59F3: add $4,%esp;");
    asm("loc_6DA59F6: test %ecx,%ecx;");
    asm("loc_6DA59F8: jne loc_6DA5A0B;");
    asm("loc_6DA59FA: xor %eax,%eax;");
    asm("loc_6DA59FC: lea 2(%ebx,%eax,2),%edx;");
    asm("loc_6DA5A00: mov %edx,0x38(%esi);");
    asm("loc_6DA5A03: mov %ebx,0x34(%esi);");
    asm("loc_6DA5A06: jmp loc_6DA5ADE;");
    asm("loc_6DA5A0B: mov 0x38(%esi),%eax;");
    asm("loc_6DA5A0E: sub %ecx,%eax;");
    asm("loc_6DA5A10: sar $1,%eax;");
    asm("loc_6DA5A12: lea 2(%ebx,%eax,2),%edx;");
    asm("loc_6DA5A16: mov %edx,0x38(%esi);");
    asm("loc_6DA5A19: mov %ebx,0x34(%esi);");
    asm("loc_6DA5A1C: jmp loc_6DA5ADE;");
    asm("loc_6DA5A21: mov %eax,%ecx;");
    asm("loc_6DA5A23: sub %edi,%ecx;");
    asm("loc_6DA5A25: sar $1,%ecx;");
    asm("loc_6DA5A27: cmp $1,%ecx;");
    asm("loc_6DA5A2A: jae loc_6DA5A82;");
    asm("loc_6DA5A2C: cmp %eax,%edi;");
    asm("loc_6DA5A2E: lea 2(%edi),%ecx;");
    asm("loc_6DA5A31: je loc_6DA5A4E;");
    asm("loc_6DA5A33: lea -2(%ecx),%edx;");
    asm("loc_6DA5A36: test %ecx,%ecx;");
    asm("loc_6DA5A38: je loc_6DA5A44;");
    asm("loc_6DA5A3A: mov (%edx),%bx;");
    asm("loc_6DA5A3D: mov %bx,(%ecx);");
    asm("loc_6DA5A40: mov 0x14(%esp),%ebx;");
    asm("loc_6DA5A44: add $2,%edx;");
    asm("loc_6DA5A47: add $2,%ecx;");
    asm("loc_6DA5A4A: cmp %eax,%edx;");
    asm("loc_6DA5A4C: jne loc_6DA5A36;");
    asm("loc_6DA5A4E: mov 0x38(%esi),%ecx;");
    asm("loc_6DA5A51: mov %ecx,%edx;");
    asm("loc_6DA5A53: sub %edi,%edx;");
    asm("loc_6DA5A55: sar $1,%edx;");
    asm("loc_6DA5A57: mov $1,%eax;");
    asm("loc_6DA5A5C: sub %edx,%eax;");
    asm("loc_6DA5A5E: je loc_6DA5A6D;");
    asm("loc_6DA5A60: test %ecx,%ecx;");
    asm("loc_6DA5A62: je loc_6DA5A67;");
    asm("loc_6DA5A64: mov %bx,(%ecx);");
    asm("loc_6DA5A67: add $2,%ecx;");
    asm("loc_6DA5A6A: dec %eax;");
    asm("loc_6DA5A6B: jne loc_6DA5A60;");
    asm("loc_6DA5A6D: mov 0x38(%esi),%ecx;");
    asm("loc_6DA5A70: cmp %ecx,%edi;");
    asm("loc_6DA5A72: mov %edi,%eax;");
    asm("loc_6DA5A74: je loc_6DA5ADA;");
    asm("loc_6DA5A76: mov %bx,(%eax);");
    asm("loc_6DA5A79: add $2,%eax;");
    asm("loc_6DA5A7C: cmp %ecx,%eax;");
    asm("loc_6DA5A7E: jne loc_6DA5A76;");
    asm("loc_6DA5A80: jmp loc_6DA5ADA;");
    asm("loc_6DA5A82: lea -2(%eax),%ecx;");
    asm("loc_6DA5A85: cmp %eax,%ecx;");
    asm("loc_6DA5A87: mov %eax,%edx;");
    asm("loc_6DA5A89: je loc_6DA5AA8;");
    asm("loc_6DA5A8B: nop;");
    asm("loc_6DA5A8C: lea (%esp),%esp;");
    asm("loc_6DA5A90: test %edx,%edx;");
    asm("loc_6DA5A92: je loc_6DA5A9E;");
    asm("loc_6DA5A94: mov (%ecx),%bx;");
    asm("loc_6DA5A97: mov %bx,(%edx);");
    asm("loc_6DA5A9A: mov 0x14(%esp),%ebx;");
    asm("loc_6DA5A9E: add $2,%ecx;");
    asm("loc_6DA5AA1: add $2,%edx;");
    asm("loc_6DA5AA4: cmp %eax,%ecx;");
    asm("loc_6DA5AA6: jne loc_6DA5A90;");
    asm("loc_6DA5AA8: mov 0x38(%esi),%ecx;");
    asm("loc_6DA5AAB: lea -2(%ecx),%eax;");
    asm("loc_6DA5AAE: cmp %eax,%edi;");
    asm("loc_6DA5AB0: je loc_6DA5AC3;");
    asm("loc_6DA5AB2: mov -2(%eax),%dx;");
    asm("loc_6DA5AB6: sub $2,%eax;");
    asm("loc_6DA5AB9: sub $2,%ecx;");
    asm("loc_6DA5ABC: cmp %edi,%eax;");
    asm("loc_6DA5ABE: mov %dx,(%ecx);");
    asm("loc_6DA5AC1: jne loc_6DA5AB2;");
    asm("loc_6DA5AC3: lea 2(%edi),%ecx;");
    asm("loc_6DA5AC6: cmp %ecx,%edi;");
    asm("loc_6DA5AC8: mov %edi,%eax;");
    asm("loc_6DA5ACA: je loc_6DA5ADA;");
    asm("loc_6DA5ACC: lea (%esp),%esp;");
    asm("loc_6DA5AD0: mov %bx,(%eax);");
    asm("loc_6DA5AD3: add $2,%eax;");
    asm("loc_6DA5AD6: cmp %ecx,%eax;");
    asm("loc_6DA5AD8: jne loc_6DA5AD0;");
    asm("loc_6DA5ADA: addl $2,0x38(%esi);");
    asm("loc_6DA5ADE: mov 0x13(%esp),%al;");
    asm("loc_6DA5AE2: mov 0x24(%esp),%cl;");
    asm("loc_6DA5AE6: inc %al;");
    asm("loc_6DA5AE8: cmp %cl,%al;");
    asm("loc_6DA5AEA: mov %al,0x13(%esp);");
    asm("loc_6DA5AEE: jb loc_6DA5900;");
    asm("loc_6DA5AF4: jmp loc_6DA5692;");
    asm("loc_6DA5AF9: mov 0x1C(%esi),%eax;");
    asm("loc_6DA5AFC: pop %edi;");
    asm("loc_6DA5AFD: pop %esi;");
    asm("loc_6DA5AFE: pop %ebp;");
    asm("loc_6DA5AFF: pop %ebx;");
    asm("loc_6DA5B00: add $0x10,%esp;");
    asm("loc_6DA5B03: ret $0xC;");
    asm("loc_6DA5B06: mov (%ebp),%ecx;");
    asm("loc_6DA5B09: mov 0x2C(%esp),%edx;");
    asm("loc_6DA5B0D: mov %ecx,(%edx);");
    asm("loc_6DA5B0F: mov 0xC(%esi),%eax;");
    asm("loc_6DA5B12: push %eax;");
    asm("loc_6DA5B13: call _sub_6DA16B0;");
    asm("loc_6DA5B18: mov %eax,%ecx;");
    asm("loc_6DA5B1A: mov 4(%ecx),%edx;");
    asm("loc_6DA5B1D: mov 0x1C(%ecx),%ebx;");
    asm("loc_6DA5B20: mov 0x14(%ecx),%eax;");
    asm("loc_6DA5B23: add $4,%esp;");
    asm("loc_6DA5B26: inc %edx;");
    asm("loc_6DA5B27: mov %edx,4(%ecx);");
    asm("loc_6DA5B2A: mov %edx,%esi;");
    asm("loc_6DA5B2C: mov (%ebp),%edx;");
    asm("loc_6DA5B2F: add $2,%edx;");
    asm("loc_6DA5B32: add %edx,%ebx;");
    asm("loc_6DA5B34: mov %ebx,0x1C(%ecx);");
    asm("loc_6DA5B37: mov (%ebp),%ebp;");
    asm("loc_6DA5B3A: add $2,%eax;");
    asm("loc_6DA5B3D: cmp %eax,%ebp;");
    asm("loc_6DA5B3F: jbe loc_6DA5B47;");
    asm("loc_6DA5B41: add $2,%ebp;");
    asm("loc_6DA5B44: mov %ebp,0x14(%ecx);");
    asm("loc_6DA5B47: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA5B4A: xor %edx,%edx;");
    asm("loc_6DA5B4C: div %esi;");
    asm("loc_6DA5B4E: mov %eax,0xC(%ecx);");
    asm("loc_6DA5B51: xor %eax,%eax;");
    asm("loc_6DA5B53: pop %edi;");
    asm("loc_6DA5B54: pop %esi;");
    asm("loc_6DA5B55: pop %ebp;");
    asm("loc_6DA5B56: pop %ebx;");
    asm("loc_6DA5B57: add $0x10,%esp;");
    asm("loc_6DA5B5A: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5B60() // _sub_6DA5B60
{
    __DEBUG_ASM(6DA5B60);
    // chunk 0x6DA5B60 _sub_6DA5B60
    asm("loc_6DA5B60: mov _data_6DB6110,%eax;");
    asm("loc_6DA5B65: mov %eax,_data_6DBBFA0;");
    asm("loc_6DA5B6A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5B70() // _sub_6DA5B70
{
    __DEBUG_ASM(6DA5B70);
    // chunk 0x6DA5B70 _sub_6DA5B70
    asm("loc_6DA5B70: mov _data_6DB6110,%eax;");
    asm("loc_6DA5B75: mov %eax,_data_6DBBFA4;");
    asm("loc_6DA5B7A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5B80() // _sub_6DA5B80
{
    __DEBUG_ASM(6DA5B80);
    // chunk 0x6DA5B80 _sub_6DA5B80
    asm("loc_6DA5B80: mov _data_6DB6114,%eax;");
    asm("loc_6DA5B85: mov %eax,_data_6DBBF9C;");
    asm("loc_6DA5B8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5B90() // _sub_6DA5B90
{
    __DEBUG_ASM(6DA5B90);
    // chunk 0x6DA5B90 _sub_6DA5B90
    asm("loc_6DA5B90: mov _data_6DB614C,%eax;");
    asm("loc_6DA5B95: mov %eax,_data_6DBBFB0;");
    asm("loc_6DA5B9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5BA0() // _sub_6DA5BA0
{
    __DEBUG_ASM(6DA5BA0);
    // chunk 0x6DA5BA0 _sub_6DA5BA0
    asm("loc_6DA5BA0: mov _data_6DB614C,%eax;");
    asm("loc_6DA5BA5: mov %eax,_data_6DBBFB4;");
    asm("loc_6DA5BAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5BB0() // _sub_6DA5BB0
{
    __DEBUG_ASM(6DA5BB0);
    // chunk 0x6DA5BB0 _sub_6DA5BB0
    asm("loc_6DA5BB0: mov _data_6DB6150,%eax;");
    asm("loc_6DA5BB5: mov %eax,_data_6DBBFAC;");
    asm("loc_6DA5BBA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5BC0() // _sub_6DA5BC0
{
    __DEBUG_ASM(6DA5BC0);
    // chunk 0x6DA5BC0 _sub_6DA5BC0
    asm("loc_6DA5BC0: mov 8(%esp),%eax;");
    asm("loc_6DA5BC4: push %ebx;");
    asm("loc_6DA5BC5: push %ebp;");
    asm("loc_6DA5BC6: mov %ecx,%ebx;");
    asm("loc_6DA5BC8: mov 0xC(%esp),%ecx;");
    asm("loc_6DA5BCC: push %esi;");
    asm("loc_6DA5BCD: lea 0x10(%ebx),%ebp;");
    asm("loc_6DA5BD0: push %ebp;");
    asm("loc_6DA5BD1: push %eax;");
    asm("loc_6DA5BD2: mov %ecx,8(%ebp);");
    asm("loc_6DA5BD5: lea 0x18(%ebx),%esi;");
    asm("loc_6DA5BD8: push %esi;");
    asm("loc_6DA5BD9: mov %ebx,%ecx;");
    asm("loc_6DA5BDB: mov %eax,4(%ebp);");
    asm("loc_6DA5BDE: movl $0,(%ebp);");
    asm("loc_6DA5BE5: movl $0,0xC(%ebp);");
    asm("loc_6DA5BEC: call _sub_6DA13C0;");
    asm("loc_6DA5BF1: test %eax,%eax;");
    asm("loc_6DA5BF3: mov %eax,0x1C(%ebx);");
    asm("loc_6DA5BF6: je loc_6DA5C03;");
    asm("loc_6DA5BF8: pop %esi;");
    asm("loc_6DA5BF9: pop %ebp;");
    asm("loc_6DA5BFA: mov $0x17,%eax;");
    asm("loc_6DA5BFF: pop %ebx;");
    asm("loc_6DA5C00: ret $0xC;");
    asm("loc_6DA5C03: mov (%ebp),%edx;");
    asm("loc_6DA5C06: mov 4(%ebp),%ecx;");
    asm("loc_6DA5C09: add $4,%edx;");
    asm("loc_6DA5C0C: mov %edx,%eax;");
    asm("loc_6DA5C0E: cmp %ecx,%eax;");
    asm("loc_6DA5C10: mov %edx,(%ebp);");
    asm("loc_6DA5C13: jbe loc_6DA5C1C;");
    asm("loc_6DA5C15: movl $0x17,0xC(%ebp);");
    asm("loc_6DA5C1C: mov 0x1C(%ebx),%eax;");
    asm("loc_6DA5C1F: test %eax,%eax;");
    asm("loc_6DA5C21: jne loc_6DA5D11;");
    asm("loc_6DA5C27: mov (%esi),%eax;");
    asm("loc_6DA5C29: mov (%eax),%edx;");
    asm("loc_6DA5C2B: add $4,%eax;");
    asm("loc_6DA5C2E: mov %eax,(%esi);");
    asm("loc_6DA5C30: mov 0x20(%ebx),%eax;");
    asm("loc_6DA5C33: test %eax,%eax;");
    asm("loc_6DA5C35: mov %edx,0x24(%ebx);");
    asm("loc_6DA5C38: jne loc_6DA5C4D;");
    asm("loc_6DA5C3A: mov %edx,%eax;");
    asm("loc_6DA5C3C: inc %eax;");
    asm("loc_6DA5C3D: push %eax;");
    asm("loc_6DA5C3E: call _sub_6DB1F8A;");
    asm("loc_6DA5C43: add $4,%esp;");
    asm("loc_6DA5C46: mov %eax,0x20(%ebx);");
    asm("loc_6DA5C49: movb $1,0x28(%ebx);");
    asm("loc_6DA5C4D: mov 0x24(%ebx),%ecx;");
    asm("loc_6DA5C50: mov (%ebp),%edx;");
    asm("loc_6DA5C53: add %ecx,%edx;");
    asm("loc_6DA5C55: mov 4(%ebp),%ecx;");
    asm("loc_6DA5C58: mov %edx,%eax;");
    asm("loc_6DA5C5A: cmp %ecx,%eax;");
    asm("loc_6DA5C5C: mov %edx,(%ebp);");
    asm("loc_6DA5C5F: jbe loc_6DA5C68;");
    asm("loc_6DA5C61: movl $0x17,0xC(%ebp);");
    asm("loc_6DA5C68: mov 0x1C(%ebx),%eax;");
    asm("loc_6DA5C6B: test %eax,%eax;");
    asm("loc_6DA5C6D: jne loc_6DA5D11;");
    asm("loc_6DA5C73: mov 0x24(%ebx),%eax;");
    asm("loc_6DA5C76: mov (%esi),%esi;");
    asm("loc_6DA5C78: push %edi;");
    asm("loc_6DA5C79: mov 0x20(%ebx),%edi;");
    asm("loc_6DA5C7C: mov %eax,%ecx;");
    asm("loc_6DA5C7E: mov %ecx,%edx;");
    asm("loc_6DA5C80: shr $2,%ecx;");
    asm("loc_6DA5C83: mov %esi,0x14(%esp);");
    asm("loc_6DA5C87: rep movsl (%esi),(%edi);");
    asm("loc_6DA5C89: mov %edx,%ecx;");
    asm("loc_6DA5C8B: and $3,%ecx;");
    asm("loc_6DA5C8E: rep movsb (%esi),(%edi);");
    asm("loc_6DA5C90: mov 0x14(%esp),%ecx;");
    asm("loc_6DA5C94: mov 0x20(%ebx),%edx;");
    asm("loc_6DA5C97: add %eax,%ecx;");
    asm("loc_6DA5C99: lea 0x18(%ebx),%eax;");
    asm("loc_6DA5C9C: mov %ecx,(%eax);");
    asm("loc_6DA5C9E: mov 0x24(%ebx),%ecx;");
    asm("loc_6DA5CA1: movb $0,(%edx,%ecx);");
    asm("loc_6DA5CA5: mov 0x18(%esp),%edx;");
    asm("loc_6DA5CA9: push %ebp;");
    asm("loc_6DA5CAA: push %edx;");
    asm("loc_6DA5CAB: push %eax;");
    asm("loc_6DA5CAC: mov %ebx,%ecx;");
    asm("loc_6DA5CAE: call _sub_6DA13C0;");
    asm("loc_6DA5CB3: test %eax,%eax;");
    asm("loc_6DA5CB5: mov %eax,0x1C(%ebx);");
    asm("loc_6DA5CB8: pop %edi;");
    asm("loc_6DA5CB9: je loc_6DA5CC6;");
    asm("loc_6DA5CBB: pop %esi;");
    asm("loc_6DA5CBC: pop %ebp;");
    asm("loc_6DA5CBD: mov $0x17,%eax;");
    asm("loc_6DA5CC2: pop %ebx;");
    asm("loc_6DA5CC3: ret $0xC;");
    asm("loc_6DA5CC6: mov (%ebp),%eax;");
    asm("loc_6DA5CC9: mov 0x18(%esp),%ecx;");
    asm("loc_6DA5CCD: mov %eax,(%ecx);");
    asm("loc_6DA5CCF: mov 0xC(%ebx),%edx;");
    asm("loc_6DA5CD2: push %edx;");
    asm("loc_6DA5CD3: call _sub_6DA16B0;");
    asm("loc_6DA5CD8: mov %eax,%ecx;");
    asm("loc_6DA5CDA: mov 4(%ecx),%esi;");
    asm("loc_6DA5CDD: mov 0x1C(%ecx),%ebx;");
    asm("loc_6DA5CE0: mov 0x14(%ecx),%edx;");
    asm("loc_6DA5CE3: add $4,%esp;");
    asm("loc_6DA5CE6: inc %esi;");
    asm("loc_6DA5CE7: mov %esi,4(%ecx);");
    asm("loc_6DA5CEA: mov (%ebp),%eax;");
    asm("loc_6DA5CED: add $2,%eax;");
    asm("loc_6DA5CF0: add %eax,%ebx;");
    asm("loc_6DA5CF2: mov %ebx,0x1C(%ecx);");
    asm("loc_6DA5CF5: mov (%ebp),%ebp;");
    asm("loc_6DA5CF8: add $2,%edx;");
    asm("loc_6DA5CFB: cmp %edx,%ebp;");
    asm("loc_6DA5CFD: jbe loc_6DA5D05;");
    asm("loc_6DA5CFF: add $2,%ebp;");
    asm("loc_6DA5D02: mov %ebp,0x14(%ecx);");
    asm("loc_6DA5D05: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA5D08: xor %edx,%edx;");
    asm("loc_6DA5D0A: div %esi;");
    asm("loc_6DA5D0C: mov %eax,0xC(%ecx);");
    asm("loc_6DA5D0F: xor %eax,%eax;");
    asm("loc_6DA5D11: pop %esi;");
    asm("loc_6DA5D12: pop %ebp;");
    asm("loc_6DA5D13: pop %ebx;");
    asm("loc_6DA5D14: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5D20() // _sub_6DA5D20
{
    __DEBUG_ASM(6DA5D20);
    // chunk 0x6DA5D20 _sub_6DA5D20
    asm("loc_6DA5D20: mov _data_6DB6158,%eax;");
    asm("loc_6DA5D25: mov %eax,_data_6DBBFC0;");
    asm("loc_6DA5D2A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5D30() // _sub_6DA5D30
{
    __DEBUG_ASM(6DA5D30);
    // chunk 0x6DA5D30 _sub_6DA5D30
    asm("loc_6DA5D30: mov _data_6DB6158,%eax;");
    asm("loc_6DA5D35: mov %eax,_data_6DBBFC4;");
    asm("loc_6DA5D3A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5D40() // _sub_6DA5D40
{
    __DEBUG_ASM(6DA5D40);
    // chunk 0x6DA5D40 _sub_6DA5D40
    asm("loc_6DA5D40: mov _data_6DB615C,%eax;");
    asm("loc_6DA5D45: mov %eax,_data_6DBBFBC;");
    asm("loc_6DA5D4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5D50() // _sub_6DA5D50
{
    __DEBUG_ASM(6DA5D50);
    // chunk 0x6DA5D50 _sub_6DA5D50
    asm("loc_6DA5D50: mov _data_6DB6164,%eax;");
    asm("loc_6DA5D55: mov %eax,_data_6DBBFD0;");
    asm("loc_6DA5D5A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5D60() // _sub_6DA5D60
{
    __DEBUG_ASM(6DA5D60);
    // chunk 0x6DA5D60 _sub_6DA5D60
    asm("loc_6DA5D60: mov _data_6DB6164,%eax;");
    asm("loc_6DA5D65: mov %eax,_data_6DBBFD4;");
    asm("loc_6DA5D6A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5D70() // _sub_6DA5D70
{
    __DEBUG_ASM(6DA5D70);
    // chunk 0x6DA5D70 _sub_6DA5D70
    asm("loc_6DA5D70: mov _data_6DB6168,%eax;");
    asm("loc_6DA5D75: mov %eax,_data_6DBBFCC;");
    asm("loc_6DA5D7A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5D80() // _sub_6DA5D80
{
    __DEBUG_ASM(6DA5D80);
    // chunk 0x6DA5D80 _sub_6DA5D80
    asm("loc_6DA5D80: mov _data_6DB6170,%eax;");
    asm("loc_6DA5D85: mov %eax,_data_6DBBFE0;");
    asm("loc_6DA5D8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5D90() // _sub_6DA5D90
{
    __DEBUG_ASM(6DA5D90);
    // chunk 0x6DA5D90 _sub_6DA5D90
    asm("loc_6DA5D90: mov _data_6DB6170,%eax;");
    asm("loc_6DA5D95: mov %eax,_data_6DBBFE4;");
    asm("loc_6DA5D9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5DA0() // _sub_6DA5DA0
{
    __DEBUG_ASM(6DA5DA0);
    // chunk 0x6DA5DA0 _sub_6DA5DA0
    asm("loc_6DA5DA0: mov _data_6DB6174,%eax;");
    asm("loc_6DA5DA5: mov %eax,_data_6DBBFDC;");
    asm("loc_6DA5DAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5DB0() // _sub_6DA5DB0
{
    __DEBUG_ASM(6DA5DB0);
    // chunk 0x6DA5DB0 _sub_6DA5DB0
    asm("loc_6DA5DB0: mov _data_6DB617C,%eax;");
    asm("loc_6DA5DB5: mov %eax,_data_6DBBFF0;");
    asm("loc_6DA5DBA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5DC0() // _sub_6DA5DC0
{
    __DEBUG_ASM(6DA5DC0);
    // chunk 0x6DA5DC0 _sub_6DA5DC0
    asm("loc_6DA5DC0: mov _data_6DB617C,%eax;");
    asm("loc_6DA5DC5: mov %eax,_data_6DBBFF4;");
    asm("loc_6DA5DCA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5DD0() // _sub_6DA5DD0
{
    __DEBUG_ASM(6DA5DD0);
    // chunk 0x6DA5DD0 _sub_6DA5DD0
    asm("loc_6DA5DD0: mov _data_6DB6180,%eax;");
    asm("loc_6DA5DD5: mov %eax,_data_6DBBFEC;");
    asm("loc_6DA5DDA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5DE0() // _sub_6DA5DE0
{
    __DEBUG_ASM(6DA5DE0);
    // chunk 0x6DA5DE0 _sub_6DA5DE0
    asm("loc_6DA5DE0: mov 8(%esp),%eax;");
    asm("loc_6DA5DE4: push %ebx;");
    asm("loc_6DA5DE5: push %ebp;");
    asm("loc_6DA5DE6: mov %ecx,%ebp;");
    asm("loc_6DA5DE8: mov 0xC(%esp),%ecx;");
    asm("loc_6DA5DEC: lea 0x10(%ebp),%ebx;");
    asm("loc_6DA5DEF: push %esi;");
    asm("loc_6DA5DF0: mov %eax,4(%ebx);");
    asm("loc_6DA5DF3: mov (%ecx),%edx;");
    asm("loc_6DA5DF5: push %edi;");
    asm("loc_6DA5DF6: mov %edx,8(%ebx);");
    asm("loc_6DA5DF9: movl $0,(%ebx);");
    asm("loc_6DA5DFF: movl $0,0xC(%ebx);");
    asm("loc_6DA5E06: mov 0x14(%ebp),%eax;");
    asm("loc_6DA5E09: push %ebx;");
    asm("loc_6DA5E0A: push %eax;");
    asm("loc_6DA5E0B: lea 0x18(%ebp),%esi;");
    asm("loc_6DA5E0E: push %esi;");
    asm("loc_6DA5E0F: mov %ebp,%ecx;");
    asm("loc_6DA5E11: call _sub_6DA1380;");
    asm("loc_6DA5E16: test %eax,%eax;");
    asm("loc_6DA5E18: mov %eax,0x1C(%ebp);");
    asm("loc_6DA5E1B: je loc_6DA5E29;");
    asm("loc_6DA5E1D: pop %edi;");
    asm("loc_6DA5E1E: pop %esi;");
    asm("loc_6DA5E1F: pop %ebp;");
    asm("loc_6DA5E20: mov $0x16,%eax;");
    asm("loc_6DA5E25: pop %ebx;");
    asm("loc_6DA5E26: ret $0xC;");
    asm("loc_6DA5E29: mov (%ebx),%edx;");
    asm("loc_6DA5E2B: mov 4(%ebx),%ecx;");
    asm("loc_6DA5E2E: add $4,%edx;");
    asm("loc_6DA5E31: mov %edx,%eax;");
    asm("loc_6DA5E33: cmp %ecx,%eax;");
    asm("loc_6DA5E35: mov %edx,(%ebx);");
    asm("loc_6DA5E37: jbe loc_6DA5E40;");
    asm("loc_6DA5E39: movl $0x16,0xC(%ebx);");
    asm("loc_6DA5E40: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA5E43: test %eax,%eax;");
    asm("loc_6DA5E45: je loc_6DA5E53;");
    asm("loc_6DA5E47: pop %edi;");
    asm("loc_6DA5E48: pop %esi;");
    asm("loc_6DA5E49: pop %ebp;");
    asm("loc_6DA5E4A: mov $0x16,%eax;");
    asm("loc_6DA5E4F: pop %ebx;");
    asm("loc_6DA5E50: ret $0xC;");
    asm("loc_6DA5E53: mov (%esi),%eax;");
    asm("loc_6DA5E55: mov 0x20(%ebp),%ecx;");
    asm("loc_6DA5E58: mov %ecx,(%eax);");
    asm("loc_6DA5E5A: mov 0x20(%ebp),%edx;");
    asm("loc_6DA5E5D: add $4,%eax;");
    asm("loc_6DA5E60: mov %eax,(%esi);");
    asm("loc_6DA5E62: mov (%ebx),%edi;");
    asm("loc_6DA5E64: mov 4(%ebx),%ecx;");
    asm("loc_6DA5E67: add %edx,%edi;");
    asm("loc_6DA5E69: mov %edi,%eax;");
    asm("loc_6DA5E6B: cmp %ecx,%eax;");
    asm("loc_6DA5E6D: mov %edi,(%ebx);");
    asm("loc_6DA5E6F: jbe loc_6DA5E78;");
    asm("loc_6DA5E71: movl $0x16,0xC(%ebx);");
    asm("loc_6DA5E78: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA5E7B: test %eax,%eax;");
    asm("loc_6DA5E7D: je loc_6DA5E8B;");
    asm("loc_6DA5E7F: pop %edi;");
    asm("loc_6DA5E80: pop %esi;");
    asm("loc_6DA5E81: pop %ebp;");
    asm("loc_6DA5E82: mov $0x16,%eax;");
    asm("loc_6DA5E87: pop %ebx;");
    asm("loc_6DA5E88: ret $0xC;");
    asm("loc_6DA5E8B: mov 0x20(%ebp),%edx;");
    asm("loc_6DA5E8E: mov (%esi),%edi;");
    asm("loc_6DA5E90: mov 0x24(%ebp),%esi;");
    asm("loc_6DA5E93: mov %edx,%ecx;");
    asm("loc_6DA5E95: mov %ecx,%eax;");
    asm("loc_6DA5E97: shr $2,%ecx;");
    asm("loc_6DA5E9A: mov %edi,0x18(%esp);");
    asm("loc_6DA5E9E: rep movsl (%esi),(%edi);");
    asm("loc_6DA5EA0: mov %eax,%ecx;");
    asm("loc_6DA5EA2: and $3,%ecx;");
    asm("loc_6DA5EA5: rep movsb (%esi),(%edi);");
    asm("loc_6DA5EA7: mov 0x18(%esp),%ecx;");
    asm("loc_6DA5EAB: add %edx,%ecx;");
    asm("loc_6DA5EAD: lea 0x18(%ebp),%edx;");
    asm("loc_6DA5EB0: mov %ecx,(%edx);");
    asm("loc_6DA5EB2: mov (%ebx),%esi;");
    asm("loc_6DA5EB4: mov 4(%ebx),%ecx;");
    asm("loc_6DA5EB7: add $4,%esi;");
    asm("loc_6DA5EBA: mov %esi,%eax;");
    asm("loc_6DA5EBC: cmp %ecx,%eax;");
    asm("loc_6DA5EBE: mov %esi,(%ebx);");
    asm("loc_6DA5EC0: jbe loc_6DA5EC9;");
    asm("loc_6DA5EC2: movl $0x16,0xC(%ebx);");
    asm("loc_6DA5EC9: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA5ECC: test %eax,%eax;");
    asm("loc_6DA5ECE: je loc_6DA5EDC;");
    asm("loc_6DA5ED0: pop %edi;");
    asm("loc_6DA5ED1: pop %esi;");
    asm("loc_6DA5ED2: pop %ebp;");
    asm("loc_6DA5ED3: mov $0x16,%eax;");
    asm("loc_6DA5ED8: pop %ebx;");
    asm("loc_6DA5ED9: ret $0xC;");
    asm("loc_6DA5EDC: mov (%edx),%eax;");
    asm("loc_6DA5EDE: mov 0x28(%ebp),%ecx;");
    asm("loc_6DA5EE1: mov %ecx,(%eax);");
    asm("loc_6DA5EE3: add $4,%eax;");
    asm("loc_6DA5EE6: mov %eax,(%edx);");
    asm("loc_6DA5EE8: mov 0x20(%ebp),%eax;");
    asm("loc_6DA5EEB: mov (%ebx),%esi;");
    asm("loc_6DA5EED: mov 4(%ebx),%ecx;");
    asm("loc_6DA5EF0: add %eax,%esi;");
    asm("loc_6DA5EF2: mov %esi,%eax;");
    asm("loc_6DA5EF4: cmp %ecx,%eax;");
    asm("loc_6DA5EF6: mov %esi,(%ebx);");
    asm("loc_6DA5EF8: jbe loc_6DA5F01;");
    asm("loc_6DA5EFA: movl $0x16,0xC(%ebx);");
    asm("loc_6DA5F01: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA5F04: test %eax,%eax;");
    asm("loc_6DA5F06: je loc_6DA5F14;");
    asm("loc_6DA5F08: pop %edi;");
    asm("loc_6DA5F09: pop %esi;");
    asm("loc_6DA5F0A: pop %ebp;");
    asm("loc_6DA5F0B: mov $0x16,%eax;");
    asm("loc_6DA5F10: pop %ebx;");
    asm("loc_6DA5F11: ret $0xC;");
    asm("loc_6DA5F14: mov 0x20(%ebp),%ecx;");
    asm("loc_6DA5F17: mov (%edx),%edi;");
    asm("loc_6DA5F19: mov 0x2C(%ebp),%esi;");
    asm("loc_6DA5F1C: mov %ecx,0x14(%esp);");
    asm("loc_6DA5F20: mov %ecx,%eax;");
    asm("loc_6DA5F22: shr $2,%ecx;");
    asm("loc_6DA5F25: mov %edi,0x18(%esp);");
    asm("loc_6DA5F29: rep movsl (%esi),(%edi);");
    asm("loc_6DA5F2B: mov %eax,%ecx;");
    asm("loc_6DA5F2D: and $3,%ecx;");
    asm("loc_6DA5F30: rep movsb (%esi),(%edi);");
    asm("loc_6DA5F32: mov 0x18(%esp),%ecx;");
    asm("loc_6DA5F36: add %eax,%ecx;");
    asm("loc_6DA5F38: mov %ecx,(%edx);");
    asm("loc_6DA5F3A: mov (%ebx),%esi;");
    asm("loc_6DA5F3C: mov 4(%ebx),%ecx;");
    asm("loc_6DA5F3F: add $4,%esi;");
    asm("loc_6DA5F42: mov %esi,%eax;");
    asm("loc_6DA5F44: cmp %ecx,%eax;");
    asm("loc_6DA5F46: mov %esi,(%ebx);");
    asm("loc_6DA5F48: jbe loc_6DA5F51;");
    asm("loc_6DA5F4A: movl $0x16,0xC(%ebx);");
    asm("loc_6DA5F51: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA5F54: test %eax,%eax;");
    asm("loc_6DA5F56: je loc_6DA5F64;");
    asm("loc_6DA5F58: pop %edi;");
    asm("loc_6DA5F59: pop %esi;");
    asm("loc_6DA5F5A: pop %ebp;");
    asm("loc_6DA5F5B: mov $0x16,%eax;");
    asm("loc_6DA5F60: pop %ebx;");
    asm("loc_6DA5F61: ret $0xC;");
    asm("loc_6DA5F64: mov (%edx),%eax;");
    asm("loc_6DA5F66: mov 0x30(%ebp),%ecx;");
    asm("loc_6DA5F69: mov %ecx,(%eax);");
    asm("loc_6DA5F6B: add $4,%eax;");
    asm("loc_6DA5F6E: mov %eax,(%edx);");
    asm("loc_6DA5F70: mov 0x14(%ebp),%eax;");
    asm("loc_6DA5F73: push %ebx;");
    asm("loc_6DA5F74: push %eax;");
    asm("loc_6DA5F75: push %edx;");
    asm("loc_6DA5F76: mov %ebp,%ecx;");
    asm("loc_6DA5F78: call _sub_6DA13C0;");
    asm("loc_6DA5F7D: test %eax,%eax;");
    asm("loc_6DA5F7F: mov %eax,0x1C(%ebp);");
    asm("loc_6DA5F82: je loc_6DA5F90;");
    asm("loc_6DA5F84: pop %edi;");
    asm("loc_6DA5F85: pop %esi;");
    asm("loc_6DA5F86: pop %ebp;");
    asm("loc_6DA5F87: mov $0x16,%eax;");
    asm("loc_6DA5F8C: pop %ebx;");
    asm("loc_6DA5F8D: ret $0xC;");
    asm("loc_6DA5F90: mov (%ebx),%ecx;");
    asm("loc_6DA5F92: mov 0x1C(%esp),%edx;");
    asm("loc_6DA5F96: mov %ecx,(%edx);");
    asm("loc_6DA5F98: mov 0xC(%ebp),%eax;");
    asm("loc_6DA5F9B: push %eax;");
    asm("loc_6DA5F9C: call _sub_6DA16B0;");
    asm("loc_6DA5FA1: mov %eax,%ecx;");
    asm("loc_6DA5FA3: mov (%ecx),%ebp;");
    asm("loc_6DA5FA5: mov 0x18(%ecx),%edi;");
    asm("loc_6DA5FA8: mov 0x10(%ecx),%eax;");
    asm("loc_6DA5FAB: add $4,%esp;");
    asm("loc_6DA5FAE: inc %ebp;");
    asm("loc_6DA5FAF: mov %ebp,(%ecx);");
    asm("loc_6DA5FB1: mov (%ebx),%edx;");
    asm("loc_6DA5FB3: add %edx,%edi;");
    asm("loc_6DA5FB5: mov %edi,0x18(%ecx);");
    asm("loc_6DA5FB8: mov (%ebx),%ebx;");
    asm("loc_6DA5FBA: cmp %eax,%ebx;");
    asm("loc_6DA5FBC: mov %ebp,%esi;");
    asm("loc_6DA5FBE: jbe loc_6DA5FC3;");
    asm("loc_6DA5FC0: mov %ebx,0x10(%ecx);");
    asm("loc_6DA5FC3: mov 0x18(%ecx),%eax;");
    asm("loc_6DA5FC6: xor %edx,%edx;");
    asm("loc_6DA5FC8: div %esi;");
    asm("loc_6DA5FCA: pop %edi;");
    asm("loc_6DA5FCB: pop %esi;");
    asm("loc_6DA5FCC: pop %ebp;");
    asm("loc_6DA5FCD: pop %ebx;");
    asm("loc_6DA5FCE: mov %eax,8(%ecx);");
    asm("loc_6DA5FD1: xor %eax,%eax;");
    asm("loc_6DA5FD3: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA5FE0() // _sub_6DA5FE0
{
    __DEBUG_ASM(6DA5FE0);
    // chunk 0x6DA5FE0 _sub_6DA5FE0
    asm("loc_6DA5FE0: mov 4(%esp),%eax;");
    asm("loc_6DA5FE4: push %ebx;");
    asm("loc_6DA5FE5: push %ebp;");
    asm("loc_6DA5FE6: mov 0x10(%esp),%ebp;");
    asm("loc_6DA5FEA: push %esi;");
    asm("loc_6DA5FEB: push %edi;");
    asm("loc_6DA5FEC: mov %ecx,%edi;");
    asm("loc_6DA5FEE: lea 0x10(%edi),%esi;");
    asm("loc_6DA5FF1: push %esi;");
    asm("loc_6DA5FF2: push %ebp;");
    asm("loc_6DA5FF3: lea 0x18(%edi),%ebx;");
    asm("loc_6DA5FF6: push %ebx;");
    asm("loc_6DA5FF7: mov %ebp,4(%esi);");
    asm("loc_6DA5FFA: mov %eax,8(%esi);");
    asm("loc_6DA5FFD: movl $0,(%esi);");
    asm("loc_6DA6003: movl $0,0xC(%esi);");
    asm("loc_6DA600A: call _sub_6DA13C0;");
    asm("loc_6DA600F: test %eax,%eax;");
    asm("loc_6DA6011: mov %eax,0x1C(%edi);");
    asm("loc_6DA6014: je loc_6DA6022;");
    asm("loc_6DA6016: pop %edi;");
    asm("loc_6DA6017: pop %esi;");
    asm("loc_6DA6018: pop %ebp;");
    asm("loc_6DA6019: mov $0x17,%eax;");
    asm("loc_6DA601E: pop %ebx;");
    asm("loc_6DA601F: ret $0xC;");
    asm("loc_6DA6022: lea 0x20(%edi),%ecx;");
    asm("loc_6DA6025: push %ecx;");
    asm("loc_6DA6026: mov %edi,%ecx;");
    asm("loc_6DA6028: call _sub_6DA1620;");
    asm("loc_6DA602D: lea 0x28(%edi),%edx;");
    asm("loc_6DA6030: push %edx;");
    asm("loc_6DA6031: mov %edi,%ecx;");
    asm("loc_6DA6033: call _sub_6DA1620;");
    asm("loc_6DA6038: mov (%esi),%edx;");
    asm("loc_6DA603A: mov 4(%esi),%ecx;");
    asm("loc_6DA603D: add $4,%edx;");
    asm("loc_6DA6040: mov %edx,%eax;");
    asm("loc_6DA6042: cmp %ecx,%eax;");
    asm("loc_6DA6044: mov %edx,(%esi);");
    asm("loc_6DA6046: jbe loc_6DA604F;");
    asm("loc_6DA6048: movl $0x17,0xC(%esi);");
    asm("loc_6DA604F: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6052: test %eax,%eax;");
    asm("loc_6DA6054: jne loc_6DA60C9;");
    asm("loc_6DA6056: mov (%ebx),%eax;");
    asm("loc_6DA6058: mov (%eax),%ecx;");
    asm("loc_6DA605A: push %esi;");
    asm("loc_6DA605B: push %ebp;");
    asm("loc_6DA605C: mov %ecx,0x30(%edi);");
    asm("loc_6DA605F: add $4,%eax;");
    asm("loc_6DA6062: push %ebx;");
    asm("loc_6DA6063: mov %edi,%ecx;");
    asm("loc_6DA6065: mov %eax,(%ebx);");
    asm("loc_6DA6067: call _sub_6DA13C0;");
    asm("loc_6DA606C: test %eax,%eax;");
    asm("loc_6DA606E: mov %eax,0x1C(%edi);");
    asm("loc_6DA6071: je loc_6DA607F;");
    asm("loc_6DA6073: pop %edi;");
    asm("loc_6DA6074: pop %esi;");
    asm("loc_6DA6075: pop %ebp;");
    asm("loc_6DA6076: mov $0x17,%eax;");
    asm("loc_6DA607B: pop %ebx;");
    asm("loc_6DA607C: ret $0xC;");
    asm("loc_6DA607F: mov (%esi),%edx;");
    asm("loc_6DA6081: mov 0x1C(%esp),%eax;");
    asm("loc_6DA6085: mov %edx,(%eax);");
    asm("loc_6DA6087: mov 0xC(%edi),%ecx;");
    asm("loc_6DA608A: push %ecx;");
    asm("loc_6DA608B: call _sub_6DA16B0;");
    asm("loc_6DA6090: mov %eax,%ecx;");
    asm("loc_6DA6092: mov 4(%ecx),%edx;");
    asm("loc_6DA6095: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA6098: mov 0x14(%ecx),%eax;");
    asm("loc_6DA609B: add $4,%esp;");
    asm("loc_6DA609E: inc %edx;");
    asm("loc_6DA609F: mov %edx,4(%ecx);");
    asm("loc_6DA60A2: mov %edx,%edi;");
    asm("loc_6DA60A4: mov (%esi),%edx;");
    asm("loc_6DA60A6: add $2,%edx;");
    asm("loc_6DA60A9: add %edx,%ebp;");
    asm("loc_6DA60AB: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA60AE: mov (%esi),%esi;");
    asm("loc_6DA60B0: add $2,%eax;");
    asm("loc_6DA60B3: cmp %eax,%esi;");
    asm("loc_6DA60B5: jbe loc_6DA60BD;");
    asm("loc_6DA60B7: add $2,%esi;");
    asm("loc_6DA60BA: mov %esi,0x14(%ecx);");
    asm("loc_6DA60BD: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA60C0: xor %edx,%edx;");
    asm("loc_6DA60C2: div %edi;");
    asm("loc_6DA60C4: mov %eax,0xC(%ecx);");
    asm("loc_6DA60C7: xor %eax,%eax;");
    asm("loc_6DA60C9: pop %edi;");
    asm("loc_6DA60CA: pop %esi;");
    asm("loc_6DA60CB: pop %ebp;");
    asm("loc_6DA60CC: pop %ebx;");
    asm("loc_6DA60CD: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA60D0() // _sub_6DA60D0
{
    __DEBUG_ASM(6DA60D0);
    // chunk 0x6DA60D0 _sub_6DA60D0
    asm("loc_6DA60D0: mov _data_6DB6188,%eax;");
    asm("loc_6DA60D5: mov %eax,_data_6DBC000;");
    asm("loc_6DA60DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA60E0() // _sub_6DA60E0
{
    __DEBUG_ASM(6DA60E0);
    // chunk 0x6DA60E0 _sub_6DA60E0
    asm("loc_6DA60E0: mov _data_6DB6188,%eax;");
    asm("loc_6DA60E5: mov %eax,_data_6DBC004;");
    asm("loc_6DA60EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA60F0() // _sub_6DA60F0
{
    __DEBUG_ASM(6DA60F0);
    // chunk 0x6DA60F0 _sub_6DA60F0
    asm("loc_6DA60F0: mov _data_6DB618C,%eax;");
    asm("loc_6DA60F5: mov %eax,_data_6DBBFFC;");
    asm("loc_6DA60FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6100() // _sub_6DA6100
{
    __DEBUG_ASM(6DA6100);
    // chunk 0x6DA6100 _sub_6DA6100
    asm("loc_6DA6100: mov _data_6DB6194,%eax;");
    asm("loc_6DA6105: mov %eax,_data_6DBC010;");
    asm("loc_6DA610A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6110() // _sub_6DA6110
{
    __DEBUG_ASM(6DA6110);
    // chunk 0x6DA6110 _sub_6DA6110
    asm("loc_6DA6110: mov _data_6DB6194,%eax;");
    asm("loc_6DA6115: mov %eax,_data_6DBC014;");
    asm("loc_6DA611A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6120() // _sub_6DA6120
{
    __DEBUG_ASM(6DA6120);
    // chunk 0x6DA6120 _sub_6DA6120
    asm("loc_6DA6120: mov _data_6DB6198,%eax;");
    asm("loc_6DA6125: mov %eax,_data_6DBC00C;");
    asm("loc_6DA612A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6130() // _sub_6DA6130
{
    __DEBUG_ASM(6DA6130);
    // chunk 0x6DA6130 _sub_6DA6130
    asm("loc_6DA6130: mov _data_6DB61A0,%eax;");
    asm("loc_6DA6135: mov %eax,_data_6DBC020;");
    asm("loc_6DA613A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6140() // _sub_6DA6140
{
    __DEBUG_ASM(6DA6140);
    // chunk 0x6DA6140 _sub_6DA6140
    asm("loc_6DA6140: mov _data_6DB61A0,%eax;");
    asm("loc_6DA6145: mov %eax,_data_6DBC024;");
    asm("loc_6DA614A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6150() // _sub_6DA6150
{
    __DEBUG_ASM(6DA6150);
    // chunk 0x6DA6150 _sub_6DA6150
    asm("loc_6DA6150: mov _data_6DB61A4,%eax;");
    asm("loc_6DA6155: mov %eax,_data_6DBC01C;");
    asm("loc_6DA615A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6160() // _sub_6DA6160
{
    __DEBUG_ASM(6DA6160);
    // chunk 0x6DA6160 _sub_6DA6160
    asm("loc_6DA6160: mov _data_6DB61AC,%eax;");
    asm("loc_6DA6165: mov %eax,_data_6DBC030;");
    asm("loc_6DA616A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6170() // _sub_6DA6170
{
    __DEBUG_ASM(6DA6170);
    // chunk 0x6DA6170 _sub_6DA6170
    asm("loc_6DA6170: mov _data_6DB61AC,%eax;");
    asm("loc_6DA6175: mov %eax,_data_6DBC034;");
    asm("loc_6DA617A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6180() // _sub_6DA6180
{
    __DEBUG_ASM(6DA6180);
    // chunk 0x6DA6180 _sub_6DA6180
    asm("loc_6DA6180: mov _data_6DB61B0,%eax;");
    asm("loc_6DA6185: mov %eax,_data_6DBC02C;");
    asm("loc_6DA618A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6190() // _sub_6DA6190
{
    __DEBUG_ASM(6DA6190);
    // chunk 0x6DA6190 _sub_6DA6190
    asm("loc_6DA6190: mov 8(%esp),%eax;");
    asm("loc_6DA6194: push %ebx;");
    asm("loc_6DA6195: push %ebp;");
    asm("loc_6DA6196: mov %ecx,%ebp;");
    asm("loc_6DA6198: mov 0xC(%esp),%ecx;");
    asm("loc_6DA619C: lea 0x10(%ebp),%ebx;");
    asm("loc_6DA619F: push %esi;");
    asm("loc_6DA61A0: mov %eax,4(%ebx);");
    asm("loc_6DA61A3: mov (%ecx),%edx;");
    asm("loc_6DA61A5: push %edi;");
    asm("loc_6DA61A6: mov %edx,8(%ebx);");
    asm("loc_6DA61A9: movl $0,(%ebx);");
    asm("loc_6DA61AF: movl $0,0xC(%ebx);");
    asm("loc_6DA61B6: mov 0x14(%ebp),%eax;");
    asm("loc_6DA61B9: push %ebx;");
    asm("loc_6DA61BA: push %eax;");
    asm("loc_6DA61BB: lea 0x18(%ebp),%esi;");
    asm("loc_6DA61BE: push %esi;");
    asm("loc_6DA61BF: mov %ebp,%ecx;");
    asm("loc_6DA61C1: call _sub_6DA1380;");
    asm("loc_6DA61C6: test %eax,%eax;");
    asm("loc_6DA61C8: mov %eax,0x1C(%ebp);");
    asm("loc_6DA61CB: je loc_6DA61D9;");
    asm("loc_6DA61CD: pop %edi;");
    asm("loc_6DA61CE: pop %esi;");
    asm("loc_6DA61CF: pop %ebp;");
    asm("loc_6DA61D0: mov $0x16,%eax;");
    asm("loc_6DA61D5: pop %ebx;");
    asm("loc_6DA61D6: ret $0xC;");
    asm("loc_6DA61D9: mov (%ebx),%edx;");
    asm("loc_6DA61DB: mov 4(%ebx),%ecx;");
    asm("loc_6DA61DE: add $4,%edx;");
    asm("loc_6DA61E1: mov %edx,%eax;");
    asm("loc_6DA61E3: cmp %ecx,%eax;");
    asm("loc_6DA61E5: mov %edx,(%ebx);");
    asm("loc_6DA61E7: jbe loc_6DA61F0;");
    asm("loc_6DA61E9: movl $0x16,0xC(%ebx);");
    asm("loc_6DA61F0: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA61F3: test %eax,%eax;");
    asm("loc_6DA61F5: je loc_6DA6203;");
    asm("loc_6DA61F7: pop %edi;");
    asm("loc_6DA61F8: pop %esi;");
    asm("loc_6DA61F9: pop %ebp;");
    asm("loc_6DA61FA: mov $0x16,%eax;");
    asm("loc_6DA61FF: pop %ebx;");
    asm("loc_6DA6200: ret $0xC;");
    asm("loc_6DA6203: mov (%esi),%eax;");
    asm("loc_6DA6205: mov 0x24(%ebp),%ecx;");
    asm("loc_6DA6208: mov %ecx,(%eax);");
    asm("loc_6DA620A: mov 0x24(%ebp),%edx;");
    asm("loc_6DA620D: add $4,%eax;");
    asm("loc_6DA6210: mov %eax,(%esi);");
    asm("loc_6DA6212: mov (%ebx),%edi;");
    asm("loc_6DA6214: mov 4(%ebx),%ecx;");
    asm("loc_6DA6217: add %edx,%edi;");
    asm("loc_6DA6219: mov %edi,%eax;");
    asm("loc_6DA621B: cmp %ecx,%eax;");
    asm("loc_6DA621D: mov %edi,(%ebx);");
    asm("loc_6DA621F: jbe loc_6DA6228;");
    asm("loc_6DA6221: movl $0x16,0xC(%ebx);");
    asm("loc_6DA6228: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA622B: test %eax,%eax;");
    asm("loc_6DA622D: je loc_6DA623B;");
    asm("loc_6DA622F: pop %edi;");
    asm("loc_6DA6230: pop %esi;");
    asm("loc_6DA6231: pop %ebp;");
    asm("loc_6DA6232: mov $0x16,%eax;");
    asm("loc_6DA6237: pop %ebx;");
    asm("loc_6DA6238: ret $0xC;");
    asm("loc_6DA623B: mov 0x24(%ebp),%eax;");
    asm("loc_6DA623E: mov (%esi),%edi;");
    asm("loc_6DA6240: mov 0x20(%ebp),%esi;");
    asm("loc_6DA6243: mov %eax,%ecx;");
    asm("loc_6DA6245: mov %ecx,%edx;");
    asm("loc_6DA6247: shr $2,%ecx;");
    asm("loc_6DA624A: mov %edi,0x18(%esp);");
    asm("loc_6DA624E: rep movsl (%esi),(%edi);");
    asm("loc_6DA6250: mov %edx,%ecx;");
    asm("loc_6DA6252: and $3,%ecx;");
    asm("loc_6DA6255: rep movsb (%esi),(%edi);");
    asm("loc_6DA6257: mov 0x18(%esp),%ecx;");
    asm("loc_6DA625B: mov 0x14(%ebp),%edx;");
    asm("loc_6DA625E: add %eax,%ecx;");
    asm("loc_6DA6260: push %ebx;");
    asm("loc_6DA6261: lea 0x18(%ebp),%eax;");
    asm("loc_6DA6264: push %edx;");
    asm("loc_6DA6265: mov %ecx,(%eax);");
    asm("loc_6DA6267: push %eax;");
    asm("loc_6DA6268: mov %ebp,%ecx;");
    asm("loc_6DA626A: call _sub_6DA13C0;");
    asm("loc_6DA626F: test %eax,%eax;");
    asm("loc_6DA6271: mov %eax,0x1C(%ebp);");
    asm("loc_6DA6274: je loc_6DA6282;");
    asm("loc_6DA6276: pop %edi;");
    asm("loc_6DA6277: pop %esi;");
    asm("loc_6DA6278: pop %ebp;");
    asm("loc_6DA6279: mov $0x16,%eax;");
    asm("loc_6DA627E: pop %ebx;");
    asm("loc_6DA627F: ret $0xC;");
    asm("loc_6DA6282: mov (%ebx),%eax;");
    asm("loc_6DA6284: mov 0x1C(%esp),%ecx;");
    asm("loc_6DA6288: mov %eax,(%ecx);");
    asm("loc_6DA628A: mov 0xC(%ebp),%edx;");
    asm("loc_6DA628D: push %edx;");
    asm("loc_6DA628E: call _sub_6DA16B0;");
    asm("loc_6DA6293: mov %eax,%ecx;");
    asm("loc_6DA6295: mov (%ecx),%esi;");
    asm("loc_6DA6297: mov 0x18(%ecx),%edx;");
    asm("loc_6DA629A: add $4,%esp;");
    asm("loc_6DA629D: inc %esi;");
    asm("loc_6DA629E: mov %esi,(%ecx);");
    asm("loc_6DA62A0: mov (%ebx),%eax;");
    asm("loc_6DA62A2: add %eax,%edx;");
    asm("loc_6DA62A4: mov 0x10(%ecx),%eax;");
    asm("loc_6DA62A7: mov %edx,0x18(%ecx);");
    asm("loc_6DA62AA: mov (%ebx),%ebx;");
    asm("loc_6DA62AC: cmp %eax,%ebx;");
    asm("loc_6DA62AE: jbe loc_6DA62B3;");
    asm("loc_6DA62B0: mov %ebx,0x10(%ecx);");
    asm("loc_6DA62B3: mov 0x18(%ecx),%eax;");
    asm("loc_6DA62B6: xor %edx,%edx;");
    asm("loc_6DA62B8: div %esi;");
    asm("loc_6DA62BA: pop %edi;");
    asm("loc_6DA62BB: pop %esi;");
    asm("loc_6DA62BC: pop %ebp;");
    asm("loc_6DA62BD: pop %ebx;");
    asm("loc_6DA62BE: mov %eax,8(%ecx);");
    asm("loc_6DA62C1: xor %eax,%eax;");
    asm("loc_6DA62C3: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA62D0() // _sub_6DA62D0
{
    __DEBUG_ASM(6DA62D0);
    // chunk 0x6DA62D0 _sub_6DA62D0
    asm("loc_6DA62D0: mov 8(%esp),%eax;");
    asm("loc_6DA62D4: push %ebx;");
    asm("loc_6DA62D5: push %ebp;");
    asm("loc_6DA62D6: mov %ecx,%ebx;");
    asm("loc_6DA62D8: mov 0xC(%esp),%ecx;");
    asm("loc_6DA62DC: push %esi;");
    asm("loc_6DA62DD: lea 0x10(%ebx),%ebp;");
    asm("loc_6DA62E0: push %ebp;");
    asm("loc_6DA62E1: push %eax;");
    asm("loc_6DA62E2: mov %ecx,8(%ebp);");
    asm("loc_6DA62E5: lea 0x18(%ebx),%esi;");
    asm("loc_6DA62E8: push %esi;");
    asm("loc_6DA62E9: mov %ebx,%ecx;");
    asm("loc_6DA62EB: mov %eax,4(%ebp);");
    asm("loc_6DA62EE: movl $0,(%ebp);");
    asm("loc_6DA62F5: movl $0,0xC(%ebp);");
    asm("loc_6DA62FC: call _sub_6DA13C0;");
    asm("loc_6DA6301: test %eax,%eax;");
    asm("loc_6DA6303: mov %eax,0x1C(%ebx);");
    asm("loc_6DA6306: je loc_6DA6313;");
    asm("loc_6DA6308: pop %esi;");
    asm("loc_6DA6309: pop %ebp;");
    asm("loc_6DA630A: mov $0x17,%eax;");
    asm("loc_6DA630F: pop %ebx;");
    asm("loc_6DA6310: ret $0xC;");
    asm("loc_6DA6313: mov (%ebp),%edx;");
    asm("loc_6DA6316: mov 4(%ebp),%ecx;");
    asm("loc_6DA6319: add $4,%edx;");
    asm("loc_6DA631C: mov %edx,%eax;");
    asm("loc_6DA631E: cmp %ecx,%eax;");
    asm("loc_6DA6320: mov %edx,(%ebp);");
    asm("loc_6DA6323: jbe loc_6DA632C;");
    asm("loc_6DA6325: movl $0x17,0xC(%ebp);");
    asm("loc_6DA632C: mov 0x1C(%ebx),%eax;");
    asm("loc_6DA632F: test %eax,%eax;");
    asm("loc_6DA6331: jne loc_6DA6416;");
    asm("loc_6DA6337: mov (%esi),%eax;");
    asm("loc_6DA6339: mov (%eax),%edx;");
    asm("loc_6DA633B: add $4,%eax;");
    asm("loc_6DA633E: mov %eax,(%esi);");
    asm("loc_6DA6340: mov 0x20(%ebx),%eax;");
    asm("loc_6DA6343: test %eax,%eax;");
    asm("loc_6DA6345: mov %edx,0x24(%ebx);");
    asm("loc_6DA6348: jne loc_6DA635C;");
    asm("loc_6DA634A: mov %edx,%eax;");
    asm("loc_6DA634C: push %eax;");
    asm("loc_6DA634D: call _sub_6DB1F8A;");
    asm("loc_6DA6352: add $4,%esp;");
    asm("loc_6DA6355: mov %eax,0x20(%ebx);");
    asm("loc_6DA6358: movb $1,0x28(%ebx);");
    asm("loc_6DA635C: mov 0x24(%ebx),%ecx;");
    asm("loc_6DA635F: mov (%ebp),%edx;");
    asm("loc_6DA6362: add %ecx,%edx;");
    asm("loc_6DA6364: mov 4(%ebp),%ecx;");
    asm("loc_6DA6367: mov %edx,%eax;");
    asm("loc_6DA6369: cmp %ecx,%eax;");
    asm("loc_6DA636B: mov %edx,(%ebp);");
    asm("loc_6DA636E: jbe loc_6DA6377;");
    asm("loc_6DA6370: movl $0x17,0xC(%ebp);");
    asm("loc_6DA6377: mov 0x1C(%ebx),%eax;");
    asm("loc_6DA637A: test %eax,%eax;");
    asm("loc_6DA637C: jne loc_6DA6416;");
    asm("loc_6DA6382: mov 0x24(%ebx),%eax;");
    asm("loc_6DA6385: mov (%esi),%esi;");
    asm("loc_6DA6387: push %edi;");
    asm("loc_6DA6388: mov 0x20(%ebx),%edi;");
    asm("loc_6DA638B: mov %eax,%ecx;");
    asm("loc_6DA638D: mov %ecx,%edx;");
    asm("loc_6DA638F: shr $2,%ecx;");
    asm("loc_6DA6392: mov %esi,0x14(%esp);");
    asm("loc_6DA6396: rep movsl (%esi),(%edi);");
    asm("loc_6DA6398: mov %edx,%ecx;");
    asm("loc_6DA639A: mov 0x18(%esp),%edx;");
    asm("loc_6DA639E: and $3,%ecx;");
    asm("loc_6DA63A1: rep movsb (%esi),(%edi);");
    asm("loc_6DA63A3: mov 0x14(%esp),%ecx;");
    asm("loc_6DA63A7: add %eax,%ecx;");
    asm("loc_6DA63A9: push %ebp;");
    asm("loc_6DA63AA: lea 0x18(%ebx),%eax;");
    asm("loc_6DA63AD: push %edx;");
    asm("loc_6DA63AE: mov %ecx,(%eax);");
    asm("loc_6DA63B0: push %eax;");
    asm("loc_6DA63B1: mov %ebx,%ecx;");
    asm("loc_6DA63B3: call _sub_6DA13C0;");
    asm("loc_6DA63B8: test %eax,%eax;");
    asm("loc_6DA63BA: mov %eax,0x1C(%ebx);");
    asm("loc_6DA63BD: pop %edi;");
    asm("loc_6DA63BE: je loc_6DA63CB;");
    asm("loc_6DA63C0: pop %esi;");
    asm("loc_6DA63C1: pop %ebp;");
    asm("loc_6DA63C2: mov $0x17,%eax;");
    asm("loc_6DA63C7: pop %ebx;");
    asm("loc_6DA63C8: ret $0xC;");
    asm("loc_6DA63CB: mov (%ebp),%eax;");
    asm("loc_6DA63CE: mov 0x18(%esp),%ecx;");
    asm("loc_6DA63D2: mov %eax,(%ecx);");
    asm("loc_6DA63D4: mov 0xC(%ebx),%edx;");
    asm("loc_6DA63D7: push %edx;");
    asm("loc_6DA63D8: call _sub_6DA16B0;");
    asm("loc_6DA63DD: mov %eax,%ecx;");
    asm("loc_6DA63DF: mov 4(%ecx),%esi;");
    asm("loc_6DA63E2: mov 0x1C(%ecx),%ebx;");
    asm("loc_6DA63E5: mov 0x14(%ecx),%edx;");
    asm("loc_6DA63E8: add $4,%esp;");
    asm("loc_6DA63EB: inc %esi;");
    asm("loc_6DA63EC: mov %esi,4(%ecx);");
    asm("loc_6DA63EF: mov (%ebp),%eax;");
    asm("loc_6DA63F2: add $2,%eax;");
    asm("loc_6DA63F5: add %eax,%ebx;");
    asm("loc_6DA63F7: mov %ebx,0x1C(%ecx);");
    asm("loc_6DA63FA: mov (%ebp),%ebp;");
    asm("loc_6DA63FD: add $2,%edx;");
    asm("loc_6DA6400: cmp %edx,%ebp;");
    asm("loc_6DA6402: jbe loc_6DA640A;");
    asm("loc_6DA6404: add $2,%ebp;");
    asm("loc_6DA6407: mov %ebp,0x14(%ecx);");
    asm("loc_6DA640A: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA640D: xor %edx,%edx;");
    asm("loc_6DA640F: div %esi;");
    asm("loc_6DA6411: mov %eax,0xC(%ecx);");
    asm("loc_6DA6414: xor %eax,%eax;");
    asm("loc_6DA6416: pop %esi;");
    asm("loc_6DA6417: pop %ebp;");
    asm("loc_6DA6418: pop %ebx;");
    asm("loc_6DA6419: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6420() // _sub_6DA6420
{
    __DEBUG_ASM(6DA6420);
    // chunk 0x6DA6420 _sub_6DA6420
    asm("loc_6DA6420: mov 8(%esp),%eax;");
    asm("loc_6DA6424: push %ebx;");
    asm("loc_6DA6425: push %ebp;");
    asm("loc_6DA6426: mov %ecx,%ebp;");
    asm("loc_6DA6428: mov 0xC(%esp),%ecx;");
    asm("loc_6DA642C: lea 0x10(%ebp),%ebx;");
    asm("loc_6DA642F: push %esi;");
    asm("loc_6DA6430: mov %eax,4(%ebx);");
    asm("loc_6DA6433: mov (%ecx),%edx;");
    asm("loc_6DA6435: push %edi;");
    asm("loc_6DA6436: mov %edx,8(%ebx);");
    asm("loc_6DA6439: movl $0,(%ebx);");
    asm("loc_6DA643F: movl $0,0xC(%ebx);");
    asm("loc_6DA6446: mov 0x14(%ebp),%eax;");
    asm("loc_6DA6449: push %ebx;");
    asm("loc_6DA644A: push %eax;");
    asm("loc_6DA644B: lea 0x18(%ebp),%esi;");
    asm("loc_6DA644E: push %esi;");
    asm("loc_6DA644F: mov %ebp,%ecx;");
    asm("loc_6DA6451: call _sub_6DA1380;");
    asm("loc_6DA6456: test %eax,%eax;");
    asm("loc_6DA6458: mov %eax,0x1C(%ebp);");
    asm("loc_6DA645B: je loc_6DA6469;");
    asm("loc_6DA645D: pop %edi;");
    asm("loc_6DA645E: pop %esi;");
    asm("loc_6DA645F: pop %ebp;");
    asm("loc_6DA6460: mov $0x16,%eax;");
    asm("loc_6DA6465: pop %ebx;");
    asm("loc_6DA6466: ret $0xC;");
    asm("loc_6DA6469: mov (%ebx),%edx;");
    asm("loc_6DA646B: mov 4(%ebx),%ecx;");
    asm("loc_6DA646E: add $4,%edx;");
    asm("loc_6DA6471: mov %edx,%eax;");
    asm("loc_6DA6473: cmp %ecx,%eax;");
    asm("loc_6DA6475: mov %edx,(%ebx);");
    asm("loc_6DA6477: jbe loc_6DA6480;");
    asm("loc_6DA6479: movl $0x16,0xC(%ebx);");
    asm("loc_6DA6480: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA6483: test %eax,%eax;");
    asm("loc_6DA6485: je loc_6DA6493;");
    asm("loc_6DA6487: pop %edi;");
    asm("loc_6DA6488: pop %esi;");
    asm("loc_6DA6489: pop %ebp;");
    asm("loc_6DA648A: mov $0x16,%eax;");
    asm("loc_6DA648F: pop %ebx;");
    asm("loc_6DA6490: ret $0xC;");
    asm("loc_6DA6493: mov (%esi),%eax;");
    asm("loc_6DA6495: mov 0x28(%ebp),%ecx;");
    asm("loc_6DA6498: mov %ecx,(%eax);");
    asm("loc_6DA649A: mov 0x28(%ebp),%edx;");
    asm("loc_6DA649D: add $4,%eax;");
    asm("loc_6DA64A0: mov %eax,(%esi);");
    asm("loc_6DA64A2: mov (%ebx),%edi;");
    asm("loc_6DA64A4: mov 4(%ebx),%ecx;");
    asm("loc_6DA64A7: add %edx,%edi;");
    asm("loc_6DA64A9: mov %edi,%eax;");
    asm("loc_6DA64AB: cmp %ecx,%eax;");
    asm("loc_6DA64AD: mov %edi,(%ebx);");
    asm("loc_6DA64AF: jbe loc_6DA64B8;");
    asm("loc_6DA64B1: movl $0x16,0xC(%ebx);");
    asm("loc_6DA64B8: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA64BB: test %eax,%eax;");
    asm("loc_6DA64BD: je loc_6DA64CB;");
    asm("loc_6DA64BF: pop %edi;");
    asm("loc_6DA64C0: pop %esi;");
    asm("loc_6DA64C1: pop %ebp;");
    asm("loc_6DA64C2: mov $0x16,%eax;");
    asm("loc_6DA64C7: pop %ebx;");
    asm("loc_6DA64C8: ret $0xC;");
    asm("loc_6DA64CB: mov 0x28(%ebp),%edx;");
    asm("loc_6DA64CE: mov (%esi),%edi;");
    asm("loc_6DA64D0: mov 0x2C(%ebp),%esi;");
    asm("loc_6DA64D3: mov %edx,%ecx;");
    asm("loc_6DA64D5: mov %ecx,%eax;");
    asm("loc_6DA64D7: shr $2,%ecx;");
    asm("loc_6DA64DA: mov %edi,0x18(%esp);");
    asm("loc_6DA64DE: rep movsl (%esi),(%edi);");
    asm("loc_6DA64E0: mov %eax,%ecx;");
    asm("loc_6DA64E2: and $3,%ecx;");
    asm("loc_6DA64E5: rep movsb (%esi),(%edi);");
    asm("loc_6DA64E7: mov 0x18(%esp),%ecx;");
    asm("loc_6DA64EB: add %ecx,%edx;");
    asm("loc_6DA64ED: lea 0x18(%ebp),%ecx;");
    asm("loc_6DA64F0: mov %edx,(%ecx);");
    asm("loc_6DA64F2: mov (%ebx),%esi;");
    asm("loc_6DA64F4: mov 4(%ebx),%edx;");
    asm("loc_6DA64F7: add $4,%esi;");
    asm("loc_6DA64FA: mov %esi,%eax;");
    asm("loc_6DA64FC: cmp %edx,%eax;");
    asm("loc_6DA64FE: mov %esi,(%ebx);");
    asm("loc_6DA6500: jbe loc_6DA6509;");
    asm("loc_6DA6502: movl $0x16,0xC(%ebx);");
    asm("loc_6DA6509: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA650C: test %eax,%eax;");
    asm("loc_6DA650E: je loc_6DA651C;");
    asm("loc_6DA6510: pop %edi;");
    asm("loc_6DA6511: pop %esi;");
    asm("loc_6DA6512: pop %ebp;");
    asm("loc_6DA6513: mov $0x16,%eax;");
    asm("loc_6DA6518: pop %ebx;");
    asm("loc_6DA6519: ret $0xC;");
    asm("loc_6DA651C: mov (%ecx),%eax;");
    asm("loc_6DA651E: mov 0x20(%ebp),%edx;");
    asm("loc_6DA6521: mov %edx,(%eax);");
    asm("loc_6DA6523: add $4,%eax;");
    asm("loc_6DA6526: mov %eax,(%ecx);");
    asm("loc_6DA6528: mov (%ebx),%esi;");
    asm("loc_6DA652A: mov 4(%ebx),%edx;");
    asm("loc_6DA652D: add $4,%esi;");
    asm("loc_6DA6530: mov %esi,%eax;");
    asm("loc_6DA6532: cmp %edx,%eax;");
    asm("loc_6DA6534: mov %esi,(%ebx);");
    asm("loc_6DA6536: jbe loc_6DA653F;");
    asm("loc_6DA6538: movl $0x16,0xC(%ebx);");
    asm("loc_6DA653F: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA6542: test %eax,%eax;");
    asm("loc_6DA6544: je loc_6DA6552;");
    asm("loc_6DA6546: pop %edi;");
    asm("loc_6DA6547: pop %esi;");
    asm("loc_6DA6548: pop %ebp;");
    asm("loc_6DA6549: mov $0x16,%eax;");
    asm("loc_6DA654E: pop %ebx;");
    asm("loc_6DA654F: ret $0xC;");
    asm("loc_6DA6552: mov (%ecx),%eax;");
    asm("loc_6DA6554: mov 0x24(%ebp),%edx;");
    asm("loc_6DA6557: mov %edx,(%eax);");
    asm("loc_6DA6559: add $4,%eax;");
    asm("loc_6DA655C: mov %eax,(%ecx);");
    asm("loc_6DA655E: mov 0x14(%ebp),%eax;");
    asm("loc_6DA6561: push %ebx;");
    asm("loc_6DA6562: push %eax;");
    asm("loc_6DA6563: push %ecx;");
    asm("loc_6DA6564: mov %ebp,%ecx;");
    asm("loc_6DA6566: call _sub_6DA13C0;");
    asm("loc_6DA656B: test %eax,%eax;");
    asm("loc_6DA656D: mov %eax,0x1C(%ebp);");
    asm("loc_6DA6570: je loc_6DA657E;");
    asm("loc_6DA6572: pop %edi;");
    asm("loc_6DA6573: pop %esi;");
    asm("loc_6DA6574: pop %ebp;");
    asm("loc_6DA6575: mov $0x16,%eax;");
    asm("loc_6DA657A: pop %ebx;");
    asm("loc_6DA657B: ret $0xC;");
    asm("loc_6DA657E: mov (%ebx),%ecx;");
    asm("loc_6DA6580: mov 0x1C(%esp),%edx;");
    asm("loc_6DA6584: mov %ecx,(%edx);");
    asm("loc_6DA6586: mov 0xC(%ebp),%eax;");
    asm("loc_6DA6589: push %eax;");
    asm("loc_6DA658A: call _sub_6DA16B0;");
    asm("loc_6DA658F: mov %eax,%ecx;");
    asm("loc_6DA6591: mov (%ecx),%ebp;");
    asm("loc_6DA6593: mov 0x18(%ecx),%edi;");
    asm("loc_6DA6596: mov 0x10(%ecx),%eax;");
    asm("loc_6DA6599: add $4,%esp;");
    asm("loc_6DA659C: inc %ebp;");
    asm("loc_6DA659D: mov %ebp,(%ecx);");
    asm("loc_6DA659F: mov (%ebx),%edx;");
    asm("loc_6DA65A1: add %edx,%edi;");
    asm("loc_6DA65A3: mov %edi,0x18(%ecx);");
    asm("loc_6DA65A6: mov (%ebx),%ebx;");
    asm("loc_6DA65A8: cmp %eax,%ebx;");
    asm("loc_6DA65AA: mov %ebp,%esi;");
    asm("loc_6DA65AC: jbe loc_6DA65B1;");
    asm("loc_6DA65AE: mov %ebx,0x10(%ecx);");
    asm("loc_6DA65B1: mov 0x18(%ecx),%eax;");
    asm("loc_6DA65B4: xor %edx,%edx;");
    asm("loc_6DA65B6: div %esi;");
    asm("loc_6DA65B8: pop %edi;");
    asm("loc_6DA65B9: pop %esi;");
    asm("loc_6DA65BA: pop %ebp;");
    asm("loc_6DA65BB: pop %ebx;");
    asm("loc_6DA65BC: mov %eax,8(%ecx);");
    asm("loc_6DA65BF: xor %eax,%eax;");
    asm("loc_6DA65C1: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA65D0() // _sub_6DA65D0
{
    __DEBUG_ASM(6DA65D0);
    // chunk 0x6DA65D0 _sub_6DA65D0
    asm("loc_6DA65D0: mov 8(%esp),%eax;");
    asm("loc_6DA65D4: push %ebx;");
    asm("loc_6DA65D5: push %ebp;");
    asm("loc_6DA65D6: mov %ecx,%ebp;");
    asm("loc_6DA65D8: mov 0xC(%esp),%ecx;");
    asm("loc_6DA65DC: push %esi;");
    asm("loc_6DA65DD: lea 0x10(%ebp),%ebx;");
    asm("loc_6DA65E0: push %ebx;");
    asm("loc_6DA65E1: push %eax;");
    asm("loc_6DA65E2: mov %ecx,8(%ebx);");
    asm("loc_6DA65E5: lea 0x18(%ebp),%esi;");
    asm("loc_6DA65E8: push %esi;");
    asm("loc_6DA65E9: mov %ebp,%ecx;");
    asm("loc_6DA65EB: mov %eax,4(%ebx);");
    asm("loc_6DA65EE: movl $0,(%ebx);");
    asm("loc_6DA65F4: movl $0,0xC(%ebx);");
    asm("loc_6DA65FB: call _sub_6DA13C0;");
    asm("loc_6DA6600: test %eax,%eax;");
    asm("loc_6DA6602: mov %eax,0x1C(%ebp);");
    asm("loc_6DA6605: je loc_6DA6612;");
    asm("loc_6DA6607: pop %esi;");
    asm("loc_6DA6608: pop %ebp;");
    asm("loc_6DA6609: mov $0x17,%eax;");
    asm("loc_6DA660E: pop %ebx;");
    asm("loc_6DA660F: ret $0xC;");
    asm("loc_6DA6612: mov (%ebx),%edx;");
    asm("loc_6DA6614: mov 4(%ebx),%ecx;");
    asm("loc_6DA6617: add $4,%edx;");
    asm("loc_6DA661A: mov %edx,%eax;");
    asm("loc_6DA661C: cmp %ecx,%eax;");
    asm("loc_6DA661E: mov %edx,(%ebx);");
    asm("loc_6DA6620: jbe loc_6DA6629;");
    asm("loc_6DA6622: movl $0x17,0xC(%ebx);");
    asm("loc_6DA6629: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA662C: test %eax,%eax;");
    asm("loc_6DA662E: jne loc_6DA675E;");
    asm("loc_6DA6634: mov (%esi),%eax;");
    asm("loc_6DA6636: mov (%eax),%edx;");
    asm("loc_6DA6638: add $4,%eax;");
    asm("loc_6DA663B: mov %eax,(%esi);");
    asm("loc_6DA663D: mov %edx,%eax;");
    asm("loc_6DA663F: push %eax;");
    asm("loc_6DA6640: mov %edx,0x28(%ebp);");
    asm("loc_6DA6643: call _sub_6DB1F8A;");
    asm("loc_6DA6648: mov 0x28(%ebp),%ecx;");
    asm("loc_6DA664B: mov %eax,0x2C(%ebp);");
    asm("loc_6DA664E: mov (%ebx),%edx;");
    asm("loc_6DA6650: add %ecx,%edx;");
    asm("loc_6DA6652: mov 4(%ebx),%ecx;");
    asm("loc_6DA6655: mov %edx,%eax;");
    asm("loc_6DA6657: add $4,%esp;");
    asm("loc_6DA665A: cmp %ecx,%eax;");
    asm("loc_6DA665C: mov %edx,(%ebx);");
    asm("loc_6DA665E: jbe loc_6DA6667;");
    asm("loc_6DA6660: movl $0x17,0xC(%ebx);");
    asm("loc_6DA6667: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA666A: test %eax,%eax;");
    asm("loc_6DA666C: jne loc_6DA675E;");
    asm("loc_6DA6672: mov 0x28(%ebp),%eax;");
    asm("loc_6DA6675: mov (%esi),%esi;");
    asm("loc_6DA6677: mov %eax,%ecx;");
    asm("loc_6DA6679: mov %ecx,%edx;");
    asm("loc_6DA667B: shr $2,%ecx;");
    asm("loc_6DA667E: push %edi;");
    asm("loc_6DA667F: mov 0x2C(%ebp),%edi;");
    asm("loc_6DA6682: mov %esi,0x14(%esp);");
    asm("loc_6DA6686: rep movsl (%esi),(%edi);");
    asm("loc_6DA6688: mov %edx,%ecx;");
    asm("loc_6DA668A: and $3,%ecx;");
    asm("loc_6DA668D: rep movsb (%esi),(%edi);");
    asm("loc_6DA668F: mov 0x14(%esp),%ecx;");
    asm("loc_6DA6693: lea (%ecx,%eax),%edx;");
    asm("loc_6DA6696: lea 0x18(%ebp),%ecx;");
    asm("loc_6DA6699: mov %edx,(%ecx);");
    asm("loc_6DA669B: mov (%ebx),%esi;");
    asm("loc_6DA669D: mov 4(%ebx),%edx;");
    asm("loc_6DA66A0: add $4,%esi;");
    asm("loc_6DA66A3: mov %esi,%eax;");
    asm("loc_6DA66A5: cmp %edx,%eax;");
    asm("loc_6DA66A7: mov %esi,(%ebx);");
    asm("loc_6DA66A9: pop %edi;");
    asm("loc_6DA66AA: jbe loc_6DA66B3;");
    asm("loc_6DA66AC: movl $0x17,0xC(%ebx);");
    asm("loc_6DA66B3: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA66B6: test %eax,%eax;");
    asm("loc_6DA66B8: jne loc_6DA675E;");
    asm("loc_6DA66BE: mov (%ecx),%eax;");
    asm("loc_6DA66C0: mov (%eax),%edx;");
    asm("loc_6DA66C2: add $4,%eax;");
    asm("loc_6DA66C5: mov %eax,(%ecx);");
    asm("loc_6DA66C7: mov %edx,0x20(%ebp);");
    asm("loc_6DA66CA: mov (%ebx),%esi;");
    asm("loc_6DA66CC: mov 4(%ebx),%edx;");
    asm("loc_6DA66CF: add $4,%esi;");
    asm("loc_6DA66D2: mov %esi,%eax;");
    asm("loc_6DA66D4: cmp %edx,%eax;");
    asm("loc_6DA66D6: mov %esi,(%ebx);");
    asm("loc_6DA66D8: jbe loc_6DA66E1;");
    asm("loc_6DA66DA: movl $0x17,0xC(%ebx);");
    asm("loc_6DA66E1: mov 0x1C(%ebp),%eax;");
    asm("loc_6DA66E4: test %eax,%eax;");
    asm("loc_6DA66E6: jne loc_6DA675E;");
    asm("loc_6DA66E8: mov (%ecx),%eax;");
    asm("loc_6DA66EA: mov (%eax),%edx;");
    asm("loc_6DA66EC: add $4,%eax;");
    asm("loc_6DA66EF: mov %eax,(%ecx);");
    asm("loc_6DA66F1: mov 0x14(%esp),%eax;");
    asm("loc_6DA66F5: push %ebx;");
    asm("loc_6DA66F6: push %eax;");
    asm("loc_6DA66F7: push %ecx;");
    asm("loc_6DA66F8: mov %ebp,%ecx;");
    asm("loc_6DA66FA: mov %edx,0x24(%ebp);");
    asm("loc_6DA66FD: call _sub_6DA13C0;");
    asm("loc_6DA6702: test %eax,%eax;");
    asm("loc_6DA6704: mov %eax,0x1C(%ebp);");
    asm("loc_6DA6707: je loc_6DA6714;");
    asm("loc_6DA6709: pop %esi;");
    asm("loc_6DA670A: pop %ebp;");
    asm("loc_6DA670B: mov $0x17,%eax;");
    asm("loc_6DA6710: pop %ebx;");
    asm("loc_6DA6711: ret $0xC;");
    asm("loc_6DA6714: mov (%ebx),%ecx;");
    asm("loc_6DA6716: mov 0x18(%esp),%edx;");
    asm("loc_6DA671A: mov %ecx,(%edx);");
    asm("loc_6DA671C: mov 0xC(%ebp),%eax;");
    asm("loc_6DA671F: push %eax;");
    asm("loc_6DA6720: call _sub_6DA16B0;");
    asm("loc_6DA6725: mov %eax,%ecx;");
    asm("loc_6DA6727: mov 4(%ecx),%edx;");
    asm("loc_6DA672A: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA672D: mov 0x14(%ecx),%eax;");
    asm("loc_6DA6730: add $4,%esp;");
    asm("loc_6DA6733: inc %edx;");
    asm("loc_6DA6734: mov %edx,4(%ecx);");
    asm("loc_6DA6737: mov %edx,%esi;");
    asm("loc_6DA6739: mov (%ebx),%edx;");
    asm("loc_6DA673B: add $2,%edx;");
    asm("loc_6DA673E: add %edx,%ebp;");
    asm("loc_6DA6740: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA6743: mov (%ebx),%ebx;");
    asm("loc_6DA6745: add $2,%eax;");
    asm("loc_6DA6748: cmp %eax,%ebx;");
    asm("loc_6DA674A: jbe loc_6DA6752;");
    asm("loc_6DA674C: add $2,%ebx;");
    asm("loc_6DA674F: mov %ebx,0x14(%ecx);");
    asm("loc_6DA6752: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA6755: xor %edx,%edx;");
    asm("loc_6DA6757: div %esi;");
    asm("loc_6DA6759: mov %eax,0xC(%ecx);");
    asm("loc_6DA675C: xor %eax,%eax;");
    asm("loc_6DA675E: pop %esi;");
    asm("loc_6DA675F: pop %ebp;");
    asm("loc_6DA6760: pop %ebx;");
    asm("loc_6DA6761: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6770() // _sub_6DA6770
{
    __DEBUG_ASM(6DA6770);
    // chunk 0x6DA6770 _sub_6DA6770
    asm("loc_6DA6770: mov _data_6DB61B8,%eax;");
    asm("loc_6DA6775: mov %eax,_data_6DBC040;");
    asm("loc_6DA677A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6780() // _sub_6DA6780
{
    __DEBUG_ASM(6DA6780);
    // chunk 0x6DA6780 _sub_6DA6780
    asm("loc_6DA6780: mov _data_6DB61B8,%eax;");
    asm("loc_6DA6785: mov %eax,_data_6DBC044;");
    asm("loc_6DA678A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6790() // _sub_6DA6790
{
    __DEBUG_ASM(6DA6790);
    // chunk 0x6DA6790 _sub_6DA6790
    asm("loc_6DA6790: mov _data_6DB61BC,%eax;");
    asm("loc_6DA6795: mov %eax,_data_6DBC03C;");
    asm("loc_6DA679A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA67A0() // _sub_6DA67A0
{
    __DEBUG_ASM(6DA67A0);
    // chunk 0x6DA67A0 _sub_6DA67A0
    asm("loc_6DA67A0: mov 8(%esp),%eax;");
    asm("loc_6DA67A4: push %ebx;");
    asm("loc_6DA67A5: push %esi;");
    asm("loc_6DA67A6: push %edi;");
    asm("loc_6DA67A7: mov %ecx,%edi;");
    asm("loc_6DA67A9: mov 0x10(%esp),%ecx;");
    asm("loc_6DA67AD: lea 0x10(%edi),%esi;");
    asm("loc_6DA67B0: mov %eax,4(%esi);");
    asm("loc_6DA67B3: mov (%ecx),%edx;");
    asm("loc_6DA67B5: mov %edx,8(%esi);");
    asm("loc_6DA67B8: movl $0,(%esi);");
    asm("loc_6DA67BE: movl $0,0xC(%esi);");
    asm("loc_6DA67C5: mov 0x14(%edi),%eax;");
    asm("loc_6DA67C8: push %esi;");
    asm("loc_6DA67C9: push %eax;");
    asm("loc_6DA67CA: lea 0x18(%edi),%ebx;");
    asm("loc_6DA67CD: push %ebx;");
    asm("loc_6DA67CE: mov %edi,%ecx;");
    asm("loc_6DA67D0: call _sub_6DA1380;");
    asm("loc_6DA67D5: test %eax,%eax;");
    asm("loc_6DA67D7: mov %eax,0x1C(%edi);");
    asm("loc_6DA67DA: je loc_6DA67E7;");
    asm("loc_6DA67DC: pop %edi;");
    asm("loc_6DA67DD: pop %esi;");
    asm("loc_6DA67DE: mov $0x16,%eax;");
    asm("loc_6DA67E3: pop %ebx;");
    asm("loc_6DA67E4: ret $0xC;");
    asm("loc_6DA67E7: mov (%esi),%edx;");
    asm("loc_6DA67E9: mov 4(%esi),%ecx;");
    asm("loc_6DA67EC: add $4,%edx;");
    asm("loc_6DA67EF: mov %edx,%eax;");
    asm("loc_6DA67F1: cmp %ecx,%eax;");
    asm("loc_6DA67F3: mov %edx,(%esi);");
    asm("loc_6DA67F5: jbe loc_6DA67FE;");
    asm("loc_6DA67F7: movl $0x16,0xC(%esi);");
    asm("loc_6DA67FE: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6801: test %eax,%eax;");
    asm("loc_6DA6803: je loc_6DA6810;");
    asm("loc_6DA6805: pop %edi;");
    asm("loc_6DA6806: pop %esi;");
    asm("loc_6DA6807: mov $0x16,%eax;");
    asm("loc_6DA680C: pop %ebx;");
    asm("loc_6DA680D: ret $0xC;");
    asm("loc_6DA6810: mov (%ebx),%eax;");
    asm("loc_6DA6812: mov 0x20(%edi),%ecx;");
    asm("loc_6DA6815: mov %ecx,(%eax);");
    asm("loc_6DA6817: add $4,%eax;");
    asm("loc_6DA681A: mov %eax,(%ebx);");
    asm("loc_6DA681C: mov (%esi),%edx;");
    asm("loc_6DA681E: mov 4(%esi),%ecx;");
    asm("loc_6DA6821: add $2,%edx;");
    asm("loc_6DA6824: mov %edx,%eax;");
    asm("loc_6DA6826: cmp %ecx,%eax;");
    asm("loc_6DA6828: mov %edx,(%esi);");
    asm("loc_6DA682A: jbe loc_6DA6833;");
    asm("loc_6DA682C: movl $0x16,0xC(%esi);");
    asm("loc_6DA6833: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6836: test %eax,%eax;");
    asm("loc_6DA6838: je loc_6DA6845;");
    asm("loc_6DA683A: pop %edi;");
    asm("loc_6DA683B: pop %esi;");
    asm("loc_6DA683C: mov $0x16,%eax;");
    asm("loc_6DA6841: pop %ebx;");
    asm("loc_6DA6842: ret $0xC;");
    asm("loc_6DA6845: mov (%ebx),%eax;");
    asm("loc_6DA6847: mov 0x26(%edi),%dx;");
    asm("loc_6DA684B: mov %dx,(%eax);");
    asm("loc_6DA684E: add $2,%eax;");
    asm("loc_6DA6851: mov %eax,(%ebx);");
    asm("loc_6DA6853: mov (%esi),%edx;");
    asm("loc_6DA6855: mov 4(%esi),%ecx;");
    asm("loc_6DA6858: inc %edx;");
    asm("loc_6DA6859: mov %edx,%eax;");
    asm("loc_6DA685B: cmp %ecx,%eax;");
    asm("loc_6DA685D: mov %edx,(%esi);");
    asm("loc_6DA685F: jbe loc_6DA6868;");
    asm("loc_6DA6861: movl $0x16,0xC(%esi);");
    asm("loc_6DA6868: mov 0x1C(%edi),%eax;");
    asm("loc_6DA686B: test %eax,%eax;");
    asm("loc_6DA686D: je loc_6DA687A;");
    asm("loc_6DA686F: pop %edi;");
    asm("loc_6DA6870: pop %esi;");
    asm("loc_6DA6871: mov $0x16,%eax;");
    asm("loc_6DA6876: pop %ebx;");
    asm("loc_6DA6877: ret $0xC;");
    asm("loc_6DA687A: mov (%ebx),%eax;");
    asm("loc_6DA687C: mov 0x24(%edi),%cl;");
    asm("loc_6DA687F: mov %cl,(%eax);");
    asm("loc_6DA6881: mov 0x14(%edi),%edx;");
    asm("loc_6DA6884: push %esi;");
    asm("loc_6DA6885: push %edx;");
    asm("loc_6DA6886: inc %eax;");
    asm("loc_6DA6887: push %ebx;");
    asm("loc_6DA6888: mov %edi,%ecx;");
    asm("loc_6DA688A: mov %eax,(%ebx);");
    asm("loc_6DA688C: call _sub_6DA13C0;");
    asm("loc_6DA6891: test %eax,%eax;");
    asm("loc_6DA6893: mov %eax,0x1C(%edi);");
    asm("loc_6DA6896: je loc_6DA68A3;");
    asm("loc_6DA6898: pop %edi;");
    asm("loc_6DA6899: pop %esi;");
    asm("loc_6DA689A: mov $0x16,%eax;");
    asm("loc_6DA689F: pop %ebx;");
    asm("loc_6DA68A0: ret $0xC;");
    asm("loc_6DA68A3: mov (%esi),%eax;");
    asm("loc_6DA68A5: mov 0x18(%esp),%ecx;");
    asm("loc_6DA68A9: mov %eax,(%ecx);");
    asm("loc_6DA68AB: mov 0xC(%edi),%edx;");
    asm("loc_6DA68AE: push %edx;");
    asm("loc_6DA68AF: call _sub_6DA16B0;");
    asm("loc_6DA68B4: mov %eax,%ecx;");
    asm("loc_6DA68B6: mov (%ecx),%edi;");
    asm("loc_6DA68B8: mov 0x18(%ecx),%edx;");
    asm("loc_6DA68BB: add $4,%esp;");
    asm("loc_6DA68BE: inc %edi;");
    asm("loc_6DA68BF: mov %edi,(%ecx);");
    asm("loc_6DA68C1: mov (%esi),%eax;");
    asm("loc_6DA68C3: add %eax,%edx;");
    asm("loc_6DA68C5: mov 0x10(%ecx),%eax;");
    asm("loc_6DA68C8: mov %edx,0x18(%ecx);");
    asm("loc_6DA68CB: mov (%esi),%esi;");
    asm("loc_6DA68CD: cmp %eax,%esi;");
    asm("loc_6DA68CF: jbe loc_6DA68D4;");
    asm("loc_6DA68D1: mov %esi,0x10(%ecx);");
    asm("loc_6DA68D4: mov 0x18(%ecx),%eax;");
    asm("loc_6DA68D7: xor %edx,%edx;");
    asm("loc_6DA68D9: div %edi;");
    asm("loc_6DA68DB: pop %edi;");
    asm("loc_6DA68DC: pop %esi;");
    asm("loc_6DA68DD: pop %ebx;");
    asm("loc_6DA68DE: mov %eax,8(%ecx);");
    asm("loc_6DA68E1: xor %eax,%eax;");
    asm("loc_6DA68E3: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA68F0() // _sub_6DA68F0
{
    __DEBUG_ASM(6DA68F0);
    // chunk 0x6DA68F0 _sub_6DA68F0
    asm("loc_6DA68F0: mov 4(%esp),%eax;");
    asm("loc_6DA68F4: push %ebx;");
    asm("loc_6DA68F5: push %ebp;");
    asm("loc_6DA68F6: mov 0x10(%esp),%ebp;");
    asm("loc_6DA68FA: push %esi;");
    asm("loc_6DA68FB: push %edi;");
    asm("loc_6DA68FC: mov %ecx,%edi;");
    asm("loc_6DA68FE: lea 0x10(%edi),%esi;");
    asm("loc_6DA6901: push %esi;");
    asm("loc_6DA6902: push %ebp;");
    asm("loc_6DA6903: lea 0x18(%edi),%ebx;");
    asm("loc_6DA6906: push %ebx;");
    asm("loc_6DA6907: mov %ebp,4(%esi);");
    asm("loc_6DA690A: mov %eax,8(%esi);");
    asm("loc_6DA690D: movl $0,(%esi);");
    asm("loc_6DA6913: movl $0,0xC(%esi);");
    asm("loc_6DA691A: call _sub_6DA13C0;");
    asm("loc_6DA691F: test %eax,%eax;");
    asm("loc_6DA6921: mov %eax,0x1C(%edi);");
    asm("loc_6DA6924: je loc_6DA6932;");
    asm("loc_6DA6926: pop %edi;");
    asm("loc_6DA6927: pop %esi;");
    asm("loc_6DA6928: pop %ebp;");
    asm("loc_6DA6929: mov $0x17,%eax;");
    asm("loc_6DA692E: pop %ebx;");
    asm("loc_6DA692F: ret $0xC;");
    asm("loc_6DA6932: mov (%esi),%edx;");
    asm("loc_6DA6934: mov 4(%esi),%ecx;");
    asm("loc_6DA6937: add $4,%edx;");
    asm("loc_6DA693A: mov %edx,%eax;");
    asm("loc_6DA693C: cmp %ecx,%eax;");
    asm("loc_6DA693E: mov %edx,(%esi);");
    asm("loc_6DA6940: mov $0x17,%ecx;");
    asm("loc_6DA6945: jbe loc_6DA694A;");
    asm("loc_6DA6947: mov %ecx,0xC(%esi);");
    asm("loc_6DA694A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA694D: test %eax,%eax;");
    asm("loc_6DA694F: jne loc_6DA6A12;");
    asm("loc_6DA6955: mov (%ebx),%eax;");
    asm("loc_6DA6957: mov (%eax),%edx;");
    asm("loc_6DA6959: add $4,%eax;");
    asm("loc_6DA695C: mov %eax,(%ebx);");
    asm("loc_6DA695E: mov %edx,0x20(%edi);");
    asm("loc_6DA6961: mov (%esi),%eax;");
    asm("loc_6DA6963: mov 4(%esi),%edx;");
    asm("loc_6DA6966: add $2,%eax;");
    asm("loc_6DA6969: cmp %edx,%eax;");
    asm("loc_6DA696B: mov %eax,(%esi);");
    asm("loc_6DA696D: jbe loc_6DA6972;");
    asm("loc_6DA696F: mov %ecx,0xC(%esi);");
    asm("loc_6DA6972: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6975: test %eax,%eax;");
    asm("loc_6DA6977: jne loc_6DA6A12;");
    asm("loc_6DA697D: mov (%ebx),%eax;");
    asm("loc_6DA697F: mov (%eax),%dx;");
    asm("loc_6DA6982: add $2,%eax;");
    asm("loc_6DA6985: mov %eax,(%ebx);");
    asm("loc_6DA6987: mov %dx,0x26(%edi);");
    asm("loc_6DA698B: mov (%esi),%eax;");
    asm("loc_6DA698D: mov 4(%esi),%edx;");
    asm("loc_6DA6990: inc %eax;");
    asm("loc_6DA6991: cmp %edx,%eax;");
    asm("loc_6DA6993: mov %eax,(%esi);");
    asm("loc_6DA6995: jbe loc_6DA699A;");
    asm("loc_6DA6997: mov %ecx,0xC(%esi);");
    asm("loc_6DA699A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA699D: test %eax,%eax;");
    asm("loc_6DA699F: jne loc_6DA6A12;");
    asm("loc_6DA69A1: mov (%ebx),%eax;");
    asm("loc_6DA69A3: mov (%eax),%cl;");
    asm("loc_6DA69A5: push %esi;");
    asm("loc_6DA69A6: push %ebp;");
    asm("loc_6DA69A7: mov %cl,0x24(%edi);");
    asm("loc_6DA69AA: inc %eax;");
    asm("loc_6DA69AB: push %ebx;");
    asm("loc_6DA69AC: mov %edi,%ecx;");
    asm("loc_6DA69AE: mov %eax,(%ebx);");
    asm("loc_6DA69B0: call _sub_6DA13C0;");
    asm("loc_6DA69B5: test %eax,%eax;");
    asm("loc_6DA69B7: mov %eax,0x1C(%edi);");
    asm("loc_6DA69BA: je loc_6DA69C8;");
    asm("loc_6DA69BC: pop %edi;");
    asm("loc_6DA69BD: pop %esi;");
    asm("loc_6DA69BE: pop %ebp;");
    asm("loc_6DA69BF: mov $0x17,%eax;");
    asm("loc_6DA69C4: pop %ebx;");
    asm("loc_6DA69C5: ret $0xC;");
    asm("loc_6DA69C8: mov (%esi),%edx;");
    asm("loc_6DA69CA: mov 0x1C(%esp),%eax;");
    asm("loc_6DA69CE: mov %edx,(%eax);");
    asm("loc_6DA69D0: mov 0xC(%edi),%ecx;");
    asm("loc_6DA69D3: push %ecx;");
    asm("loc_6DA69D4: call _sub_6DA16B0;");
    asm("loc_6DA69D9: mov %eax,%ecx;");
    asm("loc_6DA69DB: mov 4(%ecx),%edx;");
    asm("loc_6DA69DE: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA69E1: mov 0x14(%ecx),%eax;");
    asm("loc_6DA69E4: add $4,%esp;");
    asm("loc_6DA69E7: inc %edx;");
    asm("loc_6DA69E8: mov %edx,4(%ecx);");
    asm("loc_6DA69EB: mov %edx,%edi;");
    asm("loc_6DA69ED: mov (%esi),%edx;");
    asm("loc_6DA69EF: add $2,%edx;");
    asm("loc_6DA69F2: add %edx,%ebp;");
    asm("loc_6DA69F4: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA69F7: mov (%esi),%esi;");
    asm("loc_6DA69F9: add $2,%eax;");
    asm("loc_6DA69FC: cmp %eax,%esi;");
    asm("loc_6DA69FE: jbe loc_6DA6A06;");
    asm("loc_6DA6A00: add $2,%esi;");
    asm("loc_6DA6A03: mov %esi,0x14(%ecx);");
    asm("loc_6DA6A06: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA6A09: xor %edx,%edx;");
    asm("loc_6DA6A0B: div %edi;");
    asm("loc_6DA6A0D: mov %eax,0xC(%ecx);");
    asm("loc_6DA6A10: xor %eax,%eax;");
    asm("loc_6DA6A12: pop %edi;");
    asm("loc_6DA6A13: pop %esi;");
    asm("loc_6DA6A14: pop %ebp;");
    asm("loc_6DA6A15: pop %ebx;");
    asm("loc_6DA6A16: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6A20() // _sub_6DA6A20
{
    __DEBUG_ASM(6DA6A20);
    // chunk 0x6DA6A20 _sub_6DA6A20
    asm("loc_6DA6A20: mov _data_6DB61C4,%eax;");
    asm("loc_6DA6A25: mov %eax,_data_6DBC050;");
    asm("loc_6DA6A2A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6A30() // _sub_6DA6A30
{
    __DEBUG_ASM(6DA6A30);
    // chunk 0x6DA6A30 _sub_6DA6A30
    asm("loc_6DA6A30: mov _data_6DB61C4,%eax;");
    asm("loc_6DA6A35: mov %eax,_data_6DBC054;");
    asm("loc_6DA6A3A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6A40() // _sub_6DA6A40
{
    __DEBUG_ASM(6DA6A40);
    // chunk 0x6DA6A40 _sub_6DA6A40
    asm("loc_6DA6A40: mov _data_6DB61C8,%eax;");
    asm("loc_6DA6A45: mov %eax,_data_6DBC04C;");
    asm("loc_6DA6A4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6A50() // _sub_6DA6A50
{
    __DEBUG_ASM(6DA6A50);
    // chunk 0x6DA6A50 _sub_6DA6A50
    asm("loc_6DA6A50: mov 4(%esp),%eax;");
    asm("loc_6DA6A54: push %ebx;");
    asm("loc_6DA6A55: push %ebp;");
    asm("loc_6DA6A56: mov 0x10(%esp),%ebp;");
    asm("loc_6DA6A5A: push %esi;");
    asm("loc_6DA6A5B: push %edi;");
    asm("loc_6DA6A5C: mov %ecx,%edi;");
    asm("loc_6DA6A5E: lea 0x10(%edi),%esi;");
    asm("loc_6DA6A61: push %esi;");
    asm("loc_6DA6A62: push %ebp;");
    asm("loc_6DA6A63: lea 0x18(%edi),%ebx;");
    asm("loc_6DA6A66: push %ebx;");
    asm("loc_6DA6A67: mov %ebp,4(%esi);");
    asm("loc_6DA6A6A: mov %eax,8(%esi);");
    asm("loc_6DA6A6D: movl $0,(%esi);");
    asm("loc_6DA6A73: movl $0,0xC(%esi);");
    asm("loc_6DA6A7A: call _sub_6DA13C0;");
    asm("loc_6DA6A7F: test %eax,%eax;");
    asm("loc_6DA6A81: mov %eax,0x1C(%edi);");
    asm("loc_6DA6A84: je loc_6DA6A92;");
    asm("loc_6DA6A86: pop %edi;");
    asm("loc_6DA6A87: pop %esi;");
    asm("loc_6DA6A88: pop %ebp;");
    asm("loc_6DA6A89: mov $0x17,%eax;");
    asm("loc_6DA6A8E: pop %ebx;");
    asm("loc_6DA6A8F: ret $0xC;");
    asm("loc_6DA6A92: mov (%esi),%edx;");
    asm("loc_6DA6A94: mov 4(%esi),%ecx;");
    asm("loc_6DA6A97: add $4,%edx;");
    asm("loc_6DA6A9A: mov %edx,%eax;");
    asm("loc_6DA6A9C: cmp %ecx,%eax;");
    asm("loc_6DA6A9E: mov %edx,(%esi);");
    asm("loc_6DA6AA0: mov $0x17,%ecx;");
    asm("loc_6DA6AA5: jbe loc_6DA6AAA;");
    asm("loc_6DA6AA7: mov %ecx,0xC(%esi);");
    asm("loc_6DA6AAA: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6AAD: test %eax,%eax;");
    asm("loc_6DA6AAF: jne loc_6DA6B6C;");
    asm("loc_6DA6AB5: mov (%ebx),%eax;");
    asm("loc_6DA6AB7: mov (%eax),%edx;");
    asm("loc_6DA6AB9: add $4,%eax;");
    asm("loc_6DA6ABC: mov %eax,(%ebx);");
    asm("loc_6DA6ABE: mov %edx,0x20(%edi);");
    asm("loc_6DA6AC1: mov (%esi),%eax;");
    asm("loc_6DA6AC3: mov 4(%esi),%edx;");
    asm("loc_6DA6AC6: inc %eax;");
    asm("loc_6DA6AC7: cmp %edx,%eax;");
    asm("loc_6DA6AC9: mov %eax,(%esi);");
    asm("loc_6DA6ACB: jbe loc_6DA6AD0;");
    asm("loc_6DA6ACD: mov %ecx,0xC(%esi);");
    asm("loc_6DA6AD0: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6AD3: test %eax,%eax;");
    asm("loc_6DA6AD5: jne loc_6DA6B6C;");
    asm("loc_6DA6ADB: mov (%ebx),%eax;");
    asm("loc_6DA6ADD: mov (%eax),%dl;");
    asm("loc_6DA6ADF: inc %eax;");
    asm("loc_6DA6AE0: mov %eax,(%ebx);");
    asm("loc_6DA6AE2: mov %dl,0x24(%edi);");
    asm("loc_6DA6AE5: mov (%esi),%eax;");
    asm("loc_6DA6AE7: mov 4(%esi),%edx;");
    asm("loc_6DA6AEA: inc %eax;");
    asm("loc_6DA6AEB: cmp %edx,%eax;");
    asm("loc_6DA6AED: mov %eax,(%esi);");
    asm("loc_6DA6AEF: jbe loc_6DA6AF4;");
    asm("loc_6DA6AF1: mov %ecx,0xC(%esi);");
    asm("loc_6DA6AF4: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6AF7: test %eax,%eax;");
    asm("loc_6DA6AF9: jne loc_6DA6B6C;");
    asm("loc_6DA6AFB: mov (%ebx),%eax;");
    asm("loc_6DA6AFD: mov (%eax),%cl;");
    asm("loc_6DA6AFF: push %esi;");
    asm("loc_6DA6B00: push %ebp;");
    asm("loc_6DA6B01: mov %cl,0x25(%edi);");
    asm("loc_6DA6B04: inc %eax;");
    asm("loc_6DA6B05: push %ebx;");
    asm("loc_6DA6B06: mov %edi,%ecx;");
    asm("loc_6DA6B08: mov %eax,(%ebx);");
    asm("loc_6DA6B0A: call _sub_6DA13C0;");
    asm("loc_6DA6B0F: test %eax,%eax;");
    asm("loc_6DA6B11: mov %eax,0x1C(%edi);");
    asm("loc_6DA6B14: je loc_6DA6B22;");
    asm("loc_6DA6B16: pop %edi;");
    asm("loc_6DA6B17: pop %esi;");
    asm("loc_6DA6B18: pop %ebp;");
    asm("loc_6DA6B19: mov $0x17,%eax;");
    asm("loc_6DA6B1E: pop %ebx;");
    asm("loc_6DA6B1F: ret $0xC;");
    asm("loc_6DA6B22: mov (%esi),%edx;");
    asm("loc_6DA6B24: mov 0x1C(%esp),%eax;");
    asm("loc_6DA6B28: mov %edx,(%eax);");
    asm("loc_6DA6B2A: mov 0xC(%edi),%ecx;");
    asm("loc_6DA6B2D: push %ecx;");
    asm("loc_6DA6B2E: call _sub_6DA16B0;");
    asm("loc_6DA6B33: mov %eax,%ecx;");
    asm("loc_6DA6B35: mov 4(%ecx),%edx;");
    asm("loc_6DA6B38: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA6B3B: mov 0x14(%ecx),%eax;");
    asm("loc_6DA6B3E: add $4,%esp;");
    asm("loc_6DA6B41: inc %edx;");
    asm("loc_6DA6B42: mov %edx,4(%ecx);");
    asm("loc_6DA6B45: mov %edx,%edi;");
    asm("loc_6DA6B47: mov (%esi),%edx;");
    asm("loc_6DA6B49: add $2,%edx;");
    asm("loc_6DA6B4C: add %edx,%ebp;");
    asm("loc_6DA6B4E: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA6B51: mov (%esi),%esi;");
    asm("loc_6DA6B53: add $2,%eax;");
    asm("loc_6DA6B56: cmp %eax,%esi;");
    asm("loc_6DA6B58: jbe loc_6DA6B60;");
    asm("loc_6DA6B5A: add $2,%esi;");
    asm("loc_6DA6B5D: mov %esi,0x14(%ecx);");
    asm("loc_6DA6B60: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA6B63: xor %edx,%edx;");
    asm("loc_6DA6B65: div %edi;");
    asm("loc_6DA6B67: mov %eax,0xC(%ecx);");
    asm("loc_6DA6B6A: xor %eax,%eax;");
    asm("loc_6DA6B6C: pop %edi;");
    asm("loc_6DA6B6D: pop %esi;");
    asm("loc_6DA6B6E: pop %ebp;");
    asm("loc_6DA6B6F: pop %ebx;");
    asm("loc_6DA6B70: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6B80() // _sub_6DA6B80
{
    __DEBUG_ASM(6DA6B80);
    // chunk 0x6DA6B80 _sub_6DA6B80
    asm("loc_6DA6B80: mov 8(%esp),%eax;");
    asm("loc_6DA6B84: push %ebx;");
    asm("loc_6DA6B85: push %ebp;");
    asm("loc_6DA6B86: push %esi;");
    asm("loc_6DA6B87: push %edi;");
    asm("loc_6DA6B88: mov %ecx,%edi;");
    asm("loc_6DA6B8A: mov 0x14(%esp),%ecx;");
    asm("loc_6DA6B8E: lea 0x10(%edi),%esi;");
    asm("loc_6DA6B91: mov %eax,4(%esi);");
    asm("loc_6DA6B94: mov (%ecx),%edx;");
    asm("loc_6DA6B96: mov %edx,8(%esi);");
    asm("loc_6DA6B99: movl $0,(%esi);");
    asm("loc_6DA6B9F: movl $0,0xC(%esi);");
    asm("loc_6DA6BA6: mov 0x14(%edi),%eax;");
    asm("loc_6DA6BA9: push %esi;");
    asm("loc_6DA6BAA: push %eax;");
    asm("loc_6DA6BAB: lea 0x18(%edi),%ebx;");
    asm("loc_6DA6BAE: push %ebx;");
    asm("loc_6DA6BAF: mov %edi,%ecx;");
    asm("loc_6DA6BB1: call _sub_6DA1380;");
    asm("loc_6DA6BB6: test %eax,%eax;");
    asm("loc_6DA6BB8: mov %eax,0x1C(%edi);");
    asm("loc_6DA6BBB: je loc_6DA6BC9;");
    asm("loc_6DA6BBD: pop %edi;");
    asm("loc_6DA6BBE: pop %esi;");
    asm("loc_6DA6BBF: pop %ebp;");
    asm("loc_6DA6BC0: mov $0x16,%eax;");
    asm("loc_6DA6BC5: pop %ebx;");
    asm("loc_6DA6BC6: ret $0xC;");
    asm("loc_6DA6BC9: mov (%esi),%edx;");
    asm("loc_6DA6BCB: mov 4(%esi),%ecx;");
    asm("loc_6DA6BCE: add $4,%edx;");
    asm("loc_6DA6BD1: mov %edx,%eax;");
    asm("loc_6DA6BD3: cmp %ecx,%eax;");
    asm("loc_6DA6BD5: mov %edx,(%esi);");
    asm("loc_6DA6BD7: mov $0x16,%ebp;");
    asm("loc_6DA6BDC: jbe loc_6DA6BE1;");
    asm("loc_6DA6BDE: mov %ebp,0xC(%esi);");
    asm("loc_6DA6BE1: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6BE4: test %eax,%eax;");
    asm("loc_6DA6BE6: je loc_6DA6BF1;");
    asm("loc_6DA6BE8: pop %edi;");
    asm("loc_6DA6BE9: pop %esi;");
    asm("loc_6DA6BEA: mov %ebp,%eax;");
    asm("loc_6DA6BEC: pop %ebp;");
    asm("loc_6DA6BED: pop %ebx;");
    asm("loc_6DA6BEE: ret $0xC;");
    asm("loc_6DA6BF1: mov (%ebx),%eax;");
    asm("loc_6DA6BF3: mov 0x20(%edi),%ecx;");
    asm("loc_6DA6BF6: mov %ecx,(%eax);");
    asm("loc_6DA6BF8: add $4,%eax;");
    asm("loc_6DA6BFB: mov %eax,(%ebx);");
    asm("loc_6DA6BFD: mov (%esi),%edx;");
    asm("loc_6DA6BFF: mov 4(%esi),%ecx;");
    asm("loc_6DA6C02: add $4,%edx;");
    asm("loc_6DA6C05: mov %edx,%eax;");
    asm("loc_6DA6C07: cmp %ecx,%eax;");
    asm("loc_6DA6C09: mov %edx,(%esi);");
    asm("loc_6DA6C0B: jbe loc_6DA6C10;");
    asm("loc_6DA6C0D: mov %ebp,0xC(%esi);");
    asm("loc_6DA6C10: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6C13: test %eax,%eax;");
    asm("loc_6DA6C15: je loc_6DA6C20;");
    asm("loc_6DA6C17: pop %edi;");
    asm("loc_6DA6C18: pop %esi;");
    asm("loc_6DA6C19: mov %ebp,%eax;");
    asm("loc_6DA6C1B: pop %ebp;");
    asm("loc_6DA6C1C: pop %ebx;");
    asm("loc_6DA6C1D: ret $0xC;");
    asm("loc_6DA6C20: mov (%ebx),%eax;");
    asm("loc_6DA6C22: mov 0x24(%edi),%edx;");
    asm("loc_6DA6C25: mov %edx,(%eax);");
    asm("loc_6DA6C27: add $4,%eax;");
    asm("loc_6DA6C2A: mov %eax,(%ebx);");
    asm("loc_6DA6C2C: mov (%esi),%edx;");
    asm("loc_6DA6C2E: mov 4(%esi),%ecx;");
    asm("loc_6DA6C31: add $4,%edx;");
    asm("loc_6DA6C34: mov %edx,%eax;");
    asm("loc_6DA6C36: cmp %ecx,%eax;");
    asm("loc_6DA6C38: mov %edx,(%esi);");
    asm("loc_6DA6C3A: jbe loc_6DA6C3F;");
    asm("loc_6DA6C3C: mov %ebp,0xC(%esi);");
    asm("loc_6DA6C3F: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6C42: test %eax,%eax;");
    asm("loc_6DA6C44: je loc_6DA6C4F;");
    asm("loc_6DA6C46: pop %edi;");
    asm("loc_6DA6C47: pop %esi;");
    asm("loc_6DA6C48: mov %ebp,%eax;");
    asm("loc_6DA6C4A: pop %ebp;");
    asm("loc_6DA6C4B: pop %ebx;");
    asm("loc_6DA6C4C: ret $0xC;");
    asm("loc_6DA6C4F: mov (%ebx),%eax;");
    asm("loc_6DA6C51: mov 0x28(%edi),%ecx;");
    asm("loc_6DA6C54: mov %ecx,(%eax);");
    asm("loc_6DA6C56: add $4,%eax;");
    asm("loc_6DA6C59: mov %eax,(%ebx);");
    asm("loc_6DA6C5B: mov (%esi),%edx;");
    asm("loc_6DA6C5D: mov 4(%esi),%ecx;");
    asm("loc_6DA6C60: inc %edx;");
    asm("loc_6DA6C61: mov %edx,%eax;");
    asm("loc_6DA6C63: cmp %ecx,%eax;");
    asm("loc_6DA6C65: mov %edx,(%esi);");
    asm("loc_6DA6C67: jbe loc_6DA6C6C;");
    asm("loc_6DA6C69: mov %ebp,0xC(%esi);");
    asm("loc_6DA6C6C: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6C6F: test %eax,%eax;");
    asm("loc_6DA6C71: je loc_6DA6C7C;");
    asm("loc_6DA6C73: pop %edi;");
    asm("loc_6DA6C74: pop %esi;");
    asm("loc_6DA6C75: mov %ebp,%eax;");
    asm("loc_6DA6C77: pop %ebp;");
    asm("loc_6DA6C78: pop %ebx;");
    asm("loc_6DA6C79: ret $0xC;");
    asm("loc_6DA6C7C: mov (%ebx),%eax;");
    asm("loc_6DA6C7E: mov 0x2C(%edi),%dl;");
    asm("loc_6DA6C81: mov %dl,(%eax);");
    asm("loc_6DA6C83: inc %eax;");
    asm("loc_6DA6C84: mov %eax,(%ebx);");
    asm("loc_6DA6C86: mov 0x14(%edi),%eax;");
    asm("loc_6DA6C89: push %esi;");
    asm("loc_6DA6C8A: push %eax;");
    asm("loc_6DA6C8B: push %ebx;");
    asm("loc_6DA6C8C: mov %edi,%ecx;");
    asm("loc_6DA6C8E: call _sub_6DA13C0;");
    asm("loc_6DA6C93: test %eax,%eax;");
    asm("loc_6DA6C95: mov %eax,0x1C(%edi);");
    asm("loc_6DA6C98: je loc_6DA6CA3;");
    asm("loc_6DA6C9A: pop %edi;");
    asm("loc_6DA6C9B: pop %esi;");
    asm("loc_6DA6C9C: mov %ebp,%eax;");
    asm("loc_6DA6C9E: pop %ebp;");
    asm("loc_6DA6C9F: pop %ebx;");
    asm("loc_6DA6CA0: ret $0xC;");
    asm("loc_6DA6CA3: mov (%esi),%ecx;");
    asm("loc_6DA6CA5: mov 0x1C(%esp),%edx;");
    asm("loc_6DA6CA9: mov %ecx,(%edx);");
    asm("loc_6DA6CAB: mov 0xC(%edi),%eax;");
    asm("loc_6DA6CAE: push %eax;");
    asm("loc_6DA6CAF: call _sub_6DA16B0;");
    asm("loc_6DA6CB4: mov %eax,%ecx;");
    asm("loc_6DA6CB6: mov (%ecx),%ebp;");
    asm("loc_6DA6CB8: mov 0x18(%ecx),%ebx;");
    asm("loc_6DA6CBB: mov 0x10(%ecx),%eax;");
    asm("loc_6DA6CBE: add $4,%esp;");
    asm("loc_6DA6CC1: inc %ebp;");
    asm("loc_6DA6CC2: mov %ebp,(%ecx);");
    asm("loc_6DA6CC4: mov (%esi),%edx;");
    asm("loc_6DA6CC6: add %edx,%ebx;");
    asm("loc_6DA6CC8: mov %ebx,0x18(%ecx);");
    asm("loc_6DA6CCB: mov (%esi),%esi;");
    asm("loc_6DA6CCD: cmp %eax,%esi;");
    asm("loc_6DA6CCF: mov %ebp,%edi;");
    asm("loc_6DA6CD1: jbe loc_6DA6CD6;");
    asm("loc_6DA6CD3: mov %esi,0x10(%ecx);");
    asm("loc_6DA6CD6: mov 0x18(%ecx),%eax;");
    asm("loc_6DA6CD9: xor %edx,%edx;");
    asm("loc_6DA6CDB: div %edi;");
    asm("loc_6DA6CDD: pop %edi;");
    asm("loc_6DA6CDE: pop %esi;");
    asm("loc_6DA6CDF: pop %ebp;");
    asm("loc_6DA6CE0: pop %ebx;");
    asm("loc_6DA6CE1: mov %eax,8(%ecx);");
    asm("loc_6DA6CE4: xor %eax,%eax;");
    asm("loc_6DA6CE6: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6CF0() // _sub_6DA6CF0
{
    __DEBUG_ASM(6DA6CF0);
    // chunk 0x6DA6CF0 _sub_6DA6CF0
    asm("loc_6DA6CF0: mov 4(%esp),%eax;");
    asm("loc_6DA6CF4: push %ebx;");
    asm("loc_6DA6CF5: push %ebp;");
    asm("loc_6DA6CF6: mov 0x10(%esp),%ebp;");
    asm("loc_6DA6CFA: push %esi;");
    asm("loc_6DA6CFB: push %edi;");
    asm("loc_6DA6CFC: mov %ecx,%edi;");
    asm("loc_6DA6CFE: lea 0x10(%edi),%esi;");
    asm("loc_6DA6D01: push %esi;");
    asm("loc_6DA6D02: push %ebp;");
    asm("loc_6DA6D03: lea 0x18(%edi),%ebx;");
    asm("loc_6DA6D06: push %ebx;");
    asm("loc_6DA6D07: mov %ebp,4(%esi);");
    asm("loc_6DA6D0A: mov %eax,8(%esi);");
    asm("loc_6DA6D0D: movl $0,(%esi);");
    asm("loc_6DA6D13: movl $0,0xC(%esi);");
    asm("loc_6DA6D1A: call _sub_6DA13C0;");
    asm("loc_6DA6D1F: test %eax,%eax;");
    asm("loc_6DA6D21: mov %eax,0x1C(%edi);");
    asm("loc_6DA6D24: je loc_6DA6D32;");
    asm("loc_6DA6D26: pop %edi;");
    asm("loc_6DA6D27: pop %esi;");
    asm("loc_6DA6D28: pop %ebp;");
    asm("loc_6DA6D29: mov $0x17,%eax;");
    asm("loc_6DA6D2E: pop %ebx;");
    asm("loc_6DA6D2F: ret $0xC;");
    asm("loc_6DA6D32: mov (%esi),%edx;");
    asm("loc_6DA6D34: mov 4(%esi),%ecx;");
    asm("loc_6DA6D37: add $4,%edx;");
    asm("loc_6DA6D3A: mov %edx,%eax;");
    asm("loc_6DA6D3C: cmp %ecx,%eax;");
    asm("loc_6DA6D3E: mov %edx,(%esi);");
    asm("loc_6DA6D40: mov $0x17,%ecx;");
    asm("loc_6DA6D45: jbe loc_6DA6D4A;");
    asm("loc_6DA6D47: mov %ecx,0xC(%esi);");
    asm("loc_6DA6D4A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6D4D: test %eax,%eax;");
    asm("loc_6DA6D4F: jne loc_6DA6E38;");
    asm("loc_6DA6D55: mov (%ebx),%eax;");
    asm("loc_6DA6D57: mov (%eax),%edx;");
    asm("loc_6DA6D59: add $4,%eax;");
    asm("loc_6DA6D5C: mov %eax,(%ebx);");
    asm("loc_6DA6D5E: mov %edx,0x20(%edi);");
    asm("loc_6DA6D61: mov (%esi),%eax;");
    asm("loc_6DA6D63: mov 4(%esi),%edx;");
    asm("loc_6DA6D66: add $4,%eax;");
    asm("loc_6DA6D69: cmp %edx,%eax;");
    asm("loc_6DA6D6B: mov %eax,(%esi);");
    asm("loc_6DA6D6D: jbe loc_6DA6D72;");
    asm("loc_6DA6D6F: mov %ecx,0xC(%esi);");
    asm("loc_6DA6D72: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6D75: test %eax,%eax;");
    asm("loc_6DA6D77: jne loc_6DA6E38;");
    asm("loc_6DA6D7D: mov (%ebx),%eax;");
    asm("loc_6DA6D7F: mov (%eax),%edx;");
    asm("loc_6DA6D81: add $4,%eax;");
    asm("loc_6DA6D84: mov %eax,(%ebx);");
    asm("loc_6DA6D86: mov %edx,0x24(%edi);");
    asm("loc_6DA6D89: mov (%esi),%eax;");
    asm("loc_6DA6D8B: mov 4(%esi),%edx;");
    asm("loc_6DA6D8E: add $4,%eax;");
    asm("loc_6DA6D91: cmp %edx,%eax;");
    asm("loc_6DA6D93: mov %eax,(%esi);");
    asm("loc_6DA6D95: jbe loc_6DA6D9A;");
    asm("loc_6DA6D97: mov %ecx,0xC(%esi);");
    asm("loc_6DA6D9A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6D9D: test %eax,%eax;");
    asm("loc_6DA6D9F: jne loc_6DA6E38;");
    asm("loc_6DA6DA5: mov (%ebx),%eax;");
    asm("loc_6DA6DA7: mov (%eax),%edx;");
    asm("loc_6DA6DA9: add $4,%eax;");
    asm("loc_6DA6DAC: mov %eax,(%ebx);");
    asm("loc_6DA6DAE: mov %edx,0x28(%edi);");
    asm("loc_6DA6DB1: mov (%esi),%eax;");
    asm("loc_6DA6DB3: mov 4(%esi),%edx;");
    asm("loc_6DA6DB6: inc %eax;");
    asm("loc_6DA6DB7: cmp %edx,%eax;");
    asm("loc_6DA6DB9: mov %eax,(%esi);");
    asm("loc_6DA6DBB: jbe loc_6DA6DC0;");
    asm("loc_6DA6DBD: mov %ecx,0xC(%esi);");
    asm("loc_6DA6DC0: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6DC3: test %eax,%eax;");
    asm("loc_6DA6DC5: jne loc_6DA6E38;");
    asm("loc_6DA6DC7: mov (%ebx),%eax;");
    asm("loc_6DA6DC9: mov (%eax),%cl;");
    asm("loc_6DA6DCB: push %esi;");
    asm("loc_6DA6DCC: push %ebp;");
    asm("loc_6DA6DCD: mov %cl,0x2C(%edi);");
    asm("loc_6DA6DD0: inc %eax;");
    asm("loc_6DA6DD1: push %ebx;");
    asm("loc_6DA6DD2: mov %edi,%ecx;");
    asm("loc_6DA6DD4: mov %eax,(%ebx);");
    asm("loc_6DA6DD6: call _sub_6DA13C0;");
    asm("loc_6DA6DDB: test %eax,%eax;");
    asm("loc_6DA6DDD: mov %eax,0x1C(%edi);");
    asm("loc_6DA6DE0: je loc_6DA6DEE;");
    asm("loc_6DA6DE2: pop %edi;");
    asm("loc_6DA6DE3: pop %esi;");
    asm("loc_6DA6DE4: pop %ebp;");
    asm("loc_6DA6DE5: mov $0x17,%eax;");
    asm("loc_6DA6DEA: pop %ebx;");
    asm("loc_6DA6DEB: ret $0xC;");
    asm("loc_6DA6DEE: mov (%esi),%edx;");
    asm("loc_6DA6DF0: mov 0x1C(%esp),%eax;");
    asm("loc_6DA6DF4: mov %edx,(%eax);");
    asm("loc_6DA6DF6: mov 0xC(%edi),%ecx;");
    asm("loc_6DA6DF9: push %ecx;");
    asm("loc_6DA6DFA: call _sub_6DA16B0;");
    asm("loc_6DA6DFF: mov %eax,%ecx;");
    asm("loc_6DA6E01: mov 4(%ecx),%edx;");
    asm("loc_6DA6E04: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA6E07: mov 0x14(%ecx),%eax;");
    asm("loc_6DA6E0A: add $4,%esp;");
    asm("loc_6DA6E0D: inc %edx;");
    asm("loc_6DA6E0E: mov %edx,4(%ecx);");
    asm("loc_6DA6E11: mov %edx,%edi;");
    asm("loc_6DA6E13: mov (%esi),%edx;");
    asm("loc_6DA6E15: add $2,%edx;");
    asm("loc_6DA6E18: add %edx,%ebp;");
    asm("loc_6DA6E1A: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA6E1D: mov (%esi),%esi;");
    asm("loc_6DA6E1F: add $2,%eax;");
    asm("loc_6DA6E22: cmp %eax,%esi;");
    asm("loc_6DA6E24: jbe loc_6DA6E2C;");
    asm("loc_6DA6E26: add $2,%esi;");
    asm("loc_6DA6E29: mov %esi,0x14(%ecx);");
    asm("loc_6DA6E2C: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA6E2F: xor %edx,%edx;");
    asm("loc_6DA6E31: div %edi;");
    asm("loc_6DA6E33: mov %eax,0xC(%ecx);");
    asm("loc_6DA6E36: xor %eax,%eax;");
    asm("loc_6DA6E38: pop %edi;");
    asm("loc_6DA6E39: pop %esi;");
    asm("loc_6DA6E3A: pop %ebp;");
    asm("loc_6DA6E3B: pop %ebx;");
    asm("loc_6DA6E3C: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6E40() // _sub_6DA6E40
{
    __DEBUG_ASM(6DA6E40);
    // chunk 0x6DA6E40 _sub_6DA6E40
    asm("loc_6DA6E40: mov 4(%esp),%eax;");
    asm("loc_6DA6E44: push %ebx;");
    asm("loc_6DA6E45: push %ebp;");
    asm("loc_6DA6E46: mov 0x10(%esp),%ebp;");
    asm("loc_6DA6E4A: push %esi;");
    asm("loc_6DA6E4B: push %edi;");
    asm("loc_6DA6E4C: mov %ecx,%edi;");
    asm("loc_6DA6E4E: lea 0x10(%edi),%esi;");
    asm("loc_6DA6E51: push %esi;");
    asm("loc_6DA6E52: push %ebp;");
    asm("loc_6DA6E53: lea 0x18(%edi),%ebx;");
    asm("loc_6DA6E56: push %ebx;");
    asm("loc_6DA6E57: mov %ebp,4(%esi);");
    asm("loc_6DA6E5A: mov %eax,8(%esi);");
    asm("loc_6DA6E5D: movl $0,(%esi);");
    asm("loc_6DA6E63: movl $0,0xC(%esi);");
    asm("loc_6DA6E6A: call _sub_6DA13C0;");
    asm("loc_6DA6E6F: test %eax,%eax;");
    asm("loc_6DA6E71: mov %eax,0x1C(%edi);");
    asm("loc_6DA6E74: je loc_6DA6E82;");
    asm("loc_6DA6E76: pop %edi;");
    asm("loc_6DA6E77: pop %esi;");
    asm("loc_6DA6E78: pop %ebp;");
    asm("loc_6DA6E79: mov $0x17,%eax;");
    asm("loc_6DA6E7E: pop %ebx;");
    asm("loc_6DA6E7F: ret $0xC;");
    asm("loc_6DA6E82: mov (%esi),%edx;");
    asm("loc_6DA6E84: mov 4(%esi),%ecx;");
    asm("loc_6DA6E87: add $4,%edx;");
    asm("loc_6DA6E8A: mov %edx,%eax;");
    asm("loc_6DA6E8C: cmp %ecx,%eax;");
    asm("loc_6DA6E8E: mov %edx,(%esi);");
    asm("loc_6DA6E90: mov $0x17,%ecx;");
    asm("loc_6DA6E95: jbe loc_6DA6E9A;");
    asm("loc_6DA6E97: mov %ecx,0xC(%esi);");
    asm("loc_6DA6E9A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6E9D: test %eax,%eax;");
    asm("loc_6DA6E9F: jne loc_6DA6F64;");
    asm("loc_6DA6EA5: mov (%ebx),%eax;");
    asm("loc_6DA6EA7: mov (%eax),%edx;");
    asm("loc_6DA6EA9: add $4,%eax;");
    asm("loc_6DA6EAC: mov %eax,(%ebx);");
    asm("loc_6DA6EAE: mov %edx,0x20(%edi);");
    asm("loc_6DA6EB1: mov (%esi),%eax;");
    asm("loc_6DA6EB3: mov 4(%esi),%edx;");
    asm("loc_6DA6EB6: add $4,%eax;");
    asm("loc_6DA6EB9: cmp %edx,%eax;");
    asm("loc_6DA6EBB: mov %eax,(%esi);");
    asm("loc_6DA6EBD: jbe loc_6DA6EC2;");
    asm("loc_6DA6EBF: mov %ecx,0xC(%esi);");
    asm("loc_6DA6EC2: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6EC5: test %eax,%eax;");
    asm("loc_6DA6EC7: jne loc_6DA6F64;");
    asm("loc_6DA6ECD: mov (%ebx),%eax;");
    asm("loc_6DA6ECF: mov (%eax),%edx;");
    asm("loc_6DA6ED1: add $4,%eax;");
    asm("loc_6DA6ED4: mov %eax,(%ebx);");
    asm("loc_6DA6ED6: mov %edx,0x24(%edi);");
    asm("loc_6DA6ED9: mov (%esi),%eax;");
    asm("loc_6DA6EDB: mov 4(%esi),%edx;");
    asm("loc_6DA6EDE: add $4,%eax;");
    asm("loc_6DA6EE1: cmp %edx,%eax;");
    asm("loc_6DA6EE3: mov %eax,(%esi);");
    asm("loc_6DA6EE5: jbe loc_6DA6EEA;");
    asm("loc_6DA6EE7: mov %ecx,0xC(%esi);");
    asm("loc_6DA6EEA: mov 0x1C(%edi),%eax;");
    asm("loc_6DA6EED: test %eax,%eax;");
    asm("loc_6DA6EEF: jne loc_6DA6F64;");
    asm("loc_6DA6EF1: mov (%ebx),%eax;");
    asm("loc_6DA6EF3: mov (%eax),%ecx;");
    asm("loc_6DA6EF5: push %esi;");
    asm("loc_6DA6EF6: push %ebp;");
    asm("loc_6DA6EF7: mov %ecx,0x28(%edi);");
    asm("loc_6DA6EFA: add $4,%eax;");
    asm("loc_6DA6EFD: push %ebx;");
    asm("loc_6DA6EFE: mov %edi,%ecx;");
    asm("loc_6DA6F00: mov %eax,(%ebx);");
    asm("loc_6DA6F02: call _sub_6DA13C0;");
    asm("loc_6DA6F07: test %eax,%eax;");
    asm("loc_6DA6F09: mov %eax,0x1C(%edi);");
    asm("loc_6DA6F0C: je loc_6DA6F1A;");
    asm("loc_6DA6F0E: pop %edi;");
    asm("loc_6DA6F0F: pop %esi;");
    asm("loc_6DA6F10: pop %ebp;");
    asm("loc_6DA6F11: mov $0x17,%eax;");
    asm("loc_6DA6F16: pop %ebx;");
    asm("loc_6DA6F17: ret $0xC;");
    asm("loc_6DA6F1A: mov (%esi),%edx;");
    asm("loc_6DA6F1C: mov 0x1C(%esp),%eax;");
    asm("loc_6DA6F20: mov %edx,(%eax);");
    asm("loc_6DA6F22: mov 0xC(%edi),%ecx;");
    asm("loc_6DA6F25: push %ecx;");
    asm("loc_6DA6F26: call _sub_6DA16B0;");
    asm("loc_6DA6F2B: mov %eax,%ecx;");
    asm("loc_6DA6F2D: mov 4(%ecx),%edx;");
    asm("loc_6DA6F30: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA6F33: mov 0x14(%ecx),%eax;");
    asm("loc_6DA6F36: add $4,%esp;");
    asm("loc_6DA6F39: inc %edx;");
    asm("loc_6DA6F3A: mov %edx,4(%ecx);");
    asm("loc_6DA6F3D: mov %edx,%edi;");
    asm("loc_6DA6F3F: mov (%esi),%edx;");
    asm("loc_6DA6F41: add $2,%edx;");
    asm("loc_6DA6F44: add %edx,%ebp;");
    asm("loc_6DA6F46: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA6F49: mov (%esi),%esi;");
    asm("loc_6DA6F4B: add $2,%eax;");
    asm("loc_6DA6F4E: cmp %eax,%esi;");
    asm("loc_6DA6F50: jbe loc_6DA6F58;");
    asm("loc_6DA6F52: add $2,%esi;");
    asm("loc_6DA6F55: mov %esi,0x14(%ecx);");
    asm("loc_6DA6F58: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA6F5B: xor %edx,%edx;");
    asm("loc_6DA6F5D: div %edi;");
    asm("loc_6DA6F5F: mov %eax,0xC(%ecx);");
    asm("loc_6DA6F62: xor %eax,%eax;");
    asm("loc_6DA6F64: pop %edi;");
    asm("loc_6DA6F65: pop %esi;");
    asm("loc_6DA6F66: pop %ebp;");
    asm("loc_6DA6F67: pop %ebx;");
    asm("loc_6DA6F68: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6F70() // _sub_6DA6F70
{
    __DEBUG_ASM(6DA6F70);
    // chunk 0x6DA6F70 _sub_6DA6F70
    asm("loc_6DA6F70: mov _data_6DB61D0,%eax;");
    asm("loc_6DA6F75: mov %eax,_data_6DBC060;");
    asm("loc_6DA6F7A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6F80() // _sub_6DA6F80
{
    __DEBUG_ASM(6DA6F80);
    // chunk 0x6DA6F80 _sub_6DA6F80
    asm("loc_6DA6F80: mov _data_6DB61D0,%eax;");
    asm("loc_6DA6F85: mov %eax,_data_6DBC064;");
    asm("loc_6DA6F8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6F90() // _sub_6DA6F90
{
    __DEBUG_ASM(6DA6F90);
    // chunk 0x6DA6F90 _sub_6DA6F90
    asm("loc_6DA6F90: mov _data_6DB61D4,%eax;");
    asm("loc_6DA6F95: mov %eax,_data_6DBC05C;");
    asm("loc_6DA6F9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6FA0() // _sub_6DA6FA0
{
    __DEBUG_ASM(6DA6FA0);
    // chunk 0x6DA6FA0 _sub_6DA6FA0
    asm("loc_6DA6FA0: mov _data_6DB61DC,%eax;");
    asm("loc_6DA6FA5: mov %eax,_data_6DBC070;");
    asm("loc_6DA6FAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6FB0() // _sub_6DA6FB0
{
    __DEBUG_ASM(6DA6FB0);
    // chunk 0x6DA6FB0 _sub_6DA6FB0
    asm("loc_6DA6FB0: mov _data_6DB61DC,%eax;");
    asm("loc_6DA6FB5: mov %eax,_data_6DBC074;");
    asm("loc_6DA6FBA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6FC0() // _sub_6DA6FC0
{
    __DEBUG_ASM(6DA6FC0);
    // chunk 0x6DA6FC0 _sub_6DA6FC0
    asm("loc_6DA6FC0: mov _data_6DB61E0,%eax;");
    asm("loc_6DA6FC5: mov %eax,_data_6DBC06C;");
    asm("loc_6DA6FCA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6FD0() // _sub_6DA6FD0
{
    __DEBUG_ASM(6DA6FD0);
    // chunk 0x6DA6FD0 _sub_6DA6FD0
    asm("loc_6DA6FD0: mov _data_6DB61E8,%eax;");
    asm("loc_6DA6FD5: mov %eax,_data_6DBC080;");
    asm("loc_6DA6FDA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6FE0() // _sub_6DA6FE0
{
    __DEBUG_ASM(6DA6FE0);
    // chunk 0x6DA6FE0 _sub_6DA6FE0
    asm("loc_6DA6FE0: mov _data_6DB61E8,%eax;");
    asm("loc_6DA6FE5: mov %eax,_data_6DBC084;");
    asm("loc_6DA6FEA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA6FF0() // _sub_6DA6FF0
{
    __DEBUG_ASM(6DA6FF0);
    // chunk 0x6DA6FF0 _sub_6DA6FF0
    asm("loc_6DA6FF0: mov _data_6DB61EC,%eax;");
    asm("loc_6DA6FF5: mov %eax,_data_6DBC07C;");
    asm("loc_6DA6FFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7000() // _sub_6DA7000
{
    __DEBUG_ASM(6DA7000);
    // chunk 0x6DA7000 _sub_6DA7000
    asm("loc_6DA7000: mov _data_6DB61F4,%eax;");
    asm("loc_6DA7005: mov %eax,_data_6DBC090;");
    asm("loc_6DA700A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7010() // _sub_6DA7010
{
    __DEBUG_ASM(6DA7010);
    // chunk 0x6DA7010 _sub_6DA7010
    asm("loc_6DA7010: mov _data_6DB61F4,%eax;");
    asm("loc_6DA7015: mov %eax,_data_6DBC094;");
    asm("loc_6DA701A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7020() // _sub_6DA7020
{
    __DEBUG_ASM(6DA7020);
    // chunk 0x6DA7020 _sub_6DA7020
    asm("loc_6DA7020: mov _data_6DB61F8,%eax;");
    asm("loc_6DA7025: mov %eax,_data_6DBC08C;");
    asm("loc_6DA702A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7030() // _sub_6DA7030
{
    asm("jmp dgb_6DA7030;"); // jumptable skip
    asm(".long _jmp_6DA7390;"); // jumptable address
    __DEBUG_ASM(6DA7030);
    // chunk 0x6DA7030 _sub_6DA7030
    asm("loc_6DA7030: mov 8(%esp),%eax;");
    asm("loc_6DA7034: push %ebx;");
    asm("loc_6DA7035: push %ebp;");
    asm("loc_6DA7036: push %esi;");
    asm("loc_6DA7037: push %edi;");
    asm("loc_6DA7038: mov %ecx,%edi;");
    asm("loc_6DA703A: mov 0x14(%esp),%ecx;");
    asm("loc_6DA703E: lea 0x10(%edi),%esi;");
    asm("loc_6DA7041: mov %eax,4(%esi);");
    asm("loc_6DA7044: mov (%ecx),%edx;");
    asm("loc_6DA7046: xor %ebx,%ebx;");
    asm("loc_6DA7048: mov %edx,8(%esi);");
    asm("loc_6DA704B: mov %ebx,(%esi);");
    asm("loc_6DA704D: mov %ebx,0xC(%esi);");
    asm("loc_6DA7050: mov 0x14(%edi),%eax;");
    asm("loc_6DA7053: push %esi;");
    asm("loc_6DA7054: push %eax;");
    asm("loc_6DA7055: lea 0x18(%edi),%ebp;");
    asm("loc_6DA7058: push %ebp;");
    asm("loc_6DA7059: mov %edi,%ecx;");
    asm("loc_6DA705B: call _sub_6DA1380;");
    asm("loc_6DA7060: cmp %ebx,%eax;");
    asm("loc_6DA7062: mov %eax,0x1C(%edi);");
    asm("loc_6DA7065: je loc_6DA7073;");
    asm("loc_6DA7067: pop %edi;");
    asm("loc_6DA7068: pop %esi;");
    asm("loc_6DA7069: pop %ebp;");
    asm("loc_6DA706A: mov $0x16,%eax;");
    asm("loc_6DA706F: pop %ebx;");
    asm("loc_6DA7070: ret $0xC;");
    asm("loc_6DA7073: mov (%esi),%eax;");
    asm("loc_6DA7075: mov 4(%esi),%edx;");
    asm("loc_6DA7078: mov 0x20(%edi),%cl;");
    asm("loc_6DA707B: inc %eax;");
    asm("loc_6DA707C: cmp %edx,%eax;");
    asm("loc_6DA707E: mov %eax,(%esi);");
    asm("loc_6DA7080: jbe loc_6DA7089;");
    asm("loc_6DA7082: movl $0x16,0xC(%esi);");
    asm("loc_6DA7089: cmp %ebx,0x1C(%edi);");
    asm("loc_6DA708C: je loc_6DA709A;");
    asm("loc_6DA708E: pop %edi;");
    asm("loc_6DA708F: pop %esi;");
    asm("loc_6DA7090: pop %ebp;");
    asm("loc_6DA7091: mov $0x16,%eax;");
    asm("loc_6DA7096: pop %ebx;");
    asm("loc_6DA7097: ret $0xC;");
    asm("loc_6DA709A: mov (%ebp),%eax;");
    asm("loc_6DA709D: mov %cl,(%eax);");
    asm("loc_6DA709F: inc %eax;");
    asm("loc_6DA70A0: mov %eax,(%ebp);");
    asm("loc_6DA70A3: mov %bl,0x18(%esp);");
    asm("loc_6DA70A7: calll *_import_6DB3104;");
    asm("loc_6DA70AD: test %al,%al;");
    asm("loc_6DA70AF: mov $1,%dl;");
    asm("loc_6DA70B1: jne loc_6DA70B5;");
    asm("loc_6DA70B3: mov %bl,%dl;");
    asm("loc_6DA70B5: mov 0x20(%edi),%eax;");
    asm("loc_6DA70B8: dec %eax;");
    asm("loc_6DA70B9: cmp $0x7F,%eax;");
    asm("loc_6DA70BC: ja loc_6DA7328;");
    asm("loc_6DA70C2: movzbl _data_6DA73B0(%eax),%ecx;");
    asm("loc_6DA70C9: jmpl *_jmp_6DA7390(,%ecx,4);");
    asm("loc_6DA70D0: mov (%esi),%eax;");
    asm("loc_6DA70D2: mov 4(%esi),%ebx;");
    asm("loc_6DA70D5: mov 0x30(%edi),%cl;");
    asm("loc_6DA70D8: inc %eax;");
    asm("loc_6DA70D9: cmp %ebx,%eax;");
    asm("loc_6DA70DB: mov %eax,(%esi);");
    asm("loc_6DA70DD: jbe loc_6DA70E6;");
    asm("loc_6DA70DF: movl $0x16,0xC(%esi);");
    asm("loc_6DA70E6: mov 0x1C(%edi),%eax;");
    asm("loc_6DA70E9: test %eax,%eax;");
    asm("loc_6DA70EB: je loc_6DA70F9;");
    asm("loc_6DA70ED: pop %edi;");
    asm("loc_6DA70EE: pop %esi;");
    asm("loc_6DA70EF: pop %ebp;");
    asm("loc_6DA70F0: mov $0x16,%eax;");
    asm("loc_6DA70F5: pop %ebx;");
    asm("loc_6DA70F6: ret $0xC;");
    asm("loc_6DA70F9: mov (%ebp),%eax;");
    asm("loc_6DA70FC: mov %cl,(%eax);");
    asm("loc_6DA70FE: inc %eax;");
    asm("loc_6DA70FF: test %dl,%dl;");
    asm("loc_6DA7101: mov %eax,(%ebp);");
    asm("loc_6DA7104: je loc_6DA711D;");
    asm("loc_6DA7106: mov (%esi),%edx;");
    asm("loc_6DA7108: add $4,%edx;");
    asm("loc_6DA710B: mov %edx,(%esi);");
    asm("loc_6DA710D: mov 4(%esi),%ecx;");
    asm("loc_6DA7110: mov %edx,%eax;");
    asm("loc_6DA7112: cmp %ecx,%eax;");
    asm("loc_6DA7114: jbe loc_6DA711D;");
    asm("loc_6DA7116: movl $0x16,0xC(%esi);");
    asm("loc_6DA711D: mov 0x1C(%edi),%eax;");
    asm("loc_6DA7120: test %eax,%eax;");
    asm("loc_6DA7122: je loc_6DA7310;");
    asm("loc_6DA7128: pop %edi;");
    asm("loc_6DA7129: pop %esi;");
    asm("loc_6DA712A: pop %ebp;");
    asm("loc_6DA712B: mov $0x16,%eax;");
    asm("loc_6DA7130: pop %ebx;");
    asm("loc_6DA7131: ret $0xC;");
    asm("loc_6DA7134: mov (%esi),%ebx;");
    asm("loc_6DA7136: mov 4(%esi),%edx;");
    asm("loc_6DA7139: mov 0x24(%edi),%cl;");
    asm("loc_6DA713C: inc %ebx;");
    asm("loc_6DA713D: mov %ebx,%eax;");
    asm("loc_6DA713F: cmp %edx,%eax;");
    asm("loc_6DA7141: mov %ebx,(%esi);");
    asm("loc_6DA7143: jbe loc_6DA714C;");
    asm("loc_6DA7145: movl $0x16,0xC(%esi);");
    asm("loc_6DA714C: mov 0x1C(%edi),%eax;");
    asm("loc_6DA714F: test %eax,%eax;");
    asm("loc_6DA7151: je loc_6DA715F;");
    asm("loc_6DA7153: pop %edi;");
    asm("loc_6DA7154: pop %esi;");
    asm("loc_6DA7155: pop %ebp;");
    asm("loc_6DA7156: mov $0x16,%eax;");
    asm("loc_6DA715B: pop %ebx;");
    asm("loc_6DA715C: ret $0xC;");
    asm("loc_6DA715F: mov (%ebp),%eax;");
    asm("loc_6DA7162: mov %cl,(%eax);");
    asm("loc_6DA7164: inc %eax;");
    asm("loc_6DA7165: jmp loc_6DA7325;");
    asm("loc_6DA716A: mov (%esi),%ebx;");
    asm("loc_6DA716C: mov 4(%esi),%ecx;");
    asm("loc_6DA716F: add $4,%ebx;");
    asm("loc_6DA7172: mov %ebx,%eax;");
    asm("loc_6DA7174: cmp %ecx,%eax;");
    asm("loc_6DA7176: mov %ebx,(%esi);");
    asm("loc_6DA7178: jbe loc_6DA7181;");
    asm("loc_6DA717A: movl $0x16,0xC(%esi);");
    asm("loc_6DA7181: mov 0x1C(%edi),%eax;");
    asm("loc_6DA7184: test %eax,%eax;");
    asm("loc_6DA7186: je loc_6DA7194;");
    asm("loc_6DA7188: pop %edi;");
    asm("loc_6DA7189: pop %esi;");
    asm("loc_6DA718A: pop %ebp;");
    asm("loc_6DA718B: mov $0x16,%eax;");
    asm("loc_6DA7190: pop %ebx;");
    asm("loc_6DA7191: ret $0xC;");
    asm("loc_6DA7194: mov (%ebp),%eax;");
    asm("loc_6DA7197: mov 0x2C(%edi),%ecx;");
    asm("loc_6DA719A: mov %ecx,(%eax);");
    asm("loc_6DA719C: add $4,%eax;");
    asm("loc_6DA719F: test %dl,%dl;");
    asm("loc_6DA71A1: mov %eax,(%ebp);");
    asm("loc_6DA71A4: je loc_6DA71BD;");
    asm("loc_6DA71A6: mov (%esi),%edx;");
    asm("loc_6DA71A8: add $4,%edx;");
    asm("loc_6DA71AB: mov %edx,(%esi);");
    asm("loc_6DA71AD: mov 4(%esi),%ecx;");
    asm("loc_6DA71B0: mov %edx,%eax;");
    asm("loc_6DA71B2: cmp %ecx,%eax;");
    asm("loc_6DA71B4: jbe loc_6DA71BD;");
    asm("loc_6DA71B6: movl $0x16,0xC(%esi);");
    asm("loc_6DA71BD: mov 0x1C(%edi),%eax;");
    asm("loc_6DA71C0: test %eax,%eax;");
    asm("loc_6DA71C2: je loc_6DA731A;");
    asm("loc_6DA71C8: pop %edi;");
    asm("loc_6DA71C9: pop %esi;");
    asm("loc_6DA71CA: pop %ebp;");
    asm("loc_6DA71CB: mov $0x16,%eax;");
    asm("loc_6DA71D0: pop %ebx;");
    asm("loc_6DA71D1: ret $0xC;");
    asm("loc_6DA71D4: mov (%esi),%ebx;");
    asm("loc_6DA71D6: mov 4(%esi),%ecx;");
    asm("loc_6DA71D9: add $4,%ebx;");
    asm("loc_6DA71DC: mov %ebx,%eax;");
    asm("loc_6DA71DE: cmp %ecx,%eax;");
    asm("loc_6DA71E0: mov %ebx,(%esi);");
    asm("loc_6DA71E2: jbe loc_6DA71EB;");
    asm("loc_6DA71E4: movl $0x16,0xC(%esi);");
    asm("loc_6DA71EB: mov 0x1C(%edi),%eax;");
    asm("loc_6DA71EE: test %eax,%eax;");
    asm("loc_6DA71F0: je loc_6DA71FE;");
    asm("loc_6DA71F2: pop %edi;");
    asm("loc_6DA71F3: pop %esi;");
    asm("loc_6DA71F4: pop %ebp;");
    asm("loc_6DA71F5: mov $0x16,%eax;");
    asm("loc_6DA71FA: pop %ebx;");
    asm("loc_6DA71FB: ret $0xC;");
    asm("loc_6DA71FE: mov (%ebp),%eax;");
    asm("loc_6DA7201: mov 0x34(%edi),%ecx;");
    asm("loc_6DA7204: mov %ecx,(%eax);");
    asm("loc_6DA7206: add $4,%eax;");
    asm("loc_6DA7209: mov %eax,(%ebp);");
    asm("loc_6DA720C: mov (%esi),%ebx;");
    asm("loc_6DA720E: mov 4(%esi),%ecx;");
    asm("loc_6DA7211: add $4,%ebx;");
    asm("loc_6DA7214: mov %ebx,%eax;");
    asm("loc_6DA7216: cmp %ecx,%eax;");
    asm("loc_6DA7218: mov %ebx,(%esi);");
    asm("loc_6DA721A: mov $0x16,%ecx;");
    asm("loc_6DA721F: jbe loc_6DA7224;");
    asm("loc_6DA7221: mov %ecx,0xC(%esi);");
    asm("loc_6DA7224: mov 0x1C(%edi),%eax;");
    asm("loc_6DA7227: test %eax,%eax;");
    asm("loc_6DA7229: jne loc_6DA72A3;");
    asm("loc_6DA722B: mov (%ebp),%eax;");
    asm("loc_6DA722E: mov 0x38(%edi),%ebx;");
    asm("loc_6DA7231: mov %ebx,(%eax);");
    asm("loc_6DA7233: add $4,%eax;");
    asm("loc_6DA7236: mov %eax,(%ebp);");
    asm("loc_6DA7239: mov (%esi),%eax;");
    asm("loc_6DA723B: mov 4(%esi),%ebx;");
    asm("loc_6DA723E: add $4,%eax;");
    asm("loc_6DA7241: cmp %ebx,%eax;");
    asm("loc_6DA7243: mov %eax,(%esi);");
    asm("loc_6DA7245: jbe loc_6DA724A;");
    asm("loc_6DA7247: mov %ecx,0xC(%esi);");
    asm("loc_6DA724A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA724D: test %eax,%eax;");
    asm("loc_6DA724F: jne loc_6DA72A3;");
    asm("loc_6DA7251: flds 0x3C(%edi);");
    asm("loc_6DA7254: mov (%ebp),%eax;");
    asm("loc_6DA7257: fstps (%eax);");
    asm("loc_6DA7259: add $4,%eax;");
    asm("loc_6DA725C: mov %eax,(%ebp);");
    asm("loc_6DA725F: mov (%esi),%eax;");
    asm("loc_6DA7261: add $2,%eax;");
    asm("loc_6DA7264: mov %eax,(%esi);");
    asm("loc_6DA7266: cmp 4(%esi),%eax;");
    asm("loc_6DA7269: jbe loc_6DA726E;");
    asm("loc_6DA726B: mov %ecx,0xC(%esi);");
    asm("loc_6DA726E: mov 0x1C(%edi),%eax;");
    asm("loc_6DA7271: test %eax,%eax;");
    asm("loc_6DA7273: jne loc_6DA72A3;");
    asm("loc_6DA7275: mov (%ebp),%eax;");
    asm("loc_6DA7278: mov 0x40(%edi),%bx;");
    asm("loc_6DA727C: mov %bx,(%eax);");
    asm("loc_6DA727F: add $2,%eax;");
    asm("loc_6DA7282: test %dl,%dl;");
    asm("loc_6DA7284: mov %eax,(%ebp);");
    asm("loc_6DA7287: je loc_6DA729C;");
    asm("loc_6DA7289: mov (%esi),%ebx;");
    asm("loc_6DA728B: add $4,%ebx;");
    asm("loc_6DA728E: mov %ebx,(%esi);");
    asm("loc_6DA7290: mov 4(%esi),%edx;");
    asm("loc_6DA7293: mov %ebx,%eax;");
    asm("loc_6DA7295: cmp %edx,%eax;");
    asm("loc_6DA7297: jbe loc_6DA729C;");
    asm("loc_6DA7299: mov %ecx,0xC(%esi);");
    asm("loc_6DA729C: mov 0x1C(%edi),%eax;");
    asm("loc_6DA729F: test %eax,%eax;");
    asm("loc_6DA72A1: je loc_6DA731A;");
    asm("loc_6DA72A3: pop %edi;");
    asm("loc_6DA72A4: pop %esi;");
    asm("loc_6DA72A5: pop %ebp;");
    asm("loc_6DA72A6: mov %ecx,%eax;");
    asm("loc_6DA72A8: pop %ebx;");
    asm("loc_6DA72A9: ret $0xC;");
    asm("loc_6DA72AC: mov (%esi),%ebx;");
    asm("loc_6DA72AE: mov 4(%esi),%ecx;");
    asm("loc_6DA72B1: add $4,%ebx;");
    asm("loc_6DA72B4: mov %ebx,%eax;");
    asm("loc_6DA72B6: cmp %ecx,%eax;");
    asm("loc_6DA72B8: mov %ebx,(%esi);");
    asm("loc_6DA72BA: jbe loc_6DA72C3;");
    asm("loc_6DA72BC: movl $0x16,0xC(%esi);");
    asm("loc_6DA72C3: mov 0x1C(%edi),%eax;");
    asm("loc_6DA72C6: test %eax,%eax;");
    asm("loc_6DA72C8: je loc_6DA72D6;");
    asm("loc_6DA72CA: pop %edi;");
    asm("loc_6DA72CB: pop %esi;");
    asm("loc_6DA72CC: pop %ebp;");
    asm("loc_6DA72CD: mov $0x16,%eax;");
    asm("loc_6DA72D2: pop %ebx;");
    asm("loc_6DA72D3: ret $0xC;");
    asm("loc_6DA72D6: mov (%ebp),%eax;");
    asm("loc_6DA72D9: mov 0x34(%edi),%ecx;");
    asm("loc_6DA72DC: mov %ecx,(%eax);");
    asm("loc_6DA72DE: add $4,%eax;");
    asm("loc_6DA72E1: mov %eax,(%ebp);");
    asm("loc_6DA72E4: mov (%esi),%ebx;");
    asm("loc_6DA72E6: mov 4(%esi),%ecx;");
    asm("loc_6DA72E9: add $4,%ebx;");
    asm("loc_6DA72EC: mov %ebx,%eax;");
    asm("loc_6DA72EE: cmp %ecx,%eax;");
    asm("loc_6DA72F0: mov %ebx,(%esi);");
    asm("loc_6DA72F2: mov $0x16,%ecx;");
    asm("loc_6DA72F7: jbe loc_6DA72FC;");
    asm("loc_6DA72F9: mov %ecx,0xC(%esi);");
    asm("loc_6DA72FC: mov 0x1C(%edi),%eax;");
    asm("loc_6DA72FF: test %eax,%eax;");
    asm("loc_6DA7301: jne loc_6DA72A3;");
    asm("loc_6DA7303: mov (%ebp),%eax;");
    asm("loc_6DA7306: mov 0x38(%edi),%ebx;");
    asm("loc_6DA7309: mov %ebx,(%eax);");
    asm("loc_6DA730B: jmp loc_6DA7259;");
    asm("loc_6DA7310: mov (%ebp),%eax;");
    asm("loc_6DA7313: mov 0x28(%edi),%ecx;");
    asm("loc_6DA7316: mov %ecx,(%eax);");
    asm("loc_6DA7318: jmp loc_6DA7322;");
    asm("loc_6DA731A: mov 0x28(%edi),%edx;");
    asm("loc_6DA731D: mov (%ebp),%eax;");
    asm("loc_6DA7320: mov %edx,(%eax);");
    asm("loc_6DA7322: add $4,%eax;");
    asm("loc_6DA7325: mov %eax,(%ebp);");
    asm("loc_6DA7328: mov 0x14(%edi),%eax;");
    asm("loc_6DA732B: push %esi;");
    asm("loc_6DA732C: push %eax;");
    asm("loc_6DA732D: push %ebp;");
    asm("loc_6DA732E: mov %edi,%ecx;");
    asm("loc_6DA7330: call _sub_6DA13C0;");
    asm("loc_6DA7335: test %eax,%eax;");
    asm("loc_6DA7337: mov %eax,0x1C(%edi);");
    asm("loc_6DA733A: je loc_6DA7348;");
    asm("loc_6DA733C: pop %edi;");
    asm("loc_6DA733D: pop %esi;");
    asm("loc_6DA733E: pop %ebp;");
    asm("loc_6DA733F: mov $0x16,%eax;");
    asm("loc_6DA7344: pop %ebx;");
    asm("loc_6DA7345: ret $0xC;");
    asm("loc_6DA7348: mov (%esi),%ecx;");
    asm("loc_6DA734A: mov 0x1C(%esp),%edx;");
    asm("loc_6DA734E: mov %ecx,(%edx);");
    asm("loc_6DA7350: mov 0xC(%edi),%eax;");
    asm("loc_6DA7353: push %eax;");
    asm("loc_6DA7354: call _sub_6DA16B0;");
    asm("loc_6DA7359: mov %eax,%ecx;");
    asm("loc_6DA735B: mov (%ecx),%ebp;");
    asm("loc_6DA735D: mov 0x18(%ecx),%ebx;");
    asm("loc_6DA7360: mov 0x10(%ecx),%eax;");
    asm("loc_6DA7363: add $4,%esp;");
    asm("loc_6DA7366: inc %ebp;");
    asm("loc_6DA7367: mov %ebp,(%ecx);");
    asm("loc_6DA7369: mov (%esi),%edx;");
    asm("loc_6DA736B: add %edx,%ebx;");
    asm("loc_6DA736D: mov %ebx,0x18(%ecx);");
    asm("loc_6DA7370: mov (%esi),%esi;");
    asm("loc_6DA7372: cmp %eax,%esi;");
    asm("loc_6DA7374: mov %ebp,%edi;");
    asm("loc_6DA7376: jbe loc_6DA737B;");
    asm("loc_6DA7378: mov %esi,0x10(%ecx);");
    asm("loc_6DA737B: mov 0x18(%ecx),%eax;");
    asm("loc_6DA737E: xor %edx,%edx;");
    asm("loc_6DA7380: div %edi;");
    asm("loc_6DA7382: pop %edi;");
    asm("loc_6DA7383: pop %esi;");
    asm("loc_6DA7384: pop %ebp;");
    asm("loc_6DA7385: pop %ebx;");
    asm("loc_6DA7386: mov %eax,8(%ecx);");
    asm("loc_6DA7389: xor %eax,%eax;");
    asm("loc_6DA738B: ret $0xC;");
    asm("int3;"); // unreachable
    asm("_jmp_6DA7390: .long loc_6DA71A6;");
    asm(".long loc_6DA7134;");
    asm(".long loc_6DA716A;");
    asm(".long loc_6DA71D4;");
    asm(".long loc_6DA72AC;");
    asm(".long loc_6DA7106;");
    asm(".long loc_6DA70D0;");
    asm(".long loc_6DA7328;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6DA7030);
_naked _weak void _sub_6DA7430() // _sub_6DA7430
{
    asm("jmp dgb_6DA7430;"); // jumptable skip
    asm(".long _jmp_6DA77F8;"); // jumptable address
    __DEBUG_ASM(6DA7430);
    // chunk 0x6DA7430 _sub_6DA7430
    asm("loc_6DA7430: mov 8(%esp),%eax;");
    asm("loc_6DA7434: push %ebx;");
    asm("loc_6DA7435: push %ebp;");
    asm("loc_6DA7436: push %esi;");
    asm("loc_6DA7437: push %edi;");
    asm("loc_6DA7438: mov %ecx,%edi;");
    asm("loc_6DA743A: mov 0x14(%esp),%ecx;");
    asm("loc_6DA743E: lea 0x10(%edi),%esi;");
    asm("loc_6DA7441: push %esi;");
    asm("loc_6DA7442: push %eax;");
    asm("loc_6DA7443: mov %ecx,8(%esi);");
    asm("loc_6DA7446: xor %ebx,%ebx;");
    asm("loc_6DA7448: lea 0x18(%edi),%ebp;");
    asm("loc_6DA744B: push %ebp;");
    asm("loc_6DA744C: mov %edi,%ecx;");
    asm("loc_6DA744E: mov %eax,4(%esi);");
    asm("loc_6DA7451: mov %ebx,(%esi);");
    asm("loc_6DA7453: mov %ebx,0xC(%esi);");
    asm("loc_6DA7456: call _sub_6DA13C0;");
    asm("loc_6DA745B: cmp %ebx,%eax;");
    asm("loc_6DA745D: mov %eax,0x1C(%edi);");
    asm("loc_6DA7460: je loc_6DA746E;");
    asm("loc_6DA7462: pop %edi;");
    asm("loc_6DA7463: pop %esi;");
    asm("loc_6DA7464: pop %ebp;");
    asm("loc_6DA7465: mov $0x17,%eax;");
    asm("loc_6DA746A: pop %ebx;");
    asm("loc_6DA746B: ret $0xC;");
    asm("loc_6DA746E: mov (%esi),%edx;");
    asm("loc_6DA7470: mov 4(%esi),%ecx;");
    asm("loc_6DA7473: inc %edx;");
    asm("loc_6DA7474: mov %edx,%eax;");
    asm("loc_6DA7476: cmp %ecx,%eax;");
    asm("loc_6DA7478: mov %edx,(%esi);");
    asm("loc_6DA747A: jbe loc_6DA7483;");
    asm("loc_6DA747C: movl $0x17,0xC(%esi);");
    asm("loc_6DA7483: mov 0x1C(%edi),%eax;");
    asm("loc_6DA7486: cmp %ebx,%eax;");
    asm("loc_6DA7488: jne loc_6DA77EF;");
    asm("loc_6DA748E: mov (%ebp),%eax;");
    asm("loc_6DA7491: mov (%eax),%cl;");
    asm("loc_6DA7493: xor %edx,%edx;");
    asm("loc_6DA7495: mov %cl,%dl;");
    asm("loc_6DA7497: inc %eax;");
    asm("loc_6DA7498: mov %eax,(%ebp);");
    asm("loc_6DA749B: mov %bl,0x14(%esp);");
    asm("loc_6DA749F: mov %edx,0x20(%edi);");
    asm("loc_6DA74A2: calll *_import_6DB3104;");
    asm("loc_6DA74A8: test %al,%al;");
    asm("loc_6DA74AA: mov $1,%dl;");
    asm("loc_6DA74AC: je loc_6DA74B0;");
    asm("loc_6DA74AE: mov %bl,%dl;");
    asm("loc_6DA74B0: mov 0x20(%edi),%eax;");
    asm("loc_6DA74B3: dec %eax;");
    asm("loc_6DA74B4: cmp $0x7F,%eax;");
    asm("loc_6DA74B7: ja loc_6DA75C9;");
    asm("loc_6DA74BD: movzbl _data_6DA7818(%eax),%eax;");
    asm("loc_6DA74C4: jmpl *_jmp_6DA77F8(,%eax,4);");
    asm("loc_6DA74CB: mov (%esi),%edx;");
    asm("loc_6DA74CD: mov 4(%esi),%ecx;");
    asm("loc_6DA74D0: inc %edx;");
    asm("loc_6DA74D1: mov %edx,%eax;");
    asm("loc_6DA74D3: cmp %ecx,%eax;");
    asm("loc_6DA74D5: mov %edx,(%esi);");
    asm("loc_6DA74D7: jbe loc_6DA74E0;");
    asm("loc_6DA74D9: movl $0x17,0xC(%esi);");
    asm("loc_6DA74E0: mov 0x1C(%edi),%eax;");
    asm("loc_6DA74E3: test %eax,%eax;");
    asm("loc_6DA74E5: jne loc_6DA77EF;");
    asm("loc_6DA74EB: mov (%ebp),%eax;");
    asm("loc_6DA74EE: mov (%eax),%cl;");
    asm("loc_6DA74F0: movsbl %cl,%edx;");
    asm("loc_6DA74F3: inc %eax;");
    asm("loc_6DA74F4: mov %edx,0x24(%edi);");
    asm("loc_6DA74F7: jmp loc_6DA75C6;");
    asm("loc_6DA74FC: mov (%esi),%ebx;");
    asm("loc_6DA74FE: mov 4(%esi),%ecx;");
    asm("loc_6DA7501: inc %ebx;");
    asm("loc_6DA7502: mov %ebx,%eax;");
    asm("loc_6DA7504: cmp %ecx,%eax;");
    asm("loc_6DA7506: mov %ebx,(%esi);");
    asm("loc_6DA7508: jbe loc_6DA7511;");
    asm("loc_6DA750A: movl $0x17,0xC(%esi);");
    asm("loc_6DA7511: mov 0x1C(%edi),%eax;");
    asm("loc_6DA7514: test %eax,%eax;");
    asm("loc_6DA7516: jne loc_6DA77EF;");
    asm("loc_6DA751C: mov (%ebp),%eax;");
    asm("loc_6DA751F: mov (%eax),%cl;");
    asm("loc_6DA7521: inc %eax;");
    asm("loc_6DA7522: test %cl,%cl;");
    asm("loc_6DA7524: mov %eax,(%ebp);");
    asm("loc_6DA7527: setne %al;");
    asm("loc_6DA752A: test %dl,%dl;");
    asm("loc_6DA752C: mov %al,0x30(%edi);");
    asm("loc_6DA752F: je loc_6DA7548;");
    asm("loc_6DA7531: mov (%esi),%edx;");
    asm("loc_6DA7533: mov 4(%esi),%ecx;");
    asm("loc_6DA7536: add $4,%edx;");
    asm("loc_6DA7539: mov %edx,%eax;");
    asm("loc_6DA753B: cmp %ecx,%eax;");
    asm("loc_6DA753D: mov %edx,(%esi);");
    asm("loc_6DA753F: jbe loc_6DA7548;");
    asm("loc_6DA7541: movl $0x16,0xC(%esi);");
    asm("loc_6DA7548: mov 0x1C(%edi),%eax;");
    asm("loc_6DA754B: test %eax,%eax;");
    asm("loc_6DA754D: je loc_6DA755B;");
    asm("loc_6DA754F: pop %edi;");
    asm("loc_6DA7550: pop %esi;");
    asm("loc_6DA7551: pop %ebp;");
    asm("loc_6DA7552: mov $0x16,%eax;");
    asm("loc_6DA7557: pop %ebx;");
    asm("loc_6DA7558: ret $0xC;");
    asm("loc_6DA755B: mov (%ebp),%eax;");
    asm("loc_6DA755E: mov 0x28(%edi),%ecx;");
    asm("loc_6DA7561: mov %ecx,(%eax);");
    asm("loc_6DA7563: jmp loc_6DA75C3;");
    asm("loc_6DA7565: mov (%esi),%ebx;");
    asm("loc_6DA7567: mov 4(%esi),%ecx;");
    asm("loc_6DA756A: add $4,%ebx;");
    asm("loc_6DA756D: mov %ebx,%eax;");
    asm("loc_6DA756F: cmp %ecx,%eax;");
    asm("loc_6DA7571: mov %ebx,(%esi);");
    asm("loc_6DA7573: jbe loc_6DA757C;");
    asm("loc_6DA7575: movl $0x17,0xC(%esi);");
    asm("loc_6DA757C: mov 0x1C(%edi),%eax;");
    asm("loc_6DA757F: test %eax,%eax;");
    asm("loc_6DA7581: jne loc_6DA77EF;");
    asm("loc_6DA7587: mov (%ebp),%eax;");
    asm("loc_6DA758A: mov (%eax),%ecx;");
    asm("loc_6DA758C: add $4,%eax;");
    asm("loc_6DA758F: test %dl,%dl;");
    asm("loc_6DA7591: mov %ecx,0x2C(%edi);");
    asm("loc_6DA7594: mov %eax,(%ebp);");
    asm("loc_6DA7597: je loc_6DA75B0;");
    asm("loc_6DA7599: mov (%esi),%edx;");
    asm("loc_6DA759B: add $4,%edx;");
    asm("loc_6DA759E: mov %edx,(%esi);");
    asm("loc_6DA75A0: mov 4(%esi),%ecx;");
    asm("loc_6DA75A3: mov %edx,%eax;");
    asm("loc_6DA75A5: cmp %ecx,%eax;");
    asm("loc_6DA75A7: jbe loc_6DA75B0;");
    asm("loc_6DA75A9: movl $0x17,0xC(%esi);");
    asm("loc_6DA75B0: mov 0x1C(%edi),%eax;");
    asm("loc_6DA75B3: test %eax,%eax;");
    asm("loc_6DA75B5: jne loc_6DA77EF;");
    asm("loc_6DA75BB: mov (%ebp),%eax;");
    asm("loc_6DA75BE: mov (%eax),%edx;");
    asm("loc_6DA75C0: mov %edx,0x28(%edi);");
    asm("loc_6DA75C3: add $4,%eax;");
    asm("loc_6DA75C6: mov %eax,(%ebp);");
    asm("loc_6DA75C9: mov 0x18(%esp),%eax;");
    asm("loc_6DA75CD: push %esi;");
    asm("loc_6DA75CE: push %eax;");
    asm("loc_6DA75CF: push %ebp;");
    asm("loc_6DA75D0: mov %edi,%ecx;");
    asm("loc_6DA75D2: call _sub_6DA13C0;");
    asm("loc_6DA75D7: test %eax,%eax;");
    asm("loc_6DA75D9: mov %eax,0x1C(%edi);");
    asm("loc_6DA75DC: je loc_6DA77A5;");
    asm("loc_6DA75E2: pop %edi;");
    asm("loc_6DA75E3: pop %esi;");
    asm("loc_6DA75E4: pop %ebp;");
    asm("loc_6DA75E5: mov $0x17,%eax;");
    asm("loc_6DA75EA: pop %ebx;");
    asm("loc_6DA75EB: ret $0xC;");
    asm("loc_6DA75EE: mov (%esi),%ebx;");
    asm("loc_6DA75F0: mov 4(%esi),%ecx;");
    asm("loc_6DA75F3: add $4,%ebx;");
    asm("loc_6DA75F6: mov %ebx,%eax;");
    asm("loc_6DA75F8: cmp %ecx,%eax;");
    asm("loc_6DA75FA: mov %ebx,(%esi);");
    asm("loc_6DA75FC: jbe loc_6DA7605;");
    asm("loc_6DA75FE: movl $0x17,0xC(%esi);");
    asm("loc_6DA7605: mov 0x1C(%edi),%eax;");
    asm("loc_6DA7608: test %eax,%eax;");
    asm("loc_6DA760A: jne loc_6DA77EF;");
    asm("loc_6DA7610: mov (%ebp),%eax;");
    asm("loc_6DA7613: mov (%eax),%ecx;");
    asm("loc_6DA7615: add $4,%eax;");
    asm("loc_6DA7618: mov %ecx,0x34(%edi);");
    asm("loc_6DA761B: mov %eax,(%ebp);");
    asm("loc_6DA761E: mov (%esi),%ebx;");
    asm("loc_6DA7620: mov 4(%esi),%ecx;");
    asm("loc_6DA7623: add $4,%ebx;");
    asm("loc_6DA7626: mov %ebx,%eax;");
    asm("loc_6DA7628: cmp %ecx,%eax;");
    asm("loc_6DA762A: mov %ebx,(%esi);");
    asm("loc_6DA762C: mov $0x17,%ecx;");
    asm("loc_6DA7631: jbe loc_6DA7636;");
    asm("loc_6DA7633: mov %ecx,0xC(%esi);");
    asm("loc_6DA7636: mov 0x1C(%edi),%eax;");
    asm("loc_6DA7639: test %eax,%eax;");
    asm("loc_6DA763B: jne loc_6DA77EF;");
    asm("loc_6DA7641: mov (%ebp),%eax;");
    asm("loc_6DA7644: mov (%eax),%ebx;");
    asm("loc_6DA7646: add $4,%eax;");
    asm("loc_6DA7649: mov %eax,(%ebp);");
    asm("loc_6DA764C: mov %ebx,0x38(%edi);");
    asm("loc_6DA764F: mov (%esi),%eax;");
    asm("loc_6DA7651: mov 4(%esi),%ebx;");
    asm("loc_6DA7654: add $4,%eax;");
    asm("loc_6DA7657: cmp %ebx,%eax;");
    asm("loc_6DA7659: mov %eax,(%esi);");
    asm("loc_6DA765B: jbe loc_6DA7660;");
    asm("loc_6DA765D: mov %ecx,0xC(%esi);");
    asm("loc_6DA7660: mov 0x1C(%edi),%eax;");
    asm("loc_6DA7663: test %eax,%eax;");
    asm("loc_6DA7665: jne loc_6DA77EF;");
    asm("loc_6DA766B: mov (%ebp),%eax;");
    asm("loc_6DA766E: mov (%eax),%ebx;");
    asm("loc_6DA7670: add $4,%eax;");
    asm("loc_6DA7673: mov %eax,(%ebp);");
    asm("loc_6DA7676: mov %ebx,0x3C(%edi);");
    asm("loc_6DA7679: mov (%esi),%eax;");
    asm("loc_6DA767B: mov 4(%esi),%ebx;");
    asm("loc_6DA767E: add $2,%eax;");
    asm("loc_6DA7681: cmp %ebx,%eax;");
    asm("loc_6DA7683: mov %eax,(%esi);");
    asm("loc_6DA7685: jbe loc_6DA768A;");
    asm("loc_6DA7687: mov %ecx,0xC(%esi);");
    asm("loc_6DA768A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA768D: test %eax,%eax;");
    asm("loc_6DA768F: jne loc_6DA77EF;");
    asm("loc_6DA7695: mov (%ebp),%eax;");
    asm("loc_6DA7698: mov (%eax),%bx;");
    asm("loc_6DA769B: add $2,%eax;");
    asm("loc_6DA769E: test %dl,%dl;");
    asm("loc_6DA76A0: mov %bx,0x40(%edi);");
    asm("loc_6DA76A4: mov %eax,(%ebp);");
    asm("loc_6DA76A7: je loc_6DA75B0;");
    asm("loc_6DA76AD: mov (%esi),%ebx;");
    asm("loc_6DA76AF: mov 4(%esi),%edx;");
    asm("loc_6DA76B2: add $4,%ebx;");
    asm("loc_6DA76B5: mov %ebx,%eax;");
    asm("loc_6DA76B7: cmp %edx,%eax;");
    asm("loc_6DA76B9: mov %ebx,(%esi);");
    asm("loc_6DA76BB: jbe loc_6DA75B0;");
    asm("loc_6DA76C1: mov %ecx,0xC(%esi);");
    asm("loc_6DA76C4: jmp loc_6DA75B0;");
    asm("loc_6DA76C9: mov (%esi),%ebx;");
    asm("loc_6DA76CB: mov 4(%esi),%ecx;");
    asm("loc_6DA76CE: add $4,%ebx;");
    asm("loc_6DA76D1: mov %ebx,%eax;");
    asm("loc_6DA76D3: cmp %ecx,%eax;");
    asm("loc_6DA76D5: mov %ebx,(%esi);");
    asm("loc_6DA76D7: jbe loc_6DA76E0;");
    asm("loc_6DA76D9: movl $0x17,0xC(%esi);");
    asm("loc_6DA76E0: mov 0x1C(%edi),%eax;");
    asm("loc_6DA76E3: test %eax,%eax;");
    asm("loc_6DA76E5: jne loc_6DA77EF;");
    asm("loc_6DA76EB: mov (%ebp),%eax;");
    asm("loc_6DA76EE: mov (%eax),%ecx;");
    asm("loc_6DA76F0: add $4,%eax;");
    asm("loc_6DA76F3: mov %ecx,0x34(%edi);");
    asm("loc_6DA76F6: mov %eax,(%ebp);");
    asm("loc_6DA76F9: mov (%esi),%ebx;");
    asm("loc_6DA76FB: mov 4(%esi),%ecx;");
    asm("loc_6DA76FE: add $4,%ebx;");
    asm("loc_6DA7701: mov %ebx,%eax;");
    asm("loc_6DA7703: cmp %ecx,%eax;");
    asm("loc_6DA7705: mov %ebx,(%esi);");
    asm("loc_6DA7707: mov $0x17,%ecx;");
    asm("loc_6DA770C: jbe loc_6DA7711;");
    asm("loc_6DA770E: mov %ecx,0xC(%esi);");
    asm("loc_6DA7711: mov 0x1C(%edi),%eax;");
    asm("loc_6DA7714: test %eax,%eax;");
    asm("loc_6DA7716: jne loc_6DA77EF;");
    asm("loc_6DA771C: mov (%ebp),%eax;");
    asm("loc_6DA771F: mov (%eax),%ebx;");
    asm("loc_6DA7721: add $4,%eax;");
    asm("loc_6DA7724: mov %eax,(%ebp);");
    asm("loc_6DA7727: mov %ebx,0x38(%edi);");
    asm("loc_6DA772A: mov (%esi),%eax;");
    asm("loc_6DA772C: mov 4(%esi),%ebx;");
    asm("loc_6DA772F: add $2,%eax;");
    asm("loc_6DA7732: cmp %ebx,%eax;");
    asm("loc_6DA7734: mov %eax,(%esi);");
    asm("loc_6DA7736: jbe loc_6DA773B;");
    asm("loc_6DA7738: mov %ecx,0xC(%esi);");
    asm("loc_6DA773B: mov 0x1C(%edi),%eax;");
    asm("loc_6DA773E: test %eax,%eax;");
    asm("loc_6DA7740: jne loc_6DA77EF;");
    asm("loc_6DA7746: mov (%ebp),%eax;");
    asm("loc_6DA7749: mov (%eax),%bx;");
    asm("loc_6DA774C: add $2,%eax;");
    asm("loc_6DA774F: test %dl,%dl;");
    asm("loc_6DA7751: mov %bx,0x40(%edi);");
    asm("loc_6DA7755: mov %eax,(%ebp);");
    asm("loc_6DA7758: je loc_6DA75B0;");
    asm("loc_6DA775E: mov (%esi),%ebx;");
    asm("loc_6DA7760: mov 4(%esi),%edx;");
    asm("loc_6DA7763: add $4,%ebx;");
    asm("loc_6DA7766: mov %ebx,%eax;");
    asm("loc_6DA7768: cmp %edx,%eax;");
    asm("loc_6DA776A: mov %ebx,(%esi);");
    asm("loc_6DA776C: jbe loc_6DA75B0;");
    asm("loc_6DA7772: mov %ecx,0xC(%esi);");
    asm("loc_6DA7775: jmp loc_6DA75B0;");
    asm("loc_6DA777A: mov (%esi),%edx;");
    asm("loc_6DA777C: add $4,%edx;");
    asm("loc_6DA777F: mov %edx,(%esi);");
    asm("loc_6DA7781: mov 4(%esi),%ecx;");
    asm("loc_6DA7784: mov %edx,%eax;");
    asm("loc_6DA7786: cmp %ecx,%eax;");
    asm("loc_6DA7788: jbe loc_6DA7791;");
    asm("loc_6DA778A: movl $0x17,0xC(%esi);");
    asm("loc_6DA7791: mov 0x1C(%edi),%eax;");
    asm("loc_6DA7794: test %eax,%eax;");
    asm("loc_6DA7796: jne loc_6DA77EF;");
    asm("loc_6DA7798: mov (%ebp),%eax;");
    asm("loc_6DA779B: mov (%eax),%ecx;");
    asm("loc_6DA779D: mov %ecx,0x28(%edi);");
    asm("loc_6DA77A0: jmp loc_6DA75C3;");
    asm("loc_6DA77A5: mov (%esi),%ecx;");
    asm("loc_6DA77A7: mov 0x1C(%esp),%edx;");
    asm("loc_6DA77AB: mov %ecx,(%edx);");
    asm("loc_6DA77AD: mov 0xC(%edi),%eax;");
    asm("loc_6DA77B0: push %eax;");
    asm("loc_6DA77B1: call _sub_6DA16B0;");
    asm("loc_6DA77B6: mov %eax,%ecx;");
    asm("loc_6DA77B8: mov 4(%ecx),%edx;");
    asm("loc_6DA77BB: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA77BE: mov 0x14(%ecx),%eax;");
    asm("loc_6DA77C1: add $4,%esp;");
    asm("loc_6DA77C4: inc %edx;");
    asm("loc_6DA77C5: mov %edx,4(%ecx);");
    asm("loc_6DA77C8: mov %edx,%edi;");
    asm("loc_6DA77CA: mov (%esi),%edx;");
    asm("loc_6DA77CC: add $2,%edx;");
    asm("loc_6DA77CF: add %edx,%ebp;");
    asm("loc_6DA77D1: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA77D4: mov (%esi),%esi;");
    asm("loc_6DA77D6: add $2,%eax;");
    asm("loc_6DA77D9: cmp %eax,%esi;");
    asm("loc_6DA77DB: jbe loc_6DA77E3;");
    asm("loc_6DA77DD: add $2,%esi;");
    asm("loc_6DA77E0: mov %esi,0x14(%ecx);");
    asm("loc_6DA77E3: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA77E6: xor %edx,%edx;");
    asm("loc_6DA77E8: div %edi;");
    asm("loc_6DA77EA: mov %eax,0xC(%ecx);");
    asm("loc_6DA77ED: xor %eax,%eax;");
    asm("loc_6DA77EF: pop %edi;");
    asm("loc_6DA77F0: pop %esi;");
    asm("loc_6DA77F1: pop %ebp;");
    asm("loc_6DA77F2: pop %ebx;");
    asm("loc_6DA77F3: ret $0xC;");
    asm("int3;"); // unreachable
    asm("_jmp_6DA77F8: .long loc_6DA777A;");
    asm(".long loc_6DA74CB;");
    asm(".long loc_6DA7565;");
    asm(".long loc_6DA75EE;");
    asm(".long loc_6DA76C9;");
    asm(".long loc_6DA74FC;");
    asm(".long loc_6DA7599;");
    asm(".long loc_6DA75C9;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_6DA7430);
_naked _weak void _sub_6DA78A0() // _sub_6DA78A0
{
    __DEBUG_ASM(6DA78A0);
    // chunk 0x6DA78A0 _sub_6DA78A0
    asm("loc_6DA78A0: mov _data_6DB6200,%eax;");
    asm("loc_6DA78A5: mov %eax,_data_6DBC0A0;");
    asm("loc_6DA78AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA78B0() // _sub_6DA78B0
{
    __DEBUG_ASM(6DA78B0);
    // chunk 0x6DA78B0 _sub_6DA78B0
    asm("loc_6DA78B0: mov _data_6DB6200,%eax;");
    asm("loc_6DA78B5: mov %eax,_data_6DBC0A4;");
    asm("loc_6DA78BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA78C0() // _sub_6DA78C0
{
    __DEBUG_ASM(6DA78C0);
    // chunk 0x6DA78C0 _sub_6DA78C0
    asm("loc_6DA78C0: mov _data_6DB6204,%eax;");
    asm("loc_6DA78C5: mov %eax,_data_6DBC09C;");
    asm("loc_6DA78CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA78D0() // _sub_6DA78D0
{
    __DEBUG_ASM(6DA78D0);
    // chunk 0x6DA78D0 _sub_6DA78D0
    asm("loc_6DA78D0: mov 4(%esp),%eax;");
    asm("loc_6DA78D4: push %ebx;");
    asm("loc_6DA78D5: push %ebp;");
    asm("loc_6DA78D6: mov 0x10(%esp),%ebp;");
    asm("loc_6DA78DA: push %esi;");
    asm("loc_6DA78DB: push %edi;");
    asm("loc_6DA78DC: mov %ecx,%edi;");
    asm("loc_6DA78DE: lea 0x10(%edi),%esi;");
    asm("loc_6DA78E1: push %esi;");
    asm("loc_6DA78E2: push %ebp;");
    asm("loc_6DA78E3: lea 0x18(%edi),%ebx;");
    asm("loc_6DA78E6: push %ebx;");
    asm("loc_6DA78E7: mov %ebp,4(%esi);");
    asm("loc_6DA78EA: mov %eax,8(%esi);");
    asm("loc_6DA78ED: movl $0,(%esi);");
    asm("loc_6DA78F3: movl $0,0xC(%esi);");
    asm("loc_6DA78FA: call _sub_6DA13C0;");
    asm("loc_6DA78FF: test %eax,%eax;");
    asm("loc_6DA7901: mov %eax,0x1C(%edi);");
    asm("loc_6DA7904: je loc_6DA7912;");
    asm("loc_6DA7906: pop %edi;");
    asm("loc_6DA7907: pop %esi;");
    asm("loc_6DA7908: pop %ebp;");
    asm("loc_6DA7909: mov $0x17,%eax;");
    asm("loc_6DA790E: pop %ebx;");
    asm("loc_6DA790F: ret $0xC;");
    asm("loc_6DA7912: mov (%esi),%edx;");
    asm("loc_6DA7914: mov 4(%esi),%ecx;");
    asm("loc_6DA7917: add $4,%edx;");
    asm("loc_6DA791A: mov %edx,%eax;");
    asm("loc_6DA791C: cmp %ecx,%eax;");
    asm("loc_6DA791E: mov %edx,(%esi);");
    asm("loc_6DA7920: mov $0x17,%ecx;");
    asm("loc_6DA7925: jbe loc_6DA792A;");
    asm("loc_6DA7927: mov %ecx,0xC(%esi);");
    asm("loc_6DA792A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA792D: test %eax,%eax;");
    asm("loc_6DA792F: jne loc_6DA79F6;");
    asm("loc_6DA7935: mov (%ebx),%eax;");
    asm("loc_6DA7937: mov (%eax),%edx;");
    asm("loc_6DA7939: add $4,%eax;");
    asm("loc_6DA793C: mov %eax,(%ebx);");
    asm("loc_6DA793E: mov %edx,0x20(%edi);");
    asm("loc_6DA7941: mov (%esi),%eax;");
    asm("loc_6DA7943: mov 4(%esi),%edx;");
    asm("loc_6DA7946: add $2,%eax;");
    asm("loc_6DA7949: cmp %edx,%eax;");
    asm("loc_6DA794B: mov %eax,(%esi);");
    asm("loc_6DA794D: jbe loc_6DA7952;");
    asm("loc_6DA794F: mov %ecx,0xC(%esi);");
    asm("loc_6DA7952: mov 0x1C(%edi),%eax;");
    asm("loc_6DA7955: test %eax,%eax;");
    asm("loc_6DA7957: jne loc_6DA79F6;");
    asm("loc_6DA795D: mov (%ebx),%eax;");
    asm("loc_6DA795F: mov (%eax),%dx;");
    asm("loc_6DA7962: add $2,%eax;");
    asm("loc_6DA7965: mov %eax,(%ebx);");
    asm("loc_6DA7967: mov %dx,0x24(%edi);");
    asm("loc_6DA796B: mov (%esi),%eax;");
    asm("loc_6DA796D: mov 4(%esi),%edx;");
    asm("loc_6DA7970: add $4,%eax;");
    asm("loc_6DA7973: cmp %edx,%eax;");
    asm("loc_6DA7975: mov %eax,(%esi);");
    asm("loc_6DA7977: jbe loc_6DA797C;");
    asm("loc_6DA7979: mov %ecx,0xC(%esi);");
    asm("loc_6DA797C: mov 0x1C(%edi),%eax;");
    asm("loc_6DA797F: test %eax,%eax;");
    asm("loc_6DA7981: jne loc_6DA79F6;");
    asm("loc_6DA7983: mov (%ebx),%eax;");
    asm("loc_6DA7985: mov (%eax),%ecx;");
    asm("loc_6DA7987: push %esi;");
    asm("loc_6DA7988: push %ebp;");
    asm("loc_6DA7989: mov %ecx,0x28(%edi);");
    asm("loc_6DA798C: add $4,%eax;");
    asm("loc_6DA798F: push %ebx;");
    asm("loc_6DA7990: mov %edi,%ecx;");
    asm("loc_6DA7992: mov %eax,(%ebx);");
    asm("loc_6DA7994: call _sub_6DA13C0;");
    asm("loc_6DA7999: test %eax,%eax;");
    asm("loc_6DA799B: mov %eax,0x1C(%edi);");
    asm("loc_6DA799E: je loc_6DA79AC;");
    asm("loc_6DA79A0: pop %edi;");
    asm("loc_6DA79A1: pop %esi;");
    asm("loc_6DA79A2: pop %ebp;");
    asm("loc_6DA79A3: mov $0x17,%eax;");
    asm("loc_6DA79A8: pop %ebx;");
    asm("loc_6DA79A9: ret $0xC;");
    asm("loc_6DA79AC: mov (%esi),%edx;");
    asm("loc_6DA79AE: mov 0x1C(%esp),%eax;");
    asm("loc_6DA79B2: mov %edx,(%eax);");
    asm("loc_6DA79B4: mov 0xC(%edi),%ecx;");
    asm("loc_6DA79B7: push %ecx;");
    asm("loc_6DA79B8: call _sub_6DA16B0;");
    asm("loc_6DA79BD: mov %eax,%ecx;");
    asm("loc_6DA79BF: mov 4(%ecx),%edx;");
    asm("loc_6DA79C2: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA79C5: mov 0x14(%ecx),%eax;");
    asm("loc_6DA79C8: add $4,%esp;");
    asm("loc_6DA79CB: inc %edx;");
    asm("loc_6DA79CC: mov %edx,4(%ecx);");
    asm("loc_6DA79CF: mov %edx,%edi;");
    asm("loc_6DA79D1: mov (%esi),%edx;");
    asm("loc_6DA79D3: add $2,%edx;");
    asm("loc_6DA79D6: add %edx,%ebp;");
    asm("loc_6DA79D8: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA79DB: mov (%esi),%esi;");
    asm("loc_6DA79DD: add $2,%eax;");
    asm("loc_6DA79E0: cmp %eax,%esi;");
    asm("loc_6DA79E2: jbe loc_6DA79EA;");
    asm("loc_6DA79E4: add $2,%esi;");
    asm("loc_6DA79E7: mov %esi,0x14(%ecx);");
    asm("loc_6DA79EA: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA79ED: xor %edx,%edx;");
    asm("loc_6DA79EF: div %edi;");
    asm("loc_6DA79F1: mov %eax,0xC(%ecx);");
    asm("loc_6DA79F4: xor %eax,%eax;");
    asm("loc_6DA79F6: pop %edi;");
    asm("loc_6DA79F7: pop %esi;");
    asm("loc_6DA79F8: pop %ebp;");
    asm("loc_6DA79F9: pop %ebx;");
    asm("loc_6DA79FA: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7A00() // _sub_6DA7A00
{
    __DEBUG_ASM(6DA7A00);
    // chunk 0x6DA7A00 _sub_6DA7A00
    asm("loc_6DA7A00: mov 8(%esp),%eax;");
    asm("loc_6DA7A04: push %ebx;");
    asm("loc_6DA7A05: push %ebp;");
    asm("loc_6DA7A06: push %esi;");
    asm("loc_6DA7A07: push %edi;");
    asm("loc_6DA7A08: mov %ecx,%edi;");
    asm("loc_6DA7A0A: mov 0x14(%esp),%ecx;");
    asm("loc_6DA7A0E: lea 0x10(%edi),%esi;");
    asm("loc_6DA7A11: mov %eax,4(%esi);");
    asm("loc_6DA7A14: mov (%ecx),%edx;");
    asm("loc_6DA7A16: mov %edx,8(%esi);");
    asm("loc_6DA7A19: movl $0,(%esi);");
    asm("loc_6DA7A1F: movl $0,0xC(%esi);");
    asm("loc_6DA7A26: mov 0x14(%edi),%eax;");
    asm("loc_6DA7A29: push %esi;");
    asm("loc_6DA7A2A: push %eax;");
    asm("loc_6DA7A2B: lea 0x18(%edi),%ebx;");
    asm("loc_6DA7A2E: push %ebx;");
    asm("loc_6DA7A2F: mov %edi,%ecx;");
    asm("loc_6DA7A31: call _sub_6DA1380;");
    asm("loc_6DA7A36: test %eax,%eax;");
    asm("loc_6DA7A38: mov %eax,0x1C(%edi);");
    asm("loc_6DA7A3B: je loc_6DA7A49;");
    asm("loc_6DA7A3D: pop %edi;");
    asm("loc_6DA7A3E: pop %esi;");
    asm("loc_6DA7A3F: pop %ebp;");
    asm("loc_6DA7A40: mov $0x16,%eax;");
    asm("loc_6DA7A45: pop %ebx;");
    asm("loc_6DA7A46: ret $0xC;");
    asm("loc_6DA7A49: mov (%esi),%edx;");
    asm("loc_6DA7A4B: mov 4(%esi),%ecx;");
    asm("loc_6DA7A4E: add $4,%edx;");
    asm("loc_6DA7A51: mov %edx,%eax;");
    asm("loc_6DA7A53: cmp %ecx,%eax;");
    asm("loc_6DA7A55: mov %edx,(%esi);");
    asm("loc_6DA7A57: mov $0x16,%ebp;");
    asm("loc_6DA7A5C: jbe loc_6DA7A61;");
    asm("loc_6DA7A5E: mov %ebp,0xC(%esi);");
    asm("loc_6DA7A61: mov 0x1C(%edi),%eax;");
    asm("loc_6DA7A64: test %eax,%eax;");
    asm("loc_6DA7A66: je loc_6DA7A71;");
    asm("loc_6DA7A68: pop %edi;");
    asm("loc_6DA7A69: pop %esi;");
    asm("loc_6DA7A6A: mov %ebp,%eax;");
    asm("loc_6DA7A6C: pop %ebp;");
    asm("loc_6DA7A6D: pop %ebx;");
    asm("loc_6DA7A6E: ret $0xC;");
    asm("loc_6DA7A71: mov (%ebx),%eax;");
    asm("loc_6DA7A73: mov 0x20(%edi),%ecx;");
    asm("loc_6DA7A76: mov %ecx,(%eax);");
    asm("loc_6DA7A78: add $4,%eax;");
    asm("loc_6DA7A7B: mov %eax,(%ebx);");
    asm("loc_6DA7A7D: mov (%esi),%edx;");
    asm("loc_6DA7A7F: mov 4(%esi),%ecx;");
    asm("loc_6DA7A82: add $2,%edx;");
    asm("loc_6DA7A85: mov %edx,%eax;");
    asm("loc_6DA7A87: cmp %ecx,%eax;");
    asm("loc_6DA7A89: mov %edx,(%esi);");
    asm("loc_6DA7A8B: jbe loc_6DA7A90;");
    asm("loc_6DA7A8D: mov %ebp,0xC(%esi);");
    asm("loc_6DA7A90: mov 0x1C(%edi),%eax;");
    asm("loc_6DA7A93: test %eax,%eax;");
    asm("loc_6DA7A95: je loc_6DA7AA0;");
    asm("loc_6DA7A97: pop %edi;");
    asm("loc_6DA7A98: pop %esi;");
    asm("loc_6DA7A99: mov %ebp,%eax;");
    asm("loc_6DA7A9B: pop %ebp;");
    asm("loc_6DA7A9C: pop %ebx;");
    asm("loc_6DA7A9D: ret $0xC;");
    asm("loc_6DA7AA0: mov (%ebx),%eax;");
    asm("loc_6DA7AA2: mov 0x24(%edi),%dx;");
    asm("loc_6DA7AA6: mov %dx,(%eax);");
    asm("loc_6DA7AA9: add $2,%eax;");
    asm("loc_6DA7AAC: mov %eax,(%ebx);");
    asm("loc_6DA7AAE: mov 0x2C(%edi),%ecx;");
    asm("loc_6DA7AB1: test %ecx,%ecx;");
    asm("loc_6DA7AB3: jne loc_6DA7AB9;");
    asm("loc_6DA7AB5: xor %eax,%eax;");
    asm("loc_6DA7AB7: jmp loc_6DA7AC1;");
    asm("loc_6DA7AB9: mov 0x30(%edi),%eax;");
    asm("loc_6DA7ABC: sub %ecx,%eax;");
    asm("loc_6DA7ABE: sar $2,%eax;");
    asm("loc_6DA7AC1: mov (%esi),%ecx;");
    asm("loc_6DA7AC3: mov 4(%esi),%edx;");
    asm("loc_6DA7AC6: add $2,%ecx;");
    asm("loc_6DA7AC9: cmp %edx,%ecx;");
    asm("loc_6DA7ACB: mov %ecx,(%esi);");
    asm("loc_6DA7ACD: jbe loc_6DA7AD2;");
    asm("loc_6DA7ACF: mov %ebp,0xC(%esi);");
    asm("loc_6DA7AD2: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA7AD5: test %ecx,%ecx;");
    asm("loc_6DA7AD7: je loc_6DA7AE2;");
    asm("loc_6DA7AD9: pop %edi;");
    asm("loc_6DA7ADA: pop %esi;");
    asm("loc_6DA7ADB: mov %ebp,%eax;");
    asm("loc_6DA7ADD: pop %ebp;");
    asm("loc_6DA7ADE: pop %ebx;");
    asm("loc_6DA7ADF: ret $0xC;");
    asm("loc_6DA7AE2: mov (%ebx),%ecx;");
    asm("loc_6DA7AE4: mov %ax,(%ecx);");
    asm("loc_6DA7AE7: mov 0x2C(%edi),%eax;");
    asm("loc_6DA7AEA: add $2,%ecx;");
    asm("loc_6DA7AED: mov %ecx,(%ebx);");
    asm("loc_6DA7AEF: cmp 0x30(%edi),%eax;");
    asm("loc_6DA7AF2: je loc_6DA7B21;");
    asm("loc_6DA7AF4: mov (%esi),%ecx;");
    asm("loc_6DA7AF6: mov 4(%esi),%edx;");
    asm("loc_6DA7AF9: add $4,%ecx;");
    asm("loc_6DA7AFC: cmp %edx,%ecx;");
    asm("loc_6DA7AFE: mov %ecx,(%esi);");
    asm("loc_6DA7B00: jbe loc_6DA7B05;");
    asm("loc_6DA7B02: mov %ebp,0xC(%esi);");
    asm("loc_6DA7B05: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA7B08: test %ecx,%ecx;");
    asm("loc_6DA7B0A: jne loc_6DA7B35;");
    asm("loc_6DA7B0C: mov (%ebx),%ecx;");
    asm("loc_6DA7B0E: mov (%eax),%edx;");
    asm("loc_6DA7B10: mov %edx,(%ecx);");
    asm("loc_6DA7B12: add $4,%ecx;");
    asm("loc_6DA7B15: mov %ecx,(%ebx);");
    asm("loc_6DA7B17: mov 0x30(%edi),%ecx;");
    asm("loc_6DA7B1A: add $4,%eax;");
    asm("loc_6DA7B1D: cmp %ecx,%eax;");
    asm("loc_6DA7B1F: jne loc_6DA7AF4;");
    asm("loc_6DA7B21: mov 0x14(%edi),%eax;");
    asm("loc_6DA7B24: push %esi;");
    asm("loc_6DA7B25: push %eax;");
    asm("loc_6DA7B26: push %ebx;");
    asm("loc_6DA7B27: mov %edi,%ecx;");
    asm("loc_6DA7B29: call _sub_6DA13C0;");
    asm("loc_6DA7B2E: test %eax,%eax;");
    asm("loc_6DA7B30: mov %eax,0x1C(%edi);");
    asm("loc_6DA7B33: je loc_6DA7B3E;");
    asm("loc_6DA7B35: pop %edi;");
    asm("loc_6DA7B36: pop %esi;");
    asm("loc_6DA7B37: mov %ebp,%eax;");
    asm("loc_6DA7B39: pop %ebp;");
    asm("loc_6DA7B3A: pop %ebx;");
    asm("loc_6DA7B3B: ret $0xC;");
    asm("loc_6DA7B3E: mov (%esi),%ecx;");
    asm("loc_6DA7B40: mov 0x1C(%esp),%edx;");
    asm("loc_6DA7B44: mov %ecx,(%edx);");
    asm("loc_6DA7B46: mov 0xC(%edi),%eax;");
    asm("loc_6DA7B49: push %eax;");
    asm("loc_6DA7B4A: call _sub_6DA16B0;");
    asm("loc_6DA7B4F: mov %eax,%ecx;");
    asm("loc_6DA7B51: mov (%ecx),%ebp;");
    asm("loc_6DA7B53: mov 0x18(%ecx),%ebx;");
    asm("loc_6DA7B56: mov 0x10(%ecx),%eax;");
    asm("loc_6DA7B59: add $4,%esp;");
    asm("loc_6DA7B5C: inc %ebp;");
    asm("loc_6DA7B5D: mov %ebp,(%ecx);");
    asm("loc_6DA7B5F: mov (%esi),%edx;");
    asm("loc_6DA7B61: add %edx,%ebx;");
    asm("loc_6DA7B63: mov %ebx,0x18(%ecx);");
    asm("loc_6DA7B66: mov (%esi),%esi;");
    asm("loc_6DA7B68: cmp %eax,%esi;");
    asm("loc_6DA7B6A: mov %ebp,%edi;");
    asm("loc_6DA7B6C: jbe loc_6DA7B71;");
    asm("loc_6DA7B6E: mov %esi,0x10(%ecx);");
    asm("loc_6DA7B71: mov 0x18(%ecx),%eax;");
    asm("loc_6DA7B74: xor %edx,%edx;");
    asm("loc_6DA7B76: div %edi;");
    asm("loc_6DA7B78: pop %edi;");
    asm("loc_6DA7B79: pop %esi;");
    asm("loc_6DA7B7A: pop %ebp;");
    asm("loc_6DA7B7B: pop %ebx;");
    asm("loc_6DA7B7C: mov %eax,8(%ecx);");
    asm("loc_6DA7B7F: xor %eax,%eax;");
    asm("loc_6DA7B81: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7B90() // _sub_6DA7B90
{
    __DEBUG_ASM(6DA7B90);
    // chunk 0x6DA7B90 _sub_6DA7B90
    asm("loc_6DA7B90: sub $0x14,%esp;");
    asm("loc_6DA7B93: mov 0x18(%esp),%eax;");
    asm("loc_6DA7B97: push %ebx;");
    asm("loc_6DA7B98: push %ebp;");
    asm("loc_6DA7B99: push %esi;");
    asm("loc_6DA7B9A: mov %ecx,%ebx;");
    asm("loc_6DA7B9C: push %edi;");
    asm("loc_6DA7B9D: mov 0x2C(%esp),%edi;");
    asm("loc_6DA7BA1: lea 0x10(%ebx),%ebp;");
    asm("loc_6DA7BA4: push %ebp;");
    asm("loc_6DA7BA5: push %edi;");
    asm("loc_6DA7BA6: lea 0x18(%ebx),%esi;");
    asm("loc_6DA7BA9: push %esi;");
    asm("loc_6DA7BAA: mov %ebx,0x28(%esp);");
    asm("loc_6DA7BAE: mov %edi,4(%ebp);");
    asm("loc_6DA7BB1: mov %eax,8(%ebp);");
    asm("loc_6DA7BB4: movl $0,(%ebp);");
    asm("loc_6DA7BBB: movl $0,0xC(%ebp);");
    asm("loc_6DA7BC2: call _sub_6DA13C0;");
    asm("loc_6DA7BC7: test %eax,%eax;");
    asm("loc_6DA7BC9: mov %eax,0x1C(%ebx);");
    asm("loc_6DA7BCC: je loc_6DA7BDD;");
    asm("loc_6DA7BCE: pop %edi;");
    asm("loc_6DA7BCF: pop %esi;");
    asm("loc_6DA7BD0: pop %ebp;");
    asm("loc_6DA7BD1: mov $0x17,%eax;");
    asm("loc_6DA7BD6: pop %ebx;");
    asm("loc_6DA7BD7: add $0x14,%esp;");
    asm("loc_6DA7BDA: ret $0xC;");
    asm("loc_6DA7BDD: mov (%ebp),%edx;");
    asm("loc_6DA7BE0: mov 4(%ebp),%ecx;");
    asm("loc_6DA7BE3: add $4,%edx;");
    asm("loc_6DA7BE6: mov %edx,%eax;");
    asm("loc_6DA7BE8: cmp %ecx,%eax;");
    asm("loc_6DA7BEA: mov %edx,(%ebp);");
    asm("loc_6DA7BED: mov $0x17,%edx;");
    asm("loc_6DA7BF2: jbe loc_6DA7BF7;");
    asm("loc_6DA7BF4: mov %edx,0xC(%ebp);");
    asm("loc_6DA7BF7: mov 0x1C(%ebx),%eax;");
    asm("loc_6DA7BFA: test %eax,%eax;");
    asm("loc_6DA7BFC: jne loc_6DA7ECE;");
    asm("loc_6DA7C02: mov (%esi),%eax;");
    asm("loc_6DA7C04: mov (%eax),%ecx;");
    asm("loc_6DA7C06: add $4,%eax;");
    asm("loc_6DA7C09: mov %eax,(%esi);");
    asm("loc_6DA7C0B: mov %ecx,0x20(%ebx);");
    asm("loc_6DA7C0E: mov (%ebp),%eax;");
    asm("loc_6DA7C11: mov 4(%ebp),%ecx;");
    asm("loc_6DA7C14: add $2,%eax;");
    asm("loc_6DA7C17: cmp %ecx,%eax;");
    asm("loc_6DA7C19: mov %eax,(%ebp);");
    asm("loc_6DA7C1C: jbe loc_6DA7C21;");
    asm("loc_6DA7C1E: mov %edx,0xC(%ebp);");
    asm("loc_6DA7C21: mov 0x1C(%ebx),%eax;");
    asm("loc_6DA7C24: test %eax,%eax;");
    asm("loc_6DA7C26: jne loc_6DA7ECE;");
    asm("loc_6DA7C2C: mov (%esi),%eax;");
    asm("loc_6DA7C2E: mov (%eax),%cx;");
    asm("loc_6DA7C31: add $2,%eax;");
    asm("loc_6DA7C34: mov %eax,(%esi);");
    asm("loc_6DA7C36: mov %cx,0x24(%ebx);");
    asm("loc_6DA7C3A: mov (%ebp),%eax;");
    asm("loc_6DA7C3D: mov 4(%ebp),%ecx;");
    asm("loc_6DA7C40: add $2,%eax;");
    asm("loc_6DA7C43: cmp %ecx,%eax;");
    asm("loc_6DA7C45: mov %eax,(%ebp);");
    asm("loc_6DA7C48: jbe loc_6DA7C4D;");
    asm("loc_6DA7C4A: mov %edx,0xC(%ebp);");
    asm("loc_6DA7C4D: mov 0x1C(%ebx),%eax;");
    asm("loc_6DA7C50: test %eax,%eax;");
    asm("loc_6DA7C52: jne loc_6DA7ECE;");
    asm("loc_6DA7C58: mov (%esi),%eax;");
    asm("loc_6DA7C5A: mov (%eax),%cx;");
    asm("loc_6DA7C5D: add $2,%eax;");
    asm("loc_6DA7C60: mov %eax,(%esi);");
    asm("loc_6DA7C62: xor %eax,%eax;");
    asm("loc_6DA7C64: mov %cx,%ax;");
    asm("loc_6DA7C67: xor %esi,%esi;");
    asm("loc_6DA7C69: mov %esi,0x28(%esp);");
    asm("loc_6DA7C6D: mov %esi,0x10(%esp);");
    asm("loc_6DA7C71: cmp %esi,%eax;");
    asm("loc_6DA7C73: mov %eax,0x20(%esp);");
    asm("loc_6DA7C77: jg loc_6DA7CA5;");
    asm("loc_6DA7C79: push %ebp;");
    asm("loc_6DA7C7A: push %edi;");
    asm("loc_6DA7C7B: lea 0x18(%ebx),%eax;");
    asm("loc_6DA7C7E: push %eax;");
    asm("loc_6DA7C7F: mov %ebx,%ecx;");
    asm("loc_6DA7C81: call _sub_6DA13C0;");
    asm("loc_6DA7C86: test %eax,%eax;");
    asm("loc_6DA7C88: mov %eax,0x1C(%ebx);");
    asm("loc_6DA7C8B: je loc_6DA7E81;");
    asm("loc_6DA7C91: pop %edi;");
    asm("loc_6DA7C92: pop %esi;");
    asm("loc_6DA7C93: pop %ebp;");
    asm("loc_6DA7C94: mov $0x17,%eax;");
    asm("loc_6DA7C99: pop %ebx;");
    asm("loc_6DA7C9A: add $0x14,%esp;");
    asm("loc_6DA7C9D: ret $0xC;");
    asm("loc_6DA7CA0: mov $0x17,%edx;");
    asm("loc_6DA7CA5: mov (%ebp),%esi;");
    asm("loc_6DA7CA8: mov 4(%ebp),%ecx;");
    asm("loc_6DA7CAB: add $4,%esi;");
    asm("loc_6DA7CAE: mov %esi,%eax;");
    asm("loc_6DA7CB0: cmp %ecx,%eax;");
    asm("loc_6DA7CB2: mov %esi,(%ebp);");
    asm("loc_6DA7CB5: jbe loc_6DA7CBA;");
    asm("loc_6DA7CB7: mov %edx,0xC(%ebp);");
    asm("loc_6DA7CBA: mov 0x1C(%ebx),%eax;");
    asm("loc_6DA7CBD: test %eax,%eax;");
    asm("loc_6DA7CBF: jne loc_6DA7E74;");
    asm("loc_6DA7CC5: mov 0x18(%ebx),%eax;");
    asm("loc_6DA7CC8: mov (%eax),%edx;");
    asm("loc_6DA7CCA: add $4,%eax;");
    asm("loc_6DA7CCD: lea 0x28(%ebx),%esi;");
    asm("loc_6DA7CD0: mov %eax,0x18(%ebx);");
    asm("loc_6DA7CD3: mov 8(%esi),%eax;");
    asm("loc_6DA7CD6: mov 0xC(%esi),%ecx;");
    asm("loc_6DA7CD9: sub %eax,%ecx;");
    asm("loc_6DA7CDB: sar $2,%ecx;");
    asm("loc_6DA7CDE: cmp $1,%ecx;");
    asm("loc_6DA7CE1: mov %edx,0x28(%esp);");
    asm("loc_6DA7CE5: mov %eax,%edi;");
    asm("loc_6DA7CE7: jae loc_6DA7DBA;");
    asm("loc_6DA7CED: mov 4(%esi),%edx;");
    asm("loc_6DA7CF0: test %edx,%edx;");
    asm("loc_6DA7CF2: je loc_6DA7D00;");
    asm("loc_6DA7CF4: mov %eax,%ecx;");
    asm("loc_6DA7CF6: sub %edx,%ecx;");
    asm("loc_6DA7CF8: sar $2,%ecx;");
    asm("loc_6DA7CFB: cmp $1,%ecx;");
    asm("loc_6DA7CFE: ja loc_6DA7D05;");
    asm("loc_6DA7D00: mov $1,%ecx;");
    asm("loc_6DA7D05: test %edx,%edx;");
    asm("loc_6DA7D07: jne loc_6DA7D0D;");
    asm("loc_6DA7D09: xor %eax,%eax;");
    asm("loc_6DA7D0B: jmp loc_6DA7D12;");
    asm("loc_6DA7D0D: sub %edx,%eax;");
    asm("loc_6DA7D0F: sar $2,%eax;");
    asm("loc_6DA7D12: add %ecx,%eax;");
    asm("loc_6DA7D14: test %eax,%eax;");
    asm("loc_6DA7D16: mov %eax,0x18(%esp);");
    asm("loc_6DA7D1A: jge loc_6DA7D1E;");
    asm("loc_6DA7D1C: xor %eax,%eax;");
    asm("loc_6DA7D1E: lea (,%eax,4),%edx;");
    asm("loc_6DA7D25: push %edx;");
    asm("loc_6DA7D26: call _sub_6DB1F8A;");
    asm("loc_6DA7D2B: add $4,%esp;");
    asm("loc_6DA7D2E: mov %eax,%ebx;");
    asm("loc_6DA7D30: mov 4(%esi),%eax;");
    asm("loc_6DA7D33: push %ebx;");
    asm("loc_6DA7D34: push %edi;");
    asm("loc_6DA7D35: push %eax;");
    asm("loc_6DA7D36: mov %esi,%ecx;");
    asm("loc_6DA7D38: call _sub_6D85290;");
    asm("loc_6DA7D3D: lea 0x28(%esp),%ecx;");
    asm("loc_6DA7D41: push %ecx;");
    asm("loc_6DA7D42: push $1;");
    asm("loc_6DA7D44: push %eax;");
    asm("loc_6DA7D45: mov %esi,%ecx;");
    asm("loc_6DA7D47: mov %eax,0x20(%esp);");
    asm("loc_6DA7D4B: call _sub_6DA7EE0;");
    asm("loc_6DA7D50: mov 0x14(%esp),%edx;");
    asm("loc_6DA7D54: mov 8(%esi),%eax;");
    asm("loc_6DA7D57: add $4,%edx;");
    asm("loc_6DA7D5A: push %edx;");
    asm("loc_6DA7D5B: push %eax;");
    asm("loc_6DA7D5C: push %edi;");
    asm("loc_6DA7D5D: mov %esi,%ecx;");
    asm("loc_6DA7D5F: call _sub_6D85290;");
    asm("loc_6DA7D64: mov 8(%esi),%ecx;");
    asm("loc_6DA7D67: mov 4(%esi),%edx;");
    asm("loc_6DA7D6A: push %ecx;");
    asm("loc_6DA7D6B: push %edx;");
    asm("loc_6DA7D6C: mov %esi,%ecx;");
    asm("loc_6DA7D6E: call _sub_6D85280;");
    asm("loc_6DA7D73: mov 4(%esi),%eax;");
    asm("loc_6DA7D76: push %eax;");
    asm("loc_6DA7D77: call _sub_6DB1DC2;");
    asm("loc_6DA7D7C: mov 0x1C(%esp),%ecx;");
    asm("loc_6DA7D80: mov 4(%esi),%eax;");
    asm("loc_6DA7D83: add $4,%esp;");
    asm("loc_6DA7D86: test %eax,%eax;");
    asm("loc_6DA7D88: lea (%ebx,%ecx,4),%edx;");
    asm("loc_6DA7D8B: mov %edx,0xC(%esi);");
    asm("loc_6DA7D8E: jne loc_6DA7DA2;");
    asm("loc_6DA7D90: xor %ecx,%ecx;");
    asm("loc_6DA7D92: lea 4(%ebx,%ecx,4),%eax;");
    asm("loc_6DA7D96: mov %ebx,4(%esi);");
    asm("loc_6DA7D99: mov 0x1C(%esp),%ebx;");
    asm("loc_6DA7D9D: jmp loc_6DA7E53;");
    asm("loc_6DA7DA2: mov 8(%esi),%ecx;");
    asm("loc_6DA7DA5: sub %eax,%ecx;");
    asm("loc_6DA7DA7: sar $2,%ecx;");
    asm("loc_6DA7DAA: lea 4(%ebx,%ecx,4),%eax;");
    asm("loc_6DA7DAE: mov %ebx,4(%esi);");
    asm("loc_6DA7DB1: mov 0x1C(%esp),%ebx;");
    asm("loc_6DA7DB5: jmp loc_6DA7E53;");
    asm("loc_6DA7DBA: mov %eax,%ecx;");
    asm("loc_6DA7DBC: sub %edi,%ecx;");
    asm("loc_6DA7DBE: sar $2,%ecx;");
    asm("loc_6DA7DC1: cmp $1,%ecx;");
    asm("loc_6DA7DC4: mov %esi,%ecx;");
    asm("loc_6DA7DC6: jae loc_6DA7E0F;");
    asm("loc_6DA7DC8: lea 4(%edi),%edx;");
    asm("loc_6DA7DCB: push %edx;");
    asm("loc_6DA7DCC: push %eax;");
    asm("loc_6DA7DCD: push %edi;");
    asm("loc_6DA7DCE: call _sub_6D85290;");
    asm("loc_6DA7DD3: mov 8(%esi),%eax;");
    asm("loc_6DA7DD6: mov %eax,%edx;");
    asm("loc_6DA7DD8: lea 0x28(%esp),%ecx;");
    asm("loc_6DA7DDC: push %ecx;");
    asm("loc_6DA7DDD: sub %edi,%edx;");
    asm("loc_6DA7DDF: sar $2,%edx;");
    asm("loc_6DA7DE2: mov $1,%ecx;");
    asm("loc_6DA7DE7: sub %edx,%ecx;");
    asm("loc_6DA7DE9: push %ecx;");
    asm("loc_6DA7DEA: push %eax;");
    asm("loc_6DA7DEB: mov %esi,%ecx;");
    asm("loc_6DA7DED: call _sub_6DA7EE0;");
    asm("loc_6DA7DF2: mov 8(%esi),%eax;");
    asm("loc_6DA7DF5: cmp %eax,%edi;");
    asm("loc_6DA7DF7: je loc_6DA7E4D;");
    asm("loc_6DA7DF9: lea (%esp),%esp;");
    asm("loc_6DA7E00: mov 0x28(%esp),%edx;");
    asm("loc_6DA7E04: mov %edx,(%edi);");
    asm("loc_6DA7E06: add $4,%edi;");
    asm("loc_6DA7E09: cmp %eax,%edi;");
    asm("loc_6DA7E0B: jne loc_6DA7E00;");
    asm("loc_6DA7E0D: jmp loc_6DA7E4D;");
    asm("loc_6DA7E0F: push %eax;");
    asm("loc_6DA7E10: push %eax;");
    asm("loc_6DA7E11: add $0xFFFFFFFC,%eax;");
    asm("loc_6DA7E14: push %eax;");
    asm("loc_6DA7E15: call _sub_6D85290;");
    asm("loc_6DA7E1A: mov 8(%esi),%ecx;");
    asm("loc_6DA7E1D: lea -4(%ecx),%eax;");
    asm("loc_6DA7E20: cmp %eax,%edi;");
    asm("loc_6DA7E22: je loc_6DA7E33;");
    asm("loc_6DA7E24: mov -4(%eax),%edx;");
    asm("loc_6DA7E27: sub $4,%eax;");
    asm("loc_6DA7E2A: sub $4,%ecx;");
    asm("loc_6DA7E2D: cmp %edi,%eax;");
    asm("loc_6DA7E2F: mov %edx,(%ecx);");
    asm("loc_6DA7E31: jne loc_6DA7E24;");
    asm("loc_6DA7E33: lea 4(%edi),%eax;");
    asm("loc_6DA7E36: cmp %eax,%edi;");
    asm("loc_6DA7E38: je loc_6DA7E4D;");
    asm("loc_6DA7E3A: lea (%ebx),%ebx;");
    asm("loc_6DA7E40: mov 0x28(%esp),%ecx;");
    asm("loc_6DA7E44: mov %ecx,(%edi);");
    asm("loc_6DA7E46: add $4,%edi;");
    asm("loc_6DA7E49: cmp %eax,%edi;");
    asm("loc_6DA7E4B: jne loc_6DA7E40;");
    asm("loc_6DA7E4D: mov 8(%esi),%eax;");
    asm("loc_6DA7E50: add $4,%eax;");
    asm("loc_6DA7E53: mov 0x20(%esp),%ecx;");
    asm("loc_6DA7E57: mov %eax,8(%esi);");
    asm("loc_6DA7E5A: mov 0x10(%esp),%eax;");
    asm("loc_6DA7E5E: inc %eax;");
    asm("loc_6DA7E5F: cmp %ecx,%eax;");
    asm("loc_6DA7E61: mov %eax,0x10(%esp);");
    asm("loc_6DA7E65: jl loc_6DA7CA0;");
    asm("loc_6DA7E6B: mov 0x2C(%esp),%edi;");
    asm("loc_6DA7E6F: jmp loc_6DA7C79;");
    asm("loc_6DA7E74: mov 0x1C(%ebx),%eax;");
    asm("loc_6DA7E77: pop %edi;");
    asm("loc_6DA7E78: pop %esi;");
    asm("loc_6DA7E79: pop %ebp;");
    asm("loc_6DA7E7A: pop %ebx;");
    asm("loc_6DA7E7B: add $0x14,%esp;");
    asm("loc_6DA7E7E: ret $0xC;");
    asm("loc_6DA7E81: mov (%ebp),%edx;");
    asm("loc_6DA7E84: mov 0x30(%esp),%eax;");
    asm("loc_6DA7E88: mov %edx,(%eax);");
    asm("loc_6DA7E8A: mov 0xC(%ebx),%ecx;");
    asm("loc_6DA7E8D: push %ecx;");
    asm("loc_6DA7E8E: call _sub_6DA16B0;");
    asm("loc_6DA7E93: mov %eax,%ecx;");
    asm("loc_6DA7E95: mov 4(%ecx),%edx;");
    asm("loc_6DA7E98: mov 0x1C(%ecx),%ebx;");
    asm("loc_6DA7E9B: mov 0x14(%ecx),%eax;");
    asm("loc_6DA7E9E: add $4,%esp;");
    asm("loc_6DA7EA1: inc %edx;");
    asm("loc_6DA7EA2: mov %edx,4(%ecx);");
    asm("loc_6DA7EA5: mov %edx,%esi;");
    asm("loc_6DA7EA7: mov (%ebp),%edx;");
    asm("loc_6DA7EAA: add $2,%edx;");
    asm("loc_6DA7EAD: add %edx,%ebx;");
    asm("loc_6DA7EAF: mov %ebx,0x1C(%ecx);");
    asm("loc_6DA7EB2: mov (%ebp),%ebp;");
    asm("loc_6DA7EB5: add $2,%eax;");
    asm("loc_6DA7EB8: cmp %eax,%ebp;");
    asm("loc_6DA7EBA: jbe loc_6DA7EC2;");
    asm("loc_6DA7EBC: add $2,%ebp;");
    asm("loc_6DA7EBF: mov %ebp,0x14(%ecx);");
    asm("loc_6DA7EC2: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA7EC5: xor %edx,%edx;");
    asm("loc_6DA7EC7: div %esi;");
    asm("loc_6DA7EC9: mov %eax,0xC(%ecx);");
    asm("loc_6DA7ECC: xor %eax,%eax;");
    asm("loc_6DA7ECE: pop %edi;");
    asm("loc_6DA7ECF: pop %esi;");
    asm("loc_6DA7ED0: pop %ebp;");
    asm("loc_6DA7ED1: pop %ebx;");
    asm("loc_6DA7ED2: add $0x14,%esp;");
    asm("loc_6DA7ED5: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7EE0() // _sub_6DA7EE0
{
    __DEBUG_ASM(6DA7EE0);
    // chunk 0x6DA7EE0 _sub_6DA7EE0
    asm("loc_6DA7EE0: mov 8(%esp),%eax;");
    asm("loc_6DA7EE4: test %eax,%eax;");
    asm("loc_6DA7EE6: jbe loc_6DA7F02;");
    asm("loc_6DA7EE8: mov 0xC(%esp),%edx;");
    asm("loc_6DA7EEC: mov %eax,%ecx;");
    asm("loc_6DA7EEE: mov 4(%esp),%eax;");
    asm("loc_6DA7EF2: push %esi;");
    asm("loc_6DA7EF3: test %eax,%eax;");
    asm("loc_6DA7EF5: je loc_6DA7EFB;");
    asm("loc_6DA7EF7: mov (%edx),%esi;");
    asm("loc_6DA7EF9: mov %esi,(%eax);");
    asm("loc_6DA7EFB: add $4,%eax;");
    asm("loc_6DA7EFE: dec %ecx;");
    asm("loc_6DA7EFF: jne loc_6DA7EF3;");
    asm("loc_6DA7F01: pop %esi;");
    asm("loc_6DA7F02: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7F10() // _sub_6DA7F10
{
    __DEBUG_ASM(6DA7F10);
    // chunk 0x6DA7F10 _sub_6DA7F10
    asm("loc_6DA7F10: mov _data_6DB620C,%eax;");
    asm("loc_6DA7F15: mov %eax,_data_6DBC0B0;");
    asm("loc_6DA7F1A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7F20() // _sub_6DA7F20
{
    __DEBUG_ASM(6DA7F20);
    // chunk 0x6DA7F20 _sub_6DA7F20
    asm("loc_6DA7F20: mov _data_6DB620C,%eax;");
    asm("loc_6DA7F25: mov %eax,_data_6DBC0B4;");
    asm("loc_6DA7F2A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7F30() // _sub_6DA7F30
{
    __DEBUG_ASM(6DA7F30);
    // chunk 0x6DA7F30 _sub_6DA7F30
    asm("loc_6DA7F30: mov _data_6DB6210,%eax;");
    asm("loc_6DA7F35: mov %eax,_data_6DBC0AC;");
    asm("loc_6DA7F3A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7F40() // _sub_6DA7F40
{
    __DEBUG_ASM(6DA7F40);
    // chunk 0x6DA7F40 _sub_6DA7F40
    asm("loc_6DA7F40: mov _data_6DB6218,%eax;");
    asm("loc_6DA7F45: mov %eax,_data_6DBC0C0;");
    asm("loc_6DA7F4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7F50() // _sub_6DA7F50
{
    __DEBUG_ASM(6DA7F50);
    // chunk 0x6DA7F50 _sub_6DA7F50
    asm("loc_6DA7F50: mov _data_6DB6218,%eax;");
    asm("loc_6DA7F55: mov %eax,_data_6DBC0C4;");
    asm("loc_6DA7F5A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7F60() // _sub_6DA7F60
{
    __DEBUG_ASM(6DA7F60);
    // chunk 0x6DA7F60 _sub_6DA7F60
    asm("loc_6DA7F60: mov _data_6DB621C,%eax;");
    asm("loc_6DA7F65: mov %eax,_data_6DBC0BC;");
    asm("loc_6DA7F6A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7F70() // _sub_6DA7F70
{
    __DEBUG_ASM(6DA7F70);
    // chunk 0x6DA7F70 _sub_6DA7F70
    asm("loc_6DA7F70: mov _data_6DB6228,%eax;");
    asm("loc_6DA7F75: mov %eax,_data_6DBC0D0;");
    asm("loc_6DA7F7A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7F80() // _sub_6DA7F80
{
    __DEBUG_ASM(6DA7F80);
    // chunk 0x6DA7F80 _sub_6DA7F80
    asm("loc_6DA7F80: mov _data_6DB6228,%eax;");
    asm("loc_6DA7F85: mov %eax,_data_6DBC0D4;");
    asm("loc_6DA7F8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7F90() // _sub_6DA7F90
{
    __DEBUG_ASM(6DA7F90);
    // chunk 0x6DA7F90 _sub_6DA7F90
    asm("loc_6DA7F90: mov _data_6DB622C,%eax;");
    asm("loc_6DA7F95: mov %eax,_data_6DBC0CC;");
    asm("loc_6DA7F9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7FA0() // _sub_6DA7FA0
{
    __DEBUG_ASM(6DA7FA0);
    // chunk 0x6DA7FA0 _sub_6DA7FA0
    asm("loc_6DA7FA0: movl $_off_6DB4FAC,(%ecx);");
    asm("loc_6DA7FA6: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7FB0() // _sub_6DA7FB0
{
    __DEBUG_ASM(6DA7FB0);
    // chunk 0x6DA7FB0 _sub_6DA7FB0
    asm("loc_6DA7FB0: mov _data_6DB6238,%eax;");
    asm("loc_6DA7FB5: mov %eax,_data_6DBC0E0;");
    asm("loc_6DA7FBA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7FC0() // _sub_6DA7FC0
{
    __DEBUG_ASM(6DA7FC0);
    // chunk 0x6DA7FC0 _sub_6DA7FC0
    asm("loc_6DA7FC0: mov _data_6DB6238,%eax;");
    asm("loc_6DA7FC5: mov %eax,_data_6DBC0E4;");
    asm("loc_6DA7FCA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7FD0() // _sub_6DA7FD0
{
    __DEBUG_ASM(6DA7FD0);
    // chunk 0x6DA7FD0 _sub_6DA7FD0
    asm("loc_6DA7FD0: mov _data_6DB623C,%eax;");
    asm("loc_6DA7FD5: mov %eax,_data_6DBC0DC;");
    asm("loc_6DA7FDA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA7FE0() // _sub_6DA7FE0
{
    __DEBUG_ASM(6DA7FE0);
    // chunk 0x6DA7FE0 _sub_6DA7FE0
    asm("loc_6DA7FE0: mov 8(%esp),%eax;");
    asm("loc_6DA7FE4: push %ebx;");
    asm("loc_6DA7FE5: push %esi;");
    asm("loc_6DA7FE6: push %edi;");
    asm("loc_6DA7FE7: mov %ecx,%edi;");
    asm("loc_6DA7FE9: mov 0x10(%esp),%ecx;");
    asm("loc_6DA7FED: lea 0x10(%edi),%esi;");
    asm("loc_6DA7FF0: mov %eax,4(%esi);");
    asm("loc_6DA7FF3: mov (%ecx),%edx;");
    asm("loc_6DA7FF5: mov %edx,8(%esi);");
    asm("loc_6DA7FF8: movl $0,(%esi);");
    asm("loc_6DA7FFE: movl $0,0xC(%esi);");
    asm("loc_6DA8005: mov 0x14(%edi),%eax;");
    asm("loc_6DA8008: push %esi;");
    asm("loc_6DA8009: push %eax;");
    asm("loc_6DA800A: lea 0x18(%edi),%ebx;");
    asm("loc_6DA800D: push %ebx;");
    asm("loc_6DA800E: mov %edi,%ecx;");
    asm("loc_6DA8010: call _sub_6DA1380;");
    asm("loc_6DA8015: test %eax,%eax;");
    asm("loc_6DA8017: mov %eax,0x1C(%edi);");
    asm("loc_6DA801A: je loc_6DA8027;");
    asm("loc_6DA801C: pop %edi;");
    asm("loc_6DA801D: pop %esi;");
    asm("loc_6DA801E: mov $0x16,%eax;");
    asm("loc_6DA8023: pop %ebx;");
    asm("loc_6DA8024: ret $0xC;");
    asm("loc_6DA8027: mov (%esi),%edx;");
    asm("loc_6DA8029: mov 4(%esi),%ecx;");
    asm("loc_6DA802C: inc %edx;");
    asm("loc_6DA802D: mov %edx,%eax;");
    asm("loc_6DA802F: cmp %ecx,%eax;");
    asm("loc_6DA8031: mov %edx,(%esi);");
    asm("loc_6DA8033: jbe loc_6DA803C;");
    asm("loc_6DA8035: movl $0x16,0xC(%esi);");
    asm("loc_6DA803C: mov 0x1C(%edi),%eax;");
    asm("loc_6DA803F: test %eax,%eax;");
    asm("loc_6DA8041: je loc_6DA804E;");
    asm("loc_6DA8043: pop %edi;");
    asm("loc_6DA8044: pop %esi;");
    asm("loc_6DA8045: mov $0x16,%eax;");
    asm("loc_6DA804A: pop %ebx;");
    asm("loc_6DA804B: ret $0xC;");
    asm("loc_6DA804E: mov (%ebx),%eax;");
    asm("loc_6DA8050: mov 0x20(%edi),%cl;");
    asm("loc_6DA8053: mov %cl,(%eax);");
    asm("loc_6DA8055: inc %eax;");
    asm("loc_6DA8056: mov %eax,(%ebx);");
    asm("loc_6DA8058: mov (%esi),%edx;");
    asm("loc_6DA805A: mov 4(%esi),%ecx;");
    asm("loc_6DA805D: add $4,%edx;");
    asm("loc_6DA8060: mov %edx,%eax;");
    asm("loc_6DA8062: cmp %ecx,%eax;");
    asm("loc_6DA8064: mov %edx,(%esi);");
    asm("loc_6DA8066: jbe loc_6DA806F;");
    asm("loc_6DA8068: movl $0x16,0xC(%esi);");
    asm("loc_6DA806F: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8072: test %eax,%eax;");
    asm("loc_6DA8074: je loc_6DA8081;");
    asm("loc_6DA8076: pop %edi;");
    asm("loc_6DA8077: pop %esi;");
    asm("loc_6DA8078: mov $0x16,%eax;");
    asm("loc_6DA807D: pop %ebx;");
    asm("loc_6DA807E: ret $0xC;");
    asm("loc_6DA8081: mov (%ebx),%eax;");
    asm("loc_6DA8083: mov 0x24(%edi),%edx;");
    asm("loc_6DA8086: mov %edx,(%eax);");
    asm("loc_6DA8088: add $4,%eax;");
    asm("loc_6DA808B: mov %eax,(%ebx);");
    asm("loc_6DA808D: mov 0x14(%edi),%eax;");
    asm("loc_6DA8090: push %esi;");
    asm("loc_6DA8091: push %eax;");
    asm("loc_6DA8092: push %ebx;");
    asm("loc_6DA8093: mov %edi,%ecx;");
    asm("loc_6DA8095: call _sub_6DA13C0;");
    asm("loc_6DA809A: test %eax,%eax;");
    asm("loc_6DA809C: mov %eax,0x1C(%edi);");
    asm("loc_6DA809F: je loc_6DA80AC;");
    asm("loc_6DA80A1: pop %edi;");
    asm("loc_6DA80A2: pop %esi;");
    asm("loc_6DA80A3: mov $0x16,%eax;");
    asm("loc_6DA80A8: pop %ebx;");
    asm("loc_6DA80A9: ret $0xC;");
    asm("loc_6DA80AC: mov (%esi),%ecx;");
    asm("loc_6DA80AE: mov 0x18(%esp),%edx;");
    asm("loc_6DA80B2: mov %ecx,(%edx);");
    asm("loc_6DA80B4: mov 0xC(%edi),%eax;");
    asm("loc_6DA80B7: push %eax;");
    asm("loc_6DA80B8: call _sub_6DA16B0;");
    asm("loc_6DA80BD: mov %eax,%ecx;");
    asm("loc_6DA80BF: mov (%ecx),%eax;");
    asm("loc_6DA80C1: mov 0x18(%ecx),%ebx;");
    asm("loc_6DA80C4: add $4,%esp;");
    asm("loc_6DA80C7: inc %eax;");
    asm("loc_6DA80C8: mov %eax,(%ecx);");
    asm("loc_6DA80CA: mov (%esi),%edx;");
    asm("loc_6DA80CC: add %edx,%ebx;");
    asm("loc_6DA80CE: mov %eax,%edi;");
    asm("loc_6DA80D0: mov 0x10(%ecx),%eax;");
    asm("loc_6DA80D3: mov %ebx,0x18(%ecx);");
    asm("loc_6DA80D6: mov (%esi),%esi;");
    asm("loc_6DA80D8: cmp %eax,%esi;");
    asm("loc_6DA80DA: jbe loc_6DA80DF;");
    asm("loc_6DA80DC: mov %esi,0x10(%ecx);");
    asm("loc_6DA80DF: mov 0x18(%ecx),%eax;");
    asm("loc_6DA80E2: xor %edx,%edx;");
    asm("loc_6DA80E4: div %edi;");
    asm("loc_6DA80E6: pop %edi;");
    asm("loc_6DA80E7: pop %esi;");
    asm("loc_6DA80E8: pop %ebx;");
    asm("loc_6DA80E9: mov %eax,8(%ecx);");
    asm("loc_6DA80EC: xor %eax,%eax;");
    asm("loc_6DA80EE: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8100() // _sub_6DA8100
{
    __DEBUG_ASM(6DA8100);
    // chunk 0x6DA8100 _sub_6DA8100
    asm("loc_6DA8100: mov 4(%esp),%eax;");
    asm("loc_6DA8104: push %ebx;");
    asm("loc_6DA8105: push %ebp;");
    asm("loc_6DA8106: mov 0x10(%esp),%ebp;");
    asm("loc_6DA810A: push %esi;");
    asm("loc_6DA810B: push %edi;");
    asm("loc_6DA810C: mov %ecx,%edi;");
    asm("loc_6DA810E: lea 0x10(%edi),%esi;");
    asm("loc_6DA8111: push %esi;");
    asm("loc_6DA8112: push %ebp;");
    asm("loc_6DA8113: lea 0x18(%edi),%ebx;");
    asm("loc_6DA8116: push %ebx;");
    asm("loc_6DA8117: mov %ebp,4(%esi);");
    asm("loc_6DA811A: mov %eax,8(%esi);");
    asm("loc_6DA811D: movl $0,(%esi);");
    asm("loc_6DA8123: movl $0,0xC(%esi);");
    asm("loc_6DA812A: call _sub_6DA13C0;");
    asm("loc_6DA812F: test %eax,%eax;");
    asm("loc_6DA8131: mov %eax,0x1C(%edi);");
    asm("loc_6DA8134: je loc_6DA8142;");
    asm("loc_6DA8136: pop %edi;");
    asm("loc_6DA8137: pop %esi;");
    asm("loc_6DA8138: pop %ebp;");
    asm("loc_6DA8139: mov $0x17,%eax;");
    asm("loc_6DA813E: pop %ebx;");
    asm("loc_6DA813F: ret $0xC;");
    asm("loc_6DA8142: mov (%esi),%edx;");
    asm("loc_6DA8144: mov 4(%esi),%ecx;");
    asm("loc_6DA8147: inc %edx;");
    asm("loc_6DA8148: mov %edx,%eax;");
    asm("loc_6DA814A: cmp %ecx,%eax;");
    asm("loc_6DA814C: mov %edx,(%esi);");
    asm("loc_6DA814E: jbe loc_6DA8157;");
    asm("loc_6DA8150: movl $0x17,0xC(%esi);");
    asm("loc_6DA8157: mov 0x1C(%edi),%eax;");
    asm("loc_6DA815A: test %eax,%eax;");
    asm("loc_6DA815C: jne loc_6DA81FB;");
    asm("loc_6DA8162: mov (%ebx),%eax;");
    asm("loc_6DA8164: mov (%eax),%cl;");
    asm("loc_6DA8166: inc %eax;");
    asm("loc_6DA8167: mov %eax,(%ebx);");
    asm("loc_6DA8169: mov %cl,0x20(%edi);");
    asm("loc_6DA816C: mov (%esi),%edx;");
    asm("loc_6DA816E: mov 4(%esi),%ecx;");
    asm("loc_6DA8171: add $4,%edx;");
    asm("loc_6DA8174: mov %edx,%eax;");
    asm("loc_6DA8176: cmp %ecx,%eax;");
    asm("loc_6DA8178: mov %edx,(%esi);");
    asm("loc_6DA817A: jbe loc_6DA8183;");
    asm("loc_6DA817C: movl $0x17,0xC(%esi);");
    asm("loc_6DA8183: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8186: test %eax,%eax;");
    asm("loc_6DA8188: jne loc_6DA81FB;");
    asm("loc_6DA818A: mov (%ebx),%eax;");
    asm("loc_6DA818C: mov (%eax),%edx;");
    asm("loc_6DA818E: push %esi;");
    asm("loc_6DA818F: push %ebp;");
    asm("loc_6DA8190: add $4,%eax;");
    asm("loc_6DA8193: push %ebx;");
    asm("loc_6DA8194: mov %edi,%ecx;");
    asm("loc_6DA8196: mov %edx,0x24(%edi);");
    asm("loc_6DA8199: mov %eax,(%ebx);");
    asm("loc_6DA819B: call _sub_6DA13C0;");
    asm("loc_6DA81A0: test %eax,%eax;");
    asm("loc_6DA81A2: mov %eax,0x1C(%edi);");
    asm("loc_6DA81A5: je loc_6DA81B3;");
    asm("loc_6DA81A7: pop %edi;");
    asm("loc_6DA81A8: pop %esi;");
    asm("loc_6DA81A9: pop %ebp;");
    asm("loc_6DA81AA: mov $0x17,%eax;");
    asm("loc_6DA81AF: pop %ebx;");
    asm("loc_6DA81B0: ret $0xC;");
    asm("loc_6DA81B3: mov (%esi),%eax;");
    asm("loc_6DA81B5: mov 0x1C(%esp),%ecx;");
    asm("loc_6DA81B9: mov %eax,(%ecx);");
    asm("loc_6DA81BB: mov 0xC(%edi),%edx;");
    asm("loc_6DA81BE: push %edx;");
    asm("loc_6DA81BF: call _sub_6DA16B0;");
    asm("loc_6DA81C4: mov %eax,%ecx;");
    asm("loc_6DA81C6: mov 4(%ecx),%edi;");
    asm("loc_6DA81C9: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA81CC: mov 0x14(%ecx),%edx;");
    asm("loc_6DA81CF: add $4,%esp;");
    asm("loc_6DA81D2: inc %edi;");
    asm("loc_6DA81D3: mov %edi,4(%ecx);");
    asm("loc_6DA81D6: mov (%esi),%eax;");
    asm("loc_6DA81D8: add $2,%eax;");
    asm("loc_6DA81DB: add %eax,%ebp;");
    asm("loc_6DA81DD: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA81E0: mov (%esi),%esi;");
    asm("loc_6DA81E2: add $2,%edx;");
    asm("loc_6DA81E5: cmp %edx,%esi;");
    asm("loc_6DA81E7: jbe loc_6DA81EF;");
    asm("loc_6DA81E9: add $2,%esi;");
    asm("loc_6DA81EC: mov %esi,0x14(%ecx);");
    asm("loc_6DA81EF: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA81F2: xor %edx,%edx;");
    asm("loc_6DA81F4: div %edi;");
    asm("loc_6DA81F6: mov %eax,0xC(%ecx);");
    asm("loc_6DA81F9: xor %eax,%eax;");
    asm("loc_6DA81FB: pop %edi;");
    asm("loc_6DA81FC: pop %esi;");
    asm("loc_6DA81FD: pop %ebp;");
    asm("loc_6DA81FE: pop %ebx;");
    asm("loc_6DA81FF: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8210() // _sub_6DA8210
{
    __DEBUG_ASM(6DA8210);
    // chunk 0x6DA8210 _sub_6DA8210
    asm("loc_6DA8210: mov _data_6DB6248,%eax;");
    asm("loc_6DA8215: mov %eax,_data_6DBC0F0;");
    asm("loc_6DA821A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8220() // _sub_6DA8220
{
    __DEBUG_ASM(6DA8220);
    // chunk 0x6DA8220 _sub_6DA8220
    asm("loc_6DA8220: mov _data_6DB6248,%eax;");
    asm("loc_6DA8225: mov %eax,_data_6DBC0F4;");
    asm("loc_6DA822A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8230() // _sub_6DA8230
{
    __DEBUG_ASM(6DA8230);
    // chunk 0x6DA8230 _sub_6DA8230
    asm("loc_6DA8230: mov _data_6DB624C,%eax;");
    asm("loc_6DA8235: mov %eax,_data_6DBC0EC;");
    asm("loc_6DA823A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8240() // _sub_6DA8240
{
    __DEBUG_ASM(6DA8240);
    // chunk 0x6DA8240 _sub_6DA8240
    asm("loc_6DA8240: mov 0x20(%ecx),%eax;");
    asm("loc_6DA8243: mov 4(%esp),%ecx;");
    asm("loc_6DA8247: push %esi;");
    asm("loc_6DA8248: mov _import_6DB3194,%esi;");
    asm("loc_6DA824E: push $_data_6DB3D88;");
    asm("loc_6DA8253: push %eax;");
    asm("loc_6DA8254: push $_data_6DB6264;");
    asm("loc_6DA8259: push %ecx;");
    asm("loc_6DA825A: call *%esi;");
    asm("loc_6DA825C: add $8,%esp;");
    asm("loc_6DA825F: mov %eax,%ecx;");
    asm("loc_6DA8261: calll *_import_6DB319C;");
    asm("loc_6DA8267: push %eax;");
    asm("loc_6DA8268: call *%esi;");
    asm("loc_6DA826A: add $8,%esp;");
    asm("loc_6DA826D: pop %esi;");
    asm("loc_6DA826E: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8280() // _sub_6DA8280
{
    __DEBUG_ASM(6DA8280);
    // chunk 0x6DA8280 _sub_6DA8280
    asm("loc_6DA8280: mov _data_6DB6258,%eax;");
    asm("loc_6DA8285: mov %eax,_data_6DBC100;");
    asm("loc_6DA828A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8290() // _sub_6DA8290
{
    __DEBUG_ASM(6DA8290);
    // chunk 0x6DA8290 _sub_6DA8290
    asm("loc_6DA8290: mov _data_6DB6258,%eax;");
    asm("loc_6DA8295: mov %eax,_data_6DBC104;");
    asm("loc_6DA829A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA82A0() // _sub_6DA82A0
{
    __DEBUG_ASM(6DA82A0);
    // chunk 0x6DA82A0 _sub_6DA82A0
    asm("loc_6DA82A0: mov _data_6DB625C,%eax;");
    asm("loc_6DA82A5: mov %eax,_data_6DBC0FC;");
    asm("loc_6DA82AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA82B0() // _sub_6DA82B0
{
    __DEBUG_ASM(6DA82B0);
    // chunk 0x6DA82B0 _sub_6DA82B0
    asm("loc_6DA82B0: mov _data_6DB6278,%eax;");
    asm("loc_6DA82B5: mov %eax,_data_6DBC110;");
    asm("loc_6DA82BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA82C0() // _sub_6DA82C0
{
    __DEBUG_ASM(6DA82C0);
    // chunk 0x6DA82C0 _sub_6DA82C0
    asm("loc_6DA82C0: mov _data_6DB6278,%eax;");
    asm("loc_6DA82C5: mov %eax,_data_6DBC114;");
    asm("loc_6DA82CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA82D0() // _sub_6DA82D0
{
    __DEBUG_ASM(6DA82D0);
    // chunk 0x6DA82D0 _sub_6DA82D0
    asm("loc_6DA82D0: mov _data_6DB627C,%eax;");
    asm("loc_6DA82D5: mov %eax,_data_6DBC10C;");
    asm("loc_6DA82DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA82E0() // _sub_6DA82E0
{
    __DEBUG_ASM(6DA82E0);
    // chunk 0x6DA82E0 _sub_6DA82E0
    asm("loc_6DA82E0: mov 8(%esp),%eax;");
    asm("loc_6DA82E4: push %ebx;");
    asm("loc_6DA82E5: push %esi;");
    asm("loc_6DA82E6: push %edi;");
    asm("loc_6DA82E7: mov %ecx,%edi;");
    asm("loc_6DA82E9: mov 0x10(%esp),%ecx;");
    asm("loc_6DA82ED: lea 0x10(%edi),%esi;");
    asm("loc_6DA82F0: mov %eax,4(%esi);");
    asm("loc_6DA82F3: mov (%ecx),%edx;");
    asm("loc_6DA82F5: mov %edx,8(%esi);");
    asm("loc_6DA82F8: movl $0,(%esi);");
    asm("loc_6DA82FE: movl $0,0xC(%esi);");
    asm("loc_6DA8305: mov 0x14(%edi),%eax;");
    asm("loc_6DA8308: push %esi;");
    asm("loc_6DA8309: push %eax;");
    asm("loc_6DA830A: lea 0x18(%edi),%ebx;");
    asm("loc_6DA830D: push %ebx;");
    asm("loc_6DA830E: mov %edi,%ecx;");
    asm("loc_6DA8310: call _sub_6DA1380;");
    asm("loc_6DA8315: test %eax,%eax;");
    asm("loc_6DA8317: mov %eax,0x1C(%edi);");
    asm("loc_6DA831A: je loc_6DA8327;");
    asm("loc_6DA831C: pop %edi;");
    asm("loc_6DA831D: pop %esi;");
    asm("loc_6DA831E: mov $0x16,%eax;");
    asm("loc_6DA8323: pop %ebx;");
    asm("loc_6DA8324: ret $0xC;");
    asm("loc_6DA8327: mov (%esi),%edx;");
    asm("loc_6DA8329: mov 4(%esi),%ecx;");
    asm("loc_6DA832C: inc %edx;");
    asm("loc_6DA832D: mov %edx,%eax;");
    asm("loc_6DA832F: cmp %ecx,%eax;");
    asm("loc_6DA8331: mov %edx,(%esi);");
    asm("loc_6DA8333: jbe loc_6DA833C;");
    asm("loc_6DA8335: movl $0x16,0xC(%esi);");
    asm("loc_6DA833C: mov 0x1C(%edi),%eax;");
    asm("loc_6DA833F: test %eax,%eax;");
    asm("loc_6DA8341: je loc_6DA834E;");
    asm("loc_6DA8343: pop %edi;");
    asm("loc_6DA8344: pop %esi;");
    asm("loc_6DA8345: mov $0x16,%eax;");
    asm("loc_6DA834A: pop %ebx;");
    asm("loc_6DA834B: ret $0xC;");
    asm("loc_6DA834E: mov (%ebx),%eax;");
    asm("loc_6DA8350: mov 0x20(%edi),%cl;");
    asm("loc_6DA8353: mov %cl,(%eax);");
    asm("loc_6DA8355: mov 0x14(%edi),%edx;");
    asm("loc_6DA8358: push %esi;");
    asm("loc_6DA8359: push %edx;");
    asm("loc_6DA835A: inc %eax;");
    asm("loc_6DA835B: push %ebx;");
    asm("loc_6DA835C: mov %edi,%ecx;");
    asm("loc_6DA835E: mov %eax,(%ebx);");
    asm("loc_6DA8360: call _sub_6DA13C0;");
    asm("loc_6DA8365: test %eax,%eax;");
    asm("loc_6DA8367: mov %eax,0x1C(%edi);");
    asm("loc_6DA836A: je loc_6DA8377;");
    asm("loc_6DA836C: pop %edi;");
    asm("loc_6DA836D: pop %esi;");
    asm("loc_6DA836E: mov $0x16,%eax;");
    asm("loc_6DA8373: pop %ebx;");
    asm("loc_6DA8374: ret $0xC;");
    asm("loc_6DA8377: mov (%esi),%eax;");
    asm("loc_6DA8379: mov 0x18(%esp),%ecx;");
    asm("loc_6DA837D: mov %eax,(%ecx);");
    asm("loc_6DA837F: mov 0xC(%edi),%edx;");
    asm("loc_6DA8382: push %edx;");
    asm("loc_6DA8383: call _sub_6DA16B0;");
    asm("loc_6DA8388: mov %eax,%ecx;");
    asm("loc_6DA838A: mov (%ecx),%edi;");
    asm("loc_6DA838C: mov 0x18(%ecx),%edx;");
    asm("loc_6DA838F: add $4,%esp;");
    asm("loc_6DA8392: inc %edi;");
    asm("loc_6DA8393: mov %edi,(%ecx);");
    asm("loc_6DA8395: mov (%esi),%eax;");
    asm("loc_6DA8397: add %eax,%edx;");
    asm("loc_6DA8399: mov 0x10(%ecx),%eax;");
    asm("loc_6DA839C: mov %edx,0x18(%ecx);");
    asm("loc_6DA839F: mov (%esi),%esi;");
    asm("loc_6DA83A1: cmp %eax,%esi;");
    asm("loc_6DA83A3: jbe loc_6DA83A8;");
    asm("loc_6DA83A5: mov %esi,0x10(%ecx);");
    asm("loc_6DA83A8: mov 0x18(%ecx),%eax;");
    asm("loc_6DA83AB: xor %edx,%edx;");
    asm("loc_6DA83AD: div %edi;");
    asm("loc_6DA83AF: pop %edi;");
    asm("loc_6DA83B0: pop %esi;");
    asm("loc_6DA83B1: pop %ebx;");
    asm("loc_6DA83B2: mov %eax,8(%ecx);");
    asm("loc_6DA83B5: xor %eax,%eax;");
    asm("loc_6DA83B7: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA83C0() // _sub_6DA83C0
{
    __DEBUG_ASM(6DA83C0);
    // chunk 0x6DA83C0 _sub_6DA83C0
    asm("loc_6DA83C0: mov 4(%esp),%eax;");
    asm("loc_6DA83C4: push %ebx;");
    asm("loc_6DA83C5: push %ebp;");
    asm("loc_6DA83C6: mov 0x10(%esp),%ebp;");
    asm("loc_6DA83CA: push %esi;");
    asm("loc_6DA83CB: push %edi;");
    asm("loc_6DA83CC: mov %ecx,%edi;");
    asm("loc_6DA83CE: lea 0x10(%edi),%esi;");
    asm("loc_6DA83D1: push %esi;");
    asm("loc_6DA83D2: push %ebp;");
    asm("loc_6DA83D3: lea 0x18(%edi),%ebx;");
    asm("loc_6DA83D6: push %ebx;");
    asm("loc_6DA83D7: mov %ebp,4(%esi);");
    asm("loc_6DA83DA: mov %eax,8(%esi);");
    asm("loc_6DA83DD: movl $0,(%esi);");
    asm("loc_6DA83E3: movl $0,0xC(%esi);");
    asm("loc_6DA83EA: call _sub_6DA13C0;");
    asm("loc_6DA83EF: test %eax,%eax;");
    asm("loc_6DA83F1: mov %eax,0x1C(%edi);");
    asm("loc_6DA83F4: je loc_6DA8402;");
    asm("loc_6DA83F6: pop %edi;");
    asm("loc_6DA83F7: pop %esi;");
    asm("loc_6DA83F8: pop %ebp;");
    asm("loc_6DA83F9: mov $0x17,%eax;");
    asm("loc_6DA83FE: pop %ebx;");
    asm("loc_6DA83FF: ret $0xC;");
    asm("loc_6DA8402: mov (%esi),%edx;");
    asm("loc_6DA8404: mov 4(%esi),%ecx;");
    asm("loc_6DA8407: inc %edx;");
    asm("loc_6DA8408: mov %edx,%eax;");
    asm("loc_6DA840A: cmp %ecx,%eax;");
    asm("loc_6DA840C: mov %edx,(%esi);");
    asm("loc_6DA840E: jbe loc_6DA8417;");
    asm("loc_6DA8410: movl $0x17,0xC(%esi);");
    asm("loc_6DA8417: mov 0x1C(%edi),%eax;");
    asm("loc_6DA841A: test %eax,%eax;");
    asm("loc_6DA841C: jne loc_6DA848F;");
    asm("loc_6DA841E: mov (%ebx),%eax;");
    asm("loc_6DA8420: mov (%eax),%cl;");
    asm("loc_6DA8422: push %esi;");
    asm("loc_6DA8423: push %ebp;");
    asm("loc_6DA8424: mov %cl,0x20(%edi);");
    asm("loc_6DA8427: inc %eax;");
    asm("loc_6DA8428: push %ebx;");
    asm("loc_6DA8429: mov %edi,%ecx;");
    asm("loc_6DA842B: mov %eax,(%ebx);");
    asm("loc_6DA842D: call _sub_6DA13C0;");
    asm("loc_6DA8432: test %eax,%eax;");
    asm("loc_6DA8434: mov %eax,0x1C(%edi);");
    asm("loc_6DA8437: je loc_6DA8445;");
    asm("loc_6DA8439: pop %edi;");
    asm("loc_6DA843A: pop %esi;");
    asm("loc_6DA843B: pop %ebp;");
    asm("loc_6DA843C: mov $0x17,%eax;");
    asm("loc_6DA8441: pop %ebx;");
    asm("loc_6DA8442: ret $0xC;");
    asm("loc_6DA8445: mov (%esi),%edx;");
    asm("loc_6DA8447: mov 0x1C(%esp),%eax;");
    asm("loc_6DA844B: mov %edx,(%eax);");
    asm("loc_6DA844D: mov 0xC(%edi),%ecx;");
    asm("loc_6DA8450: push %ecx;");
    asm("loc_6DA8451: call _sub_6DA16B0;");
    asm("loc_6DA8456: mov %eax,%ecx;");
    asm("loc_6DA8458: mov 4(%ecx),%edx;");
    asm("loc_6DA845B: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA845E: mov 0x14(%ecx),%eax;");
    asm("loc_6DA8461: add $4,%esp;");
    asm("loc_6DA8464: inc %edx;");
    asm("loc_6DA8465: mov %edx,4(%ecx);");
    asm("loc_6DA8468: mov %edx,%edi;");
    asm("loc_6DA846A: mov (%esi),%edx;");
    asm("loc_6DA846C: add $2,%edx;");
    asm("loc_6DA846F: add %edx,%ebp;");
    asm("loc_6DA8471: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA8474: mov (%esi),%esi;");
    asm("loc_6DA8476: add $2,%eax;");
    asm("loc_6DA8479: cmp %eax,%esi;");
    asm("loc_6DA847B: jbe loc_6DA8483;");
    asm("loc_6DA847D: add $2,%esi;");
    asm("loc_6DA8480: mov %esi,0x14(%ecx);");
    asm("loc_6DA8483: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA8486: xor %edx,%edx;");
    asm("loc_6DA8488: div %edi;");
    asm("loc_6DA848A: mov %eax,0xC(%ecx);");
    asm("loc_6DA848D: xor %eax,%eax;");
    asm("loc_6DA848F: pop %edi;");
    asm("loc_6DA8490: pop %esi;");
    asm("loc_6DA8491: pop %ebp;");
    asm("loc_6DA8492: pop %ebx;");
    asm("loc_6DA8493: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA84A0() // _sub_6DA84A0
{
    __DEBUG_ASM(6DA84A0);
    // chunk 0x6DA84A0 _sub_6DA84A0
    asm("loc_6DA84A0: xor %eax,%eax;");
    asm("loc_6DA84A2: mov 0x20(%ecx),%al;");
    asm("loc_6DA84A5: mov 4(%esp),%ecx;");
    asm("loc_6DA84A9: push %esi;");
    asm("loc_6DA84AA: mov _import_6DB3194,%esi;");
    asm("loc_6DA84B0: push $_data_6DB3D88;");
    asm("loc_6DA84B5: push %eax;");
    asm("loc_6DA84B6: push $_data_6DB6284;");
    asm("loc_6DA84BB: push %ecx;");
    asm("loc_6DA84BC: call *%esi;");
    asm("loc_6DA84BE: add $8,%esp;");
    asm("loc_6DA84C1: push %eax;");
    asm("loc_6DA84C2: calll *_import_6DB317C;");
    asm("loc_6DA84C8: add $8,%esp;");
    asm("loc_6DA84CB: push %eax;");
    asm("loc_6DA84CC: call *%esi;");
    asm("loc_6DA84CE: add $8,%esp;");
    asm("loc_6DA84D1: pop %esi;");
    asm("loc_6DA84D2: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA84E0() // _sub_6DA84E0
{
    __DEBUG_ASM(6DA84E0);
    // chunk 0x6DA84E0 _sub_6DA84E0
    asm("loc_6DA84E0: mov 8(%esp),%eax;");
    asm("loc_6DA84E4: sub $0x10,%esp;");
    asm("loc_6DA84E7: push %ebx;");
    asm("loc_6DA84E8: push %ebp;");
    asm("loc_6DA84E9: push %esi;");
    asm("loc_6DA84EA: push %edi;");
    asm("loc_6DA84EB: mov %ecx,%edi;");
    asm("loc_6DA84ED: mov 0x24(%esp),%ecx;");
    asm("loc_6DA84F1: lea 0x10(%edi),%esi;");
    asm("loc_6DA84F4: mov %eax,4(%esi);");
    asm("loc_6DA84F7: mov (%ecx),%edx;");
    asm("loc_6DA84F9: mov %edx,8(%esi);");
    asm("loc_6DA84FC: movl $0,(%esi);");
    asm("loc_6DA8502: movl $0,0xC(%esi);");
    asm("loc_6DA8509: mov 0x14(%edi),%eax;");
    asm("loc_6DA850C: push %esi;");
    asm("loc_6DA850D: push %eax;");
    asm("loc_6DA850E: lea 0x18(%edi),%ebp;");
    asm("loc_6DA8511: push %ebp;");
    asm("loc_6DA8512: mov %edi,%ecx;");
    asm("loc_6DA8514: call _sub_6DA1380;");
    asm("loc_6DA8519: test %eax,%eax;");
    asm("loc_6DA851B: mov %eax,0x1C(%edi);");
    asm("loc_6DA851E: je loc_6DA852F;");
    asm("loc_6DA8520: pop %edi;");
    asm("loc_6DA8521: pop %esi;");
    asm("loc_6DA8522: pop %ebp;");
    asm("loc_6DA8523: mov $0x16,%eax;");
    asm("loc_6DA8528: pop %ebx;");
    asm("loc_6DA8529: add $0x10,%esp;");
    asm("loc_6DA852C: ret $0xC;");
    asm("loc_6DA852F: mov 0x24(%edi),%ecx;");
    asm("loc_6DA8532: push %ecx;");
    asm("loc_6DA8533: calll *_import_6DB3108;");
    asm("loc_6DA8539: mov 4(%esi),%ebx;");
    asm("loc_6DA853C: add $4,%esp;");
    asm("loc_6DA853F: mov %eax,%edx;");
    asm("loc_6DA8541: mov (%esi),%eax;");
    asm("loc_6DA8543: add $2,%eax;");
    asm("loc_6DA8546: mov %eax,%ecx;");
    asm("loc_6DA8548: cmp %ebx,%ecx;");
    asm("loc_6DA854A: mov %eax,(%esi);");
    asm("loc_6DA854C: mov $0x16,%eax;");
    asm("loc_6DA8551: jbe loc_6DA8556;");
    asm("loc_6DA8553: mov %eax,0xC(%esi);");
    asm("loc_6DA8556: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA8559: test %ecx,%ecx;");
    asm("loc_6DA855B: jne loc_6DA87F7;");
    asm("loc_6DA8561: mov (%ebp),%ecx;");
    asm("loc_6DA8564: mov %dx,(%ecx);");
    asm("loc_6DA8567: add $2,%ecx;");
    asm("loc_6DA856A: mov %ecx,(%ebp);");
    asm("loc_6DA856D: mov (%esi),%ebx;");
    asm("loc_6DA856F: mov 4(%esi),%edx;");
    asm("loc_6DA8572: add $4,%ebx;");
    asm("loc_6DA8575: mov %ebx,%ecx;");
    asm("loc_6DA8577: cmp %edx,%ecx;");
    asm("loc_6DA8579: mov %ebx,(%esi);");
    asm("loc_6DA857B: jbe loc_6DA8580;");
    asm("loc_6DA857D: mov %eax,0xC(%esi);");
    asm("loc_6DA8580: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA8583: test %ecx,%ecx;");
    asm("loc_6DA8585: jne loc_6DA87F7;");
    asm("loc_6DA858B: mov (%ebp),%ecx;");
    asm("loc_6DA858E: mov 0x28(%edi),%edx;");
    asm("loc_6DA8591: mov %edx,(%ecx);");
    asm("loc_6DA8593: add $4,%ecx;");
    asm("loc_6DA8596: mov %ecx,(%ebp);");
    asm("loc_6DA8599: mov (%esi),%ebx;");
    asm("loc_6DA859B: mov 4(%esi),%edx;");
    asm("loc_6DA859E: add $2,%ebx;");
    asm("loc_6DA85A1: mov %ebx,%ecx;");
    asm("loc_6DA85A3: cmp %edx,%ecx;");
    asm("loc_6DA85A5: mov %ebx,(%esi);");
    asm("loc_6DA85A7: jbe loc_6DA85AC;");
    asm("loc_6DA85A9: mov %eax,0xC(%esi);");
    asm("loc_6DA85AC: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA85AF: test %ecx,%ecx;");
    asm("loc_6DA85B1: jne loc_6DA87F7;");
    asm("loc_6DA85B7: mov (%ebp),%ecx;");
    asm("loc_6DA85BA: mov 0x2C(%edi),%dx;");
    asm("loc_6DA85BE: mov %dx,(%ecx);");
    asm("loc_6DA85C1: add $2,%ecx;");
    asm("loc_6DA85C4: mov %ecx,(%ebp);");
    asm("loc_6DA85C7: mov (%esi),%ebx;");
    asm("loc_6DA85C9: mov 4(%esi),%edx;");
    asm("loc_6DA85CC: add $4,%ebx;");
    asm("loc_6DA85CF: mov %ebx,%ecx;");
    asm("loc_6DA85D1: cmp %edx,%ecx;");
    asm("loc_6DA85D3: mov %ebx,(%esi);");
    asm("loc_6DA85D5: jbe loc_6DA85DA;");
    asm("loc_6DA85D7: mov %eax,0xC(%esi);");
    asm("loc_6DA85DA: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA85DD: test %ecx,%ecx;");
    asm("loc_6DA85DF: jne loc_6DA87F7;");
    asm("loc_6DA85E5: mov (%ebp),%ecx;");
    asm("loc_6DA85E8: mov 0x30(%edi),%edx;");
    asm("loc_6DA85EB: mov %edx,(%ecx);");
    asm("loc_6DA85ED: add $4,%ecx;");
    asm("loc_6DA85F0: mov %ecx,(%ebp);");
    asm("loc_6DA85F3: mov (%esi),%ebx;");
    asm("loc_6DA85F5: mov 4(%esi),%edx;");
    asm("loc_6DA85F8: add $2,%ebx;");
    asm("loc_6DA85FB: mov %ebx,%ecx;");
    asm("loc_6DA85FD: cmp %edx,%ecx;");
    asm("loc_6DA85FF: mov %ebx,(%esi);");
    asm("loc_6DA8601: jbe loc_6DA8606;");
    asm("loc_6DA8603: mov %eax,0xC(%esi);");
    asm("loc_6DA8606: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA8609: test %ecx,%ecx;");
    asm("loc_6DA860B: jne loc_6DA87F7;");
    asm("loc_6DA8611: mov (%ebp),%ecx;");
    asm("loc_6DA8614: mov 0x34(%edi),%dx;");
    asm("loc_6DA8618: mov %dx,(%ecx);");
    asm("loc_6DA861B: add $2,%ecx;");
    asm("loc_6DA861E: mov %ecx,(%ebp);");
    asm("loc_6DA8621: mov (%esi),%ebx;");
    asm("loc_6DA8623: mov 4(%esi),%edx;");
    asm("loc_6DA8626: add $4,%ebx;");
    asm("loc_6DA8629: mov %ebx,%ecx;");
    asm("loc_6DA862B: cmp %edx,%ecx;");
    asm("loc_6DA862D: mov %ebx,(%esi);");
    asm("loc_6DA862F: jbe loc_6DA8634;");
    asm("loc_6DA8631: mov %eax,0xC(%esi);");
    asm("loc_6DA8634: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA8637: test %ecx,%ecx;");
    asm("loc_6DA8639: jne loc_6DA87F7;");
    asm("loc_6DA863F: mov (%ebp),%ecx;");
    asm("loc_6DA8642: mov 0x38(%edi),%edx;");
    asm("loc_6DA8645: mov %edx,(%ecx);");
    asm("loc_6DA8647: add $4,%ecx;");
    asm("loc_6DA864A: mov %ecx,(%ebp);");
    asm("loc_6DA864D: mov (%esi),%ebx;");
    asm("loc_6DA864F: mov 4(%esi),%edx;");
    asm("loc_6DA8652: add $0xC,%ebx;");
    asm("loc_6DA8655: mov %ebx,%ecx;");
    asm("loc_6DA8657: cmp %edx,%ecx;");
    asm("loc_6DA8659: mov %ebx,(%esi);");
    asm("loc_6DA865B: jbe loc_6DA8660;");
    asm("loc_6DA865D: mov %eax,0xC(%esi);");
    asm("loc_6DA8660: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA8663: test %ecx,%ecx;");
    asm("loc_6DA8665: jne loc_6DA87F7;");
    asm("loc_6DA866B: mov 0x3C(%edi),%eax;");
    asm("loc_6DA866E: mov 0x40(%edi),%ecx;");
    asm("loc_6DA8671: mov (%ebp),%ebx;");
    asm("loc_6DA8674: mov 0x44(%edi),%edx;");
    asm("loc_6DA8677: mov %eax,0x14(%esp);");
    asm("loc_6DA867B: lea 0x14(%esp),%eax;");
    asm("loc_6DA867F: mov %ecx,0x18(%esp);");
    asm("loc_6DA8683: push %eax;");
    asm("loc_6DA8684: mov %ebx,%ecx;");
    asm("loc_6DA8686: mov %edx,0x20(%esp);");
    asm("loc_6DA868A: call _sub_6D8F510;");
    asm("loc_6DA868F: flds 0x4C(%edi);");
    asm("loc_6DA8692: fmull _data_6DB3FD8;");
    asm("loc_6DA8698: add $0xC,%ebx;");
    asm("loc_6DA869B: mov %ebx,(%ebp);");
    asm("loc_6DA869E: call _sub_6DB20DE;");
    asm("loc_6DA86A3: flds 0x50(%edi);");
    asm("loc_6DA86A6: fmull _data_6DB3FD8;");
    asm("loc_6DA86AC: mov %al,0x28(%esp);");
    asm("loc_6DA86B0: call _sub_6DB20DE;");
    asm("loc_6DA86B5: flds 0x54(%edi);");
    asm("loc_6DA86B8: fmull _data_6DB3FD8;");
    asm("loc_6DA86BE: mov %al,0x24(%esp);");
    asm("loc_6DA86C2: call _sub_6DB20DE;");
    asm("loc_6DA86C7: flds 0x48(%edi);");
    asm("loc_6DA86CA: fmull _data_6DB3FD8;");
    asm("loc_6DA86D0: mov %al,0x13(%esp);");
    asm("loc_6DA86D4: call _sub_6DB20DE;");
    asm("loc_6DA86D9: mov (%esi),%ebx;");
    asm("loc_6DA86DB: mov 4(%esi),%edx;");
    asm("loc_6DA86DE: inc %ebx;");
    asm("loc_6DA86DF: mov %ebx,%ecx;");
    asm("loc_6DA86E1: cmp %edx,%ecx;");
    asm("loc_6DA86E3: mov %ebx,(%esi);");
    asm("loc_6DA86E5: mov $0x16,%ebx;");
    asm("loc_6DA86EA: jbe loc_6DA86EF;");
    asm("loc_6DA86EC: mov %ebx,0xC(%esi);");
    asm("loc_6DA86EF: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA86F2: test %ecx,%ecx;");
    asm("loc_6DA86F4: je loc_6DA8702;");
    asm("loc_6DA86F6: pop %edi;");
    asm("loc_6DA86F7: pop %esi;");
    asm("loc_6DA86F8: pop %ebp;");
    asm("loc_6DA86F9: mov %ebx,%eax;");
    asm("loc_6DA86FB: pop %ebx;");
    asm("loc_6DA86FC: add $0x10,%esp;");
    asm("loc_6DA86FF: ret $0xC;");
    asm("loc_6DA8702: mov (%ebp),%ecx;");
    asm("loc_6DA8705: mov 0x28(%esp),%dl;");
    asm("loc_6DA8709: mov %dl,(%ecx);");
    asm("loc_6DA870B: inc %ecx;");
    asm("loc_6DA870C: mov %ecx,(%ebp);");
    asm("loc_6DA870F: mov (%esi),%ecx;");
    asm("loc_6DA8711: mov 4(%esi),%edx;");
    asm("loc_6DA8714: inc %ecx;");
    asm("loc_6DA8715: cmp %edx,%ecx;");
    asm("loc_6DA8717: mov %ecx,(%esi);");
    asm("loc_6DA8719: jbe loc_6DA871E;");
    asm("loc_6DA871B: mov %ebx,0xC(%esi);");
    asm("loc_6DA871E: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA8721: test %ecx,%ecx;");
    asm("loc_6DA8723: je loc_6DA8731;");
    asm("loc_6DA8725: pop %edi;");
    asm("loc_6DA8726: pop %esi;");
    asm("loc_6DA8727: pop %ebp;");
    asm("loc_6DA8728: mov %ebx,%eax;");
    asm("loc_6DA872A: pop %ebx;");
    asm("loc_6DA872B: add $0x10,%esp;");
    asm("loc_6DA872E: ret $0xC;");
    asm("loc_6DA8731: mov (%ebp),%ecx;");
    asm("loc_6DA8734: mov 0x24(%esp),%dl;");
    asm("loc_6DA8738: mov %dl,(%ecx);");
    asm("loc_6DA873A: inc %ecx;");
    asm("loc_6DA873B: mov %ecx,(%ebp);");
    asm("loc_6DA873E: mov (%esi),%ecx;");
    asm("loc_6DA8740: mov 4(%esi),%edx;");
    asm("loc_6DA8743: inc %ecx;");
    asm("loc_6DA8744: cmp %edx,%ecx;");
    asm("loc_6DA8746: mov %ecx,(%esi);");
    asm("loc_6DA8748: jbe loc_6DA874D;");
    asm("loc_6DA874A: mov %ebx,0xC(%esi);");
    asm("loc_6DA874D: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA8750: test %ecx,%ecx;");
    asm("loc_6DA8752: je loc_6DA8760;");
    asm("loc_6DA8754: pop %edi;");
    asm("loc_6DA8755: pop %esi;");
    asm("loc_6DA8756: pop %ebp;");
    asm("loc_6DA8757: mov %ebx,%eax;");
    asm("loc_6DA8759: pop %ebx;");
    asm("loc_6DA875A: add $0x10,%esp;");
    asm("loc_6DA875D: ret $0xC;");
    asm("loc_6DA8760: mov (%ebp),%ecx;");
    asm("loc_6DA8763: mov 0x13(%esp),%dl;");
    asm("loc_6DA8767: mov %dl,(%ecx);");
    asm("loc_6DA8769: inc %ecx;");
    asm("loc_6DA876A: mov %ecx,(%ebp);");
    asm("loc_6DA876D: mov (%esi),%ecx;");
    asm("loc_6DA876F: mov 4(%esi),%edx;");
    asm("loc_6DA8772: inc %ecx;");
    asm("loc_6DA8773: cmp %edx,%ecx;");
    asm("loc_6DA8775: mov %ecx,(%esi);");
    asm("loc_6DA8777: jbe loc_6DA877C;");
    asm("loc_6DA8779: mov %ebx,0xC(%esi);");
    asm("loc_6DA877C: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA877F: test %ecx,%ecx;");
    asm("loc_6DA8781: je loc_6DA878F;");
    asm("loc_6DA8783: pop %edi;");
    asm("loc_6DA8784: pop %esi;");
    asm("loc_6DA8785: pop %ebp;");
    asm("loc_6DA8786: mov %ebx,%eax;");
    asm("loc_6DA8788: pop %ebx;");
    asm("loc_6DA8789: add $0x10,%esp;");
    asm("loc_6DA878C: ret $0xC;");
    asm("loc_6DA878F: mov (%ebp),%ecx;");
    asm("loc_6DA8792: mov %al,(%ecx);");
    asm("loc_6DA8794: mov 0x14(%edi),%eax;");
    asm("loc_6DA8797: push %esi;");
    asm("loc_6DA8798: inc %ecx;");
    asm("loc_6DA8799: push %eax;");
    asm("loc_6DA879A: mov %ecx,(%ebp);");
    asm("loc_6DA879D: push %ebp;");
    asm("loc_6DA879E: mov %edi,%ecx;");
    asm("loc_6DA87A0: call _sub_6DA13C0;");
    asm("loc_6DA87A5: test %eax,%eax;");
    asm("loc_6DA87A7: mov %eax,0x1C(%edi);");
    asm("loc_6DA87AA: je loc_6DA87B8;");
    asm("loc_6DA87AC: pop %edi;");
    asm("loc_6DA87AD: pop %esi;");
    asm("loc_6DA87AE: pop %ebp;");
    asm("loc_6DA87AF: mov %ebx,%eax;");
    asm("loc_6DA87B1: pop %ebx;");
    asm("loc_6DA87B2: add $0x10,%esp;");
    asm("loc_6DA87B5: ret $0xC;");
    asm("loc_6DA87B8: mov (%esi),%ecx;");
    asm("loc_6DA87BA: mov 0x2C(%esp),%edx;");
    asm("loc_6DA87BE: mov %ecx,(%edx);");
    asm("loc_6DA87C0: mov 0xC(%edi),%eax;");
    asm("loc_6DA87C3: push %eax;");
    asm("loc_6DA87C4: call _sub_6DA16B0;");
    asm("loc_6DA87C9: mov %eax,%ecx;");
    asm("loc_6DA87CB: mov (%ecx),%ebp;");
    asm("loc_6DA87CD: mov 0x18(%ecx),%ebx;");
    asm("loc_6DA87D0: mov 0x10(%ecx),%eax;");
    asm("loc_6DA87D3: add $4,%esp;");
    asm("loc_6DA87D6: inc %ebp;");
    asm("loc_6DA87D7: mov %ebp,(%ecx);");
    asm("loc_6DA87D9: mov (%esi),%edx;");
    asm("loc_6DA87DB: add %edx,%ebx;");
    asm("loc_6DA87DD: mov %ebx,0x18(%ecx);");
    asm("loc_6DA87E0: mov (%esi),%esi;");
    asm("loc_6DA87E2: cmp %eax,%esi;");
    asm("loc_6DA87E4: mov %ebp,%edi;");
    asm("loc_6DA87E6: jbe loc_6DA87EB;");
    asm("loc_6DA87E8: mov %esi,0x10(%ecx);");
    asm("loc_6DA87EB: mov 0x18(%ecx),%eax;");
    asm("loc_6DA87EE: xor %edx,%edx;");
    asm("loc_6DA87F0: div %edi;");
    asm("loc_6DA87F2: mov %eax,8(%ecx);");
    asm("loc_6DA87F5: xor %eax,%eax;");
    asm("loc_6DA87F7: pop %edi;");
    asm("loc_6DA87F8: pop %esi;");
    asm("loc_6DA87F9: pop %ebp;");
    asm("loc_6DA87FA: pop %ebx;");
    asm("loc_6DA87FB: add $0x10,%esp;");
    asm("loc_6DA87FE: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8810() // _sub_6DA8810
{
    __DEBUG_ASM(6DA8810);
    // chunk 0x6DA8810 _sub_6DA8810
    asm("loc_6DA8810: push %ecx;");
    asm("loc_6DA8811: mov 0xC(%esp),%eax;");
    asm("loc_6DA8815: push %ebx;");
    asm("loc_6DA8816: push %ebp;");
    asm("loc_6DA8817: push %esi;");
    asm("loc_6DA8818: push %edi;");
    asm("loc_6DA8819: mov %ecx,%edi;");
    asm("loc_6DA881B: mov 0x18(%esp),%ecx;");
    asm("loc_6DA881F: lea 0x10(%edi),%esi;");
    asm("loc_6DA8822: push %esi;");
    asm("loc_6DA8823: push %eax;");
    asm("loc_6DA8824: mov %ecx,8(%esi);");
    asm("loc_6DA8827: xor %ebp,%ebp;");
    asm("loc_6DA8829: lea 0x18(%edi),%ebx;");
    asm("loc_6DA882C: push %ebx;");
    asm("loc_6DA882D: mov %edi,%ecx;");
    asm("loc_6DA882F: mov %eax,4(%esi);");
    asm("loc_6DA8832: mov %ebp,(%esi);");
    asm("loc_6DA8834: mov %ebp,0xC(%esi);");
    asm("loc_6DA8837: call _sub_6DA13C0;");
    asm("loc_6DA883C: cmp %ebp,%eax;");
    asm("loc_6DA883E: mov %eax,0x1C(%edi);");
    asm("loc_6DA8841: je loc_6DA8850;");
    asm("loc_6DA8843: pop %edi;");
    asm("loc_6DA8844: pop %esi;");
    asm("loc_6DA8845: pop %ebp;");
    asm("loc_6DA8846: mov $0x17,%eax;");
    asm("loc_6DA884B: pop %ebx;");
    asm("loc_6DA884C: pop %ecx;");
    asm("loc_6DA884D: ret $0xC;");
    asm("loc_6DA8850: mov %ebp,0x20(%edi);");
    asm("loc_6DA8853: mov (%esi),%edx;");
    asm("loc_6DA8855: mov 4(%esi),%ecx;");
    asm("loc_6DA8858: add $2,%edx;");
    asm("loc_6DA885B: mov %edx,%eax;");
    asm("loc_6DA885D: cmp %ecx,%eax;");
    asm("loc_6DA885F: mov %edx,(%esi);");
    asm("loc_6DA8861: jbe loc_6DA886A;");
    asm("loc_6DA8863: movl $0x17,0xC(%esi);");
    asm("loc_6DA886A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA886D: cmp %ebp,%eax;");
    asm("loc_6DA886F: jne loc_6DA8AE1;");
    asm("loc_6DA8875: mov (%ebx),%eax;");
    asm("loc_6DA8877: xor %ecx,%ecx;");
    asm("loc_6DA8879: mov (%eax),%cx;");
    asm("loc_6DA887C: add $2,%eax;");
    asm("loc_6DA887F: mov %eax,(%ebx);");
    asm("loc_6DA8881: push %ecx;");
    asm("loc_6DA8882: calll *_import_6DB3000;");
    asm("loc_6DA8888: mov %eax,0x24(%edi);");
    asm("loc_6DA888B: mov (%esi),%edx;");
    asm("loc_6DA888D: mov 4(%esi),%ecx;");
    asm("loc_6DA8890: add $4,%edx;");
    asm("loc_6DA8893: mov %edx,%eax;");
    asm("loc_6DA8895: add $4,%esp;");
    asm("loc_6DA8898: cmp %ecx,%eax;");
    asm("loc_6DA889A: mov %edx,(%esi);");
    asm("loc_6DA889C: mov $0x17,%ecx;");
    asm("loc_6DA88A1: jbe loc_6DA88A6;");
    asm("loc_6DA88A3: mov %ecx,0xC(%esi);");
    asm("loc_6DA88A6: mov 0x1C(%edi),%eax;");
    asm("loc_6DA88A9: cmp %ebp,%eax;");
    asm("loc_6DA88AB: jne loc_6DA8AE1;");
    asm("loc_6DA88B1: mov (%ebx),%eax;");
    asm("loc_6DA88B3: mov (%eax),%edx;");
    asm("loc_6DA88B5: add $4,%eax;");
    asm("loc_6DA88B8: mov %eax,(%ebx);");
    asm("loc_6DA88BA: mov %edx,0x28(%edi);");
    asm("loc_6DA88BD: mov (%esi),%eax;");
    asm("loc_6DA88BF: mov 4(%esi),%edx;");
    asm("loc_6DA88C2: add $2,%eax;");
    asm("loc_6DA88C5: cmp %edx,%eax;");
    asm("loc_6DA88C7: mov %eax,(%esi);");
    asm("loc_6DA88C9: jbe loc_6DA88CE;");
    asm("loc_6DA88CB: mov %ecx,0xC(%esi);");
    asm("loc_6DA88CE: mov 0x1C(%edi),%eax;");
    asm("loc_6DA88D1: cmp %ebp,%eax;");
    asm("loc_6DA88D3: jne loc_6DA8AE1;");
    asm("loc_6DA88D9: mov (%ebx),%eax;");
    asm("loc_6DA88DB: mov (%eax),%dx;");
    asm("loc_6DA88DE: add $2,%eax;");
    asm("loc_6DA88E1: mov %eax,(%ebx);");
    asm("loc_6DA88E3: mov %dx,0x2C(%edi);");
    asm("loc_6DA88E7: mov (%esi),%eax;");
    asm("loc_6DA88E9: mov 4(%esi),%edx;");
    asm("loc_6DA88EC: add $4,%eax;");
    asm("loc_6DA88EF: cmp %edx,%eax;");
    asm("loc_6DA88F1: mov %eax,(%esi);");
    asm("loc_6DA88F3: jbe loc_6DA88F8;");
    asm("loc_6DA88F5: mov %ecx,0xC(%esi);");
    asm("loc_6DA88F8: mov 0x1C(%edi),%eax;");
    asm("loc_6DA88FB: cmp %ebp,%eax;");
    asm("loc_6DA88FD: jne loc_6DA8AE1;");
    asm("loc_6DA8903: mov (%ebx),%eax;");
    asm("loc_6DA8905: mov (%eax),%edx;");
    asm("loc_6DA8907: add $4,%eax;");
    asm("loc_6DA890A: mov %eax,(%ebx);");
    asm("loc_6DA890C: mov %edx,0x30(%edi);");
    asm("loc_6DA890F: mov (%esi),%eax;");
    asm("loc_6DA8911: mov 4(%esi),%edx;");
    asm("loc_6DA8914: add $2,%eax;");
    asm("loc_6DA8917: cmp %edx,%eax;");
    asm("loc_6DA8919: mov %eax,(%esi);");
    asm("loc_6DA891B: jbe loc_6DA8920;");
    asm("loc_6DA891D: mov %ecx,0xC(%esi);");
    asm("loc_6DA8920: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8923: cmp %ebp,%eax;");
    asm("loc_6DA8925: jne loc_6DA8AE1;");
    asm("loc_6DA892B: mov (%ebx),%eax;");
    asm("loc_6DA892D: mov (%eax),%dx;");
    asm("loc_6DA8930: add $2,%eax;");
    asm("loc_6DA8933: mov %eax,(%ebx);");
    asm("loc_6DA8935: mov %dx,0x34(%edi);");
    asm("loc_6DA8939: mov (%esi),%eax;");
    asm("loc_6DA893B: mov 4(%esi),%edx;");
    asm("loc_6DA893E: add $4,%eax;");
    asm("loc_6DA8941: cmp %edx,%eax;");
    asm("loc_6DA8943: mov %eax,(%esi);");
    asm("loc_6DA8945: jbe loc_6DA894A;");
    asm("loc_6DA8947: mov %ecx,0xC(%esi);");
    asm("loc_6DA894A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA894D: cmp %ebp,%eax;");
    asm("loc_6DA894F: jne loc_6DA8AE1;");
    asm("loc_6DA8955: mov (%ebx),%eax;");
    asm("loc_6DA8957: mov (%eax),%edx;");
    asm("loc_6DA8959: add $4,%eax;");
    asm("loc_6DA895C: mov %eax,(%ebx);");
    asm("loc_6DA895E: mov %edx,0x38(%edi);");
    asm("loc_6DA8961: mov (%esi),%eax;");
    asm("loc_6DA8963: mov 4(%esi),%edx;");
    asm("loc_6DA8966: add $0xC,%eax;");
    asm("loc_6DA8969: cmp %edx,%eax;");
    asm("loc_6DA896B: mov %eax,(%esi);");
    asm("loc_6DA896D: jbe loc_6DA8972;");
    asm("loc_6DA896F: mov %ecx,0xC(%esi);");
    asm("loc_6DA8972: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8975: cmp %ebp,%eax;");
    asm("loc_6DA8977: jne loc_6DA8AE1;");
    asm("loc_6DA897D: mov (%ebx),%ebp;");
    asm("loc_6DA897F: push %ebp;");
    asm("loc_6DA8980: lea 0x3C(%edi),%ecx;");
    asm("loc_6DA8983: call _sub_6D8F510;");
    asm("loc_6DA8988: add $0xC,%ebp;");
    asm("loc_6DA898B: mov %ebp,(%ebx);");
    asm("loc_6DA898D: mov (%esi),%edx;");
    asm("loc_6DA898F: mov 4(%esi),%ecx;");
    asm("loc_6DA8992: inc %edx;");
    asm("loc_6DA8993: mov %edx,%eax;");
    asm("loc_6DA8995: cmp %ecx,%eax;");
    asm("loc_6DA8997: mov %edx,(%esi);");
    asm("loc_6DA8999: mov $0x17,%ebp;");
    asm("loc_6DA899E: jbe loc_6DA89A3;");
    asm("loc_6DA89A0: mov %ebp,0xC(%esi);");
    asm("loc_6DA89A3: mov 0x1C(%edi),%eax;");
    asm("loc_6DA89A6: test %eax,%eax;");
    asm("loc_6DA89A8: jne loc_6DA8AE1;");
    asm("loc_6DA89AE: mov (%ebx),%eax;");
    asm("loc_6DA89B0: mov (%eax),%cl;");
    asm("loc_6DA89B2: inc %eax;");
    asm("loc_6DA89B3: mov %eax,(%ebx);");
    asm("loc_6DA89B5: mov (%esi),%edx;");
    asm("loc_6DA89B7: inc %edx;");
    asm("loc_6DA89B8: mov %cl,0x18(%esp);");
    asm("loc_6DA89BC: mov 4(%esi),%ecx;");
    asm("loc_6DA89BF: mov %edx,%eax;");
    asm("loc_6DA89C1: cmp %ecx,%eax;");
    asm("loc_6DA89C3: mov %edx,(%esi);");
    asm("loc_6DA89C5: jbe loc_6DA89CA;");
    asm("loc_6DA89C7: mov %ebp,0xC(%esi);");
    asm("loc_6DA89CA: mov 0x1C(%edi),%eax;");
    asm("loc_6DA89CD: test %eax,%eax;");
    asm("loc_6DA89CF: jne loc_6DA8AE1;");
    asm("loc_6DA89D5: mov (%ebx),%eax;");
    asm("loc_6DA89D7: mov (%eax),%dl;");
    asm("loc_6DA89D9: inc %eax;");
    asm("loc_6DA89DA: mov %eax,(%ebx);");
    asm("loc_6DA89DC: mov 4(%esi),%ecx;");
    asm("loc_6DA89DF: mov %dl,0x13(%esp);");
    asm("loc_6DA89E3: mov (%esi),%edx;");
    asm("loc_6DA89E5: inc %edx;");
    asm("loc_6DA89E6: mov %edx,%eax;");
    asm("loc_6DA89E8: cmp %ecx,%eax;");
    asm("loc_6DA89EA: mov %edx,(%esi);");
    asm("loc_6DA89EC: jbe loc_6DA89F1;");
    asm("loc_6DA89EE: mov %ebp,0xC(%esi);");
    asm("loc_6DA89F1: mov 0x1C(%edi),%eax;");
    asm("loc_6DA89F4: test %eax,%eax;");
    asm("loc_6DA89F6: jne loc_6DA8AE1;");
    asm("loc_6DA89FC: mov (%ebx),%eax;");
    asm("loc_6DA89FE: mov (%eax),%dl;");
    asm("loc_6DA8A00: inc %eax;");
    asm("loc_6DA8A01: mov %eax,(%ebx);");
    asm("loc_6DA8A03: mov (%esi),%eax;");
    asm("loc_6DA8A05: mov 4(%esi),%ecx;");
    asm("loc_6DA8A08: inc %eax;");
    asm("loc_6DA8A09: cmp %ecx,%eax;");
    asm("loc_6DA8A0B: mov %eax,(%esi);");
    asm("loc_6DA8A0D: jbe loc_6DA8A12;");
    asm("loc_6DA8A0F: mov %ebp,0xC(%esi);");
    asm("loc_6DA8A12: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8A15: test %eax,%eax;");
    asm("loc_6DA8A17: jne loc_6DA8AE1;");
    asm("loc_6DA8A1D: mov (%ebx),%eax;");
    asm("loc_6DA8A1F: mov (%eax),%cl;");
    asm("loc_6DA8A21: inc %eax;");
    asm("loc_6DA8A22: mov %eax,(%ebx);");
    asm("loc_6DA8A24: movsbl 0x18(%esp),%eax;");
    asm("loc_6DA8A29: mov %eax,0x18(%esp);");
    asm("loc_6DA8A2D: movsbl 0x13(%esp),%eax;");
    asm("loc_6DA8A32: fildl 0x18(%esp);");
    asm("loc_6DA8A36: mov %eax,0x18(%esp);");
    asm("loc_6DA8A3A: fmull _data_6DB3FE0;");
    asm("loc_6DA8A40: movsbl %dl,%edx;");
    asm("loc_6DA8A43: movsbl %cl,%eax;");
    asm("loc_6DA8A46: fstps 0x4C(%edi);");
    asm("loc_6DA8A49: fildl 0x18(%esp);");
    asm("loc_6DA8A4D: mov 0x1C(%esp),%ecx;");
    asm("loc_6DA8A51: mov %edx,0x18(%esp);");
    asm("loc_6DA8A55: fmull _data_6DB3FE0;");
    asm("loc_6DA8A5B: push %esi;");
    asm("loc_6DA8A5C: push %ecx;");
    asm("loc_6DA8A5D: push %ebx;");
    asm("loc_6DA8A5E: fstps 0x50(%edi);");
    asm("loc_6DA8A61: mov %edi,%ecx;");
    asm("loc_6DA8A63: fildl 0x24(%esp);");
    asm("loc_6DA8A67: mov %eax,0x24(%esp);");
    asm("loc_6DA8A6B: fmull _data_6DB3FE0;");
    asm("loc_6DA8A71: fstps 0x54(%edi);");
    asm("loc_6DA8A74: fildl 0x24(%esp);");
    asm("loc_6DA8A78: fmull _data_6DB3FE0;");
    asm("loc_6DA8A7E: fstps 0x48(%edi);");
    asm("loc_6DA8A81: call _sub_6DA13C0;");
    asm("loc_6DA8A86: test %eax,%eax;");
    asm("loc_6DA8A88: mov %eax,0x1C(%edi);");
    asm("loc_6DA8A8B: je loc_6DA8A97;");
    asm("loc_6DA8A8D: pop %edi;");
    asm("loc_6DA8A8E: pop %esi;");
    asm("loc_6DA8A8F: mov %ebp,%eax;");
    asm("loc_6DA8A91: pop %ebp;");
    asm("loc_6DA8A92: pop %ebx;");
    asm("loc_6DA8A93: pop %ecx;");
    asm("loc_6DA8A94: ret $0xC;");
    asm("loc_6DA8A97: mov (%esi),%edx;");
    asm("loc_6DA8A99: mov 0x20(%esp),%eax;");
    asm("loc_6DA8A9D: mov %edx,(%eax);");
    asm("loc_6DA8A9F: mov 0xC(%edi),%ecx;");
    asm("loc_6DA8AA2: push %ecx;");
    asm("loc_6DA8AA3: call _sub_6DA16B0;");
    asm("loc_6DA8AA8: mov %eax,%ecx;");
    asm("loc_6DA8AAA: mov 4(%ecx),%edx;");
    asm("loc_6DA8AAD: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA8AB0: mov 0x14(%ecx),%eax;");
    asm("loc_6DA8AB3: add $4,%esp;");
    asm("loc_6DA8AB6: inc %edx;");
    asm("loc_6DA8AB7: mov %edx,4(%ecx);");
    asm("loc_6DA8ABA: mov %edx,%edi;");
    asm("loc_6DA8ABC: mov (%esi),%edx;");
    asm("loc_6DA8ABE: add $2,%edx;");
    asm("loc_6DA8AC1: add %edx,%ebp;");
    asm("loc_6DA8AC3: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA8AC6: mov (%esi),%esi;");
    asm("loc_6DA8AC8: add $2,%eax;");
    asm("loc_6DA8ACB: cmp %eax,%esi;");
    asm("loc_6DA8ACD: jbe loc_6DA8AD5;");
    asm("loc_6DA8ACF: add $2,%esi;");
    asm("loc_6DA8AD2: mov %esi,0x14(%ecx);");
    asm("loc_6DA8AD5: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA8AD8: xor %edx,%edx;");
    asm("loc_6DA8ADA: div %edi;");
    asm("loc_6DA8ADC: mov %eax,0xC(%ecx);");
    asm("loc_6DA8ADF: xor %eax,%eax;");
    asm("loc_6DA8AE1: pop %edi;");
    asm("loc_6DA8AE2: pop %esi;");
    asm("loc_6DA8AE3: pop %ebp;");
    asm("loc_6DA8AE4: pop %ebx;");
    asm("loc_6DA8AE5: pop %ecx;");
    asm("loc_6DA8AE6: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8AF0() // _sub_6DA8AF0
{
    __DEBUG_ASM(6DA8AF0);
    // chunk 0x6DA8AF0 _sub_6DA8AF0
    asm("loc_6DA8AF0: mov _data_6DB6298,%eax;");
    asm("loc_6DA8AF5: mov %eax,_data_6DBC120;");
    asm("loc_6DA8AFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8B00() // _sub_6DA8B00
{
    __DEBUG_ASM(6DA8B00);
    // chunk 0x6DA8B00 _sub_6DA8B00
    asm("loc_6DA8B00: mov _data_6DB6298,%eax;");
    asm("loc_6DA8B05: mov %eax,_data_6DBC124;");
    asm("loc_6DA8B0A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8B10() // _sub_6DA8B10
{
    __DEBUG_ASM(6DA8B10);
    // chunk 0x6DA8B10 _sub_6DA8B10
    asm("loc_6DA8B10: mov _data_6DB629C,%eax;");
    asm("loc_6DA8B15: mov %eax,_data_6DBC11C;");
    asm("loc_6DA8B1A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8B20() // _sub_6DA8B20
{
    __DEBUG_ASM(6DA8B20);
    // chunk 0x6DA8B20 _sub_6DA8B20
    asm("loc_6DA8B20: mov _data_6DB62A8,%eax;");
    asm("loc_6DA8B25: mov %eax,_data_6DBC130;");
    asm("loc_6DA8B2A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8B30() // _sub_6DA8B30
{
    __DEBUG_ASM(6DA8B30);
    // chunk 0x6DA8B30 _sub_6DA8B30
    asm("loc_6DA8B30: mov _data_6DB62A8,%eax;");
    asm("loc_6DA8B35: mov %eax,_data_6DBC134;");
    asm("loc_6DA8B3A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8B40() // _sub_6DA8B40
{
    __DEBUG_ASM(6DA8B40);
    // chunk 0x6DA8B40 _sub_6DA8B40
    asm("loc_6DA8B40: mov _data_6DB62AC,%eax;");
    asm("loc_6DA8B45: mov %eax,_data_6DBC12C;");
    asm("loc_6DA8B4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8B50() // _sub_6DA8B50
{
    __DEBUG_ASM(6DA8B50);
    // chunk 0x6DA8B50 _sub_6DA8B50
    asm("loc_6DA8B50: mov 8(%esp),%eax;");
    asm("loc_6DA8B54: push %ebx;");
    asm("loc_6DA8B55: push %ebp;");
    asm("loc_6DA8B56: push %esi;");
    asm("loc_6DA8B57: push %edi;");
    asm("loc_6DA8B58: mov %ecx,%edi;");
    asm("loc_6DA8B5A: mov 0x14(%esp),%ecx;");
    asm("loc_6DA8B5E: lea 0x10(%edi),%esi;");
    asm("loc_6DA8B61: mov %eax,4(%esi);");
    asm("loc_6DA8B64: mov (%ecx),%edx;");
    asm("loc_6DA8B66: mov %edx,8(%esi);");
    asm("loc_6DA8B69: movl $0,(%esi);");
    asm("loc_6DA8B6F: movl $0,0xC(%esi);");
    asm("loc_6DA8B76: mov 0x14(%edi),%eax;");
    asm("loc_6DA8B79: push %esi;");
    asm("loc_6DA8B7A: push %eax;");
    asm("loc_6DA8B7B: lea 0x18(%edi),%ebx;");
    asm("loc_6DA8B7E: push %ebx;");
    asm("loc_6DA8B7F: mov %edi,%ecx;");
    asm("loc_6DA8B81: call _sub_6DA1380;");
    asm("loc_6DA8B86: test %eax,%eax;");
    asm("loc_6DA8B88: mov %eax,0x1C(%edi);");
    asm("loc_6DA8B8B: je loc_6DA8B99;");
    asm("loc_6DA8B8D: pop %edi;");
    asm("loc_6DA8B8E: pop %esi;");
    asm("loc_6DA8B8F: pop %ebp;");
    asm("loc_6DA8B90: mov $0x16,%eax;");
    asm("loc_6DA8B95: pop %ebx;");
    asm("loc_6DA8B96: ret $0xC;");
    asm("loc_6DA8B99: mov (%esi),%edx;");
    asm("loc_6DA8B9B: mov 4(%esi),%ecx;");
    asm("loc_6DA8B9E: add $4,%edx;");
    asm("loc_6DA8BA1: mov %edx,%eax;");
    asm("loc_6DA8BA3: cmp %ecx,%eax;");
    asm("loc_6DA8BA5: mov %edx,(%esi);");
    asm("loc_6DA8BA7: mov $0x16,%ebp;");
    asm("loc_6DA8BAC: jbe loc_6DA8BB1;");
    asm("loc_6DA8BAE: mov %ebp,0xC(%esi);");
    asm("loc_6DA8BB1: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8BB4: test %eax,%eax;");
    asm("loc_6DA8BB6: je loc_6DA8BC1;");
    asm("loc_6DA8BB8: pop %edi;");
    asm("loc_6DA8BB9: pop %esi;");
    asm("loc_6DA8BBA: mov %ebp,%eax;");
    asm("loc_6DA8BBC: pop %ebp;");
    asm("loc_6DA8BBD: pop %ebx;");
    asm("loc_6DA8BBE: ret $0xC;");
    asm("loc_6DA8BC1: mov (%ebx),%eax;");
    asm("loc_6DA8BC3: mov 0x20(%edi),%ecx;");
    asm("loc_6DA8BC6: mov %ecx,(%eax);");
    asm("loc_6DA8BC8: add $4,%eax;");
    asm("loc_6DA8BCB: mov %eax,(%ebx);");
    asm("loc_6DA8BCD: mov (%esi),%edx;");
    asm("loc_6DA8BCF: mov 4(%esi),%ecx;");
    asm("loc_6DA8BD2: add $4,%edx;");
    asm("loc_6DA8BD5: mov %edx,%eax;");
    asm("loc_6DA8BD7: cmp %ecx,%eax;");
    asm("loc_6DA8BD9: mov %edx,(%esi);");
    asm("loc_6DA8BDB: jbe loc_6DA8BE0;");
    asm("loc_6DA8BDD: mov %ebp,0xC(%esi);");
    asm("loc_6DA8BE0: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8BE3: test %eax,%eax;");
    asm("loc_6DA8BE5: je loc_6DA8BF0;");
    asm("loc_6DA8BE7: pop %edi;");
    asm("loc_6DA8BE8: pop %esi;");
    asm("loc_6DA8BE9: mov %ebp,%eax;");
    asm("loc_6DA8BEB: pop %ebp;");
    asm("loc_6DA8BEC: pop %ebx;");
    asm("loc_6DA8BED: ret $0xC;");
    asm("loc_6DA8BF0: mov (%ebx),%eax;");
    asm("loc_6DA8BF2: mov 0x24(%edi),%edx;");
    asm("loc_6DA8BF5: mov %edx,(%eax);");
    asm("loc_6DA8BF7: add $4,%eax;");
    asm("loc_6DA8BFA: mov %eax,(%ebx);");
    asm("loc_6DA8BFC: mov (%esi),%edx;");
    asm("loc_6DA8BFE: mov 4(%esi),%ecx;");
    asm("loc_6DA8C01: add $2,%edx;");
    asm("loc_6DA8C04: mov %edx,%eax;");
    asm("loc_6DA8C06: cmp %ecx,%eax;");
    asm("loc_6DA8C08: mov %edx,(%esi);");
    asm("loc_6DA8C0A: jbe loc_6DA8C0F;");
    asm("loc_6DA8C0C: mov %ebp,0xC(%esi);");
    asm("loc_6DA8C0F: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8C12: test %eax,%eax;");
    asm("loc_6DA8C14: je loc_6DA8C1F;");
    asm("loc_6DA8C16: pop %edi;");
    asm("loc_6DA8C17: pop %esi;");
    asm("loc_6DA8C18: mov %ebp,%eax;");
    asm("loc_6DA8C1A: pop %ebp;");
    asm("loc_6DA8C1B: pop %ebx;");
    asm("loc_6DA8C1C: ret $0xC;");
    asm("loc_6DA8C1F: mov (%ebx),%eax;");
    asm("loc_6DA8C21: mov 0x28(%edi),%cx;");
    asm("loc_6DA8C25: mov %cx,(%eax);");
    asm("loc_6DA8C28: add $2,%eax;");
    asm("loc_6DA8C2B: mov %eax,(%ebx);");
    asm("loc_6DA8C2D: mov (%esi),%edx;");
    asm("loc_6DA8C2F: mov 4(%esi),%ecx;");
    asm("loc_6DA8C32: add $2,%edx;");
    asm("loc_6DA8C35: mov %edx,%eax;");
    asm("loc_6DA8C37: cmp %ecx,%eax;");
    asm("loc_6DA8C39: mov %edx,(%esi);");
    asm("loc_6DA8C3B: jbe loc_6DA8C40;");
    asm("loc_6DA8C3D: mov %ebp,0xC(%esi);");
    asm("loc_6DA8C40: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8C43: test %eax,%eax;");
    asm("loc_6DA8C45: je loc_6DA8C50;");
    asm("loc_6DA8C47: pop %edi;");
    asm("loc_6DA8C48: pop %esi;");
    asm("loc_6DA8C49: mov %ebp,%eax;");
    asm("loc_6DA8C4B: pop %ebp;");
    asm("loc_6DA8C4C: pop %ebx;");
    asm("loc_6DA8C4D: ret $0xC;");
    asm("loc_6DA8C50: mov (%ebx),%eax;");
    asm("loc_6DA8C52: mov 0x2A(%edi),%dx;");
    asm("loc_6DA8C56: mov %dx,(%eax);");
    asm("loc_6DA8C59: add $2,%eax;");
    asm("loc_6DA8C5C: mov %eax,(%ebx);");
    asm("loc_6DA8C5E: mov 0x14(%edi),%eax;");
    asm("loc_6DA8C61: push %esi;");
    asm("loc_6DA8C62: push %eax;");
    asm("loc_6DA8C63: push %ebx;");
    asm("loc_6DA8C64: mov %edi,%ecx;");
    asm("loc_6DA8C66: call _sub_6DA13C0;");
    asm("loc_6DA8C6B: test %eax,%eax;");
    asm("loc_6DA8C6D: mov %eax,0x1C(%edi);");
    asm("loc_6DA8C70: je loc_6DA8C7B;");
    asm("loc_6DA8C72: pop %edi;");
    asm("loc_6DA8C73: pop %esi;");
    asm("loc_6DA8C74: mov %ebp,%eax;");
    asm("loc_6DA8C76: pop %ebp;");
    asm("loc_6DA8C77: pop %ebx;");
    asm("loc_6DA8C78: ret $0xC;");
    asm("loc_6DA8C7B: mov (%esi),%ecx;");
    asm("loc_6DA8C7D: mov 0x1C(%esp),%edx;");
    asm("loc_6DA8C81: mov %ecx,(%edx);");
    asm("loc_6DA8C83: mov 0xC(%edi),%eax;");
    asm("loc_6DA8C86: push %eax;");
    asm("loc_6DA8C87: call _sub_6DA16B0;");
    asm("loc_6DA8C8C: mov %eax,%ecx;");
    asm("loc_6DA8C8E: mov (%ecx),%ebp;");
    asm("loc_6DA8C90: mov 0x18(%ecx),%ebx;");
    asm("loc_6DA8C93: mov 0x10(%ecx),%eax;");
    asm("loc_6DA8C96: add $4,%esp;");
    asm("loc_6DA8C99: inc %ebp;");
    asm("loc_6DA8C9A: mov %ebp,(%ecx);");
    asm("loc_6DA8C9C: mov (%esi),%edx;");
    asm("loc_6DA8C9E: add %edx,%ebx;");
    asm("loc_6DA8CA0: mov %ebx,0x18(%ecx);");
    asm("loc_6DA8CA3: mov (%esi),%esi;");
    asm("loc_6DA8CA5: cmp %eax,%esi;");
    asm("loc_6DA8CA7: mov %ebp,%edi;");
    asm("loc_6DA8CA9: jbe loc_6DA8CAE;");
    asm("loc_6DA8CAB: mov %esi,0x10(%ecx);");
    asm("loc_6DA8CAE: mov 0x18(%ecx),%eax;");
    asm("loc_6DA8CB1: xor %edx,%edx;");
    asm("loc_6DA8CB3: div %edi;");
    asm("loc_6DA8CB5: pop %edi;");
    asm("loc_6DA8CB6: pop %esi;");
    asm("loc_6DA8CB7: pop %ebp;");
    asm("loc_6DA8CB8: pop %ebx;");
    asm("loc_6DA8CB9: mov %eax,8(%ecx);");
    asm("loc_6DA8CBC: xor %eax,%eax;");
    asm("loc_6DA8CBE: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8CD0() // _sub_6DA8CD0
{
    __DEBUG_ASM(6DA8CD0);
    // chunk 0x6DA8CD0 _sub_6DA8CD0
    asm("loc_6DA8CD0: mov 4(%esp),%eax;");
    asm("loc_6DA8CD4: push %ebx;");
    asm("loc_6DA8CD5: push %ebp;");
    asm("loc_6DA8CD6: mov 0x10(%esp),%ebp;");
    asm("loc_6DA8CDA: push %esi;");
    asm("loc_6DA8CDB: push %edi;");
    asm("loc_6DA8CDC: mov %ecx,%edi;");
    asm("loc_6DA8CDE: lea 0x10(%edi),%esi;");
    asm("loc_6DA8CE1: push %esi;");
    asm("loc_6DA8CE2: push %ebp;");
    asm("loc_6DA8CE3: lea 0x18(%edi),%ebx;");
    asm("loc_6DA8CE6: push %ebx;");
    asm("loc_6DA8CE7: mov %ebp,4(%esi);");
    asm("loc_6DA8CEA: mov %eax,8(%esi);");
    asm("loc_6DA8CED: movl $0,(%esi);");
    asm("loc_6DA8CF3: movl $0,0xC(%esi);");
    asm("loc_6DA8CFA: call _sub_6DA13C0;");
    asm("loc_6DA8CFF: test %eax,%eax;");
    asm("loc_6DA8D01: mov %eax,0x1C(%edi);");
    asm("loc_6DA8D04: je loc_6DA8D12;");
    asm("loc_6DA8D06: pop %edi;");
    asm("loc_6DA8D07: pop %esi;");
    asm("loc_6DA8D08: pop %ebp;");
    asm("loc_6DA8D09: mov $0x17,%eax;");
    asm("loc_6DA8D0E: pop %ebx;");
    asm("loc_6DA8D0F: ret $0xC;");
    asm("loc_6DA8D12: mov (%esi),%edx;");
    asm("loc_6DA8D14: mov 4(%esi),%ecx;");
    asm("loc_6DA8D17: add $4,%edx;");
    asm("loc_6DA8D1A: mov %edx,%eax;");
    asm("loc_6DA8D1C: cmp %ecx,%eax;");
    asm("loc_6DA8D1E: mov %edx,(%esi);");
    asm("loc_6DA8D20: mov $0x17,%ecx;");
    asm("loc_6DA8D25: jbe loc_6DA8D2A;");
    asm("loc_6DA8D27: mov %ecx,0xC(%esi);");
    asm("loc_6DA8D2A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8D2D: test %eax,%eax;");
    asm("loc_6DA8D2F: jne loc_6DA8E20;");
    asm("loc_6DA8D35: mov (%ebx),%eax;");
    asm("loc_6DA8D37: mov (%eax),%edx;");
    asm("loc_6DA8D39: add $4,%eax;");
    asm("loc_6DA8D3C: mov %eax,(%ebx);");
    asm("loc_6DA8D3E: mov %edx,0x20(%edi);");
    asm("loc_6DA8D41: mov (%esi),%eax;");
    asm("loc_6DA8D43: mov 4(%esi),%edx;");
    asm("loc_6DA8D46: add $4,%eax;");
    asm("loc_6DA8D49: cmp %edx,%eax;");
    asm("loc_6DA8D4B: mov %eax,(%esi);");
    asm("loc_6DA8D4D: jbe loc_6DA8D52;");
    asm("loc_6DA8D4F: mov %ecx,0xC(%esi);");
    asm("loc_6DA8D52: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8D55: test %eax,%eax;");
    asm("loc_6DA8D57: jne loc_6DA8E20;");
    asm("loc_6DA8D5D: mov (%ebx),%eax;");
    asm("loc_6DA8D5F: mov (%eax),%edx;");
    asm("loc_6DA8D61: add $4,%eax;");
    asm("loc_6DA8D64: mov %eax,(%ebx);");
    asm("loc_6DA8D66: mov %edx,0x24(%edi);");
    asm("loc_6DA8D69: mov (%esi),%eax;");
    asm("loc_6DA8D6B: mov 4(%esi),%edx;");
    asm("loc_6DA8D6E: add $2,%eax;");
    asm("loc_6DA8D71: cmp %edx,%eax;");
    asm("loc_6DA8D73: mov %eax,(%esi);");
    asm("loc_6DA8D75: jbe loc_6DA8D7A;");
    asm("loc_6DA8D77: mov %ecx,0xC(%esi);");
    asm("loc_6DA8D7A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8D7D: test %eax,%eax;");
    asm("loc_6DA8D7F: jne loc_6DA8E20;");
    asm("loc_6DA8D85: mov (%ebx),%eax;");
    asm("loc_6DA8D87: mov (%eax),%dx;");
    asm("loc_6DA8D8A: add $2,%eax;");
    asm("loc_6DA8D8D: mov %eax,(%ebx);");
    asm("loc_6DA8D8F: mov %dx,0x28(%edi);");
    asm("loc_6DA8D93: mov (%esi),%eax;");
    asm("loc_6DA8D95: mov 4(%esi),%edx;");
    asm("loc_6DA8D98: add $2,%eax;");
    asm("loc_6DA8D9B: cmp %edx,%eax;");
    asm("loc_6DA8D9D: mov %eax,(%esi);");
    asm("loc_6DA8D9F: jbe loc_6DA8DA4;");
    asm("loc_6DA8DA1: mov %ecx,0xC(%esi);");
    asm("loc_6DA8DA4: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8DA7: test %eax,%eax;");
    asm("loc_6DA8DA9: jne loc_6DA8E20;");
    asm("loc_6DA8DAB: mov (%ebx),%eax;");
    asm("loc_6DA8DAD: mov (%eax),%cx;");
    asm("loc_6DA8DB0: push %esi;");
    asm("loc_6DA8DB1: push %ebp;");
    asm("loc_6DA8DB2: mov %cx,0x2A(%edi);");
    asm("loc_6DA8DB6: add $2,%eax;");
    asm("loc_6DA8DB9: push %ebx;");
    asm("loc_6DA8DBA: mov %edi,%ecx;");
    asm("loc_6DA8DBC: mov %eax,(%ebx);");
    asm("loc_6DA8DBE: call _sub_6DA13C0;");
    asm("loc_6DA8DC3: test %eax,%eax;");
    asm("loc_6DA8DC5: mov %eax,0x1C(%edi);");
    asm("loc_6DA8DC8: je loc_6DA8DD6;");
    asm("loc_6DA8DCA: pop %edi;");
    asm("loc_6DA8DCB: pop %esi;");
    asm("loc_6DA8DCC: pop %ebp;");
    asm("loc_6DA8DCD: mov $0x17,%eax;");
    asm("loc_6DA8DD2: pop %ebx;");
    asm("loc_6DA8DD3: ret $0xC;");
    asm("loc_6DA8DD6: mov (%esi),%edx;");
    asm("loc_6DA8DD8: mov 0x1C(%esp),%eax;");
    asm("loc_6DA8DDC: mov %edx,(%eax);");
    asm("loc_6DA8DDE: mov 0xC(%edi),%ecx;");
    asm("loc_6DA8DE1: push %ecx;");
    asm("loc_6DA8DE2: call _sub_6DA16B0;");
    asm("loc_6DA8DE7: mov %eax,%ecx;");
    asm("loc_6DA8DE9: mov 4(%ecx),%edx;");
    asm("loc_6DA8DEC: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA8DEF: mov 0x14(%ecx),%eax;");
    asm("loc_6DA8DF2: add $4,%esp;");
    asm("loc_6DA8DF5: inc %edx;");
    asm("loc_6DA8DF6: mov %edx,4(%ecx);");
    asm("loc_6DA8DF9: mov %edx,%edi;");
    asm("loc_6DA8DFB: mov (%esi),%edx;");
    asm("loc_6DA8DFD: add $2,%edx;");
    asm("loc_6DA8E00: add %edx,%ebp;");
    asm("loc_6DA8E02: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA8E05: mov (%esi),%esi;");
    asm("loc_6DA8E07: add $2,%eax;");
    asm("loc_6DA8E0A: cmp %eax,%esi;");
    asm("loc_6DA8E0C: jbe loc_6DA8E14;");
    asm("loc_6DA8E0E: add $2,%esi;");
    asm("loc_6DA8E11: mov %esi,0x14(%ecx);");
    asm("loc_6DA8E14: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA8E17: xor %edx,%edx;");
    asm("loc_6DA8E19: div %edi;");
    asm("loc_6DA8E1B: mov %eax,0xC(%ecx);");
    asm("loc_6DA8E1E: xor %eax,%eax;");
    asm("loc_6DA8E20: pop %edi;");
    asm("loc_6DA8E21: pop %esi;");
    asm("loc_6DA8E22: pop %ebp;");
    asm("loc_6DA8E23: pop %ebx;");
    asm("loc_6DA8E24: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8E30() // _sub_6DA8E30
{
    __DEBUG_ASM(6DA8E30);
    // chunk 0x6DA8E30 _sub_6DA8E30
    asm("loc_6DA8E30: mov 8(%esp),%eax;");
    asm("loc_6DA8E34: push %ebx;");
    asm("loc_6DA8E35: push %esi;");
    asm("loc_6DA8E36: push %edi;");
    asm("loc_6DA8E37: mov %ecx,%edi;");
    asm("loc_6DA8E39: mov 0x10(%esp),%ecx;");
    asm("loc_6DA8E3D: lea 0x10(%edi),%esi;");
    asm("loc_6DA8E40: mov %eax,4(%esi);");
    asm("loc_6DA8E43: mov (%ecx),%edx;");
    asm("loc_6DA8E45: mov %edx,8(%esi);");
    asm("loc_6DA8E48: movl $0,(%esi);");
    asm("loc_6DA8E4E: movl $0,0xC(%esi);");
    asm("loc_6DA8E55: mov 0x14(%edi),%eax;");
    asm("loc_6DA8E58: push %esi;");
    asm("loc_6DA8E59: push %eax;");
    asm("loc_6DA8E5A: lea 0x18(%edi),%ebx;");
    asm("loc_6DA8E5D: push %ebx;");
    asm("loc_6DA8E5E: mov %edi,%ecx;");
    asm("loc_6DA8E60: call _sub_6DA1380;");
    asm("loc_6DA8E65: test %eax,%eax;");
    asm("loc_6DA8E67: mov %eax,0x1C(%edi);");
    asm("loc_6DA8E6A: je loc_6DA8E77;");
    asm("loc_6DA8E6C: pop %edi;");
    asm("loc_6DA8E6D: pop %esi;");
    asm("loc_6DA8E6E: mov $0x16,%eax;");
    asm("loc_6DA8E73: pop %ebx;");
    asm("loc_6DA8E74: ret $0xC;");
    asm("loc_6DA8E77: mov (%esi),%edx;");
    asm("loc_6DA8E79: mov 4(%esi),%ecx;");
    asm("loc_6DA8E7C: add $4,%edx;");
    asm("loc_6DA8E7F: mov %edx,%eax;");
    asm("loc_6DA8E81: cmp %ecx,%eax;");
    asm("loc_6DA8E83: mov %edx,(%esi);");
    asm("loc_6DA8E85: jbe loc_6DA8E8E;");
    asm("loc_6DA8E87: movl $0x16,0xC(%esi);");
    asm("loc_6DA8E8E: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8E91: test %eax,%eax;");
    asm("loc_6DA8E93: je loc_6DA8EA0;");
    asm("loc_6DA8E95: pop %edi;");
    asm("loc_6DA8E96: pop %esi;");
    asm("loc_6DA8E97: mov $0x16,%eax;");
    asm("loc_6DA8E9C: pop %ebx;");
    asm("loc_6DA8E9D: ret $0xC;");
    asm("loc_6DA8EA0: mov (%ebx),%eax;");
    asm("loc_6DA8EA2: mov 0x20(%edi),%ecx;");
    asm("loc_6DA8EA5: mov %ecx,(%eax);");
    asm("loc_6DA8EA7: add $4,%eax;");
    asm("loc_6DA8EAA: mov %eax,(%ebx);");
    asm("loc_6DA8EAC: mov (%esi),%edx;");
    asm("loc_6DA8EAE: mov 4(%esi),%ecx;");
    asm("loc_6DA8EB1: inc %edx;");
    asm("loc_6DA8EB2: mov %edx,%eax;");
    asm("loc_6DA8EB4: cmp %ecx,%eax;");
    asm("loc_6DA8EB6: mov %edx,(%esi);");
    asm("loc_6DA8EB8: jbe loc_6DA8EC1;");
    asm("loc_6DA8EBA: movl $0x16,0xC(%esi);");
    asm("loc_6DA8EC1: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8EC4: test %eax,%eax;");
    asm("loc_6DA8EC6: je loc_6DA8ED3;");
    asm("loc_6DA8EC8: pop %edi;");
    asm("loc_6DA8EC9: pop %esi;");
    asm("loc_6DA8ECA: mov $0x16,%eax;");
    asm("loc_6DA8ECF: pop %ebx;");
    asm("loc_6DA8ED0: ret $0xC;");
    asm("loc_6DA8ED3: mov (%ebx),%eax;");
    asm("loc_6DA8ED5: mov 0x24(%edi),%dl;");
    asm("loc_6DA8ED8: mov %dl,(%eax);");
    asm("loc_6DA8EDA: inc %eax;");
    asm("loc_6DA8EDB: mov %eax,(%ebx);");
    asm("loc_6DA8EDD: mov (%esi),%edx;");
    asm("loc_6DA8EDF: mov 4(%esi),%ecx;");
    asm("loc_6DA8EE2: add $4,%edx;");
    asm("loc_6DA8EE5: mov %edx,%eax;");
    asm("loc_6DA8EE7: cmp %ecx,%eax;");
    asm("loc_6DA8EE9: mov %edx,(%esi);");
    asm("loc_6DA8EEB: jbe loc_6DA8EF4;");
    asm("loc_6DA8EED: movl $0x16,0xC(%esi);");
    asm("loc_6DA8EF4: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8EF7: test %eax,%eax;");
    asm("loc_6DA8EF9: je loc_6DA8F06;");
    asm("loc_6DA8EFB: pop %edi;");
    asm("loc_6DA8EFC: pop %esi;");
    asm("loc_6DA8EFD: mov $0x16,%eax;");
    asm("loc_6DA8F02: pop %ebx;");
    asm("loc_6DA8F03: ret $0xC;");
    asm("loc_6DA8F06: mov (%ebx),%eax;");
    asm("loc_6DA8F08: mov 0x28(%edi),%ecx;");
    asm("loc_6DA8F0B: mov %ecx,(%eax);");
    asm("loc_6DA8F0D: mov 0x14(%edi),%edx;");
    asm("loc_6DA8F10: push %esi;");
    asm("loc_6DA8F11: push %edx;");
    asm("loc_6DA8F12: add $4,%eax;");
    asm("loc_6DA8F15: push %ebx;");
    asm("loc_6DA8F16: mov %edi,%ecx;");
    asm("loc_6DA8F18: mov %eax,(%ebx);");
    asm("loc_6DA8F1A: call _sub_6DA13C0;");
    asm("loc_6DA8F1F: test %eax,%eax;");
    asm("loc_6DA8F21: mov %eax,0x1C(%edi);");
    asm("loc_6DA8F24: je loc_6DA8F31;");
    asm("loc_6DA8F26: pop %edi;");
    asm("loc_6DA8F27: pop %esi;");
    asm("loc_6DA8F28: mov $0x16,%eax;");
    asm("loc_6DA8F2D: pop %ebx;");
    asm("loc_6DA8F2E: ret $0xC;");
    asm("loc_6DA8F31: mov (%esi),%eax;");
    asm("loc_6DA8F33: mov 0x18(%esp),%ecx;");
    asm("loc_6DA8F37: mov %eax,(%ecx);");
    asm("loc_6DA8F39: mov 0xC(%edi),%edx;");
    asm("loc_6DA8F3C: push %edx;");
    asm("loc_6DA8F3D: call _sub_6DA16B0;");
    asm("loc_6DA8F42: mov %eax,%ecx;");
    asm("loc_6DA8F44: mov (%ecx),%edi;");
    asm("loc_6DA8F46: mov 0x18(%ecx),%edx;");
    asm("loc_6DA8F49: add $4,%esp;");
    asm("loc_6DA8F4C: inc %edi;");
    asm("loc_6DA8F4D: mov %edi,(%ecx);");
    asm("loc_6DA8F4F: mov (%esi),%eax;");
    asm("loc_6DA8F51: add %eax,%edx;");
    asm("loc_6DA8F53: mov 0x10(%ecx),%eax;");
    asm("loc_6DA8F56: mov %edx,0x18(%ecx);");
    asm("loc_6DA8F59: mov (%esi),%esi;");
    asm("loc_6DA8F5B: cmp %eax,%esi;");
    asm("loc_6DA8F5D: jbe loc_6DA8F62;");
    asm("loc_6DA8F5F: mov %esi,0x10(%ecx);");
    asm("loc_6DA8F62: mov 0x18(%ecx),%eax;");
    asm("loc_6DA8F65: xor %edx,%edx;");
    asm("loc_6DA8F67: div %edi;");
    asm("loc_6DA8F69: pop %edi;");
    asm("loc_6DA8F6A: pop %esi;");
    asm("loc_6DA8F6B: pop %ebx;");
    asm("loc_6DA8F6C: mov %eax,8(%ecx);");
    asm("loc_6DA8F6F: xor %eax,%eax;");
    asm("loc_6DA8F71: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA8F80() // _sub_6DA8F80
{
    __DEBUG_ASM(6DA8F80);
    // chunk 0x6DA8F80 _sub_6DA8F80
    asm("loc_6DA8F80: mov 4(%esp),%eax;");
    asm("loc_6DA8F84: push %ebx;");
    asm("loc_6DA8F85: push %ebp;");
    asm("loc_6DA8F86: mov 0x10(%esp),%ebp;");
    asm("loc_6DA8F8A: push %esi;");
    asm("loc_6DA8F8B: push %edi;");
    asm("loc_6DA8F8C: mov %ecx,%edi;");
    asm("loc_6DA8F8E: lea 0x10(%edi),%esi;");
    asm("loc_6DA8F91: push %esi;");
    asm("loc_6DA8F92: push %ebp;");
    asm("loc_6DA8F93: lea 0x18(%edi),%ebx;");
    asm("loc_6DA8F96: push %ebx;");
    asm("loc_6DA8F97: mov %ebp,4(%esi);");
    asm("loc_6DA8F9A: mov %eax,8(%esi);");
    asm("loc_6DA8F9D: movl $0,(%esi);");
    asm("loc_6DA8FA3: movl $0,0xC(%esi);");
    asm("loc_6DA8FAA: call _sub_6DA13C0;");
    asm("loc_6DA8FAF: test %eax,%eax;");
    asm("loc_6DA8FB1: mov %eax,0x1C(%edi);");
    asm("loc_6DA8FB4: je loc_6DA8FC2;");
    asm("loc_6DA8FB6: pop %edi;");
    asm("loc_6DA8FB7: pop %esi;");
    asm("loc_6DA8FB8: pop %ebp;");
    asm("loc_6DA8FB9: mov $0x17,%eax;");
    asm("loc_6DA8FBE: pop %ebx;");
    asm("loc_6DA8FBF: ret $0xC;");
    asm("loc_6DA8FC2: mov (%esi),%edx;");
    asm("loc_6DA8FC4: mov 4(%esi),%ecx;");
    asm("loc_6DA8FC7: add $4,%edx;");
    asm("loc_6DA8FCA: mov %edx,%eax;");
    asm("loc_6DA8FCC: cmp %ecx,%eax;");
    asm("loc_6DA8FCE: mov %edx,(%esi);");
    asm("loc_6DA8FD0: mov $0x17,%ecx;");
    asm("loc_6DA8FD5: jbe loc_6DA8FDA;");
    asm("loc_6DA8FD7: mov %ecx,0xC(%esi);");
    asm("loc_6DA8FDA: mov 0x1C(%edi),%eax;");
    asm("loc_6DA8FDD: test %eax,%eax;");
    asm("loc_6DA8FDF: jne loc_6DA90A0;");
    asm("loc_6DA8FE5: mov (%ebx),%eax;");
    asm("loc_6DA8FE7: mov (%eax),%edx;");
    asm("loc_6DA8FE9: add $4,%eax;");
    asm("loc_6DA8FEC: mov %eax,(%ebx);");
    asm("loc_6DA8FEE: mov %edx,0x20(%edi);");
    asm("loc_6DA8FF1: mov (%esi),%eax;");
    asm("loc_6DA8FF3: mov 4(%esi),%edx;");
    asm("loc_6DA8FF6: inc %eax;");
    asm("loc_6DA8FF7: cmp %edx,%eax;");
    asm("loc_6DA8FF9: mov %eax,(%esi);");
    asm("loc_6DA8FFB: jbe loc_6DA9000;");
    asm("loc_6DA8FFD: mov %ecx,0xC(%esi);");
    asm("loc_6DA9000: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9003: test %eax,%eax;");
    asm("loc_6DA9005: jne loc_6DA90A0;");
    asm("loc_6DA900B: mov (%ebx),%eax;");
    asm("loc_6DA900D: mov (%eax),%dl;");
    asm("loc_6DA900F: inc %eax;");
    asm("loc_6DA9010: mov %eax,(%ebx);");
    asm("loc_6DA9012: mov %dl,0x24(%edi);");
    asm("loc_6DA9015: mov (%esi),%eax;");
    asm("loc_6DA9017: mov 4(%esi),%edx;");
    asm("loc_6DA901A: add $4,%eax;");
    asm("loc_6DA901D: cmp %edx,%eax;");
    asm("loc_6DA901F: mov %eax,(%esi);");
    asm("loc_6DA9021: jbe loc_6DA9026;");
    asm("loc_6DA9023: mov %ecx,0xC(%esi);");
    asm("loc_6DA9026: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9029: test %eax,%eax;");
    asm("loc_6DA902B: jne loc_6DA90A0;");
    asm("loc_6DA902D: mov (%ebx),%eax;");
    asm("loc_6DA902F: mov (%eax),%ecx;");
    asm("loc_6DA9031: push %esi;");
    asm("loc_6DA9032: push %ebp;");
    asm("loc_6DA9033: mov %ecx,0x28(%edi);");
    asm("loc_6DA9036: add $4,%eax;");
    asm("loc_6DA9039: push %ebx;");
    asm("loc_6DA903A: mov %edi,%ecx;");
    asm("loc_6DA903C: mov %eax,(%ebx);");
    asm("loc_6DA903E: call _sub_6DA13C0;");
    asm("loc_6DA9043: test %eax,%eax;");
    asm("loc_6DA9045: mov %eax,0x1C(%edi);");
    asm("loc_6DA9048: je loc_6DA9056;");
    asm("loc_6DA904A: pop %edi;");
    asm("loc_6DA904B: pop %esi;");
    asm("loc_6DA904C: pop %ebp;");
    asm("loc_6DA904D: mov $0x17,%eax;");
    asm("loc_6DA9052: pop %ebx;");
    asm("loc_6DA9053: ret $0xC;");
    asm("loc_6DA9056: mov (%esi),%edx;");
    asm("loc_6DA9058: mov 0x1C(%esp),%eax;");
    asm("loc_6DA905C: mov %edx,(%eax);");
    asm("loc_6DA905E: mov 0xC(%edi),%ecx;");
    asm("loc_6DA9061: push %ecx;");
    asm("loc_6DA9062: call _sub_6DA16B0;");
    asm("loc_6DA9067: mov %eax,%ecx;");
    asm("loc_6DA9069: mov 4(%ecx),%edx;");
    asm("loc_6DA906C: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA906F: mov 0x14(%ecx),%eax;");
    asm("loc_6DA9072: add $4,%esp;");
    asm("loc_6DA9075: inc %edx;");
    asm("loc_6DA9076: mov %edx,4(%ecx);");
    asm("loc_6DA9079: mov %edx,%edi;");
    asm("loc_6DA907B: mov (%esi),%edx;");
    asm("loc_6DA907D: add $2,%edx;");
    asm("loc_6DA9080: add %edx,%ebp;");
    asm("loc_6DA9082: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA9085: mov (%esi),%esi;");
    asm("loc_6DA9087: add $2,%eax;");
    asm("loc_6DA908A: cmp %eax,%esi;");
    asm("loc_6DA908C: jbe loc_6DA9094;");
    asm("loc_6DA908E: add $2,%esi;");
    asm("loc_6DA9091: mov %esi,0x14(%ecx);");
    asm("loc_6DA9094: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA9097: xor %edx,%edx;");
    asm("loc_6DA9099: div %edi;");
    asm("loc_6DA909B: mov %eax,0xC(%ecx);");
    asm("loc_6DA909E: xor %eax,%eax;");
    asm("loc_6DA90A0: pop %edi;");
    asm("loc_6DA90A1: pop %esi;");
    asm("loc_6DA90A2: pop %ebp;");
    asm("loc_6DA90A3: pop %ebx;");
    asm("loc_6DA90A4: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA90B0() // _sub_6DA90B0
{
    __DEBUG_ASM(6DA90B0);
    // chunk 0x6DA90B0 _sub_6DA90B0
    asm("loc_6DA90B0: mov _data_6DB62B8,%eax;");
    asm("loc_6DA90B5: mov %eax,_data_6DBC140;");
    asm("loc_6DA90BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA90C0() // _sub_6DA90C0
{
    __DEBUG_ASM(6DA90C0);
    // chunk 0x6DA90C0 _sub_6DA90C0
    asm("loc_6DA90C0: mov _data_6DB62B8,%eax;");
    asm("loc_6DA90C5: mov %eax,_data_6DBC144;");
    asm("loc_6DA90CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA90D0() // _sub_6DA90D0
{
    __DEBUG_ASM(6DA90D0);
    // chunk 0x6DA90D0 _sub_6DA90D0
    asm("loc_6DA90D0: mov _data_6DB62BC,%eax;");
    asm("loc_6DA90D5: mov %eax,_data_6DBC13C;");
    asm("loc_6DA90DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA90E0() // _sub_6DA90E0
{
    __DEBUG_ASM(6DA90E0);
    // chunk 0x6DA90E0 _sub_6DA90E0
    asm("loc_6DA90E0: mov _data_6DB62C8,%eax;");
    asm("loc_6DA90E5: mov %eax,_data_6DBC150;");
    asm("loc_6DA90EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA90F0() // _sub_6DA90F0
{
    __DEBUG_ASM(6DA90F0);
    // chunk 0x6DA90F0 _sub_6DA90F0
    asm("loc_6DA90F0: mov _data_6DB62C8,%eax;");
    asm("loc_6DA90F5: mov %eax,_data_6DBC154;");
    asm("loc_6DA90FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA9100() // _sub_6DA9100
{
    __DEBUG_ASM(6DA9100);
    // chunk 0x6DA9100 _sub_6DA9100
    asm("loc_6DA9100: mov _data_6DB62CC,%eax;");
    asm("loc_6DA9105: mov %eax,_data_6DBC14C;");
    asm("loc_6DA910A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA9110() // _sub_6DA9110
{
    __DEBUG_ASM(6DA9110);
    // chunk 0x6DA9110 _sub_6DA9110
    asm("loc_6DA9110: mov 8(%esp),%eax;");
    asm("loc_6DA9114: push %ebx;");
    asm("loc_6DA9115: push %esi;");
    asm("loc_6DA9116: push %edi;");
    asm("loc_6DA9117: mov %ecx,%edi;");
    asm("loc_6DA9119: mov 0x10(%esp),%ecx;");
    asm("loc_6DA911D: lea 0x10(%edi),%esi;");
    asm("loc_6DA9120: mov %eax,4(%esi);");
    asm("loc_6DA9123: mov (%ecx),%edx;");
    asm("loc_6DA9125: mov %edx,8(%esi);");
    asm("loc_6DA9128: movl $0,(%esi);");
    asm("loc_6DA912E: movl $0,0xC(%esi);");
    asm("loc_6DA9135: mov 0x14(%edi),%eax;");
    asm("loc_6DA9138: push %esi;");
    asm("loc_6DA9139: push %eax;");
    asm("loc_6DA913A: lea 0x18(%edi),%ebx;");
    asm("loc_6DA913D: push %ebx;");
    asm("loc_6DA913E: mov %edi,%ecx;");
    asm("loc_6DA9140: call _sub_6DA1380;");
    asm("loc_6DA9145: test %eax,%eax;");
    asm("loc_6DA9147: mov %eax,0x1C(%edi);");
    asm("loc_6DA914A: je loc_6DA9157;");
    asm("loc_6DA914C: pop %edi;");
    asm("loc_6DA914D: pop %esi;");
    asm("loc_6DA914E: mov $0x16,%eax;");
    asm("loc_6DA9153: pop %ebx;");
    asm("loc_6DA9154: ret $0xC;");
    asm("loc_6DA9157: mov (%esi),%edx;");
    asm("loc_6DA9159: mov 4(%esi),%ecx;");
    asm("loc_6DA915C: add $4,%edx;");
    asm("loc_6DA915F: mov %edx,%eax;");
    asm("loc_6DA9161: cmp %ecx,%eax;");
    asm("loc_6DA9163: mov %edx,(%esi);");
    asm("loc_6DA9165: jbe loc_6DA916E;");
    asm("loc_6DA9167: movl $0x16,0xC(%esi);");
    asm("loc_6DA916E: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9171: test %eax,%eax;");
    asm("loc_6DA9173: je loc_6DA9180;");
    asm("loc_6DA9175: pop %edi;");
    asm("loc_6DA9176: pop %esi;");
    asm("loc_6DA9177: mov $0x16,%eax;");
    asm("loc_6DA917C: pop %ebx;");
    asm("loc_6DA917D: ret $0xC;");
    asm("loc_6DA9180: mov (%ebx),%eax;");
    asm("loc_6DA9182: mov 0x20(%edi),%ecx;");
    asm("loc_6DA9185: mov %ecx,(%eax);");
    asm("loc_6DA9187: add $4,%eax;");
    asm("loc_6DA918A: mov %eax,(%ebx);");
    asm("loc_6DA918C: mov (%esi),%edx;");
    asm("loc_6DA918E: mov 4(%esi),%ecx;");
    asm("loc_6DA9191: add $4,%edx;");
    asm("loc_6DA9194: mov %edx,%eax;");
    asm("loc_6DA9196: cmp %ecx,%eax;");
    asm("loc_6DA9198: mov %edx,(%esi);");
    asm("loc_6DA919A: jbe loc_6DA91A3;");
    asm("loc_6DA919C: movl $0x16,0xC(%esi);");
    asm("loc_6DA91A3: mov 0x1C(%edi),%eax;");
    asm("loc_6DA91A6: test %eax,%eax;");
    asm("loc_6DA91A8: je loc_6DA91B5;");
    asm("loc_6DA91AA: pop %edi;");
    asm("loc_6DA91AB: pop %esi;");
    asm("loc_6DA91AC: mov $0x16,%eax;");
    asm("loc_6DA91B1: pop %ebx;");
    asm("loc_6DA91B2: ret $0xC;");
    asm("loc_6DA91B5: mov (%ebx),%eax;");
    asm("loc_6DA91B7: mov 0x24(%edi),%edx;");
    asm("loc_6DA91BA: mov %edx,(%eax);");
    asm("loc_6DA91BC: add $4,%eax;");
    asm("loc_6DA91BF: mov %eax,(%ebx);");
    asm("loc_6DA91C1: mov 0x14(%edi),%eax;");
    asm("loc_6DA91C4: push %esi;");
    asm("loc_6DA91C5: push %eax;");
    asm("loc_6DA91C6: push %ebx;");
    asm("loc_6DA91C7: mov %edi,%ecx;");
    asm("loc_6DA91C9: call _sub_6DA13C0;");
    asm("loc_6DA91CE: test %eax,%eax;");
    asm("loc_6DA91D0: mov %eax,0x1C(%edi);");
    asm("loc_6DA91D3: je loc_6DA91E0;");
    asm("loc_6DA91D5: pop %edi;");
    asm("loc_6DA91D6: pop %esi;");
    asm("loc_6DA91D7: mov $0x16,%eax;");
    asm("loc_6DA91DC: pop %ebx;");
    asm("loc_6DA91DD: ret $0xC;");
    asm("loc_6DA91E0: mov (%esi),%ecx;");
    asm("loc_6DA91E2: mov 0x18(%esp),%edx;");
    asm("loc_6DA91E6: mov %ecx,(%edx);");
    asm("loc_6DA91E8: mov 0xC(%edi),%eax;");
    asm("loc_6DA91EB: push %eax;");
    asm("loc_6DA91EC: call _sub_6DA16B0;");
    asm("loc_6DA91F1: mov %eax,%ecx;");
    asm("loc_6DA91F3: mov (%ecx),%eax;");
    asm("loc_6DA91F5: mov 0x18(%ecx),%ebx;");
    asm("loc_6DA91F8: add $4,%esp;");
    asm("loc_6DA91FB: inc %eax;");
    asm("loc_6DA91FC: mov %eax,(%ecx);");
    asm("loc_6DA91FE: mov (%esi),%edx;");
    asm("loc_6DA9200: add %edx,%ebx;");
    asm("loc_6DA9202: mov %eax,%edi;");
    asm("loc_6DA9204: mov 0x10(%ecx),%eax;");
    asm("loc_6DA9207: mov %ebx,0x18(%ecx);");
    asm("loc_6DA920A: mov (%esi),%esi;");
    asm("loc_6DA920C: cmp %eax,%esi;");
    asm("loc_6DA920E: jbe loc_6DA9213;");
    asm("loc_6DA9210: mov %esi,0x10(%ecx);");
    asm("loc_6DA9213: mov 0x18(%ecx),%eax;");
    asm("loc_6DA9216: xor %edx,%edx;");
    asm("loc_6DA9218: div %edi;");
    asm("loc_6DA921A: pop %edi;");
    asm("loc_6DA921B: pop %esi;");
    asm("loc_6DA921C: pop %ebx;");
    asm("loc_6DA921D: mov %eax,8(%ecx);");
    asm("loc_6DA9220: xor %eax,%eax;");
    asm("loc_6DA9222: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA9230() // _sub_6DA9230
{
    __DEBUG_ASM(6DA9230);
    // chunk 0x6DA9230 _sub_6DA9230
    asm("loc_6DA9230: mov _data_6DB62D8,%eax;");
    asm("loc_6DA9235: mov %eax,_data_6DBC160;");
    asm("loc_6DA923A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA9240() // _sub_6DA9240
{
    __DEBUG_ASM(6DA9240);
    // chunk 0x6DA9240 _sub_6DA9240
    asm("loc_6DA9240: mov _data_6DB62D8,%eax;");
    asm("loc_6DA9245: mov %eax,_data_6DBC164;");
    asm("loc_6DA924A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA9250() // _sub_6DA9250
{
    __DEBUG_ASM(6DA9250);
    // chunk 0x6DA9250 _sub_6DA9250
    asm("loc_6DA9250: mov _data_6DB62DC,%eax;");
    asm("loc_6DA9255: mov %eax,_data_6DBC15C;");
    asm("loc_6DA925A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA9260() // _sub_6DA9260
{
    __DEBUG_ASM(6DA9260);
    // chunk 0x6DA9260 _sub_6DA9260
    asm("loc_6DA9260: mov 8(%esp),%eax;");
    asm("loc_6DA9264: sub $0x10,%esp;");
    asm("loc_6DA9267: push %ebx;");
    asm("loc_6DA9268: push %ebp;");
    asm("loc_6DA9269: push %esi;");
    asm("loc_6DA926A: push %edi;");
    asm("loc_6DA926B: mov %ecx,%edi;");
    asm("loc_6DA926D: mov 0x24(%esp),%ecx;");
    asm("loc_6DA9271: lea 0x10(%edi),%esi;");
    asm("loc_6DA9274: mov %eax,4(%esi);");
    asm("loc_6DA9277: mov (%ecx),%edx;");
    asm("loc_6DA9279: mov %edx,8(%esi);");
    asm("loc_6DA927C: movl $0,(%esi);");
    asm("loc_6DA9282: movl $0,0xC(%esi);");
    asm("loc_6DA9289: mov 0x14(%edi),%eax;");
    asm("loc_6DA928C: push %esi;");
    asm("loc_6DA928D: push %eax;");
    asm("loc_6DA928E: lea 0x18(%edi),%ebx;");
    asm("loc_6DA9291: push %ebx;");
    asm("loc_6DA9292: mov %edi,%ecx;");
    asm("loc_6DA9294: call _sub_6DA1380;");
    asm("loc_6DA9299: test %eax,%eax;");
    asm("loc_6DA929B: mov %eax,0x1C(%edi);");
    asm("loc_6DA929E: je loc_6DA92AF;");
    asm("loc_6DA92A0: pop %edi;");
    asm("loc_6DA92A1: pop %esi;");
    asm("loc_6DA92A2: pop %ebp;");
    asm("loc_6DA92A3: mov $0x16,%eax;");
    asm("loc_6DA92A8: pop %ebx;");
    asm("loc_6DA92A9: add $0x10,%esp;");
    asm("loc_6DA92AC: ret $0xC;");
    asm("loc_6DA92AF: mov (%esi),%edx;");
    asm("loc_6DA92B1: mov 4(%esi),%ecx;");
    asm("loc_6DA92B4: add $4,%edx;");
    asm("loc_6DA92B7: mov %edx,%eax;");
    asm("loc_6DA92B9: cmp %ecx,%eax;");
    asm("loc_6DA92BB: mov %edx,(%esi);");
    asm("loc_6DA92BD: mov $0x16,%ecx;");
    asm("loc_6DA92C2: jbe loc_6DA92C7;");
    asm("loc_6DA92C4: mov %ecx,0xC(%esi);");
    asm("loc_6DA92C7: mov 0x1C(%edi),%eax;");
    asm("loc_6DA92CA: test %eax,%eax;");
    asm("loc_6DA92CC: je loc_6DA92DA;");
    asm("loc_6DA92CE: pop %edi;");
    asm("loc_6DA92CF: pop %esi;");
    asm("loc_6DA92D0: pop %ebp;");
    asm("loc_6DA92D1: mov %ecx,%eax;");
    asm("loc_6DA92D3: pop %ebx;");
    asm("loc_6DA92D4: add $0x10,%esp;");
    asm("loc_6DA92D7: ret $0xC;");
    asm("loc_6DA92DA: mov (%ebx),%eax;");
    asm("loc_6DA92DC: mov 0x20(%edi),%edx;");
    asm("loc_6DA92DF: mov %edx,(%eax);");
    asm("loc_6DA92E1: add $4,%eax;");
    asm("loc_6DA92E4: mov %eax,(%ebx);");
    asm("loc_6DA92E6: mov (%esi),%ebp;");
    asm("loc_6DA92E8: mov 4(%esi),%edx;");
    asm("loc_6DA92EB: add $4,%ebp;");
    asm("loc_6DA92EE: mov %ebp,%eax;");
    asm("loc_6DA92F0: cmp %edx,%eax;");
    asm("loc_6DA92F2: mov %ebp,(%esi);");
    asm("loc_6DA92F4: jbe loc_6DA92F9;");
    asm("loc_6DA92F6: mov %ecx,0xC(%esi);");
    asm("loc_6DA92F9: mov 0x1C(%edi),%eax;");
    asm("loc_6DA92FC: test %eax,%eax;");
    asm("loc_6DA92FE: je loc_6DA930C;");
    asm("loc_6DA9300: pop %edi;");
    asm("loc_6DA9301: pop %esi;");
    asm("loc_6DA9302: pop %ebp;");
    asm("loc_6DA9303: mov %ecx,%eax;");
    asm("loc_6DA9305: pop %ebx;");
    asm("loc_6DA9306: add $0x10,%esp;");
    asm("loc_6DA9309: ret $0xC;");
    asm("loc_6DA930C: mov (%ebx),%eax;");
    asm("loc_6DA930E: mov 0x24(%edi),%edx;");
    asm("loc_6DA9311: mov %edx,(%eax);");
    asm("loc_6DA9313: add $4,%eax;");
    asm("loc_6DA9316: mov %eax,(%ebx);");
    asm("loc_6DA9318: mov (%esi),%ebp;");
    asm("loc_6DA931A: mov 4(%esi),%edx;");
    asm("loc_6DA931D: add $0xC,%ebp;");
    asm("loc_6DA9320: mov %ebp,%eax;");
    asm("loc_6DA9322: cmp %edx,%eax;");
    asm("loc_6DA9324: mov %ebp,(%esi);");
    asm("loc_6DA9326: jbe loc_6DA932B;");
    asm("loc_6DA9328: mov %ecx,0xC(%esi);");
    asm("loc_6DA932B: mov 0x1C(%edi),%eax;");
    asm("loc_6DA932E: test %eax,%eax;");
    asm("loc_6DA9330: je loc_6DA933E;");
    asm("loc_6DA9332: pop %edi;");
    asm("loc_6DA9333: pop %esi;");
    asm("loc_6DA9334: pop %ebp;");
    asm("loc_6DA9335: mov %ecx,%eax;");
    asm("loc_6DA9337: pop %ebx;");
    asm("loc_6DA9338: add $0x10,%esp;");
    asm("loc_6DA933B: ret $0xC;");
    asm("loc_6DA933E: mov 0x28(%edi),%eax;");
    asm("loc_6DA9341: mov 0x2C(%edi),%ecx;");
    asm("loc_6DA9344: mov (%ebx),%ebp;");
    asm("loc_6DA9346: mov 0x30(%edi),%edx;");
    asm("loc_6DA9349: mov %eax,0x10(%esp);");
    asm("loc_6DA934D: lea 0x10(%esp),%eax;");
    asm("loc_6DA9351: mov %ecx,0x14(%esp);");
    asm("loc_6DA9355: push %eax;");
    asm("loc_6DA9356: mov %ebp,%ecx;");
    asm("loc_6DA9358: mov %edx,0x1C(%esp);");
    asm("loc_6DA935C: call _sub_6D8F510;");
    asm("loc_6DA9361: add $0xC,%ebp;");
    asm("loc_6DA9364: mov %ebp,(%ebx);");
    asm("loc_6DA9366: mov (%esi),%edx;");
    asm("loc_6DA9368: mov 4(%esi),%ecx;");
    asm("loc_6DA936B: add $0x10,%edx;");
    asm("loc_6DA936E: mov %edx,%eax;");
    asm("loc_6DA9370: cmp %ecx,%eax;");
    asm("loc_6DA9372: mov %edx,(%esi);");
    asm("loc_6DA9374: jbe loc_6DA937D;");
    asm("loc_6DA9376: movl $0x16,0xC(%esi);");
    asm("loc_6DA937D: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9380: test %eax,%eax;");
    asm("loc_6DA9382: je loc_6DA9393;");
    asm("loc_6DA9384: pop %edi;");
    asm("loc_6DA9385: pop %esi;");
    asm("loc_6DA9386: pop %ebp;");
    asm("loc_6DA9387: mov $0x16,%eax;");
    asm("loc_6DA938C: pop %ebx;");
    asm("loc_6DA938D: add $0x10,%esp;");
    asm("loc_6DA9390: ret $0xC;");
    asm("loc_6DA9393: mov (%ebx),%ebp;");
    asm("loc_6DA9395: lea 0x34(%edi),%ecx;");
    asm("loc_6DA9398: mov (%ecx),%edx;");
    asm("loc_6DA939A: mov 4(%ecx),%eax;");
    asm("loc_6DA939D: mov %edx,0x10(%esp);");
    asm("loc_6DA93A1: mov 8(%ecx),%edx;");
    asm("loc_6DA93A4: mov %eax,0x14(%esp);");
    asm("loc_6DA93A8: mov 0xC(%ecx),%eax;");
    asm("loc_6DA93AB: lea 0x10(%esp),%ecx;");
    asm("loc_6DA93AF: push %ecx;");
    asm("loc_6DA93B0: mov %ebp,%ecx;");
    asm("loc_6DA93B2: mov %edx,0x1C(%esp);");
    asm("loc_6DA93B6: mov %eax,0x20(%esp);");
    asm("loc_6DA93BA: call _sub_6D8F4F0;");
    asm("loc_6DA93BF: mov 0x14(%edi),%edx;");
    asm("loc_6DA93C2: push %esi;");
    asm("loc_6DA93C3: push %edx;");
    asm("loc_6DA93C4: add $0x10,%ebp;");
    asm("loc_6DA93C7: push %ebx;");
    asm("loc_6DA93C8: mov %edi,%ecx;");
    asm("loc_6DA93CA: mov %ebp,(%ebx);");
    asm("loc_6DA93CC: call _sub_6DA13C0;");
    asm("loc_6DA93D1: test %eax,%eax;");
    asm("loc_6DA93D3: mov %eax,0x1C(%edi);");
    asm("loc_6DA93D6: je loc_6DA93E7;");
    asm("loc_6DA93D8: pop %edi;");
    asm("loc_6DA93D9: pop %esi;");
    asm("loc_6DA93DA: pop %ebp;");
    asm("loc_6DA93DB: mov $0x16,%eax;");
    asm("loc_6DA93E0: pop %ebx;");
    asm("loc_6DA93E1: add $0x10,%esp;");
    asm("loc_6DA93E4: ret $0xC;");
    asm("loc_6DA93E7: mov (%esi),%eax;");
    asm("loc_6DA93E9: mov 0x2C(%esp),%ecx;");
    asm("loc_6DA93ED: mov %eax,(%ecx);");
    asm("loc_6DA93EF: mov 0xC(%edi),%edx;");
    asm("loc_6DA93F2: push %edx;");
    asm("loc_6DA93F3: call _sub_6DA16B0;");
    asm("loc_6DA93F8: mov %eax,%ecx;");
    asm("loc_6DA93FA: mov (%ecx),%edi;");
    asm("loc_6DA93FC: mov 0x18(%ecx),%edx;");
    asm("loc_6DA93FF: add $4,%esp;");
    asm("loc_6DA9402: inc %edi;");
    asm("loc_6DA9403: mov %edi,(%ecx);");
    asm("loc_6DA9405: mov (%esi),%eax;");
    asm("loc_6DA9407: add %eax,%edx;");
    asm("loc_6DA9409: mov 0x10(%ecx),%eax;");
    asm("loc_6DA940C: mov %edx,0x18(%ecx);");
    asm("loc_6DA940F: mov (%esi),%esi;");
    asm("loc_6DA9411: cmp %eax,%esi;");
    asm("loc_6DA9413: jbe loc_6DA9418;");
    asm("loc_6DA9415: mov %esi,0x10(%ecx);");
    asm("loc_6DA9418: mov 0x18(%ecx),%eax;");
    asm("loc_6DA941B: xor %edx,%edx;");
    asm("loc_6DA941D: div %edi;");
    asm("loc_6DA941F: pop %edi;");
    asm("loc_6DA9420: pop %esi;");
    asm("loc_6DA9421: pop %ebp;");
    asm("loc_6DA9422: pop %ebx;");
    asm("loc_6DA9423: mov %eax,8(%ecx);");
    asm("loc_6DA9426: xor %eax,%eax;");
    asm("loc_6DA9428: add $0x10,%esp;");
    asm("loc_6DA942B: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA9430() // _sub_6DA9430
{
    __DEBUG_ASM(6DA9430);
    // chunk 0x6DA9430 _sub_6DA9430
    asm("loc_6DA9430: mov 8(%esp),%eax;");
    asm("loc_6DA9434: push %ebx;");
    asm("loc_6DA9435: push %ebp;");
    asm("loc_6DA9436: push %esi;");
    asm("loc_6DA9437: push %edi;");
    asm("loc_6DA9438: mov %ecx,%edi;");
    asm("loc_6DA943A: mov 0x14(%esp),%ecx;");
    asm("loc_6DA943E: lea 0x10(%edi),%esi;");
    asm("loc_6DA9441: push %esi;");
    asm("loc_6DA9442: push %eax;");
    asm("loc_6DA9443: mov %ecx,8(%esi);");
    asm("loc_6DA9446: lea 0x18(%edi),%ebx;");
    asm("loc_6DA9449: push %ebx;");
    asm("loc_6DA944A: mov %edi,%ecx;");
    asm("loc_6DA944C: mov %eax,4(%esi);");
    asm("loc_6DA944F: movl $0,(%esi);");
    asm("loc_6DA9455: movl $0,0xC(%esi);");
    asm("loc_6DA945C: call _sub_6DA13C0;");
    asm("loc_6DA9461: test %eax,%eax;");
    asm("loc_6DA9463: mov %eax,0x1C(%edi);");
    asm("loc_6DA9466: je loc_6DA9474;");
    asm("loc_6DA9468: pop %edi;");
    asm("loc_6DA9469: pop %esi;");
    asm("loc_6DA946A: pop %ebp;");
    asm("loc_6DA946B: mov $0x17,%eax;");
    asm("loc_6DA9470: pop %ebx;");
    asm("loc_6DA9471: ret $0xC;");
    asm("loc_6DA9474: mov (%esi),%edx;");
    asm("loc_6DA9476: mov 4(%esi),%ecx;");
    asm("loc_6DA9479: add $4,%edx;");
    asm("loc_6DA947C: mov %edx,%eax;");
    asm("loc_6DA947E: cmp %ecx,%eax;");
    asm("loc_6DA9480: mov %edx,(%esi);");
    asm("loc_6DA9482: mov $0x17,%ecx;");
    asm("loc_6DA9487: jbe loc_6DA948C;");
    asm("loc_6DA9489: mov %ecx,0xC(%esi);");
    asm("loc_6DA948C: mov 0x1C(%edi),%eax;");
    asm("loc_6DA948F: test %eax,%eax;");
    asm("loc_6DA9491: jne loc_6DA9594;");
    asm("loc_6DA9497: mov (%ebx),%eax;");
    asm("loc_6DA9499: mov (%eax),%edx;");
    asm("loc_6DA949B: add $4,%eax;");
    asm("loc_6DA949E: mov %eax,(%ebx);");
    asm("loc_6DA94A0: mov %edx,0x20(%edi);");
    asm("loc_6DA94A3: mov (%esi),%ebp;");
    asm("loc_6DA94A5: mov 4(%esi),%edx;");
    asm("loc_6DA94A8: add $4,%ebp;");
    asm("loc_6DA94AB: mov %ebp,%eax;");
    asm("loc_6DA94AD: cmp %edx,%eax;");
    asm("loc_6DA94AF: mov %ebp,(%esi);");
    asm("loc_6DA94B1: jbe loc_6DA94B6;");
    asm("loc_6DA94B3: mov %ecx,0xC(%esi);");
    asm("loc_6DA94B6: mov 0x1C(%edi),%eax;");
    asm("loc_6DA94B9: test %eax,%eax;");
    asm("loc_6DA94BB: jne loc_6DA9594;");
    asm("loc_6DA94C1: mov (%ebx),%eax;");
    asm("loc_6DA94C3: mov (%eax),%edx;");
    asm("loc_6DA94C5: add $4,%eax;");
    asm("loc_6DA94C8: mov %eax,(%ebx);");
    asm("loc_6DA94CA: mov %edx,0x24(%edi);");
    asm("loc_6DA94CD: mov (%esi),%ebp;");
    asm("loc_6DA94CF: mov 4(%esi),%edx;");
    asm("loc_6DA94D2: add $0xC,%ebp;");
    asm("loc_6DA94D5: mov %ebp,%eax;");
    asm("loc_6DA94D7: cmp %edx,%eax;");
    asm("loc_6DA94D9: mov %ebp,(%esi);");
    asm("loc_6DA94DB: jbe loc_6DA94E0;");
    asm("loc_6DA94DD: mov %ecx,0xC(%esi);");
    asm("loc_6DA94E0: mov 0x1C(%edi),%eax;");
    asm("loc_6DA94E3: test %eax,%eax;");
    asm("loc_6DA94E5: jne loc_6DA9594;");
    asm("loc_6DA94EB: mov (%ebx),%ebp;");
    asm("loc_6DA94ED: push %ebp;");
    asm("loc_6DA94EE: lea 0x28(%edi),%ecx;");
    asm("loc_6DA94F1: call _sub_6D8F510;");
    asm("loc_6DA94F6: add $0xC,%ebp;");
    asm("loc_6DA94F9: mov %ebp,(%ebx);");
    asm("loc_6DA94FB: mov (%esi),%edx;");
    asm("loc_6DA94FD: mov 4(%esi),%ecx;");
    asm("loc_6DA9500: add $0x10,%edx;");
    asm("loc_6DA9503: mov %edx,%eax;");
    asm("loc_6DA9505: cmp %ecx,%eax;");
    asm("loc_6DA9507: mov %edx,(%esi);");
    asm("loc_6DA9509: jbe loc_6DA9512;");
    asm("loc_6DA950B: movl $0x17,0xC(%esi);");
    asm("loc_6DA9512: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9515: test %eax,%eax;");
    asm("loc_6DA9517: jne loc_6DA9594;");
    asm("loc_6DA9519: mov (%ebx),%ebp;");
    asm("loc_6DA951B: push %ebp;");
    asm("loc_6DA951C: lea 0x34(%edi),%ecx;");
    asm("loc_6DA951F: call _sub_6D8F4F0;");
    asm("loc_6DA9524: mov 0x18(%esp),%eax;");
    asm("loc_6DA9528: push %esi;");
    asm("loc_6DA9529: push %eax;");
    asm("loc_6DA952A: add $0x10,%ebp;");
    asm("loc_6DA952D: push %ebx;");
    asm("loc_6DA952E: mov %edi,%ecx;");
    asm("loc_6DA9530: mov %ebp,(%ebx);");
    asm("loc_6DA9532: call _sub_6DA13C0;");
    asm("loc_6DA9537: test %eax,%eax;");
    asm("loc_6DA9539: mov %eax,0x1C(%edi);");
    asm("loc_6DA953C: je loc_6DA954A;");
    asm("loc_6DA953E: pop %edi;");
    asm("loc_6DA953F: pop %esi;");
    asm("loc_6DA9540: pop %ebp;");
    asm("loc_6DA9541: mov $0x17,%eax;");
    asm("loc_6DA9546: pop %ebx;");
    asm("loc_6DA9547: ret $0xC;");
    asm("loc_6DA954A: mov (%esi),%ecx;");
    asm("loc_6DA954C: mov 0x1C(%esp),%edx;");
    asm("loc_6DA9550: mov %ecx,(%edx);");
    asm("loc_6DA9552: mov 0xC(%edi),%eax;");
    asm("loc_6DA9555: push %eax;");
    asm("loc_6DA9556: call _sub_6DA16B0;");
    asm("loc_6DA955B: mov %eax,%ecx;");
    asm("loc_6DA955D: mov 4(%ecx),%edx;");
    asm("loc_6DA9560: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA9563: mov 0x14(%ecx),%eax;");
    asm("loc_6DA9566: add $4,%esp;");
    asm("loc_6DA9569: inc %edx;");
    asm("loc_6DA956A: mov %edx,4(%ecx);");
    asm("loc_6DA956D: mov %edx,%edi;");
    asm("loc_6DA956F: mov (%esi),%edx;");
    asm("loc_6DA9571: add $2,%edx;");
    asm("loc_6DA9574: add %edx,%ebp;");
    asm("loc_6DA9576: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA9579: mov (%esi),%esi;");
    asm("loc_6DA957B: add $2,%eax;");
    asm("loc_6DA957E: cmp %eax,%esi;");
    asm("loc_6DA9580: jbe loc_6DA9588;");
    asm("loc_6DA9582: add $2,%esi;");
    asm("loc_6DA9585: mov %esi,0x14(%ecx);");
    asm("loc_6DA9588: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA958B: xor %edx,%edx;");
    asm("loc_6DA958D: div %edi;");
    asm("loc_6DA958F: mov %eax,0xC(%ecx);");
    asm("loc_6DA9592: xor %eax,%eax;");
    asm("loc_6DA9594: pop %edi;");
    asm("loc_6DA9595: pop %esi;");
    asm("loc_6DA9596: pop %ebp;");
    asm("loc_6DA9597: pop %ebx;");
    asm("loc_6DA9598: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA95A0() // _sub_6DA95A0
{
    __DEBUG_ASM(6DA95A0);
    // chunk 0x6DA95A0 _sub_6DA95A0
    asm("loc_6DA95A0: mov _data_6DB62E8,%eax;");
    asm("loc_6DA95A5: mov %eax,_data_6DBC170;");
    asm("loc_6DA95AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA95B0() // _sub_6DA95B0
{
    __DEBUG_ASM(6DA95B0);
    // chunk 0x6DA95B0 _sub_6DA95B0
    asm("loc_6DA95B0: mov _data_6DB62E8,%eax;");
    asm("loc_6DA95B5: mov %eax,_data_6DBC174;");
    asm("loc_6DA95BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA95C0() // _sub_6DA95C0
{
    __DEBUG_ASM(6DA95C0);
    // chunk 0x6DA95C0 _sub_6DA95C0
    asm("loc_6DA95C0: mov _data_6DB62EC,%eax;");
    asm("loc_6DA95C5: mov %eax,_data_6DBC16C;");
    asm("loc_6DA95CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA95D0() // _sub_6DA95D0
{
    __DEBUG_ASM(6DA95D0);
    // chunk 0x6DA95D0 _sub_6DA95D0
    asm("loc_6DA95D0: mov 8(%esp),%eax;");
    asm("loc_6DA95D4: sub $0x10,%esp;");
    asm("loc_6DA95D7: push %ebx;");
    asm("loc_6DA95D8: push %ebp;");
    asm("loc_6DA95D9: push %esi;");
    asm("loc_6DA95DA: push %edi;");
    asm("loc_6DA95DB: mov %ecx,%edi;");
    asm("loc_6DA95DD: mov 0x24(%esp),%ecx;");
    asm("loc_6DA95E1: lea 0x10(%edi),%esi;");
    asm("loc_6DA95E4: mov %eax,4(%esi);");
    asm("loc_6DA95E7: mov (%ecx),%edx;");
    asm("loc_6DA95E9: mov %edx,8(%esi);");
    asm("loc_6DA95EC: movl $0,(%esi);");
    asm("loc_6DA95F2: movl $0,0xC(%esi);");
    asm("loc_6DA95F9: mov 0x14(%edi),%eax;");
    asm("loc_6DA95FC: push %esi;");
    asm("loc_6DA95FD: push %eax;");
    asm("loc_6DA95FE: lea 0x18(%edi),%ebx;");
    asm("loc_6DA9601: push %ebx;");
    asm("loc_6DA9602: mov %edi,%ecx;");
    asm("loc_6DA9604: call _sub_6DA1380;");
    asm("loc_6DA9609: test %eax,%eax;");
    asm("loc_6DA960B: mov %eax,0x1C(%edi);");
    asm("loc_6DA960E: je loc_6DA961F;");
    asm("loc_6DA9610: pop %edi;");
    asm("loc_6DA9611: pop %esi;");
    asm("loc_6DA9612: pop %ebp;");
    asm("loc_6DA9613: mov $0x16,%eax;");
    asm("loc_6DA9618: pop %ebx;");
    asm("loc_6DA9619: add $0x10,%esp;");
    asm("loc_6DA961C: ret $0xC;");
    asm("loc_6DA961F: mov (%esi),%edx;");
    asm("loc_6DA9621: mov 4(%esi),%ecx;");
    asm("loc_6DA9624: add $4,%edx;");
    asm("loc_6DA9627: mov %edx,%eax;");
    asm("loc_6DA9629: cmp %ecx,%eax;");
    asm("loc_6DA962B: mov %edx,(%esi);");
    asm("loc_6DA962D: mov $0x16,%ebp;");
    asm("loc_6DA9632: jbe loc_6DA9637;");
    asm("loc_6DA9634: mov %ebp,0xC(%esi);");
    asm("loc_6DA9637: mov 0x1C(%edi),%eax;");
    asm("loc_6DA963A: test %eax,%eax;");
    asm("loc_6DA963C: je loc_6DA964A;");
    asm("loc_6DA963E: pop %edi;");
    asm("loc_6DA963F: pop %esi;");
    asm("loc_6DA9640: mov %ebp,%eax;");
    asm("loc_6DA9642: pop %ebp;");
    asm("loc_6DA9643: pop %ebx;");
    asm("loc_6DA9644: add $0x10,%esp;");
    asm("loc_6DA9647: ret $0xC;");
    asm("loc_6DA964A: mov (%ebx),%eax;");
    asm("loc_6DA964C: mov 0x20(%edi),%ecx;");
    asm("loc_6DA964F: mov %ecx,(%eax);");
    asm("loc_6DA9651: mov 0x24(%edi),%edx;");
    asm("loc_6DA9654: add $4,%eax;");
    asm("loc_6DA9657: push %edx;");
    asm("loc_6DA9658: mov %eax,(%ebx);");
    asm("loc_6DA965A: calll *_import_6DB3108;");
    asm("loc_6DA9660: mov (%esi),%ecx;");
    asm("loc_6DA9662: mov 4(%esi),%edx;");
    asm("loc_6DA9665: add $2,%ecx;");
    asm("loc_6DA9668: add $4,%esp;");
    asm("loc_6DA966B: cmp %edx,%ecx;");
    asm("loc_6DA966D: mov %ecx,(%esi);");
    asm("loc_6DA966F: jbe loc_6DA9674;");
    asm("loc_6DA9671: mov %ebp,0xC(%esi);");
    asm("loc_6DA9674: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA9677: test %ecx,%ecx;");
    asm("loc_6DA9679: je loc_6DA9687;");
    asm("loc_6DA967B: pop %edi;");
    asm("loc_6DA967C: pop %esi;");
    asm("loc_6DA967D: mov %ebp,%eax;");
    asm("loc_6DA967F: pop %ebp;");
    asm("loc_6DA9680: pop %ebx;");
    asm("loc_6DA9681: add $0x10,%esp;");
    asm("loc_6DA9684: ret $0xC;");
    asm("loc_6DA9687: mov (%ebx),%ecx;");
    asm("loc_6DA9689: mov %ax,(%ecx);");
    asm("loc_6DA968C: add $2,%ecx;");
    asm("loc_6DA968F: mov %ecx,(%ebx);");
    asm("loc_6DA9691: mov (%esi),%edx;");
    asm("loc_6DA9693: mov 4(%esi),%ecx;");
    asm("loc_6DA9696: add $4,%edx;");
    asm("loc_6DA9699: mov %edx,%eax;");
    asm("loc_6DA969B: cmp %ecx,%eax;");
    asm("loc_6DA969D: mov %edx,(%esi);");
    asm("loc_6DA969F: jbe loc_6DA96A4;");
    asm("loc_6DA96A1: mov %ebp,0xC(%esi);");
    asm("loc_6DA96A4: mov 0x1C(%edi),%eax;");
    asm("loc_6DA96A7: test %eax,%eax;");
    asm("loc_6DA96A9: je loc_6DA96B7;");
    asm("loc_6DA96AB: pop %edi;");
    asm("loc_6DA96AC: pop %esi;");
    asm("loc_6DA96AD: mov %ebp,%eax;");
    asm("loc_6DA96AF: pop %ebp;");
    asm("loc_6DA96B0: pop %ebx;");
    asm("loc_6DA96B1: add $0x10,%esp;");
    asm("loc_6DA96B4: ret $0xC;");
    asm("loc_6DA96B7: mov (%ebx),%eax;");
    asm("loc_6DA96B9: mov 0x28(%edi),%ecx;");
    asm("loc_6DA96BC: mov %ecx,(%eax);");
    asm("loc_6DA96BE: add $4,%eax;");
    asm("loc_6DA96C1: mov %eax,(%ebx);");
    asm("loc_6DA96C3: mov (%esi),%edx;");
    asm("loc_6DA96C5: mov 4(%esi),%ecx;");
    asm("loc_6DA96C8: add $2,%edx;");
    asm("loc_6DA96CB: mov %edx,%eax;");
    asm("loc_6DA96CD: cmp %ecx,%eax;");
    asm("loc_6DA96CF: mov %edx,(%esi);");
    asm("loc_6DA96D1: jbe loc_6DA96D6;");
    asm("loc_6DA96D3: mov %ebp,0xC(%esi);");
    asm("loc_6DA96D6: mov 0x1C(%edi),%eax;");
    asm("loc_6DA96D9: test %eax,%eax;");
    asm("loc_6DA96DB: je loc_6DA96E9;");
    asm("loc_6DA96DD: pop %edi;");
    asm("loc_6DA96DE: pop %esi;");
    asm("loc_6DA96DF: mov %ebp,%eax;");
    asm("loc_6DA96E1: pop %ebp;");
    asm("loc_6DA96E2: pop %ebx;");
    asm("loc_6DA96E3: add $0x10,%esp;");
    asm("loc_6DA96E6: ret $0xC;");
    asm("loc_6DA96E9: mov (%ebx),%eax;");
    asm("loc_6DA96EB: mov 0x2C(%edi),%dx;");
    asm("loc_6DA96EF: mov %dx,(%eax);");
    asm("loc_6DA96F2: add $2,%eax;");
    asm("loc_6DA96F5: mov %eax,(%ebx);");
    asm("loc_6DA96F7: mov (%esi),%edx;");
    asm("loc_6DA96F9: mov 4(%esi),%ecx;");
    asm("loc_6DA96FC: add $0xC,%edx;");
    asm("loc_6DA96FF: mov %edx,%eax;");
    asm("loc_6DA9701: cmp %ecx,%eax;");
    asm("loc_6DA9703: mov %edx,(%esi);");
    asm("loc_6DA9705: jbe loc_6DA970A;");
    asm("loc_6DA9707: mov %ebp,0xC(%esi);");
    asm("loc_6DA970A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA970D: test %eax,%eax;");
    asm("loc_6DA970F: je loc_6DA971D;");
    asm("loc_6DA9711: pop %edi;");
    asm("loc_6DA9712: pop %esi;");
    asm("loc_6DA9713: mov %ebp,%eax;");
    asm("loc_6DA9715: pop %ebp;");
    asm("loc_6DA9716: pop %ebx;");
    asm("loc_6DA9717: add $0x10,%esp;");
    asm("loc_6DA971A: ret $0xC;");
    asm("loc_6DA971D: mov 0x40(%edi),%eax;");
    asm("loc_6DA9720: mov 0x44(%edi),%ecx;");
    asm("loc_6DA9723: mov (%ebx),%ebp;");
    asm("loc_6DA9725: mov 0x48(%edi),%edx;");
    asm("loc_6DA9728: mov %eax,0x10(%esp);");
    asm("loc_6DA972C: lea 0x10(%esp),%eax;");
    asm("loc_6DA9730: mov %ecx,0x14(%esp);");
    asm("loc_6DA9734: push %eax;");
    asm("loc_6DA9735: mov %ebp,%ecx;");
    asm("loc_6DA9737: mov %edx,0x1C(%esp);");
    asm("loc_6DA973B: call _sub_6D8F510;");
    asm("loc_6DA9740: add $0xC,%ebp;");
    asm("loc_6DA9743: mov %ebp,(%ebx);");
    asm("loc_6DA9745: calll *_import_6DB305C;");
    asm("loc_6DA974B: test %al,%al;");
    asm("loc_6DA974D: je loc_6DA985B;");
    asm("loc_6DA9753: mov (%esi),%edx;");
    asm("loc_6DA9755: mov 4(%esi),%ecx;");
    asm("loc_6DA9758: add $0x10,%edx;");
    asm("loc_6DA975B: mov %edx,%eax;");
    asm("loc_6DA975D: cmp %ecx,%eax;");
    asm("loc_6DA975F: mov %edx,(%esi);");
    asm("loc_6DA9761: jbe loc_6DA976A;");
    asm("loc_6DA9763: movl $0x16,0xC(%esi);");
    asm("loc_6DA976A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA976D: test %eax,%eax;");
    asm("loc_6DA976F: je loc_6DA9780;");
    asm("loc_6DA9771: pop %edi;");
    asm("loc_6DA9772: pop %esi;");
    asm("loc_6DA9773: pop %ebp;");
    asm("loc_6DA9774: mov $0x16,%eax;");
    asm("loc_6DA9779: pop %ebx;");
    asm("loc_6DA977A: add $0x10,%esp;");
    asm("loc_6DA977D: ret $0xC;");
    asm("loc_6DA9780: mov (%ebx),%ebp;");
    asm("loc_6DA9782: lea 0x30(%edi),%ecx;");
    asm("loc_6DA9785: mov (%ecx),%edx;");
    asm("loc_6DA9787: mov 4(%ecx),%eax;");
    asm("loc_6DA978A: mov %edx,0x10(%esp);");
    asm("loc_6DA978E: mov 8(%ecx),%edx;");
    asm("loc_6DA9791: mov %eax,0x14(%esp);");
    asm("loc_6DA9795: mov 0xC(%ecx),%eax;");
    asm("loc_6DA9798: lea 0x10(%esp),%ecx;");
    asm("loc_6DA979C: push %ecx;");
    asm("loc_6DA979D: mov %ebp,%ecx;");
    asm("loc_6DA979F: mov %edx,0x1C(%esp);");
    asm("loc_6DA97A3: mov %eax,0x20(%esp);");
    asm("loc_6DA97A7: call _sub_6D8F4F0;");
    asm("loc_6DA97AC: add $0x10,%ebp;");
    asm("loc_6DA97AF: mov %ebp,(%ebx);");
    asm("loc_6DA97B1: mov (%esi),%edx;");
    asm("loc_6DA97B3: mov 4(%esi),%ecx;");
    asm("loc_6DA97B6: add $0xC,%edx;");
    asm("loc_6DA97B9: mov %edx,%eax;");
    asm("loc_6DA97BB: cmp %ecx,%eax;");
    asm("loc_6DA97BD: mov %edx,(%esi);");
    asm("loc_6DA97BF: jbe loc_6DA97C8;");
    asm("loc_6DA97C1: movl $0x16,0xC(%esi);");
    asm("loc_6DA97C8: mov 0x1C(%edi),%eax;");
    asm("loc_6DA97CB: test %eax,%eax;");
    asm("loc_6DA97CD: je loc_6DA97DE;");
    asm("loc_6DA97CF: pop %edi;");
    asm("loc_6DA97D0: pop %esi;");
    asm("loc_6DA97D1: pop %ebp;");
    asm("loc_6DA97D2: mov $0x16,%eax;");
    asm("loc_6DA97D7: pop %ebx;");
    asm("loc_6DA97D8: add $0x10,%esp;");
    asm("loc_6DA97DB: ret $0xC;");
    asm("loc_6DA97DE: mov 0x4C(%edi),%edx;");
    asm("loc_6DA97E1: mov 0x54(%edi),%ecx;");
    asm("loc_6DA97E4: mov (%ebx),%ebp;");
    asm("loc_6DA97E6: mov 0x50(%edi),%eax;");
    asm("loc_6DA97E9: mov %edx,0x10(%esp);");
    asm("loc_6DA97ED: lea 0x10(%esp),%edx;");
    asm("loc_6DA97F1: mov %ecx,0x18(%esp);");
    asm("loc_6DA97F5: push %edx;");
    asm("loc_6DA97F6: mov %ebp,%ecx;");
    asm("loc_6DA97F8: mov %eax,0x18(%esp);");
    asm("loc_6DA97FC: call _sub_6D8F510;");
    asm("loc_6DA9801: add $0xC,%ebp;");
    asm("loc_6DA9804: mov %ebp,(%ebx);");
    asm("loc_6DA9806: mov (%esi),%edx;");
    asm("loc_6DA9808: mov 4(%esi),%ecx;");
    asm("loc_6DA980B: add $0xC,%edx;");
    asm("loc_6DA980E: mov %edx,%eax;");
    asm("loc_6DA9810: cmp %ecx,%eax;");
    asm("loc_6DA9812: mov %edx,(%esi);");
    asm("loc_6DA9814: jbe loc_6DA981D;");
    asm("loc_6DA9816: movl $0x16,0xC(%esi);");
    asm("loc_6DA981D: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9820: test %eax,%eax;");
    asm("loc_6DA9822: je loc_6DA9833;");
    asm("loc_6DA9824: pop %edi;");
    asm("loc_6DA9825: pop %esi;");
    asm("loc_6DA9826: pop %ebp;");
    asm("loc_6DA9827: mov $0x16,%eax;");
    asm("loc_6DA982C: pop %ebx;");
    asm("loc_6DA982D: add $0x10,%esp;");
    asm("loc_6DA9830: ret $0xC;");
    asm("loc_6DA9833: mov 0x58(%edi),%eax;");
    asm("loc_6DA9836: mov 0x5C(%edi),%ecx;");
    asm("loc_6DA9839: mov (%ebx),%ebp;");
    asm("loc_6DA983B: mov 0x60(%edi),%edx;");
    asm("loc_6DA983E: mov %eax,0x10(%esp);");
    asm("loc_6DA9842: lea 0x10(%esp),%eax;");
    asm("loc_6DA9846: mov %ecx,0x14(%esp);");
    asm("loc_6DA984A: push %eax;");
    asm("loc_6DA984B: mov %ebp,%ecx;");
    asm("loc_6DA984D: mov %edx,0x1C(%esp);");
    asm("loc_6DA9851: call _sub_6D8F510;");
    asm("loc_6DA9856: add $0xC,%ebp;");
    asm("loc_6DA9859: mov %ebp,(%ebx);");
    asm("loc_6DA985B: mov 0x14(%edi),%ecx;");
    asm("loc_6DA985E: push %esi;");
    asm("loc_6DA985F: push %ecx;");
    asm("loc_6DA9860: push %ebx;");
    asm("loc_6DA9861: mov %edi,%ecx;");
    asm("loc_6DA9863: call _sub_6DA13C0;");
    asm("loc_6DA9868: test %eax,%eax;");
    asm("loc_6DA986A: mov %eax,0x1C(%edi);");
    asm("loc_6DA986D: je loc_6DA987E;");
    asm("loc_6DA986F: pop %edi;");
    asm("loc_6DA9870: pop %esi;");
    asm("loc_6DA9871: pop %ebp;");
    asm("loc_6DA9872: mov $0x16,%eax;");
    asm("loc_6DA9877: pop %ebx;");
    asm("loc_6DA9878: add $0x10,%esp;");
    asm("loc_6DA987B: ret $0xC;");
    asm("loc_6DA987E: mov (%esi),%edx;");
    asm("loc_6DA9880: mov 0x2C(%esp),%eax;");
    asm("loc_6DA9884: mov %edx,(%eax);");
    asm("loc_6DA9886: mov 0xC(%edi),%ecx;");
    asm("loc_6DA9889: push %ecx;");
    asm("loc_6DA988A: call _sub_6DA16B0;");
    asm("loc_6DA988F: mov %eax,%ecx;");
    asm("loc_6DA9891: mov (%ecx),%ebp;");
    asm("loc_6DA9893: mov 0x18(%ecx),%ebx;");
    asm("loc_6DA9896: mov 0x10(%ecx),%eax;");
    asm("loc_6DA9899: add $4,%esp;");
    asm("loc_6DA989C: inc %ebp;");
    asm("loc_6DA989D: mov %ebp,(%ecx);");
    asm("loc_6DA989F: mov (%esi),%edx;");
    asm("loc_6DA98A1: add %edx,%ebx;");
    asm("loc_6DA98A3: mov %ebx,0x18(%ecx);");
    asm("loc_6DA98A6: mov (%esi),%esi;");
    asm("loc_6DA98A8: cmp %eax,%esi;");
    asm("loc_6DA98AA: mov %ebp,%edi;");
    asm("loc_6DA98AC: jbe loc_6DA98B1;");
    asm("loc_6DA98AE: mov %esi,0x10(%ecx);");
    asm("loc_6DA98B1: mov 0x18(%ecx),%eax;");
    asm("loc_6DA98B4: xor %edx,%edx;");
    asm("loc_6DA98B6: div %edi;");
    asm("loc_6DA98B8: pop %edi;");
    asm("loc_6DA98B9: pop %esi;");
    asm("loc_6DA98BA: pop %ebp;");
    asm("loc_6DA98BB: pop %ebx;");
    asm("loc_6DA98BC: mov %eax,8(%ecx);");
    asm("loc_6DA98BF: xor %eax,%eax;");
    asm("loc_6DA98C1: add $0x10,%esp;");
    asm("loc_6DA98C4: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA98D0() // _sub_6DA98D0
{
    __DEBUG_ASM(6DA98D0);
    // chunk 0x6DA98D0 _sub_6DA98D0
    asm("loc_6DA98D0: mov 8(%esp),%eax;");
    asm("loc_6DA98D4: push %ebx;");
    asm("loc_6DA98D5: push %ebp;");
    asm("loc_6DA98D6: push %esi;");
    asm("loc_6DA98D7: push %edi;");
    asm("loc_6DA98D8: mov %ecx,%edi;");
    asm("loc_6DA98DA: mov 0x14(%esp),%ecx;");
    asm("loc_6DA98DE: lea 0x10(%edi),%esi;");
    asm("loc_6DA98E1: push %esi;");
    asm("loc_6DA98E2: push %eax;");
    asm("loc_6DA98E3: mov %ecx,8(%esi);");
    asm("loc_6DA98E6: lea 0x18(%edi),%ebx;");
    asm("loc_6DA98E9: push %ebx;");
    asm("loc_6DA98EA: mov %edi,%ecx;");
    asm("loc_6DA98EC: mov %eax,4(%esi);");
    asm("loc_6DA98EF: movl $0,(%esi);");
    asm("loc_6DA98F5: movl $0,0xC(%esi);");
    asm("loc_6DA98FC: call _sub_6DA13C0;");
    asm("loc_6DA9901: test %eax,%eax;");
    asm("loc_6DA9903: mov %eax,0x1C(%edi);");
    asm("loc_6DA9906: je loc_6DA9914;");
    asm("loc_6DA9908: pop %edi;");
    asm("loc_6DA9909: pop %esi;");
    asm("loc_6DA990A: pop %ebp;");
    asm("loc_6DA990B: mov $0x17,%eax;");
    asm("loc_6DA9910: pop %ebx;");
    asm("loc_6DA9911: ret $0xC;");
    asm("loc_6DA9914: mov (%esi),%edx;");
    asm("loc_6DA9916: mov 4(%esi),%ecx;");
    asm("loc_6DA9919: add $4,%edx;");
    asm("loc_6DA991C: mov %edx,%eax;");
    asm("loc_6DA991E: cmp %ecx,%eax;");
    asm("loc_6DA9920: mov %edx,(%esi);");
    asm("loc_6DA9922: mov $0x17,%ebp;");
    asm("loc_6DA9927: jbe loc_6DA992C;");
    asm("loc_6DA9929: mov %ebp,0xC(%esi);");
    asm("loc_6DA992C: mov 0x1C(%edi),%eax;");
    asm("loc_6DA992F: test %eax,%eax;");
    asm("loc_6DA9931: jne loc_6DA9B14;");
    asm("loc_6DA9937: mov (%ebx),%eax;");
    asm("loc_6DA9939: mov (%eax),%edx;");
    asm("loc_6DA993B: add $4,%eax;");
    asm("loc_6DA993E: mov %edx,0x20(%edi);");
    asm("loc_6DA9941: mov %eax,(%ebx);");
    asm("loc_6DA9943: mov (%esi),%edx;");
    asm("loc_6DA9945: mov 4(%esi),%ecx;");
    asm("loc_6DA9948: add $2,%edx;");
    asm("loc_6DA994B: mov %edx,%eax;");
    asm("loc_6DA994D: cmp %ecx,%eax;");
    asm("loc_6DA994F: mov %edx,(%esi);");
    asm("loc_6DA9951: jbe loc_6DA9956;");
    asm("loc_6DA9953: mov %ebp,0xC(%esi);");
    asm("loc_6DA9956: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9959: test %eax,%eax;");
    asm("loc_6DA995B: jne loc_6DA9B14;");
    asm("loc_6DA9961: mov (%ebx),%eax;");
    asm("loc_6DA9963: xor %ecx,%ecx;");
    asm("loc_6DA9965: mov (%eax),%cx;");
    asm("loc_6DA9968: add $2,%eax;");
    asm("loc_6DA996B: mov %eax,(%ebx);");
    asm("loc_6DA996D: push %ecx;");
    asm("loc_6DA996E: calll *_import_6DB3000;");
    asm("loc_6DA9974: mov %eax,0x24(%edi);");
    asm("loc_6DA9977: mov (%esi),%edx;");
    asm("loc_6DA9979: mov 4(%esi),%ecx;");
    asm("loc_6DA997C: add $4,%edx;");
    asm("loc_6DA997F: mov %edx,%eax;");
    asm("loc_6DA9981: add $4,%esp;");
    asm("loc_6DA9984: cmp %ecx,%eax;");
    asm("loc_6DA9986: mov %edx,(%esi);");
    asm("loc_6DA9988: jbe loc_6DA998D;");
    asm("loc_6DA998A: mov %ebp,0xC(%esi);");
    asm("loc_6DA998D: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9990: test %eax,%eax;");
    asm("loc_6DA9992: jne loc_6DA9B14;");
    asm("loc_6DA9998: mov (%ebx),%eax;");
    asm("loc_6DA999A: mov (%eax),%ecx;");
    asm("loc_6DA999C: add $4,%eax;");
    asm("loc_6DA999F: mov %eax,(%ebx);");
    asm("loc_6DA99A1: mov %ecx,0x28(%edi);");
    asm("loc_6DA99A4: mov (%esi),%edx;");
    asm("loc_6DA99A6: mov 4(%esi),%ecx;");
    asm("loc_6DA99A9: add $2,%edx;");
    asm("loc_6DA99AC: mov %edx,%eax;");
    asm("loc_6DA99AE: cmp %ecx,%eax;");
    asm("loc_6DA99B0: mov %edx,(%esi);");
    asm("loc_6DA99B2: jbe loc_6DA99B7;");
    asm("loc_6DA99B4: mov %ebp,0xC(%esi);");
    asm("loc_6DA99B7: mov 0x1C(%edi),%eax;");
    asm("loc_6DA99BA: test %eax,%eax;");
    asm("loc_6DA99BC: jne loc_6DA9B14;");
    asm("loc_6DA99C2: mov (%ebx),%eax;");
    asm("loc_6DA99C4: mov (%eax),%dx;");
    asm("loc_6DA99C7: add $2,%eax;");
    asm("loc_6DA99CA: mov %dx,0x2C(%edi);");
    asm("loc_6DA99CE: mov %eax,(%ebx);");
    asm("loc_6DA99D0: mov (%esi),%edx;");
    asm("loc_6DA99D2: mov 4(%esi),%ecx;");
    asm("loc_6DA99D5: add $0xC,%edx;");
    asm("loc_6DA99D8: mov %edx,%eax;");
    asm("loc_6DA99DA: cmp %ecx,%eax;");
    asm("loc_6DA99DC: mov %edx,(%esi);");
    asm("loc_6DA99DE: jbe loc_6DA99E3;");
    asm("loc_6DA99E0: mov %ebp,0xC(%esi);");
    asm("loc_6DA99E3: mov 0x1C(%edi),%eax;");
    asm("loc_6DA99E6: test %eax,%eax;");
    asm("loc_6DA99E8: jne loc_6DA9B14;");
    asm("loc_6DA99EE: mov (%ebx),%ebp;");
    asm("loc_6DA99F0: push %ebp;");
    asm("loc_6DA99F1: lea 0x40(%edi),%ecx;");
    asm("loc_6DA99F4: call _sub_6D8F510;");
    asm("loc_6DA99F9: add $0xC,%ebp;");
    asm("loc_6DA99FC: mov %ebp,(%ebx);");
    asm("loc_6DA99FE: calll *_import_6DB305C;");
    asm("loc_6DA9A04: test %al,%al;");
    asm("loc_6DA9A06: je loc_6DA9AA2;");
    asm("loc_6DA9A0C: mov (%esi),%edx;");
    asm("loc_6DA9A0E: mov 4(%esi),%ecx;");
    asm("loc_6DA9A11: add $0x10,%edx;");
    asm("loc_6DA9A14: mov %edx,%eax;");
    asm("loc_6DA9A16: cmp %ecx,%eax;");
    asm("loc_6DA9A18: mov %edx,(%esi);");
    asm("loc_6DA9A1A: jbe loc_6DA9A23;");
    asm("loc_6DA9A1C: movl $0x17,0xC(%esi);");
    asm("loc_6DA9A23: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9A26: test %eax,%eax;");
    asm("loc_6DA9A28: jne loc_6DA9B14;");
    asm("loc_6DA9A2E: mov (%ebx),%ebp;");
    asm("loc_6DA9A30: push %ebp;");
    asm("loc_6DA9A31: lea 0x30(%edi),%ecx;");
    asm("loc_6DA9A34: call _sub_6D8F4F0;");
    asm("loc_6DA9A39: add $0x10,%ebp;");
    asm("loc_6DA9A3C: mov %ebp,(%ebx);");
    asm("loc_6DA9A3E: mov (%esi),%edx;");
    asm("loc_6DA9A40: mov 4(%esi),%ecx;");
    asm("loc_6DA9A43: add $0xC,%edx;");
    asm("loc_6DA9A46: mov %edx,%eax;");
    asm("loc_6DA9A48: cmp %ecx,%eax;");
    asm("loc_6DA9A4A: mov %edx,(%esi);");
    asm("loc_6DA9A4C: jbe loc_6DA9A55;");
    asm("loc_6DA9A4E: movl $0x17,0xC(%esi);");
    asm("loc_6DA9A55: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9A58: test %eax,%eax;");
    asm("loc_6DA9A5A: jne loc_6DA9B14;");
    asm("loc_6DA9A60: mov (%ebx),%ebp;");
    asm("loc_6DA9A62: push %ebp;");
    asm("loc_6DA9A63: lea 0x4C(%edi),%ecx;");
    asm("loc_6DA9A66: call _sub_6D8F510;");
    asm("loc_6DA9A6B: add $0xC,%ebp;");
    asm("loc_6DA9A6E: mov %ebp,(%ebx);");
    asm("loc_6DA9A70: mov (%esi),%edx;");
    asm("loc_6DA9A72: mov 4(%esi),%ecx;");
    asm("loc_6DA9A75: add $0xC,%edx;");
    asm("loc_6DA9A78: mov %edx,%eax;");
    asm("loc_6DA9A7A: cmp %ecx,%eax;");
    asm("loc_6DA9A7C: mov %edx,(%esi);");
    asm("loc_6DA9A7E: jbe loc_6DA9A87;");
    asm("loc_6DA9A80: movl $0x17,0xC(%esi);");
    asm("loc_6DA9A87: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9A8A: test %eax,%eax;");
    asm("loc_6DA9A8C: jne loc_6DA9B14;");
    asm("loc_6DA9A92: mov (%ebx),%ebp;");
    asm("loc_6DA9A94: push %ebp;");
    asm("loc_6DA9A95: lea 0x58(%edi),%ecx;");
    asm("loc_6DA9A98: call _sub_6D8F510;");
    asm("loc_6DA9A9D: add $0xC,%ebp;");
    asm("loc_6DA9AA0: mov %ebp,(%ebx);");
    asm("loc_6DA9AA2: mov 0x18(%esp),%eax;");
    asm("loc_6DA9AA6: push %esi;");
    asm("loc_6DA9AA7: push %eax;");
    asm("loc_6DA9AA8: push %ebx;");
    asm("loc_6DA9AA9: mov %edi,%ecx;");
    asm("loc_6DA9AAB: movl $0,0x64(%edi);");
    asm("loc_6DA9AB2: call _sub_6DA13C0;");
    asm("loc_6DA9AB7: test %eax,%eax;");
    asm("loc_6DA9AB9: mov %eax,0x1C(%edi);");
    asm("loc_6DA9ABC: je loc_6DA9ACA;");
    asm("loc_6DA9ABE: pop %edi;");
    asm("loc_6DA9ABF: pop %esi;");
    asm("loc_6DA9AC0: pop %ebp;");
    asm("loc_6DA9AC1: mov $0x17,%eax;");
    asm("loc_6DA9AC6: pop %ebx;");
    asm("loc_6DA9AC7: ret $0xC;");
    asm("loc_6DA9ACA: mov (%esi),%ecx;");
    asm("loc_6DA9ACC: mov 0x1C(%esp),%edx;");
    asm("loc_6DA9AD0: mov %ecx,(%edx);");
    asm("loc_6DA9AD2: mov 0xC(%edi),%eax;");
    asm("loc_6DA9AD5: push %eax;");
    asm("loc_6DA9AD6: call _sub_6DA16B0;");
    asm("loc_6DA9ADB: mov %eax,%ecx;");
    asm("loc_6DA9ADD: mov 4(%ecx),%edx;");
    asm("loc_6DA9AE0: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DA9AE3: mov 0x14(%ecx),%eax;");
    asm("loc_6DA9AE6: add $4,%esp;");
    asm("loc_6DA9AE9: inc %edx;");
    asm("loc_6DA9AEA: mov %edx,4(%ecx);");
    asm("loc_6DA9AED: mov %edx,%edi;");
    asm("loc_6DA9AEF: mov (%esi),%edx;");
    asm("loc_6DA9AF1: add $2,%edx;");
    asm("loc_6DA9AF4: add %edx,%ebp;");
    asm("loc_6DA9AF6: mov %ebp,0x1C(%ecx);");
    asm("loc_6DA9AF9: mov (%esi),%esi;");
    asm("loc_6DA9AFB: add $2,%eax;");
    asm("loc_6DA9AFE: cmp %eax,%esi;");
    asm("loc_6DA9B00: jbe loc_6DA9B08;");
    asm("loc_6DA9B02: add $2,%esi;");
    asm("loc_6DA9B05: mov %esi,0x14(%ecx);");
    asm("loc_6DA9B08: mov 0x1C(%ecx),%eax;");
    asm("loc_6DA9B0B: xor %edx,%edx;");
    asm("loc_6DA9B0D: div %edi;");
    asm("loc_6DA9B0F: mov %eax,0xC(%ecx);");
    asm("loc_6DA9B12: xor %eax,%eax;");
    asm("loc_6DA9B14: pop %edi;");
    asm("loc_6DA9B15: pop %esi;");
    asm("loc_6DA9B16: pop %ebp;");
    asm("loc_6DA9B17: pop %ebx;");
    asm("loc_6DA9B18: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA9B20() // _sub_6DA9B20
{
    __DEBUG_ASM(6DA9B20);
    // chunk 0x6DA9B20 _sub_6DA9B20
    asm("loc_6DA9B20: mov _data_6DB62F8,%eax;");
    asm("loc_6DA9B25: mov %eax,_data_6DBC180;");
    asm("loc_6DA9B2A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA9B30() // _sub_6DA9B30
{
    __DEBUG_ASM(6DA9B30);
    // chunk 0x6DA9B30 _sub_6DA9B30
    asm("loc_6DA9B30: mov _data_6DB62F8,%eax;");
    asm("loc_6DA9B35: mov %eax,_data_6DBC184;");
    asm("loc_6DA9B3A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA9B40() // _sub_6DA9B40
{
    __DEBUG_ASM(6DA9B40);
    // chunk 0x6DA9B40 _sub_6DA9B40
    asm("loc_6DA9B40: mov _data_6DB62FC,%eax;");
    asm("loc_6DA9B45: mov %eax,_data_6DBC17C;");
    asm("loc_6DA9B4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA9B50() // _sub_6DA9B50
{
    __DEBUG_ASM(6DA9B50);
    // chunk 0x6DA9B50 _sub_6DA9B50
    asm("loc_6DA9B50: mov 8(%esp),%eax;");
    asm("loc_6DA9B54: sub $0x10,%esp;");
    asm("loc_6DA9B57: push %ebx;");
    asm("loc_6DA9B58: push %ebp;");
    asm("loc_6DA9B59: push %esi;");
    asm("loc_6DA9B5A: push %edi;");
    asm("loc_6DA9B5B: mov %ecx,%edi;");
    asm("loc_6DA9B5D: mov 0x24(%esp),%ecx;");
    asm("loc_6DA9B61: lea 0x10(%edi),%esi;");
    asm("loc_6DA9B64: mov %eax,4(%esi);");
    asm("loc_6DA9B67: mov (%ecx),%edx;");
    asm("loc_6DA9B69: mov %edx,8(%esi);");
    asm("loc_6DA9B6C: movl $0,(%esi);");
    asm("loc_6DA9B72: movl $0,0xC(%esi);");
    asm("loc_6DA9B79: mov 0x14(%edi),%eax;");
    asm("loc_6DA9B7C: push %esi;");
    asm("loc_6DA9B7D: push %eax;");
    asm("loc_6DA9B7E: lea 0x18(%edi),%ebx;");
    asm("loc_6DA9B81: push %ebx;");
    asm("loc_6DA9B82: mov %edi,%ecx;");
    asm("loc_6DA9B84: call _sub_6DA1380;");
    asm("loc_6DA9B89: test %eax,%eax;");
    asm("loc_6DA9B8B: mov %eax,0x1C(%edi);");
    asm("loc_6DA9B8E: je loc_6DA9B9F;");
    asm("loc_6DA9B90: pop %edi;");
    asm("loc_6DA9B91: pop %esi;");
    asm("loc_6DA9B92: pop %ebp;");
    asm("loc_6DA9B93: mov $0x16,%eax;");
    asm("loc_6DA9B98: pop %ebx;");
    asm("loc_6DA9B99: add $0x10,%esp;");
    asm("loc_6DA9B9C: ret $0xC;");
    asm("loc_6DA9B9F: mov (%esi),%edx;");
    asm("loc_6DA9BA1: mov 4(%esi),%ecx;");
    asm("loc_6DA9BA4: add $4,%edx;");
    asm("loc_6DA9BA7: mov %edx,%eax;");
    asm("loc_6DA9BA9: cmp %ecx,%eax;");
    asm("loc_6DA9BAB: mov %edx,(%esi);");
    asm("loc_6DA9BAD: mov $0x16,%eax;");
    asm("loc_6DA9BB2: jbe loc_6DA9BB7;");
    asm("loc_6DA9BB4: mov %eax,0xC(%esi);");
    asm("loc_6DA9BB7: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA9BBA: test %ecx,%ecx;");
    asm("loc_6DA9BBC: jne loc_6DA9E28;");
    asm("loc_6DA9BC2: mov (%ebx),%ecx;");
    asm("loc_6DA9BC4: mov 0x20(%edi),%edx;");
    asm("loc_6DA9BC7: mov %edx,(%ecx);");
    asm("loc_6DA9BC9: add $4,%ecx;");
    asm("loc_6DA9BCC: mov %ecx,(%ebx);");
    asm("loc_6DA9BCE: mov (%esi),%ebp;");
    asm("loc_6DA9BD0: mov 4(%esi),%edx;");
    asm("loc_6DA9BD3: add $4,%ebp;");
    asm("loc_6DA9BD6: mov %ebp,%ecx;");
    asm("loc_6DA9BD8: cmp %edx,%ecx;");
    asm("loc_6DA9BDA: mov %ebp,(%esi);");
    asm("loc_6DA9BDC: jbe loc_6DA9BE1;");
    asm("loc_6DA9BDE: mov %eax,0xC(%esi);");
    asm("loc_6DA9BE1: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA9BE4: test %ecx,%ecx;");
    asm("loc_6DA9BE6: jne loc_6DA9E28;");
    asm("loc_6DA9BEC: mov (%ebx),%ecx;");
    asm("loc_6DA9BEE: mov 0x24(%edi),%edx;");
    asm("loc_6DA9BF1: mov %edx,(%ecx);");
    asm("loc_6DA9BF3: add $4,%ecx;");
    asm("loc_6DA9BF6: mov %ecx,(%ebx);");
    asm("loc_6DA9BF8: mov (%esi),%ebp;");
    asm("loc_6DA9BFA: mov 4(%esi),%edx;");
    asm("loc_6DA9BFD: add $4,%ebp;");
    asm("loc_6DA9C00: mov %ebp,%ecx;");
    asm("loc_6DA9C02: cmp %edx,%ecx;");
    asm("loc_6DA9C04: mov %ebp,(%esi);");
    asm("loc_6DA9C06: jbe loc_6DA9C0B;");
    asm("loc_6DA9C08: mov %eax,0xC(%esi);");
    asm("loc_6DA9C0B: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA9C0E: test %ecx,%ecx;");
    asm("loc_6DA9C10: jne loc_6DA9E28;");
    asm("loc_6DA9C16: mov (%ebx),%ecx;");
    asm("loc_6DA9C18: mov 0x28(%edi),%edx;");
    asm("loc_6DA9C1B: mov %edx,(%ecx);");
    asm("loc_6DA9C1D: add $4,%ecx;");
    asm("loc_6DA9C20: mov %ecx,(%ebx);");
    asm("loc_6DA9C22: mov (%esi),%ebp;");
    asm("loc_6DA9C24: mov 4(%esi),%edx;");
    asm("loc_6DA9C27: add $4,%ebp;");
    asm("loc_6DA9C2A: mov %ebp,%ecx;");
    asm("loc_6DA9C2C: cmp %edx,%ecx;");
    asm("loc_6DA9C2E: mov %ebp,(%esi);");
    asm("loc_6DA9C30: jbe loc_6DA9C35;");
    asm("loc_6DA9C32: mov %eax,0xC(%esi);");
    asm("loc_6DA9C35: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA9C38: test %ecx,%ecx;");
    asm("loc_6DA9C3A: jne loc_6DA9E28;");
    asm("loc_6DA9C40: mov (%ebx),%ecx;");
    asm("loc_6DA9C42: mov 0x2C(%edi),%edx;");
    asm("loc_6DA9C45: mov %edx,(%ecx);");
    asm("loc_6DA9C47: add $4,%ecx;");
    asm("loc_6DA9C4A: mov %ecx,(%ebx);");
    asm("loc_6DA9C4C: mov (%esi),%ebp;");
    asm("loc_6DA9C4E: mov 4(%esi),%edx;");
    asm("loc_6DA9C51: add $2,%ebp;");
    asm("loc_6DA9C54: mov %ebp,%ecx;");
    asm("loc_6DA9C56: cmp %edx,%ecx;");
    asm("loc_6DA9C58: mov %ebp,(%esi);");
    asm("loc_6DA9C5A: jbe loc_6DA9C5F;");
    asm("loc_6DA9C5C: mov %eax,0xC(%esi);");
    asm("loc_6DA9C5F: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA9C62: test %ecx,%ecx;");
    asm("loc_6DA9C64: jne loc_6DA9E28;");
    asm("loc_6DA9C6A: mov (%ebx),%ecx;");
    asm("loc_6DA9C6C: mov 0x30(%edi),%dx;");
    asm("loc_6DA9C70: mov %dx,(%ecx);");
    asm("loc_6DA9C73: add $2,%ecx;");
    asm("loc_6DA9C76: mov %ecx,(%ebx);");
    asm("loc_6DA9C78: mov (%esi),%ebp;");
    asm("loc_6DA9C7A: mov 4(%esi),%edx;");
    asm("loc_6DA9C7D: add $0x10,%ebp;");
    asm("loc_6DA9C80: mov %ebp,%ecx;");
    asm("loc_6DA9C82: cmp %edx,%ecx;");
    asm("loc_6DA9C84: mov %ebp,(%esi);");
    asm("loc_6DA9C86: jbe loc_6DA9C8B;");
    asm("loc_6DA9C88: mov %eax,0xC(%esi);");
    asm("loc_6DA9C8B: mov 0x1C(%edi),%ecx;");
    asm("loc_6DA9C8E: test %ecx,%ecx;");
    asm("loc_6DA9C90: jne loc_6DA9E28;");
    asm("loc_6DA9C96: mov (%ebx),%ebp;");
    asm("loc_6DA9C98: lea 0x34(%edi),%eax;");
    asm("loc_6DA9C9B: mov (%eax),%ecx;");
    asm("loc_6DA9C9D: mov 4(%eax),%edx;");
    asm("loc_6DA9CA0: mov %ecx,0x10(%esp);");
    asm("loc_6DA9CA4: mov 8(%eax),%ecx;");
    asm("loc_6DA9CA7: mov %edx,0x14(%esp);");
    asm("loc_6DA9CAB: mov 0xC(%eax),%edx;");
    asm("loc_6DA9CAE: lea 0x10(%esp),%eax;");
    asm("loc_6DA9CB2: mov %ecx,0x18(%esp);");
    asm("loc_6DA9CB6: push %eax;");
    asm("loc_6DA9CB7: mov %ebp,%ecx;");
    asm("loc_6DA9CB9: mov %edx,0x20(%esp);");
    asm("loc_6DA9CBD: call _sub_6D8F4F0;");
    asm("loc_6DA9CC2: add $0x10,%ebp;");
    asm("loc_6DA9CC5: mov %ebp,(%ebx);");
    asm("loc_6DA9CC7: mov (%esi),%edx;");
    asm("loc_6DA9CC9: mov 4(%esi),%ecx;");
    asm("loc_6DA9CCC: add $0xC,%edx;");
    asm("loc_6DA9CCF: mov %edx,%eax;");
    asm("loc_6DA9CD1: cmp %ecx,%eax;");
    asm("loc_6DA9CD3: mov %edx,(%esi);");
    asm("loc_6DA9CD5: jbe loc_6DA9CDE;");
    asm("loc_6DA9CD7: movl $0x16,0xC(%esi);");
    asm("loc_6DA9CDE: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9CE1: test %eax,%eax;");
    asm("loc_6DA9CE3: je loc_6DA9CF4;");
    asm("loc_6DA9CE5: pop %edi;");
    asm("loc_6DA9CE6: pop %esi;");
    asm("loc_6DA9CE7: pop %ebp;");
    asm("loc_6DA9CE8: mov $0x16,%eax;");
    asm("loc_6DA9CED: pop %ebx;");
    asm("loc_6DA9CEE: add $0x10,%esp;");
    asm("loc_6DA9CF1: ret $0xC;");
    asm("loc_6DA9CF4: mov 0x44(%edi),%ecx;");
    asm("loc_6DA9CF7: mov (%ebx),%ebp;");
    asm("loc_6DA9CF9: mov 0x48(%edi),%edx;");
    asm("loc_6DA9CFC: mov 0x4C(%edi),%eax;");
    asm("loc_6DA9CFF: mov %ecx,0x10(%esp);");
    asm("loc_6DA9D03: lea 0x10(%esp),%ecx;");
    asm("loc_6DA9D07: push %ecx;");
    asm("loc_6DA9D08: mov %ebp,%ecx;");
    asm("loc_6DA9D0A: mov %edx,0x18(%esp);");
    asm("loc_6DA9D0E: mov %eax,0x1C(%esp);");
    asm("loc_6DA9D12: call _sub_6D8F510;");
    asm("loc_6DA9D17: add $0xC,%ebp;");
    asm("loc_6DA9D1A: mov %ebp,(%ebx);");
    asm("loc_6DA9D1C: mov (%esi),%edx;");
    asm("loc_6DA9D1E: mov 4(%esi),%ecx;");
    asm("loc_6DA9D21: add $0xC,%edx;");
    asm("loc_6DA9D24: mov %edx,%eax;");
    asm("loc_6DA9D26: cmp %ecx,%eax;");
    asm("loc_6DA9D28: mov %edx,(%esi);");
    asm("loc_6DA9D2A: jbe loc_6DA9D33;");
    asm("loc_6DA9D2C: movl $0x16,0xC(%esi);");
    asm("loc_6DA9D33: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9D36: test %eax,%eax;");
    asm("loc_6DA9D38: je loc_6DA9D49;");
    asm("loc_6DA9D3A: pop %edi;");
    asm("loc_6DA9D3B: pop %esi;");
    asm("loc_6DA9D3C: pop %ebp;");
    asm("loc_6DA9D3D: mov $0x16,%eax;");
    asm("loc_6DA9D42: pop %ebx;");
    asm("loc_6DA9D43: add $0x10,%esp;");
    asm("loc_6DA9D46: ret $0xC;");
    asm("loc_6DA9D49: mov 0x50(%edi),%edx;");
    asm("loc_6DA9D4C: mov 0x58(%edi),%ecx;");
    asm("loc_6DA9D4F: mov (%ebx),%ebp;");
    asm("loc_6DA9D51: mov 0x54(%edi),%eax;");
    asm("loc_6DA9D54: mov %edx,0x10(%esp);");
    asm("loc_6DA9D58: lea 0x10(%esp),%edx;");
    asm("loc_6DA9D5C: mov %ecx,0x18(%esp);");
    asm("loc_6DA9D60: push %edx;");
    asm("loc_6DA9D61: mov %ebp,%ecx;");
    asm("loc_6DA9D63: mov %eax,0x18(%esp);");
    asm("loc_6DA9D67: call _sub_6D8F510;");
    asm("loc_6DA9D6C: add $0xC,%ebp;");
    asm("loc_6DA9D6F: mov %ebp,(%ebx);");
    asm("loc_6DA9D71: mov (%esi),%edx;");
    asm("loc_6DA9D73: mov 4(%esi),%ecx;");
    asm("loc_6DA9D76: add $0xC,%edx;");
    asm("loc_6DA9D79: mov %edx,%eax;");
    asm("loc_6DA9D7B: cmp %ecx,%eax;");
    asm("loc_6DA9D7D: mov %edx,(%esi);");
    asm("loc_6DA9D7F: jbe loc_6DA9D88;");
    asm("loc_6DA9D81: movl $0x16,0xC(%esi);");
    asm("loc_6DA9D88: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9D8B: test %eax,%eax;");
    asm("loc_6DA9D8D: je loc_6DA9D9E;");
    asm("loc_6DA9D8F: pop %edi;");
    asm("loc_6DA9D90: pop %esi;");
    asm("loc_6DA9D91: pop %ebp;");
    asm("loc_6DA9D92: mov $0x16,%eax;");
    asm("loc_6DA9D97: pop %ebx;");
    asm("loc_6DA9D98: add $0x10,%esp;");
    asm("loc_6DA9D9B: ret $0xC;");
    asm("loc_6DA9D9E: mov 0x5C(%edi),%eax;");
    asm("loc_6DA9DA1: mov 0x60(%edi),%ecx;");
    asm("loc_6DA9DA4: mov (%ebx),%ebp;");
    asm("loc_6DA9DA6: mov 0x64(%edi),%edx;");
    asm("loc_6DA9DA9: mov %eax,0x10(%esp);");
    asm("loc_6DA9DAD: lea 0x10(%esp),%eax;");
    asm("loc_6DA9DB1: mov %ecx,0x14(%esp);");
    asm("loc_6DA9DB5: push %eax;");
    asm("loc_6DA9DB6: mov %ebp,%ecx;");
    asm("loc_6DA9DB8: mov %edx,0x1C(%esp);");
    asm("loc_6DA9DBC: call _sub_6D8F510;");
    asm("loc_6DA9DC1: mov 0x14(%edi),%ecx;");
    asm("loc_6DA9DC4: push %esi;");
    asm("loc_6DA9DC5: push %ecx;");
    asm("loc_6DA9DC6: add $0xC,%ebp;");
    asm("loc_6DA9DC9: push %ebx;");
    asm("loc_6DA9DCA: mov %edi,%ecx;");
    asm("loc_6DA9DCC: mov %ebp,(%ebx);");
    asm("loc_6DA9DCE: call _sub_6DA13C0;");
    asm("loc_6DA9DD3: test %eax,%eax;");
    asm("loc_6DA9DD5: mov %eax,0x1C(%edi);");
    asm("loc_6DA9DD8: je loc_6DA9DE9;");
    asm("loc_6DA9DDA: pop %edi;");
    asm("loc_6DA9DDB: pop %esi;");
    asm("loc_6DA9DDC: pop %ebp;");
    asm("loc_6DA9DDD: mov $0x16,%eax;");
    asm("loc_6DA9DE2: pop %ebx;");
    asm("loc_6DA9DE3: add $0x10,%esp;");
    asm("loc_6DA9DE6: ret $0xC;");
    asm("loc_6DA9DE9: mov (%esi),%edx;");
    asm("loc_6DA9DEB: mov 0x2C(%esp),%eax;");
    asm("loc_6DA9DEF: mov %edx,(%eax);");
    asm("loc_6DA9DF1: mov 0xC(%edi),%ecx;");
    asm("loc_6DA9DF4: push %ecx;");
    asm("loc_6DA9DF5: call _sub_6DA16B0;");
    asm("loc_6DA9DFA: mov %eax,%ecx;");
    asm("loc_6DA9DFC: mov (%ecx),%ebp;");
    asm("loc_6DA9DFE: mov 0x18(%ecx),%ebx;");
    asm("loc_6DA9E01: mov 0x10(%ecx),%eax;");
    asm("loc_6DA9E04: add $4,%esp;");
    asm("loc_6DA9E07: inc %ebp;");
    asm("loc_6DA9E08: mov %ebp,(%ecx);");
    asm("loc_6DA9E0A: mov (%esi),%edx;");
    asm("loc_6DA9E0C: add %edx,%ebx;");
    asm("loc_6DA9E0E: mov %ebx,0x18(%ecx);");
    asm("loc_6DA9E11: mov (%esi),%esi;");
    asm("loc_6DA9E13: cmp %eax,%esi;");
    asm("loc_6DA9E15: mov %ebp,%edi;");
    asm("loc_6DA9E17: jbe loc_6DA9E1C;");
    asm("loc_6DA9E19: mov %esi,0x10(%ecx);");
    asm("loc_6DA9E1C: mov 0x18(%ecx),%eax;");
    asm("loc_6DA9E1F: xor %edx,%edx;");
    asm("loc_6DA9E21: div %edi;");
    asm("loc_6DA9E23: mov %eax,8(%ecx);");
    asm("loc_6DA9E26: xor %eax,%eax;");
    asm("loc_6DA9E28: pop %edi;");
    asm("loc_6DA9E29: pop %esi;");
    asm("loc_6DA9E2A: pop %ebp;");
    asm("loc_6DA9E2B: pop %ebx;");
    asm("loc_6DA9E2C: add $0x10,%esp;");
    asm("loc_6DA9E2F: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DA9E40() // _sub_6DA9E40
{
    __DEBUG_ASM(6DA9E40);
    // chunk 0x6DA9E40 _sub_6DA9E40
    asm("loc_6DA9E40: mov 8(%esp),%eax;");
    asm("loc_6DA9E44: push %ebx;");
    asm("loc_6DA9E45: push %ebp;");
    asm("loc_6DA9E46: push %esi;");
    asm("loc_6DA9E47: push %edi;");
    asm("loc_6DA9E48: mov %ecx,%edi;");
    asm("loc_6DA9E4A: mov 0x14(%esp),%ecx;");
    asm("loc_6DA9E4E: lea 0x10(%edi),%esi;");
    asm("loc_6DA9E51: push %esi;");
    asm("loc_6DA9E52: push %eax;");
    asm("loc_6DA9E53: mov %ecx,8(%esi);");
    asm("loc_6DA9E56: lea 0x18(%edi),%ebx;");
    asm("loc_6DA9E59: push %ebx;");
    asm("loc_6DA9E5A: mov %edi,%ecx;");
    asm("loc_6DA9E5C: mov %eax,4(%esi);");
    asm("loc_6DA9E5F: movl $0,(%esi);");
    asm("loc_6DA9E65: movl $0,0xC(%esi);");
    asm("loc_6DA9E6C: call _sub_6DA13C0;");
    asm("loc_6DA9E71: test %eax,%eax;");
    asm("loc_6DA9E73: mov %eax,0x1C(%edi);");
    asm("loc_6DA9E76: je loc_6DA9E84;");
    asm("loc_6DA9E78: pop %edi;");
    asm("loc_6DA9E79: pop %esi;");
    asm("loc_6DA9E7A: pop %ebp;");
    asm("loc_6DA9E7B: mov $0x17,%eax;");
    asm("loc_6DA9E80: pop %ebx;");
    asm("loc_6DA9E81: ret $0xC;");
    asm("loc_6DA9E84: mov (%esi),%edx;");
    asm("loc_6DA9E86: mov 4(%esi),%ecx;");
    asm("loc_6DA9E89: add $4,%edx;");
    asm("loc_6DA9E8C: mov %edx,%eax;");
    asm("loc_6DA9E8E: cmp %ecx,%eax;");
    asm("loc_6DA9E90: mov %edx,(%esi);");
    asm("loc_6DA9E92: mov $0x17,%ecx;");
    asm("loc_6DA9E97: jbe loc_6DA9E9C;");
    asm("loc_6DA9E99: mov %ecx,0xC(%esi);");
    asm("loc_6DA9E9C: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9E9F: test %eax,%eax;");
    asm("loc_6DA9EA1: jne loc_6DAA088;");
    asm("loc_6DA9EA7: mov (%ebx),%eax;");
    asm("loc_6DA9EA9: mov (%eax),%edx;");
    asm("loc_6DA9EAB: add $4,%eax;");
    asm("loc_6DA9EAE: mov %eax,(%ebx);");
    asm("loc_6DA9EB0: mov %edx,0x20(%edi);");
    asm("loc_6DA9EB3: mov (%esi),%ebp;");
    asm("loc_6DA9EB5: mov 4(%esi),%edx;");
    asm("loc_6DA9EB8: add $4,%ebp;");
    asm("loc_6DA9EBB: mov %ebp,%eax;");
    asm("loc_6DA9EBD: cmp %edx,%eax;");
    asm("loc_6DA9EBF: mov %ebp,(%esi);");
    asm("loc_6DA9EC1: jbe loc_6DA9EC6;");
    asm("loc_6DA9EC3: mov %ecx,0xC(%esi);");
    asm("loc_6DA9EC6: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9EC9: test %eax,%eax;");
    asm("loc_6DA9ECB: jne loc_6DAA088;");
    asm("loc_6DA9ED1: mov (%ebx),%eax;");
    asm("loc_6DA9ED3: mov (%eax),%edx;");
    asm("loc_6DA9ED5: add $4,%eax;");
    asm("loc_6DA9ED8: mov %eax,(%ebx);");
    asm("loc_6DA9EDA: mov %edx,0x24(%edi);");
    asm("loc_6DA9EDD: mov (%esi),%ebp;");
    asm("loc_6DA9EDF: mov 4(%esi),%edx;");
    asm("loc_6DA9EE2: add $4,%ebp;");
    asm("loc_6DA9EE5: mov %ebp,%eax;");
    asm("loc_6DA9EE7: cmp %edx,%eax;");
    asm("loc_6DA9EE9: mov %ebp,(%esi);");
    asm("loc_6DA9EEB: jbe loc_6DA9EF0;");
    asm("loc_6DA9EED: mov %ecx,0xC(%esi);");
    asm("loc_6DA9EF0: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9EF3: test %eax,%eax;");
    asm("loc_6DA9EF5: jne loc_6DAA088;");
    asm("loc_6DA9EFB: mov (%ebx),%eax;");
    asm("loc_6DA9EFD: mov (%eax),%edx;");
    asm("loc_6DA9EFF: add $4,%eax;");
    asm("loc_6DA9F02: mov %eax,(%ebx);");
    asm("loc_6DA9F04: mov %edx,0x28(%edi);");
    asm("loc_6DA9F07: mov (%esi),%ebp;");
    asm("loc_6DA9F09: mov 4(%esi),%edx;");
    asm("loc_6DA9F0C: add $4,%ebp;");
    asm("loc_6DA9F0F: mov %ebp,%eax;");
    asm("loc_6DA9F11: cmp %edx,%eax;");
    asm("loc_6DA9F13: mov %ebp,(%esi);");
    asm("loc_6DA9F15: jbe loc_6DA9F1A;");
    asm("loc_6DA9F17: mov %ecx,0xC(%esi);");
    asm("loc_6DA9F1A: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9F1D: test %eax,%eax;");
    asm("loc_6DA9F1F: jne loc_6DAA088;");
    asm("loc_6DA9F25: mov (%ebx),%eax;");
    asm("loc_6DA9F27: mov (%eax),%edx;");
    asm("loc_6DA9F29: add $4,%eax;");
    asm("loc_6DA9F2C: mov %eax,(%ebx);");
    asm("loc_6DA9F2E: mov %edx,0x2C(%edi);");
    asm("loc_6DA9F31: mov (%esi),%ebp;");
    asm("loc_6DA9F33: mov 4(%esi),%edx;");
    asm("loc_6DA9F36: add $2,%ebp;");
    asm("loc_6DA9F39: mov %ebp,%eax;");
    asm("loc_6DA9F3B: cmp %edx,%eax;");
    asm("loc_6DA9F3D: mov %ebp,(%esi);");
    asm("loc_6DA9F3F: jbe loc_6DA9F44;");
    asm("loc_6DA9F41: mov %ecx,0xC(%esi);");
    asm("loc_6DA9F44: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9F47: test %eax,%eax;");
    asm("loc_6DA9F49: jne loc_6DAA088;");
    asm("loc_6DA9F4F: mov (%ebx),%eax;");
    asm("loc_6DA9F51: mov (%eax),%dx;");
    asm("loc_6DA9F54: add $2,%eax;");
    asm("loc_6DA9F57: mov %eax,(%ebx);");
    asm("loc_6DA9F59: mov %dx,0x30(%edi);");
    asm("loc_6DA9F5D: mov (%esi),%ebp;");
    asm("loc_6DA9F5F: mov 4(%esi),%edx;");
    asm("loc_6DA9F62: add $0x10,%ebp;");
    asm("loc_6DA9F65: mov %ebp,%eax;");
    asm("loc_6DA9F67: cmp %edx,%eax;");
    asm("loc_6DA9F69: mov %ebp,(%esi);");
    asm("loc_6DA9F6B: jbe loc_6DA9F70;");
    asm("loc_6DA9F6D: mov %ecx,0xC(%esi);");
    asm("loc_6DA9F70: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9F73: test %eax,%eax;");
    asm("loc_6DA9F75: jne loc_6DAA088;");
    asm("loc_6DA9F7B: mov (%ebx),%ebp;");
    asm("loc_6DA9F7D: push %ebp;");
    asm("loc_6DA9F7E: lea 0x34(%edi),%ecx;");
    asm("loc_6DA9F81: call _sub_6D8F4F0;");
    asm("loc_6DA9F86: add $0x10,%ebp;");
    asm("loc_6DA9F89: mov %ebp,(%ebx);");
    asm("loc_6DA9F8B: mov (%esi),%edx;");
    asm("loc_6DA9F8D: mov 4(%esi),%ecx;");
    asm("loc_6DA9F90: add $0xC,%edx;");
    asm("loc_6DA9F93: mov %edx,%eax;");
    asm("loc_6DA9F95: cmp %ecx,%eax;");
    asm("loc_6DA9F97: mov %edx,(%esi);");
    asm("loc_6DA9F99: jbe loc_6DA9FA2;");
    asm("loc_6DA9F9B: movl $0x17,0xC(%esi);");
    asm("loc_6DA9FA2: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9FA5: test %eax,%eax;");
    asm("loc_6DA9FA7: jne loc_6DAA088;");
    asm("loc_6DA9FAD: mov (%ebx),%ebp;");
    asm("loc_6DA9FAF: push %ebp;");
    asm("loc_6DA9FB0: lea 0x44(%edi),%ecx;");
    asm("loc_6DA9FB3: call _sub_6D8F510;");
    asm("loc_6DA9FB8: add $0xC,%ebp;");
    asm("loc_6DA9FBB: mov %ebp,(%ebx);");
    asm("loc_6DA9FBD: mov (%esi),%edx;");
    asm("loc_6DA9FBF: mov 4(%esi),%ecx;");
    asm("loc_6DA9FC2: add $0xC,%edx;");
    asm("loc_6DA9FC5: mov %edx,%eax;");
    asm("loc_6DA9FC7: cmp %ecx,%eax;");
    asm("loc_6DA9FC9: mov %edx,(%esi);");
    asm("loc_6DA9FCB: jbe loc_6DA9FD4;");
    asm("loc_6DA9FCD: movl $0x17,0xC(%esi);");
    asm("loc_6DA9FD4: mov 0x1C(%edi),%eax;");
    asm("loc_6DA9FD7: test %eax,%eax;");
    asm("loc_6DA9FD9: jne loc_6DAA088;");
    asm("loc_6DA9FDF: mov (%ebx),%ebp;");
    asm("loc_6DA9FE1: push %ebp;");
    asm("loc_6DA9FE2: lea 0x50(%edi),%ecx;");
    asm("loc_6DA9FE5: call _sub_6D8F510;");
    asm("loc_6DA9FEA: add $0xC,%ebp;");
    asm("loc_6DA9FED: mov %ebp,(%ebx);");
    asm("loc_6DA9FEF: mov (%esi),%edx;");
    asm("loc_6DA9FF1: mov 4(%esi),%ecx;");
    asm("loc_6DA9FF4: add $0xC,%edx;");
    asm("loc_6DA9FF7: mov %edx,%eax;");
    asm("loc_6DA9FF9: cmp %ecx,%eax;");
    asm("loc_6DA9FFB: mov %edx,(%esi);");
    asm("loc_6DA9FFD: jbe loc_6DAA006;");
    asm("loc_6DA9FFF: movl $0x17,0xC(%esi);");
    asm("loc_6DAA006: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA009: test %eax,%eax;");
    asm("loc_6DAA00B: jne loc_6DAA088;");
    asm("loc_6DAA00D: mov (%ebx),%ebp;");
    asm("loc_6DAA00F: push %ebp;");
    asm("loc_6DAA010: lea 0x5C(%edi),%ecx;");
    asm("loc_6DAA013: call _sub_6D8F510;");
    asm("loc_6DAA018: mov 0x18(%esp),%eax;");
    asm("loc_6DAA01C: push %esi;");
    asm("loc_6DAA01D: push %eax;");
    asm("loc_6DAA01E: add $0xC,%ebp;");
    asm("loc_6DAA021: push %ebx;");
    asm("loc_6DAA022: mov %edi,%ecx;");
    asm("loc_6DAA024: mov %ebp,(%ebx);");
    asm("loc_6DAA026: call _sub_6DA13C0;");
    asm("loc_6DAA02B: test %eax,%eax;");
    asm("loc_6DAA02D: mov %eax,0x1C(%edi);");
    asm("loc_6DAA030: je loc_6DAA03E;");
    asm("loc_6DAA032: pop %edi;");
    asm("loc_6DAA033: pop %esi;");
    asm("loc_6DAA034: pop %ebp;");
    asm("loc_6DAA035: mov $0x17,%eax;");
    asm("loc_6DAA03A: pop %ebx;");
    asm("loc_6DAA03B: ret $0xC;");
    asm("loc_6DAA03E: mov (%esi),%ecx;");
    asm("loc_6DAA040: mov 0x1C(%esp),%edx;");
    asm("loc_6DAA044: mov %ecx,(%edx);");
    asm("loc_6DAA046: mov 0xC(%edi),%eax;");
    asm("loc_6DAA049: push %eax;");
    asm("loc_6DAA04A: call _sub_6DA16B0;");
    asm("loc_6DAA04F: mov %eax,%ecx;");
    asm("loc_6DAA051: mov 4(%ecx),%edx;");
    asm("loc_6DAA054: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAA057: mov 0x14(%ecx),%eax;");
    asm("loc_6DAA05A: add $4,%esp;");
    asm("loc_6DAA05D: inc %edx;");
    asm("loc_6DAA05E: mov %edx,4(%ecx);");
    asm("loc_6DAA061: mov %edx,%edi;");
    asm("loc_6DAA063: mov (%esi),%edx;");
    asm("loc_6DAA065: add $2,%edx;");
    asm("loc_6DAA068: add %edx,%ebp;");
    asm("loc_6DAA06A: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAA06D: mov (%esi),%esi;");
    asm("loc_6DAA06F: add $2,%eax;");
    asm("loc_6DAA072: cmp %eax,%esi;");
    asm("loc_6DAA074: jbe loc_6DAA07C;");
    asm("loc_6DAA076: add $2,%esi;");
    asm("loc_6DAA079: mov %esi,0x14(%ecx);");
    asm("loc_6DAA07C: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAA07F: xor %edx,%edx;");
    asm("loc_6DAA081: div %edi;");
    asm("loc_6DAA083: mov %eax,0xC(%ecx);");
    asm("loc_6DAA086: xor %eax,%eax;");
    asm("loc_6DAA088: pop %edi;");
    asm("loc_6DAA089: pop %esi;");
    asm("loc_6DAA08A: pop %ebp;");
    asm("loc_6DAA08B: pop %ebx;");
    asm("loc_6DAA08C: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA090() // _sub_6DAA090
{
    __DEBUG_ASM(6DAA090);
    // chunk 0x6DAA090 _sub_6DAA090
    asm("loc_6DAA090: mov _data_6DB6308,%eax;");
    asm("loc_6DAA095: mov %eax,_data_6DBC190;");
    asm("loc_6DAA09A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA0A0() // _sub_6DAA0A0
{
    __DEBUG_ASM(6DAA0A0);
    // chunk 0x6DAA0A0 _sub_6DAA0A0
    asm("loc_6DAA0A0: mov _data_6DB6308,%eax;");
    asm("loc_6DAA0A5: mov %eax,_data_6DBC194;");
    asm("loc_6DAA0AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA0B0() // _sub_6DAA0B0
{
    __DEBUG_ASM(6DAA0B0);
    // chunk 0x6DAA0B0 _sub_6DAA0B0
    asm("loc_6DAA0B0: mov _data_6DB630C,%eax;");
    asm("loc_6DAA0B5: mov %eax,_data_6DBC18C;");
    asm("loc_6DAA0BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA0C0() // _sub_6DAA0C0
{
    __DEBUG_ASM(6DAA0C0);
    // chunk 0x6DAA0C0 _sub_6DAA0C0
    asm("loc_6DAA0C0: mov 8(%esp),%eax;");
    asm("loc_6DAA0C4: push %ebx;");
    asm("loc_6DAA0C5: push %esi;");
    asm("loc_6DAA0C6: push %edi;");
    asm("loc_6DAA0C7: mov %ecx,%edi;");
    asm("loc_6DAA0C9: mov 0x10(%esp),%ecx;");
    asm("loc_6DAA0CD: lea 0x10(%edi),%esi;");
    asm("loc_6DAA0D0: mov %eax,4(%esi);");
    asm("loc_6DAA0D3: mov (%ecx),%edx;");
    asm("loc_6DAA0D5: mov %edx,8(%esi);");
    asm("loc_6DAA0D8: movl $0,(%esi);");
    asm("loc_6DAA0DE: movl $0,0xC(%esi);");
    asm("loc_6DAA0E5: mov 0x14(%edi),%eax;");
    asm("loc_6DAA0E8: push %esi;");
    asm("loc_6DAA0E9: push %eax;");
    asm("loc_6DAA0EA: lea 0x18(%edi),%ebx;");
    asm("loc_6DAA0ED: push %ebx;");
    asm("loc_6DAA0EE: mov %edi,%ecx;");
    asm("loc_6DAA0F0: call _sub_6DA1380;");
    asm("loc_6DAA0F5: test %eax,%eax;");
    asm("loc_6DAA0F7: mov %eax,0x1C(%edi);");
    asm("loc_6DAA0FA: je loc_6DAA107;");
    asm("loc_6DAA0FC: pop %edi;");
    asm("loc_6DAA0FD: pop %esi;");
    asm("loc_6DAA0FE: mov $0x16,%eax;");
    asm("loc_6DAA103: pop %ebx;");
    asm("loc_6DAA104: ret $0xC;");
    asm("loc_6DAA107: mov (%esi),%edx;");
    asm("loc_6DAA109: mov 4(%esi),%ecx;");
    asm("loc_6DAA10C: add $4,%edx;");
    asm("loc_6DAA10F: mov %edx,%eax;");
    asm("loc_6DAA111: cmp %ecx,%eax;");
    asm("loc_6DAA113: mov %edx,(%esi);");
    asm("loc_6DAA115: jbe loc_6DAA11E;");
    asm("loc_6DAA117: movl $0x16,0xC(%esi);");
    asm("loc_6DAA11E: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA121: test %eax,%eax;");
    asm("loc_6DAA123: je loc_6DAA130;");
    asm("loc_6DAA125: pop %edi;");
    asm("loc_6DAA126: pop %esi;");
    asm("loc_6DAA127: mov $0x16,%eax;");
    asm("loc_6DAA12C: pop %ebx;");
    asm("loc_6DAA12D: ret $0xC;");
    asm("loc_6DAA130: mov (%ebx),%eax;");
    asm("loc_6DAA132: mov 0x20(%edi),%ecx;");
    asm("loc_6DAA135: mov %ecx,(%eax);");
    asm("loc_6DAA137: add $4,%eax;");
    asm("loc_6DAA13A: mov %eax,(%ebx);");
    asm("loc_6DAA13C: mov (%esi),%edx;");
    asm("loc_6DAA13E: mov 4(%esi),%ecx;");
    asm("loc_6DAA141: add $4,%edx;");
    asm("loc_6DAA144: mov %edx,%eax;");
    asm("loc_6DAA146: cmp %ecx,%eax;");
    asm("loc_6DAA148: mov %edx,(%esi);");
    asm("loc_6DAA14A: jbe loc_6DAA153;");
    asm("loc_6DAA14C: movl $0x16,0xC(%esi);");
    asm("loc_6DAA153: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA156: test %eax,%eax;");
    asm("loc_6DAA158: je loc_6DAA165;");
    asm("loc_6DAA15A: pop %edi;");
    asm("loc_6DAA15B: pop %esi;");
    asm("loc_6DAA15C: mov $0x16,%eax;");
    asm("loc_6DAA161: pop %ebx;");
    asm("loc_6DAA162: ret $0xC;");
    asm("loc_6DAA165: mov (%ebx),%eax;");
    asm("loc_6DAA167: flds 0x24(%edi);");
    asm("loc_6DAA16A: fstps (%eax);");
    asm("loc_6DAA16C: mov 0x14(%edi),%edx;");
    asm("loc_6DAA16F: push %esi;");
    asm("loc_6DAA170: push %edx;");
    asm("loc_6DAA171: add $4,%eax;");
    asm("loc_6DAA174: push %ebx;");
    asm("loc_6DAA175: mov %edi,%ecx;");
    asm("loc_6DAA177: mov %eax,(%ebx);");
    asm("loc_6DAA179: call _sub_6DA13C0;");
    asm("loc_6DAA17E: test %eax,%eax;");
    asm("loc_6DAA180: mov %eax,0x1C(%edi);");
    asm("loc_6DAA183: je loc_6DAA190;");
    asm("loc_6DAA185: pop %edi;");
    asm("loc_6DAA186: pop %esi;");
    asm("loc_6DAA187: mov $0x16,%eax;");
    asm("loc_6DAA18C: pop %ebx;");
    asm("loc_6DAA18D: ret $0xC;");
    asm("loc_6DAA190: mov (%esi),%eax;");
    asm("loc_6DAA192: mov 0x18(%esp),%ecx;");
    asm("loc_6DAA196: mov %eax,(%ecx);");
    asm("loc_6DAA198: mov 0xC(%edi),%edx;");
    asm("loc_6DAA19B: push %edx;");
    asm("loc_6DAA19C: call _sub_6DA16B0;");
    asm("loc_6DAA1A1: mov %eax,%ecx;");
    asm("loc_6DAA1A3: mov (%ecx),%edi;");
    asm("loc_6DAA1A5: mov 0x18(%ecx),%edx;");
    asm("loc_6DAA1A8: add $4,%esp;");
    asm("loc_6DAA1AB: inc %edi;");
    asm("loc_6DAA1AC: mov %edi,(%ecx);");
    asm("loc_6DAA1AE: mov (%esi),%eax;");
    asm("loc_6DAA1B0: add %eax,%edx;");
    asm("loc_6DAA1B2: mov 0x10(%ecx),%eax;");
    asm("loc_6DAA1B5: mov %edx,0x18(%ecx);");
    asm("loc_6DAA1B8: mov (%esi),%esi;");
    asm("loc_6DAA1BA: cmp %eax,%esi;");
    asm("loc_6DAA1BC: jbe loc_6DAA1C1;");
    asm("loc_6DAA1BE: mov %esi,0x10(%ecx);");
    asm("loc_6DAA1C1: mov 0x18(%ecx),%eax;");
    asm("loc_6DAA1C4: xor %edx,%edx;");
    asm("loc_6DAA1C6: div %edi;");
    asm("loc_6DAA1C8: pop %edi;");
    asm("loc_6DAA1C9: pop %esi;");
    asm("loc_6DAA1CA: pop %ebx;");
    asm("loc_6DAA1CB: mov %eax,8(%ecx);");
    asm("loc_6DAA1CE: xor %eax,%eax;");
    asm("loc_6DAA1D0: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA1E0() // _sub_6DAA1E0
{
    __DEBUG_ASM(6DAA1E0);
    // chunk 0x6DAA1E0 _sub_6DAA1E0
    asm("loc_6DAA1E0: mov _data_6DB6318,%eax;");
    asm("loc_6DAA1E5: mov %eax,_data_6DBC1A0;");
    asm("loc_6DAA1EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA1F0() // _sub_6DAA1F0
{
    __DEBUG_ASM(6DAA1F0);
    // chunk 0x6DAA1F0 _sub_6DAA1F0
    asm("loc_6DAA1F0: mov _data_6DB6318,%eax;");
    asm("loc_6DAA1F5: mov %eax,_data_6DBC1A4;");
    asm("loc_6DAA1FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA200() // _sub_6DAA200
{
    __DEBUG_ASM(6DAA200);
    // chunk 0x6DAA200 _sub_6DAA200
    asm("loc_6DAA200: mov _data_6DB631C,%eax;");
    asm("loc_6DAA205: mov %eax,_data_6DBC19C;");
    asm("loc_6DAA20A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA210() // _sub_6DAA210
{
    __DEBUG_ASM(6DAA210);
    // chunk 0x6DAA210 _sub_6DAA210
    asm("loc_6DAA210: mov _data_6DB6328,%eax;");
    asm("loc_6DAA215: mov %eax,_data_6DBC1B0;");
    asm("loc_6DAA21A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA220() // _sub_6DAA220
{
    __DEBUG_ASM(6DAA220);
    // chunk 0x6DAA220 _sub_6DAA220
    asm("loc_6DAA220: mov _data_6DB6328,%eax;");
    asm("loc_6DAA225: mov %eax,_data_6DBC1B4;");
    asm("loc_6DAA22A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA230() // _sub_6DAA230
{
    __DEBUG_ASM(6DAA230);
    // chunk 0x6DAA230 _sub_6DAA230
    asm("loc_6DAA230: mov _data_6DB632C,%eax;");
    asm("loc_6DAA235: mov %eax,_data_6DBC1AC;");
    asm("loc_6DAA23A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA240() // _sub_6DAA240
{
    __DEBUG_ASM(6DAA240);
    // chunk 0x6DAA240 _sub_6DAA240
    asm("loc_6DAA240: mov 8(%esp),%eax;");
    asm("loc_6DAA244: push %ebx;");
    asm("loc_6DAA245: push %ebp;");
    asm("loc_6DAA246: push %esi;");
    asm("loc_6DAA247: push %edi;");
    asm("loc_6DAA248: mov %ecx,%edi;");
    asm("loc_6DAA24A: mov 0x14(%esp),%ecx;");
    asm("loc_6DAA24E: lea 0x10(%edi),%esi;");
    asm("loc_6DAA251: mov %eax,4(%esi);");
    asm("loc_6DAA254: mov (%ecx),%edx;");
    asm("loc_6DAA256: mov %edx,8(%esi);");
    asm("loc_6DAA259: movl $0,(%esi);");
    asm("loc_6DAA25F: movl $0,0xC(%esi);");
    asm("loc_6DAA266: mov 0x14(%edi),%eax;");
    asm("loc_6DAA269: push %esi;");
    asm("loc_6DAA26A: push %eax;");
    asm("loc_6DAA26B: lea 0x18(%edi),%ebx;");
    asm("loc_6DAA26E: push %ebx;");
    asm("loc_6DAA26F: mov %edi,%ecx;");
    asm("loc_6DAA271: call _sub_6DA1380;");
    asm("loc_6DAA276: test %eax,%eax;");
    asm("loc_6DAA278: mov %eax,0x1C(%edi);");
    asm("loc_6DAA27B: je loc_6DAA289;");
    asm("loc_6DAA27D: pop %edi;");
    asm("loc_6DAA27E: pop %esi;");
    asm("loc_6DAA27F: pop %ebp;");
    asm("loc_6DAA280: mov $0x16,%eax;");
    asm("loc_6DAA285: pop %ebx;");
    asm("loc_6DAA286: ret $0xC;");
    asm("loc_6DAA289: mov (%esi),%edx;");
    asm("loc_6DAA28B: mov 4(%esi),%ecx;");
    asm("loc_6DAA28E: inc %edx;");
    asm("loc_6DAA28F: mov %edx,%eax;");
    asm("loc_6DAA291: cmp %ecx,%eax;");
    asm("loc_6DAA293: mov %edx,(%esi);");
    asm("loc_6DAA295: mov $0x16,%ebp;");
    asm("loc_6DAA29A: jbe loc_6DAA29F;");
    asm("loc_6DAA29C: mov %ebp,0xC(%esi);");
    asm("loc_6DAA29F: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA2A2: test %eax,%eax;");
    asm("loc_6DAA2A4: je loc_6DAA2AF;");
    asm("loc_6DAA2A6: pop %edi;");
    asm("loc_6DAA2A7: pop %esi;");
    asm("loc_6DAA2A8: mov %ebp,%eax;");
    asm("loc_6DAA2AA: pop %ebp;");
    asm("loc_6DAA2AB: pop %ebx;");
    asm("loc_6DAA2AC: ret $0xC;");
    asm("loc_6DAA2AF: mov (%ebx),%eax;");
    asm("loc_6DAA2B1: mov 0x20(%edi),%cl;");
    asm("loc_6DAA2B4: mov %cl,(%eax);");
    asm("loc_6DAA2B6: inc %eax;");
    asm("loc_6DAA2B7: mov %eax,(%ebx);");
    asm("loc_6DAA2B9: mov (%esi),%edx;");
    asm("loc_6DAA2BB: mov 4(%esi),%ecx;");
    asm("loc_6DAA2BE: add $4,%edx;");
    asm("loc_6DAA2C1: mov %edx,%eax;");
    asm("loc_6DAA2C3: cmp %ecx,%eax;");
    asm("loc_6DAA2C5: mov %edx,(%esi);");
    asm("loc_6DAA2C7: jbe loc_6DAA2CC;");
    asm("loc_6DAA2C9: mov %ebp,0xC(%esi);");
    asm("loc_6DAA2CC: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA2CF: test %eax,%eax;");
    asm("loc_6DAA2D1: je loc_6DAA2DC;");
    asm("loc_6DAA2D3: pop %edi;");
    asm("loc_6DAA2D4: pop %esi;");
    asm("loc_6DAA2D5: mov %ebp,%eax;");
    asm("loc_6DAA2D7: pop %ebp;");
    asm("loc_6DAA2D8: pop %ebx;");
    asm("loc_6DAA2D9: ret $0xC;");
    asm("loc_6DAA2DC: mov (%ebx),%eax;");
    asm("loc_6DAA2DE: mov 0x24(%edi),%edx;");
    asm("loc_6DAA2E1: mov %edx,(%eax);");
    asm("loc_6DAA2E3: add $4,%eax;");
    asm("loc_6DAA2E6: mov %eax,(%ebx);");
    asm("loc_6DAA2E8: mov (%esi),%edx;");
    asm("loc_6DAA2EA: mov 4(%esi),%ecx;");
    asm("loc_6DAA2ED: add $4,%edx;");
    asm("loc_6DAA2F0: mov %edx,%eax;");
    asm("loc_6DAA2F2: cmp %ecx,%eax;");
    asm("loc_6DAA2F4: mov %edx,(%esi);");
    asm("loc_6DAA2F6: jbe loc_6DAA2FB;");
    asm("loc_6DAA2F8: mov %ebp,0xC(%esi);");
    asm("loc_6DAA2FB: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA2FE: test %eax,%eax;");
    asm("loc_6DAA300: je loc_6DAA30B;");
    asm("loc_6DAA302: pop %edi;");
    asm("loc_6DAA303: pop %esi;");
    asm("loc_6DAA304: mov %ebp,%eax;");
    asm("loc_6DAA306: pop %ebp;");
    asm("loc_6DAA307: pop %ebx;");
    asm("loc_6DAA308: ret $0xC;");
    asm("loc_6DAA30B: mov (%ebx),%eax;");
    asm("loc_6DAA30D: mov 0x28(%edi),%ecx;");
    asm("loc_6DAA310: mov %ecx,(%eax);");
    asm("loc_6DAA312: add $4,%eax;");
    asm("loc_6DAA315: mov %eax,(%ebx);");
    asm("loc_6DAA317: mov (%esi),%edx;");
    asm("loc_6DAA319: mov 4(%esi),%ecx;");
    asm("loc_6DAA31C: add $4,%edx;");
    asm("loc_6DAA31F: mov %edx,%eax;");
    asm("loc_6DAA321: cmp %ecx,%eax;");
    asm("loc_6DAA323: mov %edx,(%esi);");
    asm("loc_6DAA325: jbe loc_6DAA32A;");
    asm("loc_6DAA327: mov %ebp,0xC(%esi);");
    asm("loc_6DAA32A: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA32D: test %eax,%eax;");
    asm("loc_6DAA32F: je loc_6DAA33A;");
    asm("loc_6DAA331: pop %edi;");
    asm("loc_6DAA332: pop %esi;");
    asm("loc_6DAA333: mov %ebp,%eax;");
    asm("loc_6DAA335: pop %ebp;");
    asm("loc_6DAA336: pop %ebx;");
    asm("loc_6DAA337: ret $0xC;");
    asm("loc_6DAA33A: mov (%ebx),%eax;");
    asm("loc_6DAA33C: mov 0x2C(%edi),%edx;");
    asm("loc_6DAA33F: mov %edx,(%eax);");
    asm("loc_6DAA341: add $4,%eax;");
    asm("loc_6DAA344: mov %eax,(%ebx);");
    asm("loc_6DAA346: mov (%esi),%edx;");
    asm("loc_6DAA348: mov 4(%esi),%ecx;");
    asm("loc_6DAA34B: inc %edx;");
    asm("loc_6DAA34C: mov %edx,%eax;");
    asm("loc_6DAA34E: cmp %ecx,%eax;");
    asm("loc_6DAA350: mov %edx,(%esi);");
    asm("loc_6DAA352: jbe loc_6DAA357;");
    asm("loc_6DAA354: mov %ebp,0xC(%esi);");
    asm("loc_6DAA357: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA35A: test %eax,%eax;");
    asm("loc_6DAA35C: je loc_6DAA367;");
    asm("loc_6DAA35E: pop %edi;");
    asm("loc_6DAA35F: pop %esi;");
    asm("loc_6DAA360: mov %ebp,%eax;");
    asm("loc_6DAA362: pop %ebp;");
    asm("loc_6DAA363: pop %ebx;");
    asm("loc_6DAA364: ret $0xC;");
    asm("loc_6DAA367: mov (%ebx),%eax;");
    asm("loc_6DAA369: mov 0x30(%edi),%cl;");
    asm("loc_6DAA36C: mov %cl,(%eax);");
    asm("loc_6DAA36E: mov 0x14(%edi),%edx;");
    asm("loc_6DAA371: push %esi;");
    asm("loc_6DAA372: push %edx;");
    asm("loc_6DAA373: inc %eax;");
    asm("loc_6DAA374: push %ebx;");
    asm("loc_6DAA375: mov %edi,%ecx;");
    asm("loc_6DAA377: mov %eax,(%ebx);");
    asm("loc_6DAA379: call _sub_6DA13C0;");
    asm("loc_6DAA37E: test %eax,%eax;");
    asm("loc_6DAA380: mov %eax,0x1C(%edi);");
    asm("loc_6DAA383: je loc_6DAA38E;");
    asm("loc_6DAA385: pop %edi;");
    asm("loc_6DAA386: pop %esi;");
    asm("loc_6DAA387: mov %ebp,%eax;");
    asm("loc_6DAA389: pop %ebp;");
    asm("loc_6DAA38A: pop %ebx;");
    asm("loc_6DAA38B: ret $0xC;");
    asm("loc_6DAA38E: mov (%esi),%eax;");
    asm("loc_6DAA390: mov 0x1C(%esp),%ecx;");
    asm("loc_6DAA394: mov %eax,(%ecx);");
    asm("loc_6DAA396: mov 0xC(%edi),%edx;");
    asm("loc_6DAA399: push %edx;");
    asm("loc_6DAA39A: call _sub_6DA16B0;");
    asm("loc_6DAA39F: mov %eax,%ecx;");
    asm("loc_6DAA3A1: mov (%ecx),%edi;");
    asm("loc_6DAA3A3: mov 0x18(%ecx),%edx;");
    asm("loc_6DAA3A6: add $4,%esp;");
    asm("loc_6DAA3A9: inc %edi;");
    asm("loc_6DAA3AA: mov %edi,(%ecx);");
    asm("loc_6DAA3AC: mov (%esi),%eax;");
    asm("loc_6DAA3AE: add %eax,%edx;");
    asm("loc_6DAA3B0: mov 0x10(%ecx),%eax;");
    asm("loc_6DAA3B3: mov %edx,0x18(%ecx);");
    asm("loc_6DAA3B6: mov (%esi),%esi;");
    asm("loc_6DAA3B8: cmp %eax,%esi;");
    asm("loc_6DAA3BA: jbe loc_6DAA3BF;");
    asm("loc_6DAA3BC: mov %esi,0x10(%ecx);");
    asm("loc_6DAA3BF: mov 0x18(%ecx),%eax;");
    asm("loc_6DAA3C2: xor %edx,%edx;");
    asm("loc_6DAA3C4: div %edi;");
    asm("loc_6DAA3C6: pop %edi;");
    asm("loc_6DAA3C7: pop %esi;");
    asm("loc_6DAA3C8: pop %ebp;");
    asm("loc_6DAA3C9: pop %ebx;");
    asm("loc_6DAA3CA: mov %eax,8(%ecx);");
    asm("loc_6DAA3CD: xor %eax,%eax;");
    asm("loc_6DAA3CF: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA3E0() // _sub_6DAA3E0
{
    __DEBUG_ASM(6DAA3E0);
    // chunk 0x6DAA3E0 _sub_6DAA3E0
    asm("loc_6DAA3E0: mov 4(%esp),%eax;");
    asm("loc_6DAA3E4: push %ebx;");
    asm("loc_6DAA3E5: push %ebp;");
    asm("loc_6DAA3E6: mov 0x10(%esp),%ebp;");
    asm("loc_6DAA3EA: push %esi;");
    asm("loc_6DAA3EB: push %edi;");
    asm("loc_6DAA3EC: mov %ecx,%edi;");
    asm("loc_6DAA3EE: lea 0x10(%edi),%esi;");
    asm("loc_6DAA3F1: push %esi;");
    asm("loc_6DAA3F2: push %ebp;");
    asm("loc_6DAA3F3: lea 0x18(%edi),%ebx;");
    asm("loc_6DAA3F6: push %ebx;");
    asm("loc_6DAA3F7: mov %ebp,4(%esi);");
    asm("loc_6DAA3FA: mov %eax,8(%esi);");
    asm("loc_6DAA3FD: movl $0,(%esi);");
    asm("loc_6DAA403: movl $0,0xC(%esi);");
    asm("loc_6DAA40A: call _sub_6DA13C0;");
    asm("loc_6DAA40F: test %eax,%eax;");
    asm("loc_6DAA411: mov %eax,0x1C(%edi);");
    asm("loc_6DAA414: je loc_6DAA422;");
    asm("loc_6DAA416: pop %edi;");
    asm("loc_6DAA417: pop %esi;");
    asm("loc_6DAA418: pop %ebp;");
    asm("loc_6DAA419: mov $0x17,%eax;");
    asm("loc_6DAA41E: pop %ebx;");
    asm("loc_6DAA41F: ret $0xC;");
    asm("loc_6DAA422: mov (%esi),%edx;");
    asm("loc_6DAA424: mov 4(%esi),%ecx;");
    asm("loc_6DAA427: inc %edx;");
    asm("loc_6DAA428: mov %edx,%eax;");
    asm("loc_6DAA42A: cmp %ecx,%eax;");
    asm("loc_6DAA42C: mov %edx,(%esi);");
    asm("loc_6DAA42E: mov $0x17,%ecx;");
    asm("loc_6DAA433: jbe loc_6DAA438;");
    asm("loc_6DAA435: mov %ecx,0xC(%esi);");
    asm("loc_6DAA438: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA43B: test %eax,%eax;");
    asm("loc_6DAA43D: jne loc_6DAA54C;");
    asm("loc_6DAA443: mov (%ebx),%eax;");
    asm("loc_6DAA445: mov (%eax),%dl;");
    asm("loc_6DAA447: inc %eax;");
    asm("loc_6DAA448: mov %eax,(%ebx);");
    asm("loc_6DAA44A: mov %dl,0x20(%edi);");
    asm("loc_6DAA44D: mov (%esi),%eax;");
    asm("loc_6DAA44F: mov 4(%esi),%edx;");
    asm("loc_6DAA452: add $4,%eax;");
    asm("loc_6DAA455: cmp %edx,%eax;");
    asm("loc_6DAA457: mov %eax,(%esi);");
    asm("loc_6DAA459: jbe loc_6DAA45E;");
    asm("loc_6DAA45B: mov %ecx,0xC(%esi);");
    asm("loc_6DAA45E: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA461: test %eax,%eax;");
    asm("loc_6DAA463: jne loc_6DAA54C;");
    asm("loc_6DAA469: mov (%ebx),%eax;");
    asm("loc_6DAA46B: mov (%eax),%edx;");
    asm("loc_6DAA46D: add $4,%eax;");
    asm("loc_6DAA470: mov %eax,(%ebx);");
    asm("loc_6DAA472: mov %edx,0x24(%edi);");
    asm("loc_6DAA475: mov (%esi),%eax;");
    asm("loc_6DAA477: mov 4(%esi),%edx;");
    asm("loc_6DAA47A: add $4,%eax;");
    asm("loc_6DAA47D: cmp %edx,%eax;");
    asm("loc_6DAA47F: mov %eax,(%esi);");
    asm("loc_6DAA481: jbe loc_6DAA486;");
    asm("loc_6DAA483: mov %ecx,0xC(%esi);");
    asm("loc_6DAA486: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA489: test %eax,%eax;");
    asm("loc_6DAA48B: jne loc_6DAA54C;");
    asm("loc_6DAA491: mov (%ebx),%eax;");
    asm("loc_6DAA493: mov (%eax),%edx;");
    asm("loc_6DAA495: add $4,%eax;");
    asm("loc_6DAA498: mov %eax,(%ebx);");
    asm("loc_6DAA49A: mov %edx,0x28(%edi);");
    asm("loc_6DAA49D: mov (%esi),%eax;");
    asm("loc_6DAA49F: mov 4(%esi),%edx;");
    asm("loc_6DAA4A2: add $4,%eax;");
    asm("loc_6DAA4A5: cmp %edx,%eax;");
    asm("loc_6DAA4A7: mov %eax,(%esi);");
    asm("loc_6DAA4A9: jbe loc_6DAA4AE;");
    asm("loc_6DAA4AB: mov %ecx,0xC(%esi);");
    asm("loc_6DAA4AE: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA4B1: test %eax,%eax;");
    asm("loc_6DAA4B3: jne loc_6DAA54C;");
    asm("loc_6DAA4B9: mov (%ebx),%eax;");
    asm("loc_6DAA4BB: mov (%eax),%edx;");
    asm("loc_6DAA4BD: add $4,%eax;");
    asm("loc_6DAA4C0: mov %eax,(%ebx);");
    asm("loc_6DAA4C2: mov %edx,0x2C(%edi);");
    asm("loc_6DAA4C5: mov (%esi),%eax;");
    asm("loc_6DAA4C7: mov 4(%esi),%edx;");
    asm("loc_6DAA4CA: inc %eax;");
    asm("loc_6DAA4CB: cmp %edx,%eax;");
    asm("loc_6DAA4CD: mov %eax,(%esi);");
    asm("loc_6DAA4CF: jbe loc_6DAA4D4;");
    asm("loc_6DAA4D1: mov %ecx,0xC(%esi);");
    asm("loc_6DAA4D4: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA4D7: test %eax,%eax;");
    asm("loc_6DAA4D9: jne loc_6DAA54C;");
    asm("loc_6DAA4DB: mov (%ebx),%eax;");
    asm("loc_6DAA4DD: mov (%eax),%cl;");
    asm("loc_6DAA4DF: push %esi;");
    asm("loc_6DAA4E0: push %ebp;");
    asm("loc_6DAA4E1: mov %cl,0x30(%edi);");
    asm("loc_6DAA4E4: inc %eax;");
    asm("loc_6DAA4E5: push %ebx;");
    asm("loc_6DAA4E6: mov %edi,%ecx;");
    asm("loc_6DAA4E8: mov %eax,(%ebx);");
    asm("loc_6DAA4EA: call _sub_6DA13C0;");
    asm("loc_6DAA4EF: test %eax,%eax;");
    asm("loc_6DAA4F1: mov %eax,0x1C(%edi);");
    asm("loc_6DAA4F4: je loc_6DAA502;");
    asm("loc_6DAA4F6: pop %edi;");
    asm("loc_6DAA4F7: pop %esi;");
    asm("loc_6DAA4F8: pop %ebp;");
    asm("loc_6DAA4F9: mov $0x17,%eax;");
    asm("loc_6DAA4FE: pop %ebx;");
    asm("loc_6DAA4FF: ret $0xC;");
    asm("loc_6DAA502: mov (%esi),%edx;");
    asm("loc_6DAA504: mov 0x1C(%esp),%eax;");
    asm("loc_6DAA508: mov %edx,(%eax);");
    asm("loc_6DAA50A: mov 0xC(%edi),%ecx;");
    asm("loc_6DAA50D: push %ecx;");
    asm("loc_6DAA50E: call _sub_6DA16B0;");
    asm("loc_6DAA513: mov %eax,%ecx;");
    asm("loc_6DAA515: mov 4(%ecx),%edx;");
    asm("loc_6DAA518: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAA51B: mov 0x14(%ecx),%eax;");
    asm("loc_6DAA51E: add $4,%esp;");
    asm("loc_6DAA521: inc %edx;");
    asm("loc_6DAA522: mov %edx,4(%ecx);");
    asm("loc_6DAA525: mov %edx,%edi;");
    asm("loc_6DAA527: mov (%esi),%edx;");
    asm("loc_6DAA529: add $2,%edx;");
    asm("loc_6DAA52C: add %edx,%ebp;");
    asm("loc_6DAA52E: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAA531: mov (%esi),%esi;");
    asm("loc_6DAA533: add $2,%eax;");
    asm("loc_6DAA536: cmp %eax,%esi;");
    asm("loc_6DAA538: jbe loc_6DAA540;");
    asm("loc_6DAA53A: add $2,%esi;");
    asm("loc_6DAA53D: mov %esi,0x14(%ecx);");
    asm("loc_6DAA540: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAA543: xor %edx,%edx;");
    asm("loc_6DAA545: div %edi;");
    asm("loc_6DAA547: mov %eax,0xC(%ecx);");
    asm("loc_6DAA54A: xor %eax,%eax;");
    asm("loc_6DAA54C: pop %edi;");
    asm("loc_6DAA54D: pop %esi;");
    asm("loc_6DAA54E: pop %ebp;");
    asm("loc_6DAA54F: pop %ebx;");
    asm("loc_6DAA550: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA560() // _sub_6DAA560
{
    __DEBUG_ASM(6DAA560);
    // chunk 0x6DAA560 _sub_6DAA560
    asm("loc_6DAA560: mov 8(%esp),%eax;");
    asm("loc_6DAA564: push %ebx;");
    asm("loc_6DAA565: push %ebp;");
    asm("loc_6DAA566: push %esi;");
    asm("loc_6DAA567: push %edi;");
    asm("loc_6DAA568: mov %ecx,%edi;");
    asm("loc_6DAA56A: mov 0x14(%esp),%ecx;");
    asm("loc_6DAA56E: lea 0x10(%edi),%esi;");
    asm("loc_6DAA571: mov %eax,4(%esi);");
    asm("loc_6DAA574: mov (%ecx),%edx;");
    asm("loc_6DAA576: mov %edx,8(%esi);");
    asm("loc_6DAA579: movl $0,(%esi);");
    asm("loc_6DAA57F: movl $0,0xC(%esi);");
    asm("loc_6DAA586: mov 0x14(%edi),%eax;");
    asm("loc_6DAA589: push %esi;");
    asm("loc_6DAA58A: push %eax;");
    asm("loc_6DAA58B: lea 0x18(%edi),%ebx;");
    asm("loc_6DAA58E: push %ebx;");
    asm("loc_6DAA58F: mov %edi,%ecx;");
    asm("loc_6DAA591: call _sub_6DA1380;");
    asm("loc_6DAA596: test %eax,%eax;");
    asm("loc_6DAA598: mov %eax,0x1C(%edi);");
    asm("loc_6DAA59B: je loc_6DAA5A9;");
    asm("loc_6DAA59D: pop %edi;");
    asm("loc_6DAA59E: pop %esi;");
    asm("loc_6DAA59F: pop %ebp;");
    asm("loc_6DAA5A0: mov $0x16,%eax;");
    asm("loc_6DAA5A5: pop %ebx;");
    asm("loc_6DAA5A6: ret $0xC;");
    asm("loc_6DAA5A9: mov (%esi),%edx;");
    asm("loc_6DAA5AB: mov 4(%esi),%ecx;");
    asm("loc_6DAA5AE: inc %edx;");
    asm("loc_6DAA5AF: mov %edx,%eax;");
    asm("loc_6DAA5B1: cmp %ecx,%eax;");
    asm("loc_6DAA5B3: mov %edx,(%esi);");
    asm("loc_6DAA5B5: mov $0x16,%ebp;");
    asm("loc_6DAA5BA: jbe loc_6DAA5BF;");
    asm("loc_6DAA5BC: mov %ebp,0xC(%esi);");
    asm("loc_6DAA5BF: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA5C2: test %eax,%eax;");
    asm("loc_6DAA5C4: je loc_6DAA5CF;");
    asm("loc_6DAA5C6: pop %edi;");
    asm("loc_6DAA5C7: pop %esi;");
    asm("loc_6DAA5C8: mov %ebp,%eax;");
    asm("loc_6DAA5CA: pop %ebp;");
    asm("loc_6DAA5CB: pop %ebx;");
    asm("loc_6DAA5CC: ret $0xC;");
    asm("loc_6DAA5CF: mov (%ebx),%eax;");
    asm("loc_6DAA5D1: mov 0x20(%edi),%cl;");
    asm("loc_6DAA5D4: mov %cl,(%eax);");
    asm("loc_6DAA5D6: inc %eax;");
    asm("loc_6DAA5D7: mov %eax,(%ebx);");
    asm("loc_6DAA5D9: mov (%esi),%edx;");
    asm("loc_6DAA5DB: mov 4(%esi),%ecx;");
    asm("loc_6DAA5DE: add $4,%edx;");
    asm("loc_6DAA5E1: mov %edx,%eax;");
    asm("loc_6DAA5E3: cmp %ecx,%eax;");
    asm("loc_6DAA5E5: mov %edx,(%esi);");
    asm("loc_6DAA5E7: jbe loc_6DAA5EC;");
    asm("loc_6DAA5E9: mov %ebp,0xC(%esi);");
    asm("loc_6DAA5EC: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA5EF: test %eax,%eax;");
    asm("loc_6DAA5F1: je loc_6DAA5FC;");
    asm("loc_6DAA5F3: pop %edi;");
    asm("loc_6DAA5F4: pop %esi;");
    asm("loc_6DAA5F5: mov %ebp,%eax;");
    asm("loc_6DAA5F7: pop %ebp;");
    asm("loc_6DAA5F8: pop %ebx;");
    asm("loc_6DAA5F9: ret $0xC;");
    asm("loc_6DAA5FC: mov (%ebx),%eax;");
    asm("loc_6DAA5FE: mov 0x24(%edi),%edx;");
    asm("loc_6DAA601: mov %edx,(%eax);");
    asm("loc_6DAA603: add $4,%eax;");
    asm("loc_6DAA606: mov %eax,(%ebx);");
    asm("loc_6DAA608: mov (%esi),%edx;");
    asm("loc_6DAA60A: mov 4(%esi),%ecx;");
    asm("loc_6DAA60D: add $4,%edx;");
    asm("loc_6DAA610: mov %edx,%eax;");
    asm("loc_6DAA612: cmp %ecx,%eax;");
    asm("loc_6DAA614: mov %edx,(%esi);");
    asm("loc_6DAA616: jbe loc_6DAA61B;");
    asm("loc_6DAA618: mov %ebp,0xC(%esi);");
    asm("loc_6DAA61B: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA61E: test %eax,%eax;");
    asm("loc_6DAA620: je loc_6DAA62B;");
    asm("loc_6DAA622: pop %edi;");
    asm("loc_6DAA623: pop %esi;");
    asm("loc_6DAA624: mov %ebp,%eax;");
    asm("loc_6DAA626: pop %ebp;");
    asm("loc_6DAA627: pop %ebx;");
    asm("loc_6DAA628: ret $0xC;");
    asm("loc_6DAA62B: mov (%ebx),%eax;");
    asm("loc_6DAA62D: mov 0x28(%edi),%ecx;");
    asm("loc_6DAA630: mov %ecx,(%eax);");
    asm("loc_6DAA632: add $4,%eax;");
    asm("loc_6DAA635: mov %eax,(%ebx);");
    asm("loc_6DAA637: mov (%esi),%edx;");
    asm("loc_6DAA639: mov 4(%esi),%ecx;");
    asm("loc_6DAA63C: inc %edx;");
    asm("loc_6DAA63D: mov %edx,%eax;");
    asm("loc_6DAA63F: cmp %ecx,%eax;");
    asm("loc_6DAA641: mov %edx,(%esi);");
    asm("loc_6DAA643: jbe loc_6DAA648;");
    asm("loc_6DAA645: mov %ebp,0xC(%esi);");
    asm("loc_6DAA648: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA64B: test %eax,%eax;");
    asm("loc_6DAA64D: je loc_6DAA658;");
    asm("loc_6DAA64F: pop %edi;");
    asm("loc_6DAA650: pop %esi;");
    asm("loc_6DAA651: mov %ebp,%eax;");
    asm("loc_6DAA653: pop %ebp;");
    asm("loc_6DAA654: pop %ebx;");
    asm("loc_6DAA655: ret $0xC;");
    asm("loc_6DAA658: mov (%ebx),%eax;");
    asm("loc_6DAA65A: mov 0x2C(%edi),%dl;");
    asm("loc_6DAA65D: mov %dl,(%eax);");
    asm("loc_6DAA65F: inc %eax;");
    asm("loc_6DAA660: mov %eax,(%ebx);");
    asm("loc_6DAA662: mov 0x14(%edi),%eax;");
    asm("loc_6DAA665: push %esi;");
    asm("loc_6DAA666: push %eax;");
    asm("loc_6DAA667: push %ebx;");
    asm("loc_6DAA668: mov %edi,%ecx;");
    asm("loc_6DAA66A: call _sub_6DA13C0;");
    asm("loc_6DAA66F: test %eax,%eax;");
    asm("loc_6DAA671: mov %eax,0x1C(%edi);");
    asm("loc_6DAA674: je loc_6DAA67F;");
    asm("loc_6DAA676: pop %edi;");
    asm("loc_6DAA677: pop %esi;");
    asm("loc_6DAA678: mov %ebp,%eax;");
    asm("loc_6DAA67A: pop %ebp;");
    asm("loc_6DAA67B: pop %ebx;");
    asm("loc_6DAA67C: ret $0xC;");
    asm("loc_6DAA67F: mov (%esi),%ecx;");
    asm("loc_6DAA681: mov 0x1C(%esp),%edx;");
    asm("loc_6DAA685: mov %ecx,(%edx);");
    asm("loc_6DAA687: mov 0xC(%edi),%eax;");
    asm("loc_6DAA68A: push %eax;");
    asm("loc_6DAA68B: call _sub_6DA16B0;");
    asm("loc_6DAA690: mov %eax,%ecx;");
    asm("loc_6DAA692: mov (%ecx),%ebp;");
    asm("loc_6DAA694: mov 0x18(%ecx),%ebx;");
    asm("loc_6DAA697: mov 0x10(%ecx),%eax;");
    asm("loc_6DAA69A: add $4,%esp;");
    asm("loc_6DAA69D: inc %ebp;");
    asm("loc_6DAA69E: mov %ebp,(%ecx);");
    asm("loc_6DAA6A0: mov (%esi),%edx;");
    asm("loc_6DAA6A2: add %edx,%ebx;");
    asm("loc_6DAA6A4: mov %ebx,0x18(%ecx);");
    asm("loc_6DAA6A7: mov (%esi),%esi;");
    asm("loc_6DAA6A9: cmp %eax,%esi;");
    asm("loc_6DAA6AB: mov %ebp,%edi;");
    asm("loc_6DAA6AD: jbe loc_6DAA6B2;");
    asm("loc_6DAA6AF: mov %esi,0x10(%ecx);");
    asm("loc_6DAA6B2: mov 0x18(%ecx),%eax;");
    asm("loc_6DAA6B5: xor %edx,%edx;");
    asm("loc_6DAA6B7: div %edi;");
    asm("loc_6DAA6B9: pop %edi;");
    asm("loc_6DAA6BA: pop %esi;");
    asm("loc_6DAA6BB: pop %ebp;");
    asm("loc_6DAA6BC: pop %ebx;");
    asm("loc_6DAA6BD: mov %eax,8(%ecx);");
    asm("loc_6DAA6C0: xor %eax,%eax;");
    asm("loc_6DAA6C2: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA6D0() // _sub_6DAA6D0
{
    __DEBUG_ASM(6DAA6D0);
    // chunk 0x6DAA6D0 _sub_6DAA6D0
    asm("loc_6DAA6D0: mov 4(%esp),%eax;");
    asm("loc_6DAA6D4: push %ebx;");
    asm("loc_6DAA6D5: push %ebp;");
    asm("loc_6DAA6D6: mov 0x10(%esp),%ebp;");
    asm("loc_6DAA6DA: push %esi;");
    asm("loc_6DAA6DB: push %edi;");
    asm("loc_6DAA6DC: mov %ecx,%edi;");
    asm("loc_6DAA6DE: lea 0x10(%edi),%esi;");
    asm("loc_6DAA6E1: push %esi;");
    asm("loc_6DAA6E2: push %ebp;");
    asm("loc_6DAA6E3: lea 0x18(%edi),%ebx;");
    asm("loc_6DAA6E6: push %ebx;");
    asm("loc_6DAA6E7: mov %ebp,4(%esi);");
    asm("loc_6DAA6EA: mov %eax,8(%esi);");
    asm("loc_6DAA6ED: movl $0,(%esi);");
    asm("loc_6DAA6F3: movl $0,0xC(%esi);");
    asm("loc_6DAA6FA: call _sub_6DA13C0;");
    asm("loc_6DAA6FF: test %eax,%eax;");
    asm("loc_6DAA701: mov %eax,0x1C(%edi);");
    asm("loc_6DAA704: je loc_6DAA712;");
    asm("loc_6DAA706: pop %edi;");
    asm("loc_6DAA707: pop %esi;");
    asm("loc_6DAA708: pop %ebp;");
    asm("loc_6DAA709: mov $0x17,%eax;");
    asm("loc_6DAA70E: pop %ebx;");
    asm("loc_6DAA70F: ret $0xC;");
    asm("loc_6DAA712: mov (%esi),%edx;");
    asm("loc_6DAA714: mov 4(%esi),%ecx;");
    asm("loc_6DAA717: inc %edx;");
    asm("loc_6DAA718: mov %edx,%eax;");
    asm("loc_6DAA71A: cmp %ecx,%eax;");
    asm("loc_6DAA71C: mov %edx,(%esi);");
    asm("loc_6DAA71E: mov $0x17,%ecx;");
    asm("loc_6DAA723: jbe loc_6DAA728;");
    asm("loc_6DAA725: mov %ecx,0xC(%esi);");
    asm("loc_6DAA728: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA72B: test %eax,%eax;");
    asm("loc_6DAA72D: jne loc_6DAA814;");
    asm("loc_6DAA733: mov (%ebx),%eax;");
    asm("loc_6DAA735: mov (%eax),%dl;");
    asm("loc_6DAA737: inc %eax;");
    asm("loc_6DAA738: mov %eax,(%ebx);");
    asm("loc_6DAA73A: mov %dl,0x20(%edi);");
    asm("loc_6DAA73D: mov (%esi),%eax;");
    asm("loc_6DAA73F: mov 4(%esi),%edx;");
    asm("loc_6DAA742: add $4,%eax;");
    asm("loc_6DAA745: cmp %edx,%eax;");
    asm("loc_6DAA747: mov %eax,(%esi);");
    asm("loc_6DAA749: jbe loc_6DAA74E;");
    asm("loc_6DAA74B: mov %ecx,0xC(%esi);");
    asm("loc_6DAA74E: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA751: test %eax,%eax;");
    asm("loc_6DAA753: jne loc_6DAA814;");
    asm("loc_6DAA759: mov (%ebx),%eax;");
    asm("loc_6DAA75B: mov (%eax),%edx;");
    asm("loc_6DAA75D: add $4,%eax;");
    asm("loc_6DAA760: mov %eax,(%ebx);");
    asm("loc_6DAA762: mov %edx,0x24(%edi);");
    asm("loc_6DAA765: mov (%esi),%eax;");
    asm("loc_6DAA767: mov 4(%esi),%edx;");
    asm("loc_6DAA76A: add $4,%eax;");
    asm("loc_6DAA76D: cmp %edx,%eax;");
    asm("loc_6DAA76F: mov %eax,(%esi);");
    asm("loc_6DAA771: jbe loc_6DAA776;");
    asm("loc_6DAA773: mov %ecx,0xC(%esi);");
    asm("loc_6DAA776: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA779: test %eax,%eax;");
    asm("loc_6DAA77B: jne loc_6DAA814;");
    asm("loc_6DAA781: mov (%ebx),%eax;");
    asm("loc_6DAA783: mov (%eax),%edx;");
    asm("loc_6DAA785: add $4,%eax;");
    asm("loc_6DAA788: mov %eax,(%ebx);");
    asm("loc_6DAA78A: mov %edx,0x28(%edi);");
    asm("loc_6DAA78D: mov (%esi),%eax;");
    asm("loc_6DAA78F: mov 4(%esi),%edx;");
    asm("loc_6DAA792: inc %eax;");
    asm("loc_6DAA793: cmp %edx,%eax;");
    asm("loc_6DAA795: mov %eax,(%esi);");
    asm("loc_6DAA797: jbe loc_6DAA79C;");
    asm("loc_6DAA799: mov %ecx,0xC(%esi);");
    asm("loc_6DAA79C: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA79F: test %eax,%eax;");
    asm("loc_6DAA7A1: jne loc_6DAA814;");
    asm("loc_6DAA7A3: mov (%ebx),%eax;");
    asm("loc_6DAA7A5: mov (%eax),%cl;");
    asm("loc_6DAA7A7: push %esi;");
    asm("loc_6DAA7A8: push %ebp;");
    asm("loc_6DAA7A9: mov %cl,0x2C(%edi);");
    asm("loc_6DAA7AC: inc %eax;");
    asm("loc_6DAA7AD: push %ebx;");
    asm("loc_6DAA7AE: mov %edi,%ecx;");
    asm("loc_6DAA7B0: mov %eax,(%ebx);");
    asm("loc_6DAA7B2: call _sub_6DA13C0;");
    asm("loc_6DAA7B7: test %eax,%eax;");
    asm("loc_6DAA7B9: mov %eax,0x1C(%edi);");
    asm("loc_6DAA7BC: je loc_6DAA7CA;");
    asm("loc_6DAA7BE: pop %edi;");
    asm("loc_6DAA7BF: pop %esi;");
    asm("loc_6DAA7C0: pop %ebp;");
    asm("loc_6DAA7C1: mov $0x17,%eax;");
    asm("loc_6DAA7C6: pop %ebx;");
    asm("loc_6DAA7C7: ret $0xC;");
    asm("loc_6DAA7CA: mov (%esi),%edx;");
    asm("loc_6DAA7CC: mov 0x1C(%esp),%eax;");
    asm("loc_6DAA7D0: mov %edx,(%eax);");
    asm("loc_6DAA7D2: mov 0xC(%edi),%ecx;");
    asm("loc_6DAA7D5: push %ecx;");
    asm("loc_6DAA7D6: call _sub_6DA16B0;");
    asm("loc_6DAA7DB: mov %eax,%ecx;");
    asm("loc_6DAA7DD: mov 4(%ecx),%edx;");
    asm("loc_6DAA7E0: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAA7E3: mov 0x14(%ecx),%eax;");
    asm("loc_6DAA7E6: add $4,%esp;");
    asm("loc_6DAA7E9: inc %edx;");
    asm("loc_6DAA7EA: mov %edx,4(%ecx);");
    asm("loc_6DAA7ED: mov %edx,%edi;");
    asm("loc_6DAA7EF: mov (%esi),%edx;");
    asm("loc_6DAA7F1: add $2,%edx;");
    asm("loc_6DAA7F4: add %edx,%ebp;");
    asm("loc_6DAA7F6: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAA7F9: mov (%esi),%esi;");
    asm("loc_6DAA7FB: add $2,%eax;");
    asm("loc_6DAA7FE: cmp %eax,%esi;");
    asm("loc_6DAA800: jbe loc_6DAA808;");
    asm("loc_6DAA802: add $2,%esi;");
    asm("loc_6DAA805: mov %esi,0x14(%ecx);");
    asm("loc_6DAA808: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAA80B: xor %edx,%edx;");
    asm("loc_6DAA80D: div %edi;");
    asm("loc_6DAA80F: mov %eax,0xC(%ecx);");
    asm("loc_6DAA812: xor %eax,%eax;");
    asm("loc_6DAA814: pop %edi;");
    asm("loc_6DAA815: pop %esi;");
    asm("loc_6DAA816: pop %ebp;");
    asm("loc_6DAA817: pop %ebx;");
    asm("loc_6DAA818: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA820() // _sub_6DAA820
{
    __DEBUG_ASM(6DAA820);
    // chunk 0x6DAA820 _sub_6DAA820
    asm("loc_6DAA820: mov 8(%esp),%eax;");
    asm("loc_6DAA824: push %ebx;");
    asm("loc_6DAA825: push %ebp;");
    asm("loc_6DAA826: push %esi;");
    asm("loc_6DAA827: push %edi;");
    asm("loc_6DAA828: mov %ecx,%edi;");
    asm("loc_6DAA82A: mov 0x14(%esp),%ecx;");
    asm("loc_6DAA82E: lea 0x10(%edi),%esi;");
    asm("loc_6DAA831: mov %eax,4(%esi);");
    asm("loc_6DAA834: mov (%ecx),%edx;");
    asm("loc_6DAA836: mov %edx,8(%esi);");
    asm("loc_6DAA839: movl $0,(%esi);");
    asm("loc_6DAA83F: movl $0,0xC(%esi);");
    asm("loc_6DAA846: mov 0x14(%edi),%eax;");
    asm("loc_6DAA849: push %esi;");
    asm("loc_6DAA84A: push %eax;");
    asm("loc_6DAA84B: lea 0x18(%edi),%ebx;");
    asm("loc_6DAA84E: push %ebx;");
    asm("loc_6DAA84F: mov %edi,%ecx;");
    asm("loc_6DAA851: call _sub_6DA1380;");
    asm("loc_6DAA856: test %eax,%eax;");
    asm("loc_6DAA858: mov %eax,0x1C(%edi);");
    asm("loc_6DAA85B: je loc_6DAA869;");
    asm("loc_6DAA85D: pop %edi;");
    asm("loc_6DAA85E: pop %esi;");
    asm("loc_6DAA85F: pop %ebp;");
    asm("loc_6DAA860: mov $0x16,%eax;");
    asm("loc_6DAA865: pop %ebx;");
    asm("loc_6DAA866: ret $0xC;");
    asm("loc_6DAA869: mov (%esi),%edx;");
    asm("loc_6DAA86B: mov 4(%esi),%ecx;");
    asm("loc_6DAA86E: add $4,%edx;");
    asm("loc_6DAA871: mov %edx,%eax;");
    asm("loc_6DAA873: cmp %ecx,%eax;");
    asm("loc_6DAA875: mov %edx,(%esi);");
    asm("loc_6DAA877: mov $0x16,%ebp;");
    asm("loc_6DAA87C: jbe loc_6DAA881;");
    asm("loc_6DAA87E: mov %ebp,0xC(%esi);");
    asm("loc_6DAA881: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA884: test %eax,%eax;");
    asm("loc_6DAA886: je loc_6DAA891;");
    asm("loc_6DAA888: pop %edi;");
    asm("loc_6DAA889: pop %esi;");
    asm("loc_6DAA88A: mov %ebp,%eax;");
    asm("loc_6DAA88C: pop %ebp;");
    asm("loc_6DAA88D: pop %ebx;");
    asm("loc_6DAA88E: ret $0xC;");
    asm("loc_6DAA891: mov (%ebx),%eax;");
    asm("loc_6DAA893: mov 0x20(%edi),%ecx;");
    asm("loc_6DAA896: mov %ecx,(%eax);");
    asm("loc_6DAA898: add $4,%eax;");
    asm("loc_6DAA89B: mov %eax,(%ebx);");
    asm("loc_6DAA89D: mov (%esi),%edx;");
    asm("loc_6DAA89F: mov 4(%esi),%ecx;");
    asm("loc_6DAA8A2: inc %edx;");
    asm("loc_6DAA8A3: mov %edx,%eax;");
    asm("loc_6DAA8A5: cmp %ecx,%eax;");
    asm("loc_6DAA8A7: mov %edx,(%esi);");
    asm("loc_6DAA8A9: jbe loc_6DAA8AE;");
    asm("loc_6DAA8AB: mov %ebp,0xC(%esi);");
    asm("loc_6DAA8AE: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA8B1: test %eax,%eax;");
    asm("loc_6DAA8B3: je loc_6DAA8BE;");
    asm("loc_6DAA8B5: pop %edi;");
    asm("loc_6DAA8B6: pop %esi;");
    asm("loc_6DAA8B7: mov %ebp,%eax;");
    asm("loc_6DAA8B9: pop %ebp;");
    asm("loc_6DAA8BA: pop %ebx;");
    asm("loc_6DAA8BB: ret $0xC;");
    asm("loc_6DAA8BE: mov (%ebx),%eax;");
    asm("loc_6DAA8C0: mov 0x24(%edi),%dl;");
    asm("loc_6DAA8C3: mov %dl,(%eax);");
    asm("loc_6DAA8C5: inc %eax;");
    asm("loc_6DAA8C6: mov %eax,(%ebx);");
    asm("loc_6DAA8C8: mov (%esi),%edx;");
    asm("loc_6DAA8CA: mov 4(%esi),%ecx;");
    asm("loc_6DAA8CD: inc %edx;");
    asm("loc_6DAA8CE: mov %edx,%eax;");
    asm("loc_6DAA8D0: cmp %ecx,%eax;");
    asm("loc_6DAA8D2: mov %edx,(%esi);");
    asm("loc_6DAA8D4: jbe loc_6DAA8D9;");
    asm("loc_6DAA8D6: mov %ebp,0xC(%esi);");
    asm("loc_6DAA8D9: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA8DC: test %eax,%eax;");
    asm("loc_6DAA8DE: je loc_6DAA8E9;");
    asm("loc_6DAA8E0: pop %edi;");
    asm("loc_6DAA8E1: pop %esi;");
    asm("loc_6DAA8E2: mov %ebp,%eax;");
    asm("loc_6DAA8E4: pop %ebp;");
    asm("loc_6DAA8E5: pop %ebx;");
    asm("loc_6DAA8E6: ret $0xC;");
    asm("loc_6DAA8E9: mov (%ebx),%eax;");
    asm("loc_6DAA8EB: mov 0x25(%edi),%cl;");
    asm("loc_6DAA8EE: mov %cl,(%eax);");
    asm("loc_6DAA8F0: inc %eax;");
    asm("loc_6DAA8F1: mov %eax,(%ebx);");
    asm("loc_6DAA8F3: mov (%esi),%edx;");
    asm("loc_6DAA8F5: mov 4(%esi),%ecx;");
    asm("loc_6DAA8F8: inc %edx;");
    asm("loc_6DAA8F9: mov %edx,%eax;");
    asm("loc_6DAA8FB: cmp %ecx,%eax;");
    asm("loc_6DAA8FD: mov %edx,(%esi);");
    asm("loc_6DAA8FF: jbe loc_6DAA904;");
    asm("loc_6DAA901: mov %ebp,0xC(%esi);");
    asm("loc_6DAA904: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA907: test %eax,%eax;");
    asm("loc_6DAA909: je loc_6DAA914;");
    asm("loc_6DAA90B: pop %edi;");
    asm("loc_6DAA90C: pop %esi;");
    asm("loc_6DAA90D: mov %ebp,%eax;");
    asm("loc_6DAA90F: pop %ebp;");
    asm("loc_6DAA910: pop %ebx;");
    asm("loc_6DAA911: ret $0xC;");
    asm("loc_6DAA914: mov (%ebx),%eax;");
    asm("loc_6DAA916: mov 0x26(%edi),%dl;");
    asm("loc_6DAA919: mov %dl,(%eax);");
    asm("loc_6DAA91B: inc %eax;");
    asm("loc_6DAA91C: mov %eax,(%ebx);");
    asm("loc_6DAA91E: mov 0x14(%edi),%eax;");
    asm("loc_6DAA921: push %esi;");
    asm("loc_6DAA922: push %eax;");
    asm("loc_6DAA923: push %ebx;");
    asm("loc_6DAA924: mov %edi,%ecx;");
    asm("loc_6DAA926: call _sub_6DA13C0;");
    asm("loc_6DAA92B: test %eax,%eax;");
    asm("loc_6DAA92D: mov %eax,0x1C(%edi);");
    asm("loc_6DAA930: je loc_6DAA93B;");
    asm("loc_6DAA932: pop %edi;");
    asm("loc_6DAA933: pop %esi;");
    asm("loc_6DAA934: mov %ebp,%eax;");
    asm("loc_6DAA936: pop %ebp;");
    asm("loc_6DAA937: pop %ebx;");
    asm("loc_6DAA938: ret $0xC;");
    asm("loc_6DAA93B: mov (%esi),%ecx;");
    asm("loc_6DAA93D: mov 0x1C(%esp),%edx;");
    asm("loc_6DAA941: mov %ecx,(%edx);");
    asm("loc_6DAA943: mov 0xC(%edi),%eax;");
    asm("loc_6DAA946: push %eax;");
    asm("loc_6DAA947: call _sub_6DA16B0;");
    asm("loc_6DAA94C: mov %eax,%ecx;");
    asm("loc_6DAA94E: mov (%ecx),%ebp;");
    asm("loc_6DAA950: mov 0x18(%ecx),%ebx;");
    asm("loc_6DAA953: mov 0x10(%ecx),%eax;");
    asm("loc_6DAA956: add $4,%esp;");
    asm("loc_6DAA959: inc %ebp;");
    asm("loc_6DAA95A: mov %ebp,(%ecx);");
    asm("loc_6DAA95C: mov (%esi),%edx;");
    asm("loc_6DAA95E: add %edx,%ebx;");
    asm("loc_6DAA960: mov %ebx,0x18(%ecx);");
    asm("loc_6DAA963: mov (%esi),%esi;");
    asm("loc_6DAA965: cmp %eax,%esi;");
    asm("loc_6DAA967: mov %ebp,%edi;");
    asm("loc_6DAA969: jbe loc_6DAA96E;");
    asm("loc_6DAA96B: mov %esi,0x10(%ecx);");
    asm("loc_6DAA96E: mov 0x18(%ecx),%eax;");
    asm("loc_6DAA971: xor %edx,%edx;");
    asm("loc_6DAA973: div %edi;");
    asm("loc_6DAA975: pop %edi;");
    asm("loc_6DAA976: pop %esi;");
    asm("loc_6DAA977: pop %ebp;");
    asm("loc_6DAA978: pop %ebx;");
    asm("loc_6DAA979: mov %eax,8(%ecx);");
    asm("loc_6DAA97C: xor %eax,%eax;");
    asm("loc_6DAA97E: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAA990() // _sub_6DAA990
{
    __DEBUG_ASM(6DAA990);
    // chunk 0x6DAA990 _sub_6DAA990
    asm("loc_6DAA990: mov 4(%esp),%eax;");
    asm("loc_6DAA994: push %ebx;");
    asm("loc_6DAA995: push %ebp;");
    asm("loc_6DAA996: mov 0x10(%esp),%ebp;");
    asm("loc_6DAA99A: push %esi;");
    asm("loc_6DAA99B: push %edi;");
    asm("loc_6DAA99C: mov %ecx,%edi;");
    asm("loc_6DAA99E: lea 0x10(%edi),%esi;");
    asm("loc_6DAA9A1: push %esi;");
    asm("loc_6DAA9A2: push %ebp;");
    asm("loc_6DAA9A3: lea 0x18(%edi),%ebx;");
    asm("loc_6DAA9A6: push %ebx;");
    asm("loc_6DAA9A7: mov %ebp,4(%esi);");
    asm("loc_6DAA9AA: mov %eax,8(%esi);");
    asm("loc_6DAA9AD: movl $0,(%esi);");
    asm("loc_6DAA9B3: movl $0,0xC(%esi);");
    asm("loc_6DAA9BA: call _sub_6DA13C0;");
    asm("loc_6DAA9BF: test %eax,%eax;");
    asm("loc_6DAA9C1: mov %eax,0x1C(%edi);");
    asm("loc_6DAA9C4: je loc_6DAA9D2;");
    asm("loc_6DAA9C6: pop %edi;");
    asm("loc_6DAA9C7: pop %esi;");
    asm("loc_6DAA9C8: pop %ebp;");
    asm("loc_6DAA9C9: mov $0x17,%eax;");
    asm("loc_6DAA9CE: pop %ebx;");
    asm("loc_6DAA9CF: ret $0xC;");
    asm("loc_6DAA9D2: mov (%esi),%edx;");
    asm("loc_6DAA9D4: mov 4(%esi),%ecx;");
    asm("loc_6DAA9D7: add $4,%edx;");
    asm("loc_6DAA9DA: mov %edx,%eax;");
    asm("loc_6DAA9DC: cmp %ecx,%eax;");
    asm("loc_6DAA9DE: mov %edx,(%esi);");
    asm("loc_6DAA9E0: mov $0x17,%ecx;");
    asm("loc_6DAA9E5: jbe loc_6DAA9EA;");
    asm("loc_6DAA9E7: mov %ecx,0xC(%esi);");
    asm("loc_6DAA9EA: mov 0x1C(%edi),%eax;");
    asm("loc_6DAA9ED: test %eax,%eax;");
    asm("loc_6DAA9EF: jne loc_6DAAAD0;");
    asm("loc_6DAA9F5: mov (%ebx),%eax;");
    asm("loc_6DAA9F7: mov (%eax),%edx;");
    asm("loc_6DAA9F9: add $4,%eax;");
    asm("loc_6DAA9FC: mov %eax,(%ebx);");
    asm("loc_6DAA9FE: mov %edx,0x20(%edi);");
    asm("loc_6DAAA01: mov (%esi),%eax;");
    asm("loc_6DAAA03: mov 4(%esi),%edx;");
    asm("loc_6DAAA06: inc %eax;");
    asm("loc_6DAAA07: cmp %edx,%eax;");
    asm("loc_6DAAA09: mov %eax,(%esi);");
    asm("loc_6DAAA0B: jbe loc_6DAAA10;");
    asm("loc_6DAAA0D: mov %ecx,0xC(%esi);");
    asm("loc_6DAAA10: mov 0x1C(%edi),%eax;");
    asm("loc_6DAAA13: test %eax,%eax;");
    asm("loc_6DAAA15: jne loc_6DAAAD0;");
    asm("loc_6DAAA1B: mov (%ebx),%eax;");
    asm("loc_6DAAA1D: mov (%eax),%dl;");
    asm("loc_6DAAA1F: inc %eax;");
    asm("loc_6DAAA20: mov %eax,(%ebx);");
    asm("loc_6DAAA22: mov %dl,0x24(%edi);");
    asm("loc_6DAAA25: mov (%esi),%eax;");
    asm("loc_6DAAA27: mov 4(%esi),%edx;");
    asm("loc_6DAAA2A: inc %eax;");
    asm("loc_6DAAA2B: cmp %edx,%eax;");
    asm("loc_6DAAA2D: mov %eax,(%esi);");
    asm("loc_6DAAA2F: jbe loc_6DAAA34;");
    asm("loc_6DAAA31: mov %ecx,0xC(%esi);");
    asm("loc_6DAAA34: mov 0x1C(%edi),%eax;");
    asm("loc_6DAAA37: test %eax,%eax;");
    asm("loc_6DAAA39: jne loc_6DAAAD0;");
    asm("loc_6DAAA3F: mov (%ebx),%eax;");
    asm("loc_6DAAA41: mov (%eax),%dl;");
    asm("loc_6DAAA43: inc %eax;");
    asm("loc_6DAAA44: mov %eax,(%ebx);");
    asm("loc_6DAAA46: mov %dl,0x25(%edi);");
    asm("loc_6DAAA49: mov (%esi),%eax;");
    asm("loc_6DAAA4B: mov 4(%esi),%edx;");
    asm("loc_6DAAA4E: inc %eax;");
    asm("loc_6DAAA4F: cmp %edx,%eax;");
    asm("loc_6DAAA51: mov %eax,(%esi);");
    asm("loc_6DAAA53: jbe loc_6DAAA58;");
    asm("loc_6DAAA55: mov %ecx,0xC(%esi);");
    asm("loc_6DAAA58: mov 0x1C(%edi),%eax;");
    asm("loc_6DAAA5B: test %eax,%eax;");
    asm("loc_6DAAA5D: jne loc_6DAAAD0;");
    asm("loc_6DAAA5F: mov (%ebx),%eax;");
    asm("loc_6DAAA61: mov (%eax),%cl;");
    asm("loc_6DAAA63: push %esi;");
    asm("loc_6DAAA64: push %ebp;");
    asm("loc_6DAAA65: mov %cl,0x26(%edi);");
    asm("loc_6DAAA68: inc %eax;");
    asm("loc_6DAAA69: push %ebx;");
    asm("loc_6DAAA6A: mov %edi,%ecx;");
    asm("loc_6DAAA6C: mov %eax,(%ebx);");
    asm("loc_6DAAA6E: call _sub_6DA13C0;");
    asm("loc_6DAAA73: test %eax,%eax;");
    asm("loc_6DAAA75: mov %eax,0x1C(%edi);");
    asm("loc_6DAAA78: je loc_6DAAA86;");
    asm("loc_6DAAA7A: pop %edi;");
    asm("loc_6DAAA7B: pop %esi;");
    asm("loc_6DAAA7C: pop %ebp;");
    asm("loc_6DAAA7D: mov $0x17,%eax;");
    asm("loc_6DAAA82: pop %ebx;");
    asm("loc_6DAAA83: ret $0xC;");
    asm("loc_6DAAA86: mov (%esi),%edx;");
    asm("loc_6DAAA88: mov 0x1C(%esp),%eax;");
    asm("loc_6DAAA8C: mov %edx,(%eax);");
    asm("loc_6DAAA8E: mov 0xC(%edi),%ecx;");
    asm("loc_6DAAA91: push %ecx;");
    asm("loc_6DAAA92: call _sub_6DA16B0;");
    asm("loc_6DAAA97: mov %eax,%ecx;");
    asm("loc_6DAAA99: mov 4(%ecx),%edx;");
    asm("loc_6DAAA9C: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAAA9F: mov 0x14(%ecx),%eax;");
    asm("loc_6DAAAA2: add $4,%esp;");
    asm("loc_6DAAAA5: inc %edx;");
    asm("loc_6DAAAA6: mov %edx,4(%ecx);");
    asm("loc_6DAAAA9: mov %edx,%edi;");
    asm("loc_6DAAAAB: mov (%esi),%edx;");
    asm("loc_6DAAAAD: add $2,%edx;");
    asm("loc_6DAAAB0: add %edx,%ebp;");
    asm("loc_6DAAAB2: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAAAB5: mov (%esi),%esi;");
    asm("loc_6DAAAB7: add $2,%eax;");
    asm("loc_6DAAABA: cmp %eax,%esi;");
    asm("loc_6DAAABC: jbe loc_6DAAAC4;");
    asm("loc_6DAAABE: add $2,%esi;");
    asm("loc_6DAAAC1: mov %esi,0x14(%ecx);");
    asm("loc_6DAAAC4: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAAAC7: xor %edx,%edx;");
    asm("loc_6DAAAC9: div %edi;");
    asm("loc_6DAAACB: mov %eax,0xC(%ecx);");
    asm("loc_6DAAACE: xor %eax,%eax;");
    asm("loc_6DAAAD0: pop %edi;");
    asm("loc_6DAAAD1: pop %esi;");
    asm("loc_6DAAAD2: pop %ebp;");
    asm("loc_6DAAAD3: pop %ebx;");
    asm("loc_6DAAAD4: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAAAE0() // _sub_6DAAAE0
{
    __DEBUG_ASM(6DAAAE0);
    // chunk 0x6DAAAE0 _sub_6DAAAE0
    asm("loc_6DAAAE0: mov _data_6DB6338,%eax;");
    asm("loc_6DAAAE5: mov %eax,_data_6DBC1C0;");
    asm("loc_6DAAAEA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAAAF0() // _sub_6DAAAF0
{
    __DEBUG_ASM(6DAAAF0);
    // chunk 0x6DAAAF0 _sub_6DAAAF0
    asm("loc_6DAAAF0: mov _data_6DB6338,%eax;");
    asm("loc_6DAAAF5: mov %eax,_data_6DBC1C4;");
    asm("loc_6DAAAFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAAB00() // _sub_6DAAB00
{
    __DEBUG_ASM(6DAAB00);
    // chunk 0x6DAAB00 _sub_6DAAB00
    asm("loc_6DAAB00: mov _data_6DB633C,%eax;");
    asm("loc_6DAAB05: mov %eax,_data_6DBC1BC;");
    asm("loc_6DAAB0A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAAB10() // _sub_6DAAB10
{
    __DEBUG_ASM(6DAAB10);
    // chunk 0x6DAAB10 _sub_6DAAB10
    asm("loc_6DAAB10: mov _data_6DB6348,%eax;");
    asm("loc_6DAAB15: mov %eax,_data_6DBC1D0;");
    asm("loc_6DAAB1A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAAB20() // _sub_6DAAB20
{
    __DEBUG_ASM(6DAAB20);
    // chunk 0x6DAAB20 _sub_6DAAB20
    asm("loc_6DAAB20: mov _data_6DB6348,%eax;");
    asm("loc_6DAAB25: mov %eax,_data_6DBC1D4;");
    asm("loc_6DAAB2A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAAB30() // _sub_6DAAB30
{
    __DEBUG_ASM(6DAAB30);
    // chunk 0x6DAAB30 _sub_6DAAB30
    asm("loc_6DAAB30: mov _data_6DB634C,%eax;");
    asm("loc_6DAAB35: mov %eax,_data_6DBC1CC;");
    asm("loc_6DAAB3A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAAB40() // _sub_6DAAB40
{
    __DEBUG_ASM(6DAAB40);
    // chunk 0x6DAAB40 _sub_6DAAB40
    asm("loc_6DAAB40: mov 8(%esp),%eax;");
    asm("loc_6DAAB44: sub $0x10,%esp;");
    asm("loc_6DAAB47: push %ebx;");
    asm("loc_6DAAB48: push %ebp;");
    asm("loc_6DAAB49: push %esi;");
    asm("loc_6DAAB4A: push %edi;");
    asm("loc_6DAAB4B: mov %ecx,%edi;");
    asm("loc_6DAAB4D: mov 0x24(%esp),%ecx;");
    asm("loc_6DAAB51: lea 0x10(%edi),%esi;");
    asm("loc_6DAAB54: mov %eax,4(%esi);");
    asm("loc_6DAAB57: mov (%ecx),%edx;");
    asm("loc_6DAAB59: mov %edx,8(%esi);");
    asm("loc_6DAAB5C: movl $0,(%esi);");
    asm("loc_6DAAB62: movl $0,0xC(%esi);");
    asm("loc_6DAAB69: mov 0x14(%edi),%eax;");
    asm("loc_6DAAB6C: push %esi;");
    asm("loc_6DAAB6D: push %eax;");
    asm("loc_6DAAB6E: lea 0x18(%edi),%ebx;");
    asm("loc_6DAAB71: push %ebx;");
    asm("loc_6DAAB72: mov %edi,%ecx;");
    asm("loc_6DAAB74: call _sub_6DA1380;");
    asm("loc_6DAAB79: test %eax,%eax;");
    asm("loc_6DAAB7B: mov %eax,0x1C(%edi);");
    asm("loc_6DAAB7E: je loc_6DAAB8F;");
    asm("loc_6DAAB80: pop %edi;");
    asm("loc_6DAAB81: pop %esi;");
    asm("loc_6DAAB82: pop %ebp;");
    asm("loc_6DAAB83: mov $0x16,%eax;");
    asm("loc_6DAAB88: pop %ebx;");
    asm("loc_6DAAB89: add $0x10,%esp;");
    asm("loc_6DAAB8C: ret $0xC;");
    asm("loc_6DAAB8F: mov (%esi),%edx;");
    asm("loc_6DAAB91: mov 4(%esi),%ecx;");
    asm("loc_6DAAB94: add $4,%edx;");
    asm("loc_6DAAB97: mov %edx,%eax;");
    asm("loc_6DAAB99: cmp %ecx,%eax;");
    asm("loc_6DAAB9B: mov %edx,(%esi);");
    asm("loc_6DAAB9D: mov $0x16,%ecx;");
    asm("loc_6DAABA2: jbe loc_6DAABA7;");
    asm("loc_6DAABA4: mov %ecx,0xC(%esi);");
    asm("loc_6DAABA7: mov 0x1C(%edi),%eax;");
    asm("loc_6DAABAA: test %eax,%eax;");
    asm("loc_6DAABAC: je loc_6DAABBA;");
    asm("loc_6DAABAE: pop %edi;");
    asm("loc_6DAABAF: pop %esi;");
    asm("loc_6DAABB0: pop %ebp;");
    asm("loc_6DAABB1: mov %ecx,%eax;");
    asm("loc_6DAABB3: pop %ebx;");
    asm("loc_6DAABB4: add $0x10,%esp;");
    asm("loc_6DAABB7: ret $0xC;");
    asm("loc_6DAABBA: mov (%ebx),%eax;");
    asm("loc_6DAABBC: mov 0x20(%edi),%edx;");
    asm("loc_6DAABBF: mov %edx,(%eax);");
    asm("loc_6DAABC1: add $4,%eax;");
    asm("loc_6DAABC4: mov %eax,(%ebx);");
    asm("loc_6DAABC6: mov (%esi),%ebp;");
    asm("loc_6DAABC8: mov 4(%esi),%edx;");
    asm("loc_6DAABCB: add $4,%ebp;");
    asm("loc_6DAABCE: mov %ebp,%eax;");
    asm("loc_6DAABD0: cmp %edx,%eax;");
    asm("loc_6DAABD2: mov %ebp,(%esi);");
    asm("loc_6DAABD4: jbe loc_6DAABD9;");
    asm("loc_6DAABD6: mov %ecx,0xC(%esi);");
    asm("loc_6DAABD9: mov 0x1C(%edi),%eax;");
    asm("loc_6DAABDC: test %eax,%eax;");
    asm("loc_6DAABDE: je loc_6DAABEC;");
    asm("loc_6DAABE0: pop %edi;");
    asm("loc_6DAABE1: pop %esi;");
    asm("loc_6DAABE2: pop %ebp;");
    asm("loc_6DAABE3: mov %ecx,%eax;");
    asm("loc_6DAABE5: pop %ebx;");
    asm("loc_6DAABE6: add $0x10,%esp;");
    asm("loc_6DAABE9: ret $0xC;");
    asm("loc_6DAABEC: mov (%ebx),%eax;");
    asm("loc_6DAABEE: mov 0x24(%edi),%edx;");
    asm("loc_6DAABF1: mov %edx,(%eax);");
    asm("loc_6DAABF3: add $4,%eax;");
    asm("loc_6DAABF6: mov %eax,(%ebx);");
    asm("loc_6DAABF8: mov (%esi),%ebp;");
    asm("loc_6DAABFA: mov 4(%esi),%edx;");
    asm("loc_6DAABFD: add $4,%ebp;");
    asm("loc_6DAAC00: mov %ebp,%eax;");
    asm("loc_6DAAC02: cmp %edx,%eax;");
    asm("loc_6DAAC04: mov %ebp,(%esi);");
    asm("loc_6DAAC06: jbe loc_6DAAC0B;");
    asm("loc_6DAAC08: mov %ecx,0xC(%esi);");
    asm("loc_6DAAC0B: mov 0x1C(%edi),%eax;");
    asm("loc_6DAAC0E: test %eax,%eax;");
    asm("loc_6DAAC10: je loc_6DAAC1E;");
    asm("loc_6DAAC12: pop %edi;");
    asm("loc_6DAAC13: pop %esi;");
    asm("loc_6DAAC14: pop %ebp;");
    asm("loc_6DAAC15: mov %ecx,%eax;");
    asm("loc_6DAAC17: pop %ebx;");
    asm("loc_6DAAC18: add $0x10,%esp;");
    asm("loc_6DAAC1B: ret $0xC;");
    asm("loc_6DAAC1E: mov (%ebx),%eax;");
    asm("loc_6DAAC20: mov 0x28(%edi),%edx;");
    asm("loc_6DAAC23: mov %edx,(%eax);");
    asm("loc_6DAAC25: add $4,%eax;");
    asm("loc_6DAAC28: mov %eax,(%ebx);");
    asm("loc_6DAAC2A: mov (%esi),%ebp;");
    asm("loc_6DAAC2C: mov 4(%esi),%edx;");
    asm("loc_6DAAC2F: add $0xC,%ebp;");
    asm("loc_6DAAC32: mov %ebp,%eax;");
    asm("loc_6DAAC34: cmp %edx,%eax;");
    asm("loc_6DAAC36: mov %ebp,(%esi);");
    asm("loc_6DAAC38: jbe loc_6DAAC3D;");
    asm("loc_6DAAC3A: mov %ecx,0xC(%esi);");
    asm("loc_6DAAC3D: mov 0x1C(%edi),%eax;");
    asm("loc_6DAAC40: test %eax,%eax;");
    asm("loc_6DAAC42: je loc_6DAAC50;");
    asm("loc_6DAAC44: pop %edi;");
    asm("loc_6DAAC45: pop %esi;");
    asm("loc_6DAAC46: pop %ebp;");
    asm("loc_6DAAC47: mov %ecx,%eax;");
    asm("loc_6DAAC49: pop %ebx;");
    asm("loc_6DAAC4A: add $0x10,%esp;");
    asm("loc_6DAAC4D: ret $0xC;");
    asm("loc_6DAAC50: mov 0x2C(%edi),%eax;");
    asm("loc_6DAAC53: mov 0x30(%edi),%ecx;");
    asm("loc_6DAAC56: mov (%ebx),%ebp;");
    asm("loc_6DAAC58: mov 0x34(%edi),%edx;");
    asm("loc_6DAAC5B: mov %eax,0x10(%esp);");
    asm("loc_6DAAC5F: lea 0x10(%esp),%eax;");
    asm("loc_6DAAC63: mov %ecx,0x14(%esp);");
    asm("loc_6DAAC67: push %eax;");
    asm("loc_6DAAC68: mov %ebp,%ecx;");
    asm("loc_6DAAC6A: mov %edx,0x1C(%esp);");
    asm("loc_6DAAC6E: call _sub_6D8F510;");
    asm("loc_6DAAC73: add $0xC,%ebp;");
    asm("loc_6DAAC76: mov %ebp,(%ebx);");
    asm("loc_6DAAC78: mov (%esi),%edx;");
    asm("loc_6DAAC7A: mov 4(%esi),%ecx;");
    asm("loc_6DAAC7D: add $0x10,%edx;");
    asm("loc_6DAAC80: mov %edx,%eax;");
    asm("loc_6DAAC82: cmp %ecx,%eax;");
    asm("loc_6DAAC84: mov %edx,(%esi);");
    asm("loc_6DAAC86: jbe loc_6DAAC8F;");
    asm("loc_6DAAC88: movl $0x16,0xC(%esi);");
    asm("loc_6DAAC8F: mov 0x1C(%edi),%eax;");
    asm("loc_6DAAC92: test %eax,%eax;");
    asm("loc_6DAAC94: je loc_6DAACA5;");
    asm("loc_6DAAC96: pop %edi;");
    asm("loc_6DAAC97: pop %esi;");
    asm("loc_6DAAC98: pop %ebp;");
    asm("loc_6DAAC99: mov $0x16,%eax;");
    asm("loc_6DAAC9E: pop %ebx;");
    asm("loc_6DAAC9F: add $0x10,%esp;");
    asm("loc_6DAACA2: ret $0xC;");
    asm("loc_6DAACA5: mov (%ebx),%ebp;");
    asm("loc_6DAACA7: lea 0x38(%edi),%ecx;");
    asm("loc_6DAACAA: mov (%ecx),%edx;");
    asm("loc_6DAACAC: mov 4(%ecx),%eax;");
    asm("loc_6DAACAF: mov %edx,0x10(%esp);");
    asm("loc_6DAACB3: mov 8(%ecx),%edx;");
    asm("loc_6DAACB6: mov %eax,0x14(%esp);");
    asm("loc_6DAACBA: mov 0xC(%ecx),%eax;");
    asm("loc_6DAACBD: lea 0x10(%esp),%ecx;");
    asm("loc_6DAACC1: push %ecx;");
    asm("loc_6DAACC2: mov %ebp,%ecx;");
    asm("loc_6DAACC4: mov %edx,0x1C(%esp);");
    asm("loc_6DAACC8: mov %eax,0x20(%esp);");
    asm("loc_6DAACCC: call _sub_6D8F4F0;");
    asm("loc_6DAACD1: mov 0x14(%edi),%edx;");
    asm("loc_6DAACD4: push %esi;");
    asm("loc_6DAACD5: push %edx;");
    asm("loc_6DAACD6: add $0x10,%ebp;");
    asm("loc_6DAACD9: push %ebx;");
    asm("loc_6DAACDA: mov %edi,%ecx;");
    asm("loc_6DAACDC: mov %ebp,(%ebx);");
    asm("loc_6DAACDE: call _sub_6DA13C0;");
    asm("loc_6DAACE3: test %eax,%eax;");
    asm("loc_6DAACE5: mov %eax,0x1C(%edi);");
    asm("loc_6DAACE8: je loc_6DAACF9;");
    asm("loc_6DAACEA: pop %edi;");
    asm("loc_6DAACEB: pop %esi;");
    asm("loc_6DAACEC: pop %ebp;");
    asm("loc_6DAACED: mov $0x16,%eax;");
    asm("loc_6DAACF2: pop %ebx;");
    asm("loc_6DAACF3: add $0x10,%esp;");
    asm("loc_6DAACF6: ret $0xC;");
    asm("loc_6DAACF9: mov (%esi),%eax;");
    asm("loc_6DAACFB: mov 0x2C(%esp),%ecx;");
    asm("loc_6DAACFF: mov %eax,(%ecx);");
    asm("loc_6DAAD01: mov 0xC(%edi),%edx;");
    asm("loc_6DAAD04: push %edx;");
    asm("loc_6DAAD05: call _sub_6DA16B0;");
    asm("loc_6DAAD0A: mov %eax,%ecx;");
    asm("loc_6DAAD0C: mov (%ecx),%edi;");
    asm("loc_6DAAD0E: mov 0x18(%ecx),%edx;");
    asm("loc_6DAAD11: add $4,%esp;");
    asm("loc_6DAAD14: inc %edi;");
    asm("loc_6DAAD15: mov %edi,(%ecx);");
    asm("loc_6DAAD17: mov (%esi),%eax;");
    asm("loc_6DAAD19: add %eax,%edx;");
    asm("loc_6DAAD1B: mov 0x10(%ecx),%eax;");
    asm("loc_6DAAD1E: mov %edx,0x18(%ecx);");
    asm("loc_6DAAD21: mov (%esi),%esi;");
    asm("loc_6DAAD23: cmp %eax,%esi;");
    asm("loc_6DAAD25: jbe loc_6DAAD2A;");
    asm("loc_6DAAD27: mov %esi,0x10(%ecx);");
    asm("loc_6DAAD2A: mov 0x18(%ecx),%eax;");
    asm("loc_6DAAD2D: xor %edx,%edx;");
    asm("loc_6DAAD2F: div %edi;");
    asm("loc_6DAAD31: pop %edi;");
    asm("loc_6DAAD32: pop %esi;");
    asm("loc_6DAAD33: pop %ebp;");
    asm("loc_6DAAD34: pop %ebx;");
    asm("loc_6DAAD35: mov %eax,8(%ecx);");
    asm("loc_6DAAD38: xor %eax,%eax;");
    asm("loc_6DAAD3A: add $0x10,%esp;");
    asm("loc_6DAAD3D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAAD40() // _sub_6DAAD40
{
    __DEBUG_ASM(6DAAD40);
    // chunk 0x6DAAD40 _sub_6DAAD40
    asm("loc_6DAAD40: mov 8(%esp),%eax;");
    asm("loc_6DAAD44: push %ebx;");
    asm("loc_6DAAD45: push %ebp;");
    asm("loc_6DAAD46: push %esi;");
    asm("loc_6DAAD47: push %edi;");
    asm("loc_6DAAD48: mov %ecx,%edi;");
    asm("loc_6DAAD4A: mov 0x14(%esp),%ecx;");
    asm("loc_6DAAD4E: lea 0x10(%edi),%esi;");
    asm("loc_6DAAD51: push %esi;");
    asm("loc_6DAAD52: push %eax;");
    asm("loc_6DAAD53: mov %ecx,8(%esi);");
    asm("loc_6DAAD56: lea 0x18(%edi),%ebx;");
    asm("loc_6DAAD59: push %ebx;");
    asm("loc_6DAAD5A: mov %edi,%ecx;");
    asm("loc_6DAAD5C: mov %eax,4(%esi);");
    asm("loc_6DAAD5F: movl $0,(%esi);");
    asm("loc_6DAAD65: movl $0,0xC(%esi);");
    asm("loc_6DAAD6C: call _sub_6DA13C0;");
    asm("loc_6DAAD71: test %eax,%eax;");
    asm("loc_6DAAD73: mov %eax,0x1C(%edi);");
    asm("loc_6DAAD76: je loc_6DAAD84;");
    asm("loc_6DAAD78: pop %edi;");
    asm("loc_6DAAD79: pop %esi;");
    asm("loc_6DAAD7A: pop %ebp;");
    asm("loc_6DAAD7B: mov $0x17,%eax;");
    asm("loc_6DAAD80: pop %ebx;");
    asm("loc_6DAAD81: ret $0xC;");
    asm("loc_6DAAD84: mov (%esi),%edx;");
    asm("loc_6DAAD86: mov 4(%esi),%ecx;");
    asm("loc_6DAAD89: add $4,%edx;");
    asm("loc_6DAAD8C: mov %edx,%eax;");
    asm("loc_6DAAD8E: cmp %ecx,%eax;");
    asm("loc_6DAAD90: mov %edx,(%esi);");
    asm("loc_6DAAD92: mov $0x17,%ecx;");
    asm("loc_6DAAD97: jbe loc_6DAAD9C;");
    asm("loc_6DAAD99: mov %ecx,0xC(%esi);");
    asm("loc_6DAAD9C: mov 0x1C(%edi),%eax;");
    asm("loc_6DAAD9F: test %eax,%eax;");
    asm("loc_6DAADA1: jne loc_6DAAECE;");
    asm("loc_6DAADA7: mov (%ebx),%eax;");
    asm("loc_6DAADA9: mov (%eax),%edx;");
    asm("loc_6DAADAB: add $4,%eax;");
    asm("loc_6DAADAE: mov %eax,(%ebx);");
    asm("loc_6DAADB0: mov %edx,0x20(%edi);");
    asm("loc_6DAADB3: mov (%esi),%ebp;");
    asm("loc_6DAADB5: mov 4(%esi),%edx;");
    asm("loc_6DAADB8: add $4,%ebp;");
    asm("loc_6DAADBB: mov %ebp,%eax;");
    asm("loc_6DAADBD: cmp %edx,%eax;");
    asm("loc_6DAADBF: mov %ebp,(%esi);");
    asm("loc_6DAADC1: jbe loc_6DAADC6;");
    asm("loc_6DAADC3: mov %ecx,0xC(%esi);");
    asm("loc_6DAADC6: mov 0x1C(%edi),%eax;");
    asm("loc_6DAADC9: test %eax,%eax;");
    asm("loc_6DAADCB: jne loc_6DAAECE;");
    asm("loc_6DAADD1: mov (%ebx),%eax;");
    asm("loc_6DAADD3: mov (%eax),%edx;");
    asm("loc_6DAADD5: add $4,%eax;");
    asm("loc_6DAADD8: mov %eax,(%ebx);");
    asm("loc_6DAADDA: mov %edx,0x24(%edi);");
    asm("loc_6DAADDD: mov (%esi),%ebp;");
    asm("loc_6DAADDF: mov 4(%esi),%edx;");
    asm("loc_6DAADE2: add $4,%ebp;");
    asm("loc_6DAADE5: mov %ebp,%eax;");
    asm("loc_6DAADE7: cmp %edx,%eax;");
    asm("loc_6DAADE9: mov %ebp,(%esi);");
    asm("loc_6DAADEB: jbe loc_6DAADF0;");
    asm("loc_6DAADED: mov %ecx,0xC(%esi);");
    asm("loc_6DAADF0: mov 0x1C(%edi),%eax;");
    asm("loc_6DAADF3: test %eax,%eax;");
    asm("loc_6DAADF5: jne loc_6DAAECE;");
    asm("loc_6DAADFB: mov (%ebx),%eax;");
    asm("loc_6DAADFD: mov (%eax),%edx;");
    asm("loc_6DAADFF: add $4,%eax;");
    asm("loc_6DAAE02: mov %eax,(%ebx);");
    asm("loc_6DAAE04: mov %edx,0x28(%edi);");
    asm("loc_6DAAE07: mov (%esi),%ebp;");
    asm("loc_6DAAE09: mov 4(%esi),%edx;");
    asm("loc_6DAAE0C: add $0xC,%ebp;");
    asm("loc_6DAAE0F: mov %ebp,%eax;");
    asm("loc_6DAAE11: cmp %edx,%eax;");
    asm("loc_6DAAE13: mov %ebp,(%esi);");
    asm("loc_6DAAE15: jbe loc_6DAAE1A;");
    asm("loc_6DAAE17: mov %ecx,0xC(%esi);");
    asm("loc_6DAAE1A: mov 0x1C(%edi),%eax;");
    asm("loc_6DAAE1D: test %eax,%eax;");
    asm("loc_6DAAE1F: jne loc_6DAAECE;");
    asm("loc_6DAAE25: mov (%ebx),%ebp;");
    asm("loc_6DAAE27: push %ebp;");
    asm("loc_6DAAE28: lea 0x2C(%edi),%ecx;");
    asm("loc_6DAAE2B: call _sub_6D8F510;");
    asm("loc_6DAAE30: add $0xC,%ebp;");
    asm("loc_6DAAE33: mov %ebp,(%ebx);");
    asm("loc_6DAAE35: mov (%esi),%edx;");
    asm("loc_6DAAE37: mov 4(%esi),%ecx;");
    asm("loc_6DAAE3A: add $0x10,%edx;");
    asm("loc_6DAAE3D: mov %edx,%eax;");
    asm("loc_6DAAE3F: cmp %ecx,%eax;");
    asm("loc_6DAAE41: mov %edx,(%esi);");
    asm("loc_6DAAE43: jbe loc_6DAAE4C;");
    asm("loc_6DAAE45: movl $0x17,0xC(%esi);");
    asm("loc_6DAAE4C: mov 0x1C(%edi),%eax;");
    asm("loc_6DAAE4F: test %eax,%eax;");
    asm("loc_6DAAE51: jne loc_6DAAECE;");
    asm("loc_6DAAE53: mov (%ebx),%ebp;");
    asm("loc_6DAAE55: push %ebp;");
    asm("loc_6DAAE56: lea 0x38(%edi),%ecx;");
    asm("loc_6DAAE59: call _sub_6D8F4F0;");
    asm("loc_6DAAE5E: mov 0x18(%esp),%eax;");
    asm("loc_6DAAE62: push %esi;");
    asm("loc_6DAAE63: push %eax;");
    asm("loc_6DAAE64: add $0x10,%ebp;");
    asm("loc_6DAAE67: push %ebx;");
    asm("loc_6DAAE68: mov %edi,%ecx;");
    asm("loc_6DAAE6A: mov %ebp,(%ebx);");
    asm("loc_6DAAE6C: call _sub_6DA13C0;");
    asm("loc_6DAAE71: test %eax,%eax;");
    asm("loc_6DAAE73: mov %eax,0x1C(%edi);");
    asm("loc_6DAAE76: je loc_6DAAE84;");
    asm("loc_6DAAE78: pop %edi;");
    asm("loc_6DAAE79: pop %esi;");
    asm("loc_6DAAE7A: pop %ebp;");
    asm("loc_6DAAE7B: mov $0x17,%eax;");
    asm("loc_6DAAE80: pop %ebx;");
    asm("loc_6DAAE81: ret $0xC;");
    asm("loc_6DAAE84: mov (%esi),%ecx;");
    asm("loc_6DAAE86: mov 0x1C(%esp),%edx;");
    asm("loc_6DAAE8A: mov %ecx,(%edx);");
    asm("loc_6DAAE8C: mov 0xC(%edi),%eax;");
    asm("loc_6DAAE8F: push %eax;");
    asm("loc_6DAAE90: call _sub_6DA16B0;");
    asm("loc_6DAAE95: mov %eax,%ecx;");
    asm("loc_6DAAE97: mov 4(%ecx),%edx;");
    asm("loc_6DAAE9A: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAAE9D: mov 0x14(%ecx),%eax;");
    asm("loc_6DAAEA0: add $4,%esp;");
    asm("loc_6DAAEA3: inc %edx;");
    asm("loc_6DAAEA4: mov %edx,4(%ecx);");
    asm("loc_6DAAEA7: mov %edx,%edi;");
    asm("loc_6DAAEA9: mov (%esi),%edx;");
    asm("loc_6DAAEAB: add $2,%edx;");
    asm("loc_6DAAEAE: add %edx,%ebp;");
    asm("loc_6DAAEB0: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAAEB3: mov (%esi),%esi;");
    asm("loc_6DAAEB5: add $2,%eax;");
    asm("loc_6DAAEB8: cmp %eax,%esi;");
    asm("loc_6DAAEBA: jbe loc_6DAAEC2;");
    asm("loc_6DAAEBC: add $2,%esi;");
    asm("loc_6DAAEBF: mov %esi,0x14(%ecx);");
    asm("loc_6DAAEC2: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAAEC5: xor %edx,%edx;");
    asm("loc_6DAAEC7: div %edi;");
    asm("loc_6DAAEC9: mov %eax,0xC(%ecx);");
    asm("loc_6DAAECC: xor %eax,%eax;");
    asm("loc_6DAAECE: pop %edi;");
    asm("loc_6DAAECF: pop %esi;");
    asm("loc_6DAAED0: pop %ebp;");
    asm("loc_6DAAED1: pop %ebx;");
    asm("loc_6DAAED2: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAAEE0() // _sub_6DAAEE0
{
    __DEBUG_ASM(6DAAEE0);
    // chunk 0x6DAAEE0 _sub_6DAAEE0
    asm("loc_6DAAEE0: push %ebx;");
    asm("loc_6DAAEE1: mov 8(%esp),%ebx;");
    asm("loc_6DAAEE5: push %esi;");
    asm("loc_6DAAEE6: mov _import_6DB3194,%esi;");
    asm("loc_6DAAEEC: push %edi;");
    asm("loc_6DAAEED: mov %ecx,%edi;");
    asm("loc_6DAAEEF: mov 0x2C(%edi),%eax;");
    asm("loc_6DAAEF2: push $_data_6DB3D88;");
    asm("loc_6DAAEF7: push %eax;");
    asm("loc_6DAAEF8: push $_data_6DB6364;");
    asm("loc_6DAAEFD: push %ebx;");
    asm("loc_6DAAEFE: call *%esi;");
    asm("loc_6DAAF00: add $8,%esp;");
    asm("loc_6DAAF03: mov %eax,%ecx;");
    asm("loc_6DAAF05: calll *_import_6DB3180;");
    asm("loc_6DAAF0B: push %eax;");
    asm("loc_6DAAF0C: call *%esi;");
    asm("loc_6DAAF0E: mov 0x30(%edi),%ecx;");
    asm("loc_6DAAF11: add $8,%esp;");
    asm("loc_6DAAF14: push $_data_6DB3D88;");
    asm("loc_6DAAF19: push %ecx;");
    asm("loc_6DAAF1A: push $_data_6DB635C;");
    asm("loc_6DAAF1F: push %ebx;");
    asm("loc_6DAAF20: call *%esi;");
    asm("loc_6DAAF22: add $8,%esp;");
    asm("loc_6DAAF25: mov %eax,%ecx;");
    asm("loc_6DAAF27: calll *_import_6DB3180;");
    asm("loc_6DAAF2D: push %eax;");
    asm("loc_6DAAF2E: call *%esi;");
    asm("loc_6DAAF30: mov 0x34(%edi),%edx;");
    asm("loc_6DAAF33: add $8,%esp;");
    asm("loc_6DAAF36: push $_data_6DB3D88;");
    asm("loc_6DAAF3B: push %edx;");
    asm("loc_6DAAF3C: push $_data_6DB6354;");
    asm("loc_6DAAF41: push %ebx;");
    asm("loc_6DAAF42: call *%esi;");
    asm("loc_6DAAF44: add $8,%esp;");
    asm("loc_6DAAF47: mov %eax,%ecx;");
    asm("loc_6DAAF49: calll *_import_6DB3180;");
    asm("loc_6DAAF4F: push %eax;");
    asm("loc_6DAAF50: call *%esi;");
    asm("loc_6DAAF52: add $8,%esp;");
    asm("loc_6DAAF55: pop %edi;");
    asm("loc_6DAAF56: pop %esi;");
    asm("loc_6DAAF57: pop %ebx;");
    asm("loc_6DAAF58: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAAF60() // _sub_6DAAF60
{
    __DEBUG_ASM(6DAAF60);
    // chunk 0x6DAAF60 _sub_6DAAF60
    asm("loc_6DAAF60: mov _data_6DB6370,%eax;");
    asm("loc_6DAAF65: mov %eax,_data_6DBC1E0;");
    asm("loc_6DAAF6A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAAF70() // _sub_6DAAF70
{
    __DEBUG_ASM(6DAAF70);
    // chunk 0x6DAAF70 _sub_6DAAF70
    asm("loc_6DAAF70: mov _data_6DB6370,%eax;");
    asm("loc_6DAAF75: mov %eax,_data_6DBC1E4;");
    asm("loc_6DAAF7A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAAF80() // _sub_6DAAF80
{
    __DEBUG_ASM(6DAAF80);
    // chunk 0x6DAAF80 _sub_6DAAF80
    asm("loc_6DAAF80: mov _data_6DB6374,%eax;");
    asm("loc_6DAAF85: mov %eax,_data_6DBC1DC;");
    asm("loc_6DAAF8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAAF90() // _sub_6DAAF90
{
    __DEBUG_ASM(6DAAF90);
    // chunk 0x6DAAF90 _sub_6DAAF90
    asm("loc_6DAAF90: mov 8(%esp),%eax;");
    asm("loc_6DAAF94: push %ebx;");
    asm("loc_6DAAF95: push %esi;");
    asm("loc_6DAAF96: push %edi;");
    asm("loc_6DAAF97: mov %ecx,%edi;");
    asm("loc_6DAAF99: mov 0x10(%esp),%ecx;");
    asm("loc_6DAAF9D: lea 0x10(%edi),%esi;");
    asm("loc_6DAAFA0: mov %eax,4(%esi);");
    asm("loc_6DAAFA3: mov (%ecx),%edx;");
    asm("loc_6DAAFA5: mov %edx,8(%esi);");
    asm("loc_6DAAFA8: movl $0,(%esi);");
    asm("loc_6DAAFAE: movl $0,0xC(%esi);");
    asm("loc_6DAAFB5: mov 0x14(%edi),%eax;");
    asm("loc_6DAAFB8: push %esi;");
    asm("loc_6DAAFB9: push %eax;");
    asm("loc_6DAAFBA: lea 0x18(%edi),%ebx;");
    asm("loc_6DAAFBD: push %ebx;");
    asm("loc_6DAAFBE: mov %edi,%ecx;");
    asm("loc_6DAAFC0: call _sub_6DA1380;");
    asm("loc_6DAAFC5: test %eax,%eax;");
    asm("loc_6DAAFC7: mov %eax,0x1C(%edi);");
    asm("loc_6DAAFCA: je loc_6DAAFD7;");
    asm("loc_6DAAFCC: pop %edi;");
    asm("loc_6DAAFCD: pop %esi;");
    asm("loc_6DAAFCE: mov $0x16,%eax;");
    asm("loc_6DAAFD3: pop %ebx;");
    asm("loc_6DAAFD4: ret $0xC;");
    asm("loc_6DAAFD7: mov (%esi),%edx;");
    asm("loc_6DAAFD9: mov 4(%esi),%ecx;");
    asm("loc_6DAAFDC: add $4,%edx;");
    asm("loc_6DAAFDF: mov %edx,%eax;");
    asm("loc_6DAAFE1: cmp %ecx,%eax;");
    asm("loc_6DAAFE3: mov %edx,(%esi);");
    asm("loc_6DAAFE5: jbe loc_6DAAFEE;");
    asm("loc_6DAAFE7: movl $0x16,0xC(%esi);");
    asm("loc_6DAAFEE: mov 0x1C(%edi),%eax;");
    asm("loc_6DAAFF1: test %eax,%eax;");
    asm("loc_6DAAFF3: je loc_6DAB000;");
    asm("loc_6DAAFF5: pop %edi;");
    asm("loc_6DAAFF6: pop %esi;");
    asm("loc_6DAAFF7: mov $0x16,%eax;");
    asm("loc_6DAAFFC: pop %ebx;");
    asm("loc_6DAAFFD: ret $0xC;");
    asm("loc_6DAB000: mov (%ebx),%eax;");
    asm("loc_6DAB002: mov 0x20(%edi),%ecx;");
    asm("loc_6DAB005: mov %ecx,(%eax);");
    asm("loc_6DAB007: add $4,%eax;");
    asm("loc_6DAB00A: mov %eax,(%ebx);");
    asm("loc_6DAB00C: mov (%esi),%edx;");
    asm("loc_6DAB00E: mov 4(%esi),%ecx;");
    asm("loc_6DAB011: add $4,%edx;");
    asm("loc_6DAB014: mov %edx,%eax;");
    asm("loc_6DAB016: cmp %ecx,%eax;");
    asm("loc_6DAB018: mov %edx,(%esi);");
    asm("loc_6DAB01A: jbe loc_6DAB023;");
    asm("loc_6DAB01C: movl $0x16,0xC(%esi);");
    asm("loc_6DAB023: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB026: test %eax,%eax;");
    asm("loc_6DAB028: je loc_6DAB035;");
    asm("loc_6DAB02A: pop %edi;");
    asm("loc_6DAB02B: pop %esi;");
    asm("loc_6DAB02C: mov $0x16,%eax;");
    asm("loc_6DAB031: pop %ebx;");
    asm("loc_6DAB032: ret $0xC;");
    asm("loc_6DAB035: mov (%ebx),%eax;");
    asm("loc_6DAB037: mov 0x24(%edi),%edx;");
    asm("loc_6DAB03A: mov %edx,(%eax);");
    asm("loc_6DAB03C: add $4,%eax;");
    asm("loc_6DAB03F: mov %eax,(%ebx);");
    asm("loc_6DAB041: mov (%esi),%edx;");
    asm("loc_6DAB043: mov 4(%esi),%ecx;");
    asm("loc_6DAB046: add $2,%edx;");
    asm("loc_6DAB049: mov %edx,%eax;");
    asm("loc_6DAB04B: cmp %ecx,%eax;");
    asm("loc_6DAB04D: mov %edx,(%esi);");
    asm("loc_6DAB04F: jbe loc_6DAB058;");
    asm("loc_6DAB051: movl $0x16,0xC(%esi);");
    asm("loc_6DAB058: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB05B: test %eax,%eax;");
    asm("loc_6DAB05D: je loc_6DAB06A;");
    asm("loc_6DAB05F: pop %edi;");
    asm("loc_6DAB060: pop %esi;");
    asm("loc_6DAB061: mov $0x16,%eax;");
    asm("loc_6DAB066: pop %ebx;");
    asm("loc_6DAB067: ret $0xC;");
    asm("loc_6DAB06A: mov (%ebx),%eax;");
    asm("loc_6DAB06C: mov 0x28(%edi),%cx;");
    asm("loc_6DAB070: mov %cx,(%eax);");
    asm("loc_6DAB073: mov 0x14(%edi),%edx;");
    asm("loc_6DAB076: push %esi;");
    asm("loc_6DAB077: push %edx;");
    asm("loc_6DAB078: add $2,%eax;");
    asm("loc_6DAB07B: push %ebx;");
    asm("loc_6DAB07C: mov %edi,%ecx;");
    asm("loc_6DAB07E: mov %eax,(%ebx);");
    asm("loc_6DAB080: call _sub_6DA13C0;");
    asm("loc_6DAB085: test %eax,%eax;");
    asm("loc_6DAB087: mov %eax,0x1C(%edi);");
    asm("loc_6DAB08A: je loc_6DAB097;");
    asm("loc_6DAB08C: pop %edi;");
    asm("loc_6DAB08D: pop %esi;");
    asm("loc_6DAB08E: mov $0x16,%eax;");
    asm("loc_6DAB093: pop %ebx;");
    asm("loc_6DAB094: ret $0xC;");
    asm("loc_6DAB097: mov (%esi),%eax;");
    asm("loc_6DAB099: mov 0x18(%esp),%ecx;");
    asm("loc_6DAB09D: mov %eax,(%ecx);");
    asm("loc_6DAB09F: mov 0xC(%edi),%edx;");
    asm("loc_6DAB0A2: push %edx;");
    asm("loc_6DAB0A3: call _sub_6DA16B0;");
    asm("loc_6DAB0A8: mov %eax,%ecx;");
    asm("loc_6DAB0AA: mov (%ecx),%edi;");
    asm("loc_6DAB0AC: mov 0x18(%ecx),%edx;");
    asm("loc_6DAB0AF: add $4,%esp;");
    asm("loc_6DAB0B2: inc %edi;");
    asm("loc_6DAB0B3: mov %edi,(%ecx);");
    asm("loc_6DAB0B5: mov (%esi),%eax;");
    asm("loc_6DAB0B7: add %eax,%edx;");
    asm("loc_6DAB0B9: mov 0x10(%ecx),%eax;");
    asm("loc_6DAB0BC: mov %edx,0x18(%ecx);");
    asm("loc_6DAB0BF: mov (%esi),%esi;");
    asm("loc_6DAB0C1: cmp %eax,%esi;");
    asm("loc_6DAB0C3: jbe loc_6DAB0C8;");
    asm("loc_6DAB0C5: mov %esi,0x10(%ecx);");
    asm("loc_6DAB0C8: mov 0x18(%ecx),%eax;");
    asm("loc_6DAB0CB: xor %edx,%edx;");
    asm("loc_6DAB0CD: div %edi;");
    asm("loc_6DAB0CF: pop %edi;");
    asm("loc_6DAB0D0: pop %esi;");
    asm("loc_6DAB0D1: pop %ebx;");
    asm("loc_6DAB0D2: mov %eax,8(%ecx);");
    asm("loc_6DAB0D5: xor %eax,%eax;");
    asm("loc_6DAB0D7: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAB0E0() // _sub_6DAB0E0
{
    __DEBUG_ASM(6DAB0E0);
    // chunk 0x6DAB0E0 _sub_6DAB0E0
    asm("loc_6DAB0E0: mov 8(%esp),%eax;");
    asm("loc_6DAB0E4: push %ebx;");
    asm("loc_6DAB0E5: push %esi;");
    asm("loc_6DAB0E6: push %edi;");
    asm("loc_6DAB0E7: mov %ecx,%edi;");
    asm("loc_6DAB0E9: mov 0x10(%esp),%ecx;");
    asm("loc_6DAB0ED: lea 0x10(%edi),%esi;");
    asm("loc_6DAB0F0: mov %eax,4(%esi);");
    asm("loc_6DAB0F3: mov (%ecx),%edx;");
    asm("loc_6DAB0F5: mov %edx,8(%esi);");
    asm("loc_6DAB0F8: movl $0,(%esi);");
    asm("loc_6DAB0FE: movl $0,0xC(%esi);");
    asm("loc_6DAB105: mov 0x14(%edi),%eax;");
    asm("loc_6DAB108: push %esi;");
    asm("loc_6DAB109: push %eax;");
    asm("loc_6DAB10A: lea 0x18(%edi),%ebx;");
    asm("loc_6DAB10D: push %ebx;");
    asm("loc_6DAB10E: mov %edi,%ecx;");
    asm("loc_6DAB110: call _sub_6DA1380;");
    asm("loc_6DAB115: test %eax,%eax;");
    asm("loc_6DAB117: mov %eax,0x1C(%edi);");
    asm("loc_6DAB11A: je loc_6DAB127;");
    asm("loc_6DAB11C: pop %edi;");
    asm("loc_6DAB11D: pop %esi;");
    asm("loc_6DAB11E: mov $0x16,%eax;");
    asm("loc_6DAB123: pop %ebx;");
    asm("loc_6DAB124: ret $0xC;");
    asm("loc_6DAB127: mov (%esi),%edx;");
    asm("loc_6DAB129: mov 4(%esi),%ecx;");
    asm("loc_6DAB12C: add $4,%edx;");
    asm("loc_6DAB12F: mov %edx,%eax;");
    asm("loc_6DAB131: cmp %ecx,%eax;");
    asm("loc_6DAB133: mov %edx,(%esi);");
    asm("loc_6DAB135: jbe loc_6DAB13E;");
    asm("loc_6DAB137: movl $0x16,0xC(%esi);");
    asm("loc_6DAB13E: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB141: test %eax,%eax;");
    asm("loc_6DAB143: je loc_6DAB150;");
    asm("loc_6DAB145: pop %edi;");
    asm("loc_6DAB146: pop %esi;");
    asm("loc_6DAB147: mov $0x16,%eax;");
    asm("loc_6DAB14C: pop %ebx;");
    asm("loc_6DAB14D: ret $0xC;");
    asm("loc_6DAB150: mov (%ebx),%eax;");
    asm("loc_6DAB152: mov 0x20(%edi),%ecx;");
    asm("loc_6DAB155: mov %ecx,(%eax);");
    asm("loc_6DAB157: add $4,%eax;");
    asm("loc_6DAB15A: mov %eax,(%ebx);");
    asm("loc_6DAB15C: mov (%esi),%edx;");
    asm("loc_6DAB15E: mov 4(%esi),%ecx;");
    asm("loc_6DAB161: inc %edx;");
    asm("loc_6DAB162: mov %edx,%eax;");
    asm("loc_6DAB164: cmp %ecx,%eax;");
    asm("loc_6DAB166: mov %edx,(%esi);");
    asm("loc_6DAB168: jbe loc_6DAB171;");
    asm("loc_6DAB16A: movl $0x16,0xC(%esi);");
    asm("loc_6DAB171: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB174: test %eax,%eax;");
    asm("loc_6DAB176: je loc_6DAB183;");
    asm("loc_6DAB178: pop %edi;");
    asm("loc_6DAB179: pop %esi;");
    asm("loc_6DAB17A: mov $0x16,%eax;");
    asm("loc_6DAB17F: pop %ebx;");
    asm("loc_6DAB180: ret $0xC;");
    asm("loc_6DAB183: mov (%ebx),%eax;");
    asm("loc_6DAB185: mov 0x24(%edi),%dl;");
    asm("loc_6DAB188: mov %dl,(%eax);");
    asm("loc_6DAB18A: inc %eax;");
    asm("loc_6DAB18B: mov %eax,(%ebx);");
    asm("loc_6DAB18D: mov 0x14(%edi),%eax;");
    asm("loc_6DAB190: push %esi;");
    asm("loc_6DAB191: push %eax;");
    asm("loc_6DAB192: push %ebx;");
    asm("loc_6DAB193: mov %edi,%ecx;");
    asm("loc_6DAB195: call _sub_6DA13C0;");
    asm("loc_6DAB19A: test %eax,%eax;");
    asm("loc_6DAB19C: mov %eax,0x1C(%edi);");
    asm("loc_6DAB19F: je loc_6DAB1AC;");
    asm("loc_6DAB1A1: pop %edi;");
    asm("loc_6DAB1A2: pop %esi;");
    asm("loc_6DAB1A3: mov $0x16,%eax;");
    asm("loc_6DAB1A8: pop %ebx;");
    asm("loc_6DAB1A9: ret $0xC;");
    asm("loc_6DAB1AC: mov (%esi),%ecx;");
    asm("loc_6DAB1AE: mov 0x18(%esp),%edx;");
    asm("loc_6DAB1B2: mov %ecx,(%edx);");
    asm("loc_6DAB1B4: mov 0xC(%edi),%eax;");
    asm("loc_6DAB1B7: push %eax;");
    asm("loc_6DAB1B8: call _sub_6DA16B0;");
    asm("loc_6DAB1BD: mov %eax,%ecx;");
    asm("loc_6DAB1BF: mov (%ecx),%eax;");
    asm("loc_6DAB1C1: mov 0x18(%ecx),%ebx;");
    asm("loc_6DAB1C4: add $4,%esp;");
    asm("loc_6DAB1C7: inc %eax;");
    asm("loc_6DAB1C8: mov %eax,(%ecx);");
    asm("loc_6DAB1CA: mov (%esi),%edx;");
    asm("loc_6DAB1CC: add %edx,%ebx;");
    asm("loc_6DAB1CE: mov %eax,%edi;");
    asm("loc_6DAB1D0: mov 0x10(%ecx),%eax;");
    asm("loc_6DAB1D3: mov %ebx,0x18(%ecx);");
    asm("loc_6DAB1D6: mov (%esi),%esi;");
    asm("loc_6DAB1D8: cmp %eax,%esi;");
    asm("loc_6DAB1DA: jbe loc_6DAB1DF;");
    asm("loc_6DAB1DC: mov %esi,0x10(%ecx);");
    asm("loc_6DAB1DF: mov 0x18(%ecx),%eax;");
    asm("loc_6DAB1E2: xor %edx,%edx;");
    asm("loc_6DAB1E4: div %edi;");
    asm("loc_6DAB1E6: pop %edi;");
    asm("loc_6DAB1E7: pop %esi;");
    asm("loc_6DAB1E8: pop %ebx;");
    asm("loc_6DAB1E9: mov %eax,8(%ecx);");
    asm("loc_6DAB1EC: xor %eax,%eax;");
    asm("loc_6DAB1EE: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAB200() // _sub_6DAB200
{
    __DEBUG_ASM(6DAB200);
    // chunk 0x6DAB200 _sub_6DAB200
    asm("loc_6DAB200: mov 8(%esp),%eax;");
    asm("loc_6DAB204: push %ebx;");
    asm("loc_6DAB205: push %esi;");
    asm("loc_6DAB206: push %edi;");
    asm("loc_6DAB207: mov %ecx,%edi;");
    asm("loc_6DAB209: mov 0x10(%esp),%ecx;");
    asm("loc_6DAB20D: lea 0x10(%edi),%esi;");
    asm("loc_6DAB210: mov %eax,4(%esi);");
    asm("loc_6DAB213: mov (%ecx),%edx;");
    asm("loc_6DAB215: mov %edx,8(%esi);");
    asm("loc_6DAB218: movl $0,(%esi);");
    asm("loc_6DAB21E: movl $0,0xC(%esi);");
    asm("loc_6DAB225: mov 0x14(%edi),%eax;");
    asm("loc_6DAB228: push %esi;");
    asm("loc_6DAB229: push %eax;");
    asm("loc_6DAB22A: lea 0x18(%edi),%ebx;");
    asm("loc_6DAB22D: push %ebx;");
    asm("loc_6DAB22E: mov %edi,%ecx;");
    asm("loc_6DAB230: call _sub_6DA1380;");
    asm("loc_6DAB235: test %eax,%eax;");
    asm("loc_6DAB237: mov %eax,0x1C(%edi);");
    asm("loc_6DAB23A: je loc_6DAB247;");
    asm("loc_6DAB23C: pop %edi;");
    asm("loc_6DAB23D: pop %esi;");
    asm("loc_6DAB23E: mov $0x16,%eax;");
    asm("loc_6DAB243: pop %ebx;");
    asm("loc_6DAB244: ret $0xC;");
    asm("loc_6DAB247: mov (%esi),%edx;");
    asm("loc_6DAB249: mov 4(%esi),%ecx;");
    asm("loc_6DAB24C: add $4,%edx;");
    asm("loc_6DAB24F: mov %edx,%eax;");
    asm("loc_6DAB251: cmp %ecx,%eax;");
    asm("loc_6DAB253: mov %edx,(%esi);");
    asm("loc_6DAB255: jbe loc_6DAB25E;");
    asm("loc_6DAB257: movl $0x16,0xC(%esi);");
    asm("loc_6DAB25E: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB261: test %eax,%eax;");
    asm("loc_6DAB263: je loc_6DAB270;");
    asm("loc_6DAB265: pop %edi;");
    asm("loc_6DAB266: pop %esi;");
    asm("loc_6DAB267: mov $0x16,%eax;");
    asm("loc_6DAB26C: pop %ebx;");
    asm("loc_6DAB26D: ret $0xC;");
    asm("loc_6DAB270: mov (%ebx),%eax;");
    asm("loc_6DAB272: mov 0x20(%edi),%ecx;");
    asm("loc_6DAB275: mov %ecx,(%eax);");
    asm("loc_6DAB277: add $4,%eax;");
    asm("loc_6DAB27A: mov %eax,(%ebx);");
    asm("loc_6DAB27C: mov (%esi),%edx;");
    asm("loc_6DAB27E: mov 4(%esi),%ecx;");
    asm("loc_6DAB281: inc %edx;");
    asm("loc_6DAB282: mov %edx,%eax;");
    asm("loc_6DAB284: cmp %ecx,%eax;");
    asm("loc_6DAB286: mov %edx,(%esi);");
    asm("loc_6DAB288: jbe loc_6DAB291;");
    asm("loc_6DAB28A: movl $0x16,0xC(%esi);");
    asm("loc_6DAB291: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB294: test %eax,%eax;");
    asm("loc_6DAB296: je loc_6DAB2A3;");
    asm("loc_6DAB298: pop %edi;");
    asm("loc_6DAB299: pop %esi;");
    asm("loc_6DAB29A: mov $0x16,%eax;");
    asm("loc_6DAB29F: pop %ebx;");
    asm("loc_6DAB2A0: ret $0xC;");
    asm("loc_6DAB2A3: mov (%ebx),%eax;");
    asm("loc_6DAB2A5: mov 0x28(%edi),%dl;");
    asm("loc_6DAB2A8: mov %dl,(%eax);");
    asm("loc_6DAB2AA: inc %eax;");
    asm("loc_6DAB2AB: mov %eax,(%ebx);");
    asm("loc_6DAB2AD: mov (%esi),%edx;");
    asm("loc_6DAB2AF: mov 4(%esi),%ecx;");
    asm("loc_6DAB2B2: add $4,%edx;");
    asm("loc_6DAB2B5: mov %edx,%eax;");
    asm("loc_6DAB2B7: cmp %ecx,%eax;");
    asm("loc_6DAB2B9: mov %edx,(%esi);");
    asm("loc_6DAB2BB: jbe loc_6DAB2C4;");
    asm("loc_6DAB2BD: movl $0x16,0xC(%esi);");
    asm("loc_6DAB2C4: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB2C7: test %eax,%eax;");
    asm("loc_6DAB2C9: je loc_6DAB2D6;");
    asm("loc_6DAB2CB: pop %edi;");
    asm("loc_6DAB2CC: pop %esi;");
    asm("loc_6DAB2CD: mov $0x16,%eax;");
    asm("loc_6DAB2D2: pop %ebx;");
    asm("loc_6DAB2D3: ret $0xC;");
    asm("loc_6DAB2D6: mov (%ebx),%eax;");
    asm("loc_6DAB2D8: mov 0x24(%edi),%ecx;");
    asm("loc_6DAB2DB: mov %ecx,(%eax);");
    asm("loc_6DAB2DD: mov 0x14(%edi),%edx;");
    asm("loc_6DAB2E0: push %esi;");
    asm("loc_6DAB2E1: push %edx;");
    asm("loc_6DAB2E2: add $4,%eax;");
    asm("loc_6DAB2E5: push %ebx;");
    asm("loc_6DAB2E6: mov %edi,%ecx;");
    asm("loc_6DAB2E8: mov %eax,(%ebx);");
    asm("loc_6DAB2EA: call _sub_6DA13C0;");
    asm("loc_6DAB2EF: test %eax,%eax;");
    asm("loc_6DAB2F1: mov %eax,0x1C(%edi);");
    asm("loc_6DAB2F4: je loc_6DAB301;");
    asm("loc_6DAB2F6: pop %edi;");
    asm("loc_6DAB2F7: pop %esi;");
    asm("loc_6DAB2F8: mov $0x16,%eax;");
    asm("loc_6DAB2FD: pop %ebx;");
    asm("loc_6DAB2FE: ret $0xC;");
    asm("loc_6DAB301: mov (%esi),%eax;");
    asm("loc_6DAB303: mov 0x18(%esp),%ecx;");
    asm("loc_6DAB307: mov %eax,(%ecx);");
    asm("loc_6DAB309: mov 0xC(%edi),%edx;");
    asm("loc_6DAB30C: push %edx;");
    asm("loc_6DAB30D: call _sub_6DA16B0;");
    asm("loc_6DAB312: mov %eax,%ecx;");
    asm("loc_6DAB314: mov (%ecx),%edi;");
    asm("loc_6DAB316: mov 0x18(%ecx),%edx;");
    asm("loc_6DAB319: add $4,%esp;");
    asm("loc_6DAB31C: inc %edi;");
    asm("loc_6DAB31D: mov %edi,(%ecx);");
    asm("loc_6DAB31F: mov (%esi),%eax;");
    asm("loc_6DAB321: add %eax,%edx;");
    asm("loc_6DAB323: mov 0x10(%ecx),%eax;");
    asm("loc_6DAB326: mov %edx,0x18(%ecx);");
    asm("loc_6DAB329: mov (%esi),%esi;");
    asm("loc_6DAB32B: cmp %eax,%esi;");
    asm("loc_6DAB32D: jbe loc_6DAB332;");
    asm("loc_6DAB32F: mov %esi,0x10(%ecx);");
    asm("loc_6DAB332: mov 0x18(%ecx),%eax;");
    asm("loc_6DAB335: xor %edx,%edx;");
    asm("loc_6DAB337: div %edi;");
    asm("loc_6DAB339: pop %edi;");
    asm("loc_6DAB33A: pop %esi;");
    asm("loc_6DAB33B: pop %ebx;");
    asm("loc_6DAB33C: mov %eax,8(%ecx);");
    asm("loc_6DAB33F: xor %eax,%eax;");
    asm("loc_6DAB341: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAB350() // _sub_6DAB350
{
    __DEBUG_ASM(6DAB350);
    // chunk 0x6DAB350 _sub_6DAB350
    asm("loc_6DAB350: mov 4(%esp),%eax;");
    asm("loc_6DAB354: push %ebx;");
    asm("loc_6DAB355: push %ebp;");
    asm("loc_6DAB356: mov 0x10(%esp),%ebp;");
    asm("loc_6DAB35A: push %esi;");
    asm("loc_6DAB35B: push %edi;");
    asm("loc_6DAB35C: mov %ecx,%edi;");
    asm("loc_6DAB35E: lea 0x10(%edi),%esi;");
    asm("loc_6DAB361: push %esi;");
    asm("loc_6DAB362: push %ebp;");
    asm("loc_6DAB363: lea 0x18(%edi),%ebx;");
    asm("loc_6DAB366: push %ebx;");
    asm("loc_6DAB367: mov %ebp,4(%esi);");
    asm("loc_6DAB36A: mov %eax,8(%esi);");
    asm("loc_6DAB36D: movl $0,(%esi);");
    asm("loc_6DAB373: movl $0,0xC(%esi);");
    asm("loc_6DAB37A: call _sub_6DA13C0;");
    asm("loc_6DAB37F: test %eax,%eax;");
    asm("loc_6DAB381: mov %eax,0x1C(%edi);");
    asm("loc_6DAB384: je loc_6DAB392;");
    asm("loc_6DAB386: pop %edi;");
    asm("loc_6DAB387: pop %esi;");
    asm("loc_6DAB388: pop %ebp;");
    asm("loc_6DAB389: mov $0x17,%eax;");
    asm("loc_6DAB38E: pop %ebx;");
    asm("loc_6DAB38F: ret $0xC;");
    asm("loc_6DAB392: mov (%esi),%edx;");
    asm("loc_6DAB394: mov 4(%esi),%ecx;");
    asm("loc_6DAB397: add $4,%edx;");
    asm("loc_6DAB39A: mov %edx,%eax;");
    asm("loc_6DAB39C: cmp %ecx,%eax;");
    asm("loc_6DAB39E: mov %edx,(%esi);");
    asm("loc_6DAB3A0: mov $0x17,%ecx;");
    asm("loc_6DAB3A5: jbe loc_6DAB3AA;");
    asm("loc_6DAB3A7: mov %ecx,0xC(%esi);");
    asm("loc_6DAB3AA: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB3AD: test %eax,%eax;");
    asm("loc_6DAB3AF: jne loc_6DAB470;");
    asm("loc_6DAB3B5: mov (%ebx),%eax;");
    asm("loc_6DAB3B7: mov (%eax),%edx;");
    asm("loc_6DAB3B9: add $4,%eax;");
    asm("loc_6DAB3BC: mov %eax,(%ebx);");
    asm("loc_6DAB3BE: mov %edx,0x20(%edi);");
    asm("loc_6DAB3C1: mov (%esi),%eax;");
    asm("loc_6DAB3C3: mov 4(%esi),%edx;");
    asm("loc_6DAB3C6: inc %eax;");
    asm("loc_6DAB3C7: cmp %edx,%eax;");
    asm("loc_6DAB3C9: mov %eax,(%esi);");
    asm("loc_6DAB3CB: jbe loc_6DAB3D0;");
    asm("loc_6DAB3CD: mov %ecx,0xC(%esi);");
    asm("loc_6DAB3D0: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB3D3: test %eax,%eax;");
    asm("loc_6DAB3D5: jne loc_6DAB470;");
    asm("loc_6DAB3DB: mov (%ebx),%eax;");
    asm("loc_6DAB3DD: mov (%eax),%dl;");
    asm("loc_6DAB3DF: inc %eax;");
    asm("loc_6DAB3E0: mov %eax,(%ebx);");
    asm("loc_6DAB3E2: mov %dl,0x28(%edi);");
    asm("loc_6DAB3E5: mov (%esi),%eax;");
    asm("loc_6DAB3E7: mov 4(%esi),%edx;");
    asm("loc_6DAB3EA: add $4,%eax;");
    asm("loc_6DAB3ED: cmp %edx,%eax;");
    asm("loc_6DAB3EF: mov %eax,(%esi);");
    asm("loc_6DAB3F1: jbe loc_6DAB3F6;");
    asm("loc_6DAB3F3: mov %ecx,0xC(%esi);");
    asm("loc_6DAB3F6: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB3F9: test %eax,%eax;");
    asm("loc_6DAB3FB: jne loc_6DAB470;");
    asm("loc_6DAB3FD: mov (%ebx),%eax;");
    asm("loc_6DAB3FF: mov (%eax),%ecx;");
    asm("loc_6DAB401: push %esi;");
    asm("loc_6DAB402: push %ebp;");
    asm("loc_6DAB403: mov %ecx,0x24(%edi);");
    asm("loc_6DAB406: add $4,%eax;");
    asm("loc_6DAB409: push %ebx;");
    asm("loc_6DAB40A: mov %edi,%ecx;");
    asm("loc_6DAB40C: mov %eax,(%ebx);");
    asm("loc_6DAB40E: call _sub_6DA13C0;");
    asm("loc_6DAB413: test %eax,%eax;");
    asm("loc_6DAB415: mov %eax,0x1C(%edi);");
    asm("loc_6DAB418: je loc_6DAB426;");
    asm("loc_6DAB41A: pop %edi;");
    asm("loc_6DAB41B: pop %esi;");
    asm("loc_6DAB41C: pop %ebp;");
    asm("loc_6DAB41D: mov $0x17,%eax;");
    asm("loc_6DAB422: pop %ebx;");
    asm("loc_6DAB423: ret $0xC;");
    asm("loc_6DAB426: mov (%esi),%edx;");
    asm("loc_6DAB428: mov 0x1C(%esp),%eax;");
    asm("loc_6DAB42C: mov %edx,(%eax);");
    asm("loc_6DAB42E: mov 0xC(%edi),%ecx;");
    asm("loc_6DAB431: push %ecx;");
    asm("loc_6DAB432: call _sub_6DA16B0;");
    asm("loc_6DAB437: mov %eax,%ecx;");
    asm("loc_6DAB439: mov 4(%ecx),%edx;");
    asm("loc_6DAB43C: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAB43F: mov 0x14(%ecx),%eax;");
    asm("loc_6DAB442: add $4,%esp;");
    asm("loc_6DAB445: inc %edx;");
    asm("loc_6DAB446: mov %edx,4(%ecx);");
    asm("loc_6DAB449: mov %edx,%edi;");
    asm("loc_6DAB44B: mov (%esi),%edx;");
    asm("loc_6DAB44D: add $2,%edx;");
    asm("loc_6DAB450: add %edx,%ebp;");
    asm("loc_6DAB452: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAB455: mov (%esi),%esi;");
    asm("loc_6DAB457: add $2,%eax;");
    asm("loc_6DAB45A: cmp %eax,%esi;");
    asm("loc_6DAB45C: jbe loc_6DAB464;");
    asm("loc_6DAB45E: add $2,%esi;");
    asm("loc_6DAB461: mov %esi,0x14(%ecx);");
    asm("loc_6DAB464: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAB467: xor %edx,%edx;");
    asm("loc_6DAB469: div %edi;");
    asm("loc_6DAB46B: mov %eax,0xC(%ecx);");
    asm("loc_6DAB46E: xor %eax,%eax;");
    asm("loc_6DAB470: pop %edi;");
    asm("loc_6DAB471: pop %esi;");
    asm("loc_6DAB472: pop %ebp;");
    asm("loc_6DAB473: pop %ebx;");
    asm("loc_6DAB474: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAB480() // _sub_6DAB480
{
    __DEBUG_ASM(6DAB480);
    // chunk 0x6DAB480 _sub_6DAB480
    asm("loc_6DAB480: mov _data_6DB6380,%eax;");
    asm("loc_6DAB485: mov %eax,_data_6DBC1F0;");
    asm("loc_6DAB48A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAB490() // _sub_6DAB490
{
    __DEBUG_ASM(6DAB490);
    // chunk 0x6DAB490 _sub_6DAB490
    asm("loc_6DAB490: mov _data_6DB6380,%eax;");
    asm("loc_6DAB495: mov %eax,_data_6DBC1F4;");
    asm("loc_6DAB49A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAB4A0() // _sub_6DAB4A0
{
    __DEBUG_ASM(6DAB4A0);
    // chunk 0x6DAB4A0 _sub_6DAB4A0
    asm("loc_6DAB4A0: mov _data_6DB6384,%eax;");
    asm("loc_6DAB4A5: mov %eax,_data_6DBC1EC;");
    asm("loc_6DAB4AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAB4B0() // _sub_6DAB4B0
{
    __DEBUG_ASM(6DAB4B0);
    // chunk 0x6DAB4B0 _sub_6DAB4B0
    asm("loc_6DAB4B0: mov 8(%esp),%eax;");
    asm("loc_6DAB4B4: push %ebx;");
    asm("loc_6DAB4B5: push %ebp;");
    asm("loc_6DAB4B6: mov %ecx,%ebp;");
    asm("loc_6DAB4B8: mov 0xC(%esp),%ecx;");
    asm("loc_6DAB4BC: lea 0x10(%ebp),%ebx;");
    asm("loc_6DAB4BF: push %esi;");
    asm("loc_6DAB4C0: mov %eax,4(%ebx);");
    asm("loc_6DAB4C3: mov (%ecx),%edx;");
    asm("loc_6DAB4C5: push %edi;");
    asm("loc_6DAB4C6: mov %edx,8(%ebx);");
    asm("loc_6DAB4C9: movl $0,(%ebx);");
    asm("loc_6DAB4CF: movl $0,0xC(%ebx);");
    asm("loc_6DAB4D6: mov 0x14(%ebp),%eax;");
    asm("loc_6DAB4D9: push %ebx;");
    asm("loc_6DAB4DA: push %eax;");
    asm("loc_6DAB4DB: lea 0x18(%ebp),%esi;");
    asm("loc_6DAB4DE: push %esi;");
    asm("loc_6DAB4DF: mov %ebp,%ecx;");
    asm("loc_6DAB4E1: call _sub_6DA1380;");
    asm("loc_6DAB4E6: test %eax,%eax;");
    asm("loc_6DAB4E8: mov %eax,0x1C(%ebp);");
    asm("loc_6DAB4EB: je loc_6DAB4F9;");
    asm("loc_6DAB4ED: pop %edi;");
    asm("loc_6DAB4EE: pop %esi;");
    asm("loc_6DAB4EF: pop %ebp;");
    asm("loc_6DAB4F0: mov $0x16,%eax;");
    asm("loc_6DAB4F5: pop %ebx;");
    asm("loc_6DAB4F6: ret $0xC;");
    asm("loc_6DAB4F9: mov (%ebx),%edx;");
    asm("loc_6DAB4FB: mov 4(%ebx),%ecx;");
    asm("loc_6DAB4FE: add $4,%edx;");
    asm("loc_6DAB501: mov %edx,%eax;");
    asm("loc_6DAB503: cmp %ecx,%eax;");
    asm("loc_6DAB505: mov %edx,(%ebx);");
    asm("loc_6DAB507: mov $0x16,%eax;");
    asm("loc_6DAB50C: jbe loc_6DAB511;");
    asm("loc_6DAB50E: mov %eax,0xC(%ebx);");
    asm("loc_6DAB511: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DAB514: test %ecx,%ecx;");
    asm("loc_6DAB516: jne loc_6DAB620;");
    asm("loc_6DAB51C: mov (%esi),%ecx;");
    asm("loc_6DAB51E: mov 0x20(%ebp),%edx;");
    asm("loc_6DAB521: mov %edx,(%ecx);");
    asm("loc_6DAB523: add $4,%ecx;");
    asm("loc_6DAB526: mov %ecx,(%esi);");
    asm("loc_6DAB528: mov (%ebx),%edi;");
    asm("loc_6DAB52A: mov 4(%ebx),%edx;");
    asm("loc_6DAB52D: add $4,%edi;");
    asm("loc_6DAB530: mov %edi,%ecx;");
    asm("loc_6DAB532: cmp %edx,%ecx;");
    asm("loc_6DAB534: mov %edi,(%ebx);");
    asm("loc_6DAB536: jbe loc_6DAB53B;");
    asm("loc_6DAB538: mov %eax,0xC(%ebx);");
    asm("loc_6DAB53B: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DAB53E: test %ecx,%ecx;");
    asm("loc_6DAB540: jne loc_6DAB620;");
    asm("loc_6DAB546: mov (%esi),%ecx;");
    asm("loc_6DAB548: mov 0x24(%ebp),%edx;");
    asm("loc_6DAB54B: mov %edx,(%ecx);");
    asm("loc_6DAB54D: add $4,%ecx;");
    asm("loc_6DAB550: mov %ecx,(%esi);");
    asm("loc_6DAB552: mov (%ebx),%edi;");
    asm("loc_6DAB554: mov 4(%ebx),%edx;");
    asm("loc_6DAB557: add $4,%edi;");
    asm("loc_6DAB55A: mov %edi,%ecx;");
    asm("loc_6DAB55C: cmp %edx,%ecx;");
    asm("loc_6DAB55E: mov %edi,(%ebx);");
    asm("loc_6DAB560: jbe loc_6DAB565;");
    asm("loc_6DAB562: mov %eax,0xC(%ebx);");
    asm("loc_6DAB565: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DAB568: test %ecx,%ecx;");
    asm("loc_6DAB56A: jne loc_6DAB620;");
    asm("loc_6DAB570: mov (%esi),%ecx;");
    asm("loc_6DAB572: mov 0x28(%ebp),%edx;");
    asm("loc_6DAB575: mov %edx,(%ecx);");
    asm("loc_6DAB577: add $4,%ecx;");
    asm("loc_6DAB57A: mov %ecx,(%esi);");
    asm("loc_6DAB57C: mov 0x28(%ebp),%ecx;");
    asm("loc_6DAB57F: mov (%ebx),%edi;");
    asm("loc_6DAB581: mov 4(%ebx),%edx;");
    asm("loc_6DAB584: add %ecx,%edi;");
    asm("loc_6DAB586: mov %edi,%ecx;");
    asm("loc_6DAB588: cmp %edx,%ecx;");
    asm("loc_6DAB58A: mov %edi,(%ebx);");
    asm("loc_6DAB58C: jbe loc_6DAB591;");
    asm("loc_6DAB58E: mov %eax,0xC(%ebx);");
    asm("loc_6DAB591: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DAB594: test %ecx,%ecx;");
    asm("loc_6DAB596: jne loc_6DAB620;");
    asm("loc_6DAB59C: mov 0x28(%ebp),%eax;");
    asm("loc_6DAB59F: mov (%esi),%edi;");
    asm("loc_6DAB5A1: mov 0x2C(%ebp),%esi;");
    asm("loc_6DAB5A4: mov %eax,%ecx;");
    asm("loc_6DAB5A6: mov %ecx,%edx;");
    asm("loc_6DAB5A8: shr $2,%ecx;");
    asm("loc_6DAB5AB: mov %edi,0x18(%esp);");
    asm("loc_6DAB5AF: rep movsl (%esi),(%edi);");
    asm("loc_6DAB5B1: mov %edx,%ecx;");
    asm("loc_6DAB5B3: and $3,%ecx;");
    asm("loc_6DAB5B6: rep movsb (%esi),(%edi);");
    asm("loc_6DAB5B8: mov 0x18(%esp),%ecx;");
    asm("loc_6DAB5BC: mov 0x14(%ebp),%edx;");
    asm("loc_6DAB5BF: add %eax,%ecx;");
    asm("loc_6DAB5C1: push %ebx;");
    asm("loc_6DAB5C2: lea 0x18(%ebp),%eax;");
    asm("loc_6DAB5C5: push %edx;");
    asm("loc_6DAB5C6: mov %ecx,(%eax);");
    asm("loc_6DAB5C8: push %eax;");
    asm("loc_6DAB5C9: mov %ebp,%ecx;");
    asm("loc_6DAB5CB: call _sub_6DA13C0;");
    asm("loc_6DAB5D0: test %eax,%eax;");
    asm("loc_6DAB5D2: mov %eax,0x1C(%ebp);");
    asm("loc_6DAB5D5: je loc_6DAB5E3;");
    asm("loc_6DAB5D7: pop %edi;");
    asm("loc_6DAB5D8: pop %esi;");
    asm("loc_6DAB5D9: pop %ebp;");
    asm("loc_6DAB5DA: mov $0x16,%eax;");
    asm("loc_6DAB5DF: pop %ebx;");
    asm("loc_6DAB5E0: ret $0xC;");
    asm("loc_6DAB5E3: mov (%ebx),%eax;");
    asm("loc_6DAB5E5: mov 0x1C(%esp),%ecx;");
    asm("loc_6DAB5E9: mov %eax,(%ecx);");
    asm("loc_6DAB5EB: mov 0xC(%ebp),%edx;");
    asm("loc_6DAB5EE: push %edx;");
    asm("loc_6DAB5EF: call _sub_6DA16B0;");
    asm("loc_6DAB5F4: mov %eax,%ecx;");
    asm("loc_6DAB5F6: mov (%ecx),%esi;");
    asm("loc_6DAB5F8: mov 0x18(%ecx),%edx;");
    asm("loc_6DAB5FB: add $4,%esp;");
    asm("loc_6DAB5FE: inc %esi;");
    asm("loc_6DAB5FF: mov %esi,(%ecx);");
    asm("loc_6DAB601: mov (%ebx),%eax;");
    asm("loc_6DAB603: add %eax,%edx;");
    asm("loc_6DAB605: mov 0x10(%ecx),%eax;");
    asm("loc_6DAB608: mov %edx,0x18(%ecx);");
    asm("loc_6DAB60B: mov (%ebx),%ebx;");
    asm("loc_6DAB60D: cmp %eax,%ebx;");
    asm("loc_6DAB60F: jbe loc_6DAB614;");
    asm("loc_6DAB611: mov %ebx,0x10(%ecx);");
    asm("loc_6DAB614: mov 0x18(%ecx),%eax;");
    asm("loc_6DAB617: xor %edx,%edx;");
    asm("loc_6DAB619: div %esi;");
    asm("loc_6DAB61B: mov %eax,8(%ecx);");
    asm("loc_6DAB61E: xor %eax,%eax;");
    asm("loc_6DAB620: pop %edi;");
    asm("loc_6DAB621: pop %esi;");
    asm("loc_6DAB622: pop %ebp;");
    asm("loc_6DAB623: pop %ebx;");
    asm("loc_6DAB624: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAB630() // _sub_6DAB630
{
    __DEBUG_ASM(6DAB630);
    // chunk 0x6DAB630 _sub_6DAB630
    asm("loc_6DAB630: mov 4(%esp),%eax;");
    asm("loc_6DAB634: push %ebx;");
    asm("loc_6DAB635: push %ebp;");
    asm("loc_6DAB636: mov 0x10(%esp),%ebp;");
    asm("loc_6DAB63A: push %esi;");
    asm("loc_6DAB63B: push %edi;");
    asm("loc_6DAB63C: mov %ecx,%edi;");
    asm("loc_6DAB63E: lea 0x10(%edi),%esi;");
    asm("loc_6DAB641: push %esi;");
    asm("loc_6DAB642: push %ebp;");
    asm("loc_6DAB643: lea 0x18(%edi),%ebx;");
    asm("loc_6DAB646: push %ebx;");
    asm("loc_6DAB647: mov %ebp,4(%esi);");
    asm("loc_6DAB64A: mov %eax,8(%esi);");
    asm("loc_6DAB64D: movl $0,(%esi);");
    asm("loc_6DAB653: movl $0,0xC(%esi);");
    asm("loc_6DAB65A: call _sub_6DA13C0;");
    asm("loc_6DAB65F: test %eax,%eax;");
    asm("loc_6DAB661: mov %eax,0x1C(%edi);");
    asm("loc_6DAB664: je loc_6DAB672;");
    asm("loc_6DAB666: pop %edi;");
    asm("loc_6DAB667: pop %esi;");
    asm("loc_6DAB668: pop %ebp;");
    asm("loc_6DAB669: mov $0x17,%eax;");
    asm("loc_6DAB66E: pop %ebx;");
    asm("loc_6DAB66F: ret $0xC;");
    asm("loc_6DAB672: mov (%esi),%edx;");
    asm("loc_6DAB674: mov 4(%esi),%ecx;");
    asm("loc_6DAB677: add $4,%edx;");
    asm("loc_6DAB67A: mov %edx,%eax;");
    asm("loc_6DAB67C: cmp %ecx,%eax;");
    asm("loc_6DAB67E: mov %edx,(%esi);");
    asm("loc_6DAB680: jbe loc_6DAB689;");
    asm("loc_6DAB682: movl $0x17,0xC(%esi);");
    asm("loc_6DAB689: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB68C: test %eax,%eax;");
    asm("loc_6DAB68E: jne loc_6DAB73C;");
    asm("loc_6DAB694: mov (%ebx),%eax;");
    asm("loc_6DAB696: mov (%eax),%ecx;");
    asm("loc_6DAB698: add $4,%eax;");
    asm("loc_6DAB69B: mov %eax,(%ebx);");
    asm("loc_6DAB69D: mov %ecx,0x20(%edi);");
    asm("loc_6DAB6A0: mov (%esi),%edx;");
    asm("loc_6DAB6A2: mov 4(%esi),%ecx;");
    asm("loc_6DAB6A5: add $4,%edx;");
    asm("loc_6DAB6A8: mov %edx,%eax;");
    asm("loc_6DAB6AA: cmp %ecx,%eax;");
    asm("loc_6DAB6AC: mov %edx,(%esi);");
    asm("loc_6DAB6AE: jbe loc_6DAB6B7;");
    asm("loc_6DAB6B0: movl $0x17,0xC(%esi);");
    asm("loc_6DAB6B7: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB6BA: test %eax,%eax;");
    asm("loc_6DAB6BC: jne loc_6DAB73C;");
    asm("loc_6DAB6BE: mov (%ebx),%eax;");
    asm("loc_6DAB6C0: mov (%eax),%edx;");
    asm("loc_6DAB6C2: add $4,%eax;");
    asm("loc_6DAB6C5: mov %eax,(%ebx);");
    asm("loc_6DAB6C7: lea 0x28(%edi),%eax;");
    asm("loc_6DAB6CA: push %eax;");
    asm("loc_6DAB6CB: mov %edi,%ecx;");
    asm("loc_6DAB6CD: mov %edx,0x24(%edi);");
    asm("loc_6DAB6D0: call _sub_6DA1620;");
    asm("loc_6DAB6D5: push %esi;");
    asm("loc_6DAB6D6: push %ebp;");
    asm("loc_6DAB6D7: push %ebx;");
    asm("loc_6DAB6D8: mov %edi,%ecx;");
    asm("loc_6DAB6DA: call _sub_6DA13C0;");
    asm("loc_6DAB6DF: test %eax,%eax;");
    asm("loc_6DAB6E1: mov %eax,0x1C(%edi);");
    asm("loc_6DAB6E4: je loc_6DAB6F2;");
    asm("loc_6DAB6E6: pop %edi;");
    asm("loc_6DAB6E7: pop %esi;");
    asm("loc_6DAB6E8: pop %ebp;");
    asm("loc_6DAB6E9: mov $0x17,%eax;");
    asm("loc_6DAB6EE: pop %ebx;");
    asm("loc_6DAB6EF: ret $0xC;");
    asm("loc_6DAB6F2: mov (%esi),%ecx;");
    asm("loc_6DAB6F4: mov 0x1C(%esp),%edx;");
    asm("loc_6DAB6F8: mov %ecx,(%edx);");
    asm("loc_6DAB6FA: mov 0xC(%edi),%eax;");
    asm("loc_6DAB6FD: push %eax;");
    asm("loc_6DAB6FE: call _sub_6DA16B0;");
    asm("loc_6DAB703: mov %eax,%ecx;");
    asm("loc_6DAB705: mov 4(%ecx),%edx;");
    asm("loc_6DAB708: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAB70B: mov 0x14(%ecx),%eax;");
    asm("loc_6DAB70E: add $4,%esp;");
    asm("loc_6DAB711: inc %edx;");
    asm("loc_6DAB712: mov %edx,4(%ecx);");
    asm("loc_6DAB715: mov %edx,%edi;");
    asm("loc_6DAB717: mov (%esi),%edx;");
    asm("loc_6DAB719: add $2,%edx;");
    asm("loc_6DAB71C: add %edx,%ebp;");
    asm("loc_6DAB71E: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAB721: mov (%esi),%esi;");
    asm("loc_6DAB723: add $2,%eax;");
    asm("loc_6DAB726: cmp %eax,%esi;");
    asm("loc_6DAB728: jbe loc_6DAB730;");
    asm("loc_6DAB72A: add $2,%esi;");
    asm("loc_6DAB72D: mov %esi,0x14(%ecx);");
    asm("loc_6DAB730: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAB733: xor %edx,%edx;");
    asm("loc_6DAB735: div %edi;");
    asm("loc_6DAB737: mov %eax,0xC(%ecx);");
    asm("loc_6DAB73A: xor %eax,%eax;");
    asm("loc_6DAB73C: pop %edi;");
    asm("loc_6DAB73D: pop %esi;");
    asm("loc_6DAB73E: pop %ebp;");
    asm("loc_6DAB73F: pop %ebx;");
    asm("loc_6DAB740: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAB750() // _sub_6DAB750
{
    __DEBUG_ASM(6DAB750);
    // chunk 0x6DAB750 _sub_6DAB750
    asm("loc_6DAB750: mov _data_6DB6390,%eax;");
    asm("loc_6DAB755: mov %eax,_data_6DBC200;");
    asm("loc_6DAB75A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAB760() // _sub_6DAB760
{
    __DEBUG_ASM(6DAB760);
    // chunk 0x6DAB760 _sub_6DAB760
    asm("loc_6DAB760: mov _data_6DB6390,%eax;");
    asm("loc_6DAB765: mov %eax,_data_6DBC204;");
    asm("loc_6DAB76A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAB770() // _sub_6DAB770
{
    __DEBUG_ASM(6DAB770);
    // chunk 0x6DAB770 _sub_6DAB770
    asm("loc_6DAB770: mov _data_6DB6394,%eax;");
    asm("loc_6DAB775: mov %eax,_data_6DBC1FC;");
    asm("loc_6DAB77A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAB780() // _sub_6DAB780
{
    __DEBUG_ASM(6DAB780);
    // chunk 0x6DAB780 _sub_6DAB780
    asm("loc_6DAB780: mov 8(%esp),%eax;");
    asm("loc_6DAB784: sub $0x10,%esp;");
    asm("loc_6DAB787: push %ebx;");
    asm("loc_6DAB788: push %ebp;");
    asm("loc_6DAB789: push %esi;");
    asm("loc_6DAB78A: push %edi;");
    asm("loc_6DAB78B: mov %ecx,%edi;");
    asm("loc_6DAB78D: mov 0x24(%esp),%ecx;");
    asm("loc_6DAB791: lea 0x10(%edi),%esi;");
    asm("loc_6DAB794: mov %eax,4(%esi);");
    asm("loc_6DAB797: mov (%ecx),%edx;");
    asm("loc_6DAB799: mov %edx,8(%esi);");
    asm("loc_6DAB79C: movl $0,(%esi);");
    asm("loc_6DAB7A2: movl $0,0xC(%esi);");
    asm("loc_6DAB7A9: mov 0x14(%edi),%eax;");
    asm("loc_6DAB7AC: push %esi;");
    asm("loc_6DAB7AD: push %eax;");
    asm("loc_6DAB7AE: lea 0x18(%edi),%ebx;");
    asm("loc_6DAB7B1: push %ebx;");
    asm("loc_6DAB7B2: mov %edi,%ecx;");
    asm("loc_6DAB7B4: call _sub_6DA1380;");
    asm("loc_6DAB7B9: test %eax,%eax;");
    asm("loc_6DAB7BB: mov %eax,0x1C(%edi);");
    asm("loc_6DAB7BE: je loc_6DAB7CF;");
    asm("loc_6DAB7C0: pop %edi;");
    asm("loc_6DAB7C1: pop %esi;");
    asm("loc_6DAB7C2: pop %ebp;");
    asm("loc_6DAB7C3: mov $0x16,%eax;");
    asm("loc_6DAB7C8: pop %ebx;");
    asm("loc_6DAB7C9: add $0x10,%esp;");
    asm("loc_6DAB7CC: ret $0xC;");
    asm("loc_6DAB7CF: mov (%esi),%edx;");
    asm("loc_6DAB7D1: mov 4(%esi),%ecx;");
    asm("loc_6DAB7D4: add $0xC,%edx;");
    asm("loc_6DAB7D7: mov %edx,%eax;");
    asm("loc_6DAB7D9: cmp %ecx,%eax;");
    asm("loc_6DAB7DB: mov %edx,(%esi);");
    asm("loc_6DAB7DD: jbe loc_6DAB7E6;");
    asm("loc_6DAB7DF: movl $0x16,0xC(%esi);");
    asm("loc_6DAB7E6: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB7E9: test %eax,%eax;");
    asm("loc_6DAB7EB: je loc_6DAB7FC;");
    asm("loc_6DAB7ED: pop %edi;");
    asm("loc_6DAB7EE: pop %esi;");
    asm("loc_6DAB7EF: pop %ebp;");
    asm("loc_6DAB7F0: mov $0x16,%eax;");
    asm("loc_6DAB7F5: pop %ebx;");
    asm("loc_6DAB7F6: add $0x10,%esp;");
    asm("loc_6DAB7F9: ret $0xC;");
    asm("loc_6DAB7FC: mov 0x20(%edi),%ecx;");
    asm("loc_6DAB7FF: mov (%ebx),%ebp;");
    asm("loc_6DAB801: mov 0x24(%edi),%edx;");
    asm("loc_6DAB804: mov 0x28(%edi),%eax;");
    asm("loc_6DAB807: mov %ecx,0x10(%esp);");
    asm("loc_6DAB80B: lea 0x10(%esp),%ecx;");
    asm("loc_6DAB80F: push %ecx;");
    asm("loc_6DAB810: mov %ebp,%ecx;");
    asm("loc_6DAB812: mov %edx,0x18(%esp);");
    asm("loc_6DAB816: mov %eax,0x1C(%esp);");
    asm("loc_6DAB81A: call _sub_6D8F510;");
    asm("loc_6DAB81F: add $0xC,%ebp;");
    asm("loc_6DAB822: mov %ebp,(%ebx);");
    asm("loc_6DAB824: mov (%esi),%edx;");
    asm("loc_6DAB826: mov 4(%esi),%ecx;");
    asm("loc_6DAB829: add $0x10,%edx;");
    asm("loc_6DAB82C: mov %edx,%eax;");
    asm("loc_6DAB82E: cmp %ecx,%eax;");
    asm("loc_6DAB830: mov %edx,(%esi);");
    asm("loc_6DAB832: jbe loc_6DAB83B;");
    asm("loc_6DAB834: movl $0x16,0xC(%esi);");
    asm("loc_6DAB83B: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB83E: test %eax,%eax;");
    asm("loc_6DAB840: je loc_6DAB851;");
    asm("loc_6DAB842: pop %edi;");
    asm("loc_6DAB843: pop %esi;");
    asm("loc_6DAB844: pop %ebp;");
    asm("loc_6DAB845: mov $0x16,%eax;");
    asm("loc_6DAB84A: pop %ebx;");
    asm("loc_6DAB84B: add $0x10,%esp;");
    asm("loc_6DAB84E: ret $0xC;");
    asm("loc_6DAB851: mov (%ebx),%ebp;");
    asm("loc_6DAB853: lea 0x2C(%edi),%edx;");
    asm("loc_6DAB856: mov (%edx),%eax;");
    asm("loc_6DAB858: mov 4(%edx),%ecx;");
    asm("loc_6DAB85B: mov %eax,0x10(%esp);");
    asm("loc_6DAB85F: mov 8(%edx),%eax;");
    asm("loc_6DAB862: mov %ecx,0x14(%esp);");
    asm("loc_6DAB866: mov 0xC(%edx),%ecx;");
    asm("loc_6DAB869: lea 0x10(%esp),%edx;");
    asm("loc_6DAB86D: mov %ecx,0x1C(%esp);");
    asm("loc_6DAB871: push %edx;");
    asm("loc_6DAB872: mov %ebp,%ecx;");
    asm("loc_6DAB874: mov %eax,0x1C(%esp);");
    asm("loc_6DAB878: call _sub_6D8F4F0;");
    asm("loc_6DAB87D: add $0x10,%ebp;");
    asm("loc_6DAB880: mov %ebp,(%ebx);");
    asm("loc_6DAB882: mov (%esi),%edx;");
    asm("loc_6DAB884: mov 4(%esi),%ecx;");
    asm("loc_6DAB887: add $4,%edx;");
    asm("loc_6DAB88A: mov %edx,%eax;");
    asm("loc_6DAB88C: cmp %ecx,%eax;");
    asm("loc_6DAB88E: mov %edx,(%esi);");
    asm("loc_6DAB890: jbe loc_6DAB899;");
    asm("loc_6DAB892: movl $0x16,0xC(%esi);");
    asm("loc_6DAB899: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB89C: test %eax,%eax;");
    asm("loc_6DAB89E: je loc_6DAB8AF;");
    asm("loc_6DAB8A0: pop %edi;");
    asm("loc_6DAB8A1: pop %esi;");
    asm("loc_6DAB8A2: pop %ebp;");
    asm("loc_6DAB8A3: mov $0x16,%eax;");
    asm("loc_6DAB8A8: pop %ebx;");
    asm("loc_6DAB8A9: add $0x10,%esp;");
    asm("loc_6DAB8AC: ret $0xC;");
    asm("loc_6DAB8AF: mov (%ebx),%eax;");
    asm("loc_6DAB8B1: flds 0x3C(%edi);");
    asm("loc_6DAB8B4: fstps (%eax);");
    asm("loc_6DAB8B6: add $4,%eax;");
    asm("loc_6DAB8B9: mov %eax,(%ebx);");
    asm("loc_6DAB8BB: mov (%esi),%edx;");
    asm("loc_6DAB8BD: mov 4(%esi),%ecx;");
    asm("loc_6DAB8C0: add $4,%edx;");
    asm("loc_6DAB8C3: mov %edx,%eax;");
    asm("loc_6DAB8C5: cmp %ecx,%eax;");
    asm("loc_6DAB8C7: mov %edx,(%esi);");
    asm("loc_6DAB8C9: jbe loc_6DAB8D2;");
    asm("loc_6DAB8CB: movl $0x16,0xC(%esi);");
    asm("loc_6DAB8D2: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB8D5: test %eax,%eax;");
    asm("loc_6DAB8D7: je loc_6DAB8E8;");
    asm("loc_6DAB8D9: pop %edi;");
    asm("loc_6DAB8DA: pop %esi;");
    asm("loc_6DAB8DB: pop %ebp;");
    asm("loc_6DAB8DC: mov $0x16,%eax;");
    asm("loc_6DAB8E1: pop %ebx;");
    asm("loc_6DAB8E2: add $0x10,%esp;");
    asm("loc_6DAB8E5: ret $0xC;");
    asm("loc_6DAB8E8: mov (%ebx),%eax;");
    asm("loc_6DAB8EA: flds 0x40(%edi);");
    asm("loc_6DAB8ED: fstps (%eax);");
    asm("loc_6DAB8EF: add $4,%eax;");
    asm("loc_6DAB8F2: mov %eax,(%ebx);");
    asm("loc_6DAB8F4: mov 0x14(%edi),%eax;");
    asm("loc_6DAB8F7: push %esi;");
    asm("loc_6DAB8F8: push %eax;");
    asm("loc_6DAB8F9: push %ebx;");
    asm("loc_6DAB8FA: mov %edi,%ecx;");
    asm("loc_6DAB8FC: call _sub_6DA13C0;");
    asm("loc_6DAB901: test %eax,%eax;");
    asm("loc_6DAB903: mov %eax,0x1C(%edi);");
    asm("loc_6DAB906: je loc_6DAB917;");
    asm("loc_6DAB908: pop %edi;");
    asm("loc_6DAB909: pop %esi;");
    asm("loc_6DAB90A: pop %ebp;");
    asm("loc_6DAB90B: mov $0x16,%eax;");
    asm("loc_6DAB910: pop %ebx;");
    asm("loc_6DAB911: add $0x10,%esp;");
    asm("loc_6DAB914: ret $0xC;");
    asm("loc_6DAB917: mov (%esi),%ecx;");
    asm("loc_6DAB919: mov 0x2C(%esp),%edx;");
    asm("loc_6DAB91D: mov %ecx,(%edx);");
    asm("loc_6DAB91F: mov 0xC(%edi),%eax;");
    asm("loc_6DAB922: push %eax;");
    asm("loc_6DAB923: call _sub_6DA16B0;");
    asm("loc_6DAB928: mov %eax,%ecx;");
    asm("loc_6DAB92A: mov (%ecx),%ebp;");
    asm("loc_6DAB92C: mov 0x18(%ecx),%ebx;");
    asm("loc_6DAB92F: mov 0x10(%ecx),%eax;");
    asm("loc_6DAB932: add $4,%esp;");
    asm("loc_6DAB935: inc %ebp;");
    asm("loc_6DAB936: mov %ebp,(%ecx);");
    asm("loc_6DAB938: mov (%esi),%edx;");
    asm("loc_6DAB93A: add %edx,%ebx;");
    asm("loc_6DAB93C: mov %ebx,0x18(%ecx);");
    asm("loc_6DAB93F: mov (%esi),%esi;");
    asm("loc_6DAB941: cmp %eax,%esi;");
    asm("loc_6DAB943: mov %ebp,%edi;");
    asm("loc_6DAB945: jbe loc_6DAB94A;");
    asm("loc_6DAB947: mov %esi,0x10(%ecx);");
    asm("loc_6DAB94A: mov 0x18(%ecx),%eax;");
    asm("loc_6DAB94D: xor %edx,%edx;");
    asm("loc_6DAB94F: div %edi;");
    asm("loc_6DAB951: pop %edi;");
    asm("loc_6DAB952: pop %esi;");
    asm("loc_6DAB953: pop %ebp;");
    asm("loc_6DAB954: pop %ebx;");
    asm("loc_6DAB955: mov %eax,8(%ecx);");
    asm("loc_6DAB958: xor %eax,%eax;");
    asm("loc_6DAB95A: add $0x10,%esp;");
    asm("loc_6DAB95D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAB960() // _sub_6DAB960
{
    __DEBUG_ASM(6DAB960);
    // chunk 0x6DAB960 _sub_6DAB960
    asm("loc_6DAB960: mov 8(%esp),%eax;");
    asm("loc_6DAB964: push %ebx;");
    asm("loc_6DAB965: push %ebp;");
    asm("loc_6DAB966: push %esi;");
    asm("loc_6DAB967: push %edi;");
    asm("loc_6DAB968: mov %ecx,%edi;");
    asm("loc_6DAB96A: mov 0x14(%esp),%ecx;");
    asm("loc_6DAB96E: lea 0x10(%edi),%esi;");
    asm("loc_6DAB971: push %esi;");
    asm("loc_6DAB972: push %eax;");
    asm("loc_6DAB973: mov %ecx,8(%esi);");
    asm("loc_6DAB976: lea 0x18(%edi),%ebx;");
    asm("loc_6DAB979: push %ebx;");
    asm("loc_6DAB97A: mov %edi,%ecx;");
    asm("loc_6DAB97C: mov %eax,4(%esi);");
    asm("loc_6DAB97F: movl $0,(%esi);");
    asm("loc_6DAB985: movl $0,0xC(%esi);");
    asm("loc_6DAB98C: call _sub_6DA13C0;");
    asm("loc_6DAB991: test %eax,%eax;");
    asm("loc_6DAB993: mov %eax,0x1C(%edi);");
    asm("loc_6DAB996: je loc_6DAB9A4;");
    asm("loc_6DAB998: pop %edi;");
    asm("loc_6DAB999: pop %esi;");
    asm("loc_6DAB99A: pop %ebp;");
    asm("loc_6DAB99B: mov $0x17,%eax;");
    asm("loc_6DAB9A0: pop %ebx;");
    asm("loc_6DAB9A1: ret $0xC;");
    asm("loc_6DAB9A4: mov (%esi),%edx;");
    asm("loc_6DAB9A6: mov 4(%esi),%ecx;");
    asm("loc_6DAB9A9: add $0xC,%edx;");
    asm("loc_6DAB9AC: mov %edx,%eax;");
    asm("loc_6DAB9AE: cmp %ecx,%eax;");
    asm("loc_6DAB9B0: mov %edx,(%esi);");
    asm("loc_6DAB9B2: jbe loc_6DAB9BB;");
    asm("loc_6DAB9B4: movl $0x17,0xC(%esi);");
    asm("loc_6DAB9BB: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB9BE: test %eax,%eax;");
    asm("loc_6DAB9C0: jne loc_6DABAC9;");
    asm("loc_6DAB9C6: mov (%ebx),%ebp;");
    asm("loc_6DAB9C8: push %ebp;");
    asm("loc_6DAB9C9: lea 0x20(%edi),%ecx;");
    asm("loc_6DAB9CC: call _sub_6D8F510;");
    asm("loc_6DAB9D1: add $0xC,%ebp;");
    asm("loc_6DAB9D4: mov %ebp,(%ebx);");
    asm("loc_6DAB9D6: mov (%esi),%edx;");
    asm("loc_6DAB9D8: mov 4(%esi),%ecx;");
    asm("loc_6DAB9DB: add $0x10,%edx;");
    asm("loc_6DAB9DE: mov %edx,%eax;");
    asm("loc_6DAB9E0: cmp %ecx,%eax;");
    asm("loc_6DAB9E2: mov %edx,(%esi);");
    asm("loc_6DAB9E4: jbe loc_6DAB9ED;");
    asm("loc_6DAB9E6: movl $0x17,0xC(%esi);");
    asm("loc_6DAB9ED: mov 0x1C(%edi),%eax;");
    asm("loc_6DAB9F0: test %eax,%eax;");
    asm("loc_6DAB9F2: jne loc_6DABAC9;");
    asm("loc_6DAB9F8: mov (%ebx),%ebp;");
    asm("loc_6DAB9FA: push %ebp;");
    asm("loc_6DAB9FB: lea 0x2C(%edi),%ecx;");
    asm("loc_6DAB9FE: call _sub_6D8F4F0;");
    asm("loc_6DABA03: add $0x10,%ebp;");
    asm("loc_6DABA06: mov %ebp,(%ebx);");
    asm("loc_6DABA08: mov (%esi),%edx;");
    asm("loc_6DABA0A: mov 4(%esi),%ecx;");
    asm("loc_6DABA0D: add $4,%edx;");
    asm("loc_6DABA10: mov %edx,%eax;");
    asm("loc_6DABA12: cmp %ecx,%eax;");
    asm("loc_6DABA14: mov %edx,(%esi);");
    asm("loc_6DABA16: jbe loc_6DABA1F;");
    asm("loc_6DABA18: movl $0x17,0xC(%esi);");
    asm("loc_6DABA1F: mov 0x1C(%edi),%eax;");
    asm("loc_6DABA22: test %eax,%eax;");
    asm("loc_6DABA24: jne loc_6DABAC9;");
    asm("loc_6DABA2A: mov (%ebx),%eax;");
    asm("loc_6DABA2C: mov (%eax),%edx;");
    asm("loc_6DABA2E: add $4,%eax;");
    asm("loc_6DABA31: mov %edx,0x3C(%edi);");
    asm("loc_6DABA34: mov %eax,(%ebx);");
    asm("loc_6DABA36: mov (%esi),%edx;");
    asm("loc_6DABA38: mov 4(%esi),%ecx;");
    asm("loc_6DABA3B: add $4,%edx;");
    asm("loc_6DABA3E: mov %edx,%eax;");
    asm("loc_6DABA40: cmp %ecx,%eax;");
    asm("loc_6DABA42: mov %edx,(%esi);");
    asm("loc_6DABA44: jbe loc_6DABA4D;");
    asm("loc_6DABA46: movl $0x17,0xC(%esi);");
    asm("loc_6DABA4D: mov 0x1C(%edi),%eax;");
    asm("loc_6DABA50: test %eax,%eax;");
    asm("loc_6DABA52: jne loc_6DABAC9;");
    asm("loc_6DABA54: mov (%ebx),%eax;");
    asm("loc_6DABA56: mov (%eax),%ecx;");
    asm("loc_6DABA58: mov 0x18(%esp),%edx;");
    asm("loc_6DABA5C: push %esi;");
    asm("loc_6DABA5D: push %edx;");
    asm("loc_6DABA5E: mov %ecx,0x40(%edi);");
    asm("loc_6DABA61: add $4,%eax;");
    asm("loc_6DABA64: push %ebx;");
    asm("loc_6DABA65: mov %edi,%ecx;");
    asm("loc_6DABA67: mov %eax,(%ebx);");
    asm("loc_6DABA69: call _sub_6DA13C0;");
    asm("loc_6DABA6E: test %eax,%eax;");
    asm("loc_6DABA70: mov %eax,0x1C(%edi);");
    asm("loc_6DABA73: je loc_6DABA81;");
    asm("loc_6DABA75: pop %edi;");
    asm("loc_6DABA76: pop %esi;");
    asm("loc_6DABA77: pop %ebp;");
    asm("loc_6DABA78: mov $0x17,%eax;");
    asm("loc_6DABA7D: pop %ebx;");
    asm("loc_6DABA7E: ret $0xC;");
    asm("loc_6DABA81: mov (%esi),%eax;");
    asm("loc_6DABA83: mov 0x1C(%esp),%ecx;");
    asm("loc_6DABA87: mov %eax,(%ecx);");
    asm("loc_6DABA89: mov 0xC(%edi),%edx;");
    asm("loc_6DABA8C: push %edx;");
    asm("loc_6DABA8D: call _sub_6DA16B0;");
    asm("loc_6DABA92: mov %eax,%ecx;");
    asm("loc_6DABA94: mov 4(%ecx),%edi;");
    asm("loc_6DABA97: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DABA9A: mov 0x14(%ecx),%edx;");
    asm("loc_6DABA9D: add $4,%esp;");
    asm("loc_6DABAA0: inc %edi;");
    asm("loc_6DABAA1: mov %edi,4(%ecx);");
    asm("loc_6DABAA4: mov (%esi),%eax;");
    asm("loc_6DABAA6: add $2,%eax;");
    asm("loc_6DABAA9: add %eax,%ebp;");
    asm("loc_6DABAAB: mov %ebp,0x1C(%ecx);");
    asm("loc_6DABAAE: mov (%esi),%esi;");
    asm("loc_6DABAB0: add $2,%edx;");
    asm("loc_6DABAB3: cmp %edx,%esi;");
    asm("loc_6DABAB5: jbe loc_6DABABD;");
    asm("loc_6DABAB7: add $2,%esi;");
    asm("loc_6DABABA: mov %esi,0x14(%ecx);");
    asm("loc_6DABABD: mov 0x1C(%ecx),%eax;");
    asm("loc_6DABAC0: xor %edx,%edx;");
    asm("loc_6DABAC2: div %edi;");
    asm("loc_6DABAC4: mov %eax,0xC(%ecx);");
    asm("loc_6DABAC7: xor %eax,%eax;");
    asm("loc_6DABAC9: pop %edi;");
    asm("loc_6DABACA: pop %esi;");
    asm("loc_6DABACB: pop %ebp;");
    asm("loc_6DABACC: pop %ebx;");
    asm("loc_6DABACD: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DABAD0() // _sub_6DABAD0
{
    __DEBUG_ASM(6DABAD0);
    // chunk 0x6DABAD0 _sub_6DABAD0
    asm("loc_6DABAD0: mov 4(%esp),%eax;");
    asm("loc_6DABAD4: push %ebx;");
    asm("loc_6DABAD5: mov 0xC(%esp),%ebx;");
    asm("loc_6DABAD9: push %ebp;");
    asm("loc_6DABADA: push %esi;");
    asm("loc_6DABADB: push %edi;");
    asm("loc_6DABADC: mov %ecx,%edi;");
    asm("loc_6DABADE: lea 0x10(%edi),%esi;");
    asm("loc_6DABAE1: push %esi;");
    asm("loc_6DABAE2: push %ebx;");
    asm("loc_6DABAE3: lea 0x18(%edi),%ebp;");
    asm("loc_6DABAE6: push %ebp;");
    asm("loc_6DABAE7: mov %ebx,4(%esi);");
    asm("loc_6DABAEA: mov %eax,8(%esi);");
    asm("loc_6DABAED: movl $0,(%esi);");
    asm("loc_6DABAF3: movl $0,0xC(%esi);");
    asm("loc_6DABAFA: call _sub_6DA13C0;");
    asm("loc_6DABAFF: test %eax,%eax;");
    asm("loc_6DABB01: mov %eax,0x1C(%edi);");
    asm("loc_6DABB04: je loc_6DABB12;");
    asm("loc_6DABB06: pop %edi;");
    asm("loc_6DABB07: pop %esi;");
    asm("loc_6DABB08: pop %ebp;");
    asm("loc_6DABB09: mov $0x17,%eax;");
    asm("loc_6DABB0E: pop %ebx;");
    asm("loc_6DABB0F: ret $0xC;");
    asm("loc_6DABB12: push %esi;");
    asm("loc_6DABB13: push %ebx;");
    asm("loc_6DABB14: push %ebp;");
    asm("loc_6DABB15: mov %edi,%ecx;");
    asm("loc_6DABB17: call _sub_6DA13C0;");
    asm("loc_6DABB1C: test %eax,%eax;");
    asm("loc_6DABB1E: mov %eax,0x1C(%edi);");
    asm("loc_6DABB21: je loc_6DABB2F;");
    asm("loc_6DABB23: pop %edi;");
    asm("loc_6DABB24: pop %esi;");
    asm("loc_6DABB25: pop %ebp;");
    asm("loc_6DABB26: mov $0x17,%eax;");
    asm("loc_6DABB2B: pop %ebx;");
    asm("loc_6DABB2C: ret $0xC;");
    asm("loc_6DABB2F: mov (%esi),%ecx;");
    asm("loc_6DABB31: mov 0x1C(%esp),%edx;");
    asm("loc_6DABB35: mov %ecx,(%edx);");
    asm("loc_6DABB37: mov 0xC(%edi),%eax;");
    asm("loc_6DABB3A: push %eax;");
    asm("loc_6DABB3B: call _sub_6DA16B0;");
    asm("loc_6DABB40: mov %eax,%ecx;");
    asm("loc_6DABB42: mov 4(%ecx),%edx;");
    asm("loc_6DABB45: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DABB48: mov 0x14(%ecx),%eax;");
    asm("loc_6DABB4B: add $4,%esp;");
    asm("loc_6DABB4E: inc %edx;");
    asm("loc_6DABB4F: mov %edx,4(%ecx);");
    asm("loc_6DABB52: mov %edx,%edi;");
    asm("loc_6DABB54: mov (%esi),%edx;");
    asm("loc_6DABB56: add $2,%edx;");
    asm("loc_6DABB59: add %edx,%ebp;");
    asm("loc_6DABB5B: mov %ebp,0x1C(%ecx);");
    asm("loc_6DABB5E: mov (%esi),%esi;");
    asm("loc_6DABB60: add $2,%eax;");
    asm("loc_6DABB63: cmp %eax,%esi;");
    asm("loc_6DABB65: jbe loc_6DABB6D;");
    asm("loc_6DABB67: add $2,%esi;");
    asm("loc_6DABB6A: mov %esi,0x14(%ecx);");
    asm("loc_6DABB6D: mov 0x1C(%ecx),%eax;");
    asm("loc_6DABB70: xor %edx,%edx;");
    asm("loc_6DABB72: div %edi;");
    asm("loc_6DABB74: pop %edi;");
    asm("loc_6DABB75: pop %esi;");
    asm("loc_6DABB76: pop %ebp;");
    asm("loc_6DABB77: pop %ebx;");
    asm("loc_6DABB78: mov %eax,0xC(%ecx);");
    asm("loc_6DABB7B: xor %eax,%eax;");
    asm("loc_6DABB7D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DABB80() // _sub_6DABB80
{
    __DEBUG_ASM(6DABB80);
    // chunk 0x6DABB80 _sub_6DABB80
    asm("loc_6DABB80: mov _data_6DB63A0,%eax;");
    asm("loc_6DABB85: mov %eax,_data_6DBC210;");
    asm("loc_6DABB8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DABB90() // _sub_6DABB90
{
    __DEBUG_ASM(6DABB90);
    // chunk 0x6DABB90 _sub_6DABB90
    asm("loc_6DABB90: mov _data_6DB63A0,%eax;");
    asm("loc_6DABB95: mov %eax,_data_6DBC214;");
    asm("loc_6DABB9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DABBA0() // _sub_6DABBA0
{
    __DEBUG_ASM(6DABBA0);
    // chunk 0x6DABBA0 _sub_6DABBA0
    asm("loc_6DABBA0: mov _data_6DB63A4,%eax;");
    asm("loc_6DABBA5: mov %eax,_data_6DBC20C;");
    asm("loc_6DABBAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DABBB0() // _sub_6DABBB0
{
    __DEBUG_ASM(6DABBB0);
    // chunk 0x6DABBB0 _sub_6DABBB0
    asm("loc_6DABBB0: mov 8(%esp),%eax;");
    asm("loc_6DABBB4: push %ebx;");
    asm("loc_6DABBB5: push %ebp;");
    asm("loc_6DABBB6: mov %ecx,%ebp;");
    asm("loc_6DABBB8: mov 0xC(%esp),%ecx;");
    asm("loc_6DABBBC: lea 0x10(%ebp),%ebx;");
    asm("loc_6DABBBF: push %esi;");
    asm("loc_6DABBC0: mov %eax,4(%ebx);");
    asm("loc_6DABBC3: mov (%ecx),%edx;");
    asm("loc_6DABBC5: push %edi;");
    asm("loc_6DABBC6: mov %edx,8(%ebx);");
    asm("loc_6DABBC9: movl $0,(%ebx);");
    asm("loc_6DABBCF: movl $0,0xC(%ebx);");
    asm("loc_6DABBD6: mov 0x14(%ebp),%eax;");
    asm("loc_6DABBD9: push %ebx;");
    asm("loc_6DABBDA: push %eax;");
    asm("loc_6DABBDB: lea 0x18(%ebp),%esi;");
    asm("loc_6DABBDE: push %esi;");
    asm("loc_6DABBDF: mov %ebp,%ecx;");
    asm("loc_6DABBE1: call _sub_6DA1380;");
    asm("loc_6DABBE6: test %eax,%eax;");
    asm("loc_6DABBE8: mov %eax,0x1C(%ebp);");
    asm("loc_6DABBEB: je loc_6DABBF9;");
    asm("loc_6DABBED: pop %edi;");
    asm("loc_6DABBEE: pop %esi;");
    asm("loc_6DABBEF: pop %ebp;");
    asm("loc_6DABBF0: mov $0x16,%eax;");
    asm("loc_6DABBF5: pop %ebx;");
    asm("loc_6DABBF6: ret $0xC;");
    asm("loc_6DABBF9: mov (%ebx),%edx;");
    asm("loc_6DABBFB: mov 4(%ebx),%ecx;");
    asm("loc_6DABBFE: add $4,%edx;");
    asm("loc_6DABC01: mov %edx,%eax;");
    asm("loc_6DABC03: cmp %ecx,%eax;");
    asm("loc_6DABC05: mov %edx,(%ebx);");
    asm("loc_6DABC07: mov $0x16,%eax;");
    asm("loc_6DABC0C: jbe loc_6DABC11;");
    asm("loc_6DABC0E: mov %eax,0xC(%ebx);");
    asm("loc_6DABC11: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DABC14: test %ecx,%ecx;");
    asm("loc_6DABC16: jne loc_6DABCF6;");
    asm("loc_6DABC1C: mov (%esi),%ecx;");
    asm("loc_6DABC1E: mov 0x28(%ebp),%edx;");
    asm("loc_6DABC21: mov %edx,(%ecx);");
    asm("loc_6DABC23: add $4,%ecx;");
    asm("loc_6DABC26: mov %ecx,(%esi);");
    asm("loc_6DABC28: mov (%ebx),%edi;");
    asm("loc_6DABC2A: mov 4(%ebx),%edx;");
    asm("loc_6DABC2D: add $4,%edi;");
    asm("loc_6DABC30: mov %edi,%ecx;");
    asm("loc_6DABC32: cmp %edx,%ecx;");
    asm("loc_6DABC34: mov %edi,(%ebx);");
    asm("loc_6DABC36: jbe loc_6DABC3B;");
    asm("loc_6DABC38: mov %eax,0xC(%ebx);");
    asm("loc_6DABC3B: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DABC3E: test %ecx,%ecx;");
    asm("loc_6DABC40: jne loc_6DABCF6;");
    asm("loc_6DABC46: mov (%esi),%ecx;");
    asm("loc_6DABC48: mov 0x20(%ebp),%edx;");
    asm("loc_6DABC4B: mov %edx,(%ecx);");
    asm("loc_6DABC4D: add $4,%ecx;");
    asm("loc_6DABC50: mov %ecx,(%esi);");
    asm("loc_6DABC52: mov 0x20(%ebp),%ecx;");
    asm("loc_6DABC55: mov (%ebx),%edi;");
    asm("loc_6DABC57: mov 4(%ebx),%edx;");
    asm("loc_6DABC5A: add %ecx,%edi;");
    asm("loc_6DABC5C: mov %edi,%ecx;");
    asm("loc_6DABC5E: cmp %edx,%ecx;");
    asm("loc_6DABC60: mov %edi,(%ebx);");
    asm("loc_6DABC62: jbe loc_6DABC67;");
    asm("loc_6DABC64: mov %eax,0xC(%ebx);");
    asm("loc_6DABC67: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DABC6A: test %ecx,%ecx;");
    asm("loc_6DABC6C: jne loc_6DABCF6;");
    asm("loc_6DABC72: mov 0x20(%ebp),%eax;");
    asm("loc_6DABC75: mov (%esi),%edi;");
    asm("loc_6DABC77: mov 0x24(%ebp),%esi;");
    asm("loc_6DABC7A: mov %eax,%ecx;");
    asm("loc_6DABC7C: mov %ecx,%edx;");
    asm("loc_6DABC7E: shr $2,%ecx;");
    asm("loc_6DABC81: mov %edi,0x18(%esp);");
    asm("loc_6DABC85: rep movsl (%esi),(%edi);");
    asm("loc_6DABC87: mov %edx,%ecx;");
    asm("loc_6DABC89: and $3,%ecx;");
    asm("loc_6DABC8C: rep movsb (%esi),(%edi);");
    asm("loc_6DABC8E: mov 0x18(%esp),%ecx;");
    asm("loc_6DABC92: mov 0x14(%ebp),%edx;");
    asm("loc_6DABC95: add %eax,%ecx;");
    asm("loc_6DABC97: push %ebx;");
    asm("loc_6DABC98: lea 0x18(%ebp),%eax;");
    asm("loc_6DABC9B: push %edx;");
    asm("loc_6DABC9C: mov %ecx,(%eax);");
    asm("loc_6DABC9E: push %eax;");
    asm("loc_6DABC9F: mov %ebp,%ecx;");
    asm("loc_6DABCA1: call _sub_6DA13C0;");
    asm("loc_6DABCA6: test %eax,%eax;");
    asm("loc_6DABCA8: mov %eax,0x1C(%ebp);");
    asm("loc_6DABCAB: je loc_6DABCB9;");
    asm("loc_6DABCAD: pop %edi;");
    asm("loc_6DABCAE: pop %esi;");
    asm("loc_6DABCAF: pop %ebp;");
    asm("loc_6DABCB0: mov $0x16,%eax;");
    asm("loc_6DABCB5: pop %ebx;");
    asm("loc_6DABCB6: ret $0xC;");
    asm("loc_6DABCB9: mov (%ebx),%eax;");
    asm("loc_6DABCBB: mov 0x1C(%esp),%ecx;");
    asm("loc_6DABCBF: mov %eax,(%ecx);");
    asm("loc_6DABCC1: mov 0xC(%ebp),%edx;");
    asm("loc_6DABCC4: push %edx;");
    asm("loc_6DABCC5: call _sub_6DA16B0;");
    asm("loc_6DABCCA: mov %eax,%ecx;");
    asm("loc_6DABCCC: mov (%ecx),%esi;");
    asm("loc_6DABCCE: mov 0x18(%ecx),%edx;");
    asm("loc_6DABCD1: add $4,%esp;");
    asm("loc_6DABCD4: inc %esi;");
    asm("loc_6DABCD5: mov %esi,(%ecx);");
    asm("loc_6DABCD7: mov (%ebx),%eax;");
    asm("loc_6DABCD9: add %eax,%edx;");
    asm("loc_6DABCDB: mov 0x10(%ecx),%eax;");
    asm("loc_6DABCDE: mov %edx,0x18(%ecx);");
    asm("loc_6DABCE1: mov (%ebx),%ebx;");
    asm("loc_6DABCE3: cmp %eax,%ebx;");
    asm("loc_6DABCE5: jbe loc_6DABCEA;");
    asm("loc_6DABCE7: mov %ebx,0x10(%ecx);");
    asm("loc_6DABCEA: mov 0x18(%ecx),%eax;");
    asm("loc_6DABCED: xor %edx,%edx;");
    asm("loc_6DABCEF: div %esi;");
    asm("loc_6DABCF1: mov %eax,8(%ecx);");
    asm("loc_6DABCF4: xor %eax,%eax;");
    asm("loc_6DABCF6: pop %edi;");
    asm("loc_6DABCF7: pop %esi;");
    asm("loc_6DABCF8: pop %ebp;");
    asm("loc_6DABCF9: pop %ebx;");
    asm("loc_6DABCFA: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DABD00() // _sub_6DABD00
{
    __DEBUG_ASM(6DABD00);
    // chunk 0x6DABD00 _sub_6DABD00
    asm("loc_6DABD00: mov 4(%esp),%eax;");
    asm("loc_6DABD04: push %ebx;");
    asm("loc_6DABD05: push %ebp;");
    asm("loc_6DABD06: mov 0x10(%esp),%ebp;");
    asm("loc_6DABD0A: push %esi;");
    asm("loc_6DABD0B: push %edi;");
    asm("loc_6DABD0C: mov %ecx,%edi;");
    asm("loc_6DABD0E: lea 0x10(%edi),%esi;");
    asm("loc_6DABD11: push %esi;");
    asm("loc_6DABD12: push %ebp;");
    asm("loc_6DABD13: lea 0x18(%edi),%ebx;");
    asm("loc_6DABD16: push %ebx;");
    asm("loc_6DABD17: mov %ebp,4(%esi);");
    asm("loc_6DABD1A: mov %eax,8(%esi);");
    asm("loc_6DABD1D: movl $0,(%esi);");
    asm("loc_6DABD23: movl $0,0xC(%esi);");
    asm("loc_6DABD2A: call _sub_6DA13C0;");
    asm("loc_6DABD2F: test %eax,%eax;");
    asm("loc_6DABD31: mov %eax,0x1C(%edi);");
    asm("loc_6DABD34: je loc_6DABD42;");
    asm("loc_6DABD36: pop %edi;");
    asm("loc_6DABD37: pop %esi;");
    asm("loc_6DABD38: pop %ebp;");
    asm("loc_6DABD39: mov $0x17,%eax;");
    asm("loc_6DABD3E: pop %ebx;");
    asm("loc_6DABD3F: ret $0xC;");
    asm("loc_6DABD42: mov (%esi),%edx;");
    asm("loc_6DABD44: mov 4(%esi),%ecx;");
    asm("loc_6DABD47: add $4,%edx;");
    asm("loc_6DABD4A: mov %edx,%eax;");
    asm("loc_6DABD4C: cmp %ecx,%eax;");
    asm("loc_6DABD4E: mov %edx,(%esi);");
    asm("loc_6DABD50: jbe loc_6DABD59;");
    asm("loc_6DABD52: movl $0x17,0xC(%esi);");
    asm("loc_6DABD59: mov 0x1C(%edi),%eax;");
    asm("loc_6DABD5C: test %eax,%eax;");
    asm("loc_6DABD5E: jne loc_6DABDDC;");
    asm("loc_6DABD60: mov (%ebx),%eax;");
    asm("loc_6DABD62: mov (%eax),%ecx;");
    asm("loc_6DABD64: lea 0x20(%edi),%edx;");
    asm("loc_6DABD67: mov %ecx,0x28(%edi);");
    asm("loc_6DABD6A: add $4,%eax;");
    asm("loc_6DABD6D: push %edx;");
    asm("loc_6DABD6E: mov %edi,%ecx;");
    asm("loc_6DABD70: mov %eax,(%ebx);");
    asm("loc_6DABD72: call _sub_6DA1620;");
    asm("loc_6DABD77: push %esi;");
    asm("loc_6DABD78: push %ebp;");
    asm("loc_6DABD79: push %ebx;");
    asm("loc_6DABD7A: mov %edi,%ecx;");
    asm("loc_6DABD7C: call _sub_6DA13C0;");
    asm("loc_6DABD81: test %eax,%eax;");
    asm("loc_6DABD83: mov %eax,0x1C(%edi);");
    asm("loc_6DABD86: je loc_6DABD94;");
    asm("loc_6DABD88: pop %edi;");
    asm("loc_6DABD89: pop %esi;");
    asm("loc_6DABD8A: pop %ebp;");
    asm("loc_6DABD8B: mov $0x17,%eax;");
    asm("loc_6DABD90: pop %ebx;");
    asm("loc_6DABD91: ret $0xC;");
    asm("loc_6DABD94: mov (%esi),%eax;");
    asm("loc_6DABD96: mov 0x1C(%esp),%ecx;");
    asm("loc_6DABD9A: mov %eax,(%ecx);");
    asm("loc_6DABD9C: mov 0xC(%edi),%edx;");
    asm("loc_6DABD9F: push %edx;");
    asm("loc_6DABDA0: call _sub_6DA16B0;");
    asm("loc_6DABDA5: mov %eax,%ecx;");
    asm("loc_6DABDA7: mov 4(%ecx),%edi;");
    asm("loc_6DABDAA: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DABDAD: mov 0x14(%ecx),%edx;");
    asm("loc_6DABDB0: add $4,%esp;");
    asm("loc_6DABDB3: inc %edi;");
    asm("loc_6DABDB4: mov %edi,4(%ecx);");
    asm("loc_6DABDB7: mov (%esi),%eax;");
    asm("loc_6DABDB9: add $2,%eax;");
    asm("loc_6DABDBC: add %eax,%ebp;");
    asm("loc_6DABDBE: mov %ebp,0x1C(%ecx);");
    asm("loc_6DABDC1: mov (%esi),%esi;");
    asm("loc_6DABDC3: add $2,%edx;");
    asm("loc_6DABDC6: cmp %edx,%esi;");
    asm("loc_6DABDC8: jbe loc_6DABDD0;");
    asm("loc_6DABDCA: add $2,%esi;");
    asm("loc_6DABDCD: mov %esi,0x14(%ecx);");
    asm("loc_6DABDD0: mov 0x1C(%ecx),%eax;");
    asm("loc_6DABDD3: xor %edx,%edx;");
    asm("loc_6DABDD5: div %edi;");
    asm("loc_6DABDD7: mov %eax,0xC(%ecx);");
    asm("loc_6DABDDA: xor %eax,%eax;");
    asm("loc_6DABDDC: pop %edi;");
    asm("loc_6DABDDD: pop %esi;");
    asm("loc_6DABDDE: pop %ebp;");
    asm("loc_6DABDDF: pop %ebx;");
    asm("loc_6DABDE0: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DABDF0() // _sub_6DABDF0
{
    __DEBUG_ASM(6DABDF0);
    // chunk 0x6DABDF0 _sub_6DABDF0
    asm("loc_6DABDF0: mov 8(%esp),%eax;");
    asm("loc_6DABDF4: push %ebx;");
    asm("loc_6DABDF5: push %esi;");
    asm("loc_6DABDF6: push %edi;");
    asm("loc_6DABDF7: mov %ecx,%edi;");
    asm("loc_6DABDF9: mov 0x10(%esp),%ecx;");
    asm("loc_6DABDFD: lea 0x10(%edi),%esi;");
    asm("loc_6DABE00: mov %eax,4(%esi);");
    asm("loc_6DABE03: mov (%ecx),%edx;");
    asm("loc_6DABE05: mov %edx,8(%esi);");
    asm("loc_6DABE08: movl $0,(%esi);");
    asm("loc_6DABE0E: movl $0,0xC(%esi);");
    asm("loc_6DABE15: mov 0x14(%edi),%eax;");
    asm("loc_6DABE18: push %esi;");
    asm("loc_6DABE19: push %eax;");
    asm("loc_6DABE1A: lea 0x18(%edi),%ebx;");
    asm("loc_6DABE1D: push %ebx;");
    asm("loc_6DABE1E: mov %edi,%ecx;");
    asm("loc_6DABE20: call _sub_6DA1380;");
    asm("loc_6DABE25: test %eax,%eax;");
    asm("loc_6DABE27: mov %eax,0x1C(%edi);");
    asm("loc_6DABE2A: je loc_6DABE37;");
    asm("loc_6DABE2C: pop %edi;");
    asm("loc_6DABE2D: pop %esi;");
    asm("loc_6DABE2E: mov $0x16,%eax;");
    asm("loc_6DABE33: pop %ebx;");
    asm("loc_6DABE34: ret $0xC;");
    asm("loc_6DABE37: mov (%esi),%edx;");
    asm("loc_6DABE39: mov 4(%esi),%ecx;");
    asm("loc_6DABE3C: add $4,%edx;");
    asm("loc_6DABE3F: mov %edx,%eax;");
    asm("loc_6DABE41: cmp %ecx,%eax;");
    asm("loc_6DABE43: mov %edx,(%esi);");
    asm("loc_6DABE45: jbe loc_6DABE4E;");
    asm("loc_6DABE47: movl $0x16,0xC(%esi);");
    asm("loc_6DABE4E: mov 0x1C(%edi),%eax;");
    asm("loc_6DABE51: test %eax,%eax;");
    asm("loc_6DABE53: je loc_6DABE60;");
    asm("loc_6DABE55: pop %edi;");
    asm("loc_6DABE56: pop %esi;");
    asm("loc_6DABE57: mov $0x16,%eax;");
    asm("loc_6DABE5C: pop %ebx;");
    asm("loc_6DABE5D: ret $0xC;");
    asm("loc_6DABE60: mov (%ebx),%eax;");
    asm("loc_6DABE62: mov 0x20(%edi),%ecx;");
    asm("loc_6DABE65: mov %ecx,(%eax);");
    asm("loc_6DABE67: add $4,%eax;");
    asm("loc_6DABE6A: mov %eax,(%ebx);");
    asm("loc_6DABE6C: mov (%esi),%edx;");
    asm("loc_6DABE6E: mov 4(%esi),%ecx;");
    asm("loc_6DABE71: add $8,%edx;");
    asm("loc_6DABE74: mov %edx,%eax;");
    asm("loc_6DABE76: cmp %ecx,%eax;");
    asm("loc_6DABE78: mov %edx,(%esi);");
    asm("loc_6DABE7A: jbe loc_6DABE83;");
    asm("loc_6DABE7C: movl $0x16,0xC(%esi);");
    asm("loc_6DABE83: mov 0x1C(%edi),%eax;");
    asm("loc_6DABE86: test %eax,%eax;");
    asm("loc_6DABE88: je loc_6DABE95;");
    asm("loc_6DABE8A: pop %edi;");
    asm("loc_6DABE8B: pop %esi;");
    asm("loc_6DABE8C: mov $0x16,%eax;");
    asm("loc_6DABE91: pop %ebx;");
    asm("loc_6DABE92: ret $0xC;");
    asm("loc_6DABE95: mov (%ebx),%eax;");
    asm("loc_6DABE97: fldl 0x28(%edi);");
    asm("loc_6DABE9A: fstpl (%eax);");
    asm("loc_6DABE9C: mov 0x14(%edi),%edx;");
    asm("loc_6DABE9F: push %esi;");
    asm("loc_6DABEA0: push %edx;");
    asm("loc_6DABEA1: add $8,%eax;");
    asm("loc_6DABEA4: push %ebx;");
    asm("loc_6DABEA5: mov %edi,%ecx;");
    asm("loc_6DABEA7: mov %eax,(%ebx);");
    asm("loc_6DABEA9: call _sub_6DA13C0;");
    asm("loc_6DABEAE: test %eax,%eax;");
    asm("loc_6DABEB0: mov %eax,0x1C(%edi);");
    asm("loc_6DABEB3: je loc_6DABEC0;");
    asm("loc_6DABEB5: pop %edi;");
    asm("loc_6DABEB6: pop %esi;");
    asm("loc_6DABEB7: mov $0x16,%eax;");
    asm("loc_6DABEBC: pop %ebx;");
    asm("loc_6DABEBD: ret $0xC;");
    asm("loc_6DABEC0: mov (%esi),%eax;");
    asm("loc_6DABEC2: mov 0x18(%esp),%ecx;");
    asm("loc_6DABEC6: mov %eax,(%ecx);");
    asm("loc_6DABEC8: mov 0xC(%edi),%edx;");
    asm("loc_6DABECB: push %edx;");
    asm("loc_6DABECC: call _sub_6DA16B0;");
    asm("loc_6DABED1: mov %eax,%ecx;");
    asm("loc_6DABED3: mov (%ecx),%edi;");
    asm("loc_6DABED5: mov 0x18(%ecx),%edx;");
    asm("loc_6DABED8: add $4,%esp;");
    asm("loc_6DABEDB: inc %edi;");
    asm("loc_6DABEDC: mov %edi,(%ecx);");
    asm("loc_6DABEDE: mov (%esi),%eax;");
    asm("loc_6DABEE0: add %eax,%edx;");
    asm("loc_6DABEE2: mov 0x10(%ecx),%eax;");
    asm("loc_6DABEE5: mov %edx,0x18(%ecx);");
    asm("loc_6DABEE8: mov (%esi),%esi;");
    asm("loc_6DABEEA: cmp %eax,%esi;");
    asm("loc_6DABEEC: jbe loc_6DABEF1;");
    asm("loc_6DABEEE: mov %esi,0x10(%ecx);");
    asm("loc_6DABEF1: mov 0x18(%ecx),%eax;");
    asm("loc_6DABEF4: xor %edx,%edx;");
    asm("loc_6DABEF6: div %edi;");
    asm("loc_6DABEF8: pop %edi;");
    asm("loc_6DABEF9: pop %esi;");
    asm("loc_6DABEFA: pop %ebx;");
    asm("loc_6DABEFB: mov %eax,8(%ecx);");
    asm("loc_6DABEFE: xor %eax,%eax;");
    asm("loc_6DABF00: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DABF10() // _sub_6DABF10
{
    __DEBUG_ASM(6DABF10);
    // chunk 0x6DABF10 _sub_6DABF10
    asm("loc_6DABF10: mov 4(%esp),%eax;");
    asm("loc_6DABF14: push %ebx;");
    asm("loc_6DABF15: push %ebp;");
    asm("loc_6DABF16: mov 0x10(%esp),%ebp;");
    asm("loc_6DABF1A: push %esi;");
    asm("loc_6DABF1B: push %edi;");
    asm("loc_6DABF1C: mov %ecx,%edi;");
    asm("loc_6DABF1E: lea 0x10(%edi),%esi;");
    asm("loc_6DABF21: push %esi;");
    asm("loc_6DABF22: push %ebp;");
    asm("loc_6DABF23: lea 0x18(%edi),%ebx;");
    asm("loc_6DABF26: push %ebx;");
    asm("loc_6DABF27: mov %ebp,4(%esi);");
    asm("loc_6DABF2A: mov %eax,8(%esi);");
    asm("loc_6DABF2D: movl $0,(%esi);");
    asm("loc_6DABF33: movl $0,0xC(%esi);");
    asm("loc_6DABF3A: call _sub_6DA13C0;");
    asm("loc_6DABF3F: test %eax,%eax;");
    asm("loc_6DABF41: mov %eax,0x1C(%edi);");
    asm("loc_6DABF44: je loc_6DABF52;");
    asm("loc_6DABF46: pop %edi;");
    asm("loc_6DABF47: pop %esi;");
    asm("loc_6DABF48: pop %ebp;");
    asm("loc_6DABF49: mov $0x17,%eax;");
    asm("loc_6DABF4E: pop %ebx;");
    asm("loc_6DABF4F: ret $0xC;");
    asm("loc_6DABF52: mov (%esi),%edx;");
    asm("loc_6DABF54: mov 4(%esi),%ecx;");
    asm("loc_6DABF57: add $4,%edx;");
    asm("loc_6DABF5A: mov %edx,%eax;");
    asm("loc_6DABF5C: cmp %ecx,%eax;");
    asm("loc_6DABF5E: mov %edx,(%esi);");
    asm("loc_6DABF60: jbe loc_6DABF69;");
    asm("loc_6DABF62: movl $0x17,0xC(%esi);");
    asm("loc_6DABF69: mov 0x1C(%edi),%eax;");
    asm("loc_6DABF6C: test %eax,%eax;");
    asm("loc_6DABF6E: jne loc_6DAC017;");
    asm("loc_6DABF74: mov (%ebx),%eax;");
    asm("loc_6DABF76: mov (%eax),%ecx;");
    asm("loc_6DABF78: add $4,%eax;");
    asm("loc_6DABF7B: mov %eax,(%ebx);");
    asm("loc_6DABF7D: mov %ecx,0x20(%edi);");
    asm("loc_6DABF80: mov (%esi),%edx;");
    asm("loc_6DABF82: mov 4(%esi),%ecx;");
    asm("loc_6DABF85: add $8,%edx;");
    asm("loc_6DABF88: mov %edx,%eax;");
    asm("loc_6DABF8A: cmp %ecx,%eax;");
    asm("loc_6DABF8C: mov %edx,(%esi);");
    asm("loc_6DABF8E: jbe loc_6DABF97;");
    asm("loc_6DABF90: movl $0x17,0xC(%esi);");
    asm("loc_6DABF97: mov 0x1C(%edi),%eax;");
    asm("loc_6DABF9A: test %eax,%eax;");
    asm("loc_6DABF9C: jne loc_6DAC017;");
    asm("loc_6DABF9E: mov (%ebx),%eax;");
    asm("loc_6DABFA0: mov (%eax),%edx;");
    asm("loc_6DABFA2: push %esi;");
    asm("loc_6DABFA3: mov %edx,0x28(%edi);");
    asm("loc_6DABFA6: mov 4(%eax),%ecx;");
    asm("loc_6DABFA9: push %ebp;");
    asm("loc_6DABFAA: mov %ecx,0x2C(%edi);");
    asm("loc_6DABFAD: add $8,%eax;");
    asm("loc_6DABFB0: push %ebx;");
    asm("loc_6DABFB1: mov %edi,%ecx;");
    asm("loc_6DABFB3: mov %eax,(%ebx);");
    asm("loc_6DABFB5: call _sub_6DA13C0;");
    asm("loc_6DABFBA: test %eax,%eax;");
    asm("loc_6DABFBC: mov %eax,0x1C(%edi);");
    asm("loc_6DABFBF: je loc_6DABFCD;");
    asm("loc_6DABFC1: pop %edi;");
    asm("loc_6DABFC2: pop %esi;");
    asm("loc_6DABFC3: pop %ebp;");
    asm("loc_6DABFC4: mov $0x17,%eax;");
    asm("loc_6DABFC9: pop %ebx;");
    asm("loc_6DABFCA: ret $0xC;");
    asm("loc_6DABFCD: mov (%esi),%edx;");
    asm("loc_6DABFCF: mov 0x1C(%esp),%eax;");
    asm("loc_6DABFD3: mov %edx,(%eax);");
    asm("loc_6DABFD5: mov 0xC(%edi),%ecx;");
    asm("loc_6DABFD8: push %ecx;");
    asm("loc_6DABFD9: call _sub_6DA16B0;");
    asm("loc_6DABFDE: mov %eax,%ecx;");
    asm("loc_6DABFE0: mov 4(%ecx),%edx;");
    asm("loc_6DABFE3: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DABFE6: mov 0x14(%ecx),%eax;");
    asm("loc_6DABFE9: add $4,%esp;");
    asm("loc_6DABFEC: inc %edx;");
    asm("loc_6DABFED: mov %edx,4(%ecx);");
    asm("loc_6DABFF0: mov %edx,%edi;");
    asm("loc_6DABFF2: mov (%esi),%edx;");
    asm("loc_6DABFF4: add $2,%edx;");
    asm("loc_6DABFF7: add %edx,%ebp;");
    asm("loc_6DABFF9: mov %ebp,0x1C(%ecx);");
    asm("loc_6DABFFC: mov (%esi),%esi;");
    asm("loc_6DABFFE: add $2,%eax;");
    asm("loc_6DAC001: cmp %eax,%esi;");
    asm("loc_6DAC003: jbe loc_6DAC00B;");
    asm("loc_6DAC005: add $2,%esi;");
    asm("loc_6DAC008: mov %esi,0x14(%ecx);");
    asm("loc_6DAC00B: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAC00E: xor %edx,%edx;");
    asm("loc_6DAC010: div %edi;");
    asm("loc_6DAC012: mov %eax,0xC(%ecx);");
    asm("loc_6DAC015: xor %eax,%eax;");
    asm("loc_6DAC017: pop %edi;");
    asm("loc_6DAC018: pop %esi;");
    asm("loc_6DAC019: pop %ebp;");
    asm("loc_6DAC01A: pop %ebx;");
    asm("loc_6DAC01B: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC020() // _sub_6DAC020
{
    __DEBUG_ASM(6DAC020);
    // chunk 0x6DAC020 _sub_6DAC020
    asm("loc_6DAC020: mov 0x2C(%ecx),%eax;");
    asm("loc_6DAC023: mov 0x28(%ecx),%edx;");
    asm("loc_6DAC026: push %esi;");
    asm("loc_6DAC027: mov _import_6DB3194,%esi;");
    asm("loc_6DAC02D: push $_data_6DB3D88;");
    asm("loc_6DAC032: push %eax;");
    asm("loc_6DAC033: mov 0x20(%ecx),%eax;");
    asm("loc_6DAC036: mov 0x10(%esp),%ecx;");
    asm("loc_6DAC03A: push %edx;");
    asm("loc_6DAC03B: push $_data_6DB63D0;");
    asm("loc_6DAC040: push %eax;");
    asm("loc_6DAC041: push $_data_6DB63BC;");
    asm("loc_6DAC046: push %ecx;");
    asm("loc_6DAC047: call *%esi;");
    asm("loc_6DAC049: add $8,%esp;");
    asm("loc_6DAC04C: mov %eax,%ecx;");
    asm("loc_6DAC04E: calll *_import_6DB319C;");
    asm("loc_6DAC054: push %eax;");
    asm("loc_6DAC055: call *%esi;");
    asm("loc_6DAC057: add $8,%esp;");
    asm("loc_6DAC05A: mov %eax,%ecx;");
    asm("loc_6DAC05C: calll *_import_6DB3184;");
    asm("loc_6DAC062: push %eax;");
    asm("loc_6DAC063: call *%esi;");
    asm("loc_6DAC065: add $8,%esp;");
    asm("loc_6DAC068: pop %esi;");
    asm("loc_6DAC069: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC070() // _sub_6DAC070
{
    __DEBUG_ASM(6DAC070);
    // chunk 0x6DAC070 _sub_6DAC070
    asm("loc_6DAC070: mov _data_6DB63B0,%eax;");
    asm("loc_6DAC075: mov %eax,_data_6DBC220;");
    asm("loc_6DAC07A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC080() // _sub_6DAC080
{
    __DEBUG_ASM(6DAC080);
    // chunk 0x6DAC080 _sub_6DAC080
    asm("loc_6DAC080: mov _data_6DB63B0,%eax;");
    asm("loc_6DAC085: mov %eax,_data_6DBC224;");
    asm("loc_6DAC08A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC090() // _sub_6DAC090
{
    __DEBUG_ASM(6DAC090);
    // chunk 0x6DAC090 _sub_6DAC090
    asm("loc_6DAC090: mov _data_6DB63B4,%eax;");
    asm("loc_6DAC095: mov %eax,_data_6DBC21C;");
    asm("loc_6DAC09A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC0A0() // _sub_6DAC0A0
{
    __DEBUG_ASM(6DAC0A0);
    // chunk 0x6DAC0A0 _sub_6DAC0A0
    asm("loc_6DAC0A0: mov _data_6DB63DC,%eax;");
    asm("loc_6DAC0A5: mov %eax,_data_6DBC230;");
    asm("loc_6DAC0AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC0B0() // _sub_6DAC0B0
{
    __DEBUG_ASM(6DAC0B0);
    // chunk 0x6DAC0B0 _sub_6DAC0B0
    asm("loc_6DAC0B0: mov _data_6DB63DC,%eax;");
    asm("loc_6DAC0B5: mov %eax,_data_6DBC234;");
    asm("loc_6DAC0BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC0C0() // _sub_6DAC0C0
{
    __DEBUG_ASM(6DAC0C0);
    // chunk 0x6DAC0C0 _sub_6DAC0C0
    asm("loc_6DAC0C0: mov _data_6DB63E0,%eax;");
    asm("loc_6DAC0C5: mov %eax,_data_6DBC22C;");
    asm("loc_6DAC0CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC0D0() // _sub_6DAC0D0
{
    __DEBUG_ASM(6DAC0D0);
    // chunk 0x6DAC0D0 _sub_6DAC0D0
    asm("loc_6DAC0D0: mov _data_6DB63EC,%eax;");
    asm("loc_6DAC0D5: mov %eax,_data_6DBC240;");
    asm("loc_6DAC0DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC0E0() // _sub_6DAC0E0
{
    __DEBUG_ASM(6DAC0E0);
    // chunk 0x6DAC0E0 _sub_6DAC0E0
    asm("loc_6DAC0E0: mov _data_6DB63EC,%eax;");
    asm("loc_6DAC0E5: mov %eax,_data_6DBC244;");
    asm("loc_6DAC0EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC0F0() // _sub_6DAC0F0
{
    __DEBUG_ASM(6DAC0F0);
    // chunk 0x6DAC0F0 _sub_6DAC0F0
    asm("loc_6DAC0F0: mov _data_6DB63F0,%eax;");
    asm("loc_6DAC0F5: mov %eax,_data_6DBC23C;");
    asm("loc_6DAC0FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC100() // _sub_6DAC100
{
    __DEBUG_ASM(6DAC100);
    // chunk 0x6DAC100 _sub_6DAC100
    asm("loc_6DAC100: mov _data_6DB63FC,%eax;");
    asm("loc_6DAC105: mov %eax,_data_6DBC250;");
    asm("loc_6DAC10A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC110() // _sub_6DAC110
{
    __DEBUG_ASM(6DAC110);
    // chunk 0x6DAC110 _sub_6DAC110
    asm("loc_6DAC110: mov _data_6DB63FC,%eax;");
    asm("loc_6DAC115: mov %eax,_data_6DBC254;");
    asm("loc_6DAC11A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC120() // _sub_6DAC120
{
    __DEBUG_ASM(6DAC120);
    // chunk 0x6DAC120 _sub_6DAC120
    asm("loc_6DAC120: mov _data_6DB6400,%eax;");
    asm("loc_6DAC125: mov %eax,_data_6DBC24C;");
    asm("loc_6DAC12A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC130() // _sub_6DAC130
{
    __DEBUG_ASM(6DAC130);
    // chunk 0x6DAC130 _sub_6DAC130
    asm("loc_6DAC130: mov _data_6DB640C,%eax;");
    asm("loc_6DAC135: mov %eax,_data_6DBC260;");
    asm("loc_6DAC13A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC140() // _sub_6DAC140
{
    __DEBUG_ASM(6DAC140);
    // chunk 0x6DAC140 _sub_6DAC140
    asm("loc_6DAC140: mov _data_6DB640C,%eax;");
    asm("loc_6DAC145: mov %eax,_data_6DBC264;");
    asm("loc_6DAC14A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC150() // _sub_6DAC150
{
    __DEBUG_ASM(6DAC150);
    // chunk 0x6DAC150 _sub_6DAC150
    asm("loc_6DAC150: mov _data_6DB6410,%eax;");
    asm("loc_6DAC155: mov %eax,_data_6DBC25C;");
    asm("loc_6DAC15A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC160() // _sub_6DAC160
{
    __DEBUG_ASM(6DAC160);
    // chunk 0x6DAC160 _sub_6DAC160
    asm("loc_6DAC160: mov _data_6DB641C,%eax;");
    asm("loc_6DAC165: mov %eax,_data_6DBC270;");
    asm("loc_6DAC16A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC170() // _sub_6DAC170
{
    __DEBUG_ASM(6DAC170);
    // chunk 0x6DAC170 _sub_6DAC170
    asm("loc_6DAC170: mov _data_6DB641C,%eax;");
    asm("loc_6DAC175: mov %eax,_data_6DBC274;");
    asm("loc_6DAC17A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC180() // _sub_6DAC180
{
    __DEBUG_ASM(6DAC180);
    // chunk 0x6DAC180 _sub_6DAC180
    asm("loc_6DAC180: mov _data_6DB6420,%eax;");
    asm("loc_6DAC185: mov %eax,_data_6DBC26C;");
    asm("loc_6DAC18A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC190() // _sub_6DAC190
{
    __DEBUG_ASM(6DAC190);
    // chunk 0x6DAC190 _sub_6DAC190
    asm("loc_6DAC190: mov _data_6DB642C,%eax;");
    asm("loc_6DAC195: mov %eax,_data_6DBC280;");
    asm("loc_6DAC19A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC1A0() // _sub_6DAC1A0
{
    __DEBUG_ASM(6DAC1A0);
    // chunk 0x6DAC1A0 _sub_6DAC1A0
    asm("loc_6DAC1A0: mov _data_6DB642C,%eax;");
    asm("loc_6DAC1A5: mov %eax,_data_6DBC284;");
    asm("loc_6DAC1AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC1B0() // _sub_6DAC1B0
{
    __DEBUG_ASM(6DAC1B0);
    // chunk 0x6DAC1B0 _sub_6DAC1B0
    asm("loc_6DAC1B0: mov _data_6DB6430,%eax;");
    asm("loc_6DAC1B5: mov %eax,_data_6DBC27C;");
    asm("loc_6DAC1BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC1C0() // _sub_6DAC1C0
{
    __DEBUG_ASM(6DAC1C0);
    // chunk 0x6DAC1C0 _sub_6DAC1C0
    asm("loc_6DAC1C0: mov _data_6DB643C,%eax;");
    asm("loc_6DAC1C5: mov %eax,_data_6DBC290;");
    asm("loc_6DAC1CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC1D0() // _sub_6DAC1D0
{
    __DEBUG_ASM(6DAC1D0);
    // chunk 0x6DAC1D0 _sub_6DAC1D0
    asm("loc_6DAC1D0: mov _data_6DB643C,%eax;");
    asm("loc_6DAC1D5: mov %eax,_data_6DBC294;");
    asm("loc_6DAC1DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC1E0() // _sub_6DAC1E0
{
    __DEBUG_ASM(6DAC1E0);
    // chunk 0x6DAC1E0 _sub_6DAC1E0
    asm("loc_6DAC1E0: mov _data_6DB6440,%eax;");
    asm("loc_6DAC1E5: mov %eax,_data_6DBC28C;");
    asm("loc_6DAC1EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC1F0() // _sub_6DAC1F0
{
    __DEBUG_ASM(6DAC1F0);
    // chunk 0x6DAC1F0 _sub_6DAC1F0
    asm("loc_6DAC1F0: mov _data_6DB644C,%eax;");
    asm("loc_6DAC1F5: mov %eax,_data_6DBC2A0;");
    asm("loc_6DAC1FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC200() // _sub_6DAC200
{
    __DEBUG_ASM(6DAC200);
    // chunk 0x6DAC200 _sub_6DAC200
    asm("loc_6DAC200: mov _data_6DB644C,%eax;");
    asm("loc_6DAC205: mov %eax,_data_6DBC2A4;");
    asm("loc_6DAC20A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC210() // _sub_6DAC210
{
    __DEBUG_ASM(6DAC210);
    // chunk 0x6DAC210 _sub_6DAC210
    asm("loc_6DAC210: mov _data_6DB6450,%eax;");
    asm("loc_6DAC215: mov %eax,_data_6DBC29C;");
    asm("loc_6DAC21A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC220() // _sub_6DAC220
{
    __DEBUG_ASM(6DAC220);
    // chunk 0x6DAC220 _sub_6DAC220
    asm("loc_6DAC220: mov _data_6DB645C,%eax;");
    asm("loc_6DAC225: mov %eax,_data_6DBC2B0;");
    asm("loc_6DAC22A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC230() // _sub_6DAC230
{
    __DEBUG_ASM(6DAC230);
    // chunk 0x6DAC230 _sub_6DAC230
    asm("loc_6DAC230: mov _data_6DB645C,%eax;");
    asm("loc_6DAC235: mov %eax,_data_6DBC2B4;");
    asm("loc_6DAC23A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC240() // _sub_6DAC240
{
    __DEBUG_ASM(6DAC240);
    // chunk 0x6DAC240 _sub_6DAC240
    asm("loc_6DAC240: mov _data_6DB6460,%eax;");
    asm("loc_6DAC245: mov %eax,_data_6DBC2AC;");
    asm("loc_6DAC24A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC250() // _sub_6DAC250
{
    __DEBUG_ASM(6DAC250);
    // chunk 0x6DAC250 _sub_6DAC250
    asm("loc_6DAC250: mov _data_6DB646C,%eax;");
    asm("loc_6DAC255: mov %eax,_data_6DBC2C0;");
    asm("loc_6DAC25A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC260() // _sub_6DAC260
{
    __DEBUG_ASM(6DAC260);
    // chunk 0x6DAC260 _sub_6DAC260
    asm("loc_6DAC260: mov _data_6DB646C,%eax;");
    asm("loc_6DAC265: mov %eax,_data_6DBC2C4;");
    asm("loc_6DAC26A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC270() // _sub_6DAC270
{
    __DEBUG_ASM(6DAC270);
    // chunk 0x6DAC270 _sub_6DAC270
    asm("loc_6DAC270: mov _data_6DB6470,%eax;");
    asm("loc_6DAC275: mov %eax,_data_6DBC2BC;");
    asm("loc_6DAC27A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC280() // _sub_6DAC280
{
    __DEBUG_ASM(6DAC280);
    // chunk 0x6DAC280 _sub_6DAC280
    asm("loc_6DAC280: mov _data_6DB647C,%eax;");
    asm("loc_6DAC285: mov %eax,_data_6DBC2D0;");
    asm("loc_6DAC28A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC290() // _sub_6DAC290
{
    __DEBUG_ASM(6DAC290);
    // chunk 0x6DAC290 _sub_6DAC290
    asm("loc_6DAC290: mov _data_6DB647C,%eax;");
    asm("loc_6DAC295: mov %eax,_data_6DBC2D4;");
    asm("loc_6DAC29A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC2A0() // _sub_6DAC2A0
{
    __DEBUG_ASM(6DAC2A0);
    // chunk 0x6DAC2A0 _sub_6DAC2A0
    asm("loc_6DAC2A0: mov _data_6DB6480,%eax;");
    asm("loc_6DAC2A5: mov %eax,_data_6DBC2CC;");
    asm("loc_6DAC2AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC2B0() // _sub_6DAC2B0
{
    __DEBUG_ASM(6DAC2B0);
    // chunk 0x6DAC2B0 _sub_6DAC2B0
    asm("loc_6DAC2B0: push %ebx;");
    asm("loc_6DAC2B1: mov 8(%esp),%ebx;");
    asm("loc_6DAC2B5: push %esi;");
    asm("loc_6DAC2B6: mov _import_6DB3194,%esi;");
    asm("loc_6DAC2BC: push %edi;");
    asm("loc_6DAC2BD: mov %ecx,%edi;");
    asm("loc_6DAC2BF: mov 0x20(%edi),%eax;");
    asm("loc_6DAC2C2: push $_data_6DB3D88;");
    asm("loc_6DAC2C7: push %eax;");
    asm("loc_6DAC2C8: push $_data_6DB64B0;");
    asm("loc_6DAC2CD: push %ebx;");
    asm("loc_6DAC2CE: call *%esi;");
    asm("loc_6DAC2D0: add $8,%esp;");
    asm("loc_6DAC2D3: mov %eax,%ecx;");
    asm("loc_6DAC2D5: calll *_import_6DB319C;");
    asm("loc_6DAC2DB: push %eax;");
    asm("loc_6DAC2DC: call *%esi;");
    asm("loc_6DAC2DE: mov 0x24(%edi),%ecx;");
    asm("loc_6DAC2E1: add $8,%esp;");
    asm("loc_6DAC2E4: push $_data_6DB3D88;");
    asm("loc_6DAC2E9: push %ecx;");
    asm("loc_6DAC2EA: push $_data_6DB649C;");
    asm("loc_6DAC2EF: push %ebx;");
    asm("loc_6DAC2F0: call *%esi;");
    asm("loc_6DAC2F2: add $8,%esp;");
    asm("loc_6DAC2F5: mov %eax,%ecx;");
    asm("loc_6DAC2F7: calll *_import_6DB319C;");
    asm("loc_6DAC2FD: push %eax;");
    asm("loc_6DAC2FE: call *%esi;");
    asm("loc_6DAC300: mov 0x28(%edi),%edx;");
    asm("loc_6DAC303: add $8,%esp;");
    asm("loc_6DAC306: push $_data_6DB3D88;");
    asm("loc_6DAC30B: push %edx;");
    asm("loc_6DAC30C: push $_data_6DB6488;");
    asm("loc_6DAC311: push %ebx;");
    asm("loc_6DAC312: call *%esi;");
    asm("loc_6DAC314: add $8,%esp;");
    asm("loc_6DAC317: mov %eax,%ecx;");
    asm("loc_6DAC319: calll *_import_6DB3188;");
    asm("loc_6DAC31F: push %eax;");
    asm("loc_6DAC320: call *%esi;");
    asm("loc_6DAC322: add $8,%esp;");
    asm("loc_6DAC325: pop %edi;");
    asm("loc_6DAC326: pop %esi;");
    asm("loc_6DAC327: pop %ebx;");
    asm("loc_6DAC328: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC330() // _sub_6DAC330
{
    __DEBUG_ASM(6DAC330);
    // chunk 0x6DAC330 _sub_6DAC330
    asm("loc_6DAC330: mov _data_6DB64C8,%eax;");
    asm("loc_6DAC335: mov %eax,_data_6DBC2E0;");
    asm("loc_6DAC33A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC340() // _sub_6DAC340
{
    __DEBUG_ASM(6DAC340);
    // chunk 0x6DAC340 _sub_6DAC340
    asm("loc_6DAC340: mov _data_6DB64C8,%eax;");
    asm("loc_6DAC345: mov %eax,_data_6DBC2E4;");
    asm("loc_6DAC34A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC350() // _sub_6DAC350
{
    __DEBUG_ASM(6DAC350);
    // chunk 0x6DAC350 _sub_6DAC350
    asm("loc_6DAC350: mov _data_6DB64CC,%eax;");
    asm("loc_6DAC355: mov %eax,_data_6DBC2DC;");
    asm("loc_6DAC35A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC360() // _sub_6DAC360
{
    __DEBUG_ASM(6DAC360);
    // chunk 0x6DAC360 _sub_6DAC360
    asm("loc_6DAC360: mov _data_6DB64D8,%eax;");
    asm("loc_6DAC365: mov %eax,_data_6DBC2F0;");
    asm("loc_6DAC36A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC370() // _sub_6DAC370
{
    __DEBUG_ASM(6DAC370);
    // chunk 0x6DAC370 _sub_6DAC370
    asm("loc_6DAC370: mov _data_6DB64D8,%eax;");
    asm("loc_6DAC375: mov %eax,_data_6DBC2F4;");
    asm("loc_6DAC37A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC380() // _sub_6DAC380
{
    __DEBUG_ASM(6DAC380);
    // chunk 0x6DAC380 _sub_6DAC380
    asm("loc_6DAC380: mov _data_6DB64DC,%eax;");
    asm("loc_6DAC385: mov %eax,_data_6DBC2EC;");
    asm("loc_6DAC38A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC390() // _sub_6DAC390
{
    __DEBUG_ASM(6DAC390);
    // chunk 0x6DAC390 _sub_6DAC390
    asm("loc_6DAC390: mov _data_6DB64E8,%eax;");
    asm("loc_6DAC395: mov %eax,_data_6DBC300;");
    asm("loc_6DAC39A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC3A0() // _sub_6DAC3A0
{
    __DEBUG_ASM(6DAC3A0);
    // chunk 0x6DAC3A0 _sub_6DAC3A0
    asm("loc_6DAC3A0: mov _data_6DB64E8,%eax;");
    asm("loc_6DAC3A5: mov %eax,_data_6DBC304;");
    asm("loc_6DAC3AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC3B0() // _sub_6DAC3B0
{
    __DEBUG_ASM(6DAC3B0);
    // chunk 0x6DAC3B0 _sub_6DAC3B0
    asm("loc_6DAC3B0: mov _data_6DB64EC,%eax;");
    asm("loc_6DAC3B5: mov %eax,_data_6DBC2FC;");
    asm("loc_6DAC3BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC3C0() // _sub_6DAC3C0
{
    __DEBUG_ASM(6DAC3C0);
    // chunk 0x6DAC3C0 _sub_6DAC3C0
    asm("loc_6DAC3C0: mov 8(%esp),%eax;");
    asm("loc_6DAC3C4: push %ebx;");
    asm("loc_6DAC3C5: push %ebp;");
    asm("loc_6DAC3C6: push %esi;");
    asm("loc_6DAC3C7: push %edi;");
    asm("loc_6DAC3C8: mov %ecx,%edi;");
    asm("loc_6DAC3CA: mov 0x14(%esp),%ecx;");
    asm("loc_6DAC3CE: lea 0x10(%edi),%esi;");
    asm("loc_6DAC3D1: mov %eax,4(%esi);");
    asm("loc_6DAC3D4: mov (%ecx),%edx;");
    asm("loc_6DAC3D6: mov %edx,8(%esi);");
    asm("loc_6DAC3D9: movl $0,(%esi);");
    asm("loc_6DAC3DF: movl $0,0xC(%esi);");
    asm("loc_6DAC3E6: mov 0x14(%edi),%eax;");
    asm("loc_6DAC3E9: push %esi;");
    asm("loc_6DAC3EA: push %eax;");
    asm("loc_6DAC3EB: lea 0x18(%edi),%ebx;");
    asm("loc_6DAC3EE: push %ebx;");
    asm("loc_6DAC3EF: mov %edi,%ecx;");
    asm("loc_6DAC3F1: call _sub_6DA1380;");
    asm("loc_6DAC3F6: test %eax,%eax;");
    asm("loc_6DAC3F8: mov %eax,0x1C(%edi);");
    asm("loc_6DAC3FB: je loc_6DAC409;");
    asm("loc_6DAC3FD: pop %edi;");
    asm("loc_6DAC3FE: pop %esi;");
    asm("loc_6DAC3FF: pop %ebp;");
    asm("loc_6DAC400: mov $0x16,%eax;");
    asm("loc_6DAC405: pop %ebx;");
    asm("loc_6DAC406: ret $0xC;");
    asm("loc_6DAC409: mov (%esi),%edx;");
    asm("loc_6DAC40B: mov 4(%esi),%ecx;");
    asm("loc_6DAC40E: add $4,%edx;");
    asm("loc_6DAC411: mov %edx,%eax;");
    asm("loc_6DAC413: cmp %ecx,%eax;");
    asm("loc_6DAC415: mov %edx,(%esi);");
    asm("loc_6DAC417: mov $0x16,%ebp;");
    asm("loc_6DAC41C: jbe loc_6DAC421;");
    asm("loc_6DAC41E: mov %ebp,0xC(%esi);");
    asm("loc_6DAC421: mov 0x1C(%edi),%eax;");
    asm("loc_6DAC424: test %eax,%eax;");
    asm("loc_6DAC426: je loc_6DAC431;");
    asm("loc_6DAC428: pop %edi;");
    asm("loc_6DAC429: pop %esi;");
    asm("loc_6DAC42A: mov %ebp,%eax;");
    asm("loc_6DAC42C: pop %ebp;");
    asm("loc_6DAC42D: pop %ebx;");
    asm("loc_6DAC42E: ret $0xC;");
    asm("loc_6DAC431: mov (%ebx),%eax;");
    asm("loc_6DAC433: mov 0x20(%edi),%ecx;");
    asm("loc_6DAC436: mov %ecx,(%eax);");
    asm("loc_6DAC438: add $4,%eax;");
    asm("loc_6DAC43B: mov %eax,(%ebx);");
    asm("loc_6DAC43D: mov (%esi),%edx;");
    asm("loc_6DAC43F: mov 4(%esi),%ecx;");
    asm("loc_6DAC442: add $4,%edx;");
    asm("loc_6DAC445: mov %edx,%eax;");
    asm("loc_6DAC447: cmp %ecx,%eax;");
    asm("loc_6DAC449: mov %edx,(%esi);");
    asm("loc_6DAC44B: jbe loc_6DAC450;");
    asm("loc_6DAC44D: mov %ebp,0xC(%esi);");
    asm("loc_6DAC450: mov 0x1C(%edi),%eax;");
    asm("loc_6DAC453: test %eax,%eax;");
    asm("loc_6DAC455: je loc_6DAC460;");
    asm("loc_6DAC457: pop %edi;");
    asm("loc_6DAC458: pop %esi;");
    asm("loc_6DAC459: mov %ebp,%eax;");
    asm("loc_6DAC45B: pop %ebp;");
    asm("loc_6DAC45C: pop %ebx;");
    asm("loc_6DAC45D: ret $0xC;");
    asm("loc_6DAC460: mov (%ebx),%eax;");
    asm("loc_6DAC462: mov 0x24(%edi),%edx;");
    asm("loc_6DAC465: mov %edx,(%eax);");
    asm("loc_6DAC467: add $4,%eax;");
    asm("loc_6DAC46A: mov %eax,(%ebx);");
    asm("loc_6DAC46C: mov (%esi),%edx;");
    asm("loc_6DAC46E: mov 4(%esi),%ecx;");
    asm("loc_6DAC471: add $4,%edx;");
    asm("loc_6DAC474: mov %edx,%eax;");
    asm("loc_6DAC476: cmp %ecx,%eax;");
    asm("loc_6DAC478: mov %edx,(%esi);");
    asm("loc_6DAC47A: jbe loc_6DAC47F;");
    asm("loc_6DAC47C: mov %ebp,0xC(%esi);");
    asm("loc_6DAC47F: mov 0x1C(%edi),%eax;");
    asm("loc_6DAC482: test %eax,%eax;");
    asm("loc_6DAC484: je loc_6DAC48F;");
    asm("loc_6DAC486: pop %edi;");
    asm("loc_6DAC487: pop %esi;");
    asm("loc_6DAC488: mov %ebp,%eax;");
    asm("loc_6DAC48A: pop %ebp;");
    asm("loc_6DAC48B: pop %ebx;");
    asm("loc_6DAC48C: ret $0xC;");
    asm("loc_6DAC48F: mov (%ebx),%eax;");
    asm("loc_6DAC491: mov 0x28(%edi),%ecx;");
    asm("loc_6DAC494: mov %ecx,(%eax);");
    asm("loc_6DAC496: add $4,%eax;");
    asm("loc_6DAC499: mov %eax,(%ebx);");
    asm("loc_6DAC49B: mov (%esi),%edx;");
    asm("loc_6DAC49D: mov 4(%esi),%ecx;");
    asm("loc_6DAC4A0: add $2,%edx;");
    asm("loc_6DAC4A3: mov %edx,%eax;");
    asm("loc_6DAC4A5: cmp %ecx,%eax;");
    asm("loc_6DAC4A7: mov %edx,(%esi);");
    asm("loc_6DAC4A9: jbe loc_6DAC4AE;");
    asm("loc_6DAC4AB: mov %ebp,0xC(%esi);");
    asm("loc_6DAC4AE: mov 0x1C(%edi),%eax;");
    asm("loc_6DAC4B1: test %eax,%eax;");
    asm("loc_6DAC4B3: je loc_6DAC4BE;");
    asm("loc_6DAC4B5: pop %edi;");
    asm("loc_6DAC4B6: pop %esi;");
    asm("loc_6DAC4B7: mov %ebp,%eax;");
    asm("loc_6DAC4B9: pop %ebp;");
    asm("loc_6DAC4BA: pop %ebx;");
    asm("loc_6DAC4BB: ret $0xC;");
    asm("loc_6DAC4BE: mov (%ebx),%eax;");
    asm("loc_6DAC4C0: mov 0x2C(%edi),%dx;");
    asm("loc_6DAC4C4: mov %dx,(%eax);");
    asm("loc_6DAC4C7: add $2,%eax;");
    asm("loc_6DAC4CA: mov %eax,(%ebx);");
    asm("loc_6DAC4CC: mov (%esi),%edx;");
    asm("loc_6DAC4CE: mov 4(%esi),%ecx;");
    asm("loc_6DAC4D1: add $4,%edx;");
    asm("loc_6DAC4D4: mov %edx,%eax;");
    asm("loc_6DAC4D6: cmp %ecx,%eax;");
    asm("loc_6DAC4D8: mov %edx,(%esi);");
    asm("loc_6DAC4DA: jbe loc_6DAC4DF;");
    asm("loc_6DAC4DC: mov %ebp,0xC(%esi);");
    asm("loc_6DAC4DF: mov 0x1C(%edi),%eax;");
    asm("loc_6DAC4E2: test %eax,%eax;");
    asm("loc_6DAC4E4: je loc_6DAC4EF;");
    asm("loc_6DAC4E6: pop %edi;");
    asm("loc_6DAC4E7: pop %esi;");
    asm("loc_6DAC4E8: mov %ebp,%eax;");
    asm("loc_6DAC4EA: pop %ebp;");
    asm("loc_6DAC4EB: pop %ebx;");
    asm("loc_6DAC4EC: ret $0xC;");
    asm("loc_6DAC4EF: mov (%ebx),%eax;");
    asm("loc_6DAC4F1: flds 0x30(%edi);");
    asm("loc_6DAC4F4: fstps (%eax);");
    asm("loc_6DAC4F6: add $4,%eax;");
    asm("loc_6DAC4F9: mov %eax,(%ebx);");
    asm("loc_6DAC4FB: mov (%esi),%edx;");
    asm("loc_6DAC4FD: mov 4(%esi),%ecx;");
    asm("loc_6DAC500: add $4,%edx;");
    asm("loc_6DAC503: mov %edx,%eax;");
    asm("loc_6DAC505: cmp %ecx,%eax;");
    asm("loc_6DAC507: mov %edx,(%esi);");
    asm("loc_6DAC509: jbe loc_6DAC50E;");
    asm("loc_6DAC50B: mov %ebp,0xC(%esi);");
    asm("loc_6DAC50E: mov 0x1C(%edi),%eax;");
    asm("loc_6DAC511: test %eax,%eax;");
    asm("loc_6DAC513: je loc_6DAC51E;");
    asm("loc_6DAC515: pop %edi;");
    asm("loc_6DAC516: pop %esi;");
    asm("loc_6DAC517: mov %ebp,%eax;");
    asm("loc_6DAC519: pop %ebp;");
    asm("loc_6DAC51A: pop %ebx;");
    asm("loc_6DAC51B: ret $0xC;");
    asm("loc_6DAC51E: mov (%ebx),%eax;");
    asm("loc_6DAC520: flds 0x34(%edi);");
    asm("loc_6DAC523: add $4,%eax;");
    asm("loc_6DAC526: fstps -4(%eax);");
    asm("loc_6DAC529: mov %eax,(%ebx);");
    asm("loc_6DAC52B: mov (%esi),%edx;");
    asm("loc_6DAC52D: mov 4(%esi),%ecx;");
    asm("loc_6DAC530: inc %edx;");
    asm("loc_6DAC531: mov %edx,%eax;");
    asm("loc_6DAC533: cmp %ecx,%eax;");
    asm("loc_6DAC535: mov %edx,(%esi);");
    asm("loc_6DAC537: jbe loc_6DAC53C;");
    asm("loc_6DAC539: mov %ebp,0xC(%esi);");
    asm("loc_6DAC53C: mov 0x1C(%edi),%eax;");
    asm("loc_6DAC53F: test %eax,%eax;");
    asm("loc_6DAC541: je loc_6DAC54C;");
    asm("loc_6DAC543: pop %edi;");
    asm("loc_6DAC544: pop %esi;");
    asm("loc_6DAC545: mov %ebp,%eax;");
    asm("loc_6DAC547: pop %ebp;");
    asm("loc_6DAC548: pop %ebx;");
    asm("loc_6DAC549: ret $0xC;");
    asm("loc_6DAC54C: mov (%ebx),%eax;");
    asm("loc_6DAC54E: mov 0x38(%edi),%cl;");
    asm("loc_6DAC551: mov %cl,(%eax);");
    asm("loc_6DAC553: mov 0x14(%edi),%edx;");
    asm("loc_6DAC556: push %esi;");
    asm("loc_6DAC557: push %edx;");
    asm("loc_6DAC558: inc %eax;");
    asm("loc_6DAC559: push %ebx;");
    asm("loc_6DAC55A: mov %edi,%ecx;");
    asm("loc_6DAC55C: mov %eax,(%ebx);");
    asm("loc_6DAC55E: call _sub_6DA13C0;");
    asm("loc_6DAC563: test %eax,%eax;");
    asm("loc_6DAC565: mov %eax,0x1C(%edi);");
    asm("loc_6DAC568: je loc_6DAC573;");
    asm("loc_6DAC56A: pop %edi;");
    asm("loc_6DAC56B: pop %esi;");
    asm("loc_6DAC56C: mov %ebp,%eax;");
    asm("loc_6DAC56E: pop %ebp;");
    asm("loc_6DAC56F: pop %ebx;");
    asm("loc_6DAC570: ret $0xC;");
    asm("loc_6DAC573: mov (%esi),%eax;");
    asm("loc_6DAC575: mov 0x1C(%esp),%ecx;");
    asm("loc_6DAC579: mov %eax,(%ecx);");
    asm("loc_6DAC57B: mov 0xC(%edi),%edx;");
    asm("loc_6DAC57E: push %edx;");
    asm("loc_6DAC57F: call _sub_6DA16B0;");
    asm("loc_6DAC584: mov %eax,%ecx;");
    asm("loc_6DAC586: mov (%ecx),%edi;");
    asm("loc_6DAC588: mov 0x18(%ecx),%edx;");
    asm("loc_6DAC58B: add $4,%esp;");
    asm("loc_6DAC58E: inc %edi;");
    asm("loc_6DAC58F: mov %edi,(%ecx);");
    asm("loc_6DAC591: mov (%esi),%eax;");
    asm("loc_6DAC593: add %eax,%edx;");
    asm("loc_6DAC595: mov 0x10(%ecx),%eax;");
    asm("loc_6DAC598: mov %edx,0x18(%ecx);");
    asm("loc_6DAC59B: mov (%esi),%esi;");
    asm("loc_6DAC59D: cmp %eax,%esi;");
    asm("loc_6DAC59F: jbe loc_6DAC5A4;");
    asm("loc_6DAC5A1: mov %esi,0x10(%ecx);");
    asm("loc_6DAC5A4: mov 0x18(%ecx),%eax;");
    asm("loc_6DAC5A7: xor %edx,%edx;");
    asm("loc_6DAC5A9: div %edi;");
    asm("loc_6DAC5AB: pop %edi;");
    asm("loc_6DAC5AC: pop %esi;");
    asm("loc_6DAC5AD: pop %ebp;");
    asm("loc_6DAC5AE: pop %ebx;");
    asm("loc_6DAC5AF: mov %eax,8(%ecx);");
    asm("loc_6DAC5B2: xor %eax,%eax;");
    asm("loc_6DAC5B4: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC5C0() // _sub_6DAC5C0
{
    __DEBUG_ASM(6DAC5C0);
    // chunk 0x6DAC5C0 _sub_6DAC5C0
    asm("loc_6DAC5C0: mov 4(%esp),%eax;");
    asm("loc_6DAC5C4: push %ebx;");
    asm("loc_6DAC5C5: push %ebp;");
    asm("loc_6DAC5C6: mov 0x10(%esp),%ebp;");
    asm("loc_6DAC5CA: push %esi;");
    asm("loc_6DAC5CB: push %edi;");
    asm("loc_6DAC5CC: mov %ecx,%edi;");
    asm("loc_6DAC5CE: lea 0x10(%edi),%esi;");
    asm("loc_6DAC5D1: push %esi;");
    asm("loc_6DAC5D2: push %ebp;");
    asm("loc_6DAC5D3: lea 0x18(%edi),%ebx;");
    asm("loc_6DAC5D6: push %ebx;");
    asm("loc_6DAC5D7: mov %ebp,4(%esi);");
    asm("loc_6DAC5DA: mov %eax,8(%esi);");
    asm("loc_6DAC5DD: movl $0,(%esi);");
    asm("loc_6DAC5E3: movl $0,0xC(%esi);");
    asm("loc_6DAC5EA: call _sub_6DA13C0;");
    asm("loc_6DAC5EF: test %eax,%eax;");
    asm("loc_6DAC5F1: mov %eax,0x1C(%edi);");
    asm("loc_6DAC5F4: je loc_6DAC602;");
    asm("loc_6DAC5F6: pop %edi;");
    asm("loc_6DAC5F7: pop %esi;");
    asm("loc_6DAC5F8: pop %ebp;");
    asm("loc_6DAC5F9: mov $0x17,%eax;");
    asm("loc_6DAC5FE: pop %ebx;");
    asm("loc_6DAC5FF: ret $0xC;");
    asm("loc_6DAC602: mov (%esi),%edx;");
    asm("loc_6DAC604: mov 4(%esi),%ecx;");
    asm("loc_6DAC607: add $4,%edx;");
    asm("loc_6DAC60A: mov %edx,%eax;");
    asm("loc_6DAC60C: cmp %ecx,%eax;");
    asm("loc_6DAC60E: mov %edx,(%esi);");
    asm("loc_6DAC610: mov $0x17,%ecx;");
    asm("loc_6DAC615: jbe loc_6DAC61A;");
    asm("loc_6DAC617: mov %ecx,0xC(%esi);");
    asm("loc_6DAC61A: mov 0x1C(%edi),%eax;");
    asm("loc_6DAC61D: test %eax,%eax;");
    asm("loc_6DAC61F: jne loc_6DAC782;");
    asm("loc_6DAC625: mov (%ebx),%eax;");
    asm("loc_6DAC627: mov (%eax),%edx;");
    asm("loc_6DAC629: add $4,%eax;");
    asm("loc_6DAC62C: mov %eax,(%ebx);");
    asm("loc_6DAC62E: mov %edx,0x20(%edi);");
    asm("loc_6DAC631: mov (%esi),%eax;");
    asm("loc_6DAC633: mov 4(%esi),%edx;");
    asm("loc_6DAC636: add $4,%eax;");
    asm("loc_6DAC639: cmp %edx,%eax;");
    asm("loc_6DAC63B: mov %eax,(%esi);");
    asm("loc_6DAC63D: jbe loc_6DAC642;");
    asm("loc_6DAC63F: mov %ecx,0xC(%esi);");
    asm("loc_6DAC642: mov 0x1C(%edi),%eax;");
    asm("loc_6DAC645: test %eax,%eax;");
    asm("loc_6DAC647: jne loc_6DAC782;");
    asm("loc_6DAC64D: mov (%ebx),%eax;");
    asm("loc_6DAC64F: mov (%eax),%edx;");
    asm("loc_6DAC651: add $4,%eax;");
    asm("loc_6DAC654: mov %eax,(%ebx);");
    asm("loc_6DAC656: mov %edx,0x24(%edi);");
    asm("loc_6DAC659: mov (%esi),%eax;");
    asm("loc_6DAC65B: mov 4(%esi),%edx;");
    asm("loc_6DAC65E: add $4,%eax;");
    asm("loc_6DAC661: cmp %edx,%eax;");
    asm("loc_6DAC663: mov %eax,(%esi);");
    asm("loc_6DAC665: jbe loc_6DAC66A;");
    asm("loc_6DAC667: mov %ecx,0xC(%esi);");
    asm("loc_6DAC66A: mov 0x1C(%edi),%eax;");
    asm("loc_6DAC66D: test %eax,%eax;");
    asm("loc_6DAC66F: jne loc_6DAC782;");
    asm("loc_6DAC675: mov (%ebx),%eax;");
    asm("loc_6DAC677: mov (%eax),%edx;");
    asm("loc_6DAC679: add $4,%eax;");
    asm("loc_6DAC67C: mov %eax,(%ebx);");
    asm("loc_6DAC67E: mov %edx,0x28(%edi);");
    asm("loc_6DAC681: mov (%esi),%eax;");
    asm("loc_6DAC683: mov 4(%esi),%edx;");
    asm("loc_6DAC686: add $2,%eax;");
    asm("loc_6DAC689: cmp %edx,%eax;");
    asm("loc_6DAC68B: mov %eax,(%esi);");
    asm("loc_6DAC68D: jbe loc_6DAC692;");
    asm("loc_6DAC68F: mov %ecx,0xC(%esi);");
    asm("loc_6DAC692: mov 0x1C(%edi),%eax;");
    asm("loc_6DAC695: test %eax,%eax;");
    asm("loc_6DAC697: jne loc_6DAC782;");
    asm("loc_6DAC69D: mov (%ebx),%eax;");
    asm("loc_6DAC69F: mov (%eax),%dx;");
    asm("loc_6DAC6A2: add $2,%eax;");
    asm("loc_6DAC6A5: mov %eax,(%ebx);");
    asm("loc_6DAC6A7: mov %dx,0x2C(%edi);");
    asm("loc_6DAC6AB: mov (%esi),%eax;");
    asm("loc_6DAC6AD: mov 4(%esi),%edx;");
    asm("loc_6DAC6B0: add $4,%eax;");
    asm("loc_6DAC6B3: cmp %edx,%eax;");
    asm("loc_6DAC6B5: mov %eax,(%esi);");
    asm("loc_6DAC6B7: jbe loc_6DAC6BC;");
    asm("loc_6DAC6B9: mov %ecx,0xC(%esi);");
    asm("loc_6DAC6BC: mov 0x1C(%edi),%eax;");
    asm("loc_6DAC6BF: test %eax,%eax;");
    asm("loc_6DAC6C1: jne loc_6DAC782;");
    asm("loc_6DAC6C7: mov (%ebx),%eax;");
    asm("loc_6DAC6C9: mov (%eax),%edx;");
    asm("loc_6DAC6CB: add $4,%eax;");
    asm("loc_6DAC6CE: mov %eax,(%ebx);");
    asm("loc_6DAC6D0: mov %edx,0x30(%edi);");
    asm("loc_6DAC6D3: mov (%esi),%eax;");
    asm("loc_6DAC6D5: mov 4(%esi),%edx;");
    asm("loc_6DAC6D8: add $4,%eax;");
    asm("loc_6DAC6DB: cmp %edx,%eax;");
    asm("loc_6DAC6DD: mov %eax,(%esi);");
    asm("loc_6DAC6DF: jbe loc_6DAC6E4;");
    asm("loc_6DAC6E1: mov %ecx,0xC(%esi);");
    asm("loc_6DAC6E4: mov 0x1C(%edi),%eax;");
    asm("loc_6DAC6E7: test %eax,%eax;");
    asm("loc_6DAC6E9: jne loc_6DAC782;");
    asm("loc_6DAC6EF: mov (%ebx),%eax;");
    asm("loc_6DAC6F1: mov (%eax),%edx;");
    asm("loc_6DAC6F3: add $4,%eax;");
    asm("loc_6DAC6F6: mov %eax,(%ebx);");
    asm("loc_6DAC6F8: mov %edx,0x34(%edi);");
    asm("loc_6DAC6FB: mov (%esi),%eax;");
    asm("loc_6DAC6FD: mov 4(%esi),%edx;");
    asm("loc_6DAC700: inc %eax;");
    asm("loc_6DAC701: cmp %edx,%eax;");
    asm("loc_6DAC703: mov %eax,(%esi);");
    asm("loc_6DAC705: jbe loc_6DAC70A;");
    asm("loc_6DAC707: mov %ecx,0xC(%esi);");
    asm("loc_6DAC70A: mov 0x1C(%edi),%eax;");
    asm("loc_6DAC70D: test %eax,%eax;");
    asm("loc_6DAC70F: jne loc_6DAC782;");
    asm("loc_6DAC711: mov (%ebx),%eax;");
    asm("loc_6DAC713: mov (%eax),%cl;");
    asm("loc_6DAC715: push %esi;");
    asm("loc_6DAC716: push %ebp;");
    asm("loc_6DAC717: mov %cl,0x38(%edi);");
    asm("loc_6DAC71A: inc %eax;");
    asm("loc_6DAC71B: push %ebx;");
    asm("loc_6DAC71C: mov %edi,%ecx;");
    asm("loc_6DAC71E: mov %eax,(%ebx);");
    asm("loc_6DAC720: call _sub_6DA13C0;");
    asm("loc_6DAC725: test %eax,%eax;");
    asm("loc_6DAC727: mov %eax,0x1C(%edi);");
    asm("loc_6DAC72A: je loc_6DAC738;");
    asm("loc_6DAC72C: pop %edi;");
    asm("loc_6DAC72D: pop %esi;");
    asm("loc_6DAC72E: pop %ebp;");
    asm("loc_6DAC72F: mov $0x17,%eax;");
    asm("loc_6DAC734: pop %ebx;");
    asm("loc_6DAC735: ret $0xC;");
    asm("loc_6DAC738: mov (%esi),%edx;");
    asm("loc_6DAC73A: mov 0x1C(%esp),%eax;");
    asm("loc_6DAC73E: mov %edx,(%eax);");
    asm("loc_6DAC740: mov 0xC(%edi),%ecx;");
    asm("loc_6DAC743: push %ecx;");
    asm("loc_6DAC744: call _sub_6DA16B0;");
    asm("loc_6DAC749: mov %eax,%ecx;");
    asm("loc_6DAC74B: mov 4(%ecx),%edx;");
    asm("loc_6DAC74E: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAC751: mov 0x14(%ecx),%eax;");
    asm("loc_6DAC754: add $4,%esp;");
    asm("loc_6DAC757: inc %edx;");
    asm("loc_6DAC758: mov %edx,4(%ecx);");
    asm("loc_6DAC75B: mov %edx,%edi;");
    asm("loc_6DAC75D: mov (%esi),%edx;");
    asm("loc_6DAC75F: add $2,%edx;");
    asm("loc_6DAC762: add %edx,%ebp;");
    asm("loc_6DAC764: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAC767: mov (%esi),%esi;");
    asm("loc_6DAC769: add $2,%eax;");
    asm("loc_6DAC76C: cmp %eax,%esi;");
    asm("loc_6DAC76E: jbe loc_6DAC776;");
    asm("loc_6DAC770: add $2,%esi;");
    asm("loc_6DAC773: mov %esi,0x14(%ecx);");
    asm("loc_6DAC776: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAC779: xor %edx,%edx;");
    asm("loc_6DAC77B: div %edi;");
    asm("loc_6DAC77D: mov %eax,0xC(%ecx);");
    asm("loc_6DAC780: xor %eax,%eax;");
    asm("loc_6DAC782: pop %edi;");
    asm("loc_6DAC783: pop %esi;");
    asm("loc_6DAC784: pop %ebp;");
    asm("loc_6DAC785: pop %ebx;");
    asm("loc_6DAC786: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC790() // _sub_6DAC790
{
    __DEBUG_ASM(6DAC790);
    // chunk 0x6DAC790 _sub_6DAC790
    asm("loc_6DAC790: mov _data_6DB64F8,%eax;");
    asm("loc_6DAC795: mov %eax,_data_6DBC310;");
    asm("loc_6DAC79A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC7A0() // _sub_6DAC7A0
{
    __DEBUG_ASM(6DAC7A0);
    // chunk 0x6DAC7A0 _sub_6DAC7A0
    asm("loc_6DAC7A0: mov _data_6DB64F8,%eax;");
    asm("loc_6DAC7A5: mov %eax,_data_6DBC314;");
    asm("loc_6DAC7AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC7B0() // _sub_6DAC7B0
{
    __DEBUG_ASM(6DAC7B0);
    // chunk 0x6DAC7B0 _sub_6DAC7B0
    asm("loc_6DAC7B0: mov _data_6DB64FC,%eax;");
    asm("loc_6DAC7B5: mov %eax,_data_6DBC30C;");
    asm("loc_6DAC7BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAC7C0() // _sub_6DAC7C0
{
    __DEBUG_ASM(6DAC7C0);
    // chunk 0x6DAC7C0 _sub_6DAC7C0
    asm("loc_6DAC7C0: mov 4(%esp),%eax;");
    asm("loc_6DAC7C4: push %ebx;");
    asm("loc_6DAC7C5: push %ebp;");
    asm("loc_6DAC7C6: push %esi;");
    asm("loc_6DAC7C7: mov %ecx,%ebp;");
    asm("loc_6DAC7C9: push %edi;");
    asm("loc_6DAC7CA: mov 0x18(%esp),%edi;");
    asm("loc_6DAC7CE: lea 0x10(%ebp),%ebx;");
    asm("loc_6DAC7D1: mov %edi,4(%ebx);");
    asm("loc_6DAC7D4: mov (%eax),%ecx;");
    asm("loc_6DAC7D6: mov %ecx,8(%ebx);");
    asm("loc_6DAC7D9: movl $0,(%ebx);");
    asm("loc_6DAC7DF: movl $0,0xC(%ebx);");
    asm("loc_6DAC7E6: mov 0x14(%ebp),%edx;");
    asm("loc_6DAC7E9: push %ebx;");
    asm("loc_6DAC7EA: push %edx;");
    asm("loc_6DAC7EB: lea 0x18(%ebp),%esi;");
    asm("loc_6DAC7EE: push %esi;");
    asm("loc_6DAC7EF: mov %ebp,%ecx;");
    asm("loc_6DAC7F1: call _sub_6DA1380;");
    asm("loc_6DAC7F6: test %eax,%eax;");
    asm("loc_6DAC7F8: mov %eax,0x1C(%ebp);");
    asm("loc_6DAC7FB: je loc_6DAC809;");
    asm("loc_6DAC7FD: pop %edi;");
    asm("loc_6DAC7FE: pop %esi;");
    asm("loc_6DAC7FF: pop %ebp;");
    asm("loc_6DAC800: mov $0x16,%eax;");
    asm("loc_6DAC805: pop %ebx;");
    asm("loc_6DAC806: ret $0xC;");
    asm("loc_6DAC809: mov 0x1C(%esp),%eax;");
    asm("loc_6DAC80D: mov 0x14(%esp),%ecx;");
    asm("loc_6DAC811: push %eax;");
    asm("loc_6DAC812: push %edi;");
    asm("loc_6DAC813: push %ecx;");
    asm("loc_6DAC814: mov %ebp,%ecx;");
    asm("loc_6DAC816: call _sub_6DA3720;");
    asm("loc_6DAC81B: mov (%ebx),%edx;");
    asm("loc_6DAC81D: mov 4(%ebx),%ecx;");
    asm("loc_6DAC820: inc %edx;");
    asm("loc_6DAC821: mov %edx,%eax;");
    asm("loc_6DAC823: cmp %ecx,%eax;");
    asm("loc_6DAC825: mov %edx,(%ebx);");
    asm("loc_6DAC827: jbe loc_6DAC830;");
    asm("loc_6DAC829: movl $0x16,0xC(%ebx);");
    asm("loc_6DAC830: mov 0x1C(%ebp),%eax;");
    asm("loc_6DAC833: test %eax,%eax;");
    asm("loc_6DAC835: je loc_6DAC843;");
    asm("loc_6DAC837: pop %edi;");
    asm("loc_6DAC838: pop %esi;");
    asm("loc_6DAC839: pop %ebp;");
    asm("loc_6DAC83A: mov $0x16,%eax;");
    asm("loc_6DAC83F: pop %ebx;");
    asm("loc_6DAC840: ret $0xC;");
    asm("loc_6DAC843: mov (%esi),%eax;");
    asm("loc_6DAC845: mov 0x9C(%ebp),%dl;");
    asm("loc_6DAC84B: mov %dl,(%eax);");
    asm("loc_6DAC84D: inc %eax;");
    asm("loc_6DAC84E: mov %eax,(%esi);");
    asm("loc_6DAC850: mov (%ebx),%edx;");
    asm("loc_6DAC852: mov 4(%ebx),%ecx;");
    asm("loc_6DAC855: inc %edx;");
    asm("loc_6DAC856: mov %edx,%eax;");
    asm("loc_6DAC858: cmp %ecx,%eax;");
    asm("loc_6DAC85A: mov %edx,(%ebx);");
    asm("loc_6DAC85C: jbe loc_6DAC865;");
    asm("loc_6DAC85E: movl $0x16,0xC(%ebx);");
    asm("loc_6DAC865: mov 0x1C(%ebp),%eax;");
    asm("loc_6DAC868: test %eax,%eax;");
    asm("loc_6DAC86A: je loc_6DAC878;");
    asm("loc_6DAC86C: pop %edi;");
    asm("loc_6DAC86D: pop %esi;");
    asm("loc_6DAC86E: pop %ebp;");
    asm("loc_6DAC86F: mov $0x16,%eax;");
    asm("loc_6DAC874: pop %ebx;");
    asm("loc_6DAC875: ret $0xC;");
    asm("loc_6DAC878: mov (%esi),%eax;");
    asm("loc_6DAC87A: mov 0x9D(%ebp),%cl;");
    asm("loc_6DAC880: mov %cl,(%eax);");
    asm("loc_6DAC882: inc %eax;");
    asm("loc_6DAC883: mov %eax,(%esi);");
    asm("loc_6DAC885: calll *_import_6DB305C;");
    asm("loc_6DAC88B: test %al,%al;");
    asm("loc_6DAC88D: jne loc_6DACA16;");
    asm("loc_6DAC893: mov (%ebx),%edx;");
    asm("loc_6DAC895: mov 4(%ebx),%ecx;");
    asm("loc_6DAC898: add $4,%edx;");
    asm("loc_6DAC89B: mov %edx,%eax;");
    asm("loc_6DAC89D: cmp %ecx,%eax;");
    asm("loc_6DAC89F: mov %edx,(%ebx);");
    asm("loc_6DAC8A1: jbe loc_6DAC8AA;");
    asm("loc_6DAC8A3: movl $0x16,0xC(%ebx);");
    asm("loc_6DAC8AA: mov 0x1C(%ebp),%eax;");
    asm("loc_6DAC8AD: test %eax,%eax;");
    asm("loc_6DAC8AF: je loc_6DAC8BD;");
    asm("loc_6DAC8B1: pop %edi;");
    asm("loc_6DAC8B2: pop %esi;");
    asm("loc_6DAC8B3: pop %ebp;");
    asm("loc_6DAC8B4: mov $0x16,%eax;");
    asm("loc_6DAC8B9: pop %ebx;");
    asm("loc_6DAC8BA: ret $0xC;");
    asm("loc_6DAC8BD: mov (%esi),%eax;");
    asm("loc_6DAC8BF: mov 0xB0(%ebp),%edx;");
    asm("loc_6DAC8C5: mov %edx,(%eax);");
    asm("loc_6DAC8C7: flds 0xB4(%ebp);");
    asm("loc_6DAC8CD: fmull _data_6DB3FD8;");
    asm("loc_6DAC8D3: add $4,%eax;");
    asm("loc_6DAC8D6: mov %eax,(%esi);");
    asm("loc_6DAC8D8: call _sub_6DB20DE;");
    asm("loc_6DAC8DD: mov (%ebx),%ecx;");
    asm("loc_6DAC8DF: mov %al,%dl;");
    asm("loc_6DAC8E1: mov 4(%ebx),%eax;");
    asm("loc_6DAC8E4: inc %ecx;");
    asm("loc_6DAC8E5: cmp %eax,%ecx;");
    asm("loc_6DAC8E7: mov %ecx,(%ebx);");
    asm("loc_6DAC8E9: mov $0x16,%eax;");
    asm("loc_6DAC8EE: jbe loc_6DAC8F3;");
    asm("loc_6DAC8F0: mov %eax,0xC(%ebx);");
    asm("loc_6DAC8F3: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DAC8F6: test %ecx,%ecx;");
    asm("loc_6DAC8F8: jne loc_6DACA76;");
    asm("loc_6DAC8FE: mov (%esi),%ecx;");
    asm("loc_6DAC900: mov %dl,(%ecx);");
    asm("loc_6DAC902: inc %ecx;");
    asm("loc_6DAC903: mov %ecx,(%esi);");
    asm("loc_6DAC905: mov (%ebx),%edi;");
    asm("loc_6DAC907: mov 4(%ebx),%edx;");
    asm("loc_6DAC90A: add $4,%edi;");
    asm("loc_6DAC90D: mov %edi,%ecx;");
    asm("loc_6DAC90F: cmp %edx,%ecx;");
    asm("loc_6DAC911: mov %edi,(%ebx);");
    asm("loc_6DAC913: jbe loc_6DAC918;");
    asm("loc_6DAC915: mov %eax,0xC(%ebx);");
    asm("loc_6DAC918: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DAC91B: test %ecx,%ecx;");
    asm("loc_6DAC91D: jne loc_6DACA76;");
    asm("loc_6DAC923: mov (%esi),%ecx;");
    asm("loc_6DAC925: mov 0xA0(%ebp),%edx;");
    asm("loc_6DAC92B: mov %edx,(%ecx);");
    asm("loc_6DAC92D: add $4,%ecx;");
    asm("loc_6DAC930: mov %ecx,(%esi);");
    asm("loc_6DAC932: mov 0xA0(%ebp),%ecx;");
    asm("loc_6DAC938: mov (%ebx),%edi;");
    asm("loc_6DAC93A: mov 4(%ebx),%edx;");
    asm("loc_6DAC93D: add %ecx,%edi;");
    asm("loc_6DAC93F: mov %edi,%ecx;");
    asm("loc_6DAC941: cmp %edx,%ecx;");
    asm("loc_6DAC943: mov %edi,(%ebx);");
    asm("loc_6DAC945: jbe loc_6DAC94A;");
    asm("loc_6DAC947: mov %eax,0xC(%ebx);");
    asm("loc_6DAC94A: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DAC94D: test %ecx,%ecx;");
    asm("loc_6DAC94F: jne loc_6DACA76;");
    asm("loc_6DAC955: mov 0xA0(%ebp),%eax;");
    asm("loc_6DAC95B: mov (%esi),%edi;");
    asm("loc_6DAC95D: mov 0xA4(%ebp),%esi;");
    asm("loc_6DAC963: mov %eax,%ecx;");
    asm("loc_6DAC965: mov %ecx,%edx;");
    asm("loc_6DAC967: shr $2,%ecx;");
    asm("loc_6DAC96A: mov %edi,0x14(%esp);");
    asm("loc_6DAC96E: rep movsl (%esi),(%edi);");
    asm("loc_6DAC970: mov %edx,%ecx;");
    asm("loc_6DAC972: and $3,%ecx;");
    asm("loc_6DAC975: rep movsb (%esi),(%edi);");
    asm("loc_6DAC977: mov 0x14(%esp),%ecx;");
    asm("loc_6DAC97B: add %eax,%ecx;");
    asm("loc_6DAC97D: mov %ecx,0x18(%ebp);");
    asm("loc_6DAC980: mov (%ebx),%edx;");
    asm("loc_6DAC982: mov 4(%ebx),%ecx;");
    asm("loc_6DAC985: add $4,%edx;");
    asm("loc_6DAC988: mov %edx,%eax;");
    asm("loc_6DAC98A: cmp %ecx,%eax;");
    asm("loc_6DAC98C: mov %edx,(%ebx);");
    asm("loc_6DAC98E: jbe loc_6DAC997;");
    asm("loc_6DAC990: movl $0x16,0xC(%ebx);");
    asm("loc_6DAC997: mov 0x1C(%ebp),%eax;");
    asm("loc_6DAC99A: test %eax,%eax;");
    asm("loc_6DAC99C: je loc_6DAC9AA;");
    asm("loc_6DAC99E: pop %edi;");
    asm("loc_6DAC99F: pop %esi;");
    asm("loc_6DAC9A0: pop %ebp;");
    asm("loc_6DAC9A1: mov $0x16,%eax;");
    asm("loc_6DAC9A6: pop %ebx;");
    asm("loc_6DAC9A7: ret $0xC;");
    asm("loc_6DAC9AA: mov 0x18(%ebp),%eax;");
    asm("loc_6DAC9AD: mov 0xA8(%ebp),%edx;");
    asm("loc_6DAC9B3: mov %edx,(%eax);");
    asm("loc_6DAC9B5: add $4,%eax;");
    asm("loc_6DAC9B8: mov %eax,0x18(%ebp);");
    asm("loc_6DAC9BB: mov 0xA8(%ebp),%eax;");
    asm("loc_6DAC9C1: mov (%ebx),%edx;");
    asm("loc_6DAC9C3: mov 4(%ebx),%ecx;");
    asm("loc_6DAC9C6: add %eax,%edx;");
    asm("loc_6DAC9C8: mov %edx,%eax;");
    asm("loc_6DAC9CA: cmp %ecx,%eax;");
    asm("loc_6DAC9CC: mov %edx,(%ebx);");
    asm("loc_6DAC9CE: jbe loc_6DAC9D7;");
    asm("loc_6DAC9D0: movl $0x16,0xC(%ebx);");
    asm("loc_6DAC9D7: mov 0x1C(%ebp),%eax;");
    asm("loc_6DAC9DA: test %eax,%eax;");
    asm("loc_6DAC9DC: je loc_6DAC9EA;");
    asm("loc_6DAC9DE: pop %edi;");
    asm("loc_6DAC9DF: pop %esi;");
    asm("loc_6DAC9E0: pop %ebp;");
    asm("loc_6DAC9E1: mov $0x16,%eax;");
    asm("loc_6DAC9E6: pop %ebx;");
    asm("loc_6DAC9E7: ret $0xC;");
    asm("loc_6DAC9EA: mov 0xA8(%ebp),%eax;");
    asm("loc_6DAC9F0: mov 0x18(%ebp),%edi;");
    asm("loc_6DAC9F3: mov 0xAC(%ebp),%esi;");
    asm("loc_6DAC9F9: mov %eax,%ecx;");
    asm("loc_6DAC9FB: mov %ecx,%edx;");
    asm("loc_6DAC9FD: shr $2,%ecx;");
    asm("loc_6DACA00: mov %edi,0x14(%esp);");
    asm("loc_6DACA04: rep movsl (%esi),(%edi);");
    asm("loc_6DACA06: mov %edx,%ecx;");
    asm("loc_6DACA08: and $3,%ecx;");
    asm("loc_6DACA0B: rep movsb (%esi),(%edi);");
    asm("loc_6DACA0D: mov 0x14(%esp),%ecx;");
    asm("loc_6DACA11: add %eax,%ecx;");
    asm("loc_6DACA13: mov %ecx,0x18(%ebp);");
    asm("loc_6DACA16: mov 0x14(%ebp),%edx;");
    asm("loc_6DACA19: push %ebx;");
    asm("loc_6DACA1A: push %edx;");
    asm("loc_6DACA1B: lea 0x18(%ebp),%eax;");
    asm("loc_6DACA1E: push %eax;");
    asm("loc_6DACA1F: mov %ebp,%ecx;");
    asm("loc_6DACA21: call _sub_6DA13C0;");
    asm("loc_6DACA26: test %eax,%eax;");
    asm("loc_6DACA28: mov %eax,0x1C(%ebp);");
    asm("loc_6DACA2B: je loc_6DACA39;");
    asm("loc_6DACA2D: pop %edi;");
    asm("loc_6DACA2E: pop %esi;");
    asm("loc_6DACA2F: pop %ebp;");
    asm("loc_6DACA30: mov $0x16,%eax;");
    asm("loc_6DACA35: pop %ebx;");
    asm("loc_6DACA36: ret $0xC;");
    asm("loc_6DACA39: mov (%ebx),%eax;");
    asm("loc_6DACA3B: mov 0x1C(%esp),%ecx;");
    asm("loc_6DACA3F: mov %eax,(%ecx);");
    asm("loc_6DACA41: mov 0xC(%ebp),%edx;");
    asm("loc_6DACA44: push %edx;");
    asm("loc_6DACA45: call _sub_6DA16B0;");
    asm("loc_6DACA4A: mov %eax,%ecx;");
    asm("loc_6DACA4C: mov (%ecx),%esi;");
    asm("loc_6DACA4E: mov 0x18(%ecx),%edx;");
    asm("loc_6DACA51: add $4,%esp;");
    asm("loc_6DACA54: inc %esi;");
    asm("loc_6DACA55: mov %esi,(%ecx);");
    asm("loc_6DACA57: mov (%ebx),%eax;");
    asm("loc_6DACA59: add %eax,%edx;");
    asm("loc_6DACA5B: mov 0x10(%ecx),%eax;");
    asm("loc_6DACA5E: mov %edx,0x18(%ecx);");
    asm("loc_6DACA61: mov (%ebx),%ebx;");
    asm("loc_6DACA63: cmp %eax,%ebx;");
    asm("loc_6DACA65: jbe loc_6DACA6A;");
    asm("loc_6DACA67: mov %ebx,0x10(%ecx);");
    asm("loc_6DACA6A: mov 0x18(%ecx),%eax;");
    asm("loc_6DACA6D: xor %edx,%edx;");
    asm("loc_6DACA6F: div %esi;");
    asm("loc_6DACA71: mov %eax,8(%ecx);");
    asm("loc_6DACA74: xor %eax,%eax;");
    asm("loc_6DACA76: pop %edi;");
    asm("loc_6DACA77: pop %esi;");
    asm("loc_6DACA78: pop %ebp;");
    asm("loc_6DACA79: pop %ebx;");
    asm("loc_6DACA7A: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACA80() // _sub_6DACA80
{
    __DEBUG_ASM(6DACA80);
    // chunk 0x6DACA80 _sub_6DACA80
    asm("loc_6DACA80: mov 4(%esp),%eax;");
    asm("loc_6DACA84: push %ebx;");
    asm("loc_6DACA85: push %ebp;");
    asm("loc_6DACA86: mov 0x10(%esp),%ebp;");
    asm("loc_6DACA8A: push %esi;");
    asm("loc_6DACA8B: push %edi;");
    asm("loc_6DACA8C: mov %ecx,%edi;");
    asm("loc_6DACA8E: lea 0x10(%edi),%esi;");
    asm("loc_6DACA91: push %esi;");
    asm("loc_6DACA92: push %ebp;");
    asm("loc_6DACA93: lea 0x18(%edi),%ebx;");
    asm("loc_6DACA96: push %ebx;");
    asm("loc_6DACA97: mov %ebp,4(%esi);");
    asm("loc_6DACA9A: mov %eax,8(%esi);");
    asm("loc_6DACA9D: movl $0,(%esi);");
    asm("loc_6DACAA3: movl $0,0xC(%esi);");
    asm("loc_6DACAAA: call _sub_6DA13C0;");
    asm("loc_6DACAAF: test %eax,%eax;");
    asm("loc_6DACAB1: mov %eax,0x1C(%edi);");
    asm("loc_6DACAB4: je loc_6DACAC2;");
    asm("loc_6DACAB6: pop %edi;");
    asm("loc_6DACAB7: pop %esi;");
    asm("loc_6DACAB8: pop %ebp;");
    asm("loc_6DACAB9: mov $0x17,%eax;");
    asm("loc_6DACABE: pop %ebx;");
    asm("loc_6DACABF: ret $0xC;");
    asm("loc_6DACAC2: mov 0x1C(%esp),%ecx;");
    asm("loc_6DACAC6: mov 0x14(%esp),%edx;");
    asm("loc_6DACACA: push %ecx;");
    asm("loc_6DACACB: push %ebp;");
    asm("loc_6DACACC: push %edx;");
    asm("loc_6DACACD: mov %edi,%ecx;");
    asm("loc_6DACACF: call _sub_6DA4020;");
    asm("loc_6DACAD4: mov (%esi),%edx;");
    asm("loc_6DACAD6: mov 4(%esi),%ecx;");
    asm("loc_6DACAD9: inc %edx;");
    asm("loc_6DACADA: mov %edx,%eax;");
    asm("loc_6DACADC: cmp %ecx,%eax;");
    asm("loc_6DACADE: mov %edx,(%esi);");
    asm("loc_6DACAE0: mov $0x17,%ebp;");
    asm("loc_6DACAE5: jbe loc_6DACAEA;");
    asm("loc_6DACAE7: mov %ebp,0xC(%esi);");
    asm("loc_6DACAEA: mov 0x1C(%edi),%eax;");
    asm("loc_6DACAED: test %eax,%eax;");
    asm("loc_6DACAEF: jne loc_6DACC2D;");
    asm("loc_6DACAF5: mov (%ebx),%eax;");
    asm("loc_6DACAF7: mov (%eax),%cl;");
    asm("loc_6DACAF9: inc %eax;");
    asm("loc_6DACAFA: mov %eax,(%ebx);");
    asm("loc_6DACAFC: mov %cl,0x9C(%edi);");
    asm("loc_6DACB02: mov (%esi),%edx;");
    asm("loc_6DACB04: mov 4(%esi),%ecx;");
    asm("loc_6DACB07: inc %edx;");
    asm("loc_6DACB08: mov %edx,%eax;");
    asm("loc_6DACB0A: cmp %ecx,%eax;");
    asm("loc_6DACB0C: mov %edx,(%esi);");
    asm("loc_6DACB0E: jbe loc_6DACB13;");
    asm("loc_6DACB10: mov %ebp,0xC(%esi);");
    asm("loc_6DACB13: mov 0x1C(%edi),%eax;");
    asm("loc_6DACB16: test %eax,%eax;");
    asm("loc_6DACB18: jne loc_6DACC2D;");
    asm("loc_6DACB1E: mov (%ebx),%eax;");
    asm("loc_6DACB20: mov (%eax),%dl;");
    asm("loc_6DACB22: inc %eax;");
    asm("loc_6DACB23: mov %dl,0x9D(%edi);");
    asm("loc_6DACB29: mov %eax,(%ebx);");
    asm("loc_6DACB2B: calll *_import_6DB305C;");
    asm("loc_6DACB31: test %al,%al;");
    asm("loc_6DACB33: jne loc_6DACBC4;");
    asm("loc_6DACB39: mov (%esi),%edx;");
    asm("loc_6DACB3B: mov 4(%esi),%ecx;");
    asm("loc_6DACB3E: add $4,%edx;");
    asm("loc_6DACB41: mov %edx,%eax;");
    asm("loc_6DACB43: cmp %ecx,%eax;");
    asm("loc_6DACB45: mov %edx,(%esi);");
    asm("loc_6DACB47: jbe loc_6DACB50;");
    asm("loc_6DACB49: movl $0x17,0xC(%esi);");
    asm("loc_6DACB50: mov 0x1C(%edi),%eax;");
    asm("loc_6DACB53: test %eax,%eax;");
    asm("loc_6DACB55: jne loc_6DACC2D;");
    asm("loc_6DACB5B: mov (%ebx),%eax;");
    asm("loc_6DACB5D: mov (%eax),%ecx;");
    asm("loc_6DACB5F: add $4,%eax;");
    asm("loc_6DACB62: mov %eax,(%ebx);");
    asm("loc_6DACB64: mov %ecx,0xB0(%edi);");
    asm("loc_6DACB6A: mov (%esi),%edx;");
    asm("loc_6DACB6C: mov 4(%esi),%ecx;");
    asm("loc_6DACB6F: inc %edx;");
    asm("loc_6DACB70: mov %edx,%eax;");
    asm("loc_6DACB72: cmp %ecx,%eax;");
    asm("loc_6DACB74: mov %edx,(%esi);");
    asm("loc_6DACB76: jbe loc_6DACB7F;");
    asm("loc_6DACB78: movl $0x17,0xC(%esi);");
    asm("loc_6DACB7F: mov 0x1C(%edi),%eax;");
    asm("loc_6DACB82: test %eax,%eax;");
    asm("loc_6DACB84: jne loc_6DACC2D;");
    asm("loc_6DACB8A: mov (%ebx),%eax;");
    asm("loc_6DACB8C: mov (%eax),%cl;");
    asm("loc_6DACB8E: movsbl %cl,%edx;");
    asm("loc_6DACB91: mov %edx,0x14(%esp);");
    asm("loc_6DACB95: inc %eax;");
    asm("loc_6DACB96: mov %eax,(%ebx);");
    asm("loc_6DACB98: fildl 0x14(%esp);");
    asm("loc_6DACB9C: lea 0xA0(%edi),%eax;");
    asm("loc_6DACBA2: push %eax;");
    asm("loc_6DACBA3: fmull _data_6DB3FE0;");
    asm("loc_6DACBA9: mov %edi,%ecx;");
    asm("loc_6DACBAB: fstps 0xB4(%edi);");
    asm("loc_6DACBB1: call _sub_6DA1620;");
    asm("loc_6DACBB6: lea 0xA8(%edi),%ecx;");
    asm("loc_6DACBBC: push %ecx;");
    asm("loc_6DACBBD: mov %edi,%ecx;");
    asm("loc_6DACBBF: call _sub_6DA1620;");
    asm("loc_6DACBC4: mov 0x18(%esp),%edx;");
    asm("loc_6DACBC8: push %esi;");
    asm("loc_6DACBC9: push %edx;");
    asm("loc_6DACBCA: push %ebx;");
    asm("loc_6DACBCB: mov %edi,%ecx;");
    asm("loc_6DACBCD: call _sub_6DA13C0;");
    asm("loc_6DACBD2: test %eax,%eax;");
    asm("loc_6DACBD4: mov %eax,0x1C(%edi);");
    asm("loc_6DACBD7: je loc_6DACBE5;");
    asm("loc_6DACBD9: pop %edi;");
    asm("loc_6DACBDA: pop %esi;");
    asm("loc_6DACBDB: pop %ebp;");
    asm("loc_6DACBDC: mov $0x17,%eax;");
    asm("loc_6DACBE1: pop %ebx;");
    asm("loc_6DACBE2: ret $0xC;");
    asm("loc_6DACBE5: mov (%esi),%eax;");
    asm("loc_6DACBE7: mov 0x1C(%esp),%ecx;");
    asm("loc_6DACBEB: mov %eax,(%ecx);");
    asm("loc_6DACBED: mov 0xC(%edi),%edx;");
    asm("loc_6DACBF0: push %edx;");
    asm("loc_6DACBF1: call _sub_6DA16B0;");
    asm("loc_6DACBF6: mov %eax,%ecx;");
    asm("loc_6DACBF8: mov 4(%ecx),%edi;");
    asm("loc_6DACBFB: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DACBFE: mov 0x14(%ecx),%edx;");
    asm("loc_6DACC01: add $4,%esp;");
    asm("loc_6DACC04: inc %edi;");
    asm("loc_6DACC05: mov %edi,4(%ecx);");
    asm("loc_6DACC08: mov (%esi),%eax;");
    asm("loc_6DACC0A: add $2,%eax;");
    asm("loc_6DACC0D: add %eax,%ebp;");
    asm("loc_6DACC0F: mov %ebp,0x1C(%ecx);");
    asm("loc_6DACC12: mov (%esi),%esi;");
    asm("loc_6DACC14: add $2,%edx;");
    asm("loc_6DACC17: cmp %edx,%esi;");
    asm("loc_6DACC19: jbe loc_6DACC21;");
    asm("loc_6DACC1B: add $2,%esi;");
    asm("loc_6DACC1E: mov %esi,0x14(%ecx);");
    asm("loc_6DACC21: mov 0x1C(%ecx),%eax;");
    asm("loc_6DACC24: xor %edx,%edx;");
    asm("loc_6DACC26: div %edi;");
    asm("loc_6DACC28: mov %eax,0xC(%ecx);");
    asm("loc_6DACC2B: xor %eax,%eax;");
    asm("loc_6DACC2D: pop %edi;");
    asm("loc_6DACC2E: pop %esi;");
    asm("loc_6DACC2F: pop %ebp;");
    asm("loc_6DACC30: pop %ebx;");
    asm("loc_6DACC31: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACC40() // _sub_6DACC40
{
    __DEBUG_ASM(6DACC40);
    // chunk 0x6DACC40 _sub_6DACC40
    asm("loc_6DACC40: mov _data_6DB6508,%eax;");
    asm("loc_6DACC45: mov %eax,_data_6DBC320;");
    asm("loc_6DACC4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACC50() // _sub_6DACC50
{
    __DEBUG_ASM(6DACC50);
    // chunk 0x6DACC50 _sub_6DACC50
    asm("loc_6DACC50: mov _data_6DB6508,%eax;");
    asm("loc_6DACC55: mov %eax,_data_6DBC324;");
    asm("loc_6DACC5A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACC60() // _sub_6DACC60
{
    __DEBUG_ASM(6DACC60);
    // chunk 0x6DACC60 _sub_6DACC60
    asm("loc_6DACC60: mov _data_6DB650C,%eax;");
    asm("loc_6DACC65: mov %eax,_data_6DBC31C;");
    asm("loc_6DACC6A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACC70() // _sub_6DACC70
{
    __DEBUG_ASM(6DACC70);
    // chunk 0x6DACC70 _sub_6DACC70
    asm("loc_6DACC70: mov _data_6DB6518,%eax;");
    asm("loc_6DACC75: mov %eax,_data_6DBC330;");
    asm("loc_6DACC7A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACC80() // _sub_6DACC80
{
    __DEBUG_ASM(6DACC80);
    // chunk 0x6DACC80 _sub_6DACC80
    asm("loc_6DACC80: mov _data_6DB6518,%eax;");
    asm("loc_6DACC85: mov %eax,_data_6DBC334;");
    asm("loc_6DACC8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACC90() // _sub_6DACC90
{
    __DEBUG_ASM(6DACC90);
    // chunk 0x6DACC90 _sub_6DACC90
    asm("loc_6DACC90: mov _data_6DB651C,%eax;");
    asm("loc_6DACC95: mov %eax,_data_6DBC32C;");
    asm("loc_6DACC9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACCA0() // _sub_6DACCA0
{
    __DEBUG_ASM(6DACCA0);
    // chunk 0x6DACCA0 _sub_6DACCA0
    asm("loc_6DACCA0: mov 4(%esp),%eax;");
    asm("loc_6DACCA4: push %ebx;");
    asm("loc_6DACCA5: push %ebp;");
    asm("loc_6DACCA6: mov 0x10(%esp),%ebp;");
    asm("loc_6DACCAA: push %esi;");
    asm("loc_6DACCAB: mov %ecx,%esi;");
    asm("loc_6DACCAD: push %edi;");
    asm("loc_6DACCAE: lea 0x10(%esi),%edi;");
    asm("loc_6DACCB1: mov %ebp,4(%edi);");
    asm("loc_6DACCB4: mov (%eax),%ecx;");
    asm("loc_6DACCB6: mov %ecx,8(%edi);");
    asm("loc_6DACCB9: movl $0,(%edi);");
    asm("loc_6DACCBF: movl $0,0xC(%edi);");
    asm("loc_6DACCC6: mov 0x14(%esi),%edx;");
    asm("loc_6DACCC9: push %edi;");
    asm("loc_6DACCCA: push %edx;");
    asm("loc_6DACCCB: lea 0x18(%esi),%ebx;");
    asm("loc_6DACCCE: push %ebx;");
    asm("loc_6DACCCF: mov %esi,%ecx;");
    asm("loc_6DACCD1: call _sub_6DA1380;");
    asm("loc_6DACCD6: test %eax,%eax;");
    asm("loc_6DACCD8: mov %eax,0x1C(%esi);");
    asm("loc_6DACCDB: je loc_6DACCE9;");
    asm("loc_6DACCDD: pop %edi;");
    asm("loc_6DACCDE: pop %esi;");
    asm("loc_6DACCDF: pop %ebp;");
    asm("loc_6DACCE0: mov $0x16,%eax;");
    asm("loc_6DACCE5: pop %ebx;");
    asm("loc_6DACCE6: ret $0xC;");
    asm("loc_6DACCE9: mov 0x1C(%esp),%eax;");
    asm("loc_6DACCED: mov 0x14(%esp),%ecx;");
    asm("loc_6DACCF1: push %eax;");
    asm("loc_6DACCF2: push %ebp;");
    asm("loc_6DACCF3: push %ecx;");
    asm("loc_6DACCF4: mov %esi,%ecx;");
    asm("loc_6DACCF6: call _sub_6D8F530;");
    asm("loc_6DACCFB: test %eax,%eax;");
    asm("loc_6DACCFD: jne loc_6DACD5C;");
    asm("loc_6DACCFF: mov 0x14(%esi),%edx;");
    asm("loc_6DACD02: push %edi;");
    asm("loc_6DACD03: push %edx;");
    asm("loc_6DACD04: push %ebx;");
    asm("loc_6DACD05: mov %esi,%ecx;");
    asm("loc_6DACD07: call _sub_6DA13C0;");
    asm("loc_6DACD0C: test %eax,%eax;");
    asm("loc_6DACD0E: mov %eax,0x1C(%esi);");
    asm("loc_6DACD11: je loc_6DACD1F;");
    asm("loc_6DACD13: pop %edi;");
    asm("loc_6DACD14: pop %esi;");
    asm("loc_6DACD15: pop %ebp;");
    asm("loc_6DACD16: mov $0x16,%eax;");
    asm("loc_6DACD1B: pop %ebx;");
    asm("loc_6DACD1C: ret $0xC;");
    asm("loc_6DACD1F: mov (%edi),%eax;");
    asm("loc_6DACD21: mov 0x1C(%esp),%ecx;");
    asm("loc_6DACD25: mov %eax,(%ecx);");
    asm("loc_6DACD27: mov 0xC(%esi),%edx;");
    asm("loc_6DACD2A: push %edx;");
    asm("loc_6DACD2B: call _sub_6DA16B0;");
    asm("loc_6DACD30: mov %eax,%ecx;");
    asm("loc_6DACD32: mov (%ecx),%esi;");
    asm("loc_6DACD34: mov 0x18(%ecx),%edx;");
    asm("loc_6DACD37: add $4,%esp;");
    asm("loc_6DACD3A: inc %esi;");
    asm("loc_6DACD3B: mov %esi,(%ecx);");
    asm("loc_6DACD3D: mov (%edi),%eax;");
    asm("loc_6DACD3F: add %eax,%edx;");
    asm("loc_6DACD41: mov 0x10(%ecx),%eax;");
    asm("loc_6DACD44: mov %edx,0x18(%ecx);");
    asm("loc_6DACD47: mov (%edi),%edi;");
    asm("loc_6DACD49: cmp %eax,%edi;");
    asm("loc_6DACD4B: jbe loc_6DACD50;");
    asm("loc_6DACD4D: mov %edi,0x10(%ecx);");
    asm("loc_6DACD50: mov 0x18(%ecx),%eax;");
    asm("loc_6DACD53: xor %edx,%edx;");
    asm("loc_6DACD55: div %esi;");
    asm("loc_6DACD57: mov %eax,8(%ecx);");
    asm("loc_6DACD5A: xor %eax,%eax;");
    asm("loc_6DACD5C: pop %edi;");
    asm("loc_6DACD5D: pop %esi;");
    asm("loc_6DACD5E: pop %ebp;");
    asm("loc_6DACD5F: pop %ebx;");
    asm("loc_6DACD60: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACD70() // _sub_6DACD70
{
    __DEBUG_ASM(6DACD70);
    // chunk 0x6DACD70 _sub_6DACD70
    asm("loc_6DACD70: mov 4(%esp),%eax;");
    asm("loc_6DACD74: push %ebx;");
    asm("loc_6DACD75: mov 0xC(%esp),%ebx;");
    asm("loc_6DACD79: push %ebp;");
    asm("loc_6DACD7A: push %esi;");
    asm("loc_6DACD7B: push %edi;");
    asm("loc_6DACD7C: mov %ecx,%edi;");
    asm("loc_6DACD7E: lea 0x10(%edi),%esi;");
    asm("loc_6DACD81: push %esi;");
    asm("loc_6DACD82: push %ebx;");
    asm("loc_6DACD83: lea 0x18(%edi),%ebp;");
    asm("loc_6DACD86: push %ebp;");
    asm("loc_6DACD87: mov %ebx,4(%esi);");
    asm("loc_6DACD8A: mov %eax,8(%esi);");
    asm("loc_6DACD8D: movl $0,(%esi);");
    asm("loc_6DACD93: movl $0,0xC(%esi);");
    asm("loc_6DACD9A: call _sub_6DA13C0;");
    asm("loc_6DACD9F: test %eax,%eax;");
    asm("loc_6DACDA1: mov %eax,0x1C(%edi);");
    asm("loc_6DACDA4: je loc_6DACDB2;");
    asm("loc_6DACDA6: pop %edi;");
    asm("loc_6DACDA7: pop %esi;");
    asm("loc_6DACDA8: pop %ebp;");
    asm("loc_6DACDA9: mov $0x17,%eax;");
    asm("loc_6DACDAE: pop %ebx;");
    asm("loc_6DACDAF: ret $0xC;");
    asm("loc_6DACDB2: mov 0x1C(%esp),%ecx;");
    asm("loc_6DACDB6: mov 0x14(%esp),%edx;");
    asm("loc_6DACDBA: push %ecx;");
    asm("loc_6DACDBB: push %ebx;");
    asm("loc_6DACDBC: push %edx;");
    asm("loc_6DACDBD: mov %edi,%ecx;");
    asm("loc_6DACDBF: call _sub_6D8F5E0;");
    asm("loc_6DACDC4: test %eax,%eax;");
    asm("loc_6DACDC6: jne loc_6DACE2D;");
    asm("loc_6DACDC8: push %esi;");
    asm("loc_6DACDC9: push %ebx;");
    asm("loc_6DACDCA: push %ebp;");
    asm("loc_6DACDCB: mov %edi,%ecx;");
    asm("loc_6DACDCD: call _sub_6DA13C0;");
    asm("loc_6DACDD2: test %eax,%eax;");
    asm("loc_6DACDD4: mov %eax,0x1C(%edi);");
    asm("loc_6DACDD7: je loc_6DACDE5;");
    asm("loc_6DACDD9: pop %edi;");
    asm("loc_6DACDDA: pop %esi;");
    asm("loc_6DACDDB: pop %ebp;");
    asm("loc_6DACDDC: mov $0x17,%eax;");
    asm("loc_6DACDE1: pop %ebx;");
    asm("loc_6DACDE2: ret $0xC;");
    asm("loc_6DACDE5: mov (%esi),%eax;");
    asm("loc_6DACDE7: mov 0x1C(%esp),%ecx;");
    asm("loc_6DACDEB: mov %eax,(%ecx);");
    asm("loc_6DACDED: mov 0xC(%edi),%edx;");
    asm("loc_6DACDF0: push %edx;");
    asm("loc_6DACDF1: call _sub_6DA16B0;");
    asm("loc_6DACDF6: mov %eax,%ecx;");
    asm("loc_6DACDF8: mov 4(%ecx),%edi;");
    asm("loc_6DACDFB: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DACDFE: mov 0x14(%ecx),%edx;");
    asm("loc_6DACE01: add $4,%esp;");
    asm("loc_6DACE04: inc %edi;");
    asm("loc_6DACE05: mov %edi,4(%ecx);");
    asm("loc_6DACE08: mov (%esi),%eax;");
    asm("loc_6DACE0A: add $2,%eax;");
    asm("loc_6DACE0D: add %eax,%ebp;");
    asm("loc_6DACE0F: mov %ebp,0x1C(%ecx);");
    asm("loc_6DACE12: mov (%esi),%esi;");
    asm("loc_6DACE14: add $2,%edx;");
    asm("loc_6DACE17: cmp %edx,%esi;");
    asm("loc_6DACE19: jbe loc_6DACE21;");
    asm("loc_6DACE1B: add $2,%esi;");
    asm("loc_6DACE1E: mov %esi,0x14(%ecx);");
    asm("loc_6DACE21: mov 0x1C(%ecx),%eax;");
    asm("loc_6DACE24: xor %edx,%edx;");
    asm("loc_6DACE26: div %edi;");
    asm("loc_6DACE28: mov %eax,0xC(%ecx);");
    asm("loc_6DACE2B: xor %eax,%eax;");
    asm("loc_6DACE2D: pop %edi;");
    asm("loc_6DACE2E: pop %esi;");
    asm("loc_6DACE2F: pop %ebp;");
    asm("loc_6DACE30: pop %ebx;");
    asm("loc_6DACE31: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACE40() // _sub_6DACE40
{
    __DEBUG_ASM(6DACE40);
    // chunk 0x6DACE40 _sub_6DACE40
    asm("loc_6DACE40: mov _data_6DB6528,%eax;");
    asm("loc_6DACE45: mov %eax,_data_6DBC340;");
    asm("loc_6DACE4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACE50() // _sub_6DACE50
{
    __DEBUG_ASM(6DACE50);
    // chunk 0x6DACE50 _sub_6DACE50
    asm("loc_6DACE50: mov _data_6DB6528,%eax;");
    asm("loc_6DACE55: mov %eax,_data_6DBC344;");
    asm("loc_6DACE5A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACE60() // _sub_6DACE60
{
    __DEBUG_ASM(6DACE60);
    // chunk 0x6DACE60 _sub_6DACE60
    asm("loc_6DACE60: mov _data_6DB652C,%eax;");
    asm("loc_6DACE65: mov %eax,_data_6DBC33C;");
    asm("loc_6DACE6A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACE70() // _sub_6DACE70
{
    __DEBUG_ASM(6DACE70);
    // chunk 0x6DACE70 _sub_6DACE70
    asm("loc_6DACE70: mov _data_6DB6538,%eax;");
    asm("loc_6DACE75: mov %eax,_data_6DBC350;");
    asm("loc_6DACE7A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACE80() // _sub_6DACE80
{
    __DEBUG_ASM(6DACE80);
    // chunk 0x6DACE80 _sub_6DACE80
    asm("loc_6DACE80: mov _data_6DB6538,%eax;");
    asm("loc_6DACE85: mov %eax,_data_6DBC354;");
    asm("loc_6DACE8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACE90() // _sub_6DACE90
{
    __DEBUG_ASM(6DACE90);
    // chunk 0x6DACE90 _sub_6DACE90
    asm("loc_6DACE90: mov _data_6DB653C,%eax;");
    asm("loc_6DACE95: mov %eax,_data_6DBC34C;");
    asm("loc_6DACE9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACEA0() // _sub_6DACEA0
{
    __DEBUG_ASM(6DACEA0);
    // chunk 0x6DACEA0 _sub_6DACEA0
    asm("loc_6DACEA0: mov 4(%esp),%eax;");
    asm("loc_6DACEA4: push %ebx;");
    asm("loc_6DACEA5: push %ebp;");
    asm("loc_6DACEA6: mov 0x10(%esp),%ebp;");
    asm("loc_6DACEAA: push %esi;");
    asm("loc_6DACEAB: push %edi;");
    asm("loc_6DACEAC: mov %ecx,%edi;");
    asm("loc_6DACEAE: lea 0x10(%edi),%esi;");
    asm("loc_6DACEB1: push %esi;");
    asm("loc_6DACEB2: push %ebp;");
    asm("loc_6DACEB3: lea 0x18(%edi),%ebx;");
    asm("loc_6DACEB6: push %ebx;");
    asm("loc_6DACEB7: mov %ebp,4(%esi);");
    asm("loc_6DACEBA: mov %eax,8(%esi);");
    asm("loc_6DACEBD: movl $0,(%esi);");
    asm("loc_6DACEC3: movl $0,0xC(%esi);");
    asm("loc_6DACECA: call _sub_6DA13C0;");
    asm("loc_6DACECF: test %eax,%eax;");
    asm("loc_6DACED1: mov %eax,0x1C(%edi);");
    asm("loc_6DACED4: je loc_6DACEE2;");
    asm("loc_6DACED6: pop %edi;");
    asm("loc_6DACED7: pop %esi;");
    asm("loc_6DACED8: pop %ebp;");
    asm("loc_6DACED9: mov $0x17,%eax;");
    asm("loc_6DACEDE: pop %ebx;");
    asm("loc_6DACEDF: ret $0xC;");
    asm("loc_6DACEE2: mov (%esi),%edx;");
    asm("loc_6DACEE4: mov 4(%esi),%ecx;");
    asm("loc_6DACEE7: add $4,%edx;");
    asm("loc_6DACEEA: mov %edx,%eax;");
    asm("loc_6DACEEC: cmp %ecx,%eax;");
    asm("loc_6DACEEE: mov %edx,(%esi);");
    asm("loc_6DACEF0: mov $0x17,%ecx;");
    asm("loc_6DACEF5: jbe loc_6DACEFA;");
    asm("loc_6DACEF7: mov %ecx,0xC(%esi);");
    asm("loc_6DACEFA: mov 0x1C(%edi),%eax;");
    asm("loc_6DACEFD: test %eax,%eax;");
    asm("loc_6DACEFF: jne loc_6DACFC6;");
    asm("loc_6DACF05: mov (%ebx),%eax;");
    asm("loc_6DACF07: mov (%eax),%edx;");
    asm("loc_6DACF09: add $4,%eax;");
    asm("loc_6DACF0C: mov %eax,(%ebx);");
    asm("loc_6DACF0E: mov %edx,0x20(%edi);");
    asm("loc_6DACF11: mov (%esi),%eax;");
    asm("loc_6DACF13: mov 4(%esi),%edx;");
    asm("loc_6DACF16: add $4,%eax;");
    asm("loc_6DACF19: cmp %edx,%eax;");
    asm("loc_6DACF1B: mov %eax,(%esi);");
    asm("loc_6DACF1D: jbe loc_6DACF22;");
    asm("loc_6DACF1F: mov %ecx,0xC(%esi);");
    asm("loc_6DACF22: mov 0x1C(%edi),%eax;");
    asm("loc_6DACF25: test %eax,%eax;");
    asm("loc_6DACF27: jne loc_6DACFC6;");
    asm("loc_6DACF2D: mov (%ebx),%eax;");
    asm("loc_6DACF2F: mov (%eax),%edx;");
    asm("loc_6DACF31: add $4,%eax;");
    asm("loc_6DACF34: mov %eax,(%ebx);");
    asm("loc_6DACF36: mov %edx,0x24(%edi);");
    asm("loc_6DACF39: mov (%esi),%eax;");
    asm("loc_6DACF3B: mov 4(%esi),%edx;");
    asm("loc_6DACF3E: add $2,%eax;");
    asm("loc_6DACF41: cmp %edx,%eax;");
    asm("loc_6DACF43: mov %eax,(%esi);");
    asm("loc_6DACF45: jbe loc_6DACF4A;");
    asm("loc_6DACF47: mov %ecx,0xC(%esi);");
    asm("loc_6DACF4A: mov 0x1C(%edi),%eax;");
    asm("loc_6DACF4D: test %eax,%eax;");
    asm("loc_6DACF4F: jne loc_6DACFC6;");
    asm("loc_6DACF51: mov (%ebx),%eax;");
    asm("loc_6DACF53: mov (%eax),%cx;");
    asm("loc_6DACF56: push %esi;");
    asm("loc_6DACF57: push %ebp;");
    asm("loc_6DACF58: mov %cx,0x28(%edi);");
    asm("loc_6DACF5C: add $2,%eax;");
    asm("loc_6DACF5F: push %ebx;");
    asm("loc_6DACF60: mov %edi,%ecx;");
    asm("loc_6DACF62: mov %eax,(%ebx);");
    asm("loc_6DACF64: call _sub_6DA13C0;");
    asm("loc_6DACF69: test %eax,%eax;");
    asm("loc_6DACF6B: mov %eax,0x1C(%edi);");
    asm("loc_6DACF6E: je loc_6DACF7C;");
    asm("loc_6DACF70: pop %edi;");
    asm("loc_6DACF71: pop %esi;");
    asm("loc_6DACF72: pop %ebp;");
    asm("loc_6DACF73: mov $0x17,%eax;");
    asm("loc_6DACF78: pop %ebx;");
    asm("loc_6DACF79: ret $0xC;");
    asm("loc_6DACF7C: mov (%esi),%edx;");
    asm("loc_6DACF7E: mov 0x1C(%esp),%eax;");
    asm("loc_6DACF82: mov %edx,(%eax);");
    asm("loc_6DACF84: mov 0xC(%edi),%ecx;");
    asm("loc_6DACF87: push %ecx;");
    asm("loc_6DACF88: call _sub_6DA16B0;");
    asm("loc_6DACF8D: mov %eax,%ecx;");
    asm("loc_6DACF8F: mov 4(%ecx),%edx;");
    asm("loc_6DACF92: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DACF95: mov 0x14(%ecx),%eax;");
    asm("loc_6DACF98: add $4,%esp;");
    asm("loc_6DACF9B: inc %edx;");
    asm("loc_6DACF9C: mov %edx,4(%ecx);");
    asm("loc_6DACF9F: mov %edx,%edi;");
    asm("loc_6DACFA1: mov (%esi),%edx;");
    asm("loc_6DACFA3: add $2,%edx;");
    asm("loc_6DACFA6: add %edx,%ebp;");
    asm("loc_6DACFA8: mov %ebp,0x1C(%ecx);");
    asm("loc_6DACFAB: mov (%esi),%esi;");
    asm("loc_6DACFAD: add $2,%eax;");
    asm("loc_6DACFB0: cmp %eax,%esi;");
    asm("loc_6DACFB2: jbe loc_6DACFBA;");
    asm("loc_6DACFB4: add $2,%esi;");
    asm("loc_6DACFB7: mov %esi,0x14(%ecx);");
    asm("loc_6DACFBA: mov 0x1C(%ecx),%eax;");
    asm("loc_6DACFBD: xor %edx,%edx;");
    asm("loc_6DACFBF: div %edi;");
    asm("loc_6DACFC1: mov %eax,0xC(%ecx);");
    asm("loc_6DACFC4: xor %eax,%eax;");
    asm("loc_6DACFC6: pop %edi;");
    asm("loc_6DACFC7: pop %esi;");
    asm("loc_6DACFC8: pop %ebp;");
    asm("loc_6DACFC9: pop %ebx;");
    asm("loc_6DACFCA: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACFD0() // _sub_6DACFD0
{
    __DEBUG_ASM(6DACFD0);
    // chunk 0x6DACFD0 _sub_6DACFD0
    asm("loc_6DACFD0: mov _data_6DB6548,%eax;");
    asm("loc_6DACFD5: mov %eax,_data_6DBC360;");
    asm("loc_6DACFDA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACFE0() // _sub_6DACFE0
{
    __DEBUG_ASM(6DACFE0);
    // chunk 0x6DACFE0 _sub_6DACFE0
    asm("loc_6DACFE0: mov _data_6DB6548,%eax;");
    asm("loc_6DACFE5: mov %eax,_data_6DBC364;");
    asm("loc_6DACFEA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DACFF0() // _sub_6DACFF0
{
    __DEBUG_ASM(6DACFF0);
    // chunk 0x6DACFF0 _sub_6DACFF0
    asm("loc_6DACFF0: mov _data_6DB654C,%eax;");
    asm("loc_6DACFF5: mov %eax,_data_6DBC35C;");
    asm("loc_6DACFFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD000() // _sub_6DAD000
{
    __DEBUG_ASM(6DAD000);
    // chunk 0x6DAD000 _sub_6DAD000
    asm("loc_6DAD000: mov 8(%esp),%eax;");
    asm("loc_6DAD004: push %ebx;");
    asm("loc_6DAD005: push %ebp;");
    asm("loc_6DAD006: push %esi;");
    asm("loc_6DAD007: push %edi;");
    asm("loc_6DAD008: mov %ecx,%edi;");
    asm("loc_6DAD00A: mov 0x14(%esp),%ecx;");
    asm("loc_6DAD00E: lea 0x10(%edi),%esi;");
    asm("loc_6DAD011: mov %eax,4(%esi);");
    asm("loc_6DAD014: mov (%ecx),%edx;");
    asm("loc_6DAD016: mov %edx,8(%esi);");
    asm("loc_6DAD019: movl $0,(%esi);");
    asm("loc_6DAD01F: movl $0,0xC(%esi);");
    asm("loc_6DAD026: mov 0x14(%edi),%eax;");
    asm("loc_6DAD029: push %esi;");
    asm("loc_6DAD02A: push %eax;");
    asm("loc_6DAD02B: lea 0x18(%edi),%ebx;");
    asm("loc_6DAD02E: push %ebx;");
    asm("loc_6DAD02F: mov %edi,%ecx;");
    asm("loc_6DAD031: call _sub_6DA1380;");
    asm("loc_6DAD036: mov %eax,0x1C(%edi);");
    asm("loc_6DAD039: test %eax,%eax;");
    asm("loc_6DAD03B: mov $0x16,%eax;");
    asm("loc_6DAD040: jne loc_6DAD30F;");
    asm("loc_6DAD046: mov (%esi),%ebp;");
    asm("loc_6DAD048: mov 4(%esi),%edx;");
    asm("loc_6DAD04B: add $4,%ebp;");
    asm("loc_6DAD04E: mov %ebp,%ecx;");
    asm("loc_6DAD050: cmp %edx,%ecx;");
    asm("loc_6DAD052: mov %ebp,(%esi);");
    asm("loc_6DAD054: jbe loc_6DAD059;");
    asm("loc_6DAD056: mov %eax,0xC(%esi);");
    asm("loc_6DAD059: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAD05C: test %ecx,%ecx;");
    asm("loc_6DAD05E: jne loc_6DAD30F;");
    asm("loc_6DAD064: mov (%ebx),%ecx;");
    asm("loc_6DAD066: mov 0x20(%edi),%edx;");
    asm("loc_6DAD069: mov %edx,(%ecx);");
    asm("loc_6DAD06B: add $4,%ecx;");
    asm("loc_6DAD06E: mov %ecx,(%ebx);");
    asm("loc_6DAD070: mov (%esi),%ebp;");
    asm("loc_6DAD072: mov 4(%esi),%edx;");
    asm("loc_6DAD075: add $4,%ebp;");
    asm("loc_6DAD078: mov %ebp,%ecx;");
    asm("loc_6DAD07A: cmp %edx,%ecx;");
    asm("loc_6DAD07C: mov %ebp,(%esi);");
    asm("loc_6DAD07E: jbe loc_6DAD083;");
    asm("loc_6DAD080: mov %eax,0xC(%esi);");
    asm("loc_6DAD083: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAD086: test %ecx,%ecx;");
    asm("loc_6DAD088: jne loc_6DAD30F;");
    asm("loc_6DAD08E: mov (%ebx),%ecx;");
    asm("loc_6DAD090: mov 0x24(%edi),%edx;");
    asm("loc_6DAD093: mov %edx,(%ecx);");
    asm("loc_6DAD095: add $4,%ecx;");
    asm("loc_6DAD098: mov %ecx,(%ebx);");
    asm("loc_6DAD09A: mov (%esi),%ebp;");
    asm("loc_6DAD09C: mov 4(%esi),%edx;");
    asm("loc_6DAD09F: add $4,%ebp;");
    asm("loc_6DAD0A2: mov %ebp,%ecx;");
    asm("loc_6DAD0A4: cmp %edx,%ecx;");
    asm("loc_6DAD0A6: mov %ebp,(%esi);");
    asm("loc_6DAD0A8: jbe loc_6DAD0AD;");
    asm("loc_6DAD0AA: mov %eax,0xC(%esi);");
    asm("loc_6DAD0AD: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAD0B0: test %ecx,%ecx;");
    asm("loc_6DAD0B2: jne loc_6DAD30F;");
    asm("loc_6DAD0B8: mov (%ebx),%ecx;");
    asm("loc_6DAD0BA: mov 0x28(%edi),%edx;");
    asm("loc_6DAD0BD: mov %edx,(%ecx);");
    asm("loc_6DAD0BF: add $4,%ecx;");
    asm("loc_6DAD0C2: mov %ecx,(%ebx);");
    asm("loc_6DAD0C4: mov (%esi),%ebp;");
    asm("loc_6DAD0C6: mov 4(%esi),%edx;");
    asm("loc_6DAD0C9: inc %ebp;");
    asm("loc_6DAD0CA: mov %ebp,%ecx;");
    asm("loc_6DAD0CC: cmp %edx,%ecx;");
    asm("loc_6DAD0CE: mov %ebp,(%esi);");
    asm("loc_6DAD0D0: jbe loc_6DAD0D5;");
    asm("loc_6DAD0D2: mov %eax,0xC(%esi);");
    asm("loc_6DAD0D5: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAD0D8: test %ecx,%ecx;");
    asm("loc_6DAD0DA: jne loc_6DAD30F;");
    asm("loc_6DAD0E0: mov (%ebx),%ecx;");
    asm("loc_6DAD0E2: mov 0x74(%edi),%dl;");
    asm("loc_6DAD0E5: mov %dl,(%ecx);");
    asm("loc_6DAD0E7: inc %ecx;");
    asm("loc_6DAD0E8: mov %ecx,(%ebx);");
    asm("loc_6DAD0EA: mov 0x74(%edi),%cl;");
    asm("loc_6DAD0ED: test %cl,%cl;");
    asm("loc_6DAD0EF: je loc_6DAD1B6;");
    asm("loc_6DAD0F5: mov (%esi),%ebp;");
    asm("loc_6DAD0F7: mov 4(%esi),%edx;");
    asm("loc_6DAD0FA: add $4,%ebp;");
    asm("loc_6DAD0FD: mov %ebp,%ecx;");
    asm("loc_6DAD0FF: cmp %edx,%ecx;");
    asm("loc_6DAD101: mov %ebp,(%esi);");
    asm("loc_6DAD103: jbe loc_6DAD108;");
    asm("loc_6DAD105: mov %eax,0xC(%esi);");
    asm("loc_6DAD108: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAD10B: test %ecx,%ecx;");
    asm("loc_6DAD10D: jne loc_6DAD30F;");
    asm("loc_6DAD113: mov (%ebx),%ecx;");
    asm("loc_6DAD115: mov 0x2C(%edi),%edx;");
    asm("loc_6DAD118: mov %edx,(%ecx);");
    asm("loc_6DAD11A: add $4,%ecx;");
    asm("loc_6DAD11D: mov %ecx,(%ebx);");
    asm("loc_6DAD11F: mov (%esi),%ebp;");
    asm("loc_6DAD121: mov 4(%esi),%edx;");
    asm("loc_6DAD124: add $4,%ebp;");
    asm("loc_6DAD127: mov %ebp,%ecx;");
    asm("loc_6DAD129: cmp %edx,%ecx;");
    asm("loc_6DAD12B: mov %ebp,(%esi);");
    asm("loc_6DAD12D: jbe loc_6DAD132;");
    asm("loc_6DAD12F: mov %eax,0xC(%esi);");
    asm("loc_6DAD132: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAD135: test %ecx,%ecx;");
    asm("loc_6DAD137: jne loc_6DAD30F;");
    asm("loc_6DAD13D: mov (%ebx),%ecx;");
    asm("loc_6DAD13F: mov 0x30(%edi),%edx;");
    asm("loc_6DAD142: mov %edx,(%ecx);");
    asm("loc_6DAD144: mov 0x5C(%edi),%dl;");
    asm("loc_6DAD147: add $4,%ecx;");
    asm("loc_6DAD14A: mov %ecx,(%ebx);");
    asm("loc_6DAD14C: mov (%esi),%ecx;");
    asm("loc_6DAD14E: mov 4(%esi),%ebp;");
    asm("loc_6DAD151: inc %ecx;");
    asm("loc_6DAD152: cmp %ebp,%ecx;");
    asm("loc_6DAD154: mov %ecx,(%esi);");
    asm("loc_6DAD156: jbe loc_6DAD15B;");
    asm("loc_6DAD158: mov %eax,0xC(%esi);");
    asm("loc_6DAD15B: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAD15E: test %ecx,%ecx;");
    asm("loc_6DAD160: jne loc_6DAD30F;");
    asm("loc_6DAD166: mov (%ebx),%ecx;");
    asm("loc_6DAD168: mov %dl,(%ecx);");
    asm("loc_6DAD16A: inc %ecx;");
    asm("loc_6DAD16B: mov %ecx,(%ebx);");
    asm("loc_6DAD16D: mov 0x5C(%edi),%ecx;");
    asm("loc_6DAD170: xor %edx,%edx;");
    asm("loc_6DAD172: test %ecx,%ecx;");
    asm("loc_6DAD174: jle loc_6DAD1B6;");
    asm("loc_6DAD176: lea 0x3C(%edi),%ebp;");
    asm("loc_6DAD179: lea (%esp),%esp;");
    asm("loc_6DAD180: mov (%esi),%ecx;");
    asm("loc_6DAD182: add $4,%ecx;");
    asm("loc_6DAD185: cmp 4(%esi),%ecx;");
    asm("loc_6DAD188: mov %ecx,(%esi);");
    asm("loc_6DAD18A: jbe loc_6DAD18F;");
    asm("loc_6DAD18C: mov %eax,0xC(%esi);");
    asm("loc_6DAD18F: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAD192: test %ecx,%ecx;");
    asm("loc_6DAD194: jne loc_6DAD30F;");
    asm("loc_6DAD19A: mov (%ebp),%eax;");
    asm("loc_6DAD19D: mov (%ebx),%ecx;");
    asm("loc_6DAD19F: mov %eax,(%ecx);");
    asm("loc_6DAD1A1: mov 0x5C(%edi),%eax;");
    asm("loc_6DAD1A4: add $4,%ecx;");
    asm("loc_6DAD1A7: inc %edx;");
    asm("loc_6DAD1A8: add $4,%ebp;");
    asm("loc_6DAD1AB: cmp %eax,%edx;");
    asm("loc_6DAD1AD: mov %ecx,(%ebx);");
    asm("loc_6DAD1AF: mov $0x16,%eax;");
    asm("loc_6DAD1B4: jl loc_6DAD180;");
    asm("loc_6DAD1B6: mov (%esi),%ebp;");
    asm("loc_6DAD1B8: mov 4(%esi),%edx;");
    asm("loc_6DAD1BB: add $4,%ebp;");
    asm("loc_6DAD1BE: mov %ebp,%ecx;");
    asm("loc_6DAD1C0: cmp %edx,%ecx;");
    asm("loc_6DAD1C2: mov %ebp,(%esi);");
    asm("loc_6DAD1C4: jbe loc_6DAD1C9;");
    asm("loc_6DAD1C6: mov %eax,0xC(%esi);");
    asm("loc_6DAD1C9: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAD1CC: test %ecx,%ecx;");
    asm("loc_6DAD1CE: jne loc_6DAD30F;");
    asm("loc_6DAD1D4: mov (%ebx),%ecx;");
    asm("loc_6DAD1D6: mov 0x60(%edi),%edx;");
    asm("loc_6DAD1D9: mov %edx,(%ecx);");
    asm("loc_6DAD1DB: add $4,%ecx;");
    asm("loc_6DAD1DE: mov %ecx,(%ebx);");
    asm("loc_6DAD1E0: mov (%esi),%ebp;");
    asm("loc_6DAD1E2: mov 4(%esi),%edx;");
    asm("loc_6DAD1E5: inc %ebp;");
    asm("loc_6DAD1E6: mov %ebp,%ecx;");
    asm("loc_6DAD1E8: cmp %edx,%ecx;");
    asm("loc_6DAD1EA: mov %ebp,(%esi);");
    asm("loc_6DAD1EC: jbe loc_6DAD1F1;");
    asm("loc_6DAD1EE: mov %eax,0xC(%esi);");
    asm("loc_6DAD1F1: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAD1F4: test %ecx,%ecx;");
    asm("loc_6DAD1F6: jne loc_6DAD30F;");
    asm("loc_6DAD1FC: mov (%ebx),%ecx;");
    asm("loc_6DAD1FE: mov 0x68(%edi),%dl;");
    asm("loc_6DAD201: mov %dl,(%ecx);");
    asm("loc_6DAD203: inc %ecx;");
    asm("loc_6DAD204: mov %ecx,(%ebx);");
    asm("loc_6DAD206: mov 0x68(%edi),%cl;");
    asm("loc_6DAD209: xor %edx,%edx;");
    asm("loc_6DAD20B: test %cl,%cl;");
    asm("loc_6DAD20D: jle loc_6DAD245;");
    asm("loc_6DAD20F: nop;");
    asm("loc_6DAD210: mov (%esi),%ecx;");
    asm("loc_6DAD212: mov 4(%esi),%ebp;");
    asm("loc_6DAD215: add $4,%ecx;");
    asm("loc_6DAD218: cmp %ebp,%ecx;");
    asm("loc_6DAD21A: mov %ecx,(%esi);");
    asm("loc_6DAD21C: jbe loc_6DAD221;");
    asm("loc_6DAD21E: mov %eax,0xC(%esi);");
    asm("loc_6DAD221: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAD224: test %ecx,%ecx;");
    asm("loc_6DAD226: jne loc_6DAD30F;");
    asm("loc_6DAD22C: mov 0x64(%edi),%ebp;");
    asm("loc_6DAD22F: mov (%ebx),%ecx;");
    asm("loc_6DAD231: mov (%ebp,%edx,4),%ebp;");
    asm("loc_6DAD235: mov %ebp,(%ecx);");
    asm("loc_6DAD237: add $4,%ecx;");
    asm("loc_6DAD23A: mov %ecx,(%ebx);");
    asm("loc_6DAD23C: movsbl 0x68(%edi),%ecx;");
    asm("loc_6DAD240: inc %edx;");
    asm("loc_6DAD241: cmp %ecx,%edx;");
    asm("loc_6DAD243: jl loc_6DAD210;");
    asm("loc_6DAD245: mov (%esi),%edx;");
    asm("loc_6DAD247: mov 4(%esi),%ebp;");
    asm("loc_6DAD24A: mov 0x6C(%edi),%cx;");
    asm("loc_6DAD24E: add $2,%edx;");
    asm("loc_6DAD251: cmp %ebp,%edx;");
    asm("loc_6DAD253: mov %edx,(%esi);");
    asm("loc_6DAD255: jbe loc_6DAD25A;");
    asm("loc_6DAD257: mov %eax,0xC(%esi);");
    asm("loc_6DAD25A: mov 0x1C(%edi),%edx;");
    asm("loc_6DAD25D: test %edx,%edx;");
    asm("loc_6DAD25F: jne loc_6DAD30F;");
    asm("loc_6DAD265: mov (%ebx),%eax;");
    asm("loc_6DAD267: mov %cx,(%eax);");
    asm("loc_6DAD26A: flds 0x70(%edi);");
    asm("loc_6DAD26D: fmuls _data_6DB6554;");
    asm("loc_6DAD273: add $2,%eax;");
    asm("loc_6DAD276: mov %eax,(%ebx);");
    asm("loc_6DAD278: fmull _data_6DB60F0;");
    asm("loc_6DAD27E: call _sub_6DB20DE;");
    asm("loc_6DAD283: mov (%esi),%ebp;");
    asm("loc_6DAD285: mov 4(%esi),%edx;");
    asm("loc_6DAD288: inc %ebp;");
    asm("loc_6DAD289: mov %ebp,%ecx;");
    asm("loc_6DAD28B: cmp %edx,%ecx;");
    asm("loc_6DAD28D: mov %ebp,(%esi);");
    asm("loc_6DAD28F: jbe loc_6DAD298;");
    asm("loc_6DAD291: movl $0x16,0xC(%esi);");
    asm("loc_6DAD298: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAD29B: test %ecx,%ecx;");
    asm("loc_6DAD29D: je loc_6DAD2AB;");
    asm("loc_6DAD29F: pop %edi;");
    asm("loc_6DAD2A0: pop %esi;");
    asm("loc_6DAD2A1: pop %ebp;");
    asm("loc_6DAD2A2: mov $0x16,%eax;");
    asm("loc_6DAD2A7: pop %ebx;");
    asm("loc_6DAD2A8: ret $0xC;");
    asm("loc_6DAD2AB: mov (%ebx),%ecx;");
    asm("loc_6DAD2AD: mov %al,(%ecx);");
    asm("loc_6DAD2AF: mov 0x14(%edi),%edx;");
    asm("loc_6DAD2B2: push %esi;");
    asm("loc_6DAD2B3: inc %ecx;");
    asm("loc_6DAD2B4: push %edx;");
    asm("loc_6DAD2B5: mov %ecx,(%ebx);");
    asm("loc_6DAD2B7: push %ebx;");
    asm("loc_6DAD2B8: mov %edi,%ecx;");
    asm("loc_6DAD2BA: call _sub_6DA13C0;");
    asm("loc_6DAD2BF: test %eax,%eax;");
    asm("loc_6DAD2C1: mov %eax,0x1C(%edi);");
    asm("loc_6DAD2C4: je loc_6DAD2D2;");
    asm("loc_6DAD2C6: pop %edi;");
    asm("loc_6DAD2C7: pop %esi;");
    asm("loc_6DAD2C8: pop %ebp;");
    asm("loc_6DAD2C9: mov $0x16,%eax;");
    asm("loc_6DAD2CE: pop %ebx;");
    asm("loc_6DAD2CF: ret $0xC;");
    asm("loc_6DAD2D2: mov (%esi),%eax;");
    asm("loc_6DAD2D4: mov 0x1C(%esp),%ecx;");
    asm("loc_6DAD2D8: mov %eax,(%ecx);");
    asm("loc_6DAD2DA: mov 0xC(%edi),%edx;");
    asm("loc_6DAD2DD: push %edx;");
    asm("loc_6DAD2DE: call _sub_6DA16B0;");
    asm("loc_6DAD2E3: mov %eax,%ecx;");
    asm("loc_6DAD2E5: mov (%ecx),%edi;");
    asm("loc_6DAD2E7: mov 0x18(%ecx),%edx;");
    asm("loc_6DAD2EA: add $4,%esp;");
    asm("loc_6DAD2ED: inc %edi;");
    asm("loc_6DAD2EE: mov %edi,(%ecx);");
    asm("loc_6DAD2F0: mov (%esi),%eax;");
    asm("loc_6DAD2F2: add %eax,%edx;");
    asm("loc_6DAD2F4: mov 0x10(%ecx),%eax;");
    asm("loc_6DAD2F7: mov %edx,0x18(%ecx);");
    asm("loc_6DAD2FA: mov (%esi),%esi;");
    asm("loc_6DAD2FC: cmp %eax,%esi;");
    asm("loc_6DAD2FE: jbe loc_6DAD303;");
    asm("loc_6DAD300: mov %esi,0x10(%ecx);");
    asm("loc_6DAD303: mov 0x18(%ecx),%eax;");
    asm("loc_6DAD306: xor %edx,%edx;");
    asm("loc_6DAD308: div %edi;");
    asm("loc_6DAD30A: mov %eax,8(%ecx);");
    asm("loc_6DAD30D: xor %eax,%eax;");
    asm("loc_6DAD30F: pop %edi;");
    asm("loc_6DAD310: pop %esi;");
    asm("loc_6DAD311: pop %ebp;");
    asm("loc_6DAD312: pop %ebx;");
    asm("loc_6DAD313: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD320() // _sub_6DAD320
{
    __DEBUG_ASM(6DAD320);
    // chunk 0x6DAD320 _sub_6DAD320
    asm("loc_6DAD320: mov 8(%esp),%eax;");
    asm("loc_6DAD324: push %ebx;");
    asm("loc_6DAD325: push %ebp;");
    asm("loc_6DAD326: push %esi;");
    asm("loc_6DAD327: push %edi;");
    asm("loc_6DAD328: mov %ecx,%edi;");
    asm("loc_6DAD32A: mov 0x14(%esp),%ecx;");
    asm("loc_6DAD32E: lea 0x10(%edi),%esi;");
    asm("loc_6DAD331: push %esi;");
    asm("loc_6DAD332: push %eax;");
    asm("loc_6DAD333: mov %ecx,8(%esi);");
    asm("loc_6DAD336: xor %ebx,%ebx;");
    asm("loc_6DAD338: lea 0x18(%edi),%ebp;");
    asm("loc_6DAD33B: push %ebp;");
    asm("loc_6DAD33C: mov %edi,%ecx;");
    asm("loc_6DAD33E: mov %eax,4(%esi);");
    asm("loc_6DAD341: mov %ebx,(%esi);");
    asm("loc_6DAD343: mov %ebx,0xC(%esi);");
    asm("loc_6DAD346: call _sub_6DA13C0;");
    asm("loc_6DAD34B: cmp %ebx,%eax;");
    asm("loc_6DAD34D: mov %eax,0x1C(%edi);");
    asm("loc_6DAD350: je loc_6DAD35E;");
    asm("loc_6DAD352: pop %edi;");
    asm("loc_6DAD353: pop %esi;");
    asm("loc_6DAD354: pop %ebp;");
    asm("loc_6DAD355: mov $0x17,%eax;");
    asm("loc_6DAD35A: pop %ebx;");
    asm("loc_6DAD35B: ret $0xC;");
    asm("loc_6DAD35E: mov (%esi),%edx;");
    asm("loc_6DAD360: mov 4(%esi),%ecx;");
    asm("loc_6DAD363: add $4,%edx;");
    asm("loc_6DAD366: mov %edx,%eax;");
    asm("loc_6DAD368: cmp %ecx,%eax;");
    asm("loc_6DAD36A: mov %edx,(%esi);");
    asm("loc_6DAD36C: mov $0x17,%edx;");
    asm("loc_6DAD371: jbe loc_6DAD376;");
    asm("loc_6DAD373: mov %edx,0xC(%esi);");
    asm("loc_6DAD376: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD379: cmp %ebx,%eax;");
    asm("loc_6DAD37B: jne loc_6DAD689;");
    asm("loc_6DAD381: mov (%ebp),%eax;");
    asm("loc_6DAD384: mov (%eax),%ecx;");
    asm("loc_6DAD386: add $4,%eax;");
    asm("loc_6DAD389: mov %eax,(%ebp);");
    asm("loc_6DAD38C: mov %ecx,0x20(%edi);");
    asm("loc_6DAD38F: mov (%esi),%eax;");
    asm("loc_6DAD391: mov 4(%esi),%ecx;");
    asm("loc_6DAD394: add $4,%eax;");
    asm("loc_6DAD397: cmp %ecx,%eax;");
    asm("loc_6DAD399: mov %eax,(%esi);");
    asm("loc_6DAD39B: jbe loc_6DAD3A0;");
    asm("loc_6DAD39D: mov %edx,0xC(%esi);");
    asm("loc_6DAD3A0: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD3A3: cmp %ebx,%eax;");
    asm("loc_6DAD3A5: jne loc_6DAD689;");
    asm("loc_6DAD3AB: mov (%ebp),%eax;");
    asm("loc_6DAD3AE: mov (%eax),%ecx;");
    asm("loc_6DAD3B0: add $4,%eax;");
    asm("loc_6DAD3B3: mov %eax,(%ebp);");
    asm("loc_6DAD3B6: mov %ecx,0x24(%edi);");
    asm("loc_6DAD3B9: mov (%esi),%eax;");
    asm("loc_6DAD3BB: mov 4(%esi),%ecx;");
    asm("loc_6DAD3BE: add $4,%eax;");
    asm("loc_6DAD3C1: cmp %ecx,%eax;");
    asm("loc_6DAD3C3: mov %eax,(%esi);");
    asm("loc_6DAD3C5: jbe loc_6DAD3CA;");
    asm("loc_6DAD3C7: mov %edx,0xC(%esi);");
    asm("loc_6DAD3CA: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD3CD: cmp %ebx,%eax;");
    asm("loc_6DAD3CF: jne loc_6DAD689;");
    asm("loc_6DAD3D5: mov (%ebp),%eax;");
    asm("loc_6DAD3D8: mov (%eax),%ecx;");
    asm("loc_6DAD3DA: add $4,%eax;");
    asm("loc_6DAD3DD: mov %eax,(%ebp);");
    asm("loc_6DAD3E0: mov %ecx,0x28(%edi);");
    asm("loc_6DAD3E3: mov (%esi),%eax;");
    asm("loc_6DAD3E5: mov 4(%esi),%ecx;");
    asm("loc_6DAD3E8: inc %eax;");
    asm("loc_6DAD3E9: cmp %ecx,%eax;");
    asm("loc_6DAD3EB: mov %eax,(%esi);");
    asm("loc_6DAD3ED: jbe loc_6DAD3F2;");
    asm("loc_6DAD3EF: mov %edx,0xC(%esi);");
    asm("loc_6DAD3F2: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD3F5: cmp %ebx,%eax;");
    asm("loc_6DAD3F7: jne loc_6DAD689;");
    asm("loc_6DAD3FD: mov (%ebp),%eax;");
    asm("loc_6DAD400: mov (%eax),%cl;");
    asm("loc_6DAD402: inc %eax;");
    asm("loc_6DAD403: mov %eax,(%ebp);");
    asm("loc_6DAD406: mov %cl,%al;");
    asm("loc_6DAD408: cmp %bl,%al;");
    asm("loc_6DAD40A: mov %cl,0x74(%edi);");
    asm("loc_6DAD40D: je loc_6DAD4DD;");
    asm("loc_6DAD413: mov (%esi),%eax;");
    asm("loc_6DAD415: mov 4(%esi),%ecx;");
    asm("loc_6DAD418: add $4,%eax;");
    asm("loc_6DAD41B: cmp %ecx,%eax;");
    asm("loc_6DAD41D: mov %eax,(%esi);");
    asm("loc_6DAD41F: jbe loc_6DAD424;");
    asm("loc_6DAD421: mov %edx,0xC(%esi);");
    asm("loc_6DAD424: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD427: cmp %ebx,%eax;");
    asm("loc_6DAD429: jne loc_6DAD689;");
    asm("loc_6DAD42F: mov (%ebp),%eax;");
    asm("loc_6DAD432: mov (%eax),%ecx;");
    asm("loc_6DAD434: add $4,%eax;");
    asm("loc_6DAD437: mov %eax,(%ebp);");
    asm("loc_6DAD43A: mov %ecx,0x2C(%edi);");
    asm("loc_6DAD43D: mov (%esi),%eax;");
    asm("loc_6DAD43F: mov 4(%esi),%ecx;");
    asm("loc_6DAD442: add $4,%eax;");
    asm("loc_6DAD445: cmp %ecx,%eax;");
    asm("loc_6DAD447: mov %eax,(%esi);");
    asm("loc_6DAD449: jbe loc_6DAD44E;");
    asm("loc_6DAD44B: mov %edx,0xC(%esi);");
    asm("loc_6DAD44E: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD451: cmp %ebx,%eax;");
    asm("loc_6DAD453: jne loc_6DAD689;");
    asm("loc_6DAD459: mov (%ebp),%eax;");
    asm("loc_6DAD45C: mov (%eax),%ecx;");
    asm("loc_6DAD45E: add $4,%eax;");
    asm("loc_6DAD461: mov %eax,(%ebp);");
    asm("loc_6DAD464: mov %ecx,0x30(%edi);");
    asm("loc_6DAD467: mov %ebx,0x34(%edi);");
    asm("loc_6DAD46A: mov %ebx,0x38(%edi);");
    asm("loc_6DAD46D: mov (%esi),%eax;");
    asm("loc_6DAD46F: mov 4(%esi),%ecx;");
    asm("loc_6DAD472: inc %eax;");
    asm("loc_6DAD473: cmp %ecx,%eax;");
    asm("loc_6DAD475: mov %eax,(%esi);");
    asm("loc_6DAD477: jbe loc_6DAD47C;");
    asm("loc_6DAD479: mov %edx,0xC(%esi);");
    asm("loc_6DAD47C: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD47F: cmp %ebx,%eax;");
    asm("loc_6DAD481: jne loc_6DAD689;");
    asm("loc_6DAD487: mov (%ebp),%eax;");
    asm("loc_6DAD48A: mov (%eax),%cl;");
    asm("loc_6DAD48C: inc %eax;");
    asm("loc_6DAD48D: mov %eax,(%ebp);");
    asm("loc_6DAD490: xor %eax,%eax;");
    asm("loc_6DAD492: mov %cl,%al;");
    asm("loc_6DAD494: xor %ecx,%ecx;");
    asm("loc_6DAD496: cmp %ebx,%eax;");
    asm("loc_6DAD498: mov %eax,0x5C(%edi);");
    asm("loc_6DAD49B: jle loc_6DAD4EC;");
    asm("loc_6DAD49D: lea 0x3C(%edi),%edx;");
    asm("loc_6DAD4A0: mov (%esi),%eax;");
    asm("loc_6DAD4A2: add $4,%eax;");
    asm("loc_6DAD4A5: cmp 4(%esi),%eax;");
    asm("loc_6DAD4A8: mov %eax,(%esi);");
    asm("loc_6DAD4AA: jbe loc_6DAD4B3;");
    asm("loc_6DAD4AC: movl $0x17,0xC(%esi);");
    asm("loc_6DAD4B3: cmp %ebx,0x1C(%edi);");
    asm("loc_6DAD4B6: jne loc_6DAD635;");
    asm("loc_6DAD4BC: mov (%ebp),%eax;");
    asm("loc_6DAD4BF: mov (%eax),%ebx;");
    asm("loc_6DAD4C1: add $4,%eax;");
    asm("loc_6DAD4C4: mov %ebx,(%edx);");
    asm("loc_6DAD4C6: mov %eax,(%ebp);");
    asm("loc_6DAD4C9: mov 0x5C(%edi),%eax;");
    asm("loc_6DAD4CC: inc %ecx;");
    asm("loc_6DAD4CD: add $4,%edx;");
    asm("loc_6DAD4D0: xor %ebx,%ebx;");
    asm("loc_6DAD4D2: cmp %eax,%ecx;");
    asm("loc_6DAD4D4: jl loc_6DAD4A0;");
    asm("loc_6DAD4D6: mov $0x17,%edx;");
    asm("loc_6DAD4DB: jmp loc_6DAD4EC;");
    asm("loc_6DAD4DD: mov %ebx,0x2C(%edi);");
    asm("loc_6DAD4E0: mov %ebx,0x30(%edi);");
    asm("loc_6DAD4E3: mov %ebx,0x34(%edi);");
    asm("loc_6DAD4E6: mov %ebx,0x38(%edi);");
    asm("loc_6DAD4E9: mov %ebx,0x5C(%edi);");
    asm("loc_6DAD4EC: mov (%esi),%eax;");
    asm("loc_6DAD4EE: mov 4(%esi),%ecx;");
    asm("loc_6DAD4F1: add $4,%eax;");
    asm("loc_6DAD4F4: cmp %ecx,%eax;");
    asm("loc_6DAD4F6: mov %eax,(%esi);");
    asm("loc_6DAD4F8: jbe loc_6DAD4FD;");
    asm("loc_6DAD4FA: mov %edx,0xC(%esi);");
    asm("loc_6DAD4FD: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD500: cmp %ebx,%eax;");
    asm("loc_6DAD502: jne loc_6DAD689;");
    asm("loc_6DAD508: mov (%ebp),%eax;");
    asm("loc_6DAD50B: mov (%eax),%ecx;");
    asm("loc_6DAD50D: add $4,%eax;");
    asm("loc_6DAD510: mov %eax,(%ebp);");
    asm("loc_6DAD513: mov %ecx,0x60(%edi);");
    asm("loc_6DAD516: mov (%esi),%eax;");
    asm("loc_6DAD518: mov 4(%esi),%ecx;");
    asm("loc_6DAD51B: inc %eax;");
    asm("loc_6DAD51C: cmp %ecx,%eax;");
    asm("loc_6DAD51E: mov %eax,(%esi);");
    asm("loc_6DAD520: jbe loc_6DAD525;");
    asm("loc_6DAD522: mov %edx,0xC(%esi);");
    asm("loc_6DAD525: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD528: cmp %ebx,%eax;");
    asm("loc_6DAD52A: jne loc_6DAD689;");
    asm("loc_6DAD530: mov (%ebp),%eax;");
    asm("loc_6DAD533: mov (%eax),%dl;");
    asm("loc_6DAD535: inc %eax;");
    asm("loc_6DAD536: mov %eax,(%ebp);");
    asm("loc_6DAD539: mov 0x64(%edi),%eax;");
    asm("loc_6DAD53C: cmp %ebx,%eax;");
    asm("loc_6DAD53E: mov %dl,0x68(%edi);");
    asm("loc_6DAD541: je loc_6DAD54C;");
    asm("loc_6DAD543: push %eax;");
    asm("loc_6DAD544: call _sub_6DB1DC2;");
    asm("loc_6DAD549: add $4,%esp;");
    asm("loc_6DAD54C: movsbl 0x68(%edi),%eax;");
    asm("loc_6DAD550: shl $2,%eax;");
    asm("loc_6DAD553: push %eax;");
    asm("loc_6DAD554: call _sub_6DB1F8A;");
    asm("loc_6DAD559: mov %eax,0x64(%edi);");
    asm("loc_6DAD55C: mov 0x68(%edi),%al;");
    asm("loc_6DAD55F: add $4,%esp;");
    asm("loc_6DAD562: xor %ecx,%ecx;");
    asm("loc_6DAD564: cmp %bl,%al;");
    asm("loc_6DAD566: jle loc_6DAD5A2;");
    asm("loc_6DAD568: mov (%esi),%eax;");
    asm("loc_6DAD56A: mov 4(%esi),%edx;");
    asm("loc_6DAD56D: add $4,%eax;");
    asm("loc_6DAD570: cmp %edx,%eax;");
    asm("loc_6DAD572: mov %eax,(%esi);");
    asm("loc_6DAD574: jbe loc_6DAD57D;");
    asm("loc_6DAD576: movl $0x17,0xC(%esi);");
    asm("loc_6DAD57D: cmp %ebx,0x1C(%edi);");
    asm("loc_6DAD580: jne loc_6DAD635;");
    asm("loc_6DAD586: mov (%ebp),%eax;");
    asm("loc_6DAD589: mov (%eax),%ebx;");
    asm("loc_6DAD58B: mov 0x64(%edi),%edx;");
    asm("loc_6DAD58E: add $4,%eax;");
    asm("loc_6DAD591: mov %ebx,(%edx,%ecx,4);");
    asm("loc_6DAD594: mov %eax,(%ebp);");
    asm("loc_6DAD597: movsbl 0x68(%edi),%eax;");
    asm("loc_6DAD59B: inc %ecx;");
    asm("loc_6DAD59C: xor %ebx,%ebx;");
    asm("loc_6DAD59E: cmp %eax,%ecx;");
    asm("loc_6DAD5A0: jl loc_6DAD568;");
    asm("loc_6DAD5A2: mov (%esi),%edx;");
    asm("loc_6DAD5A4: mov 4(%esi),%ecx;");
    asm("loc_6DAD5A7: add $2,%edx;");
    asm("loc_6DAD5AA: mov %edx,%eax;");
    asm("loc_6DAD5AC: cmp %ecx,%eax;");
    asm("loc_6DAD5AE: mov %edx,(%esi);");
    asm("loc_6DAD5B0: jbe loc_6DAD5B9;");
    asm("loc_6DAD5B2: movl $0x17,0xC(%esi);");
    asm("loc_6DAD5B9: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD5BC: cmp %ebx,%eax;");
    asm("loc_6DAD5BE: jne loc_6DAD689;");
    asm("loc_6DAD5C4: mov (%ebp),%eax;");
    asm("loc_6DAD5C7: mov (%eax),%cx;");
    asm("loc_6DAD5CA: add $2,%eax;");
    asm("loc_6DAD5CD: movzwl %cx,%ecx;");
    asm("loc_6DAD5D0: mov %eax,(%ebp);");
    asm("loc_6DAD5D3: mov %ecx,0x6C(%edi);");
    asm("loc_6DAD5D6: mov (%esi),%edx;");
    asm("loc_6DAD5D8: mov 4(%esi),%ecx;");
    asm("loc_6DAD5DB: inc %edx;");
    asm("loc_6DAD5DC: mov %edx,%eax;");
    asm("loc_6DAD5DE: cmp %ecx,%eax;");
    asm("loc_6DAD5E0: mov %edx,(%esi);");
    asm("loc_6DAD5E2: jbe loc_6DAD5EB;");
    asm("loc_6DAD5E4: movl $0x17,0xC(%esi);");
    asm("loc_6DAD5EB: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD5EE: cmp %ebx,%eax;");
    asm("loc_6DAD5F0: jne loc_6DAD689;");
    asm("loc_6DAD5F6: mov (%ebp),%eax;");
    asm("loc_6DAD5F9: mov (%eax),%cl;");
    asm("loc_6DAD5FB: xor %edx,%edx;");
    asm("loc_6DAD5FD: mov %cl,%dl;");
    asm("loc_6DAD5FF: inc %eax;");
    asm("loc_6DAD600: mov %eax,(%ebp);");
    asm("loc_6DAD603: mov 0x18(%esp),%eax;");
    asm("loc_6DAD607: push %esi;");
    asm("loc_6DAD608: push %eax;");
    asm("loc_6DAD609: push %ebp;");
    asm("loc_6DAD60A: mov %edx,0x20(%esp);");
    asm("loc_6DAD60E: fildl 0x20(%esp);");
    asm("loc_6DAD612: mov %edi,%ecx;");
    asm("loc_6DAD614: fmull _data_6DB6558;");
    asm("loc_6DAD61A: fstps 0x70(%edi);");
    asm("loc_6DAD61D: call _sub_6DA13C0;");
    asm("loc_6DAD622: cmp %ebx,%eax;");
    asm("loc_6DAD624: mov %eax,0x1C(%edi);");
    asm("loc_6DAD627: je loc_6DAD63F;");
    asm("loc_6DAD629: pop %edi;");
    asm("loc_6DAD62A: pop %esi;");
    asm("loc_6DAD62B: pop %ebp;");
    asm("loc_6DAD62C: mov $0x17,%eax;");
    asm("loc_6DAD631: pop %ebx;");
    asm("loc_6DAD632: ret $0xC;");
    asm("loc_6DAD635: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD638: pop %edi;");
    asm("loc_6DAD639: pop %esi;");
    asm("loc_6DAD63A: pop %ebp;");
    asm("loc_6DAD63B: pop %ebx;");
    asm("loc_6DAD63C: ret $0xC;");
    asm("loc_6DAD63F: mov (%esi),%ecx;");
    asm("loc_6DAD641: mov 0x1C(%esp),%edx;");
    asm("loc_6DAD645: mov %ecx,(%edx);");
    asm("loc_6DAD647: mov 0xC(%edi),%eax;");
    asm("loc_6DAD64A: push %eax;");
    asm("loc_6DAD64B: call _sub_6DA16B0;");
    asm("loc_6DAD650: mov %eax,%ecx;");
    asm("loc_6DAD652: mov 4(%ecx),%edx;");
    asm("loc_6DAD655: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAD658: mov 0x14(%ecx),%eax;");
    asm("loc_6DAD65B: add $4,%esp;");
    asm("loc_6DAD65E: inc %edx;");
    asm("loc_6DAD65F: mov %edx,4(%ecx);");
    asm("loc_6DAD662: mov %edx,%edi;");
    asm("loc_6DAD664: mov (%esi),%edx;");
    asm("loc_6DAD666: add $2,%edx;");
    asm("loc_6DAD669: add %edx,%ebp;");
    asm("loc_6DAD66B: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAD66E: mov (%esi),%esi;");
    asm("loc_6DAD670: add $2,%eax;");
    asm("loc_6DAD673: cmp %eax,%esi;");
    asm("loc_6DAD675: jbe loc_6DAD67D;");
    asm("loc_6DAD677: add $2,%esi;");
    asm("loc_6DAD67A: mov %esi,0x14(%ecx);");
    asm("loc_6DAD67D: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAD680: xor %edx,%edx;");
    asm("loc_6DAD682: div %edi;");
    asm("loc_6DAD684: mov %eax,0xC(%ecx);");
    asm("loc_6DAD687: xor %eax,%eax;");
    asm("loc_6DAD689: pop %edi;");
    asm("loc_6DAD68A: pop %esi;");
    asm("loc_6DAD68B: pop %ebp;");
    asm("loc_6DAD68C: pop %ebx;");
    asm("loc_6DAD68D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD690() // _sub_6DAD690
{
    __DEBUG_ASM(6DAD690);
    // chunk 0x6DAD690 _sub_6DAD690
    asm("loc_6DAD690: mov 4(%esp),%eax;");
    asm("loc_6DAD694: push %ebx;");
    asm("loc_6DAD695: push %ebp;");
    asm("loc_6DAD696: mov 0x10(%esp),%ebp;");
    asm("loc_6DAD69A: push %esi;");
    asm("loc_6DAD69B: push %edi;");
    asm("loc_6DAD69C: mov %ecx,%edi;");
    asm("loc_6DAD69E: lea 0x10(%edi),%esi;");
    asm("loc_6DAD6A1: push %esi;");
    asm("loc_6DAD6A2: push %ebp;");
    asm("loc_6DAD6A3: lea 0x18(%edi),%ebx;");
    asm("loc_6DAD6A6: push %ebx;");
    asm("loc_6DAD6A7: mov %ebp,4(%esi);");
    asm("loc_6DAD6AA: mov %eax,8(%esi);");
    asm("loc_6DAD6AD: movl $0,(%esi);");
    asm("loc_6DAD6B3: movl $0,0xC(%esi);");
    asm("loc_6DAD6BA: call _sub_6DA13C0;");
    asm("loc_6DAD6BF: test %eax,%eax;");
    asm("loc_6DAD6C1: mov %eax,0x1C(%edi);");
    asm("loc_6DAD6C4: je loc_6DAD6D2;");
    asm("loc_6DAD6C6: pop %edi;");
    asm("loc_6DAD6C7: pop %esi;");
    asm("loc_6DAD6C8: pop %ebp;");
    asm("loc_6DAD6C9: mov $0x17,%eax;");
    asm("loc_6DAD6CE: pop %ebx;");
    asm("loc_6DAD6CF: ret $0xC;");
    asm("loc_6DAD6D2: mov (%esi),%edx;");
    asm("loc_6DAD6D4: mov 4(%esi),%ecx;");
    asm("loc_6DAD6D7: add $4,%edx;");
    asm("loc_6DAD6DA: mov %edx,%eax;");
    asm("loc_6DAD6DC: cmp %ecx,%eax;");
    asm("loc_6DAD6DE: mov %edx,(%esi);");
    asm("loc_6DAD6E0: mov $0x17,%ecx;");
    asm("loc_6DAD6E5: jbe loc_6DAD6EA;");
    asm("loc_6DAD6E7: mov %ecx,0xC(%esi);");
    asm("loc_6DAD6EA: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD6ED: test %eax,%eax;");
    asm("loc_6DAD6EF: jne loc_6DAD7B8;");
    asm("loc_6DAD6F5: mov (%ebx),%eax;");
    asm("loc_6DAD6F7: mov (%eax),%edx;");
    asm("loc_6DAD6F9: add $4,%eax;");
    asm("loc_6DAD6FC: mov %eax,(%ebx);");
    asm("loc_6DAD6FE: mov %edx,0x20(%edi);");
    asm("loc_6DAD701: mov (%esi),%eax;");
    asm("loc_6DAD703: mov 4(%esi),%edx;");
    asm("loc_6DAD706: add $2,%eax;");
    asm("loc_6DAD709: cmp %edx,%eax;");
    asm("loc_6DAD70B: mov %eax,(%esi);");
    asm("loc_6DAD70D: jbe loc_6DAD712;");
    asm("loc_6DAD70F: mov %ecx,0xC(%esi);");
    asm("loc_6DAD712: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD715: test %eax,%eax;");
    asm("loc_6DAD717: jne loc_6DAD7B8;");
    asm("loc_6DAD71D: mov (%ebx),%eax;");
    asm("loc_6DAD71F: mov (%eax),%dx;");
    asm("loc_6DAD722: add $2,%eax;");
    asm("loc_6DAD725: mov %eax,(%ebx);");
    asm("loc_6DAD727: mov %dx,0x24(%edi);");
    asm("loc_6DAD72B: mov (%esi),%eax;");
    asm("loc_6DAD72D: mov 4(%esi),%edx;");
    asm("loc_6DAD730: add $2,%eax;");
    asm("loc_6DAD733: cmp %edx,%eax;");
    asm("loc_6DAD735: mov %eax,(%esi);");
    asm("loc_6DAD737: jbe loc_6DAD73C;");
    asm("loc_6DAD739: mov %ecx,0xC(%esi);");
    asm("loc_6DAD73C: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD73F: test %eax,%eax;");
    asm("loc_6DAD741: jne loc_6DAD7B8;");
    asm("loc_6DAD743: mov (%ebx),%eax;");
    asm("loc_6DAD745: mov (%eax),%cx;");
    asm("loc_6DAD748: push %esi;");
    asm("loc_6DAD749: push %ebp;");
    asm("loc_6DAD74A: mov %cx,0x26(%edi);");
    asm("loc_6DAD74E: add $2,%eax;");
    asm("loc_6DAD751: push %ebx;");
    asm("loc_6DAD752: mov %edi,%ecx;");
    asm("loc_6DAD754: mov %eax,(%ebx);");
    asm("loc_6DAD756: call _sub_6DA13C0;");
    asm("loc_6DAD75B: test %eax,%eax;");
    asm("loc_6DAD75D: mov %eax,0x1C(%edi);");
    asm("loc_6DAD760: je loc_6DAD76E;");
    asm("loc_6DAD762: pop %edi;");
    asm("loc_6DAD763: pop %esi;");
    asm("loc_6DAD764: pop %ebp;");
    asm("loc_6DAD765: mov $0x17,%eax;");
    asm("loc_6DAD76A: pop %ebx;");
    asm("loc_6DAD76B: ret $0xC;");
    asm("loc_6DAD76E: mov (%esi),%edx;");
    asm("loc_6DAD770: mov 0x1C(%esp),%eax;");
    asm("loc_6DAD774: mov %edx,(%eax);");
    asm("loc_6DAD776: mov 0xC(%edi),%ecx;");
    asm("loc_6DAD779: push %ecx;");
    asm("loc_6DAD77A: call _sub_6DA16B0;");
    asm("loc_6DAD77F: mov %eax,%ecx;");
    asm("loc_6DAD781: mov 4(%ecx),%edx;");
    asm("loc_6DAD784: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAD787: mov 0x14(%ecx),%eax;");
    asm("loc_6DAD78A: add $4,%esp;");
    asm("loc_6DAD78D: inc %edx;");
    asm("loc_6DAD78E: mov %edx,4(%ecx);");
    asm("loc_6DAD791: mov %edx,%edi;");
    asm("loc_6DAD793: mov (%esi),%edx;");
    asm("loc_6DAD795: add $2,%edx;");
    asm("loc_6DAD798: add %edx,%ebp;");
    asm("loc_6DAD79A: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAD79D: mov (%esi),%esi;");
    asm("loc_6DAD79F: add $2,%eax;");
    asm("loc_6DAD7A2: cmp %eax,%esi;");
    asm("loc_6DAD7A4: jbe loc_6DAD7AC;");
    asm("loc_6DAD7A6: add $2,%esi;");
    asm("loc_6DAD7A9: mov %esi,0x14(%ecx);");
    asm("loc_6DAD7AC: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAD7AF: xor %edx,%edx;");
    asm("loc_6DAD7B1: div %edi;");
    asm("loc_6DAD7B3: mov %eax,0xC(%ecx);");
    asm("loc_6DAD7B6: xor %eax,%eax;");
    asm("loc_6DAD7B8: pop %edi;");
    asm("loc_6DAD7B9: pop %esi;");
    asm("loc_6DAD7BA: pop %ebp;");
    asm("loc_6DAD7BB: pop %ebx;");
    asm("loc_6DAD7BC: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD7C0() // _sub_6DAD7C0
{
    __DEBUG_ASM(6DAD7C0);
    // chunk 0x6DAD7C0 _sub_6DAD7C0
    asm("loc_6DAD7C0: mov _data_6DB6564,%eax;");
    asm("loc_6DAD7C5: mov %eax,_data_6DBC370;");
    asm("loc_6DAD7CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD7D0() // _sub_6DAD7D0
{
    __DEBUG_ASM(6DAD7D0);
    // chunk 0x6DAD7D0 _sub_6DAD7D0
    asm("loc_6DAD7D0: mov _data_6DB6564,%eax;");
    asm("loc_6DAD7D5: mov %eax,_data_6DBC374;");
    asm("loc_6DAD7DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD7E0() // _sub_6DAD7E0
{
    __DEBUG_ASM(6DAD7E0);
    // chunk 0x6DAD7E0 _sub_6DAD7E0
    asm("loc_6DAD7E0: mov _data_6DB6568,%eax;");
    asm("loc_6DAD7E5: mov %eax,_data_6DBC36C;");
    asm("loc_6DAD7EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD7F0() // _sub_6DAD7F0
{
    __DEBUG_ASM(6DAD7F0);
    // chunk 0x6DAD7F0 _sub_6DAD7F0
    asm("loc_6DAD7F0: mov _data_6DB6574,%eax;");
    asm("loc_6DAD7F5: mov %eax,_data_6DBC380;");
    asm("loc_6DAD7FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD800() // _sub_6DAD800
{
    __DEBUG_ASM(6DAD800);
    // chunk 0x6DAD800 _sub_6DAD800
    asm("loc_6DAD800: mov _data_6DB6574,%eax;");
    asm("loc_6DAD805: mov %eax,_data_6DBC384;");
    asm("loc_6DAD80A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD810() // _sub_6DAD810
{
    __DEBUG_ASM(6DAD810);
    // chunk 0x6DAD810 _sub_6DAD810
    asm("loc_6DAD810: mov _data_6DB6578,%eax;");
    asm("loc_6DAD815: mov %eax,_data_6DBC37C;");
    asm("loc_6DAD81A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD820() // _sub_6DAD820
{
    __DEBUG_ASM(6DAD820);
    // chunk 0x6DAD820 _sub_6DAD820
    asm("loc_6DAD820: mov 8(%esp),%eax;");
    asm("loc_6DAD824: push %ebx;");
    asm("loc_6DAD825: push %ebp;");
    asm("loc_6DAD826: push %esi;");
    asm("loc_6DAD827: push %edi;");
    asm("loc_6DAD828: mov %ecx,%edi;");
    asm("loc_6DAD82A: mov 0x14(%esp),%ecx;");
    asm("loc_6DAD82E: lea 0x10(%edi),%esi;");
    asm("loc_6DAD831: push %esi;");
    asm("loc_6DAD832: push %eax;");
    asm("loc_6DAD833: mov %ecx,8(%esi);");
    asm("loc_6DAD836: lea 0x18(%edi),%ebx;");
    asm("loc_6DAD839: push %ebx;");
    asm("loc_6DAD83A: mov %edi,%ecx;");
    asm("loc_6DAD83C: mov %eax,4(%esi);");
    asm("loc_6DAD83F: movl $0,(%esi);");
    asm("loc_6DAD845: movl $0,0xC(%esi);");
    asm("loc_6DAD84C: call _sub_6DA13C0;");
    asm("loc_6DAD851: test %eax,%eax;");
    asm("loc_6DAD853: mov %eax,0x1C(%edi);");
    asm("loc_6DAD856: je loc_6DAD864;");
    asm("loc_6DAD858: pop %edi;");
    asm("loc_6DAD859: pop %esi;");
    asm("loc_6DAD85A: pop %ebp;");
    asm("loc_6DAD85B: mov $0x17,%eax;");
    asm("loc_6DAD860: pop %ebx;");
    asm("loc_6DAD861: ret $0xC;");
    asm("loc_6DAD864: mov (%esi),%edx;");
    asm("loc_6DAD866: mov 4(%esi),%ecx;");
    asm("loc_6DAD869: add $4,%edx;");
    asm("loc_6DAD86C: mov %edx,%eax;");
    asm("loc_6DAD86E: cmp %ecx,%eax;");
    asm("loc_6DAD870: mov %edx,(%esi);");
    asm("loc_6DAD872: jbe loc_6DAD87B;");
    asm("loc_6DAD874: movl $0x17,0xC(%esi);");
    asm("loc_6DAD87B: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD87E: test %eax,%eax;");
    asm("loc_6DAD880: jne loc_6DAD92B;");
    asm("loc_6DAD886: mov (%ebx),%eax;");
    asm("loc_6DAD888: mov (%eax),%edx;");
    asm("loc_6DAD88A: add $4,%eax;");
    asm("loc_6DAD88D: mov %edx,0x20(%edi);");
    asm("loc_6DAD890: mov %eax,(%ebx);");
    asm("loc_6DAD892: mov (%esi),%edx;");
    asm("loc_6DAD894: mov 4(%esi),%ecx;");
    asm("loc_6DAD897: add $0xC,%edx;");
    asm("loc_6DAD89A: mov %edx,%eax;");
    asm("loc_6DAD89C: cmp %ecx,%eax;");
    asm("loc_6DAD89E: mov %edx,(%esi);");
    asm("loc_6DAD8A0: jbe loc_6DAD8A9;");
    asm("loc_6DAD8A2: movl $0x17,0xC(%esi);");
    asm("loc_6DAD8A9: mov 0x1C(%edi),%eax;");
    asm("loc_6DAD8AC: test %eax,%eax;");
    asm("loc_6DAD8AE: jne loc_6DAD92B;");
    asm("loc_6DAD8B0: mov (%ebx),%ebp;");
    asm("loc_6DAD8B2: push %ebp;");
    asm("loc_6DAD8B3: lea 0x24(%edi),%ecx;");
    asm("loc_6DAD8B6: call _sub_6D8F510;");
    asm("loc_6DAD8BB: mov 0x18(%esp),%eax;");
    asm("loc_6DAD8BF: push %esi;");
    asm("loc_6DAD8C0: push %eax;");
    asm("loc_6DAD8C1: add $0xC,%ebp;");
    asm("loc_6DAD8C4: push %ebx;");
    asm("loc_6DAD8C5: mov %edi,%ecx;");
    asm("loc_6DAD8C7: mov %ebp,(%ebx);");
    asm("loc_6DAD8C9: call _sub_6DA13C0;");
    asm("loc_6DAD8CE: test %eax,%eax;");
    asm("loc_6DAD8D0: mov %eax,0x1C(%edi);");
    asm("loc_6DAD8D3: je loc_6DAD8E1;");
    asm("loc_6DAD8D5: pop %edi;");
    asm("loc_6DAD8D6: pop %esi;");
    asm("loc_6DAD8D7: pop %ebp;");
    asm("loc_6DAD8D8: mov $0x17,%eax;");
    asm("loc_6DAD8DD: pop %ebx;");
    asm("loc_6DAD8DE: ret $0xC;");
    asm("loc_6DAD8E1: mov (%esi),%ecx;");
    asm("loc_6DAD8E3: mov 0x1C(%esp),%edx;");
    asm("loc_6DAD8E7: mov %ecx,(%edx);");
    asm("loc_6DAD8E9: mov 0xC(%edi),%eax;");
    asm("loc_6DAD8EC: push %eax;");
    asm("loc_6DAD8ED: call _sub_6DA16B0;");
    asm("loc_6DAD8F2: mov %eax,%ecx;");
    asm("loc_6DAD8F4: mov 4(%ecx),%edx;");
    asm("loc_6DAD8F7: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAD8FA: mov 0x14(%ecx),%eax;");
    asm("loc_6DAD8FD: add $4,%esp;");
    asm("loc_6DAD900: inc %edx;");
    asm("loc_6DAD901: mov %edx,4(%ecx);");
    asm("loc_6DAD904: mov %edx,%edi;");
    asm("loc_6DAD906: mov (%esi),%edx;");
    asm("loc_6DAD908: add $2,%edx;");
    asm("loc_6DAD90B: add %edx,%ebp;");
    asm("loc_6DAD90D: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAD910: mov (%esi),%esi;");
    asm("loc_6DAD912: add $2,%eax;");
    asm("loc_6DAD915: cmp %eax,%esi;");
    asm("loc_6DAD917: jbe loc_6DAD91F;");
    asm("loc_6DAD919: add $2,%esi;");
    asm("loc_6DAD91C: mov %esi,0x14(%ecx);");
    asm("loc_6DAD91F: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAD922: xor %edx,%edx;");
    asm("loc_6DAD924: div %edi;");
    asm("loc_6DAD926: mov %eax,0xC(%ecx);");
    asm("loc_6DAD929: xor %eax,%eax;");
    asm("loc_6DAD92B: pop %edi;");
    asm("loc_6DAD92C: pop %esi;");
    asm("loc_6DAD92D: pop %ebp;");
    asm("loc_6DAD92E: pop %ebx;");
    asm("loc_6DAD92F: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD940() // _sub_6DAD940
{
    __DEBUG_ASM(6DAD940);
    // chunk 0x6DAD940 _sub_6DAD940
    asm("loc_6DAD940: mov _data_6DB6584,%eax;");
    asm("loc_6DAD945: mov %eax,_data_6DBC390;");
    asm("loc_6DAD94A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD950() // _sub_6DAD950
{
    __DEBUG_ASM(6DAD950);
    // chunk 0x6DAD950 _sub_6DAD950
    asm("loc_6DAD950: mov _data_6DB6584,%eax;");
    asm("loc_6DAD955: mov %eax,_data_6DBC394;");
    asm("loc_6DAD95A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD960() // _sub_6DAD960
{
    __DEBUG_ASM(6DAD960);
    // chunk 0x6DAD960 _sub_6DAD960
    asm("loc_6DAD960: mov _data_6DB6588,%eax;");
    asm("loc_6DAD965: mov %eax,_data_6DBC38C;");
    asm("loc_6DAD96A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD970() // _sub_6DAD970
{
    __DEBUG_ASM(6DAD970);
    // chunk 0x6DAD970 _sub_6DAD970
    asm("loc_6DAD970: mov _data_6DB6594,%eax;");
    asm("loc_6DAD975: mov %eax,_data_6DBC3A0;");
    asm("loc_6DAD97A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD980() // _sub_6DAD980
{
    __DEBUG_ASM(6DAD980);
    // chunk 0x6DAD980 _sub_6DAD980
    asm("loc_6DAD980: mov _data_6DB6594,%eax;");
    asm("loc_6DAD985: mov %eax,_data_6DBC3A4;");
    asm("loc_6DAD98A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD990() // _sub_6DAD990
{
    __DEBUG_ASM(6DAD990);
    // chunk 0x6DAD990 _sub_6DAD990
    asm("loc_6DAD990: mov _data_6DB6598,%eax;");
    asm("loc_6DAD995: mov %eax,_data_6DBC39C;");
    asm("loc_6DAD99A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD9A0() // _sub_6DAD9A0
{
    __DEBUG_ASM(6DAD9A0);
    // chunk 0x6DAD9A0 _sub_6DAD9A0
    asm("loc_6DAD9A0: movl $_off_6DB531C,(%ecx);");
    asm("loc_6DAD9A6: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAD9B0() // _sub_6DAD9B0
{
    __DEBUG_ASM(6DAD9B0);
    // chunk 0x6DAD9B0 _sub_6DAD9B0
    asm("loc_6DAD9B0: mov 8(%esp),%eax;");
    asm("loc_6DAD9B4: push %ebx;");
    asm("loc_6DAD9B5: push %ebp;");
    asm("loc_6DAD9B6: push %esi;");
    asm("loc_6DAD9B7: push %edi;");
    asm("loc_6DAD9B8: mov %ecx,%edi;");
    asm("loc_6DAD9BA: mov 0x14(%esp),%ecx;");
    asm("loc_6DAD9BE: lea 0x10(%edi),%esi;");
    asm("loc_6DAD9C1: mov %eax,4(%esi);");
    asm("loc_6DAD9C4: mov (%ecx),%edx;");
    asm("loc_6DAD9C6: mov %edx,8(%esi);");
    asm("loc_6DAD9C9: movl $0,(%esi);");
    asm("loc_6DAD9CF: movl $0,0xC(%esi);");
    asm("loc_6DAD9D6: mov 0x14(%edi),%eax;");
    asm("loc_6DAD9D9: push %esi;");
    asm("loc_6DAD9DA: push %eax;");
    asm("loc_6DAD9DB: lea 0x18(%edi),%ebx;");
    asm("loc_6DAD9DE: push %ebx;");
    asm("loc_6DAD9DF: mov %edi,%ecx;");
    asm("loc_6DAD9E1: call _sub_6DA1380;");
    asm("loc_6DAD9E6: test %eax,%eax;");
    asm("loc_6DAD9E8: mov %eax,0x1C(%edi);");
    asm("loc_6DAD9EB: je loc_6DAD9F9;");
    asm("loc_6DAD9ED: pop %edi;");
    asm("loc_6DAD9EE: pop %esi;");
    asm("loc_6DAD9EF: pop %ebp;");
    asm("loc_6DAD9F0: mov $0x16,%eax;");
    asm("loc_6DAD9F5: pop %ebx;");
    asm("loc_6DAD9F6: ret $0xC;");
    asm("loc_6DAD9F9: mov (%esi),%edx;");
    asm("loc_6DAD9FB: mov 4(%esi),%ecx;");
    asm("loc_6DAD9FE: add $4,%edx;");
    asm("loc_6DADA01: mov %edx,%eax;");
    asm("loc_6DADA03: cmp %ecx,%eax;");
    asm("loc_6DADA05: mov %edx,(%esi);");
    asm("loc_6DADA07: mov $0x16,%ebp;");
    asm("loc_6DADA0C: jbe loc_6DADA11;");
    asm("loc_6DADA0E: mov %ebp,0xC(%esi);");
    asm("loc_6DADA11: mov 0x1C(%edi),%eax;");
    asm("loc_6DADA14: test %eax,%eax;");
    asm("loc_6DADA16: je loc_6DADA21;");
    asm("loc_6DADA18: pop %edi;");
    asm("loc_6DADA19: pop %esi;");
    asm("loc_6DADA1A: mov %ebp,%eax;");
    asm("loc_6DADA1C: pop %ebp;");
    asm("loc_6DADA1D: pop %ebx;");
    asm("loc_6DADA1E: ret $0xC;");
    asm("loc_6DADA21: mov (%ebx),%eax;");
    asm("loc_6DADA23: mov 0x20(%edi),%ecx;");
    asm("loc_6DADA26: mov %ecx,(%eax);");
    asm("loc_6DADA28: add $4,%eax;");
    asm("loc_6DADA2B: mov %eax,(%ebx);");
    asm("loc_6DADA2D: mov (%esi),%edx;");
    asm("loc_6DADA2F: mov 4(%esi),%ecx;");
    asm("loc_6DADA32: add $4,%edx;");
    asm("loc_6DADA35: mov %edx,%eax;");
    asm("loc_6DADA37: cmp %ecx,%eax;");
    asm("loc_6DADA39: mov %edx,(%esi);");
    asm("loc_6DADA3B: jbe loc_6DADA40;");
    asm("loc_6DADA3D: mov %ebp,0xC(%esi);");
    asm("loc_6DADA40: mov 0x1C(%edi),%eax;");
    asm("loc_6DADA43: test %eax,%eax;");
    asm("loc_6DADA45: je loc_6DADA50;");
    asm("loc_6DADA47: pop %edi;");
    asm("loc_6DADA48: pop %esi;");
    asm("loc_6DADA49: mov %ebp,%eax;");
    asm("loc_6DADA4B: pop %ebp;");
    asm("loc_6DADA4C: pop %ebx;");
    asm("loc_6DADA4D: ret $0xC;");
    asm("loc_6DADA50: mov (%ebx),%eax;");
    asm("loc_6DADA52: mov 0x24(%edi),%edx;");
    asm("loc_6DADA55: mov %edx,(%eax);");
    asm("loc_6DADA57: add $4,%eax;");
    asm("loc_6DADA5A: mov %eax,(%ebx);");
    asm("loc_6DADA5C: mov (%esi),%edx;");
    asm("loc_6DADA5E: mov 4(%esi),%ecx;");
    asm("loc_6DADA61: add $2,%edx;");
    asm("loc_6DADA64: mov %edx,%eax;");
    asm("loc_6DADA66: cmp %ecx,%eax;");
    asm("loc_6DADA68: mov %edx,(%esi);");
    asm("loc_6DADA6A: jbe loc_6DADA6F;");
    asm("loc_6DADA6C: mov %ebp,0xC(%esi);");
    asm("loc_6DADA6F: mov 0x1C(%edi),%eax;");
    asm("loc_6DADA72: test %eax,%eax;");
    asm("loc_6DADA74: je loc_6DADA7F;");
    asm("loc_6DADA76: pop %edi;");
    asm("loc_6DADA77: pop %esi;");
    asm("loc_6DADA78: mov %ebp,%eax;");
    asm("loc_6DADA7A: pop %ebp;");
    asm("loc_6DADA7B: pop %ebx;");
    asm("loc_6DADA7C: ret $0xC;");
    asm("loc_6DADA7F: mov (%ebx),%eax;");
    asm("loc_6DADA81: mov 0x28(%edi),%cx;");
    asm("loc_6DADA85: mov %cx,(%eax);");
    asm("loc_6DADA88: add $2,%eax;");
    asm("loc_6DADA8B: mov %eax,(%ebx);");
    asm("loc_6DADA8D: mov (%esi),%edx;");
    asm("loc_6DADA8F: mov 4(%esi),%ecx;");
    asm("loc_6DADA92: add $2,%edx;");
    asm("loc_6DADA95: mov %edx,%eax;");
    asm("loc_6DADA97: cmp %ecx,%eax;");
    asm("loc_6DADA99: mov %edx,(%esi);");
    asm("loc_6DADA9B: jbe loc_6DADAA0;");
    asm("loc_6DADA9D: mov %ebp,0xC(%esi);");
    asm("loc_6DADAA0: mov 0x1C(%edi),%eax;");
    asm("loc_6DADAA3: test %eax,%eax;");
    asm("loc_6DADAA5: je loc_6DADAB0;");
    asm("loc_6DADAA7: pop %edi;");
    asm("loc_6DADAA8: pop %esi;");
    asm("loc_6DADAA9: mov %ebp,%eax;");
    asm("loc_6DADAAB: pop %ebp;");
    asm("loc_6DADAAC: pop %ebx;");
    asm("loc_6DADAAD: ret $0xC;");
    asm("loc_6DADAB0: mov (%ebx),%eax;");
    asm("loc_6DADAB2: mov 0x2A(%edi),%dx;");
    asm("loc_6DADAB6: mov %dx,(%eax);");
    asm("loc_6DADAB9: add $2,%eax;");
    asm("loc_6DADABC: mov %eax,(%ebx);");
    asm("loc_6DADABE: mov (%esi),%edx;");
    asm("loc_6DADAC0: mov 4(%esi),%ecx;");
    asm("loc_6DADAC3: add $4,%edx;");
    asm("loc_6DADAC6: mov %edx,%eax;");
    asm("loc_6DADAC8: cmp %ecx,%eax;");
    asm("loc_6DADACA: mov %edx,(%esi);");
    asm("loc_6DADACC: jbe loc_6DADAD1;");
    asm("loc_6DADACE: mov %ebp,0xC(%esi);");
    asm("loc_6DADAD1: mov 0x1C(%edi),%eax;");
    asm("loc_6DADAD4: test %eax,%eax;");
    asm("loc_6DADAD6: je loc_6DADAE1;");
    asm("loc_6DADAD8: pop %edi;");
    asm("loc_6DADAD9: pop %esi;");
    asm("loc_6DADADA: mov %ebp,%eax;");
    asm("loc_6DADADC: pop %ebp;");
    asm("loc_6DADADD: pop %ebx;");
    asm("loc_6DADADE: ret $0xC;");
    asm("loc_6DADAE1: mov (%ebx),%eax;");
    asm("loc_6DADAE3: flds 0x2C(%edi);");
    asm("loc_6DADAE6: add $4,%eax;");
    asm("loc_6DADAE9: fstps -4(%eax);");
    asm("loc_6DADAEC: mov %eax,(%ebx);");
    asm("loc_6DADAEE: mov (%esi),%edx;");
    asm("loc_6DADAF0: mov 4(%esi),%ecx;");
    asm("loc_6DADAF3: inc %edx;");
    asm("loc_6DADAF4: mov %edx,%eax;");
    asm("loc_6DADAF6: cmp %ecx,%eax;");
    asm("loc_6DADAF8: mov %edx,(%esi);");
    asm("loc_6DADAFA: jbe loc_6DADAFF;");
    asm("loc_6DADAFC: mov %ebp,0xC(%esi);");
    asm("loc_6DADAFF: mov 0x1C(%edi),%eax;");
    asm("loc_6DADB02: test %eax,%eax;");
    asm("loc_6DADB04: je loc_6DADB0F;");
    asm("loc_6DADB06: pop %edi;");
    asm("loc_6DADB07: pop %esi;");
    asm("loc_6DADB08: mov %ebp,%eax;");
    asm("loc_6DADB0A: pop %ebp;");
    asm("loc_6DADB0B: pop %ebx;");
    asm("loc_6DADB0C: ret $0xC;");
    asm("loc_6DADB0F: mov (%ebx),%eax;");
    asm("loc_6DADB11: mov 0x30(%edi),%cl;");
    asm("loc_6DADB14: mov %cl,(%eax);");
    asm("loc_6DADB16: mov 0x14(%edi),%edx;");
    asm("loc_6DADB19: push %esi;");
    asm("loc_6DADB1A: push %edx;");
    asm("loc_6DADB1B: inc %eax;");
    asm("loc_6DADB1C: push %ebx;");
    asm("loc_6DADB1D: mov %edi,%ecx;");
    asm("loc_6DADB1F: mov %eax,(%ebx);");
    asm("loc_6DADB21: call _sub_6DA13C0;");
    asm("loc_6DADB26: test %eax,%eax;");
    asm("loc_6DADB28: mov %eax,0x1C(%edi);");
    asm("loc_6DADB2B: je loc_6DADB36;");
    asm("loc_6DADB2D: pop %edi;");
    asm("loc_6DADB2E: pop %esi;");
    asm("loc_6DADB2F: mov %ebp,%eax;");
    asm("loc_6DADB31: pop %ebp;");
    asm("loc_6DADB32: pop %ebx;");
    asm("loc_6DADB33: ret $0xC;");
    asm("loc_6DADB36: mov (%esi),%eax;");
    asm("loc_6DADB38: mov 0x1C(%esp),%ecx;");
    asm("loc_6DADB3C: mov %eax,(%ecx);");
    asm("loc_6DADB3E: mov 0xC(%edi),%edx;");
    asm("loc_6DADB41: push %edx;");
    asm("loc_6DADB42: call _sub_6DA16B0;");
    asm("loc_6DADB47: mov %eax,%ecx;");
    asm("loc_6DADB49: mov (%ecx),%edi;");
    asm("loc_6DADB4B: mov 0x18(%ecx),%edx;");
    asm("loc_6DADB4E: add $4,%esp;");
    asm("loc_6DADB51: inc %edi;");
    asm("loc_6DADB52: mov %edi,(%ecx);");
    asm("loc_6DADB54: mov (%esi),%eax;");
    asm("loc_6DADB56: add %eax,%edx;");
    asm("loc_6DADB58: mov 0x10(%ecx),%eax;");
    asm("loc_6DADB5B: mov %edx,0x18(%ecx);");
    asm("loc_6DADB5E: mov (%esi),%esi;");
    asm("loc_6DADB60: cmp %eax,%esi;");
    asm("loc_6DADB62: jbe loc_6DADB67;");
    asm("loc_6DADB64: mov %esi,0x10(%ecx);");
    asm("loc_6DADB67: mov 0x18(%ecx),%eax;");
    asm("loc_6DADB6A: xor %edx,%edx;");
    asm("loc_6DADB6C: div %edi;");
    asm("loc_6DADB6E: pop %edi;");
    asm("loc_6DADB6F: pop %esi;");
    asm("loc_6DADB70: pop %ebp;");
    asm("loc_6DADB71: pop %ebx;");
    asm("loc_6DADB72: mov %eax,8(%ecx);");
    asm("loc_6DADB75: xor %eax,%eax;");
    asm("loc_6DADB77: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DADB80() // _sub_6DADB80
{
    __DEBUG_ASM(6DADB80);
    // chunk 0x6DADB80 _sub_6DADB80
    asm("loc_6DADB80: mov 4(%esp),%eax;");
    asm("loc_6DADB84: push %ebx;");
    asm("loc_6DADB85: push %ebp;");
    asm("loc_6DADB86: mov 0x10(%esp),%ebp;");
    asm("loc_6DADB8A: push %esi;");
    asm("loc_6DADB8B: push %edi;");
    asm("loc_6DADB8C: mov %ecx,%edi;");
    asm("loc_6DADB8E: lea 0x10(%edi),%esi;");
    asm("loc_6DADB91: push %esi;");
    asm("loc_6DADB92: push %ebp;");
    asm("loc_6DADB93: lea 0x18(%edi),%ebx;");
    asm("loc_6DADB96: push %ebx;");
    asm("loc_6DADB97: mov %ebp,4(%esi);");
    asm("loc_6DADB9A: mov %eax,8(%esi);");
    asm("loc_6DADB9D: movl $0,(%esi);");
    asm("loc_6DADBA3: movl $0,0xC(%esi);");
    asm("loc_6DADBAA: call _sub_6DA13C0;");
    asm("loc_6DADBAF: test %eax,%eax;");
    asm("loc_6DADBB1: mov %eax,0x1C(%edi);");
    asm("loc_6DADBB4: je loc_6DADBC2;");
    asm("loc_6DADBB6: pop %edi;");
    asm("loc_6DADBB7: pop %esi;");
    asm("loc_6DADBB8: pop %ebp;");
    asm("loc_6DADBB9: mov $0x17,%eax;");
    asm("loc_6DADBBE: pop %ebx;");
    asm("loc_6DADBBF: ret $0xC;");
    asm("loc_6DADBC2: mov (%esi),%edx;");
    asm("loc_6DADBC4: mov 4(%esi),%ecx;");
    asm("loc_6DADBC7: add $4,%edx;");
    asm("loc_6DADBCA: mov %edx,%eax;");
    asm("loc_6DADBCC: cmp %ecx,%eax;");
    asm("loc_6DADBCE: mov %edx,(%esi);");
    asm("loc_6DADBD0: mov $0x17,%ecx;");
    asm("loc_6DADBD5: jbe loc_6DADBDA;");
    asm("loc_6DADBD7: mov %ecx,0xC(%esi);");
    asm("loc_6DADBDA: mov 0x1C(%edi),%eax;");
    asm("loc_6DADBDD: test %eax,%eax;");
    asm("loc_6DADBDF: jne loc_6DADD1C;");
    asm("loc_6DADBE5: mov (%ebx),%eax;");
    asm("loc_6DADBE7: mov (%eax),%edx;");
    asm("loc_6DADBE9: add $4,%eax;");
    asm("loc_6DADBEC: mov %eax,(%ebx);");
    asm("loc_6DADBEE: mov %edx,0x20(%edi);");
    asm("loc_6DADBF1: mov (%esi),%eax;");
    asm("loc_6DADBF3: mov 4(%esi),%edx;");
    asm("loc_6DADBF6: add $4,%eax;");
    asm("loc_6DADBF9: cmp %edx,%eax;");
    asm("loc_6DADBFB: mov %eax,(%esi);");
    asm("loc_6DADBFD: jbe loc_6DADC02;");
    asm("loc_6DADBFF: mov %ecx,0xC(%esi);");
    asm("loc_6DADC02: mov 0x1C(%edi),%eax;");
    asm("loc_6DADC05: test %eax,%eax;");
    asm("loc_6DADC07: jne loc_6DADD1C;");
    asm("loc_6DADC0D: mov (%ebx),%eax;");
    asm("loc_6DADC0F: mov (%eax),%edx;");
    asm("loc_6DADC11: add $4,%eax;");
    asm("loc_6DADC14: mov %eax,(%ebx);");
    asm("loc_6DADC16: mov %edx,0x24(%edi);");
    asm("loc_6DADC19: mov (%esi),%eax;");
    asm("loc_6DADC1B: mov 4(%esi),%edx;");
    asm("loc_6DADC1E: add $2,%eax;");
    asm("loc_6DADC21: cmp %edx,%eax;");
    asm("loc_6DADC23: mov %eax,(%esi);");
    asm("loc_6DADC25: jbe loc_6DADC2A;");
    asm("loc_6DADC27: mov %ecx,0xC(%esi);");
    asm("loc_6DADC2A: mov 0x1C(%edi),%eax;");
    asm("loc_6DADC2D: test %eax,%eax;");
    asm("loc_6DADC2F: jne loc_6DADD1C;");
    asm("loc_6DADC35: mov (%ebx),%eax;");
    asm("loc_6DADC37: mov (%eax),%dx;");
    asm("loc_6DADC3A: add $2,%eax;");
    asm("loc_6DADC3D: mov %eax,(%ebx);");
    asm("loc_6DADC3F: mov %dx,0x28(%edi);");
    asm("loc_6DADC43: mov (%esi),%eax;");
    asm("loc_6DADC45: mov 4(%esi),%edx;");
    asm("loc_6DADC48: add $2,%eax;");
    asm("loc_6DADC4B: cmp %edx,%eax;");
    asm("loc_6DADC4D: mov %eax,(%esi);");
    asm("loc_6DADC4F: jbe loc_6DADC54;");
    asm("loc_6DADC51: mov %ecx,0xC(%esi);");
    asm("loc_6DADC54: mov 0x1C(%edi),%eax;");
    asm("loc_6DADC57: test %eax,%eax;");
    asm("loc_6DADC59: jne loc_6DADD1C;");
    asm("loc_6DADC5F: mov (%ebx),%eax;");
    asm("loc_6DADC61: mov (%eax),%dx;");
    asm("loc_6DADC64: add $2,%eax;");
    asm("loc_6DADC67: mov %eax,(%ebx);");
    asm("loc_6DADC69: mov %dx,0x2A(%edi);");
    asm("loc_6DADC6D: mov (%esi),%eax;");
    asm("loc_6DADC6F: mov 4(%esi),%edx;");
    asm("loc_6DADC72: add $4,%eax;");
    asm("loc_6DADC75: cmp %edx,%eax;");
    asm("loc_6DADC77: mov %eax,(%esi);");
    asm("loc_6DADC79: jbe loc_6DADC7E;");
    asm("loc_6DADC7B: mov %ecx,0xC(%esi);");
    asm("loc_6DADC7E: mov 0x1C(%edi),%eax;");
    asm("loc_6DADC81: test %eax,%eax;");
    asm("loc_6DADC83: jne loc_6DADD1C;");
    asm("loc_6DADC89: mov (%ebx),%eax;");
    asm("loc_6DADC8B: mov (%eax),%edx;");
    asm("loc_6DADC8D: add $4,%eax;");
    asm("loc_6DADC90: mov %eax,(%ebx);");
    asm("loc_6DADC92: mov %edx,0x2C(%edi);");
    asm("loc_6DADC95: mov (%esi),%eax;");
    asm("loc_6DADC97: mov 4(%esi),%edx;");
    asm("loc_6DADC9A: inc %eax;");
    asm("loc_6DADC9B: cmp %edx,%eax;");
    asm("loc_6DADC9D: mov %eax,(%esi);");
    asm("loc_6DADC9F: jbe loc_6DADCA4;");
    asm("loc_6DADCA1: mov %ecx,0xC(%esi);");
    asm("loc_6DADCA4: mov 0x1C(%edi),%eax;");
    asm("loc_6DADCA7: test %eax,%eax;");
    asm("loc_6DADCA9: jne loc_6DADD1C;");
    asm("loc_6DADCAB: mov (%ebx),%eax;");
    asm("loc_6DADCAD: mov (%eax),%cl;");
    asm("loc_6DADCAF: push %esi;");
    asm("loc_6DADCB0: push %ebp;");
    asm("loc_6DADCB1: mov %cl,0x30(%edi);");
    asm("loc_6DADCB4: inc %eax;");
    asm("loc_6DADCB5: push %ebx;");
    asm("loc_6DADCB6: mov %edi,%ecx;");
    asm("loc_6DADCB8: mov %eax,(%ebx);");
    asm("loc_6DADCBA: call _sub_6DA13C0;");
    asm("loc_6DADCBF: test %eax,%eax;");
    asm("loc_6DADCC1: mov %eax,0x1C(%edi);");
    asm("loc_6DADCC4: je loc_6DADCD2;");
    asm("loc_6DADCC6: pop %edi;");
    asm("loc_6DADCC7: pop %esi;");
    asm("loc_6DADCC8: pop %ebp;");
    asm("loc_6DADCC9: mov $0x17,%eax;");
    asm("loc_6DADCCE: pop %ebx;");
    asm("loc_6DADCCF: ret $0xC;");
    asm("loc_6DADCD2: mov (%esi),%edx;");
    asm("loc_6DADCD4: mov 0x1C(%esp),%eax;");
    asm("loc_6DADCD8: mov %edx,(%eax);");
    asm("loc_6DADCDA: mov 0xC(%edi),%ecx;");
    asm("loc_6DADCDD: push %ecx;");
    asm("loc_6DADCDE: call _sub_6DA16B0;");
    asm("loc_6DADCE3: mov %eax,%ecx;");
    asm("loc_6DADCE5: mov 4(%ecx),%edx;");
    asm("loc_6DADCE8: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DADCEB: mov 0x14(%ecx),%eax;");
    asm("loc_6DADCEE: add $4,%esp;");
    asm("loc_6DADCF1: inc %edx;");
    asm("loc_6DADCF2: mov %edx,4(%ecx);");
    asm("loc_6DADCF5: mov %edx,%edi;");
    asm("loc_6DADCF7: mov (%esi),%edx;");
    asm("loc_6DADCF9: add $2,%edx;");
    asm("loc_6DADCFC: add %edx,%ebp;");
    asm("loc_6DADCFE: mov %ebp,0x1C(%ecx);");
    asm("loc_6DADD01: mov (%esi),%esi;");
    asm("loc_6DADD03: add $2,%eax;");
    asm("loc_6DADD06: cmp %eax,%esi;");
    asm("loc_6DADD08: jbe loc_6DADD10;");
    asm("loc_6DADD0A: add $2,%esi;");
    asm("loc_6DADD0D: mov %esi,0x14(%ecx);");
    asm("loc_6DADD10: mov 0x1C(%ecx),%eax;");
    asm("loc_6DADD13: xor %edx,%edx;");
    asm("loc_6DADD15: div %edi;");
    asm("loc_6DADD17: mov %eax,0xC(%ecx);");
    asm("loc_6DADD1A: xor %eax,%eax;");
    asm("loc_6DADD1C: pop %edi;");
    asm("loc_6DADD1D: pop %esi;");
    asm("loc_6DADD1E: pop %ebp;");
    asm("loc_6DADD1F: pop %ebx;");
    asm("loc_6DADD20: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DADD30() // _sub_6DADD30
{
    __DEBUG_ASM(6DADD30);
    // chunk 0x6DADD30 _sub_6DADD30
    asm("loc_6DADD30: mov _data_6DB65A4,%eax;");
    asm("loc_6DADD35: mov %eax,_data_6DBC3B0;");
    asm("loc_6DADD3A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DADD40() // _sub_6DADD40
{
    __DEBUG_ASM(6DADD40);
    // chunk 0x6DADD40 _sub_6DADD40
    asm("loc_6DADD40: mov _data_6DB65A4,%eax;");
    asm("loc_6DADD45: mov %eax,_data_6DBC3B4;");
    asm("loc_6DADD4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DADD50() // _sub_6DADD50
{
    __DEBUG_ASM(6DADD50);
    // chunk 0x6DADD50 _sub_6DADD50
    asm("loc_6DADD50: mov _data_6DB65A8,%eax;");
    asm("loc_6DADD55: mov %eax,_data_6DBC3AC;");
    asm("loc_6DADD5A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DADD60() // _sub_6DADD60
{
    __DEBUG_ASM(6DADD60);
    // chunk 0x6DADD60 _sub_6DADD60
    asm("loc_6DADD60: mov 8(%esp),%eax;");
    asm("loc_6DADD64: push %ebx;");
    asm("loc_6DADD65: push %ebp;");
    asm("loc_6DADD66: push %esi;");
    asm("loc_6DADD67: push %edi;");
    asm("loc_6DADD68: mov %ecx,%edi;");
    asm("loc_6DADD6A: mov 0x14(%esp),%ecx;");
    asm("loc_6DADD6E: lea 0x10(%edi),%esi;");
    asm("loc_6DADD71: mov %eax,4(%esi);");
    asm("loc_6DADD74: mov (%ecx),%edx;");
    asm("loc_6DADD76: mov %edx,8(%esi);");
    asm("loc_6DADD79: movl $0,(%esi);");
    asm("loc_6DADD7F: movl $0,0xC(%esi);");
    asm("loc_6DADD86: mov 0x14(%edi),%eax;");
    asm("loc_6DADD89: push %esi;");
    asm("loc_6DADD8A: push %eax;");
    asm("loc_6DADD8B: lea 0x18(%edi),%ebx;");
    asm("loc_6DADD8E: push %ebx;");
    asm("loc_6DADD8F: mov %edi,%ecx;");
    asm("loc_6DADD91: call _sub_6DA1380;");
    asm("loc_6DADD96: test %eax,%eax;");
    asm("loc_6DADD98: mov %eax,0x1C(%edi);");
    asm("loc_6DADD9B: je loc_6DADDA9;");
    asm("loc_6DADD9D: pop %edi;");
    asm("loc_6DADD9E: pop %esi;");
    asm("loc_6DADD9F: pop %ebp;");
    asm("loc_6DADDA0: mov $0x16,%eax;");
    asm("loc_6DADDA5: pop %ebx;");
    asm("loc_6DADDA6: ret $0xC;");
    asm("loc_6DADDA9: mov (%esi),%edx;");
    asm("loc_6DADDAB: mov 4(%esi),%ecx;");
    asm("loc_6DADDAE: add $4,%edx;");
    asm("loc_6DADDB1: mov %edx,%eax;");
    asm("loc_6DADDB3: cmp %ecx,%eax;");
    asm("loc_6DADDB5: mov %edx,(%esi);");
    asm("loc_6DADDB7: mov $0x16,%ebp;");
    asm("loc_6DADDBC: jbe loc_6DADDC1;");
    asm("loc_6DADDBE: mov %ebp,0xC(%esi);");
    asm("loc_6DADDC1: mov 0x1C(%edi),%eax;");
    asm("loc_6DADDC4: test %eax,%eax;");
    asm("loc_6DADDC6: je loc_6DADDD1;");
    asm("loc_6DADDC8: pop %edi;");
    asm("loc_6DADDC9: pop %esi;");
    asm("loc_6DADDCA: mov %ebp,%eax;");
    asm("loc_6DADDCC: pop %ebp;");
    asm("loc_6DADDCD: pop %ebx;");
    asm("loc_6DADDCE: ret $0xC;");
    asm("loc_6DADDD1: mov (%ebx),%eax;");
    asm("loc_6DADDD3: mov 0x20(%edi),%ecx;");
    asm("loc_6DADDD6: mov %ecx,(%eax);");
    asm("loc_6DADDD8: add $4,%eax;");
    asm("loc_6DADDDB: mov %eax,(%ebx);");
    asm("loc_6DADDDD: mov (%esi),%edx;");
    asm("loc_6DADDDF: mov 4(%esi),%ecx;");
    asm("loc_6DADDE2: add $4,%edx;");
    asm("loc_6DADDE5: mov %edx,%eax;");
    asm("loc_6DADDE7: cmp %ecx,%eax;");
    asm("loc_6DADDE9: mov %edx,(%esi);");
    asm("loc_6DADDEB: jbe loc_6DADDF0;");
    asm("loc_6DADDED: mov %ebp,0xC(%esi);");
    asm("loc_6DADDF0: mov 0x1C(%edi),%eax;");
    asm("loc_6DADDF3: test %eax,%eax;");
    asm("loc_6DADDF5: je loc_6DADE00;");
    asm("loc_6DADDF7: pop %edi;");
    asm("loc_6DADDF8: pop %esi;");
    asm("loc_6DADDF9: mov %ebp,%eax;");
    asm("loc_6DADDFB: pop %ebp;");
    asm("loc_6DADDFC: pop %ebx;");
    asm("loc_6DADDFD: ret $0xC;");
    asm("loc_6DADE00: mov (%ebx),%eax;");
    asm("loc_6DADE02: mov 0x24(%edi),%edx;");
    asm("loc_6DADE05: mov %edx,(%eax);");
    asm("loc_6DADE07: add $4,%eax;");
    asm("loc_6DADE0A: mov %eax,(%ebx);");
    asm("loc_6DADE0C: mov (%esi),%edx;");
    asm("loc_6DADE0E: mov 4(%esi),%ecx;");
    asm("loc_6DADE11: add $4,%edx;");
    asm("loc_6DADE14: mov %edx,%eax;");
    asm("loc_6DADE16: cmp %ecx,%eax;");
    asm("loc_6DADE18: mov %edx,(%esi);");
    asm("loc_6DADE1A: jbe loc_6DADE1F;");
    asm("loc_6DADE1C: mov %ebp,0xC(%esi);");
    asm("loc_6DADE1F: mov 0x1C(%edi),%eax;");
    asm("loc_6DADE22: test %eax,%eax;");
    asm("loc_6DADE24: je loc_6DADE2F;");
    asm("loc_6DADE26: pop %edi;");
    asm("loc_6DADE27: pop %esi;");
    asm("loc_6DADE28: mov %ebp,%eax;");
    asm("loc_6DADE2A: pop %ebp;");
    asm("loc_6DADE2B: pop %ebx;");
    asm("loc_6DADE2C: ret $0xC;");
    asm("loc_6DADE2F: mov (%ebx),%eax;");
    asm("loc_6DADE31: mov 0x28(%edi),%ecx;");
    asm("loc_6DADE34: mov %ecx,(%eax);");
    asm("loc_6DADE36: add $4,%eax;");
    asm("loc_6DADE39: mov %eax,(%ebx);");
    asm("loc_6DADE3B: mov (%esi),%edx;");
    asm("loc_6DADE3D: mov 4(%esi),%ecx;");
    asm("loc_6DADE40: add $4,%edx;");
    asm("loc_6DADE43: mov %edx,%eax;");
    asm("loc_6DADE45: cmp %ecx,%eax;");
    asm("loc_6DADE47: mov %edx,(%esi);");
    asm("loc_6DADE49: jbe loc_6DADE4E;");
    asm("loc_6DADE4B: mov %ebp,0xC(%esi);");
    asm("loc_6DADE4E: mov 0x1C(%edi),%eax;");
    asm("loc_6DADE51: test %eax,%eax;");
    asm("loc_6DADE53: je loc_6DADE5E;");
    asm("loc_6DADE55: pop %edi;");
    asm("loc_6DADE56: pop %esi;");
    asm("loc_6DADE57: mov %ebp,%eax;");
    asm("loc_6DADE59: pop %ebp;");
    asm("loc_6DADE5A: pop %ebx;");
    asm("loc_6DADE5B: ret $0xC;");
    asm("loc_6DADE5E: mov (%ebx),%eax;");
    asm("loc_6DADE60: mov 0x2C(%edi),%edx;");
    asm("loc_6DADE63: mov %edx,(%eax);");
    asm("loc_6DADE65: add $4,%eax;");
    asm("loc_6DADE68: mov %eax,(%ebx);");
    asm("loc_6DADE6A: mov (%esi),%edx;");
    asm("loc_6DADE6C: mov 4(%esi),%ecx;");
    asm("loc_6DADE6F: inc %edx;");
    asm("loc_6DADE70: mov %edx,%eax;");
    asm("loc_6DADE72: cmp %ecx,%eax;");
    asm("loc_6DADE74: mov %edx,(%esi);");
    asm("loc_6DADE76: jbe loc_6DADE7B;");
    asm("loc_6DADE78: mov %ebp,0xC(%esi);");
    asm("loc_6DADE7B: mov 0x1C(%edi),%eax;");
    asm("loc_6DADE7E: test %eax,%eax;");
    asm("loc_6DADE80: je loc_6DADE8B;");
    asm("loc_6DADE82: pop %edi;");
    asm("loc_6DADE83: pop %esi;");
    asm("loc_6DADE84: mov %ebp,%eax;");
    asm("loc_6DADE86: pop %ebp;");
    asm("loc_6DADE87: pop %ebx;");
    asm("loc_6DADE88: ret $0xC;");
    asm("loc_6DADE8B: mov (%ebx),%eax;");
    asm("loc_6DADE8D: mov 0x30(%edi),%cl;");
    asm("loc_6DADE90: mov %cl,(%eax);");
    asm("loc_6DADE92: inc %eax;");
    asm("loc_6DADE93: mov %eax,(%ebx);");
    asm("loc_6DADE95: mov (%esi),%edx;");
    asm("loc_6DADE97: mov 4(%esi),%ecx;");
    asm("loc_6DADE9A: add $4,%edx;");
    asm("loc_6DADE9D: mov %edx,%eax;");
    asm("loc_6DADE9F: cmp %ecx,%eax;");
    asm("loc_6DADEA1: mov %edx,(%esi);");
    asm("loc_6DADEA3: jbe loc_6DADEA8;");
    asm("loc_6DADEA5: mov %ebp,0xC(%esi);");
    asm("loc_6DADEA8: mov 0x1C(%edi),%eax;");
    asm("loc_6DADEAB: test %eax,%eax;");
    asm("loc_6DADEAD: je loc_6DADEB8;");
    asm("loc_6DADEAF: pop %edi;");
    asm("loc_6DADEB0: pop %esi;");
    asm("loc_6DADEB1: mov %ebp,%eax;");
    asm("loc_6DADEB3: pop %ebp;");
    asm("loc_6DADEB4: pop %ebx;");
    asm("loc_6DADEB5: ret $0xC;");
    asm("loc_6DADEB8: mov (%ebx),%eax;");
    asm("loc_6DADEBA: flds 0x34(%edi);");
    asm("loc_6DADEBD: fstps (%eax);");
    asm("loc_6DADEBF: mov 0x14(%edi),%edx;");
    asm("loc_6DADEC2: push %esi;");
    asm("loc_6DADEC3: push %edx;");
    asm("loc_6DADEC4: add $4,%eax;");
    asm("loc_6DADEC7: push %ebx;");
    asm("loc_6DADEC8: mov %edi,%ecx;");
    asm("loc_6DADECA: mov %eax,(%ebx);");
    asm("loc_6DADECC: call _sub_6DA13C0;");
    asm("loc_6DADED1: test %eax,%eax;");
    asm("loc_6DADED3: mov %eax,0x1C(%edi);");
    asm("loc_6DADED6: je loc_6DADEE1;");
    asm("loc_6DADED8: pop %edi;");
    asm("loc_6DADED9: pop %esi;");
    asm("loc_6DADEDA: mov %ebp,%eax;");
    asm("loc_6DADEDC: pop %ebp;");
    asm("loc_6DADEDD: pop %ebx;");
    asm("loc_6DADEDE: ret $0xC;");
    asm("loc_6DADEE1: mov (%esi),%eax;");
    asm("loc_6DADEE3: mov 0x1C(%esp),%ecx;");
    asm("loc_6DADEE7: mov %eax,(%ecx);");
    asm("loc_6DADEE9: mov 0xC(%edi),%edx;");
    asm("loc_6DADEEC: push %edx;");
    asm("loc_6DADEED: call _sub_6DA16B0;");
    asm("loc_6DADEF2: mov %eax,%ecx;");
    asm("loc_6DADEF4: mov (%ecx),%edi;");
    asm("loc_6DADEF6: mov 0x18(%ecx),%edx;");
    asm("loc_6DADEF9: add $4,%esp;");
    asm("loc_6DADEFC: inc %edi;");
    asm("loc_6DADEFD: mov %edi,(%ecx);");
    asm("loc_6DADEFF: mov (%esi),%eax;");
    asm("loc_6DADF01: add %eax,%edx;");
    asm("loc_6DADF03: mov 0x10(%ecx),%eax;");
    asm("loc_6DADF06: mov %edx,0x18(%ecx);");
    asm("loc_6DADF09: mov (%esi),%esi;");
    asm("loc_6DADF0B: cmp %eax,%esi;");
    asm("loc_6DADF0D: jbe loc_6DADF12;");
    asm("loc_6DADF0F: mov %esi,0x10(%ecx);");
    asm("loc_6DADF12: mov 0x18(%ecx),%eax;");
    asm("loc_6DADF15: xor %edx,%edx;");
    asm("loc_6DADF17: div %edi;");
    asm("loc_6DADF19: pop %edi;");
    asm("loc_6DADF1A: pop %esi;");
    asm("loc_6DADF1B: pop %ebp;");
    asm("loc_6DADF1C: pop %ebx;");
    asm("loc_6DADF1D: mov %eax,8(%ecx);");
    asm("loc_6DADF20: xor %eax,%eax;");
    asm("loc_6DADF22: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DADF30() // _sub_6DADF30
{
    __DEBUG_ASM(6DADF30);
    // chunk 0x6DADF30 _sub_6DADF30
    asm("loc_6DADF30: mov 4(%esp),%eax;");
    asm("loc_6DADF34: push %ebx;");
    asm("loc_6DADF35: push %ebp;");
    asm("loc_6DADF36: mov 0x10(%esp),%ebp;");
    asm("loc_6DADF3A: push %esi;");
    asm("loc_6DADF3B: push %edi;");
    asm("loc_6DADF3C: mov %ecx,%edi;");
    asm("loc_6DADF3E: lea 0x10(%edi),%esi;");
    asm("loc_6DADF41: push %esi;");
    asm("loc_6DADF42: push %ebp;");
    asm("loc_6DADF43: lea 0x18(%edi),%ebx;");
    asm("loc_6DADF46: push %ebx;");
    asm("loc_6DADF47: mov %ebp,4(%esi);");
    asm("loc_6DADF4A: mov %eax,8(%esi);");
    asm("loc_6DADF4D: movl $0,(%esi);");
    asm("loc_6DADF53: movl $0,0xC(%esi);");
    asm("loc_6DADF5A: call _sub_6DA13C0;");
    asm("loc_6DADF5F: test %eax,%eax;");
    asm("loc_6DADF61: mov %eax,0x1C(%edi);");
    asm("loc_6DADF64: je loc_6DADF72;");
    asm("loc_6DADF66: pop %edi;");
    asm("loc_6DADF67: pop %esi;");
    asm("loc_6DADF68: pop %ebp;");
    asm("loc_6DADF69: mov $0x17,%eax;");
    asm("loc_6DADF6E: pop %ebx;");
    asm("loc_6DADF6F: ret $0xC;");
    asm("loc_6DADF72: mov (%esi),%edx;");
    asm("loc_6DADF74: mov 4(%esi),%ecx;");
    asm("loc_6DADF77: add $4,%edx;");
    asm("loc_6DADF7A: mov %edx,%eax;");
    asm("loc_6DADF7C: cmp %ecx,%eax;");
    asm("loc_6DADF7E: mov %edx,(%esi);");
    asm("loc_6DADF80: mov $0x17,%ecx;");
    asm("loc_6DADF85: jbe loc_6DADF8A;");
    asm("loc_6DADF87: mov %ecx,0xC(%esi);");
    asm("loc_6DADF8A: mov 0x1C(%edi),%eax;");
    asm("loc_6DADF8D: test %eax,%eax;");
    asm("loc_6DADF8F: jne loc_6DAE0C8;");
    asm("loc_6DADF95: mov (%ebx),%eax;");
    asm("loc_6DADF97: mov (%eax),%edx;");
    asm("loc_6DADF99: add $4,%eax;");
    asm("loc_6DADF9C: mov %eax,(%ebx);");
    asm("loc_6DADF9E: mov %edx,0x20(%edi);");
    asm("loc_6DADFA1: mov (%esi),%eax;");
    asm("loc_6DADFA3: mov 4(%esi),%edx;");
    asm("loc_6DADFA6: add $4,%eax;");
    asm("loc_6DADFA9: cmp %edx,%eax;");
    asm("loc_6DADFAB: mov %eax,(%esi);");
    asm("loc_6DADFAD: jbe loc_6DADFB2;");
    asm("loc_6DADFAF: mov %ecx,0xC(%esi);");
    asm("loc_6DADFB2: mov 0x1C(%edi),%eax;");
    asm("loc_6DADFB5: test %eax,%eax;");
    asm("loc_6DADFB7: jne loc_6DAE0C8;");
    asm("loc_6DADFBD: mov (%ebx),%eax;");
    asm("loc_6DADFBF: mov (%eax),%edx;");
    asm("loc_6DADFC1: add $4,%eax;");
    asm("loc_6DADFC4: mov %eax,(%ebx);");
    asm("loc_6DADFC6: mov %edx,0x24(%edi);");
    asm("loc_6DADFC9: mov (%esi),%eax;");
    asm("loc_6DADFCB: mov 4(%esi),%edx;");
    asm("loc_6DADFCE: add $4,%eax;");
    asm("loc_6DADFD1: cmp %edx,%eax;");
    asm("loc_6DADFD3: mov %eax,(%esi);");
    asm("loc_6DADFD5: jbe loc_6DADFDA;");
    asm("loc_6DADFD7: mov %ecx,0xC(%esi);");
    asm("loc_6DADFDA: mov 0x1C(%edi),%eax;");
    asm("loc_6DADFDD: test %eax,%eax;");
    asm("loc_6DADFDF: jne loc_6DAE0C8;");
    asm("loc_6DADFE5: mov (%ebx),%eax;");
    asm("loc_6DADFE7: mov (%eax),%edx;");
    asm("loc_6DADFE9: add $4,%eax;");
    asm("loc_6DADFEC: mov %eax,(%ebx);");
    asm("loc_6DADFEE: mov %edx,0x28(%edi);");
    asm("loc_6DADFF1: mov (%esi),%eax;");
    asm("loc_6DADFF3: mov 4(%esi),%edx;");
    asm("loc_6DADFF6: add $4,%eax;");
    asm("loc_6DADFF9: cmp %edx,%eax;");
    asm("loc_6DADFFB: mov %eax,(%esi);");
    asm("loc_6DADFFD: jbe loc_6DAE002;");
    asm("loc_6DADFFF: mov %ecx,0xC(%esi);");
    asm("loc_6DAE002: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE005: test %eax,%eax;");
    asm("loc_6DAE007: jne loc_6DAE0C8;");
    asm("loc_6DAE00D: mov (%ebx),%eax;");
    asm("loc_6DAE00F: mov (%eax),%edx;");
    asm("loc_6DAE011: add $4,%eax;");
    asm("loc_6DAE014: mov %eax,(%ebx);");
    asm("loc_6DAE016: mov %edx,0x2C(%edi);");
    asm("loc_6DAE019: mov (%esi),%eax;");
    asm("loc_6DAE01B: mov 4(%esi),%edx;");
    asm("loc_6DAE01E: inc %eax;");
    asm("loc_6DAE01F: cmp %edx,%eax;");
    asm("loc_6DAE021: mov %eax,(%esi);");
    asm("loc_6DAE023: jbe loc_6DAE028;");
    asm("loc_6DAE025: mov %ecx,0xC(%esi);");
    asm("loc_6DAE028: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE02B: test %eax,%eax;");
    asm("loc_6DAE02D: jne loc_6DAE0C8;");
    asm("loc_6DAE033: mov (%ebx),%eax;");
    asm("loc_6DAE035: mov (%eax),%dl;");
    asm("loc_6DAE037: inc %eax;");
    asm("loc_6DAE038: mov %eax,(%ebx);");
    asm("loc_6DAE03A: mov %dl,0x30(%edi);");
    asm("loc_6DAE03D: mov (%esi),%eax;");
    asm("loc_6DAE03F: mov 4(%esi),%edx;");
    asm("loc_6DAE042: add $4,%eax;");
    asm("loc_6DAE045: cmp %edx,%eax;");
    asm("loc_6DAE047: mov %eax,(%esi);");
    asm("loc_6DAE049: jbe loc_6DAE04E;");
    asm("loc_6DAE04B: mov %ecx,0xC(%esi);");
    asm("loc_6DAE04E: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE051: test %eax,%eax;");
    asm("loc_6DAE053: jne loc_6DAE0C8;");
    asm("loc_6DAE055: mov (%ebx),%eax;");
    asm("loc_6DAE057: mov (%eax),%ecx;");
    asm("loc_6DAE059: push %esi;");
    asm("loc_6DAE05A: push %ebp;");
    asm("loc_6DAE05B: mov %ecx,0x34(%edi);");
    asm("loc_6DAE05E: add $4,%eax;");
    asm("loc_6DAE061: push %ebx;");
    asm("loc_6DAE062: mov %edi,%ecx;");
    asm("loc_6DAE064: mov %eax,(%ebx);");
    asm("loc_6DAE066: call _sub_6DA13C0;");
    asm("loc_6DAE06B: test %eax,%eax;");
    asm("loc_6DAE06D: mov %eax,0x1C(%edi);");
    asm("loc_6DAE070: je loc_6DAE07E;");
    asm("loc_6DAE072: pop %edi;");
    asm("loc_6DAE073: pop %esi;");
    asm("loc_6DAE074: pop %ebp;");
    asm("loc_6DAE075: mov $0x17,%eax;");
    asm("loc_6DAE07A: pop %ebx;");
    asm("loc_6DAE07B: ret $0xC;");
    asm("loc_6DAE07E: mov (%esi),%edx;");
    asm("loc_6DAE080: mov 0x1C(%esp),%eax;");
    asm("loc_6DAE084: mov %edx,(%eax);");
    asm("loc_6DAE086: mov 0xC(%edi),%ecx;");
    asm("loc_6DAE089: push %ecx;");
    asm("loc_6DAE08A: call _sub_6DA16B0;");
    asm("loc_6DAE08F: mov %eax,%ecx;");
    asm("loc_6DAE091: mov 4(%ecx),%edx;");
    asm("loc_6DAE094: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAE097: mov 0x14(%ecx),%eax;");
    asm("loc_6DAE09A: add $4,%esp;");
    asm("loc_6DAE09D: inc %edx;");
    asm("loc_6DAE09E: mov %edx,4(%ecx);");
    asm("loc_6DAE0A1: mov %edx,%edi;");
    asm("loc_6DAE0A3: mov (%esi),%edx;");
    asm("loc_6DAE0A5: add $2,%edx;");
    asm("loc_6DAE0A8: add %edx,%ebp;");
    asm("loc_6DAE0AA: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAE0AD: mov (%esi),%esi;");
    asm("loc_6DAE0AF: add $2,%eax;");
    asm("loc_6DAE0B2: cmp %eax,%esi;");
    asm("loc_6DAE0B4: jbe loc_6DAE0BC;");
    asm("loc_6DAE0B6: add $2,%esi;");
    asm("loc_6DAE0B9: mov %esi,0x14(%ecx);");
    asm("loc_6DAE0BC: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAE0BF: xor %edx,%edx;");
    asm("loc_6DAE0C1: div %edi;");
    asm("loc_6DAE0C3: mov %eax,0xC(%ecx);");
    asm("loc_6DAE0C6: xor %eax,%eax;");
    asm("loc_6DAE0C8: pop %edi;");
    asm("loc_6DAE0C9: pop %esi;");
    asm("loc_6DAE0CA: pop %ebp;");
    asm("loc_6DAE0CB: pop %ebx;");
    asm("loc_6DAE0CC: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE0D0() // _sub_6DAE0D0
{
    __DEBUG_ASM(6DAE0D0);
    // chunk 0x6DAE0D0 _sub_6DAE0D0
    asm("loc_6DAE0D0: mov 8(%esp),%eax;");
    asm("loc_6DAE0D4: push %ebx;");
    asm("loc_6DAE0D5: push %esi;");
    asm("loc_6DAE0D6: mov %ecx,%esi;");
    asm("loc_6DAE0D8: mov 0xC(%esp),%ecx;");
    asm("loc_6DAE0DC: push %edi;");
    asm("loc_6DAE0DD: lea 0x10(%esi),%edi;");
    asm("loc_6DAE0E0: mov %eax,4(%edi);");
    asm("loc_6DAE0E3: mov (%ecx),%edx;");
    asm("loc_6DAE0E5: mov %edx,8(%edi);");
    asm("loc_6DAE0E8: movl $0,(%edi);");
    asm("loc_6DAE0EE: movl $0,0xC(%edi);");
    asm("loc_6DAE0F5: mov 0x14(%esi),%eax;");
    asm("loc_6DAE0F8: push %edi;");
    asm("loc_6DAE0F9: push %eax;");
    asm("loc_6DAE0FA: lea 0x18(%esi),%ebx;");
    asm("loc_6DAE0FD: push %ebx;");
    asm("loc_6DAE0FE: mov %esi,%ecx;");
    asm("loc_6DAE100: call _sub_6DA1380;");
    asm("loc_6DAE105: test %eax,%eax;");
    asm("loc_6DAE107: mov %eax,0x1C(%esi);");
    asm("loc_6DAE10A: je loc_6DAE117;");
    asm("loc_6DAE10C: pop %edi;");
    asm("loc_6DAE10D: pop %esi;");
    asm("loc_6DAE10E: mov $0x16,%eax;");
    asm("loc_6DAE113: pop %ebx;");
    asm("loc_6DAE114: ret $0xC;");
    asm("loc_6DAE117: mov 0x14(%esi),%ecx;");
    asm("loc_6DAE11A: push %edi;");
    asm("loc_6DAE11B: push %ecx;");
    asm("loc_6DAE11C: push %ebx;");
    asm("loc_6DAE11D: mov %esi,%ecx;");
    asm("loc_6DAE11F: call _sub_6DA13C0;");
    asm("loc_6DAE124: test %eax,%eax;");
    asm("loc_6DAE126: mov %eax,0x1C(%esi);");
    asm("loc_6DAE129: je loc_6DAE136;");
    asm("loc_6DAE12B: pop %edi;");
    asm("loc_6DAE12C: pop %esi;");
    asm("loc_6DAE12D: mov $0x16,%eax;");
    asm("loc_6DAE132: pop %ebx;");
    asm("loc_6DAE133: ret $0xC;");
    asm("loc_6DAE136: mov (%edi),%edx;");
    asm("loc_6DAE138: mov 0x18(%esp),%eax;");
    asm("loc_6DAE13C: mov %edx,(%eax);");
    asm("loc_6DAE13E: mov 0xC(%esi),%ecx;");
    asm("loc_6DAE141: push %ecx;");
    asm("loc_6DAE142: call _sub_6DA16B0;");
    asm("loc_6DAE147: mov %eax,%ecx;");
    asm("loc_6DAE149: mov (%ecx),%eax;");
    asm("loc_6DAE14B: mov 0x18(%ecx),%ebx;");
    asm("loc_6DAE14E: add $4,%esp;");
    asm("loc_6DAE151: inc %eax;");
    asm("loc_6DAE152: mov %eax,(%ecx);");
    asm("loc_6DAE154: mov (%edi),%edx;");
    asm("loc_6DAE156: add %edx,%ebx;");
    asm("loc_6DAE158: mov %eax,%esi;");
    asm("loc_6DAE15A: mov 0x10(%ecx),%eax;");
    asm("loc_6DAE15D: mov %ebx,0x18(%ecx);");
    asm("loc_6DAE160: mov (%edi),%edi;");
    asm("loc_6DAE162: cmp %eax,%edi;");
    asm("loc_6DAE164: jbe loc_6DAE169;");
    asm("loc_6DAE166: mov %edi,0x10(%ecx);");
    asm("loc_6DAE169: mov 0x18(%ecx),%eax;");
    asm("loc_6DAE16C: xor %edx,%edx;");
    asm("loc_6DAE16E: div %esi;");
    asm("loc_6DAE170: pop %edi;");
    asm("loc_6DAE171: pop %esi;");
    asm("loc_6DAE172: pop %ebx;");
    asm("loc_6DAE173: mov %eax,8(%ecx);");
    asm("loc_6DAE176: xor %eax,%eax;");
    asm("loc_6DAE178: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE180() // _sub_6DAE180
{
    __DEBUG_ASM(6DAE180);
    // chunk 0x6DAE180 _sub_6DAE180
    asm("loc_6DAE180: mov _data_6DB65B4,%eax;");
    asm("loc_6DAE185: mov %eax,_data_6DBC3C0;");
    asm("loc_6DAE18A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE190() // _sub_6DAE190
{
    __DEBUG_ASM(6DAE190);
    // chunk 0x6DAE190 _sub_6DAE190
    asm("loc_6DAE190: mov _data_6DB65B4,%eax;");
    asm("loc_6DAE195: mov %eax,_data_6DBC3C4;");
    asm("loc_6DAE19A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE1A0() // _sub_6DAE1A0
{
    __DEBUG_ASM(6DAE1A0);
    // chunk 0x6DAE1A0 _sub_6DAE1A0
    asm("loc_6DAE1A0: mov _data_6DB65B8,%eax;");
    asm("loc_6DAE1A5: mov %eax,_data_6DBC3BC;");
    asm("loc_6DAE1AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE1B0() // _sub_6DAE1B0
{
    __DEBUG_ASM(6DAE1B0);
    // chunk 0x6DAE1B0 _sub_6DAE1B0
    asm("loc_6DAE1B0: mov _data_6DB65C4,%eax;");
    asm("loc_6DAE1B5: mov %eax,_data_6DBC3D0;");
    asm("loc_6DAE1BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE1C0() // _sub_6DAE1C0
{
    __DEBUG_ASM(6DAE1C0);
    // chunk 0x6DAE1C0 _sub_6DAE1C0
    asm("loc_6DAE1C0: mov _data_6DB65C4,%eax;");
    asm("loc_6DAE1C5: mov %eax,_data_6DBC3D4;");
    asm("loc_6DAE1CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE1D0() // _sub_6DAE1D0
{
    __DEBUG_ASM(6DAE1D0);
    // chunk 0x6DAE1D0 _sub_6DAE1D0
    asm("loc_6DAE1D0: mov _data_6DB65C8,%eax;");
    asm("loc_6DAE1D5: mov %eax,_data_6DBC3CC;");
    asm("loc_6DAE1DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE1E0() // _sub_6DAE1E0
{
    __DEBUG_ASM(6DAE1E0);
    // chunk 0x6DAE1E0 _sub_6DAE1E0
    asm("loc_6DAE1E0: mov _data_6DB65D0,%eax;");
    asm("loc_6DAE1E5: mov %eax,_data_6DBC3E0;");
    asm("loc_6DAE1EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE1F0() // _sub_6DAE1F0
{
    __DEBUG_ASM(6DAE1F0);
    // chunk 0x6DAE1F0 _sub_6DAE1F0
    asm("loc_6DAE1F0: mov _data_6DB65D0,%eax;");
    asm("loc_6DAE1F5: mov %eax,_data_6DBC3E4;");
    asm("loc_6DAE1FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE200() // _sub_6DAE200
{
    __DEBUG_ASM(6DAE200);
    // chunk 0x6DAE200 _sub_6DAE200
    asm("loc_6DAE200: mov _data_6DB65D4,%eax;");
    asm("loc_6DAE205: mov %eax,_data_6DBC3DC;");
    asm("loc_6DAE20A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE210() // _sub_6DAE210
{
    __DEBUG_ASM(6DAE210);
    // chunk 0x6DAE210 _sub_6DAE210
    asm("loc_6DAE210: mov _data_6DB65DC,%eax;");
    asm("loc_6DAE215: mov %eax,_data_6DBC3F0;");
    asm("loc_6DAE21A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE220() // _sub_6DAE220
{
    __DEBUG_ASM(6DAE220);
    // chunk 0x6DAE220 _sub_6DAE220
    asm("loc_6DAE220: mov _data_6DB65DC,%eax;");
    asm("loc_6DAE225: mov %eax,_data_6DBC3F4;");
    asm("loc_6DAE22A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE230() // _sub_6DAE230
{
    __DEBUG_ASM(6DAE230);
    // chunk 0x6DAE230 _sub_6DAE230
    asm("loc_6DAE230: mov _data_6DB65E0,%eax;");
    asm("loc_6DAE235: mov %eax,_data_6DBC3EC;");
    asm("loc_6DAE23A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE240() // _sub_6DAE240
{
    __DEBUG_ASM(6DAE240);
    // chunk 0x6DAE240 _sub_6DAE240
    asm("loc_6DAE240: movl $_off_6DB5B14,(%ecx);");
    asm("loc_6DAE246: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE250() // _sub_6DAE250
{
    __DEBUG_ASM(6DAE250);
    // chunk 0x6DAE250 _sub_6DAE250
    asm("loc_6DAE250: mov _data_6DB65E8,%eax;");
    asm("loc_6DAE255: mov %eax,_data_6DBC400;");
    asm("loc_6DAE25A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE260() // _sub_6DAE260
{
    __DEBUG_ASM(6DAE260);
    // chunk 0x6DAE260 _sub_6DAE260
    asm("loc_6DAE260: mov _data_6DB65E8,%eax;");
    asm("loc_6DAE265: mov %eax,_data_6DBC404;");
    asm("loc_6DAE26A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE270() // _sub_6DAE270
{
    __DEBUG_ASM(6DAE270);
    // chunk 0x6DAE270 _sub_6DAE270
    asm("loc_6DAE270: mov _data_6DB65EC,%eax;");
    asm("loc_6DAE275: mov %eax,_data_6DBC3FC;");
    asm("loc_6DAE27A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE280() // _sub_6DAE280
{
    __DEBUG_ASM(6DAE280);
    // chunk 0x6DAE280 _sub_6DAE280
    asm("loc_6DAE280: mov 8(%esp),%eax;");
    asm("loc_6DAE284: sub $0xC,%esp;");
    asm("loc_6DAE287: push %ebx;");
    asm("loc_6DAE288: push %ebp;");
    asm("loc_6DAE289: push %esi;");
    asm("loc_6DAE28A: push %edi;");
    asm("loc_6DAE28B: mov %ecx,%edi;");
    asm("loc_6DAE28D: mov 0x20(%esp),%ecx;");
    asm("loc_6DAE291: lea 0x10(%edi),%esi;");
    asm("loc_6DAE294: mov %eax,4(%esi);");
    asm("loc_6DAE297: mov (%ecx),%edx;");
    asm("loc_6DAE299: mov %edx,8(%esi);");
    asm("loc_6DAE29C: movl $0,(%esi);");
    asm("loc_6DAE2A2: movl $0,0xC(%esi);");
    asm("loc_6DAE2A9: mov 0x14(%edi),%eax;");
    asm("loc_6DAE2AC: push %esi;");
    asm("loc_6DAE2AD: push %eax;");
    asm("loc_6DAE2AE: lea 0x18(%edi),%ebx;");
    asm("loc_6DAE2B1: push %ebx;");
    asm("loc_6DAE2B2: mov %edi,%ecx;");
    asm("loc_6DAE2B4: call _sub_6DA1380;");
    asm("loc_6DAE2B9: test %eax,%eax;");
    asm("loc_6DAE2BB: mov %eax,0x1C(%edi);");
    asm("loc_6DAE2BE: je loc_6DAE2CF;");
    asm("loc_6DAE2C0: pop %edi;");
    asm("loc_6DAE2C1: pop %esi;");
    asm("loc_6DAE2C2: pop %ebp;");
    asm("loc_6DAE2C3: mov $0x16,%eax;");
    asm("loc_6DAE2C8: pop %ebx;");
    asm("loc_6DAE2C9: add $0xC,%esp;");
    asm("loc_6DAE2CC: ret $0xC;");
    asm("loc_6DAE2CF: mov (%esi),%edx;");
    asm("loc_6DAE2D1: mov 4(%esi),%ecx;");
    asm("loc_6DAE2D4: add $4,%edx;");
    asm("loc_6DAE2D7: mov %edx,%eax;");
    asm("loc_6DAE2D9: cmp %ecx,%eax;");
    asm("loc_6DAE2DB: mov %edx,(%esi);");
    asm("loc_6DAE2DD: mov $0x16,%eax;");
    asm("loc_6DAE2E2: jbe loc_6DAE2E7;");
    asm("loc_6DAE2E4: mov %eax,0xC(%esi);");
    asm("loc_6DAE2E7: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAE2EA: test %ecx,%ecx;");
    asm("loc_6DAE2EC: jne loc_6DAE426;");
    asm("loc_6DAE2F2: mov (%ebx),%ecx;");
    asm("loc_6DAE2F4: mov 0x20(%edi),%edx;");
    asm("loc_6DAE2F7: mov %edx,(%ecx);");
    asm("loc_6DAE2F9: add $4,%ecx;");
    asm("loc_6DAE2FC: mov %ecx,(%ebx);");
    asm("loc_6DAE2FE: mov (%esi),%ebp;");
    asm("loc_6DAE300: mov 4(%esi),%edx;");
    asm("loc_6DAE303: add $4,%ebp;");
    asm("loc_6DAE306: mov %ebp,%ecx;");
    asm("loc_6DAE308: cmp %edx,%ecx;");
    asm("loc_6DAE30A: mov %ebp,(%esi);");
    asm("loc_6DAE30C: jbe loc_6DAE311;");
    asm("loc_6DAE30E: mov %eax,0xC(%esi);");
    asm("loc_6DAE311: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAE314: test %ecx,%ecx;");
    asm("loc_6DAE316: jne loc_6DAE426;");
    asm("loc_6DAE31C: mov (%ebx),%ecx;");
    asm("loc_6DAE31E: mov 0x24(%edi),%edx;");
    asm("loc_6DAE321: mov %edx,(%ecx);");
    asm("loc_6DAE323: add $4,%ecx;");
    asm("loc_6DAE326: mov %ecx,(%ebx);");
    asm("loc_6DAE328: mov (%esi),%ebp;");
    asm("loc_6DAE32A: mov 4(%esi),%edx;");
    asm("loc_6DAE32D: add $4,%ebp;");
    asm("loc_6DAE330: mov %ebp,%ecx;");
    asm("loc_6DAE332: cmp %edx,%ecx;");
    asm("loc_6DAE334: mov %ebp,(%esi);");
    asm("loc_6DAE336: jbe loc_6DAE33B;");
    asm("loc_6DAE338: mov %eax,0xC(%esi);");
    asm("loc_6DAE33B: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAE33E: test %ecx,%ecx;");
    asm("loc_6DAE340: jne loc_6DAE426;");
    asm("loc_6DAE346: mov (%ebx),%ecx;");
    asm("loc_6DAE348: mov 0x28(%edi),%edx;");
    asm("loc_6DAE34B: mov %edx,(%ecx);");
    asm("loc_6DAE34D: add $4,%ecx;");
    asm("loc_6DAE350: mov %ecx,(%ebx);");
    asm("loc_6DAE352: mov (%esi),%ebp;");
    asm("loc_6DAE354: mov 4(%esi),%edx;");
    asm("loc_6DAE357: add $2,%ebp;");
    asm("loc_6DAE35A: mov %ebp,%ecx;");
    asm("loc_6DAE35C: cmp %edx,%ecx;");
    asm("loc_6DAE35E: mov %ebp,(%esi);");
    asm("loc_6DAE360: jbe loc_6DAE365;");
    asm("loc_6DAE362: mov %eax,0xC(%esi);");
    asm("loc_6DAE365: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAE368: test %ecx,%ecx;");
    asm("loc_6DAE36A: jne loc_6DAE426;");
    asm("loc_6DAE370: mov (%ebx),%ecx;");
    asm("loc_6DAE372: mov 0x2C(%edi),%dx;");
    asm("loc_6DAE376: mov %dx,(%ecx);");
    asm("loc_6DAE379: add $2,%ecx;");
    asm("loc_6DAE37C: mov %ecx,(%ebx);");
    asm("loc_6DAE37E: mov (%esi),%ebp;");
    asm("loc_6DAE380: mov 4(%esi),%edx;");
    asm("loc_6DAE383: add $0xC,%ebp;");
    asm("loc_6DAE386: mov %ebp,%ecx;");
    asm("loc_6DAE388: cmp %edx,%ecx;");
    asm("loc_6DAE38A: mov %ebp,(%esi);");
    asm("loc_6DAE38C: jbe loc_6DAE391;");
    asm("loc_6DAE38E: mov %eax,0xC(%esi);");
    asm("loc_6DAE391: mov 0x1C(%edi),%ecx;");
    asm("loc_6DAE394: test %ecx,%ecx;");
    asm("loc_6DAE396: jne loc_6DAE426;");
    asm("loc_6DAE39C: mov 0x30(%edi),%eax;");
    asm("loc_6DAE39F: mov 0x34(%edi),%ecx;");
    asm("loc_6DAE3A2: mov (%ebx),%ebp;");
    asm("loc_6DAE3A4: mov 0x38(%edi),%edx;");
    asm("loc_6DAE3A7: mov %eax,0x10(%esp);");
    asm("loc_6DAE3AB: lea 0x10(%esp),%eax;");
    asm("loc_6DAE3AF: mov %ecx,0x14(%esp);");
    asm("loc_6DAE3B3: push %eax;");
    asm("loc_6DAE3B4: mov %ebp,%ecx;");
    asm("loc_6DAE3B6: mov %edx,0x1C(%esp);");
    asm("loc_6DAE3BA: call _sub_6D8F510;");
    asm("loc_6DAE3BF: mov 0x14(%edi),%ecx;");
    asm("loc_6DAE3C2: push %esi;");
    asm("loc_6DAE3C3: push %ecx;");
    asm("loc_6DAE3C4: add $0xC,%ebp;");
    asm("loc_6DAE3C7: push %ebx;");
    asm("loc_6DAE3C8: mov %edi,%ecx;");
    asm("loc_6DAE3CA: mov %ebp,(%ebx);");
    asm("loc_6DAE3CC: call _sub_6DA13C0;");
    asm("loc_6DAE3D1: test %eax,%eax;");
    asm("loc_6DAE3D3: mov %eax,0x1C(%edi);");
    asm("loc_6DAE3D6: je loc_6DAE3E7;");
    asm("loc_6DAE3D8: pop %edi;");
    asm("loc_6DAE3D9: pop %esi;");
    asm("loc_6DAE3DA: pop %ebp;");
    asm("loc_6DAE3DB: mov $0x16,%eax;");
    asm("loc_6DAE3E0: pop %ebx;");
    asm("loc_6DAE3E1: add $0xC,%esp;");
    asm("loc_6DAE3E4: ret $0xC;");
    asm("loc_6DAE3E7: mov (%esi),%edx;");
    asm("loc_6DAE3E9: mov 0x28(%esp),%eax;");
    asm("loc_6DAE3ED: mov %edx,(%eax);");
    asm("loc_6DAE3EF: mov 0xC(%edi),%ecx;");
    asm("loc_6DAE3F2: push %ecx;");
    asm("loc_6DAE3F3: call _sub_6DA16B0;");
    asm("loc_6DAE3F8: mov %eax,%ecx;");
    asm("loc_6DAE3FA: mov (%ecx),%ebp;");
    asm("loc_6DAE3FC: mov 0x18(%ecx),%ebx;");
    asm("loc_6DAE3FF: mov 0x10(%ecx),%eax;");
    asm("loc_6DAE402: add $4,%esp;");
    asm("loc_6DAE405: inc %ebp;");
    asm("loc_6DAE406: mov %ebp,(%ecx);");
    asm("loc_6DAE408: mov (%esi),%edx;");
    asm("loc_6DAE40A: add %edx,%ebx;");
    asm("loc_6DAE40C: mov %ebx,0x18(%ecx);");
    asm("loc_6DAE40F: mov (%esi),%esi;");
    asm("loc_6DAE411: cmp %eax,%esi;");
    asm("loc_6DAE413: mov %ebp,%edi;");
    asm("loc_6DAE415: jbe loc_6DAE41A;");
    asm("loc_6DAE417: mov %esi,0x10(%ecx);");
    asm("loc_6DAE41A: mov 0x18(%ecx),%eax;");
    asm("loc_6DAE41D: xor %edx,%edx;");
    asm("loc_6DAE41F: div %edi;");
    asm("loc_6DAE421: mov %eax,8(%ecx);");
    asm("loc_6DAE424: xor %eax,%eax;");
    asm("loc_6DAE426: pop %edi;");
    asm("loc_6DAE427: pop %esi;");
    asm("loc_6DAE428: pop %ebp;");
    asm("loc_6DAE429: pop %ebx;");
    asm("loc_6DAE42A: add $0xC,%esp;");
    asm("loc_6DAE42D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE430() // _sub_6DAE430
{
    __DEBUG_ASM(6DAE430);
    // chunk 0x6DAE430 _sub_6DAE430
    asm("loc_6DAE430: mov 8(%esp),%eax;");
    asm("loc_6DAE434: push %ebx;");
    asm("loc_6DAE435: push %ebp;");
    asm("loc_6DAE436: push %esi;");
    asm("loc_6DAE437: push %edi;");
    asm("loc_6DAE438: mov %ecx,%edi;");
    asm("loc_6DAE43A: mov 0x14(%esp),%ecx;");
    asm("loc_6DAE43E: lea 0x10(%edi),%esi;");
    asm("loc_6DAE441: push %esi;");
    asm("loc_6DAE442: push %eax;");
    asm("loc_6DAE443: mov %ecx,8(%esi);");
    asm("loc_6DAE446: lea 0x18(%edi),%ebx;");
    asm("loc_6DAE449: push %ebx;");
    asm("loc_6DAE44A: mov %edi,%ecx;");
    asm("loc_6DAE44C: mov %eax,4(%esi);");
    asm("loc_6DAE44F: movl $0,(%esi);");
    asm("loc_6DAE455: movl $0,0xC(%esi);");
    asm("loc_6DAE45C: call _sub_6DA13C0;");
    asm("loc_6DAE461: test %eax,%eax;");
    asm("loc_6DAE463: mov %eax,0x1C(%edi);");
    asm("loc_6DAE466: je loc_6DAE474;");
    asm("loc_6DAE468: pop %edi;");
    asm("loc_6DAE469: pop %esi;");
    asm("loc_6DAE46A: pop %ebp;");
    asm("loc_6DAE46B: mov $0x17,%eax;");
    asm("loc_6DAE470: pop %ebx;");
    asm("loc_6DAE471: ret $0xC;");
    asm("loc_6DAE474: mov (%esi),%edx;");
    asm("loc_6DAE476: mov 4(%esi),%ecx;");
    asm("loc_6DAE479: add $4,%edx;");
    asm("loc_6DAE47C: mov %edx,%eax;");
    asm("loc_6DAE47E: cmp %ecx,%eax;");
    asm("loc_6DAE480: mov %edx,(%esi);");
    asm("loc_6DAE482: mov $0x17,%ecx;");
    asm("loc_6DAE487: jbe loc_6DAE48C;");
    asm("loc_6DAE489: mov %ecx,0xC(%esi);");
    asm("loc_6DAE48C: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE48F: test %eax,%eax;");
    asm("loc_6DAE491: jne loc_6DAE5B8;");
    asm("loc_6DAE497: mov (%ebx),%eax;");
    asm("loc_6DAE499: mov (%eax),%edx;");
    asm("loc_6DAE49B: add $4,%eax;");
    asm("loc_6DAE49E: mov %eax,(%ebx);");
    asm("loc_6DAE4A0: mov %edx,0x20(%edi);");
    asm("loc_6DAE4A3: mov (%esi),%ebp;");
    asm("loc_6DAE4A5: mov 4(%esi),%edx;");
    asm("loc_6DAE4A8: add $4,%ebp;");
    asm("loc_6DAE4AB: mov %ebp,%eax;");
    asm("loc_6DAE4AD: cmp %edx,%eax;");
    asm("loc_6DAE4AF: mov %ebp,(%esi);");
    asm("loc_6DAE4B1: jbe loc_6DAE4B6;");
    asm("loc_6DAE4B3: mov %ecx,0xC(%esi);");
    asm("loc_6DAE4B6: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE4B9: test %eax,%eax;");
    asm("loc_6DAE4BB: jne loc_6DAE5B8;");
    asm("loc_6DAE4C1: mov (%ebx),%eax;");
    asm("loc_6DAE4C3: mov (%eax),%edx;");
    asm("loc_6DAE4C5: add $4,%eax;");
    asm("loc_6DAE4C8: mov %eax,(%ebx);");
    asm("loc_6DAE4CA: mov %edx,0x24(%edi);");
    asm("loc_6DAE4CD: mov (%esi),%ebp;");
    asm("loc_6DAE4CF: mov 4(%esi),%edx;");
    asm("loc_6DAE4D2: add $4,%ebp;");
    asm("loc_6DAE4D5: mov %ebp,%eax;");
    asm("loc_6DAE4D7: cmp %edx,%eax;");
    asm("loc_6DAE4D9: mov %ebp,(%esi);");
    asm("loc_6DAE4DB: jbe loc_6DAE4E0;");
    asm("loc_6DAE4DD: mov %ecx,0xC(%esi);");
    asm("loc_6DAE4E0: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE4E3: test %eax,%eax;");
    asm("loc_6DAE4E5: jne loc_6DAE5B8;");
    asm("loc_6DAE4EB: mov (%ebx),%eax;");
    asm("loc_6DAE4ED: mov (%eax),%edx;");
    asm("loc_6DAE4EF: add $4,%eax;");
    asm("loc_6DAE4F2: mov %eax,(%ebx);");
    asm("loc_6DAE4F4: mov %edx,0x28(%edi);");
    asm("loc_6DAE4F7: mov (%esi),%ebp;");
    asm("loc_6DAE4F9: mov 4(%esi),%edx;");
    asm("loc_6DAE4FC: add $2,%ebp;");
    asm("loc_6DAE4FF: mov %ebp,%eax;");
    asm("loc_6DAE501: cmp %edx,%eax;");
    asm("loc_6DAE503: mov %ebp,(%esi);");
    asm("loc_6DAE505: jbe loc_6DAE50A;");
    asm("loc_6DAE507: mov %ecx,0xC(%esi);");
    asm("loc_6DAE50A: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE50D: test %eax,%eax;");
    asm("loc_6DAE50F: jne loc_6DAE5B8;");
    asm("loc_6DAE515: mov (%ebx),%eax;");
    asm("loc_6DAE517: mov (%eax),%dx;");
    asm("loc_6DAE51A: add $2,%eax;");
    asm("loc_6DAE51D: mov %eax,(%ebx);");
    asm("loc_6DAE51F: mov %dx,0x2C(%edi);");
    asm("loc_6DAE523: mov (%esi),%ebp;");
    asm("loc_6DAE525: mov 4(%esi),%edx;");
    asm("loc_6DAE528: add $0xC,%ebp;");
    asm("loc_6DAE52B: mov %ebp,%eax;");
    asm("loc_6DAE52D: cmp %edx,%eax;");
    asm("loc_6DAE52F: mov %ebp,(%esi);");
    asm("loc_6DAE531: jbe loc_6DAE536;");
    asm("loc_6DAE533: mov %ecx,0xC(%esi);");
    asm("loc_6DAE536: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE539: test %eax,%eax;");
    asm("loc_6DAE53B: jne loc_6DAE5B8;");
    asm("loc_6DAE53D: mov (%ebx),%ebp;");
    asm("loc_6DAE53F: push %ebp;");
    asm("loc_6DAE540: lea 0x30(%edi),%ecx;");
    asm("loc_6DAE543: call _sub_6D8F510;");
    asm("loc_6DAE548: mov 0x18(%esp),%eax;");
    asm("loc_6DAE54C: push %esi;");
    asm("loc_6DAE54D: push %eax;");
    asm("loc_6DAE54E: add $0xC,%ebp;");
    asm("loc_6DAE551: push %ebx;");
    asm("loc_6DAE552: mov %edi,%ecx;");
    asm("loc_6DAE554: mov %ebp,(%ebx);");
    asm("loc_6DAE556: call _sub_6DA13C0;");
    asm("loc_6DAE55B: test %eax,%eax;");
    asm("loc_6DAE55D: mov %eax,0x1C(%edi);");
    asm("loc_6DAE560: je loc_6DAE56E;");
    asm("loc_6DAE562: pop %edi;");
    asm("loc_6DAE563: pop %esi;");
    asm("loc_6DAE564: pop %ebp;");
    asm("loc_6DAE565: mov $0x17,%eax;");
    asm("loc_6DAE56A: pop %ebx;");
    asm("loc_6DAE56B: ret $0xC;");
    asm("loc_6DAE56E: mov (%esi),%ecx;");
    asm("loc_6DAE570: mov 0x1C(%esp),%edx;");
    asm("loc_6DAE574: mov %ecx,(%edx);");
    asm("loc_6DAE576: mov 0xC(%edi),%eax;");
    asm("loc_6DAE579: push %eax;");
    asm("loc_6DAE57A: call _sub_6DA16B0;");
    asm("loc_6DAE57F: mov %eax,%ecx;");
    asm("loc_6DAE581: mov 4(%ecx),%edx;");
    asm("loc_6DAE584: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAE587: mov 0x14(%ecx),%eax;");
    asm("loc_6DAE58A: add $4,%esp;");
    asm("loc_6DAE58D: inc %edx;");
    asm("loc_6DAE58E: mov %edx,4(%ecx);");
    asm("loc_6DAE591: mov %edx,%edi;");
    asm("loc_6DAE593: mov (%esi),%edx;");
    asm("loc_6DAE595: add $2,%edx;");
    asm("loc_6DAE598: add %edx,%ebp;");
    asm("loc_6DAE59A: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAE59D: mov (%esi),%esi;");
    asm("loc_6DAE59F: add $2,%eax;");
    asm("loc_6DAE5A2: cmp %eax,%esi;");
    asm("loc_6DAE5A4: jbe loc_6DAE5AC;");
    asm("loc_6DAE5A6: add $2,%esi;");
    asm("loc_6DAE5A9: mov %esi,0x14(%ecx);");
    asm("loc_6DAE5AC: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAE5AF: xor %edx,%edx;");
    asm("loc_6DAE5B1: div %edi;");
    asm("loc_6DAE5B3: mov %eax,0xC(%ecx);");
    asm("loc_6DAE5B6: xor %eax,%eax;");
    asm("loc_6DAE5B8: pop %edi;");
    asm("loc_6DAE5B9: pop %esi;");
    asm("loc_6DAE5BA: pop %ebp;");
    asm("loc_6DAE5BB: pop %ebx;");
    asm("loc_6DAE5BC: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE5C0() // _sub_6DAE5C0
{
    __DEBUG_ASM(6DAE5C0);
    // chunk 0x6DAE5C0 _sub_6DAE5C0
    asm("loc_6DAE5C0: mov _data_6DB65F4,%eax;");
    asm("loc_6DAE5C5: mov %eax,_data_6DBC410;");
    asm("loc_6DAE5CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE5D0() // _sub_6DAE5D0
{
    __DEBUG_ASM(6DAE5D0);
    // chunk 0x6DAE5D0 _sub_6DAE5D0
    asm("loc_6DAE5D0: mov _data_6DB65F4,%eax;");
    asm("loc_6DAE5D5: mov %eax,_data_6DBC414;");
    asm("loc_6DAE5DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE5E0() // _sub_6DAE5E0
{
    __DEBUG_ASM(6DAE5E0);
    // chunk 0x6DAE5E0 _sub_6DAE5E0
    asm("loc_6DAE5E0: mov _data_6DB65F8,%eax;");
    asm("loc_6DAE5E5: mov %eax,_data_6DBC40C;");
    asm("loc_6DAE5EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE5F0() // _sub_6DAE5F0
{
    __DEBUG_ASM(6DAE5F0);
    // chunk 0x6DAE5F0 _sub_6DAE5F0
    asm("loc_6DAE5F0: mov _data_6DB6600,%eax;");
    asm("loc_6DAE5F5: mov %eax,_data_6DBC420;");
    asm("loc_6DAE5FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE600() // _sub_6DAE600
{
    __DEBUG_ASM(6DAE600);
    // chunk 0x6DAE600 _sub_6DAE600
    asm("loc_6DAE600: mov _data_6DB6600,%eax;");
    asm("loc_6DAE605: mov %eax,_data_6DBC424;");
    asm("loc_6DAE60A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE610() // _sub_6DAE610
{
    __DEBUG_ASM(6DAE610);
    // chunk 0x6DAE610 _sub_6DAE610
    asm("loc_6DAE610: mov _data_6DB6604,%eax;");
    asm("loc_6DAE615: mov %eax,_data_6DBC41C;");
    asm("loc_6DAE61A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE620() // _sub_6DAE620
{
    __DEBUG_ASM(6DAE620);
    // chunk 0x6DAE620 _sub_6DAE620
    asm("loc_6DAE620: mov 8(%esp),%eax;");
    asm("loc_6DAE624: push %ebx;");
    asm("loc_6DAE625: push %esi;");
    asm("loc_6DAE626: push %edi;");
    asm("loc_6DAE627: mov %ecx,%edi;");
    asm("loc_6DAE629: mov 0x10(%esp),%ecx;");
    asm("loc_6DAE62D: lea 0x10(%edi),%esi;");
    asm("loc_6DAE630: mov %eax,4(%esi);");
    asm("loc_6DAE633: mov (%ecx),%edx;");
    asm("loc_6DAE635: mov %edx,8(%esi);");
    asm("loc_6DAE638: movl $0,(%esi);");
    asm("loc_6DAE63E: movl $0,0xC(%esi);");
    asm("loc_6DAE645: mov 0x14(%edi),%eax;");
    asm("loc_6DAE648: push %esi;");
    asm("loc_6DAE649: push %eax;");
    asm("loc_6DAE64A: lea 0x18(%edi),%ebx;");
    asm("loc_6DAE64D: push %ebx;");
    asm("loc_6DAE64E: mov %edi,%ecx;");
    asm("loc_6DAE650: call _sub_6DA1380;");
    asm("loc_6DAE655: test %eax,%eax;");
    asm("loc_6DAE657: mov %eax,0x1C(%edi);");
    asm("loc_6DAE65A: je loc_6DAE667;");
    asm("loc_6DAE65C: pop %edi;");
    asm("loc_6DAE65D: pop %esi;");
    asm("loc_6DAE65E: mov $0x16,%eax;");
    asm("loc_6DAE663: pop %ebx;");
    asm("loc_6DAE664: ret $0xC;");
    asm("loc_6DAE667: mov (%esi),%edx;");
    asm("loc_6DAE669: mov 4(%esi),%ecx;");
    asm("loc_6DAE66C: add $4,%edx;");
    asm("loc_6DAE66F: mov %edx,%eax;");
    asm("loc_6DAE671: cmp %ecx,%eax;");
    asm("loc_6DAE673: mov %edx,(%esi);");
    asm("loc_6DAE675: jbe loc_6DAE67E;");
    asm("loc_6DAE677: movl $0x16,0xC(%esi);");
    asm("loc_6DAE67E: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE681: test %eax,%eax;");
    asm("loc_6DAE683: je loc_6DAE690;");
    asm("loc_6DAE685: pop %edi;");
    asm("loc_6DAE686: pop %esi;");
    asm("loc_6DAE687: mov $0x16,%eax;");
    asm("loc_6DAE68C: pop %ebx;");
    asm("loc_6DAE68D: ret $0xC;");
    asm("loc_6DAE690: mov (%ebx),%eax;");
    asm("loc_6DAE692: mov 0x20(%edi),%ecx;");
    asm("loc_6DAE695: mov %ecx,(%eax);");
    asm("loc_6DAE697: add $4,%eax;");
    asm("loc_6DAE69A: mov %eax,(%ebx);");
    asm("loc_6DAE69C: mov (%esi),%edx;");
    asm("loc_6DAE69E: mov 4(%esi),%ecx;");
    asm("loc_6DAE6A1: add $2,%edx;");
    asm("loc_6DAE6A4: mov %edx,%eax;");
    asm("loc_6DAE6A6: cmp %ecx,%eax;");
    asm("loc_6DAE6A8: mov %edx,(%esi);");
    asm("loc_6DAE6AA: jbe loc_6DAE6B3;");
    asm("loc_6DAE6AC: movl $0x16,0xC(%esi);");
    asm("loc_6DAE6B3: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE6B6: test %eax,%eax;");
    asm("loc_6DAE6B8: je loc_6DAE6C5;");
    asm("loc_6DAE6BA: pop %edi;");
    asm("loc_6DAE6BB: pop %esi;");
    asm("loc_6DAE6BC: mov $0x16,%eax;");
    asm("loc_6DAE6C1: pop %ebx;");
    asm("loc_6DAE6C2: ret $0xC;");
    asm("loc_6DAE6C5: mov (%ebx),%eax;");
    asm("loc_6DAE6C7: mov 0x24(%edi),%dx;");
    asm("loc_6DAE6CB: mov %dx,(%eax);");
    asm("loc_6DAE6CE: add $2,%eax;");
    asm("loc_6DAE6D1: mov %eax,(%ebx);");
    asm("loc_6DAE6D3: mov (%esi),%edx;");
    asm("loc_6DAE6D5: mov 4(%esi),%ecx;");
    asm("loc_6DAE6D8: add $4,%edx;");
    asm("loc_6DAE6DB: mov %edx,%eax;");
    asm("loc_6DAE6DD: cmp %ecx,%eax;");
    asm("loc_6DAE6DF: mov %edx,(%esi);");
    asm("loc_6DAE6E1: jbe loc_6DAE6EA;");
    asm("loc_6DAE6E3: movl $0x16,0xC(%esi);");
    asm("loc_6DAE6EA: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE6ED: test %eax,%eax;");
    asm("loc_6DAE6EF: je loc_6DAE6FC;");
    asm("loc_6DAE6F1: pop %edi;");
    asm("loc_6DAE6F2: pop %esi;");
    asm("loc_6DAE6F3: mov $0x16,%eax;");
    asm("loc_6DAE6F8: pop %ebx;");
    asm("loc_6DAE6F9: ret $0xC;");
    asm("loc_6DAE6FC: mov (%ebx),%eax;");
    asm("loc_6DAE6FE: mov 0x28(%edi),%ecx;");
    asm("loc_6DAE701: mov %ecx,(%eax);");
    asm("loc_6DAE703: mov 0x14(%edi),%edx;");
    asm("loc_6DAE706: push %esi;");
    asm("loc_6DAE707: push %edx;");
    asm("loc_6DAE708: add $4,%eax;");
    asm("loc_6DAE70B: push %ebx;");
    asm("loc_6DAE70C: mov %edi,%ecx;");
    asm("loc_6DAE70E: mov %eax,(%ebx);");
    asm("loc_6DAE710: call _sub_6DA13C0;");
    asm("loc_6DAE715: test %eax,%eax;");
    asm("loc_6DAE717: mov %eax,0x1C(%edi);");
    asm("loc_6DAE71A: je loc_6DAE727;");
    asm("loc_6DAE71C: pop %edi;");
    asm("loc_6DAE71D: pop %esi;");
    asm("loc_6DAE71E: mov $0x16,%eax;");
    asm("loc_6DAE723: pop %ebx;");
    asm("loc_6DAE724: ret $0xC;");
    asm("loc_6DAE727: mov (%esi),%eax;");
    asm("loc_6DAE729: mov 0x18(%esp),%ecx;");
    asm("loc_6DAE72D: mov %eax,(%ecx);");
    asm("loc_6DAE72F: mov 0xC(%edi),%edx;");
    asm("loc_6DAE732: push %edx;");
    asm("loc_6DAE733: call _sub_6DA16B0;");
    asm("loc_6DAE738: mov %eax,%ecx;");
    asm("loc_6DAE73A: mov (%ecx),%edi;");
    asm("loc_6DAE73C: mov 0x18(%ecx),%edx;");
    asm("loc_6DAE73F: add $4,%esp;");
    asm("loc_6DAE742: inc %edi;");
    asm("loc_6DAE743: mov %edi,(%ecx);");
    asm("loc_6DAE745: mov (%esi),%eax;");
    asm("loc_6DAE747: add %eax,%edx;");
    asm("loc_6DAE749: mov 0x10(%ecx),%eax;");
    asm("loc_6DAE74C: mov %edx,0x18(%ecx);");
    asm("loc_6DAE74F: mov (%esi),%esi;");
    asm("loc_6DAE751: cmp %eax,%esi;");
    asm("loc_6DAE753: jbe loc_6DAE758;");
    asm("loc_6DAE755: mov %esi,0x10(%ecx);");
    asm("loc_6DAE758: mov 0x18(%ecx),%eax;");
    asm("loc_6DAE75B: xor %edx,%edx;");
    asm("loc_6DAE75D: div %edi;");
    asm("loc_6DAE75F: pop %edi;");
    asm("loc_6DAE760: pop %esi;");
    asm("loc_6DAE761: pop %ebx;");
    asm("loc_6DAE762: mov %eax,8(%ecx);");
    asm("loc_6DAE765: xor %eax,%eax;");
    asm("loc_6DAE767: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE770() // _sub_6DAE770
{
    __DEBUG_ASM(6DAE770);
    // chunk 0x6DAE770 _sub_6DAE770
    asm("loc_6DAE770: mov 8(%esp),%eax;");
    asm("loc_6DAE774: push %ebx;");
    asm("loc_6DAE775: push %ebp;");
    asm("loc_6DAE776: push %esi;");
    asm("loc_6DAE777: push %edi;");
    asm("loc_6DAE778: mov %ecx,%edi;");
    asm("loc_6DAE77A: mov 0x14(%esp),%ecx;");
    asm("loc_6DAE77E: lea 0x10(%edi),%esi;");
    asm("loc_6DAE781: mov %eax,4(%esi);");
    asm("loc_6DAE784: mov (%ecx),%edx;");
    asm("loc_6DAE786: mov %edx,8(%esi);");
    asm("loc_6DAE789: movl $0,(%esi);");
    asm("loc_6DAE78F: movl $0,0xC(%esi);");
    asm("loc_6DAE796: mov 0x14(%edi),%eax;");
    asm("loc_6DAE799: push %esi;");
    asm("loc_6DAE79A: push %eax;");
    asm("loc_6DAE79B: lea 0x18(%edi),%ebx;");
    asm("loc_6DAE79E: push %ebx;");
    asm("loc_6DAE79F: mov %edi,%ecx;");
    asm("loc_6DAE7A1: call _sub_6DA1380;");
    asm("loc_6DAE7A6: test %eax,%eax;");
    asm("loc_6DAE7A8: mov %eax,0x1C(%edi);");
    asm("loc_6DAE7AB: je loc_6DAE7B9;");
    asm("loc_6DAE7AD: pop %edi;");
    asm("loc_6DAE7AE: pop %esi;");
    asm("loc_6DAE7AF: pop %ebp;");
    asm("loc_6DAE7B0: mov $0x16,%eax;");
    asm("loc_6DAE7B5: pop %ebx;");
    asm("loc_6DAE7B6: ret $0xC;");
    asm("loc_6DAE7B9: mov (%esi),%edx;");
    asm("loc_6DAE7BB: mov 4(%esi),%ecx;");
    asm("loc_6DAE7BE: add $4,%edx;");
    asm("loc_6DAE7C1: mov %edx,%eax;");
    asm("loc_6DAE7C3: cmp %ecx,%eax;");
    asm("loc_6DAE7C5: mov %edx,(%esi);");
    asm("loc_6DAE7C7: mov $0x16,%ebp;");
    asm("loc_6DAE7CC: jbe loc_6DAE7D1;");
    asm("loc_6DAE7CE: mov %ebp,0xC(%esi);");
    asm("loc_6DAE7D1: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE7D4: test %eax,%eax;");
    asm("loc_6DAE7D6: je loc_6DAE7E1;");
    asm("loc_6DAE7D8: pop %edi;");
    asm("loc_6DAE7D9: pop %esi;");
    asm("loc_6DAE7DA: mov %ebp,%eax;");
    asm("loc_6DAE7DC: pop %ebp;");
    asm("loc_6DAE7DD: pop %ebx;");
    asm("loc_6DAE7DE: ret $0xC;");
    asm("loc_6DAE7E1: mov (%ebx),%eax;");
    asm("loc_6DAE7E3: mov 0x20(%edi),%ecx;");
    asm("loc_6DAE7E6: mov %ecx,(%eax);");
    asm("loc_6DAE7E8: add $4,%eax;");
    asm("loc_6DAE7EB: mov %eax,(%ebx);");
    asm("loc_6DAE7ED: mov (%esi),%edx;");
    asm("loc_6DAE7EF: mov 4(%esi),%ecx;");
    asm("loc_6DAE7F2: add $2,%edx;");
    asm("loc_6DAE7F5: mov %edx,%eax;");
    asm("loc_6DAE7F7: cmp %ecx,%eax;");
    asm("loc_6DAE7F9: mov %edx,(%esi);");
    asm("loc_6DAE7FB: jbe loc_6DAE800;");
    asm("loc_6DAE7FD: mov %ebp,0xC(%esi);");
    asm("loc_6DAE800: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE803: test %eax,%eax;");
    asm("loc_6DAE805: je loc_6DAE810;");
    asm("loc_6DAE807: pop %edi;");
    asm("loc_6DAE808: pop %esi;");
    asm("loc_6DAE809: mov %ebp,%eax;");
    asm("loc_6DAE80B: pop %ebp;");
    asm("loc_6DAE80C: pop %ebx;");
    asm("loc_6DAE80D: ret $0xC;");
    asm("loc_6DAE810: mov (%ebx),%eax;");
    asm("loc_6DAE812: mov 0x24(%edi),%dx;");
    asm("loc_6DAE816: mov %dx,(%eax);");
    asm("loc_6DAE819: add $2,%eax;");
    asm("loc_6DAE81C: mov %eax,(%ebx);");
    asm("loc_6DAE81E: mov (%esi),%edx;");
    asm("loc_6DAE820: mov 4(%esi),%ecx;");
    asm("loc_6DAE823: add $4,%edx;");
    asm("loc_6DAE826: mov %edx,%eax;");
    asm("loc_6DAE828: cmp %ecx,%eax;");
    asm("loc_6DAE82A: mov %edx,(%esi);");
    asm("loc_6DAE82C: jbe loc_6DAE831;");
    asm("loc_6DAE82E: mov %ebp,0xC(%esi);");
    asm("loc_6DAE831: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE834: test %eax,%eax;");
    asm("loc_6DAE836: je loc_6DAE841;");
    asm("loc_6DAE838: pop %edi;");
    asm("loc_6DAE839: pop %esi;");
    asm("loc_6DAE83A: mov %ebp,%eax;");
    asm("loc_6DAE83C: pop %ebp;");
    asm("loc_6DAE83D: pop %ebx;");
    asm("loc_6DAE83E: ret $0xC;");
    asm("loc_6DAE841: mov (%ebx),%eax;");
    asm("loc_6DAE843: mov 0x28(%edi),%ecx;");
    asm("loc_6DAE846: mov %ecx,(%eax);");
    asm("loc_6DAE848: add $4,%eax;");
    asm("loc_6DAE84B: mov %eax,(%ebx);");
    asm("loc_6DAE84D: mov (%esi),%edx;");
    asm("loc_6DAE84F: mov 4(%esi),%ecx;");
    asm("loc_6DAE852: add $2,%edx;");
    asm("loc_6DAE855: mov %edx,%eax;");
    asm("loc_6DAE857: cmp %ecx,%eax;");
    asm("loc_6DAE859: mov %edx,(%esi);");
    asm("loc_6DAE85B: jbe loc_6DAE860;");
    asm("loc_6DAE85D: mov %ebp,0xC(%esi);");
    asm("loc_6DAE860: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE863: test %eax,%eax;");
    asm("loc_6DAE865: je loc_6DAE870;");
    asm("loc_6DAE867: pop %edi;");
    asm("loc_6DAE868: pop %esi;");
    asm("loc_6DAE869: mov %ebp,%eax;");
    asm("loc_6DAE86B: pop %ebp;");
    asm("loc_6DAE86C: pop %ebx;");
    asm("loc_6DAE86D: ret $0xC;");
    asm("loc_6DAE870: mov (%ebx),%eax;");
    asm("loc_6DAE872: mov 0x2C(%edi),%dx;");
    asm("loc_6DAE876: mov %dx,(%eax);");
    asm("loc_6DAE879: add $2,%eax;");
    asm("loc_6DAE87C: mov %eax,(%ebx);");
    asm("loc_6DAE87E: mov (%esi),%edx;");
    asm("loc_6DAE880: mov 4(%esi),%ecx;");
    asm("loc_6DAE883: add $4,%edx;");
    asm("loc_6DAE886: mov %edx,%eax;");
    asm("loc_6DAE888: cmp %ecx,%eax;");
    asm("loc_6DAE88A: mov %edx,(%esi);");
    asm("loc_6DAE88C: jbe loc_6DAE891;");
    asm("loc_6DAE88E: mov %ebp,0xC(%esi);");
    asm("loc_6DAE891: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE894: test %eax,%eax;");
    asm("loc_6DAE896: je loc_6DAE8A1;");
    asm("loc_6DAE898: pop %edi;");
    asm("loc_6DAE899: pop %esi;");
    asm("loc_6DAE89A: mov %ebp,%eax;");
    asm("loc_6DAE89C: pop %ebp;");
    asm("loc_6DAE89D: pop %ebx;");
    asm("loc_6DAE89E: ret $0xC;");
    asm("loc_6DAE8A1: mov (%ebx),%eax;");
    asm("loc_6DAE8A3: flds 0x30(%edi);");
    asm("loc_6DAE8A6: fstps (%eax);");
    asm("loc_6DAE8A8: add $4,%eax;");
    asm("loc_6DAE8AB: mov %eax,(%ebx);");
    asm("loc_6DAE8AD: mov 0x14(%edi),%eax;");
    asm("loc_6DAE8B0: push %esi;");
    asm("loc_6DAE8B1: push %eax;");
    asm("loc_6DAE8B2: push %ebx;");
    asm("loc_6DAE8B3: mov %edi,%ecx;");
    asm("loc_6DAE8B5: call _sub_6DA13C0;");
    asm("loc_6DAE8BA: test %eax,%eax;");
    asm("loc_6DAE8BC: mov %eax,0x1C(%edi);");
    asm("loc_6DAE8BF: je loc_6DAE8CA;");
    asm("loc_6DAE8C1: pop %edi;");
    asm("loc_6DAE8C2: pop %esi;");
    asm("loc_6DAE8C3: mov %ebp,%eax;");
    asm("loc_6DAE8C5: pop %ebp;");
    asm("loc_6DAE8C6: pop %ebx;");
    asm("loc_6DAE8C7: ret $0xC;");
    asm("loc_6DAE8CA: mov (%esi),%ecx;");
    asm("loc_6DAE8CC: mov 0x1C(%esp),%edx;");
    asm("loc_6DAE8D0: mov %ecx,(%edx);");
    asm("loc_6DAE8D2: mov 0xC(%edi),%eax;");
    asm("loc_6DAE8D5: push %eax;");
    asm("loc_6DAE8D6: call _sub_6DA16B0;");
    asm("loc_6DAE8DB: mov %eax,%ecx;");
    asm("loc_6DAE8DD: mov (%ecx),%ebp;");
    asm("loc_6DAE8DF: mov 0x18(%ecx),%ebx;");
    asm("loc_6DAE8E2: mov 0x10(%ecx),%eax;");
    asm("loc_6DAE8E5: add $4,%esp;");
    asm("loc_6DAE8E8: inc %ebp;");
    asm("loc_6DAE8E9: mov %ebp,(%ecx);");
    asm("loc_6DAE8EB: mov (%esi),%edx;");
    asm("loc_6DAE8ED: add %edx,%ebx;");
    asm("loc_6DAE8EF: mov %ebx,0x18(%ecx);");
    asm("loc_6DAE8F2: mov (%esi),%esi;");
    asm("loc_6DAE8F4: cmp %eax,%esi;");
    asm("loc_6DAE8F6: mov %ebp,%edi;");
    asm("loc_6DAE8F8: jbe loc_6DAE8FD;");
    asm("loc_6DAE8FA: mov %esi,0x10(%ecx);");
    asm("loc_6DAE8FD: mov 0x18(%ecx),%eax;");
    asm("loc_6DAE900: xor %edx,%edx;");
    asm("loc_6DAE902: div %edi;");
    asm("loc_6DAE904: pop %edi;");
    asm("loc_6DAE905: pop %esi;");
    asm("loc_6DAE906: pop %ebp;");
    asm("loc_6DAE907: pop %ebx;");
    asm("loc_6DAE908: mov %eax,8(%ecx);");
    asm("loc_6DAE90B: xor %eax,%eax;");
    asm("loc_6DAE90D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAE910() // _sub_6DAE910
{
    __DEBUG_ASM(6DAE910);
    // chunk 0x6DAE910 _sub_6DAE910
    asm("loc_6DAE910: mov 4(%esp),%eax;");
    asm("loc_6DAE914: push %ebx;");
    asm("loc_6DAE915: push %ebp;");
    asm("loc_6DAE916: mov 0x10(%esp),%ebp;");
    asm("loc_6DAE91A: push %esi;");
    asm("loc_6DAE91B: push %edi;");
    asm("loc_6DAE91C: mov %ecx,%edi;");
    asm("loc_6DAE91E: lea 0x10(%edi),%esi;");
    asm("loc_6DAE921: push %esi;");
    asm("loc_6DAE922: push %ebp;");
    asm("loc_6DAE923: lea 0x18(%edi),%ebx;");
    asm("loc_6DAE926: push %ebx;");
    asm("loc_6DAE927: mov %ebp,4(%esi);");
    asm("loc_6DAE92A: mov %eax,8(%esi);");
    asm("loc_6DAE92D: movl $0,(%esi);");
    asm("loc_6DAE933: movl $0,0xC(%esi);");
    asm("loc_6DAE93A: call _sub_6DA13C0;");
    asm("loc_6DAE93F: test %eax,%eax;");
    asm("loc_6DAE941: mov %eax,0x1C(%edi);");
    asm("loc_6DAE944: je loc_6DAE952;");
    asm("loc_6DAE946: pop %edi;");
    asm("loc_6DAE947: pop %esi;");
    asm("loc_6DAE948: pop %ebp;");
    asm("loc_6DAE949: mov $0x17,%eax;");
    asm("loc_6DAE94E: pop %ebx;");
    asm("loc_6DAE94F: ret $0xC;");
    asm("loc_6DAE952: mov (%esi),%edx;");
    asm("loc_6DAE954: mov 4(%esi),%ecx;");
    asm("loc_6DAE957: add $4,%edx;");
    asm("loc_6DAE95A: mov %edx,%eax;");
    asm("loc_6DAE95C: cmp %ecx,%eax;");
    asm("loc_6DAE95E: mov %edx,(%esi);");
    asm("loc_6DAE960: mov $0x17,%ecx;");
    asm("loc_6DAE965: jbe loc_6DAE96A;");
    asm("loc_6DAE967: mov %ecx,0xC(%esi);");
    asm("loc_6DAE96A: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE96D: test %eax,%eax;");
    asm("loc_6DAE96F: jne loc_6DAEA88;");
    asm("loc_6DAE975: mov (%ebx),%eax;");
    asm("loc_6DAE977: mov (%eax),%edx;");
    asm("loc_6DAE979: add $4,%eax;");
    asm("loc_6DAE97C: mov %eax,(%ebx);");
    asm("loc_6DAE97E: mov %edx,0x20(%edi);");
    asm("loc_6DAE981: mov (%esi),%eax;");
    asm("loc_6DAE983: mov 4(%esi),%edx;");
    asm("loc_6DAE986: add $2,%eax;");
    asm("loc_6DAE989: cmp %edx,%eax;");
    asm("loc_6DAE98B: mov %eax,(%esi);");
    asm("loc_6DAE98D: jbe loc_6DAE992;");
    asm("loc_6DAE98F: mov %ecx,0xC(%esi);");
    asm("loc_6DAE992: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE995: test %eax,%eax;");
    asm("loc_6DAE997: jne loc_6DAEA88;");
    asm("loc_6DAE99D: mov (%ebx),%eax;");
    asm("loc_6DAE99F: mov (%eax),%dx;");
    asm("loc_6DAE9A2: add $2,%eax;");
    asm("loc_6DAE9A5: mov %eax,(%ebx);");
    asm("loc_6DAE9A7: mov %dx,0x24(%edi);");
    asm("loc_6DAE9AB: mov (%esi),%eax;");
    asm("loc_6DAE9AD: mov 4(%esi),%edx;");
    asm("loc_6DAE9B0: add $4,%eax;");
    asm("loc_6DAE9B3: cmp %edx,%eax;");
    asm("loc_6DAE9B5: mov %eax,(%esi);");
    asm("loc_6DAE9B7: jbe loc_6DAE9BC;");
    asm("loc_6DAE9B9: mov %ecx,0xC(%esi);");
    asm("loc_6DAE9BC: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE9BF: test %eax,%eax;");
    asm("loc_6DAE9C1: jne loc_6DAEA88;");
    asm("loc_6DAE9C7: mov (%ebx),%eax;");
    asm("loc_6DAE9C9: mov (%eax),%edx;");
    asm("loc_6DAE9CB: add $4,%eax;");
    asm("loc_6DAE9CE: mov %eax,(%ebx);");
    asm("loc_6DAE9D0: mov %edx,0x28(%edi);");
    asm("loc_6DAE9D3: mov (%esi),%eax;");
    asm("loc_6DAE9D5: mov 4(%esi),%edx;");
    asm("loc_6DAE9D8: add $2,%eax;");
    asm("loc_6DAE9DB: cmp %edx,%eax;");
    asm("loc_6DAE9DD: mov %eax,(%esi);");
    asm("loc_6DAE9DF: jbe loc_6DAE9E4;");
    asm("loc_6DAE9E1: mov %ecx,0xC(%esi);");
    asm("loc_6DAE9E4: mov 0x1C(%edi),%eax;");
    asm("loc_6DAE9E7: test %eax,%eax;");
    asm("loc_6DAE9E9: jne loc_6DAEA88;");
    asm("loc_6DAE9EF: mov (%ebx),%eax;");
    asm("loc_6DAE9F1: mov (%eax),%dx;");
    asm("loc_6DAE9F4: add $2,%eax;");
    asm("loc_6DAE9F7: mov %eax,(%ebx);");
    asm("loc_6DAE9F9: mov %dx,0x2C(%edi);");
    asm("loc_6DAE9FD: mov (%esi),%eax;");
    asm("loc_6DAE9FF: mov 4(%esi),%edx;");
    asm("loc_6DAEA02: add $4,%eax;");
    asm("loc_6DAEA05: cmp %edx,%eax;");
    asm("loc_6DAEA07: mov %eax,(%esi);");
    asm("loc_6DAEA09: jbe loc_6DAEA0E;");
    asm("loc_6DAEA0B: mov %ecx,0xC(%esi);");
    asm("loc_6DAEA0E: mov 0x1C(%edi),%eax;");
    asm("loc_6DAEA11: test %eax,%eax;");
    asm("loc_6DAEA13: jne loc_6DAEA88;");
    asm("loc_6DAEA15: mov (%ebx),%eax;");
    asm("loc_6DAEA17: mov (%eax),%ecx;");
    asm("loc_6DAEA19: push %esi;");
    asm("loc_6DAEA1A: push %ebp;");
    asm("loc_6DAEA1B: mov %ecx,0x30(%edi);");
    asm("loc_6DAEA1E: add $4,%eax;");
    asm("loc_6DAEA21: push %ebx;");
    asm("loc_6DAEA22: mov %edi,%ecx;");
    asm("loc_6DAEA24: mov %eax,(%ebx);");
    asm("loc_6DAEA26: call _sub_6DA13C0;");
    asm("loc_6DAEA2B: test %eax,%eax;");
    asm("loc_6DAEA2D: mov %eax,0x1C(%edi);");
    asm("loc_6DAEA30: je loc_6DAEA3E;");
    asm("loc_6DAEA32: pop %edi;");
    asm("loc_6DAEA33: pop %esi;");
    asm("loc_6DAEA34: pop %ebp;");
    asm("loc_6DAEA35: mov $0x17,%eax;");
    asm("loc_6DAEA3A: pop %ebx;");
    asm("loc_6DAEA3B: ret $0xC;");
    asm("loc_6DAEA3E: mov (%esi),%edx;");
    asm("loc_6DAEA40: mov 0x1C(%esp),%eax;");
    asm("loc_6DAEA44: mov %edx,(%eax);");
    asm("loc_6DAEA46: mov 0xC(%edi),%ecx;");
    asm("loc_6DAEA49: push %ecx;");
    asm("loc_6DAEA4A: call _sub_6DA16B0;");
    asm("loc_6DAEA4F: mov %eax,%ecx;");
    asm("loc_6DAEA51: mov 4(%ecx),%edx;");
    asm("loc_6DAEA54: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAEA57: mov 0x14(%ecx),%eax;");
    asm("loc_6DAEA5A: add $4,%esp;");
    asm("loc_6DAEA5D: inc %edx;");
    asm("loc_6DAEA5E: mov %edx,4(%ecx);");
    asm("loc_6DAEA61: mov %edx,%edi;");
    asm("loc_6DAEA63: mov (%esi),%edx;");
    asm("loc_6DAEA65: add $2,%edx;");
    asm("loc_6DAEA68: add %edx,%ebp;");
    asm("loc_6DAEA6A: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAEA6D: mov (%esi),%esi;");
    asm("loc_6DAEA6F: add $2,%eax;");
    asm("loc_6DAEA72: cmp %eax,%esi;");
    asm("loc_6DAEA74: jbe loc_6DAEA7C;");
    asm("loc_6DAEA76: add $2,%esi;");
    asm("loc_6DAEA79: mov %esi,0x14(%ecx);");
    asm("loc_6DAEA7C: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAEA7F: xor %edx,%edx;");
    asm("loc_6DAEA81: div %edi;");
    asm("loc_6DAEA83: mov %eax,0xC(%ecx);");
    asm("loc_6DAEA86: xor %eax,%eax;");
    asm("loc_6DAEA88: pop %edi;");
    asm("loc_6DAEA89: pop %esi;");
    asm("loc_6DAEA8A: pop %ebp;");
    asm("loc_6DAEA8B: pop %ebx;");
    asm("loc_6DAEA8C: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAEA90() // _sub_6DAEA90
{
    __DEBUG_ASM(6DAEA90);
    // chunk 0x6DAEA90 _sub_6DAEA90
    asm("loc_6DAEA90: mov _data_6DB660C,%eax;");
    asm("loc_6DAEA95: mov %eax,_data_6DBC430;");
    asm("loc_6DAEA9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAEAA0() // _sub_6DAEAA0
{
    __DEBUG_ASM(6DAEAA0);
    // chunk 0x6DAEAA0 _sub_6DAEAA0
    asm("loc_6DAEAA0: mov _data_6DB660C,%eax;");
    asm("loc_6DAEAA5: mov %eax,_data_6DBC434;");
    asm("loc_6DAEAAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAEAB0() // _sub_6DAEAB0
{
    __DEBUG_ASM(6DAEAB0);
    // chunk 0x6DAEAB0 _sub_6DAEAB0
    asm("loc_6DAEAB0: mov _data_6DB6610,%eax;");
    asm("loc_6DAEAB5: mov %eax,_data_6DBC42C;");
    asm("loc_6DAEABA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAEAC0() // _sub_6DAEAC0
{
    __DEBUG_ASM(6DAEAC0);
    // chunk 0x6DAEAC0 _sub_6DAEAC0
    asm("loc_6DAEAC0: mov 8(%esp),%eax;");
    asm("loc_6DAEAC4: sub $0xC,%esp;");
    asm("loc_6DAEAC7: push %ebx;");
    asm("loc_6DAEAC8: push %ebp;");
    asm("loc_6DAEAC9: push %esi;");
    asm("loc_6DAEACA: push %edi;");
    asm("loc_6DAEACB: mov %ecx,%edi;");
    asm("loc_6DAEACD: mov 0x20(%esp),%ecx;");
    asm("loc_6DAEAD1: lea 0x10(%edi),%esi;");
    asm("loc_6DAEAD4: mov %eax,4(%esi);");
    asm("loc_6DAEAD7: mov (%ecx),%edx;");
    asm("loc_6DAEAD9: mov %edx,8(%esi);");
    asm("loc_6DAEADC: movl $0,(%esi);");
    asm("loc_6DAEAE2: movl $0,0xC(%esi);");
    asm("loc_6DAEAE9: mov 0x14(%edi),%eax;");
    asm("loc_6DAEAEC: push %esi;");
    asm("loc_6DAEAED: push %eax;");
    asm("loc_6DAEAEE: lea 0x18(%edi),%ebx;");
    asm("loc_6DAEAF1: push %ebx;");
    asm("loc_6DAEAF2: mov %edi,%ecx;");
    asm("loc_6DAEAF4: call _sub_6DA1380;");
    asm("loc_6DAEAF9: test %eax,%eax;");
    asm("loc_6DAEAFB: mov %eax,0x1C(%edi);");
    asm("loc_6DAEAFE: je loc_6DAEB0F;");
    asm("loc_6DAEB00: pop %edi;");
    asm("loc_6DAEB01: pop %esi;");
    asm("loc_6DAEB02: pop %ebp;");
    asm("loc_6DAEB03: mov $0x16,%eax;");
    asm("loc_6DAEB08: pop %ebx;");
    asm("loc_6DAEB09: add $0xC,%esp;");
    asm("loc_6DAEB0C: ret $0xC;");
    asm("loc_6DAEB0F: mov (%esi),%edx;");
    asm("loc_6DAEB11: mov 4(%esi),%ecx;");
    asm("loc_6DAEB14: add $4,%edx;");
    asm("loc_6DAEB17: mov %edx,%eax;");
    asm("loc_6DAEB19: cmp %ecx,%eax;");
    asm("loc_6DAEB1B: mov %edx,(%esi);");
    asm("loc_6DAEB1D: jbe loc_6DAEB26;");
    asm("loc_6DAEB1F: movl $0x16,0xC(%esi);");
    asm("loc_6DAEB26: mov 0x1C(%edi),%eax;");
    asm("loc_6DAEB29: test %eax,%eax;");
    asm("loc_6DAEB2B: je loc_6DAEB3C;");
    asm("loc_6DAEB2D: pop %edi;");
    asm("loc_6DAEB2E: pop %esi;");
    asm("loc_6DAEB2F: pop %ebp;");
    asm("loc_6DAEB30: mov $0x16,%eax;");
    asm("loc_6DAEB35: pop %ebx;");
    asm("loc_6DAEB36: add $0xC,%esp;");
    asm("loc_6DAEB39: ret $0xC;");
    asm("loc_6DAEB3C: mov (%ebx),%eax;");
    asm("loc_6DAEB3E: mov 0x20(%edi),%ecx;");
    asm("loc_6DAEB41: mov %ecx,(%eax);");
    asm("loc_6DAEB43: add $4,%eax;");
    asm("loc_6DAEB46: mov %eax,(%ebx);");
    asm("loc_6DAEB48: mov (%esi),%edx;");
    asm("loc_6DAEB4A: mov 4(%esi),%ecx;");
    asm("loc_6DAEB4D: add $0xC,%edx;");
    asm("loc_6DAEB50: mov %edx,%eax;");
    asm("loc_6DAEB52: cmp %ecx,%eax;");
    asm("loc_6DAEB54: mov %edx,(%esi);");
    asm("loc_6DAEB56: jbe loc_6DAEB5F;");
    asm("loc_6DAEB58: movl $0x16,0xC(%esi);");
    asm("loc_6DAEB5F: mov 0x1C(%edi),%eax;");
    asm("loc_6DAEB62: test %eax,%eax;");
    asm("loc_6DAEB64: je loc_6DAEB75;");
    asm("loc_6DAEB66: pop %edi;");
    asm("loc_6DAEB67: pop %esi;");
    asm("loc_6DAEB68: pop %ebp;");
    asm("loc_6DAEB69: mov $0x16,%eax;");
    asm("loc_6DAEB6E: pop %ebx;");
    asm("loc_6DAEB6F: add $0xC,%esp;");
    asm("loc_6DAEB72: ret $0xC;");
    asm("loc_6DAEB75: mov 0x24(%edi),%edx;");
    asm("loc_6DAEB78: mov 0x2C(%edi),%ecx;");
    asm("loc_6DAEB7B: mov (%ebx),%ebp;");
    asm("loc_6DAEB7D: mov 0x28(%edi),%eax;");
    asm("loc_6DAEB80: mov %edx,0x10(%esp);");
    asm("loc_6DAEB84: lea 0x10(%esp),%edx;");
    asm("loc_6DAEB88: mov %ecx,0x18(%esp);");
    asm("loc_6DAEB8C: push %edx;");
    asm("loc_6DAEB8D: mov %ebp,%ecx;");
    asm("loc_6DAEB8F: mov %eax,0x18(%esp);");
    asm("loc_6DAEB93: call _sub_6D8F510;");
    asm("loc_6DAEB98: add $0xC,%ebp;");
    asm("loc_6DAEB9B: mov %ebp,(%ebx);");
    asm("loc_6DAEB9D: mov (%esi),%edx;");
    asm("loc_6DAEB9F: mov 4(%esi),%ecx;");
    asm("loc_6DAEBA2: add $4,%edx;");
    asm("loc_6DAEBA5: mov %edx,%eax;");
    asm("loc_6DAEBA7: cmp %ecx,%eax;");
    asm("loc_6DAEBA9: mov %edx,(%esi);");
    asm("loc_6DAEBAB: mov $0x16,%ebp;");
    asm("loc_6DAEBB0: jbe loc_6DAEBB5;");
    asm("loc_6DAEBB2: mov %ebp,0xC(%esi);");
    asm("loc_6DAEBB5: mov 0x1C(%edi),%eax;");
    asm("loc_6DAEBB8: test %eax,%eax;");
    asm("loc_6DAEBBA: je loc_6DAEBC8;");
    asm("loc_6DAEBBC: pop %edi;");
    asm("loc_6DAEBBD: pop %esi;");
    asm("loc_6DAEBBE: mov %ebp,%eax;");
    asm("loc_6DAEBC0: pop %ebp;");
    asm("loc_6DAEBC1: pop %ebx;");
    asm("loc_6DAEBC2: add $0xC,%esp;");
    asm("loc_6DAEBC5: ret $0xC;");
    asm("loc_6DAEBC8: mov (%ebx),%eax;");
    asm("loc_6DAEBCA: mov 0x30(%edi),%ecx;");
    asm("loc_6DAEBCD: mov %ecx,(%eax);");
    asm("loc_6DAEBCF: add $4,%eax;");
    asm("loc_6DAEBD2: mov %eax,(%ebx);");
    asm("loc_6DAEBD4: mov (%esi),%edx;");
    asm("loc_6DAEBD6: mov 4(%esi),%ecx;");
    asm("loc_6DAEBD9: add $4,%edx;");
    asm("loc_6DAEBDC: mov %edx,%eax;");
    asm("loc_6DAEBDE: cmp %ecx,%eax;");
    asm("loc_6DAEBE0: mov %edx,(%esi);");
    asm("loc_6DAEBE2: jbe loc_6DAEBE7;");
    asm("loc_6DAEBE4: mov %ebp,0xC(%esi);");
    asm("loc_6DAEBE7: mov 0x1C(%edi),%eax;");
    asm("loc_6DAEBEA: test %eax,%eax;");
    asm("loc_6DAEBEC: je loc_6DAEBFA;");
    asm("loc_6DAEBEE: pop %edi;");
    asm("loc_6DAEBEF: pop %esi;");
    asm("loc_6DAEBF0: mov %ebp,%eax;");
    asm("loc_6DAEBF2: pop %ebp;");
    asm("loc_6DAEBF3: pop %ebx;");
    asm("loc_6DAEBF4: add $0xC,%esp;");
    asm("loc_6DAEBF7: ret $0xC;");
    asm("loc_6DAEBFA: mov (%ebx),%eax;");
    asm("loc_6DAEBFC: mov 0x34(%edi),%edx;");
    asm("loc_6DAEBFF: mov %edx,(%eax);");
    asm("loc_6DAEC01: add $4,%eax;");
    asm("loc_6DAEC04: mov %eax,(%ebx);");
    asm("loc_6DAEC06: mov (%esi),%edx;");
    asm("loc_6DAEC08: mov 4(%esi),%ecx;");
    asm("loc_6DAEC0B: add $4,%edx;");
    asm("loc_6DAEC0E: mov %edx,%eax;");
    asm("loc_6DAEC10: cmp %ecx,%eax;");
    asm("loc_6DAEC12: mov %edx,(%esi);");
    asm("loc_6DAEC14: jbe loc_6DAEC19;");
    asm("loc_6DAEC16: mov %ebp,0xC(%esi);");
    asm("loc_6DAEC19: mov 0x1C(%edi),%eax;");
    asm("loc_6DAEC1C: test %eax,%eax;");
    asm("loc_6DAEC1E: je loc_6DAEC2C;");
    asm("loc_6DAEC20: pop %edi;");
    asm("loc_6DAEC21: pop %esi;");
    asm("loc_6DAEC22: mov %ebp,%eax;");
    asm("loc_6DAEC24: pop %ebp;");
    asm("loc_6DAEC25: pop %ebx;");
    asm("loc_6DAEC26: add $0xC,%esp;");
    asm("loc_6DAEC29: ret $0xC;");
    asm("loc_6DAEC2C: mov (%ebx),%eax;");
    asm("loc_6DAEC2E: mov 0x38(%edi),%ecx;");
    asm("loc_6DAEC31: mov %ecx,(%eax);");
    asm("loc_6DAEC33: mov 0x14(%edi),%edx;");
    asm("loc_6DAEC36: push %esi;");
    asm("loc_6DAEC37: push %edx;");
    asm("loc_6DAEC38: add $4,%eax;");
    asm("loc_6DAEC3B: push %ebx;");
    asm("loc_6DAEC3C: mov %edi,%ecx;");
    asm("loc_6DAEC3E: mov %eax,(%ebx);");
    asm("loc_6DAEC40: call _sub_6DA13C0;");
    asm("loc_6DAEC45: test %eax,%eax;");
    asm("loc_6DAEC47: mov %eax,0x1C(%edi);");
    asm("loc_6DAEC4A: je loc_6DAEC58;");
    asm("loc_6DAEC4C: pop %edi;");
    asm("loc_6DAEC4D: pop %esi;");
    asm("loc_6DAEC4E: mov %ebp,%eax;");
    asm("loc_6DAEC50: pop %ebp;");
    asm("loc_6DAEC51: pop %ebx;");
    asm("loc_6DAEC52: add $0xC,%esp;");
    asm("loc_6DAEC55: ret $0xC;");
    asm("loc_6DAEC58: mov (%esi),%eax;");
    asm("loc_6DAEC5A: mov 0x28(%esp),%ecx;");
    asm("loc_6DAEC5E: mov %eax,(%ecx);");
    asm("loc_6DAEC60: mov 0xC(%edi),%edx;");
    asm("loc_6DAEC63: push %edx;");
    asm("loc_6DAEC64: call _sub_6DA16B0;");
    asm("loc_6DAEC69: mov %eax,%ecx;");
    asm("loc_6DAEC6B: mov (%ecx),%edi;");
    asm("loc_6DAEC6D: mov 0x18(%ecx),%edx;");
    asm("loc_6DAEC70: add $4,%esp;");
    asm("loc_6DAEC73: inc %edi;");
    asm("loc_6DAEC74: mov %edi,(%ecx);");
    asm("loc_6DAEC76: mov (%esi),%eax;");
    asm("loc_6DAEC78: add %eax,%edx;");
    asm("loc_6DAEC7A: mov 0x10(%ecx),%eax;");
    asm("loc_6DAEC7D: mov %edx,0x18(%ecx);");
    asm("loc_6DAEC80: mov (%esi),%esi;");
    asm("loc_6DAEC82: cmp %eax,%esi;");
    asm("loc_6DAEC84: jbe loc_6DAEC89;");
    asm("loc_6DAEC86: mov %esi,0x10(%ecx);");
    asm("loc_6DAEC89: mov 0x18(%ecx),%eax;");
    asm("loc_6DAEC8C: xor %edx,%edx;");
    asm("loc_6DAEC8E: div %edi;");
    asm("loc_6DAEC90: pop %edi;");
    asm("loc_6DAEC91: pop %esi;");
    asm("loc_6DAEC92: pop %ebp;");
    asm("loc_6DAEC93: pop %ebx;");
    asm("loc_6DAEC94: mov %eax,8(%ecx);");
    asm("loc_6DAEC97: xor %eax,%eax;");
    asm("loc_6DAEC99: add $0xC,%esp;");
    asm("loc_6DAEC9C: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAECA0() // _sub_6DAECA0
{
    __DEBUG_ASM(6DAECA0);
    // chunk 0x6DAECA0 _sub_6DAECA0
    asm("loc_6DAECA0: mov 8(%esp),%eax;");
    asm("loc_6DAECA4: push %ebx;");
    asm("loc_6DAECA5: push %ebp;");
    asm("loc_6DAECA6: push %esi;");
    asm("loc_6DAECA7: push %edi;");
    asm("loc_6DAECA8: mov %ecx,%edi;");
    asm("loc_6DAECAA: mov 0x14(%esp),%ecx;");
    asm("loc_6DAECAE: lea 0x10(%edi),%esi;");
    asm("loc_6DAECB1: push %esi;");
    asm("loc_6DAECB2: push %eax;");
    asm("loc_6DAECB3: mov %ecx,8(%esi);");
    asm("loc_6DAECB6: lea 0x18(%edi),%ebx;");
    asm("loc_6DAECB9: push %ebx;");
    asm("loc_6DAECBA: mov %edi,%ecx;");
    asm("loc_6DAECBC: mov %eax,4(%esi);");
    asm("loc_6DAECBF: movl $0,(%esi);");
    asm("loc_6DAECC5: movl $0,0xC(%esi);");
    asm("loc_6DAECCC: call _sub_6DA13C0;");
    asm("loc_6DAECD1: test %eax,%eax;");
    asm("loc_6DAECD3: mov %eax,0x1C(%edi);");
    asm("loc_6DAECD6: je loc_6DAECE4;");
    asm("loc_6DAECD8: pop %edi;");
    asm("loc_6DAECD9: pop %esi;");
    asm("loc_6DAECDA: pop %ebp;");
    asm("loc_6DAECDB: mov $0x17,%eax;");
    asm("loc_6DAECE0: pop %ebx;");
    asm("loc_6DAECE1: ret $0xC;");
    asm("loc_6DAECE4: mov (%esi),%edx;");
    asm("loc_6DAECE6: mov 4(%esi),%ecx;");
    asm("loc_6DAECE9: add $4,%edx;");
    asm("loc_6DAECEC: mov %edx,%eax;");
    asm("loc_6DAECEE: cmp %ecx,%eax;");
    asm("loc_6DAECF0: mov %edx,(%esi);");
    asm("loc_6DAECF2: jbe loc_6DAECFB;");
    asm("loc_6DAECF4: movl $0x17,0xC(%esi);");
    asm("loc_6DAECFB: mov 0x1C(%edi),%eax;");
    asm("loc_6DAECFE: test %eax,%eax;");
    asm("loc_6DAED00: jne loc_6DAEE29;");
    asm("loc_6DAED06: mov (%ebx),%eax;");
    asm("loc_6DAED08: mov (%eax),%edx;");
    asm("loc_6DAED0A: add $4,%eax;");
    asm("loc_6DAED0D: mov %edx,0x20(%edi);");
    asm("loc_6DAED10: mov %eax,(%ebx);");
    asm("loc_6DAED12: mov (%esi),%edx;");
    asm("loc_6DAED14: mov 4(%esi),%ecx;");
    asm("loc_6DAED17: add $0xC,%edx;");
    asm("loc_6DAED1A: mov %edx,%eax;");
    asm("loc_6DAED1C: cmp %ecx,%eax;");
    asm("loc_6DAED1E: mov %edx,(%esi);");
    asm("loc_6DAED20: jbe loc_6DAED29;");
    asm("loc_6DAED22: movl $0x17,0xC(%esi);");
    asm("loc_6DAED29: mov 0x1C(%edi),%eax;");
    asm("loc_6DAED2C: test %eax,%eax;");
    asm("loc_6DAED2E: jne loc_6DAEE29;");
    asm("loc_6DAED34: mov (%ebx),%ebp;");
    asm("loc_6DAED36: push %ebp;");
    asm("loc_6DAED37: lea 0x24(%edi),%ecx;");
    asm("loc_6DAED3A: call _sub_6D8F510;");
    asm("loc_6DAED3F: add $0xC,%ebp;");
    asm("loc_6DAED42: mov %ebp,(%ebx);");
    asm("loc_6DAED44: mov (%esi),%edx;");
    asm("loc_6DAED46: mov 4(%esi),%ecx;");
    asm("loc_6DAED49: add $4,%edx;");
    asm("loc_6DAED4C: mov %edx,%eax;");
    asm("loc_6DAED4E: cmp %ecx,%eax;");
    asm("loc_6DAED50: mov %edx,(%esi);");
    asm("loc_6DAED52: mov $0x17,%ebp;");
    asm("loc_6DAED57: jbe loc_6DAED5C;");
    asm("loc_6DAED59: mov %ebp,0xC(%esi);");
    asm("loc_6DAED5C: mov 0x1C(%edi),%eax;");
    asm("loc_6DAED5F: test %eax,%eax;");
    asm("loc_6DAED61: jne loc_6DAEE29;");
    asm("loc_6DAED67: mov (%ebx),%eax;");
    asm("loc_6DAED69: mov (%eax),%ecx;");
    asm("loc_6DAED6B: add $4,%eax;");
    asm("loc_6DAED6E: mov %eax,(%ebx);");
    asm("loc_6DAED70: mov %ecx,0x30(%edi);");
    asm("loc_6DAED73: mov (%esi),%edx;");
    asm("loc_6DAED75: mov 4(%esi),%ecx;");
    asm("loc_6DAED78: add $4,%edx;");
    asm("loc_6DAED7B: mov %edx,%eax;");
    asm("loc_6DAED7D: cmp %ecx,%eax;");
    asm("loc_6DAED7F: mov %edx,(%esi);");
    asm("loc_6DAED81: jbe loc_6DAED86;");
    asm("loc_6DAED83: mov %ebp,0xC(%esi);");
    asm("loc_6DAED86: mov 0x1C(%edi),%eax;");
    asm("loc_6DAED89: test %eax,%eax;");
    asm("loc_6DAED8B: jne loc_6DAEE29;");
    asm("loc_6DAED91: mov (%ebx),%eax;");
    asm("loc_6DAED93: mov (%eax),%edx;");
    asm("loc_6DAED95: add $4,%eax;");
    asm("loc_6DAED98: mov %edx,0x34(%edi);");
    asm("loc_6DAED9B: mov %eax,(%ebx);");
    asm("loc_6DAED9D: mov (%esi),%edx;");
    asm("loc_6DAED9F: mov 4(%esi),%ecx;");
    asm("loc_6DAEDA2: add $4,%edx;");
    asm("loc_6DAEDA5: mov %edx,%eax;");
    asm("loc_6DAEDA7: cmp %ecx,%eax;");
    asm("loc_6DAEDA9: mov %edx,(%esi);");
    asm("loc_6DAEDAB: jbe loc_6DAEDB0;");
    asm("loc_6DAEDAD: mov %ebp,0xC(%esi);");
    asm("loc_6DAEDB0: mov 0x1C(%edi),%eax;");
    asm("loc_6DAEDB3: test %eax,%eax;");
    asm("loc_6DAEDB5: jne loc_6DAEE29;");
    asm("loc_6DAEDB7: mov (%ebx),%eax;");
    asm("loc_6DAEDB9: mov (%eax),%ecx;");
    asm("loc_6DAEDBB: mov 0x18(%esp),%edx;");
    asm("loc_6DAEDBF: push %esi;");
    asm("loc_6DAEDC0: push %edx;");
    asm("loc_6DAEDC1: mov %ecx,0x38(%edi);");
    asm("loc_6DAEDC4: add $4,%eax;");
    asm("loc_6DAEDC7: push %ebx;");
    asm("loc_6DAEDC8: mov %edi,%ecx;");
    asm("loc_6DAEDCA: mov %eax,(%ebx);");
    asm("loc_6DAEDCC: call _sub_6DA13C0;");
    asm("loc_6DAEDD1: test %eax,%eax;");
    asm("loc_6DAEDD3: mov %eax,0x1C(%edi);");
    asm("loc_6DAEDD6: je loc_6DAEDE1;");
    asm("loc_6DAEDD8: pop %edi;");
    asm("loc_6DAEDD9: pop %esi;");
    asm("loc_6DAEDDA: mov %ebp,%eax;");
    asm("loc_6DAEDDC: pop %ebp;");
    asm("loc_6DAEDDD: pop %ebx;");
    asm("loc_6DAEDDE: ret $0xC;");
    asm("loc_6DAEDE1: mov (%esi),%eax;");
    asm("loc_6DAEDE3: mov 0x1C(%esp),%ecx;");
    asm("loc_6DAEDE7: mov %eax,(%ecx);");
    asm("loc_6DAEDE9: mov 0xC(%edi),%edx;");
    asm("loc_6DAEDEC: push %edx;");
    asm("loc_6DAEDED: call _sub_6DA16B0;");
    asm("loc_6DAEDF2: mov %eax,%ecx;");
    asm("loc_6DAEDF4: mov 4(%ecx),%edi;");
    asm("loc_6DAEDF7: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAEDFA: mov 0x14(%ecx),%edx;");
    asm("loc_6DAEDFD: add $4,%esp;");
    asm("loc_6DAEE00: inc %edi;");
    asm("loc_6DAEE01: mov %edi,4(%ecx);");
    asm("loc_6DAEE04: mov (%esi),%eax;");
    asm("loc_6DAEE06: add $2,%eax;");
    asm("loc_6DAEE09: add %eax,%ebp;");
    asm("loc_6DAEE0B: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAEE0E: mov (%esi),%esi;");
    asm("loc_6DAEE10: add $2,%edx;");
    asm("loc_6DAEE13: cmp %edx,%esi;");
    asm("loc_6DAEE15: jbe loc_6DAEE1D;");
    asm("loc_6DAEE17: add $2,%esi;");
    asm("loc_6DAEE1A: mov %esi,0x14(%ecx);");
    asm("loc_6DAEE1D: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAEE20: xor %edx,%edx;");
    asm("loc_6DAEE22: div %edi;");
    asm("loc_6DAEE24: mov %eax,0xC(%ecx);");
    asm("loc_6DAEE27: xor %eax,%eax;");
    asm("loc_6DAEE29: pop %edi;");
    asm("loc_6DAEE2A: pop %esi;");
    asm("loc_6DAEE2B: pop %ebp;");
    asm("loc_6DAEE2C: pop %ebx;");
    asm("loc_6DAEE2D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAEE30() // _sub_6DAEE30
{
    __DEBUG_ASM(6DAEE30);
    // chunk 0x6DAEE30 _sub_6DAEE30
    asm("loc_6DAEE30: mov _data_6DB6618,%eax;");
    asm("loc_6DAEE35: mov %eax,_data_6DBC440;");
    asm("loc_6DAEE3A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAEE40() // _sub_6DAEE40
{
    __DEBUG_ASM(6DAEE40);
    // chunk 0x6DAEE40 _sub_6DAEE40
    asm("loc_6DAEE40: mov _data_6DB6618,%eax;");
    asm("loc_6DAEE45: mov %eax,_data_6DBC444;");
    asm("loc_6DAEE4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAEE50() // _sub_6DAEE50
{
    __DEBUG_ASM(6DAEE50);
    // chunk 0x6DAEE50 _sub_6DAEE50
    asm("loc_6DAEE50: mov _data_6DB661C,%eax;");
    asm("loc_6DAEE55: mov %eax,_data_6DBC43C;");
    asm("loc_6DAEE5A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAEE60() // _sub_6DAEE60
{
    __DEBUG_ASM(6DAEE60);
    // chunk 0x6DAEE60 _sub_6DAEE60
    asm("loc_6DAEE60: mov _data_6DB6624,%eax;");
    asm("loc_6DAEE65: mov %eax,_data_6DBC450;");
    asm("loc_6DAEE6A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAEE70() // _sub_6DAEE70
{
    __DEBUG_ASM(6DAEE70);
    // chunk 0x6DAEE70 _sub_6DAEE70
    asm("loc_6DAEE70: mov _data_6DB6624,%eax;");
    asm("loc_6DAEE75: mov %eax,_data_6DBC454;");
    asm("loc_6DAEE7A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAEE80() // _sub_6DAEE80
{
    __DEBUG_ASM(6DAEE80);
    // chunk 0x6DAEE80 _sub_6DAEE80
    asm("loc_6DAEE80: mov _data_6DB6628,%eax;");
    asm("loc_6DAEE85: mov %eax,_data_6DBC44C;");
    asm("loc_6DAEE8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAEE90() // _sub_6DAEE90
{
    __DEBUG_ASM(6DAEE90);
    // chunk 0x6DAEE90 _sub_6DAEE90
    asm("loc_6DAEE90: mov _data_6DB6630,%eax;");
    asm("loc_6DAEE95: mov %eax,_data_6DBC460;");
    asm("loc_6DAEE9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAEEA0() // _sub_6DAEEA0
{
    __DEBUG_ASM(6DAEEA0);
    // chunk 0x6DAEEA0 _sub_6DAEEA0
    asm("loc_6DAEEA0: mov _data_6DB6630,%eax;");
    asm("loc_6DAEEA5: mov %eax,_data_6DBC464;");
    asm("loc_6DAEEAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAEEB0() // _sub_6DAEEB0
{
    __DEBUG_ASM(6DAEEB0);
    // chunk 0x6DAEEB0 _sub_6DAEEB0
    asm("loc_6DAEEB0: mov _data_6DB6634,%eax;");
    asm("loc_6DAEEB5: mov %eax,_data_6DBC45C;");
    asm("loc_6DAEEBA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAEEC0() // _sub_6DAEEC0
{
    __DEBUG_ASM(6DAEEC0);
    // chunk 0x6DAEEC0 _sub_6DAEEC0
    asm("loc_6DAEEC0: mov 8(%esp),%eax;");
    asm("loc_6DAEEC4: push %ebx;");
    asm("loc_6DAEEC5: push %esi;");
    asm("loc_6DAEEC6: push %edi;");
    asm("loc_6DAEEC7: mov %ecx,%edi;");
    asm("loc_6DAEEC9: mov 0x10(%esp),%ecx;");
    asm("loc_6DAEECD: lea 0x10(%edi),%esi;");
    asm("loc_6DAEED0: mov %eax,4(%esi);");
    asm("loc_6DAEED3: mov (%ecx),%edx;");
    asm("loc_6DAEED5: mov %edx,8(%esi);");
    asm("loc_6DAEED8: movl $0,(%esi);");
    asm("loc_6DAEEDE: movl $0,0xC(%esi);");
    asm("loc_6DAEEE5: mov 0x14(%edi),%eax;");
    asm("loc_6DAEEE8: push %esi;");
    asm("loc_6DAEEE9: push %eax;");
    asm("loc_6DAEEEA: lea 0x18(%edi),%ebx;");
    asm("loc_6DAEEED: push %ebx;");
    asm("loc_6DAEEEE: mov %edi,%ecx;");
    asm("loc_6DAEEF0: call _sub_6DA1380;");
    asm("loc_6DAEEF5: test %eax,%eax;");
    asm("loc_6DAEEF7: mov %eax,0x1C(%edi);");
    asm("loc_6DAEEFA: je loc_6DAEF07;");
    asm("loc_6DAEEFC: pop %edi;");
    asm("loc_6DAEEFD: pop %esi;");
    asm("loc_6DAEEFE: mov $0x16,%eax;");
    asm("loc_6DAEF03: pop %ebx;");
    asm("loc_6DAEF04: ret $0xC;");
    asm("loc_6DAEF07: mov (%esi),%edx;");
    asm("loc_6DAEF09: mov 4(%esi),%ecx;");
    asm("loc_6DAEF0C: add $4,%edx;");
    asm("loc_6DAEF0F: mov %edx,%eax;");
    asm("loc_6DAEF11: cmp %ecx,%eax;");
    asm("loc_6DAEF13: mov %edx,(%esi);");
    asm("loc_6DAEF15: jbe loc_6DAEF1E;");
    asm("loc_6DAEF17: movl $0x16,0xC(%esi);");
    asm("loc_6DAEF1E: mov 0x1C(%edi),%eax;");
    asm("loc_6DAEF21: test %eax,%eax;");
    asm("loc_6DAEF23: je loc_6DAEF30;");
    asm("loc_6DAEF25: pop %edi;");
    asm("loc_6DAEF26: pop %esi;");
    asm("loc_6DAEF27: mov $0x16,%eax;");
    asm("loc_6DAEF2C: pop %ebx;");
    asm("loc_6DAEF2D: ret $0xC;");
    asm("loc_6DAEF30: mov (%ebx),%eax;");
    asm("loc_6DAEF32: mov 0x20(%edi),%ecx;");
    asm("loc_6DAEF35: mov %ecx,(%eax);");
    asm("loc_6DAEF37: add $4,%eax;");
    asm("loc_6DAEF3A: mov %eax,(%ebx);");
    asm("loc_6DAEF3C: mov (%esi),%edx;");
    asm("loc_6DAEF3E: mov 4(%esi),%ecx;");
    asm("loc_6DAEF41: add $4,%edx;");
    asm("loc_6DAEF44: mov %edx,%eax;");
    asm("loc_6DAEF46: cmp %ecx,%eax;");
    asm("loc_6DAEF48: mov %edx,(%esi);");
    asm("loc_6DAEF4A: jbe loc_6DAEF53;");
    asm("loc_6DAEF4C: movl $0x16,0xC(%esi);");
    asm("loc_6DAEF53: mov 0x1C(%edi),%eax;");
    asm("loc_6DAEF56: test %eax,%eax;");
    asm("loc_6DAEF58: je loc_6DAEF65;");
    asm("loc_6DAEF5A: pop %edi;");
    asm("loc_6DAEF5B: pop %esi;");
    asm("loc_6DAEF5C: mov $0x16,%eax;");
    asm("loc_6DAEF61: pop %ebx;");
    asm("loc_6DAEF62: ret $0xC;");
    asm("loc_6DAEF65: mov (%ebx),%eax;");
    asm("loc_6DAEF67: mov 0x24(%edi),%edx;");
    asm("loc_6DAEF6A: mov %edx,(%eax);");
    asm("loc_6DAEF6C: add $4,%eax;");
    asm("loc_6DAEF6F: mov %eax,(%ebx);");
    asm("loc_6DAEF71: mov (%esi),%edx;");
    asm("loc_6DAEF73: mov 4(%esi),%ecx;");
    asm("loc_6DAEF76: inc %edx;");
    asm("loc_6DAEF77: mov %edx,%eax;");
    asm("loc_6DAEF79: cmp %ecx,%eax;");
    asm("loc_6DAEF7B: mov %edx,(%esi);");
    asm("loc_6DAEF7D: jbe loc_6DAEF86;");
    asm("loc_6DAEF7F: movl $0x16,0xC(%esi);");
    asm("loc_6DAEF86: mov 0x1C(%edi),%eax;");
    asm("loc_6DAEF89: test %eax,%eax;");
    asm("loc_6DAEF8B: je loc_6DAEF98;");
    asm("loc_6DAEF8D: pop %edi;");
    asm("loc_6DAEF8E: pop %esi;");
    asm("loc_6DAEF8F: mov $0x16,%eax;");
    asm("loc_6DAEF94: pop %ebx;");
    asm("loc_6DAEF95: ret $0xC;");
    asm("loc_6DAEF98: mov (%ebx),%eax;");
    asm("loc_6DAEF9A: mov 0x28(%edi),%cl;");
    asm("loc_6DAEF9D: mov %cl,(%eax);");
    asm("loc_6DAEF9F: mov 0x14(%edi),%edx;");
    asm("loc_6DAEFA2: push %esi;");
    asm("loc_6DAEFA3: push %edx;");
    asm("loc_6DAEFA4: inc %eax;");
    asm("loc_6DAEFA5: push %ebx;");
    asm("loc_6DAEFA6: mov %edi,%ecx;");
    asm("loc_6DAEFA8: mov %eax,(%ebx);");
    asm("loc_6DAEFAA: call _sub_6DA13C0;");
    asm("loc_6DAEFAF: test %eax,%eax;");
    asm("loc_6DAEFB1: mov %eax,0x1C(%edi);");
    asm("loc_6DAEFB4: je loc_6DAEFC1;");
    asm("loc_6DAEFB6: pop %edi;");
    asm("loc_6DAEFB7: pop %esi;");
    asm("loc_6DAEFB8: mov $0x16,%eax;");
    asm("loc_6DAEFBD: pop %ebx;");
    asm("loc_6DAEFBE: ret $0xC;");
    asm("loc_6DAEFC1: mov (%esi),%eax;");
    asm("loc_6DAEFC3: mov 0x18(%esp),%ecx;");
    asm("loc_6DAEFC7: mov %eax,(%ecx);");
    asm("loc_6DAEFC9: mov 0xC(%edi),%edx;");
    asm("loc_6DAEFCC: push %edx;");
    asm("loc_6DAEFCD: call _sub_6DA16B0;");
    asm("loc_6DAEFD2: mov %eax,%ecx;");
    asm("loc_6DAEFD4: mov (%ecx),%edi;");
    asm("loc_6DAEFD6: mov 0x18(%ecx),%edx;");
    asm("loc_6DAEFD9: add $4,%esp;");
    asm("loc_6DAEFDC: inc %edi;");
    asm("loc_6DAEFDD: mov %edi,(%ecx);");
    asm("loc_6DAEFDF: mov (%esi),%eax;");
    asm("loc_6DAEFE1: add %eax,%edx;");
    asm("loc_6DAEFE3: mov 0x10(%ecx),%eax;");
    asm("loc_6DAEFE6: mov %edx,0x18(%ecx);");
    asm("loc_6DAEFE9: mov (%esi),%esi;");
    asm("loc_6DAEFEB: cmp %eax,%esi;");
    asm("loc_6DAEFED: jbe loc_6DAEFF2;");
    asm("loc_6DAEFEF: mov %esi,0x10(%ecx);");
    asm("loc_6DAEFF2: mov 0x18(%ecx),%eax;");
    asm("loc_6DAEFF5: xor %edx,%edx;");
    asm("loc_6DAEFF7: div %edi;");
    asm("loc_6DAEFF9: pop %edi;");
    asm("loc_6DAEFFA: pop %esi;");
    asm("loc_6DAEFFB: pop %ebx;");
    asm("loc_6DAEFFC: mov %eax,8(%ecx);");
    asm("loc_6DAEFFF: xor %eax,%eax;");
    asm("loc_6DAF001: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF010() // _sub_6DAF010
{
    __DEBUG_ASM(6DAF010);
    // chunk 0x6DAF010 _sub_6DAF010
    asm("loc_6DAF010: mov 4(%esp),%eax;");
    asm("loc_6DAF014: push %ebx;");
    asm("loc_6DAF015: push %ebp;");
    asm("loc_6DAF016: mov 0x10(%esp),%ebp;");
    asm("loc_6DAF01A: push %esi;");
    asm("loc_6DAF01B: push %edi;");
    asm("loc_6DAF01C: mov %ecx,%edi;");
    asm("loc_6DAF01E: lea 0x10(%edi),%esi;");
    asm("loc_6DAF021: push %esi;");
    asm("loc_6DAF022: push %ebp;");
    asm("loc_6DAF023: lea 0x18(%edi),%ebx;");
    asm("loc_6DAF026: push %ebx;");
    asm("loc_6DAF027: mov %ebp,4(%esi);");
    asm("loc_6DAF02A: mov %eax,8(%esi);");
    asm("loc_6DAF02D: movl $0,(%esi);");
    asm("loc_6DAF033: movl $0,0xC(%esi);");
    asm("loc_6DAF03A: call _sub_6DA13C0;");
    asm("loc_6DAF03F: test %eax,%eax;");
    asm("loc_6DAF041: mov %eax,0x1C(%edi);");
    asm("loc_6DAF044: je loc_6DAF052;");
    asm("loc_6DAF046: pop %edi;");
    asm("loc_6DAF047: pop %esi;");
    asm("loc_6DAF048: pop %ebp;");
    asm("loc_6DAF049: mov $0x17,%eax;");
    asm("loc_6DAF04E: pop %ebx;");
    asm("loc_6DAF04F: ret $0xC;");
    asm("loc_6DAF052: mov (%esi),%edx;");
    asm("loc_6DAF054: mov 4(%esi),%ecx;");
    asm("loc_6DAF057: add $4,%edx;");
    asm("loc_6DAF05A: mov %edx,%eax;");
    asm("loc_6DAF05C: cmp %ecx,%eax;");
    asm("loc_6DAF05E: mov %edx,(%esi);");
    asm("loc_6DAF060: mov $0x17,%ecx;");
    asm("loc_6DAF065: jbe loc_6DAF06A;");
    asm("loc_6DAF067: mov %ecx,0xC(%esi);");
    asm("loc_6DAF06A: mov 0x1C(%edi),%eax;");
    asm("loc_6DAF06D: test %eax,%eax;");
    asm("loc_6DAF06F: jne loc_6DAF130;");
    asm("loc_6DAF075: mov (%ebx),%eax;");
    asm("loc_6DAF077: mov (%eax),%edx;");
    asm("loc_6DAF079: add $4,%eax;");
    asm("loc_6DAF07C: mov %eax,(%ebx);");
    asm("loc_6DAF07E: mov %edx,0x20(%edi);");
    asm("loc_6DAF081: mov (%esi),%eax;");
    asm("loc_6DAF083: mov 4(%esi),%edx;");
    asm("loc_6DAF086: add $4,%eax;");
    asm("loc_6DAF089: cmp %edx,%eax;");
    asm("loc_6DAF08B: mov %eax,(%esi);");
    asm("loc_6DAF08D: jbe loc_6DAF092;");
    asm("loc_6DAF08F: mov %ecx,0xC(%esi);");
    asm("loc_6DAF092: mov 0x1C(%edi),%eax;");
    asm("loc_6DAF095: test %eax,%eax;");
    asm("loc_6DAF097: jne loc_6DAF130;");
    asm("loc_6DAF09D: mov (%ebx),%eax;");
    asm("loc_6DAF09F: mov (%eax),%edx;");
    asm("loc_6DAF0A1: add $4,%eax;");
    asm("loc_6DAF0A4: mov %eax,(%ebx);");
    asm("loc_6DAF0A6: mov %edx,0x24(%edi);");
    asm("loc_6DAF0A9: mov (%esi),%eax;");
    asm("loc_6DAF0AB: mov 4(%esi),%edx;");
    asm("loc_6DAF0AE: inc %eax;");
    asm("loc_6DAF0AF: cmp %edx,%eax;");
    asm("loc_6DAF0B1: mov %eax,(%esi);");
    asm("loc_6DAF0B3: jbe loc_6DAF0B8;");
    asm("loc_6DAF0B5: mov %ecx,0xC(%esi);");
    asm("loc_6DAF0B8: mov 0x1C(%edi),%eax;");
    asm("loc_6DAF0BB: test %eax,%eax;");
    asm("loc_6DAF0BD: jne loc_6DAF130;");
    asm("loc_6DAF0BF: mov (%ebx),%eax;");
    asm("loc_6DAF0C1: mov (%eax),%cl;");
    asm("loc_6DAF0C3: push %esi;");
    asm("loc_6DAF0C4: push %ebp;");
    asm("loc_6DAF0C5: mov %cl,0x28(%edi);");
    asm("loc_6DAF0C8: inc %eax;");
    asm("loc_6DAF0C9: push %ebx;");
    asm("loc_6DAF0CA: mov %edi,%ecx;");
    asm("loc_6DAF0CC: mov %eax,(%ebx);");
    asm("loc_6DAF0CE: call _sub_6DA13C0;");
    asm("loc_6DAF0D3: test %eax,%eax;");
    asm("loc_6DAF0D5: mov %eax,0x1C(%edi);");
    asm("loc_6DAF0D8: je loc_6DAF0E6;");
    asm("loc_6DAF0DA: pop %edi;");
    asm("loc_6DAF0DB: pop %esi;");
    asm("loc_6DAF0DC: pop %ebp;");
    asm("loc_6DAF0DD: mov $0x17,%eax;");
    asm("loc_6DAF0E2: pop %ebx;");
    asm("loc_6DAF0E3: ret $0xC;");
    asm("loc_6DAF0E6: mov (%esi),%edx;");
    asm("loc_6DAF0E8: mov 0x1C(%esp),%eax;");
    asm("loc_6DAF0EC: mov %edx,(%eax);");
    asm("loc_6DAF0EE: mov 0xC(%edi),%ecx;");
    asm("loc_6DAF0F1: push %ecx;");
    asm("loc_6DAF0F2: call _sub_6DA16B0;");
    asm("loc_6DAF0F7: mov %eax,%ecx;");
    asm("loc_6DAF0F9: mov 4(%ecx),%edx;");
    asm("loc_6DAF0FC: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAF0FF: mov 0x14(%ecx),%eax;");
    asm("loc_6DAF102: add $4,%esp;");
    asm("loc_6DAF105: inc %edx;");
    asm("loc_6DAF106: mov %edx,4(%ecx);");
    asm("loc_6DAF109: mov %edx,%edi;");
    asm("loc_6DAF10B: mov (%esi),%edx;");
    asm("loc_6DAF10D: add $2,%edx;");
    asm("loc_6DAF110: add %edx,%ebp;");
    asm("loc_6DAF112: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAF115: mov (%esi),%esi;");
    asm("loc_6DAF117: add $2,%eax;");
    asm("loc_6DAF11A: cmp %eax,%esi;");
    asm("loc_6DAF11C: jbe loc_6DAF124;");
    asm("loc_6DAF11E: add $2,%esi;");
    asm("loc_6DAF121: mov %esi,0x14(%ecx);");
    asm("loc_6DAF124: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAF127: xor %edx,%edx;");
    asm("loc_6DAF129: div %edi;");
    asm("loc_6DAF12B: mov %eax,0xC(%ecx);");
    asm("loc_6DAF12E: xor %eax,%eax;");
    asm("loc_6DAF130: pop %edi;");
    asm("loc_6DAF131: pop %esi;");
    asm("loc_6DAF132: pop %ebp;");
    asm("loc_6DAF133: pop %ebx;");
    asm("loc_6DAF134: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF140() // _sub_6DAF140
{
    __DEBUG_ASM(6DAF140);
    // chunk 0x6DAF140 _sub_6DAF140
    asm("loc_6DAF140: mov _data_6DB663C,%eax;");
    asm("loc_6DAF145: mov %eax,_data_6DBC470;");
    asm("loc_6DAF14A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF150() // _sub_6DAF150
{
    __DEBUG_ASM(6DAF150);
    // chunk 0x6DAF150 _sub_6DAF150
    asm("loc_6DAF150: mov _data_6DB663C,%eax;");
    asm("loc_6DAF155: mov %eax,_data_6DBC474;");
    asm("loc_6DAF15A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF160() // _sub_6DAF160
{
    __DEBUG_ASM(6DAF160);
    // chunk 0x6DAF160 _sub_6DAF160
    asm("loc_6DAF160: mov _data_6DB6640,%eax;");
    asm("loc_6DAF165: mov %eax,_data_6DBC46C;");
    asm("loc_6DAF16A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF170() // _sub_6DAF170
{
    __DEBUG_ASM(6DAF170);
    // chunk 0x6DAF170 _sub_6DAF170
    asm("loc_6DAF170: mov _data_6DB6648,%eax;");
    asm("loc_6DAF175: mov %eax,_data_6DBC480;");
    asm("loc_6DAF17A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF180() // _sub_6DAF180
{
    __DEBUG_ASM(6DAF180);
    // chunk 0x6DAF180 _sub_6DAF180
    asm("loc_6DAF180: mov _data_6DB6648,%eax;");
    asm("loc_6DAF185: mov %eax,_data_6DBC484;");
    asm("loc_6DAF18A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF190() // _sub_6DAF190
{
    __DEBUG_ASM(6DAF190);
    // chunk 0x6DAF190 _sub_6DAF190
    asm("loc_6DAF190: mov _data_6DB664C,%eax;");
    asm("loc_6DAF195: mov %eax,_data_6DBC47C;");
    asm("loc_6DAF19A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF1A0() // _sub_6DAF1A0
{
    __DEBUG_ASM(6DAF1A0);
    // chunk 0x6DAF1A0 _sub_6DAF1A0
    asm("loc_6DAF1A0: mov _data_6DB6654,%eax;");
    asm("loc_6DAF1A5: mov %eax,_data_6DBC490;");
    asm("loc_6DAF1AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF1B0() // _sub_6DAF1B0
{
    __DEBUG_ASM(6DAF1B0);
    // chunk 0x6DAF1B0 _sub_6DAF1B0
    asm("loc_6DAF1B0: mov _data_6DB6654,%eax;");
    asm("loc_6DAF1B5: mov %eax,_data_6DBC494;");
    asm("loc_6DAF1BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF1C0() // _sub_6DAF1C0
{
    __DEBUG_ASM(6DAF1C0);
    // chunk 0x6DAF1C0 _sub_6DAF1C0
    asm("loc_6DAF1C0: mov _data_6DB6658,%eax;");
    asm("loc_6DAF1C5: mov %eax,_data_6DBC48C;");
    asm("loc_6DAF1CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF1D0() // _sub_6DAF1D0
{
    __DEBUG_ASM(6DAF1D0);
    // chunk 0x6DAF1D0 _sub_6DAF1D0
    asm("loc_6DAF1D0: mov _data_6DB6660,%eax;");
    asm("loc_6DAF1D5: mov %eax,_data_6DBC4A0;");
    asm("loc_6DAF1DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF1E0() // _sub_6DAF1E0
{
    __DEBUG_ASM(6DAF1E0);
    // chunk 0x6DAF1E0 _sub_6DAF1E0
    asm("loc_6DAF1E0: mov _data_6DB6660,%eax;");
    asm("loc_6DAF1E5: mov %eax,_data_6DBC4A4;");
    asm("loc_6DAF1EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF1F0() // _sub_6DAF1F0
{
    __DEBUG_ASM(6DAF1F0);
    // chunk 0x6DAF1F0 _sub_6DAF1F0
    asm("loc_6DAF1F0: mov _data_6DB6664,%eax;");
    asm("loc_6DAF1F5: mov %eax,_data_6DBC49C;");
    asm("loc_6DAF1FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF200() // _sub_6DAF200
{
    __DEBUG_ASM(6DAF200);
    // chunk 0x6DAF200 _sub_6DAF200
    asm("loc_6DAF200: mov _data_6DB666C,%eax;");
    asm("loc_6DAF205: mov %eax,_data_6DBC4B0;");
    asm("loc_6DAF20A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF210() // _sub_6DAF210
{
    __DEBUG_ASM(6DAF210);
    // chunk 0x6DAF210 _sub_6DAF210
    asm("loc_6DAF210: mov _data_6DB666C,%eax;");
    asm("loc_6DAF215: mov %eax,_data_6DBC4B4;");
    asm("loc_6DAF21A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF220() // _sub_6DAF220
{
    __DEBUG_ASM(6DAF220);
    // chunk 0x6DAF220 _sub_6DAF220
    asm("loc_6DAF220: mov _data_6DB6670,%eax;");
    asm("loc_6DAF225: mov %eax,_data_6DBC4AC;");
    asm("loc_6DAF22A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF230() // _sub_6DAF230
{
    __DEBUG_ASM(6DAF230);
    // chunk 0x6DAF230 _sub_6DAF230
    asm("loc_6DAF230: mov 4(%esp),%eax;");
    asm("loc_6DAF234: push %ebx;");
    asm("loc_6DAF235: push %ebp;");
    asm("loc_6DAF236: mov 0x10(%esp),%ebp;");
    asm("loc_6DAF23A: push %esi;");
    asm("loc_6DAF23B: push %edi;");
    asm("loc_6DAF23C: mov %ecx,%edi;");
    asm("loc_6DAF23E: lea 0x10(%edi),%esi;");
    asm("loc_6DAF241: push %esi;");
    asm("loc_6DAF242: push %ebp;");
    asm("loc_6DAF243: lea 0x18(%edi),%ebx;");
    asm("loc_6DAF246: push %ebx;");
    asm("loc_6DAF247: mov %ebp,4(%esi);");
    asm("loc_6DAF24A: mov %eax,8(%esi);");
    asm("loc_6DAF24D: movl $0,(%esi);");
    asm("loc_6DAF253: movl $0,0xC(%esi);");
    asm("loc_6DAF25A: call _sub_6DA13C0;");
    asm("loc_6DAF25F: test %eax,%eax;");
    asm("loc_6DAF261: mov %eax,0x1C(%edi);");
    asm("loc_6DAF264: je loc_6DAF272;");
    asm("loc_6DAF266: pop %edi;");
    asm("loc_6DAF267: pop %esi;");
    asm("loc_6DAF268: pop %ebp;");
    asm("loc_6DAF269: mov $0x17,%eax;");
    asm("loc_6DAF26E: pop %ebx;");
    asm("loc_6DAF26F: ret $0xC;");
    asm("loc_6DAF272: mov (%esi),%edx;");
    asm("loc_6DAF274: mov 4(%esi),%ecx;");
    asm("loc_6DAF277: add $4,%edx;");
    asm("loc_6DAF27A: mov %edx,%eax;");
    asm("loc_6DAF27C: cmp %ecx,%eax;");
    asm("loc_6DAF27E: mov %edx,(%esi);");
    asm("loc_6DAF280: jbe loc_6DAF289;");
    asm("loc_6DAF282: movl $0x17,0xC(%esi);");
    asm("loc_6DAF289: mov 0x1C(%edi),%eax;");
    asm("loc_6DAF28C: test %eax,%eax;");
    asm("loc_6DAF28E: jne loc_6DAF32B;");
    asm("loc_6DAF294: mov (%ebx),%eax;");
    asm("loc_6DAF296: mov (%eax),%ecx;");
    asm("loc_6DAF298: add $4,%eax;");
    asm("loc_6DAF29B: mov %eax,(%ebx);");
    asm("loc_6DAF29D: mov %ecx,0x20(%edi);");
    asm("loc_6DAF2A0: mov (%esi),%edx;");
    asm("loc_6DAF2A2: mov 4(%esi),%ecx;");
    asm("loc_6DAF2A5: inc %edx;");
    asm("loc_6DAF2A6: mov %edx,%eax;");
    asm("loc_6DAF2A8: cmp %ecx,%eax;");
    asm("loc_6DAF2AA: mov %edx,(%esi);");
    asm("loc_6DAF2AC: jbe loc_6DAF2B5;");
    asm("loc_6DAF2AE: movl $0x17,0xC(%esi);");
    asm("loc_6DAF2B5: mov 0x1C(%edi),%eax;");
    asm("loc_6DAF2B8: test %eax,%eax;");
    asm("loc_6DAF2BA: jne loc_6DAF32B;");
    asm("loc_6DAF2BC: mov (%ebx),%eax;");
    asm("loc_6DAF2BE: mov (%eax),%dl;");
    asm("loc_6DAF2C0: push %esi;");
    asm("loc_6DAF2C1: push %ebp;");
    asm("loc_6DAF2C2: inc %eax;");
    asm("loc_6DAF2C3: push %ebx;");
    asm("loc_6DAF2C4: mov %edi,%ecx;");
    asm("loc_6DAF2C6: mov %dl,0x24(%edi);");
    asm("loc_6DAF2C9: mov %eax,(%ebx);");
    asm("loc_6DAF2CB: call _sub_6DA13C0;");
    asm("loc_6DAF2D0: test %eax,%eax;");
    asm("loc_6DAF2D2: mov %eax,0x1C(%edi);");
    asm("loc_6DAF2D5: je loc_6DAF2E3;");
    asm("loc_6DAF2D7: pop %edi;");
    asm("loc_6DAF2D8: pop %esi;");
    asm("loc_6DAF2D9: pop %ebp;");
    asm("loc_6DAF2DA: mov $0x17,%eax;");
    asm("loc_6DAF2DF: pop %ebx;");
    asm("loc_6DAF2E0: ret $0xC;");
    asm("loc_6DAF2E3: mov (%esi),%eax;");
    asm("loc_6DAF2E5: mov 0x1C(%esp),%ecx;");
    asm("loc_6DAF2E9: mov %eax,(%ecx);");
    asm("loc_6DAF2EB: mov 0xC(%edi),%edx;");
    asm("loc_6DAF2EE: push %edx;");
    asm("loc_6DAF2EF: call _sub_6DA16B0;");
    asm("loc_6DAF2F4: mov %eax,%ecx;");
    asm("loc_6DAF2F6: mov 4(%ecx),%edi;");
    asm("loc_6DAF2F9: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAF2FC: mov 0x14(%ecx),%edx;");
    asm("loc_6DAF2FF: add $4,%esp;");
    asm("loc_6DAF302: inc %edi;");
    asm("loc_6DAF303: mov %edi,4(%ecx);");
    asm("loc_6DAF306: mov (%esi),%eax;");
    asm("loc_6DAF308: add $2,%eax;");
    asm("loc_6DAF30B: add %eax,%ebp;");
    asm("loc_6DAF30D: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAF310: mov (%esi),%esi;");
    asm("loc_6DAF312: add $2,%edx;");
    asm("loc_6DAF315: cmp %edx,%esi;");
    asm("loc_6DAF317: jbe loc_6DAF31F;");
    asm("loc_6DAF319: add $2,%esi;");
    asm("loc_6DAF31C: mov %esi,0x14(%ecx);");
    asm("loc_6DAF31F: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAF322: xor %edx,%edx;");
    asm("loc_6DAF324: div %edi;");
    asm("loc_6DAF326: mov %eax,0xC(%ecx);");
    asm("loc_6DAF329: xor %eax,%eax;");
    asm("loc_6DAF32B: pop %edi;");
    asm("loc_6DAF32C: pop %esi;");
    asm("loc_6DAF32D: pop %ebp;");
    asm("loc_6DAF32E: pop %ebx;");
    asm("loc_6DAF32F: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF340() // _sub_6DAF340
{
    __DEBUG_ASM(6DAF340);
    // chunk 0x6DAF340 _sub_6DAF340
    asm("loc_6DAF340: mov _data_6DB6678,%eax;");
    asm("loc_6DAF345: mov %eax,_data_6DBC4C0;");
    asm("loc_6DAF34A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF350() // _sub_6DAF350
{
    __DEBUG_ASM(6DAF350);
    // chunk 0x6DAF350 _sub_6DAF350
    asm("loc_6DAF350: mov _data_6DB6678,%eax;");
    asm("loc_6DAF355: mov %eax,_data_6DBC4C4;");
    asm("loc_6DAF35A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF360() // _sub_6DAF360
{
    __DEBUG_ASM(6DAF360);
    // chunk 0x6DAF360 _sub_6DAF360
    asm("loc_6DAF360: mov _data_6DB667C,%eax;");
    asm("loc_6DAF365: mov %eax,_data_6DBC4BC;");
    asm("loc_6DAF36A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF370() // _sub_6DAF370
{
    __DEBUG_ASM(6DAF370);
    // chunk 0x6DAF370 _sub_6DAF370
    asm("loc_6DAF370: mov 0x20(%ecx),%eax;");
    asm("loc_6DAF373: mov 4(%esp),%ecx;");
    asm("loc_6DAF377: push %esi;");
    asm("loc_6DAF378: mov _import_6DB3194,%esi;");
    asm("loc_6DAF37E: push $_data_6DB3D88;");
    asm("loc_6DAF383: push %eax;");
    asm("loc_6DAF384: push $_data_6DB668C;");
    asm("loc_6DAF389: push %ecx;");
    asm("loc_6DAF38A: call *%esi;");
    asm("loc_6DAF38C: add $8,%esp;");
    asm("loc_6DAF38F: mov %eax,%ecx;");
    asm("loc_6DAF391: calll *_import_6DB319C;");
    asm("loc_6DAF397: push %eax;");
    asm("loc_6DAF398: call *%esi;");
    asm("loc_6DAF39A: add $8,%esp;");
    asm("loc_6DAF39D: pop %esi;");
    asm("loc_6DAF39E: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF3B0() // _sub_6DAF3B0
{
    __DEBUG_ASM(6DAF3B0);
    // chunk 0x6DAF3B0 _sub_6DAF3B0
    asm("loc_6DAF3B0: mov _data_6DB6684,%eax;");
    asm("loc_6DAF3B5: mov %eax,_data_6DBC4D0;");
    asm("loc_6DAF3BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF3C0() // _sub_6DAF3C0
{
    __DEBUG_ASM(6DAF3C0);
    // chunk 0x6DAF3C0 _sub_6DAF3C0
    asm("loc_6DAF3C0: mov _data_6DB6684,%eax;");
    asm("loc_6DAF3C5: mov %eax,_data_6DBC4D4;");
    asm("loc_6DAF3CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF3D0() // _sub_6DAF3D0
{
    __DEBUG_ASM(6DAF3D0);
    // chunk 0x6DAF3D0 _sub_6DAF3D0
    asm("loc_6DAF3D0: mov _data_6DB6688,%eax;");
    asm("loc_6DAF3D5: mov %eax,_data_6DBC4CC;");
    asm("loc_6DAF3DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF3E0() // _sub_6DAF3E0
{
    __DEBUG_ASM(6DAF3E0);
    // chunk 0x6DAF3E0 _sub_6DAF3E0
    asm("loc_6DAF3E0: mov _data_6DB66A0,%eax;");
    asm("loc_6DAF3E5: mov %eax,_data_6DBC4E0;");
    asm("loc_6DAF3EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF3F0() // _sub_6DAF3F0
{
    __DEBUG_ASM(6DAF3F0);
    // chunk 0x6DAF3F0 _sub_6DAF3F0
    asm("loc_6DAF3F0: mov _data_6DB66A0,%eax;");
    asm("loc_6DAF3F5: mov %eax,_data_6DBC4E4;");
    asm("loc_6DAF3FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF400() // _sub_6DAF400
{
    __DEBUG_ASM(6DAF400);
    // chunk 0x6DAF400 _sub_6DAF400
    asm("loc_6DAF400: mov _data_6DB66A4,%eax;");
    asm("loc_6DAF405: mov %eax,_data_6DBC4DC;");
    asm("loc_6DAF40A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF410() // _sub_6DAF410
{
    __DEBUG_ASM(6DAF410);
    // chunk 0x6DAF410 _sub_6DAF410
    asm("loc_6DAF410: mov 8(%esp),%eax;");
    asm("loc_6DAF414: push %ebx;");
    asm("loc_6DAF415: push %ebp;");
    asm("loc_6DAF416: push %esi;");
    asm("loc_6DAF417: push %edi;");
    asm("loc_6DAF418: mov %ecx,%edi;");
    asm("loc_6DAF41A: mov 0x14(%esp),%ecx;");
    asm("loc_6DAF41E: lea 0x10(%edi),%esi;");
    asm("loc_6DAF421: mov %eax,4(%esi);");
    asm("loc_6DAF424: mov (%ecx),%edx;");
    asm("loc_6DAF426: mov %edx,8(%esi);");
    asm("loc_6DAF429: movl $0,(%esi);");
    asm("loc_6DAF42F: movl $0,0xC(%esi);");
    asm("loc_6DAF436: mov 0x14(%edi),%eax;");
    asm("loc_6DAF439: push %esi;");
    asm("loc_6DAF43A: push %eax;");
    asm("loc_6DAF43B: lea 0x18(%edi),%ebx;");
    asm("loc_6DAF43E: push %ebx;");
    asm("loc_6DAF43F: mov %edi,%ecx;");
    asm("loc_6DAF441: call _sub_6DA1380;");
    asm("loc_6DAF446: test %eax,%eax;");
    asm("loc_6DAF448: mov %eax,0x1C(%edi);");
    asm("loc_6DAF44B: je loc_6DAF459;");
    asm("loc_6DAF44D: pop %edi;");
    asm("loc_6DAF44E: pop %esi;");
    asm("loc_6DAF44F: pop %ebp;");
    asm("loc_6DAF450: mov $0x16,%eax;");
    asm("loc_6DAF455: pop %ebx;");
    asm("loc_6DAF456: ret $0xC;");
    asm("loc_6DAF459: mov 0x14(%edi),%ecx;");
    asm("loc_6DAF45C: push %ecx;");
    asm("loc_6DAF45D: push %esi;");
    asm("loc_6DAF45E: lea 0x20(%edi),%edx;");
    asm("loc_6DAF461: push %edx;");
    asm("loc_6DAF462: push %ebx;");
    asm("loc_6DAF463: mov %edi,%ecx;");
    asm("loc_6DAF465: call _sub_6DA14F0;");
    asm("loc_6DAF46A: test %eax,%eax;");
    asm("loc_6DAF46C: je loc_6DAF47A;");
    asm("loc_6DAF46E: pop %edi;");
    asm("loc_6DAF46F: pop %esi;");
    asm("loc_6DAF470: pop %ebp;");
    asm("loc_6DAF471: mov $0x16,%eax;");
    asm("loc_6DAF476: pop %ebx;");
    asm("loc_6DAF477: ret $0xC;");
    asm("loc_6DAF47A: mov (%esi),%edx;");
    asm("loc_6DAF47C: mov 4(%esi),%ecx;");
    asm("loc_6DAF47F: add $4,%edx;");
    asm("loc_6DAF482: mov %edx,%eax;");
    asm("loc_6DAF484: cmp %ecx,%eax;");
    asm("loc_6DAF486: mov %edx,(%esi);");
    asm("loc_6DAF488: mov $0x16,%ebp;");
    asm("loc_6DAF48D: jbe loc_6DAF492;");
    asm("loc_6DAF48F: mov %ebp,0xC(%esi);");
    asm("loc_6DAF492: mov 0x1C(%edi),%eax;");
    asm("loc_6DAF495: test %eax,%eax;");
    asm("loc_6DAF497: je loc_6DAF4A2;");
    asm("loc_6DAF499: pop %edi;");
    asm("loc_6DAF49A: pop %esi;");
    asm("loc_6DAF49B: mov %ebp,%eax;");
    asm("loc_6DAF49D: pop %ebp;");
    asm("loc_6DAF49E: pop %ebx;");
    asm("loc_6DAF49F: ret $0xC;");
    asm("loc_6DAF4A2: mov (%ebx),%eax;");
    asm("loc_6DAF4A4: mov 0xA0(%edi),%ecx;");
    asm("loc_6DAF4AA: mov %ecx,(%eax);");
    asm("loc_6DAF4AC: add $4,%eax;");
    asm("loc_6DAF4AF: mov %eax,(%ebx);");
    asm("loc_6DAF4B1: mov (%esi),%edx;");
    asm("loc_6DAF4B3: mov 4(%esi),%ecx;");
    asm("loc_6DAF4B6: add $4,%edx;");
    asm("loc_6DAF4B9: mov %edx,%eax;");
    asm("loc_6DAF4BB: cmp %ecx,%eax;");
    asm("loc_6DAF4BD: mov %edx,(%esi);");
    asm("loc_6DAF4BF: jbe loc_6DAF4C4;");
    asm("loc_6DAF4C1: mov %ebp,0xC(%esi);");
    asm("loc_6DAF4C4: mov 0x1C(%edi),%eax;");
    asm("loc_6DAF4C7: test %eax,%eax;");
    asm("loc_6DAF4C9: je loc_6DAF4D4;");
    asm("loc_6DAF4CB: pop %edi;");
    asm("loc_6DAF4CC: pop %esi;");
    asm("loc_6DAF4CD: mov %ebp,%eax;");
    asm("loc_6DAF4CF: pop %ebp;");
    asm("loc_6DAF4D0: pop %ebx;");
    asm("loc_6DAF4D1: ret $0xC;");
    asm("loc_6DAF4D4: mov (%ebx),%eax;");
    asm("loc_6DAF4D6: mov 0xA4(%edi),%edx;");
    asm("loc_6DAF4DC: mov %edx,(%eax);");
    asm("loc_6DAF4DE: add $4,%eax;");
    asm("loc_6DAF4E1: mov %eax,(%ebx);");
    asm("loc_6DAF4E3: mov (%esi),%edx;");
    asm("loc_6DAF4E5: mov 4(%esi),%ecx;");
    asm("loc_6DAF4E8: add $4,%edx;");
    asm("loc_6DAF4EB: mov %edx,%eax;");
    asm("loc_6DAF4ED: cmp %ecx,%eax;");
    asm("loc_6DAF4EF: mov %edx,(%esi);");
    asm("loc_6DAF4F1: jbe loc_6DAF4F6;");
    asm("loc_6DAF4F3: mov %ebp,0xC(%esi);");
    asm("loc_6DAF4F6: mov 0x1C(%edi),%eax;");
    asm("loc_6DAF4F9: test %eax,%eax;");
    asm("loc_6DAF4FB: je loc_6DAF506;");
    asm("loc_6DAF4FD: pop %edi;");
    asm("loc_6DAF4FE: pop %esi;");
    asm("loc_6DAF4FF: mov %ebp,%eax;");
    asm("loc_6DAF501: pop %ebp;");
    asm("loc_6DAF502: pop %ebx;");
    asm("loc_6DAF503: ret $0xC;");
    asm("loc_6DAF506: mov (%ebx),%eax;");
    asm("loc_6DAF508: mov 0xA8(%edi),%ecx;");
    asm("loc_6DAF50E: mov %ecx,(%eax);");
    asm("loc_6DAF510: add $4,%eax;");
    asm("loc_6DAF513: mov %eax,(%ebx);");
    asm("loc_6DAF515: mov (%esi),%edx;");
    asm("loc_6DAF517: mov 4(%esi),%ecx;");
    asm("loc_6DAF51A: add $4,%edx;");
    asm("loc_6DAF51D: mov %edx,%eax;");
    asm("loc_6DAF51F: cmp %ecx,%eax;");
    asm("loc_6DAF521: mov %edx,(%esi);");
    asm("loc_6DAF523: jbe loc_6DAF528;");
    asm("loc_6DAF525: mov %ebp,0xC(%esi);");
    asm("loc_6DAF528: mov 0x1C(%edi),%eax;");
    asm("loc_6DAF52B: test %eax,%eax;");
    asm("loc_6DAF52D: je loc_6DAF538;");
    asm("loc_6DAF52F: pop %edi;");
    asm("loc_6DAF530: pop %esi;");
    asm("loc_6DAF531: mov %ebp,%eax;");
    asm("loc_6DAF533: pop %ebp;");
    asm("loc_6DAF534: pop %ebx;");
    asm("loc_6DAF535: ret $0xC;");
    asm("loc_6DAF538: mov (%ebx),%eax;");
    asm("loc_6DAF53A: mov 0xAC(%edi),%edx;");
    asm("loc_6DAF540: mov %edx,(%eax);");
    asm("loc_6DAF542: add $4,%eax;");
    asm("loc_6DAF545: mov %eax,(%ebx);");
    asm("loc_6DAF547: mov 0x14(%edi),%eax;");
    asm("loc_6DAF54A: push %esi;");
    asm("loc_6DAF54B: push %eax;");
    asm("loc_6DAF54C: push %ebx;");
    asm("loc_6DAF54D: mov %edi,%ecx;");
    asm("loc_6DAF54F: call _sub_6DA13C0;");
    asm("loc_6DAF554: test %eax,%eax;");
    asm("loc_6DAF556: mov %eax,0x1C(%edi);");
    asm("loc_6DAF559: je loc_6DAF564;");
    asm("loc_6DAF55B: pop %edi;");
    asm("loc_6DAF55C: pop %esi;");
    asm("loc_6DAF55D: mov %ebp,%eax;");
    asm("loc_6DAF55F: pop %ebp;");
    asm("loc_6DAF560: pop %ebx;");
    asm("loc_6DAF561: ret $0xC;");
    asm("loc_6DAF564: mov (%esi),%ecx;");
    asm("loc_6DAF566: mov 0x1C(%esp),%edx;");
    asm("loc_6DAF56A: mov %ecx,(%edx);");
    asm("loc_6DAF56C: mov 0xC(%edi),%eax;");
    asm("loc_6DAF56F: push %eax;");
    asm("loc_6DAF570: call _sub_6DA16B0;");
    asm("loc_6DAF575: mov %eax,%ecx;");
    asm("loc_6DAF577: mov (%ecx),%ebp;");
    asm("loc_6DAF579: mov 0x18(%ecx),%ebx;");
    asm("loc_6DAF57C: mov 0x10(%ecx),%eax;");
    asm("loc_6DAF57F: add $4,%esp;");
    asm("loc_6DAF582: inc %ebp;");
    asm("loc_6DAF583: mov %ebp,(%ecx);");
    asm("loc_6DAF585: mov (%esi),%edx;");
    asm("loc_6DAF587: add %edx,%ebx;");
    asm("loc_6DAF589: mov %ebx,0x18(%ecx);");
    asm("loc_6DAF58C: mov (%esi),%esi;");
    asm("loc_6DAF58E: cmp %eax,%esi;");
    asm("loc_6DAF590: mov %ebp,%edi;");
    asm("loc_6DAF592: jbe loc_6DAF597;");
    asm("loc_6DAF594: mov %esi,0x10(%ecx);");
    asm("loc_6DAF597: mov 0x18(%ecx),%eax;");
    asm("loc_6DAF59A: xor %edx,%edx;");
    asm("loc_6DAF59C: div %edi;");
    asm("loc_6DAF59E: pop %edi;");
    asm("loc_6DAF59F: pop %esi;");
    asm("loc_6DAF5A0: pop %ebp;");
    asm("loc_6DAF5A1: pop %ebx;");
    asm("loc_6DAF5A2: mov %eax,8(%ecx);");
    asm("loc_6DAF5A5: xor %eax,%eax;");
    asm("loc_6DAF5A7: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF5B0() // _sub_6DAF5B0
{
    __DEBUG_ASM(6DAF5B0);
    // chunk 0x6DAF5B0 _sub_6DAF5B0
    asm("loc_6DAF5B0: mov 4(%esp),%eax;");
    asm("loc_6DAF5B4: push %ebx;");
    asm("loc_6DAF5B5: push %ebp;");
    asm("loc_6DAF5B6: mov 0x10(%esp),%ebp;");
    asm("loc_6DAF5BA: push %esi;");
    asm("loc_6DAF5BB: push %edi;");
    asm("loc_6DAF5BC: mov %ecx,%edi;");
    asm("loc_6DAF5BE: lea 0x10(%edi),%esi;");
    asm("loc_6DAF5C1: push %esi;");
    asm("loc_6DAF5C2: push %ebp;");
    asm("loc_6DAF5C3: lea 0x18(%edi),%ebx;");
    asm("loc_6DAF5C6: push %ebx;");
    asm("loc_6DAF5C7: mov %ebp,4(%esi);");
    asm("loc_6DAF5CA: mov %eax,8(%esi);");
    asm("loc_6DAF5CD: movl $0,(%esi);");
    asm("loc_6DAF5D3: movl $0,0xC(%esi);");
    asm("loc_6DAF5DA: call _sub_6DA13C0;");
    asm("loc_6DAF5DF: test %eax,%eax;");
    asm("loc_6DAF5E1: mov %eax,0x1C(%edi);");
    asm("loc_6DAF5E4: je loc_6DAF5F2;");
    asm("loc_6DAF5E6: pop %edi;");
    asm("loc_6DAF5E7: pop %esi;");
    asm("loc_6DAF5E8: pop %ebp;");
    asm("loc_6DAF5E9: mov $0x17,%eax;");
    asm("loc_6DAF5EE: pop %ebx;");
    asm("loc_6DAF5EF: ret $0xC;");
    asm("loc_6DAF5F2: mov 0x14(%edi),%ecx;");
    asm("loc_6DAF5F5: push %ecx;");
    asm("loc_6DAF5F6: push %esi;");
    asm("loc_6DAF5F7: push %ebx;");
    asm("loc_6DAF5F8: lea 0x24(%esp),%edx;");
    asm("loc_6DAF5FC: push %edx;");
    asm("loc_6DAF5FD: mov %edi,%ecx;");
    asm("loc_6DAF5FF: call _sub_6DA1580;");
    asm("loc_6DAF604: test %eax,%eax;");
    asm("loc_6DAF606: je loc_6DAF614;");
    asm("loc_6DAF608: pop %edi;");
    asm("loc_6DAF609: pop %esi;");
    asm("loc_6DAF60A: pop %ebp;");
    asm("loc_6DAF60B: mov $0x17,%eax;");
    asm("loc_6DAF610: pop %ebx;");
    asm("loc_6DAF611: ret $0xC;");
    asm("loc_6DAF614: mov 0x18(%esp),%eax;");
    asm("loc_6DAF618: test %eax,%eax;");
    asm("loc_6DAF61A: je loc_6DAF634;");
    asm("loc_6DAF61C: push %eax;");
    asm("loc_6DAF61D: lea 0x20(%edi),%eax;");
    asm("loc_6DAF620: push %eax;");
    asm("loc_6DAF621: calll *_import_6DB31FC;");
    asm("loc_6DAF627: mov 0x20(%esp),%ecx;");
    asm("loc_6DAF62B: push %ecx;");
    asm("loc_6DAF62C: call _sub_6DB1DC2;");
    asm("loc_6DAF631: add $0xC,%esp;");
    asm("loc_6DAF634: mov (%esi),%edx;");
    asm("loc_6DAF636: mov 4(%esi),%ecx;");
    asm("loc_6DAF639: add $4,%edx;");
    asm("loc_6DAF63C: mov %edx,%eax;");
    asm("loc_6DAF63E: cmp %ecx,%eax;");
    asm("loc_6DAF640: mov %edx,(%esi);");
    asm("loc_6DAF642: mov $0x17,%ecx;");
    asm("loc_6DAF647: jbe loc_6DAF64C;");
    asm("loc_6DAF649: mov %ecx,0xC(%esi);");
    asm("loc_6DAF64C: mov 0x1C(%edi),%eax;");
    asm("loc_6DAF64F: test %eax,%eax;");
    asm("loc_6DAF651: jne loc_6DAF74A;");
    asm("loc_6DAF657: mov (%ebx),%eax;");
    asm("loc_6DAF659: mov (%eax),%edx;");
    asm("loc_6DAF65B: add $4,%eax;");
    asm("loc_6DAF65E: mov %eax,(%ebx);");
    asm("loc_6DAF660: mov %edx,0xA0(%edi);");
    asm("loc_6DAF666: mov (%esi),%eax;");
    asm("loc_6DAF668: mov 4(%esi),%edx;");
    asm("loc_6DAF66B: add $4,%eax;");
    asm("loc_6DAF66E: cmp %edx,%eax;");
    asm("loc_6DAF670: mov %eax,(%esi);");
    asm("loc_6DAF672: jbe loc_6DAF677;");
    asm("loc_6DAF674: mov %ecx,0xC(%esi);");
    asm("loc_6DAF677: mov 0x1C(%edi),%eax;");
    asm("loc_6DAF67A: test %eax,%eax;");
    asm("loc_6DAF67C: jne loc_6DAF74A;");
    asm("loc_6DAF682: mov (%ebx),%eax;");
    asm("loc_6DAF684: mov (%eax),%edx;");
    asm("loc_6DAF686: add $4,%eax;");
    asm("loc_6DAF689: mov %eax,(%ebx);");
    asm("loc_6DAF68B: mov %edx,0xA4(%edi);");
    asm("loc_6DAF691: mov (%esi),%eax;");
    asm("loc_6DAF693: mov 4(%esi),%edx;");
    asm("loc_6DAF696: add $4,%eax;");
    asm("loc_6DAF699: cmp %edx,%eax;");
    asm("loc_6DAF69B: mov %eax,(%esi);");
    asm("loc_6DAF69D: jbe loc_6DAF6A2;");
    asm("loc_6DAF69F: mov %ecx,0xC(%esi);");
    asm("loc_6DAF6A2: mov 0x1C(%edi),%eax;");
    asm("loc_6DAF6A5: test %eax,%eax;");
    asm("loc_6DAF6A7: jne loc_6DAF74A;");
    asm("loc_6DAF6AD: mov (%ebx),%eax;");
    asm("loc_6DAF6AF: mov (%eax),%edx;");
    asm("loc_6DAF6B1: add $4,%eax;");
    asm("loc_6DAF6B4: mov %eax,(%ebx);");
    asm("loc_6DAF6B6: mov %edx,0xA8(%edi);");
    asm("loc_6DAF6BC: mov (%esi),%eax;");
    asm("loc_6DAF6BE: mov 4(%esi),%edx;");
    asm("loc_6DAF6C1: add $4,%eax;");
    asm("loc_6DAF6C4: cmp %edx,%eax;");
    asm("loc_6DAF6C6: mov %eax,(%esi);");
    asm("loc_6DAF6C8: jbe loc_6DAF6CD;");
    asm("loc_6DAF6CA: mov %ecx,0xC(%esi);");
    asm("loc_6DAF6CD: mov 0x1C(%edi),%eax;");
    asm("loc_6DAF6D0: test %eax,%eax;");
    asm("loc_6DAF6D2: jne loc_6DAF74A;");
    asm("loc_6DAF6D4: mov (%ebx),%eax;");
    asm("loc_6DAF6D6: mov (%eax),%ecx;");
    asm("loc_6DAF6D8: push %esi;");
    asm("loc_6DAF6D9: push %ebp;");
    asm("loc_6DAF6DA: mov %ecx,0xAC(%edi);");
    asm("loc_6DAF6E0: add $4,%eax;");
    asm("loc_6DAF6E3: push %ebx;");
    asm("loc_6DAF6E4: mov %edi,%ecx;");
    asm("loc_6DAF6E6: mov %eax,(%ebx);");
    asm("loc_6DAF6E8: call _sub_6DA13C0;");
    asm("loc_6DAF6ED: test %eax,%eax;");
    asm("loc_6DAF6EF: mov %eax,0x1C(%edi);");
    asm("loc_6DAF6F2: je loc_6DAF700;");
    asm("loc_6DAF6F4: pop %edi;");
    asm("loc_6DAF6F5: pop %esi;");
    asm("loc_6DAF6F6: pop %ebp;");
    asm("loc_6DAF6F7: mov $0x17,%eax;");
    asm("loc_6DAF6FC: pop %ebx;");
    asm("loc_6DAF6FD: ret $0xC;");
    asm("loc_6DAF700: mov (%esi),%edx;");
    asm("loc_6DAF702: mov 0x1C(%esp),%eax;");
    asm("loc_6DAF706: mov %edx,(%eax);");
    asm("loc_6DAF708: mov 0xC(%edi),%ecx;");
    asm("loc_6DAF70B: push %ecx;");
    asm("loc_6DAF70C: call _sub_6DA16B0;");
    asm("loc_6DAF711: mov %eax,%ecx;");
    asm("loc_6DAF713: mov 4(%ecx),%edx;");
    asm("loc_6DAF716: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DAF719: mov 0x14(%ecx),%eax;");
    asm("loc_6DAF71C: add $4,%esp;");
    asm("loc_6DAF71F: inc %edx;");
    asm("loc_6DAF720: mov %edx,4(%ecx);");
    asm("loc_6DAF723: mov %edx,%edi;");
    asm("loc_6DAF725: mov (%esi),%edx;");
    asm("loc_6DAF727: add $2,%edx;");
    asm("loc_6DAF72A: add %edx,%ebp;");
    asm("loc_6DAF72C: mov %ebp,0x1C(%ecx);");
    asm("loc_6DAF72F: mov (%esi),%esi;");
    asm("loc_6DAF731: add $2,%eax;");
    asm("loc_6DAF734: cmp %eax,%esi;");
    asm("loc_6DAF736: jbe loc_6DAF73E;");
    asm("loc_6DAF738: add $2,%esi;");
    asm("loc_6DAF73B: mov %esi,0x14(%ecx);");
    asm("loc_6DAF73E: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAF741: xor %edx,%edx;");
    asm("loc_6DAF743: div %edi;");
    asm("loc_6DAF745: mov %eax,0xC(%ecx);");
    asm("loc_6DAF748: xor %eax,%eax;");
    asm("loc_6DAF74A: pop %edi;");
    asm("loc_6DAF74B: pop %esi;");
    asm("loc_6DAF74C: pop %ebp;");
    asm("loc_6DAF74D: pop %ebx;");
    asm("loc_6DAF74E: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF760() // _sub_6DAF760
{
    __DEBUG_ASM(6DAF760);
    // chunk 0x6DAF760 _sub_6DAF760
    asm("loc_6DAF760: mov 0xAC(%ecx),%eax;");
    asm("loc_6DAF766: mov 0xA8(%ecx),%edx;");
    asm("loc_6DAF76C: push %esi;");
    asm("loc_6DAF76D: push $_data_6DB3D88;");
    asm("loc_6DAF772: push %eax;");
    asm("loc_6DAF773: mov 0xA4(%ecx),%eax;");
    asm("loc_6DAF779: mov _import_6DB3194,%esi;");
    asm("loc_6DAF77F: push $_data_6DB66D8;");
    asm("loc_6DAF784: push %edx;");
    asm("loc_6DAF785: mov 0xA0(%ecx),%edx;");
    asm("loc_6DAF78B: push $_data_6DB66CC;");
    asm("loc_6DAF790: push %eax;");
    asm("loc_6DAF791: mov 0x20(%esp),%eax;");
    asm("loc_6DAF795: push $_data_6DB66C0;");
    asm("loc_6DAF79A: push %edx;");
    asm("loc_6DAF79B: push $_data_6DB66B4;");
    asm("loc_6DAF7A0: add $0x20,%ecx;");
    asm("loc_6DAF7A3: push %ecx;");
    asm("loc_6DAF7A4: push $_data_6DB66A8;");
    asm("loc_6DAF7A9: push %eax;");
    asm("loc_6DAF7AA: call *%esi;");
    asm("loc_6DAF7AC: add $8,%esp;");
    asm("loc_6DAF7AF: mov %eax,%ecx;");
    asm("loc_6DAF7B1: calll *_import_6DB318C;");
    asm("loc_6DAF7B7: push %eax;");
    asm("loc_6DAF7B8: call *%esi;");
    asm("loc_6DAF7BA: add $8,%esp;");
    asm("loc_6DAF7BD: mov %eax,%ecx;");
    asm("loc_6DAF7BF: calll *_import_6DB319C;");
    asm("loc_6DAF7C5: push %eax;");
    asm("loc_6DAF7C6: call *%esi;");
    asm("loc_6DAF7C8: add $8,%esp;");
    asm("loc_6DAF7CB: mov %eax,%ecx;");
    asm("loc_6DAF7CD: calll *_import_6DB319C;");
    asm("loc_6DAF7D3: push %eax;");
    asm("loc_6DAF7D4: call *%esi;");
    asm("loc_6DAF7D6: add $8,%esp;");
    asm("loc_6DAF7D9: mov %eax,%ecx;");
    asm("loc_6DAF7DB: calll *_import_6DB319C;");
    asm("loc_6DAF7E1: push %eax;");
    asm("loc_6DAF7E2: call *%esi;");
    asm("loc_6DAF7E4: add $8,%esp;");
    asm("loc_6DAF7E7: mov %eax,%ecx;");
    asm("loc_6DAF7E9: calll *_import_6DB319C;");
    asm("loc_6DAF7EF: push %eax;");
    asm("loc_6DAF7F0: call *%esi;");
    asm("loc_6DAF7F2: add $8,%esp;");
    asm("loc_6DAF7F5: pop %esi;");
    asm("loc_6DAF7F6: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF800() // _sub_6DAF800
{
    __DEBUG_ASM(6DAF800);
    // chunk 0x6DAF800 _sub_6DAF800
    asm("loc_6DAF800: mov _data_6DB66E8,%eax;");
    asm("loc_6DAF805: mov %eax,_data_6DBC4F0;");
    asm("loc_6DAF80A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF810() // _sub_6DAF810
{
    __DEBUG_ASM(6DAF810);
    // chunk 0x6DAF810 _sub_6DAF810
    asm("loc_6DAF810: mov _data_6DB66E8,%eax;");
    asm("loc_6DAF815: mov %eax,_data_6DBC4F4;");
    asm("loc_6DAF81A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF820() // _sub_6DAF820
{
    __DEBUG_ASM(6DAF820);
    // chunk 0x6DAF820 _sub_6DAF820
    asm("loc_6DAF820: mov _data_6DB66EC,%eax;");
    asm("loc_6DAF825: mov %eax,_data_6DBC4EC;");
    asm("loc_6DAF82A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF830() // _sub_6DAF830
{
    __DEBUG_ASM(6DAF830);
    // chunk 0x6DAF830 _sub_6DAF830
    asm("loc_6DAF830: mov 8(%esp),%eax;");
    asm("loc_6DAF834: push %ebx;");
    asm("loc_6DAF835: push %ebp;");
    asm("loc_6DAF836: mov %ecx,%ebp;");
    asm("loc_6DAF838: mov 0xC(%esp),%ecx;");
    asm("loc_6DAF83C: lea 0x10(%ebp),%ebx;");
    asm("loc_6DAF83F: push %esi;");
    asm("loc_6DAF840: mov %eax,4(%ebx);");
    asm("loc_6DAF843: mov (%ecx),%edx;");
    asm("loc_6DAF845: push %edi;");
    asm("loc_6DAF846: mov %edx,8(%ebx);");
    asm("loc_6DAF849: movl $0,(%ebx);");
    asm("loc_6DAF84F: movl $0,0xC(%ebx);");
    asm("loc_6DAF856: mov 0x14(%ebp),%eax;");
    asm("loc_6DAF859: push %ebx;");
    asm("loc_6DAF85A: push %eax;");
    asm("loc_6DAF85B: lea 0x18(%ebp),%esi;");
    asm("loc_6DAF85E: push %esi;");
    asm("loc_6DAF85F: mov %ebp,%ecx;");
    asm("loc_6DAF861: call _sub_6DA1380;");
    asm("loc_6DAF866: test %eax,%eax;");
    asm("loc_6DAF868: mov %eax,0x1C(%ebp);");
    asm("loc_6DAF86B: je loc_6DAF879;");
    asm("loc_6DAF86D: pop %edi;");
    asm("loc_6DAF86E: pop %esi;");
    asm("loc_6DAF86F: pop %ebp;");
    asm("loc_6DAF870: mov $0x16,%eax;");
    asm("loc_6DAF875: pop %ebx;");
    asm("loc_6DAF876: ret $0xC;");
    asm("loc_6DAF879: xor %eax,%eax;");
    asm("loc_6DAF87B: or $0xFFFFFFFF,%ecx;");
    asm("loc_6DAF87E: lea 0x20(%ebp),%edx;");
    asm("loc_6DAF881: mov %edx,%edi;");
    asm("loc_6DAF883: repne scas (%edi),%al;");
    asm("loc_6DAF885: mov (%ebx),%eax;");
    asm("loc_6DAF887: mov 4(%ebx),%edi;");
    asm("loc_6DAF88A: not %ecx;");
    asm("loc_6DAF88C: add $2,%eax;");
    asm("loc_6DAF88F: dec %ecx;");
    asm("loc_6DAF890: cmp %edi,%eax;");
    asm("loc_6DAF892: mov %eax,(%ebx);");
    asm("loc_6DAF894: jbe loc_6DAF89D;");
    asm("loc_6DAF896: movl $0x16,0xC(%ebx);");
    asm("loc_6DAF89D: mov 0x1C(%ebp),%eax;");
    asm("loc_6DAF8A0: test %eax,%eax;");
    asm("loc_6DAF8A2: je loc_6DAF8B0;");
    asm("loc_6DAF8A4: pop %edi;");
    asm("loc_6DAF8A5: pop %esi;");
    asm("loc_6DAF8A6: pop %ebp;");
    asm("loc_6DAF8A7: mov $0x16,%eax;");
    asm("loc_6DAF8AC: pop %ebx;");
    asm("loc_6DAF8AD: ret $0xC;");
    asm("loc_6DAF8B0: mov (%esi),%eax;");
    asm("loc_6DAF8B2: mov %cx,(%eax);");
    asm("loc_6DAF8B5: add $2,%eax;");
    asm("loc_6DAF8B8: mov %eax,(%esi);");
    asm("loc_6DAF8BA: mov 4(%ebx),%edi;");
    asm("loc_6DAF8BD: xor %eax,%eax;");
    asm("loc_6DAF8BF: mov %cx,%ax;");
    asm("loc_6DAF8C2: mov (%ebx),%ecx;");
    asm("loc_6DAF8C4: add %eax,%ecx;");
    asm("loc_6DAF8C6: cmp %edi,%ecx;");
    asm("loc_6DAF8C8: mov %ecx,(%ebx);");
    asm("loc_6DAF8CA: jbe loc_6DAF8D3;");
    asm("loc_6DAF8CC: movl $0x16,0xC(%ebx);");
    asm("loc_6DAF8D3: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DAF8D6: test %ecx,%ecx;");
    asm("loc_6DAF8D8: je loc_6DAF8E6;");
    asm("loc_6DAF8DA: pop %edi;");
    asm("loc_6DAF8DB: pop %esi;");
    asm("loc_6DAF8DC: pop %ebp;");
    asm("loc_6DAF8DD: mov $0x16,%eax;");
    asm("loc_6DAF8E2: pop %ebx;");
    asm("loc_6DAF8E3: ret $0xC;");
    asm("loc_6DAF8E6: mov (%esi),%edi;");
    asm("loc_6DAF8E8: mov %eax,%ecx;");
    asm("loc_6DAF8EA: mov %edx,%esi;");
    asm("loc_6DAF8EC: mov %ecx,%edx;");
    asm("loc_6DAF8EE: shr $2,%ecx;");
    asm("loc_6DAF8F1: mov %edi,0x18(%esp);");
    asm("loc_6DAF8F5: rep movsl (%esi),(%edi);");
    asm("loc_6DAF8F7: mov %edx,%ecx;");
    asm("loc_6DAF8F9: and $3,%ecx;");
    asm("loc_6DAF8FC: rep movsb (%esi),(%edi);");
    asm("loc_6DAF8FE: mov 0x18(%esp),%ecx;");
    asm("loc_6DAF902: mov 0x14(%ebp),%edx;");
    asm("loc_6DAF905: add %eax,%ecx;");
    asm("loc_6DAF907: push %ebx;");
    asm("loc_6DAF908: lea 0x18(%ebp),%eax;");
    asm("loc_6DAF90B: push %edx;");
    asm("loc_6DAF90C: mov %ecx,(%eax);");
    asm("loc_6DAF90E: push %eax;");
    asm("loc_6DAF90F: mov %ebp,%ecx;");
    asm("loc_6DAF911: call _sub_6DA13C0;");
    asm("loc_6DAF916: test %eax,%eax;");
    asm("loc_6DAF918: mov %eax,0x1C(%ebp);");
    asm("loc_6DAF91B: je loc_6DAF929;");
    asm("loc_6DAF91D: pop %edi;");
    asm("loc_6DAF91E: pop %esi;");
    asm("loc_6DAF91F: pop %ebp;");
    asm("loc_6DAF920: mov $0x16,%eax;");
    asm("loc_6DAF925: pop %ebx;");
    asm("loc_6DAF926: ret $0xC;");
    asm("loc_6DAF929: mov (%ebx),%eax;");
    asm("loc_6DAF92B: mov 0x1C(%esp),%ecx;");
    asm("loc_6DAF92F: mov %eax,(%ecx);");
    asm("loc_6DAF931: mov 0xC(%ebp),%edx;");
    asm("loc_6DAF934: push %edx;");
    asm("loc_6DAF935: call _sub_6DA16B0;");
    asm("loc_6DAF93A: mov %eax,%ecx;");
    asm("loc_6DAF93C: mov (%ecx),%esi;");
    asm("loc_6DAF93E: mov 0x18(%ecx),%edx;");
    asm("loc_6DAF941: add $4,%esp;");
    asm("loc_6DAF944: inc %esi;");
    asm("loc_6DAF945: mov %esi,(%ecx);");
    asm("loc_6DAF947: mov (%ebx),%eax;");
    asm("loc_6DAF949: add %eax,%edx;");
    asm("loc_6DAF94B: mov 0x10(%ecx),%eax;");
    asm("loc_6DAF94E: mov %edx,0x18(%ecx);");
    asm("loc_6DAF951: mov (%ebx),%ebx;");
    asm("loc_6DAF953: cmp %eax,%ebx;");
    asm("loc_6DAF955: jbe loc_6DAF95A;");
    asm("loc_6DAF957: mov %ebx,0x10(%ecx);");
    asm("loc_6DAF95A: mov 0x18(%ecx),%eax;");
    asm("loc_6DAF95D: xor %edx,%edx;");
    asm("loc_6DAF95F: div %esi;");
    asm("loc_6DAF961: pop %edi;");
    asm("loc_6DAF962: pop %esi;");
    asm("loc_6DAF963: pop %ebp;");
    asm("loc_6DAF964: pop %ebx;");
    asm("loc_6DAF965: mov %eax,8(%ecx);");
    asm("loc_6DAF968: xor %eax,%eax;");
    asm("loc_6DAF96A: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAF970() // _sub_6DAF970
{
    __DEBUG_ASM(6DAF970);
    // chunk 0x6DAF970 _sub_6DAF970
    asm("loc_6DAF970: mov 8(%esp),%eax;");
    asm("loc_6DAF974: push %ebx;");
    asm("loc_6DAF975: push %ebp;");
    asm("loc_6DAF976: push %esi;");
    asm("loc_6DAF977: mov %ecx,%ebx;");
    asm("loc_6DAF979: mov 0x10(%esp),%ecx;");
    asm("loc_6DAF97D: lea 0x10(%ebx),%ebp;");
    asm("loc_6DAF980: push %edi;");
    asm("loc_6DAF981: push %ebp;");
    asm("loc_6DAF982: push %eax;");
    asm("loc_6DAF983: mov %ecx,8(%ebp);");
    asm("loc_6DAF986: lea 0x18(%ebx),%esi;");
    asm("loc_6DAF989: push %esi;");
    asm("loc_6DAF98A: mov %ebx,%ecx;");
    asm("loc_6DAF98C: mov %eax,4(%ebp);");
    asm("loc_6DAF98F: movl $0,(%ebp);");
    asm("loc_6DAF996: movl $0,0xC(%ebp);");
    asm("loc_6DAF99D: call _sub_6DA13C0;");
    asm("loc_6DAF9A2: test %eax,%eax;");
    asm("loc_6DAF9A4: mov %eax,0x1C(%ebx);");
    asm("loc_6DAF9A7: je loc_6DAF9B5;");
    asm("loc_6DAF9A9: pop %edi;");
    asm("loc_6DAF9AA: pop %esi;");
    asm("loc_6DAF9AB: pop %ebp;");
    asm("loc_6DAF9AC: mov $0x17,%eax;");
    asm("loc_6DAF9B1: pop %ebx;");
    asm("loc_6DAF9B2: ret $0xC;");
    asm("loc_6DAF9B5: mov (%ebp),%edx;");
    asm("loc_6DAF9B8: mov 4(%ebp),%ecx;");
    asm("loc_6DAF9BB: add $2,%edx;");
    asm("loc_6DAF9BE: mov %edx,%eax;");
    asm("loc_6DAF9C0: cmp %ecx,%eax;");
    asm("loc_6DAF9C2: mov %edx,(%ebp);");
    asm("loc_6DAF9C5: jbe loc_6DAF9CE;");
    asm("loc_6DAF9C7: movl $0x17,0xC(%ebp);");
    asm("loc_6DAF9CE: mov 0x1C(%ebx),%eax;");
    asm("loc_6DAF9D1: test %eax,%eax;");
    asm("loc_6DAF9D3: jne loc_6DAFAA0;");
    asm("loc_6DAF9D9: mov (%esi),%eax;");
    asm("loc_6DAF9DB: mov (%eax),%cx;");
    asm("loc_6DAF9DE: xor %edx,%edx;");
    asm("loc_6DAF9E0: mov %cx,%dx;");
    asm("loc_6DAF9E3: add $2,%eax;");
    asm("loc_6DAF9E6: mov %eax,(%esi);");
    asm("loc_6DAF9E8: mov (%ebp),%edi;");
    asm("loc_6DAF9EB: mov 4(%ebp),%ecx;");
    asm("loc_6DAF9EE: add %edx,%edi;");
    asm("loc_6DAF9F0: mov %edi,%eax;");
    asm("loc_6DAF9F2: cmp %ecx,%eax;");
    asm("loc_6DAF9F4: mov %edi,(%ebp);");
    asm("loc_6DAF9F7: jbe loc_6DAFA00;");
    asm("loc_6DAF9F9: movl $0x17,0xC(%ebp);");
    asm("loc_6DAFA00: mov 0x1C(%ebx),%eax;");
    asm("loc_6DAFA03: test %eax,%eax;");
    asm("loc_6DAFA05: jne loc_6DAFAA0;");
    asm("loc_6DAFA0B: mov (%esi),%esi;");
    asm("loc_6DAFA0D: mov %edx,%ecx;");
    asm("loc_6DAFA0F: mov %ecx,%eax;");
    asm("loc_6DAFA11: shr $2,%ecx;");
    asm("loc_6DAFA14: mov %esi,0x14(%esp);");
    asm("loc_6DAFA18: lea 0x20(%ebx),%edi;");
    asm("loc_6DAFA1B: rep movsl (%esi),(%edi);");
    asm("loc_6DAFA1D: mov %eax,%ecx;");
    asm("loc_6DAFA1F: and $3,%ecx;");
    asm("loc_6DAFA22: rep movsb (%esi),(%edi);");
    asm("loc_6DAFA24: mov 0x14(%esp),%ecx;");
    asm("loc_6DAFA28: add %edx,%ecx;");
    asm("loc_6DAFA2A: lea 0x18(%ebx),%eax;");
    asm("loc_6DAFA2D: mov %ecx,(%eax);");
    asm("loc_6DAFA2F: movb $0,0x20(%edx,%ebx);");
    asm("loc_6DAFA34: mov 0x18(%esp),%edx;");
    asm("loc_6DAFA38: push %ebp;");
    asm("loc_6DAFA39: push %edx;");
    asm("loc_6DAFA3A: push %eax;");
    asm("loc_6DAFA3B: mov %ebx,%ecx;");
    asm("loc_6DAFA3D: call _sub_6DA13C0;");
    asm("loc_6DAFA42: test %eax,%eax;");
    asm("loc_6DAFA44: mov %eax,0x1C(%ebx);");
    asm("loc_6DAFA47: je loc_6DAFA55;");
    asm("loc_6DAFA49: pop %edi;");
    asm("loc_6DAFA4A: pop %esi;");
    asm("loc_6DAFA4B: pop %ebp;");
    asm("loc_6DAFA4C: mov $0x17,%eax;");
    asm("loc_6DAFA51: pop %ebx;");
    asm("loc_6DAFA52: ret $0xC;");
    asm("loc_6DAFA55: mov (%ebp),%eax;");
    asm("loc_6DAFA58: mov 0x1C(%esp),%ecx;");
    asm("loc_6DAFA5C: mov %eax,(%ecx);");
    asm("loc_6DAFA5E: mov 0xC(%ebx),%edx;");
    asm("loc_6DAFA61: push %edx;");
    asm("loc_6DAFA62: call _sub_6DA16B0;");
    asm("loc_6DAFA67: mov %eax,%ecx;");
    asm("loc_6DAFA69: mov 4(%ecx),%esi;");
    asm("loc_6DAFA6C: mov 0x1C(%ecx),%ebx;");
    asm("loc_6DAFA6F: mov 0x14(%ecx),%edx;");
    asm("loc_6DAFA72: add $4,%esp;");
    asm("loc_6DAFA75: inc %esi;");
    asm("loc_6DAFA76: mov %esi,4(%ecx);");
    asm("loc_6DAFA79: mov (%ebp),%eax;");
    asm("loc_6DAFA7C: add $2,%eax;");
    asm("loc_6DAFA7F: add %eax,%ebx;");
    asm("loc_6DAFA81: mov %ebx,0x1C(%ecx);");
    asm("loc_6DAFA84: mov (%ebp),%ebp;");
    asm("loc_6DAFA87: add $2,%edx;");
    asm("loc_6DAFA8A: cmp %edx,%ebp;");
    asm("loc_6DAFA8C: jbe loc_6DAFA94;");
    asm("loc_6DAFA8E: add $2,%ebp;");
    asm("loc_6DAFA91: mov %ebp,0x14(%ecx);");
    asm("loc_6DAFA94: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAFA97: xor %edx,%edx;");
    asm("loc_6DAFA99: div %esi;");
    asm("loc_6DAFA9B: mov %eax,0xC(%ecx);");
    asm("loc_6DAFA9E: xor %eax,%eax;");
    asm("loc_6DAFAA0: pop %edi;");
    asm("loc_6DAFAA1: pop %esi;");
    asm("loc_6DAFAA2: pop %ebp;");
    asm("loc_6DAFAA3: pop %ebx;");
    asm("loc_6DAFAA4: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAFAB0() // _sub_6DAFAB0
{
    __DEBUG_ASM(6DAFAB0);
    // chunk 0x6DAFAB0 _sub_6DAFAB0
    asm("loc_6DAFAB0: mov 4(%esp),%eax;");
    asm("loc_6DAFAB4: push %esi;");
    asm("loc_6DAFAB5: mov _import_6DB3194,%esi;");
    asm("loc_6DAFABB: push $_data_6DB3D88;");
    asm("loc_6DAFAC0: add $0x20,%ecx;");
    asm("loc_6DAFAC3: push %ecx;");
    asm("loc_6DAFAC4: push $_data_6DB66F0;");
    asm("loc_6DAFAC9: push %eax;");
    asm("loc_6DAFACA: call *%esi;");
    asm("loc_6DAFACC: add $8,%esp;");
    asm("loc_6DAFACF: push %eax;");
    asm("loc_6DAFAD0: call *%esi;");
    asm("loc_6DAFAD2: add $8,%esp;");
    asm("loc_6DAFAD5: push %eax;");
    asm("loc_6DAFAD6: call *%esi;");
    asm("loc_6DAFAD8: add $8,%esp;");
    asm("loc_6DAFADB: pop %esi;");
    asm("loc_6DAFADC: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAFAE0() // _sub_6DAFAE0
{
    __DEBUG_ASM(6DAFAE0);
    // chunk 0x6DAFAE0 _sub_6DAFAE0
    asm("loc_6DAFAE0: mov _data_6DB6704,%eax;");
    asm("loc_6DAFAE5: mov %eax,_data_6DBC500;");
    asm("loc_6DAFAEA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAFAF0() // _sub_6DAFAF0
{
    __DEBUG_ASM(6DAFAF0);
    // chunk 0x6DAFAF0 _sub_6DAFAF0
    asm("loc_6DAFAF0: mov _data_6DB6704,%eax;");
    asm("loc_6DAFAF5: mov %eax,_data_6DBC504;");
    asm("loc_6DAFAFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAFB00() // _sub_6DAFB00
{
    __DEBUG_ASM(6DAFB00);
    // chunk 0x6DAFB00 _sub_6DAFB00
    asm("loc_6DAFB00: mov _data_6DB6708,%eax;");
    asm("loc_6DAFB05: mov %eax,_data_6DBC4FC;");
    asm("loc_6DAFB0A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAFB10() // _sub_6DAFB10
{
    __DEBUG_ASM(6DAFB10);
    // chunk 0x6DAFB10 _sub_6DAFB10
    asm("loc_6DAFB10: mov 8(%esp),%eax;");
    asm("loc_6DAFB14: push %ebx;");
    asm("loc_6DAFB15: push %ebp;");
    asm("loc_6DAFB16: mov %ecx,%ebx;");
    asm("loc_6DAFB18: mov 0xC(%esp),%ecx;");
    asm("loc_6DAFB1C: lea 0x10(%ebx),%ebp;");
    asm("loc_6DAFB1F: push %esi;");
    asm("loc_6DAFB20: push %edi;");
    asm("loc_6DAFB21: mov %eax,4(%ebp);");
    asm("loc_6DAFB24: mov (%ecx),%edx;");
    asm("loc_6DAFB26: mov %edx,8(%ebp);");
    asm("loc_6DAFB29: movl $0,(%ebp);");
    asm("loc_6DAFB30: movl $0,0xC(%ebp);");
    asm("loc_6DAFB37: mov 0x14(%ebx),%eax;");
    asm("loc_6DAFB3A: push %ebp;");
    asm("loc_6DAFB3B: push %eax;");
    asm("loc_6DAFB3C: lea 0x18(%ebx),%edi;");
    asm("loc_6DAFB3F: push %edi;");
    asm("loc_6DAFB40: mov %ebx,%ecx;");
    asm("loc_6DAFB42: call _sub_6DA1380;");
    asm("loc_6DAFB47: test %eax,%eax;");
    asm("loc_6DAFB49: mov %eax,0x1C(%ebx);");
    asm("loc_6DAFB4C: je loc_6DAFB5A;");
    asm("loc_6DAFB4E: pop %edi;");
    asm("loc_6DAFB4F: pop %esi;");
    asm("loc_6DAFB50: pop %ebp;");
    asm("loc_6DAFB51: mov $0x16,%eax;");
    asm("loc_6DAFB56: pop %ebx;");
    asm("loc_6DAFB57: ret $0xC;");
    asm("loc_6DAFB5A: mov (%ebp),%edx;");
    asm("loc_6DAFB5D: mov 4(%ebp),%ecx;");
    asm("loc_6DAFB60: inc %edx;");
    asm("loc_6DAFB61: mov %edx,%eax;");
    asm("loc_6DAFB63: cmp %ecx,%eax;");
    asm("loc_6DAFB65: mov %edx,(%ebp);");
    asm("loc_6DAFB68: jbe loc_6DAFB71;");
    asm("loc_6DAFB6A: movl $0x16,0xC(%ebp);");
    asm("loc_6DAFB71: mov 0x1C(%ebx),%eax;");
    asm("loc_6DAFB74: test %eax,%eax;");
    asm("loc_6DAFB76: je loc_6DAFB84;");
    asm("loc_6DAFB78: pop %edi;");
    asm("loc_6DAFB79: pop %esi;");
    asm("loc_6DAFB7A: pop %ebp;");
    asm("loc_6DAFB7B: mov $0x16,%eax;");
    asm("loc_6DAFB80: pop %ebx;");
    asm("loc_6DAFB81: ret $0xC;");
    asm("loc_6DAFB84: mov (%edi),%eax;");
    asm("loc_6DAFB86: mov 0x420(%ebx),%cl;");
    asm("loc_6DAFB8C: mov _import_6DB31EC,%esi;");
    asm("loc_6DAFB92: mov %cl,(%eax);");
    asm("loc_6DAFB94: inc %eax;");
    asm("loc_6DAFB95: mov %eax,(%edi);");
    asm("loc_6DAFB97: lea 0x20(%ebx),%eax;");
    asm("loc_6DAFB9A: push %eax;");
    asm("loc_6DAFB9B: call *%esi;");
    asm("loc_6DAFB9D: mov %al,0x1C(%esp);");
    asm("loc_6DAFBA1: lea 0x220(%ebx),%eax;");
    asm("loc_6DAFBA7: push %eax;");
    asm("loc_6DAFBA8: call *%esi;");
    asm("loc_6DAFBAA: mov (%ebp),%esi;");
    asm("loc_6DAFBAD: mov 4(%ebp),%edx;");
    asm("loc_6DAFBB0: add $8,%esp;");
    asm("loc_6DAFBB3: inc %esi;");
    asm("loc_6DAFBB4: mov %esi,%ecx;");
    asm("loc_6DAFBB6: cmp %edx,%ecx;");
    asm("loc_6DAFBB8: mov %al,0x14(%esp);");
    asm("loc_6DAFBBC: mov %esi,(%ebp);");
    asm("loc_6DAFBBF: jbe loc_6DAFBC8;");
    asm("loc_6DAFBC1: movl $0x16,0xC(%ebp);");
    asm("loc_6DAFBC8: mov 0x1C(%ebx),%ecx;");
    asm("loc_6DAFBCB: test %ecx,%ecx;");
    asm("loc_6DAFBCD: je loc_6DAFBDB;");
    asm("loc_6DAFBCF: pop %edi;");
    asm("loc_6DAFBD0: pop %esi;");
    asm("loc_6DAFBD1: pop %ebp;");
    asm("loc_6DAFBD2: mov $0x16,%eax;");
    asm("loc_6DAFBD7: pop %ebx;");
    asm("loc_6DAFBD8: ret $0xC;");
    asm("loc_6DAFBDB: mov (%edi),%ecx;");
    asm("loc_6DAFBDD: mov 0x18(%esp),%dl;");
    asm("loc_6DAFBE1: mov %dl,(%ecx);");
    asm("loc_6DAFBE3: inc %ecx;");
    asm("loc_6DAFBE4: mov %ecx,(%edi);");
    asm("loc_6DAFBE6: mov (%ebp),%ecx;");
    asm("loc_6DAFBE9: mov 4(%ebp),%esi;");
    asm("loc_6DAFBEC: inc %ecx;");
    asm("loc_6DAFBED: cmp %esi,%ecx;");
    asm("loc_6DAFBEF: mov %ecx,(%ebp);");
    asm("loc_6DAFBF2: jbe loc_6DAFBFB;");
    asm("loc_6DAFBF4: movl $0x16,0xC(%ebp);");
    asm("loc_6DAFBFB: mov 0x1C(%ebx),%ecx;");
    asm("loc_6DAFBFE: test %ecx,%ecx;");
    asm("loc_6DAFC00: je loc_6DAFC0E;");
    asm("loc_6DAFC02: pop %edi;");
    asm("loc_6DAFC03: pop %esi;");
    asm("loc_6DAFC04: pop %ebp;");
    asm("loc_6DAFC05: mov $0x16,%eax;");
    asm("loc_6DAFC0A: pop %ebx;");
    asm("loc_6DAFC0B: ret $0xC;");
    asm("loc_6DAFC0E: mov (%edi),%ecx;");
    asm("loc_6DAFC10: mov %al,(%ecx);");
    asm("loc_6DAFC12: inc %ecx;");
    asm("loc_6DAFC13: test %dl,%dl;");
    asm("loc_6DAFC15: mov %ecx,(%edi);");
    asm("loc_6DAFC17: je loc_6DAFC79;");
    asm("loc_6DAFC19: lea 0x20(%ebx),%esi;");
    asm("loc_6DAFC1C: push %esi;");
    asm("loc_6DAFC1D: calll *_import_6DB320C;");
    asm("loc_6DAFC23: movzbl 0x1C(%esp),%eax;");
    asm("loc_6DAFC28: mov (%ebp),%ecx;");
    asm("loc_6DAFC2B: mov 4(%ebp),%edx;");
    asm("loc_6DAFC2E: shl $1,%eax;");
    asm("loc_6DAFC30: add %eax,%ecx;");
    asm("loc_6DAFC32: add $4,%esp;");
    asm("loc_6DAFC35: cmp %edx,%ecx;");
    asm("loc_6DAFC37: mov %ecx,(%ebp);");
    asm("loc_6DAFC3A: jbe loc_6DAFC43;");
    asm("loc_6DAFC3C: movl $0x16,0xC(%ebp);");
    asm("loc_6DAFC43: mov 0x1C(%ebx),%ecx;");
    asm("loc_6DAFC46: test %ecx,%ecx;");
    asm("loc_6DAFC48: je loc_6DAFC56;");
    asm("loc_6DAFC4A: pop %edi;");
    asm("loc_6DAFC4B: pop %esi;");
    asm("loc_6DAFC4C: pop %ebp;");
    asm("loc_6DAFC4D: mov $0x16,%eax;");
    asm("loc_6DAFC52: pop %ebx;");
    asm("loc_6DAFC53: ret $0xC;");
    asm("loc_6DAFC56: mov (%edi),%edi;");
    asm("loc_6DAFC58: mov %eax,%ecx;");
    asm("loc_6DAFC5A: mov %ecx,%edx;");
    asm("loc_6DAFC5C: shr $2,%ecx;");
    asm("loc_6DAFC5F: mov %edi,0x18(%esp);");
    asm("loc_6DAFC63: rep movsl (%esi),(%edi);");
    asm("loc_6DAFC65: mov %edx,%ecx;");
    asm("loc_6DAFC67: and $3,%ecx;");
    asm("loc_6DAFC6A: rep movsb (%esi),(%edi);");
    asm("loc_6DAFC6C: mov 0x18(%esp),%ecx;");
    asm("loc_6DAFC70: add %eax,%ecx;");
    asm("loc_6DAFC72: mov 0x14(%esp),%al;");
    asm("loc_6DAFC76: mov %ecx,0x18(%ebx);");
    asm("loc_6DAFC79: test %al,%al;");
    asm("loc_6DAFC7B: je loc_6DAFCD3;");
    asm("loc_6DAFC7D: mov (%ebp),%esi;");
    asm("loc_6DAFC80: mov 4(%ebp),%edx;");
    asm("loc_6DAFC83: movzbl %al,%eax;");
    asm("loc_6DAFC86: shl $1,%eax;");
    asm("loc_6DAFC88: add %eax,%esi;");
    asm("loc_6DAFC8A: mov %esi,%ecx;");
    asm("loc_6DAFC8C: cmp %edx,%ecx;");
    asm("loc_6DAFC8E: mov %esi,(%ebp);");
    asm("loc_6DAFC91: jbe loc_6DAFC9A;");
    asm("loc_6DAFC93: movl $0x16,0xC(%ebp);");
    asm("loc_6DAFC9A: mov 0x1C(%ebx),%ecx;");
    asm("loc_6DAFC9D: test %ecx,%ecx;");
    asm("loc_6DAFC9F: je loc_6DAFCAD;");
    asm("loc_6DAFCA1: pop %edi;");
    asm("loc_6DAFCA2: pop %esi;");
    asm("loc_6DAFCA3: pop %ebp;");
    asm("loc_6DAFCA4: mov $0x16,%eax;");
    asm("loc_6DAFCA9: pop %ebx;");
    asm("loc_6DAFCAA: ret $0xC;");
    asm("loc_6DAFCAD: mov 0x18(%ebx),%edi;");
    asm("loc_6DAFCB0: mov %eax,%ecx;");
    asm("loc_6DAFCB2: mov %ecx,%edx;");
    asm("loc_6DAFCB4: shr $2,%ecx;");
    asm("loc_6DAFCB7: mov %edi,0x18(%esp);");
    asm("loc_6DAFCBB: lea 0x220(%ebx),%esi;");
    asm("loc_6DAFCC1: rep movsl (%esi),(%edi);");
    asm("loc_6DAFCC3: mov %edx,%ecx;");
    asm("loc_6DAFCC5: and $3,%ecx;");
    asm("loc_6DAFCC8: rep movsb (%esi),(%edi);");
    asm("loc_6DAFCCA: mov 0x18(%esp),%ecx;");
    asm("loc_6DAFCCE: add %eax,%ecx;");
    asm("loc_6DAFCD0: mov %ecx,0x18(%ebx);");
    asm("loc_6DAFCD3: mov 0x14(%ebx),%edx;");
    asm("loc_6DAFCD6: push %ebp;");
    asm("loc_6DAFCD7: push %edx;");
    asm("loc_6DAFCD8: lea 0x18(%ebx),%eax;");
    asm("loc_6DAFCDB: push %eax;");
    asm("loc_6DAFCDC: mov %ebx,%ecx;");
    asm("loc_6DAFCDE: call _sub_6DA13C0;");
    asm("loc_6DAFCE3: test %eax,%eax;");
    asm("loc_6DAFCE5: mov %eax,0x1C(%ebx);");
    asm("loc_6DAFCE8: je loc_6DAFCF6;");
    asm("loc_6DAFCEA: pop %edi;");
    asm("loc_6DAFCEB: pop %esi;");
    asm("loc_6DAFCEC: pop %ebp;");
    asm("loc_6DAFCED: mov $0x16,%eax;");
    asm("loc_6DAFCF2: pop %ebx;");
    asm("loc_6DAFCF3: ret $0xC;");
    asm("loc_6DAFCF6: mov (%ebp),%eax;");
    asm("loc_6DAFCF9: mov 0x1C(%esp),%ecx;");
    asm("loc_6DAFCFD: mov %eax,(%ecx);");
    asm("loc_6DAFCFF: mov 0xC(%ebx),%edx;");
    asm("loc_6DAFD02: push %edx;");
    asm("loc_6DAFD03: call _sub_6DA16B0;");
    asm("loc_6DAFD08: mov %eax,%ecx;");
    asm("loc_6DAFD0A: mov (%ecx),%esi;");
    asm("loc_6DAFD0C: mov 0x18(%ecx),%edx;");
    asm("loc_6DAFD0F: add $4,%esp;");
    asm("loc_6DAFD12: inc %esi;");
    asm("loc_6DAFD13: mov %esi,(%ecx);");
    asm("loc_6DAFD15: mov (%ebp),%eax;");
    asm("loc_6DAFD18: add %eax,%edx;");
    asm("loc_6DAFD1A: mov 0x10(%ecx),%eax;");
    asm("loc_6DAFD1D: mov %edx,0x18(%ecx);");
    asm("loc_6DAFD20: mov (%ebp),%ebp;");
    asm("loc_6DAFD23: cmp %eax,%ebp;");
    asm("loc_6DAFD25: jbe loc_6DAFD2A;");
    asm("loc_6DAFD27: mov %ebp,0x10(%ecx);");
    asm("loc_6DAFD2A: mov 0x18(%ecx),%eax;");
    asm("loc_6DAFD2D: xor %edx,%edx;");
    asm("loc_6DAFD2F: div %esi;");
    asm("loc_6DAFD31: pop %edi;");
    asm("loc_6DAFD32: pop %esi;");
    asm("loc_6DAFD33: pop %ebp;");
    asm("loc_6DAFD34: pop %ebx;");
    asm("loc_6DAFD35: mov %eax,8(%ecx);");
    asm("loc_6DAFD38: xor %eax,%eax;");
    asm("loc_6DAFD3A: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAFD40() // _sub_6DAFD40
{
    __DEBUG_ASM(6DAFD40);
    // chunk 0x6DAFD40 _sub_6DAFD40
    asm("loc_6DAFD40: push %ecx;");
    asm("loc_6DAFD41: mov 0xC(%esp),%eax;");
    asm("loc_6DAFD45: push %ebx;");
    asm("loc_6DAFD46: push %ebp;");
    asm("loc_6DAFD47: push %esi;");
    asm("loc_6DAFD48: mov %ecx,%ebx;");
    asm("loc_6DAFD4A: mov 0x14(%esp),%ecx;");
    asm("loc_6DAFD4E: lea 0x10(%ebx),%ebp;");
    asm("loc_6DAFD51: push %edi;");
    asm("loc_6DAFD52: push %ebp;");
    asm("loc_6DAFD53: push %eax;");
    asm("loc_6DAFD54: mov %ecx,8(%ebp);");
    asm("loc_6DAFD57: lea 0x18(%ebx),%esi;");
    asm("loc_6DAFD5A: push %esi;");
    asm("loc_6DAFD5B: mov %ebx,%ecx;");
    asm("loc_6DAFD5D: mov %eax,4(%ebp);");
    asm("loc_6DAFD60: movl $0,(%ebp);");
    asm("loc_6DAFD67: movl $0,0xC(%ebp);");
    asm("loc_6DAFD6E: call _sub_6DA13C0;");
    asm("loc_6DAFD73: test %eax,%eax;");
    asm("loc_6DAFD75: mov %eax,0x1C(%ebx);");
    asm("loc_6DAFD78: je loc_6DAFD87;");
    asm("loc_6DAFD7A: pop %edi;");
    asm("loc_6DAFD7B: pop %esi;");
    asm("loc_6DAFD7C: pop %ebp;");
    asm("loc_6DAFD7D: mov $0x17,%eax;");
    asm("loc_6DAFD82: pop %ebx;");
    asm("loc_6DAFD83: pop %ecx;");
    asm("loc_6DAFD84: ret $0xC;");
    asm("loc_6DAFD87: xor %eax,%eax;");
    asm("loc_6DAFD89: lea 0x20(%ebx),%edi;");
    asm("loc_6DAFD8C: mov $0x100,%ecx;");
    asm("loc_6DAFD91: rep stos %eax,(%edi);");
    asm("loc_6DAFD93: stos %ax,(%edi);");
    asm("loc_6DAFD95: mov (%ebp),%edx;");
    asm("loc_6DAFD98: mov 4(%ebp),%ecx;");
    asm("loc_6DAFD9B: inc %edx;");
    asm("loc_6DAFD9C: mov %edx,%eax;");
    asm("loc_6DAFD9E: cmp %ecx,%eax;");
    asm("loc_6DAFDA0: mov %edx,(%ebp);");
    asm("loc_6DAFDA3: mov $0x17,%edi;");
    asm("loc_6DAFDA8: jbe loc_6DAFDAD;");
    asm("loc_6DAFDAA: mov %edi,0xC(%ebp);");
    asm("loc_6DAFDAD: mov 0x1C(%ebx),%eax;");
    asm("loc_6DAFDB0: test %eax,%eax;");
    asm("loc_6DAFDB2: jne loc_6DAFF42;");
    asm("loc_6DAFDB8: mov (%esi),%eax;");
    asm("loc_6DAFDBA: mov (%eax),%dl;");
    asm("loc_6DAFDBC: inc %eax;");
    asm("loc_6DAFDBD: mov %dl,0x420(%ebx);");
    asm("loc_6DAFDC3: mov %eax,(%esi);");
    asm("loc_6DAFDC5: mov (%ebp),%edx;");
    asm("loc_6DAFDC8: mov 4(%ebp),%ecx;");
    asm("loc_6DAFDCB: inc %edx;");
    asm("loc_6DAFDCC: mov %edx,%eax;");
    asm("loc_6DAFDCE: cmp %ecx,%eax;");
    asm("loc_6DAFDD0: mov %edx,(%ebp);");
    asm("loc_6DAFDD3: jbe loc_6DAFDD8;");
    asm("loc_6DAFDD5: mov %edi,0xC(%ebp);");
    asm("loc_6DAFDD8: mov 0x1C(%ebx),%eax;");
    asm("loc_6DAFDDB: test %eax,%eax;");
    asm("loc_6DAFDDD: jne loc_6DAFF42;");
    asm("loc_6DAFDE3: mov (%esi),%eax;");
    asm("loc_6DAFDE5: mov (%eax),%cl;");
    asm("loc_6DAFDE7: inc %eax;");
    asm("loc_6DAFDE8: mov %eax,(%esi);");
    asm("loc_6DAFDEA: mov (%ebp),%eax;");
    asm("loc_6DAFDED: mov 4(%ebp),%edx;");
    asm("loc_6DAFDF0: inc %eax;");
    asm("loc_6DAFDF1: cmp %edx,%eax;");
    asm("loc_6DAFDF3: mov %eax,(%ebp);");
    asm("loc_6DAFDF6: jbe loc_6DAFDFB;");
    asm("loc_6DAFDF8: mov %edi,0xC(%ebp);");
    asm("loc_6DAFDFB: mov 0x1C(%ebx),%eax;");
    asm("loc_6DAFDFE: test %eax,%eax;");
    asm("loc_6DAFE00: jne loc_6DAFF42;");
    asm("loc_6DAFE06: mov (%esi),%eax;");
    asm("loc_6DAFE08: mov (%eax),%dl;");
    asm("loc_6DAFE0A: inc %eax;");
    asm("loc_6DAFE0B: test %cl,%cl;");
    asm("loc_6DAFE0D: mov %dl,0x18(%esp);");
    asm("loc_6DAFE11: mov %eax,(%esi);");
    asm("loc_6DAFE13: je loc_6DAFE6C;");
    asm("loc_6DAFE15: mov 4(%ebp),%edx;");
    asm("loc_6DAFE18: xor %eax,%eax;");
    asm("loc_6DAFE1A: mov %cl,%al;");
    asm("loc_6DAFE1C: mov %eax,0x10(%esp);");
    asm("loc_6DAFE20: lea (%eax,%eax),%ecx;");
    asm("loc_6DAFE23: mov (%ebp),%eax;");
    asm("loc_6DAFE26: add %ecx,%eax;");
    asm("loc_6DAFE28: cmp %edx,%eax;");
    asm("loc_6DAFE2A: mov %eax,(%ebp);");
    asm("loc_6DAFE2D: jbe loc_6DAFE32;");
    asm("loc_6DAFE2F: mov %edi,0xC(%ebp);");
    asm("loc_6DAFE32: mov 0x1C(%ebx),%eax;");
    asm("loc_6DAFE35: test %eax,%eax;");
    asm("loc_6DAFE37: jne loc_6DAFF42;");
    asm("loc_6DAFE3D: mov (%esi),%eax;");
    asm("loc_6DAFE3F: mov %ecx,%edx;");
    asm("loc_6DAFE41: shr $2,%ecx;");
    asm("loc_6DAFE44: mov %eax,%esi;");
    asm("loc_6DAFE46: lea 0x20(%ebx),%edi;");
    asm("loc_6DAFE49: rep movsl (%esi),(%edi);");
    asm("loc_6DAFE4B: mov %edx,%ecx;");
    asm("loc_6DAFE4D: mov 0x18(%esp),%dl;");
    asm("loc_6DAFE51: and $3,%ecx;");
    asm("loc_6DAFE54: rep movsb (%esi),(%edi);");
    asm("loc_6DAFE56: mov 0x10(%esp),%ecx;");
    asm("loc_6DAFE5A: lea (%eax,%ecx,2),%eax;");
    asm("loc_6DAFE5D: mov %eax,0x18(%ebx);");
    asm("loc_6DAFE60: movw $0,0x20(%ebx,%ecx,2);");
    asm("loc_6DAFE67: mov $0x17,%edi;");
    asm("loc_6DAFE6C: test %dl,%dl;");
    asm("loc_6DAFE6E: je loc_6DAFED3;");
    asm("loc_6DAFE70: mov (%ebp),%esi;");
    asm("loc_6DAFE73: mov 4(%ebp),%ecx;");
    asm("loc_6DAFE76: xor %eax,%eax;");
    asm("loc_6DAFE78: mov %dl,%al;");
    asm("loc_6DAFE7A: lea (%eax,%eax),%edx;");
    asm("loc_6DAFE7D: add %edx,%esi;");
    asm("loc_6DAFE7F: mov %eax,0x10(%esp);");
    asm("loc_6DAFE83: mov %esi,%eax;");
    asm("loc_6DAFE85: cmp %ecx,%eax;");
    asm("loc_6DAFE87: mov %esi,(%ebp);");
    asm("loc_6DAFE8A: jbe loc_6DAFE8F;");
    asm("loc_6DAFE8C: mov %edi,0xC(%ebp);");
    asm("loc_6DAFE8F: mov 0x1C(%ebx),%eax;");
    asm("loc_6DAFE92: test %eax,%eax;");
    asm("loc_6DAFE94: jne loc_6DAFF42;");
    asm("loc_6DAFE9A: mov 0x18(%ebx),%esi;");
    asm("loc_6DAFE9D: mov %edx,%ecx;");
    asm("loc_6DAFE9F: mov %ecx,%eax;");
    asm("loc_6DAFEA1: shr $2,%ecx;");
    asm("loc_6DAFEA4: mov %esi,0x18(%esp);");
    asm("loc_6DAFEA8: lea 0x220(%ebx),%edi;");
    asm("loc_6DAFEAE: rep movsl (%esi),(%edi);");
    asm("loc_6DAFEB0: mov %eax,%ecx;");
    asm("loc_6DAFEB2: and $3,%ecx;");
    asm("loc_6DAFEB5: rep movsb (%esi),(%edi);");
    asm("loc_6DAFEB7: mov 0x18(%esp),%ecx;");
    asm("loc_6DAFEBB: add %edx,%ecx;");
    asm("loc_6DAFEBD: mov 0x10(%esp),%edx;");
    asm("loc_6DAFEC1: mov %ecx,0x18(%ebx);");
    asm("loc_6DAFEC4: movw $0,0x220(%ebx,%edx,2);");
    asm("loc_6DAFECE: mov $0x17,%edi;");
    asm("loc_6DAFED3: mov 0x1C(%esp),%eax;");
    asm("loc_6DAFED7: push %ebp;");
    asm("loc_6DAFED8: push %eax;");
    asm("loc_6DAFED9: lea 0x18(%ebx),%eax;");
    asm("loc_6DAFEDC: push %eax;");
    asm("loc_6DAFEDD: mov %ebx,%ecx;");
    asm("loc_6DAFEDF: call _sub_6DA13C0;");
    asm("loc_6DAFEE4: test %eax,%eax;");
    asm("loc_6DAFEE6: mov %eax,0x1C(%ebx);");
    asm("loc_6DAFEE9: je loc_6DAFEF5;");
    asm("loc_6DAFEEB: mov %edi,%eax;");
    asm("loc_6DAFEED: pop %edi;");
    asm("loc_6DAFEEE: pop %esi;");
    asm("loc_6DAFEEF: pop %ebp;");
    asm("loc_6DAFEF0: pop %ebx;");
    asm("loc_6DAFEF1: pop %ecx;");
    asm("loc_6DAFEF2: ret $0xC;");
    asm("loc_6DAFEF5: mov (%ebp),%ecx;");
    asm("loc_6DAFEF8: mov 0x20(%esp),%edx;");
    asm("loc_6DAFEFC: mov %ecx,(%edx);");
    asm("loc_6DAFEFE: mov 0xC(%ebx),%eax;");
    asm("loc_6DAFF01: push %eax;");
    asm("loc_6DAFF02: call _sub_6DA16B0;");
    asm("loc_6DAFF07: mov %eax,%ecx;");
    asm("loc_6DAFF09: mov 4(%ecx),%edx;");
    asm("loc_6DAFF0C: mov 0x1C(%ecx),%ebx;");
    asm("loc_6DAFF0F: mov 0x14(%ecx),%eax;");
    asm("loc_6DAFF12: add $4,%esp;");
    asm("loc_6DAFF15: inc %edx;");
    asm("loc_6DAFF16: mov %edx,4(%ecx);");
    asm("loc_6DAFF19: mov %edx,%esi;");
    asm("loc_6DAFF1B: mov (%ebp),%edx;");
    asm("loc_6DAFF1E: add $2,%edx;");
    asm("loc_6DAFF21: add %edx,%ebx;");
    asm("loc_6DAFF23: mov %ebx,0x1C(%ecx);");
    asm("loc_6DAFF26: mov (%ebp),%ebp;");
    asm("loc_6DAFF29: add $2,%eax;");
    asm("loc_6DAFF2C: cmp %eax,%ebp;");
    asm("loc_6DAFF2E: jbe loc_6DAFF36;");
    asm("loc_6DAFF30: add $2,%ebp;");
    asm("loc_6DAFF33: mov %ebp,0x14(%ecx);");
    asm("loc_6DAFF36: mov 0x1C(%ecx),%eax;");
    asm("loc_6DAFF39: xor %edx,%edx;");
    asm("loc_6DAFF3B: div %esi;");
    asm("loc_6DAFF3D: mov %eax,0xC(%ecx);");
    asm("loc_6DAFF40: xor %eax,%eax;");
    asm("loc_6DAFF42: pop %edi;");
    asm("loc_6DAFF43: pop %esi;");
    asm("loc_6DAFF44: pop %ebp;");
    asm("loc_6DAFF45: pop %ebx;");
    asm("loc_6DAFF46: pop %ecx;");
    asm("loc_6DAFF47: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAFF50() // _sub_6DAFF50
{
    __DEBUG_ASM(6DAFF50);
    // chunk 0x6DAFF50 _sub_6DAFF50
    asm("loc_6DAFF50: mov 4(%esp),%eax;");
    asm("loc_6DAFF54: push %esi;");
    asm("loc_6DAFF55: mov _import_6DB3194,%esi;");
    asm("loc_6DAFF5B: push $_data_6DB3D88;");
    asm("loc_6DAFF60: add $0x20,%ecx;");
    asm("loc_6DAFF63: push %ecx;");
    asm("loc_6DAFF64: push $_data_6DB6718;");
    asm("loc_6DAFF69: push %eax;");
    asm("loc_6DAFF6A: call *%esi;");
    asm("loc_6DAFF6C: add $8,%esp;");
    asm("loc_6DAFF6F: mov %eax,%ecx;");
    asm("loc_6DAFF71: calll *_import_6DB318C;");
    asm("loc_6DAFF77: push %eax;");
    asm("loc_6DAFF78: call *%esi;");
    asm("loc_6DAFF7A: add $8,%esp;");
    asm("loc_6DAFF7D: pop %esi;");
    asm("loc_6DAFF7E: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAFF90() // _sub_6DAFF90
{
    __DEBUG_ASM(6DAFF90);
    // chunk 0x6DAFF90 _sub_6DAFF90
    asm("loc_6DAFF90: mov _data_6DB6710,%eax;");
    asm("loc_6DAFF95: mov %eax,_data_6DBC510;");
    asm("loc_6DAFF9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAFFA0() // _sub_6DAFFA0
{
    __DEBUG_ASM(6DAFFA0);
    // chunk 0x6DAFFA0 _sub_6DAFFA0
    asm("loc_6DAFFA0: mov _data_6DB6710,%eax;");
    asm("loc_6DAFFA5: mov %eax,_data_6DBC514;");
    asm("loc_6DAFFAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAFFB0() // _sub_6DAFFB0
{
    __DEBUG_ASM(6DAFFB0);
    // chunk 0x6DAFFB0 _sub_6DAFFB0
    asm("loc_6DAFFB0: mov _data_6DB6714,%eax;");
    asm("loc_6DAFFB5: mov %eax,_data_6DBC50C;");
    asm("loc_6DAFFBA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DAFFC0() // _sub_6DAFFC0
{
    __DEBUG_ASM(6DAFFC0);
    // chunk 0x6DAFFC0 _sub_6DAFFC0
    asm("loc_6DAFFC0: mov 8(%esp),%eax;");
    asm("loc_6DAFFC4: push %ebx;");
    asm("loc_6DAFFC5: push %ebp;");
    asm("loc_6DAFFC6: push %esi;");
    asm("loc_6DAFFC7: push %edi;");
    asm("loc_6DAFFC8: mov %ecx,%edi;");
    asm("loc_6DAFFCA: mov 0x14(%esp),%ecx;");
    asm("loc_6DAFFCE: lea 0x10(%edi),%esi;");
    asm("loc_6DAFFD1: mov %eax,4(%esi);");
    asm("loc_6DAFFD4: mov (%ecx),%edx;");
    asm("loc_6DAFFD6: mov %edx,8(%esi);");
    asm("loc_6DAFFD9: movl $0,(%esi);");
    asm("loc_6DAFFDF: movl $0,0xC(%esi);");
    asm("loc_6DAFFE6: mov 0x14(%edi),%eax;");
    asm("loc_6DAFFE9: push %esi;");
    asm("loc_6DAFFEA: push %eax;");
    asm("loc_6DAFFEB: lea 0x18(%edi),%ebx;");
    asm("loc_6DAFFEE: push %ebx;");
    asm("loc_6DAFFEF: mov %edi,%ecx;");
    asm("loc_6DAFFF1: call _sub_6DA1380;");
    asm("loc_6DAFFF6: test %eax,%eax;");
    asm("loc_6DAFFF8: mov %eax,0x1C(%edi);");
    asm("loc_6DAFFFB: je loc_6DB0009;");
    asm("loc_6DAFFFD: pop %edi;");
    asm("loc_6DAFFFE: pop %esi;");
    asm("loc_6DAFFFF: pop %ebp;");
    asm("loc_6DB0000: mov $0x16,%eax;");
    asm("loc_6DB0005: pop %ebx;");
    asm("loc_6DB0006: ret $0xC;");
    asm("loc_6DB0009: mov (%esi),%edx;");
    asm("loc_6DB000B: mov 4(%esi),%ecx;");
    asm("loc_6DB000E: add $4,%edx;");
    asm("loc_6DB0011: mov %edx,%eax;");
    asm("loc_6DB0013: cmp %ecx,%eax;");
    asm("loc_6DB0015: mov %edx,(%esi);");
    asm("loc_6DB0017: mov $0x16,%ebp;");
    asm("loc_6DB001C: jbe loc_6DB0021;");
    asm("loc_6DB001E: mov %ebp,0xC(%esi);");
    asm("loc_6DB0021: mov 0x1C(%edi),%eax;");
    asm("loc_6DB0024: test %eax,%eax;");
    asm("loc_6DB0026: je loc_6DB0031;");
    asm("loc_6DB0028: pop %edi;");
    asm("loc_6DB0029: pop %esi;");
    asm("loc_6DB002A: mov %ebp,%eax;");
    asm("loc_6DB002C: pop %ebp;");
    asm("loc_6DB002D: pop %ebx;");
    asm("loc_6DB002E: ret $0xC;");
    asm("loc_6DB0031: mov (%ebx),%eax;");
    asm("loc_6DB0033: mov 0x20(%edi),%ecx;");
    asm("loc_6DB0036: mov %ecx,(%eax);");
    asm("loc_6DB0038: add $4,%eax;");
    asm("loc_6DB003B: mov %eax,(%ebx);");
    asm("loc_6DB003D: mov (%esi),%edx;");
    asm("loc_6DB003F: mov 4(%esi),%ecx;");
    asm("loc_6DB0042: add $4,%edx;");
    asm("loc_6DB0045: mov %edx,%eax;");
    asm("loc_6DB0047: cmp %ecx,%eax;");
    asm("loc_6DB0049: mov %edx,(%esi);");
    asm("loc_6DB004B: jbe loc_6DB0050;");
    asm("loc_6DB004D: mov %ebp,0xC(%esi);");
    asm("loc_6DB0050: mov 0x1C(%edi),%eax;");
    asm("loc_6DB0053: test %eax,%eax;");
    asm("loc_6DB0055: je loc_6DB0060;");
    asm("loc_6DB0057: pop %edi;");
    asm("loc_6DB0058: pop %esi;");
    asm("loc_6DB0059: mov %ebp,%eax;");
    asm("loc_6DB005B: pop %ebp;");
    asm("loc_6DB005C: pop %ebx;");
    asm("loc_6DB005D: ret $0xC;");
    asm("loc_6DB0060: mov (%ebx),%eax;");
    asm("loc_6DB0062: mov 0x24(%edi),%edx;");
    asm("loc_6DB0065: mov %edx,(%eax);");
    asm("loc_6DB0067: add $4,%eax;");
    asm("loc_6DB006A: mov %eax,(%ebx);");
    asm("loc_6DB006C: mov (%esi),%edx;");
    asm("loc_6DB006E: mov 4(%esi),%ecx;");
    asm("loc_6DB0071: add $4,%edx;");
    asm("loc_6DB0074: mov %edx,%eax;");
    asm("loc_6DB0076: cmp %ecx,%eax;");
    asm("loc_6DB0078: mov %edx,(%esi);");
    asm("loc_6DB007A: jbe loc_6DB007F;");
    asm("loc_6DB007C: mov %ebp,0xC(%esi);");
    asm("loc_6DB007F: mov 0x1C(%edi),%eax;");
    asm("loc_6DB0082: test %eax,%eax;");
    asm("loc_6DB0084: je loc_6DB008F;");
    asm("loc_6DB0086: pop %edi;");
    asm("loc_6DB0087: pop %esi;");
    asm("loc_6DB0088: mov %ebp,%eax;");
    asm("loc_6DB008A: pop %ebp;");
    asm("loc_6DB008B: pop %ebx;");
    asm("loc_6DB008C: ret $0xC;");
    asm("loc_6DB008F: mov (%ebx),%eax;");
    asm("loc_6DB0091: mov 0x28(%edi),%ecx;");
    asm("loc_6DB0094: mov %ecx,(%eax);");
    asm("loc_6DB0096: add $4,%eax;");
    asm("loc_6DB0099: mov %eax,(%ebx);");
    asm("loc_6DB009B: mov (%esi),%edx;");
    asm("loc_6DB009D: mov 4(%esi),%ecx;");
    asm("loc_6DB00A0: add $4,%edx;");
    asm("loc_6DB00A3: mov %edx,%eax;");
    asm("loc_6DB00A5: cmp %ecx,%eax;");
    asm("loc_6DB00A7: mov %edx,(%esi);");
    asm("loc_6DB00A9: jbe loc_6DB00AE;");
    asm("loc_6DB00AB: mov %ebp,0xC(%esi);");
    asm("loc_6DB00AE: mov 0x1C(%edi),%eax;");
    asm("loc_6DB00B1: test %eax,%eax;");
    asm("loc_6DB00B3: je loc_6DB00BE;");
    asm("loc_6DB00B5: pop %edi;");
    asm("loc_6DB00B6: pop %esi;");
    asm("loc_6DB00B7: mov %ebp,%eax;");
    asm("loc_6DB00B9: pop %ebp;");
    asm("loc_6DB00BA: pop %ebx;");
    asm("loc_6DB00BB: ret $0xC;");
    asm("loc_6DB00BE: mov (%ebx),%eax;");
    asm("loc_6DB00C0: mov 0x2C(%edi),%edx;");
    asm("loc_6DB00C3: mov %edx,(%eax);");
    asm("loc_6DB00C5: add $4,%eax;");
    asm("loc_6DB00C8: mov %eax,(%ebx);");
    asm("loc_6DB00CA: mov 0x14(%edi),%eax;");
    asm("loc_6DB00CD: push %esi;");
    asm("loc_6DB00CE: push %eax;");
    asm("loc_6DB00CF: push %ebx;");
    asm("loc_6DB00D0: mov %edi,%ecx;");
    asm("loc_6DB00D2: call _sub_6DA13C0;");
    asm("loc_6DB00D7: test %eax,%eax;");
    asm("loc_6DB00D9: mov %eax,0x1C(%edi);");
    asm("loc_6DB00DC: je loc_6DB00E7;");
    asm("loc_6DB00DE: pop %edi;");
    asm("loc_6DB00DF: pop %esi;");
    asm("loc_6DB00E0: mov %ebp,%eax;");
    asm("loc_6DB00E2: pop %ebp;");
    asm("loc_6DB00E3: pop %ebx;");
    asm("loc_6DB00E4: ret $0xC;");
    asm("loc_6DB00E7: mov (%esi),%ecx;");
    asm("loc_6DB00E9: mov 0x1C(%esp),%edx;");
    asm("loc_6DB00ED: mov %ecx,(%edx);");
    asm("loc_6DB00EF: mov 0xC(%edi),%eax;");
    asm("loc_6DB00F2: push %eax;");
    asm("loc_6DB00F3: call _sub_6DA16B0;");
    asm("loc_6DB00F8: mov %eax,%ecx;");
    asm("loc_6DB00FA: mov (%ecx),%ebp;");
    asm("loc_6DB00FC: mov 0x18(%ecx),%ebx;");
    asm("loc_6DB00FF: mov 0x10(%ecx),%eax;");
    asm("loc_6DB0102: add $4,%esp;");
    asm("loc_6DB0105: inc %ebp;");
    asm("loc_6DB0106: mov %ebp,(%ecx);");
    asm("loc_6DB0108: mov (%esi),%edx;");
    asm("loc_6DB010A: add %edx,%ebx;");
    asm("loc_6DB010C: mov %ebx,0x18(%ecx);");
    asm("loc_6DB010F: mov (%esi),%esi;");
    asm("loc_6DB0111: cmp %eax,%esi;");
    asm("loc_6DB0113: mov %ebp,%edi;");
    asm("loc_6DB0115: jbe loc_6DB011A;");
    asm("loc_6DB0117: mov %esi,0x10(%ecx);");
    asm("loc_6DB011A: mov 0x18(%ecx),%eax;");
    asm("loc_6DB011D: xor %edx,%edx;");
    asm("loc_6DB011F: div %edi;");
    asm("loc_6DB0121: pop %edi;");
    asm("loc_6DB0122: pop %esi;");
    asm("loc_6DB0123: pop %ebp;");
    asm("loc_6DB0124: pop %ebx;");
    asm("loc_6DB0125: mov %eax,8(%ecx);");
    asm("loc_6DB0128: xor %eax,%eax;");
    asm("loc_6DB012A: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB0130() // _sub_6DB0130
{
    __DEBUG_ASM(6DB0130);
    // chunk 0x6DB0130 _sub_6DB0130
    asm("loc_6DB0130: mov _data_6DB672C,%eax;");
    asm("loc_6DB0135: mov %eax,_data_6DBC520;");
    asm("loc_6DB013A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB0140() // _sub_6DB0140
{
    __DEBUG_ASM(6DB0140);
    // chunk 0x6DB0140 _sub_6DB0140
    asm("loc_6DB0140: mov _data_6DB672C,%eax;");
    asm("loc_6DB0145: mov %eax,_data_6DBC524;");
    asm("loc_6DB014A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB0150() // _sub_6DB0150
{
    __DEBUG_ASM(6DB0150);
    // chunk 0x6DB0150 _sub_6DB0150
    asm("loc_6DB0150: mov _data_6DB6730,%eax;");
    asm("loc_6DB0155: mov %eax,_data_6DBC51C;");
    asm("loc_6DB015A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB0160() // _sub_6DB0160
{
    __DEBUG_ASM(6DB0160);
    // chunk 0x6DB0160 _sub_6DB0160
    asm("loc_6DB0160: mov 8(%esp),%eax;");
    asm("loc_6DB0164: push %ebx;");
    asm("loc_6DB0165: push %esi;");
    asm("loc_6DB0166: push %edi;");
    asm("loc_6DB0167: mov %ecx,%edi;");
    asm("loc_6DB0169: mov 0x10(%esp),%ecx;");
    asm("loc_6DB016D: lea 0x10(%edi),%esi;");
    asm("loc_6DB0170: mov %eax,4(%esi);");
    asm("loc_6DB0173: mov (%ecx),%edx;");
    asm("loc_6DB0175: mov %edx,8(%esi);");
    asm("loc_6DB0178: movl $0,(%esi);");
    asm("loc_6DB017E: movl $0,0xC(%esi);");
    asm("loc_6DB0185: mov 0x14(%edi),%eax;");
    asm("loc_6DB0188: push %esi;");
    asm("loc_6DB0189: push %eax;");
    asm("loc_6DB018A: lea 0x18(%edi),%ebx;");
    asm("loc_6DB018D: push %ebx;");
    asm("loc_6DB018E: mov %edi,%ecx;");
    asm("loc_6DB0190: call _sub_6DA1380;");
    asm("loc_6DB0195: test %eax,%eax;");
    asm("loc_6DB0197: mov %eax,0x1C(%edi);");
    asm("loc_6DB019A: je loc_6DB01A7;");
    asm("loc_6DB019C: pop %edi;");
    asm("loc_6DB019D: pop %esi;");
    asm("loc_6DB019E: mov $0x16,%eax;");
    asm("loc_6DB01A3: pop %ebx;");
    asm("loc_6DB01A4: ret $0xC;");
    asm("loc_6DB01A7: mov (%esi),%edx;");
    asm("loc_6DB01A9: mov 4(%esi),%ecx;");
    asm("loc_6DB01AC: add $4,%edx;");
    asm("loc_6DB01AF: mov %edx,%eax;");
    asm("loc_6DB01B1: cmp %ecx,%eax;");
    asm("loc_6DB01B3: mov %edx,(%esi);");
    asm("loc_6DB01B5: jbe loc_6DB01BE;");
    asm("loc_6DB01B7: movl $0x16,0xC(%esi);");
    asm("loc_6DB01BE: mov 0x1C(%edi),%eax;");
    asm("loc_6DB01C1: test %eax,%eax;");
    asm("loc_6DB01C3: je loc_6DB01D0;");
    asm("loc_6DB01C5: pop %edi;");
    asm("loc_6DB01C6: pop %esi;");
    asm("loc_6DB01C7: mov $0x16,%eax;");
    asm("loc_6DB01CC: pop %ebx;");
    asm("loc_6DB01CD: ret $0xC;");
    asm("loc_6DB01D0: mov (%ebx),%eax;");
    asm("loc_6DB01D2: mov 0x20(%edi),%ecx;");
    asm("loc_6DB01D5: mov %ecx,(%eax);");
    asm("loc_6DB01D7: add $4,%eax;");
    asm("loc_6DB01DA: mov %eax,(%ebx);");
    asm("loc_6DB01DC: mov (%esi),%edx;");
    asm("loc_6DB01DE: mov 4(%esi),%ecx;");
    asm("loc_6DB01E1: add $4,%edx;");
    asm("loc_6DB01E4: mov %edx,%eax;");
    asm("loc_6DB01E6: cmp %ecx,%eax;");
    asm("loc_6DB01E8: mov %edx,(%esi);");
    asm("loc_6DB01EA: jbe loc_6DB01F3;");
    asm("loc_6DB01EC: movl $0x16,0xC(%esi);");
    asm("loc_6DB01F3: mov 0x1C(%edi),%eax;");
    asm("loc_6DB01F6: test %eax,%eax;");
    asm("loc_6DB01F8: je loc_6DB0205;");
    asm("loc_6DB01FA: pop %edi;");
    asm("loc_6DB01FB: pop %esi;");
    asm("loc_6DB01FC: mov $0x16,%eax;");
    asm("loc_6DB0201: pop %ebx;");
    asm("loc_6DB0202: ret $0xC;");
    asm("loc_6DB0205: mov (%ebx),%eax;");
    asm("loc_6DB0207: mov 0x24(%edi),%edx;");
    asm("loc_6DB020A: mov %edx,(%eax);");
    asm("loc_6DB020C: add $4,%eax;");
    asm("loc_6DB020F: mov %eax,(%ebx);");
    asm("loc_6DB0211: mov (%esi),%edx;");
    asm("loc_6DB0213: mov 4(%esi),%ecx;");
    asm("loc_6DB0216: add $4,%edx;");
    asm("loc_6DB0219: mov %edx,%eax;");
    asm("loc_6DB021B: cmp %ecx,%eax;");
    asm("loc_6DB021D: mov %edx,(%esi);");
    asm("loc_6DB021F: jbe loc_6DB0228;");
    asm("loc_6DB0221: movl $0x16,0xC(%esi);");
    asm("loc_6DB0228: mov 0x1C(%edi),%eax;");
    asm("loc_6DB022B: test %eax,%eax;");
    asm("loc_6DB022D: je loc_6DB023A;");
    asm("loc_6DB022F: pop %edi;");
    asm("loc_6DB0230: pop %esi;");
    asm("loc_6DB0231: mov $0x16,%eax;");
    asm("loc_6DB0236: pop %ebx;");
    asm("loc_6DB0237: ret $0xC;");
    asm("loc_6DB023A: mov (%ebx),%eax;");
    asm("loc_6DB023C: mov 0x28(%edi),%ecx;");
    asm("loc_6DB023F: mov %ecx,(%eax);");
    asm("loc_6DB0241: mov 0x14(%edi),%edx;");
    asm("loc_6DB0244: push %esi;");
    asm("loc_6DB0245: push %edx;");
    asm("loc_6DB0246: add $4,%eax;");
    asm("loc_6DB0249: push %ebx;");
    asm("loc_6DB024A: mov %edi,%ecx;");
    asm("loc_6DB024C: mov %eax,(%ebx);");
    asm("loc_6DB024E: call _sub_6DA13C0;");
    asm("loc_6DB0253: test %eax,%eax;");
    asm("loc_6DB0255: mov %eax,0x1C(%edi);");
    asm("loc_6DB0258: je loc_6DB0265;");
    asm("loc_6DB025A: pop %edi;");
    asm("loc_6DB025B: pop %esi;");
    asm("loc_6DB025C: mov $0x16,%eax;");
    asm("loc_6DB0261: pop %ebx;");
    asm("loc_6DB0262: ret $0xC;");
    asm("loc_6DB0265: mov (%esi),%eax;");
    asm("loc_6DB0267: mov 0x18(%esp),%ecx;");
    asm("loc_6DB026B: mov %eax,(%ecx);");
    asm("loc_6DB026D: mov 0xC(%edi),%edx;");
    asm("loc_6DB0270: push %edx;");
    asm("loc_6DB0271: call _sub_6DA16B0;");
    asm("loc_6DB0276: mov %eax,%ecx;");
    asm("loc_6DB0278: mov (%ecx),%edi;");
    asm("loc_6DB027A: mov 0x18(%ecx),%edx;");
    asm("loc_6DB027D: add $4,%esp;");
    asm("loc_6DB0280: inc %edi;");
    asm("loc_6DB0281: mov %edi,(%ecx);");
    asm("loc_6DB0283: mov (%esi),%eax;");
    asm("loc_6DB0285: add %eax,%edx;");
    asm("loc_6DB0287: mov 0x10(%ecx),%eax;");
    asm("loc_6DB028A: mov %edx,0x18(%ecx);");
    asm("loc_6DB028D: mov (%esi),%esi;");
    asm("loc_6DB028F: cmp %eax,%esi;");
    asm("loc_6DB0291: jbe loc_6DB0296;");
    asm("loc_6DB0293: mov %esi,0x10(%ecx);");
    asm("loc_6DB0296: mov 0x18(%ecx),%eax;");
    asm("loc_6DB0299: xor %edx,%edx;");
    asm("loc_6DB029B: div %edi;");
    asm("loc_6DB029D: pop %edi;");
    asm("loc_6DB029E: pop %esi;");
    asm("loc_6DB029F: pop %ebx;");
    asm("loc_6DB02A0: mov %eax,8(%ecx);");
    asm("loc_6DB02A3: xor %eax,%eax;");
    asm("loc_6DB02A5: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB02B0() // _sub_6DB02B0
{
    __DEBUG_ASM(6DB02B0);
    // chunk 0x6DB02B0 _sub_6DB02B0
    asm("loc_6DB02B0: mov _data_6DB6738,%eax;");
    asm("loc_6DB02B5: mov %eax,_data_6DBC530;");
    asm("loc_6DB02BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB02C0() // _sub_6DB02C0
{
    __DEBUG_ASM(6DB02C0);
    // chunk 0x6DB02C0 _sub_6DB02C0
    asm("loc_6DB02C0: mov _data_6DB6738,%eax;");
    asm("loc_6DB02C5: mov %eax,_data_6DBC534;");
    asm("loc_6DB02CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB02D0() // _sub_6DB02D0
{
    __DEBUG_ASM(6DB02D0);
    // chunk 0x6DB02D0 _sub_6DB02D0
    asm("loc_6DB02D0: mov _data_6DB673C,%eax;");
    asm("loc_6DB02D5: mov %eax,_data_6DBC52C;");
    asm("loc_6DB02DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB02E0() // _sub_6DB02E0
{
    __DEBUG_ASM(6DB02E0);
    // chunk 0x6DB02E0 _sub_6DB02E0
    asm("loc_6DB02E0: mov _data_6DB6744,%eax;");
    asm("loc_6DB02E5: mov %eax,_data_6DBC540;");
    asm("loc_6DB02EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB02F0() // _sub_6DB02F0
{
    __DEBUG_ASM(6DB02F0);
    // chunk 0x6DB02F0 _sub_6DB02F0
    asm("loc_6DB02F0: mov _data_6DB6744,%eax;");
    asm("loc_6DB02F5: mov %eax,_data_6DBC544;");
    asm("loc_6DB02FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB0300() // _sub_6DB0300
{
    __DEBUG_ASM(6DB0300);
    // chunk 0x6DB0300 _sub_6DB0300
    asm("loc_6DB0300: mov _data_6DB6748,%eax;");
    asm("loc_6DB0305: mov %eax,_data_6DBC53C;");
    asm("loc_6DB030A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB0310() // _sub_6DB0310
{
    __DEBUG_ASM(6DB0310);
    // chunk 0x6DB0310 _sub_6DB0310
    asm("loc_6DB0310: mov 8(%esp),%eax;");
    asm("loc_6DB0314: push %ebx;");
    asm("loc_6DB0315: push %esi;");
    asm("loc_6DB0316: push %edi;");
    asm("loc_6DB0317: mov %ecx,%edi;");
    asm("loc_6DB0319: mov 0x10(%esp),%ecx;");
    asm("loc_6DB031D: lea 0x10(%edi),%esi;");
    asm("loc_6DB0320: mov %eax,4(%esi);");
    asm("loc_6DB0323: mov (%ecx),%edx;");
    asm("loc_6DB0325: mov %edx,8(%esi);");
    asm("loc_6DB0328: movl $0,(%esi);");
    asm("loc_6DB032E: movl $0,0xC(%esi);");
    asm("loc_6DB0335: mov 0x14(%edi),%eax;");
    asm("loc_6DB0338: push %esi;");
    asm("loc_6DB0339: push %eax;");
    asm("loc_6DB033A: lea 0x18(%edi),%ebx;");
    asm("loc_6DB033D: push %ebx;");
    asm("loc_6DB033E: mov %edi,%ecx;");
    asm("loc_6DB0340: call _sub_6DA1380;");
    asm("loc_6DB0345: test %eax,%eax;");
    asm("loc_6DB0347: mov %eax,0x1C(%edi);");
    asm("loc_6DB034A: je loc_6DB0357;");
    asm("loc_6DB034C: pop %edi;");
    asm("loc_6DB034D: pop %esi;");
    asm("loc_6DB034E: mov $0x16,%eax;");
    asm("loc_6DB0353: pop %ebx;");
    asm("loc_6DB0354: ret $0xC;");
    asm("loc_6DB0357: mov (%esi),%edx;");
    asm("loc_6DB0359: mov 4(%esi),%ecx;");
    asm("loc_6DB035C: add $4,%edx;");
    asm("loc_6DB035F: mov %edx,%eax;");
    asm("loc_6DB0361: cmp %ecx,%eax;");
    asm("loc_6DB0363: mov %edx,(%esi);");
    asm("loc_6DB0365: jbe loc_6DB036E;");
    asm("loc_6DB0367: movl $0x16,0xC(%esi);");
    asm("loc_6DB036E: mov 0x1C(%edi),%eax;");
    asm("loc_6DB0371: test %eax,%eax;");
    asm("loc_6DB0373: je loc_6DB0380;");
    asm("loc_6DB0375: pop %edi;");
    asm("loc_6DB0376: pop %esi;");
    asm("loc_6DB0377: mov $0x16,%eax;");
    asm("loc_6DB037C: pop %ebx;");
    asm("loc_6DB037D: ret $0xC;");
    asm("loc_6DB0380: mov (%ebx),%eax;");
    asm("loc_6DB0382: mov 0x20(%edi),%ecx;");
    asm("loc_6DB0385: mov %ecx,(%eax);");
    asm("loc_6DB0387: mov 0x14(%edi),%edx;");
    asm("loc_6DB038A: push %esi;");
    asm("loc_6DB038B: push %edx;");
    asm("loc_6DB038C: add $4,%eax;");
    asm("loc_6DB038F: push %ebx;");
    asm("loc_6DB0390: mov %edi,%ecx;");
    asm("loc_6DB0392: mov %eax,(%ebx);");
    asm("loc_6DB0394: call _sub_6DA13C0;");
    asm("loc_6DB0399: test %eax,%eax;");
    asm("loc_6DB039B: mov %eax,0x1C(%edi);");
    asm("loc_6DB039E: je loc_6DB03AB;");
    asm("loc_6DB03A0: pop %edi;");
    asm("loc_6DB03A1: pop %esi;");
    asm("loc_6DB03A2: mov $0x16,%eax;");
    asm("loc_6DB03A7: pop %ebx;");
    asm("loc_6DB03A8: ret $0xC;");
    asm("loc_6DB03AB: mov (%esi),%eax;");
    asm("loc_6DB03AD: mov 0x18(%esp),%ecx;");
    asm("loc_6DB03B1: mov %eax,(%ecx);");
    asm("loc_6DB03B3: mov 0xC(%edi),%edx;");
    asm("loc_6DB03B6: push %edx;");
    asm("loc_6DB03B7: call _sub_6DA16B0;");
    asm("loc_6DB03BC: mov %eax,%ecx;");
    asm("loc_6DB03BE: mov (%ecx),%edi;");
    asm("loc_6DB03C0: mov 0x18(%ecx),%edx;");
    asm("loc_6DB03C3: add $4,%esp;");
    asm("loc_6DB03C6: inc %edi;");
    asm("loc_6DB03C7: mov %edi,(%ecx);");
    asm("loc_6DB03C9: mov (%esi),%eax;");
    asm("loc_6DB03CB: add %eax,%edx;");
    asm("loc_6DB03CD: mov 0x10(%ecx),%eax;");
    asm("loc_6DB03D0: mov %edx,0x18(%ecx);");
    asm("loc_6DB03D3: mov (%esi),%esi;");
    asm("loc_6DB03D5: cmp %eax,%esi;");
    asm("loc_6DB03D7: jbe loc_6DB03DC;");
    asm("loc_6DB03D9: mov %esi,0x10(%ecx);");
    asm("loc_6DB03DC: mov 0x18(%ecx),%eax;");
    asm("loc_6DB03DF: xor %edx,%edx;");
    asm("loc_6DB03E1: div %edi;");
    asm("loc_6DB03E3: pop %edi;");
    asm("loc_6DB03E4: pop %esi;");
    asm("loc_6DB03E5: pop %ebx;");
    asm("loc_6DB03E6: mov %eax,8(%ecx);");
    asm("loc_6DB03E9: xor %eax,%eax;");
    asm("loc_6DB03EB: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB03F0() // _sub_6DB03F0
{
    __DEBUG_ASM(6DB03F0);
    // chunk 0x6DB03F0 _sub_6DB03F0
    asm("loc_6DB03F0: mov 4(%esp),%eax;");
    asm("loc_6DB03F4: push %ebx;");
    asm("loc_6DB03F5: push %ebp;");
    asm("loc_6DB03F6: mov 0x10(%esp),%ebp;");
    asm("loc_6DB03FA: push %esi;");
    asm("loc_6DB03FB: push %edi;");
    asm("loc_6DB03FC: mov %ecx,%edi;");
    asm("loc_6DB03FE: lea 0x10(%edi),%esi;");
    asm("loc_6DB0401: push %esi;");
    asm("loc_6DB0402: push %ebp;");
    asm("loc_6DB0403: lea 0x18(%edi),%ebx;");
    asm("loc_6DB0406: push %ebx;");
    asm("loc_6DB0407: mov %ebp,4(%esi);");
    asm("loc_6DB040A: mov %eax,8(%esi);");
    asm("loc_6DB040D: movl $0,(%esi);");
    asm("loc_6DB0413: movl $0,0xC(%esi);");
    asm("loc_6DB041A: call _sub_6DA13C0;");
    asm("loc_6DB041F: test %eax,%eax;");
    asm("loc_6DB0421: mov %eax,0x1C(%edi);");
    asm("loc_6DB0424: je loc_6DB0432;");
    asm("loc_6DB0426: pop %edi;");
    asm("loc_6DB0427: pop %esi;");
    asm("loc_6DB0428: pop %ebp;");
    asm("loc_6DB0429: mov $0x17,%eax;");
    asm("loc_6DB042E: pop %ebx;");
    asm("loc_6DB042F: ret $0xC;");
    asm("loc_6DB0432: mov (%esi),%edx;");
    asm("loc_6DB0434: mov 4(%esi),%ecx;");
    asm("loc_6DB0437: add $4,%edx;");
    asm("loc_6DB043A: mov %edx,%eax;");
    asm("loc_6DB043C: cmp %ecx,%eax;");
    asm("loc_6DB043E: mov %edx,(%esi);");
    asm("loc_6DB0440: jbe loc_6DB0449;");
    asm("loc_6DB0442: movl $0x17,0xC(%esi);");
    asm("loc_6DB0449: mov 0x1C(%edi),%eax;");
    asm("loc_6DB044C: test %eax,%eax;");
    asm("loc_6DB044E: jne loc_6DB04C3;");
    asm("loc_6DB0450: mov (%ebx),%eax;");
    asm("loc_6DB0452: mov (%eax),%ecx;");
    asm("loc_6DB0454: push %esi;");
    asm("loc_6DB0455: push %ebp;");
    asm("loc_6DB0456: mov %ecx,0x20(%edi);");
    asm("loc_6DB0459: add $4,%eax;");
    asm("loc_6DB045C: push %ebx;");
    asm("loc_6DB045D: mov %edi,%ecx;");
    asm("loc_6DB045F: mov %eax,(%ebx);");
    asm("loc_6DB0461: call _sub_6DA13C0;");
    asm("loc_6DB0466: test %eax,%eax;");
    asm("loc_6DB0468: mov %eax,0x1C(%edi);");
    asm("loc_6DB046B: je loc_6DB0479;");
    asm("loc_6DB046D: pop %edi;");
    asm("loc_6DB046E: pop %esi;");
    asm("loc_6DB046F: pop %ebp;");
    asm("loc_6DB0470: mov $0x17,%eax;");
    asm("loc_6DB0475: pop %ebx;");
    asm("loc_6DB0476: ret $0xC;");
    asm("loc_6DB0479: mov (%esi),%edx;");
    asm("loc_6DB047B: mov 0x1C(%esp),%eax;");
    asm("loc_6DB047F: mov %edx,(%eax);");
    asm("loc_6DB0481: mov 0xC(%edi),%ecx;");
    asm("loc_6DB0484: push %ecx;");
    asm("loc_6DB0485: call _sub_6DA16B0;");
    asm("loc_6DB048A: mov %eax,%ecx;");
    asm("loc_6DB048C: mov 4(%ecx),%edx;");
    asm("loc_6DB048F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DB0492: mov 0x14(%ecx),%eax;");
    asm("loc_6DB0495: add $4,%esp;");
    asm("loc_6DB0498: inc %edx;");
    asm("loc_6DB0499: mov %edx,4(%ecx);");
    asm("loc_6DB049C: mov %edx,%edi;");
    asm("loc_6DB049E: mov (%esi),%edx;");
    asm("loc_6DB04A0: add $2,%edx;");
    asm("loc_6DB04A3: add %edx,%ebp;");
    asm("loc_6DB04A5: mov %ebp,0x1C(%ecx);");
    asm("loc_6DB04A8: mov (%esi),%esi;");
    asm("loc_6DB04AA: add $2,%eax;");
    asm("loc_6DB04AD: cmp %eax,%esi;");
    asm("loc_6DB04AF: jbe loc_6DB04B7;");
    asm("loc_6DB04B1: add $2,%esi;");
    asm("loc_6DB04B4: mov %esi,0x14(%ecx);");
    asm("loc_6DB04B7: mov 0x1C(%ecx),%eax;");
    asm("loc_6DB04BA: xor %edx,%edx;");
    asm("loc_6DB04BC: div %edi;");
    asm("loc_6DB04BE: mov %eax,0xC(%ecx);");
    asm("loc_6DB04C1: xor %eax,%eax;");
    asm("loc_6DB04C3: pop %edi;");
    asm("loc_6DB04C4: pop %esi;");
    asm("loc_6DB04C5: pop %ebp;");
    asm("loc_6DB04C6: pop %ebx;");
    asm("loc_6DB04C7: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB04D0() // _sub_6DB04D0
{
    __DEBUG_ASM(6DB04D0);
    // chunk 0x6DB04D0 _sub_6DB04D0
    asm("loc_6DB04D0: mov _data_6DB6750,%eax;");
    asm("loc_6DB04D5: mov %eax,_data_6DBC550;");
    asm("loc_6DB04DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB04E0() // _sub_6DB04E0
{
    __DEBUG_ASM(6DB04E0);
    // chunk 0x6DB04E0 _sub_6DB04E0
    asm("loc_6DB04E0: mov _data_6DB6750,%eax;");
    asm("loc_6DB04E5: mov %eax,_data_6DBC554;");
    asm("loc_6DB04EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB04F0() // _sub_6DB04F0
{
    __DEBUG_ASM(6DB04F0);
    // chunk 0x6DB04F0 _sub_6DB04F0
    asm("loc_6DB04F0: mov _data_6DB6754,%eax;");
    asm("loc_6DB04F5: mov %eax,_data_6DBC54C;");
    asm("loc_6DB04FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB0500() // _sub_6DB0500
{
    __DEBUG_ASM(6DB0500);
    // chunk 0x6DB0500 _sub_6DB0500
    asm("loc_6DB0500: push %esi;");
    asm("loc_6DB0501: mov %ecx,%esi;");
    asm("loc_6DB0503: mov 0x60(%esi),%eax;");
    asm("loc_6DB0506: test %eax,%eax;");
    asm("loc_6DB0508: movl $_off_6DB5D54,(%esi);");
    asm("loc_6DB050E: je loc_6DB0519;");
    asm("loc_6DB0510: push %eax;");
    asm("loc_6DB0511: call _sub_6DB1DC2;");
    asm("loc_6DB0516: add $4,%esp;");
    asm("loc_6DB0519: mov 0x88(%esi),%eax;");
    asm("loc_6DB051F: test %eax,%eax;");
    asm("loc_6DB0521: je loc_6DB052C;");
    asm("loc_6DB0523: push %eax;");
    asm("loc_6DB0524: call _sub_6DB1DC2;");
    asm("loc_6DB0529: add $4,%esp;");
    asm("loc_6DB052C: mov 0x8C(%esi),%eax;");
    asm("loc_6DB0532: test %eax,%eax;");
    asm("loc_6DB0534: je loc_6DB053F;");
    asm("loc_6DB0536: push %eax;");
    asm("loc_6DB0537: call _sub_6DB1DC2;");
    asm("loc_6DB053C: add $4,%esp;");
    asm("loc_6DB053F: mov 0x84(%esi),%eax;");
    asm("loc_6DB0545: test %eax,%eax;");
    asm("loc_6DB0547: je loc_6DB0552;");
    asm("loc_6DB0549: push %eax;");
    asm("loc_6DB054A: call _sub_6DB1DC2;");
    asm("loc_6DB054F: add $4,%esp;");
    asm("loc_6DB0552: mov %esi,%ecx;");
    asm("loc_6DB0554: pop %esi;");
    asm("loc_6DB0555: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB0560() // _sub_6DB0560
{
    __DEBUG_ASM(6DB0560);
    // chunk 0x6DB0560 _sub_6DB0560
    asm("loc_6DB0560: mov 8(%esp),%eax;");
    asm("loc_6DB0564: sub $0x10,%esp;");
    asm("loc_6DB0567: push %ebx;");
    asm("loc_6DB0568: push %ebp;");
    asm("loc_6DB0569: mov %ecx,%ebp;");
    asm("loc_6DB056B: mov 0x1C(%esp),%ecx;");
    asm("loc_6DB056F: lea 0x10(%ebp),%ebx;");
    asm("loc_6DB0572: push %esi;");
    asm("loc_6DB0573: mov %eax,4(%ebx);");
    asm("loc_6DB0576: mov (%ecx),%edx;");
    asm("loc_6DB0578: push %edi;");
    asm("loc_6DB0579: mov %edx,8(%ebx);");
    asm("loc_6DB057C: movl $0,(%ebx);");
    asm("loc_6DB0582: movl $0,0xC(%ebx);");
    asm("loc_6DB0589: mov 0x14(%ebp),%eax;");
    asm("loc_6DB058C: push %ebx;");
    asm("loc_6DB058D: push %eax;");
    asm("loc_6DB058E: lea 0x18(%ebp),%esi;");
    asm("loc_6DB0591: push %esi;");
    asm("loc_6DB0592: mov %ebp,%ecx;");
    asm("loc_6DB0594: call _sub_6DA1380;");
    asm("loc_6DB0599: mov %eax,0x1C(%ebp);");
    asm("loc_6DB059C: test %eax,%eax;");
    asm("loc_6DB059E: mov $0x16,%eax;");
    asm("loc_6DB05A3: jne loc_6DB0B1F;");
    asm("loc_6DB05A9: mov (%ebx),%edi;");
    asm("loc_6DB05AB: mov 4(%ebx),%edx;");
    asm("loc_6DB05AE: add $4,%edi;");
    asm("loc_6DB05B1: mov %edi,%ecx;");
    asm("loc_6DB05B3: cmp %edx,%ecx;");
    asm("loc_6DB05B5: mov %edi,(%ebx);");
    asm("loc_6DB05B7: jbe loc_6DB05BC;");
    asm("loc_6DB05B9: mov %eax,0xC(%ebx);");
    asm("loc_6DB05BC: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DB05BF: test %ecx,%ecx;");
    asm("loc_6DB05C1: jne loc_6DB0B1F;");
    asm("loc_6DB05C7: mov (%esi),%ecx;");
    asm("loc_6DB05C9: mov 0x20(%ebp),%edx;");
    asm("loc_6DB05CC: mov %edx,(%ecx);");
    asm("loc_6DB05CE: add $4,%ecx;");
    asm("loc_6DB05D1: mov %ecx,(%esi);");
    asm("loc_6DB05D3: mov (%ebx),%edi;");
    asm("loc_6DB05D5: mov 4(%ebx),%edx;");
    asm("loc_6DB05D8: add $4,%edi;");
    asm("loc_6DB05DB: mov %edi,%ecx;");
    asm("loc_6DB05DD: cmp %edx,%ecx;");
    asm("loc_6DB05DF: mov %edi,(%ebx);");
    asm("loc_6DB05E1: jbe loc_6DB05E6;");
    asm("loc_6DB05E3: mov %eax,0xC(%ebx);");
    asm("loc_6DB05E6: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DB05E9: test %ecx,%ecx;");
    asm("loc_6DB05EB: jne loc_6DB0B1F;");
    asm("loc_6DB05F1: mov (%esi),%ecx;");
    asm("loc_6DB05F3: mov 0x24(%ebp),%edx;");
    asm("loc_6DB05F6: mov %edx,(%ecx);");
    asm("loc_6DB05F8: add $4,%ecx;");
    asm("loc_6DB05FB: mov %ecx,(%esi);");
    asm("loc_6DB05FD: mov (%ebx),%edi;");
    asm("loc_6DB05FF: mov 4(%ebx),%edx;");
    asm("loc_6DB0602: add $4,%edi;");
    asm("loc_6DB0605: mov %edi,%ecx;");
    asm("loc_6DB0607: cmp %edx,%ecx;");
    asm("loc_6DB0609: mov %edi,(%ebx);");
    asm("loc_6DB060B: jbe loc_6DB0610;");
    asm("loc_6DB060D: mov %eax,0xC(%ebx);");
    asm("loc_6DB0610: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DB0613: test %ecx,%ecx;");
    asm("loc_6DB0615: jne loc_6DB0B1F;");
    asm("loc_6DB061B: mov (%esi),%ecx;");
    asm("loc_6DB061D: mov 0x28(%ebp),%edx;");
    asm("loc_6DB0620: mov %edx,(%ecx);");
    asm("loc_6DB0622: add $4,%ecx;");
    asm("loc_6DB0625: mov %ecx,(%esi);");
    asm("loc_6DB0627: mov (%ebx),%edi;");
    asm("loc_6DB0629: mov 4(%ebx),%edx;");
    asm("loc_6DB062C: add $4,%edi;");
    asm("loc_6DB062F: mov %edi,%ecx;");
    asm("loc_6DB0631: cmp %edx,%ecx;");
    asm("loc_6DB0633: mov %edi,(%ebx);");
    asm("loc_6DB0635: jbe loc_6DB063A;");
    asm("loc_6DB0637: mov %eax,0xC(%ebx);");
    asm("loc_6DB063A: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DB063D: test %ecx,%ecx;");
    asm("loc_6DB063F: jne loc_6DB0B1F;");
    asm("loc_6DB0645: mov (%esi),%ecx;");
    asm("loc_6DB0647: mov 0x2C(%ebp),%edx;");
    asm("loc_6DB064A: mov %edx,(%ecx);");
    asm("loc_6DB064C: add $4,%ecx;");
    asm("loc_6DB064F: mov %ecx,(%esi);");
    asm("loc_6DB0651: mov (%ebx),%edi;");
    asm("loc_6DB0653: mov 4(%ebx),%edx;");
    asm("loc_6DB0656: add $4,%edi;");
    asm("loc_6DB0659: mov %edi,%ecx;");
    asm("loc_6DB065B: cmp %edx,%ecx;");
    asm("loc_6DB065D: mov %edi,(%ebx);");
    asm("loc_6DB065F: jbe loc_6DB0664;");
    asm("loc_6DB0661: mov %eax,0xC(%ebx);");
    asm("loc_6DB0664: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DB0667: test %ecx,%ecx;");
    asm("loc_6DB0669: jne loc_6DB0B1F;");
    asm("loc_6DB066F: mov (%esi),%ecx;");
    asm("loc_6DB0671: mov 0x30(%ebp),%edx;");
    asm("loc_6DB0674: mov %edx,(%ecx);");
    asm("loc_6DB0676: add $4,%ecx;");
    asm("loc_6DB0679: mov %ecx,(%esi);");
    asm("loc_6DB067B: mov (%ebx),%edi;");
    asm("loc_6DB067D: mov 4(%ebx),%edx;");
    asm("loc_6DB0680: add $0xC,%edi;");
    asm("loc_6DB0683: mov %edi,%ecx;");
    asm("loc_6DB0685: cmp %edx,%ecx;");
    asm("loc_6DB0687: mov %edi,(%ebx);");
    asm("loc_6DB0689: jbe loc_6DB068E;");
    asm("loc_6DB068B: mov %eax,0xC(%ebx);");
    asm("loc_6DB068E: mov 0x1C(%ebp),%ecx;");
    asm("loc_6DB0691: test %ecx,%ecx;");
    asm("loc_6DB0693: jne loc_6DB0B1F;");
    asm("loc_6DB0699: mov 0x34(%ebp),%eax;");
    asm("loc_6DB069C: mov 0x38(%ebp),%ecx;");
    asm("loc_6DB069F: mov (%esi),%edi;");
    asm("loc_6DB06A1: mov 0x3C(%ebp),%edx;");
    asm("loc_6DB06A4: mov %eax,0x10(%esp);");
    asm("loc_6DB06A8: lea 0x10(%esp),%eax;");
    asm("loc_6DB06AC: mov %ecx,0x14(%esp);");
    asm("loc_6DB06B0: push %eax;");
    asm("loc_6DB06B1: mov %edi,%ecx;");
    asm("loc_6DB06B3: mov %edx,0x1C(%esp);");
    asm("loc_6DB06B7: call _sub_6D8F510;");
    asm("loc_6DB06BC: add $0xC,%edi;");
    asm("loc_6DB06BF: mov %edi,(%esi);");
    asm("loc_6DB06C1: mov (%ebx),%edx;");
    asm("loc_6DB06C3: mov 4(%ebx),%ecx;");
    asm("loc_6DB06C6: add $0xC,%edx;");
    asm("loc_6DB06C9: mov %edx,%eax;");
    asm("loc_6DB06CB: cmp %ecx,%eax;");
    asm("loc_6DB06CD: mov %edx,(%ebx);");
    asm("loc_6DB06CF: jbe loc_6DB06D8;");
    asm("loc_6DB06D1: movl $0x16,0xC(%ebx);");
    asm("loc_6DB06D8: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB06DB: test %eax,%eax;");
    asm("loc_6DB06DD: je loc_6DB06EE;");
    asm("loc_6DB06DF: pop %edi;");
    asm("loc_6DB06E0: pop %esi;");
    asm("loc_6DB06E1: pop %ebp;");
    asm("loc_6DB06E2: mov $0x16,%eax;");
    asm("loc_6DB06E7: pop %ebx;");
    asm("loc_6DB06E8: add $0x10,%esp;");
    asm("loc_6DB06EB: ret $0xC;");
    asm("loc_6DB06EE: mov 0x40(%ebp),%ecx;");
    asm("loc_6DB06F1: mov (%esi),%edi;");
    asm("loc_6DB06F3: mov 0x44(%ebp),%edx;");
    asm("loc_6DB06F6: mov 0x48(%ebp),%eax;");
    asm("loc_6DB06F9: mov %ecx,0x10(%esp);");
    asm("loc_6DB06FD: lea 0x10(%esp),%ecx;");
    asm("loc_6DB0701: push %ecx;");
    asm("loc_6DB0702: mov %edi,%ecx;");
    asm("loc_6DB0704: mov %edx,0x18(%esp);");
    asm("loc_6DB0708: mov %eax,0x1C(%esp);");
    asm("loc_6DB070C: call _sub_6D8F510;");
    asm("loc_6DB0711: add $0xC,%edi;");
    asm("loc_6DB0714: mov %edi,(%esi);");
    asm("loc_6DB0716: mov (%ebx),%edx;");
    asm("loc_6DB0718: mov 4(%ebx),%ecx;");
    asm("loc_6DB071B: add $0x10,%edx;");
    asm("loc_6DB071E: mov %edx,%eax;");
    asm("loc_6DB0720: cmp %ecx,%eax;");
    asm("loc_6DB0722: mov %edx,(%ebx);");
    asm("loc_6DB0724: jbe loc_6DB072D;");
    asm("loc_6DB0726: movl $0x16,0xC(%ebx);");
    asm("loc_6DB072D: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0730: test %eax,%eax;");
    asm("loc_6DB0732: je loc_6DB0743;");
    asm("loc_6DB0734: pop %edi;");
    asm("loc_6DB0735: pop %esi;");
    asm("loc_6DB0736: pop %ebp;");
    asm("loc_6DB0737: mov $0x16,%eax;");
    asm("loc_6DB073C: pop %ebx;");
    asm("loc_6DB073D: add $0x10,%esp;");
    asm("loc_6DB0740: ret $0xC;");
    asm("loc_6DB0743: mov (%esi),%edi;");
    asm("loc_6DB0745: lea 0x4C(%ebp),%edx;");
    asm("loc_6DB0748: mov (%edx),%eax;");
    asm("loc_6DB074A: mov 4(%edx),%ecx;");
    asm("loc_6DB074D: mov %eax,0x10(%esp);");
    asm("loc_6DB0751: mov 8(%edx),%eax;");
    asm("loc_6DB0754: mov %ecx,0x14(%esp);");
    asm("loc_6DB0758: mov 0xC(%edx),%ecx;");
    asm("loc_6DB075B: lea 0x10(%esp),%edx;");
    asm("loc_6DB075F: mov %ecx,0x1C(%esp);");
    asm("loc_6DB0763: push %edx;");
    asm("loc_6DB0764: mov %edi,%ecx;");
    asm("loc_6DB0766: mov %eax,0x1C(%esp);");
    asm("loc_6DB076A: call _sub_6D8F4F0;");
    asm("loc_6DB076F: add $0x10,%edi;");
    asm("loc_6DB0772: mov %edi,(%esi);");
    asm("loc_6DB0774: mov (%ebx),%edx;");
    asm("loc_6DB0776: mov 4(%ebx),%ecx;");
    asm("loc_6DB0779: add $4,%edx;");
    asm("loc_6DB077C: mov %edx,%eax;");
    asm("loc_6DB077E: cmp %ecx,%eax;");
    asm("loc_6DB0780: mov %edx,(%ebx);");
    asm("loc_6DB0782: mov $0x16,%ecx;");
    asm("loc_6DB0787: jbe loc_6DB078C;");
    asm("loc_6DB0789: mov %ecx,0xC(%ebx);");
    asm("loc_6DB078C: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB078F: test %eax,%eax;");
    asm("loc_6DB0791: je loc_6DB079F;");
    asm("loc_6DB0793: pop %edi;");
    asm("loc_6DB0794: pop %esi;");
    asm("loc_6DB0795: pop %ebp;");
    asm("loc_6DB0796: mov %ecx,%eax;");
    asm("loc_6DB0798: pop %ebx;");
    asm("loc_6DB0799: add $0x10,%esp;");
    asm("loc_6DB079C: ret $0xC;");
    asm("loc_6DB079F: mov (%esi),%eax;");
    asm("loc_6DB07A1: mov 0x5C(%ebp),%edx;");
    asm("loc_6DB07A4: mov %edx,(%eax);");
    asm("loc_6DB07A6: add $4,%eax;");
    asm("loc_6DB07A9: mov %eax,(%esi);");
    asm("loc_6DB07AB: mov (%ebx),%edi;");
    asm("loc_6DB07AD: mov 4(%ebx),%edx;");
    asm("loc_6DB07B0: add $4,%edi;");
    asm("loc_6DB07B3: mov %edi,%eax;");
    asm("loc_6DB07B5: cmp %edx,%eax;");
    asm("loc_6DB07B7: mov %edi,(%ebx);");
    asm("loc_6DB07B9: jbe loc_6DB07BE;");
    asm("loc_6DB07BB: mov %ecx,0xC(%ebx);");
    asm("loc_6DB07BE: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB07C1: test %eax,%eax;");
    asm("loc_6DB07C3: je loc_6DB07D1;");
    asm("loc_6DB07C5: pop %edi;");
    asm("loc_6DB07C6: pop %esi;");
    asm("loc_6DB07C7: pop %ebp;");
    asm("loc_6DB07C8: mov %ecx,%eax;");
    asm("loc_6DB07CA: pop %ebx;");
    asm("loc_6DB07CB: add $0x10,%esp;");
    asm("loc_6DB07CE: ret $0xC;");
    asm("loc_6DB07D1: mov (%esi),%eax;");
    asm("loc_6DB07D3: mov 0x64(%ebp),%edx;");
    asm("loc_6DB07D6: mov %edx,(%eax);");
    asm("loc_6DB07D8: add $4,%eax;");
    asm("loc_6DB07DB: mov %eax,(%esi);");
    asm("loc_6DB07DD: mov 0x64(%ebp),%eax;");
    asm("loc_6DB07E0: test %eax,%eax;");
    asm("loc_6DB07E2: jbe loc_6DB0838;");
    asm("loc_6DB07E4: mov (%ebx),%esi;");
    asm("loc_6DB07E6: mov 4(%ebx),%edx;");
    asm("loc_6DB07E9: add %eax,%eax;");
    asm("loc_6DB07EB: add %eax,%esi;");
    asm("loc_6DB07ED: mov %esi,%eax;");
    asm("loc_6DB07EF: cmp %edx,%eax;");
    asm("loc_6DB07F1: mov %esi,(%ebx);");
    asm("loc_6DB07F3: jbe loc_6DB07F8;");
    asm("loc_6DB07F5: mov %ecx,0xC(%ebx);");
    asm("loc_6DB07F8: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB07FB: test %eax,%eax;");
    asm("loc_6DB07FD: je loc_6DB080B;");
    asm("loc_6DB07FF: pop %edi;");
    asm("loc_6DB0800: pop %esi;");
    asm("loc_6DB0801: pop %ebp;");
    asm("loc_6DB0802: mov %ecx,%eax;");
    asm("loc_6DB0804: pop %ebx;");
    asm("loc_6DB0805: add $0x10,%esp;");
    asm("loc_6DB0808: ret $0xC;");
    asm("loc_6DB080B: mov 0x64(%ebp),%eax;");
    asm("loc_6DB080E: mov 0x18(%ebp),%edi;");
    asm("loc_6DB0811: mov 0x60(%ebp),%esi;");
    asm("loc_6DB0814: shl $1,%eax;");
    asm("loc_6DB0816: mov %eax,%ecx;");
    asm("loc_6DB0818: mov %ecx,%edx;");
    asm("loc_6DB081A: shr $2,%ecx;");
    asm("loc_6DB081D: mov %edi,0x28(%esp);");
    asm("loc_6DB0821: rep movsl (%esi),(%edi);");
    asm("loc_6DB0823: mov %edx,%ecx;");
    asm("loc_6DB0825: and $3,%ecx;");
    asm("loc_6DB0828: rep movsb (%esi),(%edi);");
    asm("loc_6DB082A: mov 0x28(%esp),%ecx;");
    asm("loc_6DB082E: add %eax,%ecx;");
    asm("loc_6DB0830: mov %ecx,0x18(%ebp);");
    asm("loc_6DB0833: mov $0x16,%ecx;");
    asm("loc_6DB0838: mov (%ebx),%esi;");
    asm("loc_6DB083A: mov 4(%ebx),%edx;");
    asm("loc_6DB083D: add $4,%esi;");
    asm("loc_6DB0840: mov %esi,%eax;");
    asm("loc_6DB0842: cmp %edx,%eax;");
    asm("loc_6DB0844: mov %esi,(%ebx);");
    asm("loc_6DB0846: jbe loc_6DB084B;");
    asm("loc_6DB0848: mov %ecx,0xC(%ebx);");
    asm("loc_6DB084B: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB084E: test %eax,%eax;");
    asm("loc_6DB0850: je loc_6DB085E;");
    asm("loc_6DB0852: pop %edi;");
    asm("loc_6DB0853: pop %esi;");
    asm("loc_6DB0854: pop %ebp;");
    asm("loc_6DB0855: mov %ecx,%eax;");
    asm("loc_6DB0857: pop %ebx;");
    asm("loc_6DB0858: add $0x10,%esp;");
    asm("loc_6DB085B: ret $0xC;");
    asm("loc_6DB085E: mov 0x18(%ebp),%eax;");
    asm("loc_6DB0861: mov 0x68(%ebp),%edx;");
    asm("loc_6DB0864: mov %edx,(%eax);");
    asm("loc_6DB0866: add $4,%eax;");
    asm("loc_6DB0869: mov %eax,0x18(%ebp);");
    asm("loc_6DB086C: mov 0x68(%ebp),%eax;");
    asm("loc_6DB086F: test %eax,%eax;");
    asm("loc_6DB0871: jbe loc_6DB08C6;");
    asm("loc_6DB0873: mov (%ebx),%esi;");
    asm("loc_6DB0875: mov 4(%ebx),%edx;");
    asm("loc_6DB0878: add %eax,%esi;");
    asm("loc_6DB087A: mov %esi,%eax;");
    asm("loc_6DB087C: cmp %edx,%eax;");
    asm("loc_6DB087E: mov %esi,(%ebx);");
    asm("loc_6DB0880: jbe loc_6DB0885;");
    asm("loc_6DB0882: mov %ecx,0xC(%ebx);");
    asm("loc_6DB0885: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0888: test %eax,%eax;");
    asm("loc_6DB088A: je loc_6DB0898;");
    asm("loc_6DB088C: pop %edi;");
    asm("loc_6DB088D: pop %esi;");
    asm("loc_6DB088E: pop %ebp;");
    asm("loc_6DB088F: mov %ecx,%eax;");
    asm("loc_6DB0891: pop %ebx;");
    asm("loc_6DB0892: add $0x10,%esp;");
    asm("loc_6DB0895: ret $0xC;");
    asm("loc_6DB0898: mov 0x68(%ebp),%eax;");
    asm("loc_6DB089B: mov 0x18(%ebp),%edi;");
    asm("loc_6DB089E: mov 0x88(%ebp),%esi;");
    asm("loc_6DB08A4: mov %eax,%ecx;");
    asm("loc_6DB08A6: mov %ecx,%edx;");
    asm("loc_6DB08A8: shr $2,%ecx;");
    asm("loc_6DB08AB: mov %edi,0x28(%esp);");
    asm("loc_6DB08AF: rep movsl (%esi),(%edi);");
    asm("loc_6DB08B1: mov %edx,%ecx;");
    asm("loc_6DB08B3: and $3,%ecx;");
    asm("loc_6DB08B6: rep movsb (%esi),(%edi);");
    asm("loc_6DB08B8: mov 0x28(%esp),%ecx;");
    asm("loc_6DB08BC: add %eax,%ecx;");
    asm("loc_6DB08BE: mov %ecx,0x18(%ebp);");
    asm("loc_6DB08C1: mov $0x16,%ecx;");
    asm("loc_6DB08C6: mov (%ebx),%esi;");
    asm("loc_6DB08C8: mov 4(%ebx),%edx;");
    asm("loc_6DB08CB: add $4,%esi;");
    asm("loc_6DB08CE: mov %esi,%eax;");
    asm("loc_6DB08D0: cmp %edx,%eax;");
    asm("loc_6DB08D2: mov %esi,(%ebx);");
    asm("loc_6DB08D4: jbe loc_6DB08D9;");
    asm("loc_6DB08D6: mov %ecx,0xC(%ebx);");
    asm("loc_6DB08D9: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB08DC: test %eax,%eax;");
    asm("loc_6DB08DE: je loc_6DB08EC;");
    asm("loc_6DB08E0: pop %edi;");
    asm("loc_6DB08E1: pop %esi;");
    asm("loc_6DB08E2: pop %ebp;");
    asm("loc_6DB08E3: mov %ecx,%eax;");
    asm("loc_6DB08E5: pop %ebx;");
    asm("loc_6DB08E6: add $0x10,%esp;");
    asm("loc_6DB08E9: ret $0xC;");
    asm("loc_6DB08EC: mov 0x18(%ebp),%eax;");
    asm("loc_6DB08EF: mov 0x6C(%ebp),%edx;");
    asm("loc_6DB08F2: mov %edx,(%eax);");
    asm("loc_6DB08F4: add $4,%eax;");
    asm("loc_6DB08F7: mov %eax,0x18(%ebp);");
    asm("loc_6DB08FA: mov 0x6C(%ebp),%eax;");
    asm("loc_6DB08FD: test %eax,%eax;");
    asm("loc_6DB08FF: jbe loc_6DB0954;");
    asm("loc_6DB0901: mov (%ebx),%esi;");
    asm("loc_6DB0903: mov 4(%ebx),%edx;");
    asm("loc_6DB0906: add %eax,%esi;");
    asm("loc_6DB0908: mov %esi,%eax;");
    asm("loc_6DB090A: cmp %edx,%eax;");
    asm("loc_6DB090C: mov %esi,(%ebx);");
    asm("loc_6DB090E: jbe loc_6DB0913;");
    asm("loc_6DB0910: mov %ecx,0xC(%ebx);");
    asm("loc_6DB0913: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0916: test %eax,%eax;");
    asm("loc_6DB0918: je loc_6DB0926;");
    asm("loc_6DB091A: pop %edi;");
    asm("loc_6DB091B: pop %esi;");
    asm("loc_6DB091C: pop %ebp;");
    asm("loc_6DB091D: mov %ecx,%eax;");
    asm("loc_6DB091F: pop %ebx;");
    asm("loc_6DB0920: add $0x10,%esp;");
    asm("loc_6DB0923: ret $0xC;");
    asm("loc_6DB0926: mov 0x6C(%ebp),%eax;");
    asm("loc_6DB0929: mov 0x18(%ebp),%edi;");
    asm("loc_6DB092C: mov 0x8C(%ebp),%esi;");
    asm("loc_6DB0932: mov %eax,%ecx;");
    asm("loc_6DB0934: mov %ecx,%edx;");
    asm("loc_6DB0936: shr $2,%ecx;");
    asm("loc_6DB0939: mov %edi,0x28(%esp);");
    asm("loc_6DB093D: rep movsl (%esi),(%edi);");
    asm("loc_6DB093F: mov %edx,%ecx;");
    asm("loc_6DB0941: and $3,%ecx;");
    asm("loc_6DB0944: rep movsb (%esi),(%edi);");
    asm("loc_6DB0946: mov 0x28(%esp),%ecx;");
    asm("loc_6DB094A: add %eax,%ecx;");
    asm("loc_6DB094C: mov %ecx,0x18(%ebp);");
    asm("loc_6DB094F: mov $0x16,%ecx;");
    asm("loc_6DB0954: mov (%ebx),%esi;");
    asm("loc_6DB0956: mov 4(%ebx),%edx;");
    asm("loc_6DB0959: add $4,%esi;");
    asm("loc_6DB095C: mov %esi,%eax;");
    asm("loc_6DB095E: cmp %edx,%eax;");
    asm("loc_6DB0960: mov %esi,(%ebx);");
    asm("loc_6DB0962: jbe loc_6DB0967;");
    asm("loc_6DB0964: mov %ecx,0xC(%ebx);");
    asm("loc_6DB0967: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB096A: test %eax,%eax;");
    asm("loc_6DB096C: je loc_6DB097A;");
    asm("loc_6DB096E: pop %edi;");
    asm("loc_6DB096F: pop %esi;");
    asm("loc_6DB0970: pop %ebp;");
    asm("loc_6DB0971: mov %ecx,%eax;");
    asm("loc_6DB0973: pop %ebx;");
    asm("loc_6DB0974: add $0x10,%esp;");
    asm("loc_6DB0977: ret $0xC;");
    asm("loc_6DB097A: mov 0x18(%ebp),%eax;");
    asm("loc_6DB097D: mov 0x70(%ebp),%edx;");
    asm("loc_6DB0980: mov %edx,(%eax);");
    asm("loc_6DB0982: add $4,%eax;");
    asm("loc_6DB0985: mov %eax,0x18(%ebp);");
    asm("loc_6DB0988: mov (%ebx),%esi;");
    asm("loc_6DB098A: mov 4(%ebx),%edx;");
    asm("loc_6DB098D: add $4,%esi;");
    asm("loc_6DB0990: mov %esi,%eax;");
    asm("loc_6DB0992: cmp %edx,%eax;");
    asm("loc_6DB0994: mov %esi,(%ebx);");
    asm("loc_6DB0996: jbe loc_6DB099B;");
    asm("loc_6DB0998: mov %ecx,0xC(%ebx);");
    asm("loc_6DB099B: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB099E: test %eax,%eax;");
    asm("loc_6DB09A0: je loc_6DB09AE;");
    asm("loc_6DB09A2: pop %edi;");
    asm("loc_6DB09A3: pop %esi;");
    asm("loc_6DB09A4: pop %ebp;");
    asm("loc_6DB09A5: mov %ecx,%eax;");
    asm("loc_6DB09A7: pop %ebx;");
    asm("loc_6DB09A8: add $0x10,%esp;");
    asm("loc_6DB09AB: ret $0xC;");
    asm("loc_6DB09AE: mov 0x18(%ebp),%eax;");
    asm("loc_6DB09B1: mov 0x74(%ebp),%edx;");
    asm("loc_6DB09B4: mov %edx,(%eax);");
    asm("loc_6DB09B6: add $4,%eax;");
    asm("loc_6DB09B9: mov %eax,0x18(%ebp);");
    asm("loc_6DB09BC: mov (%ebx),%esi;");
    asm("loc_6DB09BE: mov 4(%ebx),%edx;");
    asm("loc_6DB09C1: add $4,%esi;");
    asm("loc_6DB09C4: mov %esi,%eax;");
    asm("loc_6DB09C6: cmp %edx,%eax;");
    asm("loc_6DB09C8: mov %esi,(%ebx);");
    asm("loc_6DB09CA: jbe loc_6DB09CF;");
    asm("loc_6DB09CC: mov %ecx,0xC(%ebx);");
    asm("loc_6DB09CF: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB09D2: test %eax,%eax;");
    asm("loc_6DB09D4: je loc_6DB09E2;");
    asm("loc_6DB09D6: pop %edi;");
    asm("loc_6DB09D7: pop %esi;");
    asm("loc_6DB09D8: pop %ebp;");
    asm("loc_6DB09D9: mov %ecx,%eax;");
    asm("loc_6DB09DB: pop %ebx;");
    asm("loc_6DB09DC: add $0x10,%esp;");
    asm("loc_6DB09DF: ret $0xC;");
    asm("loc_6DB09E2: mov 0x18(%ebp),%eax;");
    asm("loc_6DB09E5: mov 0x78(%ebp),%edx;");
    asm("loc_6DB09E8: mov %edx,(%eax);");
    asm("loc_6DB09EA: add $4,%eax;");
    asm("loc_6DB09ED: mov %eax,0x18(%ebp);");
    asm("loc_6DB09F0: mov (%ebx),%esi;");
    asm("loc_6DB09F2: mov 4(%ebx),%edx;");
    asm("loc_6DB09F5: add $4,%esi;");
    asm("loc_6DB09F8: mov %esi,%eax;");
    asm("loc_6DB09FA: cmp %edx,%eax;");
    asm("loc_6DB09FC: mov %esi,(%ebx);");
    asm("loc_6DB09FE: jbe loc_6DB0A03;");
    asm("loc_6DB0A00: mov %ecx,0xC(%ebx);");
    asm("loc_6DB0A03: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0A06: test %eax,%eax;");
    asm("loc_6DB0A08: je loc_6DB0A16;");
    asm("loc_6DB0A0A: pop %edi;");
    asm("loc_6DB0A0B: pop %esi;");
    asm("loc_6DB0A0C: pop %ebp;");
    asm("loc_6DB0A0D: mov %ecx,%eax;");
    asm("loc_6DB0A0F: pop %ebx;");
    asm("loc_6DB0A10: add $0x10,%esp;");
    asm("loc_6DB0A13: ret $0xC;");
    asm("loc_6DB0A16: mov 0x18(%ebp),%eax;");
    asm("loc_6DB0A19: mov 0x7C(%ebp),%edx;");
    asm("loc_6DB0A1C: mov %edx,(%eax);");
    asm("loc_6DB0A1E: add $4,%eax;");
    asm("loc_6DB0A21: mov %eax,0x18(%ebp);");
    asm("loc_6DB0A24: mov (%ebx),%esi;");
    asm("loc_6DB0A26: mov 4(%ebx),%edx;");
    asm("loc_6DB0A29: add $4,%esi;");
    asm("loc_6DB0A2C: mov %esi,%eax;");
    asm("loc_6DB0A2E: cmp %edx,%eax;");
    asm("loc_6DB0A30: mov %esi,(%ebx);");
    asm("loc_6DB0A32: jbe loc_6DB0A37;");
    asm("loc_6DB0A34: mov %ecx,0xC(%ebx);");
    asm("loc_6DB0A37: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0A3A: test %eax,%eax;");
    asm("loc_6DB0A3C: je loc_6DB0A4A;");
    asm("loc_6DB0A3E: pop %edi;");
    asm("loc_6DB0A3F: pop %esi;");
    asm("loc_6DB0A40: pop %ebp;");
    asm("loc_6DB0A41: mov %ecx,%eax;");
    asm("loc_6DB0A43: pop %ebx;");
    asm("loc_6DB0A44: add $0x10,%esp;");
    asm("loc_6DB0A47: ret $0xC;");
    asm("loc_6DB0A4A: mov 0x18(%ebp),%eax;");
    asm("loc_6DB0A4D: mov 0x80(%ebp),%edx;");
    asm("loc_6DB0A53: mov %edx,(%eax);");
    asm("loc_6DB0A55: add $4,%eax;");
    asm("loc_6DB0A58: mov %eax,0x18(%ebp);");
    asm("loc_6DB0A5B: mov 0x80(%ebp),%eax;");
    asm("loc_6DB0A61: test %eax,%eax;");
    asm("loc_6DB0A63: jbe loc_6DB0ABC;");
    asm("loc_6DB0A65: mov (%ebx),%esi;");
    asm("loc_6DB0A67: mov 4(%ebx),%edx;");
    asm("loc_6DB0A6A: shl $2,%eax;");
    asm("loc_6DB0A6D: add %eax,%esi;");
    asm("loc_6DB0A6F: mov %esi,%eax;");
    asm("loc_6DB0A71: cmp %edx,%eax;");
    asm("loc_6DB0A73: mov %esi,(%ebx);");
    asm("loc_6DB0A75: jbe loc_6DB0A7A;");
    asm("loc_6DB0A77: mov %ecx,0xC(%ebx);");
    asm("loc_6DB0A7A: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0A7D: test %eax,%eax;");
    asm("loc_6DB0A7F: je loc_6DB0A8D;");
    asm("loc_6DB0A81: pop %edi;");
    asm("loc_6DB0A82: pop %esi;");
    asm("loc_6DB0A83: pop %ebp;");
    asm("loc_6DB0A84: mov %ecx,%eax;");
    asm("loc_6DB0A86: pop %ebx;");
    asm("loc_6DB0A87: add $0x10,%esp;");
    asm("loc_6DB0A8A: ret $0xC;");
    asm("loc_6DB0A8D: mov 0x80(%ebp),%eax;");
    asm("loc_6DB0A93: mov 0x18(%ebp),%edi;");
    asm("loc_6DB0A96: mov 0x84(%ebp),%esi;");
    asm("loc_6DB0A9C: shl $2,%eax;");
    asm("loc_6DB0A9F: mov %eax,%ecx;");
    asm("loc_6DB0AA1: mov %ecx,%edx;");
    asm("loc_6DB0AA3: shr $2,%ecx;");
    asm("loc_6DB0AA6: mov %edi,0x28(%esp);");
    asm("loc_6DB0AAA: rep movsl (%esi),(%edi);");
    asm("loc_6DB0AAC: mov %edx,%ecx;");
    asm("loc_6DB0AAE: and $3,%ecx;");
    asm("loc_6DB0AB1: rep movsb (%esi),(%edi);");
    asm("loc_6DB0AB3: mov 0x28(%esp),%ecx;");
    asm("loc_6DB0AB7: add %eax,%ecx;");
    asm("loc_6DB0AB9: mov %ecx,0x18(%ebp);");
    asm("loc_6DB0ABC: mov 0x14(%ebp),%edx;");
    asm("loc_6DB0ABF: push %ebx;");
    asm("loc_6DB0AC0: push %edx;");
    asm("loc_6DB0AC1: lea 0x18(%ebp),%eax;");
    asm("loc_6DB0AC4: push %eax;");
    asm("loc_6DB0AC5: mov %ebp,%ecx;");
    asm("loc_6DB0AC7: call _sub_6DA13C0;");
    asm("loc_6DB0ACC: test %eax,%eax;");
    asm("loc_6DB0ACE: mov %eax,0x1C(%ebp);");
    asm("loc_6DB0AD1: je loc_6DB0AE2;");
    asm("loc_6DB0AD3: pop %edi;");
    asm("loc_6DB0AD4: pop %esi;");
    asm("loc_6DB0AD5: pop %ebp;");
    asm("loc_6DB0AD6: mov $0x16,%eax;");
    asm("loc_6DB0ADB: pop %ebx;");
    asm("loc_6DB0ADC: add $0x10,%esp;");
    asm("loc_6DB0ADF: ret $0xC;");
    asm("loc_6DB0AE2: mov (%ebx),%eax;");
    asm("loc_6DB0AE4: mov 0x2C(%esp),%ecx;");
    asm("loc_6DB0AE8: mov %eax,(%ecx);");
    asm("loc_6DB0AEA: mov 0xC(%ebp),%edx;");
    asm("loc_6DB0AED: push %edx;");
    asm("loc_6DB0AEE: call _sub_6DA16B0;");
    asm("loc_6DB0AF3: mov %eax,%ecx;");
    asm("loc_6DB0AF5: mov (%ecx),%esi;");
    asm("loc_6DB0AF7: mov 0x18(%ecx),%edx;");
    asm("loc_6DB0AFA: add $4,%esp;");
    asm("loc_6DB0AFD: inc %esi;");
    asm("loc_6DB0AFE: mov %esi,(%ecx);");
    asm("loc_6DB0B00: mov (%ebx),%eax;");
    asm("loc_6DB0B02: add %eax,%edx;");
    asm("loc_6DB0B04: mov 0x10(%ecx),%eax;");
    asm("loc_6DB0B07: mov %edx,0x18(%ecx);");
    asm("loc_6DB0B0A: mov (%ebx),%ebx;");
    asm("loc_6DB0B0C: cmp %eax,%ebx;");
    asm("loc_6DB0B0E: jbe loc_6DB0B13;");
    asm("loc_6DB0B10: mov %ebx,0x10(%ecx);");
    asm("loc_6DB0B13: mov 0x18(%ecx),%eax;");
    asm("loc_6DB0B16: xor %edx,%edx;");
    asm("loc_6DB0B18: div %esi;");
    asm("loc_6DB0B1A: mov %eax,8(%ecx);");
    asm("loc_6DB0B1D: xor %eax,%eax;");
    asm("loc_6DB0B1F: pop %edi;");
    asm("loc_6DB0B20: pop %esi;");
    asm("loc_6DB0B21: pop %ebp;");
    asm("loc_6DB0B22: pop %ebx;");
    asm("loc_6DB0B23: add $0x10,%esp;");
    asm("loc_6DB0B26: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB0B30() // _sub_6DB0B30
{
    __DEBUG_ASM(6DB0B30);
    // chunk 0x6DB0B30 _sub_6DB0B30
    asm("loc_6DB0B30: mov 8(%esp),%eax;");
    asm("loc_6DB0B34: push %ebx;");
    asm("loc_6DB0B35: push %ebp;");
    asm("loc_6DB0B36: push %esi;");
    asm("loc_6DB0B37: mov %ecx,%ebp;");
    asm("loc_6DB0B39: mov 0x10(%esp),%ecx;");
    asm("loc_6DB0B3D: lea 0x10(%ebp),%ebx;");
    asm("loc_6DB0B40: push %edi;");
    asm("loc_6DB0B41: push %ebx;");
    asm("loc_6DB0B42: push %eax;");
    asm("loc_6DB0B43: mov %ecx,8(%ebx);");
    asm("loc_6DB0B46: lea 0x18(%ebp),%esi;");
    asm("loc_6DB0B49: push %esi;");
    asm("loc_6DB0B4A: mov %ebp,%ecx;");
    asm("loc_6DB0B4C: mov %eax,4(%ebx);");
    asm("loc_6DB0B4F: movl $0,(%ebx);");
    asm("loc_6DB0B55: movl $0,0xC(%ebx);");
    asm("loc_6DB0B5C: call _sub_6DA13C0;");
    asm("loc_6DB0B61: test %eax,%eax;");
    asm("loc_6DB0B63: mov %eax,0x1C(%ebp);");
    asm("loc_6DB0B66: je loc_6DB0B74;");
    asm("loc_6DB0B68: pop %edi;");
    asm("loc_6DB0B69: pop %esi;");
    asm("loc_6DB0B6A: pop %ebp;");
    asm("loc_6DB0B6B: mov $0x17,%eax;");
    asm("loc_6DB0B70: pop %ebx;");
    asm("loc_6DB0B71: ret $0xC;");
    asm("loc_6DB0B74: mov (%ebx),%edi;");
    asm("loc_6DB0B76: mov 4(%ebx),%edx;");
    asm("loc_6DB0B79: add $4,%edi;");
    asm("loc_6DB0B7C: mov %edi,%eax;");
    asm("loc_6DB0B7E: cmp %edx,%eax;");
    asm("loc_6DB0B80: mov %edi,(%ebx);");
    asm("loc_6DB0B82: mov $0x17,%ecx;");
    asm("loc_6DB0B87: jbe loc_6DB0B8C;");
    asm("loc_6DB0B89: mov %ecx,0xC(%ebx);");
    asm("loc_6DB0B8C: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0B8F: test %eax,%eax;");
    asm("loc_6DB0B91: jne loc_6DB1071;");
    asm("loc_6DB0B97: mov (%esi),%eax;");
    asm("loc_6DB0B99: mov (%eax),%edx;");
    asm("loc_6DB0B9B: add $4,%eax;");
    asm("loc_6DB0B9E: mov %eax,(%esi);");
    asm("loc_6DB0BA0: mov %edx,0x20(%ebp);");
    asm("loc_6DB0BA3: mov (%ebx),%edi;");
    asm("loc_6DB0BA5: mov 4(%ebx),%edx;");
    asm("loc_6DB0BA8: add $4,%edi;");
    asm("loc_6DB0BAB: mov %edi,%eax;");
    asm("loc_6DB0BAD: cmp %edx,%eax;");
    asm("loc_6DB0BAF: mov %edi,(%ebx);");
    asm("loc_6DB0BB1: jbe loc_6DB0BB6;");
    asm("loc_6DB0BB3: mov %ecx,0xC(%ebx);");
    asm("loc_6DB0BB6: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0BB9: test %eax,%eax;");
    asm("loc_6DB0BBB: jne loc_6DB1071;");
    asm("loc_6DB0BC1: mov (%esi),%eax;");
    asm("loc_6DB0BC3: mov (%eax),%edx;");
    asm("loc_6DB0BC5: add $4,%eax;");
    asm("loc_6DB0BC8: mov %eax,(%esi);");
    asm("loc_6DB0BCA: mov %edx,0x24(%ebp);");
    asm("loc_6DB0BCD: mov (%ebx),%edi;");
    asm("loc_6DB0BCF: mov 4(%ebx),%edx;");
    asm("loc_6DB0BD2: add $4,%edi;");
    asm("loc_6DB0BD5: mov %edi,%eax;");
    asm("loc_6DB0BD7: cmp %edx,%eax;");
    asm("loc_6DB0BD9: mov %edi,(%ebx);");
    asm("loc_6DB0BDB: jbe loc_6DB0BE0;");
    asm("loc_6DB0BDD: mov %ecx,0xC(%ebx);");
    asm("loc_6DB0BE0: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0BE3: test %eax,%eax;");
    asm("loc_6DB0BE5: jne loc_6DB1071;");
    asm("loc_6DB0BEB: mov (%esi),%eax;");
    asm("loc_6DB0BED: mov (%eax),%edx;");
    asm("loc_6DB0BEF: add $4,%eax;");
    asm("loc_6DB0BF2: mov %eax,(%esi);");
    asm("loc_6DB0BF4: mov %edx,0x28(%ebp);");
    asm("loc_6DB0BF7: mov (%ebx),%edi;");
    asm("loc_6DB0BF9: mov 4(%ebx),%edx;");
    asm("loc_6DB0BFC: add $4,%edi;");
    asm("loc_6DB0BFF: mov %edi,%eax;");
    asm("loc_6DB0C01: cmp %edx,%eax;");
    asm("loc_6DB0C03: mov %edi,(%ebx);");
    asm("loc_6DB0C05: jbe loc_6DB0C0A;");
    asm("loc_6DB0C07: mov %ecx,0xC(%ebx);");
    asm("loc_6DB0C0A: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0C0D: test %eax,%eax;");
    asm("loc_6DB0C0F: jne loc_6DB1071;");
    asm("loc_6DB0C15: mov (%esi),%eax;");
    asm("loc_6DB0C17: mov (%eax),%edx;");
    asm("loc_6DB0C19: add $4,%eax;");
    asm("loc_6DB0C1C: mov %eax,(%esi);");
    asm("loc_6DB0C1E: mov %edx,0x2C(%ebp);");
    asm("loc_6DB0C21: mov (%ebx),%edi;");
    asm("loc_6DB0C23: mov 4(%ebx),%edx;");
    asm("loc_6DB0C26: add $4,%edi;");
    asm("loc_6DB0C29: mov %edi,%eax;");
    asm("loc_6DB0C2B: cmp %edx,%eax;");
    asm("loc_6DB0C2D: mov %edi,(%ebx);");
    asm("loc_6DB0C2F: jbe loc_6DB0C34;");
    asm("loc_6DB0C31: mov %ecx,0xC(%ebx);");
    asm("loc_6DB0C34: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0C37: test %eax,%eax;");
    asm("loc_6DB0C39: jne loc_6DB1071;");
    asm("loc_6DB0C3F: mov (%esi),%eax;");
    asm("loc_6DB0C41: mov (%eax),%edx;");
    asm("loc_6DB0C43: add $4,%eax;");
    asm("loc_6DB0C46: mov %eax,(%esi);");
    asm("loc_6DB0C48: mov %edx,0x30(%ebp);");
    asm("loc_6DB0C4B: mov (%ebx),%edi;");
    asm("loc_6DB0C4D: mov 4(%ebx),%edx;");
    asm("loc_6DB0C50: add $0xC,%edi;");
    asm("loc_6DB0C53: mov %edi,%eax;");
    asm("loc_6DB0C55: cmp %edx,%eax;");
    asm("loc_6DB0C57: mov %edi,(%ebx);");
    asm("loc_6DB0C59: jbe loc_6DB0C5E;");
    asm("loc_6DB0C5B: mov %ecx,0xC(%ebx);");
    asm("loc_6DB0C5E: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0C61: test %eax,%eax;");
    asm("loc_6DB0C63: jne loc_6DB1071;");
    asm("loc_6DB0C69: mov (%esi),%edi;");
    asm("loc_6DB0C6B: push %edi;");
    asm("loc_6DB0C6C: lea 0x34(%ebp),%ecx;");
    asm("loc_6DB0C6F: call _sub_6D8F510;");
    asm("loc_6DB0C74: add $0xC,%edi;");
    asm("loc_6DB0C77: mov %edi,(%esi);");
    asm("loc_6DB0C79: mov (%ebx),%edx;");
    asm("loc_6DB0C7B: mov 4(%ebx),%ecx;");
    asm("loc_6DB0C7E: add $0xC,%edx;");
    asm("loc_6DB0C81: mov %edx,%eax;");
    asm("loc_6DB0C83: cmp %ecx,%eax;");
    asm("loc_6DB0C85: mov %edx,(%ebx);");
    asm("loc_6DB0C87: jbe loc_6DB0C90;");
    asm("loc_6DB0C89: movl $0x17,0xC(%ebx);");
    asm("loc_6DB0C90: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0C93: test %eax,%eax;");
    asm("loc_6DB0C95: jne loc_6DB1071;");
    asm("loc_6DB0C9B: mov (%esi),%edi;");
    asm("loc_6DB0C9D: push %edi;");
    asm("loc_6DB0C9E: lea 0x40(%ebp),%ecx;");
    asm("loc_6DB0CA1: call _sub_6D8F510;");
    asm("loc_6DB0CA6: add $0xC,%edi;");
    asm("loc_6DB0CA9: mov %edi,(%esi);");
    asm("loc_6DB0CAB: mov (%ebx),%edx;");
    asm("loc_6DB0CAD: mov 4(%ebx),%ecx;");
    asm("loc_6DB0CB0: add $0x10,%edx;");
    asm("loc_6DB0CB3: mov %edx,%eax;");
    asm("loc_6DB0CB5: cmp %ecx,%eax;");
    asm("loc_6DB0CB7: mov %edx,(%ebx);");
    asm("loc_6DB0CB9: jbe loc_6DB0CC2;");
    asm("loc_6DB0CBB: movl $0x17,0xC(%ebx);");
    asm("loc_6DB0CC2: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0CC5: test %eax,%eax;");
    asm("loc_6DB0CC7: jne loc_6DB1071;");
    asm("loc_6DB0CCD: mov (%esi),%edi;");
    asm("loc_6DB0CCF: push %edi;");
    asm("loc_6DB0CD0: lea 0x4C(%ebp),%ecx;");
    asm("loc_6DB0CD3: call _sub_6D8F4F0;");
    asm("loc_6DB0CD8: add $0x10,%edi;");
    asm("loc_6DB0CDB: mov %edi,(%esi);");
    asm("loc_6DB0CDD: mov (%ebx),%edx;");
    asm("loc_6DB0CDF: mov 4(%ebx),%ecx;");
    asm("loc_6DB0CE2: add $4,%edx;");
    asm("loc_6DB0CE5: mov %edx,%eax;");
    asm("loc_6DB0CE7: cmp %ecx,%eax;");
    asm("loc_6DB0CE9: mov %edx,(%ebx);");
    asm("loc_6DB0CEB: mov $0x17,%edi;");
    asm("loc_6DB0CF0: jbe loc_6DB0CF5;");
    asm("loc_6DB0CF2: mov %edi,0xC(%ebx);");
    asm("loc_6DB0CF5: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0CF8: test %eax,%eax;");
    asm("loc_6DB0CFA: jne loc_6DB1071;");
    asm("loc_6DB0D00: mov (%esi),%eax;");
    asm("loc_6DB0D02: mov (%eax),%ecx;");
    asm("loc_6DB0D04: add $4,%eax;");
    asm("loc_6DB0D07: mov %eax,(%esi);");
    asm("loc_6DB0D09: mov %ecx,0x5C(%ebp);");
    asm("loc_6DB0D0C: mov (%ebx),%edx;");
    asm("loc_6DB0D0E: mov 4(%ebx),%ecx;");
    asm("loc_6DB0D11: add $4,%edx;");
    asm("loc_6DB0D14: mov %edx,%eax;");
    asm("loc_6DB0D16: cmp %ecx,%eax;");
    asm("loc_6DB0D18: mov %edx,(%ebx);");
    asm("loc_6DB0D1A: jbe loc_6DB0D1F;");
    asm("loc_6DB0D1C: mov %edi,0xC(%ebx);");
    asm("loc_6DB0D1F: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0D22: test %eax,%eax;");
    asm("loc_6DB0D24: jne loc_6DB1071;");
    asm("loc_6DB0D2A: mov (%esi),%eax;");
    asm("loc_6DB0D2C: mov (%eax),%edx;");
    asm("loc_6DB0D2E: add $4,%eax;");
    asm("loc_6DB0D31: mov %eax,(%esi);");
    asm("loc_6DB0D33: mov %edx,%eax;");
    asm("loc_6DB0D35: test %eax,%eax;");
    asm("loc_6DB0D37: mov %edx,0x64(%ebp);");
    asm("loc_6DB0D3A: jbe loc_6DB0D99;");
    asm("loc_6DB0D3C: add %eax,%eax;");
    asm("loc_6DB0D3E: push %eax;");
    asm("loc_6DB0D3F: call _sub_6DB1F8A;");
    asm("loc_6DB0D44: mov 0x64(%ebp),%ecx;");
    asm("loc_6DB0D47: mov %eax,0x60(%ebp);");
    asm("loc_6DB0D4A: mov (%ebx),%edx;");
    asm("loc_6DB0D4C: shl $1,%ecx;");
    asm("loc_6DB0D4E: add %ecx,%edx;");
    asm("loc_6DB0D50: mov 4(%ebx),%ecx;");
    asm("loc_6DB0D53: mov %edx,%eax;");
    asm("loc_6DB0D55: add $4,%esp;");
    asm("loc_6DB0D58: cmp %ecx,%eax;");
    asm("loc_6DB0D5A: mov %edx,(%ebx);");
    asm("loc_6DB0D5C: jbe loc_6DB0D61;");
    asm("loc_6DB0D5E: mov %edi,0xC(%ebx);");
    asm("loc_6DB0D61: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0D64: test %eax,%eax;");
    asm("loc_6DB0D66: jne loc_6DB1071;");
    asm("loc_6DB0D6C: mov 0x64(%ebp),%eax;");
    asm("loc_6DB0D6F: mov 0x18(%ebp),%esi;");
    asm("loc_6DB0D72: mov 0x60(%ebp),%edi;");
    asm("loc_6DB0D75: shl $1,%eax;");
    asm("loc_6DB0D77: mov %eax,%ecx;");
    asm("loc_6DB0D79: mov %ecx,%edx;");
    asm("loc_6DB0D7B: shr $2,%ecx;");
    asm("loc_6DB0D7E: mov %esi,0x14(%esp);");
    asm("loc_6DB0D82: rep movsl (%esi),(%edi);");
    asm("loc_6DB0D84: mov %edx,%ecx;");
    asm("loc_6DB0D86: and $3,%ecx;");
    asm("loc_6DB0D89: rep movsb (%esi),(%edi);");
    asm("loc_6DB0D8B: mov 0x14(%esp),%ecx;");
    asm("loc_6DB0D8F: add %eax,%ecx;");
    asm("loc_6DB0D91: mov %ecx,0x18(%ebp);");
    asm("loc_6DB0D94: mov $0x17,%edi;");
    asm("loc_6DB0D99: mov (%ebx),%edx;");
    asm("loc_6DB0D9B: mov 4(%ebx),%ecx;");
    asm("loc_6DB0D9E: add $4,%edx;");
    asm("loc_6DB0DA1: mov %edx,%eax;");
    asm("loc_6DB0DA3: cmp %ecx,%eax;");
    asm("loc_6DB0DA5: mov %edx,(%ebx);");
    asm("loc_6DB0DA7: jbe loc_6DB0DAC;");
    asm("loc_6DB0DA9: mov %edi,0xC(%ebx);");
    asm("loc_6DB0DAC: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0DAF: test %eax,%eax;");
    asm("loc_6DB0DB1: jne loc_6DB1071;");
    asm("loc_6DB0DB7: mov 0x18(%ebp),%eax;");
    asm("loc_6DB0DBA: mov (%eax),%edx;");
    asm("loc_6DB0DBC: add $4,%eax;");
    asm("loc_6DB0DBF: mov %eax,0x18(%ebp);");
    asm("loc_6DB0DC2: mov %edx,%eax;");
    asm("loc_6DB0DC4: test %eax,%eax;");
    asm("loc_6DB0DC6: mov %edx,0x68(%ebp);");
    asm("loc_6DB0DC9: jbe loc_6DB0E28;");
    asm("loc_6DB0DCB: push %eax;");
    asm("loc_6DB0DCC: call _sub_6DB1F8A;");
    asm("loc_6DB0DD1: mov %eax,0x88(%ebp);");
    asm("loc_6DB0DD7: mov 0x68(%ebp),%eax;");
    asm("loc_6DB0DDA: mov (%ebx),%edx;");
    asm("loc_6DB0DDC: mov 4(%ebx),%ecx;");
    asm("loc_6DB0DDF: add %eax,%edx;");
    asm("loc_6DB0DE1: mov %edx,%eax;");
    asm("loc_6DB0DE3: add $4,%esp;");
    asm("loc_6DB0DE6: cmp %ecx,%eax;");
    asm("loc_6DB0DE8: mov %edx,(%ebx);");
    asm("loc_6DB0DEA: jbe loc_6DB0DEF;");
    asm("loc_6DB0DEC: mov %edi,0xC(%ebx);");
    asm("loc_6DB0DEF: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0DF2: test %eax,%eax;");
    asm("loc_6DB0DF4: jne loc_6DB1071;");
    asm("loc_6DB0DFA: mov 0x68(%ebp),%eax;");
    asm("loc_6DB0DFD: mov 0x18(%ebp),%esi;");
    asm("loc_6DB0E00: mov 0x88(%ebp),%edi;");
    asm("loc_6DB0E06: mov %eax,%ecx;");
    asm("loc_6DB0E08: mov %ecx,%edx;");
    asm("loc_6DB0E0A: shr $2,%ecx;");
    asm("loc_6DB0E0D: mov %esi,0x14(%esp);");
    asm("loc_6DB0E11: rep movsl (%esi),(%edi);");
    asm("loc_6DB0E13: mov %edx,%ecx;");
    asm("loc_6DB0E15: and $3,%ecx;");
    asm("loc_6DB0E18: rep movsb (%esi),(%edi);");
    asm("loc_6DB0E1A: mov 0x14(%esp),%ecx;");
    asm("loc_6DB0E1E: add %eax,%ecx;");
    asm("loc_6DB0E20: mov %ecx,0x18(%ebp);");
    asm("loc_6DB0E23: mov $0x17,%edi;");
    asm("loc_6DB0E28: mov (%ebx),%edx;");
    asm("loc_6DB0E2A: mov 4(%ebx),%ecx;");
    asm("loc_6DB0E2D: add $4,%edx;");
    asm("loc_6DB0E30: mov %edx,%eax;");
    asm("loc_6DB0E32: cmp %ecx,%eax;");
    asm("loc_6DB0E34: mov %edx,(%ebx);");
    asm("loc_6DB0E36: jbe loc_6DB0E3B;");
    asm("loc_6DB0E38: mov %edi,0xC(%ebx);");
    asm("loc_6DB0E3B: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0E3E: test %eax,%eax;");
    asm("loc_6DB0E40: jne loc_6DB1071;");
    asm("loc_6DB0E46: mov 0x18(%ebp),%eax;");
    asm("loc_6DB0E49: mov (%eax),%edx;");
    asm("loc_6DB0E4B: add $4,%eax;");
    asm("loc_6DB0E4E: mov %eax,0x18(%ebp);");
    asm("loc_6DB0E51: mov %edx,%eax;");
    asm("loc_6DB0E53: test %eax,%eax;");
    asm("loc_6DB0E55: mov %edx,0x6C(%ebp);");
    asm("loc_6DB0E58: jbe loc_6DB0EB7;");
    asm("loc_6DB0E5A: push %eax;");
    asm("loc_6DB0E5B: call _sub_6DB1F8A;");
    asm("loc_6DB0E60: mov %eax,0x8C(%ebp);");
    asm("loc_6DB0E66: mov 0x6C(%ebp),%eax;");
    asm("loc_6DB0E69: mov (%ebx),%edx;");
    asm("loc_6DB0E6B: mov 4(%ebx),%ecx;");
    asm("loc_6DB0E6E: add %eax,%edx;");
    asm("loc_6DB0E70: mov %edx,%eax;");
    asm("loc_6DB0E72: add $4,%esp;");
    asm("loc_6DB0E75: cmp %ecx,%eax;");
    asm("loc_6DB0E77: mov %edx,(%ebx);");
    asm("loc_6DB0E79: jbe loc_6DB0E7E;");
    asm("loc_6DB0E7B: mov %edi,0xC(%ebx);");
    asm("loc_6DB0E7E: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0E81: test %eax,%eax;");
    asm("loc_6DB0E83: jne loc_6DB1071;");
    asm("loc_6DB0E89: mov 0x6C(%ebp),%eax;");
    asm("loc_6DB0E8C: mov 0x18(%ebp),%esi;");
    asm("loc_6DB0E8F: mov 0x8C(%ebp),%edi;");
    asm("loc_6DB0E95: mov %eax,%ecx;");
    asm("loc_6DB0E97: mov %ecx,%edx;");
    asm("loc_6DB0E99: shr $2,%ecx;");
    asm("loc_6DB0E9C: mov %esi,0x14(%esp);");
    asm("loc_6DB0EA0: rep movsl (%esi),(%edi);");
    asm("loc_6DB0EA2: mov %edx,%ecx;");
    asm("loc_6DB0EA4: and $3,%ecx;");
    asm("loc_6DB0EA7: rep movsb (%esi),(%edi);");
    asm("loc_6DB0EA9: mov 0x14(%esp),%ecx;");
    asm("loc_6DB0EAD: add %eax,%ecx;");
    asm("loc_6DB0EAF: mov %ecx,0x18(%ebp);");
    asm("loc_6DB0EB2: mov $0x17,%edi;");
    asm("loc_6DB0EB7: mov (%ebx),%edx;");
    asm("loc_6DB0EB9: mov 4(%ebx),%ecx;");
    asm("loc_6DB0EBC: add $4,%edx;");
    asm("loc_6DB0EBF: mov %edx,%eax;");
    asm("loc_6DB0EC1: cmp %ecx,%eax;");
    asm("loc_6DB0EC3: mov %edx,(%ebx);");
    asm("loc_6DB0EC5: jbe loc_6DB0ECA;");
    asm("loc_6DB0EC7: mov %edi,0xC(%ebx);");
    asm("loc_6DB0ECA: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0ECD: test %eax,%eax;");
    asm("loc_6DB0ECF: jne loc_6DB1071;");
    asm("loc_6DB0ED5: mov 0x18(%ebp),%eax;");
    asm("loc_6DB0ED8: mov (%eax),%edx;");
    asm("loc_6DB0EDA: add $4,%eax;");
    asm("loc_6DB0EDD: mov %edx,0x70(%ebp);");
    asm("loc_6DB0EE0: mov %eax,0x18(%ebp);");
    asm("loc_6DB0EE3: mov (%ebx),%edx;");
    asm("loc_6DB0EE5: mov 4(%ebx),%ecx;");
    asm("loc_6DB0EE8: add $4,%edx;");
    asm("loc_6DB0EEB: mov %edx,%eax;");
    asm("loc_6DB0EED: cmp %ecx,%eax;");
    asm("loc_6DB0EEF: mov %edx,(%ebx);");
    asm("loc_6DB0EF1: jbe loc_6DB0EF6;");
    asm("loc_6DB0EF3: mov %edi,0xC(%ebx);");
    asm("loc_6DB0EF6: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0EF9: test %eax,%eax;");
    asm("loc_6DB0EFB: jne loc_6DB1071;");
    asm("loc_6DB0F01: mov 0x18(%ebp),%eax;");
    asm("loc_6DB0F04: mov (%eax),%ecx;");
    asm("loc_6DB0F06: add $4,%eax;");
    asm("loc_6DB0F09: mov %eax,0x18(%ebp);");
    asm("loc_6DB0F0C: mov %ecx,0x74(%ebp);");
    asm("loc_6DB0F0F: mov (%ebx),%edx;");
    asm("loc_6DB0F11: mov 4(%ebx),%ecx;");
    asm("loc_6DB0F14: add $4,%edx;");
    asm("loc_6DB0F17: mov %edx,%eax;");
    asm("loc_6DB0F19: cmp %ecx,%eax;");
    asm("loc_6DB0F1B: mov %edx,(%ebx);");
    asm("loc_6DB0F1D: jbe loc_6DB0F22;");
    asm("loc_6DB0F1F: mov %edi,0xC(%ebx);");
    asm("loc_6DB0F22: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0F25: test %eax,%eax;");
    asm("loc_6DB0F27: jne loc_6DB1071;");
    asm("loc_6DB0F2D: mov 0x18(%ebp),%eax;");
    asm("loc_6DB0F30: mov (%eax),%edx;");
    asm("loc_6DB0F32: add $4,%eax;");
    asm("loc_6DB0F35: mov %edx,0x78(%ebp);");
    asm("loc_6DB0F38: mov %eax,0x18(%ebp);");
    asm("loc_6DB0F3B: mov (%ebx),%edx;");
    asm("loc_6DB0F3D: mov 4(%ebx),%ecx;");
    asm("loc_6DB0F40: add $4,%edx;");
    asm("loc_6DB0F43: mov %edx,%eax;");
    asm("loc_6DB0F45: cmp %ecx,%eax;");
    asm("loc_6DB0F47: mov %edx,(%ebx);");
    asm("loc_6DB0F49: jbe loc_6DB0F4E;");
    asm("loc_6DB0F4B: mov %edi,0xC(%ebx);");
    asm("loc_6DB0F4E: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0F51: test %eax,%eax;");
    asm("loc_6DB0F53: jne loc_6DB1071;");
    asm("loc_6DB0F59: mov 0x18(%ebp),%eax;");
    asm("loc_6DB0F5C: mov (%eax),%ecx;");
    asm("loc_6DB0F5E: add $4,%eax;");
    asm("loc_6DB0F61: mov %eax,0x18(%ebp);");
    asm("loc_6DB0F64: mov %ecx,0x7C(%ebp);");
    asm("loc_6DB0F67: mov (%ebx),%edx;");
    asm("loc_6DB0F69: mov 4(%ebx),%ecx;");
    asm("loc_6DB0F6C: add $4,%edx;");
    asm("loc_6DB0F6F: mov %edx,%eax;");
    asm("loc_6DB0F71: cmp %ecx,%eax;");
    asm("loc_6DB0F73: mov %edx,(%ebx);");
    asm("loc_6DB0F75: jbe loc_6DB0F7A;");
    asm("loc_6DB0F77: mov %edi,0xC(%ebx);");
    asm("loc_6DB0F7A: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0F7D: test %eax,%eax;");
    asm("loc_6DB0F7F: jne loc_6DB1071;");
    asm("loc_6DB0F85: mov 0x18(%ebp),%eax;");
    asm("loc_6DB0F88: mov (%eax),%edx;");
    asm("loc_6DB0F8A: add $4,%eax;");
    asm("loc_6DB0F8D: mov %eax,0x18(%ebp);");
    asm("loc_6DB0F90: mov %edx,%eax;");
    asm("loc_6DB0F92: test %eax,%eax;");
    asm("loc_6DB0F94: mov %edx,0x80(%ebp);");
    asm("loc_6DB0F9A: jbe loc_6DB1008;");
    asm("loc_6DB0F9C: shl $2,%eax;");
    asm("loc_6DB0F9F: push %eax;");
    asm("loc_6DB0FA0: call _sub_6DB1F8A;");
    asm("loc_6DB0FA5: mov 0x80(%ebp),%ecx;");
    asm("loc_6DB0FAB: mov %eax,0x84(%ebp);");
    asm("loc_6DB0FB1: mov (%ebx),%edx;");
    asm("loc_6DB0FB3: shl $2,%ecx;");
    asm("loc_6DB0FB6: add %ecx,%edx;");
    asm("loc_6DB0FB8: mov 4(%ebx),%ecx;");
    asm("loc_6DB0FBB: mov %edx,%eax;");
    asm("loc_6DB0FBD: add $4,%esp;");
    asm("loc_6DB0FC0: cmp %ecx,%eax;");
    asm("loc_6DB0FC2: mov %edx,(%ebx);");
    asm("loc_6DB0FC4: jbe loc_6DB0FC9;");
    asm("loc_6DB0FC6: mov %edi,0xC(%ebx);");
    asm("loc_6DB0FC9: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB0FCC: test %eax,%eax;");
    asm("loc_6DB0FCE: jne loc_6DB1071;");
    asm("loc_6DB0FD4: mov 0x80(%ebp),%eax;");
    asm("loc_6DB0FDA: mov 0x18(%ebp),%esi;");
    asm("loc_6DB0FDD: mov 0x84(%ebp),%edi;");
    asm("loc_6DB0FE3: shl $2,%eax;");
    asm("loc_6DB0FE6: mov %eax,%ecx;");
    asm("loc_6DB0FE8: mov %ecx,%edx;");
    asm("loc_6DB0FEA: shr $2,%ecx;");
    asm("loc_6DB0FED: mov %esi,0x14(%esp);");
    asm("loc_6DB0FF1: rep movsl (%esi),(%edi);");
    asm("loc_6DB0FF3: mov %edx,%ecx;");
    asm("loc_6DB0FF5: and $3,%ecx;");
    asm("loc_6DB0FF8: rep movsb (%esi),(%edi);");
    asm("loc_6DB0FFA: mov 0x14(%esp),%ecx;");
    asm("loc_6DB0FFE: add %eax,%ecx;");
    asm("loc_6DB1000: mov %ecx,0x18(%ebp);");
    asm("loc_6DB1003: mov $0x17,%edi;");
    asm("loc_6DB1008: mov 0x18(%esp),%edx;");
    asm("loc_6DB100C: push %ebx;");
    asm("loc_6DB100D: push %edx;");
    asm("loc_6DB100E: lea 0x18(%ebp),%eax;");
    asm("loc_6DB1011: push %eax;");
    asm("loc_6DB1012: mov %ebp,%ecx;");
    asm("loc_6DB1014: call _sub_6DA13C0;");
    asm("loc_6DB1019: test %eax,%eax;");
    asm("loc_6DB101B: mov %eax,0x1C(%ebp);");
    asm("loc_6DB101E: je loc_6DB1029;");
    asm("loc_6DB1020: mov %edi,%eax;");
    asm("loc_6DB1022: pop %edi;");
    asm("loc_6DB1023: pop %esi;");
    asm("loc_6DB1024: pop %ebp;");
    asm("loc_6DB1025: pop %ebx;");
    asm("loc_6DB1026: ret $0xC;");
    asm("loc_6DB1029: mov (%ebx),%eax;");
    asm("loc_6DB102B: mov 0x1C(%esp),%ecx;");
    asm("loc_6DB102F: mov %eax,(%ecx);");
    asm("loc_6DB1031: mov 0xC(%ebp),%edx;");
    asm("loc_6DB1034: push %edx;");
    asm("loc_6DB1035: call _sub_6DA16B0;");
    asm("loc_6DB103A: mov %eax,%ecx;");
    asm("loc_6DB103C: mov 4(%ecx),%esi;");
    asm("loc_6DB103F: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DB1042: mov 0x14(%ecx),%edx;");
    asm("loc_6DB1045: add $4,%esp;");
    asm("loc_6DB1048: inc %esi;");
    asm("loc_6DB1049: mov %esi,4(%ecx);");
    asm("loc_6DB104C: mov (%ebx),%eax;");
    asm("loc_6DB104E: add $2,%eax;");
    asm("loc_6DB1051: add %eax,%ebp;");
    asm("loc_6DB1053: mov %ebp,0x1C(%ecx);");
    asm("loc_6DB1056: mov (%ebx),%ebx;");
    asm("loc_6DB1058: add $2,%edx;");
    asm("loc_6DB105B: cmp %edx,%ebx;");
    asm("loc_6DB105D: jbe loc_6DB1065;");
    asm("loc_6DB105F: add $2,%ebx;");
    asm("loc_6DB1062: mov %ebx,0x14(%ecx);");
    asm("loc_6DB1065: mov 0x1C(%ecx),%eax;");
    asm("loc_6DB1068: xor %edx,%edx;");
    asm("loc_6DB106A: div %esi;");
    asm("loc_6DB106C: mov %eax,0xC(%ecx);");
    asm("loc_6DB106F: xor %eax,%eax;");
    asm("loc_6DB1071: pop %edi;");
    asm("loc_6DB1072: pop %esi;");
    asm("loc_6DB1073: pop %ebp;");
    asm("loc_6DB1074: pop %ebx;");
    asm("loc_6DB1075: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1080() // _sub_6DB1080
{
    __DEBUG_ASM(6DB1080);
    // chunk 0x6DB1080 _sub_6DB1080
    asm("loc_6DB1080: mov _data_6DB675C,%eax;");
    asm("loc_6DB1085: mov %eax,_data_6DBC560;");
    asm("loc_6DB108A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1090() // _sub_6DB1090
{
    __DEBUG_ASM(6DB1090);
    // chunk 0x6DB1090 _sub_6DB1090
    asm("loc_6DB1090: mov _data_6DB675C,%eax;");
    asm("loc_6DB1095: mov %eax,_data_6DBC564;");
    asm("loc_6DB109A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB10A0() // _sub_6DB10A0
{
    __DEBUG_ASM(6DB10A0);
    // chunk 0x6DB10A0 _sub_6DB10A0
    asm("loc_6DB10A0: mov _data_6DB6760,%eax;");
    asm("loc_6DB10A5: mov %eax,_data_6DBC55C;");
    asm("loc_6DB10AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB10B0() // _sub_6DB10B0
{
    __DEBUG_ASM(6DB10B0);
    // chunk 0x6DB10B0 _sub_6DB10B0
    asm("loc_6DB10B0: push %esi;");
    asm("loc_6DB10B1: mov %ecx,%esi;");
    asm("loc_6DB10B3: mov 0x20(%esi),%eax;");
    asm("loc_6DB10B6: test %eax,%eax;");
    asm("loc_6DB10B8: movl $_off_6DB5D64,(%esi);");
    asm("loc_6DB10BE: je loc_6DB10C9;");
    asm("loc_6DB10C0: push %eax;");
    asm("loc_6DB10C1: call _sub_6DB1DC2;");
    asm("loc_6DB10C6: add $4,%esp;");
    asm("loc_6DB10C9: mov %esi,%ecx;");
    asm("loc_6DB10CB: pop %esi;");
    asm("loc_6DB10CC: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB10E0() // _sub_6DB10E0
{
    __DEBUG_ASM(6DB10E0);
    // chunk 0x6DB10E0 _sub_6DB10E0
    asm("loc_6DB10E0: mov 4(%esp),%eax;");
    asm("loc_6DB10E4: push %ebx;");
    asm("loc_6DB10E5: push %ebp;");
    asm("loc_6DB10E6: push %esi;");
    asm("loc_6DB10E7: push %edi;");
    asm("loc_6DB10E8: mov 0x18(%esp),%edi;");
    asm("loc_6DB10EC: mov %ecx,%ebp;");
    asm("loc_6DB10EE: lea 0x10(%ebp),%ebx;");
    asm("loc_6DB10F1: push %ebx;");
    asm("loc_6DB10F2: push %edi;");
    asm("loc_6DB10F3: lea 0x18(%ebp),%esi;");
    asm("loc_6DB10F6: push %esi;");
    asm("loc_6DB10F7: mov %edi,4(%ebx);");
    asm("loc_6DB10FA: mov %eax,8(%ebx);");
    asm("loc_6DB10FD: movl $0,(%ebx);");
    asm("loc_6DB1103: movl $0,0xC(%ebx);");
    asm("loc_6DB110A: call _sub_6DA13C0;");
    asm("loc_6DB110F: test %eax,%eax;");
    asm("loc_6DB1111: mov %eax,0x1C(%ebp);");
    asm("loc_6DB1114: je loc_6DB1122;");
    asm("loc_6DB1116: pop %edi;");
    asm("loc_6DB1117: pop %esi;");
    asm("loc_6DB1118: pop %ebp;");
    asm("loc_6DB1119: mov $0x17,%eax;");
    asm("loc_6DB111E: pop %ebx;");
    asm("loc_6DB111F: ret $0xC;");
    asm("loc_6DB1122: mov (%ebx),%edx;");
    asm("loc_6DB1124: mov 4(%ebx),%ecx;");
    asm("loc_6DB1127: add $4,%edx;");
    asm("loc_6DB112A: mov %edx,%eax;");
    asm("loc_6DB112C: cmp %ecx,%eax;");
    asm("loc_6DB112E: mov %edx,(%ebx);");
    asm("loc_6DB1130: jbe loc_6DB1139;");
    asm("loc_6DB1132: movl $0x17,0xC(%ebx);");
    asm("loc_6DB1139: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB113C: test %eax,%eax;");
    asm("loc_6DB113E: jne loc_6DB1219;");
    asm("loc_6DB1144: mov (%esi),%eax;");
    asm("loc_6DB1146: mov (%eax),%ecx;");
    asm("loc_6DB1148: add $4,%eax;");
    asm("loc_6DB114B: mov %eax,(%esi);");
    asm("loc_6DB114D: mov %ecx,%eax;");
    asm("loc_6DB114F: test %eax,%eax;");
    asm("loc_6DB1151: mov %ecx,0x24(%ebp);");
    asm("loc_6DB1154: jbe loc_6DB11AF;");
    asm("loc_6DB1156: push %eax;");
    asm("loc_6DB1157: call _sub_6DB1F8A;");
    asm("loc_6DB115C: mov 0x24(%ebp),%edx;");
    asm("loc_6DB115F: mov %eax,0x20(%ebp);");
    asm("loc_6DB1162: mov (%ebx),%edi;");
    asm("loc_6DB1164: mov 4(%ebx),%ecx;");
    asm("loc_6DB1167: add %edx,%edi;");
    asm("loc_6DB1169: mov %edi,%eax;");
    asm("loc_6DB116B: add $4,%esp;");
    asm("loc_6DB116E: cmp %ecx,%eax;");
    asm("loc_6DB1170: mov %edi,(%ebx);");
    asm("loc_6DB1172: jbe loc_6DB117B;");
    asm("loc_6DB1174: movl $0x17,0xC(%ebx);");
    asm("loc_6DB117B: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB117E: test %eax,%eax;");
    asm("loc_6DB1180: jne loc_6DB1219;");
    asm("loc_6DB1186: mov 0x24(%ebp),%eax;");
    asm("loc_6DB1189: mov (%esi),%esi;");
    asm("loc_6DB118B: mov 0x20(%ebp),%edi;");
    asm("loc_6DB118E: mov %eax,%ecx;");
    asm("loc_6DB1190: mov %ecx,%edx;");
    asm("loc_6DB1192: shr $2,%ecx;");
    asm("loc_6DB1195: mov %esi,0x14(%esp);");
    asm("loc_6DB1199: rep movsl (%esi),(%edi);");
    asm("loc_6DB119B: mov %edx,%ecx;");
    asm("loc_6DB119D: and $3,%ecx;");
    asm("loc_6DB11A0: rep movsb (%esi),(%edi);");
    asm("loc_6DB11A2: mov 0x14(%esp),%ecx;");
    asm("loc_6DB11A6: mov 0x18(%esp),%edi;");
    asm("loc_6DB11AA: add %eax,%ecx;");
    asm("loc_6DB11AC: mov %ecx,0x18(%ebp);");
    asm("loc_6DB11AF: push %ebx;");
    asm("loc_6DB11B0: push %edi;");
    asm("loc_6DB11B1: lea 0x18(%ebp),%eax;");
    asm("loc_6DB11B4: push %eax;");
    asm("loc_6DB11B5: mov %ebp,%ecx;");
    asm("loc_6DB11B7: call _sub_6DA13C0;");
    asm("loc_6DB11BC: test %eax,%eax;");
    asm("loc_6DB11BE: mov %eax,0x1C(%ebp);");
    asm("loc_6DB11C1: je loc_6DB11CF;");
    asm("loc_6DB11C3: pop %edi;");
    asm("loc_6DB11C4: pop %esi;");
    asm("loc_6DB11C5: pop %ebp;");
    asm("loc_6DB11C6: mov $0x17,%eax;");
    asm("loc_6DB11CB: pop %ebx;");
    asm("loc_6DB11CC: ret $0xC;");
    asm("loc_6DB11CF: mov (%ebx),%edx;");
    asm("loc_6DB11D1: mov 0x1C(%esp),%eax;");
    asm("loc_6DB11D5: mov %edx,(%eax);");
    asm("loc_6DB11D7: mov 0xC(%ebp),%ecx;");
    asm("loc_6DB11DA: push %ecx;");
    asm("loc_6DB11DB: call _sub_6DA16B0;");
    asm("loc_6DB11E0: mov %eax,%ecx;");
    asm("loc_6DB11E2: mov 4(%ecx),%edx;");
    asm("loc_6DB11E5: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DB11E8: mov 0x14(%ecx),%eax;");
    asm("loc_6DB11EB: add $4,%esp;");
    asm("loc_6DB11EE: inc %edx;");
    asm("loc_6DB11EF: mov %edx,4(%ecx);");
    asm("loc_6DB11F2: mov %edx,%esi;");
    asm("loc_6DB11F4: mov (%ebx),%edx;");
    asm("loc_6DB11F6: add $2,%edx;");
    asm("loc_6DB11F9: add %edx,%ebp;");
    asm("loc_6DB11FB: mov %ebp,0x1C(%ecx);");
    asm("loc_6DB11FE: mov (%ebx),%ebx;");
    asm("loc_6DB1200: add $2,%eax;");
    asm("loc_6DB1203: cmp %eax,%ebx;");
    asm("loc_6DB1205: jbe loc_6DB120D;");
    asm("loc_6DB1207: add $2,%ebx;");
    asm("loc_6DB120A: mov %ebx,0x14(%ecx);");
    asm("loc_6DB120D: mov 0x1C(%ecx),%eax;");
    asm("loc_6DB1210: xor %edx,%edx;");
    asm("loc_6DB1212: div %esi;");
    asm("loc_6DB1214: mov %eax,0xC(%ecx);");
    asm("loc_6DB1217: xor %eax,%eax;");
    asm("loc_6DB1219: pop %edi;");
    asm("loc_6DB121A: pop %esi;");
    asm("loc_6DB121B: pop %ebp;");
    asm("loc_6DB121C: pop %ebx;");
    asm("loc_6DB121D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1220() // _sub_6DB1220
{
    __DEBUG_ASM(6DB1220);
    // chunk 0x6DB1220 _sub_6DB1220
    asm("loc_6DB1220: mov _data_6DB6768,%eax;");
    asm("loc_6DB1225: mov %eax,_data_6DBC570;");
    asm("loc_6DB122A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1230() // _sub_6DB1230
{
    __DEBUG_ASM(6DB1230);
    // chunk 0x6DB1230 _sub_6DB1230
    asm("loc_6DB1230: mov _data_6DB6768,%eax;");
    asm("loc_6DB1235: mov %eax,_data_6DBC574;");
    asm("loc_6DB123A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1240() // _sub_6DB1240
{
    __DEBUG_ASM(6DB1240);
    // chunk 0x6DB1240 _sub_6DB1240
    asm("loc_6DB1240: mov _data_6DB676C,%eax;");
    asm("loc_6DB1245: mov %eax,_data_6DBC56C;");
    asm("loc_6DB124A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1250() // _sub_6DB1250
{
    __DEBUG_ASM(6DB1250);
    // chunk 0x6DB1250 _sub_6DB1250
    asm("loc_6DB1250: movl $_off_6DB5D74,(%ecx);");
    asm("loc_6DB1256: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1260() // _sub_6DB1260
{
    __DEBUG_ASM(6DB1260);
    // chunk 0x6DB1260 _sub_6DB1260
    asm("loc_6DB1260: mov _data_6DB6774,%eax;");
    asm("loc_6DB1265: mov %eax,_data_6DBC580;");
    asm("loc_6DB126A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1270() // _sub_6DB1270
{
    __DEBUG_ASM(6DB1270);
    // chunk 0x6DB1270 _sub_6DB1270
    asm("loc_6DB1270: mov _data_6DB6774,%eax;");
    asm("loc_6DB1275: mov %eax,_data_6DBC584;");
    asm("loc_6DB127A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1280() // _sub_6DB1280
{
    __DEBUG_ASM(6DB1280);
    // chunk 0x6DB1280 _sub_6DB1280
    asm("loc_6DB1280: mov _data_6DB6778,%eax;");
    asm("loc_6DB1285: mov %eax,_data_6DBC57C;");
    asm("loc_6DB128A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1290() // _sub_6DB1290
{
    __DEBUG_ASM(6DB1290);
    // chunk 0x6DB1290 _sub_6DB1290
    asm("loc_6DB1290: mov _data_6DB6780,%eax;");
    asm("loc_6DB1295: mov %eax,_data_6DBC590;");
    asm("loc_6DB129A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB12A0() // _sub_6DB12A0
{
    __DEBUG_ASM(6DB12A0);
    // chunk 0x6DB12A0 _sub_6DB12A0
    asm("loc_6DB12A0: mov _data_6DB6780,%eax;");
    asm("loc_6DB12A5: mov %eax,_data_6DBC594;");
    asm("loc_6DB12AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB12B0() // _sub_6DB12B0
{
    __DEBUG_ASM(6DB12B0);
    // chunk 0x6DB12B0 _sub_6DB12B0
    asm("loc_6DB12B0: mov _data_6DB6784,%eax;");
    asm("loc_6DB12B5: mov %eax,_data_6DBC58C;");
    asm("loc_6DB12BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB12C0() // _sub_6DB12C0
{
    __DEBUG_ASM(6DB12C0);
    // chunk 0x6DB12C0 _sub_6DB12C0
    asm("loc_6DB12C0: mov 8(%esp),%eax;");
    asm("loc_6DB12C4: push %ebx;");
    asm("loc_6DB12C5: push %esi;");
    asm("loc_6DB12C6: push %edi;");
    asm("loc_6DB12C7: mov %ecx,%edi;");
    asm("loc_6DB12C9: mov 0x10(%esp),%ecx;");
    asm("loc_6DB12CD: lea 0x10(%edi),%esi;");
    asm("loc_6DB12D0: mov %eax,4(%esi);");
    asm("loc_6DB12D3: mov (%ecx),%edx;");
    asm("loc_6DB12D5: mov %edx,8(%esi);");
    asm("loc_6DB12D8: movl $0,(%esi);");
    asm("loc_6DB12DE: movl $0,0xC(%esi);");
    asm("loc_6DB12E5: mov 0x14(%edi),%eax;");
    asm("loc_6DB12E8: push %esi;");
    asm("loc_6DB12E9: push %eax;");
    asm("loc_6DB12EA: lea 0x18(%edi),%ebx;");
    asm("loc_6DB12ED: push %ebx;");
    asm("loc_6DB12EE: mov %edi,%ecx;");
    asm("loc_6DB12F0: call _sub_6DA1380;");
    asm("loc_6DB12F5: test %eax,%eax;");
    asm("loc_6DB12F7: mov %eax,0x1C(%edi);");
    asm("loc_6DB12FA: je loc_6DB1307;");
    asm("loc_6DB12FC: pop %edi;");
    asm("loc_6DB12FD: pop %esi;");
    asm("loc_6DB12FE: mov $0x16,%eax;");
    asm("loc_6DB1303: pop %ebx;");
    asm("loc_6DB1304: ret $0xC;");
    asm("loc_6DB1307: mov (%esi),%edx;");
    asm("loc_6DB1309: mov 4(%esi),%ecx;");
    asm("loc_6DB130C: add $4,%edx;");
    asm("loc_6DB130F: mov %edx,%eax;");
    asm("loc_6DB1311: cmp %ecx,%eax;");
    asm("loc_6DB1313: mov %edx,(%esi);");
    asm("loc_6DB1315: jbe loc_6DB131E;");
    asm("loc_6DB1317: movl $0x16,0xC(%esi);");
    asm("loc_6DB131E: mov 0x1C(%edi),%eax;");
    asm("loc_6DB1321: test %eax,%eax;");
    asm("loc_6DB1323: je loc_6DB1330;");
    asm("loc_6DB1325: pop %edi;");
    asm("loc_6DB1326: pop %esi;");
    asm("loc_6DB1327: mov $0x16,%eax;");
    asm("loc_6DB132C: pop %ebx;");
    asm("loc_6DB132D: ret $0xC;");
    asm("loc_6DB1330: mov (%ebx),%eax;");
    asm("loc_6DB1332: mov 0x20(%edi),%ecx;");
    asm("loc_6DB1335: mov %ecx,(%eax);");
    asm("loc_6DB1337: add $4,%eax;");
    asm("loc_6DB133A: mov %eax,(%ebx);");
    asm("loc_6DB133C: mov (%esi),%edx;");
    asm("loc_6DB133E: mov 4(%esi),%ecx;");
    asm("loc_6DB1341: add $2,%edx;");
    asm("loc_6DB1344: mov %edx,%eax;");
    asm("loc_6DB1346: cmp %ecx,%eax;");
    asm("loc_6DB1348: mov %edx,(%esi);");
    asm("loc_6DB134A: jbe loc_6DB1353;");
    asm("loc_6DB134C: movl $0x16,0xC(%esi);");
    asm("loc_6DB1353: mov 0x1C(%edi),%eax;");
    asm("loc_6DB1356: test %eax,%eax;");
    asm("loc_6DB1358: je loc_6DB1365;");
    asm("loc_6DB135A: pop %edi;");
    asm("loc_6DB135B: pop %esi;");
    asm("loc_6DB135C: mov $0x16,%eax;");
    asm("loc_6DB1361: pop %ebx;");
    asm("loc_6DB1362: ret $0xC;");
    asm("loc_6DB1365: mov (%ebx),%eax;");
    asm("loc_6DB1367: mov 0x24(%edi),%dx;");
    asm("loc_6DB136B: mov %dx,(%eax);");
    asm("loc_6DB136E: add $2,%eax;");
    asm("loc_6DB1371: mov %eax,(%ebx);");
    asm("loc_6DB1373: mov 0x14(%edi),%eax;");
    asm("loc_6DB1376: push %esi;");
    asm("loc_6DB1377: push %eax;");
    asm("loc_6DB1378: push %ebx;");
    asm("loc_6DB1379: mov %edi,%ecx;");
    asm("loc_6DB137B: call _sub_6DA13C0;");
    asm("loc_6DB1380: test %eax,%eax;");
    asm("loc_6DB1382: mov %eax,0x1C(%edi);");
    asm("loc_6DB1385: je loc_6DB1392;");
    asm("loc_6DB1387: pop %edi;");
    asm("loc_6DB1388: pop %esi;");
    asm("loc_6DB1389: mov $0x16,%eax;");
    asm("loc_6DB138E: pop %ebx;");
    asm("loc_6DB138F: ret $0xC;");
    asm("loc_6DB1392: mov (%esi),%ecx;");
    asm("loc_6DB1394: mov 0x18(%esp),%edx;");
    asm("loc_6DB1398: mov %ecx,(%edx);");
    asm("loc_6DB139A: mov 0xC(%edi),%eax;");
    asm("loc_6DB139D: push %eax;");
    asm("loc_6DB139E: call _sub_6DA16B0;");
    asm("loc_6DB13A3: mov %eax,%ecx;");
    asm("loc_6DB13A5: mov (%ecx),%eax;");
    asm("loc_6DB13A7: mov 0x18(%ecx),%ebx;");
    asm("loc_6DB13AA: add $4,%esp;");
    asm("loc_6DB13AD: inc %eax;");
    asm("loc_6DB13AE: mov %eax,(%ecx);");
    asm("loc_6DB13B0: mov (%esi),%edx;");
    asm("loc_6DB13B2: add %edx,%ebx;");
    asm("loc_6DB13B4: mov %eax,%edi;");
    asm("loc_6DB13B6: mov 0x10(%ecx),%eax;");
    asm("loc_6DB13B9: mov %ebx,0x18(%ecx);");
    asm("loc_6DB13BC: mov (%esi),%esi;");
    asm("loc_6DB13BE: cmp %eax,%esi;");
    asm("loc_6DB13C0: jbe loc_6DB13C5;");
    asm("loc_6DB13C2: mov %esi,0x10(%ecx);");
    asm("loc_6DB13C5: mov 0x18(%ecx),%eax;");
    asm("loc_6DB13C8: xor %edx,%edx;");
    asm("loc_6DB13CA: div %edi;");
    asm("loc_6DB13CC: pop %edi;");
    asm("loc_6DB13CD: pop %esi;");
    asm("loc_6DB13CE: pop %ebx;");
    asm("loc_6DB13CF: mov %eax,8(%ecx);");
    asm("loc_6DB13D2: xor %eax,%eax;");
    asm("loc_6DB13D4: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB13E0() // _sub_6DB13E0
{
    __DEBUG_ASM(6DB13E0);
    // chunk 0x6DB13E0 _sub_6DB13E0
    asm("loc_6DB13E0: mov 4(%esp),%eax;");
    asm("loc_6DB13E4: push %ebx;");
    asm("loc_6DB13E5: push %ebp;");
    asm("loc_6DB13E6: mov 0x10(%esp),%ebp;");
    asm("loc_6DB13EA: push %esi;");
    asm("loc_6DB13EB: push %edi;");
    asm("loc_6DB13EC: mov %ecx,%edi;");
    asm("loc_6DB13EE: lea 0x10(%edi),%esi;");
    asm("loc_6DB13F1: push %esi;");
    asm("loc_6DB13F2: push %ebp;");
    asm("loc_6DB13F3: lea 0x18(%edi),%ebx;");
    asm("loc_6DB13F6: push %ebx;");
    asm("loc_6DB13F7: mov %ebp,4(%esi);");
    asm("loc_6DB13FA: mov %eax,8(%esi);");
    asm("loc_6DB13FD: movl $0,(%esi);");
    asm("loc_6DB1403: movl $0,0xC(%esi);");
    asm("loc_6DB140A: call _sub_6DA13C0;");
    asm("loc_6DB140F: test %eax,%eax;");
    asm("loc_6DB1411: mov %eax,0x1C(%edi);");
    asm("loc_6DB1414: je loc_6DB1422;");
    asm("loc_6DB1416: pop %edi;");
    asm("loc_6DB1417: pop %esi;");
    asm("loc_6DB1418: pop %ebp;");
    asm("loc_6DB1419: mov $0x17,%eax;");
    asm("loc_6DB141E: pop %ebx;");
    asm("loc_6DB141F: ret $0xC;");
    asm("loc_6DB1422: mov (%esi),%edx;");
    asm("loc_6DB1424: mov 4(%esi),%ecx;");
    asm("loc_6DB1427: add $4,%edx;");
    asm("loc_6DB142A: mov %edx,%eax;");
    asm("loc_6DB142C: cmp %ecx,%eax;");
    asm("loc_6DB142E: mov %edx,(%esi);");
    asm("loc_6DB1430: jbe loc_6DB1439;");
    asm("loc_6DB1432: movl $0x17,0xC(%esi);");
    asm("loc_6DB1439: mov 0x1C(%edi),%eax;");
    asm("loc_6DB143C: test %eax,%eax;");
    asm("loc_6DB143E: jne loc_6DB14E1;");
    asm("loc_6DB1444: mov (%ebx),%eax;");
    asm("loc_6DB1446: mov (%eax),%ecx;");
    asm("loc_6DB1448: add $4,%eax;");
    asm("loc_6DB144B: mov %eax,(%ebx);");
    asm("loc_6DB144D: mov %ecx,0x20(%edi);");
    asm("loc_6DB1450: mov (%esi),%edx;");
    asm("loc_6DB1452: mov 4(%esi),%ecx;");
    asm("loc_6DB1455: add $2,%edx;");
    asm("loc_6DB1458: mov %edx,%eax;");
    asm("loc_6DB145A: cmp %ecx,%eax;");
    asm("loc_6DB145C: mov %edx,(%esi);");
    asm("loc_6DB145E: jbe loc_6DB1467;");
    asm("loc_6DB1460: movl $0x17,0xC(%esi);");
    asm("loc_6DB1467: mov 0x1C(%edi),%eax;");
    asm("loc_6DB146A: test %eax,%eax;");
    asm("loc_6DB146C: jne loc_6DB14E1;");
    asm("loc_6DB146E: mov (%ebx),%eax;");
    asm("loc_6DB1470: mov (%eax),%dx;");
    asm("loc_6DB1473: push %esi;");
    asm("loc_6DB1474: push %ebp;");
    asm("loc_6DB1475: add $2,%eax;");
    asm("loc_6DB1478: push %ebx;");
    asm("loc_6DB1479: mov %edi,%ecx;");
    asm("loc_6DB147B: mov %dx,0x24(%edi);");
    asm("loc_6DB147F: mov %eax,(%ebx);");
    asm("loc_6DB1481: call _sub_6DA13C0;");
    asm("loc_6DB1486: test %eax,%eax;");
    asm("loc_6DB1488: mov %eax,0x1C(%edi);");
    asm("loc_6DB148B: je loc_6DB1499;");
    asm("loc_6DB148D: pop %edi;");
    asm("loc_6DB148E: pop %esi;");
    asm("loc_6DB148F: pop %ebp;");
    asm("loc_6DB1490: mov $0x17,%eax;");
    asm("loc_6DB1495: pop %ebx;");
    asm("loc_6DB1496: ret $0xC;");
    asm("loc_6DB1499: mov (%esi),%eax;");
    asm("loc_6DB149B: mov 0x1C(%esp),%ecx;");
    asm("loc_6DB149F: mov %eax,(%ecx);");
    asm("loc_6DB14A1: mov 0xC(%edi),%edx;");
    asm("loc_6DB14A4: push %edx;");
    asm("loc_6DB14A5: call _sub_6DA16B0;");
    asm("loc_6DB14AA: mov %eax,%ecx;");
    asm("loc_6DB14AC: mov 4(%ecx),%edi;");
    asm("loc_6DB14AF: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DB14B2: mov 0x14(%ecx),%edx;");
    asm("loc_6DB14B5: add $4,%esp;");
    asm("loc_6DB14B8: inc %edi;");
    asm("loc_6DB14B9: mov %edi,4(%ecx);");
    asm("loc_6DB14BC: mov (%esi),%eax;");
    asm("loc_6DB14BE: add $2,%eax;");
    asm("loc_6DB14C1: add %eax,%ebp;");
    asm("loc_6DB14C3: mov %ebp,0x1C(%ecx);");
    asm("loc_6DB14C6: mov (%esi),%esi;");
    asm("loc_6DB14C8: add $2,%edx;");
    asm("loc_6DB14CB: cmp %edx,%esi;");
    asm("loc_6DB14CD: jbe loc_6DB14D5;");
    asm("loc_6DB14CF: add $2,%esi;");
    asm("loc_6DB14D2: mov %esi,0x14(%ecx);");
    asm("loc_6DB14D5: mov 0x1C(%ecx),%eax;");
    asm("loc_6DB14D8: xor %edx,%edx;");
    asm("loc_6DB14DA: div %edi;");
    asm("loc_6DB14DC: mov %eax,0xC(%ecx);");
    asm("loc_6DB14DF: xor %eax,%eax;");
    asm("loc_6DB14E1: pop %edi;");
    asm("loc_6DB14E2: pop %esi;");
    asm("loc_6DB14E3: pop %ebp;");
    asm("loc_6DB14E4: pop %ebx;");
    asm("loc_6DB14E5: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB14F0() // _sub_6DB14F0
{
    __DEBUG_ASM(6DB14F0);
    // chunk 0x6DB14F0 _sub_6DB14F0
    asm("loc_6DB14F0: mov 8(%esp),%eax;");
    asm("loc_6DB14F4: sub $0xC,%esp;");
    asm("loc_6DB14F7: push %ebx;");
    asm("loc_6DB14F8: push %ebp;");
    asm("loc_6DB14F9: push %esi;");
    asm("loc_6DB14FA: push %edi;");
    asm("loc_6DB14FB: mov %ecx,%edi;");
    asm("loc_6DB14FD: mov 0x20(%esp),%ecx;");
    asm("loc_6DB1501: lea 0x10(%edi),%esi;");
    asm("loc_6DB1504: mov %eax,4(%esi);");
    asm("loc_6DB1507: mov (%ecx),%edx;");
    asm("loc_6DB1509: mov %edx,8(%esi);");
    asm("loc_6DB150C: movl $0,(%esi);");
    asm("loc_6DB1512: movl $0,0xC(%esi);");
    asm("loc_6DB1519: mov 0x14(%edi),%eax;");
    asm("loc_6DB151C: push %esi;");
    asm("loc_6DB151D: push %eax;");
    asm("loc_6DB151E: lea 0x18(%edi),%ebx;");
    asm("loc_6DB1521: push %ebx;");
    asm("loc_6DB1522: mov %edi,%ecx;");
    asm("loc_6DB1524: call _sub_6DA1380;");
    asm("loc_6DB1529: test %eax,%eax;");
    asm("loc_6DB152B: mov %eax,0x1C(%edi);");
    asm("loc_6DB152E: je loc_6DB153F;");
    asm("loc_6DB1530: pop %edi;");
    asm("loc_6DB1531: pop %esi;");
    asm("loc_6DB1532: pop %ebp;");
    asm("loc_6DB1533: mov $0x16,%eax;");
    asm("loc_6DB1538: pop %ebx;");
    asm("loc_6DB1539: add $0xC,%esp;");
    asm("loc_6DB153C: ret $0xC;");
    asm("loc_6DB153F: mov (%esi),%edx;");
    asm("loc_6DB1541: mov 4(%esi),%ecx;");
    asm("loc_6DB1544: add $4,%edx;");
    asm("loc_6DB1547: mov %edx,%eax;");
    asm("loc_6DB1549: cmp %ecx,%eax;");
    asm("loc_6DB154B: mov %edx,(%esi);");
    asm("loc_6DB154D: jbe loc_6DB1556;");
    asm("loc_6DB154F: movl $0x16,0xC(%esi);");
    asm("loc_6DB1556: mov 0x1C(%edi),%eax;");
    asm("loc_6DB1559: test %eax,%eax;");
    asm("loc_6DB155B: je loc_6DB156C;");
    asm("loc_6DB155D: pop %edi;");
    asm("loc_6DB155E: pop %esi;");
    asm("loc_6DB155F: pop %ebp;");
    asm("loc_6DB1560: mov $0x16,%eax;");
    asm("loc_6DB1565: pop %ebx;");
    asm("loc_6DB1566: add $0xC,%esp;");
    asm("loc_6DB1569: ret $0xC;");
    asm("loc_6DB156C: mov (%ebx),%eax;");
    asm("loc_6DB156E: mov 0x20(%edi),%ecx;");
    asm("loc_6DB1571: mov %ecx,(%eax);");
    asm("loc_6DB1573: add $4,%eax;");
    asm("loc_6DB1576: mov %eax,(%ebx);");
    asm("loc_6DB1578: mov (%esi),%edx;");
    asm("loc_6DB157A: mov 4(%esi),%ecx;");
    asm("loc_6DB157D: add $0xC,%edx;");
    asm("loc_6DB1580: mov %edx,%eax;");
    asm("loc_6DB1582: cmp %ecx,%eax;");
    asm("loc_6DB1584: mov %edx,(%esi);");
    asm("loc_6DB1586: jbe loc_6DB158F;");
    asm("loc_6DB1588: movl $0x16,0xC(%esi);");
    asm("loc_6DB158F: mov 0x1C(%edi),%eax;");
    asm("loc_6DB1592: test %eax,%eax;");
    asm("loc_6DB1594: je loc_6DB15A5;");
    asm("loc_6DB1596: pop %edi;");
    asm("loc_6DB1597: pop %esi;");
    asm("loc_6DB1598: pop %ebp;");
    asm("loc_6DB1599: mov $0x16,%eax;");
    asm("loc_6DB159E: pop %ebx;");
    asm("loc_6DB159F: add $0xC,%esp;");
    asm("loc_6DB15A2: ret $0xC;");
    asm("loc_6DB15A5: mov 0x24(%edi),%edx;");
    asm("loc_6DB15A8: mov 0x2C(%edi),%ecx;");
    asm("loc_6DB15AB: mov (%ebx),%ebp;");
    asm("loc_6DB15AD: mov 0x28(%edi),%eax;");
    asm("loc_6DB15B0: mov %edx,0x10(%esp);");
    asm("loc_6DB15B4: lea 0x10(%esp),%edx;");
    asm("loc_6DB15B8: mov %ecx,0x18(%esp);");
    asm("loc_6DB15BC: push %edx;");
    asm("loc_6DB15BD: mov %ebp,%ecx;");
    asm("loc_6DB15BF: mov %eax,0x18(%esp);");
    asm("loc_6DB15C3: call _sub_6D8F510;");
    asm("loc_6DB15C8: mov 0x14(%edi),%eax;");
    asm("loc_6DB15CB: push %esi;");
    asm("loc_6DB15CC: push %eax;");
    asm("loc_6DB15CD: add $0xC,%ebp;");
    asm("loc_6DB15D0: push %ebx;");
    asm("loc_6DB15D1: mov %edi,%ecx;");
    asm("loc_6DB15D3: mov %ebp,(%ebx);");
    asm("loc_6DB15D5: call _sub_6DA13C0;");
    asm("loc_6DB15DA: test %eax,%eax;");
    asm("loc_6DB15DC: mov %eax,0x1C(%edi);");
    asm("loc_6DB15DF: je loc_6DB15F0;");
    asm("loc_6DB15E1: pop %edi;");
    asm("loc_6DB15E2: pop %esi;");
    asm("loc_6DB15E3: pop %ebp;");
    asm("loc_6DB15E4: mov $0x16,%eax;");
    asm("loc_6DB15E9: pop %ebx;");
    asm("loc_6DB15EA: add $0xC,%esp;");
    asm("loc_6DB15ED: ret $0xC;");
    asm("loc_6DB15F0: mov (%esi),%ecx;");
    asm("loc_6DB15F2: mov 0x28(%esp),%edx;");
    asm("loc_6DB15F6: mov %ecx,(%edx);");
    asm("loc_6DB15F8: mov 0xC(%edi),%eax;");
    asm("loc_6DB15FB: push %eax;");
    asm("loc_6DB15FC: call _sub_6DA16B0;");
    asm("loc_6DB1601: mov %eax,%ecx;");
    asm("loc_6DB1603: mov (%ecx),%ebp;");
    asm("loc_6DB1605: mov 0x18(%ecx),%ebx;");
    asm("loc_6DB1608: mov 0x10(%ecx),%eax;");
    asm("loc_6DB160B: add $4,%esp;");
    asm("loc_6DB160E: inc %ebp;");
    asm("loc_6DB160F: mov %ebp,(%ecx);");
    asm("loc_6DB1611: mov (%esi),%edx;");
    asm("loc_6DB1613: add %edx,%ebx;");
    asm("loc_6DB1615: mov %ebx,0x18(%ecx);");
    asm("loc_6DB1618: mov (%esi),%esi;");
    asm("loc_6DB161A: cmp %eax,%esi;");
    asm("loc_6DB161C: mov %ebp,%edi;");
    asm("loc_6DB161E: jbe loc_6DB1623;");
    asm("loc_6DB1620: mov %esi,0x10(%ecx);");
    asm("loc_6DB1623: mov 0x18(%ecx),%eax;");
    asm("loc_6DB1626: xor %edx,%edx;");
    asm("loc_6DB1628: div %edi;");
    asm("loc_6DB162A: pop %edi;");
    asm("loc_6DB162B: pop %esi;");
    asm("loc_6DB162C: pop %ebp;");
    asm("loc_6DB162D: pop %ebx;");
    asm("loc_6DB162E: mov %eax,8(%ecx);");
    asm("loc_6DB1631: xor %eax,%eax;");
    asm("loc_6DB1633: add $0xC,%esp;");
    asm("loc_6DB1636: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1640() // _sub_6DB1640
{
    __DEBUG_ASM(6DB1640);
    // chunk 0x6DB1640 _sub_6DB1640
    asm("loc_6DB1640: mov _data_6DB678C,%eax;");
    asm("loc_6DB1645: mov %eax,_data_6DBC5A0;");
    asm("loc_6DB164A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1650() // _sub_6DB1650
{
    __DEBUG_ASM(6DB1650);
    // chunk 0x6DB1650 _sub_6DB1650
    asm("loc_6DB1650: mov _data_6DB678C,%eax;");
    asm("loc_6DB1655: mov %eax,_data_6DBC5A4;");
    asm("loc_6DB165A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1660() // _sub_6DB1660
{
    __DEBUG_ASM(6DB1660);
    // chunk 0x6DB1660 _sub_6DB1660
    asm("loc_6DB1660: mov _data_6DB6790,%eax;");
    asm("loc_6DB1665: mov %eax,_data_6DBC59C;");
    asm("loc_6DB166A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1670() // _sub_6DB1670
{
    __DEBUG_ASM(6DB1670);
    // chunk 0x6DB1670 _sub_6DB1670
    asm("loc_6DB1670: mov 8(%esp),%eax;");
    asm("loc_6DB1674: push %ebx;");
    asm("loc_6DB1675: push %ebp;");
    asm("loc_6DB1676: mov %ecx,%ebp;");
    asm("loc_6DB1678: mov 0xC(%esp),%ecx;");
    asm("loc_6DB167C: lea 0x10(%ebp),%ebx;");
    asm("loc_6DB167F: push %esi;");
    asm("loc_6DB1680: mov %eax,4(%ebx);");
    asm("loc_6DB1683: mov (%ecx),%edx;");
    asm("loc_6DB1685: push %edi;");
    asm("loc_6DB1686: mov %edx,8(%ebx);");
    asm("loc_6DB1689: movl $0,(%ebx);");
    asm("loc_6DB168F: movl $0,0xC(%ebx);");
    asm("loc_6DB1696: mov 0x14(%ebp),%eax;");
    asm("loc_6DB1699: push %ebx;");
    asm("loc_6DB169A: push %eax;");
    asm("loc_6DB169B: lea 0x18(%ebp),%esi;");
    asm("loc_6DB169E: push %esi;");
    asm("loc_6DB169F: mov %ebp,%ecx;");
    asm("loc_6DB16A1: call _sub_6DA1380;");
    asm("loc_6DB16A6: test %eax,%eax;");
    asm("loc_6DB16A8: mov %eax,0x1C(%ebp);");
    asm("loc_6DB16AB: je loc_6DB16B9;");
    asm("loc_6DB16AD: pop %edi;");
    asm("loc_6DB16AE: pop %esi;");
    asm("loc_6DB16AF: pop %ebp;");
    asm("loc_6DB16B0: mov $0x16,%eax;");
    asm("loc_6DB16B5: pop %ebx;");
    asm("loc_6DB16B6: ret $0xC;");
    asm("loc_6DB16B9: mov (%ebx),%edx;");
    asm("loc_6DB16BB: mov 4(%ebx),%ecx;");
    asm("loc_6DB16BE: add $4,%edx;");
    asm("loc_6DB16C1: mov %edx,%eax;");
    asm("loc_6DB16C3: cmp %ecx,%eax;");
    asm("loc_6DB16C5: mov %edx,(%ebx);");
    asm("loc_6DB16C7: jbe loc_6DB16D0;");
    asm("loc_6DB16C9: movl $0x16,0xC(%ebx);");
    asm("loc_6DB16D0: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB16D3: test %eax,%eax;");
    asm("loc_6DB16D5: je loc_6DB16E3;");
    asm("loc_6DB16D7: pop %edi;");
    asm("loc_6DB16D8: pop %esi;");
    asm("loc_6DB16D9: pop %ebp;");
    asm("loc_6DB16DA: mov $0x16,%eax;");
    asm("loc_6DB16DF: pop %ebx;");
    asm("loc_6DB16E0: ret $0xC;");
    asm("loc_6DB16E3: mov (%esi),%eax;");
    asm("loc_6DB16E5: mov 0x20(%ebp),%ecx;");
    asm("loc_6DB16E8: mov %ecx,(%eax);");
    asm("loc_6DB16EA: add $4,%eax;");
    asm("loc_6DB16ED: mov %eax,(%esi);");
    asm("loc_6DB16EF: mov (%ebx),%edx;");
    asm("loc_6DB16F1: mov 4(%ebx),%ecx;");
    asm("loc_6DB16F4: add $0x80,%edx;");
    asm("loc_6DB16FA: mov %edx,%eax;");
    asm("loc_6DB16FC: cmp %ecx,%eax;");
    asm("loc_6DB16FE: mov %edx,(%ebx);");
    asm("loc_6DB1700: jbe loc_6DB1709;");
    asm("loc_6DB1702: movl $0x16,0xC(%ebx);");
    asm("loc_6DB1709: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB170C: test %eax,%eax;");
    asm("loc_6DB170E: je loc_6DB171C;");
    asm("loc_6DB1710: pop %edi;");
    asm("loc_6DB1711: pop %esi;");
    asm("loc_6DB1712: pop %ebp;");
    asm("loc_6DB1713: mov $0x16,%eax;");
    asm("loc_6DB1718: pop %ebx;");
    asm("loc_6DB1719: ret $0xC;");
    asm("loc_6DB171C: mov (%esi),%eax;");
    asm("loc_6DB171E: mov %eax,%edi;");
    asm("loc_6DB1720: mov $0x20,%ecx;");
    asm("loc_6DB1725: lea 0x24(%ebp),%esi;");
    asm("loc_6DB1728: rep movsl (%esi),(%edi);");
    asm("loc_6DB172A: mov 0x14(%ebp),%ecx;");
    asm("loc_6DB172D: push %ebx;");
    asm("loc_6DB172E: lea 0x80(%eax),%edx;");
    asm("loc_6DB1734: lea 0x18(%ebp),%eax;");
    asm("loc_6DB1737: push %ecx;");
    asm("loc_6DB1738: push %eax;");
    asm("loc_6DB1739: mov %ebp,%ecx;");
    asm("loc_6DB173B: mov %edx,(%eax);");
    asm("loc_6DB173D: call _sub_6DA13C0;");
    asm("loc_6DB1742: test %eax,%eax;");
    asm("loc_6DB1744: mov %eax,0x1C(%ebp);");
    asm("loc_6DB1747: je loc_6DB1755;");
    asm("loc_6DB1749: pop %edi;");
    asm("loc_6DB174A: pop %esi;");
    asm("loc_6DB174B: pop %ebp;");
    asm("loc_6DB174C: mov $0x16,%eax;");
    asm("loc_6DB1751: pop %ebx;");
    asm("loc_6DB1752: ret $0xC;");
    asm("loc_6DB1755: mov (%ebx),%edx;");
    asm("loc_6DB1757: mov 0x1C(%esp),%eax;");
    asm("loc_6DB175B: mov %edx,(%eax);");
    asm("loc_6DB175D: mov 0xC(%ebp),%ecx;");
    asm("loc_6DB1760: push %ecx;");
    asm("loc_6DB1761: call _sub_6DA16B0;");
    asm("loc_6DB1766: mov %eax,%ecx;");
    asm("loc_6DB1768: mov (%ecx),%ebp;");
    asm("loc_6DB176A: mov 0x18(%ecx),%edi;");
    asm("loc_6DB176D: mov 0x10(%ecx),%eax;");
    asm("loc_6DB1770: add $4,%esp;");
    asm("loc_6DB1773: inc %ebp;");
    asm("loc_6DB1774: mov %ebp,(%ecx);");
    asm("loc_6DB1776: mov (%ebx),%edx;");
    asm("loc_6DB1778: add %edx,%edi;");
    asm("loc_6DB177A: mov %edi,0x18(%ecx);");
    asm("loc_6DB177D: mov (%ebx),%ebx;");
    asm("loc_6DB177F: cmp %eax,%ebx;");
    asm("loc_6DB1781: mov %ebp,%esi;");
    asm("loc_6DB1783: jbe loc_6DB1788;");
    asm("loc_6DB1785: mov %ebx,0x10(%ecx);");
    asm("loc_6DB1788: mov 0x18(%ecx),%eax;");
    asm("loc_6DB178B: xor %edx,%edx;");
    asm("loc_6DB178D: div %esi;");
    asm("loc_6DB178F: pop %edi;");
    asm("loc_6DB1790: pop %esi;");
    asm("loc_6DB1791: pop %ebp;");
    asm("loc_6DB1792: pop %ebx;");
    asm("loc_6DB1793: mov %eax,8(%ecx);");
    asm("loc_6DB1796: xor %eax,%eax;");
    asm("loc_6DB1798: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB17A0() // _sub_6DB17A0
{
    __DEBUG_ASM(6DB17A0);
    // chunk 0x6DB17A0 _sub_6DB17A0
    asm("loc_6DB17A0: mov 8(%esp),%eax;");
    asm("loc_6DB17A4: push %ebx;");
    asm("loc_6DB17A5: push %ebp;");
    asm("loc_6DB17A6: mov %ecx,%ebp;");
    asm("loc_6DB17A8: mov 0xC(%esp),%ecx;");
    asm("loc_6DB17AC: push %esi;");
    asm("loc_6DB17AD: lea 0x10(%ebp),%ebx;");
    asm("loc_6DB17B0: push %ebx;");
    asm("loc_6DB17B1: push %eax;");
    asm("loc_6DB17B2: mov %ecx,8(%ebx);");
    asm("loc_6DB17B5: lea 0x18(%ebp),%esi;");
    asm("loc_6DB17B8: push %esi;");
    asm("loc_6DB17B9: mov %ebp,%ecx;");
    asm("loc_6DB17BB: mov %eax,4(%ebx);");
    asm("loc_6DB17BE: movl $0,(%ebx);");
    asm("loc_6DB17C4: movl $0,0xC(%ebx);");
    asm("loc_6DB17CB: call _sub_6DA13C0;");
    asm("loc_6DB17D0: test %eax,%eax;");
    asm("loc_6DB17D2: mov %eax,0x1C(%ebp);");
    asm("loc_6DB17D5: je loc_6DB17E2;");
    asm("loc_6DB17D7: pop %esi;");
    asm("loc_6DB17D8: pop %ebp;");
    asm("loc_6DB17D9: mov $0x17,%eax;");
    asm("loc_6DB17DE: pop %ebx;");
    asm("loc_6DB17DF: ret $0xC;");
    asm("loc_6DB17E2: mov (%ebx),%edx;");
    asm("loc_6DB17E4: mov 4(%ebx),%ecx;");
    asm("loc_6DB17E7: add $4,%edx;");
    asm("loc_6DB17EA: mov %edx,%eax;");
    asm("loc_6DB17EC: cmp %ecx,%eax;");
    asm("loc_6DB17EE: mov %edx,(%ebx);");
    asm("loc_6DB17F0: jbe loc_6DB17F9;");
    asm("loc_6DB17F2: movl $0x17,0xC(%ebx);");
    asm("loc_6DB17F9: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB17FC: test %eax,%eax;");
    asm("loc_6DB17FE: jne loc_6DB18B8;");
    asm("loc_6DB1804: mov (%esi),%eax;");
    asm("loc_6DB1806: mov (%eax),%edx;");
    asm("loc_6DB1808: add $4,%eax;");
    asm("loc_6DB180B: mov %edx,0x20(%ebp);");
    asm("loc_6DB180E: mov %eax,(%esi);");
    asm("loc_6DB1810: mov (%ebx),%edx;");
    asm("loc_6DB1812: mov 4(%ebx),%ecx;");
    asm("loc_6DB1815: add $0x80,%edx;");
    asm("loc_6DB181B: mov %edx,%eax;");
    asm("loc_6DB181D: cmp %ecx,%eax;");
    asm("loc_6DB181F: mov %edx,(%ebx);");
    asm("loc_6DB1821: jbe loc_6DB182A;");
    asm("loc_6DB1823: movl $0x17,0xC(%ebx);");
    asm("loc_6DB182A: mov 0x1C(%ebp),%eax;");
    asm("loc_6DB182D: test %eax,%eax;");
    asm("loc_6DB182F: jne loc_6DB18B8;");
    asm("loc_6DB1835: mov (%esi),%eax;");
    asm("loc_6DB1837: mov 0x14(%esp),%edx;");
    asm("loc_6DB183B: push %edi;");
    asm("loc_6DB183C: mov %eax,%esi;");
    asm("loc_6DB183E: mov $0x20,%ecx;");
    asm("loc_6DB1843: lea 0x24(%ebp),%edi;");
    asm("loc_6DB1846: rep movsl (%esi),(%edi);");
    asm("loc_6DB1848: lea 0x80(%eax),%ecx;");
    asm("loc_6DB184E: push %ebx;");
    asm("loc_6DB184F: lea 0x18(%ebp),%eax;");
    asm("loc_6DB1852: push %edx;");
    asm("loc_6DB1853: mov %ecx,(%eax);");
    asm("loc_6DB1855: push %eax;");
    asm("loc_6DB1856: mov %ebp,%ecx;");
    asm("loc_6DB1858: call _sub_6DA13C0;");
    asm("loc_6DB185D: test %eax,%eax;");
    asm("loc_6DB185F: mov %eax,0x1C(%ebp);");
    asm("loc_6DB1862: pop %edi;");
    asm("loc_6DB1863: je loc_6DB1870;");
    asm("loc_6DB1865: pop %esi;");
    asm("loc_6DB1866: pop %ebp;");
    asm("loc_6DB1867: mov $0x17,%eax;");
    asm("loc_6DB186C: pop %ebx;");
    asm("loc_6DB186D: ret $0xC;");
    asm("loc_6DB1870: mov (%ebx),%eax;");
    asm("loc_6DB1872: mov 0x18(%esp),%ecx;");
    asm("loc_6DB1876: mov %eax,(%ecx);");
    asm("loc_6DB1878: mov 0xC(%ebp),%edx;");
    asm("loc_6DB187B: push %edx;");
    asm("loc_6DB187C: call _sub_6DA16B0;");
    asm("loc_6DB1881: mov %eax,%ecx;");
    asm("loc_6DB1883: mov 4(%ecx),%esi;");
    asm("loc_6DB1886: mov 0x1C(%ecx),%ebp;");
    asm("loc_6DB1889: mov 0x14(%ecx),%edx;");
    asm("loc_6DB188C: add $4,%esp;");
    asm("loc_6DB188F: inc %esi;");
    asm("loc_6DB1890: mov %esi,4(%ecx);");
    asm("loc_6DB1893: mov (%ebx),%eax;");
    asm("loc_6DB1895: add $2,%eax;");
    asm("loc_6DB1898: add %eax,%ebp;");
    asm("loc_6DB189A: mov %ebp,0x1C(%ecx);");
    asm("loc_6DB189D: mov (%ebx),%ebx;");
    asm("loc_6DB189F: add $2,%edx;");
    asm("loc_6DB18A2: cmp %edx,%ebx;");
    asm("loc_6DB18A4: jbe loc_6DB18AC;");
    asm("loc_6DB18A6: add $2,%ebx;");
    asm("loc_6DB18A9: mov %ebx,0x14(%ecx);");
    asm("loc_6DB18AC: mov 0x1C(%ecx),%eax;");
    asm("loc_6DB18AF: xor %edx,%edx;");
    asm("loc_6DB18B1: div %esi;");
    asm("loc_6DB18B3: mov %eax,0xC(%ecx);");
    asm("loc_6DB18B6: xor %eax,%eax;");
    asm("loc_6DB18B8: pop %esi;");
    asm("loc_6DB18B9: pop %ebp;");
    asm("loc_6DB18BA: pop %ebx;");
    asm("loc_6DB18BB: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB18C0() // _sub_6DB18C0
{
    __DEBUG_ASM(6DB18C0);
    // chunk 0x6DB18C0 _sub_6DB18C0
    asm("loc_6DB18C0: mov _data_6DB6798,%eax;");
    asm("loc_6DB18C5: mov %eax,_data_6DBC5B0;");
    asm("loc_6DB18CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB18D0() // _sub_6DB18D0
{
    __DEBUG_ASM(6DB18D0);
    // chunk 0x6DB18D0 _sub_6DB18D0
    asm("loc_6DB18D0: mov _data_6DB6798,%eax;");
    asm("loc_6DB18D5: mov %eax,_data_6DBC5B4;");
    asm("loc_6DB18DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB18E0() // _sub_6DB18E0
{
    __DEBUG_ASM(6DB18E0);
    // chunk 0x6DB18E0 _sub_6DB18E0
    asm("loc_6DB18E0: mov _data_6DB679C,%eax;");
    asm("loc_6DB18E5: mov %eax,_data_6DBC5AC;");
    asm("loc_6DB18EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB18F0() // _sub_6DB18F0
{
    __DEBUG_ASM(6DB18F0);
    // chunk 0x6DB18F0 _sub_6DB18F0
    asm("loc_6DB18F0: mov _data_6DB67A4,%eax;");
    asm("loc_6DB18F5: mov %eax,_data_6DBC5C0;");
    asm("loc_6DB18FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1900() // _sub_6DB1900
{
    __DEBUG_ASM(6DB1900);
    // chunk 0x6DB1900 _sub_6DB1900
    asm("loc_6DB1900: mov _data_6DB67A4,%eax;");
    asm("loc_6DB1905: mov %eax,_data_6DBC5C4;");
    asm("loc_6DB190A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1910() // _sub_6DB1910
{
    __DEBUG_ASM(6DB1910);
    // chunk 0x6DB1910 _sub_6DB1910
    asm("loc_6DB1910: mov _data_6DB67A8,%eax;");
    asm("loc_6DB1915: mov %eax,_data_6DBC5BC;");
    asm("loc_6DB191A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1920() // _sub_6DB1920
{
    __DEBUG_ASM(6DB1920);
    // chunk 0x6DB1920 _sub_6DB1920
    asm("loc_6DB1920: mov _data_6DB67B0,%eax;");
    asm("loc_6DB1925: mov %eax,_data_6DBC5D0;");
    asm("loc_6DB192A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1930() // _sub_6DB1930
{
    __DEBUG_ASM(6DB1930);
    // chunk 0x6DB1930 _sub_6DB1930
    asm("loc_6DB1930: mov _data_6DB67B0,%eax;");
    asm("loc_6DB1935: mov %eax,_data_6DBC5D4;");
    asm("loc_6DB193A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1940() // _sub_6DB1940
{
    __DEBUG_ASM(6DB1940);
    // chunk 0x6DB1940 _sub_6DB1940
    asm("loc_6DB1940: mov _data_6DB67B4,%eax;");
    asm("loc_6DB1945: mov %eax,_data_6DBC5CC;");
    asm("loc_6DB194A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1950() // _sub_6DB1950
{
    __DEBUG_ASM(6DB1950);
    // chunk 0x6DB1950 _sub_6DB1950
    asm("loc_6DB1950: mov _data_6DB67BC,%eax;");
    asm("loc_6DB1955: mov %eax,_data_6DBC5E0;");
    asm("loc_6DB195A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1960() // _sub_6DB1960
{
    __DEBUG_ASM(6DB1960);
    // chunk 0x6DB1960 _sub_6DB1960
    asm("loc_6DB1960: mov _data_6DB67BC,%eax;");
    asm("loc_6DB1965: mov %eax,_data_6DBC5E4;");
    asm("loc_6DB196A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1970() // _sub_6DB1970
{
    __DEBUG_ASM(6DB1970);
    // chunk 0x6DB1970 _sub_6DB1970
    asm("loc_6DB1970: mov _data_6DB67C0,%eax;");
    asm("loc_6DB1975: mov %eax,_data_6DBC5DC;");
    asm("loc_6DB197A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1980() // _sub_6DB1980
{
    __DEBUG_ASM(6DB1980);
    // chunk 0x6DB1980 _sub_6DB1980
    asm("loc_6DB1980: mov _data_6DB67C8,%eax;");
    asm("loc_6DB1985: mov %eax,_data_6DBC5F0;");
    asm("loc_6DB198A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1990() // _sub_6DB1990
{
    __DEBUG_ASM(6DB1990);
    // chunk 0x6DB1990 _sub_6DB1990
    asm("loc_6DB1990: mov _data_6DB67C8,%eax;");
    asm("loc_6DB1995: mov %eax,_data_6DBC5F4;");
    asm("loc_6DB199A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB19A0() // _sub_6DB19A0
{
    __DEBUG_ASM(6DB19A0);
    // chunk 0x6DB19A0 _sub_6DB19A0
    asm("loc_6DB19A0: mov _data_6DB67CC,%eax;");
    asm("loc_6DB19A5: mov %eax,_data_6DBC5EC;");
    asm("loc_6DB19AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB19B0() // _sub_6DB19B0
{
    __DEBUG_ASM(6DB19B0);
    // chunk 0x6DB19B0 _sub_6DB19B0
    asm("loc_6DB19B0: mov 8(%esp),%eax;");
    asm("loc_6DB19B4: push %ebx;");
    asm("loc_6DB19B5: push %esi;");
    asm("loc_6DB19B6: push %edi;");
    asm("loc_6DB19B7: mov %ecx,%edi;");
    asm("loc_6DB19B9: mov 0x10(%esp),%ecx;");
    asm("loc_6DB19BD: lea 0x10(%edi),%esi;");
    asm("loc_6DB19C0: mov %eax,4(%esi);");
    asm("loc_6DB19C3: mov (%ecx),%edx;");
    asm("loc_6DB19C5: mov %edx,8(%esi);");
    asm("loc_6DB19C8: movl $0,(%esi);");
    asm("loc_6DB19CE: movl $0,0xC(%esi);");
    asm("loc_6DB19D5: mov 0x14(%edi),%eax;");
    asm("loc_6DB19D8: push %esi;");
    asm("loc_6DB19D9: push %eax;");
    asm("loc_6DB19DA: lea 0x18(%edi),%ebx;");
    asm("loc_6DB19DD: push %ebx;");
    asm("loc_6DB19DE: mov %edi,%ecx;");
    asm("loc_6DB19E0: call _sub_6DA1380;");
    asm("loc_6DB19E5: test %eax,%eax;");
    asm("loc_6DB19E7: mov %eax,0x1C(%edi);");
    asm("loc_6DB19EA: je loc_6DB19F7;");
    asm("loc_6DB19EC: pop %edi;");
    asm("loc_6DB19ED: pop %esi;");
    asm("loc_6DB19EE: mov $0x16,%eax;");
    asm("loc_6DB19F3: pop %ebx;");
    asm("loc_6DB19F4: ret $0xC;");
    asm("loc_6DB19F7: mov (%esi),%edx;");
    asm("loc_6DB19F9: mov 4(%esi),%ecx;");
    asm("loc_6DB19FC: add $4,%edx;");
    asm("loc_6DB19FF: mov %edx,%eax;");
    asm("loc_6DB1A01: cmp %ecx,%eax;");
    asm("loc_6DB1A03: mov %edx,(%esi);");
    asm("loc_6DB1A05: jbe loc_6DB1A0E;");
    asm("loc_6DB1A07: movl $0x16,0xC(%esi);");
    asm("loc_6DB1A0E: mov 0x1C(%edi),%eax;");
    asm("loc_6DB1A11: test %eax,%eax;");
    asm("loc_6DB1A13: je loc_6DB1A20;");
    asm("loc_6DB1A15: pop %edi;");
    asm("loc_6DB1A16: pop %esi;");
    asm("loc_6DB1A17: mov $0x16,%eax;");
    asm("loc_6DB1A1C: pop %ebx;");
    asm("loc_6DB1A1D: ret $0xC;");
    asm("loc_6DB1A20: mov (%ebx),%eax;");
    asm("loc_6DB1A22: mov 0x20(%edi),%ecx;");
    asm("loc_6DB1A25: mov %ecx,(%eax);");
    asm("loc_6DB1A27: add $4,%eax;");
    asm("loc_6DB1A2A: mov %eax,(%ebx);");
    asm("loc_6DB1A2C: mov (%esi),%edx;");
    asm("loc_6DB1A2E: mov 4(%esi),%ecx;");
    asm("loc_6DB1A31: add $2,%edx;");
    asm("loc_6DB1A34: mov %edx,%eax;");
    asm("loc_6DB1A36: cmp %ecx,%eax;");
    asm("loc_6DB1A38: mov %edx,(%esi);");
    asm("loc_6DB1A3A: jbe loc_6DB1A43;");
    asm("loc_6DB1A3C: movl $0x16,0xC(%esi);");
    asm("loc_6DB1A43: mov 0x1C(%edi),%eax;");
    asm("loc_6DB1A46: test %eax,%eax;");
    asm("loc_6DB1A48: je loc_6DB1A55;");
    asm("loc_6DB1A4A: pop %edi;");
    asm("loc_6DB1A4B: pop %esi;");
    asm("loc_6DB1A4C: mov $0x16,%eax;");
    asm("loc_6DB1A51: pop %ebx;");
    asm("loc_6DB1A52: ret $0xC;");
    asm("loc_6DB1A55: mov (%ebx),%eax;");
    asm("loc_6DB1A57: mov 0x24(%edi),%dx;");
    asm("loc_6DB1A5B: mov %dx,(%eax);");
    asm("loc_6DB1A5E: add $2,%eax;");
    asm("loc_6DB1A61: mov %eax,(%ebx);");
    asm("loc_6DB1A63: mov (%esi),%edx;");
    asm("loc_6DB1A65: mov 4(%esi),%ecx;");
    asm("loc_6DB1A68: add $2,%edx;");
    asm("loc_6DB1A6B: mov %edx,%eax;");
    asm("loc_6DB1A6D: cmp %ecx,%eax;");
    asm("loc_6DB1A6F: mov %edx,(%esi);");
    asm("loc_6DB1A71: jbe loc_6DB1A7A;");
    asm("loc_6DB1A73: movl $0x16,0xC(%esi);");
    asm("loc_6DB1A7A: mov 0x1C(%edi),%eax;");
    asm("loc_6DB1A7D: test %eax,%eax;");
    asm("loc_6DB1A7F: je loc_6DB1A8C;");
    asm("loc_6DB1A81: pop %edi;");
    asm("loc_6DB1A82: pop %esi;");
    asm("loc_6DB1A83: mov $0x16,%eax;");
    asm("loc_6DB1A88: pop %ebx;");
    asm("loc_6DB1A89: ret $0xC;");
    asm("loc_6DB1A8C: mov (%ebx),%eax;");
    asm("loc_6DB1A8E: mov 0x26(%edi),%cx;");
    asm("loc_6DB1A92: mov %cx,(%eax);");
    asm("loc_6DB1A95: mov 0x14(%edi),%edx;");
    asm("loc_6DB1A98: push %esi;");
    asm("loc_6DB1A99: push %edx;");
    asm("loc_6DB1A9A: add $2,%eax;");
    asm("loc_6DB1A9D: push %ebx;");
    asm("loc_6DB1A9E: mov %edi,%ecx;");
    asm("loc_6DB1AA0: mov %eax,(%ebx);");
    asm("loc_6DB1AA2: call _sub_6DA13C0;");
    asm("loc_6DB1AA7: test %eax,%eax;");
    asm("loc_6DB1AA9: mov %eax,0x1C(%edi);");
    asm("loc_6DB1AAC: je loc_6DB1AB9;");
    asm("loc_6DB1AAE: pop %edi;");
    asm("loc_6DB1AAF: pop %esi;");
    asm("loc_6DB1AB0: mov $0x16,%eax;");
    asm("loc_6DB1AB5: pop %ebx;");
    asm("loc_6DB1AB6: ret $0xC;");
    asm("loc_6DB1AB9: mov (%esi),%eax;");
    asm("loc_6DB1ABB: mov 0x18(%esp),%ecx;");
    asm("loc_6DB1ABF: mov %eax,(%ecx);");
    asm("loc_6DB1AC1: mov 0xC(%edi),%edx;");
    asm("loc_6DB1AC4: push %edx;");
    asm("loc_6DB1AC5: call _sub_6DA16B0;");
    asm("loc_6DB1ACA: mov %eax,%ecx;");
    asm("loc_6DB1ACC: mov (%ecx),%edi;");
    asm("loc_6DB1ACE: mov 0x18(%ecx),%edx;");
    asm("loc_6DB1AD1: add $4,%esp;");
    asm("loc_6DB1AD4: inc %edi;");
    asm("loc_6DB1AD5: mov %edi,(%ecx);");
    asm("loc_6DB1AD7: mov (%esi),%eax;");
    asm("loc_6DB1AD9: add %eax,%edx;");
    asm("loc_6DB1ADB: mov 0x10(%ecx),%eax;");
    asm("loc_6DB1ADE: mov %edx,0x18(%ecx);");
    asm("loc_6DB1AE1: mov (%esi),%esi;");
    asm("loc_6DB1AE3: cmp %eax,%esi;");
    asm("loc_6DB1AE5: jbe loc_6DB1AEA;");
    asm("loc_6DB1AE7: mov %esi,0x10(%ecx);");
    asm("loc_6DB1AEA: mov 0x18(%ecx),%eax;");
    asm("loc_6DB1AED: xor %edx,%edx;");
    asm("loc_6DB1AEF: div %edi;");
    asm("loc_6DB1AF1: pop %edi;");
    asm("loc_6DB1AF2: pop %esi;");
    asm("loc_6DB1AF3: pop %ebx;");
    asm("loc_6DB1AF4: mov %eax,8(%ecx);");
    asm("loc_6DB1AF7: xor %eax,%eax;");
    asm("loc_6DB1AF9: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1B00() // _sub_6DB1B00
{
    __DEBUG_ASM(6DB1B00);
    // chunk 0x6DB1B00 _sub_6DB1B00
    asm("loc_6DB1B00: mov _data_6DB67D4,%eax;");
    asm("loc_6DB1B05: mov %eax,_data_6DBC600;");
    asm("loc_6DB1B0A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1B10() // _sub_6DB1B10
{
    __DEBUG_ASM(6DB1B10);
    // chunk 0x6DB1B10 _sub_6DB1B10
    asm("loc_6DB1B10: mov _data_6DB67D4,%eax;");
    asm("loc_6DB1B15: mov %eax,_data_6DBC604;");
    asm("loc_6DB1B1A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1B20() // _sub_6DB1B20
{
    __DEBUG_ASM(6DB1B20);
    // chunk 0x6DB1B20 _sub_6DB1B20
    asm("loc_6DB1B20: mov _data_6DB67D8,%eax;");
    asm("loc_6DB1B25: mov %eax,_data_6DBC5FC;");
    asm("loc_6DB1B2A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1B30() // _sub_6DB1B30
{
    __DEBUG_ASM(6DB1B30);
    // chunk 0x6DB1B30 _sub_6DB1B30
    asm("loc_6DB1B30: mov _data_6DB67E0,%eax;");
    asm("loc_6DB1B35: mov %eax,_data_6DBC610;");
    asm("loc_6DB1B3A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1B40() // _sub_6DB1B40
{
    __DEBUG_ASM(6DB1B40);
    // chunk 0x6DB1B40 _sub_6DB1B40
    asm("loc_6DB1B40: mov _data_6DB67E0,%eax;");
    asm("loc_6DB1B45: mov %eax,_data_6DBC614;");
    asm("loc_6DB1B4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1B50() // _sub_6DB1B50
{
    __DEBUG_ASM(6DB1B50);
    // chunk 0x6DB1B50 _sub_6DB1B50
    asm("loc_6DB1B50: mov _data_6DB67E4,%eax;");
    asm("loc_6DB1B55: mov %eax,_data_6DBC60C;");
    asm("loc_6DB1B5A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1B60() // _sub_6DB1B60
{
    __DEBUG_ASM(6DB1B60);
    // chunk 0x6DB1B60 _sub_6DB1B60
    asm("loc_6DB1B60: mov 8(%esp),%eax;");
    asm("loc_6DB1B64: push %ebx;");
    asm("loc_6DB1B65: push %esi;");
    asm("loc_6DB1B66: push %edi;");
    asm("loc_6DB1B67: mov %ecx,%edi;");
    asm("loc_6DB1B69: mov 0x10(%esp),%ecx;");
    asm("loc_6DB1B6D: lea 0x10(%edi),%esi;");
    asm("loc_6DB1B70: mov %eax,4(%esi);");
    asm("loc_6DB1B73: mov (%ecx),%edx;");
    asm("loc_6DB1B75: mov %edx,8(%esi);");
    asm("loc_6DB1B78: movl $0,(%esi);");
    asm("loc_6DB1B7E: movl $0,0xC(%esi);");
    asm("loc_6DB1B85: mov 0x14(%edi),%eax;");
    asm("loc_6DB1B88: push %esi;");
    asm("loc_6DB1B89: push %eax;");
    asm("loc_6DB1B8A: lea 0x18(%edi),%ebx;");
    asm("loc_6DB1B8D: push %ebx;");
    asm("loc_6DB1B8E: mov %edi,%ecx;");
    asm("loc_6DB1B90: call _sub_6DA1380;");
    asm("loc_6DB1B95: test %eax,%eax;");
    asm("loc_6DB1B97: mov %eax,0x1C(%edi);");
    asm("loc_6DB1B9A: je loc_6DB1BA7;");
    asm("loc_6DB1B9C: pop %edi;");
    asm("loc_6DB1B9D: pop %esi;");
    asm("loc_6DB1B9E: mov $0x16,%eax;");
    asm("loc_6DB1BA3: pop %ebx;");
    asm("loc_6DB1BA4: ret $0xC;");
    asm("loc_6DB1BA7: mov (%esi),%edx;");
    asm("loc_6DB1BA9: mov 4(%esi),%ecx;");
    asm("loc_6DB1BAC: add $4,%edx;");
    asm("loc_6DB1BAF: mov %edx,%eax;");
    asm("loc_6DB1BB1: cmp %ecx,%eax;");
    asm("loc_6DB1BB3: mov %edx,(%esi);");
    asm("loc_6DB1BB5: jbe loc_6DB1BBE;");
    asm("loc_6DB1BB7: movl $0x16,0xC(%esi);");
    asm("loc_6DB1BBE: mov 0x1C(%edi),%eax;");
    asm("loc_6DB1BC1: test %eax,%eax;");
    asm("loc_6DB1BC3: je loc_6DB1BD0;");
    asm("loc_6DB1BC5: pop %edi;");
    asm("loc_6DB1BC6: pop %esi;");
    asm("loc_6DB1BC7: mov $0x16,%eax;");
    asm("loc_6DB1BCC: pop %ebx;");
    asm("loc_6DB1BCD: ret $0xC;");
    asm("loc_6DB1BD0: mov (%ebx),%eax;");
    asm("loc_6DB1BD2: mov 0x20(%edi),%ecx;");
    asm("loc_6DB1BD5: mov %ecx,(%eax);");
    asm("loc_6DB1BD7: add $4,%eax;");
    asm("loc_6DB1BDA: mov %eax,(%ebx);");
    asm("loc_6DB1BDC: mov (%esi),%edx;");
    asm("loc_6DB1BDE: mov 4(%esi),%ecx;");
    asm("loc_6DB1BE1: inc %edx;");
    asm("loc_6DB1BE2: mov %edx,%eax;");
    asm("loc_6DB1BE4: cmp %ecx,%eax;");
    asm("loc_6DB1BE6: mov %edx,(%esi);");
    asm("loc_6DB1BE8: jbe loc_6DB1BF1;");
    asm("loc_6DB1BEA: movl $0x16,0xC(%esi);");
    asm("loc_6DB1BF1: mov 0x1C(%edi),%eax;");
    asm("loc_6DB1BF4: test %eax,%eax;");
    asm("loc_6DB1BF6: je loc_6DB1C03;");
    asm("loc_6DB1BF8: pop %edi;");
    asm("loc_6DB1BF9: pop %esi;");
    asm("loc_6DB1BFA: mov $0x16,%eax;");
    asm("loc_6DB1BFF: pop %ebx;");
    asm("loc_6DB1C00: ret $0xC;");
    asm("loc_6DB1C03: mov (%ebx),%eax;");
    asm("loc_6DB1C05: mov 0x24(%edi),%dl;");
    asm("loc_6DB1C08: mov %dl,(%eax);");
    asm("loc_6DB1C0A: inc %eax;");
    asm("loc_6DB1C0B: mov %eax,(%ebx);");
    asm("loc_6DB1C0D: mov (%esi),%edx;");
    asm("loc_6DB1C0F: mov 4(%esi),%ecx;");
    asm("loc_6DB1C12: inc %edx;");
    asm("loc_6DB1C13: mov %edx,%eax;");
    asm("loc_6DB1C15: cmp %ecx,%eax;");
    asm("loc_6DB1C17: mov %edx,(%esi);");
    asm("loc_6DB1C19: jbe loc_6DB1C22;");
    asm("loc_6DB1C1B: movl $0x16,0xC(%esi);");
    asm("loc_6DB1C22: mov 0x1C(%edi),%eax;");
    asm("loc_6DB1C25: test %eax,%eax;");
    asm("loc_6DB1C27: je loc_6DB1C34;");
    asm("loc_6DB1C29: pop %edi;");
    asm("loc_6DB1C2A: pop %esi;");
    asm("loc_6DB1C2B: mov $0x16,%eax;");
    asm("loc_6DB1C30: pop %ebx;");
    asm("loc_6DB1C31: ret $0xC;");
    asm("loc_6DB1C34: mov (%ebx),%eax;");
    asm("loc_6DB1C36: mov 0x25(%edi),%cl;");
    asm("loc_6DB1C39: mov %cl,(%eax);");
    asm("loc_6DB1C3B: mov 0x14(%edi),%edx;");
    asm("loc_6DB1C3E: push %esi;");
    asm("loc_6DB1C3F: push %edx;");
    asm("loc_6DB1C40: inc %eax;");
    asm("loc_6DB1C41: push %ebx;");
    asm("loc_6DB1C42: mov %edi,%ecx;");
    asm("loc_6DB1C44: mov %eax,(%ebx);");
    asm("loc_6DB1C46: call _sub_6DA13C0;");
    asm("loc_6DB1C4B: test %eax,%eax;");
    asm("loc_6DB1C4D: mov %eax,0x1C(%edi);");
    asm("loc_6DB1C50: je loc_6DB1C5D;");
    asm("loc_6DB1C52: pop %edi;");
    asm("loc_6DB1C53: pop %esi;");
    asm("loc_6DB1C54: mov $0x16,%eax;");
    asm("loc_6DB1C59: pop %ebx;");
    asm("loc_6DB1C5A: ret $0xC;");
    asm("loc_6DB1C5D: mov (%esi),%eax;");
    asm("loc_6DB1C5F: mov 0x18(%esp),%ecx;");
    asm("loc_6DB1C63: mov %eax,(%ecx);");
    asm("loc_6DB1C65: mov 0xC(%edi),%edx;");
    asm("loc_6DB1C68: push %edx;");
    asm("loc_6DB1C69: call _sub_6DA16B0;");
    asm("loc_6DB1C6E: mov %eax,%ecx;");
    asm("loc_6DB1C70: mov (%ecx),%edi;");
    asm("loc_6DB1C72: mov 0x18(%ecx),%edx;");
    asm("loc_6DB1C75: add $4,%esp;");
    asm("loc_6DB1C78: inc %edi;");
    asm("loc_6DB1C79: mov %edi,(%ecx);");
    asm("loc_6DB1C7B: mov (%esi),%eax;");
    asm("loc_6DB1C7D: add %eax,%edx;");
    asm("loc_6DB1C7F: mov 0x10(%ecx),%eax;");
    asm("loc_6DB1C82: mov %edx,0x18(%ecx);");
    asm("loc_6DB1C85: mov (%esi),%esi;");
    asm("loc_6DB1C87: cmp %eax,%esi;");
    asm("loc_6DB1C89: jbe loc_6DB1C8E;");
    asm("loc_6DB1C8B: mov %esi,0x10(%ecx);");
    asm("loc_6DB1C8E: mov 0x18(%ecx),%eax;");
    asm("loc_6DB1C91: xor %edx,%edx;");
    asm("loc_6DB1C93: div %edi;");
    asm("loc_6DB1C95: pop %edi;");
    asm("loc_6DB1C96: pop %esi;");
    asm("loc_6DB1C97: pop %ebx;");
    asm("loc_6DB1C98: mov %eax,8(%ecx);");
    asm("loc_6DB1C9B: xor %eax,%eax;");
    asm("loc_6DB1C9D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1CA0() // _sub_6DB1CA0
{
    __DEBUG_ASM(6DB1CA0);
    // chunk 0x6DB1CA0 _sub_6DB1CA0
    asm("loc_6DB1CA0: mov _data_6DB67EC,%eax;");
    asm("loc_6DB1CA5: mov %eax,_data_6DBC620;");
    asm("loc_6DB1CAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1CB0() // _sub_6DB1CB0
{
    __DEBUG_ASM(6DB1CB0);
    // chunk 0x6DB1CB0 _sub_6DB1CB0
    asm("loc_6DB1CB0: mov _data_6DB67EC,%eax;");
    asm("loc_6DB1CB5: mov %eax,_data_6DBC624;");
    asm("loc_6DB1CBA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1CC0() // _sub_6DB1CC0
{
    __DEBUG_ASM(6DB1CC0);
    // chunk 0x6DB1CC0 _sub_6DB1CC0
    asm("loc_6DB1CC0: mov _data_6DB67F0,%eax;");
    asm("loc_6DB1CC5: mov %eax,_data_6DBC61C;");
    asm("loc_6DB1CCA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1CD0() // _sub_6DB1CD0
{
    __DEBUG_ASM(6DB1CD0);
    // chunk 0x6DB1CD0 _sub_6DB1CD0
    asm("loc_6DB1CD0: mov 8(%esp),%eax;");
    asm("loc_6DB1CD4: push %ebx;");
    asm("loc_6DB1CD5: push %esi;");
    asm("loc_6DB1CD6: push %edi;");
    asm("loc_6DB1CD7: mov %ecx,%edi;");
    asm("loc_6DB1CD9: mov 0x10(%esp),%ecx;");
    asm("loc_6DB1CDD: lea 0x10(%edi),%esi;");
    asm("loc_6DB1CE0: mov %eax,4(%esi);");
    asm("loc_6DB1CE3: mov (%ecx),%edx;");
    asm("loc_6DB1CE5: mov %edx,8(%esi);");
    asm("loc_6DB1CE8: movl $0,(%esi);");
    asm("loc_6DB1CEE: movl $0,0xC(%esi);");
    asm("loc_6DB1CF5: mov 0x14(%edi),%eax;");
    asm("loc_6DB1CF8: push %esi;");
    asm("loc_6DB1CF9: push %eax;");
    asm("loc_6DB1CFA: lea 0x18(%edi),%ebx;");
    asm("loc_6DB1CFD: push %ebx;");
    asm("loc_6DB1CFE: mov %edi,%ecx;");
    asm("loc_6DB1D00: call _sub_6DA1380;");
    asm("loc_6DB1D05: test %eax,%eax;");
    asm("loc_6DB1D07: mov %eax,0x1C(%edi);");
    asm("loc_6DB1D0A: je loc_6DB1D17;");
    asm("loc_6DB1D0C: pop %edi;");
    asm("loc_6DB1D0D: pop %esi;");
    asm("loc_6DB1D0E: mov $0x16,%eax;");
    asm("loc_6DB1D13: pop %ebx;");
    asm("loc_6DB1D14: ret $0xC;");
    asm("loc_6DB1D17: mov (%esi),%edx;");
    asm("loc_6DB1D19: mov 4(%esi),%ecx;");
    asm("loc_6DB1D1C: add $4,%edx;");
    asm("loc_6DB1D1F: mov %edx,%eax;");
    asm("loc_6DB1D21: cmp %ecx,%eax;");
    asm("loc_6DB1D23: mov %edx,(%esi);");
    asm("loc_6DB1D25: jbe loc_6DB1D2E;");
    asm("loc_6DB1D27: movl $0x16,0xC(%esi);");
    asm("loc_6DB1D2E: mov 0x1C(%edi),%eax;");
    asm("loc_6DB1D31: test %eax,%eax;");
    asm("loc_6DB1D33: je loc_6DB1D40;");
    asm("loc_6DB1D35: pop %edi;");
    asm("loc_6DB1D36: pop %esi;");
    asm("loc_6DB1D37: mov $0x16,%eax;");
    asm("loc_6DB1D3C: pop %ebx;");
    asm("loc_6DB1D3D: ret $0xC;");
    asm("loc_6DB1D40: mov (%ebx),%eax;");
    asm("loc_6DB1D42: flds 0x20(%edi);");
    asm("loc_6DB1D45: fstps (%eax);");
    asm("loc_6DB1D47: mov 0x14(%edi),%ecx;");
    asm("loc_6DB1D4A: push %esi;");
    asm("loc_6DB1D4B: push %ecx;");
    asm("loc_6DB1D4C: add $4,%eax;");
    asm("loc_6DB1D4F: push %ebx;");
    asm("loc_6DB1D50: mov %edi,%ecx;");
    asm("loc_6DB1D52: mov %eax,(%ebx);");
    asm("loc_6DB1D54: call _sub_6DA13C0;");
    asm("loc_6DB1D59: test %eax,%eax;");
    asm("loc_6DB1D5B: mov %eax,0x1C(%edi);");
    asm("loc_6DB1D5E: je loc_6DB1D6B;");
    asm("loc_6DB1D60: pop %edi;");
    asm("loc_6DB1D61: pop %esi;");
    asm("loc_6DB1D62: mov $0x16,%eax;");
    asm("loc_6DB1D67: pop %ebx;");
    asm("loc_6DB1D68: ret $0xC;");
    asm("loc_6DB1D6B: mov (%esi),%edx;");
    asm("loc_6DB1D6D: mov 0x18(%esp),%eax;");
    asm("loc_6DB1D71: mov %edx,(%eax);");
    asm("loc_6DB1D73: mov 0xC(%edi),%ecx;");
    asm("loc_6DB1D76: push %ecx;");
    asm("loc_6DB1D77: call _sub_6DA16B0;");
    asm("loc_6DB1D7C: mov %eax,%ecx;");
    asm("loc_6DB1D7E: mov (%ecx),%eax;");
    asm("loc_6DB1D80: mov 0x18(%ecx),%ebx;");
    asm("loc_6DB1D83: add $4,%esp;");
    asm("loc_6DB1D86: inc %eax;");
    asm("loc_6DB1D87: mov %eax,(%ecx);");
    asm("loc_6DB1D89: mov (%esi),%edx;");
    asm("loc_6DB1D8B: add %edx,%ebx;");
    asm("loc_6DB1D8D: mov %eax,%edi;");
    asm("loc_6DB1D8F: mov 0x10(%ecx),%eax;");
    asm("loc_6DB1D92: mov %ebx,0x18(%ecx);");
    asm("loc_6DB1D95: mov (%esi),%esi;");
    asm("loc_6DB1D97: cmp %eax,%esi;");
    asm("loc_6DB1D99: jbe loc_6DB1D9E;");
    asm("loc_6DB1D9B: mov %esi,0x10(%ecx);");
    asm("loc_6DB1D9E: mov 0x18(%ecx),%eax;");
    asm("loc_6DB1DA1: xor %edx,%edx;");
    asm("loc_6DB1DA3: div %edi;");
    asm("loc_6DB1DA5: pop %edi;");
    asm("loc_6DB1DA6: pop %esi;");
    asm("loc_6DB1DA7: pop %ebx;");
    asm("loc_6DB1DA8: mov %eax,8(%ecx);");
    asm("loc_6DB1DAB: xor %eax,%eax;");
    asm("loc_6DB1DAD: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1DB0() // ?CleanUp@CostumeHint@@UAEXPAE@Z
{
    __DEBUG_ASM(6DB1DB0);
    // chunk 0x6DB1DB0 _sub_6DB1DB0
    asm("loc_6DB1DB0: jmpl *_import_6DB300C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1DB6() // ?UnSerialize@CostumeHint@@UAEXPAEI@Z
{
    __DEBUG_ASM(6DB1DB6);
    // chunk 0x6DB1DB6 _sub_6DB1DB6
    asm("loc_6DB1DB6: jmpl *_import_6DB3010;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1DBC() // ?Serialize@CostumeHint@@UAEIPAPAE@Z
{
    __DEBUG_ASM(6DB1DBC);
    // chunk 0x6DB1DBC _sub_6DB1DBC
    asm("loc_6DB1DBC: jmpl *_import_6DB3014;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1DC2() // _sub_6DB1DC2
{
    __DEBUG_ASM(6DB1DC2);
    // chunk 0x6DB1DC2 _sub_6DB1DC2
    asm("loc_6DB1DC2: pushl 4(%esp);");
    asm("loc_6DB1DC6: call _sub_6DB20E4;");
    asm("loc_6DB1DCB: pop %ecx;");
    asm("loc_6DB1DCC: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1DD0() // _purecall
{
    __DEBUG_ASM(6DB1DD0);
    // chunk 0x6DB1DD0 _sub_6DB1DD0
    asm("loc_6DB1DD0: jmpl *_import_6DB3200;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1DD6() // ??_M@YGXPAXIHP6EX0@Z@Z
{
    __DEBUG_ASM(6DB1DD6);
    // chunk 0x6DB1DD6 _sub_6DB1DD6
    asm("loc_6DB1DD6: push %ebp;");
    asm("loc_6DB1DD7: mov %esp,%ebp;");
    asm("loc_6DB1DD9: push $0xFFFFFFFF;");
    asm("loc_6DB1DDB: push $_data_6DB67F8;");
    asm("loc_6DB1DE0: push $_sub_6DB20EA;");
    asm("loc_6DB1DE5: mov %fs:0,%eax;");
    asm("loc_6DB1DEB: push %eax;");
    asm("loc_6DB1DEC: mov %esp,%fs:0;");
    asm("loc_6DB1DF3: sub $0xC,%esp;");
    asm("loc_6DB1DF6: push %ebx;");
    asm("loc_6DB1DF7: push %esi;");
    asm("loc_6DB1DF8: push %edi;");
    asm("loc_6DB1DF9: andl $0,-0x1C(%ebp);");
    asm("loc_6DB1DFD: mov 0xC(%ebp),%esi;");
    asm("loc_6DB1E00: mov %esi,%eax;");
    asm("loc_6DB1E02: imul 0x10(%ebp),%eax;");
    asm("loc_6DB1E06: add %eax,8(%ebp);");
    asm("loc_6DB1E09: andl $0,-4(%ebp);");
    asm("loc_6DB1E0D: decl 0x10(%ebp);");
    asm("loc_6DB1E10: js loc_6DB1E1D;");
    asm("loc_6DB1E12: sub %esi,8(%ebp);");
    asm("loc_6DB1E15: mov 8(%ebp),%ecx;");
    asm("loc_6DB1E18: calll *0x14(%ebp);");
    asm("loc_6DB1E1B: jmp loc_6DB1E0D;");
    asm("loc_6DB1E1D: movl $1,-0x1C(%ebp);");
    asm("loc_6DB1E24: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_6DB1E28: call loc_6DB1E3E;");
    asm("loc_6DB1E2D: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB1E30: mov %ecx,%fs:0;");
    asm("loc_6DB1E37: pop %edi;");
    asm("loc_6DB1E38: pop %esi;");
    asm("loc_6DB1E39: pop %ebx;");
    asm("loc_6DB1E3A: leave;");
    asm("loc_6DB1E3B: ret $0x10;");
    asm("loc_6DB1E3E: cmpl $0,-0x1C(%ebp);");
    asm("loc_6DB1E42: jne loc_6DB1E55;");
    asm("loc_6DB1E44: pushl 0x14(%ebp);");
    asm("loc_6DB1E47: pushl 0x10(%ebp);");
    asm("loc_6DB1E4A: pushl 0xC(%ebp);");
    asm("loc_6DB1E4D: pushl 8(%ebp);");
    asm("loc_6DB1E50: call _sub_6DB1E56;");
    asm("loc_6DB1E55: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1E56() // ?__ArrayUnwind@@YGXPAXIHP6EX0@Z@Z
{
    __DEBUG_ASM(6DB1E56);
    // chunk 0x6DB1E56 _sub_6DB1E56
    asm("loc_6DB1E56: push %ebp;");
    asm("loc_6DB1E57: mov %esp,%ebp;");
    asm("loc_6DB1E59: push $0xFFFFFFFF;");
    asm("loc_6DB1E5B: push $_data_6DB6808;");
    asm("loc_6DB1E60: push $_sub_6DB20EA;");
    asm("loc_6DB1E65: mov %fs:0,%eax;");
    asm("loc_6DB1E6B: push %eax;");
    asm("loc_6DB1E6C: mov %esp,%fs:0;");
    asm("loc_6DB1E73: push %ecx;");
    asm("loc_6DB1E74: push %ecx;");
    asm("loc_6DB1E75: push %ebx;");
    asm("loc_6DB1E76: push %esi;");
    asm("loc_6DB1E77: push %edi;");
    asm("loc_6DB1E78: mov %esp,-0x18(%ebp);");
    asm("loc_6DB1E7B: andl $0,-4(%ebp);");
    asm("loc_6DB1E7F: decl 0x10(%ebp);");
    asm("loc_6DB1E82: js loc_6DB1E9F;");
    asm("loc_6DB1E84: mov 8(%ebp),%ecx;");
    asm("loc_6DB1E87: sub 0xC(%ebp),%ecx;");
    asm("loc_6DB1E8A: mov %ecx,8(%ebp);");
    asm("loc_6DB1E8D: calll *0x14(%ebp);");
    asm("loc_6DB1E90: jmp loc_6DB1E7F;");
    asm("loc_6DB1E92: pushl -0x14(%ebp);");
    asm("loc_6DB1E95: call _sub_6DB1EB4;");
    asm("loc_6DB1E9A: pop %ecx;");
    asm("loc_6DB1E9B: ret;");
    asm("loc_6DB1E9C: mov -0x18(%ebp),%esp;");
    asm("loc_6DB1E9F: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_6DB1EA3: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB1EA6: mov %ecx,%fs:0;");
    asm("loc_6DB1EAD: pop %edi;");
    asm("loc_6DB1EAE: pop %esi;");
    asm("loc_6DB1EAF: pop %ebx;");
    asm("loc_6DB1EB0: leave;");
    asm("loc_6DB1EB1: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1EB4() // _unknown_libname_3
{
    __DEBUG_ASM(6DB1EB4);
    // chunk 0x6DB1EB4 _sub_6DB1EB4
    asm("loc_6DB1EB4: mov 4(%esp),%eax;");
    asm("loc_6DB1EB8: mov (%eax),%eax;");
    asm("loc_6DB1EBA: cmpl $0xE06D7363,(%eax);");
    asm("loc_6DB1EC0: je loc_6DB1EC5;");
    asm("loc_6DB1EC2: xor %eax,%eax;");
    asm("loc_6DB1EC4: ret;");
    asm("loc_6DB1EC5: jmp _sub_6DB20F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1ECA() // ??_L@YGXPAXIHP6EX0@Z1@Z
{
    __DEBUG_ASM(6DB1ECA);
    // chunk 0x6DB1ECA _sub_6DB1ECA
    asm("loc_6DB1ECA: push %ebp;");
    asm("loc_6DB1ECB: mov %esp,%ebp;");
    asm("loc_6DB1ECD: push $0xFFFFFFFF;");
    asm("loc_6DB1ECF: push $_data_6DB6818;");
    asm("loc_6DB1ED4: push $_sub_6DB20EA;");
    asm("loc_6DB1ED9: mov %fs:0,%eax;");
    asm("loc_6DB1EDF: push %eax;");
    asm("loc_6DB1EE0: mov %esp,%fs:0;");
    asm("loc_6DB1EE7: sub $0x10,%esp;");
    asm("loc_6DB1EEA: push %ebx;");
    asm("loc_6DB1EEB: push %esi;");
    asm("loc_6DB1EEC: push %edi;");
    asm("loc_6DB1EED: xor %eax,%eax;");
    asm("loc_6DB1EEF: mov %eax,-0x20(%ebp);");
    asm("loc_6DB1EF2: mov %eax,-4(%ebp);");
    asm("loc_6DB1EF5: mov %eax,-0x1C(%ebp);");
    asm("loc_6DB1EF8: mov -0x1C(%ebp),%eax;");
    asm("loc_6DB1EFB: cmp 0x10(%ebp),%eax;");
    asm("loc_6DB1EFE: jge loc_6DB1F13;");
    asm("loc_6DB1F00: mov 8(%ebp),%esi;");
    asm("loc_6DB1F03: mov %esi,%ecx;");
    asm("loc_6DB1F05: calll *0x14(%ebp);");
    asm("loc_6DB1F08: add 0xC(%ebp),%esi;");
    asm("loc_6DB1F0B: mov %esi,8(%ebp);");
    asm("loc_6DB1F0E: incl -0x1C(%ebp);");
    asm("loc_6DB1F11: jmp loc_6DB1EF8;");
    asm("loc_6DB1F13: movl $1,-0x20(%ebp);");
    asm("loc_6DB1F1A: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_6DB1F1E: call loc_6DB1F34;");
    asm("loc_6DB1F23: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB1F26: mov %ecx,%fs:0;");
    asm("loc_6DB1F2D: pop %edi;");
    asm("loc_6DB1F2E: pop %esi;");
    asm("loc_6DB1F2F: pop %ebx;");
    asm("loc_6DB1F30: leave;");
    asm("loc_6DB1F31: ret $0x14;");
    asm("loc_6DB1F34: cmpl $0,-0x20(%ebp);");
    asm("loc_6DB1F38: jne loc_6DB1F4B;");
    asm("loc_6DB1F3A: pushl 0x18(%ebp);");
    asm("loc_6DB1F3D: pushl -0x1C(%ebp);");
    asm("loc_6DB1F40: pushl 0xC(%ebp);");
    asm("loc_6DB1F43: pushl 8(%ebp);");
    asm("loc_6DB1F46: call _sub_6DB1E56;");
    asm("loc_6DB1F4B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1F4C() // __onexit
{
    __DEBUG_ASM(6DB1F4C);
    // chunk 0x6DB1F4C _sub_6DB1F4C
    asm("loc_6DB1F4C: cmpl $0xFFFFFFFF,_data_6DBC63C;");
    asm("loc_6DB1F53: jne loc_6DB1F61;");
    asm("loc_6DB1F55: pushl 4(%esp);");
    asm("loc_6DB1F59: calll *_import_6DB31D4;");
    asm("loc_6DB1F5F: pop %ecx;");
    asm("loc_6DB1F60: ret;");
    asm("loc_6DB1F61: push $_data_6DBC638;");
    asm("loc_6DB1F66: push $_data_6DBC63C;");
    asm("loc_6DB1F6B: pushl 0xC(%esp);");
    asm("loc_6DB1F6F: call _sub_6DB20F6;");
    asm("loc_6DB1F74: add $0xC,%esp;");
    asm("loc_6DB1F77: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1F78() // _atexit
{
    __DEBUG_ASM(6DB1F78);
    // chunk 0x6DB1F78 _sub_6DB1F78
    asm("loc_6DB1F78: pushl 4(%esp);");
    asm("loc_6DB1F7C: call _sub_6DB1F4C;");
    asm("loc_6DB1F81: neg %eax;");
    asm("loc_6DB1F83: sbb %eax,%eax;");
    asm("loc_6DB1F85: pop %ecx;");
    asm("loc_6DB1F86: neg %eax;");
    asm("loc_6DB1F88: dec %eax;");
    asm("loc_6DB1F89: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1F8A() // ??2@YAPAXI@Z
{
    __DEBUG_ASM(6DB1F8A);
    // chunk 0x6DB1F8A _sub_6DB1F8A
    asm("loc_6DB1F8A: jmpl *_import_6DB31F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1F90() // __CxxFrameHandler
{
    __DEBUG_ASM(6DB1F90);
    // chunk 0x6DB1F90 _sub_6DB1F90
    asm("loc_6DB1F90: jmpl *_import_6DB31F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB1F96() // __CRT_INIT@12
{
    __DEBUG_ASM(6DB1F96);
    // chunk 0x6DB1F96 _sub_6DB1F96
    asm("loc_6DB1F96: mov 8(%esp),%eax;");
    asm("loc_6DB1F9A: test %eax,%eax;");
    asm("loc_6DB1F9C: jne loc_6DB1FAC;");
    asm("loc_6DB1F9E: cmp %eax,_data_6DBC62C;");
    asm("loc_6DB1FA4: jle loc_6DB1FD4;");
    asm("loc_6DB1FA6: decl _data_6DBC62C;");
    asm("loc_6DB1FAC: mov _import_6DB31B8,%ecx;");
    asm("loc_6DB1FB2: cmp $1,%eax;");
    asm("loc_6DB1FB5: mov (%ecx),%ecx;");
    asm("loc_6DB1FB7: mov %ecx,_data_6DBC630;");
    asm("loc_6DB1FBD: jne loc_6DB1FFE;");
    asm("loc_6DB1FBF: push $0x80;");
    asm("loc_6DB1FC4: calll *_import_6DB31C4;");
    asm("loc_6DB1FCA: test %eax,%eax;");
    asm("loc_6DB1FCC: pop %ecx;");
    asm("loc_6DB1FCD: mov %eax,_data_6DBC63C;");
    asm("loc_6DB1FD2: jne loc_6DB1FD8;");
    asm("loc_6DB1FD4: xor %eax,%eax;");
    asm("loc_6DB1FD6: jmp loc_6DB203E;");
    asm("loc_6DB1FD8: andl $0,(%eax);");
    asm("loc_6DB1FDB: mov _data_6DBC63C,%eax;");
    asm("loc_6DB1FE0: push $_data_6DBB764;");
    asm("loc_6DB1FE5: push $_data_6DBB000;");
    asm("loc_6DB1FEA: mov %eax,_data_6DBC638;");
    asm("loc_6DB1FEF: call _sub_6DB20FC;");
    asm("loc_6DB1FF4: incl _data_6DBC62C;");
    asm("loc_6DB1FFA: pop %ecx;");
    asm("loc_6DB1FFB: pop %ecx;");
    asm("loc_6DB1FFC: jmp loc_6DB203B;");
    asm("loc_6DB1FFE: test %eax,%eax;");
    asm("loc_6DB2000: jne loc_6DB203B;");
    asm("loc_6DB2002: mov _data_6DBC63C,%eax;");
    asm("loc_6DB2007: test %eax,%eax;");
    asm("loc_6DB2009: je loc_6DB203B;");
    asm("loc_6DB200B: mov _data_6DBC638,%ecx;");
    asm("loc_6DB2011: push %esi;");
    asm("loc_6DB2012: lea -4(%ecx),%esi;");
    asm("loc_6DB2015: cmp %eax,%esi;");
    asm("loc_6DB2017: jb loc_6DB202B;");
    asm("loc_6DB2019: mov (%esi),%ecx;");
    asm("loc_6DB201B: test %ecx,%ecx;");
    asm("loc_6DB201D: je loc_6DB2026;");
    asm("loc_6DB201F: call *%ecx;");
    asm("loc_6DB2021: mov _data_6DBC63C,%eax;");
    asm("loc_6DB2026: sub $4,%esi;");
    asm("loc_6DB2029: jmp loc_6DB2015;");
    asm("loc_6DB202B: push %eax;");
    asm("loc_6DB202C: calll *_import_6DB31C0;");
    asm("loc_6DB2032: andl $0,_data_6DBC63C;");
    asm("loc_6DB2039: pop %ecx;");
    asm("loc_6DB203A: pop %esi;");
    asm("loc_6DB203B: push $1;");
    asm("loc_6DB203D: pop %eax;");
    asm("loc_6DB203E: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2041() // _DllEntryPoint
{
    __DEBUG_ASM(6DB2041);
    // chunk 0x6DB2041 _sub_6DB2041
    asm("loc_6DB2041: push %ebp;");
    asm("loc_6DB2042: mov %esp,%ebp;");
    asm("loc_6DB2044: push %ebx;");
    asm("loc_6DB2045: mov 8(%ebp),%ebx;");
    asm("loc_6DB2048: push %esi;");
    asm("loc_6DB2049: mov 0xC(%ebp),%esi;");
    asm("loc_6DB204C: push %edi;");
    asm("loc_6DB204D: mov 0x10(%ebp),%edi;");
    asm("loc_6DB2050: test %esi,%esi;");
    asm("loc_6DB2052: jne loc_6DB205D;");
    asm("loc_6DB2054: cmpl $0,_data_6DBC62C;");
    asm("loc_6DB205B: jmp loc_6DB2083;");
    asm("loc_6DB205D: cmp $1,%esi;");
    asm("loc_6DB2060: je loc_6DB2067;");
    asm("loc_6DB2062: cmp $2,%esi;");
    asm("loc_6DB2065: jne loc_6DB2089;");
    asm("loc_6DB2067: mov _data_6DBC634,%eax;");
    asm("loc_6DB206C: test %eax,%eax;");
    asm("loc_6DB206E: je loc_6DB2079;");
    asm("loc_6DB2070: push %edi;");
    asm("loc_6DB2071: push %esi;");
    asm("loc_6DB2072: push %ebx;");
    asm("loc_6DB2073: call *%eax;");
    asm("loc_6DB2075: test %eax,%eax;");
    asm("loc_6DB2077: je loc_6DB2085;");
    asm("loc_6DB2079: push %edi;");
    asm("loc_6DB207A: push %esi;");
    asm("loc_6DB207B: push %ebx;");
    asm("loc_6DB207C: call _sub_6DB1F96;");
    asm("loc_6DB2081: test %eax,%eax;");
    asm("loc_6DB2083: jne loc_6DB2089;");
    asm("loc_6DB2085: xor %eax,%eax;");
    asm("loc_6DB2087: jmp loc_6DB20D7;");
    asm("loc_6DB2089: push %edi;");
    asm("loc_6DB208A: push %esi;");
    asm("loc_6DB208B: push %ebx;");
    asm("loc_6DB208C: call _sub_6D8ED90;");
    asm("loc_6DB2091: cmp $1,%esi;");
    asm("loc_6DB2094: mov %eax,0xC(%ebp);");
    asm("loc_6DB2097: jne loc_6DB20A5;");
    asm("loc_6DB2099: test %eax,%eax;");
    asm("loc_6DB209B: jne loc_6DB20D4;");
    asm("loc_6DB209D: push %edi;");
    asm("loc_6DB209E: push %eax;");
    asm("loc_6DB209F: push %ebx;");
    asm("loc_6DB20A0: call _sub_6DB1F96;");
    asm("loc_6DB20A5: test %esi,%esi;");
    asm("loc_6DB20A7: je loc_6DB20AE;");
    asm("loc_6DB20A9: cmp $3,%esi;");
    asm("loc_6DB20AC: jne loc_6DB20D4;");
    asm("loc_6DB20AE: push %edi;");
    asm("loc_6DB20AF: push %esi;");
    asm("loc_6DB20B0: push %ebx;");
    asm("loc_6DB20B1: call _sub_6DB1F96;");
    asm("loc_6DB20B6: test %eax,%eax;");
    asm("loc_6DB20B8: jne loc_6DB20BD;");
    asm("loc_6DB20BA: and %eax,0xC(%ebp);");
    asm("loc_6DB20BD: cmpl $0,0xC(%ebp);");
    asm("loc_6DB20C1: je loc_6DB20D4;");
    asm("loc_6DB20C3: mov _data_6DBC634,%eax;");
    asm("loc_6DB20C8: test %eax,%eax;");
    asm("loc_6DB20CA: je loc_6DB20D4;");
    asm("loc_6DB20CC: push %edi;");
    asm("loc_6DB20CD: push %esi;");
    asm("loc_6DB20CE: push %ebx;");
    asm("loc_6DB20CF: call *%eax;");
    asm("loc_6DB20D1: mov %eax,0xC(%ebp);");
    asm("loc_6DB20D4: mov 0xC(%ebp),%eax;");
    asm("loc_6DB20D7: pop %edi;");
    asm("loc_6DB20D8: pop %esi;");
    asm("loc_6DB20D9: pop %ebx;");
    asm("loc_6DB20DA: pop %ebp;");
    asm("loc_6DB20DB: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB20DE() // _ftol
{
    __DEBUG_ASM(6DB20DE);
    // chunk 0x6DB20DE _sub_6DB20DE
    asm("loc_6DB20DE: jmpl *_import_6DB31BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB20E4() // _free
{
    __DEBUG_ASM(6DB20E4);
    // chunk 0x6DB20E4 _sub_6DB20E4
    asm("loc_6DB20E4: jmpl *_import_6DB31C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB20EA() // _except_handler3
{
    __DEBUG_ASM(6DB20EA);
    // chunk 0x6DB20EA _sub_6DB20EA
    asm("loc_6DB20EA: jmpl *_import_6DB31C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB20F0() // ?terminate@@YAXXZ
{
    __DEBUG_ASM(6DB20F0);
    // chunk 0x6DB20F0 _sub_6DB20F0
    asm("loc_6DB20F0: jmpl *_import_6DB31CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB20F6() // __dllonexit
{
    __DEBUG_ASM(6DB20F6);
    // chunk 0x6DB20F6 _sub_6DB20F6
    asm("loc_6DB20F6: jmpl *_import_6DB31D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB20FC() // _initterm
{
    __DEBUG_ASM(6DB20FC);
    // chunk 0x6DB20FC _sub_6DB20FC
    asm("loc_6DB20FC: jmpl *_import_6DB31D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2110() // _sub_6DB2110
{
    __DEBUG_ASM(6DB2110);
    // chunk 0x6DB2110 _sub_6DB2110
    asm("loc_6DB2110: mov -0x21C(%ebp),%eax;");
    asm("loc_6DB2116: push %eax;");
    asm("loc_6DB2117: call _sub_6DB1DC2;");
    asm("loc_6DB211C: pop %ecx;");
    asm("loc_6DB211D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB211E() // _sub_6DB211E
{
    __DEBUG_ASM(6DB211E);
    // chunk 0x6DB211E _sub_6DB211E
    asm("loc_6DB211E: lea -0x1C8(%ebp),%ecx;");
    asm("loc_6DB2124: jmpl *_import_6DB3094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB212A() // _sub_6DB212A
{
    __DEBUG_ASM(6DB212A);
    // chunk 0x6DB212A _sub_6DB212A
    asm("loc_6DB212A: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6DB2130: jmp _sub_6D842B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2135() // _sub_6DB2135
{
    __DEBUG_ASM(6DB2135);
    // chunk 0x6DB2135 _sub_6DB2135
    asm("loc_6DB2135: lea -0x218(%ebp),%ecx;");
    asm("loc_6DB213B: jmp _sub_6D85230;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2140() // _sub_6DB2140
{
    __DEBUG_ASM(6DB2140);
    // chunk 0x6DB2140 _sub_6DB2140
    asm("loc_6DB2140: lea -0x1C8(%ebp),%ecx;");
    asm("loc_6DB2146: jmpl *_import_6DB3094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB214C() // _sub_6DB214C
{
    __DEBUG_ASM(6DB214C);
    // chunk 0x6DB214C _sub_6DB214C
    asm("loc_6DB214C: lea -0x218(%ebp),%ecx;");
    asm("loc_6DB2152: jmp _sub_6D85230;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2157() // _sub_6DB2157
{
    __DEBUG_ASM(6DB2157);
    // chunk 0x6DB2157 _sub_6DB2157
    asm("loc_6DB2157: lea -0x218(%ebp),%ecx;");
    asm("loc_6DB215D: jmpl *_import_6DB3020;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2163() // _sub_6DB2163
{
    __DEBUG_ASM(6DB2163);
    // chunk 0x6DB2163 _sub_6DB2163
    asm("loc_6DB2163: lea -0x21C(%ebp),%ecx;");
    asm("loc_6DB2169: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB216E() // _sub_6DB216E
{
    __DEBUG_ASM(6DB216E);
    // chunk 0x6DB216E _sub_6DB216E
    asm("loc_6DB216E: lea -0x218(%ebp),%ecx;");
    asm("loc_6DB2174: jmpl *_import_6DB3020;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB217A() // _sub_6DB217A
{
    __DEBUG_ASM(6DB217A);
    // chunk 0x6DB217A _sub_6DB217A
    asm("loc_6DB217A: lea -0x21C(%ebp),%ecx;");
    asm("loc_6DB2180: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2185() // _sub_6DB2185
{
    __DEBUG_ASM(6DB2185);
    // chunk 0x6DB2185 _sub_6DB2185
    asm("loc_6DB2185: mov -0x1EC(%ebp),%eax;");
    asm("loc_6DB218B: push %eax;");
    asm("loc_6DB218C: call _sub_6DB1DC2;");
    asm("loc_6DB2191: pop %ecx;");
    asm("loc_6DB2192: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2193() // _sub_6DB2193
{
    __DEBUG_ASM(6DB2193);
    // chunk 0x6DB2193 _sub_6DB2193
    asm("loc_6DB2193: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6DB2199: jmpl *_import_6DB301C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB219F() // _sub_6DB219F
{
    __DEBUG_ASM(6DB219F);
    // chunk 0x6DB219F _sub_6DB219F
    asm("loc_6DB219F: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6DB21A5: jmpl *_import_6DB3094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB21AB() // _sub_6DB21AB
{
    __DEBUG_ASM(6DB21AB);
    // chunk 0x6DB21AB _sub_6DB21AB
    asm("loc_6DB21AB: lea -0x218(%ebp),%ecx;");
    asm("loc_6DB21B1: jmpl *_import_6DB3094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB21B7() // _sub_6DB21B7
{
    __DEBUG_ASM(6DB21B7);
    // chunk 0x6DB21B7 _sub_6DB21B7
    asm("loc_6DB21B7: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6DB21BD: jmp _sub_6D84300;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB21C2() // _sub_6DB21C2
{
    __DEBUG_ASM(6DB21C2);
    // chunk 0x6DB21C2 _sub_6DB21C2
    asm("loc_6DB21C2: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6DB21C8: jmp _sub_6D84310;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB21CD() // _sub_6DB21CD
{
    __DEBUG_ASM(6DB21CD);
    // chunk 0x6DB21CD _sub_6DB21CD
    asm("loc_6DB21CD: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6DB21D3: jmp _sub_6D84320;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB21D8() // _sub_6DB21D8
{
    __DEBUG_ASM(6DB21D8);
    // chunk 0x6DB21D8 _sub_6DB21D8
    asm("loc_6DB21D8: mov -0x1EC(%ebp),%eax;");
    asm("loc_6DB21DE: push %eax;");
    asm("loc_6DB21DF: call _sub_6DB1DC2;");
    asm("loc_6DB21E4: pop %ecx;");
    asm("loc_6DB21E5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB21E6() // _sub_6DB21E6
{
    __DEBUG_ASM(6DB21E6);
    // chunk 0x6DB21E6 _sub_6DB21E6
    asm("loc_6DB21E6: lea -0x1D4(%ebp),%ecx;");
    asm("loc_6DB21EC: jmpl *_import_6DB3094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB21F2() // _sub_6DB21F2
{
    __DEBUG_ASM(6DB21F2);
    // chunk 0x6DB21F2 _sub_6DB21F2
    asm("loc_6DB21F2: lea -0x218(%ebp),%ecx;");
    asm("loc_6DB21F8: jmpl *_import_6DB3020;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB21FE() // _sub_6DB21FE
{
    __DEBUG_ASM(6DB21FE);
    // chunk 0x6DB21FE _sub_6DB21FE
    asm("loc_6DB21FE: lea -0x21C(%ebp),%ecx;");
    asm("loc_6DB2204: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2209() // _sub_6DB2209
{
    __DEBUG_ASM(6DB2209);
    // chunk 0x6DB2209 _sub_6DB2209
    asm("loc_6DB2209: mov $_data_6DBB8A8,%ecx;");
    asm("loc_6DB220E: jmpl *_import_6DB3020;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2214() // _sub_6DB2214
{
    __DEBUG_ASM(6DB2214);
    // chunk 0x6DB2214 _sub_6DB2214
    asm("loc_6DB2214: mov $_data_6DBB8B8,%ecx;");
    asm("loc_6DB2219: jmpl *_import_6DB3018;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB221F() // _sub_6DB221F
{
    __DEBUG_ASM(6DB221F);
    // chunk 0x6DB221F _sub_6DB221F
    asm("loc_6DB221F: lea -0xC8(%ebp),%ecx;");
    asm("loc_6DB2225: jmpl *_import_6DB3094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB222B() // _sub_6DB222B
{
    __DEBUG_ASM(6DB222B);
    // chunk 0x6DB222B _sub_6DB222B
    asm("loc_6DB222B: lea -0xB0(%ebp),%ecx;");
    asm("loc_6DB2231: jmpl *_import_6DB3094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2237() // _sub_6DB2237
{
    __DEBUG_ASM(6DB2237);
    // chunk 0x6DB2237 _sub_6DB2237
    asm("loc_6DB2237: lea -0x218(%ebp),%ecx;");
    asm("loc_6DB223D: jmp _sub_6D84270;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2242() // _sub_6DB2242
{
    __DEBUG_ASM(6DB2242);
    // chunk 0x6DB2242 _sub_6DB2242
    asm("loc_6DB2242: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6DB2248: jmp _sub_6D84290;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB224D() // _sub_6DB224D
{
    __DEBUG_ASM(6DB224D);
    // chunk 0x6DB224D _sub_6DB224D
    asm("loc_6DB224D: lea -0x218(%ebp),%ecx;");
    asm("loc_6DB2253: jmpl *_import_6DB3094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2259() // _sub_6DB2259
{
    __DEBUG_ASM(6DB2259);
    // chunk 0x6DB2259 _sub_6DB2259
    asm("loc_6DB2259: lea -0x1E0(%ebp),%ecx;");
    asm("loc_6DB225F: jmpl *_import_6DB3094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2265() // ?HandlePacket@IServerImpl@@QAEXPAVCDAPacket@@@Z_SEH
{
    __DEBUG_ASM(6DB2265);
    // chunk 0x6DB2265 _sub_6DB2265
    asm("loc_6DB2265: mov $_data_6DB693C,%eax;");
    asm("loc_6DB226A: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2270() // _sub_6DB2270
{
    __DEBUG_ASM(6DB2270);
    // chunk 0x6DB2270 _sub_6DB2270
    asm("loc_6DB2270: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB2273: add $0x70,%ecx;");
    asm("loc_6DB2276: jmpl *_import_6DB3020;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB227C() // _sub_6DB227C
{
    __DEBUG_ASM(6DB227C);
    // chunk 0x6DB227C _sub_6DB227C
    asm("loc_6DB227C: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB227F: add $0x80,%ecx;");
    asm("loc_6DB2285: jmpl *_import_6DB3018;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB228B() // _SEH_6D83DF0
{
    __DEBUG_ASM(6DB228B);
    // chunk 0x6DB228B _sub_6DB228B
    asm("loc_6DB228B: mov $_data_6DB6968,%eax;");
    asm("loc_6DB2290: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB22A0() // _sub_6DB22A0
{
    __DEBUG_ASM(6DB22A0);
    // chunk 0x6DB22A0 _sub_6DB22A0
    asm("loc_6DB22A0: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB22A3: add $0x18,%ecx;");
    asm("loc_6DB22A6: jmpl *_import_6DB3094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB22AC() // _SEH_6D842B0
{
    __DEBUG_ASM(6DB22AC);
    // chunk 0x6DB22AC _sub_6DB22AC
    asm("loc_6DB22AC: mov $_data_6DB698C,%eax;");
    asm("loc_6DB22B1: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB22C0() // _sub_6DB22C0
{
    __DEBUG_ASM(6DB22C0);
    // chunk 0x6DB22C0 _sub_6DB22C0
    asm("loc_6DB22C0: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB22C3: add $0xC,%ecx;");
    asm("loc_6DB22C6: jmpl *_import_6DB3094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB22CC() // _SEH_6D84320
{
    __DEBUG_ASM(6DB22CC);
    // chunk 0x6DB22CC _sub_6DB22CC
    asm("loc_6DB22CC: mov $_data_6DB69DC,%eax;");
    asm("loc_6DB22D1: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2310() // _sub_6DB2310
{
    __DEBUG_ASM(6DB2310);
    // chunk 0x6DB2310 _sub_6DB2310
    asm("loc_6DB2310: lea -0x44(%ebp),%ecx;");
    asm("loc_6DB2313: jmp _sub_6D85340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2318() // _sub_6DB2318
{
    __DEBUG_ASM(6DB2318);
    // chunk 0x6DB2318 _sub_6DB2318
    asm("loc_6DB2318: lea -0x50(%ebp),%ecx;");
    asm("loc_6DB231B: jmp _sub_6D85230;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2320() // _sub_6DB2320
{
    __DEBUG_ASM(6DB2320);
    // chunk 0x6DB2320 _sub_6DB2320
    asm("loc_6DB2320: mov -0x60(%ebp),%eax;");
    asm("loc_6DB2323: push %eax;");
    asm("loc_6DB2324: call _sub_6DB1DC2;");
    asm("loc_6DB2329: pop %ecx;");
    asm("loc_6DB232A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB232B() // _sub_6DB232B
{
    __DEBUG_ASM(6DB232B);
    // chunk 0x6DB232B _sub_6DB232B
    asm("loc_6DB232B: mov -0x60(%ebp),%ecx;");
    asm("loc_6DB232E: add $0x204,%ecx;");
    asm("loc_6DB2334: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB233A() // _sub_6DB233A
{
    __DEBUG_ASM(6DB233A);
    // chunk 0x6DB233A _sub_6DB233A
    asm("loc_6DB233A: mov -0x60(%ebp),%ecx;");
    asm("loc_6DB233D: add $0x214,%ecx;");
    asm("loc_6DB2343: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2349() // _sub_6DB2349
{
    __DEBUG_ASM(6DB2349);
    // chunk 0x6DB2349 _sub_6DB2349
    asm("loc_6DB2349: mov -0x60(%ebp),%ecx;");
    asm("loc_6DB234C: add $0x248,%ecx;");
    asm("loc_6DB2352: jmpl *_import_6DB30A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2358() // _sub_6DB2358
{
    __DEBUG_ASM(6DB2358);
    // chunk 0x6DB2358 _sub_6DB2358
    asm("loc_6DB2358: mov -0x60(%ebp),%ecx;");
    asm("loc_6DB235B: add $0x254,%ecx;");
    asm("loc_6DB2361: jmpl *_import_6DB3018;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2367() // _sub_6DB2367
{
    __DEBUG_ASM(6DB2367);
    // chunk 0x6DB2367 _sub_6DB2367
    asm("loc_6DB2367: mov -0x5C(%ebp),%ecx;");
    asm("loc_6DB236A: add $0x204,%ecx;");
    asm("loc_6DB2370: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2376() // _sub_6DB2376
{
    __DEBUG_ASM(6DB2376);
    // chunk 0x6DB2376 _sub_6DB2376
    asm("loc_6DB2376: mov -0x5C(%ebp),%ecx;");
    asm("loc_6DB2379: add $0x214,%ecx;");
    asm("loc_6DB237F: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2385() // _sub_6DB2385
{
    __DEBUG_ASM(6DB2385);
    // chunk 0x6DB2385 _sub_6DB2385
    asm("loc_6DB2385: mov -0x5C(%ebp),%ecx;");
    asm("loc_6DB2388: add $0x264,%ecx;");
    asm("loc_6DB238E: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2393() // _sub_6DB2393
{
    __DEBUG_ASM(6DB2393);
    // chunk 0x6DB2393 _sub_6DB2393
    asm("loc_6DB2393: mov -0x5C(%ebp),%ecx;");
    asm("loc_6DB2396: add $0x268,%ecx;");
    asm("loc_6DB239C: jmpl *_import_6DB3018;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB23A2() // _sub_6DB23A2
{
    __DEBUG_ASM(6DB23A2);
    // chunk 0x6DB23A2 _sub_6DB23A2
    asm("loc_6DB23A2: lea -0x44(%ebp),%ecx;");
    asm("loc_6DB23A5: jmp _sub_6D852E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB23AA() // ?HandleCharacterInfo@IServerImpl@@QAE_NPAVCDAPCharacterInfo@@PAVIClient@@I@Z_SEH
{
    __DEBUG_ASM(6DB23AA);
    // chunk 0x6DB23AA _sub_6DB23AA
    asm("loc_6DB23AA: mov $_data_6DB6A84,%eax;");
    asm("loc_6DB23AF: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB23C0() // _sub_6DB23C0
{
    __DEBUG_ASM(6DB23C0);
    // chunk 0x6DB23C0 _sub_6DB23C0
    asm("loc_6DB23C0: mov -0x14(%ebp),%ecx;");
    asm("loc_6DB23C3: jmp _sub_6D852E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB23C8() // _sub_6DB23C8
{
    __DEBUG_ASM(6DB23C8);
    // chunk 0x6DB23C8 _sub_6DB23C8
    asm("loc_6DB23C8: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB23CB: add $0x204,%ecx;");
    asm("loc_6DB23D1: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB23D7() // _sub_6DB23D7
{
    __DEBUG_ASM(6DB23D7);
    // chunk 0x6DB23D7 _sub_6DB23D7
    asm("loc_6DB23D7: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB23DA: add $0x214,%ecx;");
    asm("loc_6DB23E0: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB23E6() // _sub_6DB23E6
{
    __DEBUG_ASM(6DB23E6);
    // chunk 0x6DB23E6 _sub_6DB23E6
    asm("loc_6DB23E6: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB23E9: add $0x248,%ecx;");
    asm("loc_6DB23EF: jmpl *_import_6DB30A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB23F5() // _SEH_6D85340
{
    __DEBUG_ASM(6DB23F5);
    // chunk 0x6DB23F5 _sub_6DB23F5
    asm("loc_6DB23F5: mov $_data_6DB6AC0,%eax;");
    asm("loc_6DB23FA: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2400() // _sub_6DB2400
{
    __DEBUG_ASM(6DB2400);
    // chunk 0x6DB2400 _sub_6DB2400
    asm("loc_6DB2400: lea -0x28(%ebp),%ecx;");
    asm("loc_6DB2403: jmpl *_import_6DB301C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2409() // ?HandleDamageObject@IServerImpl@@QAE_NPAVCDAPDamageSpaceObj@@PAVIClient@@I@Z_SEH
{
    __DEBUG_ASM(6DB2409);
    // chunk 0x6DB2409 _sub_6DB2409
    asm("loc_6DB2409: mov $_data_6DB6AE4,%eax;");
    asm("loc_6DB240E: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2420() // _sub_6DB2420
{
    __DEBUG_ASM(6DB2420);
    // chunk 0x6DB2420 _sub_6DB2420
    asm("loc_6DB2420: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB2423: add $0x204,%ecx;");
    asm("loc_6DB2429: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB242F() // _sub_6DB242F
{
    __DEBUG_ASM(6DB242F);
    // chunk 0x6DB242F _sub_6DB242F
    asm("loc_6DB242F: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB2432: add $0x214,%ecx;");
    asm("loc_6DB2438: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB243E() // _sub_6DB243E
{
    __DEBUG_ASM(6DB243E);
    // chunk 0x6DB243E _sub_6DB243E
    asm("loc_6DB243E: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB2441: add $0x248,%ecx;");
    asm("loc_6DB2447: jmpl *_import_6DB30A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB244D() // _SEH_6D855C0
{
    __DEBUG_ASM(6DB244D);
    // chunk 0x6DB244D _sub_6DB244D
    asm("loc_6DB244D: mov $_data_6DB6B54,%eax;");
    asm("loc_6DB2452: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2460() // _unknown_libname_4
{
    __DEBUG_ASM(6DB2460);
    // chunk 0x6DB2460 _sub_6DB2460
    asm("loc_6DB2460: mov -0x10(%ebp),%eax;");
    asm("loc_6DB2463: push %eax;");
    asm("loc_6DB2464: call _sub_6DB1DC2;");
    asm("loc_6DB2469: pop %ecx;");
    asm("loc_6DB246A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB246B() // _sub_6DB246B
{
    __DEBUG_ASM(6DB246B);
    // chunk 0x6DB246B _sub_6DB246B
    asm("loc_6DB246B: mov -0x10(%ebp),%eax;");
    asm("loc_6DB246E: push %eax;");
    asm("loc_6DB246F: call _sub_6DB1DC2;");
    asm("loc_6DB2474: pop %ecx;");
    asm("loc_6DB2475: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2476() // _sub_6DB2476
{
    __DEBUG_ASM(6DB2476);
    // chunk 0x6DB2476 _sub_6DB2476
    asm("loc_6DB2476: mov -0x10(%ebp),%eax;");
    asm("loc_6DB2479: push %eax;");
    asm("loc_6DB247A: call _sub_6DB1DC2;");
    asm("loc_6DB247F: pop %ecx;");
    asm("loc_6DB2480: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2481() // _sub_6DB2481
{
    __DEBUG_ASM(6DB2481);
    // chunk 0x6DB2481 _sub_6DB2481
    asm("loc_6DB2481: mov -0x10(%ebp),%eax;");
    asm("loc_6DB2484: push %eax;");
    asm("loc_6DB2485: call _sub_6DB1DC2;");
    asm("loc_6DB248A: pop %ecx;");
    asm("loc_6DB248B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB248C() // _sub_6DB248C
{
    __DEBUG_ASM(6DB248C);
    // chunk 0x6DB248C _sub_6DB248C
    asm("loc_6DB248C: mov -0x10(%ebp),%eax;");
    asm("loc_6DB248F: push %eax;");
    asm("loc_6DB2490: call _sub_6DB1DC2;");
    asm("loc_6DB2495: pop %ecx;");
    asm("loc_6DB2496: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2497() // _unknown_libname_5
{
    __DEBUG_ASM(6DB2497);
    // chunk 0x6DB2497 _sub_6DB2497
    asm("loc_6DB2497: mov -0x10(%ebp),%eax;");
    asm("loc_6DB249A: push %eax;");
    asm("loc_6DB249B: call _sub_6DB1DC2;");
    asm("loc_6DB24A0: pop %ecx;");
    asm("loc_6DB24A1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB24A2() // _SEH_6D85B60
{
    __DEBUG_ASM(6DB24A2);
    // chunk 0x6DB24A2 _sub_6DB24A2
    asm("loc_6DB24A2: mov $_data_6DB6BA0,%eax;");
    asm("loc_6DB24A7: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB24B0() // _sub_6DB24B0
{
    __DEBUG_ASM(6DB24B0);
    // chunk 0x6DB24B0 _sub_6DB24B0
    asm("loc_6DB24B0: lea -0x478(%ebp),%ecx;");
    asm("loc_6DB24B6: jmp _sub_6D84270;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB24BB() // _sub_6DB24BB
{
    __DEBUG_ASM(6DB24BB);
    // chunk 0x6DB24BB _sub_6DB24BB
    asm("loc_6DB24BB: lea -0x478(%ebp),%ecx;");
    asm("loc_6DB24C1: jmp _sub_6D84290;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB24C6() // _SEH_6D86A70
{
    __DEBUG_ASM(6DB24C6);
    // chunk 0x6DB24C6 _sub_6DB24C6
    asm("loc_6DB24C6: mov $_data_6DB6BCC,%eax;");
    asm("loc_6DB24CB: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB24D0() // _sub_6DB24D0
{
    __DEBUG_ASM(6DB24D0);
    // chunk 0x6DB24D0 _sub_6DB24D0
    asm("loc_6DB24D0: lea -0x38(%ebp),%ecx;");
    asm("loc_6DB24D3: jmpl *_import_6DB30A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB24D9() // _sub_6DB24D9
{
    __DEBUG_ASM(6DB24D9);
    // chunk 0x6DB24D9 _sub_6DB24D9
    asm("loc_6DB24D9: lea -0x40(%ebp),%ecx;");
    asm("loc_6DB24DC: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB24E1() // _SEH_6D880A0
{
    __DEBUG_ASM(6DB24E1);
    // chunk 0x6DB24E1 _sub_6DB24E1
    asm("loc_6DB24E1: mov $_data_6DB6BF8,%eax;");
    asm("loc_6DB24E6: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB24F0() // _sub_6DB24F0
{
    __DEBUG_ASM(6DB24F0);
    // chunk 0x6DB24F0 _sub_6DB24F0
    asm("loc_6DB24F0: lea -0x14(%ebp),%ecx;");
    asm("loc_6DB24F3: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB24F8() // _SEH_6D884A0
{
    __DEBUG_ASM(6DB24F8);
    // chunk 0x6DB24F8 _sub_6DB24F8
    asm("loc_6DB24F8: mov $_data_6DB6C6C,%eax;");
    asm("loc_6DB24FD: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2510() // _sub_6DB2510
{
    __DEBUG_ASM(6DB2510);
    // chunk 0x6DB2510 _sub_6DB2510
    asm("loc_6DB2510: lea -0x18(%ebp),%ecx;");
    asm("loc_6DB2513: jmp _sub_6D85230;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2518() // _SEH_6D88D70
{
    __DEBUG_ASM(6DB2518);
    // chunk 0x6DB2518 _sub_6DB2518
    asm("loc_6DB2518: mov $_data_6DB6C90,%eax;");
    asm("loc_6DB251D: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2530() // _sub_6DB2530
{
    __DEBUG_ASM(6DB2530);
    // chunk 0x6DB2530 _sub_6DB2530
    asm("loc_6DB2530: lea -0x24(%ebp),%ecx;");
    asm("loc_6DB2533: jmpl *_import_6DB3094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2539() // _sub_6DB2539
{
    __DEBUG_ASM(6DB2539);
    // chunk 0x6DB2539 _sub_6DB2539
    asm("loc_6DB2539: lea -0x3C(%ebp),%ecx;");
    asm("loc_6DB253C: jmpl *_import_6DB3094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2542() // _SEH_6D89190
{
    __DEBUG_ASM(6DB2542);
    // chunk 0x6DB2542 _sub_6DB2542
    asm("loc_6DB2542: mov $_data_6DB6CBC,%eax;");
    asm("loc_6DB2547: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2550() // _sub_6DB2550
{
    __DEBUG_ASM(6DB2550);
    // chunk 0x6DB2550 _sub_6DB2550
    asm("loc_6DB2550: lea -0x18(%ebp),%ecx;");
    asm("loc_6DB2553: jmp _sub_6D85230;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2558() // _sub_6DB2558
{
    __DEBUG_ASM(6DB2558);
    // chunk 0x6DB2558 _sub_6DB2558
    asm("loc_6DB2558: mov -0x28(%ebp),%eax;");
    asm("loc_6DB255B: push %eax;");
    asm("loc_6DB255C: call _sub_6DB1DC2;");
    asm("loc_6DB2561: pop %ecx;");
    asm("loc_6DB2562: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2563() // _sub_6DB2563
{
    __DEBUG_ASM(6DB2563);
    // chunk 0x6DB2563 _sub_6DB2563
    asm("loc_6DB2563: mov -0x28(%ebp),%ecx;");
    asm("loc_6DB2566: add $0x204,%ecx;");
    asm("loc_6DB256C: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2572() // _sub_6DB2572
{
    __DEBUG_ASM(6DB2572);
    // chunk 0x6DB2572 _sub_6DB2572
    asm("loc_6DB2572: mov -0x28(%ebp),%ecx;");
    asm("loc_6DB2575: add $0x214,%ecx;");
    asm("loc_6DB257B: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2581() // _sub_6DB2581
{
    __DEBUG_ASM(6DB2581);
    // chunk 0x6DB2581 _sub_6DB2581
    asm("loc_6DB2581: mov -0x28(%ebp),%ecx;");
    asm("loc_6DB2584: add $0x264,%ecx;");
    asm("loc_6DB258A: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB258F() // _sub_6DB258F
{
    __DEBUG_ASM(6DB258F);
    // chunk 0x6DB258F _sub_6DB258F
    asm("loc_6DB258F: mov 8(%ebp),%ecx;");
    asm("loc_6DB2592: add $0x204,%ecx;");
    asm("loc_6DB2598: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB259E() // _sub_6DB259E
{
    __DEBUG_ASM(6DB259E);
    // chunk 0x6DB259E _sub_6DB259E
    asm("loc_6DB259E: mov 8(%ebp),%ecx;");
    asm("loc_6DB25A1: add $0x214,%ecx;");
    asm("loc_6DB25A7: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB25AD() // _sub_6DB25AD
{
    __DEBUG_ASM(6DB25AD);
    // chunk 0x6DB25AD _sub_6DB25AD
    asm("loc_6DB25AD: mov 8(%ebp),%ecx;");
    asm("loc_6DB25B0: add $0x264,%ecx;");
    asm("loc_6DB25B6: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB25BB() // _SEH_6D89890
{
    __DEBUG_ASM(6DB25BB);
    // chunk 0x6DB25BB _sub_6DB25BB
    asm("loc_6DB25BB: mov $_data_6DB6D44,%eax;");
    asm("loc_6DB25C0: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB25D0() // _sub_6DB25D0
{
    __DEBUG_ASM(6DB25D0);
    // chunk 0x6DB25D0 _sub_6DB25D0
    asm("loc_6DB25D0: lea 0x10(%ebp),%ecx;");
    asm("loc_6DB25D3: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB25D8() // _SEH_6D8C040
{
    __DEBUG_ASM(6DB25D8);
    // chunk 0x6DB25D8 _sub_6DB25D8
    asm("loc_6DB25D8: mov $_data_6DB6D8C,%eax;");
    asm("loc_6DB25DD: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB25F0() // _sub_6DB25F0
{
    __DEBUG_ASM(6DB25F0);
    // chunk 0x6DB25F0 _sub_6DB25F0
    asm("loc_6DB25F0: lea -0x18(%ebp),%ecx;");
    asm("loc_6DB25F3: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB25F8() // ?ReqCargo@IServerImpl@@UAEXABVEquipDescList@@I@Z_SEH
{
    __DEBUG_ASM(6DB25F8);
    // chunk 0x6DB25F8 _sub_6DB25F8
    asm("loc_6DB25F8: mov $_data_6DB6DD4,%eax;");
    asm("loc_6DB25FD: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2610() // _sub_6DB2610
{
    __DEBUG_ASM(6DB2610);
    // chunk 0x6DB2610 _sub_6DB2610
    asm("loc_6DB2610: mov -0x14(%ebp),%ecx;");
    asm("loc_6DB2613: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2618() // _sub_6DB2618
{
    __DEBUG_ASM(6DB2618);
    // chunk 0x6DB2618 _sub_6DB2618
    asm("loc_6DB2618: mov -0x14(%ebp),%ecx;");
    asm("loc_6DB261B: add $0x28,%ecx;");
    asm("loc_6DB261E: jmp _sub_6D8FBE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2623() // _sub_6DB2623
{
    __DEBUG_ASM(6DB2623);
    // chunk 0x6DB2623 _sub_6DB2623
    asm("loc_6DB2623: mov -0x14(%ebp),%ecx;");
    asm("loc_6DB2626: add $0x30,%ecx;");
    asm("loc_6DB2629: jmp _sub_6D8FBE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB262E() // _SEH_6D8FB00
{
    __DEBUG_ASM(6DB262E);
    // chunk 0x6DB262E _sub_6DB262E
    asm("loc_6DB262E: mov $_data_6DB6E08,%eax;");
    asm("loc_6DB2633: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2640() // _unknown_libname_6
{
    __DEBUG_ASM(6DB2640);
    // chunk 0x6DB2640 _sub_6DB2640
    asm("loc_6DB2640: mov -0x14(%ebp),%eax;");
    asm("loc_6DB2643: push %eax;");
    asm("loc_6DB2644: call _sub_6DB1DC2;");
    asm("loc_6DB2649: pop %ecx;");
    asm("loc_6DB264A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB264B() // _SEH_6D913F0
{
    __DEBUG_ASM(6DB264B);
    // chunk 0x6DB264B _sub_6DB264B
    asm("loc_6DB264B: mov $_data_6DB6E2C,%eax;");
    asm("loc_6DB2650: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2660() // _unknown_libname_7
{
    __DEBUG_ASM(6DB2660);
    // chunk 0x6DB2660 _sub_6DB2660
    asm("loc_6DB2660: mov -0x10(%ebp),%eax;");
    asm("loc_6DB2663: push %eax;");
    asm("loc_6DB2664: call _sub_6DB1DC2;");
    asm("loc_6DB2669: pop %ecx;");
    asm("loc_6DB266A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB266B() // _SEH_6D91580
{
    __DEBUG_ASM(6DB266B);
    // chunk 0x6DB266B _sub_6DB266B
    asm("loc_6DB266B: mov $_data_6DB6E50,%eax;");
    asm("loc_6DB2670: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2680() // _sub_6DB2680
{
    __DEBUG_ASM(6DB2680);
    // chunk 0x6DB2680 _sub_6DB2680
    asm("loc_6DB2680: mov -0x14(%ebp),%ecx;");
    asm("loc_6DB2683: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2688() // _sub_6DB2688
{
    __DEBUG_ASM(6DB2688);
    // chunk 0x6DB2688 _sub_6DB2688
    asm("loc_6DB2688: mov -0x14(%ebp),%ecx;");
    asm("loc_6DB268B: add $0x20,%ecx;");
    asm("loc_6DB268E: jmp _sub_6D8FBE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2693() // _sub_6DB2693
{
    __DEBUG_ASM(6DB2693);
    // chunk 0x6DB2693 _sub_6DB2693
    asm("loc_6DB2693: mov -0x14(%ebp),%ecx;");
    asm("loc_6DB2696: add $0x28,%ecx;");
    asm("loc_6DB2699: jmp _sub_6D8FBE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB269E() // _SEH_6D91DD0
{
    __DEBUG_ASM(6DB269E);
    // chunk 0x6DB269E _sub_6DB269E
    asm("loc_6DB269E: mov $_data_6DB6E84,%eax;");
    asm("loc_6DB26A3: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB26B0() // _sub_6DB26B0
{
    __DEBUG_ASM(6DB26B0);
    // chunk 0x6DB26B0 _sub_6DB26B0
    asm("loc_6DB26B0: mov -0x1C(%ebp),%ecx;");
    asm("loc_6DB26B3: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB26B8() // _sub_6DB26B8
{
    __DEBUG_ASM(6DB26B8);
    // chunk 0x6DB26B8 _sub_6DB26B8
    asm("loc_6DB26B8: mov -0x1C(%ebp),%ecx;");
    asm("loc_6DB26BB: add $0x24,%ecx;");
    asm("loc_6DB26BE: jmp _sub_6D85230;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB26C3() // _sub_6DB26C3
{
    __DEBUG_ASM(6DB26C3);
    // chunk 0x6DB26C3 _sub_6DB26C3
    asm("loc_6DB26C3: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB26C6: add $0x204,%ecx;");
    asm("loc_6DB26CC: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB26D2() // _sub_6DB26D2
{
    __DEBUG_ASM(6DB26D2);
    // chunk 0x6DB26D2 _sub_6DB26D2
    asm("loc_6DB26D2: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB26D5: add $0x214,%ecx;");
    asm("loc_6DB26DB: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB26E1() // _sub_6DB26E1
{
    __DEBUG_ASM(6DB26E1);
    // chunk 0x6DB26E1 _sub_6DB26E1
    asm("loc_6DB26E1: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB26E4: add $0x264,%ecx;");
    asm("loc_6DB26EA: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB26EF() // _sub_6DB26EF
{
    __DEBUG_ASM(6DB26EF);
    // chunk 0x6DB26EF _sub_6DB26EF
    asm("loc_6DB26EF: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB26F2: add $0x268,%ecx;");
    asm("loc_6DB26F8: jmpl *_import_6DB3018;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB26FE() // _SEH_6D93350
{
    __DEBUG_ASM(6DB26FE);
    // chunk 0x6DB26FE _sub_6DB26FE
    asm("loc_6DB26FE: mov $_data_6DB6ED0,%eax;");
    asm("loc_6DB2703: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2710() // _sub_6DB2710
{
    __DEBUG_ASM(6DB2710);
    // chunk 0x6DB2710 _sub_6DB2710
    asm("loc_6DB2710: mov -0x14(%ebp),%eax;");
    asm("loc_6DB2713: push %eax;");
    asm("loc_6DB2714: call _sub_6DB1DC2;");
    asm("loc_6DB2719: pop %ecx;");
    asm("loc_6DB271A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB271B() // _sub_6DB271B
{
    __DEBUG_ASM(6DB271B);
    // chunk 0x6DB271B _sub_6DB271B
    asm("loc_6DB271B: mov -0x14(%ebp),%ecx;");
    asm("loc_6DB271E: add $0x204,%ecx;");
    asm("loc_6DB2724: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB272A() // _sub_6DB272A
{
    __DEBUG_ASM(6DB272A);
    // chunk 0x6DB272A _sub_6DB272A
    asm("loc_6DB272A: mov -0x14(%ebp),%ecx;");
    asm("loc_6DB272D: add $0x214,%ecx;");
    asm("loc_6DB2733: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2739() // _sub_6DB2739
{
    __DEBUG_ASM(6DB2739);
    // chunk 0x6DB2739 _sub_6DB2739
    asm("loc_6DB2739: mov -0x14(%ebp),%ecx;");
    asm("loc_6DB273C: add $0x264,%ecx;");
    asm("loc_6DB2742: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2747() // _SEH_6D934D0
{
    __DEBUG_ASM(6DB2747);
    // chunk 0x6DB2747 _sub_6DB2747
    asm("loc_6DB2747: mov $_data_6DB6F0C,%eax;");
    asm("loc_6DB274C: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2760() // _sub_6DB2760
{
    __DEBUG_ASM(6DB2760);
    // chunk 0x6DB2760 _sub_6DB2760
    asm("loc_6DB2760: mov -0x1C(%ebp),%eax;");
    asm("loc_6DB2763: push %eax;");
    asm("loc_6DB2764: call _sub_6DB1DC2;");
    asm("loc_6DB2769: pop %ecx;");
    asm("loc_6DB276A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB276B() // _sub_6DB276B
{
    __DEBUG_ASM(6DB276B);
    // chunk 0x6DB276B _sub_6DB276B
    asm("loc_6DB276B: mov -0x1C(%ebp),%ecx;");
    asm("loc_6DB276E: add $0x204,%ecx;");
    asm("loc_6DB2774: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB277A() // _sub_6DB277A
{
    __DEBUG_ASM(6DB277A);
    // chunk 0x6DB277A _sub_6DB277A
    asm("loc_6DB277A: mov -0x1C(%ebp),%ecx;");
    asm("loc_6DB277D: add $0x214,%ecx;");
    asm("loc_6DB2783: jmpl *_import_6DB3198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2789() // _sub_6DB2789
{
    __DEBUG_ASM(6DB2789);
    // chunk 0x6DB2789 _sub_6DB2789
    asm("loc_6DB2789: mov -0x1C(%ebp),%ecx;");
    asm("loc_6DB278C: add $0x264,%ecx;");
    asm("loc_6DB2792: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2797() // _SEH_6D955C0
{
    __DEBUG_ASM(6DB2797);
    // chunk 0x6DB2797 _sub_6DB2797
    asm("loc_6DB2797: mov $_data_6DB6F48,%eax;");
    asm("loc_6DB279C: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB27B0() // _sub_6DB27B0
{
    __DEBUG_ASM(6DB27B0);
    // chunk 0x6DB27B0 _sub_6DB27B0
    asm("loc_6DB27B0: mov -0x10(%ebp),%eax;");
    asm("loc_6DB27B3: push %eax;");
    asm("loc_6DB27B4: call _sub_6DB1DC2;");
    asm("loc_6DB27B9: pop %ecx;");
    asm("loc_6DB27BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB27BB() // _unknown_libname_8
{
    __DEBUG_ASM(6DB27BB);
    // chunk 0x6DB27BB _sub_6DB27BB
    asm("loc_6DB27BB: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB27BE: jmp _sub_6D8F4C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB27C3() // _sub_6DB27C3
{
    __DEBUG_ASM(6DB27C3);
    // chunk 0x6DB27C3 _sub_6DB27C3
    asm("loc_6DB27C3: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB27C6: add $8,%ecx;");
    asm("loc_6DB27C9: jmp _sub_6D964E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB27CE() // _SEH_6D95E50
{
    __DEBUG_ASM(6DB27CE);
    // chunk 0x6DB27CE _sub_6DB27CE
    asm("loc_6DB27CE: mov $_data_6DB6FB8,%eax;");
    asm("loc_6DB27D3: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB27E0() // _sub_6DB27E0
{
    __DEBUG_ASM(6DB27E0);
    // chunk 0x6DB27E0 _sub_6DB27E0
    asm("loc_6DB27E0: mov -0x1C(%ebp),%ecx;");
    asm("loc_6DB27E3: jmp _sub_6D8F4C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB27E8() // _sub_6DB27E8
{
    __DEBUG_ASM(6DB27E8);
    // chunk 0x6DB27E8 _sub_6DB27E8
    asm("loc_6DB27E8: mov -0x1C(%ebp),%ecx;");
    asm("loc_6DB27EB: add $8,%ecx;");
    asm("loc_6DB27EE: jmp _sub_6D964E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB27F3() // _SEH_6D95F30
{
    __DEBUG_ASM(6DB27F3);
    // chunk 0x6DB27F3 _sub_6DB27F3
    asm("loc_6DB27F3: mov $_data_6DB6FE4,%eax;");
    asm("loc_6DB27F8: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2800() // _sub_6DB2800
{
    __DEBUG_ASM(6DB2800);
    // chunk 0x6DB2800 _sub_6DB2800
    asm("loc_6DB2800: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB2803: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2808() // _sub_6DB2808
{
    __DEBUG_ASM(6DB2808);
    // chunk 0x6DB2808 _sub_6DB2808
    asm("loc_6DB2808: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB280B: add $0x30,%ecx;");
    asm("loc_6DB280E: jmp _sub_6D95B60;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2813() // _sub_6DB2813
{
    __DEBUG_ASM(6DB2813);
    // chunk 0x6DB2813 _sub_6DB2813
    asm("loc_6DB2813: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB2816: add $0x70,%ecx;");
    asm("loc_6DB2819: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB281E() // _sub_6DB281E
{
    __DEBUG_ASM(6DB281E);
    // chunk 0x6DB281E _sub_6DB281E
    asm("loc_6DB281E: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB2821: add $0x74,%ecx;");
    asm("loc_6DB2824: jmpl *_import_6DB3018;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB282A() // _SEH_6D97B90
{
    __DEBUG_ASM(6DB282A);
    // chunk 0x6DB282A _sub_6DB282A
    asm("loc_6DB282A: mov $_data_6DB7020,%eax;");
    asm("loc_6DB282F: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2840() // _sub_6DB2840
{
    __DEBUG_ASM(6DB2840);
    // chunk 0x6DB2840 _sub_6DB2840
    asm("loc_6DB2840: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB2843: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2848() // _SEH_6D9D140
{
    __DEBUG_ASM(6DB2848);
    // chunk 0x6DB2848 _sub_6DB2848
    asm("loc_6DB2848: mov $_data_6DB7068,%eax;");
    asm("loc_6DB284D: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2860() // _sub_6DB2860
{
    __DEBUG_ASM(6DB2860);
    // chunk 0x6DB2860 _sub_6DB2860
    asm("loc_6DB2860: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB2863: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2868() // _sub_6DB2868
{
    __DEBUG_ASM(6DB2868);
    // chunk 0x6DB2868 _sub_6DB2868
    asm("loc_6DB2868: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB286B: add $0x30,%ecx;");
    asm("loc_6DB286E: jmp _sub_6D95B60;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2873() // _sub_6DB2873
{
    __DEBUG_ASM(6DB2873);
    // chunk 0x6DB2873 _sub_6DB2873
    asm("loc_6DB2873: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB2876: add $0x70,%ecx;");
    asm("loc_6DB2879: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB287E() // _sub_6DB287E
{
    __DEBUG_ASM(6DB287E);
    // chunk 0x6DB287E _sub_6DB287E
    asm("loc_6DB287E: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB2881: add $0x74,%ecx;");
    asm("loc_6DB2884: jmpl *_import_6DB3018;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB288A() // _SEH_6D9E630
{
    __DEBUG_ASM(6DB288A);
    // chunk 0x6DB288A _sub_6DB288A
    asm("loc_6DB288A: mov $_data_6DB70A4,%eax;");
    asm("loc_6DB288F: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB28A0() // _sub_6DB28A0
{
    __DEBUG_ASM(6DB28A0);
    // chunk 0x6DB28A0 _sub_6DB28A0
    asm("loc_6DB28A0: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB28A3: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB28A8() // _sub_6DB28A8
{
    __DEBUG_ASM(6DB28A8);
    // chunk 0x6DB28A8 _sub_6DB28A8
    asm("loc_6DB28A8: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB28AB: add $0x20,%ecx;");
    asm("loc_6DB28AE: jmp _sub_6D8FBE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB28B3() // _sub_6DB28B3
{
    __DEBUG_ASM(6DB28B3);
    // chunk 0x6DB28B3 _sub_6DB28B3
    asm("loc_6DB28B3: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB28B6: add $0x28,%ecx;");
    asm("loc_6DB28B9: jmp _sub_6D8FBE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB28BE() // _SEH_6D9D290
{
    __DEBUG_ASM(6DB28BE);
    // chunk 0x6DB28BE _sub_6DB28BE
    asm("loc_6DB28BE: mov $_data_6DB70FC,%eax;");
    asm("loc_6DB28C3: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB28D0() // _sub_6DB28D0
{
    __DEBUG_ASM(6DB28D0);
    // chunk 0x6DB28D0 _sub_6DB28D0
    asm("loc_6DB28D0: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB28D3: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB28D8() // _sub_6DB28D8
{
    __DEBUG_ASM(6DB28D8);
    // chunk 0x6DB28D8 _sub_6DB28D8
    asm("loc_6DB28D8: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB28DB: add $0x28,%ecx;");
    asm("loc_6DB28DE: jmp _sub_6D8FBE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB28E3() // _sub_6DB28E3
{
    __DEBUG_ASM(6DB28E3);
    // chunk 0x6DB28E3 _sub_6DB28E3
    asm("loc_6DB28E3: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB28E6: add $0x30,%ecx;");
    asm("loc_6DB28E9: jmp _sub_6D8FBE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB28EE() // _SEH_6D9DA40
{
    __DEBUG_ASM(6DB28EE);
    // chunk 0x6DB28EE _sub_6DB28EE
    asm("loc_6DB28EE: mov $_data_6DB7154,%eax;");
    asm("loc_6DB28F3: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2900() // _sub_6DB2900
{
    __DEBUG_ASM(6DB2900);
    // chunk 0x6DB2900 _sub_6DB2900
    asm("loc_6DB2900: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB2903: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2908() // _sub_6DB2908
{
    __DEBUG_ASM(6DB2908);
    // chunk 0x6DB2908 _sub_6DB2908
    asm("loc_6DB2908: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB290B: add $0x30,%ecx;");
    asm("loc_6DB290E: jmp _sub_6D95B60;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2913() // _sub_6DB2913
{
    __DEBUG_ASM(6DB2913);
    // chunk 0x6DB2913 _sub_6DB2913
    asm("loc_6DB2913: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB2916: add $0x70,%ecx;");
    asm("loc_6DB2919: jmp _sub_6D91340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB291E() // _sub_6DB291E
{
    __DEBUG_ASM(6DB291E);
    // chunk 0x6DB291E _sub_6DB291E
    asm("loc_6DB291E: mov -0x18(%ebp),%ecx;");
    asm("loc_6DB2921: add $0x74,%ecx;");
    asm("loc_6DB2924: jmpl *_import_6DB3018;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB292A() // _SEH_6D9E740
{
    __DEBUG_ASM(6DB292A);
    // chunk 0x6DB292A _sub_6DB292A
    asm("loc_6DB292A: mov $_data_6DB71CC,%eax;");
    asm("loc_6DB292F: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2940() // _sub_6DB2940
{
    __DEBUG_ASM(6DB2940);
    // chunk 0x6DB2940 _sub_6DB2940
    asm("loc_6DB2940: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB2943: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2948() // _SEH_6DA10B0
{
    __DEBUG_ASM(6DB2948);
    // chunk 0x6DB2948 _sub_6DB2948
    asm("loc_6DB2948: mov $_data_6DB7214,%eax;");
    asm("loc_6DB294D: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2960() // _sub_6DB2960
{
    __DEBUG_ASM(6DB2960);
    // chunk 0x6DB2960 _sub_6DB2960
    asm("loc_6DB2960: lea -0x74(%ebp),%ecx;");
    asm("loc_6DB2963: jmp _sub_6DA36F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2968() // _sub_6DB2968
{
    __DEBUG_ASM(6DB2968);
    // chunk 0x6DB2968 _sub_6DB2968
    asm("loc_6DB2968: lea -0x44(%ebp),%ecx;");
    asm("loc_6DB296B: jmp _sub_6DA36F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2970() // _SEH_6DA1730
{
    __DEBUG_ASM(6DB2970);
    // chunk 0x6DB2970 _sub_6DB2970
    asm("loc_6DB2970: mov $_data_6DB7240,%eax;");
    asm("loc_6DB2975: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2980() // _sub_6DB2980
{
    __DEBUG_ASM(6DB2980);
    // chunk 0x6DB2980 _sub_6DB2980
    asm("loc_6DB2980: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB2983: jmp _sub_6DA1370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB2988() // _SEH_6DA21D0
{
    __DEBUG_ASM(6DB2988);
    // chunk 0x6DB2988 _sub_6DB2988
    asm("loc_6DB2988: mov $_data_6DB7264,%eax;");
    asm("loc_6DB298D: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB29A0() // _sub_6DB29A0
{
    __DEBUG_ASM(6DB29A0);
    // chunk 0x6DB29A0 _sub_6DB29A0
    asm("loc_6DB29A0: lea -0x30(%ebp),%ecx;");
    asm("loc_6DB29A3: jmpl *_import_6DB3168;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB29A9() // _sub_6DB29A9
{
    __DEBUG_ASM(6DB29A9);
    // chunk 0x6DB29A9 _sub_6DB29A9
    asm("loc_6DB29A9: lea -0x20(%ebp),%ecx;");
    asm("loc_6DB29AC: jmp _sub_6DA2B10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB29B1() // _SEH_6DA2820
{
    __DEBUG_ASM(6DB29B1);
    // chunk 0x6DB29B1 _sub_6DB29B1
    asm("loc_6DB29B1: mov $_data_6DB7290,%eax;");
    asm("loc_6DB29B6: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB29C0() // _sub_6DB29C0
{
    __DEBUG_ASM(6DB29C0);
    // chunk 0x6DB29C0 _sub_6DB29C0
    asm("loc_6DB29C0: lea -0x1C(%ebp),%ecx;");
    asm("loc_6DB29C3: jmpl *_import_6DB3168;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB29C9() // _SEH_6DA2980
{
    __DEBUG_ASM(6DB29C9);
    // chunk 0x6DB29C9 _sub_6DB29C9
    asm("loc_6DB29C9: mov $_data_6DB72B4,%eax;");
    asm("loc_6DB29CE: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB29E0() // _sub_6DB29E0
{
    __DEBUG_ASM(6DB29E0);
    // chunk 0x6DB29E0 _sub_6DB29E0
    asm("loc_6DB29E0: mov 4(%ebp),%eax;");
    asm("loc_6DB29E3: push %eax;");
    asm("loc_6DB29E4: mov -0x10(%ebp),%ecx;");
    asm("loc_6DB29E7: push %ecx;");
    asm("loc_6DB29E8: call _sub_6DA36F0;");
    asm("loc_6DB29ED: add $8,%esp;");
    asm("loc_6DB29F0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6DB29F1() // _SEH_6DA3590
{
    __DEBUG_ASM(6DB29F1);
    // chunk 0x6DB29F1 _sub_6DB29F1
    asm("loc_6DB29F1: mov $_data_6DB72D8,%eax;");
    asm("loc_6DB29F6: jmp _sub_6DB1F90;");
    asm("int3;"); // unreachable
}
#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __INTELLISENSE__
