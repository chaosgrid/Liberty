#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea90f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9170);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9240);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa99eb _public_6fa99eb
#define public_6fa99f6 _public_6fa99f6
#define public_6fa9a04 _public_6fa9a04

PROC_DECLARE(0x6fa99e0, internal_6fa99e0, public_6fa99e0);
/* CHUNK of public_6ea8f80 */
extern "C" NAKED register_t __cdecl internal_6fa99e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x58
        jmp public_6ea90f0
        public_6fa99eb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp public_6ea9170
        public_6fa99f6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x84
        jmp public_6ea9240
        public_6fa9a04 : nop
        mov eax, offset public_6fbdd58
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa99e0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa99eb, public_6fa99eb)
        ASM_EXPORT_ENTRY(0x6fa99f6, public_6fa99f6)
        ASM_EXPORT_ENTRY_LAST(0x6fa9a04, public_6fa9a04)
    }
}

#undef public_6fa99eb
#undef public_6fa99f6
#undef public_6fa9a04

#pragma init_seg(compiler)
extern "C" void const* const public_6fa99eb = __AsmFindLabelExport(&internal_6fa99e0, 0x6fa99eb);
extern "C" void const* const public_6fa99f6 = __AsmFindLabelExport(&internal_6fa99e0, 0x6fa99f6);
extern "C" void const* const public_6fa9a04 = __AsmFindLabelExport(&internal_6fa99e0, 0x6fa9a04);
