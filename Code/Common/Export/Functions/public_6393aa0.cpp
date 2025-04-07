#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_629e800);
CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393aa8 _public_6393aa8
#define public_6393ab3 _public_6393ab3
#define public_6393abe _public_6393abe

PROC_DECLARE(0x6393aa0, internal_6393aa0, public_6393aa0);
/* CHUNK of public_629e170 */
extern "C" NAKED register_t __cdecl internal_6393aa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629f2f0
        public_6393aa8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x50
        jmp public_629e800
        public_6393ab3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 8
        jmp public_62881d0
        public_6393abe : nop
        mov eax, offset public_63acdc4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393aa0)
        ASM_EXPORT_ENTRY_FIRST(0x6393aa8, public_6393aa8)
        ASM_EXPORT_ENTRY(0x6393ab3, public_6393ab3)
        ASM_EXPORT_ENTRY_LAST(0x6393abe, public_6393abe)
    }
}

#undef public_6393aa8
#undef public_6393ab3
#undef public_6393abe

#pragma init_seg(compiler)
extern "C" void const* const public_6393aa8 = __AsmFindLabelExport(&internal_6393aa0, 0x6393aa8);
extern "C" void const* const public_6393ab3 = __AsmFindLabelExport(&internal_6393aa0, 0x6393ab3);
extern "C" void const* const public_6393abe = __AsmFindLabelExport(&internal_6393aa0, 0x6393abe);
