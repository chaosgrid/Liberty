#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62307d0);
CLANG_FORWARD_PROC_SYMBOL(public_62307e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62498b8 _public_62498b8
#define public_62498c0 _public_62498c0

PROC_DECLARE(0x62498b0, internal_62498b0, public_62498b0);
/* CHUNK of public_622fcf0 */
extern "C" NAKED register_t __cdecl internal_62498b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x40]
        jmp public_62307e0
        public_62498b8 : nop
        lea ecx, ss:[ebp+4]
        jmp public_62307d0
        public_62498c0 : nop
        mov eax, offset public_6252884
        jmp public_6246126
        UNREACHABLE_TRAP(0x62498b0)
        ASM_EXPORT_ENTRY_FIRST(0x62498b8, public_62498b8)
        ASM_EXPORT_ENTRY_LAST(0x62498c0, public_62498c0)
    }
}

#undef public_62498b8
#undef public_62498c0

#pragma init_seg(compiler)
extern "C" void const* const public_62498b8 = __AsmFindLabelExport(&internal_62498b0, 0x62498b8);
extern "C" void const* const public_62498c0 = __AsmFindLabelExport(&internal_62498b0, 0x62498c0);
