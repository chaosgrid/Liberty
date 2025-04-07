#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6131e _public_6d6131e
#define public_6d61329 _public_6d61329
#define public_6d61337 _public_6d61337

PROC_DECLARE(0x6d61310, internal_6d61310, public_6d61310);
/* CHUNK of public_6d08a40 */
extern "C" NAKED register_t __cdecl internal_6d61310()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0xB0]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d6131e : nop
        lea ecx, ss:[ebp-0xC0]
        jmp public_6d0b7e0
        public_6d61329 : nop
        mov eax, dword ptr ss : [ebp-0xC8]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d61337 : nop
        mov eax, offset public_6d71f10
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61310)
        ASM_EXPORT_ENTRY_FIRST(0x6d6131e, public_6d6131e)
        ASM_EXPORT_ENTRY(0x6d61329, public_6d61329)
        ASM_EXPORT_ENTRY_LAST(0x6d61337, public_6d61337)
    }
}

#undef public_6d6131e
#undef public_6d61329
#undef public_6d61337

#pragma init_seg(compiler)
extern "C" void const* const public_6d6131e = __AsmFindLabelExport(&internal_6d61310, 0x6d6131e);
extern "C" void const* const public_6d61329 = __AsmFindLabelExport(&internal_6d61310, 0x6d61329);
extern "C" void const* const public_6d61337 = __AsmFindLabelExport(&internal_6d61310, 0x6d61337);
