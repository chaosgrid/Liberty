#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620cfc0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620af10 _public_620af10
#define public_620af30 _public_620af30

PROC_DECLARE(0x620af00, internal_620af00, public_620af00);
extern "C" NAKED register_t __cdecl internal_620af00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jbe public_620af10
        dec eax
        mov dword ptr ds : [esi+0x1C], eax
        public_620af10 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_620af30
        mov ecx, esi
        mov dword ptr ds : [esi+0x1C], 1
        call public_620cfc0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_620af30 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x620af00)
    }
}

#undef public_620af10
#undef public_620af30
