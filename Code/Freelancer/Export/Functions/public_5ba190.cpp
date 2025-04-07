#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_458fa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba198 _public_5ba198

PROC_DECLARE(0x5ba190, internal_5ba190, public_5ba190);
/* CHUNK of public_459060 */
extern "C" NAKED register_t __cdecl internal_5ba190()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_458fa0
        public_5ba198 : nop
        mov eax, offset public_5f4550
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba190)
        ASM_EXPORT_ENTRY_SINGLE(0x5ba198, public_5ba198)
    }
}

#undef public_5ba198

#pragma init_seg(compiler)
extern "C" void const* const public_5ba198 = __AsmFindLabelExport(&internal_5ba190, 0x5ba198);
