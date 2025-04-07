#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58c38 _public_6f58c38

PROC_DECLARE(0x6f58c30, internal_6f58c30, public_6f58c30);
/* CHUNK of public_6f38680 */
extern "C" NAKED register_t __cdecl internal_6f58c30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6f2d2c0
        public_6f58c38 : nop
        mov eax, offset public_6f5bdc8
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58c30)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58c38, public_6f58c38)
    }
}

#undef public_6f58c38

#pragma init_seg(compiler)
extern "C" void const* const public_6f58c38 = __AsmFindLabelExport(&internal_6f58c30, 0x6f58c38);
