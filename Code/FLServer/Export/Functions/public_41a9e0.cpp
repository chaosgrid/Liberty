#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405a30);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a9f1 _public_41a9f1

PROC_DECLARE(0x41a9e0, internal_41a9e0, public_41a9e0);
/* CHUNK of public_415450 */
extern "C" NAKED register_t __cdecl internal_41a9e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_405a30
        add esp, 8
        ret 
        public_41a9f1 : nop
        mov eax, offset public_41fb0c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a9e0)
        ASM_EXPORT_ENTRY_SINGLE(0x41a9f1, public_41a9f1)
    }
}

#undef public_41a9f1

#pragma init_seg(compiler)
extern "C" void const* const public_41a9f1 = __AsmFindLabelExport(&internal_41a9e0, 0x41a9f1);
