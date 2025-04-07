#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6289730);
CLANG_FORWARD_PROC_SYMBOL(public_6289760);
CLANG_FORWARD_PROC_SYMBOL(public_634bca0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393538 _public_6393538
#define public_6393543 _public_6393543
#define public_639354e _public_639354e
#define public_6393559 _public_6393559

PROC_DECLARE(0x6393530, internal_6393530, public_6393530);
/* CHUNK of public_628c1f0 */
extern "C" NAKED register_t __cdecl internal_6393530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6289730
        public_6393538 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6289760
        public_6393543 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_634bca0
        public_639354e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C
        jmp public_6269110
        public_6393559 : nop
        mov eax, offset public_63ac68c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393530)
        ASM_EXPORT_ENTRY_FIRST(0x6393538, public_6393538)
        ASM_EXPORT_ENTRY(0x6393543, public_6393543)
        ASM_EXPORT_ENTRY(0x639354e, public_639354e)
        ASM_EXPORT_ENTRY_LAST(0x6393559, public_6393559)
    }
}

#undef public_6393538
#undef public_6393543
#undef public_639354e
#undef public_6393559

#pragma init_seg(compiler)
extern "C" void const* const public_6393538 = __AsmFindLabelExport(&internal_6393530, 0x6393538);
extern "C" void const* const public_6393543 = __AsmFindLabelExport(&internal_6393530, 0x6393543);
extern "C" void const* const public_639354e = __AsmFindLabelExport(&internal_6393530, 0x639354e);
extern "C" void const* const public_6393559 = __AsmFindLabelExport(&internal_6393530, 0x6393559);
