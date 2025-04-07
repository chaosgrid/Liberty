#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6face98 _public_6face98

PROC_DECLARE(0x6face90, internal_6face90, public_6face90);
/* CHUNK of public_6f06a50 */
extern "C" NAKED register_t __cdecl internal_6face90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6f28e10
        public_6face98 : nop
        mov eax, offset public_6fc1ba8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6face90)
        ASM_EXPORT_ENTRY_SINGLE(0x6face98, public_6face98)
    }
}

#undef public_6face98

#pragma init_seg(compiler)
extern "C" void const* const public_6face98 = __AsmFindLabelExport(&internal_6face90, 0x6face98);
