#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafc18 _public_6fafc18

PROC_DECLARE(0x6fafc10, internal_6fafc10, public_6fafc10);
/* CHUNK of public_6f65d20 */
extern "C" NAKED register_t __cdecl internal_6fafc10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_6f28e10
        public_6fafc18 : nop
        mov eax, offset public_6fc4cc8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafc10)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafc18, public_6fafc18)
    }
}

#undef public_6fafc18

#pragma init_seg(compiler)
extern "C" void const* const public_6fafc18 = __AsmFindLabelExport(&internal_6fafc10, 0x6fafc18);
