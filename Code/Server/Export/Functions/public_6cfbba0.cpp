#include "Server-PCH.h"


#define public_6cfbbcf _public_6cfbbcf

PROC_DECLARE(0x6cfbba0, internal_6cfbba0, public_6cfbba0);
extern "C" NAKED register_t __cdecl internal_6cfbba0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6d64500]
        add esp, 4
        test eax, eax
        je public_6cfbbcf
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x4C]
        test al, al
        je public_6cfbbcf
        mov al, 1
        ret 
        public_6cfbbcf : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6cfbba0)
    }
}

#undef public_6cfbbcf
