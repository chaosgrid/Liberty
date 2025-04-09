#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be019 _public_5be019
#define public_5be024 _public_5be024
#define public_5be02c _public_5be02c
#define public_5be037 _public_5be037
#define public_5be045 _public_5be045

PROC_DECLARE(0x5be010, internal_5be010, public_5be010);
/* CHUNK of public_4d4db0 */
extern "C" NAKED register_t __cdecl internal_5be010()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0xC]
        jmp dword ptr ds : [public_5c62a4]
        public_5be019 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_5154f0
        public_5be024 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4c8630
        public_5be02c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x38
        jmp public_59fa50
        public_5be037 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x364
        jmp public_576010
        public_5be045 : nop
        mov eax, offset public_5f83cc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be010)
        ASM_EXPORT_ENTRY_FIRST(0x5be019, public_5be019)
        ASM_EXPORT_ENTRY(0x5be024, public_5be024)
        ASM_EXPORT_ENTRY(0x5be02c, public_5be02c)
        ASM_EXPORT_ENTRY(0x5be037, public_5be037)
        ASM_EXPORT_ENTRY_LAST(0x5be045, public_5be045)
    }
}

#undef public_5be019
#undef public_5be024
#undef public_5be02c
#undef public_5be037
#undef public_5be045

#pragma init_seg(compiler)
extern "C" void const* const public_5be019 = __AsmFindLabelExport(&internal_5be010, 0x5be019);
extern "C" void const* const public_5be024 = __AsmFindLabelExport(&internal_5be010, 0x5be024);
extern "C" void const* const public_5be02c = __AsmFindLabelExport(&internal_5be010, 0x5be02c);
extern "C" void const* const public_5be037 = __AsmFindLabelExport(&internal_5be010, 0x5be037);
extern "C" void const* const public_5be045 = __AsmFindLabelExport(&internal_5be010, 0x5be045);
