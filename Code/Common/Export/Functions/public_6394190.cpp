#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394198 _public_6394198
#define public_63941a2 _public_63941a2

PROC_DECLARE(0x6394190, internal_6394190, public_6394190);
/* CHUNK of public_62add00 */
extern "C" NAKED register_t __cdecl internal_6394190()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-1]
        jmp public_627e5e0
        public_6394198 : nop
        mov ecx, offset public_63fc3a4
        jmp public_627e5e0
        public_63941a2 : nop
        mov eax, offset public_63ad6d4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394190)
        ASM_EXPORT_ENTRY_FIRST(0x6394198, public_6394198)
        ASM_EXPORT_ENTRY_LAST(0x63941a2, public_63941a2)
    }
}

#undef public_6394198
#undef public_63941a2

#pragma init_seg(compiler)
extern "C" void const* const public_6394198 = __AsmFindLabelExport(&internal_6394190, 0x6394198);
extern "C" void const* const public_63941a2 = __AsmFindLabelExport(&internal_6394190, 0x63941a2);
