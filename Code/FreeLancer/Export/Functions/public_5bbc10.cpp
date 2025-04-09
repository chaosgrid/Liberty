#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbc1c _public_5bbc1c
#define public_5bbc28 _public_5bbc28
#define public_5bbc33 _public_5bbc33

PROC_DECLARE(0x5bbc10, internal_5bbc10, public_5bbc10);
/* CHUNK of public_474b90 */
extern "C" NAKED register_t __cdecl internal_5bbc10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1CC]
        jmp dword ptr ds : [public_5c62c4]
        public_5bbc1c : nop
        lea ecx, ss:[ebp-0x1B8]
        jmp dword ptr ds : [public_5c62b4]
        public_5bbc28 : nop
        lea ecx, ss:[ebp-0x1D0]
        jmp public_45eeb0
        public_5bbc33 : nop
        mov eax, offset public_5f5fbc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbc10)
        ASM_EXPORT_ENTRY_FIRST(0x5bbc1c, public_5bbc1c)
        ASM_EXPORT_ENTRY(0x5bbc28, public_5bbc28)
        ASM_EXPORT_ENTRY_LAST(0x5bbc33, public_5bbc33)
    }
}

#undef public_5bbc1c
#undef public_5bbc28
#undef public_5bbc33

#pragma init_seg(compiler)
extern "C" void const* const public_5bbc1c = __AsmFindLabelExport(&internal_5bbc10, 0x5bbc1c);
extern "C" void const* const public_5bbc28 = __AsmFindLabelExport(&internal_5bbc10, 0x5bbc28);
extern "C" void const* const public_5bbc33 = __AsmFindLabelExport(&internal_5bbc10, 0x5bbc33);
