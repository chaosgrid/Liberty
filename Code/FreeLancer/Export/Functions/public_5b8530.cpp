#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406b80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8538 _public_5b8538

PROC_DECLARE(0x5b8530, internal_5b8530, public_5b8530);
/* CHUNK of public_408f20 */
extern "C" NAKED register_t __cdecl internal_5b8530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_406b80
        public_5b8538 : nop
        mov eax, offset public_5f20e8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8530)
        ASM_EXPORT_ENTRY_SINGLE(0x5b8538, public_5b8538)
    }
}

#undef public_5b8538

#pragma init_seg(compiler)
extern "C" void const* const public_5b8538 = __AsmFindLabelExport(&internal_5b8530, 0x5b8538);
