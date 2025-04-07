#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3560);
CLANG_FORWARD_PROC_SYMBOL(public_62a3810);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393cf8 _public_6393cf8
#define public_6393d03 _public_6393d03

PROC_DECLARE(0x6393cf0, internal_6393cf0, public_6393cf0);
/* CHUNK of public_62a33f0 */
extern "C" NAKED register_t __cdecl internal_6393cf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62a3560
        public_6393cf8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp public_62a3810
        public_6393d03 : nop
        mov eax, offset public_63ad11c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393cf0)
        ASM_EXPORT_ENTRY_FIRST(0x6393cf8, public_6393cf8)
        ASM_EXPORT_ENTRY_LAST(0x6393d03, public_6393d03)
    }
}

#undef public_6393cf8
#undef public_6393d03

#pragma init_seg(compiler)
extern "C" void const* const public_6393cf8 = __AsmFindLabelExport(&internal_6393cf0, 0x6393cf8);
extern "C" void const* const public_6393d03 = __AsmFindLabelExport(&internal_6393cf0, 0x6393d03);
