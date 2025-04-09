#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be2be _public_5be2be
#define public_5be2c9 _public_5be2c9
#define public_5be2d7 _public_5be2d7
#define public_5be2e8 _public_5be2e8
#define public_5be2f9 _public_5be2f9
#define public_5be305 _public_5be305
#define public_5be316 _public_5be316

PROC_DECLARE(0x5be2b0, internal_5be2b0, public_5be2b0);
/* CHUNK of public_4d75e0 */
extern "C" NAKED register_t __cdecl internal_5be2b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x158]
        add ecx, 0x28
        jmp public_5154f0
        public_5be2be : nop
        mov ecx, dword ptr ss : [ebp-0x158]
        jmp public_4c8630
        public_5be2c9 : nop
        mov ecx, dword ptr ss : [ebp-0x158]
        add ecx, 0x38
        jmp public_59fa50
        public_5be2d7 : nop
        mov ecx, dword ptr ss : [ebp-0x158]
        add ecx, 0x364
        jmp public_576010
        public_5be2e8 : nop
        mov ecx, dword ptr ss : [ebp-0x158]
        add ecx, 0x37C
        jmp public_4de730
        public_5be2f9 : nop
        mov ecx, dword ptr ss : [ebp-0x18C]
        jmp dword ptr ds : [public_5c62a4]
        public_5be305 : nop
        mov ecx, dword ptr ss : [ebp-0x158]
        add ecx, 0x390
        jmp public_5154f0
        public_5be316 : nop
        mov eax, offset public_5f8644
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be2b0)
        ASM_EXPORT_ENTRY_FIRST(0x5be2be, public_5be2be)
        ASM_EXPORT_ENTRY(0x5be2c9, public_5be2c9)
        ASM_EXPORT_ENTRY(0x5be2d7, public_5be2d7)
        ASM_EXPORT_ENTRY(0x5be2e8, public_5be2e8)
        ASM_EXPORT_ENTRY(0x5be2f9, public_5be2f9)
        ASM_EXPORT_ENTRY(0x5be305, public_5be305)
        ASM_EXPORT_ENTRY_LAST(0x5be316, public_5be316)
    }
}

#undef public_5be2be
#undef public_5be2c9
#undef public_5be2d7
#undef public_5be2e8
#undef public_5be2f9
#undef public_5be305
#undef public_5be316

#pragma init_seg(compiler)
extern "C" void const* const public_5be2be = __AsmFindLabelExport(&internal_5be2b0, 0x5be2be);
extern "C" void const* const public_5be2c9 = __AsmFindLabelExport(&internal_5be2b0, 0x5be2c9);
extern "C" void const* const public_5be2d7 = __AsmFindLabelExport(&internal_5be2b0, 0x5be2d7);
extern "C" void const* const public_5be2e8 = __AsmFindLabelExport(&internal_5be2b0, 0x5be2e8);
extern "C" void const* const public_5be2f9 = __AsmFindLabelExport(&internal_5be2b0, 0x5be2f9);
extern "C" void const* const public_5be305 = __AsmFindLabelExport(&internal_5be2b0, 0x5be305);
extern "C" void const* const public_5be316 = __AsmFindLabelExport(&internal_5be2b0, 0x5be316);
