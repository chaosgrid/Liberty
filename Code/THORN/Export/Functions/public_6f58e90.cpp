#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3f620);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58e9b _public_6f58e9b

PROC_DECLARE(0x6f58e90, internal_6f58e90, public_6f58e90);
/* CHUNK of public_6f3f4c0 */
extern "C" NAKED register_t __cdecl internal_6f58e90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6f3f620
        pop ecx
        ret 
        public_6f58e9b : nop
        mov eax, offset public_6f5c048
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58e90)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58e9b, public_6f58e9b)
    }
}

#undef public_6f58e9b

#pragma init_seg(compiler)
extern "C" void const* const public_6f58e9b = __AsmFindLabelExport(&internal_6f58e90, 0x6f58e9b);
