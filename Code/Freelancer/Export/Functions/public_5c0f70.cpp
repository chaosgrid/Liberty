#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_532d40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0f78 _public_5c0f78

PROC_DECLARE(0x5c0f70, internal_5c0f70, public_5c0f70);
/* CHUNK of public_547680 */
extern "C" NAKED register_t __cdecl internal_5c0f70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_532d40
        public_5c0f78 : nop
        mov eax, offset public_5fb26c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0f70)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0f78, public_5c0f78)
    }
}

#undef public_5c0f78

#pragma init_seg(compiler)
extern "C" void const* const public_5c0f78 = __AsmFindLabelExport(&internal_5c0f70, 0x5c0f78);
