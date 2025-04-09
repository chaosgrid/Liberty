#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3ad9 _public_5c3ad9

PROC_DECLARE(0x5c3ad0, internal_5c3ad0, public_5c3ad0);
/* CHUNK of public_576ac0 */
extern "C" NAKED register_t __cdecl internal_5c3ad0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp dword ptr ds : [public_5c7090]
        public_5c3ad9 : nop
        mov eax, offset public_5fd7b0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3ad0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c3ad9, public_5c3ad9)
    }
}

#undef public_5c3ad9

#pragma init_seg(compiler)
extern "C" void const* const public_5c3ad9 = __AsmFindLabelExport(&internal_5c3ad0, 0x5c3ad9);
