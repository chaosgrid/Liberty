#include "FreeLancer-PCH.h"

PROC_DECLARE(0x57b320, internal_57b320, public_57b320);
extern "C" NAKED register_t __cdecl internal_57b320()
{
    __asm
    {
        xor eax, eax
        mov al, byte ptr ds : [ecx+0x494]
        lea edx, ds:[ecx+0x380]
        push eax
        push edx
        mov edx, dword ptr ds : [ecx+0x358]
        push 0
        push 0
        push 2
        lea eax, ds:[ecx+0x374]
        push eax
        sub edx, 4
        push edx
        lea eax, ds:[ecx+0x488]
        push eax
        add ecx, 0x384
        push ecx
        call dword ptr ds : [public_5c6c38]
        add esp, 0x24
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x57b320)
    }
}
