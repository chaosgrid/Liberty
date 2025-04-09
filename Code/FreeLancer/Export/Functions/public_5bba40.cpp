#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bba49 _public_5bba49

PROC_DECLARE(0x5bba40, internal_5bba40, public_5bba40);
/* CHUNK of public_471e80 */
extern "C" NAKED register_t __cdecl internal_5bba40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c6098]
        public_5bba49 : nop
        mov eax, offset public_5f5d24
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bba40)
        ASM_EXPORT_ENTRY_SINGLE(0x5bba49, public_5bba49)
    }
}

#undef public_5bba49

#pragma init_seg(compiler)
extern "C" void const* const public_5bba49 = __AsmFindLabelExport(&internal_5bba40, 0x5bba49);
