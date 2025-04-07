#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be99d0);
CLANG_FORWARD_PROC_SYMBOL(public_6bea780);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be99fa _public_6be99fa

PROC_DECLARE(0x6be99d0, internal_6be99d0, public_6be99d0);
extern "C" NAKED register_t __cdecl internal_6be99d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x28
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be99fa
        mov ecx, eax
        call public_6bea780
        test eax, eax
        je public_6be99fa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be99fa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be99d0)
    }
}

#undef public_6be99fa
