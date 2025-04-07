#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b270);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58e3b _public_6f58e3b

PROC_DECLARE(0x6f58e30, internal_6f58e30, public_6f58e30);
/* CHUNK of public_6f3af50 */
extern "C" NAKED register_t __cdecl internal_6f58e30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x205C]
        jmp public_6f3b270
        public_6f58e3b : nop
        mov eax, offset public_6f5bfa8
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58e30)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58e3b, public_6f58e3b)
    }
}

#undef public_6f58e3b

#pragma init_seg(compiler)
extern "C" void const* const public_6f58e3b = __AsmFindLabelExport(&internal_6f58e30, 0x6f58e3b);
