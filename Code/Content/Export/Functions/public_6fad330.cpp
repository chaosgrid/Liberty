#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad338 _public_6fad338

PROC_DECLARE(0x6fad330, internal_6fad330, public_6fad330);
/* CHUNK of public_6f0c2c0 */
extern "C" NAKED register_t __cdecl internal_6fad330()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f15350
        public_6fad338 : nop
        mov eax, offset public_6fc21d8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad330)
        ASM_EXPORT_ENTRY_SINGLE(0x6fad338, public_6fad338)
    }
}

#undef public_6fad338

#pragma init_seg(compiler)
extern "C" void const* const public_6fad338 = __AsmFindLabelExport(&internal_6fad330, 0x6fad338);
