#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbb09 _public_5bbb09
#define public_5bbb12 _public_5bbb12
#define public_5bbb1a _public_5bbb1a

PROC_DECLARE(0x5bbb00, internal_5bbb00, public_5bbb00);
/* CHUNK of public_473770 */
extern "C" NAKED register_t __cdecl internal_5bbb00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c62c4]
        public_5bbb09 : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_5c62b4]
        public_5bbb12 : nop
        lea ecx, ss:[ebp+8]
        jmp public_45eeb0
        public_5bbb1a : nop
        mov eax, offset public_5f5e4c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbb00)
        ASM_EXPORT_ENTRY_FIRST(0x5bbb09, public_5bbb09)
        ASM_EXPORT_ENTRY(0x5bbb12, public_5bbb12)
        ASM_EXPORT_ENTRY_LAST(0x5bbb1a, public_5bbb1a)
    }
}

#undef public_5bbb09
#undef public_5bbb12
#undef public_5bbb1a

#pragma init_seg(compiler)
extern "C" void const* const public_5bbb09 = __AsmFindLabelExport(&internal_5bbb00, 0x5bbb09);
extern "C" void const* const public_5bbb12 = __AsmFindLabelExport(&internal_5bbb00, 0x5bbb12);
extern "C" void const* const public_5bbb1a = __AsmFindLabelExport(&internal_5bbb00, 0x5bbb1a);
