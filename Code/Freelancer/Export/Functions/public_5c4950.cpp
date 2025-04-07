#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c495c _public_5c495c
#define public_5c4964 _public_5c4964

PROC_DECLARE(0x5c4950, internal_5c4950, public_5c4950);
/* CHUNK of public_5916b0 */
extern "C" NAKED register_t __cdecl internal_5c4950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xD4]
        jmp dword ptr ds : [public_5c7090]
        public_5c495c : nop
        lea ecx, ss:[ebp-0x80]
        jmp public_4dd9a0
        public_5c4964 : nop
        mov eax, offset public_5fe64c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4950)
        ASM_EXPORT_ENTRY_FIRST(0x5c495c, public_5c495c)
        ASM_EXPORT_ENTRY_LAST(0x5c4964, public_5c4964)
    }
}

#undef public_5c495c
#undef public_5c4964

#pragma init_seg(compiler)
extern "C" void const* const public_5c495c = __AsmFindLabelExport(&internal_5c4950, 0x5c495c);
extern "C" void const* const public_5c4964 = __AsmFindLabelExport(&internal_5c4950, 0x5c4964);
