#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1198 _public_6fb1198

PROC_DECLARE(0x6fb1190, internal_6fb1190, public_6fb1190);
/* CHUNK of public_6f84a20 */
extern "C" NAKED register_t __cdecl internal_6fb1190()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fb1198 : nop
        mov eax, offset public_6fc66e0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1190)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb1198, public_6fb1198)
    }
}

#undef public_6fb1198

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1198 = __AsmFindLabelExport(&internal_6fb1190, 0x6fb1198);
