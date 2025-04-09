#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b96ac _public_5b96ac
#define public_5b96b7 _public_5b96b7

PROC_DECLARE(0x5b96a0, internal_5b96a0, public_5b96a0);
/* CHUNK of public_43f8e0 */
extern "C" NAKED register_t __cdecl internal_5b96a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x15C]
        jmp dword ptr ds : [public_5c7090]
        public_5b96ac : nop
        lea ecx, ss:[ebp-0x140]
        jmp public_455e90
        public_5b96b7 : nop
        mov eax, offset public_5f3668
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b96a0)
        ASM_EXPORT_ENTRY_FIRST(0x5b96ac, public_5b96ac)
        ASM_EXPORT_ENTRY_LAST(0x5b96b7, public_5b96b7)
    }
}

#undef public_5b96ac
#undef public_5b96b7

#pragma init_seg(compiler)
extern "C" void const* const public_5b96ac = __AsmFindLabelExport(&internal_5b96a0, 0x5b96ac);
extern "C" void const* const public_5b96b7 = __AsmFindLabelExport(&internal_5b96a0, 0x5b96b7);
