#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf938 _public_6faf938

PROC_DECLARE(0x6faf930, internal_6faf930, public_6faf930);
/* CHUNK of public_6f5cd10 */
extern "C" NAKED register_t __cdecl internal_6faf930()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea1650
        public_6faf938 : nop
        mov eax, offset public_6fc4938
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf930)
        ASM_EXPORT_ENTRY_SINGLE(0x6faf938, public_6faf938)
    }
}

#undef public_6faf938

#pragma init_seg(compiler)
extern "C" void const* const public_6faf938 = __AsmFindLabelExport(&internal_6faf930, 0x6faf938);
