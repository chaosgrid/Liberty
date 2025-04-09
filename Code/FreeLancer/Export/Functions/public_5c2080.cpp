#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c2089 _public_5c2089
#define public_5c2092 _public_5c2092
#define public_5c209b _public_5c209b

PROC_DECLARE(0x5c2080, internal_5c2080, public_5c2080);
/* CHUNK of public_566bd0 */
extern "C" NAKED register_t __cdecl internal_5c2080()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c62c4]
        public_5c2089 : nop
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c62c4]
        public_5c2092 : nop
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c62c4]
        public_5c209b : nop
        mov eax, offset public_5fc36c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c2080)
        ASM_EXPORT_ENTRY_FIRST(0x5c2089, public_5c2089)
        ASM_EXPORT_ENTRY(0x5c2092, public_5c2092)
        ASM_EXPORT_ENTRY_LAST(0x5c209b, public_5c209b)
    }
}

#undef public_5c2089
#undef public_5c2092
#undef public_5c209b

#pragma init_seg(compiler)
extern "C" void const* const public_5c2089 = __AsmFindLabelExport(&internal_5c2080, 0x5c2089);
extern "C" void const* const public_5c2092 = __AsmFindLabelExport(&internal_5c2080, 0x5c2092);
extern "C" void const* const public_5c209b = __AsmFindLabelExport(&internal_5c2080, 0x5c209b);
