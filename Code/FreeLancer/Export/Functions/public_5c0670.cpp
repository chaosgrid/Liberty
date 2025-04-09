#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c067c _public_5c067c
#define public_5c0687 _public_5c0687
#define public_5c0693 _public_5c0693
#define public_5c069f _public_5c069f

PROC_DECLARE(0x5c0670, internal_5c0670, public_5c0670);
/* CHUNK of public_530d20 */
extern "C" NAKED register_t __cdecl internal_5c0670()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5c067c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5c0687 : nop
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp dword ptr ds : [public_5c7090]
        public_5c0693 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5c069f : nop
        mov eax, offset public_5fa7f0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0670)
        ASM_EXPORT_ENTRY_FIRST(0x5c067c, public_5c067c)
        ASM_EXPORT_ENTRY(0x5c0687, public_5c0687)
        ASM_EXPORT_ENTRY(0x5c0693, public_5c0693)
        ASM_EXPORT_ENTRY_LAST(0x5c069f, public_5c069f)
    }
}

#undef public_5c067c
#undef public_5c0687
#undef public_5c0693
#undef public_5c069f

#pragma init_seg(compiler)
extern "C" void const* const public_5c067c = __AsmFindLabelExport(&internal_5c0670, 0x5c067c);
extern "C" void const* const public_5c0687 = __AsmFindLabelExport(&internal_5c0670, 0x5c0687);
extern "C" void const* const public_5c0693 = __AsmFindLabelExport(&internal_5c0670, 0x5c0693);
extern "C" void const* const public_5c069f = __AsmFindLabelExport(&internal_5c0670, 0x5c069f);
