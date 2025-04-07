#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfb030);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60c5c _public_6d60c5c
#define public_6d60c67 _public_6d60c67
#define public_6d60c73 _public_6d60c73
#define public_6d60c7f _public_6d60c7f

PROC_DECLARE(0x6d60c50, internal_6d60c50, public_6d60c50);
/* CHUNK of public_6cfb2e0 */
extern "C" NAKED register_t __cdecl internal_6d60c50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d644e0]
        public_6d60c5c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6cfb030
        public_6d60c67 : nop
        mov ecx, dword ptr ss : [ebp-0x16F8]
        jmp dword ptr ds : [public_6d64b94]
        public_6d60c73 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d64b94]
        public_6d60c7f : nop
        mov eax, offset public_6d715e0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60c50)
        ASM_EXPORT_ENTRY_FIRST(0x6d60c5c, public_6d60c5c)
        ASM_EXPORT_ENTRY(0x6d60c67, public_6d60c67)
        ASM_EXPORT_ENTRY(0x6d60c73, public_6d60c73)
        ASM_EXPORT_ENTRY_LAST(0x6d60c7f, public_6d60c7f)
    }
}

#undef public_6d60c5c
#undef public_6d60c67
#undef public_6d60c73
#undef public_6d60c7f

#pragma init_seg(compiler)
extern "C" void const* const public_6d60c5c = __AsmFindLabelExport(&internal_6d60c50, 0x6d60c5c);
extern "C" void const* const public_6d60c67 = __AsmFindLabelExport(&internal_6d60c50, 0x6d60c67);
extern "C" void const* const public_6d60c73 = __AsmFindLabelExport(&internal_6d60c50, 0x6d60c73);
extern "C" void const* const public_6d60c7f = __AsmFindLabelExport(&internal_6d60c50, 0x6d60c7f);
