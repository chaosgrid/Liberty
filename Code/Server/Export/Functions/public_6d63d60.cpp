#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63d68 _public_6d63d68
#define public_6d63d70 _public_6d63d70

PROC_DECLARE(0x6d63d60, internal_6d63d60, public_6d63d60);
/* CHUNK of public_6d5d7a0 */
extern "C" NAKED register_t __cdecl internal_6d63d60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x5C]
        jmp public_6d0b7e0
        public_6d63d68 : nop
        lea ecx, ss:[ebp-0x5C]
        jmp public_6d0b7e0
        public_6d63d70 : nop
        mov eax, offset public_6d75f54
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63d60)
        ASM_EXPORT_ENTRY_FIRST(0x6d63d68, public_6d63d68)
        ASM_EXPORT_ENTRY_LAST(0x6d63d70, public_6d63d70)
    }
}

#undef public_6d63d68
#undef public_6d63d70

#pragma init_seg(compiler)
extern "C" void const* const public_6d63d68 = __AsmFindLabelExport(&internal_6d63d60, 0x6d63d68);
extern "C" void const* const public_6d63d70 = __AsmFindLabelExport(&internal_6d63d60, 0x6d63d70);
