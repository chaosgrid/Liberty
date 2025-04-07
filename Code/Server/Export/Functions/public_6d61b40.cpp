#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d115e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16940);
CLANG_FORWARD_PROC_SYMBOL(public_6d16b70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61b4b _public_6d61b4b
#define public_6d61b56 _public_6d61b56
#define public_6d61b61 _public_6d61b61

PROC_DECLARE(0x6d61b40, internal_6d61b40, public_6d61b40);
/* CHUNK of public_6d12860 */
extern "C" NAKED register_t __cdecl internal_6d61b40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_6d16940
        public_6d61b4b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_6d16b70
        public_6d61b56 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x40
        jmp public_6d115e0
        public_6d61b61 : nop
        mov eax, offset public_6d7282c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61b40)
        ASM_EXPORT_ENTRY_FIRST(0x6d61b4b, public_6d61b4b)
        ASM_EXPORT_ENTRY(0x6d61b56, public_6d61b56)
        ASM_EXPORT_ENTRY_LAST(0x6d61b61, public_6d61b61)
    }
}

#undef public_6d61b4b
#undef public_6d61b56
#undef public_6d61b61

#pragma init_seg(compiler)
extern "C" void const* const public_6d61b4b = __AsmFindLabelExport(&internal_6d61b40, 0x6d61b4b);
extern "C" void const* const public_6d61b56 = __AsmFindLabelExport(&internal_6d61b40, 0x6d61b56);
extern "C" void const* const public_6d61b61 = __AsmFindLabelExport(&internal_6d61b40, 0x6d61b61);
