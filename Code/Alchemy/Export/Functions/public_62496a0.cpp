#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62496a8 _public_62496a8
#define public_62496b0 _public_62496b0

PROC_DECLARE(0x62496a0, internal_62496a0, public_62496a0);
/* CHUNK of public_622de40 */
extern "C" NAKED register_t __cdecl internal_62496a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_622d2c0
        public_62496a8 : nop
        lea ecx, ss:[ebp+4]
        jmp public_622d2c0
        public_62496b0 : nop
        mov eax, offset public_6252654
        jmp public_6246126
        UNREACHABLE_TRAP(0x62496a0)
        ASM_EXPORT_ENTRY_FIRST(0x62496a8, public_62496a8)
        ASM_EXPORT_ENTRY_LAST(0x62496b0, public_62496b0)
    }
}

#undef public_62496a8
#undef public_62496b0

#pragma init_seg(compiler)
extern "C" void const* const public_62496a8 = __AsmFindLabelExport(&internal_62496a0, 0x62496a8);
extern "C" void const* const public_62496b0 = __AsmFindLabelExport(&internal_62496a0, 0x62496b0);
