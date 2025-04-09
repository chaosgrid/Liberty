#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4a7c _public_5c4a7c

PROC_DECLARE(0x5c4a70, internal_5c4a70, public_5c4a70);
/* CHUNK of public_592230 */
extern "C" NAKED register_t __cdecl internal_5c4a70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x894]
        jmp dword ptr ds : [public_5c7090]
        public_5c4a7c : nop
        mov eax, offset public_5fe744
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4a70)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4a7c, public_5c4a7c)
    }
}

#undef public_5c4a7c

#pragma init_seg(compiler)
extern "C" void const* const public_5c4a7c = __AsmFindLabelExport(&internal_5c4a70, 0x5c4a7c);
