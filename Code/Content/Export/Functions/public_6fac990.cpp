#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac9a1 _public_6fac9a1

PROC_DECLARE(0x6fac990, internal_6fac990, public_6fac990);
/* CHUNK of public_6efe000 */
extern "C" NAKED register_t __cdecl internal_6fac990()
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
        public_6fac9a1 : nop
        mov eax, offset public_6fc161c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac990)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac9a1, public_6fac9a1)
    }
}

#undef public_6fac9a1

#pragma init_seg(compiler)
extern "C" void const* const public_6fac9a1 = __AsmFindLabelExport(&internal_6fac990, 0x6fac9a1);
