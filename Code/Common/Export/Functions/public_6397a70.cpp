#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6344ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397a78 _public_6397a78
#define public_6397a83 _public_6397a83

PROC_DECLARE(0x6397a70, internal_6397a70, public_6397a70);
/* CHUNK of public_6344b50 */
extern "C" NAKED register_t __cdecl internal_6397a70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6344ad0
        public_6397a78 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_63449d0
        public_6397a83 : nop
        mov eax, offset public_63b1cc8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397a70)
        ASM_EXPORT_ENTRY_FIRST(0x6397a78, public_6397a78)
        ASM_EXPORT_ENTRY_LAST(0x6397a83, public_6397a83)
    }
}

#undef public_6397a78
#undef public_6397a83

#pragma init_seg(compiler)
extern "C" void const* const public_6397a78 = __AsmFindLabelExport(&internal_6397a70, 0x6397a78);
extern "C" void const* const public_6397a83 = __AsmFindLabelExport(&internal_6397a70, 0x6397a83);
