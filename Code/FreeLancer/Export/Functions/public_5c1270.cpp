#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c127c _public_5c127c
#define public_5c1287 _public_5c1287
#define public_5c1293 _public_5c1293
#define public_5c129f _public_5c129f

PROC_DECLARE(0x5c1270, internal_5c1270, public_5c1270);
/* CHUNK of public_549830 */
extern "C" NAKED register_t __cdecl internal_5c1270()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5c127c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5c1287 : nop
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp dword ptr ds : [public_5c7090]
        public_5c1293 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5c129f : nop
        mov eax, offset public_5fb5c8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1270)
        ASM_EXPORT_ENTRY_FIRST(0x5c127c, public_5c127c)
        ASM_EXPORT_ENTRY(0x5c1287, public_5c1287)
        ASM_EXPORT_ENTRY(0x5c1293, public_5c1293)
        ASM_EXPORT_ENTRY_LAST(0x5c129f, public_5c129f)
    }
}

#undef public_5c127c
#undef public_5c1287
#undef public_5c1293
#undef public_5c129f

#pragma init_seg(compiler)
extern "C" void const* const public_5c127c = __AsmFindLabelExport(&internal_5c1270, 0x5c127c);
extern "C" void const* const public_5c1287 = __AsmFindLabelExport(&internal_5c1270, 0x5c1287);
extern "C" void const* const public_5c1293 = __AsmFindLabelExport(&internal_5c1270, 0x5c1293);
extern "C" void const* const public_5c129f = __AsmFindLabelExport(&internal_5c1270, 0x5c129f);
