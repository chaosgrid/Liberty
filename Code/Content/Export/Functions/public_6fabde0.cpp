#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabdf1 _public_6fabdf1

PROC_DECLARE(0x6fabde0, internal_6fabde0, public_6fabde0);
/* CHUNK of public_6eee7c0 */
extern "C" NAKED register_t __cdecl internal_6fabde0()
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
        public_6fabdf1 : nop
        mov eax, offset public_6fc0a0c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabde0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fabdf1, public_6fabdf1)
    }
}

#undef public_6fabdf1

#pragma init_seg(compiler)
extern "C" void const* const public_6fabdf1 = __AsmFindLabelExport(&internal_6fabde0, 0x6fabdf1);
