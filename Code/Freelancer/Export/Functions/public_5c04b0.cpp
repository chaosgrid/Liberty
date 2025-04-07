#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52caa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c04b8 _public_5c04b8

PROC_DECLARE(0x5c04b0, internal_5c04b0, public_5c04b0);
/* CHUNK of public_52d880 */
extern "C" NAKED register_t __cdecl internal_5c04b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x40]
        jmp public_52caa0
        public_5c04b8 : nop
        mov eax, offset public_5fa558
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c04b0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c04b8, public_5c04b8)
    }
}

#undef public_5c04b8

#pragma init_seg(compiler)
extern "C" void const* const public_5c04b8 = __AsmFindLabelExport(&internal_5c04b0, 0x5c04b8);
