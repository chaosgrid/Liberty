#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4458 _public_5c4458

PROC_DECLARE(0x5c4450, internal_5c4450, public_5c4450);
/* CHUNK of public_587e40 */
extern "C" NAKED register_t __cdecl internal_5c4450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_59fa50
        public_5c4458 : nop
        mov eax, offset public_5fe078
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4450)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4458, public_5c4458)
    }
}

#undef public_5c4458

#pragma init_seg(compiler)
extern "C" void const* const public_5c4458 = __AsmFindLabelExport(&internal_5c4450, 0x5c4458);
