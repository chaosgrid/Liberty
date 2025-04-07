#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b337c0);
CLANG_FORWARD_PROC_SYMBOL(public_6b337e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a4eb _public_6b6a4eb
#define public_6b6a4f6 _public_6b6a4f6

PROC_DECLARE(0x6b6a4e0, internal_6b6a4e0, public_6b6a4e0);
/* CHUNK of public_6b32370 */
extern "C" NAKED register_t __cdecl internal_6b6a4e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x478]
        jmp public_6b337c0
        public_6b6a4eb : nop
        lea ecx, ss:[ebp-0x478]
        jmp public_6b337e0
        public_6b6a4f6 : nop
        mov eax, offset public_6b6eb74
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a4e0)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a4eb, public_6b6a4eb)
        ASM_EXPORT_ENTRY_LAST(0x6b6a4f6, public_6b6a4f6)
    }
}

#undef public_6b6a4eb
#undef public_6b6a4f6

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a4eb = __AsmFindLabelExport(&internal_6b6a4e0, 0x6b6a4eb);
extern "C" void const* const public_6b6a4f6 = __AsmFindLabelExport(&internal_6b6a4e0, 0x6b6a4f6);
