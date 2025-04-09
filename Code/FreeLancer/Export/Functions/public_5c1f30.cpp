#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_565830);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1f3b _public_5c1f3b
#define public_5c1f43 _public_5c1f43
#define public_5c1f4b _public_5c1f4b
#define public_5c1f53 _public_5c1f53
#define public_5c1f5b _public_5c1f5b
#define public_5c1f63 _public_5c1f63

PROC_DECLARE(0x5c1f30, internal_5c1f30, public_5c1f30);
/* CHUNK of public_565490 */
extern "C" NAKED register_t __cdecl internal_5c1f30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x88]
        jmp public_526a20
        public_5c1f3b : nop
        lea ecx, ss:[ebp-0x80]
        jmp public_565830
        public_5c1f43 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_526a20
        public_5c1f4b : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_526a20
        public_5c1f53 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_526a20
        public_5c1f5b : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_526a20
        public_5c1f63 : nop
        mov eax, offset public_5fc23c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1f30)
        ASM_EXPORT_ENTRY_FIRST(0x5c1f3b, public_5c1f3b)
        ASM_EXPORT_ENTRY(0x5c1f43, public_5c1f43)
        ASM_EXPORT_ENTRY(0x5c1f4b, public_5c1f4b)
        ASM_EXPORT_ENTRY(0x5c1f53, public_5c1f53)
        ASM_EXPORT_ENTRY(0x5c1f5b, public_5c1f5b)
        ASM_EXPORT_ENTRY_LAST(0x5c1f63, public_5c1f63)
    }
}

#undef public_5c1f3b
#undef public_5c1f43
#undef public_5c1f4b
#undef public_5c1f53
#undef public_5c1f5b
#undef public_5c1f63

#pragma init_seg(compiler)
extern "C" void const* const public_5c1f3b = __AsmFindLabelExport(&internal_5c1f30, 0x5c1f3b);
extern "C" void const* const public_5c1f43 = __AsmFindLabelExport(&internal_5c1f30, 0x5c1f43);
extern "C" void const* const public_5c1f4b = __AsmFindLabelExport(&internal_5c1f30, 0x5c1f4b);
extern "C" void const* const public_5c1f53 = __AsmFindLabelExport(&internal_5c1f30, 0x5c1f53);
extern "C" void const* const public_5c1f5b = __AsmFindLabelExport(&internal_5c1f30, 0x5c1f5b);
extern "C" void const* const public_5c1f63 = __AsmFindLabelExport(&internal_5c1f30, 0x5c1f63);
