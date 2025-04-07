#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6089b _public_6d6089b
#define public_6d608a6 _public_6d608a6

PROC_DECLARE(0x6d60890, internal_6d60890, public_6d60890);
/* CHUNK of public_6cf1780 */
extern "C" NAKED register_t __cdecl internal_6d60890()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d6089b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d608a6 : nop
        mov eax, offset public_6d711dc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60890)
        ASM_EXPORT_ENTRY_FIRST(0x6d6089b, public_6d6089b)
        ASM_EXPORT_ENTRY_LAST(0x6d608a6, public_6d608a6)
    }
}

#undef public_6d6089b
#undef public_6d608a6

#pragma init_seg(compiler)
extern "C" void const* const public_6d6089b = __AsmFindLabelExport(&internal_6d60890, 0x6d6089b);
extern "C" void const* const public_6d608a6 = __AsmFindLabelExport(&internal_6d60890, 0x6d608a6);
