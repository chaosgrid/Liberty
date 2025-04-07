#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef05d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9cf90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1978 _public_6fb1978
#define public_6fb1980 _public_6fb1980
#define public_6fb1988 _public_6fb1988

PROC_DECLARE(0x6fb1970, internal_6fb1970, public_6fb1970);
/* CHUNK of public_6f9cd00 */
extern "C" NAKED register_t __cdecl internal_6fb1970()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0xC]
        jmp public_6f9cf90
        public_6fb1978 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6ef05d0
        public_6fb1980 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6f9cf90
        public_6fb1988 : nop
        mov eax, offset public_6fc7018
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1970)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1978, public_6fb1978)
        ASM_EXPORT_ENTRY(0x6fb1980, public_6fb1980)
        ASM_EXPORT_ENTRY_LAST(0x6fb1988, public_6fb1988)
    }
}

#undef public_6fb1978
#undef public_6fb1980
#undef public_6fb1988

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1978 = __AsmFindLabelExport(&internal_6fb1970, 0x6fb1978);
extern "C" void const* const public_6fb1980 = __AsmFindLabelExport(&internal_6fb1970, 0x6fb1980);
extern "C" void const* const public_6fb1988 = __AsmFindLabelExport(&internal_6fb1970, 0x6fb1988);
