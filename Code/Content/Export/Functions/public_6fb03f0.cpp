#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb03f8 _public_6fb03f8
#define public_6fb0400 _public_6fb0400
#define public_6fb0408 _public_6fb0408

PROC_DECLARE(0x6fb03f0, internal_6fb03f0, public_6fb03f0);
/* CHUNK of public_6f778e0 */
extern "C" NAKED register_t __cdecl internal_6fb03f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp public_6eec8d0
        public_6fb03f8 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_6eec8d0
        public_6fb0400 : nop
        lea ecx, ss:[ebp-0x5C]
        jmp public_6eec8d0
        public_6fb0408 : nop
        mov eax, offset public_6fc56cc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb03f0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb03f8, public_6fb03f8)
        ASM_EXPORT_ENTRY(0x6fb0400, public_6fb0400)
        ASM_EXPORT_ENTRY_LAST(0x6fb0408, public_6fb0408)
    }
}

#undef public_6fb03f8
#undef public_6fb0400
#undef public_6fb0408

#pragma init_seg(compiler)
extern "C" void const* const public_6fb03f8 = __AsmFindLabelExport(&internal_6fb03f0, 0x6fb03f8);
extern "C" void const* const public_6fb0400 = __AsmFindLabelExport(&internal_6fb03f0, 0x6fb0400);
extern "C" void const* const public_6fb0408 = __AsmFindLabelExport(&internal_6fb03f0, 0x6fb0408);
