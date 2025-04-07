#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_634b6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392fe8 _public_6392fe8
#define public_6392ff3 _public_6392ff3

PROC_DECLARE(0x6392fe0, internal_6392fe0, public_6392fe0);
/* CHUNK of public_6285b90 */
extern "C" NAKED register_t __cdecl internal_6392fe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_634b6a0
        public_6392fe8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_63449d0
        public_6392ff3 : nop
        mov eax, offset public_63abfd0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392fe0)
        ASM_EXPORT_ENTRY_FIRST(0x6392fe8, public_6392fe8)
        ASM_EXPORT_ENTRY_LAST(0x6392ff3, public_6392ff3)
    }
}

#undef public_6392fe8
#undef public_6392ff3

#pragma init_seg(compiler)
extern "C" void const* const public_6392fe8 = __AsmFindLabelExport(&internal_6392fe0, 0x6392fe8);
extern "C" void const* const public_6392ff3 = __AsmFindLabelExport(&internal_6392fe0, 0x6392ff3);
