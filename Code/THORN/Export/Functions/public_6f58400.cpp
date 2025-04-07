#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23610);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58408 _public_6f58408

PROC_DECLARE(0x6f58400, internal_6f58400, public_6f58400);
/* CHUNK of public_6f22030 */
extern "C" NAKED register_t __cdecl internal_6f58400()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6f23610
        public_6f58408 : nop
        mov eax, offset public_6f5b598
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58400)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58408, public_6f58408)
    }
}

#undef public_6f58408

#pragma init_seg(compiler)
extern "C" void const* const public_6f58408 = __AsmFindLabelExport(&internal_6f58400, 0x6f58408);
