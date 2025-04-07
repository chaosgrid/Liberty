#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9a1b _public_6fa9a1b

PROC_DECLARE(0x6fa9a10, internal_6fa9a10, public_6fa9a10);
/* CHUNK of public_6ea8f80 */
extern "C" NAKED register_t __cdecl internal_6fa9a10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6eec8d0
        public_6fa9a1b : nop
        mov eax, offset public_6fbdd7c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9a10)
        ASM_EXPORT_ENTRY_SINGLE(0x6fa9a1b, public_6fa9a1b)
    }
}

#undef public_6fa9a1b

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9a1b = __AsmFindLabelExport(&internal_6fa9a10, 0x6fa9a1b);
