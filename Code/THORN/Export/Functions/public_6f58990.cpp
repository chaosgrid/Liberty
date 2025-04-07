#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f5899b _public_6f5899b

PROC_DECLARE(0x6f58990, internal_6f58990, public_6f58990);
/* CHUNK of public_6f32f70 */
extern "C" NAKED register_t __cdecl internal_6f58990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f5899b : nop
        mov eax, offset public_6f5bb48
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58990)
        ASM_EXPORT_ENTRY_SINGLE(0x6f5899b, public_6f5899b)
    }
}

#undef public_6f5899b

#pragma init_seg(compiler)
extern "C" void const* const public_6f5899b = __AsmFindLabelExport(&internal_6f58990, 0x6f5899b);
