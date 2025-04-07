#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac42b _public_6fac42b
#define public_6fac436 _public_6fac436
#define public_6fac441 _public_6fac441
#define public_6fac449 _public_6fac449
#define public_6fac451 _public_6fac451
#define public_6fac459 _public_6fac459

PROC_DECLARE(0x6fac420, internal_6fac420, public_6fac420);
/* CHUNK of public_6ef5ca0 */
extern "C" NAKED register_t __cdecl internal_6fac420()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x8C]
        jmp public_6eec8d0
        public_6fac42b : nop
        lea ecx, ss:[ebp-0x8C]
        jmp public_6ef6330
        public_6fac436 : nop
        lea ecx, ss:[ebp-0x8C]
        jmp public_6eec8d0
        public_6fac441 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp public_6eec8d0
        public_6fac449 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp public_6ef6330
        public_6fac451 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp public_6eec8d0
        public_6fac459 : nop
        mov eax, offset public_6fc10c8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac420)
        ASM_EXPORT_ENTRY_FIRST(0x6fac42b, public_6fac42b)
        ASM_EXPORT_ENTRY(0x6fac436, public_6fac436)
        ASM_EXPORT_ENTRY(0x6fac441, public_6fac441)
        ASM_EXPORT_ENTRY(0x6fac449, public_6fac449)
        ASM_EXPORT_ENTRY(0x6fac451, public_6fac451)
        ASM_EXPORT_ENTRY_LAST(0x6fac459, public_6fac459)
    }
}

#undef public_6fac42b
#undef public_6fac436
#undef public_6fac441
#undef public_6fac449
#undef public_6fac451
#undef public_6fac459

#pragma init_seg(compiler)
extern "C" void const* const public_6fac42b = __AsmFindLabelExport(&internal_6fac420, 0x6fac42b);
extern "C" void const* const public_6fac436 = __AsmFindLabelExport(&internal_6fac420, 0x6fac436);
extern "C" void const* const public_6fac441 = __AsmFindLabelExport(&internal_6fac420, 0x6fac441);
extern "C" void const* const public_6fac449 = __AsmFindLabelExport(&internal_6fac420, 0x6fac449);
extern "C" void const* const public_6fac451 = __AsmFindLabelExport(&internal_6fac420, 0x6fac451);
extern "C" void const* const public_6fac459 = __AsmFindLabelExport(&internal_6fac420, 0x6fac459);
