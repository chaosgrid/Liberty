#include "Alchemy-PCH.h"

PROC_DECLARE(0x6242f20, internal_6242f20, public_6242f20);
extern "C" NAKED register_t __cdecl internal_6242f20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6242f20)
    }
}
