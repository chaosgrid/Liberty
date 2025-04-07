#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639549b _public_639549b
#define public_63954a6 _public_63954a6

PROC_DECLARE(0x6395490, internal_6395490, public_6395490);
/* CHUNK of public_62eee60 */
extern "C" NAKED register_t __cdecl internal_6395490()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x20
        jmp public_62a68e0
        public_639549b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x40
        jmp public_6269110
        public_63954a6 : nop
        mov eax, offset public_63aef64
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395490)
        ASM_EXPORT_ENTRY_FIRST(0x639549b, public_639549b)
        ASM_EXPORT_ENTRY_LAST(0x63954a6, public_63954a6)
    }
}

#undef public_639549b
#undef public_63954a6

#pragma init_seg(compiler)
extern "C" void const* const public_639549b = __AsmFindLabelExport(&internal_6395490, 0x639549b);
extern "C" void const* const public_63954a6 = __AsmFindLabelExport(&internal_6395490, 0x63954a6);
