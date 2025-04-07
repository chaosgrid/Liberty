#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47610);
CLANG_FORWARD_PROC_SYMBOL(public_6b48390);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4763a _public_6b4763a

PROC_DECLARE(0x6b47610, internal_6b47610, public_6b47610);
extern "C" NAKED register_t __cdecl internal_6b47610()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x34
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4763a
        mov ecx, eax
        call public_6b48390
        test eax, eax
        je public_6b4763a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4763a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47610)
    }
}

#undef public_6b4763a
