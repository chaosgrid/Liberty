#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59578 _public_6f59578

PROC_DECLARE(0x6f59570, internal_6f59570, public_6f59570);
/* CHUNK of public_6f488d0 */
extern "C" NAKED register_t __cdecl internal_6f59570()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f59578 : nop
        mov eax, offset public_6f5c78c
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59570)
        ASM_EXPORT_ENTRY_SINGLE(0x6f59578, public_6f59578)
    }
}

#undef public_6f59578

#pragma init_seg(compiler)
extern "C" void const* const public_6f59578 = __AsmFindLabelExport(&internal_6f59570, 0x6f59578);
