#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63941f8 _public_63941f8
#define public_6394202 _public_6394202

PROC_DECLARE(0x63941f0, internal_63941f0, public_63941f0);
/* CHUNK of public_62adfa0 */
extern "C" NAKED register_t __cdecl internal_63941f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-1]
        jmp public_627e5e0
        public_63941f8 : nop
        mov ecx, offset public_63fc380
        jmp public_627e5e0
        public_6394202 : nop
        mov eax, offset public_63ad758
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63941f0)
        ASM_EXPORT_ENTRY_FIRST(0x63941f8, public_63941f8)
        ASM_EXPORT_ENTRY_LAST(0x6394202, public_6394202)
    }
}

#undef public_63941f8
#undef public_6394202

#pragma init_seg(compiler)
extern "C" void const* const public_63941f8 = __AsmFindLabelExport(&internal_63941f0, 0x63941f8);
extern "C" void const* const public_6394202 = __AsmFindLabelExport(&internal_63941f0, 0x6394202);
