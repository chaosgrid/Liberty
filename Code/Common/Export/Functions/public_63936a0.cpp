#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63936a8 _public_63936a8

PROC_DECLARE(0x63936a0, internal_63936a0, public_63936a0);
/* CHUNK of public_62948b0 */
extern "C" NAKED register_t __cdecl internal_63936a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62881d0
        public_63936a8 : nop
        mov eax, offset public_63ac844
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63936a0)
        ASM_EXPORT_ENTRY_SINGLE(0x63936a8, public_63936a8)
    }
}

#undef public_63936a8

#pragma init_seg(compiler)
extern "C" void const* const public_63936a8 = __AsmFindLabelExport(&internal_63936a0, 0x63936a8);
