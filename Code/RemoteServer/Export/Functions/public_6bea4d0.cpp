#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6beb920);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea4fa _public_6bea4fa

PROC_DECLARE(0x6bea4d0, internal_6bea4d0, public_6bea4d0);
extern "C" NAKED register_t __cdecl internal_6bea4d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x2C
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bea4fa
        mov ecx, eax
        call public_6beb920
        test eax, eax
        je public_6bea4fa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea4fa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea4d0)
    }
}

#undef public_6bea4fa
