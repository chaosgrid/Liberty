#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb9e8 _public_5bb9e8

PROC_DECLARE(0x5bb9e0, internal_5bb9e0, public_5bb9e0);
/* CHUNK of public_470870 */
extern "C" NAKED register_t __cdecl internal_5bb9e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bb9e8 : nop
        mov eax, offset public_5f5cd4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb9e0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bb9e8, public_5bb9e8)
    }
}

#undef public_5bb9e8

#pragma init_seg(compiler)
extern "C" void const* const public_5bb9e8 = __AsmFindLabelExport(&internal_5bb9e0, 0x5bb9e8);
