#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6287870);
CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639377b _public_639377b
#define public_6393789 _public_6393789
#define public_6393797 _public_6393797

PROC_DECLARE(0x6393770, internal_6393770, public_6393770);
/* CHUNK of public_6295c40 */
extern "C" NAKED register_t __cdecl internal_6393770()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x94]
        jmp public_629f2f0
        public_639377b : nop
        mov ecx, dword ptr ss : [ebp-0x94]
        add ecx, 0x20
        jmp public_6287870
        public_6393789 : nop
        mov ecx, dword ptr ss : [ebp-0x94]
        add ecx, 0x34
        jmp public_6269110
        public_6393797 : nop
        mov eax, offset public_63ac9d4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393770)
        ASM_EXPORT_ENTRY_FIRST(0x639377b, public_639377b)
        ASM_EXPORT_ENTRY(0x6393789, public_6393789)
        ASM_EXPORT_ENTRY_LAST(0x6393797, public_6393797)
    }
}

#undef public_639377b
#undef public_6393789
#undef public_6393797

#pragma init_seg(compiler)
extern "C" void const* const public_639377b = __AsmFindLabelExport(&internal_6393770, 0x639377b);
extern "C" void const* const public_6393789 = __AsmFindLabelExport(&internal_6393770, 0x6393789);
extern "C" void const* const public_6393797 = __AsmFindLabelExport(&internal_6393770, 0x6393797);
