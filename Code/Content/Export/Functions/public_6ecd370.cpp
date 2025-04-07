#include "Content-PCH.h"

PROC_DECLARE(0x6ecd370, internal_6ecd370, public_6ecd370);
extern "C" NAKED register_t __cdecl internal_6ecd370()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+0xC]
        push eax
        push edx
        call dword ptr ds : [public_6fb3400]
        add esp, 8
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ecd370)
    }
}
