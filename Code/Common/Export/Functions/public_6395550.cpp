#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f02b0);
CLANG_FORWARD_PROC_SYMBOL(public_62fb1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395558 _public_6395558
#define public_6395563 _public_6395563

PROC_DECLARE(0x6395550, internal_6395550, public_6395550);
/* CHUNK of public_62f1350 */
extern "C" NAKED register_t __cdecl internal_6395550()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62f02b0
        public_6395558 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_62fb1a0
        public_6395563 : nop
        mov eax, offset public_63af038
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395550)
        ASM_EXPORT_ENTRY_FIRST(0x6395558, public_6395558)
        ASM_EXPORT_ENTRY_LAST(0x6395563, public_6395563)
    }
}

#undef public_6395558
#undef public_6395563

#pragma init_seg(compiler)
extern "C" void const* const public_6395558 = __AsmFindLabelExport(&internal_6395550, 0x6395558);
extern "C" void const* const public_6395563 = __AsmFindLabelExport(&internal_6395550, 0x6395563);
