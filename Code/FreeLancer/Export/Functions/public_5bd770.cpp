#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd77c _public_5bd77c
#define public_5bd787 _public_5bd787
#define public_5bd793 _public_5bd793
#define public_5bd79f _public_5bd79f

PROC_DECLARE(0x5bd770, internal_5bd770, public_5bd770);
/* CHUNK of public_4c73d0 */
extern "C" NAKED register_t __cdecl internal_5bd770()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5bd77c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5bd787 : nop
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp dword ptr ds : [public_5c7090]
        public_5bd793 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5bd79f : nop
        mov eax, offset public_5f7bb8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd770)
        ASM_EXPORT_ENTRY_FIRST(0x5bd77c, public_5bd77c)
        ASM_EXPORT_ENTRY(0x5bd787, public_5bd787)
        ASM_EXPORT_ENTRY(0x5bd793, public_5bd793)
        ASM_EXPORT_ENTRY_LAST(0x5bd79f, public_5bd79f)
    }
}

#undef public_5bd77c
#undef public_5bd787
#undef public_5bd793
#undef public_5bd79f

#pragma init_seg(compiler)
extern "C" void const* const public_5bd77c = __AsmFindLabelExport(&internal_5bd770, 0x5bd77c);
extern "C" void const* const public_5bd787 = __AsmFindLabelExport(&internal_5bd770, 0x5bd787);
extern "C" void const* const public_5bd793 = __AsmFindLabelExport(&internal_5bd770, 0x5bd793);
extern "C" void const* const public_5bd79f = __AsmFindLabelExport(&internal_5bd770, 0x5bd79f);
