#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3560);
CLANG_FORWARD_PROC_SYMBOL(public_62a3810);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393d6b _public_6393d6b
#define public_6393d73 _public_6393d73
#define public_6393d7e _public_6393d7e
#define public_6393d89 _public_6393d89

PROC_DECLARE(0x6393d60, internal_6393d60, public_6393d60);
/* CHUNK of public_62a3d00 */
extern "C" NAKED register_t __cdecl internal_6393d60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 8
        jmp public_62a68e0
        public_6393d6b : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_62a3560
        public_6393d73 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x14
        jmp public_62a3810
        public_6393d7e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x34
        jmp public_62a68e0
        public_6393d89 : nop
        mov eax, offset public_63ad1f4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393d60)
        ASM_EXPORT_ENTRY_FIRST(0x6393d6b, public_6393d6b)
        ASM_EXPORT_ENTRY(0x6393d73, public_6393d73)
        ASM_EXPORT_ENTRY(0x6393d7e, public_6393d7e)
        ASM_EXPORT_ENTRY_LAST(0x6393d89, public_6393d89)
    }
}

#undef public_6393d6b
#undef public_6393d73
#undef public_6393d7e
#undef public_6393d89

#pragma init_seg(compiler)
extern "C" void const* const public_6393d6b = __AsmFindLabelExport(&internal_6393d60, 0x6393d6b);
extern "C" void const* const public_6393d73 = __AsmFindLabelExport(&internal_6393d60, 0x6393d73);
extern "C" void const* const public_6393d7e = __AsmFindLabelExport(&internal_6393d60, 0x6393d7e);
extern "C" void const* const public_6393d89 = __AsmFindLabelExport(&internal_6393d60, 0x6393d89);
