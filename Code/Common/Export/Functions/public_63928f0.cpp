#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63928fb _public_63928fb

PROC_DECLARE(0x63928f0, internal_63928f0, public_63928f0);
/* CHUNK of public_6273630 */
extern "C" NAKED register_t __cdecl internal_63928f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x34
        jmp public_627b1d0
        public_63928fb : nop
        mov eax, offset public_63ab710
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63928f0)
        ASM_EXPORT_ENTRY_SINGLE(0x63928fb, public_63928fb)
    }
}

#undef public_63928fb

#pragma init_seg(compiler)
extern "C" void const* const public_63928fb = __AsmFindLabelExport(&internal_63928f0, 0x63928fb);
