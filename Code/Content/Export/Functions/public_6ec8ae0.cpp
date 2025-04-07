#include "Content-PCH.h"

PROC_DECLARE(0x6ec8ae0, internal_6ec8ae0, public_6ec8ae0);
extern "C" NAKED register_t __cdecl internal_6ec8ae0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+0xC]
        push eax
        push edx
        call dword ptr ds : [public_6fb33dc]
        add esp, 8
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ec8ae0)
    }
}
