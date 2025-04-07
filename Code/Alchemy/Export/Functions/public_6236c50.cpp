#include "Alchemy-PCH.h"

PROC_DECLARE(0x6236c50, internal_6236c50, public_6236c50);
extern "C" NAKED register_t __cdecl internal_6236c50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x80]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [eax+0x80]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6236c50)
    }
}
