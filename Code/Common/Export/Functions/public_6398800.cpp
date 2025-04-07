#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6398808 _public_6398808
#define public_6398810 _public_6398810
#define public_639881e _public_639881e

PROC_DECLARE(0x6398800, internal_6398800, public_6398800);
/* CHUNK of public_636be20 */
extern "C" NAKED register_t __cdecl internal_6398800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_63449d0
        public_6398808 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_63449d0
        public_6398810 : nop
        mov eax, dword ptr ss : [ebp-0x84]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639881e : nop
        mov eax, offset public_63b2e08
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398800)
        ASM_EXPORT_ENTRY_FIRST(0x6398808, public_6398808)
        ASM_EXPORT_ENTRY(0x6398810, public_6398810)
        ASM_EXPORT_ENTRY_LAST(0x639881e, public_639881e)
    }
}

#undef public_6398808
#undef public_6398810
#undef public_639881e

#pragma init_seg(compiler)
extern "C" void const* const public_6398808 = __AsmFindLabelExport(&internal_6398800, 0x6398808);
extern "C" void const* const public_6398810 = __AsmFindLabelExport(&internal_6398800, 0x6398810);
extern "C" void const* const public_639881e = __AsmFindLabelExport(&internal_6398800, 0x639881e);
