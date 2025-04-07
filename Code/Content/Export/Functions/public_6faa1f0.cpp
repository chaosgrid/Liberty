#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa1f8 _public_6faa1f8

PROC_DECLARE(0x6faa1f0, internal_6faa1f0, public_6faa1f0);
/* CHUNK of public_6eb4ad0 */
extern "C" NAKED register_t __cdecl internal_6faa1f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea1650
        public_6faa1f8 : nop
        mov eax, offset public_6fbe5b4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa1f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faa1f8, public_6faa1f8)
    }
}

#undef public_6faa1f8

#pragma init_seg(compiler)
extern "C" void const* const public_6faa1f8 = __AsmFindLabelExport(&internal_6faa1f0, 0x6faa1f8);
