#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfb030);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60bfc _public_6d60bfc
#define public_6d60c07 _public_6d60c07
#define public_6d60c13 _public_6d60c13
#define public_6d60c1f _public_6d60c1f

PROC_DECLARE(0x6d60bf0, internal_6d60bf0, public_6d60bf0);
/* CHUNK of public_6cfad60 */
extern "C" NAKED register_t __cdecl internal_6d60bf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d644e0]
        public_6d60bfc : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6cfb030
        public_6d60c07 : nop
        mov ecx, dword ptr ss : [ebp-0x167C]
        jmp dword ptr ds : [public_6d64b94]
        public_6d60c13 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d64b94]
        public_6d60c1f : nop
        mov eax, offset public_6d71580
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60bf0)
        ASM_EXPORT_ENTRY_FIRST(0x6d60bfc, public_6d60bfc)
        ASM_EXPORT_ENTRY(0x6d60c07, public_6d60c07)
        ASM_EXPORT_ENTRY(0x6d60c13, public_6d60c13)
        ASM_EXPORT_ENTRY_LAST(0x6d60c1f, public_6d60c1f)
    }
}

#undef public_6d60bfc
#undef public_6d60c07
#undef public_6d60c13
#undef public_6d60c1f

#pragma init_seg(compiler)
extern "C" void const* const public_6d60bfc = __AsmFindLabelExport(&internal_6d60bf0, 0x6d60bfc);
extern "C" void const* const public_6d60c07 = __AsmFindLabelExport(&internal_6d60bf0, 0x6d60c07);
extern "C" void const* const public_6d60c13 = __AsmFindLabelExport(&internal_6d60bf0, 0x6d60c13);
extern "C" void const* const public_6d60c1f = __AsmFindLabelExport(&internal_6d60bf0, 0x6d60c1f);
