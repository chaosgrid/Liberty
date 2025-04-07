#include "Server-PCH.h"

PROC_DECLARE(0x6d02a80, internal_6d02a80, public_6d02a80);
extern "C" NAKED register_t __cdecl internal_6d02a80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+0xC]
        push eax
        call dword ptr ds : [public_6d64604]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6d02a80)
    }
}
