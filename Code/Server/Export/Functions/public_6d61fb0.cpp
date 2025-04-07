#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61fbb _public_6d61fbb

PROC_DECLARE(0x6d61fb0, internal_6d61fb0, public_6d61fb0);
/* CHUNK of public_6d19f20 */
extern "C" NAKED register_t __cdecl internal_6d61fb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d61fbb : nop
        mov eax, offset public_6d72cec
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61fb0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61fbb, public_6d61fbb)
    }
}

#undef public_6d61fbb

#pragma init_seg(compiler)
extern "C" void const* const public_6d61fbb = __AsmFindLabelExport(&internal_6d61fb0, 0x6d61fbb);
