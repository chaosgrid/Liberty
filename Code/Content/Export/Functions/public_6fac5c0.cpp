#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef38e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6640);
CLANG_FORWARD_PROC_SYMBOL(public_6ef93c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef94e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac5cb _public_6fac5cb
#define public_6fac5d7 _public_6fac5d7
#define public_6fac5e2 _public_6fac5e2
#define public_6fac5ed _public_6fac5ed
#define public_6fac5f8 _public_6fac5f8
#define public_6fac603 _public_6fac603
#define public_6fac60e _public_6fac60e

PROC_DECLARE(0x6fac5c0, internal_6fac5c0, public_6fac5c0);
/* CHUNK of public_6ef9000 */
extern "C" NAKED register_t __cdecl internal_6fac5c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xCB0]
        jmp public_6ef93c0
        public_6fac5cb : nop
        lea ecx, ss:[ebp-0xCCC]
        jmp dword ptr ds : [public_6fb3138]
        public_6fac5d7 : nop
        lea ecx, ss:[ebp-0xC64]
        jmp public_6ef94e0
        public_6fac5e2 : nop
        lea ecx, ss:[ebp-0xC4C]
        jmp public_6ef38e0
        public_6fac5ed : nop
        lea ecx, ss:[ebp-0xC38]
        jmp public_6ef6640
        public_6fac5f8 : nop
        lea ecx, ss:[ebp-0xC98]
        jmp public_6ef38e0
        public_6fac603 : nop
        lea ecx, ss:[ebp-0xC84]
        jmp public_6ef6640
        public_6fac60e : nop
        mov eax, offset public_6fc1260
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac5c0)
        ASM_EXPORT_ENTRY_FIRST(0x6fac5cb, public_6fac5cb)
        ASM_EXPORT_ENTRY(0x6fac5d7, public_6fac5d7)
        ASM_EXPORT_ENTRY(0x6fac5e2, public_6fac5e2)
        ASM_EXPORT_ENTRY(0x6fac5ed, public_6fac5ed)
        ASM_EXPORT_ENTRY(0x6fac5f8, public_6fac5f8)
        ASM_EXPORT_ENTRY(0x6fac603, public_6fac603)
        ASM_EXPORT_ENTRY_LAST(0x6fac60e, public_6fac60e)
    }
}

#undef public_6fac5cb
#undef public_6fac5d7
#undef public_6fac5e2
#undef public_6fac5ed
#undef public_6fac5f8
#undef public_6fac603
#undef public_6fac60e

#pragma init_seg(compiler)
extern "C" void const* const public_6fac5cb = __AsmFindLabelExport(&internal_6fac5c0, 0x6fac5cb);
extern "C" void const* const public_6fac5d7 = __AsmFindLabelExport(&internal_6fac5c0, 0x6fac5d7);
extern "C" void const* const public_6fac5e2 = __AsmFindLabelExport(&internal_6fac5c0, 0x6fac5e2);
extern "C" void const* const public_6fac5ed = __AsmFindLabelExport(&internal_6fac5c0, 0x6fac5ed);
extern "C" void const* const public_6fac5f8 = __AsmFindLabelExport(&internal_6fac5c0, 0x6fac5f8);
extern "C" void const* const public_6fac603 = __AsmFindLabelExport(&internal_6fac5c0, 0x6fac603);
extern "C" void const* const public_6fac60e = __AsmFindLabelExport(&internal_6fac5c0, 0x6fac60e);
