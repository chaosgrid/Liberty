#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6137e _public_6d6137e
#define public_6d61389 _public_6d61389

PROC_DECLARE(0x6d61370, internal_6d61370, public_6d61370);
/* CHUNK of public_6d09640 */
extern "C" NAKED register_t __cdecl internal_6d61370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0xD8]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d6137e : nop
        lea ecx, ss:[ebp-0xBC]
        jmp public_6d0b7e0
        public_6d61389 : nop
        mov eax, offset public_6d71f84
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61370)
        ASM_EXPORT_ENTRY_FIRST(0x6d6137e, public_6d6137e)
        ASM_EXPORT_ENTRY_LAST(0x6d61389, public_6d61389)
    }
}

#undef public_6d6137e
#undef public_6d61389

#pragma init_seg(compiler)
extern "C" void const* const public_6d6137e = __AsmFindLabelExport(&internal_6d61370, 0x6d6137e);
extern "C" void const* const public_6d61389 = __AsmFindLabelExport(&internal_6d61370, 0x6d61389);
