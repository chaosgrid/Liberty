#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60f49 _public_6d60f49

PROC_DECLARE(0x6d60f40, internal_6d60f40, public_6d60f40);
/* CHUNK of public_6d020d0 */
extern "C" NAKED register_t __cdecl internal_6d60f40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp dword ptr ds : [public_6d641e4]
        public_6d60f49 : nop
        mov eax, offset public_6d71a98
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60f40)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60f49, public_6d60f49)
    }
}

#undef public_6d60f49

#pragma init_seg(compiler)
extern "C" void const* const public_6d60f49 = __AsmFindLabelExport(&internal_6d60f40, 0x6d60f49);
