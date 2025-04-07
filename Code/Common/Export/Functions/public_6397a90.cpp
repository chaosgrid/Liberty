#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6344ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397a98 _public_6397a98
#define public_6397aa3 _public_6397aa3

PROC_DECLARE(0x6397a90, internal_6397a90, public_6397a90);
/* CHUNK of public_6344c30 */
extern "C" NAKED register_t __cdecl internal_6397a90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6344ae0
        public_6397a98 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_63449d0
        public_6397aa3 : nop
        mov eax, offset public_63b1cf8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397a90)
        ASM_EXPORT_ENTRY_FIRST(0x6397a98, public_6397a98)
        ASM_EXPORT_ENTRY_LAST(0x6397aa3, public_6397aa3)
    }
}

#undef public_6397a98
#undef public_6397aa3

#pragma init_seg(compiler)
extern "C" void const* const public_6397a98 = __AsmFindLabelExport(&internal_6397a90, 0x6397a98);
extern "C" void const* const public_6397aa3 = __AsmFindLabelExport(&internal_6397a90, 0x6397aa3);
