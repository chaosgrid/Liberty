#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f595b8 _public_6f595b8

PROC_DECLARE(0x6f595b0, internal_6f595b0, public_6f595b0);
/* CHUNK of public_6f48c70 */
extern "C" NAKED register_t __cdecl internal_6f595b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f595b8 : nop
        mov eax, offset public_6f5c7d4
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f595b0)
        ASM_EXPORT_ENTRY_SINGLE(0x6f595b8, public_6f595b8)
    }
}

#undef public_6f595b8

#pragma init_seg(compiler)
extern "C" void const* const public_6f595b8 = __AsmFindLabelExport(&internal_6f595b0, 0x6f595b8);
