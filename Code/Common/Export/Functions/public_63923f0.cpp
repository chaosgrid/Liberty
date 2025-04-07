#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63923f9 _public_63923f9

PROC_DECLARE(0x63923f0, internal_63923f0, public_63923f0);
/* CHUNK of public_6263310 */
extern "C" NAKED register_t __cdecl internal_63923f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_63991ac]
        public_63923f9 : nop
        mov eax, offset public_63aaee4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63923f0)
        ASM_EXPORT_ENTRY_SINGLE(0x63923f9, public_63923f9)
    }
}

#undef public_63923f9

#pragma init_seg(compiler)
extern "C" void const* const public_63923f9 = __AsmFindLabelExport(&internal_63923f0, 0x63923f9);
