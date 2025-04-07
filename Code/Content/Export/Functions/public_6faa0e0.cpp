#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa0f1 _public_6faa0f1

PROC_DECLARE(0x6faa0e0, internal_6faa0e0, public_6faa0e0);
/* CHUNK of public_6eb3d40 */
extern "C" NAKED register_t __cdecl internal_6faa0e0()
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
        public_6faa0f1 : nop
        mov eax, offset public_6fbe4cc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa0e0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faa0f1, public_6faa0f1)
    }
}

#undef public_6faa0f1

#pragma init_seg(compiler)
extern "C" void const* const public_6faa0f1 = __AsmFindLabelExport(&internal_6faa0e0, 0x6faa0f1);
