#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63960a9 _public_63960a9

PROC_DECLARE(0x63960a0, internal_63960a0, public_63960a0);
/* CHUNK of public_6306940 */
extern "C" NAKED register_t __cdecl internal_63960a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6399178]
        public_63960a9 : nop
        mov eax, offset public_63afeb4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63960a0)
        ASM_EXPORT_ENTRY_SINGLE(0x63960a9, public_63960a9)
    }
}

#undef public_63960a9

#pragma init_seg(compiler)
extern "C" void const* const public_63960a9 = __AsmFindLabelExport(&internal_63960a0, 0x63960a9);
