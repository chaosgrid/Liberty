#include "Alchemy-PCH.h"

PROC_DECLARE(0x6206d30, internal_6206d30, public_6206d30);
extern "C" NAKED register_t __cdecl internal_6206d30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6206d30)
    }
}
