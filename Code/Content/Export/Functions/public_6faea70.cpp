#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faea81 _public_6faea81

PROC_DECLARE(0x6faea70, internal_6faea70, public_6faea70);
/* CHUNK of public_6f33230 */
extern "C" NAKED register_t __cdecl internal_6faea70()
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
        public_6faea81 : nop
        mov eax, offset public_6fc3a5c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faea70)
        ASM_EXPORT_ENTRY_SINGLE(0x6faea81, public_6faea81)
    }
}

#undef public_6faea81

#pragma init_seg(compiler)
extern "C" void const* const public_6faea81 = __AsmFindLabelExport(&internal_6faea70, 0x6faea81);
