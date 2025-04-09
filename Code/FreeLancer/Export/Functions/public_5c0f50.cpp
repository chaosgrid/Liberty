#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_532d40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0f5b _public_5c0f5b

PROC_DECLARE(0x5c0f50, internal_5c0f50, public_5c0f50);
/* CHUNK of public_5475b0 */
extern "C" NAKED register_t __cdecl internal_5c0f50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_532d40
        public_5c0f5b : nop
        mov eax, offset public_5fb248
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0f50)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0f5b, public_5c0f5b)
    }
}

#undef public_5c0f5b

#pragma init_seg(compiler)
extern "C" void const* const public_5c0f5b = __AsmFindLabelExport(&internal_5c0f50, 0x5c0f5b);
