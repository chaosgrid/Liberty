#include "Alchemy-PCH.h"

PROC_DECLARE(0x6243830, internal_6243830, public_6243830);
extern "C" NAKED register_t __cdecl internal_6243830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+ecx*4+0xC]
        mov dword ptr ds : [edx], eax
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6243830)
    }
}
