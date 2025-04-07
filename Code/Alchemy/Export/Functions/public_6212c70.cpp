#include "Alchemy-PCH.h"

PROC_DECLARE(0x6212c70, internal_6212c70, public_6212c70);
extern "C" NAKED register_t __cdecl internal_6212c70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[eax+0xA8]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6212c70)
    }
}
