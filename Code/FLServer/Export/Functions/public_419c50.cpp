#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405a30);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419c61 _public_419c61

PROC_DECLARE(0x419c50, internal_419c50, public_419c50);
/* CHUNK of public_405a40 */
extern "C" NAKED register_t __cdecl internal_419c50()
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
        public_419c61 : nop
        mov eax, offset public_41ed1c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419c50)
        ASM_EXPORT_ENTRY_SINGLE(0x419c61, public_419c61)
    }
}

#undef public_419c61

#pragma init_seg(compiler)
extern "C" void const* const public_419c61 = __AsmFindLabelExport(&internal_419c50, 0x419c61);
