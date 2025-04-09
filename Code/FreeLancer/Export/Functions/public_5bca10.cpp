#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bca19 _public_5bca19
#define public_5bca22 _public_5bca22
#define public_5bca2a _public_5bca2a
#define public_5bca33 _public_5bca33
#define public_5bca3b _public_5bca3b

PROC_DECLARE(0x5bca10, internal_5bca10, public_5bca10);
/* CHUNK of public_497970 */
extern "C" NAKED register_t __cdecl internal_5bca10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c62c4]
        public_5bca19 : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_5c62b4]
        public_5bca22 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_45eeb0
        public_5bca2a : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_5c62b4]
        public_5bca33 : nop
        lea ecx, ss:[ebp+4]
        jmp public_45eeb0
        public_5bca3b : nop
        mov eax, offset public_5f6c40
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bca10)
        ASM_EXPORT_ENTRY_FIRST(0x5bca19, public_5bca19)
        ASM_EXPORT_ENTRY(0x5bca22, public_5bca22)
        ASM_EXPORT_ENTRY(0x5bca2a, public_5bca2a)
        ASM_EXPORT_ENTRY(0x5bca33, public_5bca33)
        ASM_EXPORT_ENTRY_LAST(0x5bca3b, public_5bca3b)
    }
}

#undef public_5bca19
#undef public_5bca22
#undef public_5bca2a
#undef public_5bca33
#undef public_5bca3b

#pragma init_seg(compiler)
extern "C" void const* const public_5bca19 = __AsmFindLabelExport(&internal_5bca10, 0x5bca19);
extern "C" void const* const public_5bca22 = __AsmFindLabelExport(&internal_5bca10, 0x5bca22);
extern "C" void const* const public_5bca2a = __AsmFindLabelExport(&internal_5bca10, 0x5bca2a);
extern "C" void const* const public_5bca33 = __AsmFindLabelExport(&internal_5bca10, 0x5bca33);
extern "C" void const* const public_5bca3b = __AsmFindLabelExport(&internal_5bca10, 0x5bca3b);
