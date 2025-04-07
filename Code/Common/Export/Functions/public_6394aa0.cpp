#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394aab _public_6394aab

PROC_DECLARE(0x6394aa0, internal_6394aa0, public_6394aa0);
/* CHUNK of public_62c2e60 */
extern "C" NAKED register_t __cdecl internal_6394aa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_62c3040
        public_6394aab : nop
        mov eax, offset public_63ae0e4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394aa0)
        ASM_EXPORT_ENTRY_SINGLE(0x6394aab, public_6394aab)
    }
}

#undef public_6394aab

#pragma init_seg(compiler)
extern "C" void const* const public_6394aab = __AsmFindLabelExport(&internal_6394aa0, 0x6394aab);
