#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62ad1 _public_6d62ad1

PROC_DECLARE(0x6d62ac0, internal_6d62ac0, public_6d62ac0);
/* CHUNK of public_6d26f10 */
extern "C" NAKED register_t __cdecl internal_6d62ac0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d62ad1 : nop
        mov eax, offset public_6d73b6c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62ac0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d62ad1, public_6d62ad1)
    }
}

#undef public_6d62ad1

#pragma init_seg(compiler)
extern "C" void const* const public_6d62ad1 = __AsmFindLabelExport(&internal_6d62ac0, 0x6d62ad1);
