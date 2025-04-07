#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6321f10);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396d18 _public_6396d18
#define public_6396d22 _public_6396d22

PROC_DECLARE(0x6396d10, internal_6396d10, public_6396d10);
/* CHUNK of public_6320080 */
extern "C" NAKED register_t __cdecl internal_6396d10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-1]
        jmp public_6321f10
        public_6396d18 : nop
        mov ecx, offset public_64018c4
        jmp public_6321f10
        public_6396d22 : nop
        mov eax, offset public_63b0ca8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396d10)
        ASM_EXPORT_ENTRY_FIRST(0x6396d18, public_6396d18)
        ASM_EXPORT_ENTRY_LAST(0x6396d22, public_6396d22)
    }
}

#undef public_6396d18
#undef public_6396d22

#pragma init_seg(compiler)
extern "C" void const* const public_6396d18 = __AsmFindLabelExport(&internal_6396d10, 0x6396d18);
extern "C" void const* const public_6396d22 = __AsmFindLabelExport(&internal_6396d10, 0x6396d22);
