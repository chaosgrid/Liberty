#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c070);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9418 _public_5b9418

PROC_DECLARE(0x5b9410, internal_5b9410, public_5b9410);
/* CHUNK of public_43c0f0 */
extern "C" NAKED register_t __cdecl internal_5b9410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_43c070
        public_5b9418 : nop
        mov eax, offset public_5f33a4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9410)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9418, public_5b9418)
    }
}

#undef public_5b9418

#pragma init_seg(compiler)
extern "C" void const* const public_5b9418 = __AsmFindLabelExport(&internal_5b9410, 0x5b9418);
