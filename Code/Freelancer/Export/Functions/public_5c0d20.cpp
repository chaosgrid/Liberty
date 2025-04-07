#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_532d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0d2b _public_5c0d2b

PROC_DECLARE(0x5c0d20, internal_5c0d20, public_5c0d20);
/* CHUNK of public_542550 */
extern "C" NAKED register_t __cdecl internal_5c0d20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp public_532d30
        public_5c0d2b : nop
        mov eax, offset public_5faf7c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0d20)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0d2b, public_5c0d2b)
    }
}

#undef public_5c0d2b

#pragma init_seg(compiler)
extern "C" void const* const public_5c0d2b = __AsmFindLabelExport(&internal_5c0d20, 0x5c0d2b);
