#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405a30);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419c41 _public_419c41

PROC_DECLARE(0x419c30, internal_419c30, public_419c30);
/* CHUNK of public_4058c0 */
extern "C" NAKED register_t __cdecl internal_419c30()
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
        public_419c41 : nop
        mov eax, offset public_41ecf8
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419c30)
        ASM_EXPORT_ENTRY_SINGLE(0x419c41, public_419c41)
    }
}

#undef public_419c41

#pragma init_seg(compiler)
extern "C" void const* const public_419c41 = __AsmFindLabelExport(&internal_419c30, 0x419c41);
