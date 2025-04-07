#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f5889b _public_6f5889b

PROC_DECLARE(0x6f58890, internal_6f58890, public_6f58890);
/* CHUNK of public_6f322f0 */
extern "C" NAKED register_t __cdecl internal_6f58890()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f5889b : nop
        mov eax, offset public_6f5ba28
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58890)
        ASM_EXPORT_ENTRY_SINGLE(0x6f5889b, public_6f5889b)
    }
}

#undef public_6f5889b

#pragma init_seg(compiler)
extern "C" void const* const public_6f5889b = __AsmFindLabelExport(&internal_6f58890, 0x6f5889b);
