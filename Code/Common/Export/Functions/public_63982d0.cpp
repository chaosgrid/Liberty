#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63522f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63982d8 _public_63982d8

PROC_DECLARE(0x63982d0, internal_63982d0, public_63982d0);
/* CHUNK of public_635d450 */
extern "C" NAKED register_t __cdecl internal_63982d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_63522f0
        public_63982d8 : nop
        mov eax, offset public_63b27a0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63982d0)
        ASM_EXPORT_ENTRY_SINGLE(0x63982d8, public_63982d8)
    }
}

#undef public_63982d8

#pragma init_seg(compiler)
extern "C" void const* const public_63982d8 = __AsmFindLabelExport(&internal_63982d0, 0x63982d8);
