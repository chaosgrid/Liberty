#include "Server-PCH.h"


#define public_6cfb95e _public_6cfb95e

PROC_DECLARE(0x6cfb940, internal_6cfb940, public_6cfb940);
extern "C" NAKED register_t __cdecl internal_6cfb940()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call dword ptr ds : [public_6d64504]
        add esp, 8
        test eax, eax
        je public_6cfb95e
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        jmp dword ptr ds : [edx+4]
        public_6cfb95e : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6cfb940)
    }
}

#undef public_6cfb95e
