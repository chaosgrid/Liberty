#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63522f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63982f8 _public_63982f8

PROC_DECLARE(0x63982f0, internal_63982f0, public_63982f0);
/* CHUNK of public_635d510 */
extern "C" NAKED register_t __cdecl internal_63982f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_63522f0
        public_63982f8 : nop
        mov eax, offset public_63b27c8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63982f0)
        ASM_EXPORT_ENTRY_SINGLE(0x63982f8, public_63982f8)
    }
}

#undef public_63982f8

#pragma init_seg(compiler)
extern "C" void const* const public_63982f8 = __AsmFindLabelExport(&internal_63982f0, 0x63982f8);
