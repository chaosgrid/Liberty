#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65dff1b _public_65dff1b

PROC_DECLARE(0x65dff10, internal_65dff10, public_65dff10);
/* CHUNK of public_65d26a0 */
extern "C" NAKED register_t __cdecl internal_65dff10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_65d6cb8
        pop ecx
        ret 
        public_65dff1b : nop
        mov eax, offset public_65e1f2c
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65dff10)
        ASM_EXPORT_ENTRY_SINGLE(0x65dff1b, public_65dff1b)
    }
}

#undef public_65dff1b

#pragma init_seg(compiler)
extern "C" void const* const public_65dff1b = __AsmFindLabelExport(&internal_65dff10, 0x65dff1b);
