#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac83b _public_6fac83b
#define public_6fac846 _public_6fac846

PROC_DECLARE(0x6fac830, internal_6fac830, public_6fac830);
/* CHUNK of public_6efb8e0 */
extern "C" NAKED register_t __cdecl internal_6fac830()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fac83b : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fac846 : nop
        mov eax, offset public_6fc14e4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac830)
        ASM_EXPORT_ENTRY_FIRST(0x6fac83b, public_6fac83b)
        ASM_EXPORT_ENTRY_LAST(0x6fac846, public_6fac846)
    }
}

#undef public_6fac83b
#undef public_6fac846

#pragma init_seg(compiler)
extern "C" void const* const public_6fac83b = __AsmFindLabelExport(&internal_6fac830, 0x6fac83b);
extern "C" void const* const public_6fac846 = __AsmFindLabelExport(&internal_6fac830, 0x6fac846);
