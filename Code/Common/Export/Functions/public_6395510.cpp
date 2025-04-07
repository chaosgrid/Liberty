#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639551b _public_639551b
#define public_6395526 _public_6395526
#define public_6395532 _public_6395532
#define public_639553e _public_639553e

PROC_DECLARE(0x6395510, internal_6395510, public_6395510);
/* CHUNK of public_62f1000 */
extern "C" NAKED register_t __cdecl internal_6395510()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263860
        public_639551b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_6395526 : nop
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp dword ptr ds : [public_63991ac]
        public_6395532 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_639553e : nop
        mov eax, offset public_63af00c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395510)
        ASM_EXPORT_ENTRY_FIRST(0x639551b, public_639551b)
        ASM_EXPORT_ENTRY(0x6395526, public_6395526)
        ASM_EXPORT_ENTRY(0x6395532, public_6395532)
        ASM_EXPORT_ENTRY_LAST(0x639553e, public_639553e)
    }
}

#undef public_639551b
#undef public_6395526
#undef public_6395532
#undef public_639553e

#pragma init_seg(compiler)
extern "C" void const* const public_639551b = __AsmFindLabelExport(&internal_6395510, 0x639551b);
extern "C" void const* const public_6395526 = __AsmFindLabelExport(&internal_6395510, 0x6395526);
extern "C" void const* const public_6395532 = __AsmFindLabelExport(&internal_6395510, 0x6395532);
extern "C" void const* const public_639553e = __AsmFindLabelExport(&internal_6395510, 0x639553e);
