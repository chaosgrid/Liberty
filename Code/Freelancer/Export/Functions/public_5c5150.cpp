#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c6010);
CLANG_FORWARD_PROC_SYMBOL(public_4c60a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c60e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a6830);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c515b _public_5c515b
#define public_5c5167 _public_5c5167
#define public_5c5172 _public_5c5172
#define public_5c517a _public_5c517a
#define public_5c5185 _public_5c5185

PROC_DECLARE(0x5c5150, internal_5c5150, public_5c5150);
/* CHUNK of public_5a5bc0 */
extern "C" NAKED register_t __cdecl internal_5c5150()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x98]
        jmp public_4c60a0
        public_5c515b : nop
        lea ecx, ss:[ebp-0x88]
        jmp dword ptr ds : [public_5c6098]
        public_5c5167 : nop
        lea ecx, ss:[ebp-0x98]
        jmp public_5a6830
        public_5c5172 : nop
        lea ecx, ss:[ebp-0x54]
        jmp public_4c6010
        public_5c517a : nop
        lea ecx, ss:[ebp-0xBC]
        jmp public_4c60e0
        public_5c5185 : nop
        mov eax, offset public_5feff0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5150)
        ASM_EXPORT_ENTRY_FIRST(0x5c515b, public_5c515b)
        ASM_EXPORT_ENTRY(0x5c5167, public_5c5167)
        ASM_EXPORT_ENTRY(0x5c5172, public_5c5172)
        ASM_EXPORT_ENTRY(0x5c517a, public_5c517a)
        ASM_EXPORT_ENTRY_LAST(0x5c5185, public_5c5185)
    }
}

#undef public_5c515b
#undef public_5c5167
#undef public_5c5172
#undef public_5c517a
#undef public_5c5185

#pragma init_seg(compiler)
extern "C" void const* const public_5c515b = __AsmFindLabelExport(&internal_5c5150, 0x5c515b);
extern "C" void const* const public_5c5167 = __AsmFindLabelExport(&internal_5c5150, 0x5c5167);
extern "C" void const* const public_5c5172 = __AsmFindLabelExport(&internal_5c5150, 0x5c5172);
extern "C" void const* const public_5c517a = __AsmFindLabelExport(&internal_5c5150, 0x5c517a);
extern "C" void const* const public_5c5185 = __AsmFindLabelExport(&internal_5c5150, 0x5c5185);
