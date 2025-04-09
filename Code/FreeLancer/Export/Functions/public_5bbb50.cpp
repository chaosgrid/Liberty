#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbb59 _public_5bbb59
#define public_5bbb62 _public_5bbb62
#define public_5bbb6b _public_5bbb6b
#define public_5bbb74 _public_5bbb74

PROC_DECLARE(0x5bbb50, internal_5bbb50, public_5bbb50);
/* CHUNK of public_473970 */
extern "C" NAKED register_t __cdecl internal_5bbb50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c62b4]
        public_5bbb59 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c62bc]
        public_5bbb62 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c62b4]
        public_5bbb6b : nop
        lea ecx, ss:[ebp-0x14]
        jmp dword ptr ds : [public_5c62bc]
        public_5bbb74 : nop
        mov eax, offset public_5f5eac
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbb50)
        ASM_EXPORT_ENTRY_FIRST(0x5bbb59, public_5bbb59)
        ASM_EXPORT_ENTRY(0x5bbb62, public_5bbb62)
        ASM_EXPORT_ENTRY(0x5bbb6b, public_5bbb6b)
        ASM_EXPORT_ENTRY_LAST(0x5bbb74, public_5bbb74)
    }
}

#undef public_5bbb59
#undef public_5bbb62
#undef public_5bbb6b
#undef public_5bbb74

#pragma init_seg(compiler)
extern "C" void const* const public_5bbb59 = __AsmFindLabelExport(&internal_5bbb50, 0x5bbb59);
extern "C" void const* const public_5bbb62 = __AsmFindLabelExport(&internal_5bbb50, 0x5bbb62);
extern "C" void const* const public_5bbb6b = __AsmFindLabelExport(&internal_5bbb50, 0x5bbb6b);
extern "C" void const* const public_5bbb74 = __AsmFindLabelExport(&internal_5bbb50, 0x5bbb74);
