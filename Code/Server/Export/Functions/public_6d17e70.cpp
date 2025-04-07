#include "Server-PCH.h"

PROC_DECLARE(0x6d17e70, internal_6d17e70, public_6d17e70);
extern "C" NAKED register_t __cdecl internal_6d17e70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call dword ptr ds : [public_6d647b8]
        mov ecx, eax
        call dword ptr ds : [public_6d647b4]
        ret 
        UNREACHABLE_TRAP(0x6d17e70)
    }
}
