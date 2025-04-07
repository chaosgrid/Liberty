#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa258 _public_6faa258

PROC_DECLARE(0x6faa250, internal_6faa250, public_6faa250);
/* CHUNK of public_6eb5380 */
extern "C" NAKED register_t __cdecl internal_6faa250()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6eec8d0
        public_6faa258 : nop
        mov eax, offset public_6fbe648
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa250)
        ASM_EXPORT_ENTRY_SINGLE(0x6faa258, public_6faa258)
    }
}

#undef public_6faa258

#pragma init_seg(compiler)
extern "C" void const* const public_6faa258 = __AsmFindLabelExport(&internal_6faa250, 0x6faa258);
