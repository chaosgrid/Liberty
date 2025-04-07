#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6344aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397a58 _public_6397a58
#define public_6397a63 _public_6397a63

PROC_DECLARE(0x6397a50, internal_6397a50, public_6397a50);
/* CHUNK of public_6344a00 */
extern "C" NAKED register_t __cdecl internal_6397a50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6344aa0
        public_6397a58 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_63449d0
        public_6397a63 : nop
        mov eax, offset public_63b1c98
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397a50)
        ASM_EXPORT_ENTRY_FIRST(0x6397a58, public_6397a58)
        ASM_EXPORT_ENTRY_LAST(0x6397a63, public_6397a63)
    }
}

#undef public_6397a58
#undef public_6397a63

#pragma init_seg(compiler)
extern "C" void const* const public_6397a58 = __AsmFindLabelExport(&internal_6397a50, 0x6397a58);
extern "C" void const* const public_6397a63 = __AsmFindLabelExport(&internal_6397a50, 0x6397a63);
