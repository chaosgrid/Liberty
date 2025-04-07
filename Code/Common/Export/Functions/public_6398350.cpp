#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639835b _public_639835b

PROC_DECLARE(0x6398350, internal_6398350, public_6398350);
/* CHUNK of public_63608a0 */
extern "C" NAKED register_t __cdecl internal_6398350()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639835b : nop
        mov eax, offset public_63b2840
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398350)
        ASM_EXPORT_ENTRY_SINGLE(0x639835b, public_639835b)
    }
}

#undef public_639835b

#pragma init_seg(compiler)
extern "C" void const* const public_639835b = __AsmFindLabelExport(&internal_6398350, 0x639835b);
