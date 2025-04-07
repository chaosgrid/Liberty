#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_637a750);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63988fb _public_63988fb
#define public_6398903 _public_6398903
#define public_639890b _public_639890b
#define public_6398913 _public_6398913

PROC_DECLARE(0x63988f0, internal_63988f0, public_63988f0);
/* CHUNK of public_636db00 */
extern "C" NAKED register_t __cdecl internal_63988f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x5C]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63988fb : nop
        lea ecx, ss:[ebp-0x58]
        jmp public_63449d0
        public_6398903 : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_63449d0
        public_639890b : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_637a750
        public_6398913 : nop
        mov eax, offset public_63b2f38
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63988f0)
        ASM_EXPORT_ENTRY_FIRST(0x63988fb, public_63988fb)
        ASM_EXPORT_ENTRY(0x6398903, public_6398903)
        ASM_EXPORT_ENTRY(0x639890b, public_639890b)
        ASM_EXPORT_ENTRY_LAST(0x6398913, public_6398913)
    }
}

#undef public_63988fb
#undef public_6398903
#undef public_639890b
#undef public_6398913

#pragma init_seg(compiler)
extern "C" void const* const public_63988fb = __AsmFindLabelExport(&internal_63988f0, 0x63988fb);
extern "C" void const* const public_6398903 = __AsmFindLabelExport(&internal_63988f0, 0x6398903);
extern "C" void const* const public_639890b = __AsmFindLabelExport(&internal_63988f0, 0x639890b);
extern "C" void const* const public_6398913 = __AsmFindLabelExport(&internal_63988f0, 0x6398913);
