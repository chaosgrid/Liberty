#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62968 _public_6d62968
#define public_6d62973 _public_6d62973
#define public_6d6297e _public_6d6297e

PROC_DECLARE(0x6d62960, internal_6d62960, public_6d62960);
/* CHUNK of public_6d24080 */
extern "C" NAKED register_t __cdecl internal_6d62960()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d1bbf0
        public_6d62968 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_6d0b7e0
        public_6d62973 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3C
        jmp public_6cecb50
        public_6d6297e : nop
        mov eax, offset public_6d7398c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62960)
        ASM_EXPORT_ENTRY_FIRST(0x6d62968, public_6d62968)
        ASM_EXPORT_ENTRY(0x6d62973, public_6d62973)
        ASM_EXPORT_ENTRY_LAST(0x6d6297e, public_6d6297e)
    }
}

#undef public_6d62968
#undef public_6d62973
#undef public_6d6297e

#pragma init_seg(compiler)
extern "C" void const* const public_6d62968 = __AsmFindLabelExport(&internal_6d62960, 0x6d62968);
extern "C" void const* const public_6d62973 = __AsmFindLabelExport(&internal_6d62960, 0x6d62973);
extern "C" void const* const public_6d6297e = __AsmFindLabelExport(&internal_6d62960, 0x6d6297e);
