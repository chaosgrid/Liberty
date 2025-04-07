#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639716b _public_639716b

PROC_DECLARE(0x6397160, internal_6397160, public_6397160);
/* CHUNK of public_6328590 */
extern "C" NAKED register_t __cdecl internal_6397160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639716b : nop
        mov eax, offset public_63b123c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397160)
        ASM_EXPORT_ENTRY_SINGLE(0x639716b, public_639716b)
    }
}

#undef public_639716b

#pragma init_seg(compiler)
extern "C" void const* const public_639716b = __AsmFindLabelExport(&internal_6397160, 0x639716b);
