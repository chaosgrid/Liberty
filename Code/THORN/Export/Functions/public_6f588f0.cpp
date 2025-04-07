#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f588fb _public_6f588fb

PROC_DECLARE(0x6f588f0, internal_6f588f0, public_6f588f0);
/* CHUNK of public_6f32770 */
extern "C" NAKED register_t __cdecl internal_6f588f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f588fb : nop
        mov eax, offset public_6f5ba94
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f588f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6f588fb, public_6f588fb)
    }
}

#undef public_6f588fb

#pragma init_seg(compiler)
extern "C" void const* const public_6f588fb = __AsmFindLabelExport(&internal_6f588f0, 0x6f588fb);
