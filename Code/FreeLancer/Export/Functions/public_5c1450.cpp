#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c145c _public_5c145c
#define public_5c1467 _public_5c1467
#define public_5c1473 _public_5c1473
#define public_5c147f _public_5c147f

PROC_DECLARE(0x5c1450, internal_5c1450, public_5c1450);
/* CHUNK of public_5547c0 */
extern "C" NAKED register_t __cdecl internal_5c1450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5c145c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5c1467 : nop
        mov ecx, dword ptr ss : [ebp-0x167C]
        jmp dword ptr ds : [public_5c7090]
        public_5c1473 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5c147f : nop
        mov eax, offset public_5fb7c8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1450)
        ASM_EXPORT_ENTRY_FIRST(0x5c145c, public_5c145c)
        ASM_EXPORT_ENTRY(0x5c1467, public_5c1467)
        ASM_EXPORT_ENTRY(0x5c1473, public_5c1473)
        ASM_EXPORT_ENTRY_LAST(0x5c147f, public_5c147f)
    }
}

#undef public_5c145c
#undef public_5c1467
#undef public_5c1473
#undef public_5c147f

#pragma init_seg(compiler)
extern "C" void const* const public_5c145c = __AsmFindLabelExport(&internal_5c1450, 0x5c145c);
extern "C" void const* const public_5c1467 = __AsmFindLabelExport(&internal_5c1450, 0x5c1467);
extern "C" void const* const public_5c1473 = __AsmFindLabelExport(&internal_5c1450, 0x5c1473);
extern "C" void const* const public_5c147f = __AsmFindLabelExport(&internal_5c1450, 0x5c147f);
