#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f5891b _public_6f5891b

PROC_DECLARE(0x6f58910, internal_6f58910, public_6f58910);
/* CHUNK of public_6f328f0 */
extern "C" NAKED register_t __cdecl internal_6f58910()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f5891b : nop
        mov eax, offset public_6f5bab8
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58910)
        ASM_EXPORT_ENTRY_SINGLE(0x6f5891b, public_6f5891b)
    }
}

#undef public_6f5891b

#pragma init_seg(compiler)
extern "C" void const* const public_6f5891b = __AsmFindLabelExport(&internal_6f58910, 0x6f5891b);
