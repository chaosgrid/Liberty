#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429140);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c01f8 _public_5c01f8

PROC_DECLARE(0x5c01f0, internal_5c01f0, public_5c01f0);
/* CHUNK of public_527a70 */
extern "C" NAKED register_t __cdecl internal_5c01f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_429140
        public_5c01f8 : nop
        mov eax, offset public_5fa1d0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c01f0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c01f8, public_5c01f8)
    }
}

#undef public_5c01f8

#pragma init_seg(compiler)
extern "C" void const* const public_5c01f8 = __AsmFindLabelExport(&internal_5c01f0, 0x5c01f8);
