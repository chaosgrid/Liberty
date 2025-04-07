#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9948 _public_6fa9948

PROC_DECLARE(0x6fa9940, internal_6fa9940, public_6fa9940);
/* CHUNK of public_6ea7b90 */
extern "C" NAKED register_t __cdecl internal_6fa9940()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea8cc0
        public_6fa9948 : nop
        mov eax, offset public_6fbdc98
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9940)
        ASM_EXPORT_ENTRY_SINGLE(0x6fa9948, public_6fa9948)
    }
}

#undef public_6fa9948

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9948 = __AsmFindLabelExport(&internal_6fa9940, 0x6fa9948);
