#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea610);
CLANG_FORWARD_PROC_SYMBOL(public_6beafa0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea63a _public_6bea63a

PROC_DECLARE(0x6bea610, internal_6bea610, public_6bea610);
extern "C" NAKED register_t __cdecl internal_6bea610()
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
        je public_6bea63a
        mov ecx, eax
        call public_6beafa0
        test eax, eax
        je public_6bea63a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea63a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea610)
    }
}

#undef public_6bea63a
