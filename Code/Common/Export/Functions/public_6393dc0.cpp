#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3560);
CLANG_FORWARD_PROC_SYMBOL(public_62a3810);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393dc8 _public_6393dc8
#define public_6393dd3 _public_6393dd3
#define public_6393dde _public_6393dde

PROC_DECLARE(0x6393dc0, internal_6393dc0, public_6393dc0);
/* CHUNK of public_62a4660 */
extern "C" NAKED register_t __cdecl internal_6393dc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62a3560
        public_6393dc8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp public_62a3810
        public_6393dd3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x34
        jmp public_62a68e0
        public_6393dde : nop
        mov eax, offset public_63ad24c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393dc0)
        ASM_EXPORT_ENTRY_FIRST(0x6393dc8, public_6393dc8)
        ASM_EXPORT_ENTRY(0x6393dd3, public_6393dd3)
        ASM_EXPORT_ENTRY_LAST(0x6393dde, public_6393dde)
    }
}

#undef public_6393dc8
#undef public_6393dd3
#undef public_6393dde

#pragma init_seg(compiler)
extern "C" void const* const public_6393dc8 = __AsmFindLabelExport(&internal_6393dc0, 0x6393dc8);
extern "C" void const* const public_6393dd3 = __AsmFindLabelExport(&internal_6393dc0, 0x6393dd3);
extern "C" void const* const public_6393dde = __AsmFindLabelExport(&internal_6393dc0, 0x6393dde);
