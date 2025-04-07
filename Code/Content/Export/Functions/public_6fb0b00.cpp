#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f85550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0b08 _public_6fb0b08
#define public_6fb0b13 _public_6fb0b13

PROC_DECLARE(0x6fb0b00, internal_6fb0b00, public_6fb0b00);
/* CHUNK of public_6f85f60 */
extern "C" NAKED register_t __cdecl internal_6fb0b00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f85550
        public_6fb0b08 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x5C
        jmp public_6eec8d0
        public_6fb0b13 : nop
        mov eax, offset public_6fc5e84
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0b00)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0b08, public_6fb0b08)
        ASM_EXPORT_ENTRY_LAST(0x6fb0b13, public_6fb0b13)
    }
}

#undef public_6fb0b08
#undef public_6fb0b13

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0b08 = __AsmFindLabelExport(&internal_6fb0b00, 0x6fb0b08);
extern "C" void const* const public_6fb0b13 = __AsmFindLabelExport(&internal_6fb0b00, 0x6fb0b13);
