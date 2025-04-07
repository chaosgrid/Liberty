#include "Server-PCH.h"


#define public_6cfb989 _public_6cfb989

PROC_DECLARE(0x6cfb970, internal_6cfb970, public_6cfb970);
extern "C" NAKED register_t __cdecl internal_6cfb970()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6d64500]
        add esp, 4
        test eax, eax
        je public_6cfb989
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        jmp dword ptr ds : [edx+8]
        public_6cfb989 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6cfb970)
    }
}

#undef public_6cfb989
