#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c6010);
CLANG_FORWARD_PROC_SYMBOL(public_4c60a0);
CLANG_FORWARD_PROC_SYMBOL(public_5a6830);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c51f8 _public_5c51f8
#define public_5c5203 _public_5c5203
#define public_5c5212 _public_5c5212
#define public_5c521d _public_5c521d
#define public_5c5228 _public_5c5228
#define public_5c5237 _public_5c5237
#define public_5c523f _public_5c523f
#define public_5c5248 _public_5c5248

PROC_DECLARE(0x5c51f0, internal_5c51f0, public_5c51f0);
/* CHUNK of public_5a6620 */
extern "C" NAKED register_t __cdecl internal_5c51f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x50]
        jmp public_5a6830
        public_5c51f8 : nop
        mov ecx, dword ptr ss : [ebp-0xA4]
        jmp public_4c60a0
        public_5c5203 : nop
        mov ecx, dword ptr ss : [ebp-0xA4]
        add ecx, 0x10
        jmp dword ptr ds : [public_5c6098]
        public_5c5212 : nop
        lea ecx, ss:[ebp-0x98]
        jmp public_4c6010
        public_5c521d : nop
        mov ecx, dword ptr ss : [ebp-0xA4]
        jmp public_4c60a0
        public_5c5228 : nop
        mov ecx, dword ptr ss : [ebp-0xA4]
        add ecx, 0x10
        jmp dword ptr ds : [public_5c6098]
        public_5c5237 : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_4c60a0
        public_5c523f : nop
        lea ecx, ss:[ebp-0x40]
        jmp dword ptr ds : [public_5c6098]
        public_5c5248 : nop
        mov eax, offset public_5ff0b4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c51f0)
        ASM_EXPORT_ENTRY_FIRST(0x5c51f8, public_5c51f8)
        ASM_EXPORT_ENTRY(0x5c5203, public_5c5203)
        ASM_EXPORT_ENTRY(0x5c5212, public_5c5212)
        ASM_EXPORT_ENTRY(0x5c521d, public_5c521d)
        ASM_EXPORT_ENTRY(0x5c5228, public_5c5228)
        ASM_EXPORT_ENTRY(0x5c5237, public_5c5237)
        ASM_EXPORT_ENTRY(0x5c523f, public_5c523f)
        ASM_EXPORT_ENTRY_LAST(0x5c5248, public_5c5248)
    }
}

#undef public_5c51f8
#undef public_5c5203
#undef public_5c5212
#undef public_5c521d
#undef public_5c5228
#undef public_5c5237
#undef public_5c523f
#undef public_5c5248

#pragma init_seg(compiler)
extern "C" void const* const public_5c51f8 = __AsmFindLabelExport(&internal_5c51f0, 0x5c51f8);
extern "C" void const* const public_5c5203 = __AsmFindLabelExport(&internal_5c51f0, 0x5c5203);
extern "C" void const* const public_5c5212 = __AsmFindLabelExport(&internal_5c51f0, 0x5c5212);
extern "C" void const* const public_5c521d = __AsmFindLabelExport(&internal_5c51f0, 0x5c521d);
extern "C" void const* const public_5c5228 = __AsmFindLabelExport(&internal_5c51f0, 0x5c5228);
extern "C" void const* const public_5c5237 = __AsmFindLabelExport(&internal_5c51f0, 0x5c5237);
extern "C" void const* const public_5c523f = __AsmFindLabelExport(&internal_5c51f0, 0x5c523f);
extern "C" void const* const public_5c5248 = __AsmFindLabelExport(&internal_5c51f0, 0x5c5248);
