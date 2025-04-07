#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea550);
CLANG_FORWARD_PROC_SYMBOL(public_6bebb40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea57a _public_6bea57a

PROC_DECLARE(0x6bea550, internal_6bea550, public_6bea550);
extern "C" NAKED register_t __cdecl internal_6bea550()
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
        je public_6bea57a
        mov ecx, eax
        call public_6bebb40
        test eax, eax
        je public_6bea57a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea57a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea550)
    }
}

#undef public_6bea57a
