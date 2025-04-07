#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6face18 _public_6face18
#define public_6face20 _public_6face20

PROC_DECLARE(0x6face10, internal_6face10, public_6face10);
/* CHUNK of public_6f06300 */
extern "C" NAKED register_t __cdecl internal_6face10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6eec8d0
        public_6face18 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_6eec8d0
        public_6face20 : nop
        mov eax, offset public_6fc1ad4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6face10)
        ASM_EXPORT_ENTRY_FIRST(0x6face18, public_6face18)
        ASM_EXPORT_ENTRY_LAST(0x6face20, public_6face20)
    }
}

#undef public_6face18
#undef public_6face20

#pragma init_seg(compiler)
extern "C" void const* const public_6face18 = __AsmFindLabelExport(&internal_6face10, 0x6face18);
extern "C" void const* const public_6face20 = __AsmFindLabelExport(&internal_6face10, 0x6face20);
