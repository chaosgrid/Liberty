#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6efc950);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb07bb _public_6fb07bb
#define public_6fb07c6 _public_6fb07c6
#define public_6fb07d1 _public_6fb07d1

PROC_DECLARE(0x6fb07b0, internal_6fb07b0, public_6fb07b0);
/* CHUNK of public_6f81120 */
extern "C" NAKED register_t __cdecl internal_6fb07b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xD00]
        jmp public_6efc950
        public_6fb07bb : nop
        lea ecx, ss:[ebp-0xCD0]
        jmp public_6eec8d0
        public_6fb07c6 : nop
        lea ecx, ss:[ebp-0xC80]
        jmp public_6efc950
        public_6fb07d1 : nop
        mov eax, offset public_6fc5a90
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb07b0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb07bb, public_6fb07bb)
        ASM_EXPORT_ENTRY(0x6fb07c6, public_6fb07c6)
        ASM_EXPORT_ENTRY_LAST(0x6fb07d1, public_6fb07d1)
    }
}

#undef public_6fb07bb
#undef public_6fb07c6
#undef public_6fb07d1

#pragma init_seg(compiler)
extern "C" void const* const public_6fb07bb = __AsmFindLabelExport(&internal_6fb07b0, 0x6fb07bb);
extern "C" void const* const public_6fb07c6 = __AsmFindLabelExport(&internal_6fb07b0, 0x6fb07c6);
extern "C" void const* const public_6fb07d1 = __AsmFindLabelExport(&internal_6fb07b0, 0x6fb07d1);
