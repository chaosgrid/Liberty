#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1edc _public_5c1edc
#define public_5c1ee7 _public_5c1ee7
#define public_5c1ef3 _public_5c1ef3
#define public_5c1eff _public_5c1eff

PROC_DECLARE(0x5c1ed0, internal_5c1ed0, public_5c1ed0);
/* CHUNK of public_564b30 */
extern "C" NAKED register_t __cdecl internal_5c1ed0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5c1edc : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5c1ee7 : nop
        mov ecx, dword ptr ss : [ebp-0x167C]
        jmp dword ptr ds : [public_5c7090]
        public_5c1ef3 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5c1eff : nop
        mov eax, offset public_5fc1a0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1ed0)
        ASM_EXPORT_ENTRY_FIRST(0x5c1edc, public_5c1edc)
        ASM_EXPORT_ENTRY(0x5c1ee7, public_5c1ee7)
        ASM_EXPORT_ENTRY(0x5c1ef3, public_5c1ef3)
        ASM_EXPORT_ENTRY_LAST(0x5c1eff, public_5c1eff)
    }
}

#undef public_5c1edc
#undef public_5c1ee7
#undef public_5c1ef3
#undef public_5c1eff

#pragma init_seg(compiler)
extern "C" void const* const public_5c1edc = __AsmFindLabelExport(&internal_5c1ed0, 0x5c1edc);
extern "C" void const* const public_5c1ee7 = __AsmFindLabelExport(&internal_5c1ed0, 0x5c1ee7);
extern "C" void const* const public_5c1ef3 = __AsmFindLabelExport(&internal_5c1ed0, 0x5c1ef3);
extern "C" void const* const public_5c1eff = __AsmFindLabelExport(&internal_5c1ed0, 0x5c1eff);
