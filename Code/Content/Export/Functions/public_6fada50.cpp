#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fada5e _public_6fada5e

PROC_DECLARE(0x6fada50, internal_6fada50, public_6fada50);
/* CHUNK of public_6f18c70 */
extern "C" NAKED register_t __cdecl internal_6fada50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x46C
        jmp public_6f15350
        public_6fada5e : nop
        mov eax, offset public_6fc28c0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fada50)
        ASM_EXPORT_ENTRY_SINGLE(0x6fada5e, public_6fada5e)
    }
}

#undef public_6fada5e

#pragma init_seg(compiler)
extern "C" void const* const public_6fada5e = __AsmFindLabelExport(&internal_6fada50, 0x6fada5e);
