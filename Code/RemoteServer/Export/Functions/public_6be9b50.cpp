#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9b50);
CLANG_FORWARD_PROC_SYMBOL(public_6bea970);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be9b7a _public_6be9b7a

PROC_DECLARE(0x6be9b50, internal_6be9b50, public_6be9b50);
extern "C" NAKED register_t __cdecl internal_6be9b50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x20
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be9b7a
        mov ecx, eax
        call public_6bea970
        test eax, eax
        je public_6be9b7a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be9b7a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be9b50)
    }
}

#undef public_6be9b7a
