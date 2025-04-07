#include "Alchemy-PCH.h"

PROC_DECLARE(0x6212190, internal_6212190, public_6212190);
extern "C" NAKED register_t __cdecl internal_6212190()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0xE4]
        xor eax, eax
        shl ecx, 2
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6212190)
    }
}
