#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea90f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9170);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9240);
CLANG_FORWARD_PROC_SYMBOL(public_6eacb50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9e4b _public_6fa9e4b
#define public_6fa9e56 _public_6fa9e56
#define public_6fa9e64 _public_6fa9e64
#define public_6fa9e72 _public_6fa9e72

PROC_DECLARE(0x6fa9e40, internal_6fa9e40, public_6fa9e40);
/* CHUNK of public_6ead3e0 */
extern "C" NAKED register_t __cdecl internal_6fa9e40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x58
        jmp public_6ea90f0
        public_6fa9e4b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp public_6ea9170
        public_6fa9e56 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x84
        jmp public_6ea9240
        public_6fa9e64 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x98
        jmp public_6eacb50
        public_6fa9e72 : nop
        mov eax, offset public_6fbe210
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9e40)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9e4b, public_6fa9e4b)
        ASM_EXPORT_ENTRY(0x6fa9e56, public_6fa9e56)
        ASM_EXPORT_ENTRY(0x6fa9e64, public_6fa9e64)
        ASM_EXPORT_ENTRY_LAST(0x6fa9e72, public_6fa9e72)
    }
}

#undef public_6fa9e4b
#undef public_6fa9e56
#undef public_6fa9e64
#undef public_6fa9e72

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9e4b = __AsmFindLabelExport(&internal_6fa9e40, 0x6fa9e4b);
extern "C" void const* const public_6fa9e56 = __AsmFindLabelExport(&internal_6fa9e40, 0x6fa9e56);
extern "C" void const* const public_6fa9e64 = __AsmFindLabelExport(&internal_6fa9e40, 0x6fa9e64);
extern "C" void const* const public_6fa9e72 = __AsmFindLabelExport(&internal_6fa9e40, 0x6fa9e72);
