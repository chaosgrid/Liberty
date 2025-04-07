#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6beb980);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be9dfa _public_6be9dfa

PROC_DECLARE(0x6be9dd0, internal_6be9dd0, public_6be9dd0);
extern "C" NAKED register_t __cdecl internal_6be9dd0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x34
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be9dfa
        mov ecx, eax
        call public_6beb980
        test eax, eax
        je public_6be9dfa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be9dfa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be9dd0)
    }
}

#undef public_6be9dfa
