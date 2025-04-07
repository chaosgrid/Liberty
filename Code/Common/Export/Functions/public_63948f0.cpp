#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63948fb _public_63948fb

PROC_DECLARE(0x63948f0, internal_63948f0, public_63948f0);
/* CHUNK of public_62bc720 */
extern "C" NAKED register_t __cdecl internal_63948f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63948fb : nop
        mov eax, offset public_63adf0c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63948f0)
        ASM_EXPORT_ENTRY_SINGLE(0x63948fb, public_63948fb)
    }
}

#undef public_63948fb

#pragma init_seg(compiler)
extern "C" void const* const public_63948fb = __AsmFindLabelExport(&internal_63948f0, 0x63948fb);
