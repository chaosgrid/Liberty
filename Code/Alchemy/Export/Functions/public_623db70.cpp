#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e4f0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_623db80 _public_623db80
#define public_623dba0 _public_623dba0

PROC_DECLARE(0x623db70, internal_623db70, public_623db70);
extern "C" NAKED register_t __cdecl internal_623db70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x58]
        test eax, eax
        jbe public_623db80
        dec eax
        mov dword ptr ds : [esi+0x58], eax
        public_623db80 : nop
        mov eax, dword ptr ds : [esi+0x58]
        test eax, eax
        jne public_623dba0
        mov ecx, esi
        mov dword ptr ds : [esi+0x58], 1
        call public_623e4f0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_623dba0 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x623db70)
    }
}

#undef public_623db80
#undef public_623dba0
