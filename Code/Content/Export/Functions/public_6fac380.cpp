#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac388 _public_6fac388
#define public_6fac390 _public_6fac390
#define public_6fac39e _public_6fac39e
#define public_6fac3ac _public_6fac3ac

PROC_DECLARE(0x6fac380, internal_6fac380, public_6fac380);
/* CHUNK of public_6ef4eb0 */
extern "C" NAKED register_t __cdecl internal_6fac380()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp public_6eec8d0
        public_6fac388 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_6ef4ab0
        public_6fac390 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x80
        jmp public_6eec8d0
        public_6fac39e : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0xFC
        jmp public_6f28e10
        public_6fac3ac : nop
        mov eax, offset public_6fc1014
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac380)
        ASM_EXPORT_ENTRY_FIRST(0x6fac388, public_6fac388)
        ASM_EXPORT_ENTRY(0x6fac390, public_6fac390)
        ASM_EXPORT_ENTRY(0x6fac39e, public_6fac39e)
        ASM_EXPORT_ENTRY_LAST(0x6fac3ac, public_6fac3ac)
    }
}

#undef public_6fac388
#undef public_6fac390
#undef public_6fac39e
#undef public_6fac3ac

#pragma init_seg(compiler)
extern "C" void const* const public_6fac388 = __AsmFindLabelExport(&internal_6fac380, 0x6fac388);
extern "C" void const* const public_6fac390 = __AsmFindLabelExport(&internal_6fac380, 0x6fac390);
extern "C" void const* const public_6fac39e = __AsmFindLabelExport(&internal_6fac380, 0x6fac39e);
extern "C" void const* const public_6fac3ac = __AsmFindLabelExport(&internal_6fac380, 0x6fac3ac);
