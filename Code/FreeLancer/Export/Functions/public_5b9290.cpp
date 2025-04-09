#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_437cd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9298 _public_5b9298

PROC_DECLARE(0x5b9290, internal_5b9290, public_5b9290);
/* CHUNK of public_437b70 */
extern "C" NAKED register_t __cdecl internal_5b9290()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_437cd0
        public_5b9298 : nop
        mov eax, offset public_5f3204
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9290)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9298, public_5b9298)
    }
}

#undef public_5b9298

#pragma init_seg(compiler)
extern "C" void const* const public_5b9298 = __AsmFindLabelExport(&internal_5b9290, 0x5b9298);
