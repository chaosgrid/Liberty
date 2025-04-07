#include "Content-PCH.h"

PROC_DECLARE(0x6f89e30, internal_6f89e30, public_6f89e30);
extern "C" NAKED register_t __cdecl internal_6f89e30()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x58]
        mov edx, dword ptr ds : [ecx+0x20]
        push esi
        push edi
        lea eax, ds:[ecx+0x20]
        sub esp, 0x34
        mov edi, esp
        mov ecx, 0xD
        lea esi, ss:[esp+0x40]
        rep movsd
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        pop edi
        pop esi
        ret 0x34
        UNREACHABLE_TRAP(0x6f89e30)
    }
}
