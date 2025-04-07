#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405a30);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419c81 _public_419c81

PROC_DECLARE(0x419c70, internal_419c70, public_419c70);
/* CHUNK of public_405b90 */
extern "C" NAKED register_t __cdecl internal_419c70()
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
        public_419c81 : nop
        mov eax, offset public_41ed40
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419c70)
        ASM_EXPORT_ENTRY_SINGLE(0x419c81, public_419c81)
    }
}

#undef public_419c81

#pragma init_seg(compiler)
extern "C" void const* const public_419c81 = __AsmFindLabelExport(&internal_419c70, 0x419c81);
