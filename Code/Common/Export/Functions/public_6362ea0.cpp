#include "Common-PCH.h"

PROC_DECLARE(0x6362ea0, internal_6362ea0, public_6362ea0);
extern "C" NAKED register_t __cdecl internal_6362ea0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+4]
        add edx, eax
        mov dword ptr ds : [ecx+0x10], edx
        mov ecx, dword ptr ds : [ecx-0x78]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        ret 4
        UNREACHABLE_TRAP(0x6362ea0)
    }
}
