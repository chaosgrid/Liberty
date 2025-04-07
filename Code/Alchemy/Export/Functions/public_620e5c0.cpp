#include "Alchemy-PCH.h"

PROC_DECLARE(0x620e5c0, internal_620e5c0, public_620e5c0);
extern "C" NAKED register_t __cdecl internal_620e5c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push edx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x44]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620e5c0)
    }
}
