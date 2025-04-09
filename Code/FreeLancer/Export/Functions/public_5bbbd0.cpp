#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbbdb _public_5bbbdb
#define public_5bbbe3 _public_5bbbe3

PROC_DECLARE(0x5bbbd0, internal_5bbbd0, public_5bbbd0);
/* CHUNK of public_4747c0 */
extern "C" NAKED register_t __cdecl internal_5bbbd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bbbdb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bbbe3 : nop
        mov eax, offset public_5f5f30
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbbd0)
        ASM_EXPORT_ENTRY_FIRST(0x5bbbdb, public_5bbbdb)
        ASM_EXPORT_ENTRY_LAST(0x5bbbe3, public_5bbbe3)
    }
}

#undef public_5bbbdb
#undef public_5bbbe3

#pragma init_seg(compiler)
extern "C" void const* const public_5bbbdb = __AsmFindLabelExport(&internal_5bbbd0, 0x5bbbdb);
extern "C" void const* const public_5bbbe3 = __AsmFindLabelExport(&internal_5bbbd0, 0x5bbbe3);
