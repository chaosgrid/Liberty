#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0588 _public_5c0588

PROC_DECLARE(0x5c0580, internal_5c0580, public_5c0580);
/* CHUNK of public_52edc0 */
extern "C" NAKED register_t __cdecl internal_5c0580()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_531af0
        public_5c0588 : nop
        mov eax, offset public_5fa66c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0580)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0588, public_5c0588)
    }
}

#undef public_5c0588

#pragma init_seg(compiler)
extern "C" void const* const public_5c0588 = __AsmFindLabelExport(&internal_5c0580, 0x5c0588);
