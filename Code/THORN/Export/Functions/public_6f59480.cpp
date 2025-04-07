#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59488 _public_6f59488

PROC_DECLARE(0x6f59480, internal_6f59480, public_6f59480);
/* CHUNK of public_6f47230 */
extern "C" NAKED register_t __cdecl internal_6f59480()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f59488 : nop
        mov eax, offset public_6f5c670
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59480)
        ASM_EXPORT_ENTRY_SINGLE(0x6f59488, public_6f59488)
    }
}

#undef public_6f59488

#pragma init_seg(compiler)
extern "C" void const* const public_6f59488 = __AsmFindLabelExport(&internal_6f59480, 0x6f59488);
