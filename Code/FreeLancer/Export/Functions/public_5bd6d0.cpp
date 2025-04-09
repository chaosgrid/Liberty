#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd6d9 _public_5bd6d9
#define public_5bd6e2 _public_5bd6e2

PROC_DECLARE(0x5bd6d0, internal_5bd6d0, public_5bd6d0);
/* CHUNK of public_4c38b0 */
extern "C" NAKED register_t __cdecl internal_5bd6d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_5c7090]
        public_5bd6d9 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_5c7120]
        public_5bd6e2 : nop
        mov eax, offset public_5f7ae4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd6d0)
        ASM_EXPORT_ENTRY_FIRST(0x5bd6d9, public_5bd6d9)
        ASM_EXPORT_ENTRY_LAST(0x5bd6e2, public_5bd6e2)
    }
}

#undef public_5bd6d9
#undef public_5bd6e2

#pragma init_seg(compiler)
extern "C" void const* const public_5bd6d9 = __AsmFindLabelExport(&internal_5bd6d0, 0x5bd6d9);
extern "C" void const* const public_5bd6e2 = __AsmFindLabelExport(&internal_5bd6d0, 0x5bd6e2);
