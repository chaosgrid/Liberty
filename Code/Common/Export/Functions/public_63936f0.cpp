#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63936f8 _public_63936f8

PROC_DECLARE(0x63936f0, internal_63936f0, public_63936f0);
/* CHUNK of public_6294ef0 */
extern "C" NAKED register_t __cdecl internal_63936f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629f2f0
        public_63936f8 : nop
        mov eax, offset public_63ac89c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63936f0)
        ASM_EXPORT_ENTRY_SINGLE(0x63936f8, public_63936f8)
    }
}

#undef public_63936f8

#pragma init_seg(compiler)
extern "C" void const* const public_63936f8 = __AsmFindLabelExport(&internal_63936f0, 0x63936f8);
