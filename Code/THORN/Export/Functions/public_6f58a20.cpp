#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58a28 _public_6f58a28

PROC_DECLARE(0x6f58a20, internal_6f58a20, public_6f58a20);
/* CHUNK of public_6f34cc0 */
extern "C" NAKED register_t __cdecl internal_6f58a20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_6f34f30
        public_6f58a28 : nop
        mov eax, offset public_6f5bbdc
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58a20)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58a28, public_6f58a28)
    }
}

#undef public_6f58a28

#pragma init_seg(compiler)
extern "C" void const* const public_6f58a28 = __AsmFindLabelExport(&internal_6f58a20, 0x6f58a28);
