#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393a48 _public_6393a48

PROC_DECLARE(0x6393a40, internal_6393a40, public_6393a40);
/* CHUNK of public_629db80 */
extern "C" NAKED register_t __cdecl internal_6393a40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6393a48 : nop
        mov eax, offset public_63acd40
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393a40)
        ASM_EXPORT_ENTRY_SINGLE(0x6393a48, public_6393a48)
    }
}

#undef public_6393a48

#pragma init_seg(compiler)
extern "C" void const* const public_6393a48 = __AsmFindLabelExport(&internal_6393a40, 0x6393a48);
