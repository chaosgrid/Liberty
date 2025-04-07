#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad848 _public_6fad848

PROC_DECLARE(0x6fad840, internal_6fad840, public_6fad840);
/* CHUNK of public_6f14400 */
extern "C" NAKED register_t __cdecl internal_6fad840()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6f15350
        public_6fad848 : nop
        mov eax, offset public_6fc26fc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad840)
        ASM_EXPORT_ENTRY_SINGLE(0x6fad848, public_6fad848)
    }
}

#undef public_6fad848

#pragma init_seg(compiler)
extern "C" void const* const public_6fad848 = __AsmFindLabelExport(&internal_6fad840, 0x6fad848);
