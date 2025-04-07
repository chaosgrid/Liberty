#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea490);
CLANG_FORWARD_PROC_SYMBOL(public_6beb600);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea4ba _public_6bea4ba

PROC_DECLARE(0x6bea490, internal_6bea490, public_6bea490);
extern "C" NAKED register_t __cdecl internal_6bea490()
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
        je public_6bea4ba
        mov ecx, eax
        call public_6beb600
        test eax, eax
        je public_6bea4ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea4ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea490)
    }
}

#undef public_6bea4ba
