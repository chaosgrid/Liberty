#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397cfb _public_6397cfb

PROC_DECLARE(0x6397cf0, internal_6397cf0, public_6397cf0);
/* CHUNK of public_634b900 */
extern "C" NAKED register_t __cdecl internal_6397cf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397cfb : nop
        mov eax, offset public_63b20a0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397cf0)
        ASM_EXPORT_ENTRY_SINGLE(0x6397cfb, public_6397cfb)
    }
}

#undef public_6397cfb

#pragma init_seg(compiler)
extern "C" void const* const public_6397cfb = __AsmFindLabelExport(&internal_6397cf0, 0x6397cfb);
