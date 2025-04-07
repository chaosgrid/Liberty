#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_62949c0);
CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393bb8 _public_6393bb8
#define public_6393bc3 _public_6393bc3
#define public_6393bd1 _public_6393bd1

PROC_DECLARE(0x6393bb0, internal_6393bb0, public_6393bb0);
/* CHUNK of public_629f4e0 */
extern "C" NAKED register_t __cdecl internal_6393bb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629f2f0
        public_6393bb8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_62949c0
        public_6393bc3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x82C
        jmp public_6269110
        public_6393bd1 : nop
        mov eax, offset public_63acf6c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393bb0)
        ASM_EXPORT_ENTRY_FIRST(0x6393bb8, public_6393bb8)
        ASM_EXPORT_ENTRY(0x6393bc3, public_6393bc3)
        ASM_EXPORT_ENTRY_LAST(0x6393bd1, public_6393bd1)
    }
}

#undef public_6393bb8
#undef public_6393bc3
#undef public_6393bd1

#pragma init_seg(compiler)
extern "C" void const* const public_6393bb8 = __AsmFindLabelExport(&internal_6393bb0, 0x6393bb8);
extern "C" void const* const public_6393bc3 = __AsmFindLabelExport(&internal_6393bb0, 0x6393bc3);
extern "C" void const* const public_6393bd1 = __AsmFindLabelExport(&internal_6393bb0, 0x6393bd1);
