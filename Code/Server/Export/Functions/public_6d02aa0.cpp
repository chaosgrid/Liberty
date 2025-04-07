#include "Server-PCH.h"

PROC_DECLARE(0x6d02aa0, internal_6d02aa0, public_6d02aa0);
extern "C" NAKED register_t __cdecl internal_6d02aa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+0xC]
        push eax
        call dword ptr ds : [public_6d64608]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6d02aa0)
    }
}
