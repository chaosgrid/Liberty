#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4478 _public_5c4478

PROC_DECLARE(0x5c4470, internal_5c4470, public_5c4470);
/* CHUNK of public_587f60 */
extern "C" NAKED register_t __cdecl internal_5c4470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5c4478 : nop
        mov eax, offset public_5fe09c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4470)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4478, public_5c4478)
    }
}

#undef public_5c4478

#pragma init_seg(compiler)
extern "C" void const* const public_5c4478 = __AsmFindLabelExport(&internal_5c4470, 0x5c4478);
