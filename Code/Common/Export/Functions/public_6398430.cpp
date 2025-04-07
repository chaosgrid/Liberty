#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639843b _public_639843b
#define public_6398446 _public_6398446

PROC_DECLARE(0x6398430, internal_6398430, public_6398430);
/* CHUNK of public_63617b0 */
extern "C" NAKED register_t __cdecl internal_6398430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639843b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6398446 : nop
        mov eax, offset public_63b2940
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398430)
        ASM_EXPORT_ENTRY_FIRST(0x639843b, public_639843b)
        ASM_EXPORT_ENTRY_LAST(0x6398446, public_6398446)
    }
}

#undef public_639843b
#undef public_6398446

#pragma init_seg(compiler)
extern "C" void const* const public_639843b = __AsmFindLabelExport(&internal_6398430, 0x639843b);
extern "C" void const* const public_6398446 = __AsmFindLabelExport(&internal_6398430, 0x6398446);
