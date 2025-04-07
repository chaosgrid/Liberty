#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d572a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6397c _public_6d6397c
#define public_6d63987 _public_6d63987
#define public_6d63992 _public_6d63992
#define public_6d6399d _public_6d6399d
#define public_6d639a8 _public_6d639a8

PROC_DECLARE(0x6d63970, internal_6d63970, public_6d63970);
/* CHUNK of public_6d53fd0 */
extern "C" NAKED register_t __cdecl internal_6d63970()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x244]
        jmp dword ptr ds : [public_6d64b94]
        public_6d6397c : nop
        lea ecx, ss:[ebp-0x254]
        jmp public_6d572a0
        public_6d63987 : nop
        lea ecx, ss:[ebp-0x254]
        jmp public_6ce36f0
        public_6d63992 : nop
        lea ecx, ss:[ebp-0x254]
        jmp public_6d572a0
        public_6d6399d : nop
        lea ecx, ss:[ebp-0x228]
        jmp public_6d572a0
        public_6d639a8 : nop
        mov eax, offset public_6d75bb4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63970)
        ASM_EXPORT_ENTRY_FIRST(0x6d6397c, public_6d6397c)
        ASM_EXPORT_ENTRY(0x6d63987, public_6d63987)
        ASM_EXPORT_ENTRY(0x6d63992, public_6d63992)
        ASM_EXPORT_ENTRY(0x6d6399d, public_6d6399d)
        ASM_EXPORT_ENTRY_LAST(0x6d639a8, public_6d639a8)
    }
}

#undef public_6d6397c
#undef public_6d63987
#undef public_6d63992
#undef public_6d6399d
#undef public_6d639a8

#pragma init_seg(compiler)
extern "C" void const* const public_6d6397c = __AsmFindLabelExport(&internal_6d63970, 0x6d6397c);
extern "C" void const* const public_6d63987 = __AsmFindLabelExport(&internal_6d63970, 0x6d63987);
extern "C" void const* const public_6d63992 = __AsmFindLabelExport(&internal_6d63970, 0x6d63992);
extern "C" void const* const public_6d6399d = __AsmFindLabelExport(&internal_6d63970, 0x6d6399d);
extern "C" void const* const public_6d639a8 = __AsmFindLabelExport(&internal_6d63970, 0x6d639a8);
