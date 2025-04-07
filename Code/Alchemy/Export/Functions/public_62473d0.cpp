#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208610);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62473d8 _public_62473d8
#define public_62473e0 _public_62473e0

PROC_DECLARE(0x62473d0, internal_62473d0, public_62473d0);
/* CHUNK of public_62050c0 */
extern "C" NAKED register_t __cdecl internal_62473d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp public_6208610
        public_62473d8 : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_6208610
        public_62473e0 : nop
        mov eax, offset public_6250164
        jmp public_6246126
        UNREACHABLE_TRAP(0x62473d0)
        ASM_EXPORT_ENTRY_FIRST(0x62473d8, public_62473d8)
        ASM_EXPORT_ENTRY_LAST(0x62473e0, public_62473e0)
    }
}

#undef public_62473d8
#undef public_62473e0

#pragma init_seg(compiler)
extern "C" void const* const public_62473d8 = __AsmFindLabelExport(&internal_62473d0, 0x62473d8);
extern "C" void const* const public_62473e0 = __AsmFindLabelExport(&internal_62473d0, 0x62473e0);
