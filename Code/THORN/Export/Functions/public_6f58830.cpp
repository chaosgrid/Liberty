#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f5883b _public_6f5883b

PROC_DECLARE(0x6f58830, internal_6f58830, public_6f58830);
/* CHUNK of public_6f31e70 */
extern "C" NAKED register_t __cdecl internal_6f58830()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f5883b : nop
        mov eax, offset public_6f5b9bc
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58830)
        ASM_EXPORT_ENTRY_SINGLE(0x6f5883b, public_6f5883b)
    }
}

#undef public_6f5883b

#pragma init_seg(compiler)
extern "C" void const* const public_6f5883b = __AsmFindLabelExport(&internal_6f58830, 0x6f5883b);
