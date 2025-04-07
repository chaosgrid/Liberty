#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea310);
CLANG_FORWARD_PROC_SYMBOL(public_6beb180);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea33d _public_6bea33d

PROC_DECLARE(0x6bea310, internal_6bea310, public_6bea310);
extern "C" NAKED register_t __cdecl internal_6bea310()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x220
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bea33d
        mov ecx, eax
        call public_6beb180
        test eax, eax
        je public_6bea33d
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea33d : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea310)
    }
}

#undef public_6bea33d
