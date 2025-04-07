#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae348 _public_6fae348

PROC_DECLARE(0x6fae340, internal_6fae340, public_6fae340);
/* CHUNK of public_6f25140 */
extern "C" NAKED register_t __cdecl internal_6fae340()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea8cc0
        public_6fae348 : nop
        mov eax, offset public_6fc326c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae340)
        ASM_EXPORT_ENTRY_SINGLE(0x6fae348, public_6fae348)
    }
}

#undef public_6fae348

#pragma init_seg(compiler)
extern "C" void const* const public_6fae348 = __AsmFindLabelExport(&internal_6fae340, 0x6fae348);
