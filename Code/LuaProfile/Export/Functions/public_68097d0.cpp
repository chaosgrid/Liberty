#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_6805df0);
CLANG_FORWARD_PROC_SYMBOL(public_6805f40);

PROC_DECLARE(0x68097d0, internal_68097d0, public_68097d0);
extern "C" NAKED register_t __cdecl internal_68097d0()
{
    __asm
    {
        push esi
        push edi
        push 0
        push 1
        call public_6805df0
        push 2
        mov edi, eax
        call public_6805f40
        mov esi, eax
        push esi
        call public_6802420
        push edi
        call public_6801fe0
        push esi
        call public_6802420
        add esp, 0x18
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68097d0)
    }
}
