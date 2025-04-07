#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f588bb _public_6f588bb

PROC_DECLARE(0x6f588b0, internal_6f588b0, public_6f588b0);
/* CHUNK of public_6f32470 */
extern "C" NAKED register_t __cdecl internal_6f588b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f588bb : nop
        mov eax, offset public_6f5ba4c
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f588b0)
        ASM_EXPORT_ENTRY_SINGLE(0x6f588bb, public_6f588bb)
    }
}

#undef public_6f588bb

#pragma init_seg(compiler)
extern "C" void const* const public_6f588bb = __AsmFindLabelExport(&internal_6f588b0, 0x6f588bb);
