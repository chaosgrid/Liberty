#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecc2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faafcb _public_6faafcb
#define public_6faafd3 _public_6faafd3

PROC_DECLARE(0x6faafc0, internal_6faafc0, public_6faafc0);
/* CHUNK of public_6ecc080 */
extern "C" NAKED register_t __cdecl internal_6faafc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x20]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6faafcb : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_6ecc2e0
        public_6faafd3 : nop
        mov eax, offset public_6fbf45c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faafc0)
        ASM_EXPORT_ENTRY_FIRST(0x6faafcb, public_6faafcb)
        ASM_EXPORT_ENTRY_LAST(0x6faafd3, public_6faafd3)
    }
}

#undef public_6faafcb
#undef public_6faafd3

#pragma init_seg(compiler)
extern "C" void const* const public_6faafcb = __AsmFindLabelExport(&internal_6faafc0, 0x6faafcb);
extern "C" void const* const public_6faafd3 = __AsmFindLabelExport(&internal_6faafc0, 0x6faafd3);
