#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_63221f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396f4b _public_6396f4b
#define public_6396f56 _public_6396f56
#define public_6396f64 _public_6396f64

PROC_DECLARE(0x6396f40, internal_6396f40, public_6396f40);
/* CHUNK of public_6324920 */
extern "C" NAKED register_t __cdecl internal_6396f40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x12C]
        jmp public_63221f0
        public_6396f4b : nop
        lea ecx, ss:[ebp-0x9C]
        jmp public_63221f0
        public_6396f56 : nop
        mov ecx, dword ptr ss : [ebp-0x130]
        add ecx, 0x10
        jmp public_630e210
        public_6396f64 : nop
        mov eax, offset public_63b0f7c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396f40)
        ASM_EXPORT_ENTRY_FIRST(0x6396f4b, public_6396f4b)
        ASM_EXPORT_ENTRY(0x6396f56, public_6396f56)
        ASM_EXPORT_ENTRY_LAST(0x6396f64, public_6396f64)
    }
}

#undef public_6396f4b
#undef public_6396f56
#undef public_6396f64

#pragma init_seg(compiler)
extern "C" void const* const public_6396f4b = __AsmFindLabelExport(&internal_6396f40, 0x6396f4b);
extern "C" void const* const public_6396f56 = __AsmFindLabelExport(&internal_6396f40, 0x6396f56);
extern "C" void const* const public_6396f64 = __AsmFindLabelExport(&internal_6396f40, 0x6396f64);
