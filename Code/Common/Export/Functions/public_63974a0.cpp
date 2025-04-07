#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63974a8 _public_63974a8
#define public_63974b0 _public_63974b0

PROC_DECLARE(0x63974a0, internal_63974a0, public_63974a0);
/* CHUNK of public_632e160 */
extern "C" NAKED register_t __cdecl internal_63974a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_630e210
        public_63974a8 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_630e210
        public_63974b0 : nop
        mov eax, offset public_63b1628
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63974a0)
        ASM_EXPORT_ENTRY_FIRST(0x63974a8, public_63974a8)
        ASM_EXPORT_ENTRY_LAST(0x63974b0, public_63974b0)
    }
}

#undef public_63974a8
#undef public_63974b0

#pragma init_seg(compiler)
extern "C" void const* const public_63974a8 = __AsmFindLabelExport(&internal_63974a0, 0x63974a8);
extern "C" void const* const public_63974b0 = __AsmFindLabelExport(&internal_63974a0, 0x63974b0);
