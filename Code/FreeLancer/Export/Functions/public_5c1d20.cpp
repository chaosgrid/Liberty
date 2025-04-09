#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1d2c _public_5c1d2c
#define public_5c1d37 _public_5c1d37
#define public_5c1d43 _public_5c1d43
#define public_5c1d4f _public_5c1d4f

PROC_DECLARE(0x5c1d20, internal_5c1d20, public_5c1d20);
/* CHUNK of public_5621a0 */
extern "C" NAKED register_t __cdecl internal_5c1d20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5c1d2c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5c1d37 : nop
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp dword ptr ds : [public_5c7090]
        public_5c1d43 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5c1d4f : nop
        mov eax, offset public_5fbfb8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1d20)
        ASM_EXPORT_ENTRY_FIRST(0x5c1d2c, public_5c1d2c)
        ASM_EXPORT_ENTRY(0x5c1d37, public_5c1d37)
        ASM_EXPORT_ENTRY(0x5c1d43, public_5c1d43)
        ASM_EXPORT_ENTRY_LAST(0x5c1d4f, public_5c1d4f)
    }
}

#undef public_5c1d2c
#undef public_5c1d37
#undef public_5c1d43
#undef public_5c1d4f

#pragma init_seg(compiler)
extern "C" void const* const public_5c1d2c = __AsmFindLabelExport(&internal_5c1d20, 0x5c1d2c);
extern "C" void const* const public_5c1d37 = __AsmFindLabelExport(&internal_5c1d20, 0x5c1d37);
extern "C" void const* const public_5c1d43 = __AsmFindLabelExport(&internal_5c1d20, 0x5c1d43);
extern "C" void const* const public_5c1d4f = __AsmFindLabelExport(&internal_5c1d20, 0x5c1d4f);
