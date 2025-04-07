#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0501 _public_6fb0501

PROC_DECLARE(0x6fb04f0, internal_6fb04f0, public_6fb04f0);
/* CHUNK of public_6f79c40 */
extern "C" NAKED register_t __cdecl internal_6fb04f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb0501 : nop
        mov eax, offset public_6fc57c4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb04f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb0501, public_6fb0501)
    }
}

#undef public_6fb0501

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0501 = __AsmFindLabelExport(&internal_6fb04f0, 0x6fb0501);
