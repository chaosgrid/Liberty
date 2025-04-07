#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c591c _public_5c591c
#define public_5c5927 _public_5c5927
#define public_5c5933 _public_5c5933
#define public_5c593f _public_5c593f

PROC_DECLARE(0x5c5910, internal_5c5910, public_5c5910);
/* CHUNK of public_5b0c30 */
extern "C" NAKED register_t __cdecl internal_5c5910()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_5c6048]
        public_5c591c : nop
        lea ecx, ss:[ebp-0x1678]
        jmp public_40edf0
        public_5c5927 : nop
        mov ecx, dword ptr ss : [ebp-0x1780]
        jmp dword ptr ds : [public_5c7090]
        public_5c5933 : nop
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_5c7090]
        public_5c593f : nop
        mov eax, offset public_5ff6fc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5910)
        ASM_EXPORT_ENTRY_FIRST(0x5c591c, public_5c591c)
        ASM_EXPORT_ENTRY(0x5c5927, public_5c5927)
        ASM_EXPORT_ENTRY(0x5c5933, public_5c5933)
        ASM_EXPORT_ENTRY_LAST(0x5c593f, public_5c593f)
    }
}

#undef public_5c591c
#undef public_5c5927
#undef public_5c5933
#undef public_5c593f

#pragma init_seg(compiler)
extern "C" void const* const public_5c591c = __AsmFindLabelExport(&internal_5c5910, 0x5c591c);
extern "C" void const* const public_5c5927 = __AsmFindLabelExport(&internal_5c5910, 0x5c5927);
extern "C" void const* const public_5c5933 = __AsmFindLabelExport(&internal_5c5910, 0x5c5933);
extern "C" void const* const public_5c593f = __AsmFindLabelExport(&internal_5c5910, 0x5c593f);
