#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d07e20);

#define public_6cfad04 _public_6cfad04

PROC_DECLARE(0x6cface0, internal_6cface0, public_6cface0);
extern "C" NAKED register_t __cdecl internal_6cface0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ecx
        or esi, 0xFFFFFFFF
        call public_6d00280
        add esp, 4
        test eax, eax
        je public_6cfad04
        push 0
        mov ecx, eax
        call public_6d07e20
        xor eax, eax
        pop esi
        ret 
        public_6cfad04 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cface0)
    }
}

#undef public_6cfad04
