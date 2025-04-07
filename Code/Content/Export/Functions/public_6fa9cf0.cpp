#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea90f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9170);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9240);
CLANG_FORWARD_PROC_SYMBOL(public_6eacb50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9cfb _public_6fa9cfb
#define public_6fa9d06 _public_6fa9d06
#define public_6fa9d14 _public_6fa9d14
#define public_6fa9d22 _public_6fa9d22

PROC_DECLARE(0x6fa9cf0, internal_6fa9cf0, public_6fa9cf0);
/* CHUNK of public_6eabb70 */
extern "C" NAKED register_t __cdecl internal_6fa9cf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x58
        jmp public_6ea90f0
        public_6fa9cfb : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x70
        jmp public_6ea9170
        public_6fa9d06 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x84
        jmp public_6ea9240
        public_6fa9d14 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x98
        jmp public_6eacb50
        public_6fa9d22 : nop
        mov eax, offset public_6fbe060
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9cf0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9cfb, public_6fa9cfb)
        ASM_EXPORT_ENTRY(0x6fa9d06, public_6fa9d06)
        ASM_EXPORT_ENTRY(0x6fa9d14, public_6fa9d14)
        ASM_EXPORT_ENTRY_LAST(0x6fa9d22, public_6fa9d22)
    }
}

#undef public_6fa9cfb
#undef public_6fa9d06
#undef public_6fa9d14
#undef public_6fa9d22

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9cfb = __AsmFindLabelExport(&internal_6fa9cf0, 0x6fa9cfb);
extern "C" void const* const public_6fa9d06 = __AsmFindLabelExport(&internal_6fa9cf0, 0x6fa9d06);
extern "C" void const* const public_6fa9d14 = __AsmFindLabelExport(&internal_6fa9cf0, 0x6fa9d14);
extern "C" void const* const public_6fa9d22 = __AsmFindLabelExport(&internal_6fa9cf0, 0x6fa9d22);
