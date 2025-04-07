#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac0a8 _public_6fac0a8

PROC_DECLARE(0x6fac0a0, internal_6fac0a0, public_6fac0a0);
/* CHUNK of public_6ef1f50 */
extern "C" NAKED register_t __cdecl internal_6fac0a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f15350
        public_6fac0a8 : nop
        mov eax, offset public_6fc0ce0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac0a0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac0a8, public_6fac0a8)
    }
}

#undef public_6fac0a8

#pragma init_seg(compiler)
extern "C" void const* const public_6fac0a8 = __AsmFindLabelExport(&internal_6fac0a0, 0x6fac0a8);
