#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6beacd0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be9ffa _public_6be9ffa

PROC_DECLARE(0x6be9fd0, internal_6be9fd0, public_6be9fd0);
extern "C" NAKED register_t __cdecl internal_6be9fd0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x24
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be9ffa
        mov ecx, eax
        call public_6beacd0
        test eax, eax
        je public_6be9ffa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be9ffa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be9fd0)
    }
}

#undef public_6be9ffa
