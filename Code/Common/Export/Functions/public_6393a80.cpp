#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629e800);
CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393a88 _public_6393a88
#define public_6393a93 _public_6393a93

PROC_DECLARE(0x6393a80, internal_6393a80, public_6393a80);
/* CHUNK of public_629e030 */
extern "C" NAKED register_t __cdecl internal_6393a80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x58]
        jmp public_629f2f0
        public_6393a88 : nop
        mov ecx, dword ptr ss : [ebp-0x58]
        add ecx, 0x50
        jmp public_629e800
        public_6393a93 : nop
        mov eax, offset public_63acd90
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393a80)
        ASM_EXPORT_ENTRY_FIRST(0x6393a88, public_6393a88)
        ASM_EXPORT_ENTRY_LAST(0x6393a93, public_6393a93)
    }
}

#undef public_6393a88
#undef public_6393a93

#pragma init_seg(compiler)
extern "C" void const* const public_6393a88 = __AsmFindLabelExport(&internal_6393a80, 0x6393a88);
extern "C" void const* const public_6393a93 = __AsmFindLabelExport(&internal_6393a80, 0x6393a93);
