#include "Content-PCH.h"

PROC_DECLARE(0x6ec9a70, internal_6ec9a70, public_6ec9a70);
extern "C" NAKED register_t __cdecl internal_6ec9a70()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x64]
        lea eax, ds:[ecx+0x54]
        push eax
        mov eax, dword ptr ds : [ecx+4]
        push edx
        add eax, 0xC
        push eax
        call dword ptr ds : [public_6fb33ec]
        add esp, 0xC
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ec9a70)
    }
}
