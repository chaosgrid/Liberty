#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396a5b _public_6396a5b
#define public_6396a66 _public_6396a66
#define public_6396a71 _public_6396a71

PROC_DECLARE(0x6396a50, internal_6396a50, public_6396a50);
/* CHUNK of public_631a770 */
extern "C" NAKED register_t __cdecl internal_6396a50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_630e210
        public_6396a5b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_630e210
        public_6396a66 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp public_630e210
        public_6396a71 : nop
        mov eax, offset public_63b0964
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396a50)
        ASM_EXPORT_ENTRY_FIRST(0x6396a5b, public_6396a5b)
        ASM_EXPORT_ENTRY(0x6396a66, public_6396a66)
        ASM_EXPORT_ENTRY_LAST(0x6396a71, public_6396a71)
    }
}

#undef public_6396a5b
#undef public_6396a66
#undef public_6396a71

#pragma init_seg(compiler)
extern "C" void const* const public_6396a5b = __AsmFindLabelExport(&internal_6396a50, 0x6396a5b);
extern "C" void const* const public_6396a66 = __AsmFindLabelExport(&internal_6396a50, 0x6396a66);
extern "C" void const* const public_6396a71 = __AsmFindLabelExport(&internal_6396a50, 0x6396a71);
