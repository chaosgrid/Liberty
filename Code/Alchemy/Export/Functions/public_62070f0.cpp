#include "Alchemy-PCH.h"

PROC_DECLARE(0x62070f0, internal_62070f0, public_62070f0);
extern "C" NAKED register_t __cdecl internal_62070f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+edx*8+4]
        mov ecx, dword ptr ss : [esp+0xC]
        push eax
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x62070f0)
    }
}
