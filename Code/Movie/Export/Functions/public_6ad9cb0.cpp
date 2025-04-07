#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6acf47a);

#define public_6ad9cbe _public_6ad9cbe

PROC_DECLARE(0x6ad9cb0, internal_6ad9cb0, public_6ad9cb0);
/* CHUNK of public_6ac1790 */
extern "C" NAKED register_t __cdecl internal_6ad9cb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x618]
        push eax
        call public_6acf3d0
        pop ecx
        ret 
        public_6ad9cbe : nop
        mov eax, offset public_6adb3f0
        jmp public_6acf47a
        UNREACHABLE_TRAP(0x6ad9cb0)
        ASM_EXPORT_ENTRY_SINGLE(0x6ad9cbe, public_6ad9cbe)
    }
}

#undef public_6ad9cbe

#pragma init_seg(compiler)
extern "C" void const* const public_6ad9cbe = __AsmFindLabelExport(&internal_6ad9cb0, 0x6ad9cbe);
