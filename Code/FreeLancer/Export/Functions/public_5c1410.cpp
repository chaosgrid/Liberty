#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c141c _public_5c141c
#define public_5c1427 _public_5c1427
#define public_5c1433 _public_5c1433
#define public_5c143f _public_5c143f

PROC_DECLARE(0x5c1410, internal_5c1410, public_5c1410);
/* CHUNK of public_553740 */
extern "C" NAKED register_t __cdecl internal_5c1410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5c141c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5c1427 : nop
        mov ecx, dword ptr ss : [ebp-0x180C]
        jmp dword ptr ds : [public_5c7090]
        public_5c1433 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5c143f : nop
        mov eax, offset public_5fb78c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1410)
        ASM_EXPORT_ENTRY_FIRST(0x5c141c, public_5c141c)
        ASM_EXPORT_ENTRY(0x5c1427, public_5c1427)
        ASM_EXPORT_ENTRY(0x5c1433, public_5c1433)
        ASM_EXPORT_ENTRY_LAST(0x5c143f, public_5c143f)
    }
}

#undef public_5c141c
#undef public_5c1427
#undef public_5c1433
#undef public_5c143f

#pragma init_seg(compiler)
extern "C" void const* const public_5c141c = __AsmFindLabelExport(&internal_5c1410, 0x5c141c);
extern "C" void const* const public_5c1427 = __AsmFindLabelExport(&internal_5c1410, 0x5c1427);
extern "C" void const* const public_5c1433 = __AsmFindLabelExport(&internal_5c1410, 0x5c1433);
extern "C" void const* const public_5c143f = __AsmFindLabelExport(&internal_5c1410, 0x5c143f);
