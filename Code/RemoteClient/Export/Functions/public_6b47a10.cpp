#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47a10);
CLANG_FORWARD_PROC_SYMBOL(public_6b48920);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b47a3a _public_6b47a3a

PROC_DECLARE(0x6b47a10, internal_6b47a10, public_6b47a10);
extern "C" NAKED register_t __cdecl internal_6b47a10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x20
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b47a3a
        mov ecx, eax
        call public_6b48920
        test eax, eax
        je public_6b47a3a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b47a3a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47a10)
    }
}

#undef public_6b47a3a
