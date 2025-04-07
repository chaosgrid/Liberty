#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d30c72);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5cf93 _public_6d5cf93

PROC_DECLARE(0x6d5cf88, internal_6d5cf88, public_6d5cf88);
/* CHUNK of public_6d30287 */
extern "C" NAKED register_t __cdecl internal_6d5cf88()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x8C]
        jmp public_6d30c72
        public_6d5cf93 : nop
        mov eax, offset public_6d62904
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5cf88)
        ASM_EXPORT_ENTRY_SINGLE(0x6d5cf93, public_6d5cf93)
    }
}

#undef public_6d5cf93

#pragma init_seg(compiler)
extern "C" void const* const public_6d5cf93 = __AsmFindLabelExport(&internal_6d5cf88, 0x6d5cf93);
