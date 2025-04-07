#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e0a0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_622dbc6 _public_622dbc6
#define public_622dbec _public_622dbec

PROC_DECLARE(0x622dbb0, internal_622dbb0, public_622dbb0);
extern "C" NAKED register_t __cdecl internal_622dbb0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x100]
        test eax, eax
        jbe public_622dbc6
        dec eax
        mov dword ptr ds : [esi+0x100], eax
        public_622dbc6 : nop
        mov eax, dword ptr ds : [esi+0x100]
        test eax, eax
        jne public_622dbec
        mov ecx, esi
        mov dword ptr ds : [esi+0x100], 1
        call public_622e0a0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_622dbec : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x622dbb0)
    }
}

#undef public_622dbc6
#undef public_622dbec
