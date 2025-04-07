#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1e09 _public_5c1e09
#define public_5c1e12 _public_5c1e12
#define public_5c1e1b _public_5c1e1b

PROC_DECLARE(0x5c1e00, internal_5c1e00, public_5c1e00);
/* CHUNK of public_5631c0 */
extern "C" NAKED register_t __cdecl internal_5c1e00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp dword ptr ds : [public_5c62c4]
        public_5c1e09 : nop
        lea ecx, ss:[ebp-0x48]
        jmp dword ptr ds : [public_5c62b4]
        public_5c1e12 : nop
        lea ecx, ss:[ebp-0x48]
        jmp dword ptr ds : [public_5c62b4]
        public_5c1e1b : nop
        mov eax, offset public_5fc074
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1e00)
        ASM_EXPORT_ENTRY_FIRST(0x5c1e09, public_5c1e09)
        ASM_EXPORT_ENTRY(0x5c1e12, public_5c1e12)
        ASM_EXPORT_ENTRY_LAST(0x5c1e1b, public_5c1e1b)
    }
}

#undef public_5c1e09
#undef public_5c1e12
#undef public_5c1e1b

#pragma init_seg(compiler)
extern "C" void const* const public_5c1e09 = __AsmFindLabelExport(&internal_5c1e00, 0x5c1e09);
extern "C" void const* const public_5c1e12 = __AsmFindLabelExport(&internal_5c1e00, 0x5c1e12);
extern "C" void const* const public_5c1e1b = __AsmFindLabelExport(&internal_5c1e00, 0x5c1e1b);
