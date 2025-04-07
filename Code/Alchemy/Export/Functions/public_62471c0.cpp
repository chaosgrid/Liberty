#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62022d0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62471cb _public_62471cb

PROC_DECLARE(0x62471c0, internal_62471c0, public_62471c0);
/* CHUNK of public_6202550 */
extern "C" NAKED register_t __cdecl internal_62471c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_62022d0
        public_62471cb : nop
        mov eax, offset public_624ff50
        jmp public_6246126
        UNREACHABLE_TRAP(0x62471c0)
        ASM_EXPORT_ENTRY_SINGLE(0x62471cb, public_62471cb)
    }
}

#undef public_62471cb

#pragma init_seg(compiler)
extern "C" void const* const public_62471cb = __AsmFindLabelExport(&internal_62471c0, 0x62471cb);
