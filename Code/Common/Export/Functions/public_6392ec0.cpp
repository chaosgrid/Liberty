#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392ec8 _public_6392ec8

PROC_DECLARE(0x6392ec0, internal_6392ec0, public_6392ec0);
/* CHUNK of public_6281a30 */
extern "C" NAKED register_t __cdecl internal_6392ec0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627e9b0
        public_6392ec8 : nop
        mov eax, offset public_63abe38
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392ec0)
        ASM_EXPORT_ENTRY_SINGLE(0x6392ec8, public_6392ec8)
    }
}

#undef public_6392ec8

#pragma init_seg(compiler)
extern "C" void const* const public_6392ec8 = __AsmFindLabelExport(&internal_6392ec0, 0x6392ec8);
