#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639845b _public_639845b

PROC_DECLARE(0x6398450, internal_6398450, public_6398450);
/* CHUNK of public_6361b80 */
extern "C" NAKED register_t __cdecl internal_6398450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639845b : nop
        mov eax, offset public_63b2970
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398450)
        ASM_EXPORT_ENTRY_SINGLE(0x639845b, public_639845b)
    }
}

#undef public_639845b

#pragma init_seg(compiler)
extern "C" void const* const public_639845b = __AsmFindLabelExport(&internal_6398450, 0x639845b);
