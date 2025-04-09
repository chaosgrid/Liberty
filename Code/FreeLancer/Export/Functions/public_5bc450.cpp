#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc45c _public_5bc45c
#define public_5bc468 _public_5bc468
#define public_5bc473 _public_5bc473
#define public_5bc47f _public_5bc47f
#define public_5bc48b _public_5bc48b
#define public_5bc497 _public_5bc497
#define public_5bc4a2 _public_5bc4a2

PROC_DECLARE(0x5bc450, internal_5bc450, public_5bc450);
/* CHUNK of public_48cce0 */
extern "C" NAKED register_t __cdecl internal_5bc450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x103C]
        jmp dword ptr ds : [public_5c62c4]
        public_5bc45c : nop
        lea ecx, ss:[ebp-0x1018]
        jmp dword ptr ds : [public_5c62b4]
        public_5bc468 : nop
        lea ecx, ss:[ebp-0x1050]
        jmp public_45eeb0
        public_5bc473 : nop
        lea ecx, ss:[ebp-0x1030]
        jmp dword ptr ds : [public_5c6098]
        public_5bc47f : nop
        lea ecx, ss:[ebp-0x1048]
        jmp dword ptr ds : [public_5c62c4]
        public_5bc48b : nop
        lea ecx, ss:[ebp-0x1018]
        jmp dword ptr ds : [public_5c62b4]
        public_5bc497 : nop
        lea ecx, ss:[ebp-0x1050]
        jmp public_45eeb0
        public_5bc4a2 : nop
        mov eax, offset public_5f687c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc450)
        ASM_EXPORT_ENTRY_FIRST(0x5bc45c, public_5bc45c)
        ASM_EXPORT_ENTRY(0x5bc468, public_5bc468)
        ASM_EXPORT_ENTRY(0x5bc473, public_5bc473)
        ASM_EXPORT_ENTRY(0x5bc47f, public_5bc47f)
        ASM_EXPORT_ENTRY(0x5bc48b, public_5bc48b)
        ASM_EXPORT_ENTRY(0x5bc497, public_5bc497)
        ASM_EXPORT_ENTRY_LAST(0x5bc4a2, public_5bc4a2)
    }
}

#undef public_5bc45c
#undef public_5bc468
#undef public_5bc473
#undef public_5bc47f
#undef public_5bc48b
#undef public_5bc497
#undef public_5bc4a2

#pragma init_seg(compiler)
extern "C" void const* const public_5bc45c = __AsmFindLabelExport(&internal_5bc450, 0x5bc45c);
extern "C" void const* const public_5bc468 = __AsmFindLabelExport(&internal_5bc450, 0x5bc468);
extern "C" void const* const public_5bc473 = __AsmFindLabelExport(&internal_5bc450, 0x5bc473);
extern "C" void const* const public_5bc47f = __AsmFindLabelExport(&internal_5bc450, 0x5bc47f);
extern "C" void const* const public_5bc48b = __AsmFindLabelExport(&internal_5bc450, 0x5bc48b);
extern "C" void const* const public_5bc497 = __AsmFindLabelExport(&internal_5bc450, 0x5bc497);
extern "C" void const* const public_5bc4a2 = __AsmFindLabelExport(&internal_5bc450, 0x5bc4a2);
