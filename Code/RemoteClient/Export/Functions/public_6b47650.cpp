#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47650);
CLANG_FORWARD_PROC_SYMBOL(public_6b492a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4767a _public_6b4767a

PROC_DECLARE(0x6b47650, internal_6b47650, public_6b47650);
extern "C" NAKED register_t __cdecl internal_6b47650()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x34
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4767a
        mov ecx, eax
        call public_6b492a0
        test eax, eax
        je public_6b4767a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4767a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47650)
    }
}

#undef public_6b4767a
