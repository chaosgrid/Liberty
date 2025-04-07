#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55d610);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c172b _public_5c172b
#define public_5c1733 _public_5c1733
#define public_5c1741 _public_5c1741

PROC_DECLARE(0x5c1720, internal_5c1720, public_5c1720);
/* CHUNK of public_55d3c0 */
extern "C" NAKED register_t __cdecl internal_5c1720()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c172b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_55d610
        public_5c1733 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x378
        jmp public_59ef20
        public_5c1741 : nop
        mov eax, offset public_5fbaf4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1720)
        ASM_EXPORT_ENTRY_FIRST(0x5c172b, public_5c172b)
        ASM_EXPORT_ENTRY(0x5c1733, public_5c1733)
        ASM_EXPORT_ENTRY_LAST(0x5c1741, public_5c1741)
    }
}

#undef public_5c172b
#undef public_5c1733
#undef public_5c1741

#pragma init_seg(compiler)
extern "C" void const* const public_5c172b = __AsmFindLabelExport(&internal_5c1720, 0x5c172b);
extern "C" void const* const public_5c1733 = __AsmFindLabelExport(&internal_5c1720, 0x5c1733);
extern "C" void const* const public_5c1741 = __AsmFindLabelExport(&internal_5c1720, 0x5c1741);
