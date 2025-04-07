#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f5887b _public_6f5887b

PROC_DECLARE(0x6f58870, internal_6f58870, public_6f58870);
/* CHUNK of public_6f32170 */
extern "C" NAKED register_t __cdecl internal_6f58870()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f5887b : nop
        mov eax, offset public_6f5ba04
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58870)
        ASM_EXPORT_ENTRY_SINGLE(0x6f5887b, public_6f5887b)
    }
}

#undef public_6f5887b

#pragma init_seg(compiler)
extern "C" void const* const public_6f5887b = __AsmFindLabelExport(&internal_6f58870, 0x6f5887b);
