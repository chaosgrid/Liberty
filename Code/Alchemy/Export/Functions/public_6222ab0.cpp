#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6222ac0 _public_6222ac0
#define public_6222ae0 _public_6222ae0

PROC_DECLARE(0x6222ab0, internal_6222ab0, public_6222ab0);
extern "C" NAKED register_t __cdecl internal_6222ab0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        jbe public_6222ac0
        dec eax
        mov dword ptr ds : [esi+0x24], eax
        public_6222ac0 : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        jne public_6222ae0
        mov ecx, esi
        mov dword ptr ds : [esi+0x24], 1
        call public_6222cc0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6222ae0 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6222ab0)
    }
}

#undef public_6222ac0
#undef public_6222ae0
