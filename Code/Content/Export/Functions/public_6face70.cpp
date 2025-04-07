#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6face78 _public_6face78

PROC_DECLARE(0x6face70, internal_6face70, public_6face70);
/* CHUNK of public_6f06840 */
extern "C" NAKED register_t __cdecl internal_6face70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6ea8cc0
        public_6face78 : nop
        mov eax, offset public_6fc1b3c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6face70)
        ASM_EXPORT_ENTRY_SINGLE(0x6face78, public_6face78)
    }
}

#undef public_6face78

#pragma init_seg(compiler)
extern "C" void const* const public_6face78 = __AsmFindLabelExport(&internal_6face70, 0x6face78);
