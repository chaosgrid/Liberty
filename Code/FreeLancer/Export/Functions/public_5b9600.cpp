#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b960c _public_5b960c
#define public_5b9617 _public_5b9617
#define public_5b9623 _public_5b9623
#define public_5b962f _public_5b962f

PROC_DECLARE(0x5b9600, internal_5b9600, public_5b9600);
/* CHUNK of public_43dc40 */
extern "C" NAKED register_t __cdecl internal_5b9600()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5b960c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5b9617 : nop
        mov ecx, dword ptr ss : [ebp-0x1678]
        jmp dword ptr ds : [public_5c7090]
        public_5b9623 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5b962f : nop
        mov eax, offset public_5f35d4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9600)
        ASM_EXPORT_ENTRY_FIRST(0x5b960c, public_5b960c)
        ASM_EXPORT_ENTRY(0x5b9617, public_5b9617)
        ASM_EXPORT_ENTRY(0x5b9623, public_5b9623)
        ASM_EXPORT_ENTRY_LAST(0x5b962f, public_5b962f)
    }
}

#undef public_5b960c
#undef public_5b9617
#undef public_5b9623
#undef public_5b962f

#pragma init_seg(compiler)
extern "C" void const* const public_5b960c = __AsmFindLabelExport(&internal_5b9600, 0x5b960c);
extern "C" void const* const public_5b9617 = __AsmFindLabelExport(&internal_5b9600, 0x5b9617);
extern "C" void const* const public_5b9623 = __AsmFindLabelExport(&internal_5b9600, 0x5b9623);
extern "C" void const* const public_5b962f = __AsmFindLabelExport(&internal_5b9600, 0x5b962f);
