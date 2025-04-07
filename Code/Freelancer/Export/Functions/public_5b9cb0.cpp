#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44d300);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9cb8 _public_5b9cb8

PROC_DECLARE(0x5b9cb0, internal_5b9cb0, public_5b9cb0);
/* CHUNK of public_44d450 */
extern "C" NAKED register_t __cdecl internal_5b9cb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_44d300
        public_5b9cb8 : nop
        mov eax, offset public_5f3d80
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9cb0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9cb8, public_5b9cb8)
    }
}

#undef public_5b9cb8

#pragma init_seg(compiler)
extern "C" void const* const public_5b9cb8 = __AsmFindLabelExport(&internal_5b9cb0, 0x5b9cb8);
