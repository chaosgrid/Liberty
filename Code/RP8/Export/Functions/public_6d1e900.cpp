#include "RP8-PCH.h"

PROC_DECLARE(0x6d1e900, internal_6d1e900, public_6d1e900);
extern "C" NAKED register_t __cdecl internal_6d1e900()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax+4]
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d1e900)
    }
}
