#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622df30);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_622dcd6 _public_622dcd6
#define public_622dcfc _public_622dcfc

PROC_DECLARE(0x622dcc0, internal_622dcc0, public_622dcc0);
extern "C" NAKED register_t __cdecl internal_622dcc0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x90]
        test eax, eax
        jbe public_622dcd6
        dec eax
        mov dword ptr ds : [esi+0x90], eax
        public_622dcd6 : nop
        mov eax, dword ptr ds : [esi+0x90]
        test eax, eax
        jne public_622dcfc
        mov ecx, esi
        mov dword ptr ds : [esi+0x90], 1
        call public_622df30
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_622dcfc : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x622dcc0)
    }
}

#undef public_622dcd6
#undef public_622dcfc
