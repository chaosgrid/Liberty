#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6398708 _public_6398708

PROC_DECLARE(0x6398700, internal_6398700, public_6398700);
/* CHUNK of public_636a640 */
extern "C" NAKED register_t __cdecl internal_6398700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_63449d0
        public_6398708 : nop
        mov eax, offset public_63b2d18
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398700)
        ASM_EXPORT_ENTRY_SINGLE(0x6398708, public_6398708)
    }
}

#undef public_6398708

#pragma init_seg(compiler)
extern "C" void const* const public_6398708 = __AsmFindLabelExport(&internal_6398700, 0x6398708);
