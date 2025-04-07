#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1d760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad44e _public_6fad44e

PROC_DECLARE(0x6fad440, internal_6fad440, public_6fad440);
/* CHUNK of public_6f0e2d0 */
extern "C" NAKED register_t __cdecl internal_6fad440()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE8
        jmp public_6f1d760
        public_6fad44e : nop
        mov eax, offset public_6fc22fc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad440)
        ASM_EXPORT_ENTRY_SINGLE(0x6fad44e, public_6fad44e)
    }
}

#undef public_6fad44e

#pragma init_seg(compiler)
extern "C" void const* const public_6fad44e = __AsmFindLabelExport(&internal_6fad440, 0x6fad44e);
