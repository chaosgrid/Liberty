#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639801b _public_639801b

PROC_DECLARE(0x6398010, internal_6398010, public_6398010);
/* CHUNK of public_634f180 */
extern "C" NAKED register_t __cdecl internal_6398010()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639801b : nop
        mov eax, offset public_63b23d8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398010)
        ASM_EXPORT_ENTRY_SINGLE(0x639801b, public_639801b)
    }
}

#undef public_639801b

#pragma init_seg(compiler)
extern "C" void const* const public_639801b = __AsmFindLabelExport(&internal_6398010, 0x639801b);
