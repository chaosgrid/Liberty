#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639829b _public_639829b

PROC_DECLARE(0x6398290, internal_6398290, public_6398290);
/* CHUNK of public_635c9d0 */
extern "C" NAKED register_t __cdecl internal_6398290()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639829b : nop
        mov eax, offset public_63b2728
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398290)
        ASM_EXPORT_ENTRY_SINGLE(0x639829b, public_639829b)
    }
}

#undef public_639829b

#pragma init_seg(compiler)
extern "C" void const* const public_639829b = __AsmFindLabelExport(&internal_6398290, 0x639829b);
