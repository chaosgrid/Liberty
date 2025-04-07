#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_627cae0);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63935f8 _public_63935f8
#define public_6393603 _public_6393603
#define public_639360e _public_639360e

PROC_DECLARE(0x63935f0, internal_63935f0, public_63935f0);
/* CHUNK of public_6292d40 */
extern "C" NAKED register_t __cdecl internal_63935f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_627cae0
        public_63935f8 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x64
        jmp public_6269110
        public_6393603 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x78
        jmp public_62a68e0
        public_639360e : nop
        mov eax, offset public_63ac75c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63935f0)
        ASM_EXPORT_ENTRY_FIRST(0x63935f8, public_63935f8)
        ASM_EXPORT_ENTRY(0x6393603, public_6393603)
        ASM_EXPORT_ENTRY_LAST(0x639360e, public_639360e)
    }
}

#undef public_63935f8
#undef public_6393603
#undef public_639360e

#pragma init_seg(compiler)
extern "C" void const* const public_63935f8 = __AsmFindLabelExport(&internal_63935f0, 0x63935f8);
extern "C" void const* const public_6393603 = __AsmFindLabelExport(&internal_63935f0, 0x6393603);
extern "C" void const* const public_639360e = __AsmFindLabelExport(&internal_63935f0, 0x639360e);
