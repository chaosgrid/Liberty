#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_637a750);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639892b _public_639892b
#define public_6398933 _public_6398933
#define public_639893b _public_639893b

PROC_DECLARE(0x6398920, internal_6398920, public_6398920);
/* CHUNK of public_636ded0 */
extern "C" NAKED register_t __cdecl internal_6398920()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x44]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639892b : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_63449d0
        public_6398933 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_637a750
        public_639893b : nop
        mov eax, offset public_63b2f78
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398920)
        ASM_EXPORT_ENTRY_FIRST(0x639892b, public_639892b)
        ASM_EXPORT_ENTRY(0x6398933, public_6398933)
        ASM_EXPORT_ENTRY_LAST(0x639893b, public_639893b)
    }
}

#undef public_639892b
#undef public_6398933
#undef public_639893b

#pragma init_seg(compiler)
extern "C" void const* const public_639892b = __AsmFindLabelExport(&internal_6398920, 0x639892b);
extern "C" void const* const public_6398933 = __AsmFindLabelExport(&internal_6398920, 0x6398933);
extern "C" void const* const public_639893b = __AsmFindLabelExport(&internal_6398920, 0x639893b);
