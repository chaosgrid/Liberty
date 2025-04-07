#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac9f8 _public_6fac9f8
#define public_6faca03 _public_6faca03

PROC_DECLARE(0x6fac9f0, internal_6fac9f0, public_6fac9f0);
/* CHUNK of public_6efeb10 */
extern "C" NAKED register_t __cdecl internal_6fac9f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea1650
        public_6fac9f8 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6faca03 : nop
        mov eax, offset public_6fc1684
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac9f0)
        ASM_EXPORT_ENTRY_FIRST(0x6fac9f8, public_6fac9f8)
        ASM_EXPORT_ENTRY_LAST(0x6faca03, public_6faca03)
    }
}

#undef public_6fac9f8
#undef public_6faca03

#pragma init_seg(compiler)
extern "C" void const* const public_6fac9f8 = __AsmFindLabelExport(&internal_6fac9f0, 0x6fac9f8);
extern "C" void const* const public_6faca03 = __AsmFindLabelExport(&internal_6fac9f0, 0x6faca03);
