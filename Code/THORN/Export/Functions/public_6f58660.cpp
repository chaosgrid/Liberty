#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58668 _public_6f58668

PROC_DECLARE(0x6f58660, internal_6f58660, public_6f58660);
/* CHUNK of public_6f2ca00 */
extern "C" NAKED register_t __cdecl internal_6f58660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f2d2c0
        public_6f58668 : nop
        mov eax, offset public_6f5b7a4
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58660)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58668, public_6f58668)
    }
}

#undef public_6f58668

#pragma init_seg(compiler)
extern "C" void const* const public_6f58668 = __AsmFindLabelExport(&internal_6f58660, 0x6f58668);
