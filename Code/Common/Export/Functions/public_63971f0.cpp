#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63971fb _public_63971fb
#define public_6397203 _public_6397203
#define public_639720f _public_639720f

PROC_DECLARE(0x63971f0, internal_63971f0, public_63971f0);
/* CHUNK of public_6329130 */
extern "C" NAKED register_t __cdecl internal_63971f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63971fb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6329710
        public_6397203 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_6399178]
        public_639720f : nop
        mov eax, offset public_63b1314
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63971f0)
        ASM_EXPORT_ENTRY_FIRST(0x63971fb, public_63971fb)
        ASM_EXPORT_ENTRY(0x6397203, public_6397203)
        ASM_EXPORT_ENTRY_LAST(0x639720f, public_639720f)
    }
}

#undef public_63971fb
#undef public_6397203
#undef public_639720f

#pragma init_seg(compiler)
extern "C" void const* const public_63971fb = __AsmFindLabelExport(&internal_63971f0, 0x63971fb);
extern "C" void const* const public_6397203 = __AsmFindLabelExport(&internal_63971f0, 0x6397203);
extern "C" void const* const public_639720f = __AsmFindLabelExport(&internal_63971f0, 0x639720f);
