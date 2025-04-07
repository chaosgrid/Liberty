#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a07b _public_41a07b

PROC_DECLARE(0x41a070, internal_41a070, public_41a070);
/* CHUNK of public_40c6c0 */
extern "C" NAKED register_t __cdecl internal_41a070()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_418978
        pop ecx
        ret 
        public_41a07b : nop
        mov eax, offset public_41f1d4
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a070)
        ASM_EXPORT_ENTRY_SINGLE(0x41a07b, public_41a07b)
    }
}

#undef public_41a07b

#pragma init_seg(compiler)
extern "C" void const* const public_41a07b = __AsmFindLabelExport(&internal_41a070, 0x41a07b);
