#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfff0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa5c8 _public_6faa5c8
#define public_6faa5d3 _public_6faa5d3
#define public_6faa5de _public_6faa5de

PROC_DECLARE(0x6faa5c0, internal_6faa5c0, public_6faa5c0);
/* CHUNK of public_6eba530 */
extern "C" NAKED register_t __cdecl internal_6faa5c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6ecfff0
        public_6faa5c8 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0xC
        jmp public_6ecfff0
        public_6faa5d3 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0x1C
        jmp public_6eec8d0
        public_6faa5de : nop
        mov eax, offset public_6fbea34
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa5c0)
        ASM_EXPORT_ENTRY_FIRST(0x6faa5c8, public_6faa5c8)
        ASM_EXPORT_ENTRY(0x6faa5d3, public_6faa5d3)
        ASM_EXPORT_ENTRY_LAST(0x6faa5de, public_6faa5de)
    }
}

#undef public_6faa5c8
#undef public_6faa5d3
#undef public_6faa5de

#pragma init_seg(compiler)
extern "C" void const* const public_6faa5c8 = __AsmFindLabelExport(&internal_6faa5c0, 0x6faa5c8);
extern "C" void const* const public_6faa5d3 = __AsmFindLabelExport(&internal_6faa5c0, 0x6faa5d3);
extern "C" void const* const public_6faa5de = __AsmFindLabelExport(&internal_6faa5c0, 0x6faa5de);
