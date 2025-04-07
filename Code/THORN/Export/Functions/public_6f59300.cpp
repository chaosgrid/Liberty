#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59308 _public_6f59308

PROC_DECLARE(0x6f59300, internal_6f59300, public_6f59300);
/* CHUNK of public_6f44b50 */
extern "C" NAKED register_t __cdecl internal_6f59300()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f59308 : nop
        mov eax, offset public_6f5c4d4
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59300)
        ASM_EXPORT_ENTRY_SINGLE(0x6f59308, public_6f59308)
    }
}

#undef public_6f59308

#pragma init_seg(compiler)
extern "C" void const* const public_6f59308 = __AsmFindLabelExport(&internal_6f59300, 0x6f59308);
