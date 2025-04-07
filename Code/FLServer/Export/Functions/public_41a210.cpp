#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403af0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a21a _public_41a21a

PROC_DECLARE(0x41a210, internal_41a210, public_41a210);
/* CHUNK of public_40dc10 */
extern "C" NAKED register_t __cdecl internal_41a210()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_403af0
        ret 
        public_41a21a : nop
        mov eax, offset public_41f378
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a210)
        ASM_EXPORT_ENTRY_SINGLE(0x41a21a, public_41a21a)
    }
}

#undef public_41a21a

#pragma init_seg(compiler)
extern "C" void const* const public_41a21a = __AsmFindLabelExport(&internal_41a210, 0x41a21a);
