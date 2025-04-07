#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5d143 _public_6d5d143

PROC_DECLARE(0x6d5d139, internal_6d5d139, public_6d5d139);
/* CHUNK of public_6d3ba0a */
extern "C" NAKED register_t __cdecl internal_6d5d139()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push dword ptr ss : [ebp-0x24]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d143 : nop
        mov eax, offset public_6d62b90
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5d139)
        ASM_EXPORT_ENTRY_SINGLE(0x6d5d143, public_6d5d143)
    }
}

#undef public_6d5d143

#pragma init_seg(compiler)
extern "C" void const* const public_6d5d143 = __AsmFindLabelExport(&internal_6d5d139, 0x6d5d143);
