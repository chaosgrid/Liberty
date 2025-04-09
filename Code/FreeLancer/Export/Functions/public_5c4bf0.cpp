#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4bf9 _public_5c4bf9
#define public_5c4c02 _public_5c4c02
#define public_5c4c0b _public_5c4c0b
#define public_5c4c14 _public_5c4c14
#define public_5c4c1d _public_5c4c1d

PROC_DECLARE(0x5c4bf0, internal_5c4bf0, public_5c4bf0);
/* CHUNK of public_59a110 */
extern "C" NAKED register_t __cdecl internal_5c4bf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c62bc]
        public_5c4bf9 : nop
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c62c8]
        public_5c4c02 : nop
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c62b4]
        public_5c4c0b : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_5c6308]
        public_5c4c14 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_5c62c8]
        public_5c4c1d : nop
        mov eax, offset public_5fe930
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4bf0)
        ASM_EXPORT_ENTRY_FIRST(0x5c4bf9, public_5c4bf9)
        ASM_EXPORT_ENTRY(0x5c4c02, public_5c4c02)
        ASM_EXPORT_ENTRY(0x5c4c0b, public_5c4c0b)
        ASM_EXPORT_ENTRY(0x5c4c14, public_5c4c14)
        ASM_EXPORT_ENTRY_LAST(0x5c4c1d, public_5c4c1d)
    }
}

#undef public_5c4bf9
#undef public_5c4c02
#undef public_5c4c0b
#undef public_5c4c14
#undef public_5c4c1d

#pragma init_seg(compiler)
extern "C" void const* const public_5c4bf9 = __AsmFindLabelExport(&internal_5c4bf0, 0x5c4bf9);
extern "C" void const* const public_5c4c02 = __AsmFindLabelExport(&internal_5c4bf0, 0x5c4c02);
extern "C" void const* const public_5c4c0b = __AsmFindLabelExport(&internal_5c4bf0, 0x5c4c0b);
extern "C" void const* const public_5c4c14 = __AsmFindLabelExport(&internal_5c4bf0, 0x5c4c14);
extern "C" void const* const public_5c4c1d = __AsmFindLabelExport(&internal_5c4bf0, 0x5c4c1d);
