#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba13c _public_5ba13c
#define public_5ba147 _public_5ba147
#define public_5ba153 _public_5ba153
#define public_5ba15f _public_5ba15f

PROC_DECLARE(0x5ba130, internal_5ba130, public_5ba130);
/* CHUNK of public_4583a0 */
extern "C" NAKED register_t __cdecl internal_5ba130()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5ba13c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5ba147 : nop
        mov ecx, dword ptr ss : [ebp-0x16AC]
        jmp dword ptr ds : [public_5c7090]
        public_5ba153 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5ba15f : nop
        mov eax, offset public_5f4500
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba130)
        ASM_EXPORT_ENTRY_FIRST(0x5ba13c, public_5ba13c)
        ASM_EXPORT_ENTRY(0x5ba147, public_5ba147)
        ASM_EXPORT_ENTRY(0x5ba153, public_5ba153)
        ASM_EXPORT_ENTRY_LAST(0x5ba15f, public_5ba15f)
    }
}

#undef public_5ba13c
#undef public_5ba147
#undef public_5ba153
#undef public_5ba15f

#pragma init_seg(compiler)
extern "C" void const* const public_5ba13c = __AsmFindLabelExport(&internal_5ba130, 0x5ba13c);
extern "C" void const* const public_5ba147 = __AsmFindLabelExport(&internal_5ba130, 0x5ba147);
extern "C" void const* const public_5ba153 = __AsmFindLabelExport(&internal_5ba130, 0x5ba153);
extern "C" void const* const public_5ba15f = __AsmFindLabelExport(&internal_5ba130, 0x5ba15f);
