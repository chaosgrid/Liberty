#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac541 _public_6fac541
#define public_6fac549 _public_6fac549

PROC_DECLARE(0x6fac530, internal_6fac530, public_6fac530);
/* CHUNK of public_6ef7f40 */
extern "C" NAKED register_t __cdecl internal_6fac530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fac541 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6eec8d0
        public_6fac549 : nop
        mov eax, offset public_6fc11ac
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac530)
        ASM_EXPORT_ENTRY_FIRST(0x6fac541, public_6fac541)
        ASM_EXPORT_ENTRY_LAST(0x6fac549, public_6fac549)
    }
}

#undef public_6fac541
#undef public_6fac549

#pragma init_seg(compiler)
extern "C" void const* const public_6fac541 = __AsmFindLabelExport(&internal_6fac530, 0x6fac541);
extern "C" void const* const public_6fac549 = __AsmFindLabelExport(&internal_6fac530, 0x6fac549);
