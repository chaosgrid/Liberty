#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facf28 _public_6facf28

PROC_DECLARE(0x6facf20, internal_6facf20, public_6facf20);
/* CHUNK of public_6f06fe0 */
extern "C" NAKED register_t __cdecl internal_6facf20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6ea8cc0
        public_6facf28 : nop
        mov eax, offset public_6fc1ca4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facf20)
        ASM_EXPORT_ENTRY_SINGLE(0x6facf28, public_6facf28)
    }
}

#undef public_6facf28

#pragma init_seg(compiler)
extern "C" void const* const public_6facf28 = __AsmFindLabelExport(&internal_6facf20, 0x6facf28);
