#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb096b _public_6fb096b
#define public_6fb0976 _public_6fb0976
#define public_6fb0981 _public_6fb0981
#define public_6fb098c _public_6fb098c

PROC_DECLARE(0x6fb0960, internal_6fb0960, public_6fb0960);
/* CHUNK of public_6f83af0 */
extern "C" NAKED register_t __cdecl internal_6fb0960()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xFC]
        jmp public_6f15350
        public_6fb096b : nop
        lea ecx, ss:[ebp-0xE8]
        jmp public_6ecfa90
        public_6fb0976 : nop
        lea ecx, ss:[ebp-0x104]
        jmp public_6f28e10
        public_6fb0981 : nop
        lea ecx, ss:[ebp-0xE8]
        jmp public_6f15350
        public_6fb098c : nop
        mov eax, offset public_6fc5c2c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0960)
        ASM_EXPORT_ENTRY_FIRST(0x6fb096b, public_6fb096b)
        ASM_EXPORT_ENTRY(0x6fb0976, public_6fb0976)
        ASM_EXPORT_ENTRY(0x6fb0981, public_6fb0981)
        ASM_EXPORT_ENTRY_LAST(0x6fb098c, public_6fb098c)
    }
}

#undef public_6fb096b
#undef public_6fb0976
#undef public_6fb0981
#undef public_6fb098c

#pragma init_seg(compiler)
extern "C" void const* const public_6fb096b = __AsmFindLabelExport(&internal_6fb0960, 0x6fb096b);
extern "C" void const* const public_6fb0976 = __AsmFindLabelExport(&internal_6fb0960, 0x6fb0976);
extern "C" void const* const public_6fb0981 = __AsmFindLabelExport(&internal_6fb0960, 0x6fb0981);
extern "C" void const* const public_6fb098c = __AsmFindLabelExport(&internal_6fb0960, 0x6fb098c);
