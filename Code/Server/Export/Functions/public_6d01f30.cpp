#include "Server-PCH.h"

PROC_DECLARE(0x6d01f30, internal_6d01f30, public_6d01f30);
extern "C" NAKED register_t __cdecl internal_6d01f30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+0xC]
        push eax
        call dword ptr ds : [public_6d645c4]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6d01f30)
    }
}
