#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6239ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a1c8 _public_624a1c8
#define public_624a1d0 _public_624a1d0

PROC_DECLARE(0x624a1c0, internal_624a1c0, public_624a1c0);
/* CHUNK of public_6239f80 */
extern "C" NAKED register_t __cdecl internal_624a1c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6239ed0
        public_624a1c8 : nop
        lea ecx, ss:[ebp-0x10]
        jmp public_6239ed0
        public_624a1d0 : nop
        mov eax, offset public_6253238
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a1c0)
        ASM_EXPORT_ENTRY_FIRST(0x624a1c8, public_624a1c8)
        ASM_EXPORT_ENTRY_LAST(0x624a1d0, public_624a1d0)
    }
}

#undef public_624a1c8
#undef public_624a1d0

#pragma init_seg(compiler)
extern "C" void const* const public_624a1c8 = __AsmFindLabelExport(&internal_624a1c0, 0x624a1c8);
extern "C" void const* const public_624a1d0 = __AsmFindLabelExport(&internal_624a1c0, 0x624a1d0);
