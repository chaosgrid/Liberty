#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb4c9 _public_5bb4c9
#define public_5bb4d1 _public_5bb4d1
#define public_5bb4da _public_5bb4da
#define public_5bb4e2 _public_5bb4e2

PROC_DECLARE(0x5bb4c0, internal_5bb4c0, public_5bb4c0);
/* CHUNK of public_4684e0 */
extern "C" NAKED register_t __cdecl internal_5bb4c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp dword ptr ds : [public_5c62c8]
        public_5bb4c9 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_45eeb0
        public_5bb4d1 : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_5c62d4]
        public_5bb4da : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_45eeb0
        public_5bb4e2 : nop
        mov eax, offset public_5f5690
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb4c0)
        ASM_EXPORT_ENTRY_FIRST(0x5bb4c9, public_5bb4c9)
        ASM_EXPORT_ENTRY(0x5bb4d1, public_5bb4d1)
        ASM_EXPORT_ENTRY(0x5bb4da, public_5bb4da)
        ASM_EXPORT_ENTRY_LAST(0x5bb4e2, public_5bb4e2)
    }
}

#undef public_5bb4c9
#undef public_5bb4d1
#undef public_5bb4da
#undef public_5bb4e2

#pragma init_seg(compiler)
extern "C" void const* const public_5bb4c9 = __AsmFindLabelExport(&internal_5bb4c0, 0x5bb4c9);
extern "C" void const* const public_5bb4d1 = __AsmFindLabelExport(&internal_5bb4c0, 0x5bb4d1);
extern "C" void const* const public_5bb4da = __AsmFindLabelExport(&internal_5bb4c0, 0x5bb4da);
extern "C" void const* const public_5bb4e2 = __AsmFindLabelExport(&internal_5bb4c0, 0x5bb4e2);
