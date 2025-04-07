#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58468 _public_6f58468

PROC_DECLARE(0x6f58460, internal_6f58460, public_6f58460);
/* CHUNK of public_6f250e0 */
extern "C" NAKED register_t __cdecl internal_6f58460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x60]
        jmp public_6f2d2c0
        public_6f58468 : nop
        mov eax, offset public_6f5b604
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58460)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58468, public_6f58468)
    }
}

#undef public_6f58468

#pragma init_seg(compiler)
extern "C" void const* const public_6f58468 = __AsmFindLabelExport(&internal_6f58460, 0x6f58468);
