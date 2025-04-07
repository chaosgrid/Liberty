#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62453c0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6245390 _public_6245390
#define public_62453b0 _public_62453b0

PROC_DECLARE(0x6245380, internal_6245380, public_6245380);
extern "C" NAKED register_t __cdecl internal_6245380()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        jbe public_6245390
        dec eax
        mov dword ptr ds : [esi+0x50], eax
        public_6245390 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        jne public_62453b0
        mov ecx, esi
        mov dword ptr ds : [esi+0x50], 1
        call public_62453c0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_62453b0 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6245380)
    }
}

#undef public_6245390
#undef public_62453b0
