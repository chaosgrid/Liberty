#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3039 _public_5c3039
#define public_5c3042 _public_5c3042
#define public_5c304b _public_5c304b

PROC_DECLARE(0x5c3030, internal_5c3030, public_5c3030);
/* CHUNK of public_56f610 */
extern "C" NAKED register_t __cdecl internal_5c3030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp dword ptr ds : [public_5c62b4]
        public_5c3039 : nop
        lea ecx, ss:[ebp-0x14]
        jmp dword ptr ds : [public_5c62c8]
        public_5c3042 : nop
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c62d4]
        public_5c304b : nop
        mov eax, offset public_5fcf5c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3030)
        ASM_EXPORT_ENTRY_FIRST(0x5c3039, public_5c3039)
        ASM_EXPORT_ENTRY(0x5c3042, public_5c3042)
        ASM_EXPORT_ENTRY_LAST(0x5c304b, public_5c304b)
    }
}

#undef public_5c3039
#undef public_5c3042
#undef public_5c304b

#pragma init_seg(compiler)
extern "C" void const* const public_5c3039 = __AsmFindLabelExport(&internal_5c3030, 0x5c3039);
extern "C" void const* const public_5c3042 = __AsmFindLabelExport(&internal_5c3030, 0x5c3042);
extern "C" void const* const public_5c304b = __AsmFindLabelExport(&internal_5c3030, 0x5c304b);
