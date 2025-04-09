#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_576ac0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3afc _public_5c3afc
#define public_5c3b08 _public_5c3b08
#define public_5c3b13 _public_5c3b13
#define public_5c3b1e _public_5c3b1e
#define public_5c3b2a _public_5c3b2a
#define public_5c3b36 _public_5c3b36

PROC_DECLARE(0x5c3af0, internal_5c3af0, public_5c3af0);
/* CHUNK of public_576bb0 */
extern "C" NAKED register_t __cdecl internal_5c3af0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5c3afc : nop
        lea ecx, ss:[ebp-0x1694]
        jmp dword ptr ds : [public_5c7090]
        public_5c3b08 : nop
        lea ecx, ss:[ebp-0x1694]
        jmp public_576ac0
        public_5c3b13 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5c3b1e : nop
        mov ecx, dword ptr ss : [ebp-0x16A0]
        jmp dword ptr ds : [public_5c7090]
        public_5c3b2a : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5c3b36 : nop
        mov eax, offset public_5fd7fc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3af0)
        ASM_EXPORT_ENTRY_FIRST(0x5c3afc, public_5c3afc)
        ASM_EXPORT_ENTRY(0x5c3b08, public_5c3b08)
        ASM_EXPORT_ENTRY(0x5c3b13, public_5c3b13)
        ASM_EXPORT_ENTRY(0x5c3b1e, public_5c3b1e)
        ASM_EXPORT_ENTRY(0x5c3b2a, public_5c3b2a)
        ASM_EXPORT_ENTRY_LAST(0x5c3b36, public_5c3b36)
    }
}

#undef public_5c3afc
#undef public_5c3b08
#undef public_5c3b13
#undef public_5c3b1e
#undef public_5c3b2a
#undef public_5c3b36

#pragma init_seg(compiler)
extern "C" void const* const public_5c3afc = __AsmFindLabelExport(&internal_5c3af0, 0x5c3afc);
extern "C" void const* const public_5c3b08 = __AsmFindLabelExport(&internal_5c3af0, 0x5c3b08);
extern "C" void const* const public_5c3b13 = __AsmFindLabelExport(&internal_5c3af0, 0x5c3b13);
extern "C" void const* const public_5c3b1e = __AsmFindLabelExport(&internal_5c3af0, 0x5c3b1e);
extern "C" void const* const public_5c3b2a = __AsmFindLabelExport(&internal_5c3af0, 0x5c3b2a);
extern "C" void const* const public_5c3b36 = __AsmFindLabelExport(&internal_5c3af0, 0x5c3b36);
