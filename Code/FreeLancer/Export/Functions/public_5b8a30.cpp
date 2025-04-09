#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8a39 _public_5b8a39
#define public_5b8a42 _public_5b8a42

PROC_DECLARE(0x5b8a30, internal_5b8a30, public_5b8a30);
/* CHUNK of public_41d440 */
extern "C" NAKED register_t __cdecl internal_5b8a30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x54]
        jmp dword ptr ds : [public_5c6098]
        public_5b8a39 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp dword ptr ds : [public_5c6098]
        public_5b8a42 : nop
        mov eax, offset public_5f28e0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8a30)
        ASM_EXPORT_ENTRY_FIRST(0x5b8a39, public_5b8a39)
        ASM_EXPORT_ENTRY_LAST(0x5b8a42, public_5b8a42)
    }
}

#undef public_5b8a39
#undef public_5b8a42

#pragma init_seg(compiler)
extern "C" void const* const public_5b8a39 = __AsmFindLabelExport(&internal_5b8a30, 0x5b8a39);
extern "C" void const* const public_5b8a42 = __AsmFindLabelExport(&internal_5b8a30, 0x5b8a42);
