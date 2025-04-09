#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bce5c _public_5bce5c
#define public_5bce68 _public_5bce68

PROC_DECLARE(0x5bce50, internal_5bce50, public_5bce50);
/* CHUNK of public_4a9790 */
extern "C" NAKED register_t __cdecl internal_5bce50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x21C]
        jmp dword ptr ds : [public_5c62c4]
        public_5bce5c : nop
        lea ecx, ss:[ebp-0x254]
        jmp dword ptr ds : [public_5c62d4]
        public_5bce68 : nop
        mov eax, offset public_5f70e4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bce50)
        ASM_EXPORT_ENTRY_FIRST(0x5bce5c, public_5bce5c)
        ASM_EXPORT_ENTRY_LAST(0x5bce68, public_5bce68)
    }
}

#undef public_5bce5c
#undef public_5bce68

#pragma init_seg(compiler)
extern "C" void const* const public_5bce5c = __AsmFindLabelExport(&internal_5bce50, 0x5bce5c);
extern "C" void const* const public_5bce68 = __AsmFindLabelExport(&internal_5bce50, 0x5bce68);
