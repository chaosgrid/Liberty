#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac111 _public_6fac111

PROC_DECLARE(0x6fac100, internal_6fac100, public_6fac100);
/* CHUNK of public_6ef3480 */
extern "C" NAKED register_t __cdecl internal_6fac100()
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
        public_6fac111 : nop
        mov eax, offset public_6fc0d54
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac100)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac111, public_6fac111)
    }
}

#undef public_6fac111

#pragma init_seg(compiler)
extern "C" void const* const public_6fac111 = __AsmFindLabelExport(&internal_6fac100, 0x6fac111);
