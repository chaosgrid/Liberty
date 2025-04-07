#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4c3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4c430);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4c41a _public_6b4c41a

PROC_DECLARE(0x6b4c3f0, internal_6b4c3f0, public_6b4c3f0);
extern "C" NAKED register_t __cdecl internal_6b4c3f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x24
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4c41a
        mov ecx, eax
        call public_6b4c430
        test eax, eax
        je public_6b4c41a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4c41a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4c3f0)
    }
}

#undef public_6b4c41a
