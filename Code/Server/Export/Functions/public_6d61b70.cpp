#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d115e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d168e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16940);
CLANG_FORWARD_PROC_SYMBOL(public_6d16b10);
CLANG_FORWARD_PROC_SYMBOL(public_6d16b70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61b7b _public_6d61b7b
#define public_6d61b86 _public_6d61b86
#define public_6d61b91 _public_6d61b91
#define public_6d61b9c _public_6d61b9c
#define public_6d61ba7 _public_6d61ba7

PROC_DECLARE(0x6d61b70, internal_6d61b70, public_6d61b70);
/* CHUNK of public_6d12900 */
extern "C" NAKED register_t __cdecl internal_6d61b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x10
        jmp public_6d16940
        public_6d61b7b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_6d16b70
        public_6d61b86 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x40
        jmp public_6d115e0
        public_6d61b91 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6d16b10
        public_6d61b9c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6d168e0
        public_6d61ba7 : nop
        mov eax, offset public_6d72870
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61b70)
        ASM_EXPORT_ENTRY_FIRST(0x6d61b7b, public_6d61b7b)
        ASM_EXPORT_ENTRY(0x6d61b86, public_6d61b86)
        ASM_EXPORT_ENTRY(0x6d61b91, public_6d61b91)
        ASM_EXPORT_ENTRY(0x6d61b9c, public_6d61b9c)
        ASM_EXPORT_ENTRY_LAST(0x6d61ba7, public_6d61ba7)
    }
}

#undef public_6d61b7b
#undef public_6d61b86
#undef public_6d61b91
#undef public_6d61b9c
#undef public_6d61ba7

#pragma init_seg(compiler)
extern "C" void const* const public_6d61b7b = __AsmFindLabelExport(&internal_6d61b70, 0x6d61b7b);
extern "C" void const* const public_6d61b86 = __AsmFindLabelExport(&internal_6d61b70, 0x6d61b86);
extern "C" void const* const public_6d61b91 = __AsmFindLabelExport(&internal_6d61b70, 0x6d61b91);
extern "C" void const* const public_6d61b9c = __AsmFindLabelExport(&internal_6d61b70, 0x6d61b9c);
extern "C" void const* const public_6d61ba7 = __AsmFindLabelExport(&internal_6d61b70, 0x6d61ba7);
