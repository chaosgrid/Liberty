#include "Server-PCH.h"

PROC_DECLARE(0x6d01f50, internal_6d01f50, public_6d01f50);
extern "C" NAKED register_t __cdecl internal_6d01f50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+0xC]
        push eax
        add ecx, 0x230
        call dword ptr ds : [public_6d645c8]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6d01f50)
    }
}
