#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428bc0);

#define public_428bdd _public_428bdd

PROC_DECLARE(0x428bc0, internal_428bc0, public_428bc0);
extern "C" NAKED register_t __cdecl internal_428bc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_667cb4]
        test eax, eax
        je public_428bdd
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [public_667cb4]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        mov al, 1
        ret 
        public_428bdd : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x428bc0)
    }
}

#undef public_428bdd
