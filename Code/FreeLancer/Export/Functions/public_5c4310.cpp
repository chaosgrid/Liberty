#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5870b0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4318 _public_5c4318
#define public_5c4326 _public_5c4326
#define public_5c4334 _public_5c4334
#define public_5c4343 _public_5c4343
#define public_5c4351 _public_5c4351
#define public_5c435f _public_5c435f
#define public_5c436d _public_5c436d

PROC_DECLARE(0x5c4310, internal_5c4310, public_5c4310);
/* CHUNK of public_583c30 */
extern "C" NAKED register_t __cdecl internal_5c4310()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5c4318 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x330
        jmp public_59ef20
        public_5c4326 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x388
        jmp public_48e5f0
        public_5c4334 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C8
        jmp dword ptr ds : [public_5c60fc]
        public_5c4343 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x538
        jmp public_4de730
        public_5c4351 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x54C
        jmp public_4de730
        public_5c435f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x560
        jmp public_5870b0
        public_5c436d : nop
        mov eax, offset public_5fdf60
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4310)
        ASM_EXPORT_ENTRY_FIRST(0x5c4318, public_5c4318)
        ASM_EXPORT_ENTRY(0x5c4326, public_5c4326)
        ASM_EXPORT_ENTRY(0x5c4334, public_5c4334)
        ASM_EXPORT_ENTRY(0x5c4343, public_5c4343)
        ASM_EXPORT_ENTRY(0x5c4351, public_5c4351)
        ASM_EXPORT_ENTRY(0x5c435f, public_5c435f)
        ASM_EXPORT_ENTRY_LAST(0x5c436d, public_5c436d)
    }
}

#undef public_5c4318
#undef public_5c4326
#undef public_5c4334
#undef public_5c4343
#undef public_5c4351
#undef public_5c435f
#undef public_5c436d

#pragma init_seg(compiler)
extern "C" void const* const public_5c4318 = __AsmFindLabelExport(&internal_5c4310, 0x5c4318);
extern "C" void const* const public_5c4326 = __AsmFindLabelExport(&internal_5c4310, 0x5c4326);
extern "C" void const* const public_5c4334 = __AsmFindLabelExport(&internal_5c4310, 0x5c4334);
extern "C" void const* const public_5c4343 = __AsmFindLabelExport(&internal_5c4310, 0x5c4343);
extern "C" void const* const public_5c4351 = __AsmFindLabelExport(&internal_5c4310, 0x5c4351);
extern "C" void const* const public_5c435f = __AsmFindLabelExport(&internal_5c4310, 0x5c435f);
extern "C" void const* const public_5c436d = __AsmFindLabelExport(&internal_5c4310, 0x5c436d);
