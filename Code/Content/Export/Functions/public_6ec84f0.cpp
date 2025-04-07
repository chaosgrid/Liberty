#include "Content-PCH.h"

PROC_DECLARE(0x6ec84f0, internal_6ec84f0, public_6ec84f0);
extern "C" NAKED register_t __cdecl internal_6ec84f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        push eax
        call dword ptr ds : [public_6fb33cc]
        add esp, 4
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ec84f0)
    }
}
