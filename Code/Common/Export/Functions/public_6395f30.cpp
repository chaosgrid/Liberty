#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_62bb5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395f3b _public_6395f3b
#define public_6395f46 _public_6395f46
#define public_6395f51 _public_6395f51
#define public_6395f5c _public_6395f5c
#define public_6395f68 _public_6395f68
#define public_6395f74 _public_6395f74

PROC_DECLARE(0x6395f30, internal_6395f30, public_6395f30);
/* CHUNK of public_6300bf0 */
extern "C" NAKED register_t __cdecl internal_6395f30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263860
        public_6395f3b : nop
        lea ecx, ss:[ebp-0x19B4]
        jmp public_62a8920
        public_6395f46 : nop
        lea ecx, ss:[ebp-0x19F4]
        jmp public_62bb5a0
        public_6395f51 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_6395f5c : nop
        mov ecx, dword ptr ss : [ebp-0x1A3C]
        jmp dword ptr ds : [public_63991ac]
        public_6395f68 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_6395f74 : nop
        mov eax, offset public_63afcf4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395f30)
        ASM_EXPORT_ENTRY_FIRST(0x6395f3b, public_6395f3b)
        ASM_EXPORT_ENTRY(0x6395f46, public_6395f46)
        ASM_EXPORT_ENTRY(0x6395f51, public_6395f51)
        ASM_EXPORT_ENTRY(0x6395f5c, public_6395f5c)
        ASM_EXPORT_ENTRY(0x6395f68, public_6395f68)
        ASM_EXPORT_ENTRY_LAST(0x6395f74, public_6395f74)
    }
}

#undef public_6395f3b
#undef public_6395f46
#undef public_6395f51
#undef public_6395f5c
#undef public_6395f68
#undef public_6395f74

#pragma init_seg(compiler)
extern "C" void const* const public_6395f3b = __AsmFindLabelExport(&internal_6395f30, 0x6395f3b);
extern "C" void const* const public_6395f46 = __AsmFindLabelExport(&internal_6395f30, 0x6395f46);
extern "C" void const* const public_6395f51 = __AsmFindLabelExport(&internal_6395f30, 0x6395f51);
extern "C" void const* const public_6395f5c = __AsmFindLabelExport(&internal_6395f30, 0x6395f5c);
extern "C" void const* const public_6395f68 = __AsmFindLabelExport(&internal_6395f30, 0x6395f68);
extern "C" void const* const public_6395f74 = __AsmFindLabelExport(&internal_6395f30, 0x6395f74);
