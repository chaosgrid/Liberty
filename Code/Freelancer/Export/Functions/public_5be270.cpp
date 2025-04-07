#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be278 _public_5be278

PROC_DECLARE(0x5be270, internal_5be270, public_5be270);
/* CHUNK of public_4d7400 */
extern "C" NAKED register_t __cdecl internal_5be270()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59ef20
        public_5be278 : nop
        mov eax, offset public_5f85cc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be270)
        ASM_EXPORT_ENTRY_SINGLE(0x5be278, public_5be278)
    }
}

#undef public_5be278

#pragma init_seg(compiler)
extern "C" void const* const public_5be278 = __AsmFindLabelExport(&internal_5be270, 0x5be278);
