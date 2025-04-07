#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61be9 _public_6d61be9
#define public_6d61bf4 _public_6d61bf4

PROC_DECLARE(0x6d61be0, internal_6d61be0, public_6d61be0);
/* CHUNK of public_6d122f0 */
extern "C" NAKED register_t __cdecl internal_6d61be0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_6d64b94]
        public_6d61be9 : nop
        mov eax, dword ptr ss : [ebp-0x3C]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d61bf4 : nop
        mov eax, offset public_6d728c0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61be0)
        ASM_EXPORT_ENTRY_FIRST(0x6d61be9, public_6d61be9)
        ASM_EXPORT_ENTRY_LAST(0x6d61bf4, public_6d61bf4)
    }
}

#undef public_6d61be9
#undef public_6d61bf4

#pragma init_seg(compiler)
extern "C" void const* const public_6d61be9 = __AsmFindLabelExport(&internal_6d61be0, 0x6d61be9);
extern "C" void const* const public_6d61bf4 = __AsmFindLabelExport(&internal_6d61be0, 0x6d61bf4);
