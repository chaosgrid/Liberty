#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6215120);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6214fb0 _public_6214fb0
#define public_6214fd0 _public_6214fd0

PROC_DECLARE(0x6214fa0, internal_6214fa0, public_6214fa0);
extern "C" NAKED register_t __cdecl internal_6214fa0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x58]
        test eax, eax
        jbe public_6214fb0
        dec eax
        mov dword ptr ds : [esi+0x58], eax
        public_6214fb0 : nop
        mov eax, dword ptr ds : [esi+0x58]
        test eax, eax
        jne public_6214fd0
        mov ecx, esi
        mov dword ptr ds : [esi+0x58], 1
        call public_6215120
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6214fd0 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6214fa0)
    }
}

#undef public_6214fb0
#undef public_6214fd0
