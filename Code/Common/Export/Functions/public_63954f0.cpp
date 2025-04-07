#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63954fb _public_63954fb

PROC_DECLARE(0x63954f0, internal_63954f0, public_63954f0);
/* CHUNK of public_62f0dc0 */
extern "C" NAKED register_t __cdecl internal_63954f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63954fb : nop
        mov eax, offset public_63aefd0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63954f0)
        ASM_EXPORT_ENTRY_SINGLE(0x63954fb, public_63954fb)
    }
}

#undef public_63954fb

#pragma init_seg(compiler)
extern "C" void const* const public_63954fb = __AsmFindLabelExport(&internal_63954f0, 0x63954fb);
